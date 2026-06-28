import Lean.Near

/-!
Checks that the Lean-facing NEAR SDK exposes the core Layer 3 contract surface
without requiring user contracts to import raw `lean_near_*` extern bindings.
-/

open Near

def countKey : Storage.Key UInt64 := Storage.Key.make "count"
def countSlot : Storage.Slot UInt64 := Storage.Slot.make "last-count"
def owners : Storage.TypedMap AccountId := Storage.TypedMap.make "owners"
def flags : Storage.TypedMap Bool := Storage.TypedMap.make "flags"

def initBody : Contract.InitM Unit := do
  let ok ← Contract.requireNotInitialized
  if ok then
    let owner := AccountId.unchecked "owner.testnet"
    let _ ← Contract.initStateAs owner
    let _ ← owners.set "owner" owner
    pure ()

def viewBody : Contract.ViewM Unit := do
  let _owner ← Contract.loadStateAs? (α := AccountId)
  let n ← countKey.read 0
  Contract.returnU64 n

def incrementBody : Contract.UpdateM Unit := do
  let ctx ← Env.context
  let n ← countKey.modify 0 (· + 1)
  let _ ← countSlot.write n
  let _ ← owners.set "current" ctx.currentAccount
  let _ ← flags.set "initialized" (← Contract.isInitialized)
  Contract.returnJson ("{\"count\":\"" ++ toString n ++ "\"}")

def initMethod : Contract.Method .init := Contract.initializer "init" initBody
def viewMethod : Contract.Method .view := Contract.view "get_count" viewBody
def updateMethod : Contract.Method .update := Contract.update "increment" incrementBody

def main : IO UInt32 := do
  let _ ← initMethod.run
  let initialized ← Contract.requireInitialized
  if initialized then
    updateMethod.run
  else
    Contract.entry (Contract.returnBool false)
