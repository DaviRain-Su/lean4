// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! NEAR host backend for the Lean Zig runtime.
//!
//! Selected when building for the NEAR profile (`wasm32-freestanding` + the
//! NEAR host imports). Provides:
//!   - `allocator` — bump allocator wired into the runtime `Allocator` vtable
//!     (the `wasi-arena` backend from doc F.2.1).
//!   - `compat`    — MVP WASM memcpy/memset fallbacks (doc F.2.2).
//!   - `sys`       — NEAR host imports (`extern "env"`).
//!   - `storage`   — host-backed KV store (the `HostIo` storage surface).
//!
//! This is the `wasi-arena` + `host` HostIo backend from doc F.2.1, built from
//! the field-tested near-sdk-zig host layer.

pub const sys = @import("sys.zig");
pub const compat = @import("compat.zig");
pub const allocator = @import("allocator.zig");
pub const storage = @import("storage.zig");
