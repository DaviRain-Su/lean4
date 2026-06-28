module
prelude
import Init.Data.Range.Polymorphic
import Init.Data.Iterators.Combinators
import Init.System.IO
import Std.Data.Iterators

/-! End-to-end stdlib-linked EmitZig test for polymorphic ranges and range iterators. -/

open Std

def main : IO Unit := do
  let closed : Rcc Nat := 2...=5
  IO.println closed.size
  IO.println closed.toList.length
  IO.println closed.toArray[3]!

  let halfOpen : Rco Nat := 2...<5
  IO.println halfOpen.size
  IO.println (halfOpen.toArray.foldl (fun acc n => acc + n) 0)

  let leftOpenClosed : Roc Nat := 2<...=5
  IO.println leftOpenClosed.size
  IO.println (leftOpenClosed.toList.foldl (fun acc n => acc + n) 0)

  let leftOpen : Roo Nat := 2<...<6
  IO.println leftOpen.size
  IO.println leftOpen.toArray[0]!
  IO.println leftOpen.toArray[2]!

  let mut forTotal := 0
  for n in (3...<8 : Rco Nat) do
    forTotal := forTotal + n
  IO.println forTotal

  let iterDoubled := (1...=4 : Rcc Nat).iter.map (fun n => n * 2) |>.toArray
  IO.println iterDoubled.size
  IO.println iterDoubled[3]!

  let iterFiltered := (0...<8 : Rco Nat).iter.filter (fun n => n % 3 == 1) |>.toList
  IO.println iterFiltered.length
  IO.println (iterFiltered.foldl (fun acc n => acc + n) 0)

  let ints : Rcc Int := (-2)...=2
  IO.println ints.size
  IO.println (ints.toArray.foldl (fun acc n => acc + n) 0)

  let chars : Rcc Char := 'a'...='d'
  IO.println chars.size
  IO.println chars.toArray[0]!
  IO.println chars.toArray[3]!

  let bytes : Rci UInt8 := (250 : UInt8)...*
  IO.println bytes.size
  IO.println bytes.toArray[0]!
  IO.println bytes.toArray[5]!

  let emptyClosed : Rcc Nat := 5...=2
  IO.println emptyClosed.isEmpty
  IO.println emptyClosed.size

  let emptyOpen : Roo Nat := 4<...<5
  IO.println emptyOpen.isEmpty
  IO.println emptyOpen.size

  let openTail : Roi UInt8 := (250 : UInt8)<...*
  IO.println openTail.size
  IO.println openTail.toArray[0]!
  IO.println openTail.toArray[4]!

  let upperClosed : Ric UInt8 := *...=(3 : UInt8)
  IO.println upperClosed.size
  IO.println upperClosed.toArray[0]!
  IO.println upperClosed.toArray[3]!

  let upperOpen : Rio UInt8 := *...<(3 : UInt8)
  IO.println upperOpen.size
  IO.println (upperOpen.toList.foldl (fun acc n => acc + n.toNat) 0)

  let fullBytes : Rii UInt8 := *...*
  IO.println fullBytes.size
  IO.println fullBytes.toArray[0]!
  IO.println fullBytes.toArray[255]!
