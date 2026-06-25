/-!
Regression test: simple single inductive with recursive field
-/
inductive A where
  | mk : A → A
