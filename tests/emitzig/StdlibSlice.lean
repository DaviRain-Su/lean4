module
prelude
import Init.Data.String.Slice
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.Slice` front/back, prefix, and slicing operations. -/

def main : IO Unit := do
  let s := "héllo world".toSlice
  IO.println s.front
  IO.println s.back
  IO.println ((s.drop 1).take 4).toString
  IO.println (s.takeWhile (fun c => c != ' ')).toString
  IO.println (s.dropWhile (fun c => c != ' ')).toString
  IO.println (s.dropPrefix "hé").toString
