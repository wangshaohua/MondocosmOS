// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKernel_DataMapOfHAsciiStringOfFactory_HeaderFile
#define _WOKernel_DataMapOfHAsciiStringOfFactory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMap_HeaderFile
#include <WOKTools_BasicMap.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKernel_Factory_HeaderFile
#include <Handle_WOKernel_Factory.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_HAsciiString;
class WOKernel_Factory;
class WOKTools_HAsciiStringHasher;
class WOKernel_DataMapIteratorOfDataMapOfHAsciiStringOfFactory;



class WOKernel_DataMapOfHAsciiStringOfFactory  : public WOKTools_BasicMap {
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

  
  Standard_EXPORT   WOKernel_DataMapOfHAsciiStringOfFactory(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     WOKernel_DataMapOfHAsciiStringOfFactory& Assign(const WOKernel_DataMapOfHAsciiStringOfFactory& Other) ;
    WOKernel_DataMapOfHAsciiStringOfFactory& operator =(const WOKernel_DataMapOfHAsciiStringOfFactory& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~WOKernel_DataMapOfHAsciiStringOfFactory()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Handle(TCollection_HAsciiString)& K,const Handle(WOKernel_Factory)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Handle(TCollection_HAsciiString)& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Handle(TCollection_HAsciiString)& K) ;
  
  Standard_EXPORT    const Handle_WOKernel_Factory& Find(const Handle(TCollection_HAsciiString)& K) const;
   const Handle_WOKernel_Factory& operator()(const Handle(TCollection_HAsciiString)& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_WOKernel_Factory& ChangeFind(const Handle(TCollection_HAsciiString)& K) ;
    Handle_WOKernel_Factory& operator()(const Handle(TCollection_HAsciiString)& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   WOKernel_DataMapOfHAsciiStringOfFactory(const WOKernel_DataMapOfHAsciiStringOfFactory& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif