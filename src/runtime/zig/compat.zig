// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

const builtin = @import("builtin");
const std = @import("std");
const testing = std.testing;
const alloc = @import("alloc.zig");
const lean = @import("lean_object.zig");
const object = @import("object.zig");
const rc = @import("rc.zig");
const string = @import("string.zig");
const int = @import("int.zig");
const nat_arithmetic = @import("nat_arithmetic.zig");
const uint = @import("uint.zig");
const nat_constructors = @import("nat_constructors.zig");
const runtime_options = @import("runtime_options");
const export_allocator_symbols = runtime_options.export_allocator_symbols;


const max_small_nat: usize = std.math.maxInt(usize) >> 1;

pub const force_link = true;
const max_small_int: i64 = if (@sizeOf(usize) == 8) std.math.maxInt(c_int) else std.math.maxInt(c_int) >> 1;
const min_small_int: i64 = if (@sizeOf(usize) == 8) std.math.minInt(c_int) else std.math.minInt(c_int) >> 1;

fn setStHeader(hdr: *lean.lean_object, tag: u8, other: u8) void {
    const small_cs_sz = hdr.m_cs_sz;
    hdr.m_rc = 1;
    hdr.m_tag = tag;
    hdr.m_other = other;
    hdr.m_cs_sz = if (export_allocator_symbols or !runtime_options.cpp_use_mimalloc) 0 else small_cs_sz;
}

pub export fn lean_big_int64_to_int(n: i64) callconv(.c) *anyopaque {
    return int.lean_big_int64_to_int(n);
}
pub export fn lean_big_size_t_to_int(n: usize) callconv(.c) *anyopaque {
    return int.lean_big_size_t_to_int(n);
}
pub export fn lean_big_int_to_nat(a: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_big_int_to_nat(a);
}

pub export fn lean_int_big_neg(a: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_neg(a);
}
pub export fn lean_int_big_add(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_add(a1, a2);
}
pub export fn lean_int_big_sub(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_sub(a1, a2);
}
pub export fn lean_int_big_mul(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_mul(a1, a2);
}
pub export fn lean_int_big_div(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_div(a1, a2);
}
pub export fn lean_int_big_div_exact(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_div_exact(a1, a2);
}
pub export fn lean_int_big_mod(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_mod(a1, a2);
}
pub export fn lean_int_big_ediv(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_ediv(a1, a2);
}
pub export fn lean_int_big_emod(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return int.lean_int_big_emod(a1, a2);
}
pub export fn lean_int_big_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    return int.lean_int_big_eq(a1, a2);
}
pub export fn lean_int_big_le(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    return int.lean_int_big_le(a1, a2);
}
pub export fn lean_int_big_lt(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool {
    return int.lean_int_big_lt(a1, a2);
}
pub export fn lean_int_big_nonneg(a: *anyopaque) callconv(.c) bool {
    return int.lean_int_big_nonneg(a);
}

pub export fn lean_nat_big_succ(a: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_succ(a);
}
pub export fn lean_nat_big_div_exact(a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_div_exact(a1, a2);
}
pub export fn lean_nat_big_land(a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_land(a1, a2);
}
pub export fn lean_nat_big_lor(a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_lor(a1, a2);
}
pub export fn lean_nat_big_xor(a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_xor(a1, a2);
}
pub export fn lean_nat_big_shiftr(a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_shiftr(a1, a2);
}
pub export fn lean_nat_big_sub(a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque {
    return nat_arithmetic.lean_nat_big_sub(a1, a2);
}
pub export fn lean_big_usize_to_nat(n: usize) callconv(.c) ?*anyopaque {
    return nat_constructors.lean_big_usize_to_nat(n);
}
pub export fn lean_big_uint64_to_nat(n: u64) callconv(.c) ?*anyopaque {
    return nat_constructors.lean_big_uint64_to_nat(n);
}

pub export fn lean_uint8_of_big_nat(a: *anyopaque) callconv(.c) u8 {
    return uint.lean_uint8_of_big_nat(a);
}
pub export fn lean_uint16_of_big_nat(a: *anyopaque) callconv(.c) u16 {
    return uint.lean_uint16_of_big_nat(a);
}
pub export fn lean_uint32_of_big_nat(a: *anyopaque) callconv(.c) u32 {
    return uint.lean_uint32_of_big_nat(a);
}
pub export fn lean_uint64_of_big_nat(a: *anyopaque) callconv(.c) u64 {
    return uint.lean_uint64_of_big_nat(a);
}
pub export fn lean_usize_of_big_nat(a: *anyopaque) callconv(.c) usize {
    return uint.lean_usize_of_big_nat(a);
}

extern fn lean_task_spawn_core(c: *anyopaque, prio: c_uint, keep_alive: bool) callconv(.c) *anyopaque;
extern fn lean_task_bind_core(x: *anyopaque, f: *anyopaque, prio: c_uint, sync: bool, keep_alive: bool) callconv(.c) *anyopaque;
extern fn lean_task_map_core(f: *anyopaque, t: *anyopaque, prio: c_uint, sync: bool, keep_alive: bool) callconv(.c) *anyopaque;
extern fn lean_thunk_get_core(t: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_sarray_eq_cold(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;
extern fn lean_task_get(t: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_task_get_own(t: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_io_check_canceled_core() callconv(.c) bool;
extern fn lean_io_cancel_core(t: *anyopaque) callconv(.c) void;
extern fn lean_io_get_task_state_core(t: *anyopaque) callconv(.c) u8;
extern fn lean_io_wait_any_core(task_list: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_apply_1(f: *anyopaque, a1: *anyopaque) callconv(.c) ?*anyopaque;
extern fn lean_apply_2(f: *anyopaque, a1: *anyopaque, a2: *anyopaque) callconv(.c) ?*anyopaque;

fn scalarToInt64(o: *anyopaque) i64 {
    const raw: u32 = @truncate(object.lean_unbox(o));
    return @as(i32, @bitCast(raw));
}

fn int64ToInt(value: i64) *anyopaque {
    if (min_small_int <= value and value <= max_small_int) {
        const small: c_int = @intCast(value);
        const bits: u32 = @bitCast(small);
        return object.lean_box(bits).?;
    }
    return lean_big_int64_to_int(value);
}

fn usizeToNat(value: usize) *anyopaque {
    if (value <= max_small_nat) return object.lean_box(value).?;
    return lean_big_usize_to_nat(value).?;
}

fn uint64ToNat(value: u64) *anyopaque {
    if (value <= max_small_nat) return object.lean_box(@intCast(value)).?;
    return lean_big_uint64_to_nat(value).?;
}

fn divOrZero(comptime T: type, a: T, b: T) T {
    return if (b == 0) 0 else a / b;
}

fn modOrSelf(comptime T: type, a: T, b: T) T {
    return if (b == 0) a else a % b;
}

fn shiftLeft(comptime T: type, a: T, b: T) T {
    const bits: T = @intCast(@bitSizeOf(T));
    const amount: std.math.Log2Int(T) = @intCast(b % bits);
    return a << amount;
}

fn shiftRight(comptime T: type, a: T, b: T) T {
    const bits: T = @intCast(@bitSizeOf(T));
    const amount: std.math.Log2Int(T) = @intCast(b % bits);
    return a >> amount;
}

fn intFromFloatClamp(comptime T: type, a: anytype, upper: @TypeOf(a)) T {
    if (std.math.isNan(a) or a < 0) return 0;
    if (a < upper) return @intFromFloat(a);
    return std.math.maxInt(T);
}

fn thunkPtr(t: *anyopaque) *lean.lean_thunk_object {
    return @ptrCast(@alignCast(t));
}

fn stringPtr(s: *anyopaque) *lean.lean_string_object {
    return @ptrCast(@alignCast(s));
}

fn sarrayPtr(a: *anyopaque) *lean.lean_sarray_object {
    return @ptrCast(@alignCast(a));
}

pub export fn lean_mk_thunk(c: *anyopaque) callconv(.c) *anyopaque {
    const ptr = alloc.allocSmallObject(@sizeOf(lean.lean_thunk_object));
    const thunk = thunkPtr(ptr);
    setStHeader(&thunk.m_header, lean.LeanThunk, 0);
    thunk.m_value = null;
    thunk.m_closure = c;
    return ptr;
}

pub export fn lean_thunk_pure(v: *anyopaque) callconv(.c) *anyopaque {
    const ptr = alloc.allocSmallObject(@sizeOf(lean.lean_thunk_object));
    const thunk = thunkPtr(ptr);
    setStHeader(&thunk.m_header, lean.LeanThunk, 0);
    thunk.m_value = v;
    thunk.m_closure = null;
    return ptr;
}

pub export fn lean_thunk_get_own(t: *anyopaque) callconv(.c) *anyopaque {
    const thunk = thunkPtr(t);
    const value = thunk.m_value orelse lean_thunk_get_core(t);
    rc.lean_inc(value);
    return value;
}

pub export fn lean_task_spawn(c: *anyopaque, prio: *anyopaque) callconv(.c) *anyopaque {
    return lean_task_spawn_core(c, @intCast(object.lean_unbox(prio)), false);
}

fn lean_io_bind_task_fn(f: *anyopaque, a: *anyopaque) callconv(.c) *anyopaque {
    return (lean_apply_2(f, a, object.lean_box(0).?) orelse @panic("lean_io_bind_task_fn: apply returned null"));
}

pub export fn lean_task_bind(x: *anyopaque, f: *anyopaque, prio: *anyopaque, sync: u8) callconv(.c) *anyopaque {
    return lean_task_bind_core(x, f, @intCast(object.lean_unbox(prio)), sync != 0, false);
}

pub export fn lean_task_map(f: *anyopaque, t: *anyopaque, prio: *anyopaque, sync: u8) callconv(.c) *anyopaque {
    return lean_task_map_core(f, t, @intCast(object.lean_unbox(prio)), sync != 0, false);
}
pub export fn lean_io_map_task(f: *anyopaque, t: *anyopaque, prio: *anyopaque, sync: u8) callconv(.c) *anyopaque {
    const ptr = alloc.lean_alloc_closure(@ptrCast(@constCast(&lean_io_bind_task_fn)), 2, 1);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(ptr));
    const slots: [*]?*anyopaque = @ptrCast(&closure.m_objs);
    slots[0] = f;
    return lean_task_map_core(ptr, t, @intCast(object.lean_unbox(prio)), sync != 0, true);
}

pub export fn lean_io_bind_task(t: *anyopaque, f: *anyopaque, prio: *anyopaque, sync: u8) callconv(.c) *anyopaque {
    const ptr = alloc.lean_alloc_closure(@ptrCast(@constCast(&lean_io_bind_task_fn)), 2, 1);
    const closure: *lean.lean_closure_object = @ptrCast(@alignCast(ptr));
    const slots: [*]?*anyopaque = @ptrCast(&closure.m_objs);
    slots[0] = f;
    return lean_task_bind_core(t, ptr, @intCast(object.lean_unbox(prio)), sync != 0, true);
}
pub export fn lean_io_check_canceled() callconv(.c) u8 {
    return @intFromBool(lean_io_check_canceled_core());
}
pub export fn lean_io_cancel(t: *anyopaque) callconv(.c) *anyopaque {
    lean_io_cancel_core(t);
    return object.lean_box(0).?;
}
pub export fn lean_io_get_task_state(t: *anyopaque) callconv(.c) u8 {
    return lean_io_get_task_state_core(t);
}
pub export fn lean_io_wait(t: *anyopaque) callconv(.c) *anyopaque {
    return lean_task_get_own(t);
}
pub export fn lean_io_wait_any(task_list: *anyopaque) callconv(.c) *anyopaque {
    const t = lean_io_wait_any_core(task_list);
    const v = lean_task_get(t);
    rc.lean_inc(v);
    return v;
}

pub export fn lean_is_exclusive_obj(o: *anyopaque) callconv(.c) u8 {
    return @intFromBool(rc.lean_is_exclusive(o));
}

pub export fn lean_ptr_addr(a: ?*anyopaque) callconv(.c) usize {
    return @intFromPtr(a);
}

pub export fn lean_strict_or(b1: u8, b2: u8) callconv(.c) u8 {
    return @intFromBool(b1 != 0 or b2 != 0);
}

pub export fn lean_strict_and(b1: u8, b2: u8) callconv(.c) u8 {
    return @intFromBool(b1 != 0 and b2 != 0);
}

pub export fn lean_void_mk(a: *anyopaque) callconv(.c) *anyopaque {
    rc.lean_dec(a);
    return object.lean_box(0).?;
}

pub export fn lean_get_githash(_: ?*anyopaque) callconv(.c) *anyopaque {
    return string.mkAsciiStringBytes("");
}

pub export fn lean_internal_get_hardware_concurrency(_: ?*anyopaque) callconv(.c) u32 {
    const count = std.Thread.getCpuCount() catch 1;
    return @intCast(@min(count, std.math.maxInt(u32)));
}

pub export fn lean_internal_has_llvm_backend(_: ?*anyopaque) callconv(.c) u8 {
    return 0;
}

pub export fn lean_internal_is_stage0(_: ?*anyopaque) callconv(.c) u8 {
    return 0;
}

pub export fn lean_system_platform_windows(_: ?*anyopaque) callconv(.c) u8 {
    return @intFromBool(builtin.target.os.tag == .windows);
}

pub export fn lean_system_platform_osx(_: ?*anyopaque) callconv(.c) u8 {
    return @intFromBool(builtin.target.os.tag == .macos);
}

pub export fn lean_system_platform_emscripten(_: ?*anyopaque) callconv(.c) u8 {
    return @intFromBool(builtin.target.os.tag == .emscripten);
}

pub export fn lean_system_platform_nbits(_: ?*anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(if (@sizeOf(usize) == 8) 64 else 32).?;
}

pub export fn lean_system_platform_target(_: ?*anyopaque) callconv(.c) *anyopaque {
    return string.mkAsciiStringBytes("");
}

pub export fn lean_internal_has_address_sanitizer(_: ?*anyopaque) callconv(.c) u8 {
    return 0;
}

pub export fn lean_internal_is_multi_thread(_: ?*anyopaque) callconv(.c) u8 {
    return 1;
}

pub export fn lean_internal_is_debug(_: ?*anyopaque) callconv(.c) u8 {
    return @intFromBool(std.mem.eql(u8, runtime_options.cpp_build_type, "Debug"));
}

pub export fn lean_internal_get_build_type(_: ?*anyopaque) callconv(.c) *anyopaque {
    return string.mkAsciiStringBytes(runtime_options.cpp_build_type);
}

pub export fn lean_version_get_major(_: ?*anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(4).?;
}

pub export fn lean_version_get_minor(_: ?*anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(32).?;
}

pub export fn lean_version_get_patch(_: ?*anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(0).?;
}

pub export fn lean_version_get_is_release(_: ?*anyopaque) callconv(.c) u8 {
    return 0;
}

pub export fn lean_version_get_special_desc(_: ?*anyopaque) callconv(.c) *anyopaque {
    return string.mkAsciiStringBytes("");
}

pub export fn lean_runtime_mark_multi_threaded(a: *anyopaque) callconv(.c) *anyopaque {
    rc.lean_mark_mt(a);
    return a;
}

pub export fn lean_runtime_mark_persistent(a: *anyopaque) callconv(.c) *anyopaque {
    rc.lean_mark_persistent(a);
    return a;
}

pub export fn lean_runtime_forget(_: *anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(0).?;
}

pub export fn lean_runtime_hold(_: *anyopaque) callconv(.c) *anyopaque {
    return object.lean_box(0).?;
}


pub export fn lean_expr_dbg_to_string(e: *anyopaque) callconv(.c) *anyopaque {
    var fbs = std.Io.Writer.Allocating.init(std.heap.page_allocator);
    defer fbs.deinit();
    var ctx = BinderCtx{};
    exprDbgPrint(&fbs.writer, e, &ctx, 0) catch {};
    const written = fbs.written();
    return string.mkStringFromBytes(written);
}

const BinderCtx = struct {
    names: [64]*anyopaque = undefined,
    bis: [64]u8 = undefined,
    len: u32 = 0,

    fn push(self: *BinderCtx, name: *anyopaque, bi: u8) void {
        if (self.len < 64) {
            self.names[self.len] = name;
            self.bis[self.len] = bi;
            self.len += 1;
        }
    }

    fn pop(self: *BinderCtx) void {
        if (self.len > 0) self.len -= 1;
    }

    fn getName(self: *const BinderCtx, idx: u32) ?*anyopaque {
        if (idx < self.len) return self.names[self.len - 1 - idx];
        return null;
    }
};

fn exprDbgPrint(w: *std.Io.Writer, e: *anyopaque, ctx: *BinderCtx, prec: u32) anyerror!void {
    if (object.lean_is_scalar(e)) { try w.print("@{}", .{object.lean_unbox(e)}); return; }
    const tag = object.lean_ptr_tag(e);
    const ct = @import("ctor.zig");
    switch (tag) {
        0 => { // bvar
            const idx = object.lean_unbox(ct.lean_ctor_get(e, 0) orelse return);
            if (ctx.getName(@intCast(idx))) |n| { try printNameDbg(w, n); } else { try w.print("@[{}]", .{idx}); }
        },
        1 => try printNameDbg(w, ct.lean_ctor_get(e, 0) orelse return), // fvar
        2 => { try w.writeAll("?m."); try printNameDbg(w, ct.lean_ctor_get(e, 0) orelse return); }, // mvar
        3 => { // sort
            const lvl = ct.lean_ctor_get(e, 0);
            if (lvl != null and !object.lean_is_scalar(lvl.?)) {
                try printLevel(w, lvl.?);
            } else { try w.writeAll("Sort"); }
        },
        4 => { // const
            try printNameDbg(w, ct.lean_ctor_get(e, 0) orelse return);
        },
        5 => { // app
            try exprDbgPrint(w, ct.lean_ctor_get(e, 0) orelse return, ctx, 1);
            try w.writeByte(' ');
            const arg = ct.lean_ctor_get(e, 1) orelse return;
            try exprDbgPrint(w, arg, ctx, 2);
        },
        6 => { // lam
            const name = ct.lean_ctor_get(e, 0) orelse return;
            const domain = ct.lean_ctor_get(e, 1) orelse return;
            const body = ct.lean_ctor_get(e, 2) orelse return;
            const bi = exprBinderInfo(e);
            try w.writeAll("fun ");
            if (bi == 1) try w.writeByte('{'); else try w.writeByte('(');
            try printNameDbg(w, name);
            try w.writeAll(" : ");
            try exprDbgPrint(w, domain, ctx, 0);
            if (bi == 1) try w.writeByte('}') else try w.writeByte(')');
            try w.writeAll(" => ");
            ctx.push(name, bi);
            try exprDbgPrint(w, body, ctx, 0);
            ctx.pop();
        },
        7 => { // forallE
            const name = ct.lean_ctor_get(e, 0) orelse return;
            const domain = ct.lean_ctor_get(e, 1) orelse return;
            const body = ct.lean_ctor_get(e, 2) orelse return;
            const bi = exprBinderInfo(e);
            ctx.push(name, bi);
            // Check if binder name is used in body
            const uses_name = bvarHasRef(body, ctx.len - 1, ctx);
            if (uses_name) {
                if (bi == 1) try w.writeByte('{') else try w.writeByte('(');
                try printNameDbg(w, name);
                try w.writeAll(" : ");
                try exprDbgPrint(w, domain, ctx, 0);
                if (bi == 1) try w.writeByte('}') else try w.writeByte(')');
                try w.writeAll(" → ");
            } else {
                if (prec >= 1) try w.writeByte('(');
                try exprDbgPrint(w, domain, ctx, 0);
                try w.writeAll(" → ");
            }
            try exprDbgPrint(w, body, ctx, 0);
            if (!uses_name and prec >= 1) try w.writeByte(')');
            ctx.pop();
        },
        8 => { // letE
            const name = ct.lean_ctor_get(e, 0) orelse return;
            const te = ct.lean_ctor_get(e, 1) orelse return;
            const val = ct.lean_ctor_get(e, 2) orelse return;
            const body = ct.lean_ctor_get(e, 3) orelse return;
            try w.writeAll("let ");
            try printNameDbg(w, name);
            try w.writeAll(" : ");
            try exprDbgPrint(w, te, ctx, 0);
            try w.writeAll(" := ");
            try exprDbgPrint(w, val, ctx, 0);
            try w.writeAll("; ");
            ctx.push(name, 0);
            try exprDbgPrint(w, body, ctx, 0);
            ctx.pop();
        },
        9 => { // lit
            const lit = ct.lean_ctor_get(e, 0) orelse return;
            if (!object.lean_is_scalar(lit) and object.lean_ptr_tag(lit) == 0) { // natVal
                const n = ct.lean_ctor_get(lit, 0) orelse return;
                if (object.lean_is_scalar(n)) { try w.print("{}", .{object.lean_unbox(n)}); } else { try w.writeAll("#"); }
            } else { try w.print("«lit»", .{}); }
        },
        10 => try exprDbgPrint(w, ct.lean_ctor_get(e, 1) orelse return, ctx, prec), // mdata
        11 => { // proj
            try exprDbgPrint(w, ct.lean_ctor_get(e, 2) orelse return, ctx, 1);
            try w.writeByte('.');
            const idx = ct.lean_ctor_get(e, 1) orelse return;
            try w.print("{}", .{object.lean_unbox(idx)});
        },
        else => try w.print("<expr:{}>", .{tag}),
    }
}

fn exprBinderInfo(e: *anyopaque) u8 {
    const num_objs: usize = @import("ctor.zig").ctorNumObjs(e);
    return @import("ctor.zig").lean_ctor_get_uint8(e, @intCast(num_objs * @sizeOf(usize) + @sizeOf(usize)));
}

fn bvarHasRef(e: *anyopaque, target: u32, ctx: *const BinderCtx) bool {
    if (object.lean_is_scalar(e)) return false;
    const tag = object.lean_ptr_tag(e);
    if (tag == 0) {
        const ct = @import("ctor.zig");
        const idx = object.lean_unbox(ct.lean_ctor_get(e, 0) orelse return false);
        return idx == target;
    }
    // Quick check: if bvarRange is 0, no bvars
    return false; // Simplified: only checks direct bvar(0)
}

fn printLevel(w: *std.Io.Writer, l: *anyopaque) anyerror!void {
    if (object.lean_is_scalar(l)) { try w.print("L@{}", .{object.lean_unbox(l)}); return; }
    const tag = object.lean_ptr_tag(l);
    const ct = @import("ctor.zig");
    switch (tag) {
        0 => try w.writeAll("0"),
        1 => {
            if (ct.ctorNumObjs(l) >= 1) {
                const inner = ct.lean_ctor_get(l, 0);
                if (inner != null and !object.lean_is_scalar(inner.?)) {
                    if (object.lean_ptr_tag(inner.?) == 0) { try w.writeAll("1"); return; }
                    try w.writeAll("1+"); try printLevel(w, inner.?); return;
                }
            }
            try w.writeAll("1");
        },
        else => try w.print("L@{}", .{tag}),
    }
}

fn printNameDbg(w: *std.Io.Writer, n: *anyopaque) anyerror!void {
    printName(w, n);
}

fn printName(w: *std.Io.Writer, n: *anyopaque) void {
    if (object.lean_is_scalar(n)) {
        w.print("_", .{}) catch return;
        return;
    }
    const ctor_mod = @import("ctor.zig");
    const tag = object.lean_ptr_tag(n);
    const parent = ctor_mod.lean_ctor_get(n, 0) orelse return;
    if (!object.lean_is_scalar(parent)) {
        printName(w, parent);
        w.writeByte('.') catch return;
    }
    switch (tag) {
        1 => {
            const str_obj = ctor_mod.lean_ctor_get(n, 1) orelse return;
            const s: *lean.lean_string_object = @ptrCast(@alignCast(str_obj));
            const data: [*]const u8 = @ptrCast(&s.m_data);
            w.writeAll(data[0..s.m_size -| 1]) catch return;
        },
        2 => {
            w.print("{d}", .{object.lean_unbox(ctor_mod.lean_ctor_get(n, 1) orelse return)}) catch return;
        },
        else => return,
    }
}

pub export fn lean_sorry(_: u8) callconv(.c) *anyopaque {
    @panic("executed 'sorry'");
}

pub export fn lean_dbg_stack_trace(fn_obj: *anyopaque) callconv(.c) *anyopaque {
    return (lean_apply_1(fn_obj, object.lean_box(0).?) orelse @panic("lean_dbg_stack_trace: apply returned null"));
}

pub export fn lean_nat_to_int(a: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a)) {
        const value = object.lean_unbox(a);
        if (value <= @as(usize, @intCast(max_small_int))) return object.lean_box(value).?;
        return lean_big_size_t_to_int(value);
    }
    rc.lean_inc(a);
    return a;
}

pub export fn lean_nat_abs(i: *anyopaque) callconv(.c) *anyopaque {
    if (lean_int_dec_lt(i, object.lean_box(0).?) != 0) {
        const neg = lean_int_neg(i);
        if (object.lean_is_scalar(neg)) return neg;
        return lean_big_int_to_nat(neg);
    }
    if (!object.lean_is_scalar(i)) rc.lean_inc(i);
    return i;
}

pub export fn lean_nat_div_exact(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return lean_nat_big_div_exact(a1, a2).?;
}

pub export fn lean_nat_land(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return lean_nat_big_land(a1, a2).?;
}

pub export fn lean_nat_lor(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return lean_nat_big_lor(a1, a2).?;
}

pub export fn lean_nat_lxor(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return lean_nat_big_xor(a1, a2).?;
}

pub export fn lean_nat_pred(n: *anyopaque) callconv(.c) *anyopaque {
    return lean_nat_big_sub(n, object.lean_box(1).?).?;
}

pub export fn lean_nat_shiftr(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    return lean_nat_big_shiftr(a1, a2).?;
}

pub export fn lean_int_neg_succ_of_nat(a: *anyopaque) callconv(.c) *anyopaque {
    const s = lean_nat_big_succ(a).?;
    const i = lean_nat_to_int(s);
    const r = lean_int_neg(i);
    rc.lean_dec(i);
    return r;
}

pub export fn lean_int_neg(a: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a)) return int64ToInt(-scalarToInt64(a));
    return lean_int_big_neg(a);
}

pub export fn lean_int_add(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return int64ToInt(scalarToInt64(a1) + scalarToInt64(a2));
    }
    return lean_int_big_add(a1, a2);
}

pub export fn lean_int_sub(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return int64ToInt(scalarToInt64(a1) - scalarToInt64(a2));
    }
    return lean_int_big_sub(a1, a2);
}

pub export fn lean_int_mul(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        return int64ToInt(scalarToInt64(a1) * scalarToInt64(a2));
    }
    return lean_int_big_mul(a1, a2);
}

pub export fn lean_int_div(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        const v1 = scalarToInt64(a1);
        const v2 = scalarToInt64(a2);
        if (v2 == 0) return object.lean_box(0).?;
        return int64ToInt(@divTrunc(v1, v2));
    }
    return lean_int_big_div(a1, a2);
}

pub export fn lean_int_div_exact(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        const v1 = scalarToInt64(a1);
        const v2 = scalarToInt64(a2);
        if (v2 == 0) return object.lean_box(0).?;
        return int64ToInt(@divTrunc(v1, v2));
    }
    return lean_int_big_div_exact(a1, a2);
}

pub export fn lean_int_mod(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        const v1 = scalarToInt64(a1);
        const v2 = scalarToInt64(a2);
        if (v2 == 0) return a1;
        return int64ToInt(@rem(v1, v2));
    }
    return lean_int_big_mod(a1, a2);
}

pub export fn lean_int_ediv(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        const v1 = scalarToInt64(a1);
        const v2 = scalarToInt64(a2);
        if (v2 == 0) return object.lean_box(0).?;
        const q = @divFloor(v1, v2);
        return int64ToInt(q);
    }
    return lean_int_big_ediv(a1, a2);
}

pub export fn lean_int_emod(a1: *anyopaque, a2: *anyopaque) callconv(.c) *anyopaque {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) {
        const v1 = scalarToInt64(a1);
        const v2 = scalarToInt64(a2);
        if (v2 == 0) return a1;
        const q = @divFloor(v1, v2);
        return int64ToInt(v1 - q * v2);
    }
    return lean_int_big_emod(a1, a2);
}

pub export fn lean_int_dec_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) u8 {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) return @intFromBool(a1 == a2);
    return @intFromBool(lean_int_big_eq(a1, a2));
}

pub export fn lean_int_dec_le(a1: *anyopaque, a2: *anyopaque) callconv(.c) u8 {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) return @intFromBool(scalarToInt64(a1) <= scalarToInt64(a2));
    return @intFromBool(lean_int_big_le(a1, a2));
}

pub export fn lean_int_dec_lt(a1: *anyopaque, a2: *anyopaque) callconv(.c) u8 {
    if (object.lean_is_scalar(a1) and object.lean_is_scalar(a2)) return @intFromBool(scalarToInt64(a1) < scalarToInt64(a2));
    return @intFromBool(lean_int_big_lt(a1, a2));
}

pub export fn lean_int_dec_nonneg(a: *anyopaque) callconv(.c) u8 {
    if (object.lean_is_scalar(a)) return @intFromBool(scalarToInt64(a) >= 0);
    return @intFromBool(lean_int_big_nonneg(a));
}

pub export fn lean_uint8_of_nat(a: *anyopaque) callconv(.c) u8 {
    return if (object.lean_is_scalar(a)) @truncate(object.lean_unbox(a)) else lean_uint8_of_big_nat(a);
}

pub export fn lean_uint8_of_nat_mk(a: *anyopaque) callconv(.c) u8 {
    const r = lean_uint8_of_nat(a);
    rc.lean_dec(a);
    return r;
}

pub export fn lean_uint8_to_nat(a: u8) callconv(.c) *anyopaque {
    return usizeToNat(a);
}
pub export fn lean_uint8_add(a1: u8, a2: u8) callconv(.c) u8 {
    return a1 +% a2;
}
pub export fn lean_uint8_sub(a1: u8, a2: u8) callconv(.c) u8 {
    return a1 -% a2;
}
pub export fn lean_uint8_mul(a1: u8, a2: u8) callconv(.c) u8 {
    return a1 *% a2;
}
pub export fn lean_uint8_div(a1: u8, a2: u8) callconv(.c) u8 {
    return divOrZero(u8, a1, a2);
}
pub export fn lean_uint8_mod(a1: u8, a2: u8) callconv(.c) u8 {
    return modOrSelf(u8, a1, a2);
}
pub export fn lean_uint8_lor(a: u8, b: u8) callconv(.c) u8 {
    return a | b;
}
pub export fn lean_uint8_xor(a: u8, b: u8) callconv(.c) u8 {
    return a ^ b;
}
pub export fn lean_uint8_shift_left(a: u8, b: u8) callconv(.c) u8 {
    return shiftLeft(u8, a, b);
}
pub export fn lean_uint8_shift_right(a: u8, b: u8) callconv(.c) u8 {
    return shiftRight(u8, a, b);
}
pub export fn lean_uint8_complement(a: u8) callconv(.c) u8 {
    return ~a;
}
pub export fn lean_uint8_neg(a: u8) callconv(.c) u8 {
    return 0 -% a;
}
pub export fn lean_uint8_dec_lt(a1: u8, a2: u8) callconv(.c) u8 {
    return @intFromBool(a1 < a2);
}
pub export fn lean_uint8_dec_le(a1: u8, a2: u8) callconv(.c) u8 {
    return @intFromBool(a1 <= a2);
}
pub export fn lean_uint8_to_uint16(a: u8) callconv(.c) u16 {
    return a;
}
pub export fn lean_uint8_to_uint64(a: u8) callconv(.c) u64 {
    return a;
}
pub export fn lean_uint8_to_usize(a: u8) callconv(.c) usize {
    return a;
}
pub export fn lean_uint8_to_float(a: u8) callconv(.c) f64 {
    return @floatFromInt(a);
}
pub export fn lean_uint8_to_float32(a: u8) callconv(.c) f32 {
    return @floatFromInt(a);
}

pub export fn lean_uint16_of_nat(a: *anyopaque) callconv(.c) u16 {
    return if (object.lean_is_scalar(a)) @truncate(object.lean_unbox(a)) else lean_uint16_of_big_nat(a);
}

pub export fn lean_uint16_of_nat_mk(a: *anyopaque) callconv(.c) u16 {
    const r = lean_uint16_of_nat(a);
    rc.lean_dec(a);
    return r;
}

pub export fn lean_uint16_to_nat(a: u16) callconv(.c) *anyopaque {
    return usizeToNat(a);
}
pub export fn lean_uint16_add(a1: u16, a2: u16) callconv(.c) u16 {
    return a1 +% a2;
}
pub export fn lean_uint16_sub(a1: u16, a2: u16) callconv(.c) u16 {
    return a1 -% a2;
}
pub export fn lean_uint16_mul(a1: u16, a2: u16) callconv(.c) u16 {
    return a1 *% a2;
}
pub export fn lean_uint16_div(a1: u16, a2: u16) callconv(.c) u16 {
    return divOrZero(u16, a1, a2);
}
pub export fn lean_uint16_mod(a1: u16, a2: u16) callconv(.c) u16 {
    return modOrSelf(u16, a1, a2);
}
pub export fn lean_uint16_land(a: u16, b: u16) callconv(.c) u16 {
    return a & b;
}
pub export fn lean_uint16_lor(a: u16, b: u16) callconv(.c) u16 {
    return a | b;
}
pub export fn lean_uint16_xor(a: u16, b: u16) callconv(.c) u16 {
    return a ^ b;
}
pub export fn lean_uint16_shift_left(a: u16, b: u16) callconv(.c) u16 {
    return shiftLeft(u16, a, b);
}
pub export fn lean_uint16_shift_right(a: u16, b: u16) callconv(.c) u16 {
    return shiftRight(u16, a, b);
}
pub export fn lean_uint16_complement(a: u16) callconv(.c) u16 {
    return ~a;
}
pub export fn lean_uint16_neg(a: u16) callconv(.c) u16 {
    return 0 -% a;
}
pub export fn lean_uint16_dec_eq(a1: u16, a2: u16) callconv(.c) u8 {
    return @intFromBool(a1 == a2);
}
pub export fn lean_uint16_dec_lt(a1: u16, a2: u16) callconv(.c) u8 {
    return @intFromBool(a1 < a2);
}
pub export fn lean_uint16_dec_le(a1: u16, a2: u16) callconv(.c) u8 {
    return @intFromBool(a1 <= a2);
}
pub export fn lean_uint16_to_uint8(a: u16) callconv(.c) u8 {
    return @truncate(a);
}
pub export fn lean_uint16_to_uint32(a: u16) callconv(.c) u32 {
    return a;
}
pub export fn lean_uint16_to_uint64(a: u16) callconv(.c) u64 {
    return a;
}
pub export fn lean_uint16_to_usize(a: u16) callconv(.c) usize {
    return a;
}
pub export fn lean_uint16_to_float(a: u16) callconv(.c) f64 {
    return @floatFromInt(a);
}
pub export fn lean_uint16_to_float32(a: u16) callconv(.c) f32 {
    return @floatFromInt(a);
}

pub export fn lean_bool_to_uint8(a: u8) callconv(.c) u8 {
    return a;
}
pub export fn lean_bool_to_uint16(a: u8) callconv(.c) u16 {
    return a;
}
pub export fn lean_bool_to_uint32(a: u8) callconv(.c) u32 {
    return a;
}
pub export fn lean_bool_to_uint64(a: u8) callconv(.c) u64 {
    return a;
}
pub export fn lean_bool_to_usize(a: u8) callconv(.c) usize {
    return a;
}
pub export fn lean_uint32_of_nat(a: *anyopaque) callconv(.c) u32 {
    return if (object.lean_is_scalar(a)) @truncate(object.lean_unbox(a)) else lean_uint32_of_big_nat(a);
}

pub export fn lean_uint32_of_nat_mk(a: *anyopaque) callconv(.c) u32 {
    const r = lean_uint32_of_nat(a);
    rc.lean_dec(a);
    return r;
}

pub export fn lean_uint32_to_nat(a: u32) callconv(.c) *anyopaque {
    return usizeToNat(a);
}
pub export fn lean_uint32_add(a1: u32, a2: u32) callconv(.c) u32 {
    return a1 +% a2;
}
pub export fn lean_uint32_sub(a1: u32, a2: u32) callconv(.c) u32 {
    return a1 -% a2;
}
pub export fn lean_uint32_mul(a1: u32, a2: u32) callconv(.c) u32 {
    return a1 *% a2;
}
pub export fn lean_uint32_div(a1: u32, a2: u32) callconv(.c) u32 {
    return divOrZero(u32, a1, a2);
}
pub export fn lean_uint32_mod(a1: u32, a2: u32) callconv(.c) u32 {
    return modOrSelf(u32, a1, a2);
}
pub export fn lean_uint32_land(a: u32, b: u32) callconv(.c) u32 {
    return a & b;
}
pub export fn lean_uint32_lor(a: u32, b: u32) callconv(.c) u32 {
    return a | b;
}
pub export fn lean_uint32_xor(a: u32, b: u32) callconv(.c) u32 {
    return a ^ b;
}
pub export fn lean_uint32_shift_left(a: u32, b: u32) callconv(.c) u32 {
    return shiftLeft(u32, a, b);
}
pub export fn lean_uint32_shift_right(a: u32, b: u32) callconv(.c) u32 {
    return shiftRight(u32, a, b);
}
pub export fn lean_uint32_complement(a: u32) callconv(.c) u32 {
    return ~a;
}
pub export fn lean_uint32_neg(a: u32) callconv(.c) u32 {
    return 0 -% a;
}
pub export fn lean_uint32_dec_eq(a1: u32, a2: u32) callconv(.c) u8 {
    return @intFromBool(a1 == a2);
}
pub export fn lean_uint32_dec_lt(a1: u32, a2: u32) callconv(.c) u8 {
    return @intFromBool(a1 < a2);
}
pub export fn lean_uint32_dec_le(a1: u32, a2: u32) callconv(.c) u8 {
    return @intFromBool(a1 <= a2);
}
pub export fn lean_uint32_to_uint8(a: u32) callconv(.c) u8 {
    return @truncate(a);
}
pub export fn lean_uint32_to_uint16(a: u32) callconv(.c) u16 {
    return @truncate(a);
}
pub export fn lean_uint32_to_uint64(a: u32) callconv(.c) u64 {
    return a;
}
pub export fn lean_uint32_to_usize(a: u32) callconv(.c) usize {
    return a;
}
pub export fn lean_uint32_to_float(a: u32) callconv(.c) f64 {
    return @floatFromInt(a);
}
pub export fn lean_uint32_to_float32(a: u32) callconv(.c) f32 {
    return @floatFromInt(a);
}

pub export fn lean_uint64_of_nat(a: *anyopaque) callconv(.c) u64 {
    return if (object.lean_is_scalar(a)) object.lean_unbox(a) else lean_uint64_of_big_nat(a);
}

pub export fn lean_uint64_of_nat_mk(a: *anyopaque) callconv(.c) u64 {
    const r = lean_uint64_of_nat(a);
    rc.lean_dec(a);
    return r;
}

pub export fn lean_uint64_to_nat(a: u64) callconv(.c) *anyopaque {
    return uint64ToNat(a);
}
pub export fn lean_uint64_add(a1: u64, a2: u64) callconv(.c) u64 {
    return a1 +% a2;
}
pub export fn lean_uint64_sub(a1: u64, a2: u64) callconv(.c) u64 {
    return a1 -% a2;
}
pub export fn lean_uint64_mul(a1: u64, a2: u64) callconv(.c) u64 {
    return a1 *% a2;
}
pub export fn lean_uint64_div(a1: u64, a2: u64) callconv(.c) u64 {
    return divOrZero(u64, a1, a2);
}
pub export fn lean_uint64_mod(a1: u64, a2: u64) callconv(.c) u64 {
    return modOrSelf(u64, a1, a2);
}
pub export fn lean_uint64_land(a: u64, b: u64) callconv(.c) u64 {
    return a & b;
}
pub export fn lean_uint64_lor(a: u64, b: u64) callconv(.c) u64 {
    return a | b;
}
pub export fn lean_uint64_xor(a: u64, b: u64) callconv(.c) u64 {
    return a ^ b;
}
pub export fn lean_uint64_shift_left(a: u64, b: u64) callconv(.c) u64 {
    return shiftLeft(u64, a, b);
}
pub export fn lean_uint64_shift_right(a: u64, b: u64) callconv(.c) u64 {
    return shiftRight(u64, a, b);
}
pub export fn lean_uint64_complement(a: u64) callconv(.c) u64 {
    return ~a;
}
pub export fn lean_uint64_neg(a: u64) callconv(.c) u64 {
    return 0 -% a;
}
pub export fn lean_uint64_dec_eq(a1: u64, a2: u64) callconv(.c) u8 {
    return @intFromBool(a1 == a2);
}
pub export fn lean_uint64_dec_lt(a1: u64, a2: u64) callconv(.c) u8 {
    return @intFromBool(a1 < a2);
}
pub export fn lean_uint64_dec_le(a1: u64, a2: u64) callconv(.c) u8 {
    return @intFromBool(a1 <= a2);
}
pub export fn lean_uint64_to_uint8(a: u64) callconv(.c) u8 {
    return @truncate(a);
}
pub export fn lean_uint64_to_uint16(a: u64) callconv(.c) u16 {
    return @truncate(a);
}
pub export fn lean_uint64_to_uint32(a: u64) callconv(.c) u32 {
    return @truncate(a);
}
pub export fn lean_uint64_to_usize(a: u64) callconv(.c) usize {
    return @truncate(a);
}
pub export fn lean_uint64_to_float(a: u64) callconv(.c) f64 {
    return @floatFromInt(a);
}
pub export fn lean_uint64_to_float32(a: u64) callconv(.c) f32 {
    return @floatFromInt(a);
}

pub export fn lean_usize_of_nat(a: *anyopaque) callconv(.c) usize {
    return if (object.lean_is_scalar(a)) object.lean_unbox(a) else lean_usize_of_big_nat(a);
}

pub export fn lean_usize_of_nat_mk(a: *anyopaque) callconv(.c) usize {
    const r = lean_usize_of_nat(a);
    rc.lean_dec(a);
    return r;
}

pub export fn lean_usize_to_nat(a: usize) callconv(.c) *anyopaque {
    return usizeToNat(a);
}
pub export fn lean_usize_add(a1: usize, a2: usize) callconv(.c) usize {
    return a1 +% a2;
}
pub export fn lean_usize_sub(a1: usize, a2: usize) callconv(.c) usize {
    return a1 -% a2;
}
pub export fn lean_usize_mul(a1: usize, a2: usize) callconv(.c) usize {
    return a1 *% a2;
}
pub export fn lean_usize_div(a1: usize, a2: usize) callconv(.c) usize {
    return divOrZero(usize, a1, a2);
}
pub export fn lean_usize_mod(a1: usize, a2: usize) callconv(.c) usize {
    return modOrSelf(usize, a1, a2);
}
pub export fn lean_usize_land(a: usize, b: usize) callconv(.c) usize {
    return a & b;
}
pub export fn lean_usize_lor(a: usize, b: usize) callconv(.c) usize {
    return a | b;
}
pub export fn lean_usize_xor(a: usize, b: usize) callconv(.c) usize {
    return a ^ b;
}
pub export fn lean_usize_shift_left(a: usize, b: usize) callconv(.c) usize {
    return shiftLeft(usize, a, b);
}
pub export fn lean_usize_shift_right(a: usize, b: usize) callconv(.c) usize {
    return shiftRight(usize, a, b);
}
pub export fn lean_usize_complement(a: usize) callconv(.c) usize {
    return ~a;
}
pub export fn lean_usize_neg(a: usize) callconv(.c) usize {
    return 0 -% a;
}
pub export fn lean_usize_dec_eq(a1: usize, a2: usize) callconv(.c) u8 {
    return @intFromBool(a1 == a2);
}
pub export fn lean_usize_dec_lt(a1: usize, a2: usize) callconv(.c) u8 {
    return @intFromBool(a1 < a2);
}
pub export fn lean_usize_dec_le(a1: usize, a2: usize) callconv(.c) u8 {
    return @intFromBool(a1 <= a2);
}
pub export fn lean_usize_to_uint8(a: usize) callconv(.c) u8 {
    return @truncate(a);
}
pub export fn lean_usize_to_uint16(a: usize) callconv(.c) u16 {
    return @truncate(a);
}
pub export fn lean_usize_to_uint32(a: usize) callconv(.c) u32 {
    return @truncate(a);
}
pub export fn lean_usize_to_uint64(a: usize) callconv(.c) u64 {
    return a;
}
pub export fn lean_usize_to_float(a: usize) callconv(.c) f64 {
    return @floatFromInt(a);
}
pub export fn lean_usize_to_float32(a: usize) callconv(.c) f32 {
    return @floatFromInt(a);
}

pub export fn lean_float_add(a: f64, b: f64) callconv(.c) f64 {
    return a + b;
}
pub export fn lean_float_sub(a: f64, b: f64) callconv(.c) f64 {
    return a - b;
}
pub export fn lean_float_mul(a: f64, b: f64) callconv(.c) f64 {
    return a * b;
}
pub export fn lean_float_div(a: f64, b: f64) callconv(.c) f64 {
    return a / b;
}
pub export fn lean_float_negate(a: f64) callconv(.c) f64 {
    return -a;
}
pub export fn lean_float_beq(a: f64, b: f64) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_float_decLe(a: f64, b: f64) callconv(.c) u8 {
    return @intFromBool(a <= b);
}
pub export fn lean_float_decLt(a: f64, b: f64) callconv(.c) u8 {
    return @intFromBool(a < b);
}
pub export fn lean_float_to_uint8(a: f64) callconv(.c) u8 {
    return intFromFloatClamp(u8, a, 256.0);
}
pub export fn lean_float_to_uint16(a: f64) callconv(.c) u16 {
    return intFromFloatClamp(u16, a, 65536.0);
}
pub export fn lean_float_to_uint32(a: f64) callconv(.c) u32 {
    return intFromFloatClamp(u32, a, 4294967296.0);
}
pub export fn lean_float_to_uint64(a: f64) callconv(.c) u64 {
    return intFromFloatClamp(u64, a, 18446744073709551616.0);
}
pub export fn lean_float_to_usize(a: f64) callconv(.c) usize {
    if (@sizeOf(usize) == @sizeOf(u64)) return @intCast(lean_float_to_uint64(a));
    return @intCast(lean_float_to_uint32(a));
}
pub export fn lean_float_to_float32(a: f64) callconv(.c) f32 {
    return @floatCast(a);
}

pub export fn lean_float32_add(a: f32, b: f32) callconv(.c) f32 {
    return a + b;
}
pub export fn lean_float32_sub(a: f32, b: f32) callconv(.c) f32 {
    return a - b;
}
pub export fn lean_float32_mul(a: f32, b: f32) callconv(.c) f32 {
    return a * b;
}
pub export fn lean_float32_div(a: f32, b: f32) callconv(.c) f32 {
    return a / b;
}
pub export fn lean_float32_negate(a: f32) callconv(.c) f32 {
    return -a;
}
pub export fn lean_float32_beq(a: f32, b: f32) callconv(.c) u8 {
    return @intFromBool(a == b);
}
pub export fn lean_float32_decLe(a: f32, b: f32) callconv(.c) u8 {
    return @intFromBool(a <= b);
}
pub export fn lean_float32_decLt(a: f32, b: f32) callconv(.c) u8 {
    return @intFromBool(a < b);
}
pub export fn lean_float32_to_uint8(a: f32) callconv(.c) u8 {
    return intFromFloatClamp(u8, a, 256.0);
}
pub export fn lean_float32_to_uint16(a: f32) callconv(.c) u16 {
    return intFromFloatClamp(u16, a, 65536.0);
}
pub export fn lean_float32_to_uint32(a: f32) callconv(.c) u32 {
    return intFromFloatClamp(u32, a, 4294967296.0);
}
pub export fn lean_float32_to_uint64(a: f32) callconv(.c) u64 {
    return intFromFloatClamp(u64, a, 18446744073709551616.0);
}
pub export fn lean_float32_to_usize(a: f32) callconv(.c) usize {
    if (@sizeOf(usize) == @sizeOf(u64)) return @intCast(lean_float32_to_uint64(a));
    return @intCast(lean_float32_to_uint32(a));
}
pub export fn lean_float32_to_float(a: f32) callconv(.c) f64 {
    return @floatCast(a);
}

pub export fn lean_sarray_size(o: *anyopaque) callconv(.c) usize {
    return sarrayPtr(o).m_size;
}

pub export fn lean_sarray_dec_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) u8 {
    return @intFromBool(a1 == a2 or (lean_sarray_size(a1) == lean_sarray_size(a2) and lean_sarray_eq_cold(a1, a2)));
}

pub export fn lean_string_memcmp(s1: *anyopaque, s2: *anyopaque, lstart: *anyopaque, rstart: *anyopaque, len: *anyopaque) callconv(.c) u8 {
    const lhs: [*]const u8 = @ptrCast(&stringPtr(s1).m_data);
    const rhs: [*]const u8 = @ptrCast(&stringPtr(s2).m_data);
    const lo = object.lean_unbox(lstart);
    const ro = object.lean_unbox(rstart);
    const n = object.lean_unbox(len);
    return @intFromBool(std.mem.eql(u8, lhs[lo .. lo + n], rhs[ro .. ro + n]));
}

test "compat numeric wrappers handle representative cases" {
    const n = object.lean_box(300).?;
    try testing.expectEqual(@as(u8, 44), lean_uint8_of_nat(n));
    try testing.expectEqual(@as(u16, 300), lean_uint16_of_nat(n));
    const int_lhs = object.lean_box(@as(usize, @intCast(@as(u32, @bitCast(@as(i32, -7)))))).?;
    const int_rhs = object.lean_box(3).?;
    const sum = lean_int_add(int_lhs, int_rhs);
    defer rc.lean_dec(sum);
    try testing.expectEqual(@as(u8, 0), lean_int_dec_eq(sum, object.lean_box(0).?));
    try testing.expectEqual(@as(u8, 0), lean_float_to_uint8(-1.0));
    try testing.expectEqual(@as(u8, 255), lean_float_to_uint8(999.0));
    try testing.expectEqual(@as(u16, 7), lean_float32_to_uint16(7.9));
}

test "compat unsigned arithmetic wrappers use fixed-width wrapping semantics" {
    try testing.expectEqual(@as(u8, 0), lean_uint8_add(std.math.maxInt(u8), 1));
    try testing.expectEqual(std.math.maxInt(u8), lean_uint8_sub(0, 1));
    try testing.expectEqual(@as(u8, 254), lean_uint8_mul(std.math.maxInt(u8), 2));
    try testing.expectEqual(@as(u8, 128), lean_uint8_neg(128));

    try testing.expectEqual(@as(u16, 0), lean_uint16_add(std.math.maxInt(u16), 1));
    try testing.expectEqual(std.math.maxInt(u16), lean_uint16_sub(0, 1));
    try testing.expectEqual(@as(u16, 65534), lean_uint16_mul(std.math.maxInt(u16), 2));
    try testing.expectEqual(@as(u16, 32768), lean_uint16_neg(32768));

    try testing.expectEqual(@as(u32, 0), lean_uint32_add(std.math.maxInt(u32), 1));
    try testing.expectEqual(std.math.maxInt(u32), lean_uint32_sub(0, 1));
    try testing.expectEqual(std.math.maxInt(u32) - 1, lean_uint32_mul(std.math.maxInt(u32), 2));
    try testing.expectEqual(@as(u32, 1) << 31, lean_uint32_neg(@as(u32, 1) << 31));

    try testing.expectEqual(@as(u64, 0), lean_uint64_add(std.math.maxInt(u64), 1));
    try testing.expectEqual(std.math.maxInt(u64), lean_uint64_sub(0, 1));
    try testing.expectEqual(std.math.maxInt(u64) - 1, lean_uint64_mul(std.math.maxInt(u64), 2));
    try testing.expectEqual(@as(u64, 1) << 63, lean_uint64_neg(@as(u64, 1) << 63));

    try testing.expectEqual(@as(usize, 0), lean_usize_add(std.math.maxInt(usize), 1));
    try testing.expectEqual(std.math.maxInt(usize), lean_usize_sub(0, 1));
    try testing.expectEqual(std.math.maxInt(usize) - 1, lean_usize_mul(std.math.maxInt(usize), 2));
    try testing.expectEqual(@as(usize, 1) << (@bitSizeOf(usize) - 1), lean_usize_neg(@as(usize, 1) << (@bitSizeOf(usize) - 1)));
}

test "lean_nat_abs handles small negative Ints" {
    const neg = object.lean_box(@as(usize, @intCast(@as(u32, @bitCast(@as(i32, -20)))))).?;
    const abs = lean_nat_abs(neg);
    defer rc.lean_dec(abs);
    try testing.expect(object.lean_is_scalar(abs));
    try testing.expectEqual(@as(usize, 20), object.lean_unbox(abs));
}

test "compat thunk wrappers allocate and return owned values" {
    const pure = lean_thunk_pure(object.lean_box(42).?);
    defer rc.lean_dec(pure);
    const own = lean_thunk_get_own(pure);
    defer rc.lean_dec(own);
    try testing.expectEqual(object.lean_box(42), own);
}

test "compat utility wrappers expose platform booleans" {
    try testing.expect(lean_internal_get_hardware_concurrency(null) >= 1);
    try testing.expectEqual(@as(u8, 1), lean_strict_or(0, 1));
    try testing.expectEqual(@as(u8, 0), lean_strict_and(0, 1));
    const hello = string.mkAsciiStringBytes("hello world");
    defer rc.lean_dec(hello);
    try testing.expectEqual(@as(u8, 1), lean_string_memcmp(hello, hello, object.lean_box(0).?, object.lean_box(0).?, object.lean_box(5).?));
}
