#!/usr/bin/env python3
"""Phase 3 cutover: flip specific symbols from C++ to Zig.

This script does two things:
1. Weakens the specified `lean_*` symbols in all C++ archives so they
   no longer override Zig.
2. Unweakens those symbols in the Zig archive so the Zig definitions
   become strong and take precedence.

Usage:  flip_to_zig.py <zig-archive.a> <symbol-list-file> <cpp-archive.a> [<cpp-archive.a> ...]
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

# ELF constants for the Linux cutover path (the Mach-O path above handles macOS).
ELF_MAGIC = b"\x7fELF"
ELFCLASS64 = 2
ELFDATA2LSB = 1
ELFDATA2MSB = 2
SHT_SYMTAB = 2
STB_GLOBAL = 1
STB_WEAK = 2
SHN_UNDEF = 0


def _elf_endian(data: bytes):
    if len(data) < 6 or data[:4] != ELF_MAGIC or data[4] != ELFCLASS64:
        return None
    return "<" if data[5] == ELFDATA2LSB else (">" if data[5] == ELFDATA2MSB else None)


def _elf64_symtab_entries(data: bytes):
    """Yield (sym_offset, st_info, st_name, st_shndx, strtab_off, strtab_size) per symbol."""
    e = _elf_endian(data)
    if e is None:
        return
    e_shoff = struct.unpack_from(e + "Q", data, 40)[0]
    e_shentsize = struct.unpack_from(e + "H", data, 58)[0]
    e_shnum = struct.unpack_from(e + "H", data, 60)[0]
    if e_shoff == 0 or e_shnum == 0:
        return
    for si in range(e_shnum):
        sh_off = e_shoff + si * e_shentsize
        if sh_off + 64 > len(data):
            break
        if struct.unpack_from(e + "I", data, sh_off + 4)[0] != SHT_SYMTAB:
            continue
        sym_off = struct.unpack_from(e + "Q", data, sh_off + 24)[0]
        sym_size = struct.unpack_from(e + "Q", data, sh_off + 32)[0]
        sh_link = struct.unpack_from(e + "I", data, sh_off + 40)[0]
        entsize = struct.unpack_from(e + "Q", data, sh_off + 56)[0] or 24
        strtab_sh = e_shoff + sh_link * e_shentsize
        strtab_off = struct.unpack_from(e + "Q", data, strtab_sh + 24)[0] if sh_link < e_shnum else 0
        strtab_size = struct.unpack_from(e + "Q", data, strtab_sh + 32)[0] if sh_link < e_shnum else 0
        for i in range(sym_size // entsize):
            so = sym_off + i * entsize
            if so + 24 > len(data):
                break
            st_name = struct.unpack_from(e + "I", data, so)[0]
            st_info = data[so + 4]
            st_shndx = struct.unpack_from(e + "H", data, so + 6)[0]
            yield (so, st_info, st_name, st_shndx, strtab_off, strtab_size)


def _elf_sym_name(data: bytes, st_name: int, strtab_off: int, strtab_size: int) -> str:
    if strtab_size == 0 or st_name >= strtab_size:
        return ""
    start = strtab_off + st_name
    end = data.find(b"\x00", start, start + 256)
    if end < 0:
        return ""
    return data[start:end].decode("ascii", errors="replace")


def find_symbols_in_elf(data: bytes, slice_offset: int, target_syms: set, action: str):
    """Yield (abs_offset_of_st_info, current_st_info) for each target ELF symbol.

    ELF symbol names are not underscore-prefixed; target_syms holds the
    leading-underscore form (from read_symbol_list), so we normalize before
    matching. For 'weaken': yield defined global (strong) symbols. For
    'unweaken': yield defined weak symbols.
    """
    for (so, st_info, st_name, st_shndx, strtab_off, strtab_size) in _elf64_symtab_entries(data):
        if st_shndx == SHN_UNDEF:
            continue
        bind = st_info >> 4
        name = _elf_sym_name(data, st_name, strtab_off, strtab_size)
        norm = name if name.startswith("_") else ("_" + name if name else "")
        if norm not in target_syms:
            continue
        if action == 'weaken' and bind == STB_GLOBAL:
            yield (slice_offset + so + 4, st_info)
        elif action == 'unweaken' and bind == STB_WEAK:
            yield (slice_offset + so + 4, st_info)


def read_symbol_list(path: str) -> set:
    """Read symbol names from a file, prefixing with '_'."""
    syms: set[str] = set()
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith('#'):
                continue
            syms.add('_' + line)
    return syms


def find_symbols_in_macho(data: bytes, slice_offset: int, target_syms: set, action: str):
    """Yield (absolute_offset_of_n_desc, current_desc) for each target symbol.

    For 'weaken': only yield strong symbols (skip already-weak).
    For 'unweaken': only yield weak symbols (skip already-strong).
    """
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

        if name not in target_syms:
            continue

        is_weak = bool(n_desc & N_WEAK_DEF)
        if action == 'weaken' and is_weak:
            continue  # Already weak, skip
        if action == 'unweaken' and not is_weak:
            continue  # Already strong, skip

        yield (slice_offset + nl + N_DESC_OFFSET, n_desc)


def process_archive(archive_path: str, target_syms: set, action: str) -> int:
    """Weaken or unweaken target symbols in an archive.

    action: 'weaken' sets N_WEAK_DEF, 'unweaken' clears it.
    """
    ar = Path(archive_path)
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

            # Mach-O (u16 n_desc, set/clear N_WEAK_DEF).
            offsets = []
            if magic_val == MH_MAGIC_64:
                offsets = list(find_symbols_in_macho(member_data, content_start, target_syms, action))
            for abs_offset, old_desc in offsets:
                if action == 'weaken':
                    new_desc = old_desc | N_WEAK_DEF
                else:  # unweaken
                    new_desc = old_desc & ~N_WEAK_DEF
                struct.pack_into("<H", data, abs_offset, new_desc)
                count += 1

            # ELF (u8 st_info, flip binding STB_GLOBAL<->STB_WEAK).
            if member_data[:4] == ELF_MAGIC:
                for abs_offset, old_info in find_symbols_in_elf(member_data, content_start, target_syms, action):
                    if action == 'weaken':
                        new_info = (old_info & 0x0f) | (STB_WEAK << 4)
                    else:  # unweaken
                        new_info = (old_info & 0x0f) | (STB_GLOBAL << 4)
                    data[abs_offset] = new_info
                    count += 1

        pos = member_data_end
        if pos % 2 == 1:
            pos += 1

    if count > 0:
        ar.write_bytes(bytes(data))

    return count


if __name__ == "__main__":
    # Usage: flip_to_zig.py <zig-archive.a> [<zig-archive.a> ...] <symbol-list-file> <cpp-archive.a> [<cpp-archive.a> ...]
    # Split args: zig archives first, then symbol file, then cpp archives.
    # The symbol file is the first argument that ends with .txt
    args = sys.argv[1:]
    if len(args) < 3:
        print(f"usage: {sys.argv[0]} <zig-archive.a> [<zig-archive.a> ...] <symbol-list-file> <cpp-archive.a> [<cpp-archive.a> ...]", file=sys.stderr)
        sys.exit(2)

    # Find the symbol list file (first arg ending in .txt)
    sym_idx = None
    for i, arg in enumerate(args):
        if arg.endswith('.txt'):
            sym_idx = i
            break
    if sym_idx is None:
        print(f"usage: {sys.argv[0]} <zig-archive.a> [<zig-archive.a> ...] <symbol-list-file> <cpp-archive.a> [<cpp-archive.a> ...]", file=sys.stderr)
        sys.exit(2)

    zig_paths = args[:sym_idx]
    sym_file = args[sym_idx]
    cpp_paths = args[sym_idx + 1:]

    if not zig_paths or not cpp_paths:
        print(f"usage: {sys.argv[0]} <zig-archive.a> [<zig-archive.a> ...] <symbol-list-file> <cpp-archive.a> [<cpp-archive.a> ...]", file=sys.stderr)
        sys.exit(2)

    flip_syms = read_symbol_list(sym_file)
    if not flip_syms:
        print("No symbols to flip (Phase 2 baseline)")
        sys.exit(0)

    print(f"Flipping {len(flip_syms)} symbols to Zig:")

    # 1. Weaken C++ symbols in all C++ archives
    for cpp_path in cpp_paths:
        cpp_count = process_archive(cpp_path, flip_syms, 'weaken')
        print(f"  C++ {cpp_path}: weakened {cpp_count} symbol(s)")

    # 2. Unweaken Zig symbols so they become strong
    for zig_path in zig_paths:
        zig_count = process_archive(zig_path, flip_syms, 'unweaken')
        print(f"  Zig {zig_path}: unweakened {zig_count} symbol(s)")

    sys.exit(0)
