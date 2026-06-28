module
prelude
import Init.Data.String.Search
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `String.replace`. -/

def main : IO Unit := do
  IO.println ("red green blue".replace 'e' "")
  IO.println ("red green blue".replace (fun c => c == 'u' || c == 'e') "")
  IO.println ("red green blue".replace "e" "")
  IO.println ("red green blue".replace "ee" "E")
  IO.println ("red green blue".replace "e" "E")
  IO.println ("aaaaa".replace "aa" "b")
  IO.println ("abc".replace "" "k")
  IO.println ("abababa".replace "aba" "X")
  IO.println ("abc".replace "z" "Z")
  IO.println ("hé hé".replace 'é' "e")
  IO.println ("hé hé".replace "hé".toSlice "LE")
  let replacement := "XYZ".toSlice.take 2
  IO.println ("banana".replace "na" replacement)
  let slice := "red green blue".toSlice.drop 4
  IO.println (slice.replace "e" "E")
  IO.println ("".replace "" "x")
