# Lean NEAR examples

This directory is a self-contained example repository for writing NEAR contracts in Lean and compiling them through EmitZig.

It demonstrates the current Layer 3 SDK surface in `Lean.Near`:

- `Counter.lean` uses `Contract.initializer`, `Contract.view`, `Contract.update`, and typed `Storage.Key`.
- `GuestBook.lean` uses `Store.Vector`, `Store.LookupMap`, and `Store.LazyOption`.
- `Context.lean` reads `Env.context` and shows `requireInitialized` / `requirePrivate` guards.
- `CrossContract.lean` builds a promise, attaches a callback, and returns it.

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

## Run on testnet

Testnet needs a funded account and a local key file readable by `near-workspaces`.

```bash
TESTNET_MASTER_ACCOUNT_ID=<funded-account.testnet> \
NEAR_WORKSPACES_NETWORK=testnet \
examples/near/scripts/testnet-counter.sh
```

`near-workspaces` normally reads credentials from `~/.near-credentials/testnet/<account>.json`.

Use sandbox for repeatable local validation. Use testnet only when you need to verify real RPC/deployment behavior.

## Method export files

Each `*.near-methods` file maps exported NEAR method names to Lean-generated symbols:

```text
increment=l_Counter_increment
```

`tools/zigc-near` turns each mapping into a WASM export that runs the corresponding `Near.Contract.Method`.
