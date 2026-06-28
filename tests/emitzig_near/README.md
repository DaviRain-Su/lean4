# EmitZig NEAR tests

This directory exercises Lean source compiled through EmitZig into a NEAR contract WASM.

## Local compile check

```bash
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_test.sh tests/emitzig_near/CounterContractSDK.lean
```

`CounterContractSDK.near-methods` maps NEAR method names to Lean-generated symbols. `run_test.sh` passes that file through `NEAR_METHODS_FILE`, so `tools/zigc-near` exports `init`, `get`, and `increment`.

## Official sandbox check

```bash
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_workspaces_test.sh
```

The runner uses the official `near-workspaces` package and `near-sandbox`. It first builds the Zig runtime as `wasm32-wasi` with `cpu=mvp`, builds the counter example if needed, strips WASI imports into `CounterContractSDK.near.wasm`, deploys it with `devDeploy`, then checks `init`, `get`, and `increment`.

The same runner also has a vault scenario for contracts that expose `init`, `status`, `deposit`, and `withdraw`:

```bash
NEAR_WORKSPACES_SCENARIO=vault \
LEAN=build/release/stage1/bin/lean \
tests/emitzig_near/run_workspaces_test.sh /path/to/VerifiedVault.wasm
```

The vault scenario checks the bounded `Near.Amount.U128` amount path by depositing yoctoNEAR through `attachedDeposit`, withdrawing through a promise transfer, and verifying the returned `reserves` / `shares` state after each step. Override `NEAR_VAULT_SMOKE_DEPOSIT_YOCTO` and `NEAR_VAULT_SMOKE_WITHDRAW_YOCTO` for different small-accounting smoke amounts.

Current coverage:

- `run_test.sh` compiles Lean to Zig, checks the generated Zig, compiles NEAR-compatible WASM, checks MVP-only instructions, and verifies configured NEAR method exports.
- `run_workspaces_test.sh` deploys to the official sandbox or testnet through `near-workspaces`.
- The default test scenario is `counter`; set `NEAR_WORKSPACES_SCENARIO=vault` for the verified vault smoke path.
- The Layer 3 SDK surface covered here includes typed storage, U128 limb storage, Rust-SDK-shaped store collections, environment context, event logs, promise creation/callbacks, formal U128 equality helpers, and U128-backed `NearToken` transfers.

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

Testnet requires credentials for `TESTNET_MASTER_ACCOUNT_ID` under `~/.near-credentials/testnet/<account>.json`. Set `NEAR_CREDENTIALS_DIR` if your key store lives somewhere else. Keep the master account name short because `near-workspaces` creates nested dev accounts on testnet and long master account names can exceed NEAR's account-id length limit. The testnet runner defaults to root prefix `r`, 4 NEAR for the temporary workspaces root account, and 2 NEAR for the deployed contract account; override them with `NEAR_WORKSPACES_ROOT_ACCOUNT_ID`, `NEAR_WORKSPACES_ROOT_INITIAL_BALANCE_NEAR`, and `NEAR_WORKSPACES_CONTRACT_INITIAL_BALANCE_NEAR`. Current Lean-generated WASM still needs roughly 1.2 NEAR of deployed-contract storage balance on testnet, so very small contract balances will fail deployment.

The checked testnet path is the default counter scenario. Use sandbox for CI and local deterministic checks; use testnet only when external deployment behavior needs to be verified, and add a dedicated testnet wrapper before depending on another scenario.
