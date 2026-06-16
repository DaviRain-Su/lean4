module
prelude
import Std.Data.String.ToInt
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for numeric string and slice parsing. -/

def printNat? : Option Nat → IO Unit
  | some n => IO.println n
  | none => IO.println "none"

def printInt? : Option Int → IO Unit
  | some n => IO.println n
  | none => IO.println "none"

def main : IO Unit := do
  let natText := "1_234"
  IO.println natText.isNat
  printNat? natText.toNat?
  IO.println "_123".isNat
  printNat? "12__34".toNat?
  let intSlice := "-0_42".toSlice
  IO.println intSlice.isInt
  printInt? intSlice.toInt?
  IO.println "+42".isInt
  printInt? "-".toInt?
  IO.println (Nat.repr 987).isNat
  printNat? (Nat.repr 987).toNat?
  IO.println (Int.repr (-55)).isInt
  printInt? (Int.repr (-55)).toInt?
