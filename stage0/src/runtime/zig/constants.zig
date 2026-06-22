// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Auto-generated Lean constant names (`constants.cpp`).
//!
//! These names are allocated at initialization time and persist for the life
//! of the process.  They mirror the C++ `g_*` globals and `get_*_name` helpers.

pub const force_link = true;

const object = @import("object.zig");
const runtime_helpers = @import("runtime_helpers.zig");
const rc = @import("rc.zig");

var g_absurd: ?*anyopaque = null;
var g_and: ?*anyopaque = null;
var g_and_left: ?*anyopaque = null;
var g_and_right: ?*anyopaque = null;
var g_and_intro: ?*anyopaque = null;
var g_and_rec: ?*anyopaque = null;
var g_and_cases_on: ?*anyopaque = null;
var g_array: ?*anyopaque = null;
var g_array_sz: ?*anyopaque = null;
var g_array_to_list: ?*anyopaque = null;
var g_auto_param: ?*anyopaque = null;
var g_bit0: ?*anyopaque = null;
var g_bit1: ?*anyopaque = null;
var g_has_of_nat_of_nat: ?*anyopaque = null;
var g_byte_array: ?*anyopaque = null;
var g_byte_array_data: ?*anyopaque = null;
var g_bool: ?*anyopaque = null;
var g_bool_false: ?*anyopaque = null;
var g_bool_true: ?*anyopaque = null;
var g_bool_cases_on: ?*anyopaque = null;
var g_cast: ?*anyopaque = null;
var g_char: ?*anyopaque = null;
var g_congr_arg: ?*anyopaque = null;
var g_decidable: ?*anyopaque = null;
var g_decidable_is_true: ?*anyopaque = null;
var g_decidable_is_false: ?*anyopaque = null;
var g_decidable_decide: ?*anyopaque = null;
var g_empty: ?*anyopaque = null;
var g_empty_rec: ?*anyopaque = null;
var g_empty_cases_on: ?*anyopaque = null;
var g_exists: ?*anyopaque = null;
var g_eq: ?*anyopaque = null;
var g_eq_cases_on: ?*anyopaque = null;
var g_eq_rec_on: ?*anyopaque = null;
var g_eq_rec: ?*anyopaque = null;
var g_eq_ndrec: ?*anyopaque = null;
var g_eq_refl: ?*anyopaque = null;
var g_eq_subst: ?*anyopaque = null;
var g_eq_symm: ?*anyopaque = null;
var g_eq_trans: ?*anyopaque = null;
var g_float: ?*anyopaque = null;
var g_float32: ?*anyopaque = null;
var g_float_array: ?*anyopaque = null;
var g_float_array_data: ?*anyopaque = null;
var g_false: ?*anyopaque = null;
var g_false_rec: ?*anyopaque = null;
var g_false_cases_on: ?*anyopaque = null;
var g_has_add_add: ?*anyopaque = null;
var g_has_neg_neg: ?*anyopaque = null;
var g_has_one_one: ?*anyopaque = null;
var g_has_zero_zero: ?*anyopaque = null;
var g_heq: ?*anyopaque = null;
var g_heq_refl: ?*anyopaque = null;
var g_iff: ?*anyopaque = null;
var g_iff_refl: ?*anyopaque = null;
var g_int: ?*anyopaque = null;
var g_int_nat_abs: ?*anyopaque = null;
var g_int_dec_lt: ?*anyopaque = null;
var g_int_of_nat: ?*anyopaque = null;
var g_inline: ?*anyopaque = null;
var g_io: ?*anyopaque = null;
var g_ite: ?*anyopaque = null;
var g_lc_proof: ?*anyopaque = null;
var g_lc_unreachable: ?*anyopaque = null;
var g_list: ?*anyopaque = null;
var g_mut_quot: ?*anyopaque = null;
var g_nat: ?*anyopaque = null;
var g_nat_succ: ?*anyopaque = null;
var g_nat_zero: ?*anyopaque = null;
var g_nat_has_zero: ?*anyopaque = null;
var g_nat_has_one: ?*anyopaque = null;
var g_nat_has_add: ?*anyopaque = null;
var g_nat_add: ?*anyopaque = null;
var g_nat_dec_eq: ?*anyopaque = null;
var g_nat_sub: ?*anyopaque = null;
var g_ne: ?*anyopaque = null;
var g_not: ?*anyopaque = null;
var g_opt_param: ?*anyopaque = null;
var g_or: ?*anyopaque = null;
var g_panic: ?*anyopaque = null;
var g_punit: ?*anyopaque = null;
var g_punit_unit: ?*anyopaque = null;
var g_pprod: ?*anyopaque = null;
var g_pprod_mk: ?*anyopaque = null;
var g_pprod_fst: ?*anyopaque = null;
var g_pprod_snd: ?*anyopaque = null;
var g_propext: ?*anyopaque = null;
var g_quot_mk: ?*anyopaque = null;
var g_quot_lift: ?*anyopaque = null;
var g_sorry_ax: ?*anyopaque = null;
var g_string: ?*anyopaque = null;
var g_string_data: ?*anyopaque = null;
var g_subsingleton_elim: ?*anyopaque = null;
var g_task: ?*anyopaque = null;
var g_thunk: ?*anyopaque = null;
var g_thunk_mk: ?*anyopaque = null;
var g_thunk_get: ?*anyopaque = null;
var g_true: ?*anyopaque = null;
var g_true_intro: ?*anyopaque = null;
var g_unit: ?*anyopaque = null;
var g_unit_unit: ?*anyopaque = null;
var g_uint8: ?*anyopaque = null;
var g_uint16: ?*anyopaque = null;
var g_uint32: ?*anyopaque = null;
var g_uint64: ?*anyopaque = null;
var g_usize: ?*anyopaque = null;

fn mkName(parts: []const [*:0]const u8) *anyopaque {
    var n = object.lean_box(0).?;
    for (parts) |p| {
        n = runtime_helpers.lean_name_mk_str(n, p);
    }
    return n;
}

fn markPersistent(o: *anyopaque) void {
    const hdr: *align(1) @import("lean_object.zig").lean_object = @ptrCast(o);
    hdr.m_rc = -1;
}

pub fn initializeConstants() void {
    g_absurd = mkName(&.{"absurd"}); markPersistent(g_absurd.?);
    g_and = mkName(&.{"And"}); markPersistent(g_and.?);
    g_and_left = mkName(&.{ "And", "left" }); markPersistent(g_and_left.?);
    g_and_right = mkName(&.{ "And", "right" }); markPersistent(g_and_right.?);
    g_and_intro = mkName(&.{ "And", "intro" }); markPersistent(g_and_intro.?);
    g_and_rec = mkName(&.{ "And", "rec" }); markPersistent(g_and_rec.?);
    g_and_cases_on = mkName(&.{ "And", "casesOn" }); markPersistent(g_and_cases_on.?);
    g_array = mkName(&.{"Array"}); markPersistent(g_array.?);
    g_array_sz = mkName(&.{ "Array", "sz" }); markPersistent(g_array_sz.?);
    g_array_to_list = mkName(&.{ "Array", "toList" }); markPersistent(g_array_to_list.?);
    g_auto_param = mkName(&.{"autoParam"}); markPersistent(g_auto_param.?);
    g_bit0 = mkName(&.{"bit0"}); markPersistent(g_bit0.?);
    g_bit1 = mkName(&.{"bit1"}); markPersistent(g_bit1.?);
    g_has_of_nat_of_nat = mkName(&.{ "HasOfNat", "ofNat" }); markPersistent(g_has_of_nat_of_nat.?);
    g_byte_array = mkName(&.{"ByteArray"}); markPersistent(g_byte_array.?);
    g_byte_array_data = mkName(&.{ "ByteArray", "data" }); markPersistent(g_byte_array_data.?);
    g_bool = mkName(&.{"Bool"}); markPersistent(g_bool.?);
    g_bool_false = mkName(&.{ "Bool", "false" }); markPersistent(g_bool_false.?);
    g_bool_true = mkName(&.{ "Bool", "true" }); markPersistent(g_bool_true.?);
    g_bool_cases_on = mkName(&.{ "Bool", "casesOn" }); markPersistent(g_bool_cases_on.?);
    g_cast = mkName(&.{"cast"}); markPersistent(g_cast.?);
    g_char = mkName(&.{"Char"}); markPersistent(g_char.?);
    g_congr_arg = mkName(&.{"congrArg"}); markPersistent(g_congr_arg.?);
    g_decidable = mkName(&.{"Decidable"}); markPersistent(g_decidable.?);
    g_decidable_is_true = mkName(&.{ "Decidable", "isTrue" }); markPersistent(g_decidable_is_true.?);
    g_decidable_is_false = mkName(&.{ "Decidable", "isFalse" }); markPersistent(g_decidable_is_false.?);
    g_decidable_decide = mkName(&.{ "Decidable", "decide" }); markPersistent(g_decidable_decide.?);
    g_empty = mkName(&.{"Empty"}); markPersistent(g_empty.?);
    g_empty_rec = mkName(&.{ "Empty", "rec" }); markPersistent(g_empty_rec.?);
    g_empty_cases_on = mkName(&.{ "Empty", "casesOn" }); markPersistent(g_empty_cases_on.?);
    g_exists = mkName(&.{"Exists"}); markPersistent(g_exists.?);
    g_eq = mkName(&.{"Eq"}); markPersistent(g_eq.?);
    g_eq_cases_on = mkName(&.{ "Eq", "casesOn" }); markPersistent(g_eq_cases_on.?);
    g_eq_rec_on = mkName(&.{ "Eq", "recOn" }); markPersistent(g_eq_rec_on.?);
    g_eq_rec = mkName(&.{ "Eq", "rec" }); markPersistent(g_eq_rec.?);
    g_eq_ndrec = mkName(&.{ "Eq", "ndrec" }); markPersistent(g_eq_ndrec.?);
    g_eq_refl = mkName(&.{ "Eq", "refl" }); markPersistent(g_eq_refl.?);
    g_eq_subst = mkName(&.{ "Eq", "subst" }); markPersistent(g_eq_subst.?);
    g_eq_symm = mkName(&.{ "Eq", "symm" }); markPersistent(g_eq_symm.?);
    g_eq_trans = mkName(&.{ "Eq", "trans" }); markPersistent(g_eq_trans.?);
    g_float = mkName(&.{"Float"}); markPersistent(g_float.?);
    g_float32 = mkName(&.{"Float32"}); markPersistent(g_float32.?);
    g_float_array = mkName(&.{"FloatArray"}); markPersistent(g_float_array.?);
    g_float_array_data = mkName(&.{ "FloatArray", "data" }); markPersistent(g_float_array_data.?);
    g_false = mkName(&.{"False"}); markPersistent(g_false.?);
    g_false_rec = mkName(&.{ "False", "rec" }); markPersistent(g_false_rec.?);
    g_false_cases_on = mkName(&.{ "False", "casesOn" }); markPersistent(g_false_cases_on.?);
    g_has_add_add = mkName(&.{ "HasAdd", "add" }); markPersistent(g_has_add_add.?);
    g_has_neg_neg = mkName(&.{ "HasNeg", "neg" }); markPersistent(g_has_neg_neg.?);
    g_has_one_one = mkName(&.{ "HasOne", "one" }); markPersistent(g_has_one_one.?);
    g_has_zero_zero = mkName(&.{ "HasZero", "zero" }); markPersistent(g_has_zero_zero.?);
    g_heq = mkName(&.{"HEq"}); markPersistent(g_heq.?);
    g_heq_refl = mkName(&.{ "HEq", "refl" }); markPersistent(g_heq_refl.?);
    g_iff = mkName(&.{"Iff"}); markPersistent(g_iff.?);
    g_iff_refl = mkName(&.{ "Iff", "refl" }); markPersistent(g_iff_refl.?);
    g_int = mkName(&.{"Int"}); markPersistent(g_int.?);
    g_int_nat_abs = mkName(&.{ "Int", "natAbs" }); markPersistent(g_int_nat_abs.?);
    g_int_dec_lt = mkName(&.{ "Int", "decLt" }); markPersistent(g_int_dec_lt.?);
    g_int_of_nat = mkName(&.{ "Int", "ofNat" }); markPersistent(g_int_of_nat.?);
    g_inline = mkName(&.{"inline"}); markPersistent(g_inline.?);
    g_io = mkName(&.{"IO"}); markPersistent(g_io.?);
    g_ite = mkName(&.{"ite"}); markPersistent(g_ite.?);
    g_lc_proof = mkName(&.{"lcProof"}); markPersistent(g_lc_proof.?);
    g_lc_unreachable = mkName(&.{"lcUnreachable"}); markPersistent(g_lc_unreachable.?);
    g_list = mkName(&.{"List"}); markPersistent(g_list.?);
    g_mut_quot = mkName(&.{"MutQuot"}); markPersistent(g_mut_quot.?);
    g_nat = mkName(&.{"Nat"}); markPersistent(g_nat.?);
    g_nat_succ = mkName(&.{ "Nat", "succ" }); markPersistent(g_nat_succ.?);
    g_nat_zero = mkName(&.{ "Nat", "zero" }); markPersistent(g_nat_zero.?);
    g_nat_has_zero = mkName(&.{ "Nat", "HasZero" }); markPersistent(g_nat_has_zero.?);
    g_nat_has_one = mkName(&.{ "Nat", "HasOne" }); markPersistent(g_nat_has_one.?);
    g_nat_has_add = mkName(&.{ "Nat", "HasAdd" }); markPersistent(g_nat_has_add.?);
    g_nat_add = mkName(&.{ "Nat", "add" }); markPersistent(g_nat_add.?);
    g_nat_dec_eq = mkName(&.{ "Nat", "decEq" }); markPersistent(g_nat_dec_eq.?);
    g_nat_sub = mkName(&.{ "Nat", "sub" }); markPersistent(g_nat_sub.?);
    g_ne = mkName(&.{"ne"}); markPersistent(g_ne.?);
    g_not = mkName(&.{"Not"}); markPersistent(g_not.?);
    g_opt_param = mkName(&.{"optParam"}); markPersistent(g_opt_param.?);
    g_or = mkName(&.{"Or"}); markPersistent(g_or.?);
    g_panic = mkName(&.{"panic"}); markPersistent(g_panic.?);
    g_punit = mkName(&.{"PUnit"}); markPersistent(g_punit.?);
    g_punit_unit = mkName(&.{ "PUnit", "unit" }); markPersistent(g_punit_unit.?);
    g_pprod = mkName(&.{"PProd"}); markPersistent(g_pprod.?);
    g_pprod_mk = mkName(&.{ "PProd", "mk" }); markPersistent(g_pprod_mk.?);
    g_pprod_fst = mkName(&.{ "PProd", "fst" }); markPersistent(g_pprod_fst.?);
    g_pprod_snd = mkName(&.{ "PProd", "snd" }); markPersistent(g_pprod_snd.?);
    g_propext = mkName(&.{"propext"}); markPersistent(g_propext.?);
    g_quot_mk = mkName(&.{ "Quot", "mk" }); markPersistent(g_quot_mk.?);
    g_quot_lift = mkName(&.{ "Quot", "lift" }); markPersistent(g_quot_lift.?);
    g_sorry_ax = mkName(&.{"sorryAx"}); markPersistent(g_sorry_ax.?);
    g_string = mkName(&.{"String"}); markPersistent(g_string.?);
    g_string_data = mkName(&.{ "String", "data" }); markPersistent(g_string_data.?);
    g_subsingleton_elim = mkName(&.{ "Subsingleton", "elim" }); markPersistent(g_subsingleton_elim.?);
    g_task = mkName(&.{"Task"}); markPersistent(g_task.?);
    g_thunk = mkName(&.{"Thunk"}); markPersistent(g_thunk.?);
    g_thunk_mk = mkName(&.{ "Thunk", "mk" }); markPersistent(g_thunk_mk.?);
    g_thunk_get = mkName(&.{ "Thunk", "get" }); markPersistent(g_thunk_get.?);
    g_true = mkName(&.{"True"}); markPersistent(g_true.?);
    g_true_intro = mkName(&.{ "True", "intro" }); markPersistent(g_true_intro.?);
    g_unit = mkName(&.{"Unit"}); markPersistent(g_unit.?);
    g_unit_unit = mkName(&.{ "Unit", "unit" }); markPersistent(g_unit_unit.?);
    g_uint8 = mkName(&.{"UInt8"}); markPersistent(g_uint8.?);
    g_uint16 = mkName(&.{"UInt16"}); markPersistent(g_uint16.?);
    g_uint32 = mkName(&.{"UInt32"}); markPersistent(g_uint32.?);
    g_uint64 = mkName(&.{"UInt64"}); markPersistent(g_uint64.?);
    g_usize = mkName(&.{"USize"}); markPersistent(g_usize.?);
}

pub fn finalizeConstants() void {
    // Names are marked persistent; nothing to free.
}

// Getters (return a borrowed reference; callers must inc if they need to keep it).
pub fn getAbsurdName() *anyopaque { return g_absurd.?; }
pub fn getAndName() *anyopaque { return g_and.?; }
pub fn getAndLeftName() *anyopaque { return g_and_left.?; }
pub fn getAndRightName() *anyopaque { return g_and_right.?; }
pub fn getAndIntroName() *anyopaque { return g_and_intro.?; }
pub fn getAndRecName() *anyopaque { return g_and_rec.?; }
pub fn getAndCasesOnName() *anyopaque { return g_and_cases_on.?; }
pub fn getArrayName() *anyopaque { return g_array.?; }
pub fn getArraySzName() *anyopaque { return g_array_sz.?; }
pub fn getArrayToListName() *anyopaque { return g_array_to_list.?; }
pub fn getAutoParamName() *anyopaque { return g_auto_param.?; }
pub fn getBit0Name() *anyopaque { return g_bit0.?; }
pub fn getBit1Name() *anyopaque { return g_bit1.?; }
pub fn getHasOfNatOfNatName() *anyopaque { return g_has_of_nat_of_nat.?; }
pub fn getByteArrayName() *anyopaque { return g_byte_array.?; }
pub fn getByteArrayDataName() *anyopaque { return g_byte_array_data.?; }
pub fn getBoolName() *anyopaque { return g_bool.?; }
pub fn getBoolFalseName() *anyopaque { return g_bool_false.?; }
pub fn getBoolTrueName() *anyopaque { return g_bool_true.?; }
pub fn getBoolCasesOnName() *anyopaque { return g_bool_cases_on.?; }
pub fn getCastName() *anyopaque { return g_cast.?; }
pub fn getCharName() *anyopaque { return g_char.?; }
pub fn getCongrArgName() *anyopaque { return g_congr_arg.?; }
pub fn getDecidableName() *anyopaque { return g_decidable.?; }
pub fn getDecidableIsTrueName() *anyopaque { return g_decidable_is_true.?; }
pub fn getDecidableIsFalseName() *anyopaque { return g_decidable_is_false.?; }
pub fn getDecidableDecideName() *anyopaque { return g_decidable_decide.?; }
pub fn getEmptyName() *anyopaque { return g_empty.?; }
pub fn getEmptyRecName() *anyopaque { return g_empty_rec.?; }
pub fn getEmptyCasesOnName() *anyopaque { return g_empty_cases_on.?; }
pub fn getExistsName() *anyopaque { return g_exists.?; }
pub fn getEqName() *anyopaque { return g_eq.?; }
pub fn getEqCasesOnName() *anyopaque { return g_eq_cases_on.?; }
pub fn getEqRecOnName() *anyopaque { return g_eq_rec_on.?; }
pub fn getEqRecName() *anyopaque { return g_eq_rec.?; }
pub fn getEqNdrecName() *anyopaque { return g_eq_ndrec.?; }
pub fn getEqReflName() *anyopaque { return g_eq_refl.?; }
pub fn getEqSubstName() *anyopaque { return g_eq_subst.?; }
pub fn getEqSymmName() *anyopaque { return g_eq_symm.?; }
pub fn getEqTransName() *anyopaque { return g_eq_trans.?; }
pub fn getFloatName() *anyopaque { return g_float.?; }
pub fn getFloat32Name() *anyopaque { return g_float32.?; }
pub fn getFloatArrayName() *anyopaque { return g_float_array.?; }
pub fn getFloatArrayDataName() *anyopaque { return g_float_array_data.?; }
pub fn getFalseName() *anyopaque { return g_false.?; }
pub fn getFalseRecName() *anyopaque { return g_false_rec.?; }
pub fn getFalseCasesOnName() *anyopaque { return g_false_cases_on.?; }
pub fn getHasAddAddName() *anyopaque { return g_has_add_add.?; }
pub fn getHasNegNegName() *anyopaque { return g_has_neg_neg.?; }
pub fn getHasOneOneName() *anyopaque { return g_has_one_one.?; }
pub fn getHasZeroZeroName() *anyopaque { return g_has_zero_zero.?; }
pub fn getHeqName() *anyopaque { return g_heq.?; }
pub fn getHeqReflName() *anyopaque { return g_heq_refl.?; }
pub fn getIffName() *anyopaque { return g_iff.?; }
pub fn getIffReflName() *anyopaque { return g_iff_refl.?; }
pub fn getIntName() *anyopaque { return g_int.?; }
pub fn getIntNatAbsName() *anyopaque { return g_int_nat_abs.?; }
pub fn getIntDecLtName() *anyopaque { return g_int_dec_lt.?; }
pub fn getIntOfNatName() *anyopaque { return g_int_of_nat.?; }
pub fn getInlineName() *anyopaque { return g_inline.?; }
pub fn getIoName() *anyopaque { return g_io.?; }
pub fn getIteName() *anyopaque { return g_ite.?; }
pub fn getLcProofName() *anyopaque { return g_lc_proof.?; }
pub fn getLcUnreachableName() *anyopaque { return g_lc_unreachable.?; }
pub fn getListName() *anyopaque { return g_list.?; }
pub fn getMutQuotName() *anyopaque { return g_mut_quot.?; }
pub fn getNatName() *anyopaque { return g_nat.?; }
pub fn getNatSuccName() *anyopaque { return g_nat_succ.?; }
pub fn getNatZeroName() *anyopaque { return g_nat_zero.?; }
pub fn getNatHasZeroName() *anyopaque { return g_nat_has_zero.?; }
pub fn getNatHasOneName() *anyopaque { return g_nat_has_one.?; }
pub fn getNatHasAddName() *anyopaque { return g_nat_has_add.?; }
pub fn getNatAddName() *anyopaque { return g_nat_add.?; }
pub fn getNatDecEqName() *anyopaque { return g_nat_dec_eq.?; }
pub fn getNatSubName() *anyopaque { return g_nat_sub.?; }
pub fn getNeName() *anyopaque { return g_ne.?; }
pub fn getNotName() *anyopaque { return g_not.?; }
pub fn getOptParamName() *anyopaque { return g_opt_param.?; }
pub fn getOrName() *anyopaque { return g_or.?; }
pub fn getPanicName() *anyopaque { return g_panic.?; }
pub fn getPunitName() *anyopaque { return g_punit.?; }
pub fn getPunitUnitName() *anyopaque { return g_punit_unit.?; }
pub fn getPprodName() *anyopaque { return g_pprod.?; }
pub fn getPprodMkName() *anyopaque { return g_pprod_mk.?; }
pub fn getPprodFstName() *anyopaque { return g_pprod_fst.?; }
pub fn getPprodSndName() *anyopaque { return g_pprod_snd.?; }
pub fn getPropextName() *anyopaque { return g_propext.?; }
pub fn getQuotMkName() *anyopaque { return g_quot_mk.?; }
pub fn getQuotLiftName() *anyopaque { return g_quot_lift.?; }
pub fn getSorryAxName() *anyopaque { return g_sorry_ax.?; }
pub fn getStringName() *anyopaque { return g_string.?; }
pub fn getStringDataName() *anyopaque { return g_string_data.?; }
pub fn getSubsingletonElimName() *anyopaque { return g_subsingleton_elim.?; }
pub fn getTaskName() *anyopaque { return g_task.?; }
pub fn getThunkName() *anyopaque { return g_thunk.?; }
pub fn getThunkMkName() *anyopaque { return g_thunk_mk.?; }
pub fn getThunkGetName() *anyopaque { return g_thunk_get.?; }
pub fn getTrueName() *anyopaque { return g_true.?; }
pub fn getTrueIntroName() *anyopaque { return g_true_intro.?; }
pub fn getUnitName() *anyopaque { return g_unit.?; }
pub fn getUnitUnitName() *anyopaque { return g_unit_unit.?; }
pub fn getUint8Name() *anyopaque { return g_uint8.?; }
pub fn getUint16Name() *anyopaque { return g_uint16.?; }
pub fn getUint32Name() *anyopaque { return g_uint32.?; }
pub fn getUint64Name() *anyopaque { return g_uint64.?; }
pub fn getUsizeName() *anyopaque { return g_usize.?; }

const std = @import("std");

test "constants initialize to expected names" {
    initializeConstants();
    defer finalizeConstants();
    try std.testing.expect(@intFromPtr(getNatName()) != 0);
    try std.testing.expect(@intFromPtr(getAndLeftName()) != 0);
}
