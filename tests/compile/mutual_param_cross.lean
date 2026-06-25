/-!
Test mutual inductive types with parameters and cross-references.
This specically tests the case where two mutually inductive types
reference each other in constructor fields, both with parameters.
-/

/-!
Simple mutual with parameters and cross-reference (I1 ↔ I2)
-/
mutual
inductive I1 (α : Type) where
  | mk : I2 α → I1 α
inductive I2 (α : Type) where
  | mk : I1 α → I2 α
end

/-!
Basic usage
-/
def x : I1 Nat := I1.mk (I2.mk (I1.mk (I2.mk (I1.mk (I2.mk (I1.mk (I2.mk ?_)))))))
  -- intentional hole for this test, just need the types to compile
