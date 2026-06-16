module
prelude
import Init.Data.String.Substring
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for legacy `Substring` trimming, prefix, and splitting operations. -/

def main : IO Unit := do
  let ss := "  alpha beta  ".toRawSubstring.trim
  IO.println ss.toString
  IO.println (ss.takeWhile Char.isAlpha).toString
  IO.println (ss.dropWhile Char.isAlpha).toString
  IO.println ((ss.splitOn " ").length)
