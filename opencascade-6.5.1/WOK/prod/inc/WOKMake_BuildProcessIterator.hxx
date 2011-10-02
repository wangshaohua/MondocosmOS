// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKMake_BuildProcessIterator_HeaderFile
#define _WOKMake_BuildProcessIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_WOKMake_BuildProcess_HeaderFile
#include <Handle_WOKMake_BuildProcess.hxx>
#endif
#ifndef _WOKMake_Status_HeaderFile
#include <WOKMake_Status.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _WOKTools_MapOfHAsciiString_HeaderFile
#include <WOKTools_MapOfHAsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_WOKMake_BuildProcessGroup_HeaderFile
#include <Handle_WOKMake_BuildProcessGroup.hxx>
#endif
#ifndef _Handle_WOKMake_Step_HeaderFile
#include <Handle_WOKMake_Step.hxx>
#endif
class WOKMake_BuildProcess;
class WOKMake_BuildProcessGroup;
class WOKMake_Step;



class WOKMake_BuildProcessIterator  {
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

  
  Standard_EXPORT   WOKMake_BuildProcessIterator(const Handle(WOKMake_BuildProcess)& aprocess,const Standard_Boolean alogflag);
  
  Standard_EXPORT    const Handle_WOKMake_BuildProcessGroup& CurGroup() const;
  
  Standard_EXPORT    const Handle_WOKMake_Step& CurStep() const;
  
  Standard_EXPORT     WOKMake_Status MakeStep() ;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     WOKMake_Status Terminate() ;





protected:





private:

  
  Standard_EXPORT     void ReorderCurrentGroup() ;


Handle_WOKMake_BuildProcess myprocess;
WOKMake_Status mystatus;
Standard_Integer mygrpidx;
Standard_Integer mystepidx;
WOKTools_MapOfHAsciiString myprocessed;
Standard_Boolean mylogflag;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif