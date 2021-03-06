// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_NatType_HeaderFile
#define _MS_NatType_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_NatType_HeaderFile
#include <Handle_MS_NatType.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MS_Type_HeaderFile
#include <MS_Type.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;



class MS_NatType : public MS_Type {

public:

  
  Standard_EXPORT     void Private(const Standard_Boolean aPrivate) ;
  
  Standard_EXPORT     Standard_Boolean Private() const;




  DEFINE_STANDARD_RTTI(MS_NatType)

protected:

  
  Standard_EXPORT   MS_NatType(const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aPackage,const Handle(TCollection_HAsciiString)& aContainer,const Standard_Boolean aPrivate);



private: 


Standard_Boolean myPrivate;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
