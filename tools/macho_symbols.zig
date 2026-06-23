// Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
// Released under Apache 2.0 license as described in the file LICENSE.
const std = @import("std");

const Allocator = std.mem.Allocator;
const Endian = std.builtin.Endian;
const SymbolSet = std.StringHashMap(void);

const n_weak_def: u16 = 0x80;

const mh_magic_64: u32 = 0xfeedfacf;
const fat_magic: u32 = 0xcafebabe;
const fat_magic_64: u32 = 0xcafebabf;
const lc_symtab: u32 = 0x02;

const nlist64_size: usize = 16;
const n_desc_offset: usize = 6;
const n_ext: u8 = 0x01;
const n_type_mask: u8 = 0x0e;
const n_undf: u8 = 0x00;

const elf_magic = "\x7fELF";
const elfclass64: u8 = 2;
const elfdata2lsb: u8 = 1;
const elfdata2msb: u8 = 2;
const sht_symtab: u32 = 2;
const stb_global: u8 = 1;
const stb_weak: u8 = 2;
const shn_undef: u16 = 0;

const PatchAction = enum { weaken, unweaken };
const FatKind = enum { fat32, fat64 };

const ArchiveMember = struct {
    name: []const u8,
    data_start: usize,
    data_end: usize,
};

const ArchiveIterator = struct {
    data: []const u8,
    pos: usize = 8,

    fn next(self: *ArchiveIterator) ?ArchiveMember {
        if (self.pos >= self.data.len) return null;
        if (self.data.len - self.pos < 60) return null;

        const pos = self.pos;
        const name_field = self.data[pos .. pos + 16];
        const size_field = std.mem.trim(u8, self.data[pos + 48 .. pos + 58], " ");
        const magic = self.data[pos + 58 .. pos + 60];
        if (!std.mem.eql(u8, magic, "`\n")) return null;

        const member_size = std.fmt.parseInt(usize, size_field, 10) catch return null;
        const member_data_start = pos + 60;
        const member_data_end = member_data_start + member_size;
        if (member_data_end < member_data_start or member_data_end > self.data.len) return null;

        var next_pos = member_data_end;
        if (next_pos % 2 == 1) next_pos += 1;
        self.pos = next_pos;

        const member_name = std.mem.trimEnd(u8, name_field, " \t\r\n");
        var name_prefix_len: usize = 0;
        if (std.mem.startsWith(u8, member_name, "#1/")) {
            name_prefix_len = std.fmt.parseInt(usize, member_name[3..], 10) catch 0;
        }

        const data_start = if (name_prefix_len <= member_size)
            member_data_start + name_prefix_len
        else
            member_data_end;

        return .{
            .name = member_name,
            .data_start = data_start,
            .data_end = member_data_end,
        };
    }
};

pub fn main(init: std.process.Init) !void {
    const args = try init.minimal.args.toSlice(init.arena.allocator());
    const exit_code = run(init.io, init.gpa, args) catch |err| blk: {
        printErr(init.io, "error: {s}\n", .{@errorName(err)}) catch {};
        break :blk 1;
    };
    std.process.exit(exit_code);
}

fn run(io: std.Io, gpa: Allocator, args: []const [:0]const u8) !u8 {
    if (args.len < 2) {
        try printUsage(io, args[0]);
        return 2;
    }

    const command = args[1];
    if (std.mem.eql(u8, command, "weaken")) {
        if (args.len < 4) {
            try printUsage(io, args[0]);
            return 2;
        }
        return runWeaken(io, gpa, args[2], args[3..]);
    }

    if (std.mem.eql(u8, command, "flip")) {
        if (args.len < 5) {
            try printUsage(io, args[0]);
            return 2;
        }
        return runFlip(io, gpa, args[2..]);
    }

    try printUsage(io, args[0]);
    return 2;
}

fn printUsage(io: std.Io, argv0: []const u8) !void {
    try printErr(io,
        \\usage: {s} weaken <zig-archive.a> <cpp-archive.a> [<cpp-archive.a> ...]
        \\       {s} flip <zig-archive.a> [<zig-archive.a> ...] <symbol-list-file.txt> <cpp-archive.a> [<cpp-archive.a> ...]
        \\
    , .{ argv0, argv0 });
}

fn runWeaken(io: std.Io, gpa: Allocator, zig_path: []const u8, cpp_paths: []const [:0]const u8) !u8 {
    var cpp_symbols = SymbolSet.init(gpa);
    defer deinitSymbolSet(gpa, &cpp_symbols);

    for (cpp_paths) |cpp_path| {
        var archive_symbols = SymbolSet.init(gpa);
        defer deinitSymbolSet(gpa, &archive_symbols);
        collectArchiveSymbols(io, gpa, cpp_path, &archive_symbols) catch |err| {
            try printArchiveError(io, cpp_path, err);
            return 1;
        };
        try printOut(io, "  {s}: {d} lean_* symbols\n", .{ cpp_path, archive_symbols.count() });
        try mergeSymbols(gpa, &cpp_symbols, &archive_symbols);
    }
    try printOut(io, "C++ archives total: {d} unique lean_* symbols\n", .{cpp_symbols.count()});

    const count = weakenZigArchive(io, gpa, zig_path, &cpp_symbols) catch |err| {
        try printArchiveError(io, zig_path, err);
        return 1;
    };
    try printOut(io, "Weakened {d} Zig lean_* symbol(s) also defined in C++\n", .{count});
    return 0;
}

fn runFlip(io: std.Io, gpa: Allocator, args: []const [:0]const u8) !u8 {
    var sym_idx: ?usize = null;
    for (args, 0..) |arg, i| {
        if (std.mem.endsWith(u8, arg, ".txt")) {
            sym_idx = i;
            break;
        }
    }
    const delimiter = sym_idx orelse {
        try printUsage(io, "macho_symbols");
        return 2;
    };

    const zig_paths = args[0..delimiter];
    const sym_file = args[delimiter];
    const cpp_paths = args[delimiter + 1 ..];
    if (zig_paths.len == 0 or cpp_paths.len == 0) {
        try printUsage(io, "macho_symbols");
        return 2;
    }

    var flip_syms = SymbolSet.init(gpa);
    defer deinitSymbolSet(gpa, &flip_syms);
    readSymbolList(io, gpa, sym_file, &flip_syms) catch |err| {
        try printArchiveError(io, sym_file, err);
        return 1;
    };

    if (flip_syms.count() == 0) {
        try printOut(io, "No symbols to flip (Phase 2 baseline)\n", .{});
        return 0;
    }

    try printOut(io, "Flipping {d} symbols to Zig:\n", .{flip_syms.count()});

    for (cpp_paths) |cpp_path| {
        const cpp_count = patchTargetArchive(io, gpa, cpp_path, &flip_syms, .weaken) catch |err| {
            try printArchiveError(io, cpp_path, err);
            return 1;
        };
        try printOut(io, "  C++ {s}: weakened {d} symbol(s)\n", .{ cpp_path, cpp_count });
    }

    for (zig_paths) |zig_path| {
        const zig_count = patchTargetArchive(io, gpa, zig_path, &flip_syms, .unweaken) catch |err| {
            try printArchiveError(io, zig_path, err);
            return 1;
        };
        try printOut(io, "  Zig {s}: unweakened {d} symbol(s)\n", .{ zig_path, zig_count });
    }

    return 0;
}

fn collectArchiveSymbols(io: std.Io, gpa: Allocator, archive_path: []const u8, symbols: *SymbolSet) !void {
    const data = try std.Io.Dir.cwd().readFileAlloc(io, archive_path, gpa, .unlimited);
    defer gpa.free(data);

    if (!isArchive(data)) return error.NotArchive;

    var members = ArchiveIterator{ .data = data };
    while (members.next()) |member| {
        if (std.mem.startsWith(u8, member.name, "__.SYMDEF")) continue;
        const member_data = data[member.data_start..member.data_end];
        if (member_data.len < 4) continue;

        const magic_le = readIntAt(u32, member_data, 0, .little) orelse 0;
        if (magic_le == mh_magic_64) {
            try extractDefinedMachoSymbols(gpa, member_data, symbols);
        } else if (fatKind(member_data)) |kind| {
            try extractFatDefinedSymbols(gpa, member_data, symbols, kind);
        } else if (isElf(member_data)) {
            try extractDefinedElfSymbols(gpa, member_data, symbols);
        }
    }
}

fn weakenZigArchive(io: std.Io, gpa: Allocator, archive_path: []const u8, cpp_symbols: *const SymbolSet) !usize {
    var data = try std.Io.Dir.cwd().readFileAlloc(io, archive_path, gpa, .unlimited);
    defer gpa.free(data);

    if (!isArchive(data)) return error.NotArchive;

    var count: usize = 0;
    var members = ArchiveIterator{ .data = data };
    while (members.next()) |member| {
        if (std.mem.startsWith(u8, member.name, "__.SYMDEF")) continue;
        const member_data = data[member.data_start..member.data_end];
        if (member_data.len < 4) continue;

        const magic_le = readIntAt(u32, member_data, 0, .little) orelse 0;
        if (magic_le == mh_magic_64) {
            count += weakenDuplicateMachoSymbols(data, member_data, member.data_start, cpp_symbols);
        } else if (fatKind(member_data)) |kind| {
            count += weakenFatDuplicateMachoSymbols(data, member_data, member.data_start, cpp_symbols, kind);
        }

        if (isElf(member_data)) {
            count += weakenDuplicateElfSymbols(data, member_data, member.data_start, cpp_symbols);
        }
    }

    if (count > 0) {
        try std.Io.Dir.cwd().writeFile(io, .{ .sub_path = archive_path, .data = data });
    }
    return count;
}

fn patchTargetArchive(io: std.Io, gpa: Allocator, archive_path: []const u8, target_symbols: *const SymbolSet, action: PatchAction) !usize {
    var data = try std.Io.Dir.cwd().readFileAlloc(io, archive_path, gpa, .unlimited);
    defer gpa.free(data);

    if (!isArchive(data)) return error.NotArchive;

    var count: usize = 0;
    var members = ArchiveIterator{ .data = data };
    while (members.next()) |member| {
        if (std.mem.startsWith(u8, member.name, "__.SYMDEF")) continue;
        const member_data = data[member.data_start..member.data_end];
        if (member_data.len < 4) continue;

        const magic_le = readIntAt(u32, member_data, 0, .little) orelse 0;
        if (magic_le == mh_magic_64) {
            count += patchTargetMachoSymbols(data, member_data, member.data_start, target_symbols, action);
        } else if (fatKind(member_data)) |kind| {
            count += patchTargetFatMachoSymbols(data, member_data, member.data_start, target_symbols, action, kind);
        }

        if (isElf(member_data)) {
            count += patchTargetElfSymbols(data, member_data, member.data_start, target_symbols, action);
        }
    }

    if (count > 0) {
        try std.Io.Dir.cwd().writeFile(io, .{ .sub_path = archive_path, .data = data });
    }
    return count;
}

fn readSymbolList(io: std.Io, gpa: Allocator, path: []const u8, symbols: *SymbolSet) !void {
    const data = try std.Io.Dir.cwd().readFileAlloc(io, path, gpa, .unlimited);
    defer gpa.free(data);

    var lines = std.mem.splitScalar(u8, data, '\n');
    while (lines.next()) |raw_line| {
        const line = std.mem.trim(u8, raw_line, " \t\r\n");
        if (line.len == 0 or line[0] == '#') continue;
        const prefixed = try std.fmt.allocPrint(gpa, "_{s}", .{line});
        try addOwnedSymbol(gpa, symbols, prefixed);
    }
}

fn extractFatDefinedSymbols(gpa: Allocator, data: []const u8, symbols: *SymbolSet, kind: FatKind) !void {
    const nfat = readIntAt(u32, data, 4, .big) orelse return;
    const arch_size: usize = if (kind == .fat64) 32 else 20;
    for (0..@as(usize, nfat)) |i| {
        const arch_off = addMul(8, i, arch_size) orelse break;
        if (data.len -| arch_off < arch_size) break;

        const slice_off = switch (kind) {
            .fat64 => readIntAt(u64, data, arch_off + 8, .big) orelse continue,
            .fat32 => readIntAt(u32, data, arch_off + 8, .big) orelse continue,
        };
        const slice_size = switch (kind) {
            .fat64 => readIntAt(u64, data, arch_off + 16, .big) orelse continue,
            .fat32 => readIntAt(u32, data, arch_off + 12, .big) orelse continue,
        };
        const start: usize = std.math.cast(usize, slice_off) orelse continue;
        const size: usize = std.math.cast(usize, slice_size) orelse continue;
        if (start > data.len or size > data.len - start) continue;

        const slice_data = data[start .. start + size];
        const magic_le = readIntAt(u32, slice_data, 0, .little) orelse 0;
        if (magic_le == mh_magic_64) {
            try extractDefinedMachoSymbols(gpa, slice_data, symbols);
        } else if (fatKind(slice_data)) |nested_kind| {
            try extractFatDefinedSymbols(gpa, slice_data, symbols, nested_kind);
        }
    }
}

fn weakenFatDuplicateMachoSymbols(archive_data: []u8, data: []const u8, base_offset: usize, cpp_symbols: *const SymbolSet, kind: FatKind) usize {
    const nfat = readIntAt(u32, data, 4, .big) orelse return 0;
    const arch_size: usize = if (kind == .fat64) 32 else 20;
    var count: usize = 0;
    for (0..@as(usize, nfat)) |i| {
        const arch_off = addMul(8, i, arch_size) orelse break;
        if (data.len -| arch_off < arch_size) break;

        const slice_off = switch (kind) {
            .fat64 => readIntAt(u64, data, arch_off + 8, .big) orelse continue,
            .fat32 => readIntAt(u32, data, arch_off + 8, .big) orelse continue,
        };
        const slice_size = switch (kind) {
            .fat64 => readIntAt(u64, data, arch_off + 16, .big) orelse continue,
            .fat32 => readIntAt(u32, data, arch_off + 12, .big) orelse continue,
        };
        const start: usize = std.math.cast(usize, slice_off) orelse continue;
        const size: usize = std.math.cast(usize, slice_size) orelse continue;
        if (start > data.len or size > data.len - start) continue;

        const slice_data = data[start .. start + size];
        const magic_le = readIntAt(u32, slice_data, 0, .little) orelse 0;
        if (magic_le == mh_magic_64) {
            count += weakenDuplicateMachoSymbols(archive_data, slice_data, base_offset + start, cpp_symbols);
        } else if (fatKind(slice_data)) |nested_kind| {
            count += weakenFatDuplicateMachoSymbols(archive_data, slice_data, base_offset + start, cpp_symbols, nested_kind);
        }
    }
    return count;
}

fn patchTargetFatMachoSymbols(archive_data: []u8, data: []const u8, base_offset: usize, target_symbols: *const SymbolSet, action: PatchAction, kind: FatKind) usize {
    const nfat = readIntAt(u32, data, 4, .big) orelse return 0;
    const arch_size: usize = if (kind == .fat64) 32 else 20;
    var count: usize = 0;
    for (0..@as(usize, nfat)) |i| {
        const arch_off = addMul(8, i, arch_size) orelse break;
        if (data.len -| arch_off < arch_size) break;

        const slice_off = switch (kind) {
            .fat64 => readIntAt(u64, data, arch_off + 8, .big) orelse continue,
            .fat32 => readIntAt(u32, data, arch_off + 8, .big) orelse continue,
        };
        const slice_size = switch (kind) {
            .fat64 => readIntAt(u64, data, arch_off + 16, .big) orelse continue,
            .fat32 => readIntAt(u32, data, arch_off + 12, .big) orelse continue,
        };
        const start: usize = std.math.cast(usize, slice_off) orelse continue;
        const size: usize = std.math.cast(usize, slice_size) orelse continue;
        if (start > data.len or size > data.len - start) continue;

        const slice_data = data[start .. start + size];
        const magic_le = readIntAt(u32, slice_data, 0, .little) orelse 0;
        if (magic_le == mh_magic_64) {
            count += patchTargetMachoSymbols(archive_data, slice_data, base_offset + start, target_symbols, action);
        } else if (fatKind(slice_data)) |nested_kind| {
            count += patchTargetFatMachoSymbols(archive_data, slice_data, base_offset + start, target_symbols, action, nested_kind);
        }
    }
    return count;
}

fn extractDefinedMachoSymbols(gpa: Allocator, data: []const u8, symbols: *SymbolSet) !void {
    const symtab = machoSymtab(data) orelse return;

    for (0..@as(usize, symtab.nsyms)) |i| {
        const nl = addMul(symtab.symoff, i, nlist64_size) orelse break;
        if (nl > data.len or nlist64_size > data.len - nl) break;

        const n_strx = readIntAt(u32, data, nl, .little) orelse break;
        const n_type = data[nl + 4];
        if ((n_type & n_type_mask) == n_undf) continue;
        if ((n_type & n_ext) == 0) continue;
        const name = machoSymbolName(data, symtab.stroff, symtab.strsize, n_strx) orelse continue;
        if (std.mem.startsWith(u8, name, "_lean_")) {
            try addBorrowedSymbol(gpa, symbols, name);
        }
    }
}

fn weakenDuplicateMachoSymbols(archive_data: []u8, data: []const u8, slice_offset: usize, cpp_symbols: *const SymbolSet) usize {
    const symtab = machoSymtab(data) orelse return 0;
    var count: usize = 0;

    for (0..@as(usize, symtab.nsyms)) |i| {
        const nl = addMul(symtab.symoff, i, nlist64_size) orelse break;
        if (nl > data.len or nlist64_size > data.len - nl) break;

        const n_strx = readIntAt(u32, data, nl, .little) orelse break;
        const n_type = data[nl + 4];
        const n_desc = readIntAt(u16, data, nl + n_desc_offset, .little) orelse break;
        if ((n_type & n_type_mask) == n_undf) continue;
        if ((n_type & n_ext) == 0) continue;
        const name = machoSymbolName(data, symtab.stroff, symtab.strsize, n_strx) orelse continue;
        if (!std.mem.startsWith(u8, name, "_lean_")) continue;
        if (!cpp_symbols.contains(name)) continue;
        if ((n_desc & n_weak_def) != 0) continue;

        const abs_offset = slice_offset + nl + n_desc_offset;
        writeIntAt(u16, archive_data, abs_offset, n_desc | n_weak_def, .little) orelse break;
        count += 1;
    }

    return count;
}

fn patchTargetMachoSymbols(archive_data: []u8, data: []const u8, slice_offset: usize, target_symbols: *const SymbolSet, action: PatchAction) usize {
    const symtab = machoSymtab(data) orelse return 0;
    var count: usize = 0;

    for (0..@as(usize, symtab.nsyms)) |i| {
        const nl = addMul(symtab.symoff, i, nlist64_size) orelse break;
        if (nl > data.len or nlist64_size > data.len - nl) break;

        const n_strx = readIntAt(u32, data, nl, .little) orelse break;
        const n_type = data[nl + 4];
        const n_desc = readIntAt(u16, data, nl + n_desc_offset, .little) orelse break;
        if ((n_type & n_type_mask) == n_undf) continue;
        if ((n_type & n_ext) == 0) continue;
        const name = machoSymbolName(data, symtab.stroff, symtab.strsize, n_strx) orelse continue;
        if (!target_symbols.contains(name)) continue;

        const is_weak = (n_desc & n_weak_def) != 0;
        switch (action) {
            .weaken => if (is_weak) continue,
            .unweaken => if (!is_weak) continue,
        }

        const new_desc = switch (action) {
            .weaken => n_desc | n_weak_def,
            .unweaken => n_desc & ~n_weak_def,
        };
        const abs_offset = slice_offset + nl + n_desc_offset;
        writeIntAt(u16, archive_data, abs_offset, new_desc, .little) orelse break;
        count += 1;
    }

    return count;
}

const MachOSymtab = struct {
    symoff: u32,
    nsyms: u32,
    stroff: u32,
    strsize: u32,
};

fn machoSymtab(data: []const u8) ?MachOSymtab {
    if (data.len < 32) return null;
    const magic = readIntAt(u32, data, 0, .little) orelse return null;
    if (magic != mh_magic_64) return null;

    const ncmds = readIntAt(u32, data, 16, .little) orelse return null;
    var cmd_offset: usize = 32;
    for (0..@as(usize, ncmds)) |_| {
        if (cmd_offset > data.len or data.len - cmd_offset < 8) break;
        const cmd = readIntAt(u32, data, cmd_offset, .little) orelse break;
        const cmdsize = readIntAt(u32, data, cmd_offset + 4, .little) orelse break;
        if (cmd == lc_symtab) {
            return .{
                .symoff = readIntAt(u32, data, cmd_offset + 8, .little) orelse return null,
                .nsyms = readIntAt(u32, data, cmd_offset + 12, .little) orelse return null,
                .stroff = readIntAt(u32, data, cmd_offset + 16, .little) orelse return null,
                .strsize = readIntAt(u32, data, cmd_offset + 20, .little) orelse return null,
            };
        }
        cmd_offset += cmdsize;
    }
    return null;
}

fn machoSymbolName(data: []const u8, strtab_off: u32, strtab_size: u32, n_strx: u32) ?[]const u8 {
    if (n_strx >= strtab_size) return null;
    const table_start: usize = strtab_off;
    const name_index: usize = n_strx;
    if (table_start > data.len or name_index > data.len - table_start) return null;
    const name_start = table_start + name_index;
    const max_end = @min(data.len, name_start + 256);
    const rel_end = std.mem.findScalarPos(u8, data[name_start..max_end], 0, 0) orelse return null;
    return data[name_start .. name_start + rel_end];
}

fn extractDefinedElfSymbols(gpa: Allocator, data: []const u8, symbols: *SymbolSet) !void {
    var it = ElfSymtabIterator.init(data) orelse return;
    while (it.next()) |sym| {
        if (sym.st_shndx == shn_undef) continue;
        const name = elfSymbolName(data, sym.st_name, sym.strtab_off, sym.strtab_size) orelse continue;
        if (std.mem.startsWith(u8, name, "_lean_")) {
            try addBorrowedSymbol(gpa, symbols, name);
        } else if (std.mem.startsWith(u8, name, "lean_")) {
            const prefixed = try std.fmt.allocPrint(gpa, "_{s}", .{name});
            try addOwnedSymbol(gpa, symbols, prefixed);
        }
    }
}

fn weakenDuplicateElfSymbols(archive_data: []u8, data: []const u8, slice_offset: usize, cpp_symbols: *const SymbolSet) usize {
    var it = ElfSymtabIterator.init(data) orelse return 0;
    var count: usize = 0;
    while (it.next()) |sym| {
        if (sym.st_shndx == shn_undef) continue;
        const bind = sym.st_info >> 4;
        const name = elfSymbolName(data, sym.st_name, sym.strtab_off, sym.strtab_size) orelse continue;
        if (!elfNameStartsWithLean(name)) continue;
        if (!containsNormalizedElfName(cpp_symbols, name)) continue;
        if (bind == stb_weak) continue;

        const abs_offset = slice_offset + sym.sym_offset + 4;
        if (abs_offset >= archive_data.len) break;
        archive_data[abs_offset] = (sym.st_info & 0x0f) | (stb_weak << 4);
        count += 1;
    }
    return count;
}

fn patchTargetElfSymbols(archive_data: []u8, data: []const u8, slice_offset: usize, target_symbols: *const SymbolSet, action: PatchAction) usize {
    var it = ElfSymtabIterator.init(data) orelse return 0;
    var count: usize = 0;
    while (it.next()) |sym| {
        if (sym.st_shndx == shn_undef) continue;
        const bind = sym.st_info >> 4;
        const name = elfSymbolName(data, sym.st_name, sym.strtab_off, sym.strtab_size) orelse continue;
        if (!containsNormalizedElfName(target_symbols, name)) continue;

        switch (action) {
            .weaken => if (bind != stb_global) continue,
            .unweaken => if (bind != stb_weak) continue,
        }

        const new_bind: u8 = switch (action) {
            .weaken => stb_weak,
            .unweaken => stb_global,
        };
        const abs_offset = slice_offset + sym.sym_offset + 4;
        if (abs_offset >= archive_data.len) break;
        archive_data[abs_offset] = (sym.st_info & 0x0f) | (new_bind << 4);
        count += 1;
    }
    return count;
}

const ElfSym = struct {
    sym_offset: usize,
    st_info: u8,
    st_name: u32,
    st_shndx: u16,
    strtab_off: usize,
    strtab_size: usize,
};

const ElfSymtabIterator = struct {
    data: []const u8,
    endian: Endian,
    e_shoff: usize,
    e_shentsize: usize,
    e_shnum: usize,
    section_index: usize = 0,
    symbol_index: usize = 0,
    current_sym_off: usize = 0,
    current_sym_count: usize = 0,
    current_entsize: usize = 24,
    current_strtab_off: usize = 0,
    current_strtab_size: usize = 0,

    fn init(data: []const u8) ?ElfSymtabIterator {
        const endian = elfEndian(data) orelse return null;
        const e_shoff = readIntAt(u64, data, 40, endian) orelse return null;
        const e_shentsize = readIntAt(u16, data, 58, endian) orelse return null;
        const e_shnum = readIntAt(u16, data, 60, endian) orelse return null;
        if (e_shoff == 0 or e_shnum == 0) return null;
        return .{
            .data = data,
            .endian = endian,
            .e_shoff = std.math.cast(usize, e_shoff) orelse return null,
            .e_shentsize = e_shentsize,
            .e_shnum = e_shnum,
        };
    }

    fn next(self: *ElfSymtabIterator) ?ElfSym {
        while (true) {
            if (self.symbol_index < self.current_sym_count) {
                const so = addMul(self.current_sym_off, self.symbol_index, self.current_entsize) orelse return null;
                self.symbol_index += 1;
                if (so > self.data.len or self.data.len - so < 24) continue;
                return .{
                    .sym_offset = so,
                    .st_info = self.data[so + 4],
                    .st_name = readIntAt(u32, self.data, so, self.endian) orelse continue,
                    .st_shndx = readIntAt(u16, self.data, so + 6, self.endian) orelse continue,
                    .strtab_off = self.current_strtab_off,
                    .strtab_size = self.current_strtab_size,
                };
            }

            if (!self.loadNextSymtab()) return null;
        }
    }

    fn loadNextSymtab(self: *ElfSymtabIterator) bool {
        while (self.section_index < self.e_shnum) : (self.section_index += 1) {
            const sh_off = addMul(self.e_shoff, self.section_index, self.e_shentsize) orelse return false;
            if (sh_off > self.data.len or self.data.len - sh_off < 64) return false;
            const sh_type = readIntAt(u32, self.data, sh_off + 4, self.endian) orelse return false;
            if (sh_type != sht_symtab) continue;

            const sym_off64 = readIntAt(u64, self.data, sh_off + 24, self.endian) orelse return false;
            const sym_size64 = readIntAt(u64, self.data, sh_off + 32, self.endian) orelse return false;
            const sh_link = readIntAt(u32, self.data, sh_off + 40, self.endian) orelse return false;
            var entsize64 = readIntAt(u64, self.data, sh_off + 56, self.endian) orelse return false;
            if (entsize64 == 0) entsize64 = 24;

            self.current_sym_off = std.math.cast(usize, sym_off64) orelse return false;
            const sym_size = std.math.cast(usize, sym_size64) orelse return false;
            self.current_entsize = std.math.cast(usize, entsize64) orelse return false;
            self.current_sym_count = sym_size / self.current_entsize;
            self.symbol_index = 0;
            self.current_strtab_off = 0;
            self.current_strtab_size = 0;

            if (sh_link < self.e_shnum) {
                const strtab_sh = addMul(self.e_shoff, sh_link, self.e_shentsize) orelse return false;
                if (strtab_sh <= self.data.len and self.data.len - strtab_sh >= 64) {
                    const off64 = readIntAt(u64, self.data, strtab_sh + 24, self.endian) orelse 0;
                    const size64 = readIntAt(u64, self.data, strtab_sh + 32, self.endian) orelse 0;
                    self.current_strtab_off = std.math.cast(usize, off64) orelse 0;
                    self.current_strtab_size = std.math.cast(usize, size64) orelse 0;
                }
            }

            self.section_index += 1;
            return true;
        }
        return false;
    }
};

fn elfSymbolName(data: []const u8, st_name: u32, strtab_off: usize, strtab_size: usize) ?[]const u8 {
    const name_index: usize = st_name;
    if (strtab_size == 0 or name_index >= strtab_size) return null;
    if (strtab_off > data.len or name_index > data.len - strtab_off) return null;
    const name_start = strtab_off + name_index;
    const max_end = @min(data.len, name_start + 256);
    const rel_end = std.mem.findScalarPos(u8, data[name_start..max_end], 0, 0) orelse return null;
    return data[name_start .. name_start + rel_end];
}

fn containsNormalizedElfName(symbols: *const SymbolSet, name: []const u8) bool {
    if (name.len == 0) return false;
    if (name[0] == '_') return symbols.contains(name);
    if (name.len + 1 > 256) return false;

    var prefixed_buf: [256]u8 = undefined;
    prefixed_buf[0] = '_';
    @memcpy(prefixed_buf[1 .. name.len + 1], name);
    return symbols.contains(prefixed_buf[0 .. name.len + 1]);
}

fn elfNameStartsWithLean(name: []const u8) bool {
    return std.mem.startsWith(u8, name, "_lean_") or std.mem.startsWith(u8, name, "lean_");
}

fn elfEndian(data: []const u8) ?Endian {
    if (!isElf(data) or data.len < 6) return null;
    if (data[4] != elfclass64) return null;
    return switch (data[5]) {
        elfdata2lsb => .little,
        elfdata2msb => .big,
        else => null,
    };
}

fn fatKind(data: []const u8) ?FatKind {
    if (data.len < 8) return null;
    const magic = readIntAt(u32, data, 0, .big) orelse return null;
    return switch (magic) {
        fat_magic => .fat32,
        fat_magic_64 => .fat64,
        else => null,
    };
}

fn isArchive(data: []const u8) bool {
    return data.len >= 8 and std.mem.eql(u8, data[0..8], "!<arch>\n");
}

fn isElf(data: []const u8) bool {
    return data.len >= 4 and std.mem.eql(u8, data[0..4], elf_magic);
}

fn addBorrowedSymbol(gpa: Allocator, symbols: *SymbolSet, name: []const u8) !void {
    if (symbols.contains(name)) return;
    const copy = try gpa.dupe(u8, name);
    errdefer gpa.free(copy);
    try symbols.put(copy, {});
}

fn addOwnedSymbol(gpa: Allocator, symbols: *SymbolSet, name: []u8) !void {
    if (symbols.contains(name)) {
        gpa.free(name);
        return;
    }
    errdefer gpa.free(name);
    try symbols.put(name, {});
}

fn mergeSymbols(gpa: Allocator, dest: *SymbolSet, source: *const SymbolSet) !void {
    var keys = source.keyIterator();
    while (keys.next()) |key| {
        try addBorrowedSymbol(gpa, dest, key.*);
    }
}

fn deinitSymbolSet(gpa: Allocator, symbols: *SymbolSet) void {
    var keys = symbols.keyIterator();
    while (keys.next()) |key| {
        gpa.free(key.*);
    }
    symbols.deinit();
}

fn printArchiveError(io: std.Io, path: []const u8, err: anyerror) !void {
    switch (err) {
        error.FileNotFound => try printErr(io, "error: {s} not found\n", .{path}),
        error.NotArchive => try printErr(io, "error: {s} is not an ar archive\n", .{path}),
        else => try printErr(io, "error: {s}: {s}\n", .{ path, @errorName(err) }),
    }
}

fn printOut(io: std.Io, comptime fmt: []const u8, args: anytype) !void {
    var buffer: [1024]u8 = undefined;
    var writer = std.Io.File.stdout().writerStreaming(io, &buffer);
    try writer.interface.print(fmt, args);
    try writer.interface.flush();
}

fn printErr(io: std.Io, comptime fmt: []const u8, args: anytype) !void {
    var buffer: [1024]u8 = undefined;
    var writer = std.Io.File.stderr().writerStreaming(io, &buffer);
    try writer.interface.print(fmt, args);
    try writer.interface.flush();
}

fn readIntAt(comptime T: type, data: []const u8, offset: usize, endian: Endian) ?T {
    const size = @sizeOf(T);
    if (offset > data.len or size > data.len - offset) return null;
    return std.mem.readInt(T, data[offset..][0..size], endian);
}

fn writeIntAt(comptime T: type, data: []u8, offset: usize, value: T, endian: Endian) ?void {
    const size = @sizeOf(T);
    if (offset > data.len or size > data.len - offset) return null;
    std.mem.writeInt(T, data[offset..][0..size], value, endian);
}

fn addMul(base: usize, index: usize, item_size: usize) ?usize {
    const product = std.math.mul(usize, index, item_size) catch return null;
    return std.math.add(usize, base, product) catch null;
}
