/*
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Sofia Rodrigues, Henrik Böving

Thin C++ shim over the Zig-native event loop. The mutex/condvar/async logic
lives in src/runtime/zig/uv_event_loop.zig; this file only provides the C++
namespace wrappers that the remaining C++ subsystem files (timer/tcp/udp/
signal/dns) call via event_loop_lock(&global_ev) etc.
*/

#include "runtime/uv/event_loop.h"

extern "C" {
    void lean_event_loop_lock(void);
    void lean_event_loop_unlock(void);
    void* lean_event_loop_loop(void);
    void lean_zig_uv_event_loop_init(void);
    void lean_zig_uv_event_loop_run(void);
    void lean_zig_promise_resolve_with_code(int status, void* promise);
}

namespace lean {
#ifndef LEAN_EMSCRIPTEN

event_loop_t global_ev;

void event_loop_init(event_loop_t *) {
    lean_zig_uv_event_loop_init();
    global_ev.loop = (uv_loop_t*)lean_event_loop_loop();
}

void event_loop_lock(event_loop_t *) { lean_event_loop_lock(); }
void event_loop_unlock(event_loop_t *) { lean_event_loop_unlock(); }
void event_loop_run_loop(event_loop_t *) { lean_zig_uv_event_loop_run(); }

void lean_promise_resolve_with_code(int status, obj_arg promise) {
    lean_zig_promise_resolve_with_code(status, promise);
}

void initialize_libuv_loop() {
    lean_zig_uv_event_loop_init();
    global_ev.loop = (uv_loop_t*)lean_event_loop_loop();
}

#endif
}
