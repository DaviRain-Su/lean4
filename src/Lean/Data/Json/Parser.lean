/-
Copyright (c) 2019 Gabriel Ebner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Gabriel Ebner, Marc Huisinga
-/
module

prelude
public import Lean.Data.Json.Basic
public import Std.Internal.Parsec
import Init.Data.String.FindPos
import Init.Data.UInt.Lemmas
import Init.Omega

public section

open Std.Internal.Parsec
open Std.Internal.Parsec.String

namespace Lean.Json.Parser

set_option maxRecDepth 1024 in
/--
For each UTF-8 byte, whether byte-level scanning of a JSON string literal must stop
there: control characters (`0x00`-`0x1F`) are invalid inside JSON strings, `"` (`0x22`)
terminates the string, and `\` (`0x5C`) introduces an escape sequence. Every flagged
byte is ASCII (`< 0x80`) and therefore never appears inside a multi-byte UTF-8 sequence,
so a stop always lands at a valid UTF-8 character boundary. UTF-8 continuation and
leading bytes (`0x80`-`0xFF`) are deliberately marked `0`; marking them would cause the
scan to stop mid-character, and the subsequent `peek!` would read a non-special char
and produce a spurious failure.
-/
private def strCharTable : { xs : ByteArray // xs.size = 256 } :=
  ⟨ByteArray.mk #[
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  ], by rfl⟩

set_option maxRecDepth 10240 in
/--
Scans `s` starting at byte offset `i`, returning the byte offset of the first byte whose
entry in `strCharTable` is non-zero. If no such byte is found, `s.utf8ByteSize` is
returned. Because all flagged bytes are ASCII (< `0x80`), the returned offset is always
at a valid UTF-8 character boundary.
-/
private def scanStr (s : String) (i : Nat) (hi : i ≤ s.utf8ByteSize) :
    { j : Nat // j ≤ s.utf8ByteSize } :=
  if h : i < s.utf8ByteSize then
    let byte := s.getUTF8Byte ⟨i⟩ h
    have h1 : byte.toNat < 256 := UInt8.toNat_lt_size byte
    have h2 : strCharTable.val.size = 256 := strCharTable.property
    if strCharTable.val.get byte.toNat (Nat.lt_of_lt_of_eq h1 h2.symm) == 0 then
      scanStr s (i + 1) h
    else
      ⟨i, Nat.le_of_lt h⟩
  else
    ⟨i, hi⟩
termination_by s.utf8ByteSize - i

def hexChar : Parser UInt16 := do
  let c ← any
  if '0' <= c && c <= '9' then
    pure $ (c.val - '0'.val).toUInt16
  else if 'a' <= c && c <= 'f' then
    pure $ (c.val - 'a'.val + 10).toUInt16
  else if 'A' <= c && c <= 'F' then
    pure $ (c.val - 'A'.val + 10).toUInt16
  else
    fail "invalid hex character"

def finishSurrogatePair (low : UInt16) : Parser Char := do
  let c ← any
  if c != '\\' then fail ""
  let c ← any
  if c != 'u' then fail ""
  let c ← any
  if c != 'd' && c != 'D' then fail ""
  let u2 ← hexChar; let u3 ← hexChar; let u4 ← hexChar
  let val := (u2 <<< 8) ||| (u3 <<< 4) ||| u4
  if val < 0xC00 then fail "" -- low or not a surrogate
  let charVal := (((low.toUInt32 &&& 0x3FF) <<< 10) ||| (val.toUInt32 &&& 0x3FF)) + 0x10000
  if h : charVal.isValidChar then
    return ⟨charVal, h⟩
  else
    fail "" -- should be unreachable

def escapedChar : Parser Char := do
  let c ← any
  match c with
  | '\\' => return '\\'
  | '"'  => return '"'
  | '/'  => return '/'
  | 'b'  => return '\x08'
  | 'f'  => return '\x0c'
  | 'n'  => return '\n'
  | 'r'  => return '\x0d'
  | 't'  => return '\t'
  | 'u'  =>
    let u1 ← hexChar; let u2 ← hexChar; let u3 ← hexChar; let u4 ← hexChar
    let val := (u1 <<< 12) ||| (u2 <<< 8) ||| (u3 <<< 4) ||| u4
    if h : val < 0xD800 then
      return ⟨val.toUInt32, Or.inl h⟩
    else if h' : val < 0xE000 then
      -- low or high surrogate
      if val < 0xDC00 then
        -- low surrogate
        attempt (finishSurrogatePair val) <|> pure '\ufffd'
      else
        -- high/lone surrogate
        return '\ufffd' -- replacement character
    else
      return ⟨val.toUInt32, Or.inr ⟨Nat.not_lt.mp h', Nat.lt_trans val.toFin.isLt (by decide)⟩⟩
  | _ => fail "illegal \\u escape"

/--
Fast-path scan that consumes every byte up to (but not including) the next byte flagged
in `strCharTable`, appending the consumed bytes to `acc` in bulk. This always succeeds;
the next character observed by the caller is guaranteed to be `"`, `\`, a control
character, or the end of input.
-/
@[inline]
private def scanStrFast (acc : String) : Parser String := fun it =>
  let s := it.1
  let startPos := it.2
  let ⟨stopOffset, hStop⟩ := scanStr s startPos.offset.byteIdx startPos.isValid.le_utf8ByteSize
  have hStop' : (⟨stopOffset⟩ : String.Pos.Raw) ≤ s.rawEndPos := by
    simpa [String.Pos.Raw.le_iff, String.byteIdx_rawEndPos] using hStop
  let stopPos := s.posGE ⟨stopOffset⟩ hStop'
  let acc := acc ++ s.extract startPos stopPos
  .success ⟨s, stopPos⟩ acc

partial def strCore (acc : String) : Parser String := do
  -- If we don't have any characters that need to be escaped we can append the whole
  -- remaining plain region to `acc` in one shot.
  let acc ← scanStrFast acc
  let c ← peek!
  if c == '"' then
    skip
    return acc
  else
    let c ← any
    if c == '\\' then
      strCore (acc.push (← escapedChar))
    else
      fail "unexpected character in string"

@[inline] def str : Parser String := strCore ""

partial def natCore (acc : Nat) : Parser Nat := do
  if ← isEof then
    return acc
  else
    let c ← peek!
    if '0' <= c && c <= '9' then
      skip
      let acc' := 10*acc + (c.val - '0'.val).toNat
      natCore acc'
    else
      return acc

partial def natCoreNumDigits (acc digits : Nat) : Parser (Nat × Nat) := do
  if ← isEof then
    return (acc, digits)
  else
    let c ← peek!
    if '0' <= c && c <= '9' then
      skip
      let acc' := 10*acc + (c.val - '0'.val).toNat
      natCoreNumDigits acc' (digits+1)
    else
      return (acc, digits)

@[inline]
def lookahead (p : Char → Prop) (desc : String) [DecidablePred p] : Parser Unit := do
  let c ← peek!
  if p c then
    return ()
  else
    fail <| "expected " ++ desc

@[inline]
def natNonZero : Parser Nat := do
  lookahead (fun c => '1' <= c && c <= '9') "1-9"
  natCore 0

@[inline]
def natNumDigits : Parser (Nat × Nat) := do
  lookahead (fun c => '0' <= c && c <= '9') "digit"
  natCoreNumDigits 0 0

@[inline]
def natMaybeZero : Parser Nat := do
  lookahead (fun c => '0' <= c && c <= '9') "0-9"
  natCore 0

@[inline]
def numSign : Parser Int := do
  let c ← peek!
  if c == '-' then
    skip
    return (-1 : Int)
  else
    return 1

@[inline]
def nat : Parser Nat := do
  let c ← peek!
  if c == '0' then
    skip
    return 0
  else
    natNonZero

@[inline]
def numWithDecimals : Parser JsonNumber := do
  let sign ← numSign
  let whole ← nat
  if ← isEof then
    pure <| JsonNumber.fromInt (sign * whole)
  else
    let c ← peek!
    if c == '.' then
      skip
      let (n, d) ← natNumDigits
      if d > USize.size then fail "too many decimals"
      let mantissa' := sign * (whole * (10^d : Nat) + n)
      let exponent' := d
      pure <| JsonNumber.mk mantissa' exponent'
    else
      pure <| JsonNumber.fromInt (sign * whole)

@[inline]
def exponent (value : JsonNumber) : Parser JsonNumber := do
  if ← isEof then
    return value
  else
    let c ← peek!
    if c == 'e' || c == 'E' then
      skip
      let c ← peek!
      if c == '-' then
        skip
        let n ← natMaybeZero
        return value.shiftr n
      else
        if c = '+' then skip
        let n ← natMaybeZero
        if n > USize.size then fail "exp too large"
        return value.shiftl n
    else
      return value

def num : Parser JsonNumber := do
  let res : JsonNumber ← numWithDecimals
  exponent res

mutual

  partial def arrayCore (acc : Array Json) : Parser (Array Json) := do
    let hd ← anyCore
    let acc' := acc.push hd
    let c ← any
    if c == ']' then
      ws
      return acc'
    else if c == ',' then
      ws
      arrayCore acc'
    else
      fail "unexpected character in array"

  partial def objectCore (kvs : Std.TreeMap.Raw String Json) :
      Parser (Std.TreeMap.Raw String Json) := do
    lookahead (fun c => c == '"') "\""; skip;
    let k ← str; ws
    lookahead (fun c => c == ':') ":"; skip; ws
    let v ← anyCore
    let c ← any
    if c == '}' then
      ws
      return kvs.insert k v
    else if c == ',' then
      ws
      objectCore (kvs.insert k v)
    else
      fail "unexpected character in object"

  partial def anyCore : Parser Json := do
    let c ← peek!
    if c == '[' then
      skip; ws
      let c ← peek!
      if c == ']' then
        skip; ws
        return Json.arr (Array.mkEmpty 0)
      else
        let a ← arrayCore (Array.mkEmpty 4)
        return Json.arr a
    else if c == '{' then
      skip; ws
      let c ← peek!
      if c == '}' then
        skip; ws
        return Json.obj ∅
      else
        let kvs ← objectCore ∅
        return Json.obj kvs
    else if c == '\"' then
      skip
      let s ← str
      ws
      return Json.str s
    else if c == 'f' then
      skipString "false"; ws
      return Json.bool false
    else if c == 't' then
      skipString "true"; ws
      return Json.bool true
    else if c == 'n' then
      skipString "null"; ws
      return Json.null
    else if c == '-' || ('0' <= c && c <= '9') then
      let n ← num
      ws
      return Json.num n
    else
      fail "unexpected input"

end

def any : Parser Json := do
  ws
  let res ← anyCore
  eof
  return res

end Json.Parser

namespace Json

def parse (s : String) : Except String Lean.Json :=
  Parser.run Json.Parser.any s

end Json

end Lean
