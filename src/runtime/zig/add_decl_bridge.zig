// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Opaque bridge for lean_add_decl and lean_add_decl_without_checking.
//!
//! Compiled as a SEPARATE Zig module (not part of the ZCU) to prevent the ZCU
//! optimizer from seeing through the reference counting and eliminating
//! rc.lean_inc/lean_dec calls. The ZCU optimizer can inline ZCU functions
//! (lean_inc, lean_dec, lean_alloc_ctor, etc.) and reason about their effects,
//! even with @call(.never_inline). By moving the logic to this separate module,
//! the optimizer sees only opaque extern fn calls.
//!
//! Tags 0-4 (axiom, defn, theorem, opaque, quot): handled entirely in Zig
//! via lean_environment_add (Lean @[export] function).
//! Tag 5 (mutual definitions): iterated and each def added via lean_environment_add.
//! Tag 6 (inductive): still delegates to lean_cpp_environment_add_without_checking
//! (complex nested inductive processing not yet ported to Zig).

// All dependencies are extern fn — opaque to this module, resolved at link time.
extern fn lean_environment_add(env: *anyopaque, cinfo: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_cpp_environment_add_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_alloc_ctor(tag: c_uint, num_objs: c_uint, scalar_sz: c_uint) callconv(.c) *anyopaque;
extern fn lean_ctor_set(o: *anyopaque, i: c_uint, v: *anyopaque) callconv(.c) void;
extern fn lean_ctor_get(o: *anyopaque, i: c_uint) callconv(.c) ?*anyopaque;
extern fn lean_inc(o: ?*anyopaque) callconv(.c) void;
extern fn lean_dec(o: *anyopaque) callconv(.c) void;
extern fn lean_is_scalar(o: ?*anyopaque) callconv(.c) bool;
extern fn lean_ptr_tag(o: *anyopaque) callconv(.c) u8;
extern fn lean_box(n: u64) callconv(.c) *anyopaque;

// Lean @[export] expression builders
extern fn lean_level_mk_param(name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_zero(unit: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_sort(level: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(name: *anyopaque, levels: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_app(fn_expr: *anyopaque, arg: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(name: *anyopaque, domain: *anyopaque, body: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_bvar(idx: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mk_quot_val(name: *anyopaque, level_params: *anyopaque, type_expr: *anyopaque, kind: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_environment_quot_init(env: *anyopaque) callconv(.c) u8;
extern fn lean_environment_mark_quot_init(env: *anyopaque) callconv(.c) *anyopaque;

// Lean string and name builders
extern fn lean_mk_string(s: [*:0]const u8) callconv(.c) *anyopaque;
extern fn lean_name_mk_string(parent: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque;

// List cons (provided by Zig runtime_helpers.zig)
extern fn lean_list_cons(head: *anyopaque, tail: *anyopaque) callconv(.c) *anyopaque;

// ── Helpers ──────────────────────────────────────────────────────────────────

fn mkName(str: [*:0]const u8) *anyopaque {
    return lean_name_mk_string(lean_box(0), lean_mk_string(str));
}

fn mkName2(parent: [*:0]const u8, child: [*:0]const u8) *anyopaque {
    return lean_name_mk_string(mkName(parent), lean_mk_string(child));
}

fn mkArrow(domain: *anyopaque, codomain: *anyopaque) *anyopaque {
    // arrow a b = forall("_", a, b, default=0)
    return lean_expr_mk_forall(mkName("_"), domain, codomain, lean_box(0));
}

fn mkApp2(fn_expr: *anyopaque, a: *anyopaque, b: *anyopaque) *anyopaque {
    return lean_expr_mk_app(lean_expr_mk_app(fn_expr, a), b);
}

fn mkApp3(fn_expr: *anyopaque, a: *anyopaque, b: *anyopaque, c: *anyopaque) *anyopaque {
    return lean_expr_mk_app(mkApp2(fn_expr, a, b), c);
}

fn mkApp4(fn_expr: *anyopaque, a: *anyopaque, b: *anyopaque, c: *anyopaque, d: *anyopaque) *anyopaque {
    return lean_expr_mk_app(mkApp3(fn_expr, a, b, c), d);
}

fn bvar(idx: u64) *anyopaque {
    return lean_expr_mk_bvar(lean_box(idx));
}

fn levelParam(str: [*:0]const u8) *anyopaque {
    return lean_level_mk_param(mkName(str));
}

fn levelZero() *anyopaque {
    return lean_level_mk_zero(lean_box(0));
}

fn sortOf(level: *anyopaque) *anyopaque {
    return lean_expr_mk_sort(level);
}

fn constOf(name: *anyopaque, levels: *anyopaque) *anyopaque {
    return lean_expr_mk_const(name, levels);
}

fn listNil() *anyopaque {
    return lean_box(0);
}

fn list1(head: *anyopaque) *anyopaque {
    return lean_list_cons(head, listNil());
}

fn list2(head1: *anyopaque, head2: *anyopaque) *anyopaque {
    return lean_list_cons(head1, list1(head2));
}

fn mkQuotInfo(quot_val: *anyopaque) *anyopaque {
    // ConstantInfo.quotInfo = tag 4, 1 object field
    const result = lean_alloc_ctor(4, 1, 0);
    lean_ctor_set(result, 0, quot_val);
    return result;
}

fn mkQuotVal(name: *anyopaque, level_params: *anyopaque, type_expr: *anyopaque, kind: u8) *anyopaque {
    return lean_mk_quot_val(name, level_params, type_expr, lean_box(@as(u64, kind)));
}

// ── add_quot: generate Quot/Quot.mk/Quot.lift/Quot.ind constants ─────────────
//
// Mirrors C++ environment::add_quot() from src/kernel/quot.cpp.
// Builds the 4 quot constant types as Lean expression trees using de Bruijn
// indices, creates QuotVal + ConstantInfo.quotInfo for each, and adds them
// to the environment via lean_environment_add.

fn addQuot(env: *anyopaque) *anyopaque {
    // Skip if already initialized
    if (lean_environment_quot_init(env) != 0) {
        lean_inc(env);
        return env;
    }

    const u = levelParam("u");
    const sort_u = sortOf(u);
    const prop = sortOf(levelZero());

    // Names
    const quot_name = mkName("Quot");
    const quot_mk_name = mkName2("Quot", "mk");
    const quot_lift_name = mkName2("Quot", "lift");
    const quot_ind_name = mkName2("Quot", "ind");
    const eq_name = mkName("Eq");

    // Level lists
    const u_list = list1(u);                    // [u]
    const u_params = list1(mkName("u"));        // levelParams: [u]
    const uv_params = list2(mkName("u"), mkName("v")); // levelParams: [u, v]

    // ── Quot type: {α : Sort u} (r : α → α → Prop) → Sort u ──────────────
    // forall("α", implicit, Sort u,
    //   forall("r", default, arrow(α, arrow(α, Prop)), Sort u))
    // Under (α): α = bvar(0)
    //   arrow(α, arrow(α, Prop)) = forall("_", bvar(0), forall("_", bvar(1), Prop))
    const quot_type = blk: {
        const r_domain = mkArrow(bvar(0), mkArrow(bvar(1), prop)); // α → α → Prop (α = bvar(0))
        const inner = lean_expr_mk_forall(mkName("r"), r_domain, sort_u, lean_box(0)); // (r : ...) → Sort u
        break :blk lean_expr_mk_forall(mkName("α"), sort_u, inner, lean_box(1)); // {α : Sort u} → ...
    };

    // ── Quot.mk type: {α : Sort u} (r : α → α → Prop) (a : α) → @Quot.{u} α r ─
    // forall("α", implicit, Sort u,
    //   forall("r", default, arrow(α, arrow(α, Prop)),
    //     forall("a", default, α, App(App(Const(Quot, [u]), α), r))))
    // Under (α, r, a): α = bvar(2), r = bvar(1)
    const quot_mk_type = blk: {
        const r_domain = mkArrow(bvar(0), mkArrow(bvar(1), prop)); // same as above
        const quot_r = mkApp2(constOf(quot_name, u_list), bvar(2), bvar(1)); // @Quot.{u} α r
        const inner2 = lean_expr_mk_forall(mkName("a"), bvar(1), quot_r, lean_box(0)); // (a : α) → @Quot α r
        const inner1 = lean_expr_mk_forall(mkName("r"), r_domain, inner2, lean_box(0)); // (r : ...) → ...
        break :blk lean_expr_mk_forall(mkName("α"), sort_u, inner1, lean_box(1)); // {α : Sort u} → ...
    };

    // ── Quot.lift type ───────────────────────────────────────────────────
    // {α : Sort u} {r : α → α → Prop} {β : Sort v} (f : α → β) :
    //   (∀ a b : α, r a b → f a = f b) → @Quot.{u} α r → β
    //
    // forall("α", implicit, Sort u,
    //   forall("r", implicit, arrow(α, arrow(α, Prop)),
    //     forall("β", implicit, Sort v,
    //       forall("f", default, arrow(α, β),
    //         forall("_", default, sanity,
    //           forall("_", default, @Quot.{u} α r, β))))))
    //
    // Under (α, r, β, f): α=3, r=2, β=1, f=0
    // sanity = forall("a", α, forall("b", α, forall("_", r a b, Eq.{v} β (f a) (f b))))
    //   Under (α, r, β, f, a): α=4, r=3, f=1, a=0
    //   Under (α, r, β, f, a, b): α=5, r=4, f=2, a=1, b=0
    //   r a b = App(App(r, a), b) = App(App(bvar(4), bvar(1)), bvar(0))
    //   f a = App(f, a) = App(bvar(2), bvar(1))
    //   f b = App(f, b) = App(bvar(2), bvar(0))
    //   Eq.{v} β (f a) (f b) = App(App(App(Const(Eq, [v]), β), f a), f b)
    //     = App(App(App(Const(Eq, [v]), bvar(3)), App(bvar(2), bvar(1))), App(bvar(2), bvar(0)))
    // quot_r (under α, r, β, f) = App(App(Const(Quot, [u]), bvar(3)), bvar(2))
    // β (under α, r, β, f, sanity, quot_r) = bvar(3)
    const v = levelParam("v");
    const sort_v = sortOf(v);
    const v_list = list1(v);

    const quot_lift_type = blk: {
        // sanity: ∀ a b : α, r a b → f a = f b
        const r_a_b = mkApp2(bvar(4), bvar(1), bvar(0)); // under (α, r, β, f, a, b)
        const f_a = lean_expr_mk_app(bvar(2), bvar(1)); // f a
        const f_b = lean_expr_mk_app(bvar(2), bvar(0)); // f b
        const eq_f_a_f_b = mkApp3(constOf(eq_name, v_list), bvar(3), f_a, f_b); // Eq.{v} β (f a) (f b)
        const sanity_body = lean_expr_mk_forall(mkName("_"), r_a_b, eq_f_a_f_b, lean_box(0)); // r a b → f a = f b
        const sanity_b = lean_expr_mk_forall(mkName("b"), bvar(4), sanity_body, lean_box(0)); // ∀ b : α, ...
        const sanity = lean_expr_mk_forall(mkName("a"), bvar(3), sanity_b, lean_box(0)); // ∀ a : α, ...

        // Body: sanity → @Quot.{u} α r → β
        const quot_r = mkApp2(constOf(quot_name, u_list), bvar(3), bvar(2)); // under (α, r, β, f)
        const body2 = lean_expr_mk_forall(mkName("_"), quot_r, bvar(3), lean_box(0)); // @Quot α r → β (β=bvar(3) under 6 binders)
        const body1 = lean_expr_mk_forall(mkName("_"), sanity, body2, lean_box(0)); // sanity → ...

        // f : α → β
        // Under (α, r, β): α=2, r=1, β=0
        const f_type = mkArrow(bvar(2), bvar(0)); // α → β under (α, r, β)
        const forall_f = lean_expr_mk_forall(mkName("f"), f_type, body1, lean_box(0));

        // {β : Sort v}
        const forall_beta = lean_expr_mk_forall(mkName("β"), sort_v, forall_f, lean_box(1));

        // {r : α → α → Prop}
        const r_domain2 = mkArrow(bvar(0), mkArrow(bvar(1), prop)); // α → α → Prop (under α)
        const forall_r = lean_expr_mk_forall(mkName("r"), r_domain2, forall_beta, lean_box(1));

        // {α : Sort u}
        break :blk lean_expr_mk_forall(mkName("α"), sort_u, forall_r, lean_box(1));
    };

    // ── Quot.ind type ────────────────────────────────────────────────────
    // {α : Sort u} {r : α → α → Prop} {β : @Quot.{u} α r → Prop} :
    //   (∀ a : α, β (@Quot.mk.{u} α r a)) → ∀ q : @Quot.{u} α r, β q
    //
    // forall("α", implicit, Sort u,
    //   forall("r", implicit, arrow(α, arrow(α, Prop)),
    //     forall("β", implicit, arrow(@Quot.{u} α r, Prop),
    //       forall("mk", default, all_quot,
    //         forall("q", default, @Quot.{u} α r, App(β, q))))))
    //
    // Under (α, r, β): α=2, r=1, β=0
    // quot_r = App(App(Const(Quot, [u]), α), r) = App(App(Const(Quot, [u]), bvar(2)), bvar(1))
    // β_type = arrow(quot_r, Prop)
    // Under (α, r, β, a): α=3, r=2, β=1, a=0
    // quot_mk_a = App(App(App(Const(Quot.mk, [u]), α), r), a) = App(App(App(Const(Quot.mk, [u]), bvar(3)), bvar(2)), bvar(0))
    // all_quot = forall("a", α, App(β, quot_mk_a)) = forall("a", bvar(3), App(bvar(1), quot_mk_a))
    // Under (α, r, β, mk, q): α=4, r=3, β=2, q=0
    // β q = App(β, q) = App(bvar(2), bvar(0))
    // quot_r (under α, r, β, mk) = App(App(Const(Quot, [u]), bvar(3)), bvar(2))
    const quot_ind_type = blk: {
        // quot_r under (α, r, β): α=2, r=1
        const quot_r_3 = mkApp2(constOf(quot_name, u_list), bvar(2), bvar(1));
        const beta_type = mkArrow(quot_r_3, prop); // @Quot α r → Prop

        // Under (α, r, β, a): α=3, r=2, β=1, a=0
        const quot_mk_a = mkApp3(constOf(quot_mk_name, u_list), bvar(3), bvar(2), bvar(0));
        const beta_quot_mk_a = lean_expr_mk_app(bvar(1), quot_mk_a); // β (@Quot.mk α r a)
        const all_quot = lean_expr_mk_forall(mkName("a"), bvar(3), beta_quot_mk_a, lean_box(0)); // ∀ a : α, β (...)

        // Under (α, r, β, mk): α=3, r=2, β=1, mk=0
        // quot_r = App(App(Const(Quot, [u]), bvar(3)), bvar(2))
        const quot_r_4 = mkApp2(constOf(quot_name, u_list), bvar(3), bvar(2));
        // Under (α, r, β, mk, q): β=2, q=0
        const beta_q = lean_expr_mk_app(bvar(2), bvar(0)); // β q
        const forall_q = lean_expr_mk_forall(mkName("q"), quot_r_4, beta_q, lean_box(0)); // ∀ q : @Quot α r, β q
        const forall_mk2 = lean_expr_mk_forall(mkName("mk"), all_quot, forall_q, lean_box(0)); // (∀ a, β ...) → ∀ q, β q

        const forall_beta = lean_expr_mk_forall(mkName("β"), beta_type, forall_mk2, lean_box(1)); // {β : ...}
        const r_domain3 = mkArrow(bvar(0), mkArrow(bvar(1), prop)); // α → α → Prop (under α)
        const forall_r = lean_expr_mk_forall(mkName("r"), r_domain3, forall_beta, lean_box(1)); // {r : ...}
        break :blk lean_expr_mk_forall(mkName("α"), sort_u, forall_r, lean_box(1)); // {α : Sort u}
    };

    // ── Build QuotVal + ConstantInfo for each quot constant ───────────────
    var new_env = env;

    // Quot (kind = 0 = type)
    {
        const qv = mkQuotVal(quot_name, u_params, quot_type, 0);
        const ci = mkQuotInfo(qv);
        new_env = lean_environment_add(new_env, ci);
    }
    // Quot.mk (kind = 1 = ctor)
    {
        const qv = mkQuotVal(quot_mk_name, u_params, quot_mk_type, 1);
        const ci = mkQuotInfo(qv);
        new_env = lean_environment_add(new_env, ci);
    }
    // Quot.lift (kind = 2 = lift)
    {
        const qv = mkQuotVal(quot_lift_name, uv_params, quot_lift_type, 2);
        const ci = mkQuotInfo(qv);
        new_env = lean_environment_add(new_env, ci);
    }
    // Quot.ind (kind = 3 = ind)
    {
        const qv = mkQuotVal(quot_ind_name, u_params, quot_ind_type, 3);
        const ci = mkQuotInfo(qv);
        new_env = lean_environment_add(new_env, ci);
    }

    // Mark quot as initialized
    new_env = lean_environment_mark_quot_init(new_env);

    return new_env;
}

fn addMutualDefinitions(env: *anyopaque, decl: *anyopaque) *anyopaque {
    // Declaration.mutualDefnDecl (tag 5) has 1 object field: List DefinitionVal.
    // Each DefinitionVal is wrapped as ConstantInfo.defnInfo (tag 1, 1 obj field)
    // and added via lean_environment_add.
    //
    // Reference counting:
    // - defns is BORROWED from decl via lean_ctor_get (no lean_inc, no lean_dec)
    // - defn is BORROWED from list via lean_ctor_get, then lean_inc'd for cinfo
    // - lean_environment_add consumes new_env (refcount -1) and cinfo (refcount -1)
    // - When cinfo is freed, it decrements defn (net: +1 -1 = 0, borrowed)
    // - Each iteration: new_env (refcount 1) is consumed, newer env (refcount 1) returned
    const defns = lean_ctor_get(decl, 0) orelse @panic("mutual definition declaration missing definitions");
    var curr = defns;
    var new_env = env;
    while (!lean_is_scalar(curr)) {
        const defn = lean_ctor_get(curr, 0) orelse @panic("mutual definition list missing head");
        lean_inc(defn);  // cinfo will consume it via lean_environment_add
        const cinfo = lean_alloc_ctor(1, 1, 0); // ConstantInfo.defnInfo (tag 1)
        lean_ctor_set(cinfo, 0, defn);
        new_env = lean_environment_add(new_env, cinfo);  // consumes new_env and cinfo
        curr = lean_ctor_get(curr, 1) orelse @panic("mutual definition list missing tail");
    }
    // NO lean_dec(defns) — defns was borrowed from decl, not owned.
    return new_env;
}

pub export fn lean_add_decl_without_checking(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    const tag = lean_ptr_tag(decl);
    // Tags 0-3 (axiom, defn, theorem, opaque): Declaration and ConstantInfo
    // share the same runtime representation. lean_environment_add handles them.
    // Tag 4 (quot): generate Quot/Quot.mk/Quot.lift/Quot.ind constants in Zig.
    // Tag 5 (mutual): iterate definitions, add each via lean_environment_add.
    // Tag 6 (inductive): C++ generates constructors/recursors/etc.
    if (tag >= 6) {
        return lean_cpp_environment_add_without_checking(env, decl);
    }
    const new_env = if (tag == 4) blk: {
        break :blk addQuot(env);
    } else if (tag == 5) blk: {
        break :blk addMutualDefinitions(env, decl);
    } else blk: {
        // Tags 0-3: pass decl as ConstantInfo (same representation)
        lean_inc(decl);  // lean_environment_add consumes cinfo
        break :blk lean_environment_add(env, decl);
    };
    // Wrap in Except.ok (tag 1, matching C++ catch_kernel_exceptions)
    const result = lean_alloc_ctor(1, 1, 0);
    lean_ctor_set(result, 0, new_env);
    return result;
}

pub export fn lean_add_decl_bridge(env: *anyopaque, decl: *anyopaque) callconv(.c) *anyopaque {
    return lean_add_decl_without_checking(env, decl);
}
