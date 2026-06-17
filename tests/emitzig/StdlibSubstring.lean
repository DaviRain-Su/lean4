module
prelude
import Init.Data.String.Substring
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for legacy `Substring` trimming, prefix, and splitting operations. -/

def showSubstringOption : Option Substring.Raw → String
  | some s => s.toString
  | none => "none"

def showNatOption : Option Nat → String
  | some n => toString n
  | none => "none"

def main : IO Unit := do
  let ss := "  alpha beta  ".toRawSubstring.trim
  IO.println ss.toString
  IO.println (ss.takeWhile Char.isAlpha).toString
  IO.println (ss.dropWhile Char.isAlpha).toString
  IO.println ((ss.splitOn " ").length)
  IO.println (ss.take 5).toString
  IO.println (ss.drop 6).toString
  IO.println (ss.takeRight 4).toString
  IO.println (ss.dropRight 5).toString
  IO.println (ss.contains 'β')
  IO.println (("héllo".toRawSubstring.drop 1).toString)
  IO.println (ss.foldl (fun n _ => n + 1) 0)
  let numeric := "1_024".toRawSubstring
  IO.println numeric.stopPos.byteIdx
  IO.println numeric.toSlice?.isSome
  IO.println (showNatOption numeric.toNat?)
  let invalidNumeric := "_1024".toRawSubstring
  IO.println invalidNumeric.toSlice?.isSome
  IO.println (showNatOption invalidNumeric.toNat?)
  IO.println (showSubstringOption (ss.dropPrefix? "alpha ".toRawSubstring))
  IO.println (showSubstringOption (ss.dropSuffix? " beta".toRawSubstring))
