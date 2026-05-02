#pragma once

#ifdef OP_PLATFORM_WINDOWS
	#ifdef OP_BUILD_DLL
		#define OPPAS_API __declspec(dllexport)
	#else
		#define OPPAS_API __declspec(dllimport)
	#endif
#else
	#error Oppas only supports Windows!
#endif