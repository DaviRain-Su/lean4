/-!
Mutual inductive, no cross-reference (each type only references itself)
-/
mutual
inductive A where
  | mk : A → A
inductive B where
  | mk : B → B
end
