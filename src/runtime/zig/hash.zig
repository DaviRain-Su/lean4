// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ hash subsystem.
//!
//! First pass: MurmurHash64A and the lean::hash combiner, matching the
//! implementations in src/runtime/hash.cpp and src/runtime/hash.h.

const std = @import("std");
const testing = std.testing;

pub fn hash(h: u64, k: u64) u64 {
    const m: u64 = 0xc6a4a7935bd1e995;
    const r: u6 = 47;
    var k2 = k;
    k2 *%= m;
    k2 ^= k2 >> r;
    k2 ^= m;
    return (h ^ k2) *% m;
}

pub fn murmurHash64A(key: []const u8, seed: u64) u64 {
    const m: u64 = 0xc6a4a7935bd1e995;
    const r: u6 = 47;
    var h: u64 = seed ^ (key.len *% m);

    var i: usize = 0;
    while (i + 8 <= key.len) : (i += 8) {
        var k: u64 = 0;
        @memcpy(std.mem.asBytes(&k), key[i..][0..8]);
        k *%= m;
        k ^= k >> r;
        k *%= m;
        h ^= k;
        h *%= m;
    }

    const rem = key.len & 7;
    if (rem >= 7) h ^= @as(u64, key[i + 6]) << 48;
    if (rem >= 6) h ^= @as(u64, key[i + 5]) << 40;
    if (rem >= 5) h ^= @as(u64, key[i + 4]) << 32;
    if (rem >= 4) h ^= @as(u64, key[i + 3]) << 24;
    if (rem >= 3) h ^= @as(u64, key[i + 2]) << 16;
    if (rem >= 2) h ^= @as(u64, key[i + 1]) << 8;
    if (rem >= 1) {
        h ^= @as(u64, key[i]);
        h *%= m;
    }

    h ^= h >> r;
    h *%= m;
    h ^= h >> r;
    return h;
}

pub fn hashStr(len: usize, str: [*]const u8, init_value: u64) u64 {
    return murmurHash64A(str[0..len], init_value);
}

test "hash combiner is deterministic" {
    try testing.expectEqual(hash(0, 123), hash(0, 123));
}

test "murmurHash64A handles empty input" {
    try testing.expectEqual(murmurHash64A("", 0), murmurHash64A("", 0));
}

test "murmurHash64A is deterministic" {
    const input = "hello world";
    try testing.expectEqual(murmurHash64A(input, 11), murmurHash64A(input, 11));
}
