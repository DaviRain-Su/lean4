module
prelude
import Init.Data.String.Length
import Init.Data.ToString.Name
import Init.System.IO
import Lean.Data.Name
import Std.Data.HashMap
import Std.Data.HashSet

/-! End-to-end stdlib-linked EmitZig test for `Name` equality, printing, and hash containers. -/

open Lean

def main : IO Unit := do
  let root := Name.mkStr2 "Lean" "Compiler"
  let n1 := Name.mkStr root "LCNF"
  let n2 := Name.mkStr (Name.mkStr2 "Lean" "Compiler") "LCNF"
  let n3 := Name.mkNum n1 42
  IO.println (n1 == n2)
  IO.println (n1 == n3)
  IO.println n1.toString
  IO.println n3.toString
  IO.println (toString Name.anonymous)

  let m0 : Std.HashMap Name Nat := Std.HashMap.emptyWithCapacity
  let m1 := m0.insert n1 7 |>.insert n3 11 |>.insert n2 13
  IO.println m1.size
  IO.println (m1.getD n1 0)
  IO.println (m1.getD n3 0)

  let s0 : Std.HashSet Name := Std.HashSet.emptyWithCapacity
  let s1 := s0.insert n1 |>.insert n2 |>.insert n3
  IO.println s1.size
  IO.println (s1.contains n2)
  IO.println (s1.contains (Name.mkStr n1 "child"))
  IO.println (s1.fold (fun acc n => acc + n.toString.length) 0)

  IO.println n3.getPrefix.toString
  IO.println n3.getRoot.toString
  IO.println n3.components.length
  IO.println (String.intercalate "|" (n3.components.map (·.toString)))
  IO.println (root.isPrefixOf n3)
  IO.println ((Name.mkStr Name.anonymous "LCNF").isSuffixOf n3)
  IO.println ((Name.mkNum Name.anonymous 42).isSuffixOf n3)
  IO.println (n3.replacePrefix root (Name.mkStr2 "Std" "Compiler")).toString
  IO.println (Name.appendCore root (Name.mkStr2 "Code" "Gen")).toString
  IO.println (Name.appendAfter n1 "_aux").toString
  IO.println (Name.appendIndexAfter n1 7).toString
  IO.println (Name.appendBefore n1 "pre_").toString
  IO.println (Name.mkSimple "a.b").toString
  IO.println (Name.mkSimple "_private").isInternal
  IO.println (Name.mkSimple "_private").isInternalOrNum
  IO.println (Name.mkNum (Name.mkSimple "x") 1).isInternalOrNum
  IO.println (Name.mkStr2 "__impl" "detail").isImplementationDetail
  IO.println n1.isAtomic
  IO.println (Name.mkSimple "atom").isAtomic
  IO.println n3.isNum
  IO.println n1.isStr
  IO.println Name.anonymous.isAnonymous
  IO.println n1.hasNum
  IO.println n3.hasNum
  IO.println (n1.cmp n3 == Ordering.lt)
  IO.println (n1.quickCmp n1 == Ordering.eq)
  IO.println (n1.anyS (fun s => s == "Compiler"))
  IO.println (n1.anyS (fun s => s == "Parser"))
