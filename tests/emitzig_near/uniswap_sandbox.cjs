const assert = require("node:assert/strict");
const fs = require("node:fs");
const path = require("node:path");
const { Worker } = require("near-workspaces");

const factoryWasm = "/tmp/factory.wasm";

function numberResult(value) {
  if (typeof value === "number") return value;
  if (typeof value === "bigint") return Number(value);
  if (typeof value === "string") return Number(value);
  if (Buffer.isBuffer(value)) return Number(value.toString("utf8"));
  return Number(value);
}

async function main() {
  if (!fs.existsSync(factoryWasm)) {
    console.error("Factory WASM not found:", factoryWasm);
    process.exit(1);
  }

  console.log("=== Uniswap V2 Factory Sandbox Test ===\n");

  const worker = await Worker.init();
  try {
    const root = worker.rootAccount;
    const factory = await root.devDeploy(path.resolve(factoryWasm));

    console.log("Deploying Factory contract...");
    console.log("  ✔ Factory deployed:", factory.accountId);

    console.log("Initializing factory...");
    await root.call(factory, "init", { feeToSetter: root.accountId });
    console.log("  ✔ Factory initialized");

    console.log("Checking allPairsLength...");
    const initialCount = await factory.view("allPairsLength", {});
    assert.equal(numberResult(initialCount), 0);
    console.log("  ✔ allPairsLength:", numberResult(initialCount));

    console.log("Setting pending token addresses...");
    await root.call(factory, "setTokenA", "token0.near");
    await root.call(factory, "setTokenB", "token1.near");
    console.log("  ✔ pending tokens set");

    console.log("Creating pair...");
    const pairAccount = await root.call(factory, "createPair", {});
    assert.ok(pairAccount);
    console.log("  ✔ pair account:", Buffer.isBuffer(pairAccount) ? pairAccount.toString("utf8") : String(pairAccount));

    const updatedCount = await factory.view("allPairsLength", {});
    assert.equal(numberResult(updatedCount), 1);
    console.log("  ✔ allPairsLength after createPair:", numberResult(updatedCount));
    console.log("\n✅ Sandbox test passed");
  } finally {
    await worker.tearDown();
  }
}

main().catch(e => { console.error(e && e.stack ? e.stack : e); process.exit(1); });
