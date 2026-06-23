// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig implementation of `lean_mk_cases_on`.
//!
//! The cutover build still keeps the C++ `lean_mk_cases_on` live until the
//! symbol is flipped, but this file now mirrors the C++ algorithm closely and
//! exports `lean_mk_cases_on_zig_impl` for parity testing.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const alloc = @import("alloc.zig");
const array = @import("array.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");
const ea = @import("expr_accessors.zig");
const ka = @import("kernel_accessors.zig");
const library_util = @import("library_util.zig");
const runtime_helpers = @import("runtime_helpers.zig");
const runtime_options = @import("runtime_options");
const util_name_generator = @import("util_name_generator.zig");

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;
extern fn lean_expr_instantiate(a: *anyopaque, subst: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_expr_mk_const(n: *anyopaque, ls: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mk_definition_val(n: *anyopaque, lparams: *anyopaque, type_expr: *anyopaque, value: *anyopaque, hints: *anyopaque, safety: u8, all: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mk_definition_decl(v: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mk_empty_local_ctx(unit: *anyopaque) callconv(.c) *anyopaque;

// Kernel.Exception constructor tags (see Lean/Environment.lean):
//   0 = unknownConstant, 1 = alreadyDeclared, ..., 12 = other
const kernel_exception_unknown_constant: u32 = 0;
const kernel_exception_other: u32 = 12;

// Except constructor tags: 0 = error, 1 = ok
const except_error_tag: u32 = 0;
const except_ok_tag: u32 = 1;

inline fn mkExceptError(err: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(except_error_tag, 1, 0);
    ctor.lean_ctor_set(result, 0, err);
    return result;
}

inline fn mkExceptOk(v: *anyopaque) *anyopaque {
    const result = alloc.lean_alloc_ctor(except_ok_tag, 1, 0);
    ctor.lean_ctor_set(result, 0, v);
    return result;
}

inline fn mkUnknownConstant(env: *anyopaque, name: *anyopaque) *anyopaque {
    const ex = alloc.lean_alloc_ctor(kernel_exception_unknown_constant, 2, 0);
    rc.lean_inc(env);
    rc.lean_inc(name);
    ctor.lean_ctor_set(ex, 0, env);
    ctor.lean_ctor_set(ex, 1, name);
    return mkExceptError(ex);
}

inline fn mkOtherError(msg: [*:0]const u8) *anyopaque {
    const ex = alloc.lean_alloc_ctor(kernel_exception_other, 1, 0);
    const msg_obj = string.lean_mk_string(msg);
    ctor.lean_ctor_set(ex, 0, msg_obj);
    return mkExceptError(ex);
}

inline fn nameEq(a: *anyopaque, b: *anyopaque) bool {
    return lean_name_eq(a, b) != 0;
}

fn mkAbbrevHints() *anyopaque {
    return object.lean_box(1).?;
}
fn listToArray(list: *anyopaque, out: *std.ArrayList(*anyopaque)) void {
    var curr = list;
    while (!ka.isListNil(curr)) {
        out.append(std.heap.c_allocator, ka.listHead(curr)) catch @panic("listToArray: oom");
        curr = ka.listTail(curr);
    }
}

fn isTypeFormerArg(c_ids: []const *anyopaque, arg: *anyopaque) bool {
    const fn_expr = ea.getAppFn(arg);
    if (!ea.isFVar(fn_expr)) return false;
    const fn_name = ea.fvarName(fn_expr);
    for (c_ids) |c_id| {
        if (nameEq(c_id, fn_name)) return true;
    }
    return false;
}

fn instantiate1(body: *anyopaque, local: *anyopaque) *anyopaque {
    var subst_items = [_]*anyopaque{local};
    const subst = array.mkArrayFromSlice(subst_items[0..]);
    defer rc.lean_dec(subst);
    return lean_expr_instantiate(body, subst);
}

fn constantInfoIsUnsafe(ci: *anyopaque) bool {
    return switch (ka.ciKind(ci)) {
        .axiom => blk: {
            const v = ka.ciVal(ci);
            const offset: c_uint = @intCast(ctor.ctorNumObjs(v) * @sizeOf(?*anyopaque));
            break :blk ctor.lean_ctor_get_uint8(v, offset) != 0;
        },
        .defn => ka.defnValSafety(ci) == .unsafe_def,
        .thm => false,
        .opaque_ci => blk: {
            const v = ka.ciVal(ci);
            const offset: c_uint = @intCast(ctor.ctorNumObjs(v) * @sizeOf(?*anyopaque));
            break :blk ctor.lean_ctor_get_uint8(v, offset) != 0;
        },
        .quot => false,
        .induct => ka.inductValIsUnsafe(ci),
        .ctor => ka.ctorValIsUnsafe(ci),
        .rec => ka.recValIsUnsafe(ci),
    };
}

fn exprUsesUnsafe(env: *anyopaque, e: *anyopaque) bool {
    if (object.lean_is_scalar(e)) return false;
    return switch (ea.kind(e)) {
        .BVar, .FVar, .MVar, .Sort, .Lit => false,
        .Const => blk: {
            const ci = ka.envFind(env, ea.constName(e)) orelse break :blk false;
            defer rc.lean_dec(ci);
            break :blk constantInfoIsUnsafe(ci);
        },
        .App => exprUsesUnsafe(env, ea.appFn(e)) or exprUsesUnsafe(env, ea.appArg(e)),
        .Lambda, .Pi => exprUsesUnsafe(env, ea.bindingDomain(e)) or exprUsesUnsafe(env, ea.bindingBody(e)),
        .Let => exprUsesUnsafe(env, ea.letType(e)) or exprUsesUnsafe(env, ea.letValue(e)) or exprUsesUnsafe(env, ea.letBody(e)),
        .MData => exprUsesUnsafe(env, ea.mdataExpr(e)),
        .Proj => exprUsesUnsafe(env, ea.projExpr(e)),
    };
}

const BuildCtx = struct {
    env: *anyopaque,
    lctx: *anyopaque,
    ngen: util_name_generator.NameGenerator,
    unit: *anyopaque,
    star: *anyopaque,
    c_ids: *std.ArrayList(*anyopaque),
    c_main_id: *anyopaque,
    rec_fvar_types: *std.ArrayList(*anyopaque),
    rec_fvar_bis: *std.ArrayList(u8),
    cases_on_params: *std.ArrayList(*anyopaque),
    rec_args: *std.ArrayList(*anyopaque),
    owned_fvars: *std.ArrayList(*anyopaque),
    owned_exprs: *std.ArrayList(*anyopaque),

    fn rememberFVar(self: *BuildCtx, fvar: *anyopaque) *anyopaque {
        self.owned_fvars.append(std.heap.c_allocator, fvar) catch @panic("rememberFVar: oom");
        return fvar;
    }

    fn rememberExpr(self: *BuildCtx, e: *anyopaque) *anyopaque {
        self.owned_exprs.append(std.heap.c_allocator, e) catch @panic("rememberExpr: oom");
        return e;
    }

    fn mkLocal(self: *BuildCtx, user_name: *anyopaque, type_expr: *anyopaque, bi: u8) *anyopaque {
        return self.rememberFVar(library_util.mkLocalDeclWithGen(&self.lctx, &self.ngen, user_name, type_expr, bi));
    }

    fn processMinor(self: *BuildCtx, minor_idx: usize, is_main: bool) void {
        var minor_non_rec_params: std.ArrayList(*anyopaque) = .empty;
        defer minor_non_rec_params.deinit(std.heap.c_allocator);
        var minor_params: std.ArrayList(*anyopaque) = .empty;
        defer minor_params.deinit(std.heap.c_allocator);

        const minor_bi = self.rec_fvar_bis.items[minor_idx];
        var minor_type = rc.lean_inc_ret(self.rec_fvar_types.items[minor_idx]);
        defer rc.lean_dec(minor_type);

        while (ea.isPi(minor_type)) {
            const binding_name = ea.bindingName(minor_type);
            const curr_type = ea.bindingDomain(minor_type);
            const bi = ea.bindingInfo(minor_type);
            const local = self.mkLocal(binding_name, curr_type, bi);

            var it = curr_type;
            while (ea.isPi(it)) {
                it = ea.bindingBody(it);
            }

            if (isTypeFormerArg(self.c_ids.items, it)) {
                const app_name = ea.fvarName(ea.getAppFn(it));
                if (nameEq(app_name, self.c_main_id)) {
                    minor_params.append(std.heap.c_allocator, local) catch @panic("processMinor: oom");
                } else {
                    const unit_ty = library_util.mkPiUnit(curr_type, self.unit);
                    defer rc.lean_dec(unit_ty);
                    const new_local = self.mkLocal(binding_name, unit_ty, bi);
                    minor_params.append(std.heap.c_allocator, new_local) catch @panic("processMinor: oom");
                }
            } else {
                minor_params.append(std.heap.c_allocator, local) catch @panic("processMinor: oom");
                if (is_main) {
                    minor_non_rec_params.append(std.heap.c_allocator, local) catch @panic("processMinor: oom");
                }
            }

            const new_minor_type = instantiate1(ea.bindingBody(minor_type), local);
            rc.lean_dec(minor_type);
            minor_type = new_minor_type;
        }

        if (is_main) {
            const new_c_type = library_util.mkPiFromFVars(self.lctx, minor_non_rec_params.items, minor_type);
            defer rc.lean_dec(new_c_type);
            const new_c_user = runtime_helpers.lean_name_mk_str(object.lean_box(0).?, "_minor");
            defer rc.lean_dec(new_c_user);
            const new_c = self.mkLocal(new_c_user, new_c_type, minor_bi);
            self.cases_on_params.append(std.heap.c_allocator, new_c) catch @panic("processMinor: oom");
            const new_c_app = library_util.mkAppN(new_c, minor_non_rec_params.items);
            defer rc.lean_dec(new_c_app);
            const rec_arg = self.rememberExpr(library_util.mkLambdaFromFVars(self.lctx, minor_params.items, new_c_app));
            self.rec_args.append(std.heap.c_allocator, rec_arg) catch @panic("processMinor: oom");
        } else {
            const rec_arg = self.rememberExpr(library_util.mkLambdaFromFVars(self.lctx, minor_params.items, self.star));
            self.rec_args.append(std.heap.c_allocator, rec_arg) catch @panic("processMinor: oom");
        }
    }
};

pub export fn lean_mk_cases_on_zig_impl(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque {
    const ind_info = ka.envFind(env, n) orelse return mkUnknownConstant(env, n);
    defer rc.lean_dec(ind_info);
    if (!ka.ciIsInductive(ind_info)) {
        return mkOtherError("error in 'casesOn' generation, declaration is not an inductive datatype");
    }

    const cases_on_name = runtime_helpers.lean_name_mk_str(n, "casesOn");
    defer rc.lean_dec(cases_on_name);
    const rec_name = runtime_helpers.lean_name_mk_str(n, "rec");
    defer rc.lean_dec(rec_name);

    const rec_info = ka.envFind(env, rec_name) orelse return mkUnknownConstant(env, rec_name);
    defer rc.lean_dec(rec_info);
    if (!ka.ciIsRecursor(rec_info)) {
        return mkOtherError("error in 'casesOn' generation, matching recursor is not a recursor");
    }
    library_util.initializeLibraryUtil();

    util_name_generator.ensureConstructionsNameGeneratorPrefix();

    var owned_fvars: std.ArrayList(*anyopaque) = .empty;
    defer {
        owned_fvars.deinit(std.heap.c_allocator);
    }
    var owned_exprs: std.ArrayList(*anyopaque) = .empty;
    defer {
        for (owned_exprs.items) |e| rc.lean_dec(e);
        owned_exprs.deinit(std.heap.c_allocator);
    }
    var rec_fvars: std.ArrayList(*anyopaque) = .empty;
    defer rec_fvars.deinit(std.heap.c_allocator);
    var rec_fvar_types: std.ArrayList(*anyopaque) = .empty;
    defer {
        for (rec_fvar_types.items) |ty| rc.lean_dec(ty);
        rec_fvar_types.deinit(std.heap.c_allocator);
    }
    var rec_fvar_bis: std.ArrayList(u8) = .empty;
    defer rec_fvar_bis.deinit(std.heap.c_allocator);
    var ind_names: std.ArrayList(*anyopaque) = .empty;
    defer ind_names.deinit(std.heap.c_allocator);
    var c_ids: std.ArrayList(*anyopaque) = .empty;
    defer c_ids.deinit(std.heap.c_allocator);
    var cases_on_params: std.ArrayList(*anyopaque) = .empty;
    defer cases_on_params.deinit(std.heap.c_allocator);
    var rec_args: std.ArrayList(*anyopaque) = .empty;
    defer rec_args.deinit(std.heap.c_allocator);
    listToArray(ka.inductValAll(ind_info), &ind_names);
    var lctx: *anyopaque = lean_mk_empty_local_ctx(object.lean_box(0).?);
    defer rc.lean_dec(lctx);
    var ngen = util_name_generator.mkConstructionsNameGenerator();
    var rec_type = rc.lean_inc_ret(ka.ciType(rec_info));
    defer rc.lean_dec(rec_type);

    while (ea.isPi(rec_type)) {
        const domain = ea.bindingDomain(rec_type);
        const bi = ea.bindingInfo(rec_type);
        const fvar = library_util.mkLocalDeclWithGen(&lctx, &ngen, ea.bindingName(rec_type), domain, bi);
        owned_fvars.append(std.heap.c_allocator, fvar) catch @panic("lean_mk_cases_on_zig_impl: oom");
        rec_fvars.append(std.heap.c_allocator, fvar) catch @panic("lean_mk_cases_on_zig_impl: oom");
        rec_fvar_types.append(std.heap.c_allocator, rc.lean_inc_ret(domain)) catch @panic("lean_mk_cases_on_zig_impl: oom");
        rec_fvar_bis.append(std.heap.c_allocator, bi) catch @panic("lean_mk_cases_on_zig_impl: oom");
        const new_rec_type = instantiate1(ea.bindingBody(rec_type), fvar);
        rc.lean_dec(rec_type);
        rec_type = new_rec_type;
    }
    const num_params = ka.recValNumParams(rec_info);
    const num_indices = ka.recValNumIndices(rec_info);
    const num_motives = ka.recValNumMotives(rec_info);
    const num_minors = ka.recValNumMinors(rec_info);

    const lvls = library_util.lparamsToLevels(ka.ciLevelParams(rec_info));
    const elim_to_prop = ka.ciNumLparams(rec_info) == ka.ciNumLparams(ind_info);
    const elim_lvl = if (elim_to_prop) object.lean_box(0).? else ka.listHead(lvls);
    const unit = library_util.mkUnit(if (elim_to_prop) elim_lvl else rc.lean_inc_ret(elim_lvl));
    const star = library_util.mkUnitMk(if (elim_to_prop) elim_lvl else rc.lean_inc_ret(elim_lvl));
    const rec_cnst = lean_expr_mk_const(rc.lean_inc_ret(rec_name), lvls);
    defer rc.lean_dec(rec_cnst);

    for (0..num_params) |i| {
        cases_on_params.append(std.heap.c_allocator, rec_fvars.items[i]) catch @panic("lean_mk_cases_on_zig_impl: oom");
        rec_args.append(std.heap.c_allocator, rec_fvars.items[i]) catch @panic("lean_mk_cases_on_zig_impl: oom");
    }

    var c_main_id: ?*anyopaque = null;
    var i = num_params;
    for (0..num_motives) |j| {
        const motive = rec_fvars.items[i];
        const motive_id = ea.fvarName(motive);
        c_ids.append(std.heap.c_allocator, motive_id) catch @panic("lean_mk_cases_on_zig_impl: oom");
        if (j < ind_names.items.len and nameEq(ind_names.items[j], n)) {
            cases_on_params.append(std.heap.c_allocator, motive) catch @panic("lean_mk_cases_on_zig_impl: oom");
            rec_args.append(std.heap.c_allocator, motive) catch @panic("lean_mk_cases_on_zig_impl: oom");
            c_main_id = motive_id;
        } else {
            const unit_fun = library_util.mkFunUnit(rec_fvar_types.items[i], unit);
            owned_exprs.append(std.heap.c_allocator, unit_fun) catch @panic("lean_mk_cases_on_zig_impl: oom");
            rec_args.append(std.heap.c_allocator, unit_fun) catch @panic("lean_mk_cases_on_zig_impl: oom");
        }
        i += 1;
    }

    const main_motive_id = c_main_id orelse return mkOtherError("error in 'casesOn' generation, failed to find main motive");

    const tail_start = num_params + num_motives + num_minors;
    for (0..num_indices + 1) |offset| {
        cases_on_params.append(std.heap.c_allocator, rec_fvars.items[tail_start + offset]) catch @panic("lean_mk_cases_on_zig_impl: oom");
    }

    var ctx = BuildCtx{
        .env = env,
        .lctx = lctx,
        .ngen = ngen,
        .unit = unit,
        .star = star,
        .c_ids = &c_ids,
        .c_main_id = main_motive_id,
        .rec_fvar_types = &rec_fvar_types,
        .rec_fvar_bis = &rec_fvar_bis,
        .cases_on_params = &cases_on_params,
        .rec_args = &rec_args,
        .owned_fvars = &owned_fvars,
        .owned_exprs = &owned_exprs,
    };

    var minor_idx: usize = 0;
    for (ind_names.items) |j_name| {
        const is_main_inductive = nameEq(j_name, n);
        const j_info = if (is_main_inductive)
            rc.lean_inc_ret(ind_info)
        else blk: {
            const j_name_keep = rc.lean_inc_ret(j_name);
            defer rc.lean_dec(j_name_keep);
            break :blk ka.envGet(env, j_name_keep);
        };
        defer rc.lean_dec(j_info);
        std.debug.assert(ka.ciIsInductive(j_info));
        const num_ctors = ka.listLength(ka.inductValCtors(j_info));
        for (0..num_ctors) |_| {
            ctx.processMinor(num_params + num_motives + minor_idx, is_main_inductive);
            minor_idx += 1;
        }
    }
    while (minor_idx < num_minors) : (minor_idx += 1) {
        ctx.processMinor(num_params + num_motives + minor_idx, false);
    }

    for (0..num_indices + 1) |offset| {
        rec_args.append(std.heap.c_allocator, rec_fvars.items[tail_start + offset]) catch @panic("lean_mk_cases_on_zig_impl: oom");
    }

    const cases_on_type = library_util.mkPiFromFVars(ctx.lctx, cases_on_params.items, rec_type);
    const rec_app = library_util.mkAppN(rec_cnst, rec_args.items);
    defer rc.lean_dec(rec_app);
    const cases_on_value = library_util.mkLambdaFromFVars(ctx.lctx, cases_on_params.items, rec_app);

    const hints = mkAbbrevHints();
    const type_unsafe = exprUsesUnsafe(env, cases_on_type);
    const value_unsafe = exprUsesUnsafe(env, cases_on_value);
    const safety: u8 = if (type_unsafe or value_unsafe)
        @intFromEnum(ka.DefinitionSafety.unsafe_def)
    else
        @intFromEnum(ka.DefinitionSafety.safe);
    const all = ka.mkList1(rc.lean_inc_ret(cases_on_name));
    const defn_val = lean_mk_definition_val(rc.lean_inc_ret(cases_on_name), rc.lean_inc_ret(ka.ciLevelParams(rec_info)), cases_on_type, cases_on_value, hints, safety, all);
    const decl = lean_mk_definition_decl(defn_val);
    return mkExceptOk(decl);
}

fn lean_mk_cases_on(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_cases_on_zig_impl(env, n);
}

pub export fn l_mkCasesOnImpZig(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_cases_on_zig_impl(env, n);
}

pub export fn l_mkCasesOnImpZig___boxed(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque {
    return lean_mk_cases_on_zig_impl(env, n);
}

pub const force_link = true;

comptime {
    if (runtime_options.export_kernel_symbols and !runtime_options.compile_cpp_cutover) {
        @export(&lean_mk_cases_on, .{ .name = "lean_mk_cases_on", .linkage = .strong });
    }
}
