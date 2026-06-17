module
prelude
import Init.Data.String.Slice
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.Slice` front/back, prefix, and slicing operations. -/

def printSlice? (s : Option String.Slice) : IO Unit := do
  match s with
  | some s => IO.println (s.toString ++ "|")
  | none => IO.println "none"

def printChar? (c : Option Char) : IO Unit := do
  match c with
  | some c => IO.println c
  | none => IO.println "none"

def main : IO Unit := do
  let s := "héllo world".toSlice
  IO.println s.front
  IO.println s.back
  IO.println (s.startsWith "hé")
  IO.println (s.startsWith 'h')
  IO.println (s.startsWith "world")
  IO.println ((s.drop 1).take 4).toString
  IO.println (s.take 99).toString
  IO.println (s.drop 99).toString.isEmpty
  IO.println (s.takeWhile (fun c => c != ' ')).toString
  IO.println (s.dropWhile (fun c => c != ' ')).toString
  printSlice? (s.dropPrefix? "hé")
  printSlice? (s.dropPrefix? "zz")
  IO.println (s.dropPrefix "hé").toString
  IO.println (s.dropPrefix "zz").toString
  printSlice? (s.dropSuffix? "world")
  printSlice? (s.dropSuffix? "moon")
  IO.println ((s.dropSuffix "world").toString ++ "|")
  IO.println (s.dropSuffix "moon").toString
  IO.println ((s.dropEnd 6).toString ++ "|")
  IO.println (s.dropEnd 99).toString.isEmpty
  IO.println (s.takeEnd 5).toString
  IO.println (s.takeEnd 99).toString
  printChar? (s.drop 99).front?
  printChar? (s.drop 99).back?
