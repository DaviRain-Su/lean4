// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Bridge between Lean objects and NEAR host functions.
//!
//! These `export fn lean_near_*` functions are called from Lean via
//! `@[extern "lean_near_*"]` declarations. They convert Lean String /
//! ByteArray objects into raw byte slices, call the NEAR host wrappers
//! in `env.zig`, and wrap results back into Lean objects.

const std = @import("std");
const env = @import("env.zig");
const sys = @import("sys.zig");

extern fn lean_io_result_mk_ok(value: ?*anyopaque) callconv(.c) ?*anyopaque;
extern fn lean_alloc_object(size: usize) callconv(.c) *anyopaque;
extern fn lean_box(n: usize) callconv(.c) ?*anyopaque;
extern fn lean_box_uint64(n: u64) callconv(.c) ?*anyopaque;

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

fn mkU64(n: u64) ?*anyopaque {
    return lean_box_uint64(n);
}

fn mkOk(value: ?*anyopaque) ?*anyopaque {
    return lean_io_result_mk_ok(value);
}

fn parseYocto(amount: *anyopaque) u128 {
    return std.fmt.parseInt(u128, stringData(amount), 10) catch 0;
}

fn amountBytes(amount: *anyopaque) [16]u8 {
    var bytes: [16]u8 = undefined;
    std.mem.writeInt(u128, &bytes, parseYocto(amount), .little);
    return bytes;
}

fn amountBytesU128(lo: u64, hi: u64) [16]u8 {
    var bytes: [16]u8 = undefined;
    std.mem.writeInt(u64, bytes[0..8], lo, .little);
    std.mem.writeInt(u64, bytes[8..16], hi, .little);
    return bytes;
}

fn mkU128String(value: u128) ?*anyopaque {
    var buf: [39]u8 = undefined;
    const text = std.fmt.bufPrint(&buf, "{}", .{value}) catch "";
    return mkString(text);
}

fn readU128(bytes: *[16]u8) u128 {
    return std.mem.readInt(u128, bytes, .little);
}

fn readU128Lo(bytes: *[16]u8) u64 {
    return std.mem.readInt(u64, bytes[0..8], .little);
}

fn readU128Hi(bytes: *[16]u8) u64 {
    return std.mem.readInt(u64, bytes[8..16], .little);
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

export fn lean_near_signer_account_id() callconv(.c) ?*anyopaque {
    sys.signer_account_id(REGISTER_0);
    return mkOk(mkRegisterString(REGISTER_0));
}

export fn lean_near_block_timestamp() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(env.blockTimestamp()));
}

export fn lean_near_block_height() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(env.blockHeight()));
}

export fn lean_near_epoch_height() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(sys.epoch_height()));
}

export fn lean_near_storage_usage() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(env.storageUsage()));
}

export fn lean_near_prepaid_gas() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(sys.prepaid_gas()));
}

export fn lean_near_used_gas() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(sys.used_gas()));
}

export fn lean_near_account_balance() callconv(.c) ?*anyopaque {
    var bytes: [16]u8 = undefined;
    sys.account_balance(@intFromPtr(&bytes));
    return mkOk(mkU128String(readU128(&bytes)));
}

export fn lean_near_account_balance_lo() callconv(.c) ?*anyopaque {
    var bytes: [16]u8 = undefined;
    sys.account_balance(@intFromPtr(&bytes));
    return mkOk(mkU64(readU128Lo(&bytes)));
}

export fn lean_near_account_balance_hi() callconv(.c) ?*anyopaque {
    var bytes: [16]u8 = undefined;
    sys.account_balance(@intFromPtr(&bytes));
    return mkOk(mkU64(readU128Hi(&bytes)));
}

export fn lean_near_attached_deposit() callconv(.c) ?*anyopaque {
    var bytes: [16]u8 = undefined;
    sys.attached_deposit(@intFromPtr(&bytes));
    return mkOk(mkU128String(readU128(&bytes)));
}

export fn lean_near_attached_deposit_lo() callconv(.c) ?*anyopaque {
    var bytes: [16]u8 = undefined;
    sys.attached_deposit(@intFromPtr(&bytes));
    return mkOk(mkU64(readU128Lo(&bytes)));
}

export fn lean_near_attached_deposit_hi() callconv(.c) ?*anyopaque {
    var bytes: [16]u8 = undefined;
    sys.attached_deposit(@intFromPtr(&bytes));
    return mkOk(mkU64(readU128Hi(&bytes)));
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

export fn lean_near_panic_str(msg: *anyopaque) callconv(.c) ?*anyopaque {
    const m = stringData(msg);
    sys.panic_utf8(m.len, @intFromPtr(m.ptr));
}

// --- Promises ---------------------------------------------------------------

export fn lean_near_promise_create(
    account_id: *anyopaque,
    method_name: *anyopaque,
    args: *anyopaque,
    amount_yocto: *anyopaque,
    gas: u64,
) callconv(.c) ?*anyopaque {
    const account = stringData(account_id);
    const method = stringData(method_name);
    const arguments = stringData(args);
    var amount = amountBytes(amount_yocto);
    const idx = sys.promise_create(
        account.len,
        @intFromPtr(account.ptr),
        method.len,
        @intFromPtr(method.ptr),
        arguments.len,
        @intFromPtr(arguments.ptr),
        @intFromPtr(&amount),
        gas,
    );
    return mkOk(mkU64(idx));
}

export fn lean_near_promise_create_u128(
    account_id: *anyopaque,
    method_name: *anyopaque,
    args: *anyopaque,
    amount_lo: u64,
    amount_hi: u64,
    gas: u64,
) callconv(.c) ?*anyopaque {
    const account = stringData(account_id);
    const method = stringData(method_name);
    const arguments = stringData(args);
    var amount = amountBytesU128(amount_lo, amount_hi);
    const idx = sys.promise_create(
        account.len,
        @intFromPtr(account.ptr),
        method.len,
        @intFromPtr(method.ptr),
        arguments.len,
        @intFromPtr(arguments.ptr),
        @intFromPtr(&amount),
        gas,
    );
    return mkOk(mkU64(idx));
}

export fn lean_near_promise_then(
    promise_index: u64,
    account_id: *anyopaque,
    method_name: *anyopaque,
    args: *anyopaque,
    amount_yocto: *anyopaque,
    gas: u64,
) callconv(.c) ?*anyopaque {
    const account = stringData(account_id);
    const method = stringData(method_name);
    const arguments = stringData(args);
    var amount = amountBytes(amount_yocto);
    const idx = sys.promise_then(
        promise_index,
        account.len,
        @intFromPtr(account.ptr),
        method.len,
        @intFromPtr(method.ptr),
        arguments.len,
        @intFromPtr(arguments.ptr),
        @intFromPtr(&amount),
        gas,
    );
    return mkOk(mkU64(idx));
}

export fn lean_near_promise_then_u128(
    promise_index: u64,
    account_id: *anyopaque,
    method_name: *anyopaque,
    args: *anyopaque,
    amount_lo: u64,
    amount_hi: u64,
    gas: u64,
) callconv(.c) ?*anyopaque {
    const account = stringData(account_id);
    const method = stringData(method_name);
    const arguments = stringData(args);
    var amount = amountBytesU128(amount_lo, amount_hi);
    const idx = sys.promise_then(
        promise_index,
        account.len,
        @intFromPtr(account.ptr),
        method.len,
        @intFromPtr(method.ptr),
        arguments.len,
        @intFromPtr(arguments.ptr),
        @intFromPtr(&amount),
        gas,
    );
    return mkOk(mkU64(idx));
}

export fn lean_near_promise_and2(left: u64, right: u64) callconv(.c) ?*anyopaque {
    var promises = [_]u64{ left, right };
    return mkOk(mkU64(sys.promise_and(@intFromPtr(&promises), promises.len)));
}

export fn lean_near_promise_batch_create(account_id: *anyopaque) callconv(.c) ?*anyopaque {
    const account = stringData(account_id);
    return mkOk(mkU64(sys.promise_batch_create(account.len, @intFromPtr(account.ptr))));
}

export fn lean_near_promise_batch_then(promise_index: u64, account_id: *anyopaque) callconv(.c) ?*anyopaque {
    const account = stringData(account_id);
    return mkOk(mkU64(sys.promise_batch_then(promise_index, account.len, @intFromPtr(account.ptr))));
}

export fn lean_near_promise_batch_action_function_call(
    promise_index: u64,
    method_name: *anyopaque,
    args: *anyopaque,
    amount_yocto: *anyopaque,
    gas: u64,
) callconv(.c) ?*anyopaque {
    const method = stringData(method_name);
    const arguments = stringData(args);
    var amount = amountBytes(amount_yocto);
    sys.promise_batch_action_function_call(
        promise_index,
        method.len,
        @intFromPtr(method.ptr),
        arguments.len,
        @intFromPtr(arguments.ptr),
        @intFromPtr(&amount),
        gas,
    );
    return mkOk(lean_box(0));
}

export fn lean_near_promise_batch_action_function_call_u128(
    promise_index: u64,
    method_name: *anyopaque,
    args: *anyopaque,
    amount_lo: u64,
    amount_hi: u64,
    gas: u64,
) callconv(.c) ?*anyopaque {
    const method = stringData(method_name);
    const arguments = stringData(args);
    var amount = amountBytesU128(amount_lo, amount_hi);
    sys.promise_batch_action_function_call(
        promise_index,
        method.len,
        @intFromPtr(method.ptr),
        arguments.len,
        @intFromPtr(arguments.ptr),
        @intFromPtr(&amount),
        gas,
    );
    return mkOk(lean_box(0));
}

export fn lean_near_promise_batch_action_transfer(promise_index: u64, amount_yocto: *anyopaque) callconv(.c) ?*anyopaque {
    var amount = amountBytes(amount_yocto);
    sys.promise_batch_action_transfer(promise_index, @intFromPtr(&amount));
    return mkOk(lean_box(0));
}

export fn lean_near_promise_batch_action_transfer_u128(promise_index: u64, amount_lo: u64, amount_hi: u64) callconv(.c) ?*anyopaque {
    var amount = amountBytesU128(amount_lo, amount_hi);
    sys.promise_batch_action_transfer(promise_index, @intFromPtr(&amount));
    return mkOk(lean_box(0));
}

export fn lean_near_promise_results_count() callconv(.c) ?*anyopaque {
    return mkOk(mkU64(sys.promise_results_count()));
}

export fn lean_near_promise_result_status(result_idx: u64) callconv(.c) ?*anyopaque {
    return mkOk(mkU64(sys.promise_result(result_idx, REGISTER_0)));
}

export fn lean_near_promise_result(result_idx: u64) callconv(.c) ?*anyopaque {
    if (sys.promise_result(result_idx, REGISTER_0) == 1) {
        return mkOk(mkOption(mkRegisterString(REGISTER_0)));
    }
    return mkOk(mkOption(null));
}

export fn lean_near_promise_return(promise_index: u64) callconv(.c) ?*anyopaque {
    sys.promise_return(promise_index);
    return mkOk(lean_box(0));
}
