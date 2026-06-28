/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Small C++ runtime shims required by src/runtime/uv/*.cpp when compiled for the
Zig runtime. These functions have C linkage and are referenced by the C++ uv
implementation; the underlying IO error constructors are provided by the Zig
runtime via weak exports.
*/

#include <lean/lean.h>
#include <cerrno>

namespace lean {

lean_obj_res mk_embedded_nul_error(b_lean_obj_arg str) {
    lean_inc(str);
    return lean_io_result_mk_error(lean_mk_io_error_invalid_argument_file(str, EINVAL, lean_mk_string("string contains NUL bytes")));
}

} // namespace lean
