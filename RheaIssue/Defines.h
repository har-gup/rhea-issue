/*
 *  Copyright 2016 Adobe Systems Incorporated. All rights reserved.
 *  This file is licensed to you under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License. You may obtain a copy
 *  of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software distributed under
 *  the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR REPRESENTATIONS
 *  OF ANY KIND, either express or implied. See the License for the specific language
 *  governing permissions and limitations under the License.
 *
 */

#ifndef NATIVE_TORQ_UTILS_DEFINES_H_
#define NATIVE_TORQ_UTILS_DEFINES_H_

// Clear all the flags first.
#define TORQ_OS_WIN 0
#define TORQ_OS_WIN32 0
#define TORQ_OS_WIN10 0

#define TORQ_OS_APPLE 0
#define TORQ_OS_MAC 0
#define TORQ_OS_IOS 0
#define TORQ_OS_IOS_SIMULATOR 0

#define TORQ_OS_ANDROID 0
#define TORQ_OS_POSIX 0

#define TORQ_OBJC 0

// Use TORQ_WINRT to detect if the C++/Cx extension is enabled in WINRT.
#ifdef __cplusplus_winrt
#define TORQ_WINRT 1
#else
#define TORQ_WINRT 0
#endif

#ifndef TORQ_TRACING
#define TORQ_TRACING 1
#endif

#ifdef _WIN32
#undef TORQ_OS_WIN
#define TORQ_OS_WIN 1

#ifdef WINAPI_FAMILY_PARTITION
#undef TORQ_OS_WIN32
#define TORQ_OS_WIN32 1
#else
#undef TORQ_OS_WIN10
#define TORQ_OS_WIN10 1
#endif

#elif __APPLE__
#include "TargetConditionals.h"

#undef TORQ_OS_APPLE
#define TORQ_OS_APPLE 1

#ifdef __OBJC__
#undef TORQ_OBJC
#define TORQ_OBJC 1
#endif

#if TARGET_IPHONE_SIMULATOR
#undef TORQ_OS_IOS
#undef TORQ_OS_IOS_SIMULATOR
#define TORQ_OS_IOS 1
#define TORQ_OS_IOS_SIMULATOR 1
#elif TARGET_OS_IPHONE
#undef TORQ_OS_IOS
#undef TORQ_OS_IOS_SIMULATOR
#define TORQ_OS_IOS 1
#define TORQ_OS_IOS_SIMULATOR 0
#elif TARGET_OS_MAC
#undef TORQ_OS_MAC
#define TORQ_OS_MAC 1
#else
#error "Unknown Apple platform"
#endif

#elif __ANDROID__
#undef TORQ_OS_ANDROID
#define TORQ_OS_ANDROID 1
#else
#error "Unknown compiler"
#endif

#if TORQ_OS_WIN
// Template can generate quite large variable names.
// Silence the warning for now.
#pragma warning(disable : 4503)
#endif

#if TORQ_OS_APPLE || TORQ_OS_ANDROID
#undef TORQ_OS_POSIX
#define TORQ_OS_POSIX 1
#endif

#endif  // NATIVE_TORQ_UTILS_DEFINES_H_
