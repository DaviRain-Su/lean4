/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Provides std::__hash_memory for C++ objects compiled with Zig's libc++ headers
when the final link uses the platform libc++ that lacks this symbol.
*/
#include <cstddef>

namespace std {
inline namespace __1 {
std::size_t __hash_memory(void const* ptr, std::size_t len) noexcept {
    auto const* bytes = static_cast<unsigned char const*>(ptr);
    std::size_t h = 0;
    for (std::size_t i = 0; i < len; ++i)
        h = h * 1315423911u + bytes[i];
    return h;
}
} // namespace __1
} // namespace std