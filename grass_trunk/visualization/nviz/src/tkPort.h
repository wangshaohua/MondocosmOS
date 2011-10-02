/* modified path to tkUnixPort.h 8/99 MN */

/*
 * tkPort.h --
 *
 *      This header file handles porting issues that occur because of
 *      differences between systems.  It reads in platform specific
 *      portability files.
 *
 * Copyright (c) 1995 Sun Microsystems, Inc.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * RCS: @(#) $Id: tkPort.h 32526 2008-08-04 21:35:07Z neteler $
 */

#ifndef _TKPORT
#define _TKPORT

#ifndef _TK
#include "tk.h"
#endif
#ifndef _TCL
#include "tcl.h"
#endif

#if defined(__WIN32__) || defined(_WIN32)
#   include "tkWinPort.h"
#else
#   if defined(MAC_TCL)
#	include "tkMacPort.h"
#   else
#	include "tkUnixPort.h"
#   endif
#endif

#endif /* _TKPORT */
