/*
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#ifdef LEAN_USE_GMP
#include <gmp.h>
#else
// mpz_t is defined by the consumer's include of runtime/mpz.h
#endif
#include <lean/lean.h>

#ifdef __cplusplus
extern "C" {
#endif

LEAN_EXPORT lean_object * lean_alloc_mpz(mpz_t);
/* Set `v` with the value stored in `o`.
   - pre: `lean_is_mpz(o)`
   - pre: `v` has already been initialized using `mpz_init` (or equivalent).
*/
LEAN_EXPORT void lean_extract_mpz_value(lean_object * o, mpz_t v);

#ifdef __cplusplus
}
#endif
