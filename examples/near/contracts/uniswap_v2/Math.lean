/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Math library for Uniswap V2 (ported from `contracts/libraries/Math.sol`).

Provides `min` and `sqrt` (Babylonian method) as pure Lean functions.
-/

namespace UniswapV2.Math

/-- Minimum of two Nats. -/
@[inline] def min (x y : Nat) : Nat := if x < y then x else y

/-- Square root via the Babylonian method.
    Ported from UniswapV2 Math.sol. -/
def sqrt (y : Nat) : Nat :=
  if y > 3 then
    -- Iterative refinement: z converges to floor(sqrt(y))
    let rec iterate (z x : Nat) : Nat :=
      if x < z then iterate x ((y / x + x) / 2) else z
    termination_by z  -- z strictly decreases each iteration
    iterate y (y / 2 + 1)
  else if y != 0 then 1
  else 0

/-- Maximum of two Nats. -/
@[inline] def max (x y : Nat) : Nat := if x ≥ y then x else y

end UniswapV2.Math
