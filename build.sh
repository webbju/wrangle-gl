#!/bin/bash
set -x

rm -Rf out

# Generate headers/sources.
rm -Rf include/GL include/GLES include/GLES2 include/GLES3 include/EGL include/KHR
rm -f include/wrangle-*.h src/wrangle-*.cpp src/wrangle-*.inl
dotnet run --project generator/wrangle-gl-generator.csproj --configuration Release --no-launch-profile

cmake --preset windows-vs-msvc-x64
cmake --build --preset windows-vs-msvc-x64-release --clean-first
