// env_barrier.c — Prevents the ZCU optimizer from eliminating
// lean_elab_environment_to_kernel_env calls by doing the conversion
// and retention entirely in C, which the ZCU optimizer cannot inline.
//
// This file is compiled by cc (separate from the Zig compilation unit)
// and linked into the final library. The ZCU optimizer cannot see
// through the function boundaries.
#include "lean/lean.h"

// Declared in Lean (Environment.lean) but not in lean.h
extern lean_object * lean_elab_environment_to_kernel_env(lean_object * obj_env);

lean_object * env_barrier_to_kernel_env(lean_object * obj_env) {
    lean_object * kenv = lean_elab_environment_to_kernel_env(obj_env);
    return kenv;
}

void env_barrier_dec(lean_object * kenv) {
    lean_dec(kenv);
}