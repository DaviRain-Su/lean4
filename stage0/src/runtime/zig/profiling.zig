// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Profiler option accessors used by the C++ library (`profiling.cpp`).
//!
//! `lean_get_profiler` and `lean_get_profiler_threshold` are implemented as
//! `@[export]` in `Lean.Util.Profile` and are provided by the compiled stdlib.
//! This module exists so the runtime links the profiling subsystem alongside
//! `time_task.zig` (which calls those symbols when `lean_profileit` runs).

pub const force_link = true;