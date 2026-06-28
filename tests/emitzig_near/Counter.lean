/-! Lean NEAR counter contract.

A minimal counter contract compiled via the Zig backend to WASM.
Demonstrates: Lean → EmitZig → wasm32-wasi → NEAR-compatible WASM.
-/

-- The contract entry: just prints and returns 0 for now.
-- Full storage integration comes when Lean's FFI can call the NEAR host imports.
def main : IO UInt32 := do
  IO.println "counter contract ready"
  pure 0
