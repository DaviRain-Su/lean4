module
prelude
import Init.Data.String.Search
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.find?` and `String.revFind?`. -/

def printFound (s : String) (pos? : Option s.Pos) : IO Unit := do
  match pos? with
  | some pos => IO.println (String.Pos.Raw.get! s pos.offset)
  | none => IO.println "none"

def printOffset {s : String} (pos? : Option s.Pos) : IO Unit := do
  match pos? with
  | some pos => IO.println pos.offset.byteIdx
  | none => IO.println "none"

def main : IO Unit := do
  let s := "alpha/beta.txt"
  printFound s (s.find? '/')
  printFound s (s.revFind? '.')
  printFound s (s.find? "beta")
  printFound s (s.find? "missing")
  printOffset (s.find? "alpha")
  printOffset (s.find? "")
  printOffset (s.find? (fun c => c == 't'))
  IO.println (s.contains "beta")
  IO.println (s.contains "omega")
  match s.find? '/' with
  | some slash =>
    printFound s (slash.find? '.')
    printFound s (slash.revFind? 'a')
    printOffset (slash.find? 't')
    printOffset (slash.revFind? 'l')
  | none =>
    IO.println "missing-slash"
    IO.println "missing-slash"
    IO.println "missing-slash"
    IO.println "missing-slash"
  printFound s (s.startPos.revFind? 'a')
  IO.println (s.find 'z' == s.endPos)
  let u := "hé/hé.txt"
  printFound u (u.find? 'é')
  printOffset (u.find? 'é')
  printFound u (u.revFind? 'é')
  printOffset (u.revFind? 'é')
