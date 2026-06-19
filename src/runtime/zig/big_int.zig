// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! GMP-free big integer implementation using Zig's `std.math.big.int`.
//!
//! This module provides a `Mpz` type with the same memory layout as GMP's
//! `__mpz_struct` (for binary compatibility with C++ `MpzObject`), but
//! backs the limbs with Zig-managed memory instead of GMP's allocator.
//!
//! The three GMP struct fields are:
//!   `_mp_alloc`: allocated limb capacity
//!   `_mp_size`:   current limb count (negative for negative numbers)
//!   `_mp_d`:      pointer to limb array (each limb is `usize`)
//!
//! All arithmetic is delegated to `std.math.big.int` and results are
//! written back into the GMP-compatible layout.

const std = @import("std");
const BigInt = std.math.big.int;
const lean_alloc = @import("lean_allocator");

/// Allocator used for all big-integer limb allocations.
/// Routes through the pluggable allocator interface (allocator.zig)
/// so limbs are allocated by the same backend as all other runtime memory.
const bigint_allocator = lean_alloc.lean_allocator;

/// Limb type matching GMP's `mp_limb_t` on 64-bit platforms.
pub const Limb = usize;

/// Matches GMP's `__mpz_struct` on 64-bit platforms.
pub const Mpz = extern struct {
    _mp_alloc: c_int,
    _mp_size: c_int,
    _mp_d: [*c]Limb,

    // ── Initialization ──────────────────────────────────────────────────

    pub fn init(_: std.mem.Allocator) error{OutOfMemory}!Mpz {
        return initSetUi(0);
    }

    pub fn deinit(self: *Mpz) void {
        if (self._mp_d != null and self._mp_alloc > 0) {
            bigint_allocator.free(self._mp_d[0..@intCast(self._mp_alloc)]);
            self._mp_d = null;
            self._mp_alloc = 0;
            self._mp_size = 0;
        }
    }

    pub fn initSet(_: std.mem.Allocator, value: anytype) error{OutOfMemory}!Mpz {
        const T = @TypeOf(value);
        if (T == *const Mpz or T == *Mpz) {
            return initCopy(value);
        } else if (T == Mpz) {
            return initCopy(&value);
        } else {
            if (value < 0) {
                return initSetSi(@intCast(value));
            } else {
                return initSetUi(@intCast(value));
            }
        }
    }

    pub fn initCopy(src: *const Mpz) error{OutOfMemory}!Mpz {
        var self = try initSetUi(0);
        try self.copy(src);
        return self;
    }

    pub fn initSetUi(value: usize) error{OutOfMemory}!Mpz {
        var self = Mpz{
            ._mp_alloc = 0,
            ._mp_size = 0,
            ._mp_d = null,
        };
        if (value == 0) return self;
        const limbs = bigint_allocator.alloc(Limb, 1) catch return error.OutOfMemory;
        limbs[0] = value;
        self._mp_d = limbs.ptr;
        self._mp_alloc = 1;
        self._mp_size = 1;
        return self;
    }

    pub fn initSetSi(value: i64) error{OutOfMemory}!Mpz {
        if (value >= 0) return initSetUi(@intCast(value));
        // Handle i64 min specially since -minInt(i64) overflows
        if (value == std.math.minInt(i64)) {
            // abs(minInt(i64)) = 2^63 = 9223372036854775808
            // This needs 2 limbs on 64-bit: limb[0] = 0, limb[1] = 2^63... no wait
            // Actually 2^63 = 0x8000000000000000 which fits in one usize limb
            const abs_val: usize = @as(usize, 1) << 63;
            var self = try initSetUi(abs_val);
            self._mp_size = -self._mp_size;
            return self;
        }
        const abs_val: usize = @intCast(-value);
        var self = try initSetUi(abs_val);
        self._mp_size = -self._mp_size;
        return self;
    }

    // ── Copy / Set ─────────────────────────────────────────────────────

    pub fn copy(self: *Mpz, other: *const Mpz) error{OutOfMemory}!void {
        const other_size: usize = @intCast(if (other._mp_size < 0) -other._mp_size else other._mp_size);
        if (other_size == 0) {
            self._mp_size = 0;
            return;
        }
        try ensureCapacity(self, other_size);
        @memcpy(self._mp_d[0..other_size], other._mp_d[0..other_size]);
        self._mp_size = other._mp_size;
    }

    pub fn set(self: *Mpz, value: anytype) error{OutOfMemory}!void {
        const T = @TypeOf(value);
        if (T == *const Mpz or T == *Mpz) {
            try self.copy(value);
        } else if (T == Mpz) {
            try self.copy(&value);
        } else {
            if (value < 0) {
                try setSi(self, @intCast(value));
            } else {
                try setUi(self, @intCast(value));
            }
        }
    }

    pub fn setUi(self: *Mpz, value: usize) error{OutOfMemory}!void {
        if (value == 0) {
            self._mp_size = 0;
            return;
        }
        try ensureCapacity(self, 1);
        self._mp_d[0] = value;
        self._mp_size = 1;
    }

    pub fn setSi(self: *Mpz, value: i64) error{OutOfMemory}!void {
        if (value >= 0) {
            try setUi(self, @intCast(value));
            return;
        }
        if (value == std.math.minInt(i64)) {
            const abs_val: usize = @as(usize, 1) << 63;
            try setUi(self, abs_val);
            self._mp_size = -self._mp_size;
            return;
        }
        const abs_val: usize = @intCast(-value);
        try setUi(self, abs_val);
        self._mp_size = -self._mp_size;
    }

    pub fn setStr(self: *Mpz, base: u8, str: []const u8) error{ OutOfMemory, InvalidCharacter }!void {
        var big = BigInt.Managed.init(bigint_allocator) catch return error.OutOfMemory;
        defer big.deinit();
        big.setString(base, str) catch return error.InvalidCharacter;
        try writeToMpz(self, &big);
    }

    // ── String output ──────────────────────────────────────────────────

    pub fn toString(self: *const Mpz, allocator: std.mem.Allocator, base: u8) error{ OutOfMemory, InvalidCharacter }![]u8 {
        var big = try readFromMpz(self);
        defer big.deinit();
        return big.toString(allocator, base, .lower) catch return error.OutOfMemory;
    }

    // ── Comparison ──────────────────────────────────────────────────────

    pub fn cmp(self: *const Mpz, other: *const Mpz) i8 {
        return @intCast(cmpMpz(self, other));
    }

    pub fn sgn(self: *const Mpz) i8 {
        if (self._mp_size > 0) return 1;
        if (self._mp_size < 0) return -1;
        return 0;
    }

    // ── Arithmetic ─────────────────────────────────────────────────────

    pub fn add(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.add(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn sub(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.sub(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn mul(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.mul(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn neg(self: *Mpz, a: *const Mpz) error{OutOfMemory}!void {
        try self.copy(a);
        self._mp_size = -self._mp_size;
    }

    pub fn abs(self: *Mpz, a: *const Mpz) error{OutOfMemory}!void {
        try self.copy(a);
        if (self._mp_size < 0) self._mp_size = -self._mp_size;
    }

    pub fn divTruncQR(self: *Mpz, q: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        var remainder = try BigInt.Managed.init(bigint_allocator);
        defer remainder.deinit();
        try BigInt.Managed.divTrunc(&result, &remainder, &big_a, &big_b);
        try writeToMpz(self, &result);
        try writeToMpz(q, &remainder);
    }

    pub fn divFloor(self: *Mpz, q: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        var remainder = try BigInt.Managed.init(bigint_allocator);
        defer remainder.deinit();
        try BigInt.Managed.divFloor(&result, &remainder, &big_a, &big_b);
        try writeToMpz(self, &result);
        try writeToMpz(q, &remainder);
    }

    pub fn divExact(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        var remainder = try BigInt.Managed.init(bigint_allocator);
        defer remainder.deinit();
        try BigInt.Managed.divFloor(&result, &remainder, &big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn ediv(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        // Euclidean division: r >= 0 always
        // a = b*q + r, where 0 <= r < |b|
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        var remainder = try BigInt.Managed.init(bigint_allocator);
        defer remainder.deinit();
        try BigInt.Managed.divFloor(&result, &remainder, &big_a, &big_b);
        // If remainder is negative, adjust: r_new = r + |b|, q_new = q ± 1
        // When b > 0: q_new = q - 1. When b < 0: q_new = q + 1.
        if (!remainder.isPositive() and remainder.len() > 0 and !(remainder.len() == 1 and remainder.limbs[0] == 0)) {
            var one = try BigInt.Managed.initSet(bigint_allocator, @as(usize, 1));
            defer one.deinit();
            if (big_b.isPositive()) {
                try result.sub(&result, &one);
            } else {
                try result.add(&result, &one);
            }
            try writeToMpz(self, &result);
        } else {
            try writeToMpz(self, &result);
        }
    }

    pub fn emod(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        // Euclidean modulo: r >= 0 always
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        var remainder = try BigInt.Managed.init(bigint_allocator);
        defer remainder.deinit();
        try BigInt.Managed.divFloor(&result, &remainder, &big_a, &big_b);
        // If remainder is negative, add |b| to remainder
        if (!remainder.isPositive() and remainder.len() > 0 and !(remainder.len() == 1 and remainder.limbs[0] == 0)) {
            var abs_b = try BigInt.Managed.init(bigint_allocator);
            defer abs_b.deinit();
            try abs_b.copy(big_b.toConst());
            if (!abs_b.isPositive()) {
                abs_b.metadata &= ~BigInt.Managed.sign_bit; // make positive
            }
            var new_remainder = try BigInt.Managed.init(bigint_allocator);
            defer new_remainder.deinit();
            try new_remainder.add(&remainder, &abs_b);
            try writeToMpz(self, &new_remainder);
        } else {
            try writeToMpz(self, &remainder);
        }
    }

    pub fn div2k(self: *Mpz, a: *const Mpz, k: usize) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.shiftRight(&big_a, k);
        try writeToMpz(self, &result);
    }

    pub fn mul2k(self: *Mpz, a: *const Mpz, k: usize) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.shiftLeft(&big_a, k);
        try writeToMpz(self, &result);
    }

    pub fn bitAnd(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.bitAnd(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn bitOr(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.bitOr(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn bitXor(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.bitXor(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    pub fn pow(self: *Mpz, a: *const Mpz, exp: u32) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.pow(&big_a, exp);
        try writeToMpz(self, &result);
    }

    pub fn gcd(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var big_a = try readFromMpz(a);
        defer big_a.deinit();
        var big_b = try readFromMpz(b);
        defer big_b.deinit();
        var result = try BigInt.Managed.init(bigint_allocator);
        defer result.deinit();
        try result.gcd(&big_a, &big_b);
        try writeToMpz(self, &result);
    }

    // ── Accessors ──────────────────────────────────────────────────────

    pub fn getLimb(self: *const Mpz, i: usize) usize {
        const abs_size: usize = @intCast(if (self._mp_size < 0) -self._mp_size else self._mp_size);
        if (i >= abs_size) return 0;
        return self._mp_d[i];
    }

    pub fn log2(self: *const Mpz) usize {
        if (self.sgn() <= 0) return 0;
        const abs_size: usize = @intCast(self._mp_size);
        const top_limb = self._mp_d[abs_size - 1];
        return (abs_size - 1) * @bitSizeOf(Limb) + (@bitSizeOf(Limb) - @clz(top_limb) - 1);
    }

    pub fn fitsSizeT(self: *const Mpz) bool {
        if (self._mp_size < 0) return false;
        return self._mp_size <= 1 and (self._mp_size == 0 or self._mp_d[0] <= std.math.maxInt(usize));
    }

    pub fn getSizeT(self: *const Mpz) error{OutOfMemory}!usize {
        if (self._mp_size <= 0) return 0;
        return self._mp_d[0];
    }

    pub fn fitsInt(self: *const Mpz) bool {
        if (self._mp_size == 0) return true;
        if (self._mp_size == 1) return self._mp_d[0] <= std.math.maxInt(i64);
        if (self._mp_size == -1) return self._mp_d[0] <= @as(usize, @intCast(std.math.maxInt(i64))) + 1;
        return false;
    }

    pub fn getInt(self: *const Mpz) error{OutOfMemory}!i64 {
        if (self._mp_size == 0) return 0;
        // `_mp_d[0]` is a `usize` limb. For negative values it can be
        // exactly 2^63 (representing -2^63 = Int64.minValue), which does
        // not fit in `i64` via `@intCast`. Bit-cast to `i64` and negate
        // with wrapping so the boundary case is handled correctly.
        const val: i64 = @bitCast(self._mp_d[0]);
        if (self._mp_size < 0) return 0 -% val;
        return val;
    }

    pub fn fitsUint(self: *const Mpz) bool {
        return self._mp_size >= 0 and self._mp_size <= 1;
    }

    pub fn getUint(self: *const Mpz) error{OutOfMemory}!u64 {
        if (self._mp_size <= 0) return 0;
        return self._mp_d[0];
    }

    /// Convert to f64 (double). Uses the top limbs to build the mantissa.
    pub fn getDouble(self: *const Mpz) f64 {
        if (self._mp_size == 0) return 0.0;
        const abs_size: usize = @intCast(if (self._mp_size < 0) -self._mp_size else self._mp_size);
        const negative = self._mp_size < 0;

        // Accumulate from most significant limb
        var result: f64 = 0.0;
        var i: usize = 0;
        while (i < abs_size) : (i += 1) {
            const idx = abs_size - 1 - i;
            result = result * @as(f64, @floatFromInt(std.math.maxInt(usize) + 1)) + @as(f64, @floatFromInt(self._mp_d[idx]));
        }
        if (negative) return -result;
        return result;
    }

    pub fn smodPow2(self: *Mpz, a: *const Mpz, k: usize) error{OutOfMemory}!void {
        if (k == 0) {
            self._mp_size = 0;
            return;
        }
        var big_a = try readFromMpz(a);
        defer big_a.deinit();

        // Compute a mod 2^k
        var modulus = try BigInt.Managed.initSet(bigint_allocator, @as(usize, 1));
        defer modulus.deinit();
        try modulus.shiftLeft(&modulus, k);

        var quotient = try BigInt.Managed.init(bigint_allocator);
        defer quotient.deinit();
        var remainder = try BigInt.Managed.init(bigint_allocator);
        defer remainder.deinit();
        try BigInt.Managed.divFloor(&quotient, &remainder, &big_a, &modulus);

        // Adjust to signed range [-2^(k-1), 2^(k-1))
        var half = try BigInt.Managed.initSet(bigint_allocator, @as(usize, 1));
        defer half.deinit();
        try half.shiftLeft(&half, k - 1);

        if (remainder.order(half) != .lt) {
            // remainder >= half, so subtract modulus
            var result = try BigInt.Managed.init(bigint_allocator);
            defer result.deinit();
            try result.copy(remainder.toConst());
            try result.sub(&remainder, &modulus);
            try writeToMpz(self, &result);
        } else {
            try writeToMpz(self, &remainder);
        }
    }
};

// ── Internal helpers ────────────────────────────────────────────────────────

fn ensureCapacity(self: *Mpz, needed: usize) error{OutOfMemory}!void {
    const current: usize = @intCast(self._mp_alloc);
    if (current >= needed) return;
    const new_cap = if (needed > 0) @max(needed, current * 2) else 1;
    if (self._mp_d == null or self._mp_alloc == 0) {
        const new_buf = bigint_allocator.alloc(Limb, new_cap) catch return error.OutOfMemory;
        self._mp_d = new_buf.ptr;
    } else {
        const old_buf = self._mp_d[0..current];
        const new_buf = bigint_allocator.realloc(old_buf, new_cap) catch return error.OutOfMemory;
        self._mp_d = new_buf.ptr;
    }
    self._mp_alloc = @intCast(new_cap);
}

fn cmpMpz(a: *const Mpz, b: *const Mpz) i32 {
    if (a._mp_size < b._mp_size) return -1;
    if (a._mp_size > b._mp_size) return 1;
    const abs_a: usize = @intCast(if (a._mp_size < 0) -a._mp_size else a._mp_size);
    const abs_b: usize = @intCast(if (b._mp_size < 0) -b._mp_size else b._mp_size);
    // Compare from most significant limb
    var i: usize = 0;
    while (i < abs_a) : (i += 1) {
        const idx = abs_a - 1 - i;
        if (a._mp_d[idx] < b._mp_d[idx]) return if (a._mp_size >= 0) -1 else 1;
        if (a._mp_d[idx] > b._mp_d[idx]) return if (a._mp_size >= 0) 1 else -1;
    }
    _ = abs_b;
    return 0;
}

/// Read from GMP-layout Mpz into a std.math.big.int.Managed
fn readFromMpz(src: *const Mpz) error{OutOfMemory}!BigInt.Managed {
    const abs_size: usize = @intCast(if (src._mp_size < 0) -src._mp_size else src._mp_size);
    if (abs_size == 0) {
        return BigInt.Managed.init(bigint_allocator) catch return error.OutOfMemory;
    }
    var big = BigInt.Managed.init(bigint_allocator) catch return error.OutOfMemory;
    errdefer big.deinit();
    big.ensureCapacity(abs_size) catch return error.OutOfMemory;
    @memcpy(big.limbs[0..abs_size], src._mp_d[0..abs_size]);
    big.metadata = if (src._mp_size < 0)
        abs_size | BigInt.Managed.sign_bit
    else
        abs_size;
    return big;
}

/// Write from std.math.big.int.Managed into GMP-layout Mpz
fn writeToMpz(dst: *Mpz, src: *const BigInt.Managed) error{OutOfMemory}!void {
    const src_len = src.len();
    if (src_len == 0 or (src_len == 1 and src.limbs[0] == 0)) {
        dst._mp_size = 0;
        return;
    }
    try ensureCapacity(dst, src_len);
    @memcpy(dst._mp_d[0..src_len], src.limbs[0..src_len]);
    dst._mp_size = @intCast(if (!src.isPositive()) -@as(isize, @intCast(src_len)) else @as(isize, @intCast(src_len)));
}

// ── Tests ───────────────────────────────────────────────────────────────────

test "big_int basic roundtrip" {
    var a = try Mpz.initSet(std.testing.allocator, @as(usize, 12345678901234567890));
    defer a.deinit();

    var b = try Mpz.initSet(std.testing.allocator, &a);
    defer b.deinit();

    try std.testing.expectEqual(@as(i8, 0), a.cmp(&b));
    try std.testing.expect(a.fitsSizeT());
    try std.testing.expectEqual(@as(usize, 12345678901234567890), try a.getSizeT());
}

test "big_int add" {
    var a = try Mpz.initSet(std.testing.allocator, @as(usize, 100));
    defer a.deinit();
    var b = try Mpz.initSet(std.testing.allocator, @as(usize, 200));
    defer b.deinit();
    var c = try Mpz.init(std.testing.allocator);
    defer c.deinit();
    try c.add(&a, &b);
    try std.testing.expectEqual(@as(usize, 300), try c.getSizeT());
}

test "big_int mul" {
    var a = try Mpz.initSet(std.testing.allocator, @as(usize, 123456789));
    defer a.deinit();
    var b = try Mpz.initSet(std.testing.allocator, @as(usize, 987654321));
    defer b.deinit();
    var c = try Mpz.init(std.testing.allocator);
    defer c.deinit();
    try c.mul(&a, &b);
    const s = try c.toString(std.testing.allocator, 10);
    defer std.testing.allocator.free(s);
    try std.testing.expectEqualStrings("121932631112635269", s);
}

test "big_int smodPow2 handles 64-bit signed truncation" {
    var a = try Mpz.initSet(std.testing.allocator, @as(i64, -1));
    defer a.deinit();
    var r = try Mpz.init(std.testing.allocator);
    defer r.deinit();
    try r.smodPow2(&a, 64);
    try std.testing.expectEqual(@as(i64, -1), try r.getInt());
}

test "big_int negative number" {
    var a = try Mpz.initSet(std.testing.allocator, @as(i64, -42));
    defer a.deinit();
    try std.testing.expectEqual(@as(i8, -1), a.sgn());
    try std.testing.expectEqual(@as(i64, -42), try a.getInt());
}

test "big_int setStr and toString" {
    var a = try Mpz.init(std.testing.allocator);
    defer a.deinit();
    try a.setStr(10, "123456789012345678901234567890");
    const s = try a.toString(std.testing.allocator, 10);
    defer std.testing.allocator.free(s);
    try std.testing.expectEqualStrings("123456789012345678901234567890", s);
}
