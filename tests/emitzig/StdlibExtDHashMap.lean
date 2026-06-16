module
prelude
import Std.Data.ExtDHashMap
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.ExtDHashMap` dependent map operations. -/

def main : IO Unit := do
  let m0 : Std.ExtDHashMap String (fun _ => Nat) := Std.ExtDHashMap.emptyWithCapacity
  let m1 :=
    m0.insert "red" 3
      |>.insert "green" 5
      |>.insert "blue" 4
      |>.insert "red" 7
  IO.println m1.size
  IO.println (Std.ExtDHashMap.Const.getD m1 "red" 0)
  IO.println (m1.contains "yellow")
  let (wasPresent, m2) := m1.containsThenInsertIfNew "green" 9
  IO.println wasPresent
  IO.println (Std.ExtDHashMap.Const.getD m2 "green" 0)
  let (previous, m3) := Std.ExtDHashMap.Const.getThenInsertIfNew? m2 "yellow" 6
  IO.println previous.isSome
  IO.println (Std.ExtDHashMap.Const.getD m3 "yellow" 0)
  let m4 := Std.ExtDHashMap.Const.insertMany m3 #[("cyan", 4), ("green", 50)]
  IO.println m4.size
  IO.println (Std.ExtDHashMap.Const.getD m4 "green" 0)
  let m5 := m4.filter (fun _ v => v > 4)
  IO.println m5.size
  let m6 := m5.map (fun _ v => v + 1)
  IO.println (Std.ExtDHashMap.Const.getD m6 "red" 0)
  IO.println (Std.ExtDHashMap.Const.getD m6 "green" 0)
  let m7 := m4.filterMap (fun _ v => if v > 4 then some (v + 10) else none)
  IO.println m7.size
  IO.println (Std.ExtDHashMap.Const.getD m7 "green" 0)
  IO.println (Std.ExtDHashMap.Const.getD m7 "blue" 0)
  let m8 := Std.ExtDHashMap.Const.modify m7 "yellow" (fun v => v * 2)
  IO.println (Std.ExtDHashMap.Const.getD m8 "yellow" 0)
  let m9 := Std.ExtDHashMap.Const.alter m8 "red" (fun _ => none)
  IO.println (m9.contains "red")
  IO.println m9.size
  let m10 := Std.ExtDHashMap.Const.alter m9 "black" (fun _ => some 1)
  IO.println (Std.ExtDHashMap.Const.getD m10 "black" 0)
  IO.println m10.size
  let other0 : Std.ExtDHashMap String (fun _ => Nat) := Std.ExtDHashMap.emptyWithCapacity
  let other := other0.insert "green" 8 |>.insert "white" 2
  let m11 := m10.union other
  IO.println m11.size
  IO.println (Std.ExtDHashMap.Const.getD m11 "green" 0)
  IO.println (m11.inter m4).size
  IO.println (m11.diff m4).size
