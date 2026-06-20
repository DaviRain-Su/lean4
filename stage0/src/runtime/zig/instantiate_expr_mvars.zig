// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Expression metavariable instantiation, ported from
//! `src/library/instantiate_mvars.cpp`.
//!
//! Two-pass algorithm:
//!   Pass 1 (`instantiate_direct_fn`): resolves direct (non-delayed) mvar
//!     assignments with write-back, pre-normalizes delayed-assigned pending
//!     mvar values, and instantiates level mvars.
//!   Pass 2 (`instantiate_delayed_fn`): resolves delayed-assigned mvars with
//!     fused fvar substitution and scope-aware caching.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const ea = @import("expr_accessors.zig");
const kernel = @import("kernel.zig");
const instantiate_mvars = @import("instantiate_mvars.zig");

const runtime_options = @import("runtime_options");
const export_kernel_symbols = runtime_options.export_kernel_symbols;

// ── Lean-exported metavariable context helpers ──────────────────────────────

extern fn lean_get_mvar_assignment(mctx: *anyopaque, mvar_id: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_assign_mvar(mctx: *anyopaque, mvar_id: *anyopaque, val: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_get_delayed_mvar_assignment(mctx: *anyopaque, mvar_id: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_delayed_mvar_assignment_fvars(d: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_delayed_mvar_assignment_mvar_id_pending(d: *anyopaque) callconv(.c) *anyopaque;

// ── Expr constructors (Lean-exported) ───────────────────────────────────────

extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;

// ── Helpers ─────────────────────────────────────────────────────────────────

inline fn isNone(opt: *anyopaque) bool {
    return object.lean_is_scalar(opt);
}

inline fn someVal(opt: *anyopaque) *anyopaque {
    const v = ctor.lean_ctor_get(opt, 0) orelse @panic("someVal: missing payload");
    rc.lean_inc(v);
    rc.lean_dec(opt);
    return v;
}

inline fn retain(e: *anyopaque) *anyopaque {
    rc.lean_inc(e);
    return e;
}

// ── mk_rev_app: rebuild application spine from fn + reversed args ────────────

fn mkRevApp(f: *anyopaque, num_rev_args: usize, rev_args: []*anyopaque) *anyopaque {
    var r = f;
    var i: usize = 0;
    while (i < num_rev_args) : (i += 1) {
        r = lean_expr_mk_app(r, rev_args[i]);
    }
    return r;
}

// ── apply_beta: beta-reduce f applied to reversed args ───────────────────────
//
// Port of `apply_beta_rec` / `apply_beta` in `kernel/instantiate.cpp`.
// `rev_args` are in reverse order (last arg first).

extern fn lean_expr_instantiate(e: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;

fn applyBetaRec(e: *anyopaque, i: usize, num_rev_args: usize, rev_args: []*anyopaque, zeta: bool) *anyopaque {
    if (ea.isLambda(e)) {
        if (i + 1 < num_rev_args) {
            return applyBetaRec(ea.bindingBody(e), i + 1, num_rev_args, rev_args, zeta);
        } else {
            // instantiate(binding_body, num_rev_args, rev_args)
            return instantiateRevArgs(ea.bindingBody(e), num_rev_args, rev_args);
        }
    } else if (ea.isLet(e)) {
        if (zeta and i < num_rev_args) {
            // apply_beta_rec(instantiate(let_body, let_value), ...)
            const inst = kernel.lean_expr_instantiate1(ea.letBody(e), ea.letValue(e));
            return applyBetaRec(inst, i, num_rev_args, rev_args, zeta);
        } else {
            const n = num_rev_args - i;
            const inst = instantiateRange(e, i, num_rev_args, rev_args);
            return mkRevApp(inst, n, rev_args[0..n]);
        }
    } else if (ea.isMData(e)) {
        // preserve_data=false: strip mdata
        return applyBetaRec(ea.mdataExpr(e), i, num_rev_args, rev_args, zeta);
    } else {
        const n = num_rev_args - i;
        const inst = instantiateRange(e, i, num_rev_args, rev_args);
        return mkRevApp(inst, n, rev_args[0..n]);
    }
}

// Instantiate expression with reversed args (subst[0] replaces bvar 0, etc.)
fn instantiateRevArgs(e: *anyopaque, n: usize, rev_args: []*anyopaque) *anyopaque {
    // lean_expr_instantiate_rev takes an array object. We build a temp array.
    const arr = array.mkArrayFromSlice(rev_args[0..n]);
    const result = lean_expr_instantiate(e, arr);
    rc.lean_dec(arr);
    return result;
}

fn instantiateRange(e: *anyopaque, i: usize, num_rev_args: usize, rev_args: []*anyopaque) *anyopaque {
    // instantiate(e, i, rev_args + n) where n = num_rev_args - i
    const n = num_rev_args - i;
    const slice = rev_args[i .. i + n];
    return instantiateRevArgs(e, n, slice);
}

fn applyBeta(f: *anyopaque, num_rev_args: usize, rev_args: []*anyopaque) *anyopaque {
    if (num_rev_args == 0) return retain(f);
    return applyBetaRec(f, 0, num_rev_args, rev_args, true);
}

// ── Simple sharing cache (pointer-keyed, for pass 1) ─────────────────────────

const CacheEntry = struct { key: *anyopaque, value: *anyopaque };

const SimpleCache = struct {
    entries: std.ArrayListUnmanaged(CacheEntry) = .empty,
    allocator: std.mem.Allocator,

    fn init(a: std.mem.Allocator) SimpleCache {
        return .{ .allocator = a };
    }

    fn deinit(self: *SimpleCache) void {
        for (self.entries.items) |e| rc.lean_dec(e.value);
        self.entries.deinit(self.allocator);
    }

    fn find(self: *SimpleCache, key: *anyopaque) ?*anyopaque {
        for (self.entries.items) |e| {
            if (e.key == key) return e.value;
        }
        return null;
    }

    fn insert(self: *SimpleCache, key: *anyopaque, value: *anyopaque) void {
        rc.lean_inc(value);
        self.entries.append(self.allocator, .{ .key = key, .value = value }) catch
            @panic("SimpleCache: OOM");
    }
};

// ── Level mvar visitor (reuses instantiate_mvars.visitLevel) ─────────────────

extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_max(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_imax(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;

// ── levels (List Level) helpers ─────────────────────────────────────────────

inline fn isNil(o: *anyopaque) bool {
    return object.lean_is_scalar(o) and object.lean_unbox(o) == 0;
}

inline fn listHead(o: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(o, 0) orelse @panic("listHead: missing head");
}

inline fn listTail(o: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(o, 1) orelse @panic("listTail: missing tail");
}

fn mapLevelsReuse(ls: *anyopaque, mctx: *anyopaque, level_cache: *instantiate_mvars.SharingCache) *anyopaque {
    if (isNil(ls)) return retain(ls);
    const head = listHead(ls);
    const tail = listTail(ls);
    const new_head = instantiate_mvars.visitLevel(head, mctx, level_cache);
    const new_tail = mapLevelsReuse(tail, mctx, level_cache);
    if (head == new_head and tail == new_tail) {
        rc.lean_dec(new_head);
        rc.lean_dec(new_tail);
        return retain(ls);
    }
    // Build new cons: ctor 1, 2 fields (head, tail)
    const result = alloc.lean_alloc_ctor(1, 2, 0);
    ctor.lean_ctor_set(result, 0, new_head);
    ctor.lean_ctor_set(result, 1, new_tail);
    return result;
}

// ── Pass 1: instantiate_direct_fn ───────────────────────────────────────────
//
// Resolves direct mvar assignments with write-back, pre-normalizes delayed
// pending mvar values, instantiates level mvars.

const DirectVisitor = struct {
    mctx: *anyopaque,
    level_cache: instantiate_mvars.SharingCache,
    cache: SimpleCache,
    already_normalized: std.AutoHashMap(*anyopaque, void),
    has_updateable_delayed: bool = false,
    allocator: std.mem.Allocator,

    fn init(mctx: *anyopaque, a: std.mem.Allocator) DirectVisitor {
        return .{
            .mctx = mctx,
            .level_cache = instantiate_mvars.SharingCache.init(a),
            .cache = SimpleCache.init(a),
            .already_normalized = std.AutoHashMap(*anyopaque, void).init(a),
            .allocator = a,
        };
    }

    fn deinit(self: *DirectVisitor) void {
        self.level_cache.deinit();
        self.cache.deinit();
        self.already_normalized.deinit();
    }

    fn getAssignment(self: *DirectVisitor, mid: *anyopaque) ?*anyopaque {
        const opt = lean_get_mvar_assignment(self.mctx, mid);
        if (isNone(opt)) {
            rc.lean_dec(opt);
            return null;
        }
        const a = someVal(opt);
        // Check if already normalized or has no mvar
        if (!ea.hasExprMVar(a)) return a;
        if (self.already_normalized.contains(mid)) return a;
        self.already_normalized.put(mid, {}) catch {};
        const a_new = self.visit(a);
        if (a != a_new) {
            // Write back
            const new_mctx = lean_assign_mvar(self.mctx, mid, a_new);
            _ = new_mctx;
        } else {
            rc.lean_dec(a_new);
        }
        return a_new;
    }

    fn visitNonMVarApp(self: *DirectVisitor, e: *anyopaque) *anyopaque {
        const new_arg = self.visit(ea.appArg(e));
        const fn_expr = ea.appFn(e);
        const new_fn = if (ea.isApp(fn_expr))
            self.visitNonMVarApp(fn_expr)
        else
            self.visit(fn_expr);
        return ea.updateApp(e, new_fn, new_arg);
    }

    fn visitAppBeta(self: *DirectVisitor, f_new: *anyopaque, e: *anyopaque) *anyopaque {
        // Collect args (visiting each), then beta-reduce
        var args = std.ArrayListUnmanaged(*anyopaque).empty;
        defer args.deinit(self.allocator);
        var curr = e;
        while (ea.isApp(curr)) {
            const a = self.visit(ea.appArg(curr));
            args.append(self.allocator, a) catch @panic("visitAppBeta: OOM");
            curr = ea.appFn(curr);
        }
        // args are in reverse order (last arg first), which is what apply_beta expects
        return applyBeta(f_new, args.items.len, args.items);
    }

    fn visitApp(self: *DirectVisitor, e: *anyopaque) *anyopaque {
        const f = ea.getAppFn(e);
        if (!ea.isMVar(f)) {
            return self.visitNonMVarApp(e);
        }
        const mid = ea.mvarName(f);
        // Direct mvar assignment takes precedence
        if (self.getAssignment(mid)) |f_new| {
            return self.visitAppBeta(f_new, e);
        }
        // Check for delayed-assigned mvar
        const opt_d = lean_get_delayed_mvar_assignment(self.mctx, mid);
        if (!isNil(opt_d)) {
            if (!isNone(opt_d)) {
                const d = someVal(opt_d);
                const mid_pending = lean_delayed_mvar_assignment_mvar_id_pending(d);
                if (self.getAssignment(mid_pending) != null) {
                    self.has_updateable_delayed = true;
                }
                rc.lean_dec(d);
            } else {
                rc.lean_dec(opt_d);
            }
        } else {
            rc.lean_dec(opt_d);
        }
        // Unresolved mvar head: visit structurally
        return self.visitNonMVarApp(e);
    }

    fn visitMVar(self: *DirectVisitor, e: *anyopaque) *anyopaque {
        const mid = ea.mvarName(e);
        if (self.getAssignment(mid)) |r| {
            return r;
        }
        // Check delayed
        const opt_d = lean_get_delayed_mvar_assignment(self.mctx, mid);
        if (!isNil(opt_d) and !isNone(opt_d)) {
            const d = someVal(opt_d);
            const mid_pending = lean_delayed_mvar_assignment_mvar_id_pending(d);
            if (self.getAssignment(mid_pending) != null) {
                self.has_updateable_delayed = true;
            }
            rc.lean_dec(d);
        } else {
            rc.lean_dec(opt_d);
        }
        return retain(e);
    }

    fn visit(self: *DirectVisitor, e: *anyopaque) *anyopaque {
        if (!ea.hasExprMVar(e)) return retain(e);

        if (self.cache.find(e)) |cached| {
            return retain(cached);
        }

        const r = switch (ea.kind(e)) {
            .BVar, .Lit, .FVar => {
                // hasExprMVar is false for these, so unreachable
                @panic("instantiate_direct: unreachable kind");
            },
            .Sort => blk: {
                const new_l = instantiate_mvars.visitLevel(ea.sortLevel(e), self.mctx, &self.level_cache);
                const r = ea.updateSort(e, new_l);
                break :blk r;
            },
            .Const => blk: {
                const new_ls = mapLevelsReuse(ea.constLevels(e), self.mctx, &self.level_cache);
                const r = ea.updateConst(e, new_ls);
                break :blk r;
            },
            .MVar => self.visitMVar(e),
            .MData => blk: {
                const new_inner = self.visit(ea.mdataExpr(e));
                const r = ea.updateMData(e, new_inner);
                break :blk r;
            },
            .Proj => blk: {
                const new_inner = self.visit(ea.projExpr(e));
                const r = ea.updateProj(e, new_inner);
                break :blk r;
            },
            .App => self.visitApp(e),
            .Lambda, .Pi => blk: {
                const new_domain = self.visit(ea.bindingDomain(e));
                const new_body = self.visit(ea.bindingBody(e));
                const r = ea.updateBinding(e, new_domain, new_body);
                break :blk r;
            },
            .Let => blk: {
                const new_type = self.visit(ea.letType(e));
                const new_value = self.visit(ea.letValue(e));
                const new_body = self.visit(ea.letBody(e));
                const r = ea.updateLet(e, new_type, new_value, new_body);
                break :blk r;
            },
        };
        self.cache.insert(e, r);
        return r;
    }
};

// ── Pass 2: instantiate_delayed_fn ──────────────────────────────────────────
//
// Resolves delayed-assigned mvars with fused fvar substitution.
// This is the most complex part of the algorithm.

const FvarSubstEntry = struct {
    depth: u32,
    scope: u32,
    value: *anyopaque,
};

// Scope cache: a stack of (key → value) hashmaps with lazy invalidation.
// Simplified version: uses a single-level cache keyed by (ptr, depth).
// The full scope_cache with generation tracking is complex; this simplified
// version provides correct results but may miss some sharing opportunities.
const ScopeCache = struct {
    entries: std.ArrayListUnmanaged(ScopeEntry) = .empty,
    allocator: std.mem.Allocator,
    scope: u32 = 0,

    const ScopeEntry = struct {
        key: *anyopaque,
        depth: u32,
        value: *anyopaque,
        result_scope: u32,
    };

    fn init(a: std.mem.Allocator) ScopeCache {
        return .{ .allocator = a };
    }

    fn deinit(self: *ScopeCache) void {
        for (self.entries.items) |e| rc.lean_dec(e.value);
        self.entries.deinit(self.allocator);
    }

    fn push(self: *ScopeCache) void {
        self.scope += 1;
    }

    fn pop(self: *ScopeCache) void {
        self.scope -= 1;
        // Remove entries at scopes > current
        var i: usize = 0;
        while (i < self.entries.items.len) {
            if (self.entries.items[i].result_scope > self.scope) {
                rc.lean_dec(self.entries.items[i].value);
                _ = self.entries.orderedRemove(i);
            } else {
                i += 1;
            }
        }
    }

    fn lookup(self: *ScopeCache, key: *anyopaque, depth: u32) ?*anyopaque {
        for (self.entries.items) |e| {
            if (e.key == key and e.depth == depth and e.result_scope <= self.scope) {
                return e.value;
            }
        }
        return null;
    }

    fn insert(self: *ScopeCache, key: *anyopaque, depth: u32, value: *anyopaque, result_scope: u32) *anyopaque {
        // Check for existing entry with same result_scope for sharing
        for (self.entries.items) |e| {
            if (e.key == key and e.depth == depth and e.result_scope == result_scope) {
                return e.value;
            }
        }
        rc.lean_inc(value);
        self.entries.append(self.allocator, .{
            .key = key,
            .depth = depth,
            .value = value,
            .result_scope = result_scope,
        }) catch @panic("ScopeCache: OOM");
        return value;
    }
};

const DelayedVisitor = struct {
    mctx: *anyopaque,
    fvar_subst: std.AutoHashMap(*anyopaque, FvarSubstEntry),
    depth: u32 = 0,
    cache: ScopeCache,
    result_scope: u32 = 0,
    already_normalized: std.AutoHashMap(*anyopaque, void),
    resolvable_expr_cache: std.AutoHashMap(*anyopaque, bool),
    resolvable_pending_cache: std.AutoHashMap(*anyopaque, u8), // 0=in-progress, 1=yes, 2=no
    allocator: std.mem.Allocator,

    fn init(mctx: *anyopaque, a: std.mem.Allocator) DelayedVisitor {
        return .{
            .mctx = mctx,
            .fvar_subst = std.AutoHashMap(*anyopaque, FvarSubstEntry).init(a),
            .cache = ScopeCache.init(a),
            .already_normalized = std.AutoHashMap(*anyopaque, void).init(a),
            .resolvable_expr_cache = std.AutoHashMap(*anyopaque, bool).init(a),
            .resolvable_pending_cache = std.AutoHashMap(*anyopaque, u8).init(a),
            .allocator = a,
        };
    }

    fn deinit(self: *DelayedVisitor) void {
        self.fvar_subst.deinit();
        self.cache.deinit();
        self.already_normalized.deinit();
        self.resolvable_expr_cache.deinit();
        self.resolvable_pending_cache.deinit();
    }

    fn inOuterMode(self: *DelayedVisitor) bool {
        return self.fvar_subst.count() == 0;
    }

    // ── Resolvability checks ────────────────────────────────────────────────

    fn isResolvablePending(self: *DelayedVisitor, pending: *anyopaque) bool {
        if (self.resolvable_pending_cache.get(pending)) |v| {
            return v == 1;
        }
        self.resolvable_pending_cache.put(pending, 0) catch {}; // in-progress
        const opt_r = lean_get_mvar_assignment(self.mctx, pending);
        if (isNone(opt_r)) {
            rc.lean_dec(opt_r);
            self.resolvable_pending_cache.put(pending, 2) catch {};
            return false;
        }
        const val = someVal(opt_r);
        const ok = self.isResolvableExpr(val);
        self.resolvable_pending_cache.put(pending, if (ok) 1 else 2) catch {};
        rc.lean_dec(val);
        return ok;
    }

    fn isResolvableExpr(self: *DelayedVisitor, e: *anyopaque) bool {
        if (!ea.hasExprMVar(e)) return true;
        // No shared check for simplicity (correct but may be slower)
        return self.isResolvableExprCore(e);
    }

    fn isResolvableExprCore(self: *DelayedVisitor, e: *anyopaque) bool {
        return switch (ea.kind(e)) {
            .MVar => false,
            .App => blk: {
                const f = ea.getAppFn(e);
                if (ea.isMVar(f)) {
                    const mid = ea.mvarName(f);
                    const opt_d = lean_get_delayed_mvar_assignment(self.mctx, mid);
                    defer rc.lean_dec(opt_d);
                    if (isNil(opt_d) or isNone(opt_d)) break :blk false;
                    const d = ctor.lean_ctor_get(opt_d, 0) orelse break :blk false;
                    rc.lean_inc(d);
                    defer rc.lean_dec(d);
                    const fvars = lean_delayed_mvar_assignment_fvars(d);
                    const num_fvars = array.lean_array_size(fvars);
                    if (num_fvars > ea.getAppNumArgs(e)) break :blk false;
                    const mid_pending = lean_delayed_mvar_assignment_mvar_id_pending(d);
                    if (!self.isResolvablePending(mid_pending)) break :blk false;
                    // Check args
                    var curr = e;
                    while (ea.isApp(curr)) {
                        if (!self.isResolvableExpr(ea.appArg(curr))) break :blk false;
                        curr = ea.appFn(curr);
                    }
                    break :blk true;
                }
                break :blk self.isResolvableExpr(ea.appFn(e)) and self.isResolvableExpr(ea.appArg(e));
            },
            .Lambda, .Pi => blk: {
                break :blk self.isResolvableExpr(ea.bindingDomain(e)) and
                    self.isResolvableExpr(ea.bindingBody(e));
            },
            .Let => blk: {
                break :blk self.isResolvableExpr(ea.letType(e)) and
                    self.isResolvableExpr(ea.letValue(e)) and
                    self.isResolvableExpr(ea.letBody(e));
            },
            .MData => self.isResolvableExpr(ea.mdataExpr(e)),
            .Proj => self.isResolvableExpr(ea.projExpr(e)),
            else => true,
        };
    }

    // ── Fvar substitution ───────────────────────────────────────────────────

    fn lookupFvar(self: *DelayedVisitor, fid: *anyopaque) ?*anyopaque {
        if (self.fvar_subst.get(fid)) |entry| {
            if (entry.scope > self.result_scope) self.result_scope = entry.scope;
            const d = self.depth - entry.depth;
            if (d == 0) return retain(entry.value);
            const s_obj = object.lean_box(@as(usize, 0)) orelse return null;
            const d_obj = object.lean_box(d) orelse return null;
            return kernel.lean_expr_lift_loose_bvars(entry.value, s_obj, d_obj);
        }
        return null;
    }

    fn getAssignment(self: *DelayedVisitor, mid: *anyopaque) ?*anyopaque {
        const opt_r = lean_get_mvar_assignment(self.mctx, mid);
        if (isNone(opt_r)) {
            rc.lean_dec(opt_r);
            return null;
        }
        const a = someVal(opt_r);
        if (self.inOuterMode()) {
            if (self.already_normalized.contains(mid)) return a;
            self.already_normalized.put(mid, {}) catch {};
            const a_new = self.visit(a);
            if (a != a_new) {
                const new_mctx = lean_assign_mvar(self.mctx, mid, a_new);
                _ = new_mctx;
            } else {
                rc.lean_dec(a_new);
            }
            return a_new;
        } else {
            const a_new = self.visit(a);
            rc.lean_dec(a);
            return a_new;
        }
    }

    fn visitDelayed(self: *DelayedVisitor, fvars: *anyopaque, mid_pending: *anyopaque, e: *anyopaque) *anyopaque {
        // Collect args (visiting each)
        var args = std.ArrayListUnmanaged(*anyopaque).empty;
        defer args.deinit(self.allocator);
        var curr = e;
        while (ea.isApp(curr)) {
            const a = self.visit(ea.appArg(curr));
            args.append(self.allocator, a) catch @panic("visitDelayed: OOM");
            curr = ea.appFn(curr);
        }

        const fvar_count = array.lean_array_size(fvars);
        const extra_count = args.items.len - fvar_count;

        // Push new scope and extend fvar substitution
        self.cache.push();
        // Save old entries for restoration
        var saved = std.ArrayListUnmanaged(SavedEntry).empty;
        defer saved.deinit(self.allocator);
        var i: usize = 0;
        while (i < fvar_count) : (i += 1) {
            const fv = array.lean_array_uget(fvars, i) orelse continue;
            const fid = ea.fvarName(fv);
            const had_old = self.fvar_subst.get(fid);
            if (had_old) |old| {
                saved.append(self.allocator, .{ .key = fid, .had_old = true, .old = old }) catch {};
            } else {
                saved.append(self.allocator, .{ .key = fid, .had_old = false, .old = undefined }) catch {};
            }
            // args are reversed: args[len-1] is first arg, corresponds to fvars[0]
            const arg_idx = args.items.len - 1 - i;
            self.fvar_subst.put(fid, .{
                .depth = self.depth,
                .scope = self.cache.scope,
                .value = args.items[arg_idx],
            }) catch {};
        }

        // Get pending mvar's value (must be assigned, pass 1 normalized it)
        const opt_val = lean_get_mvar_assignment(self.mctx, mid_pending);
        const val = someVal(opt_val);
        const val_new = self.visit(val);
        rc.lean_dec(val);

        // Pop scope
        self.cache.pop();
        self.result_scope = @min(self.result_scope, self.cache.scope);

        // Restore fvar substitution
        for (saved.items) |se| {
            if (!se.had_old) {
                _ = self.fvar_subst.remove(se.key);
            } else {
                self.fvar_subst.put(se.key, se.old) catch {};
            }
        }

        // apply_beta with extra args
        return applyBeta(val_new, extra_count, args.items);
    }

    const SavedEntry = struct {
        key: *anyopaque,
        had_old: bool,
        old: FvarSubstEntry,
    };

    fn visitNonMVarApp(self: *DelayedVisitor, e: *anyopaque) *anyopaque {
        const new_arg = self.visit(ea.appArg(e));
        const fn_expr = ea.appFn(e);
        const new_fn = if (ea.isApp(fn_expr))
            self.visitNonMVarApp(fn_expr)
        else
            self.visit(fn_expr);
        return ea.updateApp(e, new_fn, new_arg);
    }

    fn visitApp(self: *DelayedVisitor, e: *anyopaque) *anyopaque {
        const f = ea.getAppFn(e);
        if (!ea.isMVar(f)) return self.visitNonMVarApp(e);
        const mid = ea.mvarName(f);
        // Direct mvar assignments resolved by pass 1
        const opt_d = lean_get_delayed_mvar_assignment(self.mctx, mid);
        if (isNil(opt_d) or isNone(opt_d)) {
            rc.lean_dec(opt_d);
            return self.visitNonMVarApp(e);
        }
        const d = someVal(opt_d);
        defer rc.lean_dec(d);
        const fvars = lean_delayed_mvar_assignment_fvars(d);
        const mid_pending = lean_delayed_mvar_assignment_mvar_id_pending(d);
        if (array.lean_array_size(fvars) > ea.getAppNumArgs(e)) {
            return self.visitNonMVarApp(e);
        }
        if (self.isResolvablePending(mid_pending)) {
            return self.visitDelayed(fvars, mid_pending, e);
        } else {
            // Non-resolvable: normalize pending for write-back (outer mode only)
            _ = self.getAssignment(mid_pending);
            return self.visitNonMVarApp(e);
        }
    }

    fn visitFVar(self: *DelayedVisitor, e: *anyopaque) *anyopaque {
        const fid = ea.fvarName(e);
        if (self.lookupFvar(fid)) |r| return r;
        return retain(e);
    }

    fn visit(self: *DelayedVisitor, e: *anyopaque) *anyopaque {
        // Early exit: no fvar (in inner mode) and no expr mvar
        if ((self.inOuterMode() or !ea.hasFVar(e)) and !ea.hasExprMVar(e)) {
            return retain(e);
        }

        const r = switch (ea.kind(e)) {
            .BVar, .Lit => @panic("instantiate_delayed: unreachable kind"),
            .FVar => self.visitFVar(e),
            .Sort, .Const => {
                // No fvars/mvars (caught by early exit), but keep for safety
                return retain(e);
            },
            .MVar => blk: {
                // Bare mvar in pass 2: unassigned direct mvar
                const mid = ea.mvarName(e);
                const opt = lean_get_mvar_assignment(self.mctx, mid);
                if (isNone(opt)) {
                    rc.lean_dec(opt);
                    break :blk retain(e);
                }
                rc.lean_dec(opt);
                // Should not happen; return as-is
                break :blk retain(e);
            },
            .MData => blk: {
                const new_inner = self.visit(ea.mdataExpr(e));
                break :blk ea.updateMData(e, new_inner);
            },
            .Proj => blk: {
                const new_inner = self.visit(ea.projExpr(e));
                break :blk ea.updateProj(e, new_inner);
            },
            .App => self.visitApp(e),
            .Lambda, .Pi => blk: {
                const new_domain = self.visit(ea.bindingDomain(e));
                self.depth += 1;
                const new_body = self.visit(ea.bindingBody(e));
                self.depth -= 1;
                break :blk ea.updateBinding(e, new_domain, new_body);
            },
            .Let => blk: {
                const new_type = self.visit(ea.letType(e));
                const new_value = self.visit(ea.letValue(e));
                self.depth += 1;
                const new_body = self.visit(ea.letBody(e));
                self.depth -= 1;
                break :blk ea.updateLet(e, new_type, new_value, new_body);
            },
        };
        return r;
    }
};

// ── Entry point: run_instantiate_all ────────────────────────────────────────

fn runInstantiateAll(m: *anyopaque, e: *anyopaque) *anyopaque {
    const a = std.heap.page_allocator;

    // Pass 1: instantiate direct mvars, pre-normalize delayed pending values
    var pass1 = DirectVisitor.init(m, a);
    defer pass1.deinit();
    const e1 = pass1.visit(e);

    // Pass 2: resolve delayed-assigned mvars (only if needed)
    var e2 = e1;
    if (pass1.has_updateable_delayed) {
        var pass2 = DelayedVisitor.init(m, a);
        defer pass2.deinit();
        e2 = pass2.visit(e1);
        if (e1 != e2) rc.lean_dec(e1);
    }

    // Build result tuple (mctx, expr) as ctor 0 with 2 obj fields
    const result = alloc.lean_alloc_ctor(0, 2, 0);
    rc.lean_inc(m);
    ctor.lean_ctor_set(result, 0, m);
    ctor.lean_ctor_set(result, 1, e2);
    return result;
}

fn lean_instantiate_expr_mvars(m: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque {
    return runInstantiateAll(m, e);
}

comptime {
    if (export_kernel_symbols) {
        @export(&lean_instantiate_expr_mvars, .{ .name = "lean_instantiate_expr_mvars", .linkage = .weak });
    }
}
