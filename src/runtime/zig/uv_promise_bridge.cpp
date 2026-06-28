/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

C++ linkage bridge for the internal promise API used by src/runtime/uv/*.cpp.
The uv code calls lean::lean_promise_new() / lean::lean_promise_resolve(),
which have C++ linkage in runtime/object.h. These forward to the C-linked
lean_io_promise_new / lean_io_promise_resolve exported by the Zig runtime.
*/

#include "runtime/object.h"

namespace lean {

obj_res lean_promise_new() {
    return lean_io_promise_new();
}

void lean_promise_resolve(obj_arg value, b_obj_arg promise) {
    lean_io_promise_resolve(value, promise);
}

} // namespace lean
