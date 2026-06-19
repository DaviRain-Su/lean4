#!/usr/bin/env python3
"""Weaken `lean_*` symbols in the Zig runtime archive that are ALSO defined
in the C++ runtime/library archives.  Symbols only present in Zig stay strong
so they fill gaps in the C++ runtime.

This is the Phase 2 cutover strategy: instead of weakening all C++ symbols
and letting Zig override everything (which causes behavioral mismatches),
we keep C++ strong and weaken only the Zig duplicates.  The linker picks
the strong C++ definition; Zig definitions are only used when C++ has none.

Usage:  weaken_zig_symbols.py <zig-archive.a> <cpp-archive.a> [<cpp-archive.a> ...]
"""

import struct
import sys
from pathlib import Path

N_WEAK_DEF = 0x80

MH_MAGIC_64 = 0xFEEDFACF
FAT_MAGIC = 0xCAFEBABE
FAT_MAGIC_64 = 0xCAFEBABF
LC_SYMTAB = 0x02

NLIST64_SIZE = 16
N_DESC_OFFSET = 6
N_EXT = 0x01
N_TYPE_MASK = 0x0E
N_UNDF = 0x00


def extract_defined_symbols(data: bytes, name_set: set) -> None:
    """Add all defined external `_lean_*` symbol names from a Mach-O slice."""
    if len(data) < 32:
        return
    magic = struct.unpack_from("<I", data, 0)[0]
    if magic != MH_MAGIC_64:
        return

    ncmds = struct.unpack_from("<I", data, 16)[0]
    cmd_offset = 32
    symtab_off = strtab_off = symtab_ns = strtab_sz = None

    for _ in range(ncmds):
        if cmd_offset + 8 > len(data):
            break
        cmd = struct.unpack_from("<I", data, cmd_offset)[0]
        cmdsize = struct.unpack_from("<I", data, cmd_offset + 4)[0]
        if cmd == LC_SYMTAB:
            symtab_off = struct.unpack_from("<I", data, cmd_offset + 8)[0]
            symtab_ns = struct.unpack_from("<I", data, cmd_offset + 12)[0]
            strtab_off = struct.unpack_from("<I", data, cmd_offset + 16)[0]
            strtab_sz = struct.unpack_from("<I", data, cmd_offset + 20)[0]
            break
        cmd_offset += cmdsize

    if symtab_off is None:
        return

    for i in range(symtab_ns):
        nl = symtab_off + i * NLIST64_SIZE
        if nl + NLIST64_SIZE > len(data):
            break
        n_strx = struct.unpack_from("<I", data, nl)[0]
        n_type = data[nl + 4]

        if (n_type & N_TYPE_MASK) == N_UNDF:
            continue
        if not (n_type & N_EXT):
            continue
        if n_strx >= strtab_sz or strtab_off + n_strx >= len(data):
            continue

        name_start = strtab_off + n_strx
        name_end = data.find(b'\x00', name_start, name_start + 256)
        if name_end < 0:
            continue
        name = data[name_start:name_end].decode('ascii', errors='replace')
        if name.startswith("_lean_"):
            name_set.add(name)


def collect_archive_symbols(archive_path: str) -> set:
    """Collect all defined external `_lean_*` symbol names from an archive."""
    ar = Path(archive_path)
    if not ar.exists():
        print(f"error: {ar} not found", file=sys.stderr)
        sys.exit(1)

    data = ar.read_bytes()
    if data[:8] != b"!<arch>\n":
        print(f"error: {ar} is not an ar archive", file=sys.stderr)
        sys.exit(1)

    symbols: set[str] = set()
    pos = 8
    while pos < len(data):
        if pos + 60 > len(data):
            break
        name_field = data[pos:pos + 16]
        size_str = data[pos + 48:pos + 58].strip()
        magic = data[pos + 58:pos + 60]
        if magic != b"`\n":
            break
        try:
            member_size = int(size_str)
        except ValueError:
            break

        member_data_start = pos + 60
        member_data_end = member_data_start + member_size
        if member_data_end > len(data):
            break

        member_name = name_field.decode('ascii', errors='replace').rstrip()
        name_prefix_len = 0
        if member_name.startswith("#1/"):
            try:
                name_prefix_len = int(member_name[3:])
            except ValueError:
                pass

        if not member_name.startswith("__.SYMDEF"):
            content_start = member_data_start + name_prefix_len
            member_data = data[content_start:member_data_end]
            magic_val = struct.unpack_from("<I", member_data, 0)[0] if len(member_data) >= 4 else 0
            if magic_val == MH_MAGIC_64:
                extract_defined_symbols(member_data, symbols)
            elif magic_val == FAT_MAGIC or magic_val == FAT_MAGIC_64:
                is_64 = magic_val == FAT_MAGIC_64
                nfat = struct.unpack_from(">I", member_data, 4)[0]
                asz = 32 if is_64 else 20
                for i in range(nfat):
                    off = 8 + i * asz
                    if is_64:
                        ao = struct.unpack_from(">Q", member_data, off + 8)[0]
                        asz_v = struct.unpack_from(">Q", member_data, off + 16)[0]
                    else:
                        ao = struct.unpack_from(">I", member_data, off + 8)[0]
                        asz_v = struct.unpack_from(">I", member_data, off + 12)[0]
                    slice_data = member_data[ao:ao + asz_v]
                    extract_defined_symbols(slice_data, symbols)

        pos = member_data_end
        if pos % 2 == 1:
            pos += 1

    return symbols


def find_lean_symbols_in_macho(data: bytes, slice_offset: int, cpp_symbols: set):
    """Yield (absolute_offset_of_n_desc, current_desc) for each `_lean_*`
    defined external symbol that also exists in cpp_symbols."""
    if len(data) < 32:
        return
    magic = struct.unpack_from("<I", data, 0)[0]
    if magic != MH_MAGIC_64:
        return

    ncmds = struct.unpack_from("<I", data, 16)[0]
    cmd_offset = 32
    symtab_off = strtab_off = symtab_ns = strtab_sz = None

    for _ in range(ncmds):
        if cmd_offset + 8 > len(data):
            break
        cmd = struct.unpack_from("<I", data, cmd_offset)[0]
        cmdsize = struct.unpack_from("<I", data, cmd_offset + 4)[0]
        if cmd == LC_SYMTAB:
            symtab_off = struct.unpack_from("<I", data, cmd_offset + 8)[0]
            symtab_ns = struct.unpack_from("<I", data, cmd_offset + 12)[0]
            strtab_off = struct.unpack_from("<I", data, cmd_offset + 16)[0]
            strtab_sz = struct.unpack_from("<I", data, cmd_offset + 20)[0]
            break
        cmd_offset += cmdsize

    if symtab_off is None:
        return

    for i in range(symtab_ns):
        nl = symtab_off + i * NLIST64_SIZE
        if nl + NLIST64_SIZE > len(data):
            break
        n_strx = struct.unpack_from("<I", data, nl)[0]
        n_type = data[nl + 4]
        n_desc = struct.unpack_from("<H", data, nl + N_DESC_OFFSET)[0]

        if (n_type & N_TYPE_MASK) == N_UNDF:
            continue
        if not (n_type & N_EXT):
            continue
        if n_strx >= strtab_sz or strtab_off + n_strx >= len(data):
            continue

        name_start = strtab_off + n_strx
        name_end = data.find(b'\x00', name_start, name_start + 256)
        if name_end < 0:
            continue
        name = data[name_start:name_end].decode('ascii', errors='replace')

        if not name.startswith("_lean_"):
            continue
        if name not in cpp_symbols:
            continue  # Keep strong: only in Zig, fills a gap
        if n_desc & N_WEAK_DEF:
            continue

        yield (slice_offset + nl + N_DESC_OFFSET, n_desc)


def process_archive(zig_path: str, cpp_paths: list) -> int:
    """Weaken Zig symbols that also exist in any C++ archive."""
    cpp_symbols: set[str] = set()
    for cpp_path in cpp_paths:
        syms = collect_archive_symbols(cpp_path)
        print(f"  {cpp_path}: {len(syms)} lean_* symbols")
        cpp_symbols |= syms
    print(f"C++ archives total: {len(cpp_symbols)} unique lean_* symbols")

    ar = Path(zig_path)
    if not ar.exists():
        print(f"error: {ar} not found", file=sys.stderr)
        return 1

    data = bytearray(ar.read_bytes())
    if data[:8] != b"!<arch>\n":
        print(f"error: {ar} is not an ar archive", file=sys.stderr)
        return 1

    pos = 8
    count = 0
    while pos < len(data):
        if pos + 60 > len(data):
            break
        name_field = data[pos:pos + 16]
        size_str = data[pos + 48:pos + 58].strip()
        magic = data[pos + 58:pos + 60]
        if magic != b"`\n":
            break
        try:
            member_size = int(size_str)
        except ValueError:
            break

        member_data_start = pos + 60
        member_data_end = member_data_start + member_size
        if member_data_end > len(data):
            break

        member_name = name_field.decode('ascii', errors='replace').rstrip()
        name_prefix_len = 0
        if member_name.startswith("#1/"):
            try:
                name_prefix_len = int(member_name[3:])
            except ValueError:
                pass

        if not member_name.startswith("__.SYMDEF"):
            content_start = member_data_start + name_prefix_len
            member_data = bytes(data[content_start:member_data_end])
            magic_val = struct.unpack_from("<I", member_data, 0)[0] if len(member_data) >= 4 else 0

            offsets = []
            if magic_val == MH_MAGIC_64:
                offsets = list(find_lean_symbols_in_macho(member_data, content_start, cpp_symbols))
            elif magic_val == FAT_MAGIC or magic_val == FAT_MAGIC_64:
                is_64 = magic_val == FAT_MAGIC_64
                nfat = struct.unpack_from(">I", member_data, 4)[0]
                asz = 32 if is_64 else 20
                for i in range(nfat):
                    off = 8 + i * asz
                    if is_64:
                        ao = struct.unpack_from(">Q", member_data, off + 8)[0]
                        asz_v = struct.unpack_from(">Q", member_data, off + 16)[0]
                    else:
                        ao = struct.unpack_from(">I", member_data, off + 8)[0]
                        asz_v = struct.unpack_from(">I", member_data, off + 12)[0]
                    slice_data = member_data[ao:ao + asz_v]
                    offsets.extend(
                        find_lean_symbols_in_macho(slice_data, content_start + ao, cpp_symbols)
                    )

            for abs_offset, old_desc in offsets:
                new_desc = old_desc | N_WEAK_DEF
                struct.pack_into("<H", data, abs_offset, new_desc)
                count += 1

        pos = member_data_end
        if pos % 2 == 1:
            pos += 1

    if count > 0:
        ar.write_bytes(bytes(data))

    print(f"Weakened {count} Zig lean_* symbol(s) also defined in C++")
    return 0


if __name__ == "__main__":
    if len(sys.argv) < 3:
        print(f"usage: {sys.argv[0]} <zig-archive.a> <cpp-archive.a> [<cpp-archive.a> ...]", file=sys.stderr)
        sys.exit(2)
    sys.exit(process_archive(sys.argv[1], sys.argv[2:]))
