module
prelude
import Std.Data.ExtHashMap
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.ExtHashMap` operations. -/

def main : IO Unit := do
  let m0 : Std.ExtHashMap String Nat := Std.ExtHashMap.emptyWithCapacity
  let m1 :=
    m0.insert "red" 3
      |>.insert "green" 5
      |>.insert "blue" 4
      |>.insert "red" 7
  IO.println m1.size
  IO.println (m1.getD "red" 0)
  IO.println (m1.contains "yellow")
  let (wasPresent, m2) := m1.containsThenInsertIfNew "green" 9
  IO.println wasPresent
  IO.println (m2.getD "green" 0)
  let (previous, m3) := m2.getThenInsertIfNew? "yellow" 6
  IO.println previous.isSome
  IO.println (m3.getD "yellow" 0)
  let m4 := m3.insertMany #[("cyan", 4), ("green", 50)]
  IO.println m4.size
  IO.println (m4.getD "green" 0)
  let m5 := m4.filter (fun _ v => v > 4)
  IO.println m5.size
  let m6 := m5.map (fun _ v => v + 1)
  IO.println (m6.getD "red" 0)
  IO.println (m6.getD "green" 0)
  let m7 := m4.filterMap (fun _ v => if v > 4 then some (v + 10) else none)
  IO.println m7.size
  IO.println (m7.getD "green" 0)
  IO.println (m7.getD "blue" 0)
  let m8 := m7.modify "yellow" (fun v => v * 2)
  IO.println (m8.getD "yellow" 0)
  let m9 := m8.alter "red" (fun _ => none)
  IO.println (m9.contains "red")
  IO.println m9.size
  let m10 := m9.alter "black" (fun _ => some 1)
  IO.println (m10.getD "black" 0)
  IO.println m10.size
  let other0 : Std.ExtHashMap String Nat := Std.ExtHashMap.emptyWithCapacity
  let other := other0.insert "green" 8 |>.insert "white" 2
  let m11 := m10.union other
  IO.println m11.size
  IO.println (m11.getD "green" 0)
  IO.println (m11.inter m4).size
  IO.println (m11.diff m4).size
