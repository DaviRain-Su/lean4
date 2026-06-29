/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

A simple ERC-20-style token contract demonstrating access control,
mapping-based balances, and conditional transfers.

Storage layout:
  slot 0: owner address
  slot 1: total supply
  mapping at slot 2: balances[address] => uint256
-/
import Lean.Evm
open Lean.Evm

namespace SimpleToken

/-- Initialize: set caller as owner, mint `supply` to owner. -/
@[export l_SimpleToken_init]
def init (supply : Nat) : IO Unit := do
  let owner ← Env.sender
  Storage.store 0 owner
  Storage.store 1 supply
  Storage.mapStore 2 owner supply

/-- Get the contract owner. -/
@[export l_SimpleToken_getOwner]
def getOwner : IO Nat := Storage.load 0

/-- Get the total token supply. -/
@[export l_SimpleToken_totalSupply]
def totalSupply : IO Nat := Storage.load 1

/-- Get the balance of an address. -/
@[export l_SimpleToken_balanceOf]
def balanceOf (addr : Nat) : IO Nat := Storage.mapLoad 2 addr

/-- Transfer `amount` from caller to `to`. Reverts on insufficient balance. -/
@[export l_SimpleToken_transfer]
def transfer (to amount : Nat) : IO Unit := do
  let sender ← Env.sender
  let bal ← Storage.mapLoad 2 sender
  if bal ≥ amount then
    Storage.mapStore 2 sender (bal - amount)
    let recvBal ← Storage.mapLoad 2 to
    Storage.mapStore 2 to (recvBal + amount)
  else
    revert

end SimpleToken
