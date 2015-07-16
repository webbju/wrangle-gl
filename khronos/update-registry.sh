#!/bin/sh

rm -Rf registry

mkdir -p registry/api/GL
mkdir -p registry/api/EGL
mkdir -p registry/api/KHR
mkdir -p registry/api/GLES
mkdir -p registry/api/GLES2
mkdir -p registry/api/GLES3

# https://www.opengl.org uses different permissions, and requires files to be requested explicitly.
wget -P registry/api/GL --mirror --no-parent --no-host-directories --cut-dirs=3 --no-check-certificate --accept=txt,spec,tm,h https://www.opengl.org/registry/api/GL/glext.h
wget -P registry/api/GL --mirror --no-parent --no-host-directories --cut-dirs=3 --no-check-certificate --accept=txt,spec,tm,h https://www.opengl.org/registry/api/GL/glcorearb.h
wget -P registry/api/GL --mirror --no-parent --no-host-directories --cut-dirs=3 --no-check-certificate --accept=txt,spec,tm,h https://www.opengl.org/registry/api/GL/glxext.h
wget -P registry/api/GL --mirror --no-parent --no-host-directories --cut-dirs=3 --no-check-certificate --accept=txt,spec,tm,h https://www.opengl.org/registry/api/GL/wglext.h

wget -P registry/api/EGL --mirror --no-parent --no-host-directories --cut-dirs=4 --no-check-certificate --accept=txt,spec,tm,h https://www.khronos.org/registry/egl/api/EGL/
wget -P registry/api/KHR --mirror --no-parent --no-host-directories --cut-dirs=4 --no-check-certificate --accept=txt,spec,tm,h https://www.khronos.org/registry/egl/api/KHR/
wget -P registry/api/GLES --mirror --no-parent --no-host-directories --cut-dirs=4 --no-check-certificate --accept=txt,spec,tm,h https://www.khronos.org/registry/gles/api/GLES/
wget -P registry/api/GLES2 --mirror --no-parent --no-host-directories --cut-dirs=4 --no-check-certificate --accept=txt,spec,tm,h https://www.khronos.org/registry/gles/api/GLES2/
wget -P registry/api/GLES3 --mirror --no-parent --no-host-directories --cut-dirs=4 --no-check-certificate --accept=txt,spec,tm,h https://www.khronos.org/registry/gles/api/GLES3/

#mkdir -p registry/extensions/GL
#mkdir -p registry/extensions/EGL
#mkdir -p registry/extensions/GLES

#wget -P registry/extensions/GL --mirror --no-parent --no-host-directories --cut-dirs=2 --no-check-certificate --accept=txt https://www.opengl.org/registry/specs/
#wget -P registry/extensions/EGL --mirror --no-parent --no-host-directories --cut-dirs=3 --no-check-certificate --accept=txt https://www.khronos.org/registry/egl/extensions/
#wget -P registry/extensions/GLES --mirror --no-parent --no-host-directories --cut-dirs=3 --no-check-certificate --accept=txt https://www.khronos.org/registry/gles/extensions/

find . -name "robots.txt" | xargs rm

mkdir -p ../include
cp -Rf --target-directory=../include/ registry/api/GL/
cp -Rf --target-directory=../include/ registry/api/EGL/
cp -Rf --target-directory=../include/ registry/api/KHR/
cp -Rf --target-directory=../include/ registry/api/GLES/
cp -Rf --target-directory=../include/ registry/api/GLES2/
cp -Rf --target-directory=../include/ registry/api/GLES3/