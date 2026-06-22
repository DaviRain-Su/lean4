/*
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Provides mimalloc symbols referenced by lean.h inline allocators when
LEAN_MIMALLOC is defined. When the full mimalloc library is linked,
these weak definitions are overridden. Otherwise libc malloc/free is used.
*/
#include <stdlib.h>

#define MI_WEAK __attribute__((weak, visibility("default")))

extern "C" {

MI_WEAK void * mi_malloc(size_t size) {
    return malloc(size);
}

MI_WEAK void * mi_malloc_small(size_t size) {
    return malloc(size);
}

MI_WEAK void * mi_new_n(size_t count, size_t size) {
    return malloc(count * size);
}

MI_WEAK void mi_free(void * ptr) {
    free(ptr);
}

MI_WEAK void mi_free_size(void * ptr, size_t) {
    free(ptr);
}

}
