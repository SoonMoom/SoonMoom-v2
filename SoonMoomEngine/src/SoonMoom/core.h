#pragma once

#ifdef SM_PLATFORM_WINDOWS
    #ifdef SM_BUILD_DLL
      #define  SoonMoom_API __declspec(dllexport)
    #else
      #define  SoonMoom_API __declspec(dllimport)
    #endif // SM_BUILD_DLL
#else
    #error SoonMoom only support Windows!
#endif // 
