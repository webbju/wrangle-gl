#!/bin/sh

mkdir -p repository

rm -Rf repository/api/GL
rm -Rf repository/api/EGL
rm -Rf repository/api/GLES
rm -Rf repository/api/GLES2
rm -Rf repository/api/GLES3
rm -Rf repository/api

mkdir -p repository/api
mkdir -p repository/api/GL
mkdir -p repository/api/EGL
mkdir -p repository/api/GLES
mkdir -p repository/api/GLES2
mkdir -p repository/api/GLES3

wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/egl.xml
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/genheaders.py
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/gl.xml
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/glx.xml
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/readme.pdf
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/reg.py
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/registry.rnc
wget -P repository/api --no-parent --no-host-directories --cut-dirs=8 --no-check-certificate https://cvs.khronos.org/svn/repos/ogl/trunk/doc/registry/public/api/wgl.xml

# Don't attempt re-generating headers if python isn't installed.
if hash python 2>/dev/null; then
cd repository/api

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
fi
