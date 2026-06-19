// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ stack overflow detection subsystem.
//!
//! POSIX (macOS/Linux) uses a SIGSEGV/SIGBUS handler on an alternate signal
//! stack. Windows would need structured exception handling (SEH) via
//! `__try/__except` with `EXCEPTION_STACK_OVERFLOW` — Zig does not expose SEH
//! frame unwinding, so Windows remains a no-op stub until a Zig SEH story
//! exists. The `lean_initialize_stack_overflow` / `lean_finalize_stack_overflow`
//! exports are defined but return immediately on Windows.

const std = @import("std");
const builtin = @import("builtin");
const testing = std.testing;

const c = @cImport({
    @cDefine("_GNU_SOURCE", "1");
    @cInclude("signal.h");
    @cInclude("pthread.h");
    @cInclude("unistd.h");
});

const POSIX = builtin.os.tag != .windows;

const SIG_DFL: ?*const fn (c_int) callconv(.c) void = @ptrFromInt(0);

var g_stack_guard: ?*StackGuard = null;

const msg = "\nStack overflow detected. Aborting.\n";
const HandlerFn = ?*const fn (c_int) callconv(.c) void;

fn getHandler(action: *const c.struct_sigaction) HandlerFn {
    if (builtin.os.tag == .macos) {
        return action.__sigaction_u.__sa_handler;
    } else if (builtin.os.tag == .linux) {
        return action.__sigaction_handler.sa_handler;
    } else {
        return SIG_DFL;
    }
}

fn setHandler(action: *c.struct_sigaction, handler: HandlerFn) void {
    if (builtin.os.tag == .macos) {
        action.__sigaction_u.__sa_handler = handler;
    } else if (builtin.os.tag == .linux) {
        action.__sigaction_handler.sa_handler = handler;
    }
}

fn setSigaction(action: *c.struct_sigaction) void {
    if (builtin.os.tag == .macos) {
        action.__sigaction_u.__sa_sigaction = &segvHandler;
    } else if (builtin.os.tag == .linux) {
        action.__sigaction_handler.sa_sigaction = &segvHandler;
    }
}

fn faultAddress(info: [*c]c.siginfo_t) ?*anyopaque {
    if (builtin.os.tag == .macos) {
        return @ptrCast(info[0].si_addr);
    } else if (builtin.os.tag == .linux) {
        return info[0]._sifields._sigfault.si_addr;
    } else {
        return null;
    }
}

fn isWithinStackGuard(addr: *anyopaque) bool {
    if (builtin.os.tag == .macos) {
        const stackaddr = c.pthread_get_stackaddr_np(c.pthread_self());
        const stacksize = c.pthread_get_stacksize_np(c.pthread_self());
        const stack_bottom = @intFromPtr(stackaddr) - stacksize;
        const page_size = @as(usize, @intCast(c.sysconf(c._SC_PAGESIZE)));
        const a = @intFromPtr(addr);
        return a >= stack_bottom - page_size and a < stack_bottom;
    } else if (builtin.os.tag == .linux) {
        var attr: c.pthread_attr_t = undefined;
        if (c.pthread_attr_init(&attr) != 0) return false;
        defer _ = c.pthread_attr_destroy(&attr);
        var stackaddr: ?*anyopaque = null;
        var stacksize: usize = 0;
        if (c.pthread_getattr_np(c.pthread_self(), &attr) != 0) return false;
        if (c.pthread_attr_getstack(&attr, &stackaddr, &stacksize) != 0) return false;
        const stack_bottom = @intFromPtr(stackaddr);
        const page_size = @as(usize, @intCast(c.sysconf(c._SC_PAGESIZE)));
        const a = @intFromPtr(addr);
        return a >= stack_bottom - page_size and a < stack_bottom;
    } else {
        return false;
    }
}

fn segvHandler(signum: c_int, info: [*c]c.siginfo_t, _: ?*anyopaque) callconv(.c) void {
    if (faultAddress(info)) |addr| if (isWithinStackGuard(addr)) {
        _ = c.write(c.STDERR_FILENO, msg, msg.len);
        std.process.abort();
    };

    var action: c.struct_sigaction = std.mem.zeroes(c.struct_sigaction);
    setHandler(&action, SIG_DFL);
    _ = c.sigaction(signum, &action, null);
}

fn setupSignalHandlers() void {
    const signals = [_]c_int{ c.SIGSEGV, c.SIGBUS };
    for (signals) |signum| {
        var old: c.struct_sigaction = std.mem.zeroes(c.struct_sigaction);
        if (c.sigaction(signum, null, &old) != 0) continue;
        if (getHandler(&old) == SIG_DFL) {
            var action = std.mem.zeroes(c.struct_sigaction);
            action.sa_flags = c.SA_SIGINFO | c.SA_ONSTACK;
            setSigaction(&action);
            _ = c.sigaction(signum, &action, null);
        }
    }
}

const SignalStack = struct {
    stack: c.stack_t,

    fn init() ?SignalStack {
        const ptr = std.c.malloc(c.SIGSTKSZ) orelse return null;
        const stk = c.stack_t{
            .ss_sp = ptr,
            .ss_size = c.SIGSTKSZ,
            .ss_flags = 0,
        };
        if (c.sigaltstack(&stk, null) != 0) {
            std.c.free(ptr);
            return null;
        }
        return .{ .stack = stk };
    }

    fn deinit(self: *SignalStack) void {
        var disable = self.stack;
        disable.ss_flags = c.SS_DISABLE;
        _ = c.sigaltstack(&disable, null);
        std.c.free(self.stack.ss_sp);
    }
};

pub const StackGuard = struct {
    signal_stack: ?SignalStack,

    pub fn init() StackGuard {
        if (!POSIX) return .{ .signal_stack = null };
        return .{ .signal_stack = SignalStack.init() };
    }

    pub fn deinit(self: *StackGuard) void {
        if (self.signal_stack) |*signal_stack| {
            signal_stack.deinit();
            self.signal_stack = null;
        }
    }
};

pub export fn lean_initialize_stack_overflow() callconv(.c) void {
    if (!POSIX) return;
    if (g_stack_guard != null) return;
    const guard = std.heap.c_allocator.create(StackGuard) catch {
        setupSignalHandlers();
        return;
    };
    guard.* = StackGuard.init();
    g_stack_guard = guard;
    setupSignalHandlers();
}

pub export fn lean_finalize_stack_overflow() callconv(.c) void {
    if (!POSIX) return;
    if (g_stack_guard) |guard| {
        guard.deinit();
        std.heap.c_allocator.destroy(guard);
        g_stack_guard = null;
    }
}

test "initialize and finalize stack overflow subsystem" {
    if (!POSIX) return error.SkipZigTest;
    lean_initialize_stack_overflow();
    lean_finalize_stack_overflow();
    try testing.expect(g_stack_guard == null);
}
