cmake_minimum_required (VERSION 3.2)

project (wrangle-gl)

set (CMAKE_CXX_STANDARD 11)

# tests

include_directories ("include")

set(TEST_SOURCES
  "src/wrangle-egl.cpp"
  "src/wrangle-gl.cpp"
  "src/wrangle-gles.cpp"
  "src/wrangle-glx.cpp"
  "src/wrangle-vulkan.cpp"
  "tests/test-egl.cpp"
  "tests/test-gl.cpp"
  "tests/test-gles.cpp"
  "tests/test-glx.cpp"
  "tests/test-vulkan.cpp")
if(WIN32)
  set(TEST_SOURCES
    ${TEST_SOURCES}
    "src/wrangle-wgl.cpp"
    "tests/test-wgl.cpp")
endif()

add_executable ("tests" ${TEST_SOURCES})

if(WIN32)
  # https://developer.arm.com/-/media/Files/downloads/open-gl-es-emulator/3.0.4/Mali_OpenGL_ES_Emulator-v3.0.4-2-g8d905-Windows-64bit.zip?revision=89a52b4d-c891-4abc-be58-50db8c20bff9?product=OpenGL%20ES%20Emulator,64-bit,,Windows,3.0.4
  #target_link_libraries ("tests"
  #  "${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/ARM/libEGL.lib"
  #  "${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/ARM/libGLESv2.lib")
  #configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/AMD/x86/libEGL.dll" "${CMAKE_CURRENT_BINARY_DIR}/libEGL.dll" COPYONLY)
  #configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/khronos/emulator/AMD/x86/libGLESv2.dll" "${CMAKE_CURRENT_BINARY_DIR}/libGLESv2.dll" COPYONLY)
else()
  find_package(OpenGL REQUIRED COMPONENTS EGL)
  if(NOT OPENGL_FOUND)
      message(SEND_ERROR "Error: No OpenGL found.")
  endif()
  target_link_libraries ("tests"
    "${OPENGL_egl_LIBRARY}"
    "${OPENGL_opengl_LIBRARY}"
    dl)
endif()

if(WIN32)
set_target_properties("tests" PROPERTIES
  LINK_FLAGS_DEBUG  "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS")
endif()
