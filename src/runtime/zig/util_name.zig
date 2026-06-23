// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/name.cpp`.
//!
//! Provides the `Name` struct, hierarchical name helpers, and the
//! `lean_name_separator` / id-escape utilities used by the compiler.

const std = @import("std");
const object = @import("object.zig");
const ctor = @import("ctor.zig");
const string = @import("string.zig");
const nat_constructors = @import("nat_constructors.zig");
const utf8 = @import("utf8.zig");
const util_ascii = @import("util_ascii.zig");
const lean = @import("lean_object.zig");
const runtime_options = @import("runtime_options");
const sync = @import("sync.zig");
pub const lean_name_separator: []const u8 = ".";
pub const id_begin_escape: u32 = 0xAB; // «
pub const id_end_escape: u32 = 0xBB; // »
pub const anonymous_str: []const u8 = "[anonymous]";

extern fn lean_name_mk_string(p: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_mk_numeral(p: *anyopaque, n: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_append_after(n: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_append_before(n: *anyopaque, s: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_append_index_after(n: *anyopaque, i: *anyopaque) callconv(.c) *anyopaque;
extern fn lean_name_eq(n1: *anyopaque, n2: *anyopaque) callconv(.c) u8;
extern fn l_Lean_Name_hash___override(n: *anyopaque) callconv(.c) u64;

pub const NameKind = enum(u8) {
    anonymous = 0,
    string = 1,
    numeral = 2,
};

fn nameHash(n: ?*anyopaque) u64 {
    if (n == null or object.lean_is_scalar(n)) return 1723;
    const name = n.?;
    if (ctor.ctorNumObjs(name) == 2) {
        const suffix = ctor.lean_ctor_get(name, 1);
        return switch (object.lean_ptr_tag(name)) {
            1 => if (suffix != null and !object.lean_is_scalar(suffix.?) and object.lean_ptr_tag(suffix.?) == lean.LeanString)
                if (ctor.ctorScalarBytes(name) >= @sizeOf(u64))
                    ctor.lean_ctor_get_uint64(name, @sizeOf(?*anyopaque) * 2)
                else
                    l_Lean_Name_hash___override(name)
            else
                l_Lean_Name_hash___override(name),
            2 => if (suffix != null and (object.lean_is_scalar(suffix) or object.lean_ptr_tag(suffix.?) == lean.LeanMPZ))
                if (ctor.ctorScalarBytes(name) >= @sizeOf(u64))
                    ctor.lean_ctor_get_uint64(name, @sizeOf(?*anyopaque) * 2)
                else
                    l_Lean_Name_hash___override(name)
            else
                l_Lean_Name_hash___override(name),
            else => l_Lean_Name_hash___override(name),
        };
    }
    return l_Lean_Name_hash___override(name);
}

fn asStringObj(o: *anyopaque) *lean.lean_string_object {
    return @ptrCast(@alignCast(o));
}

fn stringBytes(o: *anyopaque) []const u8 {
    const str = asStringObj(o);
    const size = str.m_size;
    if (size == 0) return "";
    const data: [*]const u8 = @ptrCast(&str.m_data);
    return data[0 .. size - 1];
}

fn stringEq(s1: ?*anyopaque, s2: ?*anyopaque) bool {
    if (s1 == s2) return true;
    if (s1 == null or s2 == null) return false;
    const b1 = stringBytes(s1.?);
    const b2 = stringBytes(s2.?);
    return std.mem.eql(u8, b1, b2);
}

fn stringLess(s1: *anyopaque, s2: *anyopaque) bool {
    return std.mem.lessThan(u8, stringBytes(s1), stringBytes(s2));
}

fn natLess(n1: *anyopaque, n2: *anyopaque) bool {
    // Quick scalar path; fall back to extern comparison for big nats.
    if (object.lean_is_scalar(n1) and object.lean_is_scalar(n2)) {
        return object.lean_unbox(n1) < object.lean_unbox(n2);
    }
    return lean_nat_big_lt(n1, n2);
}

extern fn lean_nat_big_lt(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;

fn isGreekUnicode(u: u32) bool {
    return 0x391 <= u and u <= 0x3DD;
}

fn isLetterLikeUnicode(u: u32) bool {
    return (0x3b1 <= u and u <= 0x3c9 and u != 0x3bb) or
        (0x391 <= u and u <= 0x3A9 and u != 0x3A0 and u != 0x3A3) or
        (0x3ca <= u and u <= 0x3fb) or
        (0x1f00 <= u and u <= 0x1ffe) or
        (0x2100 <= u and u <= 0x214f) or
        (0x1d49c <= u and u <= 0x1d59f);
}

fn isSubScriptAlnumUnicode(u: u32) bool {
    return (0x207f <= u and u <= 0x2089) or
        (0x2090 <= u and u <= 0x209c) or
        (0x1d62 <= u and u <= 0x1d6a);
}

pub fn isIdFirst(begin: [*]const u8, end: [*]const u8) bool {
    if (std.ascii.isAlphabetic(begin[0]) or begin[0] == '_') return true;
    const size = @intFromPtr(end) - @intFromPtr(begin);
    const u = utf8.decodeAt(begin, size, 0) orelse return false;
    return u == id_begin_escape or isLetterLikeUnicode(u);
}

pub fn isIdRest(begin: [*]const u8, end: [*]const u8) bool {
    if (std.ascii.isAlphanumeric(begin[0]) or begin[0] == '_' or begin[0] == '\'' or begin[0] == '?' or begin[0] == '!') return true;
    const size = @intFromPtr(end) - @intFromPtr(begin);
    const u = utf8.decodeAt(begin, size, 0) orelse return false;
    return isLetterLikeUnicode(u) or isSubScriptAlnumUnicode(u);
}

pub const Name = struct {
    obj: ?*anyopaque,

    pub fn anonymous() Name {
        return .{ .obj = object.lean_box(0) };
    }

    pub fn fromObj(o: ?*anyopaque) Name {
        return .{ .obj = o };
    }

    pub fn fromCStr(s: [*:0]const u8) Name {
        const str = string.lean_mk_string(s);
        return fromObj(lean_name_mk_string(object.lean_box(0).?, str));
    }

    pub fn fromStringObj(s: *anyopaque) Name {
        return fromObj(lean_name_mk_string(object.lean_box(0).?, s));
    }

    pub fn fromNumeral(n: *anyopaque) Name {
        return fromObj(lean_name_mk_numeral(object.lean_box(0).?, n));
    }

    pub fn fromPrefixStringObj(prefix: Name, s: *anyopaque) Name {
        return fromObj(lean_name_mk_string(prefix.obj.?, s));
    }

    pub fn fromPrefixNumeralObj(prefix: Name, n: *anyopaque) Name {
        return fromObj(lean_name_mk_numeral(prefix.obj.?, n));
    }

    pub fn fromPrefixStr(prefix: Name, s: [*:0]const u8) Name {
        const str = string.lean_mk_string(s);
        return fromObj(lean_name_mk_string(prefix.obj.?, str));
    }

    pub fn fromPrefixUnsigned(prefix: Name, k: u32) Name {
        const n = nat_constructors.lean_big_usize_to_nat(k).?;
        return fromObj(lean_name_mk_numeral(prefix.obj.?, n));
    }

    pub fn kind(self: Name) NameKind {
        if (self.obj == null or object.lean_is_scalar(self.obj)) return .anonymous;
        return switch (object.lean_ptr_tag(self.obj.?)) {
            1 => .string,
            2 => .numeral,
            else => @panic("invalid Lean.Name tag"),
        };
    }

    pub fn isAnonymous(self: Name) bool {
        return self.kind() == .anonymous;
    }

    pub fn isString(self: Name) bool {
        return self.kind() == .string;
    }

    pub fn isNumeral(self: Name) bool {
        return self.kind() == .numeral;
    }

    pub fn isAtomic(self: Name) bool {
        if (self.isAnonymous()) return true;
        const prefix = self.getPrefixObj();
        return prefix == null or object.lean_is_scalar(prefix);
    }

    pub fn getPrefixObj(self: Name) ?*anyopaque {
        if (self.isAnonymous()) return self.obj;
        return ctor.lean_ctor_get(self.obj.?, 0);
    }

    pub fn getPrefix(self: Name) Name {
        return fromObj(self.getPrefixObj());
    }

    pub fn getStringObj(self: Name) ?*anyopaque {
        std.debug.assert(self.isString());
        return ctor.lean_ctor_get(self.obj.?, 1);
    }

    pub fn getNumeralObj(self: Name) ?*anyopaque {
        std.debug.assert(self.isNumeral());
        return ctor.lean_ctor_get(self.obj.?, 1);
    }

    pub fn getRoot(self: Name) Name {
        var n = self;
        while (true) {
            const p = n.getPrefixObj();
            if (p == null or object.lean_is_scalar(p)) return n;
            n = Name.fromObj(p);
        }
    }

    pub fn hash(self: Name) u64 {
        return nameHash(self.obj);
    }

    pub fn eq(self: Name, other: Name) bool {
        return lean_name_eq(self.obj.?, other.obj.?) != 0;
    }

    pub fn appendAfter(self: Name, s: [*:0]const u8) Name {
        const str = string.lean_mk_string(s);
        return fromObj(lean_name_append_after(self.obj.?, str));
    }

    pub fn appendBefore(self: Name, p: [*:0]const u8) Name {
        const str = string.lean_mk_string(p);
        return fromObj(lean_name_append_before(self.obj.?, str));
    }

    pub fn appendAfterIndex(self: Name, i: u32) Name {
        const n = nat_constructors.lean_big_usize_to_nat(i).?;
        return fromObj(lean_name_append_index_after(self.obj.?, n));
    }

    pub fn getSubscriptBase(self: Name) Name {
        if (self.isString()) return self;
        return fromPrefixStr(self, "");
    }

    pub fn isSubscripted(self: Name) ?struct { base: Name, idx: u32 } {
        if (!self.isString()) return null;
        const s = stringBytes(self.getStringObj().?);
        const underscore = std.mem.lastIndexOfScalar(u8, s, '_') orelse return null;
        if (underscore + 1 >= s.len) return null;
        if (s[underscore + 1] == '0') return null;
        var idx: u32 = 0;
        var i = underscore + 1;
        while (i < s.len and std.ascii.isDigit(s[i])) : (i += 1) {
            idx = idx * 10 + (s[i] - '0');
        }
        if (i != s.len) return null;
        const prefix = self.getPrefix();
        const base_str = string.lean_mk_string(@ptrCast(s[0..underscore].ptr));
        const base = fromObj(lean_name_mk_string(prefix.obj.?, base_str));
        return .{ .base = base, .idx = idx };
    }

    pub fn replacePrefix(self: Name, prefix: Name, new_prefix: Name) Name {
        if (self.eq(prefix)) return new_prefix;
        if (self.isAnonymous()) return self;
        const p = self.getPrefix().replacePrefix(prefix, new_prefix);
        if (p.obj == self.obj) return self;
        if (self.isString()) {
            return fromObj(lean_name_mk_string(p.obj.?, self.getStringObj().?));
        } else {
            return fromObj(lean_name_mk_numeral(p.obj.?, self.getNumeralObj().?));
        }
    }

    fn displayCore(self: Name, writer: anytype, do_escape: bool, sep: []const u8) !void {
        std.debug.assert(!self.isAnonymous());
        const prefix = self.getPrefix();
        if (!prefix.isAnonymous()) {
            try prefix.displayCore(writer, do_escape, sep);
            try writer.writeAll(sep);
        }
        if (self.isString()) {
            const str = stringBytes(self.getStringObj().?);
            var must_escape = false;
            if (do_escape) {
                if (str.len == 0) must_escape = true;
                const begin: [*]const u8 = str.ptr;
                const end: [*]const u8 = str.ptr + str.len;
                if (!isIdFirst(begin, end)) must_escape = true;
                if (must_escape and str[0] == '?') must_escape = false;
                var i = utf8.getUtf8Size(str[0]);
                while (!must_escape and i < str.len) {
                    const b: [*]const u8 = str.ptr + i;
                    if (!isIdRest(b, end)) must_escape = true;
                    i += utf8.getUtf8Size(str[i]);
                }
            }
            if (must_escape or str.len == 0) {
                try writer.writeAll("«");
                try writer.writeAll(str);
                try writer.writeAll("»");
            } else {
                try writer.writeAll(str);
            }
        } else {
            try writeNumeral(self.getNumeralObj().?, writer);
        }
    }

    pub fn display(self: Name, writer: anytype, do_escape: bool, sep: []const u8) !void {
        if (self.isAnonymous()) {
            try writer.writeAll(anonymous_str);
        } else {
            try self.displayCore(writer, do_escape, sep);
        }
    }
    pub fn toString(self: Name, sep: []const u8) ![]const u8 {
        var aw = std.Io.Writer.Allocating.init(std.heap.c_allocator);
        defer aw.deinit();
        try self.display(&aw.writer, false, sep);
        return aw.toOwnedSlice();
    }

    pub fn escape(self: Name, sep: []const u8) ![]const u8 {
        var aw = std.Io.Writer.Allocating.init(std.heap.c_allocator);
        defer aw.deinit();
        try self.display(&aw.writer, true, sep);
        return aw.toOwnedSlice();
    }

    pub fn sizeCore(self: Name, unicode: bool) usize {
        if (object.lean_is_scalar(self.obj)) return anonymous_str.len;
        var i = self.obj.?;
        var r: usize = 0;
        while (true) {
            std.debug.assert(!object.lean_is_scalar(i));
            if (object.lean_ptr_tag(i) == 1) {
                const str = stringBytes(ctor.lean_ctor_get(i, 1).?);
                r += if (unicode) utf8.lean_utf8_strlen(@ptrCast(str.ptr)) else str.len;
            } else {
                r += numDigitsObj(ctor.lean_ctor_get(i, 1).?);
            }
            i = ctor.lean_ctor_get(i, 0).?;
            if (object.lean_is_scalar(i)) break;
            r += lean_name_separator.len;
        }
        return r;
    }

    pub fn size(self: Name) usize {
        return self.sizeCore(false);
    }

    pub fn utf8Size(self: Name) usize {
        return self.sizeCore(true);
    }

    pub fn isSafeAscii(self: Name) bool {
        var i = self.obj;
        while (i != null and !object.lean_is_scalar(i)) {
            if (object.lean_ptr_tag(i.?) == 1) {
                const str = stringBytes(ctor.lean_ctor_get(i.?, 1).?);
                if (!util_ascii.isSafeAsciiSlice(str)) return false;
            }
            i = ctor.lean_ctor_get(i.?, 0);
        }
        return true;
    }
};

fn writeNumeral(n: *anyopaque, writer: anytype) !void {
    if (object.lean_is_scalar(n)) {
        try writer.print("{d}", .{object.lean_unbox(n)});
    } else {
        // Big numerals: use mpz toString.
        const mpz = @import("mpz_object.zig").mpzValue(n);
        const s = try mpz.toString(std.heap.c_allocator, 10);
        defer std.heap.c_allocator.free(s);
        try writer.writeAll(s);
    }
}

fn numDigitsObj(n: *anyopaque) usize {
    if (object.lean_is_scalar(n)) {
        const v = object.lean_unbox(n);
        if (v == 0) return 1;
        var k = v;
        var r: usize = 0;
        while (k != 0) : (r += 1) k /= 10;
        return r;
    }
    const s = @import("mpz_object.zig").mpzValue(n).toString(std.heap.c_allocator, 10) catch return 1;
    defer std.heap.c_allocator.free(s);
    return s.len;
}

fn copyLimbs(i: ?*anyopaque, limbs: *std.ArrayListUnmanaged(?*anyopaque)) void {
    limbs.clearRetainingCapacity();
    var p = i;
    while (p != null and !object.lean_is_scalar(p)) {
        limbs.append(std.heap.c_allocator, p.?) catch @panic("out of memory");
        p = ctor.lean_ctor_get(p.?, 0);
    }
    std.mem.reverse(?*anyopaque, limbs.items);
}

pub fn isPrefixOf(n1: Name, n2: Name) bool {
    if (n2.isAtomic()) return n1.eq(n2);
    var limbs1: std.ArrayListUnmanaged(?*anyopaque) = .empty;
    var limbs2: std.ArrayListUnmanaged(?*anyopaque) = .empty;
    defer limbs1.deinit(std.heap.c_allocator);
    defer limbs2.deinit(std.heap.c_allocator);
    copyLimbs(n1.obj, &limbs1);
    copyLimbs(n2.obj, &limbs2);
    const sz1 = limbs1.items.len;
    const sz2 = limbs2.items.len;
    if (sz1 > sz2) return false;
    if (sz1 == sz2 and n1.hash() != n2.hash()) return false;
    var i: usize = 0;
    while (i < sz1) : (i += 1) {
        const o1 = limbs1.items[i].?;
        const o2 = limbs2.items[i].?;
        if (object.lean_ptr_tag(o1) != object.lean_ptr_tag(o2)) return false;
        if (object.lean_ptr_tag(o1) == 1) {
            if (!stringEq(ctor.lean_ctor_get(o1, 1), ctor.lean_ctor_get(o2, 1))) return false;
        } else {
            if (!natEq(ctor.lean_ctor_get(o1, 1).?, ctor.lean_ctor_get(o2, 1).?)) return false;
        }
    }
    return true;
}

fn natEq(a: ?*anyopaque, b: ?*anyopaque) bool {
    if (a == b) return true;
    if (a == null or b == null) return false;
    if (object.lean_is_scalar(a) and object.lean_is_scalar(b)) return a == b;
    return lean_nat_big_eq(a.?, b.?);
}

extern fn lean_nat_big_eq(a1: *anyopaque, a2: *anyopaque) callconv(.c) bool;

pub fn cmpCore(o1: ?*anyopaque, o2: ?*anyopaque) i32 {
    var limbs1: std.ArrayListUnmanaged(?*anyopaque) = .empty;
    var limbs2: std.ArrayListUnmanaged(?*anyopaque) = .empty;
    defer limbs1.deinit(std.heap.c_allocator);
    defer limbs2.deinit(std.heap.c_allocator);
    copyLimbs(o1, &limbs1);
    copyLimbs(o2, &limbs2);
    const n = @min(limbs1.items.len, limbs2.items.len);
    var i: usize = 0;
    while (i < n) : (i += 1) {
        const a = limbs1.items[i].?;
        const b = limbs2.items[i].?;
        const k1: NameKind = if (object.lean_ptr_tag(a) == 1) .string else .numeral;
        const k2: NameKind = if (object.lean_ptr_tag(b) == 1) .string else .numeral;
        if (k1 != k2) return if (k1 == .string) 1 else -1;
        if (k1 == .string) {
            const s1 = ctor.lean_ctor_get(a, 1).?;
            const s2 = ctor.lean_ctor_get(b, 1).?;
            if (stringLess(s1, s2)) return -1;
            if (stringLess(s2, s1)) return 1;
        } else {
            const n1 = ctor.lean_ctor_get(a, 1).?;
            const n2 = ctor.lean_ctor_get(b, 1).?;
            if (natLess(n1, n2)) return -1;
            if (natLess(n2, n1)) return 1;
        }
    }
    if (limbs1.items.len == limbs2.items.len) return 0;
    return if (limbs1.items.len < limbs2.items.len) -1 else 1;
}

pub fn cmp(a: Name, b: Name) i32 {
    return cmpCore(a.obj, b.obj);
}

pub fn nameAppend(a: Name, b: Name) Name {
    if (b.isAnonymous()) return a;
    if (a.isAnonymous()) return b;
    var prefix = a;
    if (!b.isAtomic()) {
        prefix = nameAppend(a, b.getPrefix());
    }
    if (b.isString()) {
        return Name.fromObj(lean_name_mk_string(prefix.obj.?, b.getStringObj().?));
    } else {
        return Name.fromObj(lean_name_mk_numeral(prefix.obj.?, b.getNumeralObj().?));
    }
}

pub fn isPartOf(p: []const u8, n: Name) bool {
    var it = n;
    while (true) {
        if (it.isString()) {
            const s = stringBytes(it.getStringObj().?);
            if (std.mem.indexOf(u8, s, p) != null) return true;
        }
        if (it.isAtomic() or it.isAnonymous()) return false;
        it = it.getPrefix();
    }
}

pub fn stringToName(str: []const u8) Name {
    std.debug.assert(lean_name_separator.len == 1);
    var result = Name.anonymous();
    var id_part: std.ArrayListUnmanaged(u8) = .empty;
    defer id_part.deinit(std.heap.c_allocator);
    for (str) |c| {
        if (c == lean_name_separator[0]) {
            const z = std.heap.c_allocator.dupeZ(u8, id_part.items) catch @panic("out of memory");
            defer std.heap.c_allocator.free(z);
            result = result.fromPrefixStr(result, z);
            id_part.clearRetainingCapacity();
        } else {
            id_part.append(std.heap.c_allocator, c) catch @panic("out of memory");
        }
    }
    const z = std.heap.c_allocator.dupeZ(u8, id_part.items) catch @panic("out of memory");
    defer std.heap.c_allocator.free(z);
    return result.fromPrefixStr(result, z);
}

pub fn isInternalName(n: Name) bool {
    var it = n;
    while (!it.isAnonymous()) {
        if (it.isString()) {
            const s = stringBytes(it.getStringObj().?);
            if (s.len > 0 and s[0] == '_') return true;
        }
        it = it.getPrefix();
    }
    return false;
}

var g_anonymous: ?Name = null;
var g_next_id: u32 = 0;
var g_name_mutex: sync.Mutex = .{};

pub fn mkInternalUniqueName() Name {
    g_name_mutex.lock();
    defer g_name_mutex.unlock();
    const id = g_next_id;
    g_next_id += 1;
    return Name.fromPrefixUnsigned(Name.anonymous(), id);
}

pub fn initializeName() void {
    g_anonymous = Name.anonymous();
    g_next_id = 0;
}

pub fn finalizeName() void {
    g_anonymous = null;
}

pub fn getAnonymous() Name {
    return g_anonymous.?;
}

comptime {
    _ = Name;
}

test "Name constructs and stringifies" {
    const n = Name.fromPrefixStr(Name.fromCStr("foo"), "bar");
    _ = n;
}
