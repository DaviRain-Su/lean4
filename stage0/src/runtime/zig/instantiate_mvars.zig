// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Metavariable instantiation ported from `src/library/instantiate_mvars.cpp`.
//!
//! Currently provides `lean_instantiate_level_mvars` (level metavariable
//! resolution with write-back and sharing cache). The expression metavariable
//! path (`lean_instantiate_expr_mvars`) remains C++-owned in the helperless
//! build until the full two-pass delayed-assignment algorithm is ported.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");

const runtime_options = @import("runtime_options");
const export_kernel_symbols = runtime_options.export_kernel_symbols;

// ── Lean-exported metavariable context helpers ──────────────────────────────

extern fn lean_get_lmvar_assignment(mctx: *anyopaque, mvar_id: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_assign_lmvar(mctx: *anyopaque, mvar_id: *anyopaque, val: *anyopaque) callconv(.c) *anyopaque;

// ── Level object accessors ───────────────────────────────────────────────────
//
// Level constructor tags (matching `src/kernel/level.h` / `Lean.Level`):
//   0 = zero (scalar), 1 = succ, 2 = max, 3 = imax, 4 = param, 5 = mvar
// The computed `data` field is stored as the first scalar field (index
// `num_objs`) and packs: bits 0-31 hash, bit 32 hasMVar, bit 33 hasParam,
// bits 40-63 depth.

inline fn levelKind(l: *anyopaque) u8 {
    if (object.lean_is_scalar(l)) return 0; // zero
    return object.lean_ptr_tag(l);
}

inline fn levelData(l: *anyopaque) u64 {
    if (object.lean_is_scalar(l)) return 2221; // zero's hash
    const num_objs = ctor.ctorNumObjs(l);
    return ctor.lean_ctor_get_usize(l, @intCast(num_objs));
}

inline fn levelHasMVar(l: *anyopaque) bool {
    return ((levelData(l) >> 32) & 1) == 1;
}

inline fn levelSuccOf(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("succ_of on malformed level");
}

inline fn levelLhs(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("level_lhs on malformed level");
}

inline fn levelRhs(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 1) orelse @panic("level_rhs on malformed level");
}

inline fn levelMvarId(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("mvar_id on malformed level");
}

// ── Level constructors (Lean-exported, provided by stdlib in helperless) ─────

extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_max(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_imax(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;

// ── Sharing cache ────────────────────────────────────────────────────────────
//
// Mirrors the C++ `lean::unordered_map<lean_object *, level>` used by
// `instantiate_lmvars_all_fn`. Keyed by raw object pointer; entries are
// kept alive by the cache for the duration of the pass.

const CacheEntry = struct { key: *anyopaque, value: *anyopaque };

pub const SharingCache = struct {
    entries: std.ArrayListUnmanaged(CacheEntry) = .empty,
    arena: std.heap.ArenaAllocator,

    pub fn init(allocator: std.mem.Allocator) SharingCache {
        return .{ .arena = std.heap.ArenaAllocator.init(allocator) };
    }

    pub fn deinit(self: *SharingCache) void {
        // Drop reference counts on cached values.
        for (self.entries.items) |e| rc.lean_dec(e.value);
        self.entries.deinit(self.arena.allocator());
        self.arena.deinit();
    }

    pub fn find(self: *SharingCache, key: *anyopaque) ?*anyopaque {
        for (self.entries.items) |e| {
            if (e.key == key) return e.value;
        }
        return null;
    }

    pub fn insert(self: *SharingCache, key: *anyopaque, value: *anyopaque) void {
        rc.lean_inc(value);
        self.entries.append(self.arena.allocator(), .{ .key = key, .value = value }) catch
            @panic("instantiate_lmvars: cache OOM");
    }
};

// ── Level metavariable instantiation ─────────────────────────────────────────
//
// Port of `instantiate_lmvars_all_fn` in `instantiate_mvars.cpp`. Recursively
// resolves level metavars: for each mvar, looks up its assignment; if the
// assignment itself contains mvars, recurses and writes back the normalized
// value. Sharing is preserved via a pointer-keyed cache.

pub fn visitLevel(l: *anyopaque, mctx_ptr: **anyopaque, cache: *SharingCache) *anyopaque {
    if (!levelHasMVar(l)) {
        rc.lean_inc(l);
        return l;
    }

    if (cache.find(l)) |cached| {
        rc.lean_inc(cached);
        return cached;
    }

    const kind = levelKind(l);
    switch (kind) {
        1 => {
            const child = levelSuccOf(l);
            const new_child = visitLevel(child, mctx_ptr, cache);
            const result = lean_level_mk_succ(new_child);
            cache.insert(l, result);
            return result;
        },
        2, 3 => {
            const lhs = levelLhs(l);
            const rhs = levelRhs(l);
            const new_lhs = visitLevel(lhs, mctx_ptr, cache);
            const new_rhs = visitLevel(rhs, mctx_ptr, cache);
            const result = if (kind == 2)
                lean_level_mk_max(new_lhs, new_rhs)
            else
                lean_level_mk_imax(new_lhs, new_rhs);
            cache.insert(l, result);
            return result;
        },
        5 => {
            const mid = levelMvarId(l);
            rc.lean_inc(mctx_ptr.*);
            rc.lean_inc(mid);
            const opt_val = lean_get_lmvar_assignment(mctx_ptr.*, mid);
            if (object.lean_is_scalar(opt_val)) {
                rc.lean_dec(opt_val);
                rc.lean_inc(l);
                return l;
            }
            const val = ctor.lean_ctor_get(opt_val, 0) orelse @panic("lean_get_lmvar_assignment: some missing payload");
            rc.lean_inc(val);
            rc.lean_dec(opt_val);
            if (!levelHasMVar(val)) {
                return val;
            }
            const new_val = visitLevel(val, mctx_ptr, cache);
            rc.lean_dec(val);
            rc.lean_inc(new_val);
            rc.lean_inc(mid);
            const new_mctx = lean_assign_lmvar(mctx_ptr.*, mid, new_val);
            mctx_ptr.* = new_mctx;
            return new_val;
        },
        else => {
            rc.lean_inc(l);
            return l;
        },
    }
}

fn lean_instantiate_level_mvars(m: *anyopaque, l: *anyopaque) callconv(.c) *anyopaque {
    var cache = SharingCache.init(std.heap.page_allocator);
    defer cache.deinit();
    var current_mctx: *anyopaque = m;
    const new_l = visitLevel(l, &current_mctx, &cache);
    rc.lean_dec(l);

    const result = alloc.lean_alloc_ctor(0, 2, 0);
    ctor.lean_ctor_set(result, 0, current_mctx);
    ctor.lean_ctor_set(result, 1, new_l);
    return result;
}

comptime {
    if (export_kernel_symbols) {
        @export(&lean_instantiate_level_mvars, .{ .name = "lean_instantiate_level_mvars", .linkage = .strong });
    }
}
