// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Init-attribute lookup (`get_init_fn_name_for` in `init_attribute.cpp`).
//!
//! `lean_get_init_fn_name_for` is `@[export]` in `Lean.Compiler.InitAttr` and
//! is provided by the compiled stdlib; the C++ shim only forwards to it.

pub const force_link = true;