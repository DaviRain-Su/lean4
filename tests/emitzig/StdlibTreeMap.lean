module
prelude
import Std.Data.TreeMap
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.TreeMap` ordered insertion, lookup, erasure, and folding. -/

def main : IO Unit := do
  let m0 : Std.TreeMap Nat Nat := Std.TreeMap.empty
  let m1 := m0.insert 3 30 |>.insert 1 10 |>.insert 4 40 |>.insert 1 11
  IO.println m1.size
  IO.println (m1.getD 1 0)
  IO.println (m1.contains 2)
  let (wasPresent, m2) := m1.containsThenInsertIfNew 3 33
  IO.println wasPresent
  IO.println (m2.getD 3 0)
  let (previous, m3) := m2.getThenInsertIfNew? 2 20
  IO.println previous.isSome
  IO.println (m3.getD 2 0)
  IO.println (m3.minKeyD 0)
  IO.println (m3.maxKeyD 0)
  IO.println ((m3.erase 4).contains 4)
  IO.println (m3.foldl (fun acc k v => acc + k + v) 0)
