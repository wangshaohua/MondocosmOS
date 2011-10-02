// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKernel_HAsciiStringHasher_HeaderFile
#define _WOKernel_HAsciiStringHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_HAsciiString;



class WOKernel_HAsciiStringHasher  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Returns a HasCode value  for  the  Key <K>  in the <br>
//! range 0..Upper. <br>
//! Default ::HashCode(K,Upper) <br>
  Standard_EXPORT   static  Standard_Integer HashCode(const Handle(TCollection_HAsciiString)& Key,const Standard_Integer Upper) ;
  //! Returns True  when the two  keys are the same. Two <br>
//! same  keys  must   have  the  same  hashcode,  the <br>
//! contrary is not necessary. <br>
//! Default K1 == K2 <br>
  Standard_EXPORT   static  Standard_Boolean IsEqual(const Handle(TCollection_HAsciiString)& K1,const Handle(TCollection_HAsciiString)& K2) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif