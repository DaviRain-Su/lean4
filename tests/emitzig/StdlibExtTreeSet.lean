module
prelude
import Std.Data.ExtTreeSet
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.ExtTreeSet` ordered set operations. -/

def main : IO Unit := do
  let s0 : Std.ExtTreeSet Nat := Std.ExtTreeSet.empty
  let s1 := s0.insert 5 |>.insert 1 |>.insert 3 |>.insert 3 |>.insert 8
  IO.println s1.size
  IO.println (s1.contains 3)
  let (wasPresent, s2) := s1.containsThenInsert 5
  IO.println wasPresent
  IO.println s2.size
  let s3 := s2.insertMany #[2, 6, 6]
  IO.println s3.size
  IO.println (s3.minD 0)
  IO.println (s3.maxD 0)
  IO.println (s3.atIdxD 2 0)
  IO.println (s3.getGED 4 0)
  IO.println (s3.getLTD 4 0)
  let s4 := s3.filter (fun n => n % 2 == 0)
  IO.println s4.size
  IO.println (s4.foldl (fun acc n => acc + n) 0)
  let s5 := s4.eraseMany #[2, 8]
  IO.println (s5.contains 6)
  IO.println (s5.contains 2)
  let s6 := s4.union (Std.ExtTreeSet.ofArray #[1, 6, 10])
  IO.println s6.size
  IO.println (s6.inter s3).size
  IO.println (s6.diff s3).size
