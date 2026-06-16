module
prelude
import Std.Data.HashMap
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.HashMap` insertion, lookup, erasure, and folding. -/

def main : IO Unit := do
  let m0 : Std.HashMap String Nat := Std.HashMap.emptyWithCapacity
  let m1 := m0.insert "red" 3 |>.insert "green" 5 |>.insert "blue" 4
  IO.println m1.size
  IO.println (m1.getD "green" 0)
  let (wasPresent, m2) := m1.containsThenInsertIfNew "red" 9
  IO.println wasPresent
  IO.println (m2.getD "red" 0)
  let (previous, m3) := m2.getThenInsertIfNew? "yellow" 6
  IO.println previous.isSome
  IO.println ((m3.erase "blue").contains "blue")
  IO.println (m3.fold (fun acc _ v => acc + v) 0)
