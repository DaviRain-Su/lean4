/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/

#include "runtime/uv/net_addr.h"
#include <cstring>

extern "C" {

void lean_zig_ipv4_addr_to_in_addr(lean_object* ipv4_addr, struct in_addr* out);
void lean_zig_ipv6_addr_to_in6_addr(lean_object* ipv6_addr, struct in6_addr* out);
void lean_zig_ip_addr_to_in_addr_storage(lean_object* ip_addr, int* type, void* out);
void lean_zig_socket_address_to_sockaddr_storage(lean_object* ip_addr, struct sockaddr_storage* out);
void lean_zig_ip_addr_ntop(lean_object* ip_addr, char* buffer, size_t buffer_size);
lean_object* lean_zig_in_addr_to_ipv4_addr(const struct in_addr* ipv4_addr);
lean_object* lean_zig_in6_addr_to_ipv6_addr(const struct in6_addr* ipv6_addr);
lean_object* lean_zig_phys_addr_to_mac_addr(char phys_addr[6]);
lean_object* lean_zig_in_addr_storage_to_ip_addr(short family, void* ip_addr);
lean_object* lean_zig_sockaddr_to_socketaddress(const struct sockaddr* sockaddr);

}

namespace lean {

void lean_ipv4_addr_to_in_addr(b_obj_arg ipv4_addr, in_addr* out) {
    lean_zig_ipv4_addr_to_in_addr(ipv4_addr, out);
}

void lean_ipv6_addr_to_in6_addr(b_obj_arg ipv6_addr, in6_addr* out) {
    lean_zig_ipv6_addr_to_in6_addr(ipv6_addr, out);
}

void lean_ip_addr_to_in_addr_storage(lean_object* ip_addr, int* type, in_addr_storage* out) {
    lean_zig_ip_addr_to_in_addr_storage(ip_addr, type, out);
}

void lean_socket_address_to_sockaddr_storage(lean_object* ip_addr, sockaddr_storage* out) {
    lean_zig_socket_address_to_sockaddr_storage(ip_addr, out);
}

void lean_ip_addr_ntop(lean_object* ip_addr, char* buffer, size_t buffer_size) {
    lean_zig_ip_addr_ntop(ip_addr, buffer, buffer_size);
}

lean_obj_res lean_in_addr_to_ipv4_addr(const in_addr* ipv4_addr) {
    return lean_zig_in_addr_to_ipv4_addr(ipv4_addr);
}

lean_obj_res lean_in6_addr_to_ipv6_addr(const in6_addr* ipv6_addr) {
    return lean_zig_in6_addr_to_ipv6_addr(ipv6_addr);
}

lean_obj_res lean_phys_addr_to_mac_addr(char phys_addr[6]) {
    return lean_zig_phys_addr_to_mac_addr(phys_addr);
}

lean_obj_res lean_in_addr_storage_to_ip_addr(short family, in_addr_storage* ip_addr) {
    return lean_zig_in_addr_storage_to_ip_addr(family, ip_addr);
}

lean_obj_res lean_sockaddr_to_socketaddress(const struct sockaddr* sockaddr) {
    return lean_zig_sockaddr_to_socketaddress(sockaddr);
}

}