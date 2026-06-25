inductive Tree where
  | leaf : Tree
  | node : Tree → Tree → Tree
