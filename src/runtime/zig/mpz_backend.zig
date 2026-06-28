// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Backend selector for the mpz module. Lives inside the `mpz_zig` module
//! (not shared with root) so it does not trigger Zig's "file exists in two
//! modules" rule.

/// 0 = gmp (native default), 1 = zig-bigint (std.math.big.int, WASM-safe).
const builtin = @import("builtin");

pub const mpz_backend: u8 = if (builtin.cpu.arch == .wasm32) 1 else 0;
