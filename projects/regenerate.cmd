@echo off

mkdir visual-studio-win32

mkdir visual-studio-win64

mkdir visual-studio-androidpp

cd visual-studio-win32

cmake ..\.. -G "Visual Studio 12" -A "Win32"

cd ..\visual-studio-win64

cmake ..\.. -G "Visual Studio 12" -A "x64"

cd ..\visual-studio-androidpp

cmake ..\.. -G "Visual Studio 12" -DCMAKE_TOOLCHAIN_FILE=..\cmake\visual-studio-androidpp.cmake

cd ..
