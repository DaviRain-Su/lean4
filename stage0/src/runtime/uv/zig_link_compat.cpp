/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/

#include "runtime/uv/dns.h"
#include "runtime/uv/event_loop.h"
#include "runtime/uv/net_addr.h"
#include "runtime/uv/signal.h"
#include "runtime/uv/system.h"
#include "runtime/uv/tcp.h"
#include "runtime/uv/timer.h"
#include "runtime/uv/udp.h"
#include <cstring>

namespace lean {

#if defined(__GNUC__) || defined(__clang__)
#define LEAN_UV_WEAK_ATTR __attribute__((weak))
#else
#define LEAN_UV_WEAK_ATTR
#endif

#define LEAN_UV_LINKAGE extern "C" LEAN_EXPORT LEAN_UV_WEAK_ATTR


#ifndef LEAN_ZIG_RUNTIME_CXX_COMPAT
#ifndef LEAN_EMSCRIPTEN

using namespace std;


extern "C" lean_obj_res lean_uv_random_helper(uint64_t size);
extern "C" lean_obj_res lean_uv_dns_get_info_helper(b_obj_arg name, b_obj_arg service, uint8_t family);
extern "C" lean_obj_res lean_uv_dns_get_name_helper(b_obj_arg ip_addr);
extern "C" lean_obj_res lean_uv_signal_mk_helper(uint32_t signum_obj, uint8_t repeating);
extern "C" lean_obj_res lean_uv_signal_next_helper(lean_object* signal);
extern "C" lean_obj_res lean_uv_signal_stop_helper(lean_object* signal);
extern "C" lean_obj_res lean_uv_signal_cancel_helper(lean_object* signal);
extern "C" lean_obj_res lean_uv_tcp_new_helper();
extern "C" lean_obj_res lean_uv_tcp_connect_helper(b_obj_arg socket, b_obj_arg addr);
extern "C" lean_obj_res lean_uv_tcp_send_helper(b_obj_arg socket, obj_arg data_array);
extern "C" lean_obj_res lean_uv_tcp_recv_helper(b_obj_arg socket, uint64_t buffer_size);
extern "C" lean_obj_res lean_uv_tcp_wait_readable_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_cancel_recv_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_bind_helper(b_obj_arg socket, b_obj_arg addr);
extern "C" lean_obj_res lean_uv_tcp_listen_helper(b_obj_arg socket, int32_t backlog);
extern "C" lean_obj_res lean_uv_tcp_accept_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_cancel_accept_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_try_accept_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_shutdown_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_getpeername_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_getsockname_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_nodelay_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_tcp_keepalive_helper(b_obj_arg socket, int32_t enable, uint32_t delay);
extern "C" lean_obj_res lean_uv_timer_mk_helper(uint64_t timeout, uint8_t repeating);
extern "C" lean_obj_res lean_uv_timer_next_helper(lean_object* timer);
extern "C" lean_obj_res lean_uv_timer_reset_helper(lean_object* timer);
extern "C" lean_obj_res lean_uv_timer_stop_helper(lean_object* timer);
extern "C" lean_obj_res lean_uv_timer_cancel_helper(lean_object* timer);
extern "C" lean_obj_res lean_uv_udp_new_helper();
extern "C" lean_obj_res lean_uv_udp_bind_helper(b_obj_arg socket, b_obj_arg addr);
extern "C" lean_obj_res lean_uv_udp_connect_helper(b_obj_arg socket, b_obj_arg addr);
extern "C" lean_obj_res lean_uv_udp_send_helper(b_obj_arg socket, obj_arg data_array, b_obj_arg opt_addr);
extern "C" lean_obj_res lean_uv_udp_recv_helper(b_obj_arg socket, uint64_t buffer_size);
extern "C" lean_obj_res lean_uv_udp_wait_readable_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_udp_cancel_recv_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_udp_getpeername_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_udp_getsockname_helper(b_obj_arg socket);
extern "C" lean_obj_res lean_uv_udp_set_broadcast_helper(b_obj_arg socket, uint8_t enable);
extern "C" lean_obj_res lean_uv_udp_set_multicast_loop_helper(b_obj_arg socket, uint8_t enable);
extern "C" lean_obj_res lean_uv_udp_set_multicast_ttl_helper(b_obj_arg socket, uint32_t ttl);
extern "C" lean_obj_res lean_uv_udp_set_membership_helper(b_obj_arg socket, b_obj_arg multicast_addr, b_obj_arg interface_addr, uint8_t membership);
extern "C" lean_obj_res lean_uv_udp_set_multicast_interface_helper(b_obj_arg socket, b_obj_arg interface_addr);
extern "C" lean_obj_res lean_uv_udp_set_ttl_helper(b_obj_arg socket, uint32_t ttl);
extern "C" lean_obj_res lean_uv_random_helper(uint64_t size);

/* Std.Internal.UV.Loop.configure (options : Loop.Options) : BaseIO Unit */
LEAN_UV_LINKAGE lean_obj_res lean_uv_event_loop_configure(b_obj_arg options) {
    bool accum = lean_ctor_get_uint8(options, 0);
    bool block = lean_ctor_get_uint8(options, 1);
    event_loop_lock(&global_ev);
    if (accum) {
        int result = uv_loop_configure(global_ev.loop, UV_METRICS_IDLE_TIME);
        if (result != 0) { event_loop_unlock(&global_ev); return lean_io_result_mk_error(lean_decode_uv_error(result, NULL)); }
    }
#if !defined(WIN32) && !defined(_WIN32)
    if (block) {
        int result = uv_loop_configure(global_ev.loop, UV_LOOP_BLOCK_SIGNAL, SIGPROF);
        if (result != 0) { event_loop_unlock(&global_ev); return lean_io_result_mk_error(lean_decode_uv_error(result, NULL)); }
    }
#endif
    event_loop_unlock(&global_ev);
    return lean_box(0);
}

/* Std.Internal.UV.Loop.alive : BaseIO Bool */
LEAN_UV_LINKAGE uint8_t lean_uv_event_loop_alive() {
    event_loop_lock(&global_ev);
    int is_alive = uv_loop_alive(global_ev.loop);
    event_loop_unlock(&global_ev);
    return is_alive;
}

LEAN_UV_LINKAGE lean_obj_res lean_uv_dns_get_info(b_obj_arg name, b_obj_arg service, uint8_t family) { return lean_uv_dns_get_info_helper(name, service, family); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_dns_get_name(b_obj_arg addr) { return lean_uv_dns_get_name_helper(addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_timer_mk(uint64_t timeout, uint8_t repeating) { return lean_uv_timer_mk_helper(timeout, repeating); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_timer_next(b_obj_arg timer) { return lean_uv_timer_next_helper(timer); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_timer_reset(b_obj_arg timer) { return lean_uv_timer_reset_helper(timer); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_timer_stop(b_obj_arg timer) { return lean_uv_timer_stop_helper(timer); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_timer_cancel(b_obj_arg timer) { return lean_uv_timer_cancel_helper(timer); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_signal_mk(uint32_t signum_obj, uint8_t repeating) { return lean_uv_signal_mk_helper(signum_obj, repeating); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_signal_next(b_obj_arg signal) { return lean_uv_signal_next_helper(signal); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_signal_stop(b_obj_arg signal) { return lean_uv_signal_stop_helper(signal); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_signal_cancel(b_obj_arg signal) { return lean_uv_signal_cancel_helper(signal); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_new() { return lean_uv_tcp_new_helper(); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_connect(b_obj_arg socket, b_obj_arg addr) { return lean_uv_tcp_connect_helper(socket, addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_send(b_obj_arg socket, obj_arg data_array) { return lean_uv_tcp_send_helper(socket, data_array); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_recv(b_obj_arg socket, uint64_t buffer_size) { return lean_uv_tcp_recv_helper(socket, buffer_size); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_wait_readable(b_obj_arg socket) { return lean_uv_tcp_wait_readable_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_cancel_recv(b_obj_arg socket) { return lean_uv_tcp_cancel_recv_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_bind(b_obj_arg socket, b_obj_arg addr) { return lean_uv_tcp_bind_helper(socket, addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_listen(b_obj_arg socket, int32_t backlog) { return lean_uv_tcp_listen_helper(socket, backlog); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_accept(b_obj_arg socket) { return lean_uv_tcp_accept_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_cancel_accept(b_obj_arg socket) { return lean_uv_tcp_cancel_accept_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_try_accept(b_obj_arg socket) { return lean_uv_tcp_try_accept_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_shutdown(b_obj_arg socket) { return lean_uv_tcp_shutdown_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_getpeername(b_obj_arg socket) { return lean_uv_tcp_getpeername_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_getsockname(b_obj_arg socket) { return lean_uv_tcp_getsockname_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_nodelay(b_obj_arg socket) { return lean_uv_tcp_nodelay_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_tcp_keepalive(b_obj_arg socket, int32_t enable, uint32_t delay) { return lean_uv_tcp_keepalive_helper(socket, enable, delay); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_new() { return lean_uv_udp_new_helper(); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_bind(b_obj_arg socket, b_obj_arg addr) { return lean_uv_udp_bind_helper(socket, addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_connect(b_obj_arg socket, b_obj_arg addr) { return lean_uv_udp_connect_helper(socket, addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_send(b_obj_arg socket, obj_arg data_array, b_obj_arg opt_addr) { return lean_uv_udp_send_helper(socket, data_array, opt_addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_recv(b_obj_arg socket, uint64_t buffer_size) { return lean_uv_udp_recv_helper(socket, buffer_size); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_wait_readable(b_obj_arg socket) { return lean_uv_udp_wait_readable_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_cancel_recv(b_obj_arg socket) { return lean_uv_udp_cancel_recv_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_getpeername(b_obj_arg socket) { return lean_uv_udp_getpeername_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_getsockname(b_obj_arg socket) { return lean_uv_udp_getsockname_helper(socket); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_set_broadcast(b_obj_arg socket, uint8_t enable) { return lean_uv_udp_set_broadcast_helper(socket, enable); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_set_multicast_loop(b_obj_arg socket, uint8_t enable) { return lean_uv_udp_set_multicast_loop_helper(socket, enable); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_set_multicast_ttl(b_obj_arg socket, uint32_t ttl) { return lean_uv_udp_set_multicast_ttl_helper(socket, ttl); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_set_membership(b_obj_arg socket, b_obj_arg multicast_addr, b_obj_arg interface_addr, uint8_t membership) { return lean_uv_udp_set_membership_helper(socket, multicast_addr, interface_addr, membership); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_set_multicast_interface(b_obj_arg socket, b_obj_arg interface_addr) { return lean_uv_udp_set_multicast_interface_helper(socket, interface_addr); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_udp_set_ttl(b_obj_arg socket, uint32_t ttl) { return lean_uv_udp_set_ttl_helper(socket, ttl); }
LEAN_UV_LINKAGE lean_obj_res lean_uv_random(uint64_t size) { return lean_uv_random_helper(size); }


/* Std.Net.IPv4Addr.ofString (s : @&String) : Option IPV4Addr */
LEAN_UV_LINKAGE lean_obj_res lean_uv_pton_v4(b_obj_arg str_obj) {
    const char* str = string_cstr(str_obj);
    if (strlen(str) != lean_string_size(str_obj) - 1) {
       return mk_option_none();
    }
    in_addr internal;
    if (uv_inet_pton(AF_INET, str, &internal) == 0) {
        return mk_option_some(lean_in_addr_to_ipv4_addr(&internal));
    } else {
        return mk_option_none();
    }
}

/* Std.Net.IPV4Addr.toString (addr : @&IPV4Addr) : String */
LEAN_UV_LINKAGE lean_obj_res lean_uv_ntop_v4(b_obj_arg ipv4_addr) {
    in_addr internal;
    lean_ipv4_addr_to_in_addr(ipv4_addr, &internal);
    char dst[INET_ADDRSTRLEN];
    int ret = uv_inet_ntop(AF_INET, &internal, dst, sizeof(dst));
    lean_always_assert(ret == 0);
    return lean_mk_string(dst);
}

/* Std.Net.IPV6Addr.ofString (s : @&String) : Option IPV6Addr */
LEAN_UV_LINKAGE lean_obj_res lean_uv_pton_v6(b_obj_arg str_obj) {
    const char* str = string_cstr(str_obj);
    if (strlen(str) != lean_string_size(str_obj) - 1) {
       return mk_option_none();
    }
    in6_addr internal;
    if (uv_inet_pton(AF_INET6, str, &internal) == 0) {
        return mk_option_some(lean_in6_addr_to_ipv6_addr(&internal));
    } else {
        return mk_option_none();
    }
}

/* Std.Net.IPV6Addr.toString (addr : @&IPV6Addr) : String */
LEAN_UV_LINKAGE lean_obj_res lean_uv_ntop_v6(b_obj_arg ipv6_addr) {
    in6_addr internal;
    lean_ipv6_addr_to_in6_addr(ipv6_addr, &internal);
    char dst[INET6_ADDRSTRLEN];
    int ret = uv_inet_ntop(AF_INET6, &internal, dst, sizeof(dst));
    lean_always_assert(ret == 0);
    return lean_mk_string(dst);
}

/* Std.Net.networkInterface : IO (Array InterfaceAddress) */
LEAN_UV_LINKAGE lean_obj_res lean_uv_interface_addresses() {
    uv_interface_address_t* info;
    int count;

    if (uv_interface_addresses(&info, &count) != 0) {
        return lean_io_result_mk_error(lean_mk_io_error_invalid_argument(EINVAL, mk_string("failed to get interface addresses")));
    }

    lean_object *arr = lean_alloc_array(0, count);

    for (int i = 0; i < count; i++) {
        uv_interface_address_t interface = info[i];

        int sin_family = interface.address.address4.sin_family;
        in_addr_storage* socket_address;
        in_addr_storage* netmask_address;

        if (sin_family == AF_INET) {
            socket_address = (in_addr_storage*)&interface.address.address4.sin_addr;
            netmask_address =(in_addr_storage*) &interface.netmask.netmask4.sin_addr;
        } else if (sin_family == AF_INET6) {
            socket_address = (in_addr_storage*)&interface.address.address6.sin6_addr;
            netmask_address = (in_addr_storage*)&interface.netmask.netmask6.sin6_addr;
        } else {
            continue;
        }

        lean_object *iface = lean_alloc_ctor(0, 4, 1);
        lean_ctor_set(iface, 0, lean_mk_string(interface.name));
        lean_ctor_set(iface, 1, lean_phys_addr_to_mac_addr(interface.phys_addr));
        lean_ctor_set_uint8(iface, sizeof(void*)*4, interface.is_internal);

        lean_ctor_set(iface, 2, lean_in_addr_storage_to_ip_addr(sin_family, socket_address));
        lean_ctor_set(iface, 3, lean_in_addr_storage_to_ip_addr(sin_family, netmask_address));

        arr = lean_array_push(arr, iface);
    }

    uv_free_interface_addresses(info, count);

    return lean_io_result_mk_ok(arr);
}



// Std.Internal.UV.System.getProcessTitle : IO String
LEAN_UV_LINKAGE lean_obj_res lean_uv_get_process_title() {
    char title[512];
    int result = uv_get_process_title(title, sizeof(title));

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_title = lean_mk_string(title);
    return lean_io_result_mk_ok(lean_title);
}

// Std.Internal.UV.System.setProcessTitle : @& String → IO Unit
LEAN_UV_LINKAGE lean_obj_res lean_uv_set_process_title(b_obj_arg title) {
    const char* title_str = lean_string_cstr(title);
    if (strlen(title_str) != lean_string_size(title) - 1) {
        return mk_embedded_nul_error(title);
    }
    int result = uv_set_process_title(title_str);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    return lean_io_result_mk_ok(lean_box(0));
}

// Std.Internal.UV.System.uptime : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_uptime() {
    double uptime;

    int result = uv_uptime(&uptime);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_uptime = lean_box_uint64((uint64_t)uptime);

    return lean_io_result_mk_ok(lean_uptime);
}

// Std.Internal.UV.System.osGetPid : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_getpid() {
    uv_pid_t pid = uv_os_getpid();
    return lean_io_result_mk_ok(lean_box_uint64(pid));
}

// Std.Internal.UV.System.osGetPpid : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_getppid() {
    uv_pid_t ppid = uv_os_getppid();
    return lean_io_result_mk_ok(lean_box_uint64(ppid));
}

// Std.Internal.UV.System.cpuInfo : IO (Array CPUInfo)
LEAN_UV_LINKAGE lean_obj_res lean_uv_cpu_info() {
    uv_cpu_info_t* cpu_infos;
    int count;

    int result = uv_cpu_info(&cpu_infos, &count);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_cpu_infos = lean_alloc_array(count, count);

    for (int i = 0; i < count; i++) {
        lean_object* times = lean_alloc_ctor(0, 0, 40);
        lean_ctor_set_uint64(times, 0, cpu_infos[i].cpu_times.user);
        lean_ctor_set_uint64(times, 8, cpu_infos[i].cpu_times.nice);
        lean_ctor_set_uint64(times, 16, cpu_infos[i].cpu_times.sys);
        lean_ctor_set_uint64(times, 24, cpu_infos[i].cpu_times.idle);
        lean_ctor_set_uint64(times, 32, cpu_infos[i].cpu_times.irq);

        lean_object* model = lean_mk_string(cpu_infos[i].model);

        lean_object* cpu_info = lean_alloc_ctor(0, 2, 8);
        lean_ctor_set(cpu_info, 0, model);
        lean_ctor_set(cpu_info, 1, times);
        lean_ctor_set_uint64(cpu_info, sizeof(void*)*2, (uint64_t)cpu_infos[i].speed);

        lean_array_set_core(lean_cpu_infos, i, cpu_info);
    }

    uv_free_cpu_info(cpu_infos, count);

    return lean_io_result_mk_ok(lean_cpu_infos);
}

// Std.Internal.UV.System.cwd : IO String
LEAN_UV_LINKAGE lean_obj_res lean_uv_cwd() {
    char buffer[PATH_MAX];
    size_t size = sizeof(buffer);

    int result = uv_cwd(buffer, &size);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_cwd = lean_mk_string(buffer);
    return lean_io_result_mk_ok(lean_cwd);
}

// Std.Internal.UV.System.chdir : @& String → IO Unit
LEAN_UV_LINKAGE lean_obj_res lean_uv_chdir(b_obj_arg path) {
    const char* path_str = lean_string_cstr(path);
    if (strlen(path_str) != lean_string_size(path) - 1) {
        return mk_embedded_nul_error(path);
    }

    int result = uv_chdir(path_str);

    if (result < 0) {
        lean_inc(path);
        return lean_io_result_mk_error(lean_decode_uv_error(result, path));
    }

    return lean_io_result_mk_ok(lean_box(0));
}

// Std.Internal.UV.System.osHomedir : IO String
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_homedir() {
    char buffer[PATH_MAX];
    size_t size = sizeof(buffer);

    int result = uv_os_homedir(buffer, &size);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_homedir = lean_mk_string(buffer);
    return lean_io_result_mk_ok(lean_homedir);
}

// Std.Internal.UV.System.osTmpdir : IO String
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_tmpdir() {
    char buffer[PATH_MAX];
    size_t size = sizeof(buffer);

    int result = uv_os_tmpdir(buffer, &size);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_tmpdir = lean_mk_string(buffer);
    return lean_io_result_mk_ok(lean_tmpdir);
}

// Std.Internal.UV.System.osGetPasswd : IO PasswdInfo
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_get_passwd() {
    uv_passwd_t passwd;

    int result = uv_os_get_passwd(&passwd);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* username = lean_mk_string(passwd.username);
    lean_object* uid = passwd.uid != (unsigned long)(-1) ? mk_option_some(lean_box_uint64(passwd.uid)) : mk_option_none();
    lean_object* gid = passwd.uid != (unsigned long)(-1) ? mk_option_some(lean_box_uint64(passwd.gid)) : mk_option_none();
    lean_object* shell = passwd.shell ? mk_option_some(lean_mk_string(passwd.shell)) : mk_option_none();
    lean_object* homedir = passwd.homedir ? mk_option_some(lean_mk_string(passwd.homedir)) : mk_option_none();

    lean_object* passwd_info = lean_alloc_ctor(0, 5, 0);
    lean_ctor_set(passwd_info, 0, username);
    lean_ctor_set(passwd_info, 1, uid);
    lean_ctor_set(passwd_info, 2, gid);
    lean_ctor_set(passwd_info, 3, shell);
    lean_ctor_set(passwd_info, 4, homedir);

    uv_os_free_passwd(&passwd);

    return lean_io_result_mk_ok(passwd_info);
}

// Std.Internal.UV.System.osGetGroup : IO (Option GroupInfo)
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_get_group(uint64_t gid) {
#if UV_VERSION_HEX >= 0x012D00
    uv_group_t group;
    int result = uv_os_get_group(&group, gid);

    if (result == UV_ENOENT) {
        return lean_io_result_mk_ok(mk_option_none());
    }

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, lean_mk_string("group")));
    }

    lean_object* groupname = lean_mk_string(group.groupname);

    int count = 0;
    char** mem_ptr = group.members;
    while (mem_ptr && *mem_ptr != nullptr) {
        count++;
        mem_ptr++;
    }

    lean_object* members = lean_mk_empty_array();
    for (int i = 0; i < count; i++) {
        lean_object* member_name = lean_mk_string(group.members[i]);
        members = lean_array_push(members, member_name);
    }

    lean_object* group_info = lean_alloc_ctor(0, 2, 8);
    lean_ctor_set(group_info, 0, groupname);
    lean_ctor_set(group_info, 1, members);
    lean_ctor_set_uint64(group_info, sizeof(void*)*2, group.gid);

    uv_os_free_group(&group);

    return lean_io_result_mk_ok(mk_option_some(group_info));
#else
    lean_always_assert(
        false && ("Please build a version of Lean4 with libuv version at least 1.45.0 to invoke this.")
    );
#endif
}

// Std.Internal.UV.System.osEnviron : IO (Array (String × String))
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_environ() {
    uv_env_item_t* env;
    int count;
    int result = uv_os_environ(&env, &count);

    if (result < 0) {
        return lean_io_result_mk_error(lean_mk_string(uv_strerror(result)));
    }

    lean_object* env_array = lean_mk_empty_array();

    for (int i = 0; i < count; i++) {
        lean_object* name = lean_mk_string(env[i].name);
        lean_object* value = lean_mk_string(env[i].value);

        lean_object* pair = lean_alloc_ctor(0, 2, 0);
        lean_ctor_set(pair, 0, name);
        lean_ctor_set(pair, 1, value);

        env_array = lean_array_push(env_array, pair);
    }

    uv_os_free_environ(env, count);

    return lean_io_result_mk_ok(env_array);
}

// Std.Internal.UV.System.osGetenv : @& String → IO (Option String)
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_getenv(b_obj_arg name) {
    const char* name_str = lean_string_cstr(name);
    if (strlen(name_str) != lean_string_size(name) - 1) {
        return lean_io_result_mk_ok(lean_box(0));
    }
    char stack_buffer[1024];
    size_t size = sizeof(stack_buffer);

    int result = uv_os_getenv(name_str, stack_buffer, &size);

    if (result == UV_ENOENT) {
        return lean_io_result_mk_ok(lean_box(0));
    } else if (result == UV_ENOBUFS) {
        char* heap_buffer = static_cast<char*>(malloc(size));
        if (heap_buffer == nullptr) {
            return lean_io_result_mk_error(decode_io_error(ENOMEM, nullptr));
        }

        result = uv_os_getenv(name_str, heap_buffer, &size);

        if (result == UV_ENOENT) {
            free(heap_buffer);
            return lean_io_result_mk_ok(lean_box(0));
        } else if (result < 0) {
            free(heap_buffer);
            return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
        }

        lean_object* value = lean_mk_string(heap_buffer);
        lean_object* some_value = lean_alloc_ctor(1, 1, 0);
        lean_ctor_set(some_value, 0, value);
        free(heap_buffer);
        return lean_io_result_mk_ok(some_value);
    } else if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* value = lean_mk_string(stack_buffer);
    lean_object* some_value = lean_alloc_ctor(1, 1, 0);
    lean_ctor_set(some_value, 0, value);
    return lean_io_result_mk_ok(some_value);
}


// Std.Internal.UV.System.osSetenv : @& String → @& String → IO Unit
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_setenv(b_obj_arg name, b_obj_arg value) {
    const char* name_str = lean_string_cstr(name);
    const char* value_str = lean_string_cstr(value);
    if (strlen(name_str) != lean_string_size(name) - 1) {
        return mk_embedded_nul_error(name);
    }
    if (strlen(value_str) != lean_string_size(value) - 1) {
        return mk_embedded_nul_error(value);
    }

    int result = uv_os_setenv(name_str, value_str);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    return lean_io_result_mk_ok(lean_box(0));
}

// Std.Internal.UV.System.osUnsetenv : @& String → IO Unit
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_unsetenv(b_obj_arg name) {
    const char* name_str = lean_string_cstr(name);
    if (strlen(name_str) != lean_string_size(name) - 1) {
        return mk_embedded_nul_error(name);
    }

    int result = uv_os_unsetenv(name_str);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    return lean_io_result_mk_ok(lean_box(0));
}

// Std.Internal.UV.System.osGetHostname : IO String
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_gethostname() {
    char hostname[256];
    size_t size = sizeof(hostname);

    int result = uv_os_gethostname(hostname, &size);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* lean_hostname = lean_mk_string(hostname);
    return lean_io_result_mk_ok(lean_hostname);
}

// Std.Internal.UV.System.osGetPriority : UInt64 → IO Int64
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_getpriority(uint64_t pid) {
    int priority;

    int result = uv_os_getpriority(pid, &priority);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    return lean_io_result_mk_ok(lean_box_uint64(priority));
}

// Std.Internal.UV.System.osSetPriority : UInt64 → Int → IO Unit
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_setpriority(uint64_t pid, int64_t priority) {
    int result = uv_os_setpriority(pid, priority);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    return lean_io_result_mk_ok(lean_box(0));
}

// Std.Internal.UV.System.osUname : IO UnameInfo
LEAN_UV_LINKAGE lean_obj_res lean_uv_os_uname() {
    uv_utsname_t uname_info;

    int result = uv_os_uname(&uname_info);

    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* sysname = lean_mk_string(uname_info.sysname);
    lean_object* release = lean_mk_string(uname_info.release);
    lean_object* version = lean_mk_string(uname_info.version);
    lean_object* machine = lean_mk_string(uname_info.machine);

    lean_object* uname = lean_alloc_ctor(0, 4, 0);
    lean_ctor_set(uname, 0, sysname);
    lean_ctor_set(uname, 1, release);
    lean_ctor_set(uname, 2, version);
    lean_ctor_set(uname, 3, machine);

    return lean_io_result_mk_ok(uname);
}

// Std.Internal.UV.System.hrtime : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_hrtime() {
    uint64_t time = uv_hrtime();
    return lean_io_result_mk_ok(lean_box_uint64(time));
}

static inline uint64_t timeval_to_millis(uv_timeval_t t) {
    return (uint64_t)t.tv_sec * 1000 + (uint64_t)t.tv_usec / 1000;
}

// Std.Internal.UV.System.getrusage : IO RUsage
LEAN_UV_LINKAGE lean_obj_res lean_uv_getrusage() {
    uv_rusage_t usage;
    int result = uv_getrusage(&usage);
    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* r = lean_alloc_ctor(0, 0, 16 * sizeof(uint64_t));
    lean_ctor_set_uint64(r, 0 * sizeof(uint64_t), timeval_to_millis(usage.ru_utime));
    lean_ctor_set_uint64(r, 1 * sizeof(uint64_t), timeval_to_millis(usage.ru_stime));
    lean_ctor_set_uint64(r, 2 * sizeof(uint64_t), usage.ru_maxrss);
    lean_ctor_set_uint64(r, 3 * sizeof(uint64_t), usage.ru_ixrss);
    lean_ctor_set_uint64(r, 4 * sizeof(uint64_t), usage.ru_idrss);
    lean_ctor_set_uint64(r, 5 * sizeof(uint64_t), usage.ru_isrss);
    lean_ctor_set_uint64(r, 6 * sizeof(uint64_t), usage.ru_minflt);
    lean_ctor_set_uint64(r, 7 * sizeof(uint64_t), usage.ru_majflt);
    lean_ctor_set_uint64(r, 8 * sizeof(uint64_t), usage.ru_nswap);
    lean_ctor_set_uint64(r, 9 * sizeof(uint64_t), usage.ru_inblock);
    lean_ctor_set_uint64(r, 10 * sizeof(uint64_t), usage.ru_oublock);
    lean_ctor_set_uint64(r, 11 * sizeof(uint64_t), usage.ru_msgsnd);
    lean_ctor_set_uint64(r, 12 * sizeof(uint64_t), usage.ru_msgrcv);
    lean_ctor_set_uint64(r, 13 * sizeof(uint64_t), usage.ru_nsignals);
    lean_ctor_set_uint64(r, 14 * sizeof(uint64_t), usage.ru_nvcsw);
    lean_ctor_set_uint64(r, 15 * sizeof(uint64_t), usage.ru_nivcsw);

    return lean_io_result_mk_ok(r);
}

// Std.Internal.UV.System.exePath : IO String
LEAN_UV_LINKAGE lean_obj_res lean_uv_exepath() {
    char buffer[PATH_MAX];
    size_t size = sizeof(buffer);

    int result = uv_exepath(buffer, &size);
    if (result < 0) {
        return lean_io_result_mk_error(lean_decode_uv_error(result, nullptr));
    }

    lean_object* path = lean_mk_string(buffer);
    return lean_io_result_mk_ok(path);
}

// Std.Internal.UV.System.freeMemory : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_get_free_memory() {
    uint64_t mem = uv_get_free_memory();
    return lean_io_result_mk_ok(lean_box_uint64(mem));
}

// Std.Internal.UV.System.totalMemory : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_get_total_memory() {
    uint64_t mem = uv_get_total_memory();
    return lean_io_result_mk_ok(lean_box_uint64(mem));
}

// Std.Internal.UV.System.constrainedMemory : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_get_constrained_memory() {
    uint64_t mem = uv_get_constrained_memory();
    return lean_io_result_mk_ok(lean_box_uint64(mem));
}

// Std.Internal.UV.System.availableMemory : IO UInt64
LEAN_UV_LINKAGE lean_obj_res lean_uv_get_available_memory() {
#if UV_VERSION_HEX >= 0x012D00
    uint64_t mem = uv_get_available_memory();
    return lean_io_result_mk_ok(lean_box_uint64(mem));
#else
    lean_always_assert(
        false && ("Please build a version of Lean4 with libuv version at least 1.45.0 to invoke this.")
    );
#endif
}


#endif
#endif

}
