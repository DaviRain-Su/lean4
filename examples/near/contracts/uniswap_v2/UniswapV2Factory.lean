/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

UniswapV2 Factory — creates and registers trading pairs.

Ported from `contracts/UniswapV2Factory.sol`. On NEAR, each pair is a
separate account (subaccount of the factory), created via Promise batch.

Storage layout:
  - feeToSetter: the admin who can set feeTo
  - getPair: mapping (tokenA, tokenB) => pair account
  - allPairs: array of all pair accounts
-/
import Lean.Near
open Near

namespace UniswapV2.Factory

-- ## Storage keys

def feeToSetterKey : Storage.Key String := Storage.Key.make "factory:feeToSetter"
def feeToKey : Storage.Key String := Storage.Key.make "factory:feeTo"
def pairCountKey : Storage.Key Nat := Storage.Key.make "factory:pairCount"

def pairKey (tokenA tokenB : String) : String :=
  "factory:pair:" ++ tokenA ++ ":" ++ tokenB

def allPairsKey (index : Nat) : String :=
  "factory:allPairs:" ++ toString index

-- ## Pure model

namespace Spec

/-- Token ordering for canonical pair address. -/
def sortTokens (tokenA tokenB : String) : String × String :=
  if tokenA < tokenB then (tokenA, tokenB) else (tokenB, tokenA)

end Spec

-- ## Storage helpers

def getPair (tokenA tokenB : String) : IO String := do
  let (t0, t1) := Spec.sortTokens tokenA tokenB
  let v : Option String ← Storage.readAs? (pairKey t0 t1)
  pure (v.getD "")

def setPair (tokenA tokenB pairAddr : String) : IO Unit := do
  let (t0, t1) := Spec.sortTokens tokenA tokenB
  let _ ← Storage.writeAs (pairKey t0 t1) pairAddr
  let _ ← Storage.writeAs (pairKey t1 t0) pairAddr  -- reverse lookup

def getPairCount : IO Nat := do
  let v ← Storage.readAs? (α := Nat) pairCountKey.name
  pure (v.getD 0)

def allPairsAt (index : Nat) : IO String := do
  let v ← Storage.readAs? (α := String) (allPairsKey index)
  pure (v.getD "")

/-- Append a pair to the allPairs array. -/
def appendPair (pairAddr : String) : IO Unit := do
  let count ← getPairCount
  let _ ← Storage.writeAs (allPairsKey count) pairAddr
  let _ ← Storage.writeAs pairCountKey.name (count + 1)

-- ## Guards

def requireFeeToSetter : IO Unit := do
  let setterOpt : Option String ← Storage.readAs? feeToSetterKey.name
  let setter := setterOpt.getD ""
  let caller ← Env.predecessorAccount
  if caller.id != setter then Contract.panic "UniswapV2: FORBIDDEN"

-- ## Entrypoints

/-- Initialize the factory. Caller becomes feeToSetter. -/
@[export l_UniswapV2Factory_init]
def init (feeToSetter : String) : IO Unit := do
  let _ ← Storage.writeAs feeToSetterKey.name feeToSetter

/-- Create a new pair for tokenA and tokenB.
    Returns the pair account id (subaccount of factory). -/
@[export l_UniswapV2Factory_createPair]
def createPair (tokenA tokenB : String) : IO String := do
  if tokenA == tokenB then Contract.panic "UniswapV2: IDENTICAL_ADDRESSES"
  let (token0, token1) := Spec.sortTokens tokenA tokenB
  if token0 == "" then Contract.panic "UniswapV2: ZERO_ADDRESS"
  -- Check pair doesn't exist
  let existing ← getPair token0 token1
  if existing != "" then Contract.panic "UniswapV2: PAIR_EXISTS"
  -- Generate pair subaccount: factory.pair0, factory.pair1, ...
  let count ← getPairCount
  let factory ← Env.currentAccountId
  let pairAccount := factory ++ ".pair" ++ toString count
  -- Register pair
  setPair token0 token1 pairAccount
  appendPair pairAccount
  -- In production: deploy pair contract via Promise
  -- For now, return the pair account id
  pure pairAccount

/-- Set fee recipient. Only feeToSetter. -/
@[export l_UniswapV2Factory_setFeeTo]
def setFeeTo (feeTo : String) : IO Unit := do
  requireFeeToSetter
  let _ ← Storage.writeAs feeToKey.name feeTo

/-- Set new feeToSetter. Only current feeToSetter. -/
@[export l_UniswapV2Factory_setFeeToSetter]
def setFeeToSetter (newSetter : String) : IO Unit := do
  requireFeeToSetter
  let _ ← Storage.writeAs feeToSetterKey.name newSetter

/-- Get the number of pairs created. -/
@[export l_UniswapV2Factory_allPairsLength]
def allPairsLength : IO Nat := getPairCount

end UniswapV2.Factory

-- NEAR 合约入口（需要 main 符号）
def main : IO UInt32 := pure 0
