// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Root module used by tools/zigc-near.
//!
//! The generated Lean contract is supplied as the `contract` module. The linked
//! runtime library force-links the `lean_near_*` exports needed by Lean's
//! `@[extern]` declarations.

extern fn lean_box(n: usize) callconv(.c) ?*anyopaque;
extern fn lean_io_result_mk_ok(value: ?*anyopaque) callconv(.c) ?*anyopaque;

export fn initialize_Lean_Near(builtin: u8) callconv(.c) ?*anyopaque {
    _ = builtin;
    return lean_io_result_mk_ok(lean_box(0));
}

comptime {
    _ = @import("contract");
    @import("near_exports").forceExports();
}
