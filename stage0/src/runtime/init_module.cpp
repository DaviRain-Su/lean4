/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "runtime/alloc.h"
#include "runtime/debug.h"
#include "runtime/thread.h"
#include "runtime/object.h"
#include "runtime/io.h"
#include "runtime/init_module.h"
#ifdef LEAN_NO_WEAK_UV
#include "runtime/mutex.h"
#include "runtime/libuv.h"
#include "runtime/stack_overflow.h"
#include "uv/signal.h"
#include "uv/event_loop.h"
#endif

namespace lean {
extern "C" LEAN_EXPORT void lean_initialize_runtime_module() {
    initialize_alloc();
    initialize_debug();
    initialize_object();
    initialize_io();
    initialize_thread();
#ifdef LEAN_NO_WEAK_UV
    // When the Zig runtime is not linked (stage0 bootstrap), these C++
    // initialization functions must be called explicitly. The Zig runtime
    // handles these via lazy initialization instead.
    initialize_mutex();
    initialize_libuv();
    initialize_libuv_signal();
    initialize_libuv_loop();
    initialize_stack_overflow();
#endif
}
void initialize_runtime_module() {
    lean_initialize_runtime_module();
}
void finalize_runtime_module() {
#ifdef LEAN_NO_WEAK_UV
    finalize_stack_overflow();
    finalize_mutex();
#endif
    finalize_thread();
    finalize_io();
    finalize_object();
    finalize_debug();
    finalize_alloc();
}
}
