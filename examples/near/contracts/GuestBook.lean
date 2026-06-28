/-
Copyright (c) 2026 DaviRain. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
-/

import Lean.Near

/-!
Persistent collection example using `Store.Vector`, `Store.LookupMap`, and
`Store.LazyOption`.
-/

open Near

namespace GuestBook

def messages : Store.Vector String := Store.Vector.new "messages"
def postsByAccount : Store.LookupMap Nat := Store.LookupMap.new "posts-by-account"
def owner : Store.LazyOption AccountId := Store.LazyOption.new "owner"

def init : Contract.Method .init := Contract.initializer "init" do
  let ok ← Contract.requireNotInitialized
  if ok then
    let signer ← Env.signerAccount
    let _ ← Contract.initStateAs true
    let _ ← owner.set signer
    Contract.returnAccountId signer

def addMessage : Contract.Method .update := Contract.update "add_message" do
  let _ ← Contract.requireInitialized
  let ctx ← Env.context
  let message ← Env.inputString
  let idx ← messages.push message
  let _ ← postsByAccount.modify ctx.predecessorAccount.id 0 (· + 1)
  Env.log ("guestbook message #" ++ toString idx ++ " from " ++ toString ctx.predecessorAccount)
  Contract.returnNat idx

def latest : Contract.Method .view := Contract.view "latest" do
  let n ← messages.len
  if n == 0 then
    Contract.returnText ""
  else
    let message ← messages.get! (n - 1) ""
    Contract.returnText message

def count : Contract.Method .view := Contract.view "count" do
  Contract.returnNat (← messages.len)

end GuestBook

def main : IO UInt32 := GuestBook.addMessage.run
