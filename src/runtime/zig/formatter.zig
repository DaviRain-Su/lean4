// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Formatter hook used by the C++ library (`formatter.cpp`).
//!
//! Ports the global print-function pointer and `operator<<` for expressions.
//! In Zig there is no operator overloading; callers use `printExpr`.

pub const force_link = true;

const std = @import("std");

const PrintFn = *const fn (out: *anyopaque, e: *anyopaque) callconv(.c) void;

var g_print: ?PrintFn = null;

pub fn setPrintFn(fn_ptr: PrintFn) void {
    g_print = fn_ptr;
}

/// Print an expression using the registered formatter.
/// Mirrors C++ `std::ostream & operator<<(std::ostream &, expr const &)`.
pub fn printExpr(out: *anyopaque, e: *anyopaque) void {
    if (g_print) |pfn| {
        pfn(out, e);
    } else {
        std.debug.print("print function is not available, Lean was not initialized correctly\n", .{});
        @panic("print function is not available");
    }
}

pub fn printExprStdout(e: *anyopaque) void {
    printExpr(@ptrFromInt(1), e);
}

pub fn initializeFormatter() void {}

pub fn finalizeFormatter() void {
    g_print = null;
}

// C-linkage entry points so the Zig library can replace the C++ ones.
pub export fn lean_set_print_fn(fn_ptr: PrintFn) callconv(.c) void {
    setPrintFn(fn_ptr);
}

pub export fn lean_print_expr(e: *anyopaque) callconv(.c) void {
    printExprStdout(e);
}

pub export fn lean_initialize_formatter() callconv(.c) void {
    initializeFormatter();
}

pub export fn lean_finalize_formatter() callconv(.c) void {
    finalizeFormatter();
}

const object = @import("object.zig");

test "formatter stores and clears print hook" {
    const dummy: PrintFn = struct {
        fn f(_: *anyopaque, _: *anyopaque) callconv(.c) void {}
    }.f;
    setPrintFn(dummy);
    try std.testing.expect(g_print != null);
    finalizeFormatter();
    try std.testing.expect(g_print == null);
}

test "formatter box round-trip" {
    const b = object.lean_box(42);
    try std.testing.expectEqual(@as(usize, 42), object.lean_unbox(b));
}
