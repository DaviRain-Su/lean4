module
prelude
import Init.Data.String.Search
import Init.Data.String.Slice
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.contains` and slice-based split iterators. -/

def printFirst (parts : List String.Slice) : IO Unit := do
  match parts with
  | first :: _ => IO.println first.toString
  | _ => IO.println "missing"

def printSecond (parts : List String.Slice) : IO Unit := do
  match parts with
  | _ :: second :: _ => IO.println second.toString
  | _ => IO.println "missing"

def printThird (parts : List String.Slice) : IO Unit := do
  match parts with
  | _ :: _ :: third :: _ => IO.println third.toString
  | _ => IO.println "missing"

def main : IO Unit := do
  let s := "red green blue"
  IO.println (s.contains "green")
  IO.println (s.contains Char.isWhitespace)
  IO.println (s.any (fun c => c == 'z'))
  let parts := s.split ' ' |>.toList
  IO.println parts.length
  printSecond parts
  let comma := "a,,b,".split ',' |>.toList
  IO.println comma.length
  printFirst comma
  match comma with
  | _ :: second :: _ => IO.println second.toString.isEmpty
  | _ => IO.println "missing"
  printThird comma
  let chunks := "red--green--blue".split "--" |>.toList
  IO.println chunks.length
  printSecond chunks
  let inclusive := "aa::bb::".splitInclusive "::" |>.toList
  IO.println inclusive.length
  printFirst inclusive
  printSecond inclusive
  let rev := "a,b,c".toSlice.revSplit ',' |>.toList
  printFirst rev
  let revWords := "left|middle|right".toSlice.revSplit '|' |>.toList
  IO.println revWords.length
  printFirst revWords
  printSecond revWords
  let inc := "a,b,c".toSlice.splitInclusive ',' |>.toList
  printFirst inc
  let lines := "one\n\ntwo\n".lines.toList
  IO.println lines.length
  printFirst lines
  match lines with
  | _ :: second :: _ => IO.println second.toString.isEmpty
  | _ => IO.println "missing"
  printThird lines
