module
prelude
import Init.Data.Int.DivMod.Basic
import Init.Data.Int.ToString
import Init.Data.Nat.Gcd
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for Nat and Int operations. -/

def main : IO Unit := do
  IO.println (Nat.gcd 84 30)
  let z : Int := (-37)
  IO.println (z + 42)
  IO.println (Int.ediv 37 5)
