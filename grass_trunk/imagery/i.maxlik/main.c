
/****************************************************************************
 *
 * MODULE:       i.maxlik
 * AUTHOR(S):    Michael Shapiro (USACERL) & Tao Wen (UIUC)
 *               (original contributors)
 *               Markus Neteler <neteler itc.it>,
 *               Roberto Flor <flor itc.it>, 
 *               Bernhard Reiter <bernhard intevation.de>, 
 *               Brad Douglas <rez touchofmadness.com>, 
 *               Glynn Clements <glynn gclements.plus.com>, 
 *               Jan-Oliver Wagner <jan intevation.de>
 * PURPOSE:      maximum likelihood classification of image groups
 * COPYRIGHT:    (C) 1999-2008 by the GRASS Development Team
 *
 *               This program is free software under the GNU General Public
 *               License (>=v2). Read the file COPYING that comes with GRASS
 *               for details.
 *
 *****************************************************************************/

#include <stdlib.h>
#include <grass/gis.h>
#include <grass/raster.h>
#include <grass/glocale.h>
#include "global.h"
#include "local_proto.h"

char *group;
char *subgroup;
char *sigfile;
struct Ref Ref;
struct Signature S;
DCELL **cell;
int *cellfd;
CELL *class_cell, *reject_cell;
int class_fd, reject_fd;
char *class_name, *reject_name;
double *B;
double *P;
CELL cat;

int main(int argc, char *argv[])
{
    struct Categories cats;
    struct Colors colr;
    struct Ref group_ref;
    int nrows, ncols;
    int row;
    int band;
    int i;
    struct GModule *module;
    struct
    {
	struct Option *group, *subgroup, *sigfile, *class, *reject;
    } parm;

    G_gisinit(argv[0]);

    module = G_define_module();
    G_add_keyword(_("imagery"));
    G_add_keyword(_("classification"));
    G_add_keyword(_("MLC"));
    module->label =
	_("Classifies the cell spectral reflectances in imagery data.");
    module->description =
	_("Classification is based on the spectral signature information "
	  "generated by either i.cluster, i.class, or i.gensig.");

    parm.group = G_define_standard_option(G_OPT_I_GROUP);

    parm.subgroup = G_define_standard_option(G_OPT_I_SUBGROUP);

    parm.sigfile = G_define_option();
    parm.sigfile->key = "sigfile";
    parm.sigfile->required = YES;
    parm.sigfile->type = TYPE_STRING;
    parm.sigfile->key_desc = "name";
    parm.sigfile->label = _("Name of file containing signatures");
    parm.sigfile->description = _("Generated by either i.cluster, i.class, or i.gensig");

    parm.class = G_define_standard_option(G_OPT_R_OUTPUT);
    parm.class->key = "class";
    parm.class->required = YES;
    parm.class->description = _("Name for raster map holding classification results");

    parm.reject = G_define_standard_option(G_OPT_R_OUTPUT);
    parm.reject->key = "reject";
    parm.reject->required = NO;
    parm.reject->description =
	_("Name for raster map holding reject threshold results");
    
    if (G_parser(argc, argv))
	exit(EXIT_FAILURE);


    class_name = parm.class->answer;
    reject_name = parm.reject->answer;
    group = parm.group->answer;
    subgroup = parm.subgroup->answer;
    sigfile = parm.sigfile->answer;

    open_files();

    nrows = Rast_window_rows();
    ncols = Rast_window_cols();

    for (row = 0; row < nrows; row++) {
	G_percent(row, nrows, 2);

	for (band = 0; band < Ref.nfiles; band++)
	    Rast_get_d_row(cellfd[band], cell[band], row);
	
	classify(class_cell, reject_cell, ncols);
	Rast_put_row(class_fd, class_cell, CELL_TYPE);
	if (reject_fd > 0)
	    Rast_put_row(reject_fd, reject_cell, CELL_TYPE);
    }
    G_percent(nrows, nrows, 2);

    Rast_close(class_fd);
    if (reject_fd > 0)
	Rast_close(reject_fd);

    Rast_init_cats("Maximum Likelihood Classification", &cats);
    for (i = 0; i < S.nsigs; i++) {
	if (*S.sig[i].desc) {
	    cat = i + 1;
	    Rast_set_c_cat(&cat, &cat, S.sig[i].desc, &cats);
	}
    }
    Rast_write_cats(class_name, &cats);
    Rast_free_cats(&cats);

    if (reject_fd > 0) {
	char title[100];
	char *label[] = { "no data", "0.1%", "0.5%",
			  "1%", "2%", "5%", "10%",
			  "20%", "30%", "50%", "70%",
			  "80%", "90%", "95%", "98%",
			  "99%", "100%", "bad" };
	sprintf(title, "Rejection Probability for %s", class_name);

	Rast_init_cats(title, &cats);
	Rast_set_cats_title(title, &cats);
	for(i = 0; i < (int) (sizeof(label) / sizeof (char *)); i++) {
	    Rast_set_c_cat(&i, &i, label[i], &cats);
	}
	Rast_write_cats(reject_name, &cats);
	Rast_free_cats(&cats);

	Rast_make_grey_scale_colors(&colr, (CELL) 1, (CELL) 16);

	Rast_set_c_color((CELL) 0, 0, 255, 0, &colr);
	Rast_set_c_color((CELL) 17, 255, 0, 0, &colr);
	Rast_write_colors(reject_name, G_mapset(), &colr);
	Rast_free_colors(&colr);
    }

    /* associate the output files with the group */
    I_get_group_ref(group, &group_ref);
    I_add_file_to_group_ref(class_name, G_mapset(), &group_ref);
    if (reject_cell)
	I_add_file_to_group_ref(reject_name, G_mapset(), &group_ref);

    I_put_group_ref(group, &group_ref);
    make_history(class_name, group, subgroup, sigfile);

    exit(EXIT_SUCCESS);
}
