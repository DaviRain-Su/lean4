// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `timer` libuv subsystem exports.
//!
//! The timer object, finalizer, callbacks, and state machine remain in
//! `src/runtime/uv/timer.cpp`; this module only exposes the Lean-visible
//! exports and delegates to thin `extern "C"` helpers.

pub const force_link = true;

extern fn lean_uv_timer_mk_helper(timeout: u64, repeating: u8) callconv(.c) *anyopaque;
extern fn lean_uv_timer_next_helper(timer: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_timer_reset_helper(timer: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_timer_stop_helper(timer: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_timer_cancel_helper(timer: *anyopaque) callconv(.c) *anyopaque;

// Std.Internal.UV.Timer.mk (timeout : UInt64) (repeating : Bool) : IO Timer
pub export fn lean_uv_timer_mk(timeout: u64, repeating: u8) callconv(.c) *anyopaque {
    return lean_uv_timer_mk_helper(timeout, repeating);
}

// Std.Internal.UV.Timer.next (timer : @& Timer) : IO (IO.Promise Unit)
pub export fn lean_uv_timer_next(timer: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_timer_next_helper(timer);
}

// Std.Internal.UV.Timer.reset (timer : @& Timer) : IO Unit
pub export fn lean_uv_timer_reset(timer: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_timer_reset_helper(timer);
}

// Std.Internal.UV.Timer.stop (timer : @& Timer) : IO Unit
pub export fn lean_uv_timer_stop(timer: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_timer_stop_helper(timer);
}

// Std.Internal.UV.Timer.cancel (timer : @& Timer) : IO Unit
pub export fn lean_uv_timer_cancel(timer: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_timer_cancel_helper(timer);
}
