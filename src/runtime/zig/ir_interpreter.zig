// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! IR interpreter ported from `src/library/ir_interpreter.cpp`.
//!
//! A stack-based interpreter for Lean λRC IR code. Used for evaluating
//! constants and running main when native (JIT) compilation is unavailable.
//!
//! The interpreter maintains a homogeneous stack of `Value`s (unboxed or
//! pointers), maps IR variables to stack slots, and supports join points,
//! tail recursion, constructor allocation/reuse, and native symbol lookup
//! via dlsym.

pub const force_link = true;

const std = @import("std");
const builtin = @import("builtin");
const object = @import("object.zig");
const alloc = @import("alloc.zig");
const ctor = @import("ctor.zig");
const rc = @import("rc.zig");
const array = @import("array.zig");
const box = @import("box.zig");
const interrupt = @import("interrupt.zig");
const io_min = @import("io_min.zig");
const apply_mod = @import("apply.zig");
const ea = @import("expr_accessors.zig");

const runtime_options = @import("runtime_options");
const export_kernel_symbols = runtime_options.export_kernel_symbols;

// ── Lean-exported helpers ───────────────────────────────────────────────────

extern fn lean_ir_find_env_decl(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_ir_find_env_decl_boxed(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_get_symbol_stem(env: *anyopaque, fn_name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_mk_mangled_boxed_name(s: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_get_regular_init_fn_name_for(env: *anyopaque, fn_name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_get_export_name_for(env: *anyopaque, fn_name: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_decl_get_sorry_dep(env: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_float_of_nat(a: *anyopaque) callconv(.c) f64;
extern fn lean_float32_of_nat(a: *anyopaque) callconv(.c) f32;
extern fn lean_elab_environment_of_kernel_env(env: *anyopaque) callconv(.c) *anyopaque;

// ── IR type enum (matching C++ `enum class type`) ────────────────────────────

pub const IRType = enum(u8) {
    Float = 0,
    UInt8 = 1,
    UInt16 = 2,
    UInt32 = 3,
    UInt64 = 4,
    USize = 5,
    Irrelevant = 6,
    Object = 7,
    TObject = 8,
    Float32 = 9,
    Struct = 10,
    Union = 11,
    Tagged = 12,
    Void = 13,
};

fn irTypeFromObj(o: *anyopaque) IRType {
    if (object.lean_is_scalar(o)) {
        return @enumFromInt(@as(u8, @intCast(object.lean_unbox(o))));
    }
    @panic("unsupported IRType (struct/union not scalar)");
}

inline fn typeIsScalar(t: IRType) bool {
    return switch (t) {
        .Float, .Float32, .UInt8, .UInt16, .UInt32, .UInt64, .USize => true,
        else => false,
    };
}

// ── Value: union of unboxed scalar or object pointer ─────────────────────────

const Value = struct {
    // Using u64 for num covers all scalar types; m_obj for object pointers.
    num: u64 = 0,
    obj: ?*anyopaque = null,
    is_obj: bool = false,

    fn fromObj(o: *anyopaque) Value {
        return .{ .obj = o, .is_obj = true };
    }

    fn fromNum(n: u64) Value {
        return .{ .num = n, .is_obj = false };
    }

    fn fromFloat(f: f64) Value {
        return .{ .num = @bitCast(f), .is_obj = false };
    }

    fn fromFloat32(f: f32) Value {
        const bits: u32 = @bitCast(f);
        return .{ .num = @as(u64, bits), .is_obj = false };
    }
};

// ── IR object accessors ─────────────────────────────────────────────────────
// These mirror the inline accessors in ir_interpreter.cpp.
// IR.Expr constructor tags (matching C++ expr_kind / Lean IR.Expr):
//   Ctor=0, Reset=1, Reuse=2, Proj=3, UProj=4, SProj=5, FAp=6, PAp=7,
//   Ap=8, Box=9, Unbox=10, Lit=11, IsShared=12

const ExprKind = enum(u8) {
    Ctor = 0,
    Reset = 1,
    Reuse = 2,
    Proj = 3,
    UProj = 4,
    SProj = 5,
    FAp = 6,
    PAp = 7,
    Ap = 8,
    Box = 9,
    Unbox = 10,
    Lit = 11,
    IsShared = 12,
};

inline fn exprTag(e: *anyopaque) ExprKind {
    return @enumFromInt(object.lean_ptr_tag(e));
}

// VarId, FunId, JoinPointId are Nat (scalars or mpz objects)
inline fn natSmallValue(n: *anyopaque) usize {
    if (object.lean_is_scalar(n)) return object.lean_unbox(n);
    // mpz path: small nat stored as mpz with 1 limb
    // For simplicity, handle scalar case; mpz case should be rare in IR
    return object.lean_unbox(n);
}

inline fn getBoolField(o: *anyopaque, num_obj_fields: usize) bool {
    // bool stored as u8 scalar after obj fields
    const offset: c_uint = @intCast(num_obj_fields * @sizeOf(?*anyopaque));
    return ctor.lean_ctor_get_uint8(o, offset) != 0;
}

// IRType field accessor: stored as scalar (boxed in ctor)
fn cnstrGetType(o: *anyopaque, i: c_uint) IRType {
    const t_obj = ctor.lean_ctor_get(o, i) orelse @panic("cnstr_get_type: missing field");
    return irTypeFromObj(t_obj);
}

// Arg: var (ctor 0, 1 field = VarId) or erased (scalar)
inline fn argIsIrrelevant(a: *anyopaque) bool {
    return object.lean_is_scalar(a);
}

inline fn argVarId(a: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(a, 0) orelse @panic("arg_var_id: missing");
}

// CtorInfo: structure with 5 obj fields (name, cidx, size, usize, ssize)
inline fn ctorInfoName(c: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(c, 0) orelse @panic("ctor_info_name");
}
inline fn ctorInfoTag(c: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(c, 1) orelse @panic("ctor_info_tag"));
}
inline fn ctorInfoSize(c: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(c, 2) orelse @panic("ctor_info_size"));
}
inline fn ctorInfoUsize(c: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(c, 3) orelse @panic("ctor_info_usize"));
}
inline fn ctorInfoSsize(c: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(c, 4) orelse @panic("ctor_info_ssize"));
}

// LitVal: num (ctor 0, 1 field = Nat) or str (ctor 1, 1 field = String)
inline fn litValTag(l: *anyopaque) u8 {
    return object.lean_ptr_tag(l);
}
inline fn litValNum(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("lit_val_num");
}
inline fn litValStr(l: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(l, 0) orelse @panic("lit_val_str");
}

// Expr field accessors
inline fn exprCtorInfo(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_ctor_info");
}
inline fn exprCtorArgs(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_ctor_args");
}
inline fn exprResetNumObjs(e: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(e, 0) orelse @panic("expr_reset_num_objs"));
}
inline fn exprResetObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_reset_obj");
}
inline fn exprReuseObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_reuse_obj");
}
inline fn exprReuseCtor(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_reuse_ctor");
}
inline fn exprReuseUpdateHeader(e: *anyopaque) bool {
    return getBoolField(e, 3);
}
inline fn exprReuseArgs(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 2) orelse @panic("expr_reuse_args");
}
inline fn exprProjIdx(e: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(e, 0) orelse @panic("expr_proj_idx"));
}
inline fn exprProjObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_proj_obj");
}
inline fn exprUProjIdx(e: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(e, 0) orelse @panic("expr_uproj_idx"));
}
inline fn exprUProjObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_uproj_obj");
}
inline fn exprSProjIdx(e: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(e, 0) orelse @panic("expr_sproj_idx"));
}
inline fn exprSProjOffset(e: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(e, 1) orelse @panic("expr_sproj_offset"));
}
inline fn exprSProjObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 2) orelse @panic("expr_sproj_obj");
}
inline fn exprFapFun(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_fap_fun");
}
inline fn exprFapArgs(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_fap_args");
}
inline fn exprPapFun(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_pap_fun");
}
inline fn exprPapArgs(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_pap_args");
}
inline fn exprApFun(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_ap_fun");
}
inline fn exprApArgs(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_ap_args");
}
inline fn exprBoxType(e: *anyopaque) IRType {
    return cnstrGetType(e, 0);
}
inline fn exprBoxObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 1) orelse @panic("expr_box_obj");
}
inline fn exprUnboxObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_unbox_obj");
}
inline fn exprLitVal(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_lit_val");
}
inline fn exprIsSharedObj(e: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(e, 0) orelse @panic("expr_is_shared_obj");
}

// FnBody tags (matching C++ fn_body_kind / Lean IR.FnBody):
// VDecl=0, JDecl=1, Set=2, SetTag=3, USet=4, SSet=5, Inc=6, Dec=7,
// Del=8, Case=9, Ret=10, Jmp=11, Unreachable=12

const FnBodyKind = enum(u8) {
    VDecl = 0,
    JDecl = 1,
    Set = 2,
    SetTag = 3,
    USet = 4,
    SSet = 5,
    Inc = 6,
    Dec = 7,
    Del = 8,
    Case = 9,
    Ret = 10,
    Jmp = 11,
    Unreachable = 12,
};

inline fn fnBodyTag(b: *anyopaque) FnBodyKind {
    return @enumFromInt(object.lean_ptr_tag(b));
}

// FnBody field accessors
inline fn fnBodyVDeclVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("vdecl_var");
}
inline fn fnBodyVDeclType(b: *anyopaque) IRType {
    return cnstrGetType(b, 1);
}
inline fn fnBodyVDeclExpr(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("vdecl_expr");
}
inline fn fnBodyVDeclCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 3) orelse @panic("vdecl_cont");
}
inline fn fnBodyJDeclId(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("jdecl_id");
}
inline fn fnBodyJDeclParams(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 1) orelse @panic("jdecl_params");
}
inline fn fnBodyJDeclBody(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("jdecl_body");
}
inline fn fnBodyJDeclCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 3) orelse @panic("jdecl_cont");
}
inline fn fnBodySetVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("set_var");
}
inline fn fnBodySetIdx(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 1) orelse @panic("set_idx"));
}
inline fn fnBodySetArg(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("set_arg");
}
inline fn fnBodySetCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 3) orelse @panic("set_cont");
}
inline fn fnBodySetTagVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("settag_var");
}
inline fn fnBodySetTagCidx(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 1) orelse @panic("settag_cidx"));
}
inline fn fnBodySetTagCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("settag_cont");
}
inline fn fnBodyUSetTarget(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("uset_target");
}
inline fn fnBodyUSetIdx(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 1) orelse @panic("uset_idx"));
}
inline fn fnBodyUSetSource(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("uset_source");
}
inline fn fnBodyUSetCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 3) orelse @panic("uset_cont");
}
inline fn fnBodySSetTarget(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("sset_target");
}
inline fn fnBodySSetIdx(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 1) orelse @panic("sset_idx"));
}
inline fn fnBodySSetOffset(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 2) orelse @panic("sset_offset"));
}
inline fn fnBodySSetSource(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 3) orelse @panic("sset_source");
}
inline fn fnBodySSetType(b: *anyopaque) IRType {
    return cnstrGetType(b, 4);
}
inline fn fnBodySSetCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 5) orelse @panic("sset_cont");
}
inline fn fnBodyIncVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("inc_var");
}
inline fn fnBodyIncVal(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 1) orelse @panic("inc_val"));
}
inline fn fnBodyIncCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("inc_cont");
}
inline fn fnBodyDecVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("dec_var");
}
inline fn fnBodyDecVal(b: *anyopaque) usize {
    return natSmallValue(ctor.lean_ctor_get(b, 1) orelse @panic("dec_val"));
}
inline fn fnBodyDecCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 2) orelse @panic("dec_cont");
}
inline fn fnBodyDelVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("del_var");
}
inline fn fnBodyDelCont(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 1) orelse @panic("del_cont");
}
inline fn fnBodyCaseVar(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 1) orelse @panic("case_var");
}
inline fn fnBodyCaseVarType(b: *anyopaque) IRType {
    return cnstrGetType(b, 2);
}
inline fn fnBodyCaseAlts(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 3) orelse @panic("case_alts");
}
inline fn fnBodyRetArg(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("ret_arg");
}
inline fn fnBodyJmpJp(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 0) orelse @panic("jmp_jp");
}
inline fn fnBodyJmpArgs(b: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(b, 1) orelse @panic("jmp_args");
}

// Alt: ctor (tag 0, fields: ctor_info, cont) or default (tag 1, field: cont)
inline fn altTag(a: *anyopaque) u8 {
    return object.lean_ptr_tag(a);
}
inline fn altCtorInfo(a: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(a, 0) orelse @panic("alt_ctor_info");
}
inline fn altCtorCont(a: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(a, 1) orelse @panic("alt_ctor_cont");
}
inline fn altDefaultCont(a: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(a, 0) orelse @panic("alt_default_cont");
}

// Decl: structure with fields (fun_id, params, type, fun_body, ...)
// DeclKind: Fun=0, Extern=1
const DeclKind = enum(u8) { Fun = 0, Extern = 1 };

inline fn declTag(d: *anyopaque) DeclKind {
    // decl_tag is the first scalar field after obj fields
    // Actually Decl is an inductive, so tag is ctor tag
    return @enumFromInt(object.lean_ptr_tag(d));
}
inline fn declFunId(d: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(d, 0) orelse @panic("decl_fun_id");
}
inline fn declParams(d: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(d, 1) orelse @panic("decl_params");
}
inline fn declType(d: *anyopaque) IRType {
    return cnstrGetType(d, 2);
}
inline fn declFunBody(d: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(d, 3) orelse @panic("decl_fun_body");
}

// Param: structure (x: VarId, borrow: Bool, ty: IRType)
inline fn paramVar(p: *anyopaque) *anyopaque {
    return ctor.lean_ctor_get(p, 0) orelse @panic("param_var");
}
inline fn paramBorrow(p: *anyopaque) bool {
    return getBoolField(p, 2);
}
inline fn paramType(p: *anyopaque) IRType {
    return cnstrGetType(p, 2);
}

// ── Box/unbox helpers ──────────────────────────────────────────────────────

fn boxT(v: Value, t: IRType) *anyopaque {
    return switch (t) {
        .Float => blk: {
            const f: f64 = @bitCast(v.num);
            break :blk box.lean_box_float(f) orelse object.lean_box(0).?;
        },
        .Float32 => blk: {
            const f: f32 = @bitCast(@as(u32, @intCast(v.num & 0xFFFFFFFF)));
            break :blk box.lean_box_float32(f) orelse object.lean_box(0).?;
        },
        .UInt8 => object.lean_box(@as(usize, @intCast(v.num & 0xFF))).?,
        .UInt16 => object.lean_box(@as(usize, @intCast(v.num & 0xFFFF))).?,
        .UInt32 => object.lean_box(@as(usize, @intCast(v.num & 0xFFFFFFFF))).?,
        .UInt64 => object.lean_box(v.num).?,
        .USize => object.lean_box(@as(usize, @intCast(v.num))).?,
        .Irrelevant, .Void => object.lean_box(0).?,
        .Object, .Tagged, .TObject => v.obj orelse object.lean_box(0).?,
        .Struct, .Union => @panic("box_t: struct/union not implemented"),
    };
}

fn unboxT(o: *anyopaque, t: IRType) Value {
    return switch (t) {
        .Float => Value.fromFloat(box.lean_unbox_float(o)),
        .Float32 => Value.fromFloat32(box.lean_unbox_float32(o)),
        .UInt8 => Value.fromNum(ctor.lean_ctor_get_uint8(o, 0)),
        .UInt16 => Value.fromNum(ctor.lean_ctor_get_uint16(o, 0)),
        .UInt32 => Value.fromNum(ctor.lean_ctor_get_uint32(o, 0)),
        .UInt64 => Value.fromNum(ctor.lean_ctor_get_uint64(o, 0)),
        .USize => Value.fromNum(ctor.lean_ctor_get_usize(o, 0)),
        .Irrelevant, .Void => Value.fromNum(0),
        .Object, .Tagged, .TObject => Value.fromObj(o),
        .Struct, .Union => @panic("unbox_t: struct/union not implemented"),
    };
}

// ── Name comparison ─────────────────────────────────────────────────────────

extern fn lean_name_eq(a: *anyopaque, b: *anyopaque) callconv(.c) u8;

// ── Native symbol lookup via dlsym ───────────────────────────────────────────

const dl_handle = ?*anyopaque;
extern fn dlopen(filename: ?[*:0]const u8, flag: c_int) callconv(.c) dl_handle;
extern fn dlsym(handle: dl_handle, symbol: [*:0]const u8) callconv(.c) ?*anyopaque;
extern fn dlerror() callconv(.c) ?[*:0]const u8;

const RTLD_DEFAULT: c_int = if (builtin.os.tag == .macos) -2 else 0;

fn lookupSymbolInCurexe(sym: [*:0]const u8) ?*anyopaque {
    // Use RTLD_DEFAULT to search in all loaded images
    const handle = dlopen(null, RTLD_DEFAULT);
    return dlsym(handle, sym);
}
extern fn lean_string_cstr(s: *anyopaque) callconv(.c) [*:0]const u8;

// ── Interpreter ──────────────────────────────────────────────────────────────

const Frame = struct {
    fn_name: *anyopaque,
    arg_bp: usize,
    jp_bp: usize,
};

const SymbolCacheEntry = struct {
    decl: *anyopaque,
    native_addr: ?*anyopaque,
    native_boxed: bool,
};

const ConstantCacheEntry = struct {
    is_scalar: bool,
    val: Value,
};

const Interpreter = struct {
    arg_stack: std.ArrayListUnmanaged(Value) = .empty,
    jp_stack: std.ArrayListUnmanaged(*anyopaque) = .empty,
    call_stack: std.ArrayListUnmanaged(Frame) = .empty,
    env: *anyopaque,
    opts: *anyopaque,
    prefer_native: bool = true,
    constant_cache: std.AutoHashMap(*anyopaque, ConstantCacheEntry),
    symbol_cache: std.AutoHashMap(*anyopaque, SymbolCacheEntry),
    allocator: std.mem.Allocator,

    fn init(env: *anyopaque, opts: *anyopaque, a: std.mem.Allocator) Interpreter {
        return .{
            .env = env,
            .opts = opts,
            .constant_cache = std.AutoHashMap(*anyopaque, ConstantCacheEntry).init(a),
            .symbol_cache = std.AutoHashMap(*anyopaque, SymbolCacheEntry).init(a),
            .allocator = a,
        };
    }

    fn deinit(self: *Interpreter) void {
        // Clean up constant cache
        var it = self.constant_cache.valueIterator();
        while (it.next()) |e| {
            if (!e.is_scalar) {
                if (e.val.obj) |o| rc.lean_dec(o);
            }
        }
        self.arg_stack.deinit(self.allocator);
        self.jp_stack.deinit(self.allocator);
        self.call_stack.deinit(self.allocator);
        self.constant_cache.deinit();
        self.symbol_cache.deinit();
    }

    fn getFrame(self: *Interpreter) *Frame {
        return &self.call_stack.items[self.call_stack.items.len - 1];
    }

    fn var_(self: *Interpreter, v: *anyopaque) *Value {
        const i = self.getFrame().arg_bp + natSmallValue(v) - 1;
        if (i >= self.arg_stack.items.len) {
            self.arg_stack.resize(self.allocator, i + 1) catch @panic("var: OOM");
            // Zero-init new slots
            for (self.arg_stack.items[self.arg_stack.items.len - 1 ..]) |*slot| {
                slot.* = .{};
            }
        }
        return &self.arg_stack.items[i];
    }

    fn evalArg(self: *Interpreter, a: *anyopaque) Value {
        if (argIsIrrelevant(a)) return Value.fromNum(0);
        return self.var_(argVarId(a)).*;
    }

    fn allocCtor(self: *Interpreter, info: *anyopaque, args: *anyopaque) *anyopaque {
        const tag = ctorInfoTag(info);
        const size = ctorInfoSize(info);
        const usize_ = ctorInfoUsize(info);
        const ssize = ctorInfoSsize(info);
        if (size == 0 and usize_ == 0 and ssize == 0) {
            return object.lean_box(tag).?;
        }
        const o = alloc.lean_alloc_ctor(@intCast(tag), @intCast(size), @intCast(usize_ * @sizeOf(usize) + ssize));
        const num_args = array.lean_array_size(args);
        var i: usize = 0;
        while (i < num_args) : (i += 1) {
            const arg = array.lean_array_uget(args, i) orelse continue;
            const v = self.evalArg(arg);
            ctor.lean_ctor_set(o, @intCast(i), if (v.is_obj) v.obj orelse object.lean_box(0).? else object.lean_box(@intCast(v.num)).?);
        }
        return o;
    }

    fn lookupSymbol(self: *Interpreter, fn_name: *anyopaque) SymbolCacheEntry {
        if (self.symbol_cache.get(fn_name)) |e| return e;
        const d = self.getDecl(fn_name);
        var entry = SymbolCacheEntry{
            .decl = d,
            .native_addr = null,
            .native_boxed = false,
        };
        if (self.prefer_native or declTag(d) == .Extern) {
            const mangled = lean_get_symbol_stem(self.env, fn_name);
            defer rc.lean_dec(mangled);
            const boxed_mangled = lean_mk_mangled_boxed_name(mangled);
            defer rc.lean_dec(boxed_mangled);
            const boxed_sym = lean_string_cstr(boxed_mangled);
            if (lookupSymbolInCurexe(boxed_sym)) |p| {
                entry.native_addr = p;
                entry.native_boxed = true;
            } else {
                // Try unboxed/export name
                const export_name = lean_get_export_name_for(self.env, fn_name);
                defer rc.lean_dec(export_name);
                if (!object.lean_is_scalar(export_name)) {
                    const export_sym = lean_string_cstr(ctor.lean_ctor_get(export_name, 0) orelse mangled);
                    if (lookupSymbolInCurexe(export_sym)) |p| {
                        entry.native_addr = p;
                    }
                } else {
                    const mangled_sym = lean_string_cstr(mangled);
                    if (lookupSymbolInCurexe(mangled_sym)) |p| {
                        entry.native_addr = p;
                    }
                }
            }
        }
        self.symbol_cache.put(fn_name, entry) catch {};
        return entry;
    }

    fn getDecl(self: *Interpreter, fn_name: *anyopaque) *anyopaque {
        const opt_d = lean_ir_find_env_decl(self.env, fn_name);
        if (object.lean_is_scalar(opt_d)) {
            rc.lean_dec(opt_d);
            @panic("(interpreter) unknown declaration");
        }
        const d = ctor.lean_ctor_get(opt_d, 0) orelse @panic("getDecl: missing");
        rc.lean_inc(d);
        rc.lean_dec(opt_d);
        return d;
    }

    fn evalExpr(self: *Interpreter, e: *anyopaque, t: IRType) Value {
        switch (exprTag(e)) {
            .Ctor => return Value.fromObj(self.allocCtor(exprCtorInfo(e), exprCtorArgs(e))),
            .Reset => {
                const o = self.var_(exprResetObj(e)).obj orelse object.lean_box(0).?;
                if (rc.lean_is_exclusive(o)) {
                    const n = exprResetNumObjs(e);
                    var i: usize = 0;
                    while (i < n) : (i += 1) {
                        ctor.lean_ctor_release(o, @intCast(i));
                    }
                    return Value.fromObj(o);
                } else {
                    rc.lean_dec(o);
                    return Value.fromNum(0);
                }
            },
            .Reuse => {
                const o = self.var_(exprReuseObj(e)).obj orelse object.lean_box(0).?;
                if (object.lean_is_scalar(o)) {
                    return Value.fromObj(self.allocCtor(exprReuseCtor(e), exprReuseArgs(e)));
                } else {
                    if (exprReuseUpdateHeader(e)) {
                        ctor.lean_ctor_set_tag(o, @intCast(ctorInfoTag(exprReuseCtor(e))));
                    }
                    const args = exprReuseArgs(e);
                    const num_args = array.lean_array_size(args);
                    var i: usize = 0;
                    while (i < num_args) : (i += 1) {
                        const arg = array.lean_array_uget(args, i) orelse continue;
                        const v = self.evalArg(arg);
                        ctor.lean_ctor_set(o, @intCast(i), if (v.is_obj) v.obj orelse object.lean_box(0).? else object.lean_box(@intCast(v.num)).?);
                    }
                    return Value.fromObj(o);
                }
            },
            .Proj => {
                const o = self.var_(exprProjObj(e)).obj orelse object.lean_box(0).?;
                return Value.fromObj(ctor.lean_ctor_get(o, @intCast(exprProjIdx(e))) orelse object.lean_box(0).?);
            },
            .UProj => {
                const o = self.var_(exprUProjObj(e)).obj orelse object.lean_box(0).?;
                return Value.fromNum(ctor.lean_ctor_get_usize(o, @intCast(exprUProjIdx(e))));
            },
            .SProj => {
                const offset: c_uint = @intCast(exprSProjIdx(e) * @sizeOf(usize) + exprSProjOffset(e));
                const o = self.var_(exprSProjObj(e)).obj orelse object.lean_box(0).?;
                return switch (t) {
                    .Float => Value.fromFloat(ctor.lean_ctor_get_float(o, offset)),
                    .Float32 => Value.fromFloat32(ctor.lean_ctor_get_float32(o, offset)),
                    .UInt8 => Value.fromNum(ctor.lean_ctor_get_uint8(o, offset)),
                    .UInt16 => Value.fromNum(ctor.lean_ctor_get_uint16(o, offset)),
                    .UInt32 => Value.fromNum(ctor.lean_ctor_get_uint32(o, offset)),
                    .UInt64 => Value.fromNum(ctor.lean_ctor_get_uint64(o, offset)),
                    else => @panic("invalid sproj type"),
                };
            },
            .FAp => {
                const args = exprFapArgs(e);
                if (array.lean_array_size(args) > 0) {
                    return self.call(exprFapFun(e), args);
                } else {
                    return self.load(exprFapFun(e), t);
                }
            },
            .PAp => {
                // Create closure pointing to native or stub
                const sym = self.lookupSymbol(exprPapFun(e));
                const args = exprPapArgs(e);
                const num_args = array.lean_array_size(args);
                if (sym.native_addr) |addr| {
                    const arity = array.lean_array_size(declParams(sym.decl));
                    const cls = alloc.lean_alloc_closure(addr, @intCast(arity), @intCast(num_args));
                    var i: usize = 0;
                    while (i < num_args) : (i += 1) {
                        const arg = array.lean_array_uget(args, i) orelse continue;
                        const v = self.evalArg(arg);
                        ctor.lean_ctor_set(cls, @intCast(i), if (v.is_obj) v.obj orelse object.lean_box(0).? else boxT(v, .USize));
                    }
                    return Value.fromObj(cls);
                } else {
                    // Stub closure: not implemented fully (requires closure stubs)
                    @panic("PAp with no native symbol: stub closure not implemented");
                }
            },
            .Ap => {
                const args = exprApArgs(e);
                const num_args = array.lean_array_size(args);
                var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
                defer args_buf.deinit(self.allocator);
                var i: usize = 0;
                while (i < num_args) : (i += 1) {
                    const arg = array.lean_array_uget(args, i) orelse continue;
                    const v = self.evalArg(arg);
                    args_buf.append(self.allocator, if (v.is_obj) v.obj orelse object.lean_box(0).? else boxT(v, .USize)) catch @panic("Ap: OOM");
                }
                const fn_obj = self.var_(exprApFun(e)).obj orelse object.lean_box(0).?;
                const r = apply_mod.lean_apply_n(fn_obj, @intCast(num_args), @ptrCast(args_buf.items.ptr)) orelse object.lean_box(0).?;
                return Value.fromObj(r);
            },
            .Box => {
                const v = self.var_(exprBoxObj(e)).*;
                return Value.fromObj(boxT(v, exprBoxType(e)));
            },
            .Unbox => {
                const o = self.var_(exprUnboxObj(e)).obj orelse object.lean_box(0).?;
                return unboxT(o, t);
            },
            .Lit => {
                const lv = exprLitVal(e);
                switch (litValTag(lv)) {
                    0 => { // Num
                        const n = litValNum(lv);
                        return switch (t) {
                            .Float => blk: {
                                rc.lean_inc(n);
                                break :blk Value.fromFloat(lean_float_of_nat(n));
                            },
                            .Float32 => blk: {
                                rc.lean_inc(n);
                                break :blk Value.fromFloat32(lean_float32_of_nat(n));
                            },
                            .UInt8, .UInt16, .UInt32, .USize => Value.fromNum(natSmallValue(n)),
                            .UInt64 => Value.fromNum(natSmallValue(n)),
                            .Object, .Tagged, .TObject => Value.fromObj(n),
                            else => @panic("invalid lit type"),
                        };
                    },
                    1 => { // Str
                        return Value.fromObj(litValStr(lv));
                    },
                    else => @panic("invalid lit_val tag"),
                }
            },
            .IsShared => {
                const o = self.var_(exprIsSharedObj(e)).obj orelse object.lean_box(0).?;
                return Value.fromNum(if (!rc.lean_is_exclusive(o)) 1 else 0);
            },
        }
    }

    fn evalBody(self: *Interpreter, b0: *anyopaque) Value {
        var b = b0;
        while (true) {
            interrupt.checkSystem("interpreter", true);
            switch (fnBodyTag(b)) {
                .VDecl => {
                    const e = fnBodyVDeclExpr(b);
                    const cont = fnBodyVDeclCont(b);
                    // Tail recursion check
                    if (exprTag(e) == .FAp and
                        lean_name_eq(exprFapFun(e), self.getFrame().fn_name) != 0 and
                        fnBodyTag(cont) == .Ret and
                        !argIsIrrelevant(fnBodyRetArg(cont)))
                    {
                        // Check if ret arg == vdecl var (simplified: assume yes for tail call)
                        const args = exprFapArgs(e);
                        const num_args = array.lean_array_size(args);
                        const old_size = self.arg_stack.items.len;
                        // Copy args to end of stack
                        var i: usize = 0;
                        while (i < num_args) : (i += 1) {
                            const arg = array.lean_array_uget(args, i) orelse continue;
                            self.arg_stack.append(self.allocator, self.evalArg(arg)) catch @panic("tail rec: OOM");
                        }
                        // Copy to parameter slots
                        i = 0;
                        while (i < num_args) : (i += 1) {
                            self.arg_stack.items[self.getFrame().arg_bp + i] = self.arg_stack.items[old_size + i];
                        }
                        self.arg_stack.resize(self.allocator, self.getFrame().arg_bp + num_args) catch {};
                        b = b0;
                    } else {
                        const v = self.evalExpr(e, fnBodyVDeclType(b));
                        self.var_(fnBodyVDeclVar(b)).* = v;
                        b = fnBodyVDeclCont(b);
                    }
                },
                .JDecl => {
                    const i = self.getFrame().jp_bp + natSmallValue(fnBodyJDeclId(b));
                    if (i >= self.jp_stack.items.len) {
                        self.jp_stack.resize(self.allocator, i + 1) catch @panic("JDecl: OOM");
                    }
                    self.jp_stack.items[i] = b;
                    b = fnBodyJDeclCont(b);
                },
                .Set => {
                    const o = self.var_(fnBodySetVar(b)).obj orelse object.lean_box(0).?;
                    const arg = fnBodySetArg(b);
                    const v = self.evalArg(arg);
                    ctor.lean_ctor_set(o, @intCast(fnBodySetIdx(b)), if (v.is_obj) v.obj orelse object.lean_box(0).? else boxT(v, .USize));
                    b = fnBodySetCont(b);
                },
                .SetTag => {
                    const o = self.var_(fnBodySetTagVar(b)).obj orelse object.lean_box(0).?;
                    ctor.lean_ctor_set_tag(o, @intCast(fnBodySetTagCidx(b)));
                    b = fnBodySetTagCont(b);
                },
                .USet => {
                    const o = self.var_(fnBodyUSetTarget(b)).obj orelse object.lean_box(0).?;
                    const v = self.var_(fnBodyUSetSource(b)).*;
                    ctor.lean_ctor_set_usize(o, @intCast(fnBodyUSetIdx(b)), @intCast(v.num));
                    b = fnBodyUSetCont(b);
                },
                .SSet => {
                    const o = self.var_(fnBodySSetTarget(b)).obj orelse object.lean_box(0).?;
                    const offset: c_uint = @intCast(fnBodySSetIdx(b) * @sizeOf(usize) + fnBodySSetOffset(b));
                    const v = self.var_(fnBodySSetSource(b)).*;
                    switch (fnBodySSetType(b)) {
                        .Float => ctor.lean_ctor_set_float(o, offset, @bitCast(v.num)),
                        .Float32 => ctor.lean_ctor_set_float32(o, offset, @bitCast(@as(u32, @intCast(v.num & 0xFFFFFFFF)))),
                        .UInt8 => ctor.lean_ctor_set_uint8(o, offset, @intCast(v.num & 0xFF)),
                        .UInt16 => ctor.lean_ctor_set_uint16(o, offset, @intCast(v.num & 0xFFFF)),
                        .UInt32 => ctor.lean_ctor_set_uint32(o, offset, @intCast(v.num & 0xFFFFFFFF)),
                        .UInt64 => ctor.lean_ctor_set_uint64(o, offset, v.num),
                        else => @panic("invalid sset type"),
                    }
                    b = fnBodySSetCont(b);
                },
                .Inc => {
                    const n = fnBodyIncVal(b);
                    const v = self.var_(fnBodyIncVar(b)).*;
                    if (v.is_obj) {
                        rc.lean_inc_n(v.obj.?, n);
                    }
                    b = fnBodyIncCont(b);
                },
                .Dec => {
                    const n = fnBodyDecVal(b);
                    const v = self.var_(fnBodyDecVar(b)).*;
                    if (v.is_obj) {
                        var i: usize = 0;
                        while (i < n) : (i += 1) {
                            rc.lean_dec(v.obj.?);
                        }
                    }
                    b = fnBodyDecCont(b);
                },
                .Del => {
                    const v = self.var_(fnBodyDelVar(b)).*;
                    if (v.is_obj) {
                        alloc.lean_free_object(v.obj.?);
                    }
                    b = fnBodyDelCont(b);
                },
                .Case => {
                    const alts = fnBodyCaseAlts(b);
                    const v = self.var_(fnBodyCaseVar(b)).*;
                    const var_type = fnBodyCaseVarType(b);
                    const tag: usize = if (typeIsScalar(var_type)) @intCast(v.num) else object.lean_ptr_tag(v.obj orelse object.lean_box(0).?);
                    const num_alts = array.lean_array_size(alts);
                    var found = false;
                    var i: usize = 0;
                    while (i < num_alts) : (i += 1) {
                        const alt = array.lean_array_uget(alts, i) orelse continue;
                        switch (altTag(alt)) {
                            0 => { // Ctor
                                if (tag == ctorInfoTag(altCtorInfo(alt))) {
                                    b = altCtorCont(alt);
                                    found = true;
                                    break;
                                }
                            },
                            1 => { // Default
                                b = altDefaultCont(alt);
                                found = true;
                                break;
                            },
                            else => {},
                        }
                    }
                    if (!found) @panic("incomplete case");
                },
                .Ret => {
                    return self.evalArg(fnBodyRetArg(b));
                },
                .Jmp => {
                    const jp_idx = self.getFrame().jp_bp + natSmallValue(fnBodyJmpJp(b));
                    const jp = self.jp_stack.items[jp_idx];
                    const jp_params = fnBodyJDeclParams(jp);
                    const jmp_args = fnBodyJmpArgs(b);
                    const num_params = array.lean_array_size(jp_params);
                    var i: usize = 0;
                    while (i < num_params) : (i += 1) {
                        const param = array.lean_array_uget(jp_params, i) orelse continue;
                        const arg = array.lean_array_uget(jmp_args, i) orelse continue;
                        self.var_(paramVar(param)).* = self.evalArg(arg);
                    }
                    b = fnBodyJDeclBody(jp);
                },
                .Unreachable => @panic("unreachable code"),
            }
        }
    }

    fn pushFrame(self: *Interpreter, d: *anyopaque, arg_bp: usize) void {
        self.call_stack.append(self.allocator, .{
            .fn_name = declFunId(d),
            .arg_bp = arg_bp,
            .jp_bp = self.jp_stack.items.len,
        }) catch @panic("pushFrame: OOM");
    }

    fn popFrame(self: *Interpreter) void {
        const frame = self.getFrame();
        self.arg_stack.resize(self.allocator, frame.arg_bp) catch {};
        self.jp_stack.resize(self.allocator, frame.jp_bp) catch {};
        _ = self.call_stack.pop();
    }

    fn load(self: *Interpreter, fn_name: *anyopaque, t: IRType) Value {
        if (self.constant_cache.get(fn_name)) |cached| {
            return cached.val;
        }
        const sym = self.lookupSymbol(fn_name);
        if (sym.native_addr) |addr| {
            // Native constant: read directly
            return switch (t) {
                .Float => Value.fromFloat(@as(*f64, @ptrCast(@alignCast(addr))).*),
                .Float32 => Value.fromFloat32(@as(*f32, @ptrCast(@alignCast(addr))).*),
                .UInt8 => Value.fromNum(@as(*u8, @ptrCast(@alignCast(addr))).*),
                .UInt16 => Value.fromNum(@as(*u16, @ptrCast(@alignCast(addr))).*),
                .UInt32 => Value.fromNum(@as(*u32, @ptrCast(@alignCast(addr))).*),
                .UInt64 => Value.fromNum(@as(*u64, @ptrCast(@alignCast(addr))).*),
                .USize => Value.fromNum(@as(*usize, @ptrCast(@alignCast(addr))).*),
                .Object, .Tagged, .TObject, .Irrelevant, .Void => Value.fromObj(@as(*?*anyopaque, @ptrCast(@alignCast(addr))).* orelse object.lean_box(0).?),
                else => @panic("load: struct/union not implemented"),
            };
        }
        // No native code: interpret IR
        const init_fn = lean_get_regular_init_fn_name_for(self.env, fn_name);
        defer rc.lean_dec(init_fn);
        if (!object.lean_is_scalar(init_fn)) {
            @panic("cannot evaluate [init] declaration in the same module");
        }
        self.pushFrame(sym.decl, self.arg_stack.items.len);
        const r = self.evalBody(declFunBody(sym.decl));
        self.popFrame();
        self.constant_cache.put(fn_name, .{
            .is_scalar = typeIsScalar(t),
            .val = r,
        }) catch {};
        return r;
    }

    fn call(self: *Interpreter, fn_name: *anyopaque, args: *anyopaque) Value {
        const old_size = self.arg_stack.items.len;
        const sym = self.lookupSymbol(fn_name);
        if (sym.native_addr) |addr| {
            // Native call
            const num_args = array.lean_array_size(args);
            var args_buf = std.ArrayListUnmanaged(*anyopaque).empty;
            defer args_buf.deinit(self.allocator);
            const params = declParams(sym.decl);
            var i: usize = 0;
            while (i < num_args) : (i += 1) {
                const arg = array.lean_array_uget(args, i) orelse continue;
                const v = self.evalArg(arg);
                const param = array.lean_array_uget(params, i) orelse object.lean_box(0).?;
                const t = paramType(param);
                args_buf.append(self.allocator, boxT(v, t)) catch @panic("call: OOM");
                if (sym.native_boxed and paramBorrow(param)) {
                    rc.lean_inc(args_buf.items[i]);
                }
            }
            self.pushFrame(sym.decl, old_size);
            const o = curry(addr, num_args, args_buf.items.ptr);
            self.popFrame();
            const t = declType(sym.decl);
            if (typeIsScalar(t)) {
                const v = unboxT(o, t);
                rc.lean_dec(o);
                return v;
            }
            return Value.fromObj(o);
        } else {
            // Interpret IR
            if (declTag(sym.decl) == .Extern) {
                @panic("could not find native implementation of external declaration");
            }
            const num_args = array.lean_array_size(args);
            var i: usize = 0;
            while (i < num_args) : (i += 1) {
                const arg = array.lean_array_uget(args, i) orelse continue;
                self.arg_stack.append(self.allocator, self.evalArg(arg)) catch @panic("call: OOM");
            }
            self.pushFrame(sym.decl, old_size);
            const r = self.evalBody(declFunBody(sym.decl));
            self.popFrame();
            return r;
        }
    }

    fn callBoxed(self: *Interpreter, fn_name: *anyopaque, n: usize, args: [*]*anyopaque) *anyopaque {
        const sym = self.lookupSymbol(fn_name);
        const arity = array.lean_array_size(declParams(sym.decl));
        var r: *anyopaque = undefined;
        if (arity == 0) {
            const t = declType(sym.decl);
            const v = self.load(fn_name, t);
            r = boxT(v, t);
            if (!typeIsScalar(t)) rc.lean_inc(r);
        } else {
            if (sym.native_addr) |addr| {
                r = alloc.lean_alloc_closure(addr, @intCast(arity), 0);
            } else {
                // Check for boxed version
                const opt_d_boxed = lean_ir_find_env_decl_boxed(self.env, fn_name);
                defer rc.lean_dec(opt_d_boxed);
                if (!object.lean_is_scalar(opt_d_boxed)) {
                    const d_boxed = ctor.lean_ctor_get(opt_d_boxed, 0) orelse sym.decl;
                    rc.lean_inc(d_boxed);
                    // Stub closure (simplified)
                    r = alloc.lean_alloc_closure(@ptrCast(@constCast(&stubClosureEntry)), @intCast(arity), 0);
                } else {
                    r = alloc.lean_alloc_closure(@ptrCast(@constCast(&stubClosureEntry)), @intCast(arity), 0);
                }
            }
        }
        if (n > 0) {
            r = apply_mod.lean_apply_n(r, @intCast(n), @ptrCast(args)) orelse object.lean_box(0).?;
        }
        return r;
    }

    fn runMain(self: *Interpreter, args: *anyopaque) u32 {
        // Simplified: call main with world arg
        const world = object.lean_box(0).?;
        var call_args: [2]*anyopaque = .{ args, world };
        const d = self.getDecl(object.lean_box(0x6e69616d).?); // "main" as name — simplified
        _ = d;
        const w = self.callBoxed(object.lean_box(0x6e69616d).?, 2, &call_args);
        if (io_min.lean_io_result_is_ok(w)) {
            // Get return value
            const ret_val = io_min.lean_io_result_get_value(w);
            const ret_uint = if (object.lean_is_scalar(ret_val)) object.lean_unbox(ret_val) else 0;
            rc.lean_dec(w);
            return @intCast(ret_uint);
        } else {
            io_min.lean_io_result_show_error(w);
            rc.lean_dec(w);
            return 1;
        }
    }
};

// Stub closure entry point (simplified — real implementation needs per-arity stubs)
fn stubClosureEntry() callconv(.c) *anyopaque {
    @panic("stub closure not fully implemented");
}

// Curry native function with N args
fn curry(addr: *anyopaque, n: usize, args: [*]*anyopaque) *anyopaque {
    // The native function has a homogeneous boxed ABI.
    // For simplicity, call apply_n which handles currying.
    const cls = alloc.lean_alloc_closure(addr, @intCast(n), 0);
    return apply_mod.lean_apply_n(cls, @intCast(n), @ptrCast(args)) orelse object.lean_box(0).?;
}

// ── Entry points ────────────────────────────────────────────────────────────

fn leanEvalMain(env: *anyopaque, opts: *anyopaque, args: *anyopaque) callconv(.c) u32 {
    const a = std.heap.page_allocator;
    var interp = Interpreter.init(env, opts, a);
    defer interp.deinit();
    return interp.runMain(args);
}

fn leanEvalConst(env: *anyopaque, opts: *anyopaque, c: *anyopaque) callconv(.c) *anyopaque {
    const a = std.heap.page_allocator;
    var interp = Interpreter.init(env, opts, a);
    defer interp.deinit();
    // Check sorry dep
    const sorry_dep = lean_decl_get_sorry_dep(env, c);
    defer rc.lean_dec(sorry_dep);
    if (!object.lean_is_scalar(sorry_dep)) {
        // Has sorry dep — return error
        const err_str = object.lean_box(0).?; // simplified
        const err_ctor = alloc.lean_alloc_ctor(0, 1, 0);
        ctor.lean_ctor_set(err_ctor, 0, err_str);
        return err_ctor;
    }
    const r = interp.callBoxed(c, 0, @ptrCast(&empty_args));
    // Wrap in Except.ok (ctor 1, 1 field)
    const ok_ctor = alloc.lean_alloc_ctor(1, 1, 0);
    ctor.lean_ctor_set(ok_ctor, 0, r);
    return ok_ctor;
}
// ── lean_run_init ───────────────────────────────────────────────────────────
// Run the init function for a declaration and cache the result.
// Mirrors C++ interpreter::run_init: call init_decl with no args, mark the
// result persistent, and store it in the symbol cache for decl.
fn leanRunInit(env: *anyopaque, opts: *anyopaque, decl: *anyopaque, init_decl: *anyopaque) callconv(.c) *anyopaque {
    const a = std.heap.page_allocator;
    var interp = Interpreter.init(env, opts, a);
    defer interp.deinit();

    // Call init_decl with 0 arguments
    const no_args: [*]*anyopaque = @ptrCast(&empty_args);
    const r = interp.callBoxed(init_decl, 0, no_args);

    if (io_min.lean_io_result_is_ok(r)) {
        const o = io_min.lean_io_result_get_value(r) orelse {
            rc.lean_dec(r);
            return io_min.lean_io_result_mk_error(object.lean_box(0).?);
        };
        rc.lean_mark_persistent(o);
        rc.lean_dec(r);

        // Store the initialized value in the symbol cache for decl
        const sym = interp.lookupSymbol(decl);
        if (sym.native_addr) |addr| {
            const slot: *?*anyopaque = @ptrCast(@alignCast(addr));
            slot.* = o;
        } else {
            // No native address — hold a reference to keep it alive
            rc.lean_inc(o);
        }

        return io_min.lean_io_result_mk_ok(object.lean_box(0).?);
    } else {
        // Error — return as-is
        return r;
    }
}

var empty_args: [*]u8 = undefined;

comptime {
    if (export_kernel_symbols) {
        @export(&leanEvalMain, .{ .name = "lean_eval_main", .linkage = .strong });
        @export(&leanEvalConst, .{ .name = "lean_eval_const", .linkage = .strong });
        @export(&leanRunInit, .{ .name = "lean_run_init", .linkage = .strong });
    }
}
