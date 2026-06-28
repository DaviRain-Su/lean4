// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
//
// Adapted from near-sdk-zig (https://github.com/DaviRain-Su/near-sdk-zig)
// `env.zig` — high-level wrappers around NEAR host imports.

//! NEAR environment API: safe wrappers around the `sys.zig` host imports.
//! Provides storage, context, and crypto operations for Lean contracts.
//! On native these are no-ops/stubs (the NEAR host only exists in the VM).

const builtin = @import("builtin");
const std = @import("std");
const sys = @import("sys.zig");
const alloc_mod = @import("allocator.zig");
const near_alloc = @import("allocator.zig");

pub const is_wasm = builtin.cpu.arch == .wasm32;

const REGISTER_0: u64 = 0;
const REGISTER_STORAGE: u64 = 1;

// --- Register helpers ------------------------------------------------------

pub fn readRegister(register_id: u64) ?[]u8 {
    if (!is_wasm) return null;
    const len = sys.register_len(register_id);
    if (len == std.math.maxInt(u64)) return null;
    const buf = near_alloc.bytes(@intCast(len));
    sys.read_register(register_id, @intCast(@intFromPtr(buf)));
    return buf[0..@intCast(len)];
}

// --- Storage (host KV) -----------------------------------------------------

pub fn storageWrite(key: []const u8, value: []const u8) bool {
    if (!is_wasm) return false;
    return sys.storage_write(
        key.len, @intFromPtr(key.ptr),
        value.len, @intFromPtr(value.ptr),
        REGISTER_STORAGE,
    ) == 1;
}

pub fn storageRead(key: []const u8) ?[]u8 {
    if (!is_wasm) return null;
    if (sys.storage_read(key.len, @intFromPtr(key.ptr), REGISTER_STORAGE) == 0) return null;
    return readRegister(REGISTER_STORAGE);
}

pub fn storageRemove(key: []const u8) bool {
    if (!is_wasm) return false;
    return sys.storage_remove(key.len, @intFromPtr(key.ptr), REGISTER_STORAGE) == 1;
}

pub fn storageHasKey(key: []const u8) bool {
    if (!is_wasm) return false;
    return sys.storage_has_key(key.len, @intFromPtr(key.ptr)) == 1;
}

// --- Context ---------------------------------------------------------------

pub fn currentAccountId() ?[]u8 {
    if (!is_wasm) return null;
    sys.current_account_id(REGISTER_0);
    return readRegister(REGISTER_0);
}

pub fn predecessorAccountId() ?[]u8 {
    if (!is_wasm) return null;
    sys.predecessor_account_id(REGISTER_0);
    return readRegister(REGISTER_0);
}

pub fn signerAccountId() ?[]u8 {
    if (!is_wasm) return null;
    sys.signer_account_id(REGISTER_0);
    return readRegister(REGISTER_0);
}

pub fn blockTimestamp() u64 {
    if (!is_wasm) return 0;
    return sys.block_timestamp();
}

pub fn blockHeight() u64 {
    if (!is_wasm) return 0;
    return sys.block_index();
}

pub fn storageUsage() u64 {
    if (!is_wasm) return 0;
    return sys.storage_usage();
}

// --- Input / Output --------------------------------------------------------

pub fn input() ?[]u8 {
    if (!is_wasm) return null;
    sys.input(REGISTER_0);
    return readRegister(REGISTER_0);
}

pub fn valueReturn(data: []const u8) void {
    if (!is_wasm) return;
    sys.value_return(data.len, @intFromPtr(data.ptr));
}

// --- Logging ---------------------------------------------------------------

pub fn log(msg: []const u8) void {
    if (!is_wasm) return;
    sys.log_utf8(msg.len, @intFromPtr(msg.ptr));
}

// --- Crypto ----------------------------------------------------------------

pub fn sha256(data: []const u8) [32]u8 {
    if (!is_wasm) return [_]u8{0} ** 32;
    sys.sha256(data.len, @intFromPtr(data.ptr), REGISTER_0);
    const result = readRegister(REGISTER_0) orelse return [_]u8{0} ** 32;
    var hash: [32]u8 = undefined;
    const n = @min(result.len, 32);
    @memcpy(hash[0..n], result[0..n]);
    return hash;
}
