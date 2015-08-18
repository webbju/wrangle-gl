
include_directories ("../include")

add_library ("wrangle-egl-static" STATIC 
"../include/wrangle.h" 
"../include/wrangle-egl.h" 
"wrangle-egl.cpp")

add_library ("wrangle-gles-static" STATIC 
"../include/wrangle.h"
"../include/wrangle-gles.h"  
"wrangle-gles.cpp")

#add_library ("wrangle-glx-static" STATIC 
#"../include/wrangle-glx.h" 
#"wrangle-glx.cpp")

add_library ("wrangle-wgl-static" STATIC 
"../include/wrangle.h" 
"../include/wrangle-wgl.h" 
"wrangle-wgl.cpp")
