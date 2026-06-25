/-!
Test 3: Mutual with params, one-directional reference (should work)
-/
mutual
inductive A (α : Type) where
  | mk : α → A α
inductive B (α : Type) where
  | mk : A α → B α
end
