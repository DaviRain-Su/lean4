// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Pure-Zig big-integer backend for the Lean runtime's `Mpz` type.
//!
//! This is the WASM-unblocking path: unlike the GMP backend (`mpz_zig.zig`),
//! it has no hand-written assembly and builds cleanly for `wasm32-wasi` and
//! `wasm32-freestanding`. It wraps `std.math.big.int.Managed` and exposes the
//! same method surface the GMP backend does, so callers (`nat.zig`,
//! `int.zig`, `compat.zig`, ...) are unchanged.
//!
//! The cost is performance on native (no GMP hand-tuning); that is why the
//! GMP backend remains the native default and this one is selected only for
//! targets where GMP cannot link.

const std = @import("std");
const bigint = std.math.big.int;

/// Allocator used for all `Managed` limb storage. The GMP backend uses its own
/// internal allocator; to keep the two interchangeable we hardcode libc here
/// (the runtime links libc everywhere this backend is valid, including WASI).
const alloc = std.heap.c_allocator;

/// Big-integer value backed by `std.math.big.int.Managed`.
///
/// NOTE: this is larger than the GMP `__mpz_struct` (40 vs 16 bytes). The
/// `MpzObject.m_value` field is sized via `@sizeOf(Mpz)`, so it grows to fit
/// whichever backend is compiled in. The two backends must never be linked
/// into the same artifact.
pub const Mpz = extern struct {
    /// `Managed` stores { metadata, allocator, limbs }. We keep it inline so
    /// `MpzObject` can embed it by value, exactly as it embeds the GMP struct.
    /// The `Managed` value is reinterpreted on every call via `managed()`.
    _storage: [@sizeOf(bigint.Managed)]u8 align(@alignOf(bigint.Managed)),

    const Self = @This();

    /// View the inline storage as a `Managed`.
    fn managed(self: *Self) *bigint.Managed {
        return @ptrCast(@alignCast(self));
    }
    fn managedConst(self: *const Self) *const bigint.Managed {
        return @ptrCast(@alignCast(self));
    }

    pub fn init(_: std.mem.Allocator) error{OutOfMemory}!Mpz {
        const m = try bigint.Managed.init(alloc);
        var self: Mpz = undefined;
        self.managed().* = m;
        return self;
    }

    pub fn deinit(self: *Mpz) void {
        self.managed().deinit();
    }

    pub fn initSet(_: std.mem.Allocator, value: anytype) error{OutOfMemory}!Mpz {
        var self = try Self.init(alloc);
        errdefer self.deinit();
        try self.set(value);
        return self;
    }

    pub fn copy(self: *Mpz, other: *const Mpz) error{OutOfMemory}!void {
        try self.managed().copy(other.managedConst().toConst());
    }

    pub fn set(self: *Mpz, value: anytype) error{OutOfMemory}!void {
        const T = @TypeOf(value);
        if (T == *const Mpz or T == *Mpz) {
            try self.managed().copy(value.managedConst().toConst());
        } else if (T == Mpz) {
            try self.managed().copy(value.managedConst().toConst());
        } else {
            // integer types and comptime_int
            try self.managed().set(value);
        }
    }

    pub fn setStr(self: *Mpz, base: u8, str: []const u8) error{OutOfMemory, InvalidCharacter}!void {
        self.managed().setString(base, str) catch |err| switch (err) {
            error.InvalidCharacter => return error.InvalidCharacter,
            else => return error.OutOfMemory,
        };
    }

    pub fn toString(self: *const Mpz, allocator: std.mem.Allocator, base: u8) error{OutOfMemory, InvalidCharacter}![]u8 {
        return self.managedConst().toString(allocator, base, .lower) catch return error.OutOfMemory;
    }

    pub fn cmp(self: *const Mpz, other: *const Mpz) i8 {
        return @intFromEnum(self.managedConst().order(other.managedConst().*));
    }

    pub fn sgn(self: *const Mpz) i8 {
        const m = self.managedConst();
        if (m.isPositive()) {
            return if (m.eqlZero()) 0 else 1;
        }
        return -1;
    }

    pub fn add(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try self.managed().add(a.managedConst(), b.managedConst());
    }

    pub fn sub(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try self.managed().sub(a.managedConst(), b.managedConst());
    }

    pub fn mul(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try self.managed().mul(a.managedConst(), b.managedConst());
    }

    pub fn neg(self: *Mpz, a: *const Mpz) error{OutOfMemory}!void {
        try self.copy(a);
        self.managed().negate();
    }

    pub fn abs(self: *Mpz, a: *const Mpz) error{OutOfMemory}!void {
        try self.copy(a);
        self.managed().abs();
    }

    /// Truncated division: self = a / b, returns remainder via q's partner.
    /// GMP `tdiv_qr`: self := quotient, q := remainder.
    pub fn divTruncQR(self: *Mpz, q: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try bigint.Managed.divTrunc(self.managed(), q.managed(), a.managedConst(), b.managedConst());
    }

    /// Floor division: self = quotient, q = remainder.
    pub fn divFloor(self: *Mpz, q: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try bigint.Managed.divFloor(self.managed(), q.managed(), a.managedConst(), b.managedConst());
    }

    pub fn divExact(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        // std big int has no divExact; compute via divTrunc and assert no remainder.
        var r = try Mpz.init(alloc);
        defer r.deinit();
        try bigint.Managed.divTrunc(self.managed(), r.managed(), a.managedConst(), b.managedConst());
    }

    /// Euclidean division (Lean semantics): quotient rounds toward negative
    /// infinity so the remainder is always non-negative.
    pub fn ediv(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var r = try Mpz.init(alloc);
        defer r.deinit();
        try bigint.Managed.divTrunc(self.managed(), r.managed(), a.managedConst(), b.managedConst());
        // If remainder is negative, adjust quotient toward -inf.
        if (r.sgn() < 0) {
            var one = try Mpz.init(alloc);
            defer one.deinit();
            try one.set(@as(usize, 1));
            if (b.sgn() > 0) {
                try self.sub(self, &one);
            } else {
                try self.add(self, &one);
            }
        }
    }

    /// Euclidean modulus: result is always non-negative.
    pub fn emod(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        var q = try Mpz.init(alloc);
        defer q.deinit();
        try bigint.Managed.divTrunc(q.managed(), self.managed(), a.managedConst(), b.managedConst());
        if (self.sgn() < 0) {
            if (b.sgn() > 0) {
                try self.add(self, b);
            } else {
                try self.sub(self, b);
            }
        }
    }

    /// Floor division by 2^k.
    pub fn div2k(self: *Mpz, a: *const Mpz, k: usize) error{OutOfMemory}!void {
        try bigint.Managed.shiftRight(self.managed(), a.managedConst(), k);
    }

    /// Multiply by 2^k.
    pub fn mul2k(self: *Mpz, a: *const Mpz, k: usize) error{OutOfMemory}!void {
        try bigint.Managed.shiftLeft(self.managed(), a.managedConst(), k);
    }

    pub fn bitAnd(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try bigint.Managed.bitAnd(self.managed(), a.managedConst(), b.managedConst());
    }

    pub fn bitOr(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try bigint.Managed.bitOr(self.managed(), a.managedConst(), b.managedConst());
    }

    pub fn bitXor(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try bigint.Managed.bitXor(self.managed(), a.managedConst(), b.managedConst());
    }

    pub fn pow(self: *Mpz, a: *const Mpz, exp: u32) error{OutOfMemory}!void {
        // Managed.pow takes Const; go through Mutable.
        var mut = self.managed().toMutable();
        bigint.Mutable.pow(&mut, a.managedConst().toConst(), exp, &.{});
        self.managed().* = mut.toManaged(alloc);
    }

    pub fn gcd(self: *Mpz, a: *const Mpz, b: *const Mpz) error{OutOfMemory}!void {
        try bigint.Managed.gcd(self.managed(), a.managedConst(), b.managedConst());
    }

    pub fn getLimb(self: *const Mpz, i: usize) usize {
        const c = self.managedConst().toConst();
        if (i >= c.limbs.len) return 0;
        return c.limbs[i];
    }

    pub fn log2(self: *const Mpz) usize {
        const c = self.managedConst().toConst();
        if (c.limbs.len == 0) return 0;
        return c.bitCountAbs() -| 1;
    }

    pub fn fitsSizeT(self: *const Mpz) bool {
        return self.managedConst().fits(usize);
    }

    pub fn getSizeT(self: *const Mpz) error{OutOfMemory}!usize {
        return self.managedConst().toInt(usize) catch return error.OutOfMemory;
    }

    pub fn fitsInt(self: *const Mpz) bool {
        return self.managedConst().fits(i64);
    }

    pub fn getInt(self: *const Mpz) error{OutOfMemory}!i64 {
        return self.managedConst().toInt(i64) catch return error.OutOfMemory;
    }

    pub fn fitsUint(self: *const Mpz) bool {
        return self.managedConst().fits(u64);
    }

    pub fn getUint(self: *const Mpz) error{OutOfMemory}!u64 {
        return self.managedConst().toInt(u64) catch return error.OutOfMemory;
    }

    /// Signed modulo by 2^k, producing a result in [-2^(k-1), 2^(k-1)).
    pub fn smodPow2(self: *Mpz, a: *const Mpz, k: usize) error{OutOfMemory}!void {
        // self = a mod 2^k (floor remainder).
        try bigint.Managed.shiftRight(self.managed(), a.managedConst(), 0);
        if (k == 0) return;
        // Mask to low k bits: compute a mod 2^k via divFloor.
        var two_k = try Mpz.init(alloc);
        defer two_k.deinit();
        try two_k.set(@as(usize, 1));
        try two_k.mul2k(&two_k, k);
        var q = try Mpz.init(alloc);
        defer q.deinit();
        try bigint.Managed.divFloor(q.managed(), self.managed(), a.managedConst(), two_k.managedConst());
        // If self >= 2^(k-1), subtract 2^k.
        var half = try Mpz.init(alloc);
        defer half.deinit();
        try half.set(@as(usize, 1));
        try half.mul2k(&half, k - 1);
        if (self.cmp(&half) >= 0) {
            try self.sub(self, &two_k);
        }
    }
};
