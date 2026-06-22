// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig-native libuv timer subsystem (ported from src/runtime/uv/timer.cpp).

const std = @import("std");
const uv_event_loop = @import("uv_event_loop.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const io_result = @import("io_result.zig");
const io_errno = @import("io_errno.zig");
const lean = @import("lean_object.zig");
const lean_alloc = @import("lean_allocator");

const uv = @cImport({
    @cInclude("uv.h");
});

pub const force_link = true;

const TimerState = enum(c_int) {
    initial = 0,
    running = 1,
    finished = 2,
};

const LeanUvTimerObject = struct {
    m_uv_timer: *uv.uv_timer_t,
    m_promise: ?*anyopaque,
    m_timeout: u64,
    m_repeating: bool,
    m_state: TimerState,
};

var g_uv_timer_external_class: ?*lean.lean_external_class = null;
var g_timer_class_initialized = false;

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

fn toTimerObject(ptr: ?*anyopaque) *LeanUvTimerObject {
    return @ptrCast(@alignCast(object.lean_get_external_data(ptr.?).?));
}

fn timerPromiseIsFinished(timer: *LeanUvTimerObject) bool {
    const promise = timer.m_promise orelse return false;
    const prom: *lean.lean_promise_object = @ptrCast(@alignCast(promise));
    const task = prom.m_result orelse return false;
    return lean_io_get_task_state_core(@ptrCast(task)) == 2;
}

fn uvCloseFreeCallback(handle: ?*uv.uv_handle_t) callconv(.c) void {
    lean_alloc.vtable.free(@ptrCast(handle), @sizeOf(uv.uv_timer_t), @alignOf(uv.uv_timer_t));
}

fn leanUvTimerFinalizer(ptr: *anyopaque) callconv(.c) void {
    const timer: *LeanUvTimerObject = @ptrCast(@alignCast(ptr));
    if (timer.m_promise) |promise| {
        rc.lean_dec(promise);
    }
    lean_event_loop_lock();
    _ = uv.uv_close(@ptrCast(timer.m_uv_timer), uvCloseFreeCallback);
    lean_event_loop_unlock();
    lean_alloc.leanFree(LeanUvTimerObject, @ptrCast(timer), 1);
}

fn timerForeach(ptr: *anyopaque, f: ?*anyopaque) callconv(.c) void {
    const timer: *LeanUvTimerObject = @ptrCast(@alignCast(ptr));
    if (timer.m_promise) |promise| {
        if (f) |fun| {
            rc.lean_inc(fun);
            if (lean_apply_1(fun, promise)) |res| {
                rc.lean_dec(res);
            }
        }
    }
}

fn ensureTimerExternalClass() void {
    if (g_timer_class_initialized) return;
    g_uv_timer_external_class = object.lean_register_external_class(leanUvTimerFinalizer, timerForeach);
    g_timer_class_initialized = true;
}

pub export fn lean_zig_initialize_libuv_timer() callconv(.c) void {
    ensureTimerExternalClass();
}

fn leanUvTimerNew(timer: *LeanUvTimerObject) *anyopaque {
    return object.lean_alloc_external(g_uv_timer_external_class.?, timer);
}

fn handleTimerEvent(handle: ?*uv.uv_timer_t) callconv(.c) void {
    const h = handle.?;
    const obj: *anyopaque = @ptrCast(@alignCast(h.data));
    const timer = toTimerObject(obj);

    std.debug.assert(timer.m_state == .running);

    if (timer.m_repeating) {
        if (timer.m_promise) |promise| {
            if (!timerPromiseIsFinished(timer)) {
                const res = lean_io_promise_resolve(object.lean_box(0).?, promise);
                rc.lean_dec(res);
            }
        }
    } else {
        if (timer.m_promise) |promise| {
            std.debug.assert(!timerPromiseIsFinished(timer));
            const res = lean_io_promise_resolve(object.lean_box(0).?, promise);
            rc.lean_dec(res);
        }
        _ = uv.uv_timer_stop(timer.m_uv_timer);
        timer.m_state = .finished;
        rc.lean_dec(obj);
    }
}

fn leanUvTimerMkHelper(timeout: u64, repeating: u8) *anyopaque {
    ensureTimerExternalClass();

    const timer: *LeanUvTimerObject = @ptrCast(@alignCast(lean_alloc.leanAlloc(LeanUvTimerObject, 1) orelse {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    timer.* = .{
        .m_uv_timer = undefined,
        .m_promise = null,
        .m_timeout = timeout,
        .m_repeating = repeating != 0,
        .m_state = .initial,
    };

    const uv_timer: *uv.uv_timer_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_timer_t), @alignOf(uv.uv_timer_t)) orelse {
        lean_alloc.leanFree(LeanUvTimerObject, @ptrCast(timer), 1);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    lean_event_loop_lock();
    const loop: *uv.uv_loop_t = @ptrCast(@alignCast(lean_event_loop_loop().?));
    const init_result = uv.uv_timer_init(loop, uv_timer);
    lean_event_loop_unlock();

    if (init_result != 0) {
        lean_alloc.vtable.free(@ptrCast(uv_timer), @sizeOf(uv.uv_timer_t), @alignOf(uv.uv_timer_t));
        lean_alloc.leanFree(LeanUvTimerObject, @ptrCast(timer), 1);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(init_result, null));
    }

    timer.m_uv_timer = uv_timer;

    const obj = leanUvTimerNew(timer);
    rc.lean_mark_mt(obj);
    uv_timer.data = obj;

    return io_result.lean_io_result_mk_ok(obj);
}

fn leanUvTimerNextHelper(obj: *anyopaque) *anyopaque {
    const timer = toTimerObject(obj);

    const createPromise = struct {
        fn call() *anyopaque {
            return lean_io_promise_new();
        }
    }.call;

    lean_event_loop_lock();

    if (timer.m_repeating) {
        switch (timer.m_state) {
            .initial => {
                std.debug.assert(timer.m_promise == null);
                const promise = createPromise();
                timer.m_promise = promise;
                timer.m_state = .running;
                rc.lean_inc(obj);
                rc.lean_inc(promise);

                const start_result = uv.uv_timer_start(
                    timer.m_uv_timer,
                    handleTimerEvent,
                    if (timer.m_repeating) 0 else timer.m_timeout,
                    if (timer.m_repeating) timer.m_timeout else 0,
                );

                if (start_result != 0) {
                    rc.lean_dec(obj);
                    lean_event_loop_unlock();
                    return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(start_result, null));
                }

                lean_event_loop_unlock();
                return io_result.lean_io_result_mk_ok(promise);
            },
            .running => {
                if (timer.m_promise == null or timerPromiseIsFinished(timer)) {
                    if (timer.m_promise) |old| {
                        rc.lean_dec(old);
                    }
                    timer.m_promise = createPromise();
                }
                const promise = timer.m_promise.?;
                rc.lean_inc(promise);
                lean_event_loop_unlock();
                return io_result.lean_io_result_mk_ok(promise);
            },
            .finished => {
                if (timer.m_promise) |promise| {
                    rc.lean_inc(promise);
                    lean_event_loop_unlock();
                    return io_result.lean_io_result_mk_ok(promise);
                }
                const finished_promise = createPromise();
                lean_event_loop_unlock();
                return io_result.lean_io_result_mk_ok(finished_promise);
            },
        }
    } else {
        if (timer.m_state == .initial) {
            std.debug.assert(timer.m_promise == null);
            const promise = createPromise();
            timer.m_promise = promise;
            timer.m_state = .running;
            rc.lean_inc(obj);
            rc.lean_inc(promise);

            const start_result = uv.uv_timer_start(
                timer.m_uv_timer,
                handleTimerEvent,
                timer.m_timeout,
                0,
            );

            if (start_result != 0) {
                rc.lean_dec(obj);
                lean_event_loop_unlock();
                return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(start_result, null));
            }

            lean_event_loop_unlock();
            return io_result.lean_io_result_mk_ok(promise);
        } else if (timer.m_promise) |promise| {
            rc.lean_inc(promise);
            lean_event_loop_unlock();
            return io_result.lean_io_result_mk_ok(promise);
        } else {
            lean_event_loop_unlock();
            const finished_promise = createPromise();
            return io_result.lean_io_result_mk_ok(finished_promise);
        }
    }
}

fn leanUvTimerResetHelper(obj: *anyopaque) *anyopaque {
    const timer = toTimerObject(obj);

    lean_event_loop_lock();

    if (timer.m_state == .running) {
        _ = uv.uv_timer_stop(timer.m_uv_timer);

        const start_result = uv.uv_timer_start(
            timer.m_uv_timer,
            handleTimerEvent,
            timer.m_timeout,
            if (timer.m_repeating) timer.m_timeout else 0,
        );

        lean_event_loop_unlock();

        if (start_result != 0) {
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(start_result, null));
        }
        return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvTimerStopHelper(obj: *anyopaque) *anyopaque {
    const timer = toTimerObject(obj);

    lean_event_loop_lock();

    if (timer.m_promise) |promise| {
        rc.lean_dec(promise);
        timer.m_promise = null;
    }

    if (timer.m_state == .running) {
        _ = uv.uv_timer_stop(timer.m_uv_timer);
        lean_event_loop_unlock();
        timer.m_state = .finished;
        rc.lean_dec(obj);
        return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvTimerCancelHelper(obj: *anyopaque) *anyopaque {
    const timer = toTimerObject(obj);

    lean_event_loop_lock();

    if (timer.m_state == .running and timer.m_promise != null) {
        if (timer.m_repeating) {
            rc.lean_dec(timer.m_promise.?);
            timer.m_promise = null;
        } else {
            _ = uv.uv_timer_stop(timer.m_uv_timer);
            rc.lean_dec(timer.m_promise.?);
            timer.m_promise = null;
            timer.m_state = .initial;
            rc.lean_dec(obj);
        }
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

// Std.Internal.UV.Timer.mk (timeout : UInt64) (repeating : Bool) : IO Timer
pub fn lean_uv_timer_mk(timeout: u64, repeating: u8) callconv(.c) *anyopaque {
    return leanUvTimerMkHelper(timeout, repeating);
}

// Std.Internal.UV.Timer.next (timer : @& Timer) : IO (IO.Promise Unit)
pub fn lean_uv_timer_next(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerNextHelper(timer);
}

// Std.Internal.UV.Timer.reset (timer : @& Timer) : IO Unit
pub fn lean_uv_timer_reset(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerResetHelper(timer);
}

// Std.Internal.UV.Timer.stop (timer : @& Timer) : IO Unit
pub fn lean_uv_timer_stop(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerStopHelper(timer);
}

// Std.Internal.UV.Timer.cancel (timer : @& Timer) : IO Unit
pub fn lean_uv_timer_cancel(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerCancelHelper(timer);
}
pub export fn lean_uv_timer_mk_helper(timeout: u64, repeating: u8) callconv(.c) *anyopaque {
    return leanUvTimerMkHelper(timeout, repeating);
}

pub export fn lean_uv_timer_next_helper(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerNextHelper(timer);
}

pub export fn lean_uv_timer_reset_helper(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerResetHelper(timer);
}

pub export fn lean_uv_timer_stop_helper(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerStopHelper(timer);
}

pub export fn lean_uv_timer_cancel_helper(timer: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTimerCancelHelper(timer);
}
