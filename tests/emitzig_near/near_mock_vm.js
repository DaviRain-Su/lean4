const fs = require("fs");
const wasmPath = process.argv[2] ?? "/tmp/emitzig_near/CounterContractSDK.wasm";
const initialCount = process.argv[3] ?? "5";
let instance;
const storage = new Map();
const registers = new Map();
storage.set("count", Buffer.from(initialCount));

function dv() { return new DataView(instance.exports.memory.buffer); }
function regId(id) { return Number(id); }
function readMem(ptr, len) {
  if (typeof len === "bigint") len = Number(len);
  return Buffer.from(instance.exports.memory.buffer, Number(ptr), len).toString("utf8");
}
function writeMem(ptr, data) {
  const buf = Buffer.isBuffer(data) ? data : Buffer.from(data);
  const dst = new Uint8Array(instance.exports.memory.buffer, Number(ptr), buf.length);
  for (let i = 0; i < buf.length; i++) dst[i] = buf[i];
}
const env = {
  storage_read: (key_len, key_ptr, register_id) => {
    const key = readMem(key_ptr, key_len);
    console.error(`[storage_read] len=${key_len} key="${key}" hex=${Buffer.from(key).toString('hex')}`);
    if (storage.has(key)) { registers.set(regId(register_id), Buffer.from(storage.get(key))); return 1n; }
    // try trimming null
    const trimmed = key.replace(/\0.*$/,'');
    if (storage.has(trimmed)) { registers.set(regId(register_id), Buffer.from(storage.get(trimmed))); return 1n; }
    return 0n;
  },
  storage_write: (key_len, key_ptr, val_len, val_ptr, register_id) => {
    const key = readMem(key_ptr, key_len);
    const val = readMem(val_ptr, val_len);
    console.error(`[storage_write] key="${key}" hex=${Buffer.from(key).toString('hex')} val="${val}" hex=${Buffer.from(val).toString('hex')}`);
    storage.set(key, Buffer.from(val));
    return 0n;
  },
  register_len: (rid) => {
    const id = regId(rid);
    const d = registers.get(id);
    console.error(`[register_len] id=${id} len=${d ? d.length : "missing"}`);
    if (!d) return 0xffffffffffffffffn;
    return BigInt(d.length);
  },
  read_register: (rid, ptr) => {
    const id = regId(rid);
    const d = registers.get(id);
    console.error(`[read_register] id=${id} value="${d ? d.toString("utf8") : "missing"}"`);
    if(d) writeMem(ptr, d);
  },
  value_return: (len, ptr) => { console.log("RETURN:", readMem(ptr, len)); },
  log_utf8: (len, ptr) => { console.error("LOG:", readMem(ptr, len)); },
  panic: () => { console.error("PANIC"); process.exit(1); },
  panic_utf8: (len, ptr) => { console.error("PANIC:", readMem(ptr, len)); process.exit(1); },
  abort: () => { console.error("ABORT"); process.exit(1); },
  current_account_id: (r) => { registers.set(regId(r), Buffer.from("counter.testnet")); },
  predecessor_account_id: (r) => { registers.set(regId(r), Buffer.from("caller.testnet")); },
  signer_account_id: (r) => { registers.set(regId(r), Buffer.from("caller.testnet")); },
  signer_account_pk: (r) => { registers.set(regId(r), Buffer.alloc(32)); },
  input: (r) => { registers.set(regId(r), Buffer.alloc(0)); },
  block_index: () => BigInt(42), block_timestamp: () => BigInt(0), epoch_height: () => BigInt(1),
  storage_usage: () => BigInt(0), account_balance: (p) => { writeMem(p, Buffer.alloc(16)); },
  account_locked_balance: (p) => { writeMem(p, Buffer.alloc(16)); }, attached_deposit: (p) => { writeMem(p, Buffer.alloc(16)); },
  prepaid_gas: () => BigInt(0), used_gas: () => BigInt(0), random_seed: (r) => { registers.set(regId(r), Buffer.alloc(32)); },
  sha256: (vl,vp,r) => { registers.set(regId(r), Buffer.alloc(32)); }, keccak256: (vl,vp,r) => { registers.set(regId(r), Buffer.alloc(32)); },
  keccak512: (vl,vp,r) => { registers.set(regId(r), Buffer.alloc(64)); }, ripemd160: (vl,vp,r) => { registers.set(regId(r), Buffer.alloc(20)); },
  ed25519_verify: () => 0n, ecrecover: (hl,hp,sl,sp,v,r) => { registers.set(regId(r), Buffer.alloc(0)); return 0n; },
  storage_has_key: (kl,kp) => { return storage.has(readMem(kp,kl)) ? 1n : 0n; },
  storage_remove: (kl,kp,r) => { const k=readMem(kp,kl); const h=storage.has(k); storage.delete(k); return h?1n:0n; },
  promise_create: () => 0n, promise_then: () => 0n, promise_and: () => 0n, promise_batch_create: () => 0n,
  promise_batch_then: () => {}, promise_batch_action_create_account: () => {}, promise_batch_action_deploy_contract: () => {},
  promise_batch_action_function_call: () => {}, promise_batch_action_function_call_weight: () => {}, promise_batch_action_transfer: () => {},
  promise_batch_action_stake: () => {}, promise_batch_action_add_key_with_full_access: () => {},
  promise_batch_action_add_key_with_function_call: () => {}, promise_batch_action_delete_key: () => {},
  promise_batch_action_delete_account: () => {}, promise_results_count: () => 0n, promise_result: () => 1n, promise_return: () => {},
};
const wasi = new Proxy({}, { get: (t,p) => (...a) => {
  if(p==="fd_write"){const[fd,iovs,n,nw]=a;let w=0;for(let i=0;i<n;i++){const ptr=dv().getUint32(iovs+i*8,true),len=dv().getUint32(iovs+i*8+4,true);const s=Buffer.from(instance.exports.memory.buffer,ptr,len).toString();process.stderr.write(s);w+=len}dv().setUint32(nw,w,true);return 0}
  if(p==="fd_fdstat_get"){new Uint8Array(instance.exports.memory.buffer, Number(a[1]), 24).fill(0);return 0}
  if(p==="proc_exit")process.exit(a[0]);
  if(p==="args_sizes_get"){dv().setUint32(a[0],0,true);dv().setUint32(a[1],0,true);return 0}
  if(p==="args_get")return 0;
  if(p==="environ_sizes_get"){dv().setUint32(a[0],0,true);dv().setUint32(a[1],0,true);return 0}
  if(p==="environ_get")return 0;
  if(p==="clock_time_get"){dv().setBigUint64(a[2],0n,true);return 0}
  if(p==="clock_res_get"){dv().setBigUint64(a[1],1n,true);return 0}
  if(p==="random_get")return 0;
  return 0;
}});
WebAssembly.instantiate(fs.readFileSync(wasmPath),{env,wasi_snapshot_preview1:wasi}).then(r=>{
  instance=r.instance;
  const entry = instance.exports._lean_main ?? instance.exports.main;
  console.error(`=== Calling ${entry === instance.exports._lean_main ? "_lean_main()" : "main(0, null)"} in ${wasmPath} ===`);
  const to=setTimeout(()=>{console.error("TIMEOUT");process.exit(1)},10000);
  try{const ret=entry === instance.exports._lean_main ? entry() : entry(0,null);clearTimeout(to);console.log("main returned:",ret);console.error("\n=== Final storage ===");for(const[k,v]of storage)console.error(`  "${k}"="${Buffer.isBuffer(v) ? v.toString("utf8") : String(v)}"`)}catch(e){clearTimeout(to);console.error("TRAP:",e.stack ?? e.message);process.exitCode=1}
}).catch(e=>{console.error("load:",e.message);process.exitCode=1});
