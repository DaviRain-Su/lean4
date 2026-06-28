// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
//
// Adapted from near-sdk-zig (https://github.com/DaviRain-Su/near-sdk-zig)
// `wasm_compat.zig` — MVP WASM software fallbacks.
//
//! MVP WASM compatibility layer. NEAR VM (and other MVP-only WASM hosts) reject
//! `bulk_memory` instructions (`memory.copy`, `memory.fill`), which Zig's
//! `@memcpy`/`@memset` and `std.mem.copy` lower to. Use these software-loop
//! fallbacks instead. This is doc F.2.2's `compat` module.

/// Copy bytes without emitting `memory.copy`.
pub fn memcpy(dest: []u8, src: []const u8) void {
    const n = if (dest.len < src.len) dest.len else src.len;
    var i: usize = 0;
    while (i < n) : (i += 1) dest[i] = src[i];
}

/// Fill bytes with `value` without emitting `memory.fill`.
pub fn memset(dest: []u8, value: u8) void {
    for (dest) |*p| p.* = value;
}

/// Zero a byte slice (memset to 0).
pub fn zero(dest: []u8) void {
    memset(dest, 0);
}

/// Byte-slice equality without SIMD.
pub fn eql(a: []const u8, b: []const u8) bool {
    if (a.len != b.len) return false;
    var i: usize = 0;
    while (i < a.len) : (i += 1) if (a[i] != b[i]) return false;
    return true;
}

/// Generic copy without `memory.copy`.
pub fn copy(comptime T: type, dest: []T, src: []const T) void {
    const n = if (dest.len < src.len) dest.len else src.len;
    var i: usize = 0;
    while (i < n) : (i += 1) dest[i] = src[i];
}
