// Int (big-int → signed fixed-width) conversion helpers.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const mpz_object = @import("mpz_object.zig");
const mpz_zig = @import("mpz_zig");
const object = @import("object.zig");

const max_small_int: i64 = if (@sizeOf(usize) == 8) std.math.maxInt(c_int) else std.math.maxInt(c_int) >> 1;
const min_small_int: i64 = if (@sizeOf(usize) == 8) std.math.minInt(c_int) else std.math.minInt(c_int) >> 1;

extern fn lean_big_int64_to_int(n: i64) callconv(.c) *anyopaque;

fn panicOutOfMemory() noreturn {
    @panic("bignum: out of memory");
}

fn scalarToInt64(o: *anyopaque) i64 {
    const raw: u32 = @truncate(object.lean_unbox(o));
    const signed: i32 = @bitCast(raw);
    return signed;
}

fn intToMpz(o: *anyopaque) mpz_zig.Mpz {
    if (object.lean_is_scalar(o)) {
        return mpz_zig.Mpz.initSet(std.heap.c_allocator, scalarToInt64(o)) catch panicOutOfMemory();
    }

    var value = mpz_zig.Mpz.init(std.heap.c_allocator) catch panicOutOfMemory();
    value.copy(mpz_object.mpzValue(o)) catch panicOutOfMemory();
    return value;
}

fn truncateSigned(comptime T: type, o: *anyopaque) T {
    var value = intToMpz(o);
    defer value.deinit();

    var truncated = mpz_zig.Mpz.init(std.heap.c_allocator) catch panicOutOfMemory();
    defer truncated.deinit();
    truncated.smodPow2(&value, @bitSizeOf(T)) catch panicOutOfMemory();
    return @intCast(truncated.getInt() catch unreachable);
}

fn int64ToLean(value: i64) *anyopaque {
    if (min_small_int <= value and value <= max_small_int) {
        const small: c_int = @intCast(value);
        const bits: u32 = @bitCast(small);
        return object.lean_box(bits).?;
    }
    return lean_big_int64_to_int(value);
}

fn signedFromLeanInt(comptime U: type, comptime S: type, a: *anyopaque) U {
    const value: S = if (object.lean_is_scalar(a))
        @truncate(scalarToInt64(a))
    else
        @intCast(truncateSigned(S, a));
    return @bitCast(value);
}

fn signedFromLeanNat(comptime U: type, comptime S: type, a: *anyopaque) U {
    const value: S = if (object.lean_is_scalar(a))
        @bitCast(@as(U, @truncate(object.lean_unbox(a))))
    else
        @intCast(truncateSigned(S, a));
    return @bitCast(value);
}

fn signedToLeanInt(comptime U: type, comptime S: type, a: U) *anyopaque {
    const value: S = @bitCast(a);
    return int64ToLean(@intCast(value));
}

fn signedDiv(comptime U: type, comptime S: type, a: U, b: U) U {
    const lhs: S = @bitCast(a);
    const rhs: S = @bitCast(b);
    if (rhs == 0) return 0;
    if (lhs == std.math.minInt(S) and rhs == -1) return @bitCast(lhs);
    return @bitCast(@divTrunc(lhs, rhs));
}

fn signedMod(comptime U: type, comptime S: type, a: U, b: U) U {
    const lhs: S = @bitCast(a);
    const rhs: S = @bitCast(b);
    if (rhs == 0) return @bitCast(lhs);
    if (lhs == std.math.minInt(S) and rhs == -1) return 0;
    return @bitCast(@rem(lhs, rhs));
}

fn signedShiftAmount(comptime U: type, comptime S: type, b: U) std.math.Log2Int(U) {
    const rhs: S = @bitCast(b);
    const bits: S = @intCast(@bitSizeOf(U));
    return @intCast(@mod(rhs, bits));
}

fn signedShiftRight(comptime U: type, comptime S: type, a: U, b: U) U {
    const lhs: S = @bitCast(a);
    return @bitCast(lhs >> signedShiftAmount(U, S, b));
}

fn signedShiftLeft(comptime U: type, comptime S: type, a: U, b: U) U {
    return a << signedShiftAmount(U, S, b);
}

fn signedAbs(comptime U: type, comptime S: type, a: U) U {
    const value: S = @bitCast(a);
    return if (value < 0) 0 -% a else a;
}

fn signedDecLt(comptime U: type, comptime S: type, a: U, b: U) u8 {
    return @intFromBool(@as(S, @bitCast(a)) < @as(S, @bitCast(b)));
}

fn signedDecLe(comptime U: type, comptime S: type, a: U, b: U) u8 {
    return @intFromBool(@as(S, @bitCast(a)) <= @as(S, @bitCast(b)));
}

fn signedToSigned(comptime FromU: type, comptime FromS: type, comptime ToU: type, comptime ToS: type, a: FromU) ToU {
    const value: FromS = @bitCast(a);
    return @bitCast(@as(ToS, @truncate(value)));
}

fn signedToFloat(comptime U: type, comptime S: type, comptime F: type, a: U) F {
    return @floatFromInt(@as(S, @bitCast(a)));
}

export fn lean_int8_of_big_int(a: *anyopaque) callconv(.c) i8 {
    return truncateSigned(i8, a);
}

export fn lean_int16_of_big_int(a: *anyopaque) callconv(.c) i16 {
    return truncateSigned(i16, a);
}

export fn lean_int32_of_big_int(a: *anyopaque) callconv(.c) i32 {
    return truncateSigned(i32, a);
}

export fn lean_int64_of_big_int(a: *anyopaque) callconv(.c) i64 {
    return truncateSigned(i64, a);
}

export fn lean_isize_of_big_int(a: *anyopaque) callconv(.c) isize {
    return truncateSigned(isize, a);
}

pub export fn lean_bool_to_int8(a: u8) callconv(.c) u8 {
    return a;
}
pub export fn lean_bool_to_int16(a: u8) callconv(.c) u16 {
    return a;
}
pub export fn lean_bool_to_int32(a: u8) callconv(.c) u32 {
    return a;
}
pub export fn lean_bool_to_int64(a: u8) callconv(.c) u64 {
    return a;
}
pub export fn lean_bool_to_isize(a: u8) callconv(.c) usize {
    return a;
}

pub export fn lean_int8_of_int(a: *anyopaque) callconv(.c) u8 {
    return signedFromLeanInt(u8, i8, a);
}
pub export fn lean_int8_of_nat(a: *anyopaque) callconv(.c) u8 {
    return signedFromLeanNat(u8, i8, a);
}
pub export fn lean_int8_to_int(a: u8) callconv(.c) *anyopaque {
    return signedToLeanInt(u8, i8, a);
}
pub export fn lean_int8_neg(a: u8) callconv(.c) u8 {
    return 0 -% a;
}
pub export fn lean_int8_add(a: u8, b: u8) callconv(.c) u8 {
    return a +% b;
}
pub export fn lean_int8_sub(a: u8, b: u8) callconv(.c) u8 {
    return a -% b;
}
pub export fn lean_int8_mul(a: u8, b: u8) callconv(.c) u8 {
    return a *% b;
}
pub export fn lean_int8_div(a: u8, b: u8) callconv(.c) u8 {
    return signedDiv(u8, i8, a, b);
}
pub export fn lean_int8_mod(a: u8, b: u8) callconv(.c) u8 {
    return signedMod(u8, i8, a, b);
}
pub export fn lean_int8_land(a: u8, b: u8) callconv(.c) u8 {
    return a & b;
}
pub export fn lean_int8_lor(a: u8, b: u8) callconv(.c) u8 {
    return a | b;
}
pub export fn lean_int8_xor(a: u8, b: u8) callconv(.c) u8 {
    return a ^ b;
}
pub export fn lean_int8_shift_right(a: u8, b: u8) callconv(.c) u8 {
    return signedShiftRight(u8, i8, a, b);
}
pub export fn lean_int8_shift_left(a: u8, b: u8) callconv(.c) u8 {
    return signedShiftLeft(u8, i8, a, b);
}
pub export fn lean_int8_complement(a: u8) callconv(.c) u8 {
    return ~a;
}
pub export fn lean_int8_abs(a: u8) callconv(.c) u8 {
    return signedAbs(u8, i8, a);
}
pub export fn lean_int8_dec_eq(a: u8, b: u8) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_int8_dec_lt(a: u8, b: u8) callconv(.c) u8 {
    return signedDecLt(u8, i8, a, b);
}
pub export fn lean_int8_dec_le(a: u8, b: u8) callconv(.c) u8 {
    return signedDecLe(u8, i8, a, b);
}
pub export fn lean_int8_to_int16(a: u8) callconv(.c) u16 {
    return signedToSigned(u8, i8, u16, i16, a);
}
pub export fn lean_int8_to_int32(a: u8) callconv(.c) u32 {
    return signedToSigned(u8, i8, u32, i32, a);
}
pub export fn lean_int8_to_int64(a: u8) callconv(.c) u64 {
    return signedToSigned(u8, i8, u64, i64, a);
}
pub export fn lean_int8_to_isize(a: u8) callconv(.c) usize {
    return signedToSigned(u8, i8, usize, isize, a);
}
pub export fn lean_int8_to_float(a: u8) callconv(.c) f64 {
    return signedToFloat(u8, i8, f64, a);
}
pub export fn lean_int8_to_float32(a: u8) callconv(.c) f32 {
    return signedToFloat(u8, i8, f32, a);
}

pub export fn lean_int16_of_int(a: *anyopaque) callconv(.c) u16 {
    return signedFromLeanInt(u16, i16, a);
}
pub export fn lean_int16_of_nat(a: *anyopaque) callconv(.c) u16 {
    return signedFromLeanNat(u16, i16, a);
}
pub export fn lean_int16_to_int(a: u16) callconv(.c) *anyopaque {
    return signedToLeanInt(u16, i16, a);
}
pub export fn lean_int16_neg(a: u16) callconv(.c) u16 {
    return 0 -% a;
}
pub export fn lean_int16_add(a: u16, b: u16) callconv(.c) u16 {
    return a +% b;
}
pub export fn lean_int16_sub(a: u16, b: u16) callconv(.c) u16 {
    return a -% b;
}
pub export fn lean_int16_mul(a: u16, b: u16) callconv(.c) u16 {
    return a *% b;
}
pub export fn lean_int16_div(a: u16, b: u16) callconv(.c) u16 {
    return signedDiv(u16, i16, a, b);
}
pub export fn lean_int16_mod(a: u16, b: u16) callconv(.c) u16 {
    return signedMod(u16, i16, a, b);
}
pub export fn lean_int16_land(a: u16, b: u16) callconv(.c) u16 {
    return a & b;
}
pub export fn lean_int16_lor(a: u16, b: u16) callconv(.c) u16 {
    return a | b;
}
pub export fn lean_int16_xor(a: u16, b: u16) callconv(.c) u16 {
    return a ^ b;
}
pub export fn lean_int16_shift_right(a: u16, b: u16) callconv(.c) u16 {
    return signedShiftRight(u16, i16, a, b);
}
pub export fn lean_int16_shift_left(a: u16, b: u16) callconv(.c) u16 {
    return signedShiftLeft(u16, i16, a, b);
}
pub export fn lean_int16_complement(a: u16) callconv(.c) u16 {
    return ~a;
}
pub export fn lean_int16_abs(a: u16) callconv(.c) u16 {
    return signedAbs(u16, i16, a);
}
pub export fn lean_int16_dec_eq(a: u16, b: u16) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_int16_dec_lt(a: u16, b: u16) callconv(.c) u8 {
    return signedDecLt(u16, i16, a, b);
}
pub export fn lean_int16_dec_le(a: u16, b: u16) callconv(.c) u8 {
    return signedDecLe(u16, i16, a, b);
}
pub export fn lean_int16_to_int8(a: u16) callconv(.c) u8 {
    return signedToSigned(u16, i16, u8, i8, a);
}
pub export fn lean_int16_to_int32(a: u16) callconv(.c) u32 {
    return signedToSigned(u16, i16, u32, i32, a);
}
pub export fn lean_int16_to_int64(a: u16) callconv(.c) u64 {
    return signedToSigned(u16, i16, u64, i64, a);
}
pub export fn lean_int16_to_isize(a: u16) callconv(.c) usize {
    return signedToSigned(u16, i16, usize, isize, a);
}
pub export fn lean_int16_to_float(a: u16) callconv(.c) f64 {
    return signedToFloat(u16, i16, f64, a);
}
pub export fn lean_int16_to_float32(a: u16) callconv(.c) f32 {
    return signedToFloat(u16, i16, f32, a);
}

pub export fn lean_int32_of_int(a: *anyopaque) callconv(.c) u32 {
    return signedFromLeanInt(u32, i32, a);
}
pub export fn lean_int32_of_nat(a: *anyopaque) callconv(.c) u32 {
    return signedFromLeanNat(u32, i32, a);
}
pub export fn lean_int32_to_int(a: u32) callconv(.c) *anyopaque {
    return signedToLeanInt(u32, i32, a);
}
pub export fn lean_int32_neg(a: u32) callconv(.c) u32 {
    return 0 -% a;
}
pub export fn lean_int32_add(a: u32, b: u32) callconv(.c) u32 {
    return a +% b;
}
pub export fn lean_int32_sub(a: u32, b: u32) callconv(.c) u32 {
    return a -% b;
}
pub export fn lean_int32_mul(a: u32, b: u32) callconv(.c) u32 {
    return a *% b;
}
pub export fn lean_int32_div(a: u32, b: u32) callconv(.c) u32 {
    return signedDiv(u32, i32, a, b);
}
pub export fn lean_int32_mod(a: u32, b: u32) callconv(.c) u32 {
    return signedMod(u32, i32, a, b);
}
pub export fn lean_int32_land(a: u32, b: u32) callconv(.c) u32 {
    return a & b;
}
pub export fn lean_int32_lor(a: u32, b: u32) callconv(.c) u32 {
    return a | b;
}
pub export fn lean_int32_xor(a: u32, b: u32) callconv(.c) u32 {
    return a ^ b;
}
pub export fn lean_int32_shift_right(a: u32, b: u32) callconv(.c) u32 {
    return signedShiftRight(u32, i32, a, b);
}
pub export fn lean_int32_shift_left(a: u32, b: u32) callconv(.c) u32 {
    return signedShiftLeft(u32, i32, a, b);
}
pub export fn lean_int32_complement(a: u32) callconv(.c) u32 {
    return ~a;
}
pub export fn lean_int32_abs(a: u32) callconv(.c) u32 {
    return signedAbs(u32, i32, a);
}
pub export fn lean_int32_dec_eq(a: u32, b: u32) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_int32_dec_lt(a: u32, b: u32) callconv(.c) u8 {
    return signedDecLt(u32, i32, a, b);
}
pub export fn lean_int32_dec_le(a: u32, b: u32) callconv(.c) u8 {
    return signedDecLe(u32, i32, a, b);
}
pub export fn lean_int32_to_int8(a: u32) callconv(.c) u8 {
    return signedToSigned(u32, i32, u8, i8, a);
}
pub export fn lean_int32_to_int16(a: u32) callconv(.c) u16 {
    return signedToSigned(u32, i32, u16, i16, a);
}
pub export fn lean_int32_to_int64(a: u32) callconv(.c) u64 {
    return signedToSigned(u32, i32, u64, i64, a);
}
pub export fn lean_int32_to_isize(a: u32) callconv(.c) usize {
    return signedToSigned(u32, i32, usize, isize, a);
}
pub export fn lean_int32_to_float(a: u32) callconv(.c) f64 {
    return signedToFloat(u32, i32, f64, a);
}
pub export fn lean_int32_to_float32(a: u32) callconv(.c) f32 {
    return signedToFloat(u32, i32, f32, a);
}

pub export fn lean_int64_of_int(a: *anyopaque) callconv(.c) u64 {
    return signedFromLeanInt(u64, i64, a);
}
pub export fn lean_int64_of_nat(a: *anyopaque) callconv(.c) u64 {
    return signedFromLeanNat(u64, i64, a);
}
pub export fn lean_int64_to_int(a: i64) callconv(.c) *anyopaque {
    return int64ToLean(a);
}
pub export fn lean_int64_to_int_sint(a: u64) callconv(.c) *anyopaque {
    return signedToLeanInt(u64, i64, a);
}
pub export fn lean_int64_neg(a: u64) callconv(.c) u64 {
    return 0 -% a;
}
pub export fn lean_int64_add(a: u64, b: u64) callconv(.c) u64 {
    return a +% b;
}
pub export fn lean_int64_sub(a: u64, b: u64) callconv(.c) u64 {
    return a -% b;
}
pub export fn lean_int64_mul(a: u64, b: u64) callconv(.c) u64 {
    return a *% b;
}
pub export fn lean_int64_div(a: u64, b: u64) callconv(.c) u64 {
    return signedDiv(u64, i64, a, b);
}
pub export fn lean_int64_mod(a: u64, b: u64) callconv(.c) u64 {
    return signedMod(u64, i64, a, b);
}
pub export fn lean_int64_land(a: u64, b: u64) callconv(.c) u64 {
    return a & b;
}
pub export fn lean_int64_lor(a: u64, b: u64) callconv(.c) u64 {
    return a | b;
}
pub export fn lean_int64_xor(a: u64, b: u64) callconv(.c) u64 {
    return a ^ b;
}
pub export fn lean_int64_shift_right(a: u64, b: u64) callconv(.c) u64 {
    return signedShiftRight(u64, i64, a, b);
}
pub export fn lean_int64_shift_left(a: u64, b: u64) callconv(.c) u64 {
    return signedShiftLeft(u64, i64, a, b);
}
pub export fn lean_int64_complement(a: u64) callconv(.c) u64 {
    return ~a;
}
pub export fn lean_int64_abs(a: u64) callconv(.c) u64 {
    return signedAbs(u64, i64, a);
}
pub export fn lean_int64_dec_eq(a: u64, b: u64) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_int64_dec_lt(a: u64, b: u64) callconv(.c) u8 {
    return signedDecLt(u64, i64, a, b);
}
pub export fn lean_int64_dec_le(a: u64, b: u64) callconv(.c) u8 {
    return signedDecLe(u64, i64, a, b);
}
pub export fn lean_int64_to_int8(a: u64) callconv(.c) u8 {
    return signedToSigned(u64, i64, u8, i8, a);
}
pub export fn lean_int64_to_int16(a: u64) callconv(.c) u16 {
    return signedToSigned(u64, i64, u16, i16, a);
}
pub export fn lean_int64_to_int32(a: u64) callconv(.c) u32 {
    return signedToSigned(u64, i64, u32, i32, a);
}
pub export fn lean_int64_to_isize(a: u64) callconv(.c) usize {
    return signedToSigned(u64, i64, usize, isize, a);
}
pub export fn lean_int64_to_float(a: u64) callconv(.c) f64 {
    return signedToFloat(u64, i64, f64, a);
}
pub export fn lean_int64_to_float32(a: u64) callconv(.c) f32 {
    return signedToFloat(u64, i64, f32, a);
}

pub export fn lean_isize_of_int(a: *anyopaque) callconv(.c) usize {
    return signedFromLeanInt(usize, isize, a);
}
pub export fn lean_isize_of_nat(a: *anyopaque) callconv(.c) usize {
    return signedFromLeanNat(usize, isize, a);
}
pub export fn lean_isize_to_int(a: usize) callconv(.c) *anyopaque {
    return signedToLeanInt(usize, isize, a);
}
pub export fn lean_isize_neg(a: usize) callconv(.c) usize {
    return 0 -% a;
}
pub export fn lean_isize_add(a: usize, b: usize) callconv(.c) usize {
    return a +% b;
}
pub export fn lean_isize_sub(a: usize, b: usize) callconv(.c) usize {
    return a -% b;
}
pub export fn lean_isize_mul(a: usize, b: usize) callconv(.c) usize {
    return a *% b;
}
pub export fn lean_isize_div(a: usize, b: usize) callconv(.c) usize {
    return signedDiv(usize, isize, a, b);
}
pub export fn lean_isize_mod(a: usize, b: usize) callconv(.c) usize {
    return signedMod(usize, isize, a, b);
}
pub export fn lean_isize_land(a: usize, b: usize) callconv(.c) usize {
    return a & b;
}
pub export fn lean_isize_lor(a: usize, b: usize) callconv(.c) usize {
    return a | b;
}
pub export fn lean_isize_xor(a: usize, b: usize) callconv(.c) usize {
    return a ^ b;
}
pub export fn lean_isize_shift_right(a: usize, b: usize) callconv(.c) usize {
    return signedShiftRight(usize, isize, a, b);
}
pub export fn lean_isize_shift_left(a: usize, b: usize) callconv(.c) usize {
    return signedShiftLeft(usize, isize, a, b);
}
pub export fn lean_isize_complement(a: usize) callconv(.c) usize {
    return ~a;
}
pub export fn lean_isize_abs(a: usize) callconv(.c) usize {
    return signedAbs(usize, isize, a);
}
pub export fn lean_isize_dec_eq(a: usize, b: usize) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_isize_dec_lt(a: usize, b: usize) callconv(.c) u8 {
    return signedDecLt(usize, isize, a, b);
}
pub export fn lean_isize_dec_le(a: usize, b: usize) callconv(.c) u8 {
    return signedDecLe(usize, isize, a, b);
}
pub export fn lean_isize_to_int8(a: usize) callconv(.c) u8 {
    return signedToSigned(usize, isize, u8, i8, a);
}
pub export fn lean_isize_to_int16(a: usize) callconv(.c) u16 {
    return signedToSigned(usize, isize, u16, i16, a);
}
pub export fn lean_isize_to_int32(a: usize) callconv(.c) u32 {
    return signedToSigned(usize, isize, u32, i32, a);
}
pub export fn lean_isize_to_int64(a: usize) callconv(.c) u64 {
    return signedToSigned(usize, isize, u64, i64, a);
}
pub export fn lean_isize_to_float(a: usize) callconv(.c) f64 {
    return signedToFloat(usize, isize, f64, a);
}
pub export fn lean_isize_to_float32(a: usize) callconv(.c) f32 {
    return signedToFloat(usize, isize, f32, a);
}

fn freeIntResult(o: *anyopaque) void {
    if (object.lean_is_scalar(o)) return;
    alloc.lean_free_object(o);
}

test "signed width conversions use two's-complement low bits" {
    const negative = mpz_object.lean_alloc_mpz();
    defer alloc.lean_free_object(negative);
    try mpz_object.mpzValue(negative).setStr(16, "-10000000000000000123456789ABCDEF0");

    try testing.expectEqual(@as(i8, 0x10), lean_int8_of_big_int(negative));
    try testing.expectEqual(@as(i16, 0x2110), lean_int16_of_big_int(negative));
    try testing.expectEqual(@as(i32, 0x65432110), lean_int32_of_big_int(negative));
    try testing.expectEqual(@as(i64, @bitCast(@as(u64, 0xedcba98765432110))), lean_int64_of_big_int(negative));
    try testing.expectEqual(@as(usize, 8), @sizeOf(usize));
    try testing.expectEqual(@as(isize, @bitCast(@as(usize, 0xedcba98765432110))), lean_isize_of_big_int(negative));
}

test "signed width conversions keep negative ones and positives" {
    const neg_one = mpz_object.lean_alloc_mpz();
    defer freeIntResult(neg_one);
    try mpz_object.mpzValue(neg_one).set(@as(i8, -1));
    try testing.expectEqual(@as(i8, -1), lean_int8_of_big_int(neg_one));
    try testing.expectEqual(@as(i16, -1), lean_int16_of_big_int(neg_one));
    try testing.expectEqual(@as(i32, -1), lean_int32_of_big_int(neg_one));
    try testing.expectEqual(@as(i64, -1), lean_int64_of_big_int(neg_one));
    try testing.expectEqual(@as(isize, -1), lean_isize_of_big_int(neg_one));

    const positive = mpz_object.lean_alloc_mpz();
    defer freeIntResult(positive);
    try mpz_object.mpzValue(positive).setStr(10, "18446744073709551617");
    try testing.expectEqual(@as(i8, 1), lean_int8_of_big_int(positive));
    try testing.expectEqual(@as(i16, 1), lean_int16_of_big_int(positive));
    try testing.expectEqual(@as(i32, 1), lean_int32_of_big_int(positive));
    try testing.expectEqual(@as(i64, 1), lean_int64_of_big_int(positive));
    try testing.expectEqual(@as(isize, 1), lean_isize_of_big_int(positive));
}

test "signed fixed-width helpers wrap compare and sign extend like lean.h" {
    try testing.expectEqual(@as(u8, 0x80), lean_int8_add(0x7f, 1));
    try testing.expectEqual(@as(u8, 0x7f), lean_int8_abs(0x81));
    try testing.expectEqual(@as(u8, 1), lean_int8_dec_lt(0xff, 0));
    try testing.expectEqual(@as(u16, 0xffff), lean_int8_to_int16(0xff));
    try testing.expectEqual(@as(u32, 0xffff8000), lean_int16_to_int32(0x8000));
    try testing.expectEqual(@as(u64, 0xffff_ffff_8000_0000), lean_int32_to_int64(0x8000_0000));
    try testing.expectEqual(@as(u8, 0xc0), lean_int8_shift_right(0x80, 1));
    try testing.expectEqual(@as(u8, 0x80), lean_int8_div(0x80, 0xff));
    try testing.expectEqual(@as(u8, 0), lean_int8_div(0x80, 0));
    try testing.expectEqual(@as(u64, 0x8000_0000_0000_0000), lean_int64_div(0x8000_0000_0000_0000, 0xffff_ffff_ffff_ffff));
    try testing.expectEqual(@as(u64, 0), lean_int64_mod(0x8000_0000_0000_0000, 0xffff_ffff_ffff_ffff));
}
