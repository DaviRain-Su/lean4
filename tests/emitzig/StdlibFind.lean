module
prelude
import Init.Data.String.Search
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.find?` and `String.revFind?`. -/

def main : IO Unit := do
  let s := "alpha/beta.txt"
  IO.println (match s.find? '/' with | some p => String.Pos.Raw.get! s p.offset | none => '!')
  IO.println (match s.revFind? '.' with | some p => String.Pos.Raw.get! s p.offset | none => '!')
