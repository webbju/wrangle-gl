
cmake_minimum_required (VERSION 3.2)

project (wrangle-gl)

include_directories ("include")

# test-egl
add_executable ("test-egl" 
  "include/wrangle.h" 
  "include/wrangle-egl.h" 
  "include/wrangle-gl.h"
  "include/wrangle-glcore.h"
  "include/wrangle-gles.h"
  "src/wrangle-egl.cpp"
  "src/wrangle-gl.cpp"
  "src/wrangle-glcore.cpp"
  "src/wrangle-gles.cpp"
  "tests/test-egl.cpp")

# test-wgl
add_executable ("test-wgl" 
  "include/wrangle.h" 
  "include/wrangle-wgl.h" 
  "include/wrangle-gl.h"
  "include/wrangle-glcore.h"
  "include/wrangle-gles.h"
  "src/wrangle-wgl.cpp"
  "src/wrangle-gl.cpp"
  "src/wrangle-glcore.cpp"
  "src/wrangle-gles.cpp"
  "tests/test-wgl.cpp")

set_target_properties("test-wgl" PROPERTIES 
  LINK_FLAGS_DEBUG  "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS")
