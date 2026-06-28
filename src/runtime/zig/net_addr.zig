// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");

const c = @import("runtime_c");

extern fn lean_mk_string(s: [*:0]const u8) callconv(.c) *anyopaque;

pub const force_link = true;

fn asString(s: *anyopaque) *const lean.lean_string_object {
    return @ptrCast(@alignCast(s));
}

fn stringBytes(s: *anyopaque) []const u8 {
    const str = asString(s);
    const size = if (str.m_size == 0) 0 else str.m_size - 1;
    const data: [*]const u8 = @ptrCast(&str.m_data);
    return data[0..size];
}

fn stringCStr(s: *anyopaque) [*:0]const u8 {
    return @ptrCast(&asString(s).m_data);
}

fn hasEmbeddedNul(s: *anyopaque) bool {
    return std.mem.len(stringCStr(s)) != stringBytes(s).len;
}

fn asArray(a: *anyopaque) *lean.lean_array_object {
    return @ptrCast(@alignCast(a));
}

fn arraySlots(a: *anyopaque) [*]?*anyopaque {
    return @ptrCast(&asArray(a).m_data);
}

fn mkOptionNone() *anyopaque {
    return object.lean_box(0).?;
}

fn mkOptionSome(value: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(result, 0, value);
    return result;
}

fn mkBoxedArray(comptime T: type, values: []const T) *anyopaque {
    const result = alloc.lean_alloc_array(values.len, values.len);
    const slots = arraySlots(result);
    for (values, 0..) |value, i| {
        slots[i] = object.lean_box(@intCast(value));
    }
    return result;
}

fn byteSpan(ptr: anytype, comptime len: usize) []u8 {
    const bytes: [*]u8 = @ptrCast(ptr);
    return bytes[0..len];
}

fn constByteSpan(ptr: anytype, comptime len: usize) []const u8 {
    const bytes: [*]const u8 = @ptrCast(ptr);
    return bytes[0..len];
}

fn ipv4AddrToBytes(ipv4_addr: *anyopaque, out: []u8) void {
    std.debug.assert(out.len == 4);
    const slots = arraySlots(ipv4_addr);
    for (0..4) |i| {
        out[i] = @intCast(object.lean_unbox(slots[i]));
    }
}

fn ipv6AddrToBytes(ipv6_addr: *anyopaque, out: []u8) void {
    std.debug.assert(out.len == 16);
    const slots = arraySlots(ipv6_addr);
    for (0..8) |i| {
        const segment: u16 = @intCast(object.lean_unbox(slots[i]));
        std.mem.writeInt(u16, out[i * 2 ..][0..2], segment, .big);
    }
}

fn mkIPv4AddrFromInAddr(addr: *const c.struct_in_addr) *anyopaque {
    const bytes = constByteSpan(addr, 4);
    return mkBoxedArray(u8, bytes);
}

fn mkIPv6AddrFromIn6Addr(addr: *const c.struct_in6_addr) *anyopaque {
    const bytes = constByteSpan(addr, 16);
    var segments: [8]u16 = undefined;
    for (0..8) |i| {
        segments[i] = std.mem.readInt(u16, bytes[i * 2 ..][0..2], .big);
    }
    return mkBoxedArray(u16, &segments);
}

fn isStrictIPv4DottedDecimal(bytes: []const u8) bool {
    if (bytes.len == 0) return false;

    var parts: usize = 0;
    var start: usize = 0;
    while (start <= bytes.len) {
        if (parts == 4) return false;

        var end = start;
        while (end < bytes.len and bytes[end] != '.') : (end += 1) {}

        const part = bytes[start..end];
        if (part.len == 0) return false;
        if (part.len > 1 and part[0] == '0') return false;

        var value: u32 = 0;
        for (part) |ch| {
            if (ch < '0' or ch > '9') return false;
            value = value * 10 + @as(u32, ch - '0');
            if (value > 255) return false;
        }

        parts += 1;
        if (end == bytes.len) break;
        start = end + 1;
    }

    return parts == 4;
}

// Std.Net.IPv4Addr.ofString (s : @&String) : Option IPv4Addr
fn lean_uv_pton_v4(str_obj: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(str_obj)) return mkOptionNone();
    if (!isStrictIPv4DottedDecimal(stringBytes(str_obj))) return mkOptionNone();

    var internal: c.struct_in_addr = undefined;
    if (c.inet_pton(c.AF_INET, stringCStr(str_obj), &internal) == 1) {
        return mkOptionSome(mkIPv4AddrFromInAddr(&internal));
    }
    return mkOptionNone();
}

// Std.Net.IPv4Addr.toString (addr : @&IPv4Addr) : String
fn lean_uv_ntop_v4(ipv4_addr: *anyopaque) callconv(.c) *anyopaque {
    var internal: c.struct_in_addr = undefined;
    ipv4AddrToBytes(ipv4_addr, byteSpan(&internal, 4)[0..4]);

    var dst: [c.INET_ADDRSTRLEN:0]u8 = undefined;
    if (c.inet_ntop(c.AF_INET, &internal, &dst, dst.len) == null) {
        @panic("inet_ntop(AF_INET) failed");
    }
    return lean_mk_string(&dst);
}

// Std.Net.IPv6Addr.ofString (s : @&String) : Option IPv6Addr
fn lean_uv_pton_v6(str_obj: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(str_obj)) return mkOptionNone();

    var internal: c.struct_in6_addr = undefined;
    if (c.inet_pton(c.AF_INET6, stringCStr(str_obj), &internal) == 1) {
        return mkOptionSome(mkIPv6AddrFromIn6Addr(&internal));
    }
    return mkOptionNone();
}

// Std.Net.IPv6Addr.toString (addr : @&IPv6Addr) : String
fn lean_uv_ntop_v6(ipv6_addr: *anyopaque) callconv(.c) *anyopaque {
    var internal: c.struct_in6_addr = undefined;
    ipv6AddrToBytes(ipv6_addr, byteSpan(&internal, 16)[0..16]);

    var dst: [c.INET6_ADDRSTRLEN:0]u8 = undefined;
    if (c.inet_ntop(c.AF_INET6, &internal, &dst, dst.len) == null) {
        @panic("inet_ntop(AF_INET6) failed");
    }
    return lean_mk_string(&dst);
}

// Std.Net.interfaceAddresses : IO (Array InterfaceAddress)
// Note: the runtime implementation used by Lean code is in src/runtime/uv/net_addr.cpp.
fn lean_uv_interface_addresses() callconv(.c) *anyopaque {
    return io_result.lean_io_result_mk_ok(alloc.lean_alloc_array(0, 0));
}

fn optionValue(opt: *anyopaque) !*anyopaque {
    try testing.expect(!object.lean_is_scalar(opt));
    try testing.expectEqual(@as(c_uint, 1), object.lean_obj_tag(opt));
    return ctor.lean_ctor_get(opt, 0).?;
}

fn testStringBytes(s: *anyopaque) []const u8 {
    return stringBytes(s);
}

test "IPv4 parse and render round-trip" {
    const input = lean_mk_string("127.0.0.1");
    defer rc.lean_dec(input);

    const parsed = lean_uv_pton_v4(input);
    defer rc.lean_dec(parsed);
    const addr = try optionValue(parsed);

    const rendered = lean_uv_ntop_v4(addr);
    defer rc.lean_dec(rendered);
    try testing.expectEqualStrings("127.0.0.1", testStringBytes(rendered));
}

test "IPv6 parse and render round-trip" {
    const input = lean_mk_string("2001:db8::1");
    defer rc.lean_dec(input);

    const parsed = lean_uv_pton_v6(input);
    defer rc.lean_dec(parsed);
    const addr = try optionValue(parsed);

    const rendered = lean_uv_ntop_v6(addr);
    defer rc.lean_dec(rendered);
    try testing.expectEqualStrings("2001:db8::1", testStringBytes(rendered));
}

test "invalid address parse returns none" {
    const input = lean_mk_string("not-an-ip-address");
    defer rc.lean_dec(input);

    const parsed = lean_uv_pton_v4(input);
    defer rc.lean_dec(parsed);
    try testing.expect(object.lean_is_scalar(parsed));
    try testing.expectEqual(@as(usize, 0), object.lean_unbox(parsed));
}

test "IPv4 parser rejects leading zero octets" {
    const input = lean_mk_string("192.168.001.1");
    defer rc.lean_dec(input);

    const parsed = lean_uv_pton_v4(input);
    defer rc.lean_dec(parsed);
    try testing.expect(object.lean_is_scalar(parsed));
    try testing.expectEqual(@as(usize, 0), object.lean_unbox(parsed));
}
