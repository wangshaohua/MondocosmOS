// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_StaticLibrarian_HeaderFile
#define _WOKBuilder_StaticLibrarian_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKBuilder_StaticLibrarian_HeaderFile
#include <Handle_WOKBuilder_StaticLibrarian.hxx>
#endif

#ifndef _WOKBuilder_WNTLibrarian_HeaderFile
#include <WOKBuilder_WNTLibrarian.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class WOKUtils_Param;


//! defines tool to build static library <br>
class WOKBuilder_StaticLibrarian : public WOKBuilder_WNTLibrarian {

public:

  //! create a class instance <br>
  Standard_EXPORT   WOKBuilder_StaticLibrarian(const Handle(TCollection_HAsciiString)& aName,const WOKUtils_Param& aParams);
  //! evaluats tool command line <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString EvalHeader() ;
  //! evaluates additional information for the tool <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString EvalFooter() ;




  DEFINE_STANDARD_RTTI(WOKBuilder_StaticLibrarian)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif