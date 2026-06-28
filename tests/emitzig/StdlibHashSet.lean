module
prelude
import Std.Data.HashSet
import Init.Data.Array.GetLit
import Init.Data.String.Length
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `Std.HashSet` membership and set operations. -/

def main : IO Unit := do
  let s0 : Std.HashSet String := Std.HashSet.emptyWithCapacity
  let s1 := s0.insert "red" |>.insert "blue" |>.insert "green" |>.insert "green"
  IO.println s1.size
  IO.println (s1.contains "green")
  let (wasPresent, s2) := s1.containsThenInsert "red"
  IO.println wasPresent
  IO.println s2.size
  let s3 := s2.insertMany #["yellow", "cyan", "cyan"]
  IO.println s3.size
  IO.println (s3.getD "cyan" "missing")
  IO.println (s3.contains "black")
  let s4 := s3.filter (fun s => s.length == 4)
  IO.println s4.size
  IO.println (s4.fold (fun acc s => acc + s.length) 0)
  let s5 := s4.erase "blue"
  IO.println (s5.contains "cyan")
  IO.println (s5.contains "blue")
  let s6 := s4.union (Std.HashSet.ofArray #["red", "cyan", "white"])
  IO.println s6.size
  IO.println (s6.inter s3).size
  IO.println (s6.diff s3).size
