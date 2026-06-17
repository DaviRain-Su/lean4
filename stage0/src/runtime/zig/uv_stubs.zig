// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Extern declarations for the libuv subsystem implemented in src/runtime/uv/*.cpp.
// The C++ object files are compiled into libleanrt_zig.a by build.zig.

pub const force_link = true;

extern fn lean_uv_event_loop_configure(options: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_event_loop_alive() callconv(.c) u8;
extern fn lean_uv_signal_mk(signum: u32, repeating: u8) callconv(.c) *anyopaque;
extern fn lean_uv_signal_next(signal: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_signal_stop(signal: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_signal_cancel(signal: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_dns_get_info(host: *anyopaque, service: *anyopaque, family: u8) callconv(.c) *anyopaque;
extern fn lean_uv_dns_get_name(addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_get_process_title() callconv(.c) *anyopaque;
extern fn lean_uv_set_process_title(title: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_uptime() callconv(.c) *anyopaque;
extern fn lean_uv_os_getpid() callconv(.c) *anyopaque;
extern fn lean_uv_os_getppid() callconv(.c) *anyopaque;
extern fn lean_uv_cpu_info() callconv(.c) *anyopaque;
extern fn lean_uv_cwd() callconv(.c) *anyopaque;
extern fn lean_uv_chdir(path: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_os_homedir() callconv(.c) *anyopaque;
extern fn lean_uv_os_tmpdir() callconv(.c) *anyopaque;
extern fn lean_uv_os_get_passwd() callconv(.c) *anyopaque;
extern fn lean_uv_os_get_group(gid: u64) callconv(.c) *anyopaque;
extern fn lean_uv_os_environ() callconv(.c) *anyopaque;
extern fn lean_uv_os_getenv(name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_os_setenv(name: *anyopaque, value: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_os_unsetenv(name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_os_gethostname() callconv(.c) *anyopaque;
extern fn lean_uv_os_getpriority(pid: u64) callconv(.c) *anyopaque;
extern fn lean_uv_os_setpriority(pid: u64, priority: u64) callconv(.c) *anyopaque;
extern fn lean_uv_os_uname() callconv(.c) *anyopaque;
extern fn lean_uv_hrtime() callconv(.c) *anyopaque;
extern fn lean_uv_random(size: u64) callconv(.c) *anyopaque;
extern fn lean_uv_getrusage() callconv(.c) *anyopaque;
extern fn lean_uv_exepath() callconv(.c) *anyopaque;
extern fn lean_uv_get_free_memory() callconv(.c) *anyopaque;
extern fn lean_uv_get_total_memory() callconv(.c) *anyopaque;
extern fn lean_uv_get_constrained_memory() callconv(.c) *anyopaque;
extern fn lean_uv_get_available_memory() callconv(.c) *anyopaque;
extern fn lean_uv_tcp_new() callconv(.c) *anyopaque;
extern fn lean_uv_tcp_connect(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_send(socket: *anyopaque, data: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_recv(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_wait_readable(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_cancel_recv(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_bind(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_listen(socket: *anyopaque, backlog: u32) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_accept(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_try_accept(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_cancel_accept(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_shutdown(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_getpeername(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_getsockname(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_nodelay(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_tcp_keepalive(socket: *anyopaque, enable: u8, delay: u32) callconv(.c) *anyopaque;
extern fn lean_uv_udp_new() callconv(.c) *anyopaque;
extern fn lean_uv_udp_bind(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_connect(socket: *anyopaque, addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_send(socket: *anyopaque, data: *anyopaque, opt_addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_recv(socket: *anyopaque, buffer_size: u64) callconv(.c) *anyopaque;
extern fn lean_uv_udp_wait_readable(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_cancel_recv(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_getpeername(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_getsockname(socket: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_broadcast(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_multicast_loop(socket: *anyopaque, enable: u8) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_multicast_ttl(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_membership(socket: *anyopaque, multicast_addr: *anyopaque, interface_addr: *anyopaque, membership: u8) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_multicast_interface(socket: *anyopaque, interface_addr: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_uv_udp_set_ttl(socket: *anyopaque, ttl: u32) callconv(.c) *anyopaque;
