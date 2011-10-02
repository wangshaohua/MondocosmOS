// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKOBJS_LibSchema_HeaderFile
#define _WOKOBJS_LibSchema_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKOBJS_LibSchema_HeaderFile
#include <Handle_WOKOBJS_LibSchema.hxx>
#endif

#ifndef _WOKBuilder_Entity_HeaderFile
#include <WOKBuilder_Entity.hxx>
#endif
#ifndef _Handle_WOKUtils_Path_HeaderFile
#include <Handle_WOKUtils_Path.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class WOKUtils_Path;
class TCollection_HAsciiString;
class WOKUtils_Param;



class WOKOBJS_LibSchema : public WOKBuilder_Entity {

public:

  
  Standard_EXPORT   WOKOBJS_LibSchema(const Handle(WOKUtils_Path)& apth);
  
  Standard_EXPORT   static  Handle_TCollection_HAsciiString GetLibFileName(const WOKUtils_Param& params,const Handle(TCollection_HAsciiString)& aname) ;




  DEFINE_STANDARD_RTTI(WOKOBJS_LibSchema)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif