#!/bin/sh

rm -Rf api/EGL
rm -Rf api/GL
rm -Rf api/GLES
rm -Rf api/GLES2
rm -Rf api/GLES3
rm -Rf api

mkdir -p api
mkdir -p api/EGL
mkdir -p api/GL
mkdir -p api/GLES
mkdir -p api/GLES2
mkdir -p api/GLES3

wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/egl.xml
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/genheaders.py
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/glx.xml
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/readme.pdf
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/reg.py
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/registry.rnc
wget -P api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/wgl.xml

cd api

genheaders.py -registry gl.xml GL/glcorearb.h
genheaders.py -registry gl.xml GL/glext.h

genheaders.py -registry gl.xml GLES/gl.h
genheaders.py -registry gl.xml GLES/glext.h

genheaders.py -registry gl.xml GLES2/gl2.h
genheaders.py -registry gl.xml GLES2/gl2ext.h

genheaders.py -registry gl.xml GLES3/gl3.h
genheaders.py -registry gl.xml GLES3/gl31.h

genheaders.py -registry glx.xml GL/glx.h
genheaders.py -registry glx.xml GL/glxext.h

genheaders.py -registry wgl.xml GL/wgl.h
genheaders.py -registry wgl.xml GL/wglext.h

genheaders.py -registry egl.xml EGL/egl.h
genheaders.py -registry egl.xml EGL/eglext.h

cd ..