/-!
Test 1: Simple mutual with params and cross-reference (should HANG)
-/
mutual
inductive A (α : Type) where
  | mk : B α → A α
inductive B (α : Type) where
  | mk : A α → B α
end
