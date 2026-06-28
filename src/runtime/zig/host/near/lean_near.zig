// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Bridge between Lean objects and NEAR host functions.
//!
//! These `export fn lean_near_*` functions are called from Lean via
//! `@[extern "lean_near_*"]` declarations. They convert Lean String /
//! ByteArray objects into raw byte slices, call the NEAR host wrappers
//! in `env.zig`, and wrap results back into Lean objects.

const std = @import("std");
const lean = @import("../../lean_object.zig");
const alloc = @import("../../alloc.zig");
const ctor = @import("../../ctor.zig");
const object = @import("../../object.zig");
const env = @import("env.zig");
const near_alloc = @import("allocator.zig");

// --- Lean string internals -------------------------------------------------

fn stringData(s: *anyopaque) []const u8 {
    const str: *lean.lean_string_object = @ptrCast(@alignCast(s));
    const ptr: [*]const u8 = @ptrCast(&str.m_data);
    return ptr[0..str.m_size];
}

fn mkString(data: []const u8) ?*anyopaque {
    // Build a Lean string object from raw bytes.
    // Uses the Lean string ABI: header + size + capacity + data.
    const total = @sizeOf(lean.lean_string_object) + data.len + 1;
    const raw = near_alloc.bytesAligned(total, 8);
    const str: *lean.lean_string_object = @ptrCast(@alignCast(raw));
    str.m_header = .{ .m_rc = 1, .m_cs_sz = 0, .m_other = 0, .m_tag = lean.LeanString };
    str.m_size = data.len;
    str.m_capacity = data.len + 1;
    const dst: [*]u8 = @ptrCast(&str.m_data);
    @memcpy(dst[0..data.len], data);
    dst[data.len] = 0; // null terminator
    return @ptrCast(str);
}

fn mkOption(val: ?*anyopaque) ?*anyopaque {
    // Convert a nullable pointer into Lean's Option type.
    // Option.some x = ctor(1, [x]); Option.none = ctor(0, [])
    if (val) |v| {
        const c = alloc.lean_alloc_ctor(1, 1, 0);
        ctor.lean_ctor_set(c, 0, v);
        return c;
    }
    return alloc.lean_alloc_ctor(0, 0, 0);
}

fn mkBool(b: bool) ?*anyopaque {
    return object.lean_box(if (b) 1 else 0);
}

// --- Storage (Lean String key → host KV) -----------------------------------

export fn lean_near_storage_write(key: *anyopaque, value: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    const v = stringData(value);
    const result = env.storageWrite(k, v);
    return mkBool(result);
}

export fn lean_near_storage_read(key: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    if (env.storageRead(k)) |data| {
        const s = mkString(data);
        return mkOption(s);
    }
    return mkOption(null);
}

export fn lean_near_storage_has_key(key: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    return mkBool(env.storageHasKey(k));
}

export fn lean_near_storage_remove(key: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    return mkBool(env.storageRemove(k));
}

// --- Context (Lean → host context queries) ---------------------------------

export fn lean_near_current_account_id() callconv(.c) ?*anyopaque {
    if (env.currentAccountId()) |data| {
        return mkString(data);
    }
    return mkString("");
}

export fn lean_near_predecessor_account_id() callconv(.c) ?*anyopaque {
    if (env.predecessorAccountId()) |data| {
        return mkString(data);
    }
    return mkString("");
}

export fn lean_near_block_timestamp() callconv(.c) ?*anyopaque {
    return object.lean_box(@intCast(env.blockTimestamp()));
}

export fn lean_near_block_height() callconv(.c) ?*anyopaque {
    return object.lean_box(@intCast(env.blockHeight()));
}

// --- Input / Output --------------------------------------------------------

export fn lean_near_input() callconv(.c) ?*anyopaque {
    if (env.input()) |data| {
        return mkString(data);
    }
    return mkString("");
}

export fn lean_near_value_return(data: *anyopaque) callconv(.c) ?*anyopaque {
    const d = stringData(data);
    env.valueReturn(d);
    return object.lean_box(0);
}

export fn lean_near_log(msg: *anyopaque) callconv(.c) ?*anyopaque {
    const m = stringData(msg);
    env.log(m);
    return object.lean_box(0);
}
