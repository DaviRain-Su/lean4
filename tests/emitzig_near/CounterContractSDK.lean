import Lean.Near

/-! Lean NEAR Counter Contract (SDK version)

Uses the `Lean.Near` SDK instead of raw `@[extern]` bindings.
This is the same counter logic as CounterContract.lean but with the
clean SDK API: `Near.Counter`, `Near.Env.log`, `Near.Contract.returnValue`.
-/

open Near

/-- Contract entry: read count from storage, increment, return new value. -/
def main : IO UInt32 := do
  let counter := Counter.make "count"
  let n ← counter.increment
  Env.log s!"incremented to {n}"
  Contract.returnValue (toString n)
  pure 0