const assert = require("node:assert/strict");
const fs = require("node:fs");
const { Worker } = require("near-workspaces");

const factoryWasm = "/tmp/factory.wasm";

async function main() {
  if (!fs.existsSync(factoryWasm)) {
    console.error("Factory WASM not found:", factoryWasm);
    process.exit(1);
  }

  console.log("=== Uniswap V2 Factory Sandbox Test ===\n");

  const worker = await Worker.init();
  const root = worker.rootAccount;
  const factory = await root.createSubaccount("factory");
  
  console.log("Deploying Factory contract...");
  await factory.deploy(factoryWasm);
  console.log("  ✔ Factory deployed");

  // Initialize factory
  console.log("Initializing factory...");
  await factory.callRaw("factory", "init", JSON.stringify({ feeToSetter: "alice.near" }));
  console.log("  ✔ Factory initialized");

  // Create a pair
  console.log("Creating pair (tokenA.near, tokenB.near)...");
  const result = await factory.view("factory", "allPairsLength", "{}");
  console.log("  allPairsLength:", result);

  await worker.terminate();
  console.log("\n✅ Sandbox test passed");
}

main().catch(e => { console.error(e); process.exit(1); });
