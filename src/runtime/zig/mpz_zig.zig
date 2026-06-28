// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Big-integer `Mpz` type for the Lean Zig runtime.
//!
//! Dispatches to one of two backends selected at build time via
//! `runtime_options.mpz_backend`:
//!  - `gmp` (default, native): wraps GMP's `__mpz_struct` (16 bytes).
//!  - `zig-bigint` (WASM/freestanding): wraps `std.math.big.int.Managed`
//!    (40 bytes, no assembly, builds for wasm32).
//!
//! Callers import `Mpz` and its methods from here; the backend is transparent.
//! The two backends must never be linked into the same artifact because they
//! disagree on `Mpz` layout (and thus `MpzObject.m_value` size).

const std = @import("std");
const mpz_backend = @import("mpz_backend.zig");

pub const Backend = enum { gmp, zig_bigint };

pub const backend: Backend = switch (mpz_backend.mpz_backend) {
    0 => .gmp,
    1 => .zig_bigint,
    else => .gmp,
};

// The selected backend's Mpz becomes the public type. Methods travel with
// the type, so callers see a uniform surface regardless of backend.
pub const Mpz = switch (backend) {
    .gmp => @import("mpz_zig_gmp.zig").Mpz,
    .zig_bigint => @import("mpz_zig_bigint.zig").Mpz,
};

