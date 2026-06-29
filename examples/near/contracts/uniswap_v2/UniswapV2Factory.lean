/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

UniswapV2 Factory — creates and registers trading pairs.

Uses the Contract.Method pattern (like Counter) so that NEAR's JSON
input is read via Env.inputString, not Lean function parameters.

NEAR method args (JSON):
  init: {"feeToSetter": "alice.near"}
  createPair: {"tokenA": "token0.near", "tokenB": "token1.near"}
  setFeeTo: {"feeTo": "alice.near"}
  setFeeToSetter: {"feeToSetter": "bob.near"}
  allPairsLength: {}
-/
import Lean.Near
open Near

namespace UniswapV2.Factory

-- ## Storage keys

def feeToSetterKey : String := "factory:feeToSetter"
def feeToKey : String := "factory:feeTo"
def pairCountKey : String := "factory:pairCount"

def pairKey (tokenA tokenB : String) : String :=
  "factory:pair:" ++ tokenA ++ ":" ++ tokenB

def allPairsKey (index : Nat) : String :=
  "factory:allPairs:" ++ toString index

-- ## Storage helpers

def readNat (key : String) : IO Nat := do
  let v : Option Nat ← Storage.readAs? key
  pure (v.getD 0)

def readStr (key : String) : IO String := do
  let v : Option String ← Storage.readAs? key
  pure (v.getD "")

def writeNat (key : String) (v : Nat) : IO Unit := do
  let _ ← Storage.writeAs key v

def writeStr (key : String) (v : String) : IO Unit := do
  let _ ← Storage.writeAs key v

def getPairAddr (tokenA tokenB : String) : IO String := do
  let (t0, t1) := if tokenA < tokenB then (tokenA, tokenB) else (tokenB, tokenA)
  readStr (pairKey t0 t1)

def setPairAddr (tokenA tokenB addr : String) : IO Unit := do
  let (t0, t1) := if tokenA < tokenB then (tokenA, tokenB) else (tokenB, tokenA)
  writeStr (pairKey t0 t1) addr
  writeStr (pairKey t1 t0) addr

def getPairCount : IO Nat := readNat pairCountKey

def appendPair (addr : String) : IO Unit := do
  let count ← getPairCount
  writeStr (allPairsKey count) addr
  writeNat pairCountKey (count + 1)

-- ## Contract Methods (Contract.Method pattern, like Counter)
-- init defaults feeToSetter to the caller (no JSON args needed)
-- createPair reads token addresses from storage (set by setToken calls)
-- This avoids cross-module String.splitOn dependency


-- ## Guards

def requireFeeToSetter : IO Unit := do
  let setter ← readStr feeToSetterKey
  let caller ← Env.predecessorAccount
  if caller.id != setter then Contract.panic "UniswapV2: FORBIDDEN"

-- ## NEAR Contract Methods (no parameters, read from Env.inputString)

@[export l_UniswapV2_Factory_init]
def init : Contract.Method .init := Contract.initializer "init" do
  let caller ← Env.predecessorAccount
  writeStr feeToSetterKey caller.id
  Contract.returnU64 0

@[export l_UniswapV2_Factory_createPair]
def createPair : Contract.Method .update := Contract.update "createPair" do
  -- Token addresses are set via setToken0/setToken1 calls
  let tokenA ← readStr "factory:pendingTokenA"
  let tokenB ← readStr "factory:pendingTokenB"
  if tokenA == "" then Contract.panic "createPair: tokenA not set"
  if tokenB == "" then Contract.panic "createPair: tokenB not set"
  if tokenA == tokenB then Contract.panic "UniswapV2: IDENTICAL_ADDRESSES"
  let (token0, token1) := if tokenA < tokenB then (tokenA, tokenB) else (tokenB, tokenA)
  if token0 == "" then Contract.panic "UniswapV2: ZERO_ADDRESS"
  let existing ← getPairAddr token0 token1
  if existing != "" then Contract.panic "UniswapV2: PAIR_EXISTS"
  let count ← getPairCount
  let factory ← Env.currentAccountId
  let pairAccount := factory ++ ".pair" ++ toString count
  setPairAddr token0 token1 pairAccount
  appendPair pairAccount
  Contract.returnText pairAccount

/-- Set pending tokenA address for createPair. -/
@[export l_UniswapV2_Factory_setTokenA]
def setTokenA : Contract.Method .update := Contract.update "setTokenA" do
  let input ← Env.inputString
  writeStr "factory:pendingTokenA" input

/-- Set pending tokenB address for createPair. -/
@[export l_UniswapV2_Factory_setTokenB]
def setTokenB : Contract.Method .update := Contract.update "setTokenB" do
  let input ← Env.inputString
  writeStr "factory:pendingTokenB" input

@[export l_UniswapV2_Factory_setFeeTo]
def setFeeTo : Contract.Method .update := Contract.update "setFeeTo" do
  requireFeeToSetter
  let input ← Env.inputString
  writeStr feeToKey input

@[export l_UniswapV2_Factory_setFeeToSetter]
def setFeeToSetter : Contract.Method .update := Contract.update "setFeeToSetter" do
  requireFeeToSetter
  let input ← Env.inputString
  writeStr feeToSetterKey input

@[export l_UniswapV2_Factory_allPairsLength]
def allPairsLength : Contract.Method .view := Contract.view "allPairsLength" do
  let count ← getPairCount
  Contract.returnU64 count.toUInt64

end UniswapV2.Factory

def main : IO UInt32 := UniswapV2.Factory.createPair.run
