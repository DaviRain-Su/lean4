module
prelude
import Init.System.IO
import Std.Http.Internal.ChunkedBuffer
import Std.Http.Internal.Encode
import Std.Http.Internal.IndexMultiMap
import Std.Http.Internal.LowerCase
import Std.Http.Internal.String

/-! End-to-end stdlib-linked EmitZig test for HTTP internal helpers. -/

open Std

def showNat? : Option Nat → String
  | some n => toString n
  | none => "missing"

def showNatArray? : Option (Array Nat) → String
  | some xs => String.intercalate "," (xs.map toString).toList
  | none => "missing"

def isLower (s : String) : Bool :=
  if _ : Http.Internal.IsLowerCase s then true else false

def encoded [Http.Internal.Encode .v11 α] (x : α) : String :=
  let bytes := (Http.Internal.Encode.encode (v := .v11) Http.Internal.ChunkedBuffer.empty x).toByteArray
  (String.fromUTF8? bytes).getD "<invalid-utf8>"

def main : IO Unit := do
  let buf :=
    Http.Internal.ChunkedBuffer.empty
      |>.writeString "Lean"
      |>.writeChar '-'
      |>.write "Zig".toUTF8
  IO.println buf.size
  IO.println (String.fromUTF8! buf.toByteArray)

  let joined := Http.Internal.ChunkedBuffer.ofArray #["a".toUTF8, "b".toUTF8, "c".toUTF8]
  IO.println joined.size
  IO.println (String.fromUTF8! joined.toByteArray)

  let map :=
    (Internal.IndexMultiMap.empty : Internal.IndexMultiMap String Nat)
      |>.insert "accept" 1
      |>.insert "accept" 2
      |>.insert "host" 3
      |>.replaceLast "accept" 4
      |>.update "host" (· + 10)
  IO.println map.size
  IO.println (showNatArray? (map.getAll? "accept"))
  IO.println (showNat? (map.get? "host"))
  IO.println (showNat? (map.getLast? "accept"))
  IO.println (map.hasEntry "accept" 4)

  let erased := map.erase "accept"
  IO.println erased.size
  IO.println (erased.contains "accept")

  IO.println (isLower "content-type")
  IO.println (isLower "Content-Type")

  IO.println ((Http.Internal.quoteHttpString? "token").getD "none")
  IO.println ((Http.Internal.quoteHttpString? "lean zig").getD "none")
  IO.println ((Http.Internal.quoteHttpString? "a\"b").getD "none")
  IO.println ((Http.Internal.unquoteHttpString? "\"a\\\"b\"").getD "none")
  IO.println (Http.Internal.isToken "x-token_1")
  IO.println (Http.Internal.isToken "needs space")

  IO.println (encoded Http.Version.v11)
