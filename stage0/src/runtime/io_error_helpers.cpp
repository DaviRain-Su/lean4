/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <string>
#include "runtime/io.h"
#include "runtime/object.h"

namespace lean {
LEAN_EXPORT lean_obj_res io_result_mk_error(char const * msg) {
    return lean_io_result_mk_error(mk_string(msg));
}

LEAN_EXPORT lean_obj_res io_result_mk_error(std::string const & msg) {
    return lean_io_result_mk_error(mk_string(msg));
}
}
