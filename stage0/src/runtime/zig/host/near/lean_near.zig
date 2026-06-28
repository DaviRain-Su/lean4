// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Bridge between Lean objects and NEAR host functions.
//!
//! These `export fn lean_near_*` functions are called from Lean via
//! `@[extern "lean_near_*"]` declarations. They convert Lean String /
//! ByteArray objects into raw byte slices, call the NEAR host wrappers
//! in `env.zig`, and wrap results back into Lean objects.

const env = @import("env.zig");
const sys = @import("sys.zig");

extern fn lean_io_result_mk_ok(value: ?*anyopaque) callconv(.c) ?*anyopaque;
extern fn lean_alloc_object(size: usize) callconv(.c) *anyopaque;
extern fn lean_box(n: usize) callconv(.c) ?*anyopaque;

const REGISTER_0: u64 = 0;
const REGISTER_STORAGE: u64 = 1;
const LeanString: u8 = 249;

const lean_object = extern struct {
    m_rc: i32,
    m_cs_sz: u16,
    m_other: u8,
    m_tag: u8,
};

const lean_ctor_object = extern struct {
    m_header: lean_object,
    m_objs: [0]?*anyopaque,
};

const lean_string_object = extern struct {
    m_header: lean_object,
    m_size: usize,
    m_capacity: usize,
    m_length: usize,
    m_data: [0]u8,
};

// --- Lean string internals -------------------------------------------------

fn stringData(s: *anyopaque) []const u8 {
    const str: *lean_string_object = @ptrCast(@alignCast(s));
    const ptr: [*]const u8 = @ptrCast(&str.m_data);
    const size = if (str.m_size == 0) 0 else str.m_size - 1;
    return ptr[0..size];
}

fn utf8Len(bytes: []const u8) usize {
    var len: usize = 0;
    for (bytes) |b| {
        if ((b & 0xc0) != 0x80) len += 1;
    }
    return len;
}

fn mkString(data: []const u8) ?*anyopaque {
    const size = data.len + 1;
    const raw = lean_alloc_object(@sizeOf(lean_string_object) + size);
    const str: *lean_string_object = @ptrCast(@alignCast(raw));
    setHeader(&str.m_header, LeanString, 0);
    str.m_size = size;
    str.m_capacity = size;
    str.m_length = utf8Len(data);
    const dst: [*]u8 = @ptrCast(&str.m_data);
    @memcpy(dst[0..data.len], data);
    dst[data.len] = 0;
    return @ptrCast(str);
}

fn setHeader(header: *lean_object, tag: u8, other: u8) void {
    header.* = .{
        .m_rc = 1,
        .m_cs_sz = 0,
        .m_other = other,
        .m_tag = tag,
    };
}

fn mkRegisterString(register_id: u64) ?*anyopaque {
    const len64 = sys.register_len(register_id);
    if (len64 == @as(u64, @bitCast(@as(i64, -1)))) return mkString("");

    const len: usize = @intCast(len64);
    const size = len + 1;
    const obj = lean_alloc_object(@sizeOf(lean_string_object) + size);
    const str: *lean_string_object = @ptrCast(@alignCast(obj));
    setHeader(&str.m_header, LeanString, 0);
    str.m_size = size;
    str.m_capacity = size;
    const bytes: [*]u8 = @ptrCast(&str.m_data);
    sys.read_register(register_id, @intCast(@intFromPtr(bytes)));
    bytes[len] = 0;
    str.m_length = utf8Len(bytes[0..len]);
    return @ptrCast(obj);
}

fn mkCtor(tag: u8, num_objs: u8) *lean_ctor_object {
    const total = @sizeOf(lean_object) + @sizeOf(?*anyopaque) * @as(usize, num_objs);
    const raw = lean_alloc_object(total);
    const obj: *lean_ctor_object = @ptrCast(@alignCast(raw));
    setHeader(&obj.m_header, tag, num_objs);
    return obj;
}

fn mkOption(val: ?*anyopaque) ?*anyopaque {
    // Convert a nullable pointer into Lean's Option type.
    // Option.some x = ctor(1, [x]); Option.none = boxed zero.
    if (val) |v| {
        const c = mkCtor(1, 1);
        const slots: [*]?*anyopaque = @ptrCast(&c.m_objs);
        slots[0] = v;
        return c;
    }
    return lean_box(0);
}

fn mkBool(b: bool) ?*anyopaque {
    return lean_box(if (b) 1 else 0);
}

fn mkOk(value: ?*anyopaque) ?*anyopaque {
    return lean_io_result_mk_ok(value);
}

// --- Storage (Lean String key → host KV) -----------------------------------

export fn lean_near_storage_write(key: *anyopaque, value: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    const v = stringData(value);
    const result = env.storageWrite(k, v);
    return mkOk(mkBool(result));
}

export fn lean_near_storage_read(key: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    if (sys.storage_read(k.len, @intFromPtr(k.ptr), REGISTER_STORAGE) == 0) return mkOk(mkOption(null));
    return mkOk(mkOption(mkRegisterString(REGISTER_STORAGE)));
}

export fn lean_near_storage_has_key(key: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    return mkOk(mkBool(env.storageHasKey(k)));
}

export fn lean_near_storage_remove(key: *anyopaque) callconv(.c) ?*anyopaque {
    const k = stringData(key);
    return mkOk(mkBool(env.storageRemove(k)));
}

// --- Context (Lean → host context queries) ---------------------------------

export fn lean_near_current_account_id() callconv(.c) ?*anyopaque {
    sys.current_account_id(REGISTER_0);
    return mkOk(mkRegisterString(REGISTER_0));
}

export fn lean_near_predecessor_account_id() callconv(.c) ?*anyopaque {
    sys.predecessor_account_id(REGISTER_0);
    return mkOk(mkRegisterString(REGISTER_0));
}

export fn lean_near_block_timestamp() callconv(.c) ?*anyopaque {
    return mkOk(lean_box(@intCast(env.blockTimestamp())));
}

export fn lean_near_block_height() callconv(.c) ?*anyopaque {
    return mkOk(lean_box(@intCast(env.blockHeight())));
}

// --- Input / Output --------------------------------------------------------

export fn lean_near_input() callconv(.c) ?*anyopaque {
    sys.input(REGISTER_0);
    return mkOk(mkRegisterString(REGISTER_0));
}

export fn lean_near_value_return(data: *anyopaque) callconv(.c) ?*anyopaque {
    const d = stringData(data);
    env.valueReturn(d);
    return mkOk(lean_box(0));
}

export fn lean_near_log(msg: *anyopaque) callconv(.c) ?*anyopaque {
    const m = stringData(msg);
    env.log(m);
    return mkOk(lean_box(0));
}
