module
prelude
import Std.Data.DHashMap
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.DHashMap` dependent map operations. -/

def main : IO Unit := do
  let m0 : Std.DHashMap String (fun _ => Nat) := Std.DHashMap.emptyWithCapacity
  let m1 :=
    m0.insert "red" 3
      |>.insert "green" 5
      |>.insert "blue" 4
      |>.insert "red" 7
  IO.println m1.size
  IO.println (Std.DHashMap.Const.getD m1 "red" 0)
  IO.println (m1.contains "yellow")
  let (wasPresent, m2) := m1.containsThenInsertIfNew "green" 9
  IO.println wasPresent
  IO.println (Std.DHashMap.Const.getD m2 "green" 0)
  let (previous, m3) := Std.DHashMap.Const.getThenInsertIfNew? m2 "yellow" 6
  IO.println previous.isSome
  IO.println (Std.DHashMap.Const.getD m3 "yellow" 0)
  let m4 := Std.DHashMap.Const.insertMany m3 #[("cyan", 4), ("green", 50)]
  IO.println m4.size
  IO.println (Std.DHashMap.Const.getD m4 "green" 0)
  let m5 := m4.filter (fun _ v => v > 4)
  IO.println m5.size
  IO.println (m5.fold (fun acc _ v => acc + v) 0)
  let m6 := m4.erase "red"
  IO.println (m6.contains "red")
  IO.println m6.size
  let other0 : Std.DHashMap String (fun _ => Nat) := Std.DHashMap.emptyWithCapacity
  let other := other0.insert "green" 8 |>.insert "black" 1
  let m7 := m6.union other
  IO.println m7.size
  IO.println (Std.DHashMap.Const.getD m7 "green" 0)
  IO.println (m7.inter m4).size
  IO.println (m7.diff m4).size
