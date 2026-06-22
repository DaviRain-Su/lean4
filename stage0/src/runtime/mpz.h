/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <cstddef>
#include <cstdint>
#ifdef LEAN_USE_GMP
#include <gmp.h>
#else
// Match GMP's __mpz_struct layout for ABI compatibility
typedef uint64_t mp_limb_t;
typedef struct {
    int _mp_alloc;
    int _mp_size;  // negative = negative number
    mp_limb_t *_mp_d;
} __mpz_struct;
typedef __mpz_struct mpz_t[1];
#endif
#include <string>
#include <iostream>
#include <limits>
#include <lean/lean.h>
#include "runtime/int.h"
#include "runtime/debug.h"

namespace lean {

/** \brief Wrapper for GMP integers */
class LEAN_EXPORT mpz {
    friend class object_compactor;
    friend class region_reader;
    mpz_t m_val;
    mpz(__mpz_struct const * v);
public:
    mpz();
    explicit mpz(mpz_t v);
    explicit mpz(char const * v);
    explicit mpz(unsigned int v);
    explicit mpz(int v);
    explicit mpz(uint64 v);
    explicit mpz(int64 v);
    static mpz of_size_t(size_t v) {
        if (sizeof(size_t) == sizeof(uint64)) // NOLINT
            return mpz((uint64) v); // NOLINT
        else
            return mpz((unsigned) v); // NOLINT
    }
    mpz(mpz const & s);
    mpz(mpz && s) noexcept;
    ~mpz();

    void set(mpz_t r) const;

    friend void swap(mpz & a, mpz & b) noexcept;

    unsigned hash() const {
        return m_val[0]._mp_size == 0 ? 0 : static_cast<unsigned>(m_val[0]._mp_d[0]);
    }

    int sgn() const;

    friend int sgn(mpz const & a) { return a.sgn(); }

    bool is_pos() const {
        return m_val[0]._mp_size > 0;
    }

    bool is_neg() const {
        return m_val[0]._mp_size < 0;
    }

    bool is_zero() const {
        return m_val[0]._mp_size == 0;
    }

    bool is_nonpos() const { return !is_pos(); }

    bool is_nonneg() const { return !is_neg(); }

    void neg() {
        if (m_val[0]._mp_size != 0) m_val[0]._mp_size = -m_val[0]._mp_size;
    }

    friend mpz neg(mpz a) { a.neg(); return a; }

    void abs() {
        if (m_val[0]._mp_size < 0)
            m_val[0]._mp_size = -m_val[0]._mp_size;
    }

    friend mpz abs(mpz a) { a.abs(); return a; }

    bool is_int() const;
    bool is_unsigned_int() const;
    bool is_size_t() const;

    int get_int() const;
    unsigned int get_unsigned_int() const;
    size_t get_size_t() const;

    mpz & operator=(mpz const & v);
    mpz & operator=(mpz && v) { swap(*this, v); return *this; }
    mpz & operator=(char const * v);
    mpz & operator=(unsigned int v);
    mpz & operator=(int v);

    LEAN_EXPORT friend int cmp(mpz const & a, mpz const & b);
    LEAN_EXPORT friend int cmp(mpz const & a, unsigned b);
    LEAN_EXPORT friend int cmp(mpz const & a, int b);

    friend bool operator<(mpz const & a, mpz const & b) { return cmp(a, b) < 0; }
    friend bool operator<(mpz const & a, unsigned b) { return cmp(a, b) < 0; }
    friend bool operator<(mpz const & a, int b) { return cmp(a, b) < 0; }
    friend bool operator<(unsigned a, mpz const & b) { return cmp(b, a) > 0; }
    friend bool operator<(int a, mpz const & b) { return cmp(b, a) > 0; }

    friend bool operator>(mpz const & a, mpz const & b) { return cmp(a, b) > 0; }
    friend bool operator>(mpz const & a, unsigned b) { return cmp(a, b) > 0; }
    friend bool operator>(mpz const & a, int b) { return cmp(a, b) > 0; }
    friend bool operator>(unsigned a, mpz const & b) { return cmp(b, a) < 0; }
    friend bool operator>(int a, mpz const & b) { return cmp(b, a) < 0; }

    friend bool operator<=(mpz const & a, mpz const & b) { return cmp(a, b) <= 0; }
    friend bool operator<=(mpz const & a, unsigned b) { return cmp(a, b) <= 0; }
    friend bool operator<=(mpz const & a, int b) { return cmp(a, b) <= 0; }
    friend bool operator<=(unsigned a, mpz const & b) { return cmp(b, a) >= 0; }
    friend bool operator<=(int a, mpz const & b) { return cmp(b, a) >= 0; }

    friend bool operator>=(mpz const & a, mpz const & b) { return cmp(a, b) >= 0; }
    friend bool operator>=(mpz const & a, unsigned b) { return cmp(a, b) >= 0; }
    friend bool operator>=(mpz const & a, int b) { return cmp(a, b) >= 0; }
    friend bool operator>=(unsigned a, mpz const & b) { return cmp(b, a) <= 0; }
    friend bool operator>=(int a, mpz const & b) { return cmp(b, a) <= 0; }

    friend bool operator==(mpz const & a, mpz const & b) { return cmp(a, b) == 0; }
    friend bool operator==(mpz const & a, unsigned b) { return cmp(a, b) == 0; }
    friend bool operator==(mpz const & a, int b) { return cmp(a, b) == 0; }
    friend bool operator==(unsigned a, mpz const & b) { return cmp(b, a) == 0; }
    friend bool operator==(int a, mpz const & b) { return cmp(b, a) == 0; }

    friend bool operator!=(mpz const & a, mpz const & b) { return cmp(a, b) != 0; }
    friend bool operator!=(mpz const & a, unsigned b) { return cmp(a, b) != 0; }
    friend bool operator!=(mpz const & a, int b) { return cmp(a, b) != 0; }
    friend bool operator!=(unsigned a, mpz const & b) { return cmp(b, a) != 0; }
    friend bool operator!=(int a, mpz const & b) { return cmp(b, a) != 0; }

    mpz & operator+=(mpz const & o);
    mpz & operator+=(unsigned u);
    mpz & operator+=(int u);
    mpz & operator+=(uint64 u) { return u > std::numeric_limits<unsigned>::max() ? *this += mpz(u) : *this += static_cast<unsigned>(u); }

    mpz & operator-=(mpz const & o);
    mpz & operator-=(unsigned u);
    mpz & operator-=(int u);
    mpz & operator-=(uint64 u) { return u > std::numeric_limits<unsigned>::max() ? *this -= mpz(u) : *this -= static_cast<unsigned>(u); }

    mpz & operator*=(mpz const & o);
    mpz & operator*=(unsigned u);
    mpz & operator*=(int u);
    mpz & operator*=(uint64 u) { return u > std::numeric_limits<unsigned>::max() ? *this *= mpz(u) : *this *= static_cast<unsigned>(u); }

    mpz & operator/=(mpz const & o);
    mpz & operator/=(unsigned u);
    mpz & operator/=(uint64 u) { return u > std::numeric_limits<unsigned>::max() ? *this /= mpz(u) : *this /= static_cast<unsigned>(u); }
    mpz & operator/=(int u) { return operator/=(mpz(u)); } // TODO(Leo): improve

    mpz & operator%=(mpz const & o);
    friend mpz rem(mpz const & a, mpz const & b) { mpz r(a); return r %= b; }

    mpz pow(unsigned int exp) const;

    friend mpz operator+(mpz a, mpz const & b) { return a += b; }
    friend mpz operator+(mpz a, unsigned b)  { return a += b; }
    friend mpz operator+(mpz a, uint64 b)  { return a += b; }
    friend mpz operator+(mpz a, int b)  { return a += b; }
    friend mpz operator+(unsigned a, mpz b) { return b += a; }
    friend mpz operator+(uint64 a, mpz b) { return b += a; }
    friend mpz operator+(int a, mpz b) { return b += a; }

    friend mpz operator-(mpz a, mpz const & b) { return a -= b; }
    friend mpz operator-(mpz a, unsigned b) { return a -= b; }
    friend mpz operator-(mpz a, uint64 b) { return a -= b; }
    friend mpz operator-(mpz a, int b) { return a -= b; }
    friend mpz operator-(unsigned a, mpz b) { b.neg(); return b += a; }
    friend mpz operator-(uint64 a, mpz b) { b.neg(); return b += a; }
    friend mpz operator-(int a, mpz b) { b.neg(); return b += a; }

    friend mpz operator*(mpz a, mpz const & b) { return a *= b; }
    friend mpz operator*(mpz a, unsigned b) { return a *= b; }
    friend mpz operator*(mpz a, uint64 b) { return a *= b; }
    friend mpz operator*(mpz a, int b) { return a *= b; }
    friend mpz operator*(unsigned a, mpz b) { return b *= a; }
    friend mpz operator*(uint64 a, mpz b) { return b *= a; }
    friend mpz operator*(int a, mpz b) { return b *= a; }

    friend mpz operator/(mpz a, mpz const & b) { return a /= b; }
    friend mpz operator/(mpz a, unsigned b) { return a /= b; }
    friend mpz operator/(mpz a, uint64 b) { return a /= b; }
    friend mpz operator/(mpz a, int b) { return a /= b; }
    friend mpz operator/(unsigned a, mpz const & b) { mpz r(a); return r /= b; }
    friend mpz operator/(uint64 a, mpz const & b) { mpz r(a); return r /= b; }
    friend mpz operator/(int a, mpz const & b) { mpz r(a); return r /= b; }

    friend mpz operator%(mpz a, mpz const & b) { return a %= b; }

    static mpz divexact(mpz const & n, mpz const & d);

    static mpz ediv(mpz const & n, mpz const & d);
    static mpz ediv(int n, mpz const & d) { return ediv(mpz(n), d); }
    static mpz ediv(mpz const& n, int d) { return ediv(n, mpz(d)); }

    static mpz emod(mpz const & n, mpz const & d);
    static mpz emod(int n, mpz const & d) { return emod(mpz(n), d); }
    static mpz emod(mpz const & n, int d) { return emod(n, mpz(d)); };

    mpz & operator&=(mpz const & o);
    mpz & operator|=(mpz const & o);
    mpz & operator^=(mpz const & o);

    friend mpz operator&(mpz a, mpz const & b) { return a &= b; }
    friend mpz operator|(mpz a, mpz const & b) { return a |= b; }
    friend mpz operator^(mpz a, mpz const & b) { return a ^= b; }

    // a <- b * 2^k
    friend void mul2k(mpz & a, mpz const & b, unsigned k);
    // a <- b / 2^k
    friend void div2k(mpz & a, mpz const & b, unsigned k);

    uint8 mod8() const;
    uint16 mod16() const;
    uint32 mod32() const;
    uint64 mod64() const;

    int8 smod8() const;
    int16 smod16() const;
    int32 smod32() const;
    int64 smod64() const;

    /**
       \brief Return the position of the most significant bit.
       Return 0 if the number is negative
    */
    size_t log2() const;

    friend void power(mpz & a, mpz const & b, unsigned k);
    friend void _power(mpz & a, mpz const & b, unsigned k) { power(a, b, k); }
    friend mpz pow(mpz a, unsigned k) { power(a, a, k); return a; }

    friend void gcd(mpz & g, mpz const & a, mpz const & b);
    friend mpz gcd(mpz const & a, mpz const & b) { mpz r; gcd(r, a, b); return r; }

    LEAN_EXPORT friend std::ostream & operator<<(std::ostream & out, mpz const & v);

    std::string to_string() const;
};

#ifndef LEAN_USE_GMP
inline size_t mpz_size(__mpz_struct const * m) {
    int s = m->_mp_size;
    return s < 0 ? -s : s;
}
#endif

struct mpz_cmp_fn {
    int operator()(mpz const & v1, mpz const & v2) const { return cmp(v1, v2); }
};
}
