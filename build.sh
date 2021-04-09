#!/bin/bash
set -x

rm -Rf build include/GL include/GLES include/GLES2 include/GLES3 include/EGL include/KHR

# OpenGL and OpenGL-ES
git clone --depth=1 https://github.com/KhronosGroup/OpenGL-Registry.git opengl-registry
cp -R opengl-registry/api/GL include
cp -R opengl-registry/api/GLES include
cp -R opengl-registry/api/GLES2 include
cp -R opengl-registry/api/GLES3 include
cp -R opengl-registry/xml/*.xml .
rm -Rf opengl-registry

# EGL
git clone --depth=1 https://github.com/KhronosGroup/EGL-Registry.git egl-registry
cp -R egl-registry/api/EGL include
cp -R egl-registry/api/KHR include
cp -R egl-registry/api/*.xml .
rm -Rf egl-registry

# Generate wrangle-gl headers/sources.
rm -f include/wrangle-*.h
rm -f src/wrangle-*.cpp
pushd src/generator
dotnet build
popd
src/generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator.exe
cp ./wrangle-*.h include/
cp ./wrangle-*.cpp src/
rm -f ./wrangle-*.h ./wrangle-*.cpp ./*.xml

mkdir -p build/ninja
pushd build/ninja
cmake ../.. -G "Ninja" -DCMAKE_BUILD_TYPE=Debug
cmake --build . --target test-egl
popd

#mkdir -p build/vstudio-win32
#pushd build/vstudio-win32
#cmake .. -G "Visual Studio 16 2019" -A "Win32" -DCMAKE_BUILD_TYPE=Debug
#cmake --build . --target test-wgl
#popd
