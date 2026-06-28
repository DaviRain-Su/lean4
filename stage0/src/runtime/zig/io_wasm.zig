// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! WASM stub for the Lean IO primitives (`io_posix.zig` on native).
//!
//! Selected when building for `wasm32-*` targets. Contract VMs and freestanding
//! WASM have no POSIX filesystem, no environment variables, and no process
//! model, so every IO primitive that touches those returns an `unsupported`
//! error. Primitives that are pure runtime state (heartbeats, timing stubs)
//! are kept functional so the runtime links and pure-compute Lean modules run.
//!
//! This is the `HostIo.none` backend from doc F.2.1 — capabilities a WASM host
//! does not provide degrade to errors instead of breaking the link.

const std = @import("std");
const box = @import("box.zig");
const io_error = @import("io_error.zig");
const io_result = @import("io_result.zig");
const object = @import("object.zig");


extern fn lean_apply_1(f: *anyopaque, a1: *anyopaque) callconv(.c) ?*anyopaque;

pub const force_link = true;

/// Construct an IO error result indicating the operation is unsupported on WASM.
fn unsupported() *anyopaque {
    return io_result.lean_io_result_mk_error(
        io_error.lean_mk_io_error_other_error(0, object.lean_box(0).?),
    );
}

/// A unit (ok) result.
fn mkUnitResult() *anyopaque {
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

// ---------------------------------------------------------------------------
// Filesystem / handle primitives — all unsupported on WASM.
// ---------------------------------------------------------------------------

pub export fn lean_chmod(filename: *anyopaque, mode: u32) callconv(.c) *anyopaque {
    _ = filename;
    _ = mode;
    return unsupported();
}

pub export fn lean_io_prim_handle_mk(filename: *anyopaque, mode: u8) callconv(.c) *anyopaque {
    _ = filename;
    _ = mode;
    return unsupported();
}

pub export fn lean_io_prim_handle_lock(h: *anyopaque, exclusive: u8) callconv(.c) *anyopaque {
    _ = h;
    _ = exclusive;
    return unsupported();
}

pub export fn lean_io_prim_handle_try_lock(h: *anyopaque, exclusive: u8) callconv(.c) *anyopaque {
    _ = h;
    _ = exclusive;
    return unsupported();
}

pub export fn lean_io_prim_handle_unlock(h: *anyopaque) callconv(.c) *anyopaque {
    _ = h;
    return unsupported();
}

pub export fn lean_io_prim_handle_is_tty(h: *anyopaque) callconv(.c) u8 {
    _ = h;
    return 0;
}

pub export fn lean_io_prim_handle_flush(_: *anyopaque) callconv(.c) *anyopaque {
    return mkUnitResult();
}

pub export fn lean_io_prim_handle_rewind(h: *anyopaque) callconv(.c) *anyopaque {
    _ = h;
    return unsupported();
}

pub export fn lean_io_prim_handle_truncate(h: *anyopaque) callconv(.c) *anyopaque {
    _ = h;
    return unsupported();
}

pub export fn lean_io_prim_handle_read(h: *anyopaque, nbytes: usize) callconv(.c) *anyopaque {
    _ = h;
    _ = nbytes;
    return unsupported();
}

pub export fn lean_io_prim_handle_write(h: *anyopaque, buf_obj: *anyopaque) callconv(.c) *anyopaque {
    _ = h;
    _ = buf_obj;
    return unsupported();
}

pub export fn lean_io_prim_handle_get_line(h: *anyopaque) callconv(.c) *anyopaque {
    _ = h;
    return unsupported();
}

pub export fn lean_io_prim_handle_put_str(h: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque {
    _ = h;
    _ = s;
    return unsupported();
}

pub export fn lean_io_realpath(filename: *anyopaque) callconv(.c) *anyopaque {
    _ = filename;
    return unsupported();
}

pub export fn lean_io_read_dir(dirname: *anyopaque) callconv(.c) *anyopaque {
    _ = dirname;
    return unsupported();
}

pub export fn lean_io_metadata(filename: *anyopaque) callconv(.c) *anyopaque {
    _ = filename;
    return unsupported();
}

pub export fn lean_io_symlink_metadata(filename: *anyopaque) callconv(.c) *anyopaque {
    _ = filename;
    return unsupported();
}

pub export fn lean_io_create_dir(path_obj: *anyopaque) callconv(.c) *anyopaque {
    _ = path_obj;
    return unsupported();
}

pub export fn lean_io_remove_dir(path_obj: *anyopaque) callconv(.c) *anyopaque {
    _ = path_obj;
    return unsupported();
}

pub export fn lean_io_rename(from_obj: *anyopaque, to_obj: *anyopaque) callconv(.c) *anyopaque {
    _ = from_obj;
    _ = to_obj;
    return unsupported();
}

pub export fn lean_io_hard_link(orig_obj: *anyopaque, link_obj: *anyopaque) callconv(.c) *anyopaque {
    _ = orig_obj;
    _ = link_obj;
    return unsupported();
}

pub export fn lean_io_create_tempfile(_: *anyopaque) callconv(.c) *anyopaque {
    return unsupported();
}

pub export fn lean_io_create_tempdir(_: *anyopaque) callconv(.c) *anyopaque {
    return unsupported();
}

pub export fn lean_io_remove_file(filename: *anyopaque) callconv(.c) *anyopaque {
    _ = filename;
    return unsupported();
}

pub export fn lean_io_app_path() callconv(.c) *anyopaque {
    return unsupported();
}

pub export fn lean_io_current_dir() callconv(.c) *anyopaque {
    return unsupported();
}

pub export fn lean_io_process_get_current_dir() callconv(.c) *anyopaque {
    return unsupported();
}

pub export fn lean_io_getenv(env_var: *anyopaque) callconv(.c) *anyopaque {
    _ = env_var;
    return unsupported();
}

// ---------------------------------------------------------------------------
// Windows-only stubs (kept unsupported like the native build).
// ---------------------------------------------------------------------------

pub export fn lean_windows_get_next_transition(_: *anyopaque, _: u64, _: u8) callconv(.c) *anyopaque {
    return unsupported();
}

pub export fn lean_get_windows_local_timezone_id_at(_: u64) callconv(.c) *anyopaque {
    return unsupported();
}

// ---------------------------------------------------------------------------
// Runtime-state primitives — functional on WASM (pure runtime counters).
// ---------------------------------------------------------------------------

pub export fn lean_io_get_num_heartbeats() callconv(.c) *anyopaque {
    return object.lean_box(0).?;
}

pub export fn lean_io_set_heartbeats(count: *anyopaque) callconv(.c) *anyopaque {
    _ = count;
    return object.lean_box(0).?;
}

pub export fn lean_io_mono_ms_now() callconv(.c) *anyopaque {
    // No monotonic clock on freestanding WASM; return 0.
    return object.lean_box(0).?;
}

pub export fn lean_io_mono_nanos_now() callconv(.c) *anyopaque {
    return object.lean_box(0).?;
}

pub export fn lean_get_current_time() callconv(.c) *anyopaque {
    return object.lean_box(0).?;
}

pub export fn lean_io_get_random_bytes(nbytes: usize) callconv(.c) *anyopaque {
    _ = nbytes;
    return unsupported();
}

pub export fn lean_io_timeit(msg: *anyopaque, fn_obj: *anyopaque) callconv(.c) *anyopaque {
    // No profiling on WASM; just run the action.
    _ = msg;
    return lean_apply_1(fn_obj, object.lean_box(0).?) orelse @panic("lean_io_timeit: apply failed");
}

pub export fn lean_io_allocprof(msg: *anyopaque, fn_obj: *anyopaque) callconv(.c) *anyopaque {
    _ = msg;
    return lean_apply_1(fn_obj, object.lean_box(0).?) orelse @panic("lean_io_allocprof: apply failed");
}
