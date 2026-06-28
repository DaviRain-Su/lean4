// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
//
// Adapted from near-sdk-zig (https://github.com/DaviRain-Su/near-sdk-zig)
// `storage.zig` — host-backed key-value storage.
//
//! NEAR host storage: a key-value store backed by the NEAR `storage_*` host
//! imports. This is the `HostIo.storage_*` surface for the NEAR profile
//! (doc F.2.1). On native it is a no-op stub (storage lives only in the VM).

const builtin = @import("builtin");
const sys = @import("sys.zig");
const alloc = @import("allocator.zig");
const compat = @import("compat.zig");

const REGISTER_STORAGE: u64 = 1;

/// Returns true if a value is stored under `key`.
pub fn hasKey(key: []const u8) bool {
    if (builtin.cpu.arch != .wasm32) return false;
    return sys.storage_has_key(key.len, @intFromPtr(key.ptr)) != 0;
}

/// Read the raw value for `key` into `buffer`. Returns the value slice, or
/// null if the key is absent.
pub fn readRaw(key: []const u8, buffer: []u8) ?[]u8 {
    if (builtin.cpu.arch != .wasm32) return null;
    const found = sys.storage_read(key.len, @intFromPtr(key.ptr), REGISTER_STORAGE);
    if (found == 0) return null;
    const len = sys.register_len(REGISTER_STORAGE);
    if (len > buffer.len) return null;
    sys.read_register(REGISTER_STORAGE, @intFromPtr(buffer.ptr));
    return buffer[0..len];
}

/// Write `value` under `key`.
pub fn writeRaw(key: []const u8, value: []const u8) void {
    if (builtin.cpu.arch != .wasm32) return;
    _ = sys.storage_write(
        key.len,
        @intFromPtr(key.ptr),
        value.len,
        @intFromPtr(value.ptr),
        REGISTER_STORAGE,
    );
}

/// Remove `key`; returns true if it was present.
pub fn remove(key: []const u8) bool {
    if (builtin.cpu.arch != .wasm32) return false;
    return sys.storage_remove(key.len, @intFromPtr(key.ptr), REGISTER_STORAGE) != 0;
}
