module
prelude
import Init.Data.UInt
import Init.Data.Float
import Init.Data.OfScientific
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for unsigned fixed-width integer APIs. -/

def main : IO Unit := do
  let a : UInt8 := 250
  let b : UInt8 := 10
  IO.println (a + b).toNat
  IO.println (a - b).toNat
  IO.println (b - a).toNat
  IO.println (a * b).toNat
  IO.println (a / b).toNat
  IO.println (a % b).toNat
  IO.println (a / (0 : UInt8)).toNat
  IO.println (a % (0 : UInt8)).toNat
  IO.println (-b).toNat
  IO.println (~~~a).toNat
  IO.println (a &&& (15 : UInt8)).toNat
  IO.println (a ||| (15 : UInt8)).toNat
  IO.println (a ^^^ (15 : UInt8)).toNat
  IO.println (a <<< (2 : UInt8)).toNat
  IO.println (a >>> (3 : UInt8)).toNat
  IO.println (UInt8.ofInt (-1)).toNat
  IO.println (UInt8.ofNat 258).toNat
  IO.println (UInt8.ofNatClamp 300).toNat
  IO.println (if b < a then "lt" else "ge")
  IO.println (if a ≤ a then "le" else "gt")

  IO.println (true.toUInt8).toNat
  IO.println (false.toUInt16).toNat
  IO.println (UInt16.ofNat 65537).toNat
  IO.println (UInt32.ofNat 4294967299).toNat
  IO.println (UInt64.ofNat 18446744073709551620).toNat
  IO.println (UInt16.ofInt (-1)).toNat

  IO.println ((65535 : UInt16).toUInt8).toNat
  IO.println ((255 : UInt8).toUInt16).toNat
  IO.println ((255 : UInt8).toUInt32).toNat
  IO.println ((65535 : UInt16).toUInt32).toNat
  IO.println ((4294967295 : UInt32).toUInt16).toNat
  IO.println ((4294967295 : UInt32).toUInt64).toNat
  IO.println ((18446744073709551615 : UInt64).toUInt32).toNat
  IO.println ((255 : UInt8).toUSize).toNat

  let word : USize := 1024
  IO.println (word + (1 : USize)).toNat
  IO.println (word >>> (5 : USize)).toNat
  IO.println (true.toUSize).toNat

  IO.println (((255 : UInt8).toFloat).toUInt8).toNat
  IO.println (((65535 : UInt16).toFloat32).toUInt16).toNat
  IO.println ((99999.0 : Float).toUInt16).toNat
  IO.println ((-1.0 : Float32).toUInt8).toNat
