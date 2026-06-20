// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig-native libuv TCP subsystem (ported from src/runtime/uv/tcp.cpp).

const std = @import("std");
const alloc = @import("alloc.zig");
const array = @import("array.zig");
const ctor = @import("ctor.zig");
const io_errno = @import("io_errno.zig");
const io_result = @import("io_result.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");
const uv_event_loop = @import("uv_event_loop.zig");
const net_addr = @import("net_addr.zig");
const lean_alloc = @import("lean_allocator");

const uv = @cImport({
    @cInclude("uv.h");
    @cInclude("sys/socket.h");
});

pub const force_link = true;

const LeanUvTcpSocketObject = struct {
    m_uv_tcp: *uv.uv_tcp_t,
    m_promise_accept: ?*anyopaque,
    m_promise_read: ?*anyopaque,
    m_promise_shutdown: ?*anyopaque,
    m_client: ?*anyopaque,
    m_byte_array: ?*anyopaque,
};

const TcpConnectData = struct {
    promise: *anyopaque,
    socket: *anyopaque,
};

const TcpSendData = struct {
    promise: *anyopaque,
    data: *anyopaque,
    socket: *anyopaque,
    bufs: [*]uv.uv_buf_t,
    buf_count: usize,
};
var g_uv_tcp_socket_external_class: ?*lean.lean_external_class = null;
var g_tcp_class_initialized = false;

extern fn lean_io_promise_new() callconv(.c) *anyopaque;
extern fn lean_io_promise_resolve(value: *anyopaque, promise: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_apply_1(f: *anyopaque, a: *anyopaque) callconv(.c) ?*anyopaque;
fn ioResultTakeValue(r: *anyopaque) *anyopaque {
    std.debug.assert(io_result.lean_io_result_is_ok(r));
    const v = ctor.lean_ctor_get(r, 0).?;
    rc.lean_inc(v);
    return v;
}

fn usizeMulWouldOverflow(a: usize, b: usize) bool {
    const result = @mulWithOverflow(a, b);
    return result[1] != 0;
}

fn toTcpSocket(ptr: *anyopaque) *LeanUvTcpSocketObject {
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
    std.debug.assert(sz <= asSArray(o).m_capacity);
    asSArray(o).m_size = sz;
}

fn mkOptionNone() *anyopaque {
    return object.lean_box(0).?;
}

fn mkOptionSome(v: *anyopaque) *anyopaque {
    const r = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(r, 0, v);
    return r;
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

fn arrayGetCore(a: *anyopaque, i: usize) ?*anyopaque {
    const arr: *lean.lean_array_object = @ptrCast(@alignCast(a));
    std.debug.assert(i < arr.m_size);
    const slots: [*]?*anyopaque = @ptrCast(&arr.m_data);
    return slots[i];
}

fn uvCloseFreeTcpHandle(handle: ?*uv.uv_handle_t) callconv(.c) void {
    const tcp_sock: *LeanUvTcpSocketObject = @ptrCast(@alignCast(handle.?.data));
    lean_alloc.vtable.free(@ptrCast(tcp_sock.m_uv_tcp), @sizeOf(uv.uv_tcp_t), @alignOf(uv.uv_tcp_t));
    lean_alloc.leanFree(LeanUvTcpSocketObject, @ptrCast(tcp_sock), 1);
}

fn leanUvTcpSocketFinalizer(ptr: *anyopaque) callconv(.c) void {
    const tcp_socket: *LeanUvTcpSocketObject = @ptrCast(@alignCast(ptr));

    std.debug.assert(tcp_socket.m_promise_shutdown == null);
    std.debug.assert(tcp_socket.m_promise_accept == null);
    std.debug.assert(tcp_socket.m_promise_read == null);
    std.debug.assert(tcp_socket.m_byte_array == null);

    tcp_socket.m_uv_tcp.data = ptr;

    uv_event_loop.lean_event_loop_lock();
    _ = uv.uv_close(@ptrCast(tcp_socket.m_uv_tcp), uvCloseFreeTcpHandle);
    uv_event_loop.lean_event_loop_unlock();
}

fn tcpSocketForeach(ptr: *anyopaque, f: ?*anyopaque) callconv(.c) void {
    const tcp_socket: *LeanUvTcpSocketObject = @ptrCast(@alignCast(ptr));
    const fields = [_]?*anyopaque{
        tcp_socket.m_promise_accept,
        tcp_socket.m_promise_shutdown,
        tcp_socket.m_promise_read,
        tcp_socket.m_byte_array,
    };
    for (fields) |field| {
        if (field) |obj| {
            if (f) |fun| {
                rc.lean_inc(fun);
                if (lean_apply_1(fun, obj)) |res| {
                    rc.lean_dec(res);
                }
            }
        }
    }
}

fn ensureTcpExternalClass() void {
    if (g_tcp_class_initialized) return;
    g_uv_tcp_socket_external_class = object.lean_register_external_class(leanUvTcpSocketFinalizer, tcpSocketForeach);
    g_tcp_class_initialized = true;
}

pub export fn lean_zig_initialize_libuv_tcp() callconv(.c) void {
    ensureTcpExternalClass();
}

fn leanUvTcpSocketNew(sock: *LeanUvTcpSocketObject) *anyopaque {
    return object.lean_alloc_external(g_uv_tcp_socket_external_class.?, sock);
}

fn leanUvTcpNewHelper() *anyopaque {
    ensureTcpExternalClass();

    const tcp_socket: *LeanUvTcpSocketObject = @ptrCast(@alignCast(lean_alloc.leanAlloc(LeanUvTcpSocketObject, 1) orelse {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    tcp_socket.* = .{
        .m_uv_tcp = undefined,
        .m_promise_accept = null,
        .m_promise_read = null,
        .m_promise_shutdown = null,
        .m_client = null,
        .m_byte_array = null,
    };

    const uv_tcp: *uv.uv_tcp_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_tcp_t), @alignOf(uv.uv_tcp_t)) orelse {
        lean_alloc.leanFree(LeanUvTcpSocketObject, @ptrCast(tcp_socket), 1);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    uv_event_loop.lean_event_loop_lock();
    const loop: *uv.uv_loop_t = @ptrCast(@alignCast(uv_event_loop.lean_event_loop_loop().?));
    const init_result = uv.uv_tcp_init(loop, uv_tcp);
    uv_event_loop.lean_event_loop_unlock();

    if (init_result != 0) {
        lean_alloc.vtable.free(@ptrCast(uv_tcp), @sizeOf(uv.uv_tcp_t), @alignOf(uv.uv_tcp_t));
        lean_alloc.leanFree(LeanUvTcpSocketObject, @ptrCast(tcp_socket), 1);
    }

    tcp_socket.m_uv_tcp = uv_tcp;

    const obj = leanUvTcpSocketNew(tcp_socket);
    rc.lean_mark_mt(obj);
    uv_tcp.data = obj;

    return io_result.lean_io_result_mk_ok(obj);
}

fn tcpConnectCallback(req: [*c]uv.uv_connect_t, status: c_int) callconv(.c) void {
    const tup: *TcpConnectData = @ptrCast(@alignCast(req.*.data));
    uv_event_loop.lean_zig_promise_resolve_with_code(status, tup.promise);
    rc.lean_dec(tup.socket);
    rc.lean_dec(tup.promise);
    lean_alloc.leanFree(TcpConnectData, @ptrCast(tup), 1);
    lean_alloc.vtable.free(@ptrCast(req), @sizeOf(uv.uv_connect_t), @alignOf(uv.uv_connect_t));
}

fn leanUvTcpConnectHelper(socket: *anyopaque, addr: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    var addr_struct: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    net_addr.lean_zig_socket_address_to_sockaddr_storage(addr, @ptrCast(&addr_struct));

    const uv_connect: [*c]uv.uv_connect_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_connect_t), @alignOf(uv.uv_connect_t)) orelse {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    const connect_data: *TcpConnectData = @ptrCast(@alignCast(lean_alloc.leanAlloc(TcpConnectData, 1) orelse {
        lean_alloc.vtable.free(@ptrCast(uv_connect), @sizeOf(uv.uv_connect_t), @alignOf(uv.uv_connect_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    const promise = lean_io_promise_new();
    rc.lean_mark_mt(promise);

    connect_data.* = .{ .promise = promise, .socket = socket };
    uv_connect.*.data = connect_data;

    rc.lean_inc(socket);
    rc.lean_inc(promise);

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_tcp_connect(uv_connect, tcp_socket.m_uv_tcp, @ptrCast(&addr_struct), tcpConnectCallback);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        lean_alloc.leanFree(TcpConnectData, @ptrCast(connect_data), 1);
        lean_alloc.vtable.free(@ptrCast(uv_connect), @sizeOf(uv.uv_connect_t), @alignOf(uv.uv_connect_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(promise);
}

fn tcpWriteCallback(req: [*c]uv.uv_write_t, status: c_int) callconv(.c) void {
    const tup: *TcpSendData = @ptrCast(@alignCast(req.*.data));
    uv_event_loop.lean_zig_promise_resolve_with_code(status, tup.promise);
    rc.lean_dec(tup.promise);
    rc.lean_dec(tup.data);
    rc.lean_dec(tup.socket);
    lean_alloc.vtable.free(@ptrCast(tup.bufs), tup.buf_count * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
    lean_alloc.leanFree(TcpSendData, @ptrCast(tup), 1);
    lean_alloc.vtable.free(@ptrCast(req), @sizeOf(uv.uv_write_t), @alignOf(uv.uv_write_t));
}

fn leanUvTcpSendHelper(socket: *anyopaque, data_array: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);
    const array_len = array.lean_array_size(data_array);

    if (array_len == 0) {
        rc.lean_dec(data_array);
        const promise = lean_io_promise_new();
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
        const byte_array = arrayGetCore(data_array, i).?;
        const data_len = asSArray(byte_array).m_size;
        const data_str: [*]u8 = sarrayCptr(byte_array);
        bufs[i] = uv.uv_buf_init(@ptrCast(data_str), @intCast(data_len));
    }

    const write_uv: [*c]uv.uv_write_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_write_t), @alignOf(uv.uv_write_t)) orelse {
        rc.lean_dec(data_array);
        lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    const send_data: *TcpSendData = @ptrCast(@alignCast(lean_alloc.leanAlloc(TcpSendData, 1) orelse {
        rc.lean_dec(data_array);
        lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
        lean_alloc.vtable.free(@ptrCast(write_uv), @sizeOf(uv.uv_write_t), @alignOf(uv.uv_write_t));
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));

    const promise = lean_io_promise_new();
    rc.lean_mark_mt(promise);

    send_data.* = .{
        .promise = promise,
        .data = data_array,
        .socket = socket,
        .bufs = bufs,
        .buf_count = array_len,
    };
    write_uv.*.data = send_data;

    rc.lean_inc(promise);
    rc.lean_inc(socket);

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_write(write_uv, @ptrCast(tcp_socket.m_uv_tcp), bufs, @intCast(array_len), tcpWriteCallback);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        rc.lean_dec(data_array);
        lean_alloc.vtable.free(@ptrCast(bufs), array_len * @sizeOf(uv.uv_buf_t), @alignOf(uv.uv_buf_t));
        lean_alloc.leanFree(TcpSendData, @ptrCast(send_data), 1);
        lean_alloc.vtable.free(@ptrCast(write_uv), @sizeOf(uv.uv_write_t), @alignOf(uv.uv_write_t));
    }

    return io_result.lean_io_result_mk_ok(promise);
}

fn tcpRecvAllocCallback(handle: ?*uv.uv_handle_t, _: usize, buf: [*c]uv.uv_buf_t) callconv(.c) void {
    const tcp_socket = toTcpSocket(@ptrCast(@alignCast(handle.?.data)));
    const ba = tcp_socket.m_byte_array.?;
    buf.*.base = @ptrCast(sarrayCptr(ba));
    buf.*.len = sarrayCapacity(ba);
}

fn tcpRecvReadCallback(stream: ?*uv.uv_stream_t, nread: isize, _: [*c]const uv.uv_buf_t) callconv(.c) void {
    _ = uv.uv_read_stop(stream);

    const obj: *anyopaque = @ptrCast(@alignCast(stream.?.data));
    const tcp_socket = toTcpSocket(obj);
    const promise = tcp_socket.m_promise_read.?;
    const byte_array = tcp_socket.m_byte_array.?;

    tcp_socket.m_promise_read = null;
    tcp_socket.m_byte_array = null;

    if (nread >= 0) {
        sarraySetSize(byte_array, @intCast(nread));
        const res = lean_io_promise_resolve(mkExceptOk(mkOptionSome(byte_array)), promise);
        rc.lean_dec(res);
    } else if (nread == uv.UV_EOF) {
        rc.lean_dec(byte_array);
        const res = lean_io_promise_resolve(mkExceptOk(mkOptionNone()), promise);
        rc.lean_dec(res);
    } else {
        rc.lean_dec(byte_array);
        const res = lean_io_promise_resolve(
            mkExceptErr(io_errno.lean_decode_uv_error(@intCast(nread), null)),
            promise,
        );
        rc.lean_dec(res);
    }

    rc.lean_dec(promise);
    rc.lean_dec(obj);
}

fn leanUvTcpRecvHelper(socket: *anyopaque, buffer_size: u64) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_read != null) {
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(uv.UV_EALREADY, null));
    }

    const byte_array = alloc.lean_alloc_sarray(1, 0, @intCast(buffer_size));
    tcp_socket.m_byte_array = byte_array;

    const promise = lean_io_promise_new();
    rc.lean_mark_mt(promise);

    tcp_socket.m_promise_read = promise;

    rc.lean_inc(socket);
    rc.lean_inc(promise);

    const result = uv.uv_read_start(@ptrCast(tcp_socket.m_uv_tcp), tcpRecvAllocCallback, tcpRecvReadCallback);

    if (result < 0) {
        tcp_socket.m_byte_array = null;
        tcp_socket.m_promise_read = null;
        uv_event_loop.lean_event_loop_unlock();
        rc.lean_dec(byte_array);
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

fn tcpWaitReadableAllocCallback(_: ?*uv.uv_handle_t, _: usize, buf: [*c]uv.uv_buf_t) callconv(.c) void {
    buf.*.base = null;
    buf.*.len = 0;
}

fn tcpWaitReadableReadCallback(stream: ?*uv.uv_stream_t, nread: isize, _: [*c]const uv.uv_buf_t) callconv(.c) void {
    _ = uv.uv_read_stop(stream);

    const obj: *anyopaque = @ptrCast(@alignCast(stream.?.data));
    const tcp_socket = toTcpSocket(obj);
    const promise = tcp_socket.m_promise_read.?;

    tcp_socket.m_promise_read = null;

    if (nread == uv.UV_ENOBUFS) {
        const res = lean_io_promise_resolve(mkExceptOk(object.lean_box(1).?), promise);
        rc.lean_dec(res);
    } else if (nread == uv.UV_EOF) {
        const res = lean_io_promise_resolve(mkExceptOk(object.lean_box(0).?), promise);
        rc.lean_dec(res);
    } else if (nread < 0) {
        const res = lean_io_promise_resolve(
            mkExceptErr(io_errno.lean_decode_uv_error(@intCast(nread), null)),
            promise,
        );
        rc.lean_dec(res);
    } else {
        @panic("unexpected positive nread in waitReadable");
    }

    rc.lean_dec(promise);
    rc.lean_dec(obj);
}

fn leanUvTcpWaitReadableHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_read != null) {
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(uv.UV_EALREADY, null));
    }

    const promise = lean_io_promise_new();
    rc.lean_mark_mt(promise);

    tcp_socket.m_promise_read = promise;

    rc.lean_inc(socket);
    rc.lean_inc(promise);

    const result = uv.uv_read_start(@ptrCast(tcp_socket.m_uv_tcp), tcpWaitReadableAllocCallback, tcpWaitReadableReadCallback);

    if (result < 0) {
        tcp_socket.m_promise_read = null;
        uv_event_loop.lean_event_loop_unlock();
        rc.lean_dec(promise);
        rc.lean_dec(promise);
        rc.lean_dec(socket);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvTcpCancelRecvHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_read == null) {
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
    }

    _ = uv.uv_read_stop(@ptrCast(tcp_socket.m_uv_tcp));

    const promise = tcp_socket.m_promise_read.?;
    rc.lean_dec(promise);
    tcp_socket.m_promise_read = null;

    if (tcp_socket.m_byte_array) |ba| {
        rc.lean_dec(ba);
        tcp_socket.m_byte_array = null;
    }

    rc.lean_dec(socket);

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvTcpBindHelper(socket: *anyopaque, addr: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    var addr_ptr: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    net_addr.lean_zig_socket_address_to_sockaddr_storage(addr, @ptrCast(&addr_ptr));

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_tcp_bind(tcp_socket.m_uv_tcp, @ptrCast(&addr_ptr), 0);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn tcpListenConnectionCallback(stream: ?*uv.uv_stream_t, status: c_int) callconv(.c) void {
    const obj: *anyopaque = @ptrCast(@alignCast(stream.?.data));
    const tcp_socket = toTcpSocket(obj);

    if (tcp_socket.m_promise_accept == null) return;

    const promise = tcp_socket.m_promise_accept.?;

    if (status < 0) {
        uv_event_loop.lean_zig_promise_resolve_with_code(status, promise);
        rc.lean_dec(promise);
        tcp_socket.m_promise_accept = null;
        return;
    }

    const client = tcp_socket.m_client.?;
    const client_socket = toTcpSocket(client);

    const accept_result = uv.uv_accept(stream, @ptrCast(client_socket.m_uv_tcp));

    tcp_socket.m_promise_accept = null;
    tcp_socket.m_client = null;

    if (accept_result < 0) {
        rc.lean_dec(client);
        uv_event_loop.lean_zig_promise_resolve_with_code(accept_result, promise);
        rc.lean_dec(promise);
        return;
    }

    const res = lean_io_promise_resolve(mkExceptOk(client), promise);
    rc.lean_dec(res);
    rc.lean_dec(promise);
    rc.lean_dec(obj);
}

fn leanUvTcpListenHelper(socket: *anyopaque, backlog: i32) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_listen(@ptrCast(tcp_socket.m_uv_tcp), backlog, tcpListenConnectionCallback);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn parallelAcceptError() *anyopaque {
    const msg = string.mkAsciiStringBytes("parallel accept is not allowed! consider binding multiple sockets to the same address and accepting on them instead");
    return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(uv.UV_EALREADY, msg));
}

fn leanUvTcpAcceptHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_accept != null) {
        uv_event_loop.lean_event_loop_unlock();
        return parallelAcceptError();
    }

    const promise = lean_io_promise_new();
    rc.lean_mark_mt(promise);

    const new_res = leanUvTcpNewHelper();
    if (!io_result.lean_io_result_is_ok(new_res)) {
        uv_event_loop.lean_event_loop_unlock();
        return new_res;
    }
    const client = ioResultTakeValue(new_res);
    const client_socket = toTcpSocket(client);

    const accept_result = uv.uv_accept(@ptrCast(tcp_socket.m_uv_tcp), @ptrCast(client_socket.m_uv_tcp));

    if (accept_result < 0 and accept_result != uv.UV_EAGAIN) {
        uv_event_loop.lean_event_loop_unlock();
        rc.lean_dec(client);
        uv_event_loop.lean_zig_promise_resolve_with_code(accept_result, promise);
    } else if (accept_result >= 0) {
        uv_event_loop.lean_event_loop_unlock();
        const res = lean_io_promise_resolve(mkExceptOk(client), promise);
        rc.lean_dec(res);
    } else {
        rc.lean_inc(socket);
        rc.lean_inc(promise);
        tcp_socket.m_promise_accept = promise;
        tcp_socket.m_client = client;
        uv_event_loop.lean_event_loop_unlock();
    }

    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvTcpTryAcceptHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_accept != null) {
        uv_event_loop.lean_event_loop_unlock();
        return parallelAcceptError();
    }

    const new_res = leanUvTcpNewHelper();
    if (!io_result.lean_io_result_is_ok(new_res)) {
        uv_event_loop.lean_event_loop_unlock();
        return new_res;
    }
    const client = ioResultTakeValue(new_res);
    const client_socket = toTcpSocket(client);

    const accept_result = uv.uv_accept(@ptrCast(tcp_socket.m_uv_tcp), @ptrCast(client_socket.m_uv_tcp));

    if (accept_result < 0 and accept_result != uv.UV_EAGAIN) {
        uv_event_loop.lean_event_loop_unlock();
        rc.lean_dec(client);
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(accept_result, null));
    } else if (accept_result >= 0) {
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_ok(mkExceptOk(mkOptionSome(client)));
    } else {
        uv_event_loop.lean_event_loop_unlock();
        rc.lean_dec(client);
        return io_result.lean_io_result_mk_ok(mkExceptOk(mkOptionNone()));
    }
}

fn leanUvTcpCancelAcceptHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_accept == null) {
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
    }

    const promise = tcp_socket.m_promise_accept.?;
    rc.lean_dec(promise);
    tcp_socket.m_promise_accept = null;

    if (tcp_socket.m_client) |client| {
        rc.lean_dec(client);
        tcp_socket.m_client = null;
    }

    rc.lean_dec(socket);

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn tcpShutdownCallback(req: [*c]uv.uv_shutdown_t, status: c_int) callconv(.c) void {
    const obj: *anyopaque = @ptrCast(@alignCast(req.*.data));
    const tcp_socket = toTcpSocket(obj);

    if (status < 0) {
        uv_event_loop.lean_zig_promise_resolve_with_code(status, tcp_socket.m_promise_shutdown);
    } else {
        const res = lean_io_promise_resolve(mkExceptOk(object.lean_box(0).?), tcp_socket.m_promise_shutdown.?);
        rc.lean_dec(res);
    }

    rc.lean_dec(tcp_socket.m_promise_shutdown.?);
    tcp_socket.m_promise_shutdown = null;
    rc.lean_dec(obj);
    lean_alloc.vtable.free(@ptrCast(req), @sizeOf(uv.uv_shutdown_t), @alignOf(uv.uv_shutdown_t));
}

fn leanUvTcpShutdownHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();

    if (tcp_socket.m_promise_shutdown != null) {
        uv_event_loop.lean_event_loop_unlock();
        const msg = string.mkAsciiStringBytes("shutdown already in progress");
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(uv.UV_EALREADY, msg));
    }

    const shutdown_req: [*c]uv.uv_shutdown_t = @ptrCast(@alignCast(lean_alloc.vtable.alloc(@sizeOf(uv.uv_shutdown_t), @alignOf(uv.uv_shutdown_t)) orelse {
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_io_error(@intFromEnum(std.posix.E.NOMEM), null));
    }));
    shutdown_req.*.data = socket;

    const promise = lean_io_promise_new();
    rc.lean_mark_mt(promise);
    tcp_socket.m_promise_shutdown = promise;
    rc.lean_inc(promise);
    rc.lean_inc(socket);

    const result = uv.uv_shutdown(shutdown_req, @ptrCast(tcp_socket.m_uv_tcp), tcpShutdownCallback);

    if (result < 0) {
        lean_alloc.vtable.free(@ptrCast(shutdown_req), @sizeOf(uv.uv_shutdown_t), @alignOf(uv.uv_shutdown_t));
        rc.lean_dec(tcp_socket.m_promise_shutdown.?);
        tcp_socket.m_promise_shutdown = null;
        uv_event_loop.lean_event_loop_unlock();
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    uv_event_loop.lean_event_loop_unlock();
    return io_result.lean_io_result_mk_ok(promise);
}

fn leanUvTcpGetpeernameHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    var addr_storage: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    var addr_len: c_int = @intCast(@sizeOf(uv.sockaddr_storage));

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_tcp_getpeername(tcp_socket.m_uv_tcp, @ptrCast(&addr_storage), &addr_len);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const lean_addr = net_addr.lean_zig_sockaddr_to_socketaddress(@ptrCast(&addr_storage));
    return io_result.lean_io_result_mk_ok(lean_addr);
}

fn leanUvTcpGetsocknameHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    var addr_storage: uv.sockaddr_storage = std.mem.zeroes(uv.sockaddr_storage);
    var addr_len: c_int = @intCast(@sizeOf(uv.sockaddr_storage));

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_tcp_getsockname(tcp_socket.m_uv_tcp, @ptrCast(&addr_storage), &addr_len);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    const lean_addr = net_addr.lean_zig_sockaddr_to_socketaddress(@ptrCast(&addr_storage));
    return io_result.lean_io_result_mk_ok(lean_addr);
}

fn leanUvTcpNodelayHelper(socket: *anyopaque) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_tcp_nodelay(tcp_socket.m_uv_tcp, 1);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

fn leanUvTcpKeepaliveHelper(socket: *anyopaque, enable: i32, delay: u32) *anyopaque {
    const tcp_socket = toTcpSocket(socket);

    uv_event_loop.lean_event_loop_lock();
    const result = uv.uv_tcp_keepalive(tcp_socket.m_uv_tcp, enable, delay);
    uv_event_loop.lean_event_loop_unlock();

    if (result < 0) {
        return io_result.lean_io_result_mk_error(io_errno.lean_decode_uv_error(result, null));
    }

    return io_result.lean_io_result_mk_ok(object.lean_box(0).?);
}

// Std.Internal.UV.TCP.Socket.new : IO Socket
pub fn lean_uv_tcp_new() callconv(.c) *anyopaque {
    return leanUvTcpNewHelper();
}

pub fn lean_uv_tcp_connect(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpConnectHelper(socket, addr);
}

pub fn lean_uv_tcp_send(socket: *anyopaque, data_array: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpSendHelper(socket, data_array);
}

pub fn lean_uv_tcp_recv(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque {
    return leanUvTcpRecvHelper(socket, buffer_size);
}

pub fn lean_uv_tcp_wait_readable(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpWaitReadableHelper(socket);
}

pub fn lean_uv_tcp_cancel_recv(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpCancelRecvHelper(socket);
}

pub fn lean_uv_tcp_bind(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpBindHelper(socket, addr);
}

pub fn lean_uv_tcp_listen(socket: *anyopaque, backlog: i32) callconv(.c) *anyopaque {
    return leanUvTcpListenHelper(socket, backlog);
}

pub fn lean_uv_tcp_accept(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpAcceptHelper(socket);
}

pub fn lean_uv_tcp_cancel_accept(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpCancelAcceptHelper(socket);
}

pub fn lean_uv_tcp_try_accept(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpTryAcceptHelper(socket);
}

pub fn lean_uv_tcp_shutdown(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpShutdownHelper(socket);
}

pub fn lean_uv_tcp_getpeername(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpGetpeernameHelper(socket);
}

pub fn lean_uv_tcp_getsockname(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpGetsocknameHelper(socket);
}

pub fn lean_uv_tcp_nodelay(socket: *anyopaque) callconv(.c) *anyopaque {
    return leanUvTcpNodelayHelper(socket);
}

pub fn lean_uv_tcp_keepalive(socket: *anyopaque, enable: i32, delay: u32) callconv(.c) *anyopaque {
    return leanUvTcpKeepaliveHelper(socket, enable, delay);
}
