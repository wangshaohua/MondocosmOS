// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKTools_SortOfHAsciiString_HeaderFile
#define _WOKTools_SortOfHAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class WOKTools_Array1OfHAsciiString;
class WOKTools_CompareOfHAsciiString;



class WOKTools_SortOfHAsciiString  {
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

  
  Standard_EXPORT   static  void Sort(WOKTools_Array1OfHAsciiString& TheArray,const WOKTools_CompareOfHAsciiString& Comp) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif