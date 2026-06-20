// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Kernel module initialization ported from `src/kernel/init_module.cpp`.
//!
//! The Zig kernel subsystems (type checker, inductive, quot) are lazily
//! initialized, so the explicit orchestration performed by the C++ version
//! is a no-op here. Weak C++ mangled exports satisfy link-time references
//! without conflicting with the strong C++ definitions during cutover.

pub const force_link = true;

const trace = @import("trace.zig");

fn initializeKernelModule() callconv(.c) void {
    trace.initializeTrace();
}

fn finalizeKernelModule() callconv(.c) void {
    trace.finalizeTrace();
}

comptime {
    @export(&initializeKernelModule, .{ .name = "_ZN4lean25initialize_kernel_moduleEv", .linkage = .weak });
    @export(&finalizeKernelModule, .{ .name = "_ZN4lean23finalize_kernel_moduleEv", .linkage = .weak });
}
