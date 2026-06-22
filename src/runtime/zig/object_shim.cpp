/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

C++ helpers from object.cpp required by libleancpp when the full object.cpp
is not linked into leanrt under LEAN_ZIG_RT_CUTOVER.
*/
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <string>
#include "runtime/object.h"
#include "runtime/mpz.h"

#if !defined(__STDC_VERSION_STDLIB_H__) || __STDC_VERSION_STDLIB_H__ < 202311L
extern "C" __attribute__((weak)) void free_sized(void *ptr, size_t) {
    std::free(ptr);
}
#endif

extern "C" LEAN_EXPORT void lean_init_task_manager_using(unsigned num_workers);
extern "C" LEAN_EXPORT void lean_finalize_task_manager();

namespace lean {

static void (*volatile p_init_task_manager_using)(unsigned) = lean_init_task_manager_using;
static void (*volatile p_finalize_task_manager)() = lean_finalize_task_manager;

scoped_task_manager::scoped_task_manager(unsigned num_workers) {
    p_init_task_manager_using(num_workers);
}

scoped_task_manager::~scoped_task_manager() {
    p_finalize_task_manager();
}

void (*g_lean_report_task_get_blocked_time)(std::chrono::nanoseconds) = nullptr;

object * alloc_mpz(mpz const & m) {
    void * mem = lean_alloc_small_object(sizeof(mpz_object));
#ifdef LEAN_MIMALLOC
    unsigned sz = ((lean_object *)mem)->m_cs_sz;
#endif
    mpz_object * o = new (mem) mpz_object(m);
#ifdef LEAN_MIMALLOC
    o->m_header.m_cs_sz = sz;
#endif
    lean_set_st_header((lean_object *)o, LeanMPZ, 0);
    return (object *)o;
}

object * mpz_to_nat_core(mpz const & m) {
    lean_assert(!m.is_size_t() || m.get_size_t() > LEAN_MAX_SMALL_NAT);
    return alloc_mpz(m);
}

object * mk_string(std::string const & s) {
    return lean_mk_string_from_bytes(s.data(), s.size());
}

std::string string_to_std(b_obj_arg o) {
    lean_assert(lean_string_size(o) > 0);
    return std::string(lean_string_cstr(o), lean_string_size(o) - 1);
}

bool string_eq(object * s1, char const * s2) {
    if (lean_string_size(s1) != std::strlen(s2) + 1)
        return false;
    return std::memcmp(lean_string_cstr(s1), s2, lean_string_size(s1)) == 0;
}

} // namespace lean