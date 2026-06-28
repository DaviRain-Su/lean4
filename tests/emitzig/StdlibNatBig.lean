module
prelude
import Init.Data.Nat.Basic
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for big Nat arithmetic and decimal printing. -/

def main : IO Unit := do
  let n := (2 : Nat) ^ 100
  let m := n * 3 + 1
  IO.println m
  IO.println (m / n)
  IO.println (m % n)
  IO.println (m - n)
  let dec := (10 : Nat) ^ 50 + 12345
  IO.println dec
  IO.println (dec / 97)
  IO.println (dec % 97)
  let pow65 := (2 : Nat) ^ 65
  let huge := (2 : Nat) ^ 130 + pow65 + 17
  IO.println (huge / pow65)
  IO.println (huge % pow65)
  IO.println (huge / 0)
  IO.println (huge % 0)
  IO.println (n - m)
  IO.println (decide (huge > m))
  IO.println (huge == huge + 1)
  IO.println (huge * huge)
