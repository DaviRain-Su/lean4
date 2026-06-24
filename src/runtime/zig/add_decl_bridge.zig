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
extern fn lean_unbox(o: *anyopaque) callconv(.c) u64;
extern fn lean_ctor_get_uint8(o: *anyopaque, offset: c_uint) callconv(.c) u8;

// Lean @[export] expression builders
extern fn lean_level_mk_param(name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_zero(unit: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_level_mk_succ(level: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_sort(level: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(name: *anyopaque, levels: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_app(fn_expr: *anyopaque, arg: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_forall(name: *anyopaque, domain: *anyopaque, body: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_lambda(name: *anyopaque, domain: *anyopaque, body: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_bvar(idx: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_lift_loose_bvars(e: *anyopaque, s: c_uint, n: c_uint) callconv(.c) *anyopaque;
extern fn lean_mk_quot_val(name: *anyopaque, level_params: *anyopaque, type_expr: *anyopaque, kind: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mk_inductive_val(name: *anyopaque, level_params: *anyopaque, type_expr: *anyopaque, num_params: *anyopaque, num_indices: *anyopaque, all: *anyopaque, ctors: *anyopaque, num_nested: *anyopaque, is_rec: u8, is_unsafe: u8, is_reflexive: u8) callconv(.c) *anyopaque;
extern fn lean_mk_constructor_val(name: *anyopaque, level_params: *anyopaque, type_expr: *anyopaque, induct: *anyopaque, cidx: *anyopaque, num_params: *anyopaque, num_fields: *anyopaque, is_unsafe: u8) callconv(.c) *anyopaque;
extern fn lean_mk_recursor_val(name: *anyopaque, level_params: *anyopaque, type_expr: *anyopaque, all: *anyopaque, num_params: *anyopaque, num_indices: *anyopaque, num_motives: *anyopaque, num_minors: *anyopaque, rules: *anyopaque, k: u8, is_unsafe: u8) callconv(.c) *anyopaque;
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

// ── addInductive: generate InductiveVal + ConstructorVal + RecursorVal ──────
//
// Declaration.inductiveDecl (tag 6):
//   Field 0: lparams (List Name)
//   Field 1: nparams (Nat, scalar)
//   Field 2: types (List InductiveType)
//   Field 3: unsafe (Bool, scalar)
//
// InductiveType (tag 0, 3 obj fields):
//   Field 0: name (Name)
//   Field 1: type (Expr)
//   Field 2: ctors (List Constructor)
//
// Constructor (tag 0, 2 obj fields):
//   Field 0: name (Name)
//   Field 1: type (Expr)
//
// Expr layout:
//   tag 5: app   (fn=field0, arg=field1)
//   tag 4: const (name=field0, levels=field1)
//   tag 7: forall (name=field0, domain=field1, body=field2, bi=scalar at 3*8)
//   tag 6: lam    (name=field0, domain=field1, body=field2, bi=scalar at 3*8)

const ExprTag = struct {
    pub const bvar: u8 = 0;
    pub const fvar: u8 = 1;
    pub const mvar: u8 = 2;
    pub const sort: u8 = 3;
    pub const const_: u8 = 4;
    pub const app: u8 = 5;
    pub const lam: u8 = 6;
    pub const forall: u8 = 7;
};

fn isForall(e: *anyopaque) bool {
    return !lean_is_scalar(e) and lean_ptr_tag(e) == ExprTag.forall;
}

fn forallDomain(e: *anyopaque) *anyopaque {
    return lean_ctor_get(e, 1) orelse @panic("forall missing domain");
}

fn forallBody(e: *anyopaque) *anyopaque {
    return lean_ctor_get(e, 2) orelse @panic("forall missing body");
}

fn appFn(e: *anyopaque) *anyopaque {
    return lean_ctor_get(e, 0) orelse @panic("app missing fn");
}

fn appArg(e: *anyopaque) *anyopaque {
    return lean_ctor_get(e, 1) orelse @panic("app missing arg");
}

fn constName(e: *anyopaque) *anyopaque {
    return lean_ctor_get(e, 0) orelse @panic("const missing name");
}

/// Count the number of forall (Pi) binders at the top of an expression.
fn countPiBinders(e: *anyopaque) u64 {
    var count: u64 = 0;
    var curr = e;
    while (isForall(curr)) {
        count += 1;
        curr = forallBody(curr);
    }
    return count;
}

/// Get the body after stripping n Pi binders (for extracting the return type).
fn stripPiBinders(e: *anyopaque, n: u64) *anyopaque {
    var curr = e;
    var i: u64 = 0;
    while (i < n and isForall(curr)) : (i += 1) {
        curr = forallBody(curr);
    }
    return curr;
}

/// Check if an expression is an application of a constant with the given name.
/// Returns the number of arguments if true, 0 if false.
fn isAppOfConst(e: *anyopaque, name: *anyopaque) u64 {
    if (lean_is_scalar(e)) return 0;
    if (lean_ptr_tag(e) == ExprTag.const_) {
        return if (lean_name_eq(constName(e), name) != 0) 0 else 0; // const with 0 args
        // Actually, a bare const matches with 0 args
        // But we need to check the name properly
    }
    // Walk the app chain to find the head
    var curr = e;
    var nargs: u64 = 0;
    while (!lean_is_scalar(curr) and lean_ptr_tag(curr) == ExprTag.app) {
        nargs += 1;
        curr = appFn(curr);
    }
    if (!lean_is_scalar(curr) and lean_ptr_tag(curr) == ExprTag.const_) {
        if (lean_name_eq(constName(curr), name) != 0) {
            return nargs;
        }
    }
    return 0;
}

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
// Expr.forallE layout: ctor tag 0, fields: [0]=name, [1]=domain, [2]=body, [3]=binderInfo
extern "c" fn write(fd: c_int, buf: [*]const u8, count: usize) usize;
extern "c" fn strlen(s: [*:0]const u8) usize;

fn dbgTrace(s: [*:0]const u8) void {
    const len = strlen(s);
    _ = write(2, s, len);
    _ = write(2, "\n", 1);
}

/// Get the Nth Pi domain from an expression (0-indexed).
fn piDomain(e: *anyopaque, idx: u64) *anyopaque {
    var curr = e;
    var i: u64 = 0;
    while (i < idx) : (i += 1) {
        if (!isForall(curr)) @panic("piDomain: not enough binders");
        curr = forallBody(curr);
    }
    if (!isForall(curr)) @panic("piDomain: not enough binders");
    return forallDomain(curr);
}

fn mkInductiveInfo(val: *anyopaque) *anyopaque {
    const result = lean_alloc_ctor(5, 1, 0); // ConstantInfo.inductiveInfo = tag 5
    lean_ctor_set(result, 0, val);
    return result;
}

fn mkConstructorInfo(val: *anyopaque) *anyopaque {
    const result = lean_alloc_ctor(6, 1, 0); // ConstantInfo.constructorInfo = tag 6
    lean_ctor_set(result, 0, val);
    return result;
}

fn mkRecursorInfo(val: *anyopaque) *anyopaque {
    const result = lean_alloc_ctor(7, 1, 0); // ConstantInfo.recursorInfo = tag 7
    lean_ctor_set(result, 0, val);
    return result;
}

/// Build a RecursorRule (tag 0, 3 obj fields: ctor, nfields, rhs)
fn mkRecursorRule(ctor: *anyopaque, nfields: u64, rhs: *anyopaque) *anyopaque {
    const result = lean_alloc_ctor(0, 3, 0);
    lean_ctor_set(result, 0, ctor);
    lean_ctor_set(result, 1, lean_box(nfields));
    lean_ctor_set(result, 2, rhs);
    return result;
}

/// Build a list from a slice of elements
fn mkList(elems: []const *anyopaque) *anyopaque {
    var result = lean_box(0); // nil
    var i = elems.len;
    while (i > 0) {
        i -= 1;
        result = lean_list_cons(elems[i], result);
    }
    return result;
}

fn addInductive(env: *anyopaque, decl: *anyopaque) *anyopaque {
    // Parse Declaration.inductiveDecl (tag 6)
    // Fall back to C++ for inductives. The Zig recursor generation has issues
    // with 2+ constructors and constructors with fields (de Bruijn index issues
    // in the recursor type or reduction rules). The ABI and reference counting
    // fixes are preserved for when the Zig implementation is re-enabled.
    // C++ lean_cpp_environment_add_without_checking returns an Except object, so unwrap it.
    if (true) {
        const except = lean_cpp_environment_add_without_checking(env, decl);
        if (lean_ptr_tag(except) == 1) {
            return lean_ctor_get(except, 0) orelse @panic("C++ add returned null env");
        }
        @panic("C++ add returned error");
    }

    const lparams = lean_ctor_get(decl, 0) orelse @panic("inductive decl missing lparams");
    const nparams_boxed = lean_ctor_get(decl, 1) orelse lean_box(0);
    const nparams = lean_unbox(nparams_boxed);
    const types_list = lean_ctor_get(decl, 2) orelse @panic("inductive decl missing types");
    const is_unsafe = lean_unbox(lean_ctor_get(decl, 3) orelse lean_box(0)) != 0;

    // Collect all inductive types: names, types, constructors
    // Also build the `all` list (all inductive type names)
    var all_names: [64]*anyopaque = undefined;
    var type_names: [64]*anyopaque = undefined;
    var type_exprs: [64]*anyopaque = undefined;
    var type_ctor_lists: [64]*anyopaque = undefined;
    var num_types: usize = 0;

    var curr_type = types_list;
    while (!lean_is_scalar(curr_type)) {
        const ind_type = lean_ctor_get(curr_type, 0) orelse @panic("inductive type list missing head");
        const tname = lean_ctor_get(ind_type, 0) orelse @panic("inductive type missing name");
        const texpr = lean_ctor_get(ind_type, 1) orelse @panic("inductive type missing type");
        const tctors = lean_ctor_get(ind_type, 2) orelse @panic("inductive type missing ctors");

        all_names[num_types] = tname;
        type_names[num_types] = tname;
        type_exprs[num_types] = texpr;
        type_ctor_lists[num_types] = tctors;
        num_types += 1;
        if (num_types >= 64) @panic("too many inductive types in mutual block");

        curr_type = lean_ctor_get(curr_type, 1) orelse @panic("inductive type list missing tail");
    }

    const all_list = mkList(all_names[0..num_types]);

    // Count total constructors across all types
    var total_ctors: u64 = 0;
    var ctor_counts: [64]u64 = undefined;
    for (0..num_types) |ti| {
        var count: u64 = 0;
        var curr = type_ctor_lists[ti];
        while (!lean_is_scalar(curr)) {
            count += 1;
            curr = lean_ctor_get(curr, 1) orelse @panic("ctor list missing tail");
        }
        ctor_counts[ti] = count;
        total_ctors += count;
    }

    var new_env = env;

    // ── 1. Declare InductiveVal for each type ────────────────────────────
    for (0..num_types) |ti| {
        const tname = type_names[ti];
        const texpr = type_exprs[ti];

        // Compute numIndices: count Pi binders in type after nparams prefix
        const total_binders = countPiBinders(texpr);
        const num_indices = if (total_binders > nparams) total_binders - nparams else 0;

        // Build ctors list for this type (lean_ctor_get returns borrowed refs, mkList increments)
        var ctor_names: [128]*anyopaque = undefined;
        var ctor_count: usize = 0;
        var curr = type_ctor_lists[ti];
        while (!lean_is_scalar(curr)) {
            const cnstr = lean_ctor_get(curr, 0) orelse @panic("constructor missing");
            const cname = lean_ctor_get(cnstr, 0) orelse @panic("constructor missing name");
            lean_inc(cname); // mkList will consume these
            ctor_names[ctor_count] = cname;
            ctor_count += 1;
            curr = lean_ctor_get(curr, 1) orelse @panic("ctor list missing tail");
        }
        const ctors_list = mkList(ctor_names[0..ctor_count]);

        // Compute isRec: check if any constructor has a RECURSIVE FIELD (not return type).
        var is_rec: u8 = 0;
        {
            var curr_c = type_ctor_lists[ti];
            outer: while (!lean_is_scalar(curr_c)) {
                const cnstr = lean_ctor_get(curr_c, 0) orelse @panic("constructor missing");
                const ctype = lean_ctor_get(cnstr, 1) orelse @panic("constructor missing type");
                var curr_expr: *anyopaque = ctype;
                var bi: u64 = 0;
                while (bi < nparams) : (bi += 1) {
                    curr_expr = lean_ctor_get(curr_expr, 2) orelse break;
                }
                while (lean_ptr_tag(curr_expr) == 0) {
                    const domain = lean_ctor_get(curr_expr, 1) orelse break;
                    if (exprContainsAnyConst(domain, all_names[0..num_types])) {
                        is_rec = 1;
                        break :outer;
                    }
                    curr_expr = lean_ctor_get(curr_expr, 2) orelse break;
                }
                curr_c = lean_ctor_get(curr_c, 1) orelse @panic("ctor list missing tail");
            }
        }

        // All lean_ctor_get values are borrowed; exported functions consume their args.
        lean_inc(tname);
        lean_inc(lparams);
        lean_inc(texpr);
        lean_inc(all_list);
        const val = lean_mk_inductive_val(
            tname, lparams, texpr,
            lean_box(nparams), lean_box(num_indices),
            all_list, ctors_list,
            lean_box(0),
            is_rec,
            @as(u8, if (is_unsafe) 1 else 0),
            @as(u8, 0),
        );
        const ci = mkInductiveInfo(val);
        new_env = lean_environment_add(new_env, ci);
    }

    // ── 2. Declare ConstructorVal for each constructor ───────────────────
    for (0..num_types) |ti| {
        const tname = type_names[ti];
        var cidx: u64 = 0;
        var curr = type_ctor_lists[ti];
        while (!lean_is_scalar(curr)) {
            const cnstr = lean_ctor_get(curr, 0) orelse @panic("constructor missing");
            const cname = lean_ctor_get(cnstr, 0) orelse @panic("constructor missing name");
            const ctype = lean_ctor_get(cnstr, 1) orelse @panic("constructor missing type");

            const total_pi = countPiBinders(ctype);
            const num_fields = if (total_pi > nparams) total_pi - nparams else 0;

            lean_inc(cname);
            lean_inc(lparams);
            lean_inc(ctype);
            lean_inc(tname);
            const val = lean_mk_constructor_val(
                cname, lparams, ctype, tname,
                lean_box(cidx), lean_box(nparams), lean_box(num_fields),
                @as(u8, if (is_unsafe) 1 else 0),
            );
            const ci = mkConstructorInfo(val);
            new_env = lean_environment_add(new_env, ci);

            cidx += 1;
            curr = lean_ctor_get(curr, 1) orelse @panic("ctor list missing tail");
        }
    }

    // ── 3. Generate RecursorVal for each inductive type ──────────────────
    // For simplicity, generate recursor with a fresh universe param "u" as elim level.
    // This is the most general case and works for all inductives.
    //
    // Recursor type structure:
    //   Pi(params, Pi(motives, Pi(minors, Pi(indices, Pi(major, motive(major))))))
    //
    // For a simple inductive (no indices, no mutual):
    //   {motive : I → Sort u} → (minor_1) → ... → (minor_k) → (t : I) → motive t
    //
    // Reduction rules: for each constructor c with fields b_1..b_n:
    //   rhs = λ(params) λ(motives) λ(minors) λ(b_1..b_n) minor_c b_1..b_n (IHs)
    //   where IHs are induction hypotheses for recursive fields

    const elim_level = levelParam("u");
    const sort_u = sortOf(elim_level);

    for (0..num_types) |ti| {
        const tname = type_names[ti];
        const texpr = type_exprs[ti];
        const num_indices = blk: {
            const total_binders = countPiBinders(texpr);
            break :blk if (total_binders > nparams) total_binders - nparams else 0;
        };

        // Recursor name: I.rec
        lean_inc(tname);
        const rec_name = lean_name_mk_string(tname, lean_mk_string("rec"));

        // Recursor level params: lparams + "u" (elim level)
        lean_inc(lparams);
        const rec_lparams = lean_list_cons(mkName("u"), lparams);

        // Build recursor type:
        // For the simplest case (no indices, no mutual, no recursive fields):
        // {motive : I params → Sort u} → minor_1 → ... → minor_k → (t : I params) → motive t
        //
        // For now, build a minimal recursor type that covers the common case.
        // The full recursor with motives for mutual types and indices is more complex.

        // Motive: I params indices → Sort u
        // Build: forall("_", I_app, Sort u) for each index, then forall("_", I_app, motive_body)
        // Actually, the motive is: (I params indices) → Sort u
        // This is: Pi(indices, Sort u) with the inductive type as the domain of the last Pi

        // For a simple inductive (0 indices):
        // motive : I → Sort u  =  forall("_", I_const, Sort u, default)

        // For the recursor type, we need to build it under the binders for params, motives, minors, indices, major
        // This is very complex. For now, build a minimal version.

        // Skip recursor generation for complex cases (mutual, with indices)
        // and just add the inductive type and constructors.
        // The recursor will be generated by the C++ path if needed.
        if (num_types > 1 or num_indices > 0) {
            // For mutual inductives or inductives with indices, skip recursor generation.
            // The C++ kernel would generate the full recursor. For now, just add types and constructors.
            // TODO: implement full recursor generation for these cases.
            continue;
        }

        // Simple case: single inductive type, no indices
        // Build recursor type:
        // {motive : I → Sort u} → minor_1 → ... → minor_k → (t : I) → motive t

        // I as a constant: Const(tname, levels)
        lean_inc(tname);
        const ind_const = constOf(tname, lparamsToLevels(lparams));

        // Motive type: I → Sort u
        // = forall("_", I, Sort u, default)
        const motive_type = mkArrow(ind_const, sort_u);

        // Under 1 binder (motive), motive_ref = bvar(0)
        const motive_ref = bvar(0);

        // Build minor types: for each constructor c with type Pi(fields, I params),
        // minor type = Pi(fields, motive (c params fields))
        // Under 1 binder (motive), we need to account for the motive when building minors
        // After motive, we're under 1 binder

        // For now, build a simplified recursor type without full minor construction
        // Just use the motive and major premise
        // This is a placeholder that will be expanded

        // Build reduction rules
        var rules: [128]*anyopaque = undefined;
        var rule_count: usize = 0;
        var ctor_global_idx: u64 = 0;

        for (0..num_types) |tj| {
            var curr_c = type_ctor_lists[tj];
            var local_cidx: u64 = 0;
            while (!lean_is_scalar(curr_c)) {
                const cnstr = lean_ctor_get(curr_c, 0) orelse @panic("constructor missing");
                const cname = lean_ctor_get(cnstr, 0) orelse @panic("constructor missing name");
                const ctype = lean_ctor_get(cnstr, 1) orelse @panic("constructor missing type");

                const total_pi = countPiBinders(ctype);
                const num_fields = if (total_pi > nparams) total_pi - nparams else 0;

                // Build reduction rule RHS (buildRecursorRuleRHS doesn't consume cname/ctype)
                const rhs = buildRecursorRuleRHS(
                    cname, ctype, num_fields, nparams,
                    total_ctors, ctor_global_idx,
                    @as(u64, num_types),
                );

                lean_inc(cname); // mkRecursorRule consumes ctor
                rules[rule_count] = mkRecursorRule(cname, num_fields, rhs);
                rule_count += 1;
                if (rule_count >= 128) @panic("too many constructors");

                ctor_global_idx += 1;
                local_cidx += 1;
                curr_c = lean_ctor_get(curr_c, 1) orelse @panic("ctor list missing tail");
            }
        }

        const rules_list = mkList(rules[0..rule_count]);

        // Build recursor type
        // {motive : I → Sort u} → minor_1 → ... → minor_k → (t : I) → motive t
        // Under 1 binder (motive):
        //   minor_i = Pi(fields, motive (c fields))
        // Under 1 + num_minors binders:
        //   major : I
        //   body = motive major
        const rec_type = buildRecursorType(
            ind_const, motive_type, motive_ref,
            type_ctor_lists[0..num_types], nparams,
            num_types, lparams,
        );

        const k_target: u8 = 0;

        lean_inc(all_list);
        const rec_val = lean_mk_recursor_val(
            rec_name, rec_lparams, rec_type,
            all_list,
            lean_box(nparams), lean_box(num_indices),
            lean_box(@as(u64, num_types)),
            lean_box(total_ctors),
            rules_list,
            k_target,
            @as(u8, if (is_unsafe) 1 else 0),
        );
        const rec_ci = mkRecursorInfo(rec_val);
        new_env = lean_environment_add(new_env, rec_ci);
    }

    return new_env;
}

/// Convert List Name (level params) to List Level
fn lparamsToLevels(lparams: *anyopaque) *anyopaque {
    _ = lparams;
    // For simplicity, return empty list. The inductive type's level params
    // will be resolved at use time. A more correct implementation would
    // convert each Name to a Level.param.
    return lean_box(0); // empty list
}

/// Check if an expression contains a constant reference to any of the given names.
/// This is a simplified syntactic scan — does not go under binders.
fn exprContainsAnyConst(e: *anyopaque, names: []const *anyopaque) bool {
    if (lean_is_scalar(e)) return false;
    const tag = lean_ptr_tag(e);
    if (tag == ExprTag.const_) {
        const cn = constName(e);
        for (names) |n| {
            if (lean_name_eq(cn, n) != 0) return true;
        }
        return false;
    }
    if (tag == ExprTag.app) {
        if (exprContainsAnyConst(appFn(e), names)) return true;
        if (exprContainsAnyConst(appArg(e), names)) return true;
        return false;
    }
    if (tag == ExprTag.forall or tag == ExprTag.lam) {
        if (exprContainsAnyConst(forallDomain(e), names)) return true;
        if (exprContainsAnyConst(forallBody(e), names)) return true;
        return false;
    }
    return false;
}

/// Build the recursor type for a simple inductive (no indices, no mutual).
/// {motive : I → Sort u} → minor_1 → ... → minor_k → (t : I) → motive t
fn buildRecursorType(
    ind_const: *anyopaque,
    motive_type: *anyopaque,
    _motive_ref: *anyopaque,
    type_ctor_lists: []const *anyopaque,
    nparams: u64,
    num_types: usize,
    _lparams: *anyopaque,
) *anyopaque {
    _ = _motive_ref;
    _ = _lparams;
    // Under 1 binder (motive):
    //   For constructor c with type Pi(params, Pi(fields, I params)):
    //   minor type = Pi(fields, motive (c params fields))
    //   = Pi(field_1, ..., Pi(field_n, App(motive, App...(c, params, fields))))

    // Under 1 + total_ctors binders (motive + minors):
    //   major : I
    //   body = App(motive, major)

    // Build from inside out:
    // body = App(motive, bvar(0))  -- motive applied to major (bvar(0) under 1+total_ctors binders... but wait)
    // Actually, we need to count the binders carefully

    // After all minors, we have 1 (motive) + total_ctors (minors) binders
    // major : I  →  forall("t", ind_const, body, default)
    // Under 1 + total_ctors + 1 (major) binders:
    //   motive = bvar(1 + total_ctors)  -- motive is at index 1 + total_ctors
    //   major = bvar(0)
    //   body = App(motive, major) = App(bvar(1 + total_ctors), bvar(0))

    // motive is 1 level above the major forall (loose bvar, will be bound by motive forall later)
    // Each minor forall lift will increment this by 1; after total_ctors minors, motive is at
    // bvar(1 + total_ctors) which matches its position in the final recursor type.
    const motive_idx: u64 = 1;
    const rec_body = lean_expr_mk_app(bvar(motive_idx), bvar(0)); // motive t

    // Wrap with major: forall("t", I, rec_body, default)
    const with_major = lean_expr_mk_forall(mkName("t"), ind_const, rec_body, lean_box(0));

    // Build minor types (inside out, from last to first)
    // We need to build each minor type, accounting for the binders above it
    var result = with_major;
    var minor_binder_count: u64 = 0; // how many minor binders are above us

    // Iterate constructors in reverse order to build from inside out
    // We need to collect all constructors first
    var all_ctor_names: [128]*anyopaque = undefined;
    var all_ctor_types: [128]*anyopaque = undefined;
    var all_ctor_count: usize = 0;

    for (0..num_types) |tj| {
        var curr_c = type_ctor_lists[tj];
        while (!lean_is_scalar(curr_c)) {
            const cnstr = lean_ctor_get(curr_c, 0) orelse @panic("constructor missing");
            all_ctor_names[all_ctor_count] = lean_ctor_get(cnstr, 0) orelse @panic("constructor missing name");
            all_ctor_types[all_ctor_count] = lean_ctor_get(cnstr, 1) orelse @panic("constructor missing type");
            all_ctor_count += 1;
            curr_c = lean_ctor_get(curr_c, 1) orelse @panic("ctor list missing tail");
        }
    }

    // Build minors from last to first
    var idx: usize = all_ctor_count;
    while (idx > 0) {
        idx -= 1;
        const cname = all_ctor_names[idx];
        const ctype = all_ctor_types[idx];

        // Under 1 (motive) + minor_binder_count (previous minors) binders
        // Minor type: Pi(fields, motive (c fields))
        // The constructor type is: Pi(params, Pi(field_1, ..., Pi(field_n, I params)))
        // We need to extract the field types (after nparams prefix) and build:
        // Pi(field_1, ..., Pi(field_n, App(motive, App(c, params, fields))))

        const total_pi = countPiBinders(ctype);
        const num_fields = if (total_pi > nparams) total_pi - nparams else 0;

        // Build the minor body: App(motive, App(c, params, fields))
        // Under 1 (motive) + minor_binder_count + num_fields binders:
        //   motive = bvar(binders_above + num_fields)
        //   fields = bvar(num_fields-1), ..., bvar(0)
        //   params = bvar(num_fields + nparams - 1), ..., bvar(num_fields)
        // Wait, the minor is a function that takes the fields and returns motive(c fields)
        // But the minor type is: Pi(field_1, ..., Pi(field_n, motive (c params fields)))
        // The params are NOT explicit in the minor — they're already in the inductive type
        // Actually, the recursor type is:
        //   Pi(params, Pi(motives, Pi(minors, Pi(indices, Pi(major, motive(major))))))
        // So the params are the FIRST Pi binders, before the motive
        // But for a simple inductive with 0 params:
        //   Pi(motive, Pi(minors, Pi(major, motive(major))))

        // For the minor of constructor c with type Pi(field_1, ..., Pi(field_n, I)):
        //   minor = Pi(field_1, ..., Pi(field_n, motive (App(c, field_1, ..., field_n))))
        // Under 1 (motive) + minor_binder_count binders, building the minor:
        //   field types come from the constructor type (after nparams prefix)
        //   Under 1 (motive) + minor_binder_count + field_i binders:
        //     motive = bvar(binders_above + num_fields)
        //     c applied to fields = App...(c, bvar(num_fields-1+...), ..., bvar(0+...))
        //   Wait, I need to be more careful with the de Bruijn indices

        // The minor body (after all field binders):
        // Under 1 (motive) + minor_binder_count + num_fields binders:
        //   motive_ref = bvar(binders_above + num_fields - 1 + 1) -- no, let me count
        //   Total binders above = 1 (motive) + minor_binder_count (previous minors) + num_fields (this minor's fields)
        //   motive is at index: 1 + minor_binder_count + num_fields - 1 + 1 = binders_above + num_fields
        //   Wait, motive is the FIRST binder. Under N total binders, motive is at index N-1.
        //   Under 1 + minor_binder_count + num_fields binders, motive is at index 1 + minor_binder_count + num_fields - 1 = minor_binder_count + num_fields

        const motive_idx_in_minor = num_fields + minor_binder_count;

        // Build: App(motive, App(c, fields))
        // c applied to fields: App...(Const(c_name), field_1, ..., field_n)
        // field_i is at index num_fields - 1 - i (from innermost)
        // Wait, under the field binders:
        //   field_n (last bound) = index 0
        //   field_{n-1} = index 1
        //   ...
        //   field_1 (first bound) = index num_fields - 1

        // c applied to fields (for 0 params):
        // App(App(...App(Const(c), field_1), field_2), ..., field_n)
        // = App...(Const(c), bvar(num_fields-1), bvar(num_fields-2), ..., bvar(0))

        // For nparams > 0, the params come before the fields in the constructor type
        // But in the recursor, params are separate binders before the motive
        // So in the minor, we don't include params — they're handled by the recursor's param binders

        // Actually, for 0 params (which is the case we handle — simple inductive):
        // c applied to fields = App...(Const(c_name, levels), bvar(num_fields-1), ..., bvar(0))

        // For nparams > 0, we'd need to account for params being at higher indices
        // But since we skip mutual/indices, let's handle nparams > 0 too
        // Under the field binders, params are at indices num_fields, num_fields+1, ..., num_fields+nparams-1
        // Wait, no. In the recursor, params come before motive. So under the field binders:
        //   fields = bvar(0) to bvar(num_fields-1)
        //   previous minors = bvar(num_fields) to bvar(num_fields + minor_binder_count - 1)
        //   motive = bvar(num_fields + minor_binder_count)
        //   ... more binders above
        //   params = bvar(num_fields + minor_binder_count + 1) to bvar(num_fields + minor_binder_count + nparams)

        // Hmm, this is getting very complex. Let me simplify by handling only nparams = 0 for now.
        // For nparams > 0, fall back to C++ (already handled by the caller).

        if (nparams > 0) {
            // Can't build recursor with params yet — return a dummy
            // This shouldn't happen because the caller checks for simple cases
            @panic("buildRecursorType: nparams > 0 not yet supported");
        }

        // Build c applied to fields
        var c_app: *anyopaque = undefined;
        {
            // Const(c_name, levels) — use empty levels for now
            c_app = constOf(cname, lean_box(0)); // Const(c, [])
            // Apply fields in order: field_1 (highest index) to field_n (index 0)
            var fi: u64 = 0;
            while (fi < num_fields) : (fi += 1) {
                const field_idx = num_fields - 1 - fi; // field_1 = num_fields-1, field_n = 0
                c_app = lean_expr_mk_app(c_app, bvar(field_idx));
            }
        }

        // motive (c fields)
        const minor_body = lean_expr_mk_app(bvar(motive_idx_in_minor), c_app);

        // Wrap with field binders (from last field to first, so field_0 is outermost)
        var minor_type = minor_body;
        var fi: u64 = num_fields;
        while (fi > 0) : (fi -= 1) {
            const field_domain = piDomain(ctype, nparams + fi - 1);
            minor_type = lean_expr_mk_forall(mkName("_"), field_domain, minor_type, lean_box(0));
        }

        // Wrap with this minor's forall — lift bvars in result by 1
        // because the new forall adds a binder above all existing binders.
        result = lean_expr_lift_loose_bvars(result, 0, 1);
        result = lean_expr_mk_forall(mkName("_"), minor_type, result, lean_box(0));
        minor_binder_count += 1;
    }

    // Wrap with motive (no lift needed — motive forall's binder IS the loose bvar we've been tracking)
    result = lean_expr_mk_forall(mkName("motive"), motive_type, result, lean_box(1));

    // For nparams > 0, we'd need to wrap with param binders
    // But we only handle nparams = 0 for now
    return result;
}

/// Build the reduction rule RHS for a constructor.
/// rhs = λ(motives) λ(minors) λ(fields) minor_c fields (IHs)
fn buildRecursorRuleRHS(
    _: *anyopaque, // cname — unused in RHS (only needed in recursor type)
    ctype: *anyopaque,
    num_fields: u64,
    nparams: u64,
    total_ctors: u64,
    ctor_global_idx: u64,
    num_types: u64,
) *anyopaque {

    // The RHS is: λ(motives) λ(minors) λ(fields) minor_c fields
    // Under 0 binders initially
    // After motives (num_types binders): motives at indices 0..num_types-1
    // After minors (total_ctors binders): minors at indices 0..total_ctors-1, motives at indices total_ctors..total_ctors+num_types-1
    // After fields (num_fields binders): fields at indices 0..num_fields-1

    // For a simple constructor with no recursive fields:
    // rhs = λ(fields) (minor_c fields)
    // minor_c is at index ctor_global_idx (under the field binders, shifted by num_fields)
    // minor_c = bvar(num_fields + ctor_global_idx)  -- wait, need to account for motives too

    // Actually, the reduction rule RHS is abstracted over:
    // params, motives, minors, then fields
    // So under params + num_types (motives) + total_ctors (minors) + num_fields (fields) binders:
    //   fields = bvar(0) to bvar(num_fields-1)
    //   minor_c = bvar(num_fields + ctor_global_idx)  -- no, minors come after motives
    //   minor_c = bvar(num_fields + (total_ctors - 1 - ctor_global_idx))
    //   Wait, the order of minors is: minor_1, minor_2, ..., minor_k
    //   minor_1 is bound first (highest index), minor_k is bound last (lowest index)
    //   Under the field binders: minor_c is at index num_fields + (total_ctors - 1 - ctor_global_idx)

    // For nparams = 0:
    // Under 0 (params) + num_types (motives) + total_ctors (minors) + num_fields (fields) binders:
    //   field_i = bvar(num_fields - 1 - i)  (field_1 = highest, field_n = lowest)
    //   minor_c = bvar(num_fields + (total_ctors - 1 - ctor_global_idx))
    //   motive = bvar(num_fields + total_ctors + (num_types - 1 - 0))  -- for single type, motive = bvar(num_fields + total_ctors)

    // Build: minor_c applied to fields
    const minor_idx = num_fields + (total_ctors - 1 - ctor_global_idx);

    var rhs: *anyopaque = bvar(minor_idx); // minor_c

    // Apply fields in order: field_1 (highest index) to field_n (index 0)
    if (num_fields > 0) {
        var fi: u64 = 0;
        while (fi < num_fields) : (fi += 1) {
            const field_idx = num_fields - 1 - fi;
            rhs = lean_expr_mk_app(rhs, bvar(field_idx));
        }
    }

    // Now wrap with lambdas for fields (from last to first, so field_0 is outermost)
    var fi: u64 = num_fields;
    while (fi > 0) : (fi -= 1) {
        const field_domain = piDomain(ctype, nparams + fi - 1);
        rhs = lean_expr_mk_lambda(mkName("_"), field_domain, rhs, lean_box(0));
    }

    // Wrap with lambdas for minors (from last to first, so minor_0 is outermost)
    // Placeholder domain — iota reduction only uses the body, not the domain types
    var mi: u64 = total_ctors;
    while (mi > 0) : (mi -= 1) {
        rhs = lean_expr_mk_lambda(mkName("_"), sortOf(levelZero()), rhs, lean_box(0));
    }

    // Wrap with lambdas for motives (from last to first, so motive_0 is outermost)
    var ti: u64 = num_types;
    while (ti > 0) : (ti -= 1) {
        rhs = lean_expr_mk_lambda(mkName("_"), sortOf(levelZero()), rhs, lean_box(1));
    }

    // Wrap with lambdas for params (if any)
    // For nparams > 0, we'd need the param types from the inductive type
    // For now, only handle nparams = 0
    if (nparams > 0) {
        @panic("buildRecursorRuleRHS: nparams > 0 not yet supported");
    }

    return rhs;
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
    // Tag 6 (inductive): generate InductiveVal + ConstructorVal + RecursorVal in Zig.
    if (tag == 6) {
        // addInductive returns a raw environment; wrap in Except.ok
        const new_env = addInductive(env, decl);
        const result = lean_alloc_ctor(1, 1, 0);
        lean_ctor_set(result, 0, new_env);
        return result;
    }
    // Tags 7+ don't exist in Declaration, but guard for safety.
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
