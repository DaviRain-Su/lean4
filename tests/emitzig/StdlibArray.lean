module
prelude
import Init.Data.Array.Basic
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for Array operations. -/

def main : IO Unit := do
  let xs := #[3, 1, 4]
  IO.println xs.size
  IO.println xs[2]!
  IO.println (xs.push 1).size
