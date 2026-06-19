// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig-native event loop for the libuv subsystem.
//!
//! Owns the global uv_loop_t, recursive mutex, condition variable, and async
//! wakeup handle. Provides extern-C exports consumed by both the Zig runtime
//! and the remaining C++ subsystem shims (timer/tcp/udp/signal/dns).
//!
//! Thread-safety model (same as the original C++ event_loop.cpp):
//! - The loop thread runs `lean_zig_uv_event_loop_run` which repeatedly locks
//!   the mutex, waits while requesters are queued, runs one `uv_run(ONCE)`,
//!   then releases the mutex.
//! - Requesters call `lean_event_loop_lock` which tries the mutex; if it is
//!   held by the loop thread, the requester bumps `n_waiters`, sends an async
//!   to wake the loop, then blocks on the mutex.
//! - `lean_event_loop_unlock` signals the condition variable so the loop thread
//!   can resume after requesters finish.

const std = @import("std");
const builtin = @import("builtin");
const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_result = @import("io_result.zig");
const object = @import("object.zig");

const uv = @cImport({
    @cInclude("uv.h");
});

pub const force_link = true;

// ── Global event loop state ──────────────────────────────────────────────────

var g_loop: ?*uv.uv_loop_t = null;
var g_mutex: uv.uv_mutex_t = undefined;
var g_cond: uv.uv_cond_t = undefined;
var g_async: uv.uv_async_t = undefined;
var g_n_waiters: c_int = 0;
var g_initialized: bool = false;

extern fn lean_io_promise_resolve(value: *anyopaque, promise: *anyopaque) callconv(.c) *anyopaque;

// ── Initialization ───────────────────────────────────────────────────────────

fn eventLoopInit() void {
    g_loop = uv.uv_default_loop();
    if (uv.uv_mutex_init_recursive(&g_mutex) != 0)
        @panic("failed to initialize event loop mutex");
    if (uv.uv_cond_init(&g_cond) != 0)
        @panic("failed to initialize event loop condition variable");
    // Async with NULL callback — used purely as a wakeup primitive; uv_async_send
    // causes uv_run to return even without a callback.
    if (uv.uv_async_init(g_loop, &g_async, null) != 0)
        @panic("failed to initialize event loop async handle");
    g_n_waiters = 0;
    g_initialized = true;
}

/// Called by init.zig after the C++ subsystem initializers (timer/tcp/udp/signal)
/// have registered their external classes.
pub export fn lean_zig_uv_event_loop_init() void {
    if (!g_initialized) eventLoopInit();
}

extern fn lean_zig_initialize_libuv_timer() callconv(.c) void;
extern fn lean_zig_initialize_libuv_tcp() callconv(.c) void;
extern fn lean_zig_initialize_libuv_udp() callconv(.c) void;
extern fn lean_zig_initialize_libuv_signal() callconv(.c) void;

/// Initialize all UV subsystems and the event loop. Called from init.zig.
pub export fn lean_zig_uv_initialize() void {
    lean_zig_initialize_libuv_timer();
    lean_zig_initialize_libuv_tcp();
    lean_zig_initialize_libuv_udp();
    lean_zig_initialize_libuv_signal();
    lean_zig_uv_event_loop_init();
}

// ── Lock / Unlock (extern C, called from both Zig and C++ subsystems) ─────────

pub export fn lean_event_loop_lock() void {
    if (uv.uv_mutex_trylock(&g_mutex) != 0) {
        g_n_waiters += 1;
        _ = uv.uv_async_send(&g_async);
        _ = uv.uv_mutex_lock(&g_mutex);
        g_n_waiters -= 1;
    }
}

pub export fn lean_event_loop_unlock() void {
    if (g_n_waiters == 0) {
        uv.uv_cond_signal(&g_cond);
    }
    uv.uv_mutex_unlock(&g_mutex);
}

// ── Queries ──────────────────────────────────────────────────────────────────

pub export fn lean_event_loop_is_alive() c_int {
    lean_event_loop_lock();
    defer lean_event_loop_unlock();
    return uv.uv_loop_alive(g_loop);
}

pub export fn lean_event_loop_loop() ?*anyopaque {
    return @ptrCast(g_loop);
}

// ── Loop configuration helpers ───────────────────────────────────────────────

pub export fn lean_uv_loop_configure_idle_helper(loop: ?*anyopaque) c_int {
    return uv.uv_loop_configure(@ptrCast(@alignCast(loop)), uv.UV_METRICS_IDLE_TIME);
}

pub export fn lean_uv_loop_configure_block_signal_helper(loop: ?*anyopaque) c_int {
    if (builtin.os.tag == .windows) return 0;
    return uv.uv_loop_configure(@ptrCast(@alignCast(loop)), uv.UV_LOOP_BLOCK_SIGNAL, uv.SIGPROF);
}

// ── Loop runner (runs on a dedicated thread spawned by init.zig) ─────────────

pub export fn lean_zig_uv_event_loop_run() void {
    while (uv.uv_loop_alive(g_loop) != 0) {
        _ = uv.uv_mutex_lock(&g_mutex);
        while (g_n_waiters != 0) {
            uv.uv_cond_wait(&g_cond, &g_mutex);
        }
        _ = uv.uv_run(g_loop, uv.UV_RUN_ONCE);
        uv.uv_mutex_unlock(&g_mutex);
    }
}

// ── Promise resolution with UV error code ────────────────────────────────────
//
// Called by C++ subsystem callbacks (timer, tcp, udp, signal, dns) to resolve
// a Lean promise with either ok or a decoded UV error.

pub export fn lean_zig_promise_resolve_with_code(status: c_int, promise: ?*anyopaque) void {
    const res: *anyopaque = if (status == 0)
        io_result.lean_io_result_mk_ok(object.lean_box(0))
    else
        io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(status, null));
    _ = lean_io_promise_resolve(res, promise.?);
}

// ── Lean-visible exports ─────────────────────────────────────────────────────

// Std.Internal.UV.Loop.configure (options : Loop.Options) : BaseIO Unit
pub fn lean_uv_event_loop_configure(options: *anyopaque) callconv(.c) *anyopaque {
    const accum = ctor.lean_ctor_get_uint8(options, 0) != 0;
    const block = ctor.lean_ctor_get_uint8(options, 1) != 0;

    lean_event_loop_lock();
    defer lean_event_loop_unlock();

    const loop = lean_event_loop_loop();

    if (accum) {
        const result = lean_uv_loop_configure_idle_helper(loop);
        if (result != 0) {
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
        }
    }

    if (block) {
        const result = lean_uv_loop_configure_block_signal_helper(loop);
        if (result != 0) {
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
        }
    }

    return object.lean_box(0).?;
}

// Std.Internal.UV.Loop.alive : BaseIO Bool
pub fn lean_uv_event_loop_alive() callconv(.c) u8 {
    return if (lean_event_loop_is_alive() != 0) 1 else 0;
}
