add_library(
  library
  OBJECT
  expr_lt.cpp
  bin_app.cpp
  constants.cpp
  max_sharing.cpp
  module.cpp
  dynlib.cpp
  replace_visitor.cpp
  num.cpp
  util.cpp
  print.cpp
  annotation.cpp
  init_module.cpp
  profiling.cpp
  time_task.cpp
  formatter.cpp
  elab_environment.cpp
  init_attribute.cpp
  ir_interpreter.cpp
  instantiate_mvars.cpp
)
# When the Zig runtime cutover is active, llvm_stubs.zig provides the
# lean_llvm_* stubs.  Otherwise C++ llvm.cpp must fill that role.
if(NOT (LEAN_ZIG_RUNTIME AND LEAN_ZIG_RT_CUTOVER))
  target_sources(library PRIVATE llvm.cpp)
endif()
