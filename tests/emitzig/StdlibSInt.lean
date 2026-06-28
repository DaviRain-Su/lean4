module
prelude
import Init.Data.SInt
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for signed fixed-width integer APIs. -/

def main : IO Unit := do
  let a : Int8 := 120
  let b : Int8 := 10
  IO.println (a + b).toInt
  IO.println (a - b).toInt
  IO.println (a * b).toInt
  IO.println (-a).toInt
  IO.println (((-10 : Int8) / (3 : Int8)).toInt)
  IO.println (((-10 : Int8) % (3 : Int8)).toInt)
  IO.println (((-10 : Int8) / (0 : Int8)).toInt)
  IO.println (((-10 : Int8) % (0 : Int8)).toInt)
  IO.println ((~~~(-1 : Int8)).toInt)
  IO.println (((-1 : Int8) &&& (15 : Int8)).toInt)
  IO.println (((-128 : Int8) ||| (15 : Int8)).toInt)
  IO.println (((-1 : Int8) ^^^ (15 : Int8)).toInt)
  IO.println (((-8 : Int8) >>> (1 : Int8)).toInt)
  IO.println (((3 : Int8) <<< (2 : Int8)).toInt)
  IO.println (Int8.abs (-5 : Int8)).toInt
  IO.println (Int8.abs Int8.minValue).toInt
  IO.println (if ((-7 : Int8) < (7 : Int8)) then "lt" else "ge")
  IO.println (if ((5 : Int8) ≤ (5 : Int8)) then "le" else "gt")

  IO.println (true.toInt8).toInt
  IO.println (false.toInt8).toInt
  IO.println (Int8.ofInt 128).toInt
  IO.println (Int8.ofNat 255).toInt
  IO.println (Int8.ofInt (-129)).toInt
  IO.println (Int16.ofInt 70000).toInt
  IO.println (Int16.ofNat 32768).toInt
  IO.println (Int32.ofInt 2147483648).toInt
  IO.println (Int64.ofNat 9223372036854775808).toInt

  IO.println ((-129 : Int16).toInt8).toInt
  IO.println ((-5 : Int8).toInt16).toInt
  IO.println ((-5 : Int8).toInt32).toInt
  IO.println ((-5 : Int8).toInt64).toInt
  IO.println ((-5 : Int8).toISize).toInt

  let word : ISize := -5
  IO.println (word + (2 : ISize)).toInt
  IO.println (word <<< (1 : ISize)).toInt
  IO.println (word >>> (1 : ISize)).toInt
  IO.println (true.toISize).toInt

  IO.println (((-12 : Int8).toFloat).toInt8).toInt
  IO.println (((-1234 : Int16).toFloat32).toInt16).toInt
