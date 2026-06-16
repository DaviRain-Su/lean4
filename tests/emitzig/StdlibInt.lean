module
prelude
import Init.Data.Int.Basic
import Init.Data.Int.ToString
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for Int negation, multiplication, addition, and comparison. -/

def main : IO Unit := do
  let x : Int := -7
  let y : Int := 3
  let z := (x + y) * (-2)
  IO.println z
  let w := x * y + 1
  IO.println w
  if w < x then
    IO.println "lt"
  else
    IO.println "ge"
