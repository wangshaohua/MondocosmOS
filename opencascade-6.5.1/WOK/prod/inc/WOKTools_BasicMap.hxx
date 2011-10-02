// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKTools_BasicMap_HeaderFile
#define _WOKTools_BasicMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class WOKTools_BasicMapIterator;


//! Root  class of  all the maps,  provides utilitites <br>
//! for managing the buckets. <br>
class WOKTools_BasicMap  {
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

  //! Returns the number of buckets in <me>. <br>
        Standard_Integer NbBuckets() const;
  //! Returns the number of keys already stored in <me>. <br>
//! <br>
        Standard_Integer Extent() const;
  //! Returns  True when the map  contains no keys. <br>
//! This is exactly Extent() == 0. <br>
        Standard_Boolean IsEmpty() const;
  //! Prints  on <S> usefull  statistics  about  the map <br>
//! <me>.  It  can be used  to test the quality of the hashcoding. <br>
  Standard_EXPORT     void Statistics(Standard_OStream& S) const;


friend class WOKTools_BasicMapIterator;



protected:

  //! Initialize the map.  Single is  True when the  map <br>
//! uses only one table of buckets. <br>
//! <br>
//! One table  : Map, DataMap <br>
//! Two tables : DoubleMap, IndexedMap, IndexedDataMap <br>
  Standard_EXPORT   WOKTools_BasicMap(const Standard_Integer NbBuckets,const Standard_Boolean single);
  //! Tries to resize  the Map with  NbBuckets.  Returns <br>
//! True if  possible, NewBuckts is  the  new nuber of <br>
//! buckets.   data1 and data2  are the new tables  of <br>
//! buckets where the data must be copied. <br>
  Standard_EXPORT     Standard_Boolean BeginResize(const Standard_Integer NbBuckets,Standard_Integer& NewBuckets,Standard_Address& data1,Standard_Address& data2) const;
  //! If  BeginResize was  succesfull  after copying the <br>
//! data to  data1  and data2 this methods  update the <br>
//! tables and destroys the old ones. <br>
  Standard_EXPORT     void EndResize(const Standard_Integer NbBuckets,const Standard_Integer NewBuckets,const Standard_Address data1,const Standard_Address data2) ;
  //! Returns   True  if resizing   the   map should  be <br>
//! considered. <br>
        Standard_Boolean Resizable() const;
  //! Decrement the  extent of the  map. <br>
        void Increment() ;
  //! Decrement the  extent of the  map. <br>
        void Decrement() ;
  
        Standard_Integer Index(const Standard_Integer ahascode,const Standard_Integer NbBuckets) const;
  //! Destroys the buckets. <br>
  Standard_EXPORT     void Destroy() ;


Standard_Address myData1;
Standard_Address myData2;


private:



Standard_Boolean isDouble;
Standard_Boolean mySaturated;
Standard_Integer myNbBuckets;
Standard_Integer mySize;


};


#include <WOKTools_BasicMap.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif