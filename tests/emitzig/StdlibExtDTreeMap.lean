module
prelude
import Std.Data.ExtDTreeMap
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.ExtDTreeMap` dependent ordered map operations. -/

def main : IO Unit := do
  let m0 : Std.ExtDTreeMap Nat (fun _ => Nat) := Std.ExtDTreeMap.empty
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
  let m4 := Std.ExtDTreeMap.Const.insertMany m3 #[(5, 50), (2, 22)]
  IO.println m4.size
  IO.println (m4.getD 2 0)
  IO.println (m4.minKeyD 0)
  IO.println (m4.maxKeyD 0)
  IO.println (m4.keyAtIdxD 2 0)
  IO.println (m4.foldl (fun acc k v => acc + k + v) 0)
  let m5 := m4.filter (fun k v => k % 2 == 0 || v > 25)
  IO.println m5.size
  let m6 := m5.map (fun k v => k + v)
  IO.println (m6.getD 3 0)
  let m7 := m6.filterMap (fun k v => if k > 2 then some (v + 1) else none)
  IO.println m7.size
  IO.println (m7.getD 4 0)
  IO.println (m7.getD 2 0)
  let m8 := m7.modify 3 (fun v => v * 2)
  IO.println (m8.getD 3 0)
  let m9 := m8.alter 4 (fun _ => none)
  IO.println (m9.contains 4)
  IO.println m9.size
  let m10 := m9.alter 6 (fun _ => some 60)
  IO.println (m10.getD 6 0)
  IO.println m10.size
  let other0 : Std.ExtDTreeMap Nat (fun _ => Nat) := Std.ExtDTreeMap.empty
  let other := other0.insert 3 300 |>.insert 7 70
  let m11 := m10.union other
  IO.println m11.size
  IO.println (m11.getD 3 0)
  IO.println (m11.inter m4).size
  IO.println (m11.diff m4).size
