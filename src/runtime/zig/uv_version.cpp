/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Tiny C++ helper to expose libuv version to the Zig runtime without pulling
in the rest of src/runtime/libuv.cpp.
*/

#include <lean/lean.h>
#include <uv.h>

extern "C" LEAN_EXPORT lean_obj_res lean_libuv_version(lean_obj_arg o) {
    (void)o;
    return lean_unsigned_to_nat(uv_version());
}
