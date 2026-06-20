// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/init_module.cpp`.
//!
//! Initialization/finalization ordering for the util subsystem.

const util_ascii = @import("util_ascii.zig");
const util_name = @import("util_name.zig");
const util_name_generator = @import("util_name_generator.zig");
const util_options = @import("util_options.zig");

extern fn initialize_runtime_module() callconv(.c) void;
extern fn finalize_runtime_module() callconv(.c) void;

pub fn initializeUtilModule() void {
    initialize_runtime_module();
    util_ascii.initializeAscii();
    util_name.initializeName();
    util_name_generator.initializeNameGenerator();
    _ = util_options;
}

pub fn finalizeUtilModule() void {
    _ = util_options;
    util_name_generator.finalizeNameGenerator();
    util_name.finalizeName();
    util_ascii.finalizeAscii();
    finalize_runtime_module();
}

test "init_module compiles" {
    _ = initializeUtilModule;
    _ = finalizeUtilModule;
}
