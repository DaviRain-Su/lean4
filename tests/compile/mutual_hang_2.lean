/-!
Test 2: Mutual without params (should work)
-/
mutual
inductive A where
  | mk : B → A
inductive B where
  | mk : A → B
end
