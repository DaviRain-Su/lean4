// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig-native libuv UDP subsystem (ported from src/runtime/uv/udp.cpp).

const std = @import("std");
const alloc = @import("alloc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const net_addr = @import("net_addr.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const uv_event_loop = @import("uv_event_loop.zig");
const lean_alloc = @import("lean_allocator");

const uv = @cImport({
    @cInclude("uv.h");
    @cInclude("arpa/inet.h");
    @cInclude("netinet/in.h");
    @cInclude("sys/socket.h");
});

pub const force_link = true;

const UdpSendData = struct {
    promise: *anyopaque,
    data: *anyopaque,
    socket: *anyopaque,
    bufs: [*]uv.uv_buf_t,
};

const LeanUvUdpSocketObject = struct {
    m_uv_udp: *uv.uv_udp_t,
    m_promise_read: ?*anyopaque,
    m_byte_array: ?*anyopaque,
};

var g_uv_udp_external_class: ?*lean.lean_external_class = null;
var g_udp_class_initialized = false;

extern fn lean_promise_new() callconv(.c) *anyopaque;
extern fn lean_promise_resolve(value: *anyopaque, promise: *anyopaque) callconv(.c) void;
extern fn lean_apply_1(f: *anyopaque, a: *anyopaque) callconv(.c) ?*anyopaque;

fn lean_event_loop_lock() void {
    uv_event_loop.lean_event_loop_lock();
}

fn lean_event_loop_unlock() void {
    uv_event_loop.lean_event_loop_unlock();
}

fn lean_event_loop_loop() ?*anyopaque {
    return uv_event_loop.lean_event_loop_loop();
}

fn toUdpSocket(ptr: *anyopaque) *LeanUvUdpSocketObject {
    return @ptrCast(@alignCast(object.lean_get_external_data(ptr).?));
}

fn asSArray(o: *anyopaque) *lean.lean_sarray_object {
    return @ptrCast(@alignCast(o));
}

fn sarrayCptr(o: *anyopaque) [*]u8 {
    return @ptrCast(&asSArray(o).m_data);
}

fn sarrayCapacity(o: *anyopaque) usize {
    return asSArray(o).m_capacity;
}

fn sarraySetSize(o: *anyopaque, sz: usize) void {
    std.debug.assert(sz <= sarrayCapacity(o));
    asSArray(o).m_size = sz;
}

fn sarraySize(o: *anyopaque) usize {
    return asSArray(o).m_size;
}

fn arrayGetBorrowed(a: *anyopaque, i: usize) ?*anyopaque {
    const boxed = object.lean_box(i).?;
    return array.lean_array_fget_borrowed(a, boxed);
}

fn mkExceptOk(v: *anyopaque) *anyopaque {
    const r = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(r, 0, v);
    return r;
}

fn mkExceptErr(v: *anyopaque) *anyopaque {
    const r = alloc.lean_alloc_ctor(0, 1, 0);
    ctor.lean_ctor_set(r, 0, v);
    return r;
}

fn mkOptionNone() *anyopaque {
    return object.lean_box(0).?;
}

fn mkOptionSome(value: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(result, 0, value);
    return result;
}

fn usizeMulWouldOverflow(a: usize, b: usize) bool {
    return @mulWithOverflow(a, b)[1] != 0;
}

fn uvCloseUdpCallback(handle: ?*uv.uv_handle_t) callconv(.c) void {
    const udp_socket: *LeanUvUdpSocketObject = @ptrCast(@alignCast(handle.?.data));
    lean_alloc.vtable.free(@ptrCast(udp_socket.m_uv_udp), @sizeOf(uv.uv_udp_t), @alignOf(uv.uv_udp_t));
    lean_alloc.leanFree(LeanUvUdpSocketObject, @ptrCast(udp_socket), 1);
}

fn leanUvUdpSocketFinalizer(ptr: *anyopaque) callconv(.c) void {
    const udp_socket: *LeanUvUdpSocketObject = @ptrCast(@alignCast(ptr));
    std.debug.assert(udp_socket.m_promise_read == null);
    std.debug.assert(udp_socket.m_byte_array == null);

    udp_socket.m_uv_udp.data = ptr;

    lean_event_loop_lock();
    _ = uv.uv_close(@ptrCast(udp_socket.m_uv_udp), uvCloseUdpCallback);
    lean_event_loop_unlock();
}

fn udpForeach(ptr: *anyopaque, f: ?*anyopaque) callconv(.c) void {
    const udp_socket: *LeanUvUdpSocketObject = @ptrCast(@alignCast(ptr));
    if (udp_socket.m_promise_read) |promise| {
        if (f) |fun| {
            rc.lean_inc(fun);
            if (lean_apply_1(fun, promise)) |res| {
                rc.lean_dec(res);
            }
        }
    }
    if (udp_socket.m_byte_array) |byte_array| {
        if (f) |fun| {
            rc.lean_inc(fun);
            if (lean_apply_1(fun, byte_array)) |res| {
                rc.lean_dec(res);
            }
        }
    }
}

fn ensureUdpExternalClass() void {
    if (g_udp_class_initialized) return;
    g_uv_udp_external_class = object.lean_register_external_class(leanUvUdpSocketFinalizer, udpForeach);
    g_udp_class_initialized = true;
}

pub export fn lean_zig_initialize_libuv_udp() callconv(.c) void {
    ensureUdpExternalClass();
}

fn leanUvUdpSocketNew(udp_socket: *LeanUvUdpSocketObject) *anyopaque {
    return object.lean_alloc_external(g_uv_udp_external_class.?, udp_socket);
}

fn udpSendCallback(req: ?*uv.uv_udp_send_t, status: c_int) callconv(.c) void {
    const send_req = req.?;
    const tup: *UdpSendData = @ptrCast(@alignCast(send_req.data));
    uv_event_loop.lean_zig_promise_resolve_with_code(status, tup.promise);

    const buf_count = array.lean_array_size(tup.data);
    rc.lean_dec(tup.promise);
    rc.lean_dec(tup.socket);
    rc.lean_dec(tup.data);

    lean_alloc.vtable.free(@ptrCast(tup.bufs), buf_count * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
    lean_alloc.leanFree(UdpSendData, @ptrCast(@alignCast(send_req.data)), 1);
    lean_alloc.vtable.free(@ptrCast(send_req), @sizeOf(uv.uv_udp_send_t), @alignOf(uv.uv_udp_send_t));
}

fn udpRecvAllocCallback(handle: [*c]uv.uv_handle_t, suggested_size: usize, buf: [*c]uv.uv_buf_t) callconv(.c) void {
    _ = suggested_size;
    const obj: *anyopaque = @ptrCast(@alignCast(handle.*.data));
    const udp_socket = toUdpSocket(obj);
    buf.*.base = @ptrCast(sarrayCptr(udp_socket.m_byte_array.?));
    buf.*.len = sarrayCapacity(udp_socket.m_byte_array.?);
}

fn udpRecvCallback(
    handle: [*c]uv.uv_udp_t,
    nread: isize,
    buf: [*c]const uv.uv_buf_t,
    addr: [*c]const uv.sockaddr,
    flags: c_uint,
) callconv(.c) void {
    _ = buf;
    _ = flags;
    _ = uv.uv_udp_recv_stop(handle);

    const obj: *anyopaque = @ptrCast(@alignCast(handle.*.data));

    const udp_socket = toUdpSocket(obj);
    const promise = udp_socket.m_promise_read.?;
    const byte_array = udp_socket.m_byte_array.?;

    udp_socket.m_promise_read = null;
    udp_socket.m_byte_array = null;

    if (nread >= 0) {
        sarraySetSize(byte_array, @intCast(nread));

        const addr_obj: *anyopaque = if (addr != null)
            mkOptionSome(net_addr.lean_zig_sockaddr_to_socketaddress(@ptrCast(addr)))
        else
            mkOptionNone();

        const prod = alloc.lean_alloc_ctor(1, 2, 0);
        ctor.lean_ctor_set(prod, 0, byte_array);
        ctor.lean_ctor_set(prod, 1, addr_obj);

        lean_promise_resolve(mkExceptOk(prod), promise);
    } else {
        rc.lean_dec(byte_array);
        lean_promise_resolve(mkExceptErr(io_errno.lean_decode_uv_error(@intCast(nread), null)), promise);
    }

    rc.lean_dec(promise);
    rc.lean_dec(obj);
}

fn udpWaitReadableAllocCallback(handle: [*c]uv.uv_handle_t, suggested_size: usize, buf: [*c]uv.uv_buf_t) callconv(.c) void {
    _ = handle;
    _ = suggested_size;
    buf.*.base = null;
    buf.*.len = 0;
}

fn udpWaitReadableRecvCallback(
    handle: [*c]uv.uv_udp_t,
    nread: isize,
    buf: [*c]const uv.uv_buf_t,
    addr: [*c]const uv.sockaddr,
    flags: c_uint,
) callconv(.c) void {
    _ = buf;
    _ = addr;
    _ = flags;
    _ = uv.uv_udp_recv_stop(handle);

    const obj: *anyopaque = @ptrCast(@alignCast(handle.*.data));

    const udp_socket = toUdpSocket(obj);
    const promise = udp_socket.m_promise_read.?;
    udp_socket.m_promise_read = null;

    if (nread == uv.UV_ENOBUFS) {
        lean_promise_resolve(mkExceptOk(object.lean_box(0).?), promise);
    } else if (nread < 0) {
        lean_promise_resolve(mkExceptErr(io_errno.lean_decode_uv_error(@intCast(nread), null)), promise);
    } else {
        std.debug.assert(false);
    }

    rc.lean_dec(promise);
    rc.lean_dec(obj);
}

fn leanUvUdpNewHelper() *anyopaque {
    ensureUdpExternalClass();

    const udp_socket: *LeanUvUdpSocketObject = @ptrCast(@alignCast(lean_alloc.leanAlloc(LeanUvUdpSocketObject, 1) orelse {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    udp_socket.* = .{
        .m_uv_udp = undefined,
        .m_promise_read = null,
        .m_byte_array = null,
    };

    const uv_udp: *uv.uv_udp_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_udp_t), @alignOf(uv.uv_udp_t)) orelse {
        lean_alloc.leanFree(LeanUvUdpSocketObject, @ptrCast(udp_socket), 1);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    lean_event_loop_lock();
    const loop: *uv.uv_loop_t = @ptrCast(@alignCast(lean_event_loop_loop().?));
    const init_result = uv.uv_udp_init(loop, uv_udp);
    lean_event_loop_unlock();

    if (init_result != 0) {
        lean_alloc.vtable.free(@ptrCast(uv_udp), @sizeOf(uv.uv_udp_t), @alignOf(uv.uv_udp_t));
        lean_alloc.leanFree(LeanUvUdpSocketObject, @ptrCast(udp_socket), 1);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(init_result, null));
    }

    const obj = leanUvUdpSocketNew(udp_socket);
    rc.lean_mark_mt(obj);
    udp_socket.m_uv_udp = uv_udp;
    udp_socket.m_uv_udp.data = obj;

    return io_result.lean_io_result_mk_ok(obj);
}

fn leanUvUdpBindHelper(socket: *anyopaque, addr: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    var addr_ptr: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    net_addr.lean_zig_socket_address_to_sockaddr_storage(addr, @ptrCast(&addr_ptr));

    lean_event_loop_lock();
    const result = uv.uv_udp_bind(udp_socket.m_uv_udp, @ptrCast(&addr_ptr), uv.UV_UDP_REUSEADDR);
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpConnectHelper(socket: *anyopaque, addr: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    var addr_ptr: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    net_addr.lean_zig_socket_address_to_sockaddr_storage(addr, @ptrCast(&addr_ptr));

    lean_event_loop_lock();
    const result = uv.uv_udp_connect(udp_socket.m_uv_udp, @ptrCast(&addr_ptr));
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpSendHelper(socket: *anyopaque, data_array: *anyopaque, opt_addr: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    const array_len = array.lean_array_size(data_array);

    if (array_len == 0) {
        rc.lean_dec(data_array);
        const promise = lean_promise_new();
        rc.lean_mark_mt(promise);
        uv_event_loop.lean_zig_promise_resolve_with_code(0, promise);
        return io_result.lean_io_result_mk_ok(promise);
    }

    if (usizeMulWouldOverflow(array_len, @sizeOf(uv.uv_buf_t))) {
        rc.lean_dec(data_array);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }

    const bufs: [*]uv.uv_buf_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t)) orelse {
        rc.lean_dec(data_array);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    var i: usize = 0;
    while (i < array_len) : (i += 1) {
        const byte_array = arrayGetBorrowed(data_array, i).?;
        const data_len = sarraySize(byte_array);
        bufs[i] = uv.uv_buf_init(@ptrCast(sarrayCptr(byte_array)), @intCast(data_len));
    }

    const promise = lean_promise_new();
    rc.lean_mark_mt(promise);

    const send_uv: *uv.uv_udp_send_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_udp_send_t), @alignOf(uv.uv_udp_send_t)) orelse {
        rc.lean_dec(data_array);
        rc.lean_dec(promise);
        lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    const send_data: *UdpSendData = @ptrCast(@alignCast(lean_alloc.leanAlloc(UdpSendData, 1) orelse {
        rc.lean_dec(data_array);
        rc.lean_dec(promise);
        lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
        lean_alloc.vtable.free(@ptrCast(send_uv), @sizeOf(uv.uv_udp_send_t), @alignOf(uv.uv_udp_send_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    send_data.* = .{
        .promise = promise,
        .data = data_array,
        .socket = socket,
        .bufs = bufs,
    };
    send_uv.data = send_data;

    rc.lean_inc(promise);
    rc.lean_inc(socket);

    var addr_ptr: ?*uv.sockaddr_storage = null;
    if (object.lean_ptr_tag(opt_addr) == 1) {
        const addr = ctor.lean_ctor_get(opt_addr, 0).?;
        addr_ptr = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.sockaddr_storage), @alignOf(uv.sockaddr_storage)) orelse {
            rc.lean_dec(promise);
            rc.lean_dec(promise);
            rc.lean_dec(socket);
            rc.lean_dec(data_array);
            lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
            lean_alloc.leanFree(UdpSendData, @ptrCast(send_data), 1);
            lean_alloc.vtable.free(@ptrCast(send_uv), @sizeOf(uv.uv_udp_send_t), @alignOf(uv.uv_udp_send_t));
            return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
        }));
        addr_ptr.?.* = std.mem.zeroes(uv.sockaddr_storage);
        net_addr.lean_zig_socket_address_to_sockaddr_storage(addr, @ptrCast(addr_ptr));
    }

    lean_event_loop_lock();
    const result = uv.uv_udp_send(
        send_uv,
        udp_socket.m_uv_udp,
        bufs,
        @intCast(array_len),
        if (addr_ptr) |ap| @ptrCast(ap) else null,
        udpSendCallback,
    );
    lean_event_loop_unlock();

    if (addr_ptr) |ap| {
        lean_alloc.vtable.free(@ptrCast(ap), @sizeOf(uv.sockaddr_storage), @alignOf(uv.sockaddr_storage));
    }

    if (result < 0) {
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        rc.lean_dec(data_array);
        lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
        lean_alloc.leanFree(UdpSendData, @ptrCast(send_data), 1);
        lean_alloc.vtable.free(@ptrCast(send_uv), @sizeOf(uv.uv_udp_send_t), @alignOf(uv.uv_udp_send_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvUdpRecvHelper(socket: *anyopaque, buffer_size: u64) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    lean_event_loop_lock();

    if (udp_socket.m_promise_read != null) {
        lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(uv.UV_EALREADY, null));
    }

    const byte_array = alloc.lean_alloc_sarray(1, 0, @intCast(buffer_size));
    const promise = lean_promise_new();
    rc.lean_mark_mt(promise);

    udp_socket.m_byte_array = byte_array;
    udp_socket.m_promise_read = promise;

    rc.lean_inc(promise);
    rc.lean_inc(socket);

    const result = uv.uv_udp_recv_start(udp_socket.m_uv_udp, udpRecvAllocCallback, udpRecvCallback);

    if (result < 0) {
        udp_socket.m_byte_array = null;
        udp_socket.m_promise_read = null;
        lean_event_loop_unlock();

        rc.lean_dec(byte_array);
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvUdpWaitReadableHelper(socket: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    lean_event_loop_lock();

    if (udp_socket.m_promise_read != null) {
        lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(uv.UV_EALREADY, null));
    }

    const promise = lean_promise_new();
    rc.lean_mark_mt(promise);
    udp_socket.m_promise_read = promise;

    rc.lean_inc(promise);
    rc.lean_inc(socket);

    const result = uv.uv_udp_recv_start(udp_socket.m_uv_udp, udpWaitReadableAllocCallback, udpWaitReadableRecvCallback);

    if (result < 0) {
        udp_socket.m_promise_read = null;
        lean_event_loop_unlock();

        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvUdpCancelRecvHelper(socket: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    rc.lean_inc(socket);
    lean_event_loop_lock();

    if (udp_socket.m_promise_read == null) {
        lean_event_loop_unlock();
        rc.lean_dec(socket);
        return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
    }

    _ = uv.uv_udp_recv_stop(udp_socket.m_uv_udp);

    if (udp_socket.m_promise_read) |promise| {
        rc.lean_dec(promise);
        udp_socket.m_promise_read = null;
    }

    if (udp_socket.m_byte_array) |byte_array| {
        rc.lean_dec(byte_array);
        udp_socket.m_byte_array = null;
    }

    lean_event_loop_unlock();
    rc.lean_dec(socket);
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpGetpeernameHelper(socket: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    var addr_storage: uv.sockaddr_storage = undefined;
    var addr_len: c_int = @intCast(@sizeOf(uv.sockaddr_storage));

    lean_event_loop_lock();
    const result = uv.uv_udp_getpeername(udp_socket.m_uv_udp, @ptrCast(&addr_storage), &addr_len);
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const lean_addr = net_addr.lean_zig_sockaddr_to_socketaddress(@ptrCast(&addr_storage));
    return io_result.lean_io_result_mk_ok(lean_addr);
}

fn leanUvUdpGetsocknameHelper(socket: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    var addr_storage: uv.sockaddr_storage = undefined;
    var addr_len: c_int = @intCast(@sizeOf(uv.sockaddr_storage));

    lean_event_loop_lock();
    const result = uv.uv_udp_getsockname(udp_socket.m_uv_udp, @ptrCast(&addr_storage), &addr_len);
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const lean_addr = net_addr.lean_zig_sockaddr_to_socketaddress(@ptrCast(&addr_storage));
    return io_result.lean_io_result_mk_ok(lean_addr);
}

fn leanUvUdpSetBroadcastHelper(socket: *anyopaque, enable: u8) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    lean_event_loop_lock();
    const result = uv.uv_udp_set_broadcast(udp_socket.m_uv_udp, enable);
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpSetMulticastLoopHelper(socket: *anyopaque, enable: u8) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    lean_event_loop_lock();
    const result = uv.uv_udp_set_multicast_loop(udp_socket.m_uv_udp, enable);
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpSetMulticastTtlHelper(socket: *anyopaque, ttl: u32) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    lean_event_loop_lock();
    const result = uv.uv_udp_set_multicast_ttl(udp_socket.m_uv_udp, @intCast(ttl));
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpSetMembershipHelper(
    socket: *anyopaque,
    multicast_addr: *anyopaque,
    interface_addr: *anyopaque,
    membership: u8,
) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    var multicast_addr_str: [uv.INET_ADDRSTRLEN:0]u8 = undefined;
    net_addr.lean_zig_ip_addr_ntop(multicast_addr, &multicast_addr_str, multicast_addr_str.len);

    const is_interface_null = object.lean_is_scalar(interface_addr);
    var interface_addr_str: [uv.INET_ADDRSTRLEN:0]u8 = undefined;
    const interface_cstr: ?[*:0]const u8 = if (!is_interface_null) blk: {
        const interface_addr_obj = ctor.lean_ctor_get(interface_addr, 0).?;
        net_addr.lean_zig_ip_addr_ntop(interface_addr_obj, &interface_addr_str, interface_addr_str.len);
        break :blk @ptrCast(&interface_addr_str);
    } else null;

    lean_event_loop_lock();
    const result = uv.uv_udp_set_membership(
        udp_socket.m_uv_udp,
        @ptrCast(&multicast_addr_str),
        interface_cstr,
        @intCast(membership),
    );
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpSetMulticastInterfaceHelper(socket: *anyopaque, interface_addr: *anyopaque) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    var interface_addr_str: [uv.INET_ADDRSTRLEN:0]u8 = undefined;
    net_addr.lean_zig_ip_addr_ntop(interface_addr, &interface_addr_str, interface_addr_str.len);

    lean_event_loop_lock();
    const result = uv.uv_udp_set_multicast_interface(udp_socket.m_uv_udp, @ptrCast(&interface_addr_str));
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvUdpSetTtlHelper(socket: *anyopaque, ttl: u32) *anyopaque {
    const udp_socket = toUdpSocket(socket);

    lean_event_loop_lock();
    const result = uv.uv_udp_set_ttl(udp_socket.m_uv_udp, @intCast(ttl));
    lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

// Std.Internal.UV.UDP.Socket.new : IO Socket
pub fn lean_uv_udp_new() callconv(.c) *anyopaque {
    return leanUvUdpNewHelper();
}

pub fn lean_uv_udp_bind(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpBindHelper(socket, addr);
}

pub fn lean_uv_udp_connect(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpConnectHelper(socket, addr);
}

pub fn lean_uv_udp_send(socket: *anyopaque, data: *anyopaque, opt_addr: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpSendHelper(socket, data, opt_addr);
}

pub fn lean_uv_udp_recv(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque {
    return leanUvUdpRecvHelper(socket, buffer_size);
}

pub fn lean_uv_udp_wait_readable(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpWaitReadableHelper(socket);
}

pub fn lean_uv_udp_cancel_recv(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpCancelRecvHelper(socket);
}

pub fn lean_uv_udp_getpeername(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpGetpeernameHelper(socket);
}

pub fn lean_uv_udp_getsockname(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpGetsocknameHelper(socket);
}

pub fn lean_uv_udp_set_broadcast(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque {
    return leanUvUdpSetBroadcastHelper(socket, enable);
}

pub fn lean_uv_udp_set_multicast_loop(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque {
    return leanUvUdpSetMulticastLoopHelper(socket, enable);
}

pub fn lean_uv_udp_set_multicast_ttl(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque {
    return leanUvUdpSetMulticastTtlHelper(socket, ttl);
}

pub fn lean_uv_udp_set_membership(
    socket: *anyopaque,
    multicast_addr: *anyopaque,
    interface_addr: *anyopaque,
    membership: u8,
) callconv(.c) *anyopaque {
    return leanUvUdpSetMembershipHelper(socket, multicast_addr, interface_addr, membership);
}

pub fn lean_uv_udp_set_multicast_interface(socket: *anyopaque, interface_addr: *anyopaque) callconv(.c) *anyopaque {
    return leanUvUdpSetMulticastInterfaceHelper(socket, interface_addr);
}

pub fn lean_uv_udp_set_ttl(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque {
    return leanUvUdpSetTtlHelper(socket, ttl);
}
