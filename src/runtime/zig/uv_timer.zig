// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

pub const force_link = true;

fn noLibuvTimer() noreturn {
    @panic("Please build a version of Lean4 with libuv to invoke this.");
}

pub export fn lean_uv_timer_mk(timeout: u64, repeating: u8) callconv(.c) *anyopaque {
    _ = timeout;
    _ = repeating;
    noLibuvTimer();
}

pub export fn lean_uv_timer_next(timer: *anyopaque) callconv(.c) *anyopaque {
    _ = timer;
    noLibuvTimer();
}

pub export fn lean_uv_timer_reset(timer: *anyopaque) callconv(.c) *anyopaque {
    _ = timer;
    noLibuvTimer();
}

pub export fn lean_uv_timer_stop(timer: *anyopaque) callconv(.c) *anyopaque {
    _ = timer;
    noLibuvTimer();
}

pub export fn lean_uv_timer_cancel(timer: *anyopaque) callconv(.c) *anyopaque {
    _ = timer;
    noLibuvTimer();
}
