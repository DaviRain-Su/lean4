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
  IO.println ((200 : BitVec 8) / (13 : BitVec 8)).toNat
  IO.println ((200 : BitVec 8) % (13 : BitVec 8)).toNat
  IO.println ((200 : BitVec 8) / (0 : BitVec 8)).toNat
  let neg7 := BitVec.ofInt 8 (-7)
  let pos2 : BitVec 8 := 2
  IO.println (neg7.sdiv pos2).toInt
  IO.println (neg7.srem pos2).toInt
  IO.println (neg7.smod pos2).toInt
  IO.println ((10 : BitVec 4) ++ (5 : BitVec 4)).toNat
  IO.println (BitVec.replicate 3 (3 : BitVec 2)).toNat
  IO.println (BitVec.fill 8 true).toNat
  IO.println (BitVec.fill 8 false).toNat
  IO.println a.msb
  match a.getLsb? 2 with
  | some bit => IO.println bit
  | none => IO.println "none"
  match a.getLsb? 8 with
  | some bit => IO.println bit
  | none => IO.println "none"
  match a.getMsb? 7 with
  | some bit => IO.println bit
  | none => IO.println "none"
  IO.println a.reverse.toNat
  IO.println (BitVec.negOverflow (128 : BitVec 8))
  IO.println (BitVec.sdivOverflow (128 : BitVec 8) (255 : BitVec 8))
