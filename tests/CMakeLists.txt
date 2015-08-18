
include_directories ("../include")

# test-egl
add_executable ("test-egl" 
  "test-egl.cpp")
target_link_libraries ("test-egl"
  "wrangle-egl-static"
  "wrangle-gles-static")

# test-wgl
add_executable ("test-wgl" 
  "test-wgl.cpp")
set_target_properties("test-wgl" PROPERTIES 
  LINK_FLAGS_DEBUG  "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS"
  LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS")
target_link_libraries ("test-wgl"
  "wrangle-wgl-static"
  #"wrangle-glcore-static"
  )
