import Lean.Near

/-! Lean NEAR Counter Contract (SDK version)

Uses the `Lean.Near` SDK instead of raw `@[extern]` bindings.
The counter helper is local example code built on top of `Near.Storage`.
-/

open Near

/-- Example-local persistent counter backed by NEAR storage. -/
structure Counter where
  key : String

namespace Counter

def make (key : String) : Counter := ⟨key⟩

def get (c : Counter) : IO UInt64 := do
  let val := (← Storage.rawRead c.key).getD "0"
  pure (val.toNat?.getD 0).toUInt64

def set (c : Counter) (n : UInt64) : IO Bool :=
  Storage.write c.key (toString n)

def increment (c : Counter) : IO UInt64 := do
  let next := (← c.get) + 1
  let _ ← c.set next
  pure next

end Counter

/-- Contract entry: read count from storage, increment, return new value. -/
def main : IO UInt32 := do
  let counter := Counter.make "count"
  let n ← counter.increment
  Env.log s!"incremented to {n}"
  Contract.returnValue (toString n)
  pure 0
