// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

// RC barrier functions compiled as a separate C file to prevent the Zig ZCU
// optimizer from inlining and eliminating matching inc/dec pairs.
// The Zig ZCU compiler sees through all function bodies within the ZCU and
// removes inc/dec as dead stores. By putting these in a separate C file,
// the calls are truly opaque to the optimizer.

#include <stdint.h>

extern void lean_inc(void *o);
extern void lean_dec(void *o);

void lean_rc_barrier_inc(void *o) {
    lean_inc(o);
}

void lean_rc_barrier_dec(void *o) {
    lean_dec(o);
}