// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_SequenceOfSchema_HeaderFile
#define _MS_SequenceOfSchema_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_MS_Schema_HeaderFile
#include <Handle_MS_Schema.hxx>
#endif
#ifndef _Handle_MS_SequenceNodeOfSequenceOfSchema_HeaderFile
#include <Handle_MS_SequenceNodeOfSequenceOfSchema.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MS_Schema;
class MS_SequenceNodeOfSequenceOfSchema;



class MS_SequenceOfSchema  : public TCollection_BaseSequence {
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

  
      MS_SequenceOfSchema();
  
  Standard_EXPORT     void Clear() ;
~MS_SequenceOfSchema()
{
  Clear();
}
  
  Standard_EXPORT    const MS_SequenceOfSchema& Assign(const MS_SequenceOfSchema& Other) ;
   const MS_SequenceOfSchema& operator =(const MS_SequenceOfSchema& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(MS_Schema)& T) ;
  
        void Append(MS_SequenceOfSchema& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(MS_Schema)& T) ;
  
        void Prepend(MS_SequenceOfSchema& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(MS_Schema)& T) ;
  
        void InsertBefore(const Standard_Integer Index,MS_SequenceOfSchema& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(MS_Schema)& T) ;
  
        void InsertAfter(const Standard_Integer Index,MS_SequenceOfSchema& S) ;
  
  Standard_EXPORT    const Handle_MS_Schema& First() const;
  
  Standard_EXPORT    const Handle_MS_Schema& Last() const;
  
        void Split(const Standard_Integer Index,MS_SequenceOfSchema& Sub) ;
  
  Standard_EXPORT    const Handle_MS_Schema& Value(const Standard_Integer Index) const;
   const Handle_MS_Schema& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(MS_Schema)& I) ;
  
  Standard_EXPORT     Handle_MS_Schema& ChangeValue(const Standard_Integer Index) ;
    Handle_MS_Schema& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   MS_SequenceOfSchema(const MS_SequenceOfSchema& Other);




};

#define SeqItem Handle_MS_Schema
#define SeqItem_hxx <MS_Schema.hxx>
#define TCollection_SequenceNode MS_SequenceNodeOfSequenceOfSchema
#define TCollection_SequenceNode_hxx <MS_SequenceNodeOfSequenceOfSchema.hxx>
#define Handle_TCollection_SequenceNode Handle_MS_SequenceNodeOfSequenceOfSchema
#define TCollection_SequenceNode_Type_() MS_SequenceNodeOfSequenceOfSchema_Type_()
#define TCollection_Sequence MS_SequenceOfSchema
#define TCollection_Sequence_hxx <MS_SequenceOfSchema.hxx>

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