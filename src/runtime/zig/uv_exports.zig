// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// Explicit exports for libuv subsystem entry points.
// The implementations live in per-subsystem Zig modules; this module
// ensures the C-visible symbols are retained when linking the helperless
// Zig runtime as a static library.

const uv_dns = @import("uv_dns.zig");
const uv_event_loop = @import("uv_event_loop.zig");
const uv_signal = @import("uv_signal.zig");
const uv_system = @import("uv_system.zig");
const uv_tcp = @import("uv_tcp.zig");
const uv_timer = @import("uv_timer.zig");
const uv_udp = @import("uv_udp.zig");
const net_addr = @import("net_addr.zig");

comptime {
    @export(&uv_dns.lean_uv_dns_get_info, .{ .name = "lean_uv_dns_get_info" });
    @export(&uv_dns.lean_uv_dns_get_name, .{ .name = "lean_uv_dns_get_name" });
    @export(&uv_event_loop.lean_uv_event_loop_configure, .{ .name = "lean_uv_event_loop_configure" });
    @export(&uv_event_loop.lean_uv_event_loop_alive, .{ .name = "lean_uv_event_loop_alive" });
    @export(&uv_signal.lean_uv_signal_mk, .{ .name = "lean_uv_signal_mk" });
    @export(&uv_signal.lean_uv_signal_next, .{ .name = "lean_uv_signal_next" });
    @export(&uv_signal.lean_uv_signal_stop, .{ .name = "lean_uv_signal_stop" });
    @export(&uv_signal.lean_uv_signal_cancel, .{ .name = "lean_uv_signal_cancel" });
    @export(&uv_system.lean_uv_get_process_title, .{ .name = "lean_uv_get_process_title" });
    @export(&uv_system.lean_libuv_version, .{ .name = "lean_libuv_version" });
    @export(&uv_system.lean_uv_set_process_title, .{ .name = "lean_uv_set_process_title" });
    @export(&uv_system.lean_uv_uptime, .{ .name = "lean_uv_uptime" });
    @export(&uv_system.lean_uv_os_getpid, .{ .name = "lean_uv_os_getpid" });
    @export(&uv_system.lean_uv_os_getppid, .{ .name = "lean_uv_os_getppid" });
    @export(&uv_system.lean_uv_cpu_info, .{ .name = "lean_uv_cpu_info" });
    @export(&uv_system.lean_uv_cwd, .{ .name = "lean_uv_cwd" });
    @export(&uv_system.lean_uv_chdir, .{ .name = "lean_uv_chdir" });
    @export(&uv_system.lean_uv_os_homedir, .{ .name = "lean_uv_os_homedir" });
    @export(&uv_system.lean_uv_os_tmpdir, .{ .name = "lean_uv_os_tmpdir" });
    @export(&uv_system.lean_uv_os_get_passwd, .{ .name = "lean_uv_os_get_passwd" });
    @export(&uv_system.lean_uv_os_get_group, .{ .name = "lean_uv_os_get_group" });
    @export(&uv_system.lean_uv_os_environ, .{ .name = "lean_uv_os_environ" });
    @export(&uv_system.lean_uv_os_getenv, .{ .name = "lean_uv_os_getenv" });
    @export(&uv_system.lean_uv_os_setenv, .{ .name = "lean_uv_os_setenv" });
    @export(&uv_system.lean_uv_os_unsetenv, .{ .name = "lean_uv_os_unsetenv" });
    @export(&uv_system.lean_uv_os_gethostname, .{ .name = "lean_uv_os_gethostname" });
    @export(&uv_system.lean_uv_os_getpriority, .{ .name = "lean_uv_os_getpriority" });
    @export(&uv_system.lean_uv_os_setpriority, .{ .name = "lean_uv_os_setpriority" });
    @export(&uv_system.lean_uv_os_uname, .{ .name = "lean_uv_os_uname" });
    @export(&uv_system.lean_uv_hrtime, .{ .name = "lean_uv_hrtime" });
    @export(&uv_system.lean_uv_random, .{ .name = "lean_uv_random" });
    @export(&uv_system.lean_uv_getrusage, .{ .name = "lean_uv_getrusage" });
    @export(&uv_system.lean_uv_exepath, .{ .name = "lean_uv_exepath" });
    @export(&uv_system.lean_uv_get_free_memory, .{ .name = "lean_uv_get_free_memory" });
    @export(&uv_system.lean_uv_get_total_memory, .{ .name = "lean_uv_get_total_memory" });
    @export(&uv_system.lean_uv_get_constrained_memory, .{ .name = "lean_uv_get_constrained_memory" });
    @export(&uv_system.lean_uv_get_available_memory, .{ .name = "lean_uv_get_available_memory" });
    @export(&uv_tcp.lean_uv_tcp_new, .{ .name = "lean_uv_tcp_new" });
    @export(&uv_tcp.lean_uv_tcp_connect, .{ .name = "lean_uv_tcp_connect" });
    @export(&uv_tcp.lean_uv_tcp_send, .{ .name = "lean_uv_tcp_send" });
    @export(&uv_tcp.lean_uv_tcp_recv, .{ .name = "lean_uv_tcp_recv" });
    @export(&uv_tcp.lean_uv_tcp_wait_readable, .{ .name = "lean_uv_tcp_wait_readable" });
    @export(&uv_tcp.lean_uv_tcp_cancel_recv, .{ .name = "lean_uv_tcp_cancel_recv" });
    @export(&uv_tcp.lean_uv_tcp_bind, .{ .name = "lean_uv_tcp_bind" });
    @export(&uv_tcp.lean_uv_tcp_listen, .{ .name = "lean_uv_tcp_listen" });
    @export(&uv_tcp.lean_uv_tcp_accept, .{ .name = "lean_uv_tcp_accept" });
    @export(&uv_tcp.lean_uv_tcp_cancel_accept, .{ .name = "lean_uv_tcp_cancel_accept" });
    @export(&uv_tcp.lean_uv_tcp_try_accept, .{ .name = "lean_uv_tcp_try_accept" });
    @export(&uv_tcp.lean_uv_tcp_shutdown, .{ .name = "lean_uv_tcp_shutdown" });
    @export(&uv_tcp.lean_uv_tcp_getpeername, .{ .name = "lean_uv_tcp_getpeername" });
    @export(&uv_tcp.lean_uv_tcp_getsockname, .{ .name = "lean_uv_tcp_getsockname" });
    @export(&uv_tcp.lean_uv_tcp_nodelay, .{ .name = "lean_uv_tcp_nodelay" });
    @export(&uv_tcp.lean_uv_tcp_keepalive, .{ .name = "lean_uv_tcp_keepalive" });
    @export(&uv_timer.lean_uv_timer_mk, .{ .name = "lean_uv_timer_mk" });
    @export(&uv_timer.lean_uv_timer_next, .{ .name = "lean_uv_timer_next" });
    @export(&uv_timer.lean_uv_timer_reset, .{ .name = "lean_uv_timer_reset" });
    @export(&uv_timer.lean_uv_timer_stop, .{ .name = "lean_uv_timer_stop" });
    @export(&uv_timer.lean_uv_timer_cancel, .{ .name = "lean_uv_timer_cancel" });
    @export(&uv_udp.lean_uv_udp_new, .{ .name = "lean_uv_udp_new" });
    @export(&uv_udp.lean_uv_udp_bind, .{ .name = "lean_uv_udp_bind" });
    @export(&uv_udp.lean_uv_udp_connect, .{ .name = "lean_uv_udp_connect" });
    @export(&uv_udp.lean_uv_udp_send, .{ .name = "lean_uv_udp_send" });
    @export(&uv_udp.lean_uv_udp_recv, .{ .name = "lean_uv_udp_recv" });
    @export(&uv_udp.lean_uv_udp_wait_readable, .{ .name = "lean_uv_udp_wait_readable" });
    @export(&uv_udp.lean_uv_udp_cancel_recv, .{ .name = "lean_uv_udp_cancel_recv" });
    @export(&uv_udp.lean_uv_udp_getpeername, .{ .name = "lean_uv_udp_getpeername" });
    @export(&uv_udp.lean_uv_udp_getsockname, .{ .name = "lean_uv_udp_getsockname" });
    @export(&uv_udp.lean_uv_udp_set_broadcast, .{ .name = "lean_uv_udp_set_broadcast" });
    @export(&uv_udp.lean_uv_udp_set_multicast_loop, .{ .name = "lean_uv_udp_set_multicast_loop" });
    @export(&uv_udp.lean_uv_udp_set_multicast_ttl, .{ .name = "lean_uv_udp_set_multicast_ttl" });
    @export(&uv_udp.lean_uv_udp_set_membership, .{ .name = "lean_uv_udp_set_membership" });
    @export(&uv_udp.lean_uv_udp_set_multicast_interface, .{ .name = "lean_uv_udp_set_multicast_interface" });
    @export(&uv_udp.lean_uv_udp_set_ttl, .{ .name = "lean_uv_udp_set_ttl" });
    @export(&net_addr.lean_uv_pton_v4, .{ .name = "lean_uv_pton_v4" });
    @export(&net_addr.lean_uv_ntop_v4, .{ .name = "lean_uv_ntop_v4" });
    @export(&net_addr.lean_uv_pton_v6, .{ .name = "lean_uv_pton_v6" });
    @export(&net_addr.lean_uv_ntop_v6, .{ .name = "lean_uv_ntop_v6" });
    @export(&net_addr.lean_uv_interface_addresses, .{ .name = "lean_uv_interface_addresses" });
}
