/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Tiny C++ helper to expose the libuv event-loop runner to the Zig runtime.
The loop itself is managed by the C++ uv subsystem; this file just provides
an extern "C" entry point so Zig can spawn the event-loop thread.
*/

#include "runtime/uv/event_loop.h"

extern "C" void lean_zig_uv_event_loop_run() {
#ifndef LEAN_EMSCRIPTEN
    lean::event_loop_run_loop(&lean::global_ev);
#endif
}
