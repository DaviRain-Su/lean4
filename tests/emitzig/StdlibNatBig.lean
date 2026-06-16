module
prelude
import Init.Data.Nat.Basic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for big Nat arithmetic and decimal printing. -/

def main : IO Unit := do
  let n := (2 : Nat) ^ 100
  let m := n * 3 + 1
  IO.println m
