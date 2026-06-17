module
prelude
import Init.Data.String.Basic
import Init.Data.String.Bootstrap
import Init.Data.String.Length
import Init.Data.String.Search
import Init.Data.Array.GetLit
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for String push, append, length, and ordering. -/

def printChar? (c : Option Char) : IO Unit := do
  match c with
  | some c => IO.println c
  | none => IO.println "none"

def printString? (s : Option String) : IO Unit := do
  match s with
  | some s => IO.println s
  | none => IO.println "none"

def main : IO Unit := do
  let mut s := "h"
  s := s.push 'é'
  s := s ++ "llo"
  IO.println s
  IO.println s.length
  IO.println s.utf8ByteSize
  IO.println s.toUTF8.size
  IO.println "".isEmpty
  IO.println s.isEmpty
  printChar? s.front?
  printChar? s.back?
  if "hé" < s then
    IO.println "less"
  else
    IO.println "not less"
  let u := "L∃∀N"
  IO.println u.length
  IO.println u.utf8ByteSize
  match u.pos? ⟨1⟩ with
  | some p => printChar? p.get?
  | none => IO.println "none"
  IO.println (u.pos? ⟨2⟩).isSome
  match u.pos? ⟨4⟩ with
  | some p => printChar? p.get?
  | none => IO.println "none"
  printString? (String.fromUTF8? s.toUTF8)
  printString? (String.fromUTF8? (ByteArray.mk #[255]))
