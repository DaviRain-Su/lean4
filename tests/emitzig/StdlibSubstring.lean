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
  IO.println ss.front
  IO.println (ss.get ⟨6⟩)
  let afterFirst := ss.next 0
  IO.println afterFirst.byteIdx
  IO.println (ss.prev afterFirst).byteIdx
  IO.println (ss.nextn 3 0).byteIdx
  IO.println (ss.prevn 2 ⟨ss.bsize⟩).byteIdx
  IO.println (ss.extract 0 (ss.nextn 5 0)).toString
  IO.println (ss.extract (ss.nextn 5 0) (ss.nextn 5 0)).isEmpty
  IO.println (ss.splitOn "").length
  let csv := "a,,β,c".toRawSubstring
  IO.println (csv.splitOn ",").length
  match csv.splitOn "," with
  | _ :: second :: third :: _ =>
    IO.println second.toString.isEmpty
    IO.println third.toString
  | _ => IO.println "missing"
  IO.println (ss.foldr (fun c acc => acc.push c) "")
  IO.println (ss.any (fun c => c == 'b'))
  IO.println (ss.all (fun c => c != '!'))
  IO.println (ss.takeRightWhile Char.isAlpha).toString
  IO.println ("[" ++ (ss.dropRightWhile Char.isAlpha).toString ++ "]")
  IO.println ("[" ++ ("  x  ".toRawSubstring.trimLeft).toString ++ "]")
  IO.println ("[" ++ ("  x  ".toRawSubstring.trimRight).toString ++ "]")
  IO.println (("     ".toRawSubstring.trim).isEmpty)
  IO.println (showSubstringOption (ss.dropPrefix? "gamma".toRawSubstring))
  IO.println (showSubstringOption (ss.dropSuffix? "alpha".toRawSubstring))
