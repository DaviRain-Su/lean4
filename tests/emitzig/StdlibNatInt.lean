module
prelude
import Init.Data.Int.DivMod.Basic
import Init.Data.Int.ToString
import Init.Data.Nat.Gcd
import Init.Data.Nat.Lcm
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for Nat and Int operations. -/

def showNatOption : Option Nat → String
  | some n => toString n
  | none => "none"

def main : IO Unit := do
  IO.println (Nat.gcd 84 30)
  IO.println (Nat.lcm 21 6)
  IO.println ((5 : Nat) ^ 4)
  IO.println ((37 : Nat) % 5)
  let z : Int := (-37)
  IO.println (z + 42)
  IO.println (Int.ediv 37 5)
  IO.println (Int.ediv z 5)
  IO.println (Int.emod z 5)
  IO.println (Int.tdiv z 5)
  IO.println (Int.tmod z 5)
  IO.println z.natAbs
  IO.println (showNatOption (42 : Int).toNat?)
  IO.println (showNatOption z.toNat?)
