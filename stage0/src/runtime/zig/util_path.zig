// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.

//! Zig port of `src/util/path.cpp`.
//!
//! Platform-aware path separators, executable location, directory listing,
//! file reading, and mtime helpers.

const std = @import("std");
const builtin = @import("builtin");

pub const g_path_sep: u8 = if (builtin.os.tag == .windows) ';' else ':';
pub const g_sep: u8 = if (builtin.os.tag == .windows) '\\' else '/';
pub const g_bad_sep: u8 = if (builtin.os.tag == .windows) '/' else '\\';

pub const FileNotFoundException = error{FileNotFound};

pub fn isPathSep(c: u8) bool {
    return c == g_path_sep;
}

pub fn getExeLocation() ![]const u8 {
    const path = std.fs.selfExePathAlloc(std.heap.c_allocator) catch return error.FailedToLocateExe;
    return path;
}
pub fn resolve(rel_or_abs: []const u8, base: []const u8) []const u8 {
    if (builtin.os.tag == .windows) {
        const buf = std.heap.c_allocator.alloc(u8, base.len + 1 + rel_or_abs.len) catch @panic("out of memory");
        @memcpy(buf[0..base.len], base);
        buf[base.len] = g_sep;
        @memcpy(buf[base.len + 1 ..], rel_or_abs);
        return buf;
    } else {
        if (rel_or_abs.len > 0 and rel_or_abs[0] == g_sep) {
            return std.heap.c_allocator.dupe(u8, rel_or_abs) catch @panic("out of memory");
        } else {
            const buf = std.heap.c_allocator.alloc(u8, base.len + 1 + rel_or_abs.len) catch @panic("out of memory");
            @memcpy(buf[0..base.len], base);
            buf[base.len] = g_sep;
            @memcpy(buf[base.len + 1 ..], rel_or_abs);
            return buf;
        }
    }
}

pub fn normalizePath(f: []const u8) []const u8 {
    const buf = std.heap.c_allocator.alloc(u8, f.len) catch @panic("out of memory");
    for (f, 0..) |c, i| {
        buf[i] = if (c == g_bad_sep) g_sep else c;
    }
    return buf;
}

pub fn getPath(f: []const u8) []const u8 {
    var i: usize = f.len;
    while (i > 0) {
        i -= 1;
        if (f[i] == g_sep) {
            return std.heap.c_allocator.dupe(u8, f[0..i]) catch @panic("out of memory");
        }
    }
    @panic("failed to locate Lean executable location");
}

pub fn getDirSep() []const u8 {
    return &[_]u8{g_sep};
}

pub fn getDirSepCh() u8 {
    return g_sep;
}

pub fn hasFileExt(fname: []const u8, ext: []const u8) bool {
    return fname.len > ext.len and std.mem.endsWith(u8, fname, ext);
}

pub fn dirname(fname: []const u8) []const u8 {
    const nfname = normalizePath(fname);
    defer std.heap.c_allocator.free(nfname);
    const i = std.mem.lastIndexOfScalar(u8, nfname, g_sep);
    if (i == null) return ".";
    return std.heap.c_allocator.dupe(u8, nfname[0..i.?]) catch @panic("out of memory");
}

pub fn stem(fname: []const u8) []const u8 {
    const nfname = normalizePath(fname);
    defer std.heap.c_allocator.free(nfname);
    const i = std.mem.lastIndexOfScalar(u8, nfname, g_sep);
    const start = if (i) |idx| idx + 1 else 0;
    const rest = nfname[start..];
    const j = std.mem.lastIndexOfScalar(u8, rest, '.');
    const end = if (j) |idx| idx else rest.len;
    return std.heap.c_allocator.dupe(u8, rest[0..end]) catch @panic("out of memory");
}

pub fn readFile(fname: []const u8) ![]const u8 {
    return std.fs.cwd().readFileAlloc(std.heap.c_allocator, fname, std.math.maxInt(usize));
}

pub fn getMtime(fname: []const u8) i64 {
    const stat = std.fs.cwd().statFile(fname) catch return -1;
    return @intCast(stat.mtime);
}

pub fn isDir(fn_path: []const u8) ?bool {
    const stat = std.fs.cwd().statFile(fn_path) catch return null;
    return stat.kind == .directory;
}

pub fn isDirectory(fn_path: []const u8) bool {
    return isDir(fn_path) orelse false;
}

pub fn findFiles(base: []const u8, ext: []const u8, files: *std.ArrayListUnmanaged([]const u8)) !void {
    var dir = try std.fs.cwd().openDir(base, .{ .iterate = true });
    defer dir.close();
    var it = dir.iterate();
    while (try it.next()) |entry| {
        const full = try std.fs.path.join(std.heap.c_allocator, &[_][]const u8{ base, entry.name });
        const is_d = isDir(full) orelse continue;
        if (is_d) {
            try findFiles(full, ext, files);
        } else if (hasFileExt(full, ext)) {
            try files.append(std.heap.c_allocator, full);
        }
    }
}

pub fn readDir(dirname_path: []const u8) !std.ArrayListUnmanaged([]const u8) {
    var result: std.ArrayListUnmanaged([]const u8) = .empty;
    var dir = try std.fs.cwd().openDir(dirname_path, .{ .iterate = true });
    defer dir.close();
    var it = dir.iterate();
    while (try it.next()) |entry| {
        if (std.mem.eql(u8, entry.name, ".") or std.mem.eql(u8, entry.name, "..")) continue;
        const full = try std.fs.path.join(std.heap.c_allocator, &[_][]const u8{ dirname_path, entry.name });
        try result.append(std.heap.c_allocator, full);
    }
    return result;
}

test "path helpers compile" {
    _ = isPathSep;
    _ = normalizePath;
    _ = dirname;
    _ = stem;
    _ = hasFileExt;
}
