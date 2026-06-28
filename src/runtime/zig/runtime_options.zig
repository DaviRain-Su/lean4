// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Runtime build options for the Lean Zig runtime.
//!
//! Consumed by `alloc.zig`, `allocator.zig`, and `init.zig`.
//!
//! NOTE: backend selection is a comptime constant in this source file rather
//! than a build.zig-injected option, because Zig 0.16's `addOptions`-generated
//! module exposes option values as runtime (not comptime) values, which would
//! break the container-level switch in `allocator.zig`. To select a backend,
//! change this constant (or generate this file at build time once a non-libc
//! backend is ready).

pub const export_allocator_symbols: bool = true;

/// Raw-memory backend selector, injected by build.zig addOptions.
/// 0 = libc, 1 = page, 2 = external_cpp. Resolved at runtime startup
/// (see allocator.resolveBackend) because Zig 0.16 addOptions values are
/// not comptime-known at container scope.
pub const allocator_backend: u8 = 0;

/// Big-integer (mpz) backend selector (source-file constant; comptime).
/// 0 = gmp (native default), 1 = zig-bigint (std.math.big.int, WASM-safe).
pub const mpz_backend: u8 = 0;
