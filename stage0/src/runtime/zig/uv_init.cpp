/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Single extern "C" entry point to initialize all libuv subsystems. The event
loop thread itself is started from the Zig runtime after this returns.
*/

#include "runtime/uv/event_loop.h"
extern "C" void lean_zig_initialize_libuv_tcp();

extern "C" void lean_zig_initialize_libuv_udp();
extern "C" void lean_zig_initialize_libuv_timer();
extern "C" void lean_zig_initialize_libuv_signal();

extern "C" void lean_zig_uv_initialize() {
#ifndef LEAN_EMSCRIPTEN
    lean_zig_initialize_libuv_timer();
    lean_zig_initialize_libuv_tcp();
    lean_zig_initialize_libuv_udp();
    lean_zig_initialize_libuv_signal();
    lean::initialize_libuv_loop();
#endif
}