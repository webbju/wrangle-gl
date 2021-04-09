cmake_minimum_required (VERSION 3.2)

project (wrangle-gl)

# test-egl

include_directories ("include")

add_executable ("test-egl"
  "include/wrangle.h"
  "include/wrangle-egl.h"
  "src/wrangle-egl.cpp"
  "tests/test-egl.cpp")

target_compile_options ("test-egl"
  PUBLIC "-DGLEW_USE_EGL")

if(WIN32)
  # https://developer.arm.com/-/media/Files/downloads/open-gl-es-emulator/3.0.4/Mali_OpenGL_ES_Emulator-v3.0.4-2-g8d905-Windows-64bit.zip?revision=89a52b4d-c891-4abc-be58-50db8c20bff9?product=OpenGL%20ES%20Emulator,64-bit,,Windows,3.0.4
  #target_link_libraries ("test-egl"
  #  "${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/ARM/libEGL.lib"
  #  "${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/ARM/libGLESv2.lib")
  #configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/AMD/x86/libEGL.dll" "${CMAKE_CURRENT_BINARY_DIR}/libEGL.dll" COPYONLY)
  #configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/AMD/x86/libGLESv2.dll" "${CMAKE_CURRENT_BINARY_DIR}/libGLESv2.dll" COPYONLY)
else()
  find_package(OpenGL REQUIRED COMPONENTS EGL)
  if(NOT OPENGL_FOUND)
      message(SEND_ERROR "Error: No OpenGL found.")
  endif()
  target_link_libraries ("test-egl"
    "${OPENGL_egl_LIBRARY}"
    "${OPENGL_opengl_LIBRARY}"
    dl)
endif()

if(WIN32)
set_target_properties("test-egl" PROPERTIES
  LINK_FLAGS_DEBUG  "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS")
endif()

# test-wgl (Windows only)

if(WIN32)
add_executable ("test-wgl"
  "include/wrangle.h"
  "include/wrangle-wgl.h"
  "include/wrangle-gl.h"
  "include/wrangle-gles.h"
  "src/wrangle-wgl.cpp"
  "src/wrangle-gl.cpp"
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
endif()
