// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Library module initialization (`init_module.cpp`).
//!
//! Orchestrates initialization/finalization of the pure-Zig library subsystems.
//! Submodules that still live in C++ (e.g. `print.cpp`) are left to the C++
//! init path until they are ported.

pub const force_link = true;

const formatter = @import("formatter.zig");
const constants = @import("constants.zig");
const num = @import("num.zig");
const annotation = @import("annotation.zig");
const library_util = @import("library_util.zig");
const dynlib = @import("dynlib.zig");

pub fn initializeLibraryCoreModule() void {
    formatter.initializeFormatter();
    constants.initializeConstants();
}

pub fn finalizeLibraryCoreModule() void {
    constants.finalizeConstants();
    formatter.finalizeFormatter();
}

pub fn initializeLibraryModule() void {
    // print.cpp is not yet ported; C++ init path handles it.
    num.initializeNum();
    annotation.initializeAnnotation();
    library_util.initializeLibraryUtil();
    dynlib.initializeDynlibClasses();
}

pub fn finalizeLibraryModule() void {
    dynlib.initializeDynlibClasses(); // no separate finalize needed
    library_util.finalizeLibraryUtil();
    annotation.finalizeAnnotation();
    num.finalizeNum();
    // print.cpp finalization is handled by C++.
}

// C-linkage entry points mirroring `init_module.h`.
pub export fn lean_initialize_library_core_module() callconv(.c) void {
    initializeLibraryCoreModule();
}

pub export fn lean_finalize_library_core_module() callconv(.c) void {
    finalizeLibraryCoreModule();
}

pub export fn lean_initialize_library_module() callconv(.c) void {
    initializeLibraryModule();
}

pub export fn lean_finalize_library_module() callconv(.c) void {
    finalizeLibraryModule();
}

const std = @import("std");

test "library init lifecycle" {
    initializeLibraryCoreModule();
    initializeLibraryModule();
    defer {
        finalizeLibraryModule();
        finalizeLibraryCoreModule();
    }
    try std.testing.expect(true);
}
