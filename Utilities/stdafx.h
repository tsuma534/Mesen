#pragma once

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <windows.h>

#include <string>
#include <stdint.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <atomic>

using std::atomic_flag;
using std::shared_ptr;
using std::ifstream;
using std::string;
using std::wstring;
using std::vector;
using std::atomic;