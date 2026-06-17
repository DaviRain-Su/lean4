/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Compatibility header injected into the C++ libuv subsystem when it is compiled
for the Zig runtime. It replaces the C++ runtime assertion/unreachable helpers
with plain aborts, avoiding a dependency on the C++ runtime's exception and
debugging machinery.
*/

#pragma once

#include <cstdlib>

// Pull in the real debug.h first so we can override its macros.
#include "runtime/debug.h"

#undef lean_unreachable
#define lean_unreachable() do { std::abort(); } while (0)

#undef lean_assert
#define lean_assert(COND) do { if (!(COND)) std::abort(); } while (0)

#undef lean_always_assert
#define lean_always_assert(COND) do { if (!(COND)) std::abort(); } while (0)

#undef lean_cond_assert
#define lean_cond_assert(TAG, COND) do { if (!(COND)) std::abort(); } while (0)

#undef lean_verify
#define lean_verify(COND) do { if (!(COND)) std::abort(); } while (0)
