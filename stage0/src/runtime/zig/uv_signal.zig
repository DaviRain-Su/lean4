// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `signal` libuv subsystem exports.
//!
//! The signal object, finalizer, callbacks, and state machine remain in
//! `src/runtime/uv/signal.cpp`; this module only exposes the Lean-visible
//! exports and delegates to thin `extern "C"` helpers.

pub const force_link = true;

extern fn lean_uv_signal_mk_helper(signum: u32, repeating: u8) callconv(.c) *anyopaque;
extern fn lean_uv_signal_next_helper(signal: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_signal_stop_helper(signal: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_signal_cancel_helper(signal: *anyopaque) callconv(.c) *anyopaque;

// Std.Internal.UV.Signal.mk (signum : Int32) (repeating : Bool) : IO Signal
pub fn lean_uv_signal_mk(signum: u32, repeating: u8) callconv(.c) *anyopaque {
    return lean_uv_signal_mk_helper(signum, repeating);
}

// Std.Internal.UV.Signal.next (signal : @& Signal) : IO (IO.Promise Int)
pub fn lean_uv_signal_next(signal: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_signal_next_helper(signal);
}

// Std.Internal.UV.Signal.stop (signal : @& Signal) : IO Unit
pub fn lean_uv_signal_stop(signal: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_signal_stop_helper(signal);
}

// Std.Internal.UV.Signal.cancel (signal : @& Signal) : IO Unit
pub fn lean_uv_signal_cancel(signal: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_signal_cancel_helper(signal);
}

