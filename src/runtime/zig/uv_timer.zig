// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Extern declarations for the libuv timer subsystem implemented in src/runtime/uv/timer.cpp.

pub const force_link = true;

extern fn lean_uv_timer_mk(timeout: u64, repeating: u8) callconv(.c) *anyopaque;
extern fn lean_uv_timer_next(timer: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_timer_reset(timer: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_timer_stop(timer: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_timer_cancel(timer: *anyopaque) callconv(.c) *anyopaque;
