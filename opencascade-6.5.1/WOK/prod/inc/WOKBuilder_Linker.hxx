// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_Linker_HeaderFile
#define _WOKBuilder_Linker_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKBuilder_Linker_HeaderFile
#include <Handle_WOKBuilder_Linker.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKBuilder_HSequenceOfObjectFile_HeaderFile
#include <Handle_WOKBuilder_HSequenceOfObjectFile.hxx>
#endif
#ifndef _Handle_WOKUtils_HSequenceOfPath_HeaderFile
#include <Handle_WOKUtils_HSequenceOfPath.hxx>
#endif
#ifndef _Handle_WOKBuilder_HSequenceOfLibrary_HeaderFile
#include <Handle_WOKBuilder_HSequenceOfLibrary.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _WOKBuilder_ToolInShell_HeaderFile
#include <WOKBuilder_ToolInShell.hxx>
#endif
#ifndef _Handle_WOKBuilder_Library_HeaderFile
#include <Handle_WOKBuilder_Library.hxx>
#endif
#ifndef _Handle_WOKBuilder_HSequenceOfEntity_HeaderFile
#include <Handle_WOKBuilder_HSequenceOfEntity.hxx>
#endif
#ifndef _WOKBuilder_BuildStatus_HeaderFile
#include <WOKBuilder_BuildStatus.hxx>
#endif
class TCollection_HAsciiString;
class WOKBuilder_HSequenceOfObjectFile;
class WOKUtils_HSequenceOfPath;
class WOKBuilder_HSequenceOfLibrary;
class TColStd_HSequenceOfHAsciiString;
class Standard_ProgramError;
class WOKUtils_Param;
class WOKBuilder_Library;
class WOKBuilder_HSequenceOfEntity;



class WOKBuilder_Linker : public WOKBuilder_ToolInShell {

public:

  
  Standard_EXPORT   virtual  void Load() ;
  
  Standard_EXPORT     Handle_WOKBuilder_HSequenceOfObjectFile ObjectList() const;
  
  Standard_EXPORT     void SetObjectList(const Handle(WOKBuilder_HSequenceOfObjectFile)& objects) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString TargetName() const;
  
  Standard_EXPORT     void SetTargetName(const Handle(TCollection_HAsciiString)& aname) ;
  
  Standard_EXPORT     void SetLibrarySearchPathes(const Handle(WOKUtils_HSequenceOfPath)& libpathes) ;
  
  Standard_EXPORT     Handle_WOKUtils_HSequenceOfPath LibrarySearchPathes() const;
  
  Standard_EXPORT     void SetDatabaseDirectories(const Handle(WOKUtils_HSequenceOfPath)& libpathes) ;
  
  Standard_EXPORT     Handle_WOKUtils_HSequenceOfPath DatabaseDirectories() const;
  
  Standard_EXPORT     Handle_WOKBuilder_HSequenceOfLibrary LibraryList() const;
  
  Standard_EXPORT     void SetLibraryList(const Handle(WOKBuilder_HSequenceOfLibrary)& asharedlist) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString Externals() const;
  
  Standard_EXPORT     void SetExternals(const Handle(TColStd_HSequenceOfHAsciiString)& externals) ;
  
  Standard_EXPORT     WOKBuilder_BuildStatus Execute() ;




  DEFINE_STANDARD_RTTI(WOKBuilder_Linker)

protected:

  
  Standard_EXPORT   WOKBuilder_Linker(const Handle(TCollection_HAsciiString)& aname,const WOKUtils_Param& params);
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString LibraryRefLine(const Handle(WOKBuilder_Library)& alib) ;
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString EvalHeader() ;
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString EvalLibSearchDirectives() ;
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString EvalDatabaseDirectives() ;
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString EvalObjectList() ;
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString EvalLibraryList() ;
  
  Standard_EXPORT   virtual  Handle_TCollection_HAsciiString EvalFooter() ;
  
  Standard_EXPORT   virtual  Handle_WOKBuilder_HSequenceOfEntity GetLinkerProduction() ;



private: 


Handle_TCollection_HAsciiString myname;
Handle_WOKBuilder_HSequenceOfObjectFile myobjects;
Handle_WOKUtils_HSequenceOfPath mylibpathes;
Handle_WOKUtils_HSequenceOfPath mydbdirs;
Handle_WOKBuilder_HSequenceOfLibrary mylibs;
Handle_TColStd_HSequenceOfHAsciiString myexterns;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif