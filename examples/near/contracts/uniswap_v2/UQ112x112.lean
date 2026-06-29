/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

UQ112x112 library for Uniswap V2 (ported from `contracts/libraries/UQ112x112.sol`).

Handles binary fixed-point numbers in Q112.112 format:
- Range: [0, 2^112 - 1]
- Resolution: 1 / 2^112
- Encoded as a Nat (224-bit on EVM, arbitrary precision on NEAR)
-/

namespace UniswapV2.UQ112x112

/-- The Q112 scaling factor (2^112). -/
def q112 : Nat := 5192296858534827628530496329220096  -- 2^112

/-- Encode a Nat as a UQ112x112 fixed-point number. -/
@[inline] def encode (y : Nat) : Nat := y * q112

/-- Divide a UQ112x112 number by a Nat, returning a UQ112x112 result. -/
@[inline] def uqdiv (x y : Nat) : Nat := x / y

end UniswapV2.UQ112x112
