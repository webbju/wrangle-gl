#!/bin/bash
set -x

rm -Rf build

# OpenGL and OpenGL-ES
#BUILD_DIR=build/opengl-registry
#git clone --depth=1 https://github.com/KhronosGroup/OpenGL-Registry.git $BUILD_DIR
#cp -R $BUILD_DIR/api/GL include
#cp -R $BUILD_DIR/api/GLES include
#cp -R $BUILD_DIR/api/GLES2 include
#cp -R $BUILD_DIR/api/GLES3 include
#cp -R $BUILD_DIR/xml/*.xml .
#rm -Rf $BUILD_DIR

# EGL
#BUILD_DIR=build/egl-registry
#git clone --depth=1 https://github.com/KhronosGroup/EGL-Registry.git $BUILD_DIR
#cp -R $BUILD_DIR/api/EGL include
#cp -R $BUILD_DIR/api/KHR include
#cp -R $BUILD_DIR/api/*.xml .
#rm -Rf $BUILD_DIR

# Generate headers/sources.
rm -Rf include/GL include/GLES include/GLES2 include/GLES3 include/EGL include/KHR
rm -f include/wrangle-*.h src/wrangle-*.cpp
dotnet run --project generator/wrangle-gl-generator.csproj --configuration Release --no-launch-profile

cmake --preset windows-vs-msvc-x64
cmake --build --preset windows-vs-msvc-x64-release
