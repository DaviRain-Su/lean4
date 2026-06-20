// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");
const io_error = @import("io_error.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");

const c = @cImport({
    @cInclude("arpa/inet.h");
    @cInclude("netinet/in.h");
    @cInclude("uv.h");
});

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

fn mkCtor1(tag: u16, obj: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(tag, 1, 0);
    ctor.lean_ctor_set(result, 0, obj);
    return result;
}

pub const InAddrStorage = extern union {
    ipv4: c.struct_in_addr,
    ipv6: c.struct_in6_addr,
};

fn ipv4AddrToInAddr(ipv4_addr: *anyopaque, out: *c.struct_in_addr) void {
    out.s_addr = 0;
    const slots = arraySlots(ipv4_addr);
    var i: usize = 0;
    while (i < 4) : (i += 1) {
        const octet: u32 = @intCast(object.lean_unbox(slots[i]));
        out.s_addr |= octet << @intCast((3 - i) * 8);
    }
    out.s_addr = c.htonl(out.s_addr);
}

fn ipv6AddrToIn6Addr(ipv6_addr: *anyopaque, out: *c.struct_in6_addr) void {
    var buf: [16]u8 = undefined;
    const slots = arraySlots(ipv6_addr);
    for (0..8) |i| {
        const segment: u16 = @intCast(object.lean_unbox(slots[i]));
        std.mem.writeInt(u16, buf[i * 2 ..][0..2], segment, .big);
    }
    @memcpy(@as([*]u8, @ptrCast(out))[0..16], &buf);
}

pub export fn lean_zig_ipv4_addr_to_in_addr(ipv4_addr: *anyopaque, out: *c.struct_in_addr) callconv(.c) void {
    ipv4AddrToInAddr(ipv4_addr, out);
}

pub export fn lean_zig_ipv6_addr_to_in6_addr(ipv6_addr: *anyopaque, out: *c.struct_in6_addr) callconv(.c) void {
    ipv6AddrToIn6Addr(ipv6_addr, out);
}

pub export fn lean_zig_ip_addr_to_in_addr_storage(ip_addr: *anyopaque, type_out: *c_int, out: *InAddrStorage) callconv(.c) void {
    const ip_obj = ctor.lean_ctor_get(ip_addr, 0).?;
    if (object.lean_ptr_tag(ip_addr) == 0) {
        ipv4AddrToInAddr(ip_obj, &out.ipv4);
        type_out.* = c.AF_INET;
    } else {
        ipv6AddrToIn6Addr(ip_obj, &out.ipv6);
        type_out.* = c.AF_INET6;
    }
}

pub export fn lean_zig_ip_addr_ntop(ip_addr: *anyopaque, buffer: [*]u8, buffer_size: usize) callconv(.c) void {
    var ip_type: c_int = undefined;
    var storage: InAddrStorage = undefined;
    lean_zig_ip_addr_to_in_addr_storage(ip_addr, &ip_type, &storage);
    const ret = c.uv_inet_ntop(ip_type, @ptrCast(&storage), buffer, buffer_size);
    std.debug.assert(ret == 0);
}

fn mkSocketAddressInner(ip_addr: *anyopaque, port: u16) *anyopaque {
    const socket_addr = alloc.lean_alloc_ctor(0, 1, @sizeOf(u16));
    ctor.lean_ctor_set(socket_addr, 0, ip_addr);
    ctor.lean_ctor_set_uint16(socket_addr, @sizeOf(?*anyopaque), port);
    return socket_addr;
}

pub export fn lean_zig_socket_address_to_sockaddr_storage(ip_addr: *anyopaque, out: *c.sockaddr_storage) callconv(.c) void {
    out.* = std.mem.zeroes(c.sockaddr_storage);

    const socket_addr_obj = ctor.lean_ctor_get(ip_addr, 0).?;
    const ip_addr_obj = ctor.lean_ctor_get(socket_addr_obj, 0).?;
    const port_obj = ctor.lean_ctor_get_uint16(socket_addr_obj, @sizeOf(?*anyopaque));

    if (object.lean_ptr_tag(ip_addr) == 0) {
        const cast: *c.sockaddr_in = @ptrCast(@alignCast(out));
        ipv4AddrToInAddr(ip_addr_obj, &cast.sin_addr);
        cast.sin_family = c.AF_INET;
        cast.sin_port = c.htons(port_obj);
    } else {
        const cast: *c.sockaddr_in6 = @ptrCast(@alignCast(out));
        ipv6AddrToIn6Addr(ip_addr_obj, &cast.sin6_addr);
        cast.sin6_family = c.AF_INET6;
        cast.sin6_port = c.htons(port_obj);
    }
}

pub export fn lean_zig_in_addr_to_ipv4_addr(ipv4_addr: *const c.struct_in_addr) callconv(.c) *anyopaque {
    const hostaddr = c.ntohl(ipv4_addr.s_addr);
    var octets: [4]u8 = undefined;
    var i: usize = 0;
    while (i < 4) : (i += 1) {
        octets[i] = @truncate(hostaddr >> @intCast((3 - i) * 8));
    }
    return mkBoxedArray(u8, &octets);
}

pub export fn lean_zig_in6_addr_to_ipv6_addr(ipv6_addr: *const c.struct_in6_addr) callconv(.c) *anyopaque {
    const bytes = constByteSpan(ipv6_addr, 16);
    var segments: [8]u16 = undefined;
    var i: usize = 0;
    while (i < 16) : (i += 2) {
        const part1: u16 = bytes[i];
        const part2: u16 = bytes[i + 1];
        const combined = (part2 << 8) | part1;
        segments[i / 2] = c.ntohs(combined);
    }
    return mkBoxedArray(u16, &segments);
}

pub export fn lean_zig_phys_addr_to_mac_addr(phys_addr: [*]u8) callconv(.c) *anyopaque {
    return mkBoxedArray(u8, phys_addr[0..6]);
}

pub export fn lean_zig_in_addr_storage_to_ip_addr(family: c_short, ip_addr: *anyopaque) callconv(.c) *anyopaque {
    const storage: *InAddrStorage = @ptrCast(@alignCast(ip_addr));
    const part: *anyopaque = if (family == c.AF_INET)
        lean_zig_in_addr_to_ipv4_addr(&storage.ipv4)
    else if (family == c.AF_INET6)
        lean_zig_in6_addr_to_ipv6_addr(&storage.ipv6)
    else
        @panic("unsupported address family");
    const tag: u16 = if (family == c.AF_INET6) 1 else 0;
    return mkCtor1(tag, part);
}

pub export fn lean_zig_sockaddr_to_socketaddress(sockaddr: *const c.sockaddr) callconv(.c) *anyopaque {
    if (sockaddr.sa_family == c.AF_INET) {
        const addr_in: *const c.sockaddr_in = @ptrCast(@alignCast(sockaddr));
        const lean_ipv4 = lean_zig_in_addr_to_ipv4_addr(&addr_in.sin_addr);
        const port = c.ntohs(addr_in.sin_port);
        const part = mkSocketAddressInner(lean_ipv4, port);
        return mkCtor1(0, part);
    } else if (sockaddr.sa_family == c.AF_INET6) {
        const addr_in6: *const c.sockaddr_in6 = @ptrCast(@alignCast(sockaddr));
        const lean_ipv6 = lean_zig_in6_addr_to_ipv6_addr(&addr_in6.sin6_addr);
        const port = c.ntohs(addr_in6.sin6_port);
        const part = mkSocketAddressInner(lean_ipv6, port);
        return mkCtor1(1, part);
    }
    @panic("unsupported sockaddr family");
}

fn mkIPv4AddrFromInAddr(addr: *const c.struct_in_addr) *anyopaque {
    return lean_zig_in_addr_to_ipv4_addr(addr);
}

fn mkIPv6AddrFromIn6Addr(addr: *const c.struct_in6_addr) *anyopaque {
    return lean_zig_in6_addr_to_ipv6_addr(addr);
}

fn mkIpAddrFromInAddrStorage(family: c_int, addr: *anyopaque) *anyopaque {
    return lean_zig_in_addr_storage_to_ip_addr(@intCast(family), @ptrCast(@alignCast(addr)));
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
pub fn lean_uv_pton_v4(str_obj: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(str_obj)) return mkOptionNone();
    if (!isStrictIPv4DottedDecimal(stringBytes(str_obj))) return mkOptionNone();

    var internal: c.struct_in_addr = undefined;
    if (c.inet_pton(c.AF_INET, stringCStr(str_obj), &internal) == 1) {
        return mkOptionSome(mkIPv4AddrFromInAddr(&internal));
    }
    return mkOptionNone();
}

// Std.Net.IPv4Addr.toString (addr : @&IPv4Addr) : String
pub fn lean_uv_ntop_v4(ipv4_addr: *anyopaque) callconv(.c) *anyopaque {
    var internal: c.struct_in_addr = undefined;
    ipv4AddrToBytes(ipv4_addr, byteSpan(&internal, 4)[0..4]);

    var dst: [c.INET_ADDRSTRLEN:0]u8 = undefined;
    if (c.inet_ntop(c.AF_INET, &internal, &dst, dst.len) == null) {
        @panic("inet_ntop(AF_INET) failed");
    }
    return lean_mk_string(&dst);
}

// Std.Net.IPv6Addr.ofString (s : @&String) : Option IPv6Addr
pub fn lean_uv_pton_v6(str_obj: *anyopaque) callconv(.c) *anyopaque {
    if (hasEmbeddedNul(str_obj)) return mkOptionNone();

    var internal: c.struct_in6_addr = undefined;
    if (c.inet_pton(c.AF_INET6, stringCStr(str_obj), &internal) == 1) {
        return mkOptionSome(mkIPv6AddrFromIn6Addr(&internal));
    }
    return mkOptionNone();
}

// Std.Net.IPv6Addr.toString (addr : @&IPv6Addr) : String
pub fn lean_uv_ntop_v6(ipv6_addr: *anyopaque) callconv(.c) *anyopaque {
    var internal: c.struct_in6_addr = undefined;
    ipv6AddrToBytes(ipv6_addr, byteSpan(&internal, 16)[0..16]);

    var dst: [c.INET6_ADDRSTRLEN:0]u8 = undefined;
    if (c.inet_ntop(c.AF_INET6, &internal, &dst, dst.len) == null) {
        @panic("inet_ntop(AF_INET6) failed");
    }
    return lean_mk_string(&dst);
}

// Std.Net.interfaceAddresses : IO (Array InterfaceAddress)
pub fn lean_uv_interface_addresses() callconv(.c) *anyopaque {
    var info: [*c]c.uv_interface_address_t = undefined;
    var count: c_int = 0;

    if (c.uv_interface_addresses(&info, &count) != 0) {
        return io_result.lean_io_result_mk_error(io_error.lean_mk_io_error_invalid_argument(0, lean_mk_string("failed to get interface addresses")));
    }
    defer c.uv_free_interface_addresses(info, count);

    var arr = alloc.lean_alloc_array(0, @intCast(count));
    for (0..@intCast(count)) |i| {
        var iface = info[i];
        const sin_family = iface.address.address4.sin_family;
        if (sin_family != c.AF_INET and sin_family != c.AF_INET6) continue;

        const socket_address: *anyopaque = if (sin_family == c.AF_INET)
            @ptrCast(&iface.address.address4.sin_addr)
        else
            @ptrCast(&iface.address.address6.sin6_addr);

        const netmask_address: *anyopaque = if (sin_family == c.AF_INET)
            @ptrCast(&iface.netmask.netmask4.sin_addr)
        else
            @ptrCast(&iface.netmask.netmask6.sin6_addr);

        const mac = mkBoxedArray(u8, iface.phys_addr[0..6]);
        const ip1 = mkIpAddrFromInAddrStorage(sin_family, socket_address);
        const ip2 = mkIpAddrFromInAddrStorage(sin_family, netmask_address);

        const result = alloc.lean_alloc_ctor(0, 4, 1);
        ctor.lean_ctor_set(result, 0, lean_mk_string(iface.name));
        ctor.lean_ctor_set(result, 1, mac);
        ctor.lean_ctor_set(result, 2, ip1);
        ctor.lean_ctor_set(result, 3, ip2);
        ctor.lean_ctor_set_uint8(result, @sizeOf(?*anyopaque) * 4, @intCast(iface.is_internal));

        arr = array.lean_array_push(arr, result);
    }

    return io_result.lean_io_result_mk_ok(arr);
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
