module
prelude
import Std.Data.DTreeMap
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.DTreeMap` dependent ordered map operations. -/

def main : IO Unit := do
  let m0 : Std.DTreeMap Nat (fun _ => Nat) := Std.DTreeMap.empty
  let m1 := m0.insert 3 30 |>.insert 1 10 |>.insert 4 40 |>.insert 1 11
  IO.println m1.size
  IO.println (Std.DTreeMap.Const.getD m1 1 0)
  IO.println (m1.contains 2)
  let (wasPresent, m2) := m1.containsThenInsertIfNew 3 33
  IO.println wasPresent
  IO.println (Std.DTreeMap.Const.getD m2 3 0)
  let (previous, m3) := Std.DTreeMap.Const.getThenInsertIfNew? m2 2 20
  IO.println previous.isSome
  IO.println (Std.DTreeMap.Const.getD m3 2 0)
  let m4 := Std.DTreeMap.Const.insertMany m3 #[(5, 50), (2, 22)]
  IO.println m4.size
  IO.println (Std.DTreeMap.Const.getD m4 2 0)
  IO.println (m4.minKeyD 0)
  IO.println (m4.maxKeyD 0)
  IO.println (m4.keyAtIdxD 2 0)
  IO.println (m4.foldl (fun acc k v => acc + k + v) 0)
  let m5 := m4.filter (fun k v => k % 2 == 0 || v > 25)
  IO.println m5.size
  let m6 := Std.DTreeMap.Const.modify m5 3 (fun v => v * 2)
  IO.println (Std.DTreeMap.Const.getD m6 3 0)
  let m7 := Std.DTreeMap.Const.alter m6 4 (fun _ => none)
  IO.println (m7.contains 4)
  IO.println m7.size
  let m8 := Std.DTreeMap.Const.alter m7 6 (fun _ => some 60)
  IO.println (Std.DTreeMap.Const.getD m8 6 0)
  IO.println m8.size
  let other0 : Std.DTreeMap Nat (fun _ => Nat) := Std.DTreeMap.empty
  let other := other0.insert 3 300 |>.insert 7 70
  let m9 := m8.union other
  IO.println m9.size
  IO.println (Std.DTreeMap.Const.getD m9 3 0)
  IO.println (m9.inter m4).size
  IO.println (m9.diff m4).size
