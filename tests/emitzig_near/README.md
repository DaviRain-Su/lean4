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

Create a faucet-funded testnet account with the official Rust NEAR CLI and save it in the legacy key store:

```bash
ACCOUNT_ID=lz$(openssl rand -hex 3).testnet
npx -y near-cli-rs@latest account create-account sponsor-by-faucet-service "$ACCOUNT_ID" \
  autogenerate-new-keypair save-to-legacy-keychain network-config testnet create
```

```bash
TESTNET_MASTER_ACCOUNT_ID=<funded-account.testnet> \
NEAR_WORKSPACES_NETWORK=testnet \
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_workspaces_test.sh
```

Testnet requires credentials for `TESTNET_MASTER_ACCOUNT_ID` under `~/.near-credentials/testnet/<account>.json`. Set `NEAR_CREDENTIALS_DIR` if your key store lives somewhere else. Keep the master account name short because `near-workspaces` creates nested dev accounts on testnet and long master account names can exceed NEAR's account-id length limit. The testnet runner defaults to root prefix `r`, 4 NEAR for the temporary workspaces root account, and 2 NEAR for the deployed contract account; override them with `NEAR_WORKSPACES_ROOT_ACCOUNT_ID`, `NEAR_WORKSPACES_ROOT_INITIAL_BALANCE_NEAR`, and `NEAR_WORKSPACES_CONTRACT_INITIAL_BALANCE_NEAR`. Use sandbox for CI and local deterministic checks; use testnet only when external deployment behavior needs to be verified.
