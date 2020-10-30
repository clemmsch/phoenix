#pragma once


#ifdef PX_PLATFORM_WINDOWS
	#ifdef PX_BUILD_DLL
		#define PHOENIX_API __declspec(dllexport)
	#else
		#define PHOENIX_API __declspec(dllimport)
	#endif
#else
	#error Phoenix only supports Windows!
#endif