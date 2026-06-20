/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
#include "runtime/object.h"
#include "githash.h"

namespace lean {
extern "C" object * lean_get_githash(obj_arg) {
    return lean_mk_string(LEAN_GITHASH);
}
}
