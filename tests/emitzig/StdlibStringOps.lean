module
prelude
import Init.Data.String.Basic
import Init.Data.String.Bootstrap
import Init.Data.String.Length
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for String push, append, length, and ordering. -/

def main : IO Unit := do
  let mut s := "h"
  s := s.push 'é'
  s := s ++ "llo"
  IO.println s
  IO.println s.length
  if "hé" < s then
    IO.println "less"
  else
    IO.println "not less"
