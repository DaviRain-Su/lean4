module
prelude
import Init.Data.String.Basic
import Init.Data.String.Iterate
import Init.Data.String.Length
import Init.Data.String.Modify
import Init.Data.String.TakeDrop
import Init.System.IO

/-! End-to-end smoke test that imports a real stdlib module. -/

def showSliceOption : Option String.Slice → String
  | some s => s.toString
  | none => "none"

def main : IO Unit := do
  let s := "abc"
  IO.println s.length
  let t := "def"
  if s < t then
    IO.println "less"
  else
    IO.println "not less"
  let u := "  Lean Zig  "
  IO.println u.trimAscii.toString
  IO.println ("Lean".isPrefixOf "Lean Zig")
  IO.println ("Zig".isPrefixOf "Lean Zig")
  IO.println ("Lean Zig".endsWith "Zig")
  IO.println ("Lean Zig".take 4).toString
  IO.println ("héllo".drop 1).toString
  IO.println "lean".toUpper
  IO.println "ZIG".toLower
  IO.println "zig".capitalize
  IO.println ("hé".foldl (fun n _ => n + 1) 0)
  IO.println (showSliceOption ("Lean Zig".dropPrefix? "Lean "))
  IO.println (showSliceOption ("Lean Zig".dropSuffix? " Zig"))
