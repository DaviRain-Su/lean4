import Lean.Near

/-! Lean NEAR Counter Contract (SDK version)

Uses the `Lean.Near` SDK instead of raw `@[extern]` bindings.
The counter helper is local example code built on top of typed Layer 3 storage.
-/

open Near

/-- Example-local persistent counter backed by NEAR storage. -/
structure Counter where
  key : Storage.Key UInt64

namespace Counter

def make (key : String) : Counter := ⟨Storage.Key.make key⟩

def get (c : Counter) : IO UInt64 :=
  c.key.read 0

def set (c : Counter) (n : UInt64) : IO Bool :=
  c.key.write n

def reset (c : Counter) : IO Bool :=
  c.set 0

def increment (c : Counter) : IO UInt64 :=
  c.key.modify 0 (· + 1)

end Counter

namespace CounterContract

def counter : Counter := Counter.make "count"

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let _ ← Contract.initStateAs true
    let _ ← counter.reset
    Contract.returnU64 0

def get : Contract.Method .view := Contract.view "get" do
  Contract.returnU64 (← counter.get)

def increment : Contract.Method .update := Contract.update "increment" do
  let n ← counter.increment
  Env.log ("incremented to " ++ toString n)
  Contract.returnU64 n

end CounterContract

/-- Single-entry test harness: run the update method that a NEAR export would call. -/
def main : IO UInt32 := do
  CounterContract.increment.run
