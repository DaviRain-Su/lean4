module
prelude
import Init.Data.String.Search
import Init.Data.String.Slice
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.contains` and slice-based split iterators. -/

def main : IO Unit := do
  let s := "red green blue"
  IO.println (s.contains "green")
  let parts := s.split ' ' |>.toList
  IO.println parts.length
  match parts with
  | _ :: mid :: _ => IO.println mid.toString
  | _ => IO.println "missing"
  let rev := "a,b,c".toSlice.revSplit ',' |>.toList
  match rev with
  | first :: _ => IO.println first.toString
  | _ => IO.println "missing"
  let inc := "a,b,c".toSlice.splitInclusive ',' |>.toList
  match inc with
  | first :: _ => IO.println first.toString
  | _ => IO.println "missing"
