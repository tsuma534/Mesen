// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <Commdlg.h>

#ifdef _DEBUG
	#pragma comment( lib, "DirectXTK.debug.lib" )
#else 
	#pragma comment( lib, "DirectXTK.lib" )
#endif

#ifdef _DEBUG
	#pragma comment( lib, "../Core/Nes_Apu/Nes_Apu.debug.lib" )	
#else 
	#pragma comment( lib, "../Core/Nes_Apu/Nes_Apu.lib" )	
#endif

#pragma comment(lib, "dsound.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "winmm.lib")


// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

#include <mmsystem.h>
#include <stdio.h>

#include <d3d11_1.h>
#include <d3dcompiler.h>
#include <directxmath.h>
#include <directxcolors.h>
#include <dsound.h>
#include <io.h>
#include <Fcntl.h>
#include <thread>

#include <list>
#include <vector>

using std::thread;
using std::list;
using std::vector;

// TODO: reference additional headers your program requires here
