// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `dns` libuv subsystem (`src/runtime/uv/dns.cpp`).

const std = @import("std");
const alloc = @import("alloc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_error = @import("io_error.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");
const uv_event_loop = @import("uv_event_loop.zig");

const uv = @cImport({
    @cInclude("uv.h");
    @cInclude("sys/socket.h");
});

pub const force_link = true;

extern fn lean_promise_new() callconv(.c) *anyopaque;
extern fn lean_promise_resolve(value: *anyopaque, promise: *anyopaque) callconv(.c) void;

extern fn lean_zig_in_addr_storage_to_ip_addr(family: c_short, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_zig_socket_address_to_sockaddr_storage(ip_addr: *anyopaque, out: *anyopaque) callconv(.c) void;

fn leanStringCStr(s: *anyopaque) [*:0]const u8 {
    const str: *const lean.lean_string_object = @ptrCast(@alignCast(s));
    return @ptrCast(&str.m_data);
}

fn leanStringPayloadLen(s: *anyopaque) usize {
    const str: *const lean.lean_string_object = @ptrCast(@alignCast(s));
    if (str.m_size == 0) return 0;
    return str.m_size - 1;
}

fn isSafeAsciiStr(s: [*:0]const u8, len: usize) bool {
    var i: usize = 0;
    while (i < len) : (i += 1) {
        const c = s[i];
        if ((c >= 'a' and c <= 'z') or
            (c >= 'A' and c <= 'Z') or
            (c >= '0' and c <= '9') or
            c == '-' or c == '_' or c == '.' or
            c == ':' or c == '/' or c == '+' or
            c == '~' or c == '@' or c == '=' or
            c == ',' or c == '%')
        {
            continue;
        }
        return false;
    }
    return true;
}

fn mkExceptOk(v: *anyopaque) *anyopaque {
    const r = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(r, 0, v);
    return r;
}

fn mkInvalidAsciiError(msg: []const u8) *anyopaque {
    const details = string.mkAsciiStringBytes(msg);
    return io_error.lean_mk_io_error_invalid_argument(@intFromEnum(std.posix.E.INVAL), details);
}

fn familyHint(family: u8) c_int {
    return switch (family) {
        0 => uv.AF_UNSPEC,
        1 => uv.AF_INET,
        2 => uv.AF_INET6,
        else => uv.AF_UNSPEC,
    };
}

fn getAddrInfoCallback(
    req: [*c]uv.uv_getaddrinfo_t,
    status: c_int,
    res: [*c]uv.addrinfo,
) callconv(.c) void {
    const promise: *anyopaque = @ptrCast(@alignCast(req.*.data));

    if (status != 0) {
        uv_event_loop.lean_zig_promise_resolve_with_code(status, promise);
        rc.lean_dec(promise);
        std.c.free(req);
        return;
    }

    var arr = alloc.lean_alloc_array(0, 1);
    var ai: ?[*c]uv.addrinfo = res;
    while (ai) |entry| : (ai = entry.*.ai_next) {
        const sin_addr: [*c]const uv.sockaddr = entry.*.ai_addr;
        if (sin_addr == null) continue;
        const sa_family = sin_addr.*.sa_family;

        var storage_ptr: *anyopaque = undefined;
        if (sa_family == uv.AF_INET) {
            const ipv4: [*c]const uv.sockaddr_in = @ptrCast(@alignCast(sin_addr));
            storage_ptr = @ptrCast(@constCast(&ipv4.*.sin_addr));
        } else if (sa_family == uv.AF_INET6) {
            const ipv6: [*c]const uv.sockaddr_in6 = @ptrCast(@alignCast(sin_addr));
            storage_ptr = @ptrCast(@constCast(&ipv6.*.sin6_addr));
        } else {
            continue;
        }

        const addr = lean_zig_in_addr_storage_to_ip_addr(@intCast(sa_family), storage_ptr);
        arr = array.lean_array_push(arr, addr);
    }

    const except_ok = mkExceptOk(arr);
    lean_promise_resolve(except_ok, promise);

    if (res != null) uv.uv_freeaddrinfo(res);
    rc.lean_dec(promise);
    std.c.free(req);
}

fn getNameInfoCallback(
    req: [*c]uv.uv_getnameinfo_t,
    status: c_int,
    hostname: [*c]const u8,
    service: [*c]const u8,
) callconv(.c) void {
    const promise: *anyopaque = @ptrCast(@alignCast(req.*.data));

    if (status != 0) {
        uv_event_loop.lean_zig_promise_resolve_with_code(status, promise);
        rc.lean_dec(promise);
        std.c.free(req);
        return;
    }

    const r = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(r, 0, string.lean_mk_string(hostname));
    ctor.lean_ctor_set(r, 1, string.lean_mk_string(service));

    const except_ok = mkExceptOk(r);
    lean_promise_resolve(except_ok, promise);
    rc.lean_dec(promise);
    std.c.free(req);
}

pub export fn lean_uv_dns_get_info_helper(name: *anyopaque, service: *anyopaque, family: u8) callconv(.c) *anyopaque {
    const name_cstr = leanStringCStr(name);
    const service_cstr = leanStringCStr(service);

    if (!isSafeAsciiStr(name_cstr, leanStringPayloadLen(name))) {
        return io_result.lean_io_result_mk_error(mkInvalidAsciiError("name is not ASCII"));
    }
    if (!isSafeAsciiStr(service_cstr, leanStringPayloadLen(service))) {
        return io_result.lean_io_result_mk_error(mkInvalidAsciiError("service is not ASCII"));
    }
    const resolver: [*c]uv.uv_getaddrinfo_t = @ptrCast(@alignCast(std.c.malloc(@sizeOf(uv.uv_getaddrinfo_t))));
    if (resolver == null) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }
    const promise = lean_promise_new();
    rc.lean_mark_mt(promise);
    resolver.*.data = promise;

    var hints: uv.addrinfo = std.mem.zeroes(uv.addrinfo);
    hints.ai_family = familyHint(family);

    uv_event_loop.lean_event_loop_lock();
    rc.lean_inc(promise);

    const loop: ?*uv.uv_loop_t = @ptrCast(@alignCast(uv_event_loop.lean_event_loop_loop()));
    const result = uv.uv_getaddrinfo(
        loop,
        resolver,
        getAddrInfoCallback,
        name_cstr,
        service_cstr,
        &hints,
    );

    if (result != 0) {
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        std.c.free(resolver);
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

pub export fn lean_uv_dns_get_name_helper(addr: *anyopaque) callconv(.c) *anyopaque {
    const req: [*c]uv.uv_getnameinfo_t = @ptrCast(@alignCast(std.c.malloc(@sizeOf(uv.uv_getnameinfo_t))));
    if (req == null) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }

    const promise = lean_promise_new();
    rc.lean_mark_mt(promise);
    req.*.data = promise;

    var addr_ptr: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    lean_zig_socket_address_to_sockaddr_storage(addr, @ptrCast(&addr_ptr));

    uv_event_loop.lean_event_loop_lock();
    rc.lean_inc(promise);

    const loop: ?*uv.uv_loop_t = @ptrCast(@alignCast(uv_event_loop.lean_event_loop_loop()));
    const result = uv.uv_getnameinfo(
        loop,
        req,
        getNameInfoCallback,
        @ptrCast(&addr_ptr),
        0,
    );

    if (result != 0) {
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        std.c.free(req);
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

// Std.Internal.IO.Async.DNS.getAddrInfo (host service : @& String) (family : UInt8) : IO (IO.Promise (Except IO.Error (Array IPAddr)))
pub fn lean_uv_dns_get_info(name: *anyopaque, service: *anyopaque, family: u8) callconv(.c) *anyopaque {
    return lean_uv_dns_get_info_helper(name, service, family);
}

// Std.Internal.IO.Async.DNS.getNameInfo (host : @& SocketAddress) : IO (IO.Promise (Except IO.Error (String × String)))
pub fn lean_uv_dns_get_name(addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_dns_get_name_helper(addr);
}
