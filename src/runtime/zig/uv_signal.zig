// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig-native libuv signal subsystem (ported from src/runtime/uv/signal.cpp).

const std = @import("std");
const builtin = @import("builtin");
const uv_event_loop = @import("uv_event_loop.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const io_result = @import("io_result.zig");
const io_errno = @import("io_errno.zig");
const lean = @import("lean_object.zig");

const uv = @cImport({
    @cInclude("uv.h");
});

pub const force_link = true;

const SignalState = enum(c_int) {
    initial = 0,
    running = 1,
    finished = 2,
};

const LeanUvSignalObject = struct {
    m_uv_signal: *uv.uv_signal_t,
    m_promise: ?*anyopaque,
    m_signum: c_int,
    m_repeating: bool,
    m_state: SignalState,
};

var g_uv_signal_external_class: ?*lean.lean_external_class = null;
var g_signal_class_initialized = false;

extern fn lean_io_promise_new() callconv(.c) *anyopaque;
extern fn lean_io_promise_resolve(value: *anyopaque, promise: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_io_get_task_state_core(t: *anyopaque) callconv(.c) u8;
extern fn lean_apply_1(f: *anyopaque, a: *anyopaque) callconv(.c) ?*anyopaque;

fn lean_event_loop_lock() void {
    uv_event_loop.lean_event_loop_lock();
}

fn lean_event_loop_unlock() void {
    uv_event_loop.lean_event_loop_unlock();
}

fn lean_event_loop_loop() ?*anyopaque {
    return uv_event_loop.lean_event_loop_loop();
}

fn toSignalObject(ptr: *anyopaque) *LeanUvSignalObject {
    return @ptrCast(@alignCast(object.lean_get_external_data(ptr).?));
}

fn signalPromiseIsFinished(signal: *LeanUvSignalObject) bool {
    const promise = signal.m_promise orelse return true;
    const prom: *lean.lean_promise_object = @ptrCast(@alignCast(promise));
    const task = prom.m_result orelse return false;
    return lean_io_get_task_state_core(@ptrCast(task)) == 2;
}

fn uvCloseFreeCallback(handle: ?*uv.uv_handle_t) callconv(.c) void {
    std.c.free(@ptrCast(handle));
}

fn leanUvSignalFinalizer(ptr: *anyopaque) callconv(.c) void {
    const signal: *LeanUvSignalObject = @ptrCast(@alignCast(ptr));
    if (signal.m_promise) |promise| {
        rc.lean_dec(promise);
    }
    lean_event_loop_lock();
    _ = uv.uv_close(@ptrCast(signal.m_uv_signal), uvCloseFreeCallback);
    lean_event_loop_unlock();
    std.c.free(signal);
}

fn signalForeach(ptr: *anyopaque, f: ?*anyopaque) callconv(.c) void {
    const signal: *LeanUvSignalObject = @ptrCast(@alignCast(ptr));
    if (signal.m_promise) |promise| {
        if (f) |fun| {
            rc.lean_inc(fun);
            if (lean_apply_1(fun, promise)) |res| {
                rc.lean_dec(res);
            }
        }
    }
}

fn ensureSignalExternalClass() void {
    if (g_signal_class_initialized) return;
    g_uv_signal_external_class = object.lean_register_external_class(leanUvSignalFinalizer, signalForeach);
    g_signal_class_initialized = true;
}

pub export fn lean_zig_initialize_libuv_signal() callconv(.c) void {
    ensureSignalExternalClass();
}

fn leanUvSignalNew(signal: *LeanUvSignalObject) *anyopaque {
    return object.lean_alloc_external(g_uv_signal_external_class.?, signal);
}

/// Maps Lean `Std.Internal.IO.Async.Signal` indices to OS signal numbers (see signal.cpp).
fn mapLeanSignum(signum_obj: u32) c_int {
    const lean_idx: i32 = @bitCast(signum_obj);
    var signum: c_int = lean_idx;
    const sig = struct {
        fn c(s: std.posix.SIG) c_int {
            return @intCast(@intFromEnum(s));
        }
    }.c;
    switch (lean_idx) {
        1 => signum = sig(.HUP),
        2 => signum = sig(.INT),
        3 => signum = sig(.QUIT),
        6 => signum = sig(.ABRT),
        15 => signum = sig(.TERM),
        28 => signum = sig(.WINCH),
        else => {
            if (builtin.os.tag != .windows) {
                switch (lean_idx) {
                    5 => signum = sig(.TRAP),
                    10 => signum = sig(.USR1),
                    12 => signum = sig(.USR2),
                    14 => signum = sig(.ALRM),
                    17 => signum = sig(.CHLD),
                    18 => signum = sig(.CONT),
                    20 => signum = sig(.TSTP),
                    21 => signum = sig(.TTIN),
                    22 => signum = sig(.TTOU),
                    23 => signum = sig(.URG),
                    24 => signum = sig(.XCPU),
                    25 => signum = sig(.XFSZ),
                    26 => signum = sig(.VTALRM),
                    27 => signum = sig(.PROF),
                    29 => signum = sig(.IO),
                    31 => signum = sig(.SYS),
                    else => signum = 0,
                }
            } else {
                signum = 0;
            }
        },
    }
    return signum;
}

fn handleSignalEvent(handle: ?*uv.uv_signal_t, signum: c_int) callconv(.c) void {
    const h = handle.?;
    const obj: *anyopaque = @ptrCast(@alignCast(h.data));
    const signal = toSignalObject(obj);

    std.debug.assert(signal.m_state == .running);

    const boxed = object.lean_box(@as(usize, @intCast(signum))).?;

    if (signal.m_repeating) {
        if (signal.m_promise) |_| {
            if (!signalPromiseIsFinished(signal)) {
                const res = lean_io_promise_resolve(boxed, signal.m_promise.?);
                rc.lean_dec(res);
            }
        }
    } else {
        if (signal.m_promise) |promise| {
            const res = lean_io_promise_resolve(boxed, promise);
            rc.lean_dec(res);
        }

        _ = uv.uv_signal_stop(signal.m_uv_signal);
        signal.m_state = .finished;
        rc.lean_dec(obj);
    }
}

fn leanUvSignalMkHelper(signum_obj: u32, repeating: u8) *anyopaque {
    ensureSignalExternalClass();

    const signum = mapLeanSignum(signum_obj);

    const signal: *LeanUvSignalObject = @ptrCast(@alignCast(std.c.malloc(@sizeOf(LeanUvSignalObject)) orelse {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    signal.* = .{
        .m_uv_signal = undefined,
        .m_promise = null,
        .m_signum = signum,
        .m_repeating = repeating != 0,
        .m_state = .initial,
    };

    const uv_signal: *uv.uv_signal_t = @ptrCast(@alignCast(std.c.malloc(@sizeOf(uv.uv_signal_t)) orelse {
        std.c.free(signal);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    lean_event_loop_lock();
    const loop: *uv.uv_loop_t = @ptrCast(@alignCast(lean_event_loop_loop().?));
    const init_result = uv.uv_signal_init(loop, uv_signal);
    lean_event_loop_unlock();

    if (init_result != 0) {
        std.c.free(uv_signal);
        std.c.free(signal);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(init_result, null));
    }

    signal.m_uv_signal = uv_signal;

    const obj = leanUvSignalNew(signal);
    rc.lean_mark_mt(obj);
    uv_signal.data = obj;

    return io_result.lean_io_result_mk_ok(obj);
}

fn setupSignal(obj: *anyopaque, signal: *LeanUvSignalObject) *anyopaque {
    std.debug.assert(signal.m_promise == null);

    const promise = lean_io_promise_new();
    signal.m_promise = promise;
    signal.m_state = .running;

    rc.lean_inc(obj);
    rc.lean_inc(promise);

    const start_result = if (signal.m_repeating)
        uv.uv_signal_start(signal.m_uv_signal, handleSignalEvent, signal.m_signum)
    else
        uv.uv_signal_start_oneshot(signal.m_uv_signal, handleSignalEvent, signal.m_signum);

    if (start_result != 0) {
        rc.lean_dec(obj);
        rc.lean_dec(promise);
        lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(start_result, null));
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvSignalNextHelper(obj: *anyopaque) *anyopaque {
    const signal = toSignalObject(obj);

    lean_event_loop_lock();

    if (signal.m_repeating) {
        switch (signal.m_state) {
            .initial => return setupSignal(obj, signal),
            .running => {
                if (signalPromiseIsFinished(signal)) {
                    if (signal.m_promise) |old| {
                        rc.lean_dec(old);
                    }
                    signal.m_promise = lean_io_promise_new();
                }
                const promise = signal.m_promise.?;
                rc.lean_inc(promise);
                lean_event_loop_unlock();
                return io_result.lean_io_result_mk_ok(promise);
            },
            .finished => {
                if (signal.m_promise) |promise| {
                    rc.lean_inc(promise);
                    lean_event_loop_unlock();
                    return io_result.lean_io_result_mk_ok(promise);
                }
                const finished_promise = lean_io_promise_new();
                lean_event_loop_unlock();
                return io_result.lean_io_result_mk_ok(finished_promise);
            },
        }
    } else {
        if (signal.m_state == .initial) {
            return setupSignal(obj, signal);
        } else if (signal.m_promise) |promise| {
            rc.lean_inc(promise);
            lean_event_loop_unlock();
            return io_result.lean_io_result_mk_ok(promise);
        } else {
            const finished_promise = lean_io_promise_new();
            lean_event_loop_unlock();
            return io_result.lean_io_result_mk_ok(finished_promise);
        }
    }
}

fn leanUvSignalStopHelper(obj: *anyopaque) *anyopaque {
    const signal = toSignalObject(obj);

    if (signal.m_state != .running) {
        return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
    }

    lean_event_loop_lock();
    const result = uv.uv_signal_stop(signal.m_uv_signal);
    lean_event_loop_unlock();

    if (signal.m_promise) |promise| {
        rc.lean_dec(promise);
        signal.m_promise = null;
    }

    signal.m_state = .finished;
    rc.lean_dec(obj);

    if (result != 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvSignalCancelHelper(obj: *anyopaque) *anyopaque {
    const signal = toSignalObject(obj);

    lean_event_loop_lock();

    if (signal.m_state == .running and signal.m_promise != null) {
        if (signal.m_repeating) {
            if (signal.m_promise) |promise| {
                rc.lean_dec(promise);
            }
            signal.m_promise = null;
        } else {
            _ = uv.uv_signal_stop(signal.m_uv_signal);
            if (signal.m_promise) |promise| {
                rc.lean_dec(promise);
            }
            signal.m_promise = null;
            signal.m_state = .initial;
            rc.lean_dec(obj);
        }
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

// Std.Internal.UV.Signal.mk (signum : Int32) (repeating : Bool) : IO Signal
pub fn lean_uv_signal_mk(signum: u32, repeating: u8) callconv(.c) *anyopaque {
    return leanUvSignalMkHelper(signum, repeating);
}

// Std.Internal.UV.Signal.next (signal : @& Signal) : IO (IO.Promise Int)
pub fn lean_uv_signal_next(signal: *anyopaque) callconv(.c) *anyopaque {
    return leanUvSignalNextHelper(signal);
}

// Std.Internal.UV.Signal.stop (signal : @& Signal) : IO Unit
pub fn lean_uv_signal_stop(signal: *anyopaque) callconv(.c) *anyopaque {
    return leanUvSignalStopHelper(signal);
}

// Std.Internal.UV.Signal.cancel (signal : @& Signal) : IO Unit
pub fn lean_uv_signal_cancel(signal: *anyopaque) callconv(.c) *anyopaque {
    return leanUvSignalCancelHelper(signal);
}