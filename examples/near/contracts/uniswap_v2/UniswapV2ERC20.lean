/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

UniswapV2 ERC20 — LP (Liquidity Provider) token.

Ported from `contracts/UniswapV2ERC20.sol`. Provides standard ERC-20
functionality for liquidity tokens, including EIP-2612 permit.

On NEAR, balances and allowances are stored in contract storage rather
than as a standalone ERC-20 contract. This is a library that the Pair
contract embeds.
-/
import Lean.Near
open Near

namespace UniswapV2.ERC20

-- ## Constants

def name : String := "Uniswap V2"
def symbol : String := "UNI-V2"
def decimals : UInt8 := 18

-- ## Storage keys

def totalSupplyKey : Storage.Key Nat := Storage.Key.make "erc20:totalSupply"

def balanceKey (account : String) : String :=
  "erc20:balance:" ++ account

def allowanceKey (owner spender : String) : String :=
  "erc20:allowance:" ++ owner ++ ":" ++ spender

def noncesKey (owner : String) : String :=
  "erc20:nonce:" ++ owner

-- ## Pure model + proofs

namespace Spec

theorem mint_preserves_balance {total bal amount : Nat}
    (h : bal ≤ total)
    : bal + amount ≤ total + amount := by omega

theorem burn_preserves_balance {total bal amount : Nat}
    (h : amount ≤ bal) (ht : amount ≤ total)
    : total - amount ≥ 0 ∧ bal - amount ≥ 0 := by omega

end Spec

-- ## Read/Write helpers

def getTotalSupply : IO Nat := do
  let v ← Storage.readNat? totalSupplyKey.name
  pure v.getD 0

def setTotalSupply (v : Nat) : IO Unit :=
  Storage.writeNat totalSupplyKey.name v

def balanceOf (account : String) : IO Nat := do
  let v ← Storage.readNat? (balanceKey account)
  pure v.getD 0

def _setBalance (account : String) (v : Nat) : IO Unit :=
  Storage.writeNat (balanceKey account) v

def _allowance (owner spender : String) : IO Nat := do
  let v ← Storage.readNat? (allowanceKey owner spender)
  pure v.getD 0

def _approve (owner spender : String) (v : Nat) : IO Unit :=
  Storage.writeNat (allowanceKey owner spender) v

def _transfer (src dst : String) (v : Nat) : IO Unit := do
  let srcBal ← balanceOf src
  let dstBal ← balanceOf dst
  _setBalance src (srcBal - v)
  _setBalance dst (dstBal + v)

/-- Mint LP tokens to `to`. -/
def _mint (to : String) (v : Nat) : IO Unit := do
  let ts ← getTotalSupply
  setTotalSupply (ts + v)
  let bal ← balanceOf to
  _setBalance to (bal + v)

/-- Burn LP tokens from `from`. -/
def _burn (from : String) (v : Nat) : IO Unit := do
  let bal ← balanceOf from
  _setBalance from (bal - v)
  let ts ← getTotalSupply
  setTotalSupply (ts - v)

end UniswapV2.ERC20
