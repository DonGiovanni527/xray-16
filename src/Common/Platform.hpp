#pragma once

#if defined(__linux__)
#define LINUX
#elif defined(__FreeBSD__)
#define FREEBSD
#elif defined(_WIN32)
#define WINDOWS
#else
#error Unsupported platform
#endif

#if defined(_M_X64) || defined(__amd64__) || defined(__x86_64__)
#define XR_X64
#elif defined (__aarch64__) || defined(_M_ARM64)
#define XR_ARM64
#elif defined(__arm__) || defined(_M_ARM)
#define XR_ARM
#else
#define XR_X86
#endif

#include "Common/Compiler.inl"

#include <ctime>

#if defined(LINUX)
#include "Common/PlatformLinux.inl"
#elif defined(FREEBSD)
#include "Common/PlatformBSD.inl"
#elif defined(WINDOWS)
#include "Common/PlatformWindows.inl"
#endif
