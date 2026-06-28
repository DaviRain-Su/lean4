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
def scores : Store.LookupMap UInt64 := Store.LookupMap.new "scores"
def history : Store.Vector UInt64 := Store.Vector.new "history"
def lazyOwner : Store.LazyOption AccountId := Store.LazyOption.new "lazy-owner"
def totalDepositKey : Storage.U128Key := Storage.U128Key.make "total-deposit"

theorem checkedAdd_equal_amounts {a b delta nextA nextB : Amount.U128}
    (h : a = b)
    (ha : a.checkedAdd delta = some nextA)
    (hb : b.checkedAdd delta = some nextB) : nextA = nextB :=
  Verify.checkedAdd_preserves_eq h ha hb

def initBody : Contract.InitM Unit := do
  let ok ← Contract.requireNotInitialized
  if ok then
    let owner := AccountId.unchecked "owner.testnet"
    let _ ← Contract.initStateAs owner
    let _ ← owners.set "owner" owner
    let _ ← lazyOwner.set owner
    pure ()

def viewBody : Contract.ViewM Unit := do
  let _owner ← Contract.loadStateAs? (α := AccountId)
  let n ← countKey.read 0
  Contract.returnU64 n

def incrementBody : Contract.UpdateM Unit := do
  let ctx ← Env.context
  let attachedDeposit ← Env.attachedDepositAmount
  let n ← countKey.modify 0 (· + 1)
  let _ ← countSlot.write n
  totalDepositKey.write attachedDeposit
  let _storedDeposit ← totalDepositKey.read
  let _ ← owners.set "current" ctx.currentAccount
  let _ ← flags.set "initialized" (← Contract.isInitialized)
  let _ ← scores.insert "current" n
  let _ ← history.push n
  Event.emit "lean-near-sdk" "1.0.0" "increment"
    ("[{\"count\":\"" ++ toString n ++ "\"}]")
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
