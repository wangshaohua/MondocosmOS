// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKBuilder_DataMapIteratorOfDataMapOfHAsciiStringOfToolInShell_HeaderFile
#define _WOKBuilder_DataMapIteratorOfDataMapOfHAsciiStringOfToolInShell_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMapIterator_HeaderFile
#include <WOKTools_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_WOKBuilder_ToolInShell_HeaderFile
#include <Handle_WOKBuilder_ToolInShell.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_HAsciiString;
class WOKBuilder_ToolInShell;
class WOKTools_HAsciiStringHasher;
class WOKBuilder_DataMapOfHAsciiStringOfToolInShell;



class WOKBuilder_DataMapIteratorOfDataMapOfHAsciiStringOfToolInShell  : public WOKTools_BasicMapIterator {
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

  
  Standard_EXPORT   WOKBuilder_DataMapIteratorOfDataMapOfHAsciiStringOfToolInShell();
  
  Standard_EXPORT   WOKBuilder_DataMapIteratorOfDataMapOfHAsciiStringOfToolInShell(const WOKBuilder_DataMapOfHAsciiStringOfToolInShell& aMap);
  
  Standard_EXPORT     void Initialize(const WOKBuilder_DataMapOfHAsciiStringOfToolInShell& aMap) ;
  
  Standard_EXPORT    const Handle_TCollection_HAsciiString& Key() const;
  
  Standard_EXPORT    const Handle_WOKBuilder_ToolInShell& Value() const;
  
  Standard_EXPORT     Standard_Integer Hashcode() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif