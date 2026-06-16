module
prelude
import Init.System.IO
import Std.Internal.Parsec

/-! End-to-end stdlib-linked EmitZig test for string and byte-array parser combinators. -/

open Std.Internal.Parsec

def stringParser : Std.Internal.Parsec.String.Parser (String × Nat × String) := do
  let label ← many1Chars Std.Internal.Parsec.String.asciiLetter
  Std.Internal.Parsec.String.skipChar ':'
  Std.Internal.Parsec.String.ws
  let count ← Std.Internal.Parsec.String.digits
  let suffix ← Std.Internal.Parsec.String.take 2
  eof
  return (label, count, suffix)

def sumBytes (slice : ByteSlice) : Nat :=
  slice.foldr (fun byte acc => byte.toNat + acc) 0

def sliceString (slice : ByteSlice) : String :=
  String.fromUTF8! slice.toByteArray

def isAsciiLetterByte (byte : UInt8) : Bool :=
  ('A'.toUInt8 ≤ byte && byte ≤ 'Z'.toUInt8) || ('a'.toUInt8 ≤ byte && byte ≤ 'z'.toUInt8)

def byteParser : Std.Internal.Parsec.ByteArray.Parser (Nat × Nat × Nat) := do
  Std.Internal.Parsec.ByteArray.skipString "id="
  let ident ← Std.Internal.Parsec.ByteArray.digits
  Std.Internal.Parsec.ByteArray.skipByteChar ';'
  let name ← Std.Internal.Parsec.ByteArray.takeUntil (· == '|'.toUInt8)
  Std.Internal.Parsec.ByteArray.skipByteChar '|'
  let suffix ← Std.Internal.Parsec.ByteArray.take 2
  eof
  return (ident, name.size, sumBytes suffix)

def boundedByteParser : Std.Internal.Parsec.ByteArray.Parser (String × String × Char × Char × String) := do
  Std.Internal.Parsec.ByteArray.ws
  let tag ← Std.Internal.Parsec.ByteArray.takeWhileUpTo1 isAsciiLetterByte 4
  Std.Internal.Parsec.ByteArray.skipByteChar ':'
  let payload ← Std.Internal.Parsec.ByteArray.takeUntilUpTo (· == ';'.toUInt8) 5
  Std.Internal.Parsec.ByteArray.skipByteChar ';'
  let hex ← Std.Internal.Parsec.ByteArray.hexDigit
  let oct ← Std.Internal.Parsec.ByteArray.octDigit
  let tail ← Std.Internal.Parsec.ByteArray.takeWhileAtMost (· != '!'.toUInt8) 3
  Std.Internal.Parsec.ByteArray.skipByteChar '!'
  eof
  return (sliceString tag, sliceString payload, hex, oct, sliceString tail)

def printStringParse (input : String) : IO Unit :=
  match stringParser.run input with
  | .ok (label, count, suffix) => IO.println s!"string:{label}:{count}:{suffix}"
  | .error err => IO.println s!"string-error:{err}"

def printByteParse (input : String) : IO Unit :=
  match byteParser.run input.toUTF8 with
  | .ok (ident, nameSize, suffixSum) => IO.println s!"bytes:{ident}:{nameSize}:{suffixSum}"
  | .error err => IO.println s!"bytes-error:{err}"

def printBoundedByteParse (input : String) : IO Unit :=
  match boundedByteParser.run input.toUTF8 with
  | .ok (tag, payload, hex, oct, tail) => IO.println s!"bounded:{tag}:{payload}:{hex}:{oct}:{tail}"
  | .error err => IO.println s!"bounded-error:{err}"

def main : IO Unit := do
  printStringParse "lean: 123xy"
  printStringParse "lean: xy"
  printByteParse "id=42;lean|AZ"
  printByteParse "id=7;done"
  printBoundedByteParse " \tLean:abcde;F7xyz!"
  printBoundedByteParse "   :abc;F7!"
