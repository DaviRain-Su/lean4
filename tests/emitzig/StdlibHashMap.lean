module
prelude
import Std.Data.HashMap
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.HashMap` insertion, lookup, erasure, and folding. -/

def main : IO Unit := do
  let m0 : Std.HashMap String Nat := Std.HashMap.emptyWithCapacity
  IO.println m0.isEmpty
  let m1 := m0.insert "red" 3 |>.insert "green" 5 |>.insert "blue" 4
  IO.println m1.isEmpty
  IO.println m1.size
  IO.println (m1.getD "green" 0)
  let (wasPresent, m2) := m1.containsThenInsertIfNew "red" 9
  IO.println wasPresent
  IO.println (m2.getD "red" 0)
  let (previous, m3) := m2.getThenInsertIfNew? "yellow" 6
  IO.println previous.isSome
  IO.println ((m3.erase "blue").contains "blue")
  IO.println (m3.fold (fun acc _ v => acc + v) 0)
  let m4 := m3.modify "green" (fun n => n + 10)
  IO.println (m4.getD "green" 0)
  let m5 := m4.alter "purple" (fun
    | none => some 2
    | some n => some (n + 1))
  IO.println (m5.getD "purple" 0)
  let m6 := m5.alter "red" (fun _ => none)
  IO.println (m6.contains "red")
  let m7 := m6.insertMany #[("orange", 6), ("cyan", 4), ("cyan", 7)]
  IO.println m7.size
  IO.println (m7.getD "cyan" 0)
  let m8 := m7.filter (fun _ v => v % 2 == 0)
  IO.println m8.size
  IO.println (m8.fold (fun acc _ v => acc + v) 0)
  let m9 := Std.HashMap.map (fun _ v => v * 2) m8
  IO.println (m9.fold (fun acc _ v => acc + v) 0)
  let m10 := Std.HashMap.filterMap (fun _ v => if v > 8 then some (v - 1) else none) m9
  IO.println m10.size
  IO.println (m10.fold (fun acc _ v => acc + v) 0)
  let extra : Std.HashMap String Nat := Std.HashMap.ofList [("green", 1), ("black", 9)]
  let m11 := m10.union extra
  IO.println m11.size
  IO.println (m11.getD "green" 0)
  IO.println (m11.inter m10).size
