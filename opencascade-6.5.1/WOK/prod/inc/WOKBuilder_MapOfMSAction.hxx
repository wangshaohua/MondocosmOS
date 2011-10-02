// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_MapOfMSAction_HeaderFile
#define _WOKBuilder_MapOfMSAction_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMap_HeaderFile
#include <WOKTools_BasicMap.hxx>
#endif
#ifndef _Handle_WOKBuilder_MSAction_HeaderFile
#include <Handle_WOKBuilder_MSAction.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class WOKBuilder_MSAction;
class WOKBuilder_MSActionID;
class WOKBuilder_MapIteratorOfMapOfMSAction;



class WOKBuilder_MapOfMSAction  : public WOKTools_BasicMap {
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

  
  Standard_EXPORT   WOKBuilder_MapOfMSAction(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     WOKBuilder_MapOfMSAction& Assign(const WOKBuilder_MapOfMSAction& Other) ;
    WOKBuilder_MapOfMSAction& operator =(const WOKBuilder_MapOfMSAction& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~WOKBuilder_MapOfMSAction()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(WOKBuilder_MSAction)& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(WOKBuilder_MSAction)& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(WOKBuilder_MSAction)& aKey) ;





protected:





private:

  
  Standard_EXPORT   WOKBuilder_MapOfMSAction(const WOKBuilder_MapOfMSAction& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif