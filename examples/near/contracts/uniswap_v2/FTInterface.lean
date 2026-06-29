/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

FT (Fungible Token) interface for cross-contract calls on NEAR.

Provides helpers to call `ft_transfer`, `ft_transfer_call`, and
`ft_balance_of` on any FT contract via Promise.

NEAR FT standard: https://nomicon.io/FungibleToken
-/
import Lean.Near
open Near

namespace UniswapV2.FT

/-- Call `ft_transfer` on a token contract to send `amount` to `receiver`.
    Requires 1 yoctoNEAR attached deposit (FT standard requirement). -/
def transfer (token : AccountId) (receiver : String) (amount : Amount.U128) (memo : String := "") : IO Promise := do
  let args := "{\"receiver_id\":\"" ++ receiver ++ "\",\"amount\":\"" ++ toString amount.hi ++ toString amount.lo ++ "\""
  let args := if memo == "" then args ++ "}" else args ++ ",\"memo\":\"" ++ memo ++ "\"}"
  Promise.create token "ft_transfer" args NearToken.oneYocto (Gas.fromTgas 30)

/-- Call `ft_transfer_call`: transfer tokens to a contract and trigger a callback.
    The receiver contract's `ft_on_transfer` method is called with `msg`. -/
def transferCall (token : AccountId) (receiver : String) (amount : Amount.U128) (msg : String) (memo : String := "") : IO Promise := do
  let args := "{\"receiver_id\":\"" ++ receiver ++ "\",\"amount\":\"" ++ toString amount.hi ++ toString amount.lo
  let args := args ++ "\",\"msg\":\"" ++ msg ++ "\""
  let args := if memo == "" then args ++ "}" else args ++ ",\"memo\":\"" ++ memo ++ "\"}"
  Promise.create token "ft_transfer_call" args NearToken.oneYocto (Gas.fromTgas 50)

/-- Call `ft_balance_of` on a token contract. Returns a Promise whose callback
    will contain the balance as a JSON string. -/
def balanceOf (token : AccountId) (account : String) : IO Promise := do
  let args := "{\"account_id\":\"" ++ account ++ "\"}"
  Promise.create token "ft_balance_of" args NearToken.zero (Gas.fromTgas 15)

/-- Parse the balance from a Promise callback result (JSON string). -/
def parseBalanceResult (data : String) : Amount.U128 :=
  -- The result from ft_balance_of is a JSON string number like "123456789"
  -- Strip quotes and parse
  let cleaned := data.trim.replace "\"" ""
  match Storage.parseNat? cleaned with
  | some n => Amount.U128.ofUInt64 n.toUInt64
  | none => Amount.U128.zero

end UniswapV2.FT
