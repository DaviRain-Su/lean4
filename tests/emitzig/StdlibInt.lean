module
prelude
import Init.Data.Int.Basic
import Init.Data.Int.DivMod.Basic
import Init.Data.Int.ToString
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for Int negation, multiplication, addition, and comparison. -/

def showNatOption : Option Nat → String
  | some n => toString n
  | none => "none"

def main : IO Unit := do
  let x : Int := -7
  let y : Int := 3
  let z := (x + y) * (-2)
  IO.println z
  let w := x * y + 1
  IO.println w
  if w < x then
    IO.println "lt"
  else
    IO.println "ge"
  IO.println x.sign
  IO.println y.sign
  IO.println (0 : Int).sign
  IO.println (Int.fdiv x y)
  IO.println (Int.fmod x y)
  IO.println (Int.bdiv x 5)
  IO.println (Int.bmod x 5)
  IO.println (showNatOption x.toNat?)
  IO.println (showNatOption y.toNat?)
  let big : Int := -123456789012345678901234567890
  IO.println big
  IO.println big.natAbs
  IO.println (big + 123456789012345678901234567890)
