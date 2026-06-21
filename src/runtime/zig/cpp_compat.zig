// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! C++ mangled symbol shims for runtime internal functions.
//!
//! Provides lean:: symbols needed by libleancpp or other runtime files
//! that we want to remove. Each shim replaces a C++ source file.

const std = @import("std");
const c = @cImport({
    @cDefine("_GNU_SOURCE", "1");
    @cInclude("signal.h");
});

// ── hash_str (replaces hash.cpp) ─────────────────────────────────────────────
// lean::hash_str(size_t, unsigned char const*, uint64) → MurmurHash64A

fn murmur_hash_64a(key: [*]const u8, len: usize, seed: u64) u64 {
    const m: u64 = 0xc6a4a7935bd1e995;
    const r: u6 = 47;

    var h: u64 = seed ^ (len *% m);

    var data: [*]const u8 = key;
    const end: [*]const u8 = key + (len / 8) * 8;

    while (@intFromPtr(data) != @intFromPtr(end)) {
        var k: u64 = undefined;
        @memcpy(std.mem.asBytes(&k), data[0..8]);
        data += 8;

        k *%= m;
        k ^= k >> r;
        k *%= m;

        h ^= k;
        h *%= m;
    }

    const data2 = data;
    const rem = len & 7;
    switch (rem) {
        7 => h ^= @as(u64, data2[6]) << 48,
        6 => h ^= @as(u64, data2[5]) << 40,
        5 => h ^= @as(u64, data2[4]) << 32,
        4 => h ^= @as(u64, data2[3]) << 24,
        3 => h ^= @as(u64, data2[2]) << 16,
        2 => h ^= @as(u64, data2[1]) << 8,
        1 => {
            h ^= @as(u64, data2[0]);
            h *%= m;
        },
        else => {},
    }

    h ^= h >> r;
    h *%= m;
    h ^= h >> r;

    return h;
}

fn cpp_hash_str(len: usize, str: [*]const u8, init_value: u64) callconv(.c) u64 {
    return murmur_hash_64a(str, len, init_value);
}

// ── check_memory (replaces memory.cpp) ───────────────────────────────────────
// lean::check_memory(char const*) — no-op (memory checking is optional,
// and Zig runtime doesn't implement RSS-based memory limits)

fn cpp_check_memory(component_name: [*:0]const u8) callconv(.c) void {
    _ = component_name;
}
// ── stack_guard (replaces stack_overflow.cpp) ────────────────────────────────
// lean::stack_guard constructor and destructor.
// On macOS, the constructor allocates a signal stack via sigaltstack.
// The class has one member: stack_t (m_signal_stack).

fn cpp_stack_guard_ctor(this: *c.stack_t) callconv(.c) void {
    const buf = std.c.malloc(c.SIGSTKSZ) orelse {
        this.ss_sp = null;
        return;
    };
    this.ss_sp = buf;
    this.ss_size = c.SIGSTKSZ;
    this.ss_flags = 0;
    _ = c.sigaltstack(this, null);
}

fn cpp_stack_guard_dtor(this: *c.stack_t) callconv(.c) void {
    if (this.ss_sp == null) return;
    this.ss_flags = c.SS_DISABLE;
    _ = c.sigaltstack(this, null);
    if (this.ss_sp) |p| std.c.free(p);
}

// ── Exports ──────────────────────────────────────────────────────────────────

comptime {
    // hash_str
    @export(&cpp_hash_str, .{ .name = "_ZN4lean8hash_strEmPKhy", .linkage = .strong });
    // check_memory
    @export(&cpp_check_memory, .{ .name = "_ZN4lean12check_memoryEPKc", .linkage = .strong });
    // stack_guard constructor (complete object)
    @export(&cpp_stack_guard_ctor, .{ .name = "_ZN4lean11stack_guardC1Ev", .linkage = .strong });
    // stack_guard destructor (complete object)
    @export(&cpp_stack_guard_dtor, .{ .name = "_ZN4lean11stack_guardD1Ev", .linkage = .strong });
    // g_lean_report_task_get_blocked_time is provided by libleanrt_initial-exec.a
}