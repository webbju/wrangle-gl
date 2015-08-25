
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

target_compile_options ("test-egl"
  PUBLIC "-DGLEW_USE_EGL"
  PUBLIC "-DGLEW_USE_OPENGL_ES")

target_link_libraries ("test-egl"
  "${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/ARM/libEGL.lib"
  "${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/ARM/libGLESv2.lib")
#configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/AMD/x86/libEGL.dll" "${CMAKE_CURRENT_BINARY_DIR}/libEGL.dll" COPYONLY)
#configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/AMD/x86/libGLESv2.dll" "${CMAKE_CURRENT_BINARY_DIR}/libGLESv2.dll" COPYONLY)

set_target_properties("test-egl" PROPERTIES 
  LINK_FLAGS_DEBUG  "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS")

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

target_compile_options ("test-wgl"
  PUBLIC "-DGLEW_USE_WGL"
  PUBLIC "-DGLEW_USE_OPENGL_ES")

set_target_properties("test-wgl" PROPERTIES 
  LINK_FLAGS_DEBUG  "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS")
