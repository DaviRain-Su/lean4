// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Kernel object accessors for the Zig runtime.
//!
//! Provides access to Lean `Environment`, `ConstantInfo`, `InductiveVal`,
//! `ConstructorVal`, `RecursorVal`, `DefinitionVal`, `ReducibilityHints`,
//! and related types used by the type checker.
//!
//! These mirror the C++ accessors in `kernel/environment.h`,
//! `kernel/declaration.h`, and `Lean/Declaration.lean`.
//!
//! `ConstantInfo` is an inductive with 8 constructors:
//!   axiomInfo=0, defnInfo=1, thmInfo=2, opaqueInfo=3, quotInfo=4,
//!   inductInfo=5, ctorInfo=6, recInfo=7
//!
//! Each `*Val` extends `ConstantVal` (name, levelParams, type) via Lean
//! structure inheritance, which stores fields in declaration order as
//! constructor object fields.

pub const force_link = true;

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const ea = @import("expr_accessors.zig");

// ── Lean-exported environment helpers ───────────────────────────────────────

extern fn lean_environment_find(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_environment_quot_init(env: *anyopaque) callconv(.c) u8;
extern fn lean_local_ctx_find(lctx: *anyopaque, fvar_id: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_local_ctx_mk_local_decl(lctx: *anyopaque, fvar_id: *anyopaque, user_name: *anyopaque, type: *anyopaque, bi: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_local_ctx_mk_let_decl(lctx: *anyopaque, fvar_id: *anyopaque, user_name: *anyopaque, type: *anyopaque, value: *anyopaque, nondep: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_local_ctx_is_empty(lctx: *anyopaque) callconv(.c) u8;

// ── Option helpers ──────────────────────────────────────────────────────────

pub inline fn isNone(opt: *anyopaque) bool {
    return object.lean_is_scalar(opt);
}

inline fn someVal(opt: *anyopaque) *anyopaque {
    const v = ctor.lean_ctor_get(opt, 0) orelse @panic("someVal: missing payload");
    rc.lean_inc(v);
    rc.lean_dec(opt);
    return v;
}

// ── Name helpers ─────────────────────────────────────────────────────────────

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

// ── List helpers (List α = nil (scalar 0) | cons head tail) ─────────────────

pub inline fn isListNil(o: *anyopaque) bool {
    return object.lean_is_scalar(o) and object.lean_unbox(o) == 0;
}

pub inline fn listHead(o: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(o, 0) orelse @panic("listHead: missing");
}

pub inline fn listTail(o: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(o, 1) orelse @panic("listTail: missing");
}

pub fn listLength(o: *anyopaque) usize {
    var curr = o;
    var n: usize = 0;
    while (!isListNil(curr)) : (n += 1) {
        curr = listTail(curr);
    }
    return n;
}

// ── ConstantInfo ────────────────────────────────────────────────────────────

pub const ConstantInfoKind = enum(u8) {
    axiom = 0,
    defn = 1,
    thm = 2,
    opaque_ci = 3,
    quot = 4,
    induct = 5,
    ctor = 6,
    rec = 7,
};

pub inline fn ciKind(ci: *anyopaque) ConstantInfoKind {
    return @enumFromInt(object.lean_ptr_tag(ci));
}

pub inline fn ciIsAxiom(ci: *anyopaque) bool {
    return ciKind(ci) == .axiom;
}

pub inline fn ciIsDefinition(ci: *anyopaque) bool {
    return ciKind(ci) == .defn;
}

pub inline fn ciIsTheorem(ci: *anyopaque) bool {
    return ciKind(ci) == .thm;
}

pub inline fn ciIsOpaque(ci: *anyopaque) bool {
    return ciKind(ci) == .opaque_ci;
}

pub inline fn ciIsQuot(ci: *anyopaque) bool {
    return ciKind(ci) == .quot;
}

pub inline fn ciIsInductive(ci: *anyopaque) bool {
    return ciKind(ci) == .induct;
}

pub inline fn ciIsConstructor(ci: *anyopaque) bool {
    return ciKind(ci) == .ctor;
}

pub inline fn ciIsRecursor(ci: *anyopaque) bool {
    return ciKind(ci) == .rec;
}

// ConstantVal fields (shared by all *Val via structure inheritance):
// field 0 = name, field 1 = levelParams, field 2 = type
// Extended fields vary by kind.

pub inline fn ciName(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 0) orelse @panic("ciName");
}

pub inline fn ciLevelParams(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 1) orelse @panic("ciLevelParams");
}

pub inline fn ciType(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 2) orelse @panic("ciType");
}

pub fn ciNumLparams(ci: *anyopaque) usize {
    return listLength(ciLevelParams(ci));
}

// has_value: defnInfo (field 3 = value), thmInfo (field 3 = value), opaqueInfo (field 3 = value)
pub fn ciHasValue(ci: *anyopaque) bool {
    return switch (ciKind(ci)) {
        .defn, .thm, .opaque_ci => true,
        else => false,
    };
}

pub fn ciValue(ci: *anyopaque) *anyopaque {
    return switch (ciKind(ci)) {
        .defn, .thm, .opaque_ci => ctor.lean_ctor_get(ci, 3) orelse @panic("ciValue"),
        else => @panic("ciValue: not a definition/theorem/opaque"),
    };
}

// ── ReducibilityHints ───────────────────────────────────────────────────────
// inductive: opaque=0, abbrev=1, regular=1 field (UInt32)
// For defnInfo: field 4 = hints

pub const HintKind = enum(u8) { opaque_h = 0, abbrev = 1, regular = 2 };

pub inline fn hintKind(h: *anyopaque) HintKind {
    return @enumFromInt(object.lean_ptr_tag(h));
}

pub fn hintGetHeight(h: *anyopaque) u32 {
    return switch (hintKind(h)) {
        .regular => @intCast(object.lean_unbox(ctor.lean_ctor_get(h, 0) orelse object.lean_box(0).?)),
        else => 0,
    };
}

pub fn hintIsRegular(h: *anyopaque) bool {
    return hintKind(h) == .regular;
}

pub fn hintIsAbbrev(h: *anyopaque) bool {
    return hintKind(h) == .abbrev;
}

pub fn hintIsOpaque(h: *anyopaque) bool {
    return hintKind(h) == .opaque_h;
}

// Compare two reducibility hints, returning -1, 0, or 1.
// This mirrors `ReducibilityHints.compare` in Lean.
pub fn hintCompare(h1: *anyopaque, h2: *anyopaque) i8 {
    const k1 = hintKind(h1);
    const k2 = hintKind(h2);
    if (k1 == .abbrev and k2 == .abbrev) return 0;
    if (k1 == .abbrev) return -1;
    if (k2 == .abbrev) return 1;
    if (k1 == .regular and k2 == .regular) {
        const d1 = hintGetHeight(h1);
        const d2 = hintGetHeight(h2);
        // Lean: compare d₂ d₁ (reversed)
        if (d2 < d1) return -1;
        if (d2 > d1) return 1;
        return 0;
    }
    if (k1 == .regular and k2 == .opaque_h) return -1;
    if (k1 == .opaque_h and k2 == .opaque_h) return 0;
    if (k1 == .opaque_h) return 1;
    return 0; // should not reach
}

// ── DefinitionVal ───────────────────────────────────────────────────────────
// extends ConstantVal: field 3 = value, field 4 = hints, field 5 = safety, field 6 = all
// safety is DefinitionSafety: unsafe=0, safe=1, partial=2 (scalar)

pub const DefinitionSafety = enum(u8) { unsafe_def = 0, safe = 1, partial = 2 };

pub fn defnValSafety(ci: *anyopaque) DefinitionSafety {
    // safety is a scalar stored after obj fields. field 5 is the 6th obj field (0-indexed).
    // Actually it's an inductive stored as scalar in the ctor.
    // Let's check: DefinitionVal has obj fields: name, levelParams, type, value, hints, all
    // and scalar fields: safety
    // safety = DefinitionSafety is an enum stored as u8 scalar
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque));
    return @enumFromInt(ctor.lean_ctor_get_uint8(ci, offset));
}

pub fn defnValHints(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 4) orelse @panic("defnValHints");
}

pub fn defnValValue(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 3) orelse @panic("defnValValue");
}

pub fn defnValAll(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 6) orelse @panic("defnValAll");
}

// ── InductiveVal ────────────────────────────────────────────────────────────
// extends ConstantVal: field 3 = numParams, field 4 = numIndices,
// field 5 = all, field 6 = ctors, field 7 = numNested,
// scalar: isRec, isUnsafe, isReflexive

pub fn inductValNumParams(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 3) orelse object.lean_box(0).?);
}

pub fn inductValNumIndices(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 4) orelse object.lean_box(0).?);
}

pub fn inductValAll(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 5) orelse @panic("inductValAll");
}

pub fn inductValCtors(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 6) orelse @panic("inductValCtors");
}

pub fn inductValNumCtors(ci: *anyopaque) usize {
    return listLength(inductValCtors(ci));
}

pub fn inductValIsRec(ci: *anyopaque) bool {
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque));
    return ctor.lean_ctor_get_uint8(ci, offset) != 0;
}

pub fn inductValIsUnsafe(ci: *anyopaque) bool {
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque) + 1);
    return ctor.lean_ctor_get_uint8(ci, offset) != 0;
}

pub fn inductValIsReflexive(ci: *anyopaque) bool {
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque) + 2);
    return ctor.lean_ctor_get_uint8(ci, offset) != 0;
}

// ── ConstructorVal ──────────────────────────────────────────────────────────
// extends ConstantVal: field 3 = induct, field 4 = cidx,
// field 5 = numParams, field 6 = numFields, scalar: isUnsafe

pub fn ctorValInduct(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 3) orelse @panic("ctorValInduct");
}

pub fn ctorValCidx(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 4) orelse object.lean_box(0).?);
}

pub fn ctorValNumParams(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 5) orelse object.lean_box(0).?);
}

pub fn ctorValNumFields(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 6) orelse object.lean_box(0).?);
}

pub fn ctorValIsUnsafe(ci: *anyopaque) bool {
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque));
    return ctor.lean_ctor_get_uint8(ci, offset) != 0;
}

// ── RecursorVal ─────────────────────────────────────────────────────────────
// extends ConstantVal: field 3 = all, field 4 = numParams, field 5 = numIndices,
// field 6 = numMotives, field 7 = numMinors, field 8 = rules, scalar: k, isUnsafe

pub fn recValAll(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 3) orelse @panic("recValAll");
}

pub fn recValNumParams(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 4) orelse object.lean_box(0).?);
}

pub fn recValNumIndices(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 5) orelse object.lean_box(0).?);
}

pub fn recValNumMotives(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 6) orelse object.lean_box(0).?);
}

pub fn recValNumMinors(ci: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(ci, 7) orelse object.lean_box(0).?);
}

pub fn recValRules(ci: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ci, 8) orelse @panic("recValRules");
}

pub fn recValK(ci: *anyopaque) bool {
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque));
    return ctor.lean_ctor_get_uint8(ci, offset) != 0;
}

pub fn recValIsUnsafe(ci: *anyopaque) bool {
    const num_objs = ctor.ctorNumObjs(ci);
    const offset: c_uint = @intCast(num_objs * @sizeOf(?*anyopaque) + 1);
    return ctor.lean_ctor_get_uint8(ci, offset) != 0;
}

pub fn recValGetMajorIdx(ci: *anyopaque) usize {
    return recValNumParams(ci) + recValNumMotives(ci) + recValNumMinors(ci) + recValNumIndices(ci);
}

pub fn recValGetFirstIndexIdx(ci: *anyopaque) usize {
    return recValNumParams(ci) + recValNumMotives(ci) + recValNumMinors(ci);
}

pub fn recValGetFirstMinorIdx(ci: *anyopaque) usize {
    return recValNumParams(ci) + recValNumMotives(ci);
}

// ── RecursorRule ─────────────────────────────────────────────────────────────
// structure: field 0 = ctor (Name), field 1 = nfields (Nat), field 2 = rhs (Expr)

pub fn recRuleCtor(r: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(r, 0) orelse @panic("recRuleCtor");
}

pub fn recRuleNfields(r: *anyopaque) usize {
    return object.lean_unbox(ctor.lean_ctor_get(r, 1) orelse object.lean_box(0).?);
}

pub fn recRuleRhs(r: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(r, 2) orelse @panic("recRuleRhs");
}

// ── Environment helpers ──────────────────────────────────────────────────────

pub fn envFind(env: *anyopaque, n: *anyopaque) ?*anyopaque {
    const opt = lean_environment_find(env, n);
    if (isNone(opt)) {
        rc.lean_dec(opt);
        return null;
    }
    return someVal(opt);
}

pub fn envGet(env: *anyopaque, n: *anyopaque) *anyopaque {
    if (envFind(env, n)) |ci| return ci;
    @panic("(kernel) unknown constant");
}

pub fn envIsQuotInit(env: *anyopaque) bool {
    return lean_environment_quot_init(env) != 0;
}

// ── LocalDecl helpers ───────────────────────────────────────────────────────
// LocalDecl is a Lean structure. For the kernel type checker, the relevant
// fields are: type and optional value.
// LocalDecl: field 0 = fvarId, field 1 = userName, field 2 = kind,
// field 3 = type, field 4 = value? (Option Expr)
// kind: 0 =cdecl, 1 = ldecl

pub const LocalDeclKind = enum(u8) { cdecl = 0, ldecl = 1 };

pub fn localDeclKind(ld: *anyopaque) LocalDeclKind {
    return @enumFromInt(object.lean_ptr_tag(ld));
}

pub fn localDeclType(ld: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ld, 3) orelse @panic("localDeclType");
}

pub fn localDeclValue(ld: *anyopaque) ?*anyopaque {
    const opt = ctor.lean_ctor_get(ld, 4) orelse return null;
    if (isNone(opt)) {
        rc.lean_dec(opt);
        return null;
    }
    return someVal(opt);
}

pub fn localDeclUserName(ld: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(ld, 1) orelse @panic("localDeclUserName");
}

pub fn lctxFind(lctx: *anyopaque, fvar_id: *anyopaque) ?*anyopaque {
    const opt = lean_local_ctx_find(lctx, fvar_id);
    if (isNone(opt)) {
        rc.lean_dec(opt);
        return null;
    }
    return someVal(opt);
}

pub fn lctxIsEmpty(lctx: *anyopaque) bool {
    return lean_local_ctx_is_empty(lctx) != 0;
}
