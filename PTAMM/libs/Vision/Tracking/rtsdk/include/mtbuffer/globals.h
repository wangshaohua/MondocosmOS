#pragma once
#include "others/misc/dllexp.h"
#include <boost/thread/mutex.hpp>

namespace GLOBALS
{

//////////////////////////////////////////////////////////////////////////
// class DLL_DLL_EXPORT boost::mutex;
//////////////////////////////////////////////////////////////////////////
/// \brief Mutex for standard iostream.
///
/// With this mutex, the standard iostream supports multi-thread.
//////////////////////////////////////////////////////////////////////////
DLL_DLL_EXPORT_OBJ boost::mutex io_mutex; 
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
/// \brief Flag for if the system is running.
///
/// With this flag, we can exit all working threads.
//////////////////////////////////////////////////////////////////////////
DLL_DLL_EXPORT_OBJ bool g_running;
//////////////////////////////////////////////////////////////////////////

}
