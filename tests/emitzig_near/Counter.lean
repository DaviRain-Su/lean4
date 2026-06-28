import Lean.Near

/-! Lean NEAR counter contract.

A minimal counter contract compiled via the Zig backend to WASM.
Demonstrates the Layer 3 SDK path: Lean.Near storage API → EmitZig →
wasm32-wasi → NEAR-compatible WASM.
-/

open Near

def countKey : Storage.Key UInt64 := Storage.Key.make "count"

def main : IO UInt32 := do
  let next ← countKey.modify 0 (· + 1)
  Env.log ("incremented to " ++ toString next)
  Contract.returnU64 next
  pure 0
