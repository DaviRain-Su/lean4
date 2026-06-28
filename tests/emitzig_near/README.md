# EmitZig NEAR tests

This directory exercises Lean source compiled through EmitZig into a NEAR contract WASM.

## Local compile check

```bash
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_test.sh tests/emitzig_near/CounterContractSDK.lean
```

`CounterContractSDK.near-methods` maps NEAR method names to Lean-generated symbols, so `tools/zigc-near` exports `init`, `get`, and `increment`.

## Official sandbox check

```bash
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_workspaces_test.sh
```

The runner uses the official `near-workspaces` package and `near-sandbox`. It first builds the Zig runtime as `wasm32-wasi` with `cpu=mvp`, builds the counter example if needed, strips WASI imports into `CounterContractSDK.near.wasm`, deploys it with `devDeploy`, then checks `init`, `get`, and `increment`.

## Testnet check

```bash
TESTNET_MASTER_ACCOUNT_ID=<funded-account.testnet> \
NEAR_WORKSPACES_NETWORK=testnet \
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_workspaces_test.sh
```

Testnet requires credentials for `TESTNET_MASTER_ACCOUNT_ID` in the key store used by `near-workspaces` (normally `~/.near-credentials`). Use sandbox for CI and local deterministic checks; use testnet only when external deployment behavior needs to be verified.
