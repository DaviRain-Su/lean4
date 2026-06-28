const assert = require("node:assert/strict");
const fs = require("node:fs");
const path = require("node:path");
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

async function main() {
  const network = process.env.NEAR_WORKSPACES_NETWORK || "sandbox";
  const options = {};
  if (network === "testnet") {
    const masterAccount =
      process.env.TESTNET_MASTER_ACCOUNT_ID ||
      process.env.NEAR_WORKSPACES_TESTNET_MASTER_ACCOUNT_ID;
    if (!masterAccount) {
      throw new Error("TESTNET_MASTER_ACCOUNT_ID is required for NEAR_WORKSPACES_NETWORK=testnet");
    }
    options.network = "testnet";
    options.testnetMasterAccountId = masterAccount;
  } else if (network !== "sandbox") {
    options.network = network;
  }

  const worker = await Worker.init(options);
  try {
    const root = worker.rootAccount;
    const contract = await root.devDeploy(path.resolve(wasmPath));

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
