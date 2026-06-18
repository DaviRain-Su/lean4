// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of the C++ `dns` libuv subsystem exports.
//!
//! The getaddrinfo/getnameinfo callback logic remains in
//! `src/runtime/uv/dns.cpp`; this module only exposes the Lean-visible
//! exports and delegates to thin `extern "C"` helpers.

pub const force_link = true;

extern fn lean_uv_dns_get_info_helper(name: *anyopaque, service: *anyopaque, family: u8) callconv(.c) *anyopaque;
extern fn lean_uv_dns_get_name_helper(addr: *anyopaque) callconv(.c) *anyopaque;

// Std.Internal.IO.Async.DNS.getAddrInfo (host service : @& String) (family : UInt8) : IO (IO.Promise (Except IO.Error (Array IPAddr)))
pub fn lean_uv_dns_get_info(name: *anyopaque, service: *anyopaque, family: u8) callconv(.c) *anyopaque {
    return lean_uv_dns_get_info_helper(name, service, family);
}

// Std.Internal.IO.Async.DNS.getNameInfo (host : @& SocketAddress) : IO (IO.Promise (Except IO.Error (String × String)))
pub fn lean_uv_dns_get_name(addr: *anyopaque) callconv(.c) *anyopaque {
    return lean_uv_dns_get_name_helper(addr);
}

