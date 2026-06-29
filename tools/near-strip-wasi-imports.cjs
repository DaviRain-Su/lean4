#!/usr/bin/env node
// Copyright (c) 2026 DaviRain. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const fs = require("node:fs");

const [inputPath, outputPath] = process.argv.slice(2);
if (!inputPath || !outputPath) {
  console.error("usage: near-strip-wasi-imports.cjs <input.wasm> <output.wasm>");
  process.exit(2);
}

function loadWabt() {
  try {
    return require("wabt");
  } catch (error) {
    throw new Error("Missing npm package 'wabt'. Install it or run tests/emitzig_near/run_workspaces_test.sh.");
  }
}

const features = {
  annotations: true,
  bulk_memory: true,
  code_metadata: true,
  exceptions: true,
  extended_const: true,
  function_references: true,
  gc: true,
  memory64: true,
  multi_memory: true,
  multi_value: true,
  mutable_globals: true,
  reference_types: true,
  relaxed_simd: true,
  sat_float_to_int: true,
  sign_extension: true,
  simd: true,
  tail_call: true,
  threads: true,
};

function errnoSuccess() {
  return ["i32.const 0"];
}

function errnoNoSys() {
  return ["i32.const 52"];
}

function storeI32(localIndex, value) {
  return [`local.get ${localIndex}`, `i32.const ${value}`, "i32.store"];
}

function storeI64(localIndex, value) {
  return [`local.get ${localIndex}`, `i64.const ${value}`, "i64.store"];
}

function zeroI64Range(localIndex, bytes) {
  const body = [];
  for (let offset = 0; offset < bytes; offset += 8) {
    body.push(`local.get ${localIndex}`);
    body.push("i64.const 0");
    body.push(offset === 0 ? "i64.store" : `i64.store offset=${offset}`);
  }
  return body;
}

function fillZeroByteRange(pointerLocal, lengthLocal) {
  return [
    "(local $i i32)",
    "i32.const 0",
    "local.set $i",
    "block $done",
    "loop $loop",
    "local.get $i",
    `local.get ${lengthLocal}`,
    "i32.ge_u",
    "br_if $done",
    `local.get ${pointerLocal}`,
    "local.get $i",
    "i32.add",
    "i32.const 0",
    "i32.store8",
    "local.get $i",
    "i32.const 1",
    "i32.add",
    "local.set $i",
    "br $loop",
    "end",
    "end",
  ];
}

function stubBody(name) {
  switch (name) {
    case "args_get":
    case "environ_get":
      return errnoSuccess();
    case "args_sizes_get":
    case "environ_sizes_get":
      return [...storeI32(0, 0), ...storeI32(1, 0), ...errnoSuccess()];
    case "clock_res_get":
      return [...storeI64(1, 1), ...errnoSuccess()];
    case "clock_time_get":
      return [...storeI64(2, 0), ...errnoSuccess()];
    case "fd_close":
    case "fd_sync":
      return errnoSuccess();
    case "fd_fdstat_get":
      return [...zeroI64Range(1, 24), ...errnoSuccess()];
    case "fd_filestat_get":
      return [...zeroI64Range(1, 64), ...errnoNoSys()];
    case "fd_filestat_set_size":
    case "fd_filestat_set_times":
    case "fd_prestat_get":
    case "fd_prestat_dir_name":
    case "path_create_directory":
    case "path_filestat_set_times":
    case "path_link":
    case "path_remove_directory":
    case "path_rename":
    case "path_symlink":
    case "path_unlink_file":
      return errnoNoSys();
    case "fd_pread":
    case "fd_pwrite":
    case "fd_readdir":
      return [...storeI32(4, 0), ...errnoNoSys()];
    case "fd_read":
    case "fd_write":
    case "poll_oneoff":
      return [...storeI32(3, 0), ...errnoSuccess()];
    case "fd_seek":
      return [...storeI64(3, 0), ...errnoSuccess()];
    case "path_filestat_get":
      return [...zeroI64Range(4, 64), ...errnoNoSys()];
    case "path_open":
      return [...storeI32(8, 0), ...errnoNoSys()];
    case "path_readlink":
      return [...storeI32(5, 0), ...errnoNoSys()];
    case "proc_exit":
      return ["unreachable"];
    case "random_get":
      return [...fillZeroByteRange(0, 1), ...errnoSuccess()];
    default:
      throw new Error(`Unsupported WASI import: ${name}`);
  }
}

function renderStub({ name, symbol, typeName }) {
  const body = stubBody(name);
  return [`  (func ${symbol} (type ${typeName})`, ...body.map((line) => `    ${line}`), "  )"].join("\n");
}

function forbiddenNearInstructions(wat) {
  return wat
    .split(/\r?\n/)
    .map((line) => line.trim())
    .filter((line) => /^(memory\.(copy|fill)|.*\.atomic\.|.*\.atomic$|.*sign_extend|v128\.|i8x16\.|i16x8\.|i32x4\.|i64x2\.|f32x4\.|f64x2\.)/.test(line));
}

(async () => {
  const wabt = await loadWabt()();
  const input = fs.readFileSync(inputPath);
  const wasmModule = wabt.readWasm(input, { readDebugNames: false, ...features });
  wasmModule.generateNames();
  wasmModule.applyNames();
  const wat = wasmModule.toText({ foldExprs: false, inlineExport: false });
  wasmModule.destroy();

  const stubs = [];
  const lines = [];
  const importPattern = /^(\s*)\(import "wasi_snapshot_preview1" "([^"]+)" \(func (\S+) \(type ([^)]+)\)\)\)$/;
  for (const line of wat.split(/\r?\n/)) {
    const match = importPattern.exec(line);
    if (!match) {
      lines.push(line);
      continue;
    }
    stubs.push(renderStub({ name: match[2], symbol: match[3], typeName: match[4] }));
  }

  if (stubs.length === 0) {
    fs.copyFileSync(inputPath, outputPath);
    return;
  }

  const lastImportIndex = lines.reduce((last, line, index) => (/^\s*\(import /.test(line) ? index : last), -1);
  if (lastImportIndex < 0) {
    throw new Error("Cannot insert WASI stubs: no remaining import declarations found");
  }
  lines.splice(lastImportIndex + 1, 0, ...stubs);

  // Remove _start export (NEAR view calls conflict with WASI _start entry point).
  // _start triggers Lean main() which panics on view calls.
  const exportLines = lines.filter((line) => /^\s*\(export "_start"/.test(line));
  for (let i = lines.length - 1; i >= 0; i--) {
    if (/^\s*\(export "_start"/.test(lines[i])) {
      lines.splice(i, 1);
      break;
    }
  }

  const strippedWat = lines.join("\n");
  const forbidden = forbiddenNearInstructions(strippedWat);
  if (forbidden.length !== 0) {
    throw new Error(
      `WASM contains NEAR-incompatible post-MVP instructions (${forbidden.slice(0, 8).join(", ")}). Rebuild the runtime and contract with WASM_CPU=mvp.`,
    );
  }

  const strippedModule = wabt.parseWat(`${outputPath}.wat`, strippedWat, features);
  const binary = strippedModule.toBinary({ log: false, write_debug_names: false });
  strippedModule.destroy();

  fs.writeFileSync(outputPath, Buffer.from(binary.buffer));
  const output = fs.readFileSync(outputPath);
  const remaining = WebAssembly.Module.imports(new WebAssembly.Module(output)).filter(
    (entry) => entry.module === "wasi_snapshot_preview1",
  );
  if (remaining.length !== 0) {
    throw new Error(`WASI imports still present: ${remaining.map((entry) => entry.name).join(", ")}`);
  }
  console.log(JSON.stringify({ input: inputPath, output: outputPath, strippedImports: stubs.length }));
})().catch((error) => {
  console.error(error && error.stack ? error.stack : error);
  process.exit(1);
});
