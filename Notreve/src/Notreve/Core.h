#pragma once

#ifdef NT_PLATFORM_WINDOWS
	#ifdef NT_BUILD_DLL 
		#define NOTREVE_API __declspec(dllexport)
	#else
		#define NOTREVE_API __declspec(dllimport)
	#endif

#else
#error Notreve only supports windows!

#endif 

