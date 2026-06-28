# Lean NEAR examples

This directory is a self-contained example repository for writing NEAR contracts in Lean and compiling them through EmitZig.

It demonstrates the current Layer 3 SDK surface in `Lean.Near`:

- `Counter.lean` uses `Contract.initializer`, `Contract.view`, `Contract.update`, and typed `Storage.Key`.
- `GuestBook.lean` uses `Store.Vector`, `Store.LookupMap`, and `Store.LazyOption`.
- `Context.lean` reads `Env.context` and shows `requireInitialized` / `requirePrivate` guards.
- `CrossContract.lean` builds a promise, attaches a callback, and returns it.
- `VerifiedVault.lean` shows the formal-verification pattern for DeFi-style contracts: define a pure financial state machine, prove invariants about it, then call the verified transitions from NEAR entrypoints.

## Current NEAR support

The current support is enough to write and deploy small Lean NEAR contracts through `lean -z` and `tools/zigc-near`:

- Contract methods: `Contract.initializer`, `Contract.view`, `Contract.update`, conventional `STATE` initialization, return helpers, panic/require guards, private-method guard, payable/no-deposit helpers, one-yocto and minimum-deposit checks.
- Runtime context: current/predecessor/signer account IDs, block height, timestamp, epoch height, storage usage, prepaid/used gas, input string, logging, panic, and value return.
- Amounts and gas: `Near.Amount.U128` for gas-bounded yoctoNEAR arithmetic, `NearToken` backed by `U128`, typed `Gas`, and checked add/sub/compare helpers for financial logic.
- Storage: raw string storage, typed `Storage.Key`, `Storage.Slot`, `Storage.TypedMap`, and Rust-SDK-shaped `Store.LookupMap`, `Store.Vector`, and `Store.LazyOption`.
- Promises: function-call promises, batch creation, transfer actions, callbacks with `thenCall` / `thenBatch`, `join`, promise result inspection, and `returnPromise`.
- Testing/deploy: local compile checks, official `near-workspaces` + `near-sandbox` smoke tests, and testnet deployment for the counter runner with local `~/.near-credentials` keys.

There are still important limits:

- Method exports are declared in `*.near-methods` files; automatic method dispatch/macros are not implemented yet.
- Storage codecs are string-backed, not Borsh-compatible. Complex data layouts should define an explicit storage boundary.
- `Near.Amount.U128` has checked runtime arithmetic, but no general decimal parser/codec in the SDK hot path yet. `VerifiedVault.lean` stores U128 limbs explicitly and keeps user input parsing small and local.
- Advanced NEAR host APIs such as cryptographic hashes, random seed, validator staking queries, and event-standard helpers are not exposed yet.
- The testnet helper currently targets the counter scenario. Use sandbox for deterministic CI and add a dedicated script before treating a new scenario as testnet-supported.

## Formal verification pattern

Lean lets us keep proof-carrying contract code in the same file as executable NEAR methods. The recommended split is:

```lean
namespace Spec
  -- Pure model: no IO, no storage, no host calls.
  abbrev Amount := Near.Amount.U128
  def deposit? (s : State) (amount : Amount) : Option State := ...
  theorem deposit_preserves_solvent ... : solvent next := by ...
end Spec

namespace StorageState
  -- Boundary layer: map verified model state to NEAR storage.
end StorageState

def deposit : Contract.Method .update := Contract.update "deposit" do
  -- Runtime guards + storage IO.
  match Spec.deposit? current amount with
  | some next => StorageState.write next
  | none => Contract.panic "vault deposit overflow"
```

`VerifiedVault.lean` proves:

- `empty_solvent`: the initialized vault starts fully collateralized.
- `deposit_preserves_solvent`: checked minting of 1:1 shares for deposits preserves reserves/shares equality.
- `withdraw_preserves_solvent`: checked burning of 1:1 shares for withdrawals preserves reserves/shares equality.
- `canWithdraw_implies_reserve_bound` and `canWithdraw_implies_share_bound`: the runtime withdraw guard implies both reserve and share bounds.

These proofs are checked before EmitZig produces WASM. They do not replace runtime guards, accounting tests, or adversarial integration tests, but they catch broken financial state transitions at compile time.

The executable vault path intentionally uses bounded `U128` arithmetic instead of unbounded `Nat` arithmetic. This keeps DeFi-style accounting closer to chain reality: overflow and underflow become explicit `Option` branches, while proofs can still reason over the pure transition functions.

Run the verified vault against the official sandbox stack:

```bash
examples/near/scripts/sandbox-verified-vault.sh
```

The smoke test deploys `VerifiedVault`, runs `init`, deposits 1000 yoctoNEAR, withdraws 250 yoctoNEAR, and checks that `reserves == shares` after every step. Override `NEAR_VAULT_SMOKE_DEPOSIT_YOCTO` and `NEAR_VAULT_SMOKE_WITHDRAW_YOCTO` to test other amounts.

## Build all examples

From the repository root:

```bash
examples/near/scripts/build.sh
```

Outputs are written to `/tmp/lean_near_examples` by default. Set `LEAN_NEAR_EXAMPLES_OUT` to override that path.

## Run the official sandbox smoke test

```bash
examples/near/scripts/sandbox-counter.sh
```

This builds `Counter.lean`, strips WASI imports into `Counter.near.wasm`, deploys it with the official `near-workspaces` + `near-sandbox` stack, and checks:

```text
init -> get == 0 -> increment -> get == 1
```

## Create a testnet account

Use the official Rust NEAR CLI to create a faucet-funded testnet account and save a JS-compatible legacy key file:

```bash
ACCOUNT_ID=lz$(openssl rand -hex 3).testnet
npx -y near-cli-rs@latest account create-account sponsor-by-faucet-service "$ACCOUNT_ID" \
  autogenerate-new-keypair save-to-legacy-keychain network-config testnet create
```

This writes `~/.near-credentials/testnet/$ACCOUNT_ID.json`, which is the key format used by the testnet runner.

## Run on testnet

Testnet needs a funded account and a local key file readable by `near-workspaces`.

```bash
TESTNET_MASTER_ACCOUNT_ID=<funded-account.testnet> \
NEAR_WORKSPACES_NETWORK=testnet \
examples/near/scripts/testnet-counter.sh
```

The runner reads credentials from `~/.near-credentials` by default. Set `NEAR_CREDENTIALS_DIR` if your key store lives somewhere else.

For faucet-funded accounts, the runner keeps balances small by default: 4 NEAR for the temporary workspaces root account and 2 NEAR for the deployed contract account. Override these with `NEAR_WORKSPACES_ROOT_INITIAL_BALANCE_NEAR` and `NEAR_WORKSPACES_CONTRACT_INITIAL_BALANCE_NEAR` if needed.

Keep the master account name short. `near-workspaces` creates nested dev accounts on testnet, and long master account names can exceed NEAR's account-id length limit. The runner defaults the workspaces root prefix to `r`; set `NEAR_WORKSPACES_ROOT_ACCOUNT_ID` to reuse or override that root subaccount.

Use sandbox for repeatable local validation. Use testnet only when you need to verify real RPC/deployment behavior.

## Method export files

Each `*.near-methods` file maps exported NEAR method names to Lean-generated symbols:

```text
increment=l_Counter_increment
```

`tools/zigc-near` turns each mapping into a WASM export that runs the corresponding `Near.Contract.Method`.
