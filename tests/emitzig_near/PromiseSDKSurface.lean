import Lean.Near

/-!
Checks that the Rust-SDK-shaped `Near.Promise` and `Near.Store` APIs compile
and execute through the NEAR mock host imports.
-/

open Near

def counters : Store.LookupMap UInt64 := Store.LookupMap.new "counters"
def values : Store.Vector UInt64 := Store.Vector.new "values"
def owner : Store.LazyOption AccountId := Store.LazyOption.new "owner"
def receiver : AccountId := AccountId.unchecked "receiver.testnet"

def main : IO UInt32 := do
  let ctx ← Env.context
  let _ ← owner.set ctx.signerAccount
  let next ← counters.modify "seen" 0 (· + 1)
  let _ ← values.push next
  let promise ← Promise.new receiver
  let promise ← promise.functionCall
    "on_increment"
    ("{\"count\":\"" ++ toString next ++ "\"}")
    NearToken.zero
    (Gas.fromTgas 5)
  let callback ← promise.thenCall
    ctx.currentAccount
    "on_increment_callback"
    "{}"
    NearToken.zero
    (Gas.fromTgas 5)
  Promise.returnPromise callback
  pure 0
