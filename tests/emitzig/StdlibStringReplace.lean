module
prelude
import Init.Data.String.Search
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.replace`. -/

def main : IO Unit := do
  IO.println ("red green blue".replace "ee" "E")
  IO.println ("abc".replace "" "k")
