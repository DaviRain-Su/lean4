/-!
Mutual inductive with cross-reference, no params, on the first type only
(i.e. A references B, but B doesn't reference A)
-/
mutual
inductive A where
  | mkA : B → A
inductive B where
  | mkB : Nat → B
end
