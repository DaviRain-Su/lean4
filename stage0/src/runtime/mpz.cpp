/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <memory>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include "runtime/sstream.h"
#include "runtime/buffer.h"
#include "runtime/alloc.h"
#include "runtime/thread.h"
#include "runtime/mpz.h"
#include "runtime/debug.h"

namespace lean {
/***** GMP VERSION ******/
#ifdef LEAN_USE_GMP
mpz::mpz() {
    mpz_init(m_val);
}

mpz::mpz(mpz_t v) {
    mpz_init(m_val);
    mpz_set(m_val, v);
}

mpz::mpz(char const * v) {
    mpz_init_set_str(m_val, const_cast<char*>(v), 10);
}

mpz::mpz(unsigned int v) {
    mpz_init_set_ui(m_val, v);
}

mpz::mpz(int v) {
    mpz_init_set_si(m_val, v);
}

mpz::mpz(uint64 v):
    mpz(static_cast<unsigned>(v)) {
    mpz tmp(static_cast<unsigned>(v >> 32));
    mpz_mul_2exp(tmp.m_val, tmp.m_val, 32);
    mpz_add(m_val, m_val, tmp.m_val);
}

mpz::mpz(int64 v) {
    uint64 w;
    if (v < 0) w = -static_cast<uint64>(v);
    else w = v;
    mpz_init_set_ui(m_val, static_cast<unsigned>(w));
    mpz tmp(static_cast<unsigned>(w >> 32));
    mpz_mul_2exp(tmp.m_val, tmp.m_val, 32);
    mpz_add(m_val, m_val, tmp.m_val);
    if (v < 0)
        mpz_neg(m_val, m_val);
}

mpz::mpz(mpz const & s) {
    mpz_init_set(m_val, s.m_val);
}

mpz::mpz(mpz && s) noexcept : mpz() {
    mpz_swap(m_val, s.m_val);
}

mpz::~mpz() {
    mpz_clear(m_val);
}

void mpz::set(mpz_t r) const {
    mpz_set(r, m_val);
}

void swap(mpz & a, mpz & b) noexcept {
    mpz_swap(a.m_val, b.m_val);
}

int mpz::sgn() const {
    return mpz_sgn(m_val);
}

bool mpz::is_int() const {
    return mpz_fits_sint_p(m_val) != 0;
}

bool mpz::is_unsigned_int() const {
    return mpz_fits_uint_p(m_val) != 0;
}

bool mpz::is_size_t() const {
    // GMP only features `fits` functions up to `unsigned long`, which is smaller than `size_t` on Windows.
    // So we directly count the number of mpz words instead.
    static_assert(sizeof(size_t) == sizeof(mp_limb_t), "GMP word size should be equal to system word size");
    return is_nonneg() && mpz_size(m_val) <= 1;
}

int mpz::get_int() const {
    lean_assert(is_int());
    return static_cast<int>(mpz_get_si(m_val));
}

unsigned int mpz::get_unsigned_int() const {
    lean_assert(is_unsigned_int());
    return static_cast<unsigned>(mpz_get_ui(m_val));
}

size_t mpz::get_size_t() const {
    // GMP only features accessors up to `unsigned long`, which is smaller than `size_t` on Windows.
    // So we directly access the lowest mpz word instead.
    static_assert(sizeof(size_t) == sizeof(mp_limb_t), "GMP word size should be equal system word size");
    // NOTE: mpz_getlimbn returns 0 if the index is out of range (i.e. `m_val == 0`)
    return static_cast<size_t>(mpz_getlimbn(m_val, 0));
}

mpz & mpz::operator=(mpz const & v) {
    mpz_set(m_val, v.m_val); return *this;
}

mpz & mpz::operator=(char const * v) {
    mpz_set_str(m_val, v, 10); return *this;
}

mpz & mpz::operator=(unsigned int v) {
    mpz_set_ui(m_val, v); return *this;
}

mpz & mpz::operator=(int v) {
    mpz_set_si(m_val, v); return *this;
}

int cmp(mpz const & a, mpz const & b) {
    return mpz_cmp(a.m_val, b.m_val);
}

int cmp(mpz const & a, unsigned b) {
    return mpz_cmp_ui(a.m_val, b);
}

int cmp(mpz const & a, int b) {
    return mpz_cmp_si(a.m_val, b);
}

mpz & mpz::operator+=(mpz const & o) { mpz_add(m_val, m_val, o.m_val); return *this; }

mpz & mpz::operator+=(unsigned u) { mpz_add_ui(m_val, m_val, u); return *this; }

mpz & mpz::operator+=(int u) { if (u >= 0) mpz_add_ui(m_val, m_val, u); else mpz_sub_ui(m_val, m_val, -static_cast<unsigned>(u)); return *this; }

mpz & mpz::operator-=(mpz const & o) { mpz_sub(m_val, m_val, o.m_val); return *this; }

mpz & mpz::operator-=(unsigned u) { mpz_sub_ui(m_val, m_val, u); return *this; }

mpz & mpz::operator-=(int u) { if (u >= 0) mpz_sub_ui(m_val, m_val, u); else mpz_add_ui(m_val, m_val, -static_cast<unsigned>(u)); return *this; }

mpz & mpz::operator*=(mpz const & o) { mpz_mul(m_val, m_val, o.m_val); return *this; }

mpz & mpz::operator*=(unsigned u) { mpz_mul_ui(m_val, m_val, u); return *this; }

mpz & mpz::operator*=(int u) { mpz_mul_si(m_val, m_val, u); return *this; }

mpz mpz::divexact(mpz const & n, mpz const & d) {
    mpz q;
    mpz_divexact(q.m_val, n.m_val, d.m_val);
    return q;
}

mpz mpz::ediv(mpz const & n, mpz const & d) {
    mpz q;
    mpz_t r;
    mpz_init(r);
    /* (q,r) = (n/d, n%d) */
    mpz_tdiv_qr(q.m_val, r, n.m_val, d.m_val);
    /* if (r < 0) */
    if (mpz_sgn(r) < 0) {
        if (mpz_sgn(d.m_val) > 0) {
            /* q = q - 1. */
            mpz_sub_ui(q.m_val, q.m_val, 1);
        } else {
            /* q = q + 1. */
            mpz_add_ui(q.m_val, q.m_val, 1);
        }
    }
    mpz_clear(r);
    return q;
}

mpz mpz::emod(mpz const & n, mpz const & d) {
    mpz r;
    /* (q,r) = (n/d, n%d) */
    mpz_tdiv_r(r.m_val, n.m_val, d.m_val);
    /* if (r < 0) */
    if (mpz_sgn(r.m_val) < 0) {
        if (mpz_sgn(d.m_val) > 0) {
            /* r = r + d. */
            mpz_add(r.m_val, r.m_val, d.m_val);
        } else {
            /* r = r - d. */
            mpz_sub(r.m_val, r.m_val, d.m_val);
        }
    }
    return r;
}

mpz & mpz::operator/=(mpz const & o) { mpz_tdiv_q(m_val, m_val, o.m_val); return *this; }
mpz & mpz::operator/=(unsigned u) { mpz_tdiv_q_ui(m_val, m_val, u); return *this; }

mpz & mpz::operator%=(mpz const & o) { mpz_tdiv_r(m_val, m_val, o.m_val); return *this; }

mpz mpz::pow(unsigned int exp) const {
    mpz r;
    mpz_pow_ui(r.m_val, m_val, exp);
    return r;
}

size_t mpz::log2() const {
    if (is_nonpos())
        return 0;
    size_t r = mpz_sizeinbase(m_val, 2);
    lean_assert(r > 0);
    return r - 1;
}

mpz & mpz::operator&=(mpz const & o) {
    mpz_and(m_val, m_val, o.m_val);
    return *this;
}

mpz & mpz::operator|=(mpz const & o) {
    mpz_ior(m_val, m_val, o.m_val);
    return *this;
}

mpz & mpz::operator^=(mpz const & o) {
    mpz_xor(m_val, m_val, o.m_val);
    return *this;
}

void mul2k(mpz & a, mpz const & b, unsigned k) {
    mpz_mul_2exp(a.m_val, b.m_val, k);
}

void div2k(mpz & a, mpz const & b, unsigned k) {
    mpz_tdiv_q_2exp(a.m_val, b.m_val, k);
}

uint8 mpz::mod8() const {
    mpz a;
    mpz_fdiv_r_2exp(a.m_val, m_val, 8);
    return static_cast<uint8>(a.get_unsigned_int());
}

uint16 mpz::mod16() const {
    mpz a;
    mpz_fdiv_r_2exp(a.m_val, m_val, 16);
    return static_cast<uint16>(a.get_unsigned_int());
}

uint32 mpz::mod32() const {
    mpz a;
    mpz_fdiv_r_2exp(a.m_val, m_val, 32);
    return static_cast<uint32>(a.get_unsigned_int());
}

uint64 mpz::mod64() const {
    mpz r;
    mpz_fdiv_r_2exp(r.m_val, m_val, 64);
    mpz l;
    mpz_fdiv_r_2exp(l.m_val, r.m_val, 32);
    mpz h;
    mpz_fdiv_q_2exp(h.m_val, r.m_val, 32);
    return (static_cast<uint64>(h.get_unsigned_int()) << 32) + static_cast<uint64>(l.get_unsigned_int());
}

int8 mpz::smod8() const {
    return static_cast<int8>(mod8());
}

int16 mpz::smod16() const {
    return static_cast<int16>(mod16());
}

int32 mpz::smod32() const {
    return static_cast<int32>(mod32());
}

int64 mpz::smod64() const {
    return static_cast<int64>(mod64());
}

void power(mpz & a, mpz const & b, unsigned k) {
    mpz_pow_ui(a.m_val, b.m_val, k);
}

void gcd(mpz & g, mpz const & a, mpz const & b) {
    mpz_gcd(g.m_val, a.m_val, b.m_val);
}

void display(std::ostream & out, __mpz_struct const * v) {
    size_t sz = mpz_sizeinbase(v, 10) + 2;
    if (sz < 1024) {
        char buffer[1024];
        mpz_get_str(buffer, 10, v);
        out << buffer;
    } else {
        std::unique_ptr<char[]> buffer(new char[sz]);
        mpz_get_str(buffer.get(), 10, v);
        out << buffer.get();
    }
}

std::ostream & operator<<(std::ostream & out, mpz const & v) {
    display(out, v.m_val);
    return out;
}

#else
/***** NON GMP VERSION ******/

static void * mpz_alloc_bytes(size_t n) {
#ifdef LEAN_SMALL_ALLOCATOR
    return alloc(n);
#elif defined(LEAN_MIMALLOC)
    void * r = mi_malloc(n);
    if (r == nullptr) lean_internal_panic_out_of_memory();
    return r;
#else
    void * r = malloc(n);
    if (r == nullptr) lean_internal_panic_out_of_memory();
    return r;
#endif
}

static void mpz_free_bytes(void * ptr, size_t n) {
#ifdef LEAN_SMALL_ALLOCATOR
    dealloc(ptr, n);
#elif defined(LEAN_MIMALLOC)
    mi_free_size(ptr, n);
#else
    free_sized(ptr, n);
#endif
}

static mp_limb_t * mpz_alloc_limbs(size_t n) {
    if (n == 0) return nullptr;
    size_t bytes = lean_usize_mul_checked(n, sizeof(mp_limb_t));
    return static_cast<mp_limb_t*>(mpz_alloc_bytes(bytes));
}

static void mpz_dealloc_limbs(mp_limb_t * p, size_t n) {
    if (p && n > 0) mpz_free_bytes(p, lean_usize_mul_checked(n, sizeof(mp_limb_t)));
}

static void mpz_ensure_alloc(mpz_t m, size_t need) {
    if (need <= static_cast<size_t>(m[0]._mp_alloc)) return;
    size_t alloc = m[0]._mp_alloc;
    if (alloc < 1) alloc = 1;
    while (alloc < need) {
        size_t next = alloc * 2;
        if (next < alloc) lean_internal_panic_out_of_memory();
        alloc = next;
    }
    mp_limb_t * old = m[0]._mp_d;
    size_t old_alloc = m[0]._mp_alloc;
    size_t old_used = mpz_size(m);
    mp_limb_t * neu = mpz_alloc_limbs(alloc);
    for (size_t i = 0; i < old_used; i++) neu[i] = old[i];
    for (size_t i = old_used; i < alloc; i++) neu[i] = 0;
    mpz_dealloc_limbs(old, old_alloc);
    m[0]._mp_d = neu;
    m[0]._mp_alloc = static_cast<int>(alloc);
}

static void mpz_normalize(mpz_t m) {
    int sz = m[0]._mp_size;
    if (sz == 0) return;
    int asz = sz < 0 ? -sz : sz;
    while (asz > 0 && m[0]._mp_d[asz - 1] == 0) asz--;
    m[0]._mp_size = asz == 0 ? 0 : (sz < 0 ? -asz : asz);
}

static void mpz_init_zero(mpz_t m) {
    m[0]._mp_alloc = 1;
    m[0]._mp_d = mpz_alloc_limbs(1);
    m[0]._mp_d[0] = 0;
    m[0]._mp_size = 0;
}

static int cmp_mag(mp_limb_t const * a, size_t asz, mp_limb_t const * b, size_t bsz) {
    if (asz != bsz) return asz < bsz ? -1 : 1;
    for (int i = static_cast<int>(asz) - 1; i >= 0; --i) {
        if (a[i] != b[i]) return a[i] < b[i] ? -1 : 1;
    }
    return 0;
}

static void set_limbs(mpz_t r, size_t sz, mp_limb_t const * limbs, int sign) {
    while (sz > 0 && limbs[sz - 1] == 0) sz--;
    if (sz == 0) { r->_mp_size = 0; return; }
    size_t need = std::max<size_t>(1, sz);
    mpz_ensure_alloc(r, need);
    for (size_t i = 0; i < sz; i++) r->_mp_d[i] = limbs[i];
    for (size_t i = sz; i < static_cast<size_t>(r->_mp_alloc); i++) r->_mp_d[i] = 0;
    r->_mp_size = sign < 0 ? -static_cast<int>(sz) : static_cast<int>(sz);
}

static void to_twos(size_t n, mp_limb_t const * digits, size_t dsz, bool neg, mp_limb_t * out) {
    if (!neg) {
        size_t i = 0;
        for (; i < dsz; i++) out[i] = digits[i];
        for (; i < n; i++) out[i] = 0;
    } else {
        size_t i = 0;
        mp_limb_t carry = 1;
        for (; i < n; i++) {
            mp_limb_t w = i < dsz ? digits[i] : 0;
            w = ~w;
            unsigned __int128 sum = (unsigned __int128)w + carry;
            out[i] = static_cast<mp_limb_t>(sum);
            carry = static_cast<mp_limb_t>(sum >> 64);
        }
    }
}

static void twos_negate(size_t n, mp_limb_t * out) {
    mp_limb_t carry = 1;
    for (size_t i = 0; i < n; i++) {
        mp_limb_t w = ~out[i];
        unsigned __int128 sum = (unsigned __int128)w + carry;
        out[i] = static_cast<mp_limb_t>(sum);
        carry = static_cast<mp_limb_t>(sum >> 64);
    }
}

static void mpz_add_core(mpz_t r, __mpz_struct const * a, __mpz_struct const * b, int sign_b) {
    int sa = a->_mp_size;
    if (sign_b == 0) {
        set_limbs(r, mpz_size(a), a->_mp_d, sa);
        return;
    }
    if (sa == 0) {
        set_limbs(r, mpz_size(b), b->_mp_d, sign_b);
        return;
    }
    size_t asz = mpz_size(a);
    size_t bsz = mpz_size(b);
    bool same_sign = (sa < 0) == (sign_b < 0);
    if (same_sign) {
        size_t rsz = std::max(asz, bsz) + 1;
        buffer<mp_limb_t, 256> tmp;
        tmp.resize(rsz, 0);
        mp_limb_t * t = tmp.data();
        mp_limb_t carry = 0;
        for (size_t i = 0; i < rsz; i++) {
            unsigned __int128 sum = carry;
            if (i < asz) sum += a->_mp_d[i];
            if (i < bsz) sum += b->_mp_d[i];
            t[i] = static_cast<mp_limb_t>(sum);
            carry = static_cast<mp_limb_t>(sum >> 64);
        }
        while (rsz > 0 && t[rsz - 1] == 0) rsz--;
        set_limbs(r, rsz, t, sa < 0 ? -1 : 1);
    } else {
        int cm = cmp_mag(a->_mp_d, asz, b->_mp_d, bsz);
        if (cm == 0) {
            r->_mp_size = 0;
            return;
        }
        mp_limb_t const * big;
        size_t big_sz;
        int sign_r;
        mp_limb_t const * small;
        size_t small_sz;
        if (cm > 0) {
            big = a->_mp_d; big_sz = asz; sign_r = sa;
            small = b->_mp_d; small_sz = bsz;
        } else {
            big = b->_mp_d; big_sz = bsz; sign_r = sign_b;
            small = a->_mp_d; small_sz = asz;
        }
        buffer<mp_limb_t, 256> tmp;
        tmp.resize(big_sz, 0);
        mp_limb_t * t = tmp.data();
        mp_limb_t borrow = 0;
        for (size_t i = 0; i < big_sz; i++) {
            __int128 diff = (__int128)big[i] - borrow - (i < small_sz ? small[i] : 0);
            t[i] = static_cast<mp_limb_t>(diff);
            borrow = diff < 0 ? 1 : 0;
        }
        lean_assert(borrow == 0);
        while (big_sz > 0 && t[big_sz - 1] == 0) big_sz--;
        set_limbs(r, big_sz, t, sign_r);
    }
}

static void mpz_mul_core(mpz_t r, __mpz_struct const * a, __mpz_struct const * b) {
    int sa = a->_mp_size;
    int sb = b->_mp_size;
    if (sa == 0 || sb == 0) {
        r->_mp_size = 0;
        return;
    }
    size_t asz = mpz_size(a);
    size_t bsz = mpz_size(b);
    size_t rsz = asz + bsz;
    buffer<mp_limb_t, 256> tmp;
    tmp.resize(rsz, 0);
    mp_limb_t * t = tmp.data();
    for (size_t i = 0; i < asz; i++) {
        unsigned __int128 carry = 0;
        for (size_t j = 0; j < bsz; j++) {
            unsigned __int128 p = (unsigned __int128)a->_mp_d[i] * b->_mp_d[j] + t[i + j] + carry;
            t[i + j] = static_cast<mp_limb_t>(p);
            carry = static_cast<mp_limb_t>(p >> 64);
        }
        size_t k = i + bsz;
        while (carry) {
            unsigned __int128 sum = (unsigned __int128)t[k] + carry;
            t[k] = static_cast<mp_limb_t>(sum);
            carry = static_cast<mp_limb_t>(sum >> 64);
            k++;
        }
    }
    while (rsz > 0 && t[rsz - 1] == 0) rsz--;
    int sign = (sa < 0) == (sb < 0) ? 1 : -1;
    set_limbs(r, rsz, t, sign);
}

static void divrem_mag(mp_limb_t const * a, size_t an, mp_limb_t const * b, size_t bn,
                       buffer<mp_limb_t, 256> & qbuf, size_t & qn,
                       buffer<mp_limb_t, 256> & rbuf, size_t & rn) {
    if (bn == 0) lean_internal_panic("mpz division by zero");
    if (an < bn) {
        qn = 0;
        rbuf.resize(an);
        for (size_t i = 0; i < an; i++) rbuf[i] = a[i];
        rn = an;
        return;
    }
    qbuf.resize(an - bn + 1, 0);
    if (bn == 1) {
        mp_limb_t d = b[0];
        unsigned __int128 rem = 0;
        for (int i = static_cast<int>(an) - 1; i >= 0; --i) {
            unsigned __int128 cur = (rem << 64) | a[i];
            qbuf[i] = static_cast<mp_limb_t>(cur / d);
            rem = cur % d;
        }
        qn = an;
        while (qn > 0 && qbuf[qn - 1] == 0) qn--;
        rbuf.resize(1);
        rbuf[0] = static_cast<mp_limb_t>(rem);
        rn = rem ? 1 : 0;
        return;
    }
    int shift = __builtin_clzll(b[bn - 1]);
    size_t un = an + 1;
    buffer<mp_limb_t, 256> u;
    u.resize(un, 0);
    buffer<mp_limb_t, 256> v;
    v.resize(bn, 0);
    if (shift == 0) {
        for (size_t i = 0; i < an; i++) u[i] = a[i];
        u[an] = 0;
        for (size_t i = 0; i < bn; i++) v[i] = b[i];
    } else {
        int rshift = 64 - shift;
        mp_limb_t prev = 0;
        for (int i = static_cast<int>(an) - 1; i >= 0; --i) {
            u[i + 1] = (a[i] >> rshift) | prev;
            prev = a[i] << shift;
        }
        u[0] = prev;
        prev = 0;
        for (int i = static_cast<int>(bn) - 1; i >= 0; --i) {
            v[i] = (b[i] >> rshift) | prev;
            prev = b[i] << shift;
        }
    }
    qn = an - bn + 1;
    unsigned __int128 const B128 = (unsigned __int128)1 << 64;
    for (int i = static_cast<int>(qn) - 1; i >= 0; --i) {
        unsigned __int128 numerator = ((unsigned __int128)u[i + bn] << 64) | u[i + bn - 1];
        unsigned __int128 qhat = numerator / v[bn - 1];
        unsigned __int128 rhat = numerator % v[bn - 1];
        while (qhat == B128 || (bn >= 2 && qhat * v[bn - 2] > ((rhat << 64) | u[i + bn - 2]))) {
            qhat--;
            if (rhat + v[bn - 1] < B128) rhat += v[bn - 1];
            else break;
        }
        unsigned __int128 carry_mul = 0;
        __int128 borrow = 0;
        for (size_t j = 0; j < bn; j++) {
            unsigned __int128 prod = qhat * v[j] + carry_mul;
            mp_limb_t prod_low = static_cast<mp_limb_t>(prod);
            carry_mul = static_cast<mp_limb_t>(prod >> 64);
            __int128 diff = (__int128)u[i + j] - prod_low - borrow;
            u[i + j] = static_cast<mp_limb_t>(diff);
            borrow = diff < 0 ? 1 : 0;
        }
        __int128 diff = (__int128)u[i + bn] - carry_mul - borrow;
        u[i + bn] = static_cast<mp_limb_t>(diff);
        borrow = diff < 0 ? 1 : 0;
        if (borrow) {
            unsigned __int128 carry = 0;
            for (size_t j = 0; j < bn; j++) {
                unsigned __int128 sum = (unsigned __int128)u[i + j] + v[j] + carry;
                u[i + j] = static_cast<mp_limb_t>(sum);
                carry = static_cast<mp_limb_t>(sum >> 64);
            }
            u[i + bn] = static_cast<mp_limb_t>((unsigned __int128)u[i + bn] + carry);
            qhat--;
        }
        qbuf[i] = static_cast<mp_limb_t>(qhat);
    }
    while (qn > 0 && qbuf[qn - 1] == 0) qn--;
    rbuf.resize(bn + 1, 0);
    if (shift == 0) {
        for (size_t i = 0; i < bn; i++) rbuf[i] = u[i];
    } else {
        int rshift = 64 - shift;
        for (size_t i = 0; i < bn; i++) {
            rbuf[i] = (u[i] >> shift) | (u[i + 1] << rshift);
        }
    }
    rn = bn;
    while (rn > 0 && rbuf[rn - 1] == 0) rn--;
}

static void mpz_tdiv_qr(mpz_t q, mpz_t r, __mpz_struct const * a, __mpz_struct const * b) {
    int sa = a->_mp_size;
    int sb = b->_mp_size;
    size_t an = mpz_size(a);
    size_t bn = mpz_size(b);
    if (bn == 0) lean_internal_panic("mpz division by zero");
    if (an == 0) {
        q->_mp_size = 0;
        r->_mp_size = 0;
        return;
    }
    bool neg_q = (sa < 0) != (sb < 0);
    bool neg_r = sa < 0;
    buffer<mp_limb_t, 256> qbuf, rbuf;
    size_t qn = 0, rn = 0;
    divrem_mag(a->_mp_d, an, b->_mp_d, bn, qbuf, qn, rbuf, rn);
    set_limbs(q, qn, qbuf.data(), neg_q ? -1 : 1);
    set_limbs(r, rn, rbuf.data(), neg_r ? -1 : 1);
}

mpz::mpz() {
    mpz_init_zero(m_val);
}

mpz::mpz(mpz_t v) : mpz(static_cast<__mpz_struct const *>(v)) {
}

mpz::mpz(__mpz_struct const * v) {
    int sz = v->_mp_size;
    int asz = sz < 0 ? -sz : sz;
    m_val[0]._mp_alloc = asz > 0 ? asz : 1;
    m_val[0]._mp_d = mpz_alloc_limbs(m_val[0]._mp_alloc);
    for (int i = 0; i < asz; i++) m_val[0]._mp_d[i] = v->_mp_d[i];
    if (asz == 0) m_val[0]._mp_d[0] = 0;
    m_val[0]._mp_size = sz;
    mpz_normalize(m_val);
}

mpz::mpz(char const * v) {
    mpz_init_zero(m_val);
    char const * str = v;
    bool negative = false;
    while (str[0] == ' ') ++str;
    if (str[0] == '-') {
        negative = true;
        ++str;
    }
    while (str[0]) {
        if ('0' <= str[0] && str[0] <= '9') {
            *this *= 10;
            *this += static_cast<unsigned>(str[0] - '0');
        }
        ++str;
    }
    if (negative && !is_zero()) neg();
}

mpz::mpz(unsigned int v) {
    if (v == 0) {
        mpz_init_zero(m_val);
    } else {
        m_val[0]._mp_alloc = 1;
        m_val[0]._mp_d = mpz_alloc_limbs(1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(v);
        m_val[0]._mp_size = 1;
    }
}

mpz::mpz(int v) {
    if (v == 0) {
        mpz_init_zero(m_val);
    } else if (v > 0) {
        m_val[0]._mp_alloc = 1;
        m_val[0]._mp_d = mpz_alloc_limbs(1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(v);
        m_val[0]._mp_size = 1;
    } else {
        m_val[0]._mp_alloc = 1;
        m_val[0]._mp_d = mpz_alloc_limbs(1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(-static_cast<unsigned>(v));
        m_val[0]._mp_size = -1;
    }
}

mpz::mpz(uint64 v) {
    if (v == 0) {
        mpz_init_zero(m_val);
    } else {
        m_val[0]._mp_alloc = 1;
        m_val[0]._mp_d = mpz_alloc_limbs(1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(v);
        m_val[0]._mp_size = 1;
    }
}

mpz::mpz(int64 v) {
    if (v == 0) {
        mpz_init_zero(m_val);
    } else if (v > 0) {
        m_val[0]._mp_alloc = 1;
        m_val[0]._mp_d = mpz_alloc_limbs(1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(static_cast<uint64>(v));
        m_val[0]._mp_size = 1;
    } else {
        m_val[0]._mp_alloc = 1;
        m_val[0]._mp_d = mpz_alloc_limbs(1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(-static_cast<uint64>(v));
        m_val[0]._mp_size = -1;
    }
}

mpz::mpz(mpz const & s) : mpz(s.m_val) {
}

mpz::mpz(mpz && s) noexcept : mpz() {
    swap(*this, s);
}

mpz::~mpz() {
    mpz_dealloc_limbs(m_val[0]._mp_d, m_val[0]._mp_alloc);
}

void mpz::set(mpz_t r) const {
    int sz = m_val[0]._mp_size;
    set_limbs(r, mpz_size(m_val), m_val[0]._mp_d, sz);
}

void swap(mpz & a, mpz & b) noexcept {
    using std::swap;
    swap(a.m_val[0]._mp_alloc, b.m_val[0]._mp_alloc);
    swap(a.m_val[0]._mp_size, b.m_val[0]._mp_size);
    swap(a.m_val[0]._mp_d, b.m_val[0]._mp_d);
}

int mpz::sgn() const {
    int sz = m_val[0]._mp_size;
    return sz > 0 ? 1 : (sz < 0 ? -1 : 0);
}

bool mpz::is_int() const {
    int sz = m_val[0]._mp_size;
    if (sz == 0) return true;
    if (sz > 1 || sz < -1) return false;
    mp_limb_t l = m_val[0]._mp_d[0];
    if (sz > 0) return l <= static_cast<mp_limb_t>(std::numeric_limits<int>::max());
    return l <= static_cast<mp_limb_t>(std::numeric_limits<int>::max()) + 1;
}

bool mpz::is_unsigned_int() const {
    int sz = m_val[0]._mp_size;
    if (sz < 0) return false;
    if (sz == 0) return true;
    if (sz > 1) return false;
    return m_val[0]._mp_d[0] <= static_cast<mp_limb_t>(std::numeric_limits<unsigned int>::max());
}

bool mpz::is_size_t() const {
    int sz = m_val[0]._mp_size;
    if (sz < 0) return false;
    if (sz == 0) return true;
    if (sizeof(size_t) == 8) return sz <= 1;
    return sz == 1 && m_val[0]._mp_d[0] <= static_cast<mp_limb_t>(std::numeric_limits<unsigned int>::max());
}

int mpz::get_int() const {
    lean_assert(is_int());
    int sz = m_val[0]._mp_size;
    mp_limb_t l = m_val[0]._mp_d[0];
    if (sz < 0) return static_cast<int>(-(static_cast<int64_t>(l)));
    return static_cast<int>(l);
}

unsigned int mpz::get_unsigned_int() const {
    lean_assert(is_unsigned_int());
    return static_cast<unsigned int>(m_val[0]._mp_d[0]);
}

size_t mpz::get_size_t() const {
    lean_assert(is_size_t());
    return static_cast<size_t>(m_val[0]._mp_d[0]);
}

mpz & mpz::operator=(mpz const & v) {
    if (this != &v) {
        int sz = v.m_val[0]._mp_size;
        set_limbs(m_val, mpz_size(v.m_val), v.m_val[0]._mp_d, sz);
    }
    return *this;
}

mpz & mpz::operator=(char const * v) {
    mpz tmp(v);
    *this = tmp;
    return *this;
}

mpz & mpz::operator=(unsigned int v) {
    if (v == 0) {
        m_val[0]._mp_size = 0;
    } else {
        mpz_ensure_alloc(m_val, 1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(v);
        m_val[0]._mp_size = 1;
    }
    return *this;
}

mpz & mpz::operator=(int v) {
    if (v == 0) {
        m_val[0]._mp_size = 0;
    } else if (v > 0) {
        mpz_ensure_alloc(m_val, 1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(v);
        m_val[0]._mp_size = 1;
    } else {
        mpz_ensure_alloc(m_val, 1);
        m_val[0]._mp_d[0] = static_cast<mp_limb_t>(-static_cast<unsigned>(v));
        m_val[0]._mp_size = -1;
    }
    return *this;
}

int cmp(mpz const & a, mpz const & b) {
    int sa = a.m_val[0]._mp_size;
    int sb = b.m_val[0]._mp_size;
    if (sa != sb) return sa < sb ? -1 : 1;
    if (sa == 0) return 0;
    size_t asz = mpz_size(a.m_val);
    size_t bsz = mpz_size(b.m_val);
    int cm = cmp_mag(a.m_val[0]._mp_d, asz, b.m_val[0]._mp_d, bsz);
    return sa < 0 ? -cm : cm;
}

int cmp(mpz const & a, unsigned b) {
    int sa = a.m_val[0]._mp_size;
    if (sa < 0) return -1;
    size_t asz = mpz_size(a.m_val);
    if (asz == 0) return b == 0 ? 0 : -1;
    if (asz > 1) return 1;
    mp_limb_t al = a.m_val[0]._mp_d[0];
    if (al == b) return 0;
    return al > b ? 1 : -1;
}

int cmp(mpz const & a, int b) {
    int sa = a.m_val[0]._mp_size;
    if (b == 0) return sa < 0 ? -1 : (sa > 0 ? 1 : 0);
    bool bneg = b < 0;
    if ((sa < 0) != bneg) return sa < 0 ? -1 : 1;
    size_t asz = mpz_size(a.m_val);
    mp_limb_t babs = b < 0 ? -static_cast<mp_limb_t>(static_cast<unsigned>(b)) : static_cast<mp_limb_t>(static_cast<unsigned>(b));
    int cm = cmp_mag(a.m_val[0]._mp_d, asz, &babs, 1);
    return sa < 0 ? -cm : cm;
}

mpz & mpz::operator+=(mpz const & o) {
    int sign_b = o.m_val[0]._mp_size < 0 ? -1 : (o.m_val[0]._mp_size > 0 ? 1 : 0);
    mpz_add_core(m_val, m_val, o.m_val, sign_b);
    return *this;
}

mpz & mpz::operator+=(unsigned u) {
    if (u == 0) return *this;
    mp_limb_t ul = static_cast<mp_limb_t>(u);
    __mpz_struct b;
    b._mp_size = 1;
    b._mp_d = &ul;
    mpz_add_core(m_val, m_val, &b, 1);
    return *this;
}

mpz & mpz::operator+=(int u) {
    if (u == 0) return *this;
    mp_limb_t ul = u < 0 ? -static_cast<mp_limb_t>(static_cast<unsigned>(u)) : static_cast<mp_limb_t>(static_cast<unsigned>(u));
    int sign = u < 0 ? -1 : 1;
    __mpz_struct b;
    b._mp_size = 1;
    b._mp_d = &ul;
    mpz_add_core(m_val, m_val, &b, sign);
    return *this;
}

mpz & mpz::operator-=(mpz const & o) {
    int sign_b = o.m_val[0]._mp_size < 0 ? 1 : (o.m_val[0]._mp_size > 0 ? -1 : 0);
    mpz_add_core(m_val, m_val, o.m_val, sign_b);
    return *this;
}

mpz & mpz::operator-=(unsigned u) {
    if (u == 0) return *this;
    mp_limb_t ul = static_cast<mp_limb_t>(u);
    __mpz_struct b;
    b._mp_size = 1;
    b._mp_d = &ul;
    mpz_add_core(m_val, m_val, &b, -1);
    return *this;
}

mpz & mpz::operator-=(int u) {
    if (u == 0) return *this;
    mp_limb_t ul = u < 0 ? -static_cast<mp_limb_t>(static_cast<unsigned>(u)) : static_cast<mp_limb_t>(static_cast<unsigned>(u));
    int sign = u < 0 ? 1 : -1;
    __mpz_struct b;
    b._mp_size = 1;
    b._mp_d = &ul;
    mpz_add_core(m_val, m_val, &b, sign);
    return *this;
}

mpz & mpz::operator*=(mpz const & o) {
    mpz_mul_core(m_val, m_val, o.m_val);
    return *this;
}

mpz & mpz::operator*=(unsigned u) {
    if (u == 0) {
        m_val[0]._mp_size = 0;
        return *this;
    }
    mp_limb_t ul = static_cast<mp_limb_t>(u);
    __mpz_struct b;
    b._mp_size = 1;
    b._mp_d = &ul;
    mpz_mul_core(m_val, m_val, &b);
    return *this;
}

mpz & mpz::operator*=(int u) {
    if (u == 0) {
        m_val[0]._mp_size = 0;
        return *this;
    }
    mp_limb_t ul = u < 0 ? -static_cast<mp_limb_t>(static_cast<unsigned>(u)) : static_cast<mp_limb_t>(static_cast<unsigned>(u));
    int sign = u < 0 ? -1 : 1;
    __mpz_struct b;
    b._mp_size = sign;
    b._mp_d = &ul;
    mpz_mul_core(m_val, m_val, &b);
    return *this;
}

mpz & mpz::operator/=(mpz const & o) {
    mpz q, r;
    mpz_tdiv_qr(q.m_val, r.m_val, m_val, o.m_val);
    *this = q;
    return *this;
}

mpz & mpz::operator/=(unsigned u) {
    mpz q, r;
    mp_limb_t ul = static_cast<mp_limb_t>(u);
    __mpz_struct b;
    b._mp_size = 1;
    b._mp_d = &ul;
    mpz_tdiv_qr(q.m_val, r.m_val, m_val, &b);
    *this = q;
    return *this;
}

mpz & mpz::operator%=(mpz const & o) {
    mpz q, r;
    mpz_tdiv_qr(q.m_val, r.m_val, m_val, o.m_val);
    *this = r;
    return *this;
}

mpz mpz::divexact(mpz const & n, mpz const & d) {
    return n / d;
}

mpz mpz::ediv(mpz const & n, mpz const & d) {
    mpz q, r;
    mpz_tdiv_qr(q.m_val, r.m_val, n.m_val, d.m_val);
    if (r.is_neg()) {
        if (d.is_pos()) q -= 1;
        else q += 1;
    }
    return q;
}

mpz mpz::emod(mpz const & n, mpz const & d) {
    mpz q, r;
    mpz_tdiv_qr(q.m_val, r.m_val, n.m_val, d.m_val);
    if (r.is_neg()) {
        if (d.is_pos()) r += d;
        else r -= d;
    }
    return r;
}

mpz mpz::pow(unsigned int exp) const {
    mpz result(1);
    mpz base(*this);
    unsigned e = exp;
    while (e) {
        if (e & 1) result *= base;
        base *= base;
        e >>= 1;
    }
    return result;
}

size_t mpz::log2() const {
    int sz = m_val[0]._mp_size;
    if (sz <= 0) return 0;
    size_t asz = mpz_size(m_val);
    mp_limb_t top = m_val[0]._mp_d[asz - 1];
    return (asz - 1) * 64 + (63 - __builtin_clzll(top));
}

mpz & mpz::operator&=(mpz const & o) {
    size_t asz = mpz_size(m_val);
    bool aneg = m_val[0]._mp_size < 0;
    size_t bsz = mpz_size(o.m_val);
    bool bneg = o.m_val[0]._mp_size < 0;
    size_t n = std::max(asz, bsz);
    buffer<mp_limb_t, 256> ta, tb, tr;
    ta.resize(n);
    tb.resize(n);
    tr.resize(n);
    to_twos(n, m_val[0]._mp_d, asz, aneg, ta.data());
    to_twos(n, o.m_val[0]._mp_d, bsz, bneg, tb.data());
    for (size_t i = 0; i < n; i++) tr[i] = ta[i] & tb[i];
    bool rneg = (tr[n - 1] >> 63) != 0;
    if (rneg) twos_negate(n, tr.data());
    size_t rsz = n;
    while (rsz > 0 && tr[rsz - 1] == 0) rsz--;
    set_limbs(m_val, rsz, tr.data(), rneg ? -1 : 1);
    return *this;
}

mpz & mpz::operator|=(mpz const & o) {
    size_t asz = mpz_size(m_val);
    bool aneg = m_val[0]._mp_size < 0;
    size_t bsz = mpz_size(o.m_val);
    bool bneg = o.m_val[0]._mp_size < 0;
    size_t n = std::max(asz, bsz);
    buffer<mp_limb_t, 256> ta, tb, tr;
    ta.resize(n);
    tb.resize(n);
    tr.resize(n);
    to_twos(n, m_val[0]._mp_d, asz, aneg, ta.data());
    to_twos(n, o.m_val[0]._mp_d, bsz, bneg, tb.data());
    for (size_t i = 0; i < n; i++) tr[i] = ta[i] | tb[i];
    bool rneg = (tr[n - 1] >> 63) != 0;
    if (rneg) twos_negate(n, tr.data());
    size_t rsz = n;
    while (rsz > 0 && tr[rsz - 1] == 0) rsz--;
    set_limbs(m_val, rsz, tr.data(), rneg ? -1 : 1);
    return *this;
}

mpz & mpz::operator^=(mpz const & o) {
    size_t asz = mpz_size(m_val);
    bool aneg = m_val[0]._mp_size < 0;
    size_t bsz = mpz_size(o.m_val);
    bool bneg = o.m_val[0]._mp_size < 0;
    size_t n = std::max(asz, bsz);
    buffer<mp_limb_t, 256> ta, tb, tr;
    ta.resize(n);
    tb.resize(n);
    tr.resize(n);
    to_twos(n, m_val[0]._mp_d, asz, aneg, ta.data());
    to_twos(n, o.m_val[0]._mp_d, bsz, bneg, tb.data());
    for (size_t i = 0; i < n; i++) tr[i] = ta[i] ^ tb[i];
    bool rneg = (tr[n - 1] >> 63) != 0;
    if (rneg) twos_negate(n, tr.data());
    size_t rsz = n;
    while (rsz > 0 && tr[rsz - 1] == 0) rsz--;
    set_limbs(m_val, rsz, tr.data(), rneg ? -1 : 1);
    return *this;
}

void mul2k(mpz & a, mpz const & b, unsigned k) {
    lean_assert(!b.is_neg());
    if (k == 0 || b.is_zero()) {
        a = b;
        return;
    }
    unsigned word_shift = k / 64;
    unsigned bit_shift = k % 64;
    size_t bsz = mpz_size(b.m_val);
    size_t new_sz = bsz + word_shift + (bit_shift ? 1 : 0);
    buffer<mp_limb_t, 256> tmp;
    tmp.resize(new_sz, 0);
    for (size_t i = 0; i < bsz; i++) tmp[word_shift + i] = b.m_val[0]._mp_d[i];
    if (bit_shift) {
        unsigned comp = 64 - bit_shift;
        mp_limb_t carry = 0;
        for (size_t i = word_shift; i < word_shift + bsz; i++) {
            mp_limb_t new_carry = tmp[i] >> comp;
            tmp[i] = (tmp[i] << bit_shift) | carry;
            carry = new_carry;
        }
        tmp[word_shift + bsz] = carry;
    }
    set_limbs(a.m_val, new_sz, tmp.data(), 1);
}

void div2k(mpz & a, mpz const & b, unsigned k) {
    lean_assert(!b.is_neg());
    if (k == 0 || b.is_zero()) {
        a = b;
        return;
    }
    unsigned word_shift = k / 64;
    size_t bsz = mpz_size(b.m_val);
    if (word_shift >= bsz) {
        a = 0;
        return;
    }
    size_t new_sz = bsz - word_shift;
    unsigned bit_shift = k % 64;
    buffer<mp_limb_t, 256> tmp;
    tmp.resize(new_sz, 0);
    if (bit_shift == 0) {
        for (size_t i = 0; i < new_sz; i++) tmp[i] = b.m_val[0]._mp_d[i + word_shift];
    } else {
        unsigned comp = 64 - bit_shift;
        for (size_t i = 0; i < new_sz - 1; i++) {
            tmp[i] = (b.m_val[0]._mp_d[i + word_shift] >> bit_shift) |
                     (b.m_val[0]._mp_d[i + word_shift + 1] << comp);
        }
        tmp[new_sz - 1] = b.m_val[0]._mp_d[bsz - 1] >> bit_shift;
    }
    set_limbs(a.m_val, new_sz, tmp.data(), 1);
}

uint8 mpz::mod8() const {
    int sz = m_val[0]._mp_size;
    if (sz == 0) return 0;
    uint8 ret = static_cast<uint8>(m_val[0]._mp_d[0] & 0xFFu);
    if (sz < 0) ret = -ret;
    return ret;
}

uint16 mpz::mod16() const {
    int sz = m_val[0]._mp_size;
    if (sz == 0) return 0;
    uint16 ret = static_cast<uint16>(m_val[0]._mp_d[0] & 0xFFFFu);
    if (sz < 0) ret = -ret;
    return ret;
}

uint32 mpz::mod32() const {
    int sz = m_val[0]._mp_size;
    if (sz == 0) return 0;
    uint32 ret = static_cast<uint32>(m_val[0]._mp_d[0]);
    if (sz < 0) ret = -ret;
    return ret;
}

uint64 mpz::mod64() const {
    int sz = m_val[0]._mp_size;
    if (sz == 0) return 0;
    uint64 ret = static_cast<uint64>(m_val[0]._mp_d[0]);
    if (sz < 0) ret = -ret;
    return ret;
}

int8 mpz::smod8() const {
    return static_cast<int8>(mod8());
}

int16 mpz::smod16() const {
    return static_cast<int16>(mod16());
}

int32 mpz::smod32() const {
    return static_cast<int32>(mod32());
}

int64 mpz::smod64() const {
    return static_cast<int64>(mod64());
}

void power(mpz & a, mpz const & b, unsigned k) {
    a = b;
    a.pow(k);
}

void gcd(mpz & g, mpz const & a, mpz const & b) {
    mpz tmp1(a);
    mpz tmp2(b);
    mpz aux;
    tmp1.abs();
    tmp2.abs();
    if (tmp1 < tmp2)
        swap(tmp1, tmp2);
    if (tmp2.is_zero()) {
        swap(g, tmp1);
    } else {
        while (true) {
            aux = rem(tmp1, tmp2);
            if (aux.is_zero()) {
                swap(g, tmp2);
                break;
            }
            swap(tmp1, tmp2);
            swap(tmp2, aux);
        }
    }
}

std::ostream & operator<<(std::ostream & out, mpz const & v) {
    int sz = v.m_val[0]._mp_size;
    if (sz == 0) return out << '0';
    if (sz < 0) out << '-';
    size_t n = mpz_size(v.m_val);
    if (n == 1) {
        out << static_cast<unsigned long long>(v.m_val[0]._mp_d[0]);
        return out;
    }
    constexpr mp_limb_t base = 1000000000000000000ULL;
    buffer<mp_limb_t, 256> rem;
    rem.resize(n);
    for (size_t i = 0; i < n; i++) rem[i] = v.m_val[0]._mp_d[i];
    size_t rn = n;
    buffer<mp_limb_t, 256> groups;
    while (rn > 0 && !(rn == 1 && rem[0] == 0)) {
        mp_limb_t r = 0;
        for (int i = static_cast<int>(rn) - 1; i >= 0; --i) {
            unsigned __int128 cur = ((unsigned __int128)r << 64) | rem[i];
            rem[i] = static_cast<mp_limb_t>(cur / base);
            r = static_cast<mp_limb_t>(cur % base);
        }
        groups.push_back(r);
        while (rn > 0 && rem[rn - 1] == 0) rn--;
    }
    if (groups.empty()) {
        out << '0';
        return out;
    }
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%llu", static_cast<unsigned long long>(groups.back()));
    out << buf;
    for (int i = static_cast<int>(groups.size()) - 2; i >= 0; --i) {
        std::snprintf(buf, sizeof(buf), "%018llu", static_cast<unsigned long long>(groups[i]));
        out << buf;
    }
    return out;
}
#endif


std::string mpz::to_string() const {
    std::ostringstream out;
    out << *this;
    return out.str();
}
}

void print(lean::mpz const & n) { std::cout << n << std::endl; }
