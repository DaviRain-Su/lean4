import Lean

/-!
Test that the new do elaborator correctly handles monad-polymorphic actions in
`try`/`catch` blocks when the action's result type differs from the continuation's
expected result type but is coercible.

Without the fix, `elabDoExpr` passes `m dec.resultType` (e.g., `CoreM (Option Nat)`)
as the expected type. `evalConstCheck Nat ``Nat name : ?m Nat` cannot decompose
`?m Nat =?= CoreM (Option Nat)` (since `Nat ≠ Option Nat`), leaving `?m` stuck.

The fix gives the pure continuation a fresh result type `?α`, so Lean decomposes
`?m Nat =?= CoreM ?α` successfully, then coerces `Nat → Option Nat` inside `mkPure`.
-/

open Lean in
def evalStatsReport? (name : Name) : CoreM (Option Nat) := do
  try
    unsafe evalConstCheck Nat ``Nat name
  catch _ =>
    return none
