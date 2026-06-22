// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Trace helpers ported from `src/kernel/trace.cpp`.
//!
//! In the Zig kernel these are no-op stubs: tracing is handled by the Lean
//! options system and `lean_is_trace_class_enabled`. The stubs preserve the
//! C++ ABI so the Zig runtime can satisfy link-time references.

pub const force_link = true;

const std = @import("std");

pub fn registerTraceClass(n: *anyopaque, decl_name: *anyopaque) void {
    _ = n;
    _ = decl_name;
}

pub fn isTraceClassEnabled(n: *anyopaque) bool {
    _ = n;
    return false;
}

pub fn initializeTrace() callconv(.c) void {}
pub fn finalizeTrace() callconv(.c) void {}

comptime {
    @export(&initializeTrace, .{ .name = "_ZN4lean15initialize_traceEv", .linkage = .weak });
    @export(&finalizeTrace, .{ .name = "_ZN4lean13finalize_traceEv", .linkage = .weak });
}
