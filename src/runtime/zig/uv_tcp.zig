// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `tcp` libuv subsystem exports.
//!
//! The TCP socket object, finalizer, callbacks, and lifecycle state machine
//! remain in `src/runtime/uv/tcp.cpp`; this module only exposes the
//! Lean-visible exports and delegates to thin `extern "C"` helpers.

pub const force_link = true;

extern fn lean_uv_tcp_new_helper() callconv(.c) *anyopaque;
extern fn lean_uv_tcp_connect_helper(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_send_helper(socket: *anyopaque, data_array: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_recv_helper(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_wait_readable_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_cancel_recv_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_bind_helper(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_listen_helper(socket: *anyopaque, backlog: i32) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_accept_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_cancel_accept_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_try_accept_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_shutdown_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_getpeername_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_getsockname_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_nodelay_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_keepalive_helper(socket: *anyopaque, enable: i32, delay: u32) callconv(.c) *anyopaque;

// Std.Internal.UV.TCP.Socket.new : IO Socket
pub fn lean_uv_tcp_new() callconv(.c) *anyopaque {
    return lean_uv_tcp_new_helper();
}

// Std.Internal.UV.TCP.Socket.connect (socket : @& Socket) (addr : @& SocketAddress) : IO (IO.Promise (Except IO.Error Unit))
pub fn lean_uv_tcp_connect(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_connect_helper(socket, addr);
}

// Std.Internal.UV.TCP.Socket.send (socket : @& Socket) (data : Array ByteArray) : IO (IO.Promise (Except IO.Error Unit))
pub fn lean_uv_tcp_send(socket: *anyopaque, data_array: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_send_helper(socket, data_array);
}

// Std.Internal.UV.TCP.Socket.recv? (socket : @& Socket) (size : UInt64) : IO (IO.Promise (Except IO.Error (Option ByteArray)))
pub fn lean_uv_tcp_recv(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque {
    return lean_uv_tcp_recv_helper(socket, buffer_size);
}

// Std.Internal.UV.TCP.Socket.waitReadable (socket : @& Socket) : IO (IO.Promise (Except IO.Error Bool))
pub fn lean_uv_tcp_wait_readable(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_wait_readable_helper(socket);
}

// Std.Internal.UV.TCP.Socket.cancelRecv (socket : @& Socket) : IO Unit
pub fn lean_uv_tcp_cancel_recv(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_cancel_recv_helper(socket);
}

// Std.Internal.UV.TCP.Socket.bind (socket : @& Socket) (addr : @& SocketAddress) : IO Unit
pub fn lean_uv_tcp_bind(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_bind_helper(socket, addr);
}

// Std.Internal.UV.TCP.Socket.listen (socket : @& Socket) (backlog : Int32) : IO Unit
pub fn lean_uv_tcp_listen(socket: *anyopaque, backlog: i32) callconv(.c) *anyopaque {
    return lean_uv_tcp_listen_helper(socket, backlog);
}

// Std.Internal.UV.TCP.Socket.accept (socket : @& Socket) : IO (IO.Promise (Except IO.Error Socket))
pub fn lean_uv_tcp_accept(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_accept_helper(socket);
}

// Std.Internal.UV.TCP.Socket.cancelAccept (socket : @& Socket) : IO Unit
pub fn lean_uv_tcp_cancel_accept(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_cancel_accept_helper(socket);
}

// Std.Internal.UV.TCP.Socket.tryAccept (socket : @& Socket) : IO (Except IO.Error (Option Socket))
pub fn lean_uv_tcp_try_accept(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_try_accept_helper(socket);
}

// Std.Internal.UV.TCP.Socket.shutdown (socket : @& Socket) : IO (IO.Promise (Except IO.Error Unit))
pub fn lean_uv_tcp_shutdown(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_shutdown_helper(socket);
}

// Std.Internal.UV.TCP.Socket.getPeerName (socket : @& Socket) : IO SocketAddress
pub fn lean_uv_tcp_getpeername(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_getpeername_helper(socket);
}

// Std.Internal.UV.TCP.Socket.getSockName (socket : @& Socket) : IO SocketAddress
pub fn lean_uv_tcp_getsockname(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_getsockname_helper(socket);
}

// Std.Internal.UV.TCP.Socket.noDelay (socket : @& Socket) : IO Unit
pub fn lean_uv_tcp_nodelay(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_tcp_nodelay_helper(socket);
}

// Std.Internal.UV.TCP.Socket.keepAlive (socket : @& Socket) (enable : Int8) (delay : UInt32) : IO Unit
pub fn lean_uv_tcp_keepalive(socket: *anyopaque, enable: i32, delay: u32) callconv(.c) *anyopaque {
    return lean_uv_tcp_keepalive_helper(socket, enable, delay);
}
