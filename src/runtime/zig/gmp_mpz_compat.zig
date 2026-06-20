// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! GMP-compatible `__gmpz_*` implementation backed by `std.math.big.int`.
//!
//! The `__mpz_struct` layout is binary-compatible with GMP so that C++
//! `lean::mpz` objects and the Zig `mpz_zig` wrapper can use it transparently.
//! Limbs are allocated with libc malloc/realloc/free.

const std = @import("std");
const BigInt = std.math.big.int;

const temp_allocator = std.heap.c_allocator;

/// GMP's `mp_limb_t` is `unsigned long` on 64-bit platforms, i.e. `usize`.
const Limb = usize;

/// Binary-compatible with GMP's `__mpz_struct`.
const Mpz = extern struct {
    _mp_alloc: c_int,
    _mp_size: c_int,
    _mp_d: [*c]Limb,
};

const mpz_ptr = *Mpz;
const mpz_srcptr = *const Mpz;

// ── Limb allocation helpers ─────────────────────────────────────────────────

fn ensureCapacity(x: mpz_ptr, needed: usize) void {
    const current: usize = @intCast(x._mp_alloc);
    if (current >= needed) return;
    const new_cap = if (needed > 0) @max(needed, current * 2) else 1;
    if (x._mp_d == null or x._mp_alloc == 0) {
        const ptr = std.c.malloc(new_cap * @sizeOf(Limb));
        x._mp_d = @ptrCast(@alignCast(ptr.?));
    } else {
        const old = x._mp_d[0..current];
        const ptr = std.c.realloc(@ptrCast(old.ptr), new_cap * @sizeOf(Limb));
        x._mp_d = @ptrCast(@alignCast(ptr.?));
    }
    x._mp_alloc = @intCast(new_cap);
}

fn absSize(x: mpz_srcptr) usize {
    const s = x._mp_size;
    return @intCast(if (s < 0) -s else s);
}

fn clearMpz(x: mpz_ptr) void {
    if (x._mp_d != null and x._mp_alloc > 0) {
        std.c.free(@ptrCast(x._mp_d));
        x._mp_d = null;
        x._mp_alloc = 0;
    }
    x._mp_size = 0;
}

fn initMpz(x: mpz_ptr) void {
    const ptr = std.c.malloc(@sizeOf(Limb));
    x._mp_d = @ptrCast(@alignCast(ptr.?));
    x._mp_alloc = 1;
    x._mp_size = 0;
    x._mp_d[0] = 0;
}

fn copyMpz(dst: mpz_ptr, src: mpz_srcptr) void {
    const n = absSize(src);
    if (n == 0) {
        dst._mp_size = 0;
        return;
    }
    ensureCapacity(dst, n);
    @memcpy(dst._mp_d[0..n], src._mp_d[0..n]);
    dst._mp_size = src._mp_size;
}

// ── Conversion to/from std.math.big.int ─────────────────────────────────────

fn readFromMpz(src: mpz_srcptr) BigInt.Managed {
    const n = absSize(src);
    if (n == 0) {
        return BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    }
    var big = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    errdefer big.deinit();
    big.ensureCapacity(n) catch @panic("gmp_mpz_compat: OOM");
    @memcpy(big.limbs[0..n], src._mp_d[0..n]);
    big.metadata = if (src._mp_size < 0)
        n | BigInt.Managed.sign_bit
    else
        n;
    return big;
}

fn writeToMpz(dst: mpz_ptr, src: *const BigInt.Managed) void {
    const src_len = src.len();
    if (src_len == 0 or (src_len == 1 and src.limbs[0] == 0)) {
        dst._mp_size = 0;
        return;
    }
    ensureCapacity(dst, src_len);
    @memcpy(dst._mp_d[0..src_len], src.limbs[0..src_len]);
    dst._mp_size = @intCast(if (!src.isPositive()) -@as(isize, @intCast(src_len)) else @as(isize, @intCast(src_len)));
}

// ── Initialization / assignment ─────────────────────────────────────────────

fn gmpzInit(x: mpz_ptr) callconv(.c) void {
    initMpz(x);
}

fn gmpzClear(x: mpz_ptr) callconv(.c) void {
    clearMpz(x);
}

fn gmpzSet(dst: mpz_ptr, src: mpz_srcptr) callconv(.c) void {
    copyMpz(dst, src);
}

fn gmpzSetUi(dst: mpz_ptr, v: c_ulong) callconv(.c) void {
    if (v == 0) {
        dst._mp_size = 0;
        return;
    }
    ensureCapacity(dst, 1);
    dst._mp_d[0] = @intCast(v);
    dst._mp_size = 1;
}

fn gmpzSetSi(dst: mpz_ptr, v: c_long) callconv(.c) void {
    if (v >= 0) {
        gmpzSetUi(dst, @intCast(v));
        return;
    }
    if (v == std.math.minInt(c_long)) {
        const abs_val: usize = @as(usize, 1) << (@bitSizeOf(c_long) - 1);
        ensureCapacity(dst, 1);
        dst._mp_d[0] = abs_val;
        dst._mp_size = -1;
        return;
    }
    const abs_val: usize = @intCast(-v);
    ensureCapacity(dst, 1);
    dst._mp_d[0] = abs_val;
    dst._mp_size = -1;
}

fn gmpzSetStr(dst: mpz_ptr, str: [*:0]const u8, base: c_int) callconv(.c) c_int {
    var big = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer big.deinit();
    const b: u8 = @intCast(base);
    big.setString(b, std.mem.span(str)) catch return -1;
    writeToMpz(dst, &big);
    return 0;
}

fn gmpzInitSet(dst: mpz_ptr, src: mpz_srcptr) callconv(.c) void {
    initMpz(dst);
    copyMpz(dst, src);
}

fn gmpzInitSetUi(dst: mpz_ptr, v: c_ulong) callconv(.c) void {
    initMpz(dst);
    gmpzSetUi(dst, v);
}

fn gmpzInitSetSi(dst: mpz_ptr, v: c_long) callconv(.c) void {
    initMpz(dst);
    gmpzSetSi(dst, v);
}

fn gmpzInitSetStr(dst: mpz_ptr, str: [*:0]const u8, base: c_int) callconv(.c) c_int {
    initMpz(dst);
    return gmpzSetStr(dst, str, base);
}

fn gmpzSwap(a: mpz_ptr, b: mpz_ptr) callconv(.c) void {
    const tmp = a.*;
    a.* = b.*;
    b.* = tmp;
}

// ── Comparison ──────────────────────────────────────────────────────────────

fn cmpMpz(a: mpz_srcptr, b: mpz_srcptr) c_int {
    if (a._mp_size < b._mp_size) return -1;
    if (a._mp_size > b._mp_size) return 1;
    if (a._mp_size == 0) return 0;
    const n = absSize(a);
    var i: usize = n;
    while (i > 0) {
        i -= 1;
        const al = a._mp_d[i];
        const bl = b._mp_d[i];
        if (al != bl) {
            if (al < bl) {
                return if (a._mp_size > 0) -1 else 1;
            } else {
                return if (a._mp_size > 0) 1 else -1;
            }
        }
    }
    return 0;
}

fn gmpzCmp(a: mpz_srcptr, b: mpz_srcptr) callconv(.c) c_int {
    return cmpMpz(a, b);
}

fn gmpzCmpUi(a: mpz_srcptr, v: c_ulong) callconv(.c) c_int {
    if (a._mp_size < 0) return -1;
    if (a._mp_size == 0) return if (v == 0) 0 else -1;
    if (a._mp_size > 1) return 1;
    const av = a._mp_d[0];
    const uv: usize = @intCast(v);
    if (av == uv) return 0;
    return if (av > uv) 1 else -1;
}

fn gmpzCmpSi(a: mpz_srcptr, v: c_long) callconv(.c) c_int {
    if (a._mp_size < 0 and v >= 0) return -1;
    if (a._mp_size > 0 and v <= 0) return 1;
    if (a._mp_size == 0) {
        if (v == 0) return 0;
        return if (v > 0) -1 else 1;
    }
    const n = absSize(a);
    if (n > 1) {
        return if (a._mp_size > 0) 1 else -1;
    }
    const av = a._mp_d[0];
    const abs_v: usize = if (v == std.math.minInt(c_long))
        @as(usize, 1) << (@bitSizeOf(c_long) - 1)
    else if (v < 0)
        @intCast(-v)
    else
        @intCast(v);
    if (av == abs_v) return 0;
    if (a._mp_size > 0) {
        return if (av > abs_v) 1 else -1;
    } else {
        return if (av > abs_v) -1 else 1;
    }
}

// ── Accessors / predicates ──────────────────────────────────────────────────

fn gmpzFitsSintP(a: mpz_srcptr) callconv(.c) c_int {
    if (a._mp_size == 0) return 1;
    if (a._mp_size == 1) return @intFromBool(a._mp_d[0] <= std.math.maxInt(c_int));
    if (a._mp_size == -1) {
        const limit: usize = @as(usize, @intCast(std.math.maxInt(c_int))) + 1;
        return @intFromBool(a._mp_d[0] <= limit);
    }
    return 0;
}

fn gmpzFitsUintP(a: mpz_srcptr) callconv(.c) c_int {
    if (a._mp_size < 0) return 0;
    if (a._mp_size == 0) return 1;
    if (a._mp_size > 1) return 0;
    return @intFromBool(a._mp_d[0] <= std.math.maxInt(c_uint));
}

fn gmpzFitsSlongP(a: mpz_srcptr) callconv(.c) c_int {
    if (a._mp_size == 0) return 1;
    if (a._mp_size == 1) return @intFromBool(a._mp_d[0] <= std.math.maxInt(c_long));
    if (a._mp_size == -1) {
        const limit: usize = @as(usize, @intCast(std.math.maxInt(c_long))) + 1;
        return @intFromBool(a._mp_d[0] <= limit);
    }
    return 0;
}

fn gmpzFitsUlongP(a: mpz_srcptr) callconv(.c) c_int {
    if (a._mp_size < 0) return 0;
    return @intFromBool(a._mp_size <= 1);
}

fn gmpzGetSi(a: mpz_srcptr) callconv(.c) c_long {
    if (a._mp_size == 0) return 0;
    const limb = a._mp_d[0];
    const val: c_long = @bitCast(limb);
    if (a._mp_size > 0) return val;
    return 0 -% val;
}

fn gmpzGetUi(a: mpz_srcptr) callconv(.c) c_ulong {
    if (a._mp_size == 0) return 0;
    return @intCast(a._mp_d[0]);
}

fn gmpzGetD(a: mpz_srcptr) callconv(.c) f64 {
    if (a._mp_size == 0) return 0.0;
    const n = absSize(a);
    const negative = a._mp_size < 0;
    const base: f64 = @floatFromInt(std.math.maxInt(usize) + 1);
    var r: f64 = 0.0;
    var i: usize = 0;
    while (i < n) : (i += 1) {
        const idx = n - 1 - i;
        r = r * base + @as(f64, @floatFromInt(a._mp_d[idx]));
    }
    return if (negative) -r else r;
}

fn gmpzGetlimbn(a: mpz_srcptr, n: usize) callconv(.c) c_ulong {
    const sz = absSize(a);
    if (n >= sz) return 0;
    return @intCast(a._mp_d[n]);
}

fn gmpzSize(a: mpz_srcptr) callconv(.c) usize {
    return absSize(a);
}

// ── String output ───────────────────────────────────────────────────────────

fn gmpzSizeinbase(a: mpz_srcptr, base: c_int) callconv(.c) usize {
    if (base == 2) {
        const n = absSize(a);
        if (n == 0) return 1;
        const top = a._mp_d[n - 1];
        const bits = (n - 1) * @bitSizeOf(Limb) + (@bitSizeOf(Limb) - @clz(top));
        return bits + if (a._mp_size < 0) @as(usize, 1) else 0;
    }
    var big = readFromMpz(a);
    defer big.deinit();
    const str = big.toString(temp_allocator, @intCast(base), .lower) catch @panic("gmp_mpz_compat: OOM");
    defer temp_allocator.free(str);
    return str.len + if (a._mp_size < 0) @as(usize, 1) else 0;
}

fn gmpzGetStr(buf: ?[*:0]u8, base: c_int, a: mpz_srcptr) callconv(.c) [*:0]u8 {
    var big = readFromMpz(a);
    defer big.deinit();
    const str = big.toString(temp_allocator, @intCast(base), .lower) catch @panic("gmp_mpz_compat: OOM");
    defer temp_allocator.free(str);
    const len = str.len;
    var out: [*]u8 = undefined;
    if (buf) |b| {
        out = b;
    } else {
        const ptr = std.c.malloc(len + 1);
        out = @ptrCast(@alignCast(ptr.?));
    }
    @memcpy(out[0..len], str);
    out[len] = 0;
    return @ptrCast(out);
}

// ── Arithmetic ──────────────────────────────────────────────────────────────

fn gmpzAdd(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.add(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzAddUi(r: mpz_ptr, a: mpz_srcptr, v: c_ulong) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = BigInt.Managed.initSet(temp_allocator, @as(usize, @intCast(v))) catch @panic("gmp_mpz_compat: OOM");
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.add(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzSub(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.sub(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzSubUi(r: mpz_ptr, a: mpz_srcptr, v: c_ulong) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = BigInt.Managed.initSet(temp_allocator, @as(usize, @intCast(v))) catch @panic("gmp_mpz_compat: OOM");
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.sub(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzMul(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.mul(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzMulSi(r: mpz_ptr, a: mpz_srcptr, v: c_long) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = BigInt.Managed.initSet(temp_allocator, @as(c_long, v)) catch @panic("gmp_mpz_compat: OOM");
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.mul(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzMulUi(r: mpz_ptr, a: mpz_srcptr, v: c_ulong) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = BigInt.Managed.initSet(temp_allocator, @as(usize, @intCast(v))) catch @panic("gmp_mpz_compat: OOM");
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.mul(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzMul2exp(r: mpz_ptr, a: mpz_srcptr, k: c_ulong) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.shiftLeft(&big_a, @intCast(k)) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzPowUi(r: mpz_ptr, a: mpz_srcptr, exp: c_ulong) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.pow(&big_a, @intCast(exp)) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzUiPowUi(r: mpz_ptr, base: c_ulong, exp: c_ulong) callconv(.c) void {
    var big_b = BigInt.Managed.initSet(temp_allocator, @as(usize, @intCast(base))) catch @panic("gmp_mpz_compat: OOM");
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.pow(&big_b, @intCast(exp)) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzDivexact(q: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divTrunc(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(q, &result);
}

fn divBy2Exp(comptime floor: bool, q: mpz_ptr, a: mpz_srcptr, k: c_ulong) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var modulus = BigInt.Managed.initSet(temp_allocator, @as(usize, 1)) catch @panic("gmp_mpz_compat: OOM");
    defer modulus.deinit();
    modulus.shiftLeft(&modulus, @intCast(k)) catch @panic("gmp_mpz_compat: OOM");
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    if (floor) {
        BigInt.Managed.divFloor(&result, &rem, &big_a, &modulus) catch @panic("gmp_mpz_compat: OOM");
    } else {
        BigInt.Managed.divTrunc(&result, &rem, &big_a, &modulus) catch @panic("gmp_mpz_compat: OOM");
    }
    writeToMpz(q, &result);
}

fn gmpzTdivQ2exp(q: mpz_ptr, a: mpz_srcptr, k: c_ulong) callconv(.c) void {
    divBy2Exp(false, q, a, k);
}

fn gmpzTdivQ(q: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divTrunc(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(q, &result);
}

fn gmpzTdivQui(q: mpz_ptr, a: mpz_srcptr, d: c_ulong) callconv(.c) c_ulong {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_d = BigInt.Managed.initSet(temp_allocator, @as(usize, @intCast(d))) catch @panic("gmp_mpz_compat: OOM");
    defer big_d.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divTrunc(&result, &rem, &big_a, &big_d) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(q, &result);
    const rem_len = rem.len();
    if (rem_len == 0) return 0;
    return @intCast(rem.limbs[0]);
}

fn gmpzTdivQr(q: mpz_ptr, r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divTrunc(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(q, &result);
    writeToMpz(r, &rem);
}

fn gmpzTdivR(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divTrunc(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &rem);
}

fn gmpzFdivQ2exp(q: mpz_ptr, a: mpz_srcptr, k: c_ulong) callconv(.c) void {
    divBy2Exp(true, q, a, k);
}

fn gmpzFdivR2exp(r: mpz_ptr, a: mpz_srcptr, k: c_ulong) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var modulus = BigInt.Managed.initSet(temp_allocator, @as(usize, 1)) catch @panic("gmp_mpz_compat: OOM");
    defer modulus.deinit();
    modulus.shiftLeft(&modulus, @intCast(k)) catch @panic("gmp_mpz_compat: OOM");
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divFloor(&result, &rem, &big_a, &modulus) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &rem);
}

fn gmpzFdivQr(q: mpz_ptr, r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divFloor(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(q, &result);
    writeToMpz(r, &rem);
}

fn gmpzFdivQ(q: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divFloor(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(q, &result);
}

fn gmpzFdivR(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    var rem = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer rem.deinit();
    BigInt.Managed.divFloor(&result, &rem, &big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &rem);
}

fn gmpzAnd(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.bitAnd(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzIor(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.bitOr(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzXor(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.bitXor(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

fn gmpzNeg(r: mpz_ptr, a: mpz_srcptr) callconv(.c) void {
    const n = absSize(a);
    if (n == 0) {
        r._mp_size = 0;
        return;
    }
    ensureCapacity(r, n);
    @memcpy(r._mp_d[0..n], a._mp_d[0..n]);
    r._mp_size = -a._mp_size;
}

fn gmpzAbs(r: mpz_ptr, a: mpz_srcptr) callconv(.c) void {
    const n = absSize(a);
    if (n == 0) {
        r._mp_size = 0;
        return;
    }
    ensureCapacity(r, n);
    @memcpy(r._mp_d[0..n], a._mp_d[0..n]);
    r._mp_size = @intCast(n);
}

fn gmpzGcd(r: mpz_ptr, a: mpz_srcptr, b: mpz_srcptr) callconv(.c) void {
    var big_a = readFromMpz(a);
    defer big_a.deinit();
    var big_b = readFromMpz(b);
    defer big_b.deinit();
    var result = BigInt.Managed.init(temp_allocator) catch @panic("gmp_mpz_compat: OOM");
    defer result.deinit();
    result.gcd(&big_a, &big_b) catch @panic("gmp_mpz_compat: OOM");
    writeToMpz(r, &result);
}

// ── Exports ─────────────────────────────────────────────────────────────────

comptime {
    @export(&gmpzInit, .{ .name = "__gmpz_init", .linkage = .strong });
    @export(&gmpzClear, .{ .name = "__gmpz_clear", .linkage = .strong });
    @export(&gmpzSet, .{ .name = "__gmpz_set", .linkage = .strong });
    @export(&gmpzSetSi, .{ .name = "__gmpz_set_si", .linkage = .strong });
    @export(&gmpzSetUi, .{ .name = "__gmpz_set_ui", .linkage = .strong });
    @export(&gmpzSetStr, .{ .name = "__gmpz_set_str", .linkage = .strong });
    @export(&gmpzInitSet, .{ .name = "__gmpz_init_set", .linkage = .strong });
    @export(&gmpzInitSetSi, .{ .name = "__gmpz_init_set_si", .linkage = .strong });
    @export(&gmpzInitSetUi, .{ .name = "__gmpz_init_set_ui", .linkage = .strong });
    @export(&gmpzInitSetStr, .{ .name = "__gmpz_init_set_str", .linkage = .strong });
    @export(&gmpzSwap, .{ .name = "__gmpz_swap", .linkage = .strong });

    @export(&gmpzAdd, .{ .name = "__gmpz_add", .linkage = .strong });
    @export(&gmpzAddUi, .{ .name = "__gmpz_add_ui", .linkage = .strong });
    @export(&gmpzSub, .{ .name = "__gmpz_sub", .linkage = .strong });
    @export(&gmpzSubUi, .{ .name = "__gmpz_sub_ui", .linkage = .strong });
    @export(&gmpzMul, .{ .name = "__gmpz_mul", .linkage = .strong });
    @export(&gmpzMulSi, .{ .name = "__gmpz_mul_si", .linkage = .strong });
    @export(&gmpzMulUi, .{ .name = "__gmpz_mul_ui", .linkage = .strong });
    @export(&gmpzMul2exp, .{ .name = "__gmpz_mul_2exp", .linkage = .strong });
    @export(&gmpzPowUi, .{ .name = "__gmpz_pow_ui", .linkage = .strong });
    @export(&gmpzUiPowUi, .{ .name = "__gmpz_ui_pow_ui", .linkage = .strong });
    @export(&gmpzDivexact, .{ .name = "__gmpz_divexact", .linkage = .strong });
    @export(&gmpzTdivQ, .{ .name = "__gmpz_tdiv_q", .linkage = .strong });
    @export(&gmpzTdivQui, .{ .name = "__gmpz_tdiv_q_ui", .linkage = .strong });
    @export(&gmpzTdivQr, .{ .name = "__gmpz_tdiv_qr", .linkage = .strong });
    @export(&gmpzTdivR, .{ .name = "__gmpz_tdiv_r", .linkage = .strong });
    @export(&gmpzTdivQ2exp, .{ .name = "__gmpz_tdiv_q_2exp", .linkage = .strong });
    @export(&gmpzFdivQ2exp, .{ .name = "__gmpz_fdiv_q_2exp", .linkage = .strong });
    @export(&gmpzFdivR2exp, .{ .name = "__gmpz_fdiv_r_2exp", .linkage = .strong });
    @export(&gmpzFdivQr, .{ .name = "__gmpz_fdiv_qr", .linkage = .strong });
    @export(&gmpzFdivQ, .{ .name = "__gmpz_fdiv_q", .linkage = .strong });
    @export(&gmpzFdivR, .{ .name = "__gmpz_fdiv_r", .linkage = .strong });

    @export(&gmpzAnd, .{ .name = "__gmpz_and", .linkage = .strong });
    @export(&gmpzIor, .{ .name = "__gmpz_ior", .linkage = .strong });
    @export(&gmpzXor, .{ .name = "__gmpz_xor", .linkage = .strong });

    @export(&gmpzCmp, .{ .name = "__gmpz_cmp", .linkage = .strong });
    @export(&gmpzCmpSi, .{ .name = "__gmpz_cmp_si", .linkage = .strong });
    @export(&gmpzCmpUi, .{ .name = "__gmpz_cmp_ui", .linkage = .strong });
    @export(&gmpzFitsSintP, .{ .name = "__gmpz_fits_sint_p", .linkage = .strong });
    @export(&gmpzFitsUintP, .{ .name = "__gmpz_fits_uint_p", .linkage = .strong });
    @export(&gmpzFitsSlongP, .{ .name = "__gmpz_fits_slong_p", .linkage = .strong });
    @export(&gmpzFitsUlongP, .{ .name = "__gmpz_fits_ulong_p", .linkage = .strong });
    @export(&gmpzGetSi, .{ .name = "__gmpz_get_si", .linkage = .strong });
    @export(&gmpzGetUi, .{ .name = "__gmpz_get_ui", .linkage = .strong });
    @export(&gmpzGetD, .{ .name = "__gmpz_get_d", .linkage = .strong });
    @export(&gmpzGetlimbn, .{ .name = "__gmpz_getlimbn", .linkage = .strong });
    @export(&gmpzSize, .{ .name = "__gmpz_size", .linkage = .strong });
    @export(&gmpzSizeinbase, .{ .name = "__gmpz_sizeinbase", .linkage = .strong });
    @export(&gmpzGetStr, .{ .name = "__gmpz_get_str", .linkage = .strong });

    @export(&gmpzNeg, .{ .name = "__gmpz_neg", .linkage = .strong });
    @export(&gmpzAbs, .{ .name = "__gmpz_abs", .linkage = .strong });
    @export(&gmpzGcd, .{ .name = "__gmpz_gcd", .linkage = .strong });
}
