/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Demonstrates in-memory Array operations: literal construction, element
access, and size queries.
-/
import Lean.Evm
open Lean.Evm

namespace ArrayExample

/-- Return the size of a 3-element array literal. -/
@[export l_ArrayExample_sizeOf3]
def sizeOf3 : IO Nat := do
  let xs : Array Nat := #[10, 20, 30]
  pure xs.size

/-- Get element at index 1 (returns 20). -/
@[export l_ArrayExample_getElem]
def getElem : IO Nat := do
  let xs : Array Nat := #[10, 20, 30]
  pure xs[1]!

/-- Return the sum of a 3-element array. -/
@[export l_ArrayExample_sumOf3]
def sumOf3 : IO Nat := do
  let xs : Array Nat := #[10, 20, 30]
  pure (xs[0]! + xs[1]! + xs[2]!)

end ArrayExample
