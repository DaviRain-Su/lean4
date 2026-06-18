module
prelude
import Init.Data.Float
import Init.Data.OfScientific
import Init.Data.SInt.Float
import Init.Data.SInt.Float32
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for core `Float` and `Float32` runtime APIs. -/

def main : IO Unit := do
  let x : Float := 7.5
  let y : Float := 2.0
  IO.println (x + y).toUInt8.toNat
  IO.println (x - y).toUInt8.toNat
  IO.println (x * y).toUInt8.toNat
  IO.println (x / y).toUInt8.toNat
  IO.println (-x).toInt8.toInt
  IO.println (if x < (8.0 : Float) then true else false)
  IO.println (if x ≤ (7.5 : Float) then true else false)
  IO.println (x == (7.5 : Float))
  IO.println (((0.0 : Float) / 0.0).isNaN)
  IO.println (((1.0 : Float) / 0.0).isInf)
  IO.println (((1.0 : Float) / 0.0).isFinite)
  IO.println (Float.ofBits (0x3ff8000000000000 : UInt64)).toBits.toNat
  let parts := Float.frExp (12.0 : Float)
  IO.println (parts.1 * (16.0 : Float)).toUInt8.toNat
  IO.println parts.2
  IO.println (Float.scaleB (1.5 : Float) (3 : Int)).toUInt8.toNat

  let p : Float32 := 6.5
  let q : Float32 := 2.0
  IO.println (p + q).toUInt8.toNat
  IO.println (p - q).toUInt8.toNat
  IO.println (p * q).toUInt8.toNat
  IO.println (p / q).toUInt8.toNat
  IO.println (-p).toInt8.toInt
  IO.println (if p < (7.0 : Float32) then true else false)
  IO.println (if p ≤ (6.5 : Float32) then true else false)
  IO.println (p == (6.5 : Float32))
  IO.println (((0.0 : Float32) / 0.0).isNaN)
  IO.println (((1.0 : Float32) / 0.0).isInf)
  IO.println (((1.0 : Float32) / 0.0).isFinite)
  IO.println (Float32.ofBits (0x40d00000 : UInt32)).toBits.toNat
  let parts32 := Float32.frExp (12.0 : Float32)
  IO.println (parts32.1 * (16.0 : Float32)).toUInt8.toNat
  IO.println parts32.2
  IO.println (Float32.scaleB (1.25 : Float32) (4 : Int)).toUInt8.toNat
  IO.println p.toFloat.toUInt8.toNat
  IO.println ((9.75 : Float).toFloat32).toUInt8.toNat
