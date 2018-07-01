#pragma once

#ifdef _WIN32

#include <Windows.h>
extern "C"
{
	_declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
}

#endif
