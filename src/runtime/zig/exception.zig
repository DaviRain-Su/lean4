// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ exception message formatting subsystem.
//!
//! First pass: panic helpers with the same messages as the C++ exceptions.
//! The C++ runtime uses real exception classes; the Zig runtime uses panics
//! because Zig does not have C++-style exceptions.

const std = @import("std");

const lean_manual_root = ""; // CMake fills LEAN_MANUAL_ROOT; empty in first pass

pub fn throwStackSpaceException(component_name: [*:0]const u8) noreturn {
    std.debug.panic(
        "deep recursion was detected at '{s}' (potential solution: increase elaboration stack size using the `lean --tstack` flag). This flag can be set in the `weakLeanArgs` field of the Lake configuration. Further details are available in the Lean reference manual at {s}find/?domain=Verso.Genre.Manual.section&name=lake-config-toml",
        .{ component_name, lean_manual_root },
    );
}

pub fn throwMemoryException(component_name: [*:0]const u8) noreturn {
    std.debug.panic(
        "excessive memory consumption detected at '{s}' (potential solution: increase memory consumption threshold using `set_option maxMemory=...`).",
        .{component_name},
    );
}

pub fn throwHeartbeatException() noreturn {
    std.debug.panic("(deterministic) timeout", .{});
}

pub fn throwInterruptedException() noreturn {
    std.debug.panic("interrupted", .{});
}

pub fn throwUnreachableException() noreturn {
    std.debug.panic("'unreachable' code was reached", .{});
}
