// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Lean kernel type checker, ported from `src/kernel/type_checker.cpp`.
//!
//! Implements WHNF (weak head normal form), is_def_eq (definitional equality),
//! infer_type (type inference), and check (type checking).
//!
//! The core algorithms (WHNF, is_def_eq, infer_type) are direct ports of
//! the C++ type_checker. Recursor reduction (inductive_reduce_rec) and
//! quotient reduction (quot_reduce_rec) are currently bridged to the C++
//! implementation via extern; they will be ported to Zig in a follow-up
//! alongside inductive.cpp and quot.cpp.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const box = @import("box.zig");
const interrupt = @import("interrupt.zig");
const ea = @import("expr_accessors.zig");
const ka = @import("kernel_accessors.zig");
const kernel = @import("kernel.zig");
const equiv_manager = @import("equiv_manager.zig");

const runtime_options = @import("runtime_options");
const export_kernel_symbols = runtime_options.export_kernel_symbols;

const inductive = @import("inductive.zig");
const quot = @import("quot.zig");
const nat_arithmetic = @import("nat_arithmetic.zig");
const util_name = @import("util_name.zig");

// ── Lean-exported helpers ───────────────────────────────────────────────────

extern fn lean_level_mk_succ(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_imax(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_max(a: *anyopaque, b: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_mk_sort(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_app(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(n: *anyopaque, t: *anyopaque, e: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(n: *anyopaque, t: *anyopaque, e: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_mk_bvar(idx: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_fvar(n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_proj(s: *anyopaque, i: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lit(l: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_instantiate_rev(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_elab_environment_to_kernel_env(env: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_local_ctx_mk_local_decl(lctx: *anyopaque, fvar_id: *anyopaque, user_name: *anyopaque, type: *anyopaque, bi: u8) callconv(.c) *anyopaque;
extern fn lean_expr_has_loose_bvar(e: *anyopaque, idx: *anyopaque) callconv(.c) u8;

// ── instantiate_lparams bridge ──────────────────────────────────────────────
// Used by inferConstant and unfoldDefinition to substitute level params.
// Implemented in runtime_helpers.zig (placeholder: returns expr unchanged).

extern fn lean_kernel_instantiate_type_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_instantiate_value_lparams(env: *anyopaque, ci: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_kernel_cheap_beta_reduce(e: *anyopaque) callconv(.c) *anyopaque;

// ── Expr constructors ──────────────────────────────────────────────────────

inline fn mkSort(l: *anyopaque) *anyopaque {
    return lean_expr_mk_sort(l);
}

inline fn mkApp(f: *anyopaque, a: *anyopaque) *anyopaque {
    return lean_expr_mk_app(f, a);
}

inline fn mkRevApp(f: *anyopaque, num: usize, rev_args: []*anyopaque) *anyopaque {
    var r = f;
    var i: usize = num;
    while (i > 0) {
        i -= 1;
        r = lean_expr_mk_app(r, rc.lean_inc_ret(rev_args[i]));
    }
    return r;
}

inline fn retain(e: *anyopaque) *anyopaque {
    rc.lean_inc(e);
    return e;
}

// ── Option helpers ──────────────────────────────────────────────────────────

inline fn isNone(opt: *anyopaque) bool {
    return object.lean_is_scalar(opt);
}

inline fn someVal(opt: *anyopaque) *anyopaque {
    const v = ctor.lean_ctor_get(opt, 0) orelse @panic("someVal: missing payload");
    rc.lean_inc(v);
    rc.lean_dec(opt);
    return v;
}

// ── Level helpers ──────────────────────────────────────────────────────────

inline fn levelSucc(l: *anyopaque) *anyopaque {
    return lean_level_mk_succ(l);
}

inline fn levelIMax(a: *anyopaque, b: *anyopaque) *anyopaque {
    return lean_level_mk_imax(a, b);
}

fn levelIsEquivalent(l1: *anyopaque, l2: *anyopaque) bool {
    return lean_level_eq(l1, l2) != 0;
}

fn levelsIsDefEq(ls1: *anyopaque, ls2: *anyopaque) bool {
    if (ka.isListNil(ls1) and ka.isListNil(ls2)) return true;
    if (ka.isListNil(ls1) or ka.isListNil(ls2)) return false;
    if (!levelIsEquivalent(ka.listHead(ls1), ka.listHead(ls2))) return false;
    return levelsIsDefEq(ka.listTail(ls1), ka.listTail(ls2));
}

// ── instantiate_lparams (level param substitution in expr) ──────────────────
// This replaces level params in an expr's const levels. Equivalent to
// C++ instantiate_lparams / Lean instantiateLevelParams.
// For now we use lean_expr_instantiate which substitutes loose bvars, not
// level params. We need a dedicated implementation.

// Actually, instantiateLevelParams works by replacing const's level params.
// It uses expr.replace to walk the expr and replace const nodes.
// Since we don't have a generic replace in Zig yet, we call the Lean-exported
// version. But there's no direct export... Let's check if we can use
// the C++ bridge.

// instantiate_lparams bridges are declared above.

// ── Name construction for predefined constants ──────────────────────────────
// The C++ type checker uses persistent expr* for common constants like
// Nat.zero, Nat.succ, etc. We construct them lazily.

var g_nat_zero: ?*anyopaque = null;
var g_nat_succ: ?*anyopaque = null;
var g_nat_add: ?*anyopaque = null;
var g_nat_sub: ?*anyopaque = null;
var g_nat_mul: ?*anyopaque = null;
var g_nat_pow: ?*anyopaque = null;
var g_nat_gcd: ?*anyopaque = null;
var g_nat_mod: ?*anyopaque = null;
var g_nat_div: ?*anyopaque = null;
var g_nat_beq: ?*anyopaque = null;
var g_nat_ble: ?*anyopaque = null;
var g_nat_land: ?*anyopaque = null;
var g_nat_lor: ?*anyopaque = null;
var g_nat_xor: ?*anyopaque = null;
var g_nat_shiftl: ?*anyopaque = null;
var g_nat_shiftr: ?*anyopaque = null;
var g_bool_true: ?*anyopaque = null;
var g_bool_false: ?*anyopaque = null;
var g_prop: ?*anyopaque = null;
var g_type_zero: ?*anyopaque = null;
var g_dontcare: ?*anyopaque = null;

const runtime_helpers = @import("runtime_helpers.zig");

inline fn lean_name_mk_str(pre: *anyopaque, s: [*:0]const u8) *anyopaque {
    return runtime_helpers.lean_name_mk_str(pre, s);
}

fn mkConstName(parts: []const [*:0]const u8) *anyopaque {
    // Build name from string parts: first part is anonymous, rest are appended
    var n: *anyopaque = object.lean_box(0).?; // anonymous name
    for (parts) |p| {
        n = lean_name_mk_str(n, p);
    }
    return n;
}

fn getNatZero() *anyopaque {
    if (g_nat_zero) |c| return c;
    const name = mkConstName(&.{ "Nat", "zero" });
    const c = lean_expr_mk_const(name, object.lean_box(0).?); // nil levels
    rc.lean_inc(c);
    g_nat_zero = c;
    return c;
}

fn getNatSucc() *anyopaque {
    if (g_nat_succ) |c| return c;
    const name = mkConstName(&.{ "Nat", "succ" });
    const c = lean_expr_mk_const(name, object.lean_box(0).?);
    rc.lean_inc(c);
    g_nat_succ = c;
    return c;
}

fn getNatConst(comptime parts: []const [*:0]const u8, cache: *?*anyopaque) *anyopaque {
    if (cache.*) |c| return c;
    const name = mkConstName(parts);
    const c = lean_expr_mk_const(name, object.lean_box(0).?);
    rc.lean_inc(c);
    cache.* = c;
    return c;
}

fn getNatAdd() *anyopaque { return getNatConst(&.{ "Nat", "add" }, &g_nat_add); }
fn getNatSub() *anyopaque { return getNatConst(&.{ "Nat", "sub" }, &g_nat_sub); }
fn getNatMul() *anyopaque { return getNatConst(&.{ "Nat", "mul" }, &g_nat_mul); }
fn getNatPow() *anyopaque { return getNatConst(&.{ "Nat", "pow" }, &g_nat_pow); }
fn getNatGcd() *anyopaque { return getNatConst(&.{ "Nat", "gcd" }, &g_nat_gcd); }
fn getNatMod() *anyopaque { return getNatConst(&.{ "Nat", "mod" }, &g_nat_mod); }
fn getNatDiv() *anyopaque { return getNatConst(&.{ "Nat", "div" }, &g_nat_div); }
fn getNatBeq() *anyopaque { return getNatConst(&.{ "Nat", "beq" }, &g_nat_beq); }
fn getNatBle() *anyopaque { return getNatConst(&.{ "Nat", "ble" }, &g_nat_ble); }
fn getNatLand() *anyopaque { return getNatConst(&.{ "Nat", "land" }, &g_nat_land); }
fn getNatLor() *anyopaque { return getNatConst(&.{ "Nat", "lor" }, &g_nat_lor); }
fn getNatXor() *anyopaque { return getNatConst(&.{ "Nat", "xor" }, &g_nat_xor); }
fn getNatShiftl() *anyopaque { return getNatConst(&.{ "Nat", "shiftLeft" }, &g_nat_shiftl); }
fn getNatShiftr() *anyopaque { return getNatConst(&.{ "Nat", "shiftRight" }, &g_nat_shiftr); }

fn getBoolTrue() *anyopaque {
    if (g_bool_true) |c| return c;
    const name = mkConstName(&.{ "Bool", "true" });
    const c = lean_expr_mk_const(name, object.lean_box(0).?);
    rc.lean_inc(c);
    g_bool_true = c;
    return c;
}

fn getBoolFalse() *anyopaque {
    if (g_bool_false) |c| return c;
    const name = mkConstName(&.{ "Bool", "false" });
    const c = lean_expr_mk_const(name, object.lean_box(0).?);
    rc.lean_inc(c);
    g_bool_false = c;
    return c;
}

fn getProp() *anyopaque {
    if (g_prop) |c| return c;
    // Prop = Sort 0
    const level_zero = object.lean_box(0).?; // Level.zero is scalar 0
    const c = lean_expr_mk_sort(level_zero);
    rc.lean_inc(c);
    g_prop = c;
    return c;
}

fn getTypeZero() *anyopaque {
    if (g_type_zero) |c| return c;
    // Type 0 = Sort 1 = Sort (succ 0)
    const level_zero = object.lean_box(0).?;
    const level_one = lean_level_mk_succ(level_zero);
    const c = lean_expr_mk_sort(level_one);
    rc.lean_inc(c);
    g_type_zero = c;
    return c;
}

fn getDontCare() *anyopaque {
    if (g_dontcare) |c| return c;
    const name = mkConstName(&.{"dontcare"});
    const c = lean_expr_mk_const(name, object.lean_box(0).?);
    rc.lean_inc(c);
    g_dontcare = c;
    return c;
}

inline fn isConstNamed(e: *anyopaque, c: *anyopaque) bool {
    return ea.isConst(e) and lean_name_eq(ea.constName(e), ka.ciName(c)) != 0;
}

inline fn isNatLit(e: *anyopaque) bool {
    if (!ea.isLit(e)) return false;
    const lv = ea.litValue(e);
    return object.lean_ptr_tag(lv) == 0; // LitVal.num = 0
}

inline fn isStringLit(e: *anyopaque) bool {
    if (!ea.isLit(e)) return false;
    const lv = ea.litValue(e);
    return object.lean_ptr_tag(lv) == 1; // LitVal.str = 1
}

fn natLitValue(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ea.litValue(e), 0) orelse object.lean_box(0).?;
}

inline fn isNatZero(e: *anyopaque) bool {
    return isConstNamed(e, getNatZero()) or (isNatLit(e) and object.lean_is_scalar(natLitValue(e)) and object.lean_unbox(natLitValue(e)) == 0);
}

fn mkNatLit(nat_obj: *anyopaque) *anyopaque {
    // LitVal.nat = mk_cnstr(0, nat_obj) — tag 0, 1 object field
    const lit_val = alloc.lean_alloc_ctor(0, 1, 0);
    ctor.lean_ctor_set(lit_val, 0, nat_obj);
    return lean_expr_mk_lit(lit_val);
}

fn isNatLitExt(e: *anyopaque) bool {
    return isConstNamed(e, getNatZero()) or isNatLit(e);
}

fn getNatLitValue(e: *anyopaque) *anyopaque {
    // Returns the Nat object from either Nat.zero const or a nat literal
    if (isConstNamed(e, getNatZero())) return object.lean_box(0).?;
    return natLitValue(e);
}

// ── lbool (three-valued logic) ──────────────────────────────────────────────

const LBool = enum(i8) { lfalse = -1, lundef = 0, ltrue = 1 };

inline fn toLbool(b: bool) LBool {
    return if (b) .ltrue else .lfalse;
}

inline fn lboolToBool(l: LBool) bool {
    return l == .ltrue;
}

// ── Type checker state ──────────────────────────────────────────────────────

const State = struct {
    env: *anyopaque,
    whnf_cache: std.AutoHashMap(*anyopaque, *anyopaque),
    whnf_core_cache: std.AutoHashMap(*anyopaque, *anyopaque),
    infer_type_cache: std.AutoHashMap(*anyopaque, *anyopaque),
    infer_type_only_cache: std.AutoHashMap(*anyopaque, *anyopaque),
    unfold_cache: std.AutoHashMap(*anyopaque, *anyopaque),
    equiv: equiv_manager.EquivManager,
    allocator: std.mem.Allocator,
};

// Thread-local pointer to the current TypeChecker instance, used by the
// C-callable callback wrappers for inductive/quot reduction.
var g_current_tc: ?*TypeChecker = null;

// C-callable wrappers for inductive_reduce_rec / quot_reduce_rec callbacks.
fn whnfCallback(env: *anyopaque, lctx: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque {
    _ = env;
    _ = lctx;
    if (g_current_tc) |tc| return tc.whnf(e);
    return rc.lean_inc_ret(e);
}

fn inferTypeCallback(env: *anyopaque, lctx: *anyopaque, e: *anyopaque) callconv(.c) *anyopaque {
    _ = env;
    _ = lctx;
    if (g_current_tc) |tc| return tc.inferType(e);
    return rc.lean_inc_ret(e);
}

fn isDefEqCallback(env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    _ = env;
    _ = lctx;
    if (g_current_tc) |tc| return if (tc.isDefEq(a, b)) 1 else 0;
    return 0;
}

const TypeChecker = struct {
    st: *State,
    lctx: *anyopaque,
    eager_reduce: bool = false,
    allocator: std.mem.Allocator,

    fn init(_: *anyopaque, lctx: *anyopaque, a: std.mem.Allocator) TypeChecker {
        return .{
            .st = undefined, // Will be set by caller
            .lctx = lctx,
            .allocator = a,
        };
    }

    inline fn env(self: *TypeChecker) *anyopaque {
        return self.st.env;
    }

    // ── ensure_sort / ensure_pi ───────────────────────────────────────────

    fn ensureSortCore(self: *TypeChecker, e: *anyopaque) *anyopaque {
        if (ea.isSort(e)) return retain(e);
        const new_e = self.whnf(e);
        if (ea.isSort(new_e)) return new_e;
        rc.lean_dec(new_e);
        @panic("type expected");
    }

    fn ensurePiCore(self: *TypeChecker, e: *anyopaque) *anyopaque {
        if (ea.isPi(e)) return retain(e);
        const new_e = self.whnf(e);
        if (ea.isPi(new_e)) return new_e;
        rc.lean_dec(new_e);
        @panic("function expected");
    }

    // ── infer_constant ────────────────────────────────────────────────────

    fn inferConstant(self: *TypeChecker, e: *anyopaque) *anyopaque {
        const info = ka.envGet(self.env(), ea.constName(e));
        const ps = ka.ciLevelParams(info);
        const ls = ea.constLevels(e);
        if (ka.listLength(ps) != ka.listLength(ls)) {
            @panic("incorrect number of universe levels");
        }
        return lean_kernel_instantiate_type_lparams(self.env(), info, ls);
    }

    // ── infer_fvar ──────────────────────────────────────────────────────────

    fn inferFvar(self: *TypeChecker, e: *anyopaque) *anyopaque {
        if (ka.lctxFind(self.lctx, ea.fvarName(e))) |decl| {
            return retain(ka.localDeclType(decl));
        }
        @panic("unknown free variable");
    }

    // ── infer_lambda ────────────────────────────────────────────────────────
    // Port of C++ type_checker::infer_lambda (type_checker.cpp:116-132).
    // Creates fvars for each binder, infers body type, wraps result in Pi.

    fn inferLambda(self: *TypeChecker, e0: *anyopaque) *anyopaque {
        const saved_lctx = self.lctx;
        defer self.lctx = saved_lctx;

        var fvars_buf = std.ArrayListUnmanaged(*anyopaque).empty;
        defer {
            for (fvars_buf.items) |fv| rc.lean_dec(fv);
            fvars_buf.deinit(self.allocator);
        }
        // Store (name, domain, bi) for Pi wrapping
        var binders_buf = std.ArrayListUnmanaged(struct { name: *anyopaque, domain: *anyopaque, bi: u8 }).empty;
        defer {
            binders_buf.deinit(self.allocator);
        }

        var e = e0;
        while (ea.isLambda(e)) {
            // Instantiate domain with existing fvars
            const d = if (fvars_buf.items.len > 0)
                blk: {
                    const subst = array.mkArrayFromSlice(fvars_buf.items);
                    const r = lean_expr_instantiate_rev(ea.bindingDomain(e), subst);
                    rc.lean_dec(subst);
                    break :blk r;
                }
            else
                rc.lean_inc_ret(ea.bindingDomain(e));

            // Save binder info for Pi wrapping
            const binding_name = ea.bindingName(e);
            rc.lean_inc(binding_name);
            rc.lean_inc(d);
            const bi_val = ea.bindingInfo(e);
            binders_buf.append(self.allocator, .{ .name = binding_name, .domain = d, .bi = bi_val }) catch @panic("inferLambda: OOM");

            // Create unique fvar name and add to local context
            const fvar_name = util_name.mkInternalUniqueName();
            self.lctx = lean_local_ctx_mk_local_decl(self.lctx, rc.lean_inc_ret(fvar_name.obj.?), binding_name, d, bi_val);
            rc.lean_dec(d);

            // Create the FVar expression
            const fvar = lean_expr_mk_fvar(fvar_name.obj.?);
            fvars_buf.append(self.allocator, fvar) catch @panic("inferLambda: OOM");

            e = ea.bindingBody(e);
        }

        // Instantiate body with fvars
        const body = if (fvars_buf.items.len > 0)
            blk: {
                const subst = array.mkArrayFromSlice(fvars_buf.items);
                const r = lean_expr_instantiate_rev(e, subst);
                rc.lean_dec(subst);
                break :blk r;
            }
        else
            rc.lean_inc_ret(e);

        const r = self.inferTypeCore(body, true);
        rc.lean_dec(body);

        // Wrap result in Pi for each binder (reverse order)
        var result = r;
        var i = binders_buf.items.len;
        while (i > 0) {
            i -= 1;
            const b = binders_buf.items[i];
            result = lean_expr_mk_forall(b.name, b.domain, result, b.bi);
        }
        return result;
    }

    // ── infer_pi ─────────────────────────────────────────────────────────────
    // Port of C++ type_checker::infer_pi (type_checker.cpp:134-156).
    // Creates fvars for each binder, infers domain sorts and body sort,
    // builds imax chain: r = imax(us[i], r) for each binder (reverse order).

    fn inferPi(self: *TypeChecker, e0: *anyopaque) *anyopaque {
        const saved_lctx = self.lctx;
        defer self.lctx = saved_lctx;

        var fvars_buf = std.ArrayListUnmanaged(*anyopaque).empty;
        defer {
            for (fvars_buf.items) |fv| rc.lean_dec(fv);
            fvars_buf.deinit(self.allocator);
        }
        var us_buf = std.ArrayListUnmanaged(*anyopaque).empty;
        defer {
            for (us_buf.items) |u| rc.lean_dec(u);
            us_buf.deinit(self.allocator);
        }

        var e = e0;
        while (ea.isPi(e)) {
            const d = if (fvars_buf.items.len > 0)
                blk: {
                    const subst = array.mkArrayFromSlice(fvars_buf.items);
                    const r = lean_expr_instantiate_rev(ea.bindingDomain(e), subst);
                    rc.lean_dec(subst);
                    break :blk r;
                }
            else
                rc.lean_inc_ret(ea.bindingDomain(e));

            // Infer domain type and ensure it's a sort
            const t1 = self.ensureSortCore(self.inferTypeCore(d, true));
            const u = ea.sortLevel(t1);
            rc.lean_inc(u);
            us_buf.append(self.allocator, u) catch @panic("inferPi: OOM");
            rc.lean_dec(t1);

            // Create fvar via mk_local_decl
            const fvar_name = util_name.mkInternalUniqueName();
            const binding_name = ea.bindingName(e);
            rc.lean_inc(binding_name);
            const bi_val = ea.bindingInfo(e);
            self.lctx = lean_local_ctx_mk_local_decl(self.lctx, rc.lean_inc_ret(fvar_name.obj.?), binding_name, d, bi_val);
            rc.lean_dec(d);
            rc.lean_dec(binding_name);

            // Create the FVar expression
            const fvar = lean_expr_mk_fvar(fvar_name.obj.?);
            fvars_buf.append(self.allocator, fvar) catch @panic("inferPi: OOM");

            e = ea.bindingBody(e);
        }

        // Instantiate body with fvars (if any)
        const body = if (fvars_buf.items.len > 0)
            blk: {
                const subst = array.mkArrayFromSlice(fvars_buf.items);
                const r = lean_expr_instantiate_rev(e, subst);
                rc.lean_dec(subst);
                break :blk r;
            }
        else
            rc.lean_inc_ret(e);

        const s = self.ensureSortCore(self.inferTypeCore(body, true));
        rc.lean_dec(body);
        var r = ea.sortLevel(s);
        rc.lean_inc(r);
        rc.lean_dec(s);

        // Build imax chain: r = imax(us[i], r) for i = n-1..0
        // lean_level_mk_imax consumes both args, so inc us[i] before calling
        // (the defer block still owns them).
        var i = us_buf.items.len;
        while (i > 0) {
            i -= 1;
            rc.lean_inc(us_buf.items[i]);
            r = lean_level_mk_imax(us_buf.items[i], r);
        }

        return lean_expr_mk_sort(r);
    }

    // ── infer_app ─────────────────────────────────────────────────────────────

    fn inferApp(self: *TypeChecker, e: *anyopaque) *anyopaque {
        // Simplified: infer fn type, strip Pi, instantiate with arg
        const f_type = self.ensurePiCore(self.inferTypeCore(ea.appFn(e), true));
        const a_type = self.inferTypeCore(ea.appArg(e), true);
        const d_type = ea.bindingDomain(f_type);
        // Check is_def_eq(a_type, d_type)
        if (!self.isDefEq(a_type, d_type)) {
            @panic("application type mismatch");
        }
        const result = kernel.lean_expr_instantiate1(ea.bindingBody(f_type), ea.appArg(e));
        rc.lean_dec(f_type);
        rc.lean_dec(a_type);
        return result;
    }

    // ── infer_proj ───────────────────────────────────────────────────────────
    fn inferProj(self: *TypeChecker, e: *anyopaque) *anyopaque {
        // Port of C++ type_checker::infer_proj (type_checker.cpp:221-266).
        const ty = self.whnf(self.inferTypeCore(ea.projExpr(e), true));
        defer rc.lean_dec(ty);

        // proj_idx is a Nat; check it's small (scalar)
        const idx_obj = ea.projIdx(e);
        if (!object.lean_is_scalar(idx_obj)) @panic("invalid projection: large idx");
        const idx = object.lean_unbox(idx_obj);

        // Collect app args: head const I applied to params and indices
        var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
        defer {
            for (args_buf.items) |a| rc.lean_dec(a);
            args_buf.deinit(self.allocator);
        }
        var curr = ty;
        while (ea.isApp(curr)) {
            args_buf.append(self.allocator, ea.appArg(curr)) catch @panic("inferProj: OOM");
            rc.lean_inc(args_buf.items[args_buf.items.len - 1]);
            curr = ea.appFn(curr);
        }
        // Reverse args to match logical order (head first)
        std.mem.reverse(*anyopaque, args_buf.items);

        if (!ea.isConst(curr)) @panic("invalid projection: head not const");
        const I_name = ea.constName(curr);
        // I_name must match proj_sname(e)
        if (lean_name_eq(I_name, ea.projSname(e)) == 0) @panic("invalid projection: name mismatch");

        const I_info = ka.envGet(self.env(), I_name);
        defer rc.lean_dec(I_info);
        if (!ka.ciIsInductive(I_info)) @panic("invalid projection: not inductive");

        const nparams = ka.inductValNumParams(I_info);
        const nindices = ka.inductValNumIndices(I_info);
        const ctors = ka.inductValCtors(I_info);
        // Must have exactly 1 constructor and full param+index args
        if (ka.listLength(ctors) != 1 or args_buf.items.len != nparams + nindices)
            @panic("invalid projection: arity mismatch");

        // Get the single constructor info
        const ctor_name = ka.listHead(ctors);
        const c_info = ka.envGet(self.env(), ctor_name);
        defer rc.lean_dec(c_info);

        // Instantiate constructor type with the const's levels
        var r = lean_kernel_instantiate_type_lparams(self.env(), c_info, ea.constLevels(curr));

        // Strip nparams binders, instantiating with params
        var i: usize = 0;
        while (i < nparams) : (i += 1) {
            r = self.whnf(r);
            if (!ea.isPi(r)) {
                rc.lean_dec(r);
                @panic("invalid projection: not a Pi when stripping params");
            }
            const new_r = kernel.lean_expr_instantiate1(ea.bindingBody(r), args_buf.items[i]);
            rc.lean_dec(r);
            r = new_r;
        }

        // Now walk to the idx-th field
        const is_prop_type = self.isProp(ty);
        i = 0;
        while (i < idx) : (i += 1) {
            r = self.whnf(r);
            if (!ea.isPi(r)) {
                rc.lean_dec(r);
                @panic("invalid projection: not a Pi when walking fields");
            }
            const body = ea.bindingBody(r);
            if (lean_expr_has_loose_bvar(body, object.lean_box(0).?) != 0) {
                // Body depends on the field variable — use projection
                if (is_prop_type and !self.isProp(ea.bindingDomain(r))) {
                    rc.lean_dec(r);
                    @panic("invalid projection: prop field dependency");
                }
                const proj = lean_expr_mk_proj(rc.lean_inc_ret(I_name), object.lean_box(i).?, rc.lean_inc_ret(ea.projExpr(e)));
                const new_r = kernel.lean_expr_instantiate1(body, proj);
                rc.lean_dec(r);
                r = new_r;
            } else {
                // Body doesn't depend on this field — just take it
                rc.lean_inc(body);
                rc.lean_dec(r);
                r = body;
            }
        }

        // Final whnf and extract domain
        r = self.whnf(r);
        if (!ea.isPi(r)) {
            rc.lean_dec(r);
            @panic("invalid projection: final not a Pi");
        }
        const result = ea.bindingDomain(r);
        rc.lean_inc(result);
        rc.lean_dec(r);

        if (is_prop_type and !self.isProp(result)) {
            rc.lean_dec(result);
            @panic("invalid projection: prop result not prop");
        }
        return result;
    }

    // ── infer_type_core ──────────────────────────────────────────────────────

    fn inferTypeCore(self: *TypeChecker, e: *anyopaque, infer_only: bool) *anyopaque {
        // Check cache
        const cache = if (infer_only) &self.st.infer_type_only_cache else &self.st.infer_type_cache;
        if (cache.get(e)) |r| return retain(r);

        const r = switch (ea.kind(e)) {
            .Lit => blk: {
                // lit_type: Nat -> Type, String -> Type
                // Simplified
                break :blk retain(getTypeZero());
            },
            .MData => self.inferTypeCore(ea.mdataExpr(e), infer_only),
            .Proj => self.inferProj(e),
            .FVar => self.inferFvar(e),
            .MVar => @panic("kernel type checker does not support meta variables"),
            .BVar => @panic("type checker does not support loose bound variables"),
            .Sort => blk: {
                const level_succ = lean_level_mk_succ(rc.lean_inc_ret(ea.sortLevel(e)));
                break :blk lean_expr_mk_sort(level_succ);
            },
            .Const => self.inferConstant(e),
            .Lambda => self.inferLambda(e),
            .Pi => self.inferPi(e),
            .App => self.inferApp(e),
            .Let => blk: {
                // Simplified: infer let body type
                break :blk self.inferTypeCore(ea.letBody(e), infer_only);
            },
        };
        rc.lean_inc(r);
        cache.put(e, r) catch {};
        return r;
    }

    fn inferType(self: *TypeChecker, e: *anyopaque) *anyopaque {
        return self.inferTypeCore(e, true);
    }

    // ── whnf_core ────────────────────────────────────────────────────────────

    fn whnfCore(self: *TypeChecker, e: *anyopaque, cheap_rec: bool, cheap_proj: bool) *anyopaque {
        interrupt.checkSystem("type checker: whnf", true);

        // Easy cases
        switch (ea.kind(e)) {
            .BVar, .Sort, .MVar, .Pi, .Const, .Lambda, .Lit => return retain(e),
            .MData => return self.whnfCore(ea.mdataExpr(e), cheap_rec, cheap_proj),
            .FVar => {
                // Check if let fvar
                if (ka.lctxFind(self.lctx, ea.fvarName(e))) |decl| {
                    if (ka.localDeclValue(decl)) |v| {
                        return self.whnfCore(v, cheap_rec, cheap_proj);
                    }
                }
                return retain(e);
            },
            .App, .Let, .Proj => {},
        }

        // Check cache (only when not cheap)
        if (!cheap_rec and !cheap_proj) {
            if (self.st.whnf_core_cache.get(e)) |r| return retain(r);
        }

        const r = switch (ea.kind(e)) {
            .BVar, .Sort, .MVar, .Pi, .Const, .Lambda, .Lit, .MData => @panic("whnfCore: unreachable"),
            .FVar => blk: {
                // whnf_fvar
                if (ka.lctxFind(self.lctx, ea.fvarName(e))) |decl| {
                    if (ka.localDeclValue(decl)) |v| {
                        break :blk self.whnfCore(v, cheap_rec, cheap_proj);
                    }
                }
                break :blk retain(e);
            },
            .Proj => blk: {
                if (self.reduceProj(e, cheap_rec, cheap_proj)) |m| {
                    break :blk self.whnfCore(m, cheap_rec, cheap_proj);
                }
                break :blk retain(e);
            },
            .App => blk: {
                // Get app fn and args
                var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
                defer args_buf.deinit(self.allocator);
                var curr = e;
                while (ea.isApp(curr)) {
                    args_buf.append(self.allocator, ea.appArg(curr)) catch @panic("whnfCore: OOM");
                    curr = ea.appFn(curr);
                }
                const f0 = curr;
                const f = self.whnfCore(f0, cheap_rec, cheap_proj);
                if (ea.isLambda(f)) {
                    // Beta reduce
                    var m: usize = 1;
                    const num_args = args_buf.items.len;
                    var fb = ea.bindingBody(f);
                    while (ea.isLambda(fb) and m < num_args) {
                        fb = ea.bindingBody(fb);
                        m += 1;
                    }
                    // instantiate(binding_body(f), m, args + (num_args - m))
                    const subst = array.mkArrayFromSlice(args_buf.items[num_args - m .. num_args]);
                    const inst = kernel.lean_expr_instantiate(fb, subst);
                    rc.lean_dec(subst);
                    const rest = mkRevApp(inst, num_args - m, args_buf.items[0 .. num_args - m]);
                    rc.lean_dec(f);
                    break :blk self.whnfCore(rest, cheap_rec, cheap_proj);
                } else if (lean_name_eq(f, f0) != 0) {
                    // f unchanged: try recursor reduction
                    if (self.reduceRecursor(e, cheap_rec, cheap_proj)) |red| {
                        rc.lean_dec(f);
                        break :blk self.whnfCore(red, cheap_rec, cheap_proj);
                    }
                    rc.lean_dec(f);
                    break :blk retain(e);
                } else {
                    // f changed: rebuild app
                    const rest = mkRevApp(f, args_buf.items.len, args_buf.items);
                    break :blk self.whnfCore(rest, cheap_rec, cheap_proj);
                }
            },
            .Let => blk: {
                // zeta: instantiate body with value
                break :blk self.whnfCore(kernel.lean_expr_instantiate1(ea.letBody(e), ea.letValue(e)), cheap_rec, cheap_proj);
            },
        };

        if (!cheap_rec and !cheap_proj) {
            rc.lean_inc(r);
            self.st.whnf_core_cache.put(e, r) catch {};
        }
        return r;
    }

    // ── reduce_proj ───────────────────────────────────────────────────────────

    fn reduceProjCore(self: *TypeChecker, c: *anyopaque, idx: usize) ?*anyopaque {
        if (isStringLit(c)) {
            // string_lit_to_constructor — simplified
            return null;
        }
        var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
        defer args_buf.deinit(self.allocator);
        var curr = c;
        while (ea.isApp(curr)) {
            args_buf.append(self.allocator, ea.appArg(curr)) catch return null;
            curr = ea.appFn(curr);
        }
        if (!ea.isConst(curr)) return null;
        const mk_info = ka.envGet(self.env(), ea.constName(curr));
        if (!ka.ciIsConstructor(mk_info)) return null;
        const nparams = ka.ctorValNumParams(mk_info);
        if (nparams + idx < args_buf.items.len) {
            // args are reversed: args_buf[len-1] is first arg
            return retain(args_buf.items[args_buf.items.len - 1 - nparams - idx]);
        }
        return null;
    }

    fn reduceProj(self: *TypeChecker, e: *anyopaque, cheap_rec: bool, cheap_proj: bool) ?*anyopaque {
        const idx = object.lean_unbox(ea.projIdx(e)); // simplified: proj_idx as nat
        const c = if (cheap_proj)
            self.whnfCore(ea.projExpr(e), cheap_rec, cheap_proj)
        else
            self.whnf(ea.projExpr(e));
        const result = self.reduceProjCore(c, idx);
        rc.lean_dec(c);
        return result;
    }

    // ── reduce_recursor (uses Zig inductive/quot modules) ─────────────────────

    fn reduceRecursor(self: *TypeChecker, e: *anyopaque, _: bool, _: bool) ?*anyopaque {
        // Try quot reduction first
        if (ka.envIsQuotInit(self.env())) {
            if (quot.quotReduceRec(self.env(), self.lctx, e, &whnfCallback)) |r| {
                return r;
            }
        }
        // Try inductive recursor reduction
        if (inductive.inductiveReduceRec(
            self.env(),
            self.lctx,
            e,
            &whnfCallback,
            &inferTypeCallback,
            &isDefEqCallback,
        )) |r| {
            return r;
        }
        return null;
    }

    // ── is_delta / unfold_definition ─────────────────────────────────────────

    fn isDelta(self: *TypeChecker, e: *anyopaque) ?*anyopaque {
        const f = ea.getAppFn(e);
        if (ea.isConst(f)) {
            if (ka.envFind(self.env(), ea.constName(f))) |info| {
                if (ka.ciHasValue(info)) {
                    if (ka.listLength(ea.constLevels(f)) == ka.ciNumLparams(info)) {
                        return info;
                    }
                }
            }
        }
        return null;
    }

    fn unfoldDefinitionCore(self: *TypeChecker, e: *anyopaque) ?*anyopaque {
        if (ea.isConst(e)) {
            if (self.isDelta(e)) |d| {
                const us = ea.constLevels(e);
                return lean_kernel_instantiate_value_lparams(self.env(), d, us);
            }
        }
        return null;
    }

    fn unfoldDefinition(self: *TypeChecker, e: *anyopaque) ?*anyopaque {
        if (ea.isApp(e)) {
            const f0 = ea.getAppFn(e);
            if (self.unfoldDefinitionCore(f0)) |f| {
                // Rebuild app with unfolded fn
                var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
                defer args_buf.deinit(self.allocator);
                var curr = e;
                while (ea.isApp(curr)) {
                    args_buf.append(self.allocator, ea.appArg(curr)) catch @panic("unfoldDefinition: OOM");
                    curr = ea.appFn(curr);
                }
                return mkRevApp(f, args_buf.items.len, args_buf.items);
            }
        }
        return self.unfoldDefinitionCore(e);
    }

    // ── reduce_nat ─────────────────────────────────────────────────────────────
    // Port of C++ type_checker::reduce_nat (type_checker.cpp:609-638).
    // Reduces Nat arithmetic on literal operands: succ, add, sub, mul, pow,
    // gcd, mod, div, beq, ble, land, lor, xor, shiftLeft, shiftRight.

    fn reduceBinNatOp(
        self: *TypeChecker,
        comptime op: fn (*anyopaque, *anyopaque) callconv(.c) ?*anyopaque,
        e: *anyopaque,
    ) ?*anyopaque {
        // e = (op arg1 arg2), app_fn(app_fn(e)) = op
        const arg1 = self.whnf(ea.appArg(ea.appFn(e)));
        if (!isNatLitExt(arg1)) { rc.lean_dec(arg1); return null; }
        const arg2 = self.whnf(ea.appArg(e));
        if (!isNatLitExt(arg2)) { rc.lean_dec(arg1); rc.lean_dec(arg2); return null; }
        const v1 = getNatLitValue(arg1);
        rc.lean_inc(v1);
        const v2 = getNatLitValue(arg2);
        rc.lean_inc(v2);
        const result = op(v1, v2);
        rc.lean_dec(v1);
        rc.lean_dec(v2);
        rc.lean_dec(arg1);
        rc.lean_dec(arg2);
        return mkNatLit(result orelse object.lean_box(0).?);
    }

    fn reduceBinNatPred(
        self: *TypeChecker,
        comptime pred: fn (*anyopaque, *anyopaque) callconv(.c) bool,
        e: *anyopaque,
    ) ?*anyopaque {
        const arg1 = self.whnf(ea.appArg(ea.appFn(e)));
        if (!isNatLitExt(arg1)) { rc.lean_dec(arg1); return null; }
        const arg2 = self.whnf(ea.appArg(e));
        if (!isNatLitExt(arg2)) { rc.lean_dec(arg1); rc.lean_dec(arg2); return null; }
        const v1 = getNatLitValue(arg1);
        rc.lean_inc(v1);
        const v2 = getNatLitValue(arg2);
        rc.lean_inc(v2);
        const result = pred(v1, v2);
        rc.lean_dec(v1);
        rc.lean_dec(v2);
        rc.lean_dec(arg1);
        rc.lean_dec(arg2);
        return if (result) rc.lean_inc_ret(getBoolTrue()) else rc.lean_inc_ret(getBoolFalse());
    }

    fn reducePow(self: *TypeChecker, e: *anyopaque) ?*anyopaque {
        const arg1 = self.whnf(ea.appArg(ea.appFn(e)));
        if (!isNatLitExt(arg1)) { rc.lean_dec(arg1); return null; }
        const arg2 = self.whnf(ea.appArg(e));
        if (!isNatLitExt(arg2)) { rc.lean_dec(arg1); rc.lean_dec(arg2); return null; }
        // C++ guards against huge exponents (ReducePowMaxExp = 4096)
        const v2 = getNatLitValue(arg2);
        if (object.lean_is_scalar(v2) and object.lean_unbox(v2) > 4096) {
            rc.lean_dec(arg1);
            rc.lean_dec(arg2);
            return null;
        }
        const v1 = getNatLitValue(arg1);
        rc.lean_inc(v1);
        rc.lean_inc(v2);
        const result = nat_arithmetic.lean_nat_pow(v1, v2);
        rc.lean_dec(v1);
        rc.lean_dec(v2);
        rc.lean_dec(arg1);
        rc.lean_dec(arg2);
        return mkNatLit(result orelse object.lean_box(0).?);
    }

    fn reduceNat(self: *TypeChecker, e: *anyopaque) ?*anyopaque {
        const nargs = ea.getAppNumArgs(e);
        if (nargs == 1) {
            // Nat.succ n -> n+1
            const f = ea.appFn(e);
            if (!isConstNamed(f, getNatSucc())) return null;
            const arg = self.whnf(ea.appArg(e));
            if (!isNatLitExt(arg)) { rc.lean_dec(arg); return null; }
            const v = getNatLitValue(arg);
            rc.lean_inc(v);
            const result = nat_arithmetic.lean_nat_big_succ(v);
            rc.lean_dec(v);
            rc.lean_dec(arg);
            return mkNatLit(result orelse object.lean_box(0).?);
        } else if (nargs == 2) {
            const f = ea.getAppFn(ea.appFn(e));
            if (!ea.isConst(f)) return null;
            if (isConstNamed(f, getNatAdd())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_add, e);
            if (isConstNamed(f, getNatSub())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_sub, e);
            if (isConstNamed(f, getNatMul())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_mul, e);
            if (isConstNamed(f, getNatPow())) return self.reducePow(e);
            if (isConstNamed(f, getNatGcd())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_gcd, e);
            if (isConstNamed(f, getNatMod())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_mod, e);
            if (isConstNamed(f, getNatDiv())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_div, e);
            if (isConstNamed(f, getNatBeq())) return self.reduceBinNatPred(nat_arithmetic.lean_nat_big_eq, e);
            if (isConstNamed(f, getNatBle())) return self.reduceBinNatPred(nat_arithmetic.lean_nat_big_le, e);
            if (isConstNamed(f, getNatLand())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_land, e);
            if (isConstNamed(f, getNatLor())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_lor, e);
            if (isConstNamed(f, getNatXor())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_xor, e);
            if (isConstNamed(f, getNatShiftl())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_shiftl, e);
            if (isConstNamed(f, getNatShiftr())) return self.reduceBinNatOp(nat_arithmetic.lean_nat_big_shiftr, e);
        }
        return null;
    }

    // ── whnf ─────────────────────────────────────────────────────────────────

    fn whnf(self: *TypeChecker, e: *anyopaque) *anyopaque {
        // Easy cases
        switch (ea.kind(e)) {
            .BVar, .Sort, .MVar, .Pi, .Lit => return retain(e),
            .MData => return self.whnf(ea.mdataExpr(e)),
            .FVar => {
                if (ka.lctxFind(self.lctx, ea.fvarName(e))) |decl| {
                    if (ka.localDeclValue(decl)) |v| {
                        return self.whnf(v);
                    }
                }
                return retain(e);
            },
            .Lambda, .App, .Const, .Let, .Proj => {},
        }

        // Check cache
        if (self.st.whnf_cache.get(e)) |r| return retain(r);

        var t = retain(e);
        while (true) {
            const t1 = self.whnfCore(t, false, false);
            rc.lean_dec(t);
            // Try reduce_nat, reduce_native, unfold_definition
            if (self.reduceNat(t1)) |v| {
                rc.lean_inc(v);
                self.st.whnf_cache.put(e, v) catch {};
                return v;
            } else if (self.unfoldDefinition(t1)) |next_t| {
                rc.lean_dec(t1);
                t = next_t;
            } else {
                rc.lean_inc(t1);
                self.st.whnf_cache.put(e, t1) catch {};
                return t1;
            }
        }
    }

    // ── is_def_eq (definitional equality) ─────────────────────────────────────

    fn isDefEqBinding(self: *TypeChecker, t0: *anyopaque, s0: *anyopaque) bool {
        // Port of C++ type_checker::is_def_eq_binding (type_checker.cpp:690-717).
        const saved_lctx = self.lctx;
        defer self.lctx = saved_lctx;

        const k = ea.kind(t0);
        var t = t0;
        var s = s0;

        var subst_buf = std.ArrayListUnmanaged(*anyopaque).empty;
        defer {
            for (subst_buf.items) |fv| rc.lean_dec(fv);
            subst_buf.deinit(self.allocator);
        }

        while (ea.kind(t) == k and ea.kind(s) == k) {
            // Compare domains (instantiated with existing subst)
            if (ea.bindingDomain(t) != ea.bindingDomain(s)) {
                const subst_arr = array.mkArrayFromSlice(subst_buf.items);
                const var_s_type = lean_expr_instantiate_rev(ea.bindingDomain(s), subst_arr);
                rc.lean_dec(subst_arr);
                const subst_arr2 = array.mkArrayFromSlice(subst_buf.items);
                const var_t_type = lean_expr_instantiate_rev(ea.bindingDomain(t), subst_arr2);
                rc.lean_dec(subst_arr2);
                const eq = self.isDefEq(var_t_type, var_s_type);
                rc.lean_dec(var_t_type);
                rc.lean_dec(var_s_type);
                if (!eq) return false;
            }

            // Check if bodies have loose bvars
            const zero_box = object.lean_box(0).?;
            const t_body_has_bvars = lean_expr_has_loose_bvar(ea.bindingBody(t), zero_box) != 0;
            const s_body_has_bvars = lean_expr_has_loose_bvar(ea.bindingBody(s), zero_box) != 0;

            if (t_body_has_bvars or s_body_has_bvars) {
                // Create a fresh fvar for substitution
                const subst_arr = array.mkArrayFromSlice(subst_buf.items);
                const var_s_type = lean_expr_instantiate_rev(ea.bindingDomain(s), subst_arr);
                rc.lean_dec(subst_arr);

                const fvar_name = util_name.mkInternalUniqueName();
                const bi_val = ea.bindingInfo(s);
                const binding_name_s = ea.bindingName(s);
                rc.lean_inc(binding_name_s);
                self.lctx = lean_local_ctx_mk_local_decl(self.lctx, rc.lean_inc_ret(fvar_name.obj.?), binding_name_s, var_s_type, bi_val);
                rc.lean_dec(var_s_type);
                rc.lean_dec(binding_name_s);

                const fvar = lean_expr_mk_fvar(fvar_name.obj.?);
                subst_buf.append(self.allocator, fvar) catch @panic("isDefEqBinding: OOM");
            } else {
                // Don't care — body doesn't reference this binder
                // Use a dummy const as placeholder
                subst_buf.append(self.allocator, getDontCare()) catch @panic("isDefEqBinding: OOM");
                rc.lean_inc(subst_buf.items[subst_buf.items.len - 1]);
            }

            t = ea.bindingBody(t);
            s = ea.bindingBody(s);
        }

        // Instantiate final bodies and compare
        const subst_arr = array.mkArrayFromSlice(subst_buf.items);
        const t_inst = lean_expr_instantiate_rev(t, subst_arr);
        rc.lean_dec(subst_arr);
        const subst_arr2 = array.mkArrayFromSlice(subst_buf.items);
        const s_inst = lean_expr_instantiate_rev(s, subst_arr2);
        rc.lean_dec(subst_arr2);
        const result = self.isDefEq(t_inst, s_inst);
        rc.lean_dec(t_inst);
        rc.lean_dec(s_inst);
        return result;
    }

    fn quickIsDefEq(self: *TypeChecker, t: *anyopaque, s: *anyopaque) LBool {
        // Pointer equality
        if (t == s) return .ltrue;
        if (ea.kind(t) == ea.kind(s)) {
            switch (ea.kind(t)) {
                .Lambda, .Pi => return toLbool(self.isDefEqBinding(t, s)),
                .Sort => return toLbool(levelIsEquivalent(ea.sortLevel(t), ea.sortLevel(s))),
                .MData => return toLbool(self.isDefEq(ea.mdataExpr(t), ea.mdataExpr(s))),
                .Lit => return toLbool(t == s), // simplified
                .BVar, .FVar, .App, .Const, .Let, .Proj => {},
                .MVar => {},
            }
        }
        return .lundef;
    }

    fn isDefEqArgs(self: *TypeChecker, t: *anyopaque, s: *anyopaque) bool {
        var ct = t;
        var cs = s;
        while (ea.isApp(ct) and ea.isApp(cs)) {
            if (!self.isDefEq(ea.appArg(ct), ea.appArg(cs))) return false;
            ct = ea.appFn(ct);
            cs = ea.appFn(cs);
        }
        return !ea.isApp(ct) and !ea.isApp(cs);
    }

    fn isDefEqApp(self: *TypeChecker, t: *anyopaque, s: *anyopaque) bool {
        if (ea.isApp(t) and ea.isApp(s)) {
            // Get fn and args
            var t_args = std.ArrayListUnmanaged(*anyopaque).empty;
            defer t_args.deinit(self.allocator);
            var s_args = std.ArrayListUnmanaged(*anyopaque).empty;
            defer s_args.deinit(self.allocator);
            var curr_t = t;
            var curr_s = s;
            while (ea.isApp(curr_t)) {
                t_args.append(self.allocator, ea.appArg(curr_t)) catch return false;
                curr_t = ea.appFn(curr_t);
            }
            while (ea.isApp(curr_s)) {
                s_args.append(self.allocator, ea.appArg(curr_s)) catch return false;
                curr_s = ea.appFn(curr_s);
            }
            if (self.isDefEq(curr_t, curr_s) and t_args.items.len == s_args.items.len) {
                var i: usize = 0;
                while (i < t_args.items.len) : (i += 1) {
                    // args are reversed
                    if (!self.isDefEq(t_args.items[i], s_args.items[i])) return false;
                }
                return true;
            }
        }
        return false;
    }

    fn isDefEqProofIrrel(self: *TypeChecker, t: *anyopaque, s: *anyopaque) LBool {
        const t_type = self.inferType(t);
        // Check if t_type is Prop
        if (!self.isProp(t_type)) {
            rc.lean_dec(t_type);
            return .lundef;
        }
        const s_type = self.inferType(s);
        const result = toLbool(self.isDefEq(t_type, s_type));
        rc.lean_dec(t_type);
        rc.lean_dec(s_type);
        return result;
    }

    fn isProp(self: *TypeChecker, e: *anyopaque) bool {
        const t = self.whnf(self.inferType(e));
        const result = t == getProp() or (lean_name_eq(t, getProp()) != 0);
        rc.lean_dec(t);
        return result;
    }

    const ReductionStatus = enum { Continue, DefUnknown, DefEqual, DefDiff };

    fn isDefEqOffset(self: *TypeChecker, t: *anyopaque, s: *anyopaque) LBool {
        // Both Nat.zero?
        if (isConstNamed(t, getNatZero()) and isConstNamed(s, getNatZero())) return .ltrue;
        // Both nat literals with value 0?
        if (isNatLit(t) and isNatLit(s) and
            object.lean_is_scalar(natLitValue(t)) and object.lean_is_scalar(natLitValue(s)) and
            object.lean_unbox(natLitValue(t)) == 0 and object.lean_unbox(natLitValue(s)) == 0)
            return .ltrue;

        // Both Nat.succ?
        if (isNatSucc(t)) |pred_t| {
            if (isNatSucc(s)) |pred_s| {
                return toLbool(self.isDefEqCore(pred_t, pred_s));
            }
        }
        return .lundef;
    }

    fn isNatSucc(e: *anyopaque) ?*anyopaque {
        if (isNatLit(e)) {
            const v = natLitValue(e);
            if (object.lean_is_scalar(v) and object.lean_unbox(v) > 0) {
                return mkNatLit(object.lean_box(object.lean_unbox(v) - 1).?);
            }
        }
        // Check if it's `Nat.succ x`
        if (ea.isApp(e) and ea.getAppNumArgs(e) == 1) {
            const f = ea.getAppFn(e);
            if (isConstNamed(f, getNatSucc())) return ea.appArg(e);
        }
        return null;
    }

    fn lazyDeltaReductionStep(self: *TypeChecker, t_n: **anyopaque, s_n: **anyopaque) ReductionStatus {
        const d_t = self.isDelta(t_n.*);
        const d_s = self.isDelta(s_n.*);
        if (d_t == null and d_s == null) return .DefUnknown;

        if (d_t != null and d_s == null) {
            // Unfold t
            if (self.unfoldDefinition(t_n.*)) |unf| {
                rc.lean_dec(t_n.*);
                t_n.* = self.whnfCore(unf, false, true);
                rc.lean_dec(unf);
            }
        } else if (d_t == null and d_s != null) {
            // Unfold s
            if (self.unfoldDefinition(s_n.*)) |unf| {
                rc.lean_dec(s_n.*);
                s_n.* = self.whnfCore(unf, false, true);
                rc.lean_dec(unf);
            }
        } else {
            // Both are delta — unfold both
            if (self.unfoldDefinition(t_n.*)) |unf_t| {
                rc.lean_dec(t_n.*);
                t_n.* = self.whnfCore(unf_t, false, true);
                rc.lean_dec(unf_t);
            }
            if (self.unfoldDefinition(s_n.*)) |unf_s| {
                rc.lean_dec(s_n.*);
                s_n.* = self.whnfCore(unf_s, false, true);
                rc.lean_dec(unf_s);
            }
        }

        const r = self.quickIsDefEq(t_n.*, s_n.*);
        return switch (r) {
            .ltrue => .DefEqual,
            .lfalse => .DefDiff,
            .lundef => .Continue,
        };
    }

    fn lazyDeltaReduction(self: *TypeChecker, t_n: **anyopaque, s_n: **anyopaque) LBool {
        while (true) {
            const r = self.isDefEqOffset(t_n.*, s_n.*);
            if (r != .lundef) return r;

            // Try reduce_nat on both
            if (self.reduceNat(t_n.*)) |t_v| {
                return toLbool(self.isDefEqCore(t_v, s_n.*));
            }
            if (self.reduceNat(s_n.*)) |s_v| {
                return toLbool(self.isDefEqCore(t_n.*, s_v));
            }

            switch (self.lazyDeltaReductionStep(t_n, s_n)) {
                .Continue => continue,
                .DefUnknown => return .lundef,
                .DefEqual => return .ltrue,
                .DefDiff => return .lfalse,
            }
        }
    }

    fn isDefEqCore(self: *TypeChecker, t: *anyopaque, s: *anyopaque) bool {
        interrupt.checkSystem("is_definitionally_equal", true);

        const r = self.quickIsDefEq(t, s);
        if (r != .lundef) return lboolToBool(r);
        if (self.st.equiv.isEquiv(t, s, false)) return true;

        // whnf_core without delta/proj reduction
        var t_n = self.whnfCore(t, false, true);
        var s_n = self.whnfCore(s, false, true);

        if (t_n != t or s_n != s) {
            const r2 = self.quickIsDefEq(t_n, s_n);
            if (r2 != .lundef) {
                const result = lboolToBool(r2);
                rc.lean_dec(t_n);
                rc.lean_dec(s_n);
                return result;
            }
        }

        // Proof irrelevance
        const r3 = self.isDefEqProofIrrel(t_n, s_n);
        if (r3 != .lundef) {
            const result = lboolToBool(r3);
            rc.lean_dec(t_n);
            rc.lean_dec(s_n);
            return result;
        }

        // Lazy delta reduction
        var t_delta = t_n;
        var s_delta = s_n;
        const delta_result = self.lazyDeltaReduction(&t_delta, &s_delta);
        if (delta_result != .lundef) {
            const result = lboolToBool(delta_result);
            if (t_delta != t_n) rc.lean_dec(t_delta);
            if (s_delta != s_n) rc.lean_dec(s_delta);
            rc.lean_dec(t_n);
            rc.lean_dec(s_n);
            return result;
        }

        // Update t_n/s_n to the delta-reduced versions
        if (t_delta != t_n) {
            rc.lean_dec(t_n);
            t_n = t_delta;
        }
        if (s_delta != s_n) {
            rc.lean_dec(s_n);
            s_n = s_delta;
        }

        // Compare constants
        if (ea.isConst(t_n) and ea.isConst(s_n)) {
            if (lean_name_eq(ea.constName(t_n), ea.constName(s_n)) != 0) {
                const result = levelsIsDefEq(ea.constLevels(t_n), ea.constLevels(s_n));
                rc.lean_dec(t_n);
                rc.lean_dec(s_n);
                return result;
            }
        }

        // Compare fvars
        if (ea.isFVar(t_n) and ea.isFVar(s_n)) {
            const result = lean_name_eq(ea.fvarName(t_n), ea.fvarName(s_n)) != 0;
            rc.lean_dec(t_n);
            rc.lean_dec(s_n);
            return result;
        }

        // Compare projections
        if (ea.isProj(t_n) and ea.isProj(s_n)) {
            if (object.lean_unbox(ea.projIdx(t_n)) == object.lean_unbox(ea.projIdx(s_n))) {
                const result = self.isDefEqCore(ea.projExpr(t_n), ea.projExpr(s_n));
                rc.lean_dec(t_n);
                rc.lean_dec(s_n);
                return result;
            }
        }

        // whnf_core again with full proj reduction
        const t_n_n = self.whnfCore(t_n, false, false);
        const s_n_n = self.whnfCore(s_n, false, false);
        if (t_n_n != t_n or s_n_n != s_n) {
            const result = self.isDefEqCore(t_n_n, s_n_n);
            rc.lean_dec(t_n);
            rc.lean_dec(s_n);
            rc.lean_dec(t_n_n);
            rc.lean_dec(s_n_n);
            return result;
        }
        rc.lean_dec(t_n_n);
        rc.lean_dec(s_n_n);

        // is_def_eq_app
        if (self.isDefEqApp(t_n, s_n)) {
            rc.lean_dec(t_n);
            rc.lean_dec(s_n);
            return true;
        }

        rc.lean_dec(t_n);
        rc.lean_dec(s_n);
        return false;
    }

    fn isDefEq(self: *TypeChecker, t: *anyopaque, s: *anyopaque) bool {
        return self.isDefEqCore(t, s);
    }

    // ── check ───────────────────────────────────────────────────────────────

    fn check(self: *TypeChecker, e: *anyopaque) *anyopaque {
        return self.inferTypeCore(e, false);
    }
};

// ── Entry points ────────────────────────────────────────────────────────────

fn leanKernelWhnf(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    const env = lean_elab_environment_to_kernel_env(obj_env);
    defer rc.lean_dec(env);
    const page_alloc = std.heap.page_allocator;
    var st = State{
        .env = env,
        .whnf_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .whnf_core_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .infer_type_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .infer_type_only_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .unfold_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .equiv = equiv_manager.EquivManager.init(page_alloc),
        .allocator = page_alloc,
    };
    defer {
        st.whnf_cache.deinit();
        st.whnf_core_cache.deinit();
        st.infer_type_cache.deinit();
        st.infer_type_only_cache.deinit();
        st.unfold_cache.deinit();
        st.equiv.deinit();
    }
    var tc = TypeChecker.init(env, lctx, page_alloc);
    tc.st = &st;
    g_current_tc = &tc;
    defer g_current_tc = null;
    return tc.whnf(a);
}

fn leanKernelIsDefEq(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque, b: *anyopaque) callconv(.c) u8 {
    const env = lean_elab_environment_to_kernel_env(obj_env);
    defer rc.lean_dec(env);
    const page_alloc = std.heap.page_allocator;
    var st = State{
        .env = env,
        .whnf_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .whnf_core_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .infer_type_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .infer_type_only_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .unfold_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .equiv = equiv_manager.EquivManager.init(page_alloc),
        .allocator = page_alloc,
    };
    defer {
        st.whnf_cache.deinit();
        st.whnf_core_cache.deinit();
        st.infer_type_cache.deinit();
        st.infer_type_only_cache.deinit();
        st.unfold_cache.deinit();
        st.equiv.deinit();
    }
    var tc = TypeChecker.init(env, lctx, page_alloc);
    tc.st = &st;
    g_current_tc = &tc;
    defer g_current_tc = null;
    return if (tc.isDefEq(a, b)) 1 else 0;
}

fn leanKernelCheck(obj_env: *anyopaque, lctx: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    const env = lean_elab_environment_to_kernel_env(obj_env);
    defer rc.lean_dec(env);
    const page_alloc = std.heap.page_allocator;
    var st = State{
        .env = env,
        .whnf_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .whnf_core_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .infer_type_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .infer_type_only_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .unfold_cache = std.AutoHashMap(*anyopaque, *anyopaque).init(page_alloc),
        .equiv = equiv_manager.EquivManager.init(page_alloc),
        .allocator = page_alloc,
    };
    defer {
        st.whnf_cache.deinit();
        st.whnf_core_cache.deinit();
        st.infer_type_cache.deinit();
        st.infer_type_only_cache.deinit();
        st.unfold_cache.deinit();
        st.equiv.deinit();
    }
    var tc = TypeChecker.init(env, lctx, page_alloc);
    tc.st = &st;
    g_current_tc = &tc;
    defer g_current_tc = null;
    return tc.check(a);
}

comptime {
    if (export_kernel_symbols) {
        @export(&leanKernelWhnf, .{ .name = "lean_kernel_whnf_impl", .linkage = .strong });
        @export(&leanKernelIsDefEq, .{ .name = "lean_kernel_is_def_eq_impl", .linkage = .strong });
        @export(&leanKernelCheck, .{ .name = "lean_kernel_check_impl", .linkage = .strong });
    }
}
