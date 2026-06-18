// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `event_loop` libuv subsystem exports.
//!
//! The core event loop state and synchronization helpers remain in
//! `src/runtime/uv/event_loop.cpp`; this module only implements the Lean-visible
//! `lean_uv_event_loop_*` exports, delegating locking and the libuv calls to the
//! C++ side via thin `extern "C"` wrappers.

const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_result = @import("io_result.zig");
const object = @import("object.zig");

pub const force_link = true;

extern fn lean_event_loop_lock() callconv(.c) void;
extern fn lean_event_loop_unlock() callconv(.c) void;
extern fn lean_event_loop_is_alive() callconv(.c) i32;
extern fn lean_event_loop_loop() callconv(.c) *anyopaque;
extern fn lean_uv_loop_configure_idle(loop: *anyopaque) callconv(.c) i32;
extern fn lean_uv_loop_configure_block_signal(loop: *anyopaque) callconv(.c) i32;

// Std.Internal.UV.Loop.configure (options : Loop.Options) : BaseIO Unit
pub export fn lean_uv_event_loop_configure(options: *anyopaque) callconv(.c) *anyopaque {
    const accum = ctor.lean_ctor_get_uint8(options, 0) != 0;
    const block = ctor.lean_ctor_get_uint8(options, 1) != 0;

    lean_event_loop_lock();
    defer lean_event_loop_unlock();

    const loop = lean_event_loop_loop();

    if (accum) {
        const result = lean_uv_loop_configure_idle(loop);
        if (result != 0) {
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
        }
    }

    if (block) {
        const result = lean_uv_loop_configure_block_signal(loop);
        if (result != 0) {
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
        }
    }

    return object.lean_box(0).?;
}

// Std.Internal.UV.Loop.alive : BaseIO Bool
pub export fn lean_uv_event_loop_alive() callconv(.c) u8 {
    return if (lean_event_loop_is_alive() != 0) 1 else 0;
}
