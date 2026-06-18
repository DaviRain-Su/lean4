// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `udp` libuv subsystem exports.
//!
//! The UDP socket object, finalizer, callbacks, and state machine remain in
//! `src/runtime/uv/udp.cpp`; this module only exposes the Lean-visible exports
//! and delegates to thin `extern "C"` helpers.

pub const force_link = true;

extern fn lean_uv_udp_new_helper() callconv(.c) *anyopaque;
extern fn lean_uv_udp_bind_helper(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_connect_helper(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_send_helper(socket: *anyopaque, data: *anyopaque, opt_addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_recv_helper(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque;
extern fn lean_uv_udp_wait_readable_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_cancel_recv_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_getpeername_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_getsockname_helper(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_broadcast_helper(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_multicast_loop_helper(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_multicast_ttl_helper(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_membership_helper(socket: *anyopaque, multicast_addr: *anyopaque, interface_addr: *anyopaque, membership: u8) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_multicast_interface_helper(socket: *anyopaque, interface_addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_ttl_helper(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque;

// Std.Internal.UV.UDP.Socket.new : IO Socket
pub export fn lean_uv_udp_new() callconv(.c) *anyopaque {
    return lean_uv_udp_new_helper();
}

// Std.Internal.UV.UDP.Socket.bind (socket : @& Socket) (addr : @& SocketAddress) : IO Unit
pub export fn lean_uv_udp_bind(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_bind_helper(socket, addr);
}

// Std.Internal.UV.UDP.Socket.connect (socket : @& Socket) (addr : @& SocketAddress) : IO Unit
pub export fn lean_uv_udp_connect(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_connect_helper(socket, addr);
}

// Std.Internal.UV.UDP.Socket.send (socket : @& Socket) (data : Array ByteArray) (addr : @& Option SocketAddress) : IO (IO.Promise (Except IO.Error Unit))
pub export fn lean_uv_udp_send(socket: *anyopaque, data: *anyopaque, opt_addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_send_helper(socket, data, opt_addr);
}

// Std.Internal.UV.UDP.Socket.recv (socket : @& Socket) (size : UInt64) : IO (IO.Promise (Except IO.Error (ByteArray x SocketAddress)))
pub export fn lean_uv_udp_recv(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque {
    return lean_uv_udp_recv_helper(socket, buffer_size);
}

// Std.Internal.UV.UDP.Socket.waitReadable (socket : @& Socket) : IO (IO.Promise (Except IO.Error Unit))
pub export fn lean_uv_udp_wait_readable(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_wait_readable_helper(socket);
}

// Std.Internal.UV.UDP.Socket.cancelRecv (socket : @& Socket) : IO Unit
pub export fn lean_uv_udp_cancel_recv(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_cancel_recv_helper(socket);
}

// Std.Internal.UV.UDP.Socket.getPeerName (socket : @& Socket) : IO SocketAddress
pub export fn lean_uv_udp_getpeername(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_getpeername_helper(socket);
}

// Std.Internal.UV.UDP.Socket.getSockName (socket : @& Socket) : IO SocketAddress
pub export fn lean_uv_udp_getsockname(socket: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_getsockname_helper(socket);
}

// Std.Internal.UV.UDP.Socket.setBroadcast (socket : @& Socket) (on : Bool) : IO Unit
pub export fn lean_uv_udp_set_broadcast(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque {
    return lean_uv_udp_set_broadcast_helper(socket, enable);
}

// Std.Internal.UV.UDP.Socket.setMulticastLoop (socket : @& Socket) (on : Bool) : IO Unit
pub export fn lean_uv_udp_set_multicast_loop(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque {
    return lean_uv_udp_set_multicast_loop_helper(socket, enable);
}

// Std.Internal.UV.UDP.Socket.setMulticastTTL (socket : @& Socket) (ttl : UInt32) : IO Unit
pub export fn lean_uv_udp_set_multicast_ttl(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque {
    return lean_uv_udp_set_multicast_ttl_helper(socket, ttl);
}

// Std.Internal.UV.UDP.Socket.setMembership (socket : @& Socket) (multicastAddr : @& IpAddr) (interfaceAddr : @& Option IpAddr) (membership : UInt8) : IO Unit
pub export fn lean_uv_udp_set_membership(socket: *anyopaque, multicast_addr: *anyopaque, interface_addr: *anyopaque, membership: u8) callconv(.c) *anyopaque {
    return lean_uv_udp_set_membership_helper(socket, multicast_addr, interface_addr, membership);
}

// Std.Internal.UV.UDP.Socket.setMulticastInterface (socket : @& Socket) (interfaceAddr : @& IPAddr) : IO Unit
pub export fn lean_uv_udp_set_multicast_interface(socket: *anyopaque, interface_addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_udp_set_multicast_interface_helper(socket, interface_addr);
}

// Std.Internal.UV.UDP.Socket.setTTL (socket : @& Socket) (ttl : UInt32) : IO Unit
pub export fn lean_uv_udp_set_ttl(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque {
    return lean_uv_udp_set_ttl_helper(socket, ttl);
}
