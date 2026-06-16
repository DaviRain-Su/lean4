module
prelude
import Init.Data.BitVec
import Init.Data.Int.ToString
import Init.System.IO

/-! End-to-end stdlib-linked EmitZig test for `BitVec` arithmetic, bitwise, and bitblast-backed operations. -/

def main : IO Unit := do
  let a : BitVec 8 := 172
  let low : BitVec 8 := 15
  IO.println a.toNat
  IO.println (a &&& low).toNat
  IO.println (a ||| (3 : BitVec 8)).toNat
  IO.println (a ^^^ (255 : BitVec 8)).toNat
  IO.println (~~~a).toNat
  IO.println (a + (100 : BitVec 8)).toNat
  IO.println (a * (3 : BitVec 8)).toNat
  IO.println (a >>> 2).toNat
  IO.println (a <<< 3).toNat
  IO.println (a.rotateLeft 3).toNat
  IO.println (a.rotateRight 2).toNat
  IO.println (a.extractLsb 5 2).toNat
  IO.println (a.setWidth 12).toNat
  IO.println (a.signExtend 12).toInt
  IO.println (BitVec.ofInt 8 (-1)).toNat
  IO.println (BitVec.adc a low true).snd.toNat
  IO.println low.clz.toNat
  IO.println low.ctz.toNat
  IO.println low.cpop.toNat
