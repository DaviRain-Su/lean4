module
prelude
import Init.Data.UInt.Log2
import Init.Data.SInt.Float
import Init.Data.SInt.Float32
import Init.Data.OfScientific
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for numeric runtime externs used by stdlib modules. -/

def main : IO Unit := do
  IO.println (UInt8.log2 0).toNat
  IO.println (UInt8.log2 255).toNat
  IO.println (UInt16.log2 65535).toNat
  IO.println (UInt32.log2 2147483648).toNat
  IO.println (UInt64.log2 9223372036854775808).toNat
  IO.println (USize.log2 1024).toNat
  IO.println ((12.75 : Float).toInt8).toInt
  IO.println ((-12.75 : Float).toInt16).toInt
  IO.println ((300.0 : Float).toInt8).toInt
  IO.println ((-300.0 : Float).toInt8).toInt
  IO.println (((0.0 : Float) / 0.0).toInt32).toInt
  IO.println (((1.0 : Float) / 0.0).toInt64).toInt
  IO.println ((12.75 : Float).toISize).toInt
  IO.println ((12.75 : Float32).toInt8).toInt
  IO.println ((-40000.0 : Float32).toInt16).toInt
  IO.println (((0.0 : Float32) / 0.0).toInt64).toInt
  IO.println ((12.75 : Float32).toISize).toInt
