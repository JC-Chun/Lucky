#pragma once
#ifdef LC_PLATFORM_WINDOWS
	#ifdef LC_BUILD_DLL
		#define LUCKY_API __declspec(dllexport)
	#else
		#define LUCKY_API __declspec(dllexport)
	#endif
#else
	#error Lucky only support Windows.
#endif

