cmake_minimum_required (VERSION 3.30)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project (wrangle-gl)

enable_testing ()

set(CMAKE_CXX_STANDARD 17)

include_directories ("include")

if(WIN32)
  include(FetchContent)
  FetchContent_Declare(
    mali_gles_emulator
    URL https://developer.arm.com/-/media/Files/downloads/open-gl-es-emulator/3.0.4/Mali_OpenGL_ES_Emulator-v3.0.4-2-g8d905-Windows-64bit.zip?revision=89a52b4d-c891-4abc-be58-50db8c20bff9?product=OpenGL%20ES%20Emulator,64-bit,,Windows,3.0.4
  )
  FetchContent_MakeAvailable(mali_gles_emulator)
  message(STATUS "Fetched mali_gles_emulator to ${mali_gles_emulator_SOURCE_DIR}")
  find_file(OPENGL_EGL_LIBRARY
    NAMES libEGL.lib
    PATHS ${mali_gles_emulator_SOURCE_DIR}
    REQUIRED
  )
  find_file(OPENGL_GLESv2_LIBRARY
    NAMES libGLESv2.lib
    PATHS ${mali_gles_emulator_SOURCE_DIR}
    REQUIRED
  )
  set(OPENGL_egl_LIBRARY ${OPENGL_EGL_LIBRARY})
  set(OPENGL_opengl_LIBRARY ${OPENGL_GLESv2_LIBRARY})
  # Runtime dependencies
  configure_file ("${mali_gles_emulator_SOURCE_DIR}/libEGL.dll" "${CMAKE_CURRENT_BINARY_DIR}/libEGL.dll" COPYONLY)
  configure_file ("${mali_gles_emulator_SOURCE_DIR}/libGLESv2.dll" "${CMAKE_CURRENT_BINARY_DIR}/libGLESv2.dll" COPYONLY)
  configure_file ("${mali_gles_emulator_SOURCE_DIR}/libMaliEmulator.dll" "${CMAKE_CURRENT_BINARY_DIR}/libMaliEmulator.dll" COPYONLY)
  configure_file ("${mali_gles_emulator_SOURCE_DIR}/log4cplus.dll" "${CMAKE_CURRENT_BINARY_DIR}/log4cplus.dll" COPYONLY)
else()
  find_package(OpenGL REQUIRED COMPONENTS EGL)
endif()

# egl_glcore

add_executable (egl_glcore
  WIN32
  "include/wrangle-gl.h"
  "include/wrangle-egl.h"
  "src/wrangle-gl.cpp"
  "src/wrangle-egl.cpp"
  "tests/test-egl.cpp")

target_compile_options (egl_glcore
  PUBLIC "-DGLEW_USE_EGL"
  PUBLIC "-DGLEW_USE_OPENGL")

target_link_libraries (egl_glcore
    "${OPENGL_egl_LIBRARY}")

add_test(NAME run_egl_glcore COMMAND $<TARGET_FILE:egl_glcore>)

# egl_gles

add_executable (egl_gles
  WIN32
  "include/wrangle-egl.h"
  "include/wrangle-gles.h"
  "src/wrangle-egl.cpp"
  "src/wrangle-gles.cpp"
  "tests/test-egl.cpp")

target_compile_options (egl_gles
  PUBLIC "-DGLEW_USE_EGL"
  PUBLIC "-DGLEW_USE_OPENGL_ES")

target_link_libraries (egl_gles
    "${OPENGL_egl_LIBRARY}"
    "${OPENGL_opengl_LIBRARY}")

if(LINUX)
target_link_libraries (egl_gles dl)
endif()

add_test(NAME run_egl_gles COMMAND $<TARGET_FILE:egl_gles>)

# wgl_glcore (Windows only)

if(WIN32)

add_executable (wgl_glcore
  WIN32
  "include/wrangle-gl.h"
  "include/wrangle-wgl.h"
  "src/wrangle-gl.cpp"
  "src/wrangle-wgl.cpp"
  "tests/test-wgl.cpp"
)

target_compile_options (wgl_glcore
  PUBLIC "-DGLEW_USE_WGL"
  PUBLIC "-DGLEW_USE_OPENGL")

add_test(NAME run_wgl_glcore COMMAND $<TARGET_FILE:wgl_glcore>)

endif()

# wgl_gles (Windows only)

if(WIN32)

add_executable (wgl_gles
  WIN32
  "include/wrangle-wgl.h"
  "include/wrangle-gles.h"
  "src/wrangle-wgl.cpp"
  "src/wrangle-gles.cpp"
  "tests/test-wgl.cpp"
)

target_compile_options (wgl_gles
  PUBLIC "-DGLEW_USE_WGL"
  PUBLIC "-DGLEW_USE_OPENGL_ES")

add_test(NAME run_wgl_gles COMMAND $<TARGET_FILE:wgl_gles>)

endif()
