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

# Vulkan
git clone --depth=1 https://github.com/KhronosGroup/Vulkan-Headers.git vulkan-registry
cp -R vulkan-registry/include/vulkan include
cp -R vulkan-registry/registry/*.xml .
rm -Rf vulkan-registry

# Generate headers/sources.
rm -f include/wrangle-*.h
rm -f src/wrangle-*.cpp
pushd generator
dotnet build
popd
./generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator --api-spec ./egl.xml --api-type egl --output-dir .
./generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator --api-spec ./gl.xml --api-type gl --output-dir .
./generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator --api-spec ./gl.xml --api-type gles --output-dir .
./generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator --api-spec ./glx.xml --api-type glx --output-dir .
./generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator --api-spec ./vk.xml --api-type vulkan --output-dir .
./generator/bin/Debug/netcoreapp3.1/wrangle-gl-generator --api-spec ./wgl.xml --api-type wgl --output-dir .
cp ./wrangle-*.h include/
cp ./wrangle-*.cpp src/
rm -f ./wrangle-*.h ./wrangle-*.cpp ./*.xml

mkdir -p build/ninja
pushd build/ninja
CXX=clang++ CC=clang cmake ../.. -G "Ninja" -DCMAKE_BUILD_TYPE=Debug
cmake --build . --target tests
popd

#mkdir -p build/vstudio-win32
#pushd build/vstudio-win32
#cmake ../.. -G "Visual Studio 16 2019" -A "Win32"
#cmake --build . --target tests
#popd
