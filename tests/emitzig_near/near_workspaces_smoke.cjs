const assert = require("node:assert/strict");
const fs = require("node:fs");
const os = require("node:os");
const path = require("node:path");
const nearAPI = require("near-api-js");
const { Worker } = require("near-workspaces");

const wasmPath = process.argv[2];
if (!wasmPath) {
  console.error("usage: near_workspaces_smoke.cjs <contract.wasm>");
  process.exit(2);
}
if (!fs.existsSync(wasmPath)) {
  console.error(`WASM file not found: ${wasmPath}`);
  process.exit(2);
}

function numberResult(value) {
  if (typeof value === "number") return value;
  if (typeof value === "bigint") return Number(value);
  if (typeof value === "string") return Number(value);
  if (Buffer.isBuffer(value)) return Number(value.toString("utf8"));
  return Number(value);
}

function nearToYocto(value) {
  const text = String(value);
  const [whole, fraction = ""] = text.split(".");
  if (
    !/^\d+$/.test(whole) ||
    !/^\d*$/.test(fraction) ||
    fraction.length > 24 ||
    text.split(".").length > 2
  ) {
    throw new Error(`Invalid NEAR amount: ${text}`);
  }
  const paddedFraction = (fraction + "0".repeat(24)).slice(0, 24);
  return BigInt(whole) * 10n ** 24n + BigInt(paddedFraction || "0");
}

function rootAccountPrefix(value, masterAccount) {
  const suffix = `.${masterAccount}`;
  return value.endsWith(suffix) ? value.slice(0, -suffix.length) : value;
}

async function main() {
  const network = process.env.NEAR_WORKSPACES_NETWORK || "sandbox";
  const options = {};
  const deployOptions = {};
  if (network === "testnet") {
    const masterAccount =
      process.env.TESTNET_MASTER_ACCOUNT_ID ||
      process.env.NEAR_WORKSPACES_TESTNET_MASTER_ACCOUNT_ID;
    if (!masterAccount) {
      throw new Error("TESTNET_MASTER_ACCOUNT_ID is required for NEAR_WORKSPACES_NETWORK=testnet");
    }
    const credentialsDir =
      process.env.NEAR_CREDENTIALS_DIR ||
      path.join(os.homedir(), ".near-credentials");
    const credentialsFile = path.join(credentialsDir, "testnet", `${masterAccount}.json`);
    if (!fs.existsSync(credentialsFile)) {
      throw new Error(
        `Missing testnet credentials for ${masterAccount} at ${credentialsFile}. ` +
        `Create one with near-cli-rs using save-to-legacy-keychain, or set NEAR_CREDENTIALS_DIR.`
      );
    }
    options.network = "testnet";
    options.testnetMasterAccountId = masterAccount;
    options.rootAccountId = process.env.NEAR_WORKSPACES_ROOT_ACCOUNT_ID
      ? rootAccountPrefix(process.env.NEAR_WORKSPACES_ROOT_ACCOUNT_ID, masterAccount)
      : "r";
    options.keyStore = new nearAPI.keyStores.UnencryptedFileSystemKeyStore(credentialsDir);
    options.initialBalance = nearToYocto(
      process.env.NEAR_WORKSPACES_ROOT_INITIAL_BALANCE_NEAR || "4"
    );
    deployOptions.initialBalance = nearToYocto(
      process.env.NEAR_WORKSPACES_CONTRACT_INITIAL_BALANCE_NEAR || "2"
    );
  } else if (network !== "sandbox") {
    options.network = network;
  }

  const worker = await Worker.init(options);
  try {
    const root = worker.rootAccount;
    const contract =
      network === "testnet"
        ? await root.devCreateAccount(deployOptions)
        : await root.devDeploy(path.resolve(wasmPath), deployOptions);

    if (network === "testnet") {
      const deployResult = await contract.deploy(path.resolve(wasmPath));
      if (deployResult.Failure || deployResult.receiptFailures.length > 0) {
        throw new Error(`Deploy failed: ${JSON.stringify(deployResult.failures)}`);
      }
    }

    await root.call(contract, "init", {});
    const initial = await contract.view("get", {});
    assert.equal(numberResult(initial), 0);

    await root.call(contract, "increment", {});
    const afterIncrement = await contract.view("get", {});
    assert.equal(numberResult(afterIncrement), 1);

    console.log(JSON.stringify({
      ok: true,
      network,
      contractId: contract.accountId,
      initial: numberResult(initial),
      afterIncrement: numberResult(afterIncrement),
    }));
  } finally {
    await worker.tearDown();
  }
}

main().catch((error) => {
  console.error(error && error.stack ? error.stack : error);
  process.exit(1);
});
