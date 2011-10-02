// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKAPI_SequenceOfFactory_HeaderFile
#define _WOKAPI_SequenceOfFactory_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_WOKAPI_SequenceNodeOfSequenceOfFactory_HeaderFile
#include <Handle_WOKAPI_SequenceNodeOfSequenceOfFactory.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class WOKAPI_Factory;
class WOKAPI_SequenceNodeOfSequenceOfFactory;



class WOKAPI_SequenceOfFactory  : public TCollection_BaseSequence {
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

  
      WOKAPI_SequenceOfFactory();
  
  Standard_EXPORT     void Clear() ;
~WOKAPI_SequenceOfFactory()
{
  Clear();
}
  
  Standard_EXPORT    const WOKAPI_SequenceOfFactory& Assign(const WOKAPI_SequenceOfFactory& Other) ;
   const WOKAPI_SequenceOfFactory& operator =(const WOKAPI_SequenceOfFactory& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const WOKAPI_Factory& T) ;
  
        void Append(WOKAPI_SequenceOfFactory& S) ;
  
  Standard_EXPORT     void Prepend(const WOKAPI_Factory& T) ;
  
        void Prepend(WOKAPI_SequenceOfFactory& S) ;
  
        void InsertBefore(const Standard_Integer Index,const WOKAPI_Factory& T) ;
  
        void InsertBefore(const Standard_Integer Index,WOKAPI_SequenceOfFactory& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const WOKAPI_Factory& T) ;
  
        void InsertAfter(const Standard_Integer Index,WOKAPI_SequenceOfFactory& S) ;
  
  Standard_EXPORT    const WOKAPI_Factory& First() const;
  
  Standard_EXPORT    const WOKAPI_Factory& Last() const;
  
        void Split(const Standard_Integer Index,WOKAPI_SequenceOfFactory& Sub) ;
  
  Standard_EXPORT    const WOKAPI_Factory& Value(const Standard_Integer Index) const;
   const WOKAPI_Factory& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const WOKAPI_Factory& I) ;
  
  Standard_EXPORT     WOKAPI_Factory& ChangeValue(const Standard_Integer Index) ;
    WOKAPI_Factory& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   WOKAPI_SequenceOfFactory(const WOKAPI_SequenceOfFactory& Other);




};

#define SeqItem WOKAPI_Factory
#define SeqItem_hxx <WOKAPI_Factory.hxx>
#define TCollection_SequenceNode WOKAPI_SequenceNodeOfSequenceOfFactory
#define TCollection_SequenceNode_hxx <WOKAPI_SequenceNodeOfSequenceOfFactory.hxx>
#define Handle_TCollection_SequenceNode Handle_WOKAPI_SequenceNodeOfSequenceOfFactory
#define TCollection_SequenceNode_Type_() WOKAPI_SequenceNodeOfSequenceOfFactory_Type_()
#define TCollection_Sequence WOKAPI_SequenceOfFactory
#define TCollection_Sequence_hxx <WOKAPI_SequenceOfFactory.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif