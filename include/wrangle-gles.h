////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLES_H__
#define __GLEW_GLES_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined (_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#define _WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#define GL_APICALL WINGDIAPI
#define GL_APIENTRY WINAPI
#define GL_APIENTRYP WINAPI*
#ifdef _WIN32_LEAN_AND_MEAN
#undef WIN32_LEAN_AND_MEAN
#undef _WIN32_LEAN_AND_MEAN
#endif
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <wrangle.h>

#include <GLES3/gl31.h>

#include <GLES2/gl2ext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

extern "C" GL_APICALL void GL_APIENTRY glActiveTexture (GLenum texture);
extern "C" GL_APICALL void GL_APIENTRY glAttachShader (GLuint program, GLuint shader);
extern "C" GL_APICALL void GL_APIENTRY glBindAttribLocation (GLuint program, GLuint index, const GLchar * name);
extern "C" GL_APICALL void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
extern "C" GL_APICALL void GL_APIENTRY glBindFramebuffer (GLenum target, GLuint framebuffer);
extern "C" GL_APICALL void GL_APIENTRY glBindRenderbuffer (GLenum target, GLuint renderbuffer);
extern "C" GL_APICALL void GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
extern "C" GL_APICALL void GL_APIENTRY glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern "C" GL_APICALL void GL_APIENTRY glBlendEquation (GLenum mode);
extern "C" GL_APICALL void GL_APIENTRY glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
extern "C" GL_APICALL void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
extern "C" GL_APICALL void GL_APIENTRY glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
extern "C" GL_APICALL void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const void * data, GLenum usage);
extern "C" GL_APICALL void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
extern "C" GL_APICALL GLenum GL_APIENTRY glCheckFramebufferStatus (GLenum target);
extern "C" GL_APICALL void GL_APIENTRY glClear (GLbitfield mask);
extern "C" GL_APICALL void GL_APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern "C" GL_APICALL void GL_APIENTRY glClearDepthf (GLfloat d);
extern "C" GL_APICALL void GL_APIENTRY glClearStencil (GLint s);
extern "C" GL_APICALL void GL_APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern "C" GL_APICALL void GL_APIENTRY glCompileShader (GLuint shader);
extern "C" GL_APICALL void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
extern "C" GL_APICALL void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
extern "C" GL_APICALL void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern "C" GL_APICALL void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern "C" GL_APICALL GLuint GL_APIENTRY glCreateProgram ();
extern "C" GL_APICALL GLuint GL_APIENTRY glCreateShader (GLenum type);
extern "C" GL_APICALL void GL_APIENTRY glCullFace (GLenum mode);
extern "C" GL_APICALL void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint * buffers);
extern "C" GL_APICALL void GL_APIENTRY glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers);
extern "C" GL_APICALL void GL_APIENTRY glDeleteProgram (GLuint program);
extern "C" GL_APICALL void GL_APIENTRY glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers);
extern "C" GL_APICALL void GL_APIENTRY glDeleteShader (GLuint shader);
extern "C" GL_APICALL void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint * textures);
extern "C" GL_APICALL void GL_APIENTRY glDepthFunc (GLenum func);
extern "C" GL_APICALL void GL_APIENTRY glDepthMask (GLboolean flag);
extern "C" GL_APICALL void GL_APIENTRY glDepthRangef (GLfloat n, GLfloat f);
extern "C" GL_APICALL void GL_APIENTRY glDetachShader (GLuint program, GLuint shader);
extern "C" GL_APICALL void GL_APIENTRY glDisable (GLenum cap);
extern "C" GL_APICALL void GL_APIENTRY glDisableVertexAttribArray (GLuint index);
extern "C" GL_APICALL void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count);
extern "C" GL_APICALL void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const void * indices);
extern "C" GL_APICALL void GL_APIENTRY glEnable (GLenum cap);
extern "C" GL_APICALL void GL_APIENTRY glEnableVertexAttribArray (GLuint index);
extern "C" GL_APICALL void GL_APIENTRY glFinish ();
extern "C" GL_APICALL void GL_APIENTRY glFlush ();
extern "C" GL_APICALL void GL_APIENTRY glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern "C" GL_APICALL void GL_APIENTRY glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern "C" GL_APICALL void GL_APIENTRY glFrontFace (GLenum mode);
extern "C" GL_APICALL void GL_APIENTRY glGenBuffers (GLsizei n, GLuint * buffers);
extern "C" GL_APICALL void GL_APIENTRY glGenerateMipmap (GLenum target);
extern "C" GL_APICALL void GL_APIENTRY glGenFramebuffers (GLsizei n, GLuint * framebuffers);
extern "C" GL_APICALL void GL_APIENTRY glGenRenderbuffers (GLsizei n, GLuint * renderbuffers);
extern "C" GL_APICALL void GL_APIENTRY glGenTextures (GLsizei n, GLuint * textures);
extern "C" GL_APICALL void GL_APIENTRY glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
extern "C" GL_APICALL void GL_APIENTRY glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
extern "C" GL_APICALL void GL_APIENTRY glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
extern "C" GL_APICALL GLint GL_APIENTRY glGetAttribLocation (GLuint program, const GLchar * name);
extern "C" GL_APICALL void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean * data);
extern "C" GL_APICALL void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname, GLint * params);
extern "C" GL_APICALL GLenum GL_APIENTRY glGetError ();
extern "C" GL_APICALL void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat * data);
extern "C" GL_APICALL void GL_APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glGetIntegerv (GLenum pname, GLint * data);
extern "C" GL_APICALL void GL_APIENTRY glGetProgramiv (GLuint program, GLenum pname, GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
extern "C" GL_APICALL void GL_APIENTRY glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glGetShaderiv (GLuint shader, GLenum pname, GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
extern "C" GL_APICALL void GL_APIENTRY glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
extern "C" GL_APICALL void GL_APIENTRY glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
extern "C" GL_APICALL const GLubyte * GL_APIENTRY glGetString (GLenum name);
extern "C" GL_APICALL void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat * params);
extern "C" GL_APICALL void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glGetUniformfv (GLuint program, GLint location, GLfloat * params);
extern "C" GL_APICALL void GL_APIENTRY glGetUniformiv (GLuint program, GLint location, GLint * params);
extern "C" GL_APICALL GLint GL_APIENTRY glGetUniformLocation (GLuint program, const GLchar * name);
extern "C" GL_APICALL void GL_APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat * params);
extern "C" GL_APICALL void GL_APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname, GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum pname, void ** pointer);
extern "C" GL_APICALL void GL_APIENTRY glHint (GLenum target, GLenum mode);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsBuffer (GLuint buffer);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsEnabled (GLenum cap);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsFramebuffer (GLuint framebuffer);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsProgram (GLuint program);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsRenderbuffer (GLuint renderbuffer);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsShader (GLuint shader);
extern "C" GL_APICALL GLboolean GL_APIENTRY glIsTexture (GLuint texture);
extern "C" GL_APICALL void GL_APIENTRY glLineWidth (GLfloat width);
extern "C" GL_APICALL void GL_APIENTRY glLinkProgram (GLuint program);
extern "C" GL_APICALL void GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
extern "C" GL_APICALL void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
extern "C" GL_APICALL void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
extern "C" GL_APICALL void GL_APIENTRY glReleaseShaderCompiler ();
extern "C" GL_APICALL void GL_APIENTRY glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern "C" GL_APICALL void GL_APIENTRY glSampleCoverage (GLfloat value, GLboolean invert);
extern "C" GL_APICALL void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
extern "C" GL_APICALL void GL_APIENTRY glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
extern "C" GL_APICALL void GL_APIENTRY glShaderSource (GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
extern "C" GL_APICALL void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
extern "C" GL_APICALL void GL_APIENTRY glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
extern "C" GL_APICALL void GL_APIENTRY glStencilMask (GLuint mask);
extern "C" GL_APICALL void GL_APIENTRY glStencilMaskSeparate (GLenum face, GLuint mask);
extern "C" GL_APICALL void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
extern "C" GL_APICALL void GL_APIENTRY glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern "C" GL_APICALL void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
extern "C" GL_APICALL void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param);
extern "C" GL_APICALL void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat * params);
extern "C" GL_APICALL void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param);
extern "C" GL_APICALL void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint * params);
extern "C" GL_APICALL void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
extern "C" GL_APICALL void GL_APIENTRY glUniform1f (GLint location, GLfloat v0);
extern "C" GL_APICALL void GL_APIENTRY glUniform1fv (GLint location, GLsizei count, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform1i (GLint location, GLint v0);
extern "C" GL_APICALL void GL_APIENTRY glUniform1iv (GLint location, GLsizei count, const GLint * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform2f (GLint location, GLfloat v0, GLfloat v1);
extern "C" GL_APICALL void GL_APIENTRY glUniform2fv (GLint location, GLsizei count, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform2i (GLint location, GLint v0, GLint v1);
extern "C" GL_APICALL void GL_APIENTRY glUniform2iv (GLint location, GLsizei count, const GLint * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
extern "C" GL_APICALL void GL_APIENTRY glUniform3fv (GLint location, GLsizei count, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
extern "C" GL_APICALL void GL_APIENTRY glUniform3iv (GLint location, GLsizei count, const GLint * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
extern "C" GL_APICALL void GL_APIENTRY glUniform4fv (GLint location, GLsizei count, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
extern "C" GL_APICALL void GL_APIENTRY glUniform4iv (GLint location, GLsizei count, const GLint * value);
extern "C" GL_APICALL void GL_APIENTRY glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
extern "C" GL_APICALL void GL_APIENTRY glUseProgram (GLuint program);
extern "C" GL_APICALL void GL_APIENTRY glValidateProgram (GLuint program);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib1f (GLuint index, GLfloat x);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib1fv (GLuint index, const GLfloat * v);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib2fv (GLuint index, const GLfloat * v);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib3fv (GLuint index, const GLfloat * v);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttrib4fv (GLuint index, const GLfloat * v);
extern "C" GL_APICALL void GL_APIENTRY glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
extern "C" GL_APICALL void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLREADBUFFERPROC) /* glReadBuffer */ (GLenum src);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSPROC) /* glDrawRangeElements */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DPROC) /* glTexImage3D */ (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DPROC) /* glTexSubImage3D */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DPROC) /* glCopyTexSubImage3D */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DPROC) /* glCompressedTexImage3D */ (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) /* glCompressedTexSubImage3D */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLGENQUERIESPROC) /* glGenQueries */ (GLsizei n, GLuint * ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESPROC) /* glDeleteQueries */ (GLsizei n, const GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYPROC) /* glIsQuery */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYPROC) /* glBeginQuery */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYPROC) /* glEndQuery */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVPROC) /* glGetQueryiv */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVPROC) /* glGetQueryObjectuiv */ (GLuint id, GLenum pname, GLuint * params);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFERPROC) /* glUnmapBuffer */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVPROC) /* glGetBufferPointerv */ (GLenum target, GLenum pname, void ** params);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSPROC) /* glDrawBuffers */ (GLsizei n, const GLenum * bufs);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X3FVPROC) /* glUniformMatrix2x3fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X2FVPROC) /* glUniformMatrix3x2fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X4FVPROC) /* glUniformMatrix2x4fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X2FVPROC) /* glUniformMatrix4x2fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X4FVPROC) /* glUniformMatrix3x4fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X3FVPROC) /* glUniformMatrix4x3fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERPROC) /* glBlitFramebuffer */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) /* glRenderbufferStorageMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) /* glFramebufferTextureLayer */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void * (GL_APIENTRYP PFNGLMAPBUFFERRANGEPROC) /* glMapBufferRange */ (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) /* glFlushMappedBufferRange */ (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYPROC) /* glBindVertexArray */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) /* glDeleteVertexArrays */ (GLsizei n, const GLuint * arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSPROC) /* glGenVertexArrays */ (GLsizei n, GLuint * arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYPROC) /* glIsVertexArray */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLGETINTEGERI_VPROC) /* glGetIntegeri_v */ (GLenum target, GLuint index, GLint * data);
typedef void (GL_APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKPROC) /* glBeginTransformFeedback */ (GLenum primitiveMode);
typedef void (GL_APIENTRYP PFNGLENDTRANSFORMFEEDBACKPROC) /* glEndTransformFeedback */ ();
typedef void (GL_APIENTRYP PFNGLBINDBUFFERRANGEPROC) /* glBindBufferRange */ (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLBINDBUFFERBASEPROC) /* glBindBufferBase */ (GLenum target, GLuint index, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSPROC) /* glTransformFeedbackVaryings */ (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
typedef void (GL_APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) /* glGetTransformFeedbackVarying */ (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBIPOINTERPROC) /* glVertexAttribIPointer */ (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GL_APIENTRYP PFNGLGETVERTEXATTRIBIIVPROC) /* glGetVertexAttribIiv */ (GLuint index, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETVERTEXATTRIBIUIVPROC) /* glGetVertexAttribIuiv */ (GLuint index, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4IPROC) /* glVertexAttribI4i */ (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4UIPROC) /* glVertexAttribI4ui */ (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4IVPROC) /* glVertexAttribI4iv */ (GLuint index, const GLint * v);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4UIVPROC) /* glVertexAttribI4uiv */ (GLuint index, const GLuint * v);
typedef void (GL_APIENTRYP PFNGLGETUNIFORMUIVPROC) /* glGetUniformuiv */ (GLuint program, GLint location, GLuint * params);
typedef GLint (GL_APIENTRYP PFNGLGETFRAGDATALOCATIONPROC) /* glGetFragDataLocation */ (GLuint program, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UIPROC) /* glUniform1ui */ (GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UIPROC) /* glUniform2ui */ (GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UIPROC) /* glUniform3ui */ (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UIPROC) /* glUniform4ui */ (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UIVPROC) /* glUniform1uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UIVPROC) /* glUniform2uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UIVPROC) /* glUniform3uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UIVPROC) /* glUniform4uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERIVPROC) /* glClearBufferiv */ (GLenum buffer, GLint drawbuffer, const GLint * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERUIVPROC) /* glClearBufferuiv */ (GLenum buffer, GLint drawbuffer, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERFVPROC) /* glClearBufferfv */ (GLenum buffer, GLint drawbuffer, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERFIPROC) /* glClearBufferfi */ (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte * (GL_APIENTRYP PFNGLGETSTRINGIPROC) /* glGetStringi */ (GLenum name, GLuint index);
typedef void (GL_APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) /* glCopyBufferSubData */ (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLGETUNIFORMINDICESPROC) /* glGetUniformIndices */ (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
typedef void (GL_APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) /* glGetActiveUniformsiv */ (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
typedef GLuint (GL_APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) /* glGetUniformBlockIndex */ (GLuint program, const GLchar * uniformBlockName);
typedef void (GL_APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) /* glGetActiveUniformBlockiv */ (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) /* glGetActiveUniformBlockName */ (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
typedef void (GL_APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) /* glUniformBlockBinding */ (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDPROC) /* glDrawArraysInstanced */ (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDPROC) /* glDrawElementsInstanced */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCPROC) /* glFenceSync */ (GLenum condition, GLbitfield flags);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCPROC) /* glIsSync */ (GLsync sync);
typedef void (GL_APIENTRYP PFNGLDELETESYNCPROC) /* glDeleteSync */ (GLsync sync);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCPROC) /* glClientWaitSync */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLWAITSYNCPROC) /* glWaitSync */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VPROC) /* glGetInteger64v */ (GLenum pname, GLint64 * data);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVPROC) /* glGetSynciv */ (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64I_VPROC) /* glGetInteger64i_v */ (GLenum target, GLuint index, GLint64 * data);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPARAMETERI64VPROC) /* glGetBufferParameteri64v */ (GLenum target, GLenum pname, GLint64 * params);
typedef void (GL_APIENTRYP PFNGLGENSAMPLERSPROC) /* glGenSamplers */ (GLsizei count, GLuint * samplers);
typedef void (GL_APIENTRYP PFNGLDELETESAMPLERSPROC) /* glDeleteSamplers */ (GLsizei count, const GLuint * samplers);
typedef GLboolean (GL_APIENTRYP PFNGLISSAMPLERPROC) /* glIsSampler */ (GLuint sampler);
typedef void (GL_APIENTRYP PFNGLBINDSAMPLERPROC) /* glBindSampler */ (GLuint unit, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIPROC) /* glSamplerParameteri */ (GLuint sampler, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) /* glSamplerParameteriv */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERFPROC) /* glSamplerParameterf */ (GLuint sampler, GLenum pname, GLfloat param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) /* glSamplerParameterfv */ (GLuint sampler, GLenum pname, const GLfloat * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) /* glGetSamplerParameteriv */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) /* glGetSamplerParameterfv */ (GLuint sampler, GLenum pname, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORPROC) /* glVertexAttribDivisor */ (GLuint index, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) /* glBindTransformFeedback */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) /* glDeleteTransformFeedbacks */ (GLsizei n, const GLuint * ids);
typedef void (GL_APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) /* glGenTransformFeedbacks */ (GLsizei n, GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) /* glIsTransformFeedback */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) /* glPauseTransformFeedback */ ();
typedef void (GL_APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) /* glResumeTransformFeedback */ ();
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYPROC) /* glGetProgramBinary */ (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYPROC) /* glProgramBinary */ (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
typedef void (GL_APIENTRYP PFNGLPROGRAMPARAMETERIPROC) /* glProgramParameteri */ (GLuint program, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLINVALIDATEFRAMEBUFFERPROC) /* glInvalidateFramebuffer */ (GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (GL_APIENTRYP PFNGLINVALIDATESUBFRAMEBUFFERPROC) /* glInvalidateSubFramebuffer */ (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DPROC) /* glTexStorage2D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DPROC) /* glTexStorage3D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLGETINTERNALFORMATIVPROC) /* glGetInternalformativ */ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLDISPATCHCOMPUTEPROC) /* glDispatchCompute */ (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (GL_APIENTRYP PFNGLDISPATCHCOMPUTEINDIRECTPROC) /* glDispatchComputeIndirect */ (GLintptr indirect);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) /* glDrawArraysIndirect */ (GLenum mode, const void * indirect);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) /* glDrawElementsIndirect */ (GLenum mode, GLenum type, const void * indirect);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPARAMETERIPROC) /* glFramebufferParameteri */ (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVPROC) /* glGetFramebufferParameteriv */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMINTERFACEIVPROC) /* glGetProgramInterfaceiv */ (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
typedef GLuint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEINDEXPROC) /* glGetProgramResourceIndex */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCENAMEPROC) /* glGetProgramResourceName */ (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEIVPROC) /* glGetProgramResourceiv */ (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
typedef GLint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONPROC) /* glGetProgramResourceLocation */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) /* glUseProgramStages */ (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GL_APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) /* glActiveShaderProgram */ (GLuint pipeline, GLuint program);
typedef GLuint (GL_APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) /* glCreateShaderProgramv */ (GLenum type, GLsizei count, const GLchar *const* strings);
typedef void (GL_APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) /* glBindProgramPipeline */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) /* glDeleteProgramPipelines */ (GLsizei n, const GLuint * pipelines);
typedef void (GL_APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) /* glGenProgramPipelines */ (GLsizei n, GLuint * pipelines);
typedef GLboolean (GL_APIENTRYP PFNGLISPROGRAMPIPELINEPROC) /* glIsProgramPipeline */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) /* glGetProgramPipelineiv */ (GLuint pipeline, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) /* glProgramUniform1i */ (GLuint program, GLint location, GLint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) /* glProgramUniform2i */ (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) /* glProgramUniform3i */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) /* glProgramUniform4i */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) /* glProgramUniform1ui */ (GLuint program, GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) /* glProgramUniform2ui */ (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) /* glProgramUniform3ui */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) /* glProgramUniform4ui */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) /* glProgramUniform1f */ (GLuint program, GLint location, GLfloat v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) /* glProgramUniform2f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) /* glProgramUniform3f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) /* glProgramUniform4f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) /* glProgramUniform1iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) /* glProgramUniform2iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) /* glProgramUniform3iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) /* glProgramUniform4iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) /* glProgramUniform1uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) /* glProgramUniform2uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) /* glProgramUniform3uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) /* glProgramUniform4uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) /* glProgramUniform1fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) /* glProgramUniform2fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) /* glProgramUniform3fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) /* glProgramUniform4fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) /* glProgramUniformMatrix2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) /* glProgramUniformMatrix3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) /* glProgramUniformMatrix4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) /* glProgramUniformMatrix2x3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) /* glProgramUniformMatrix3x2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) /* glProgramUniformMatrix2x4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) /* glProgramUniformMatrix4x2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) /* glProgramUniformMatrix3x4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) /* glProgramUniformMatrix4x3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) /* glValidateProgramPipeline */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) /* glGetProgramPipelineInfoLog */ (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GL_APIENTRYP PFNGLBINDIMAGETEXTUREPROC) /* glBindImageTexture */ (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (GL_APIENTRYP PFNGLGETBOOLEANI_VPROC) /* glGetBooleani_v */ (GLenum target, GLuint index, GLboolean * data);
typedef void (GL_APIENTRYP PFNGLMEMORYBARRIERPROC) /* glMemoryBarrier */ (GLbitfield barriers);
typedef void (GL_APIENTRYP PFNGLMEMORYBARRIERBYREGIONPROC) /* glMemoryBarrierByRegion */ (GLbitfield barriers);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DMULTISAMPLEPROC) /* glTexStorage2DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLGETMULTISAMPLEFVPROC) /* glGetMultisamplefv */ (GLenum pname, GLuint index, GLfloat * val);
typedef void (GL_APIENTRYP PFNGLSAMPLEMASKIPROC) /* glSampleMaski */ (GLuint maskNumber, GLbitfield mask);
typedef void (GL_APIENTRYP PFNGLGETTEXLEVELPARAMETERIVPROC) /* glGetTexLevelParameteriv */ (GLenum target, GLint level, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXLEVELPARAMETERFVPROC) /* glGetTexLevelParameterfv */ (GLenum target, GLint level, GLenum pname, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLBINDVERTEXBUFFERPROC) /* glBindVertexBuffer */ (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBFORMATPROC) /* glVertexAttribFormat */ (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBIFORMATPROC) /* glVertexAttribIFormat */ (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBBINDINGPROC) /* glVertexAttribBinding */ (GLuint attribindex, GLuint bindingindex);
typedef void (GL_APIENTRYP PFNGLVERTEXBINDINGDIVISORPROC) /* glVertexBindingDivisor */ (GLuint bindingindex, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) /* glGetPerfMonitorGroupsAMD */ (GLint * numGroups, GLsizei groupsSize, GLuint * groups);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) /* glGetPerfMonitorCountersAMD */ (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) /* glGetPerfMonitorGroupStringAMD */ (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) /* glGetPerfMonitorCounterStringAMD */ (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) /* glGetPerfMonitorCounterInfoAMD */ (GLuint group, GLuint counter, GLenum pname, void * data);
typedef void (GL_APIENTRYP PFNGLGENPERFMONITORSAMDPROC) /* glGenPerfMonitorsAMD */ (GLsizei n, GLuint * monitors);
typedef void (GL_APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) /* glDeletePerfMonitorsAMD */ (GLsizei n, GLuint * monitors);
typedef void (GL_APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) /* glSelectPerfMonitorCountersAMD */ (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList);
typedef void (GL_APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) /* glBeginPerfMonitorAMD */ (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLENDPERFMONITORAMDPROC) /* glEndPerfMonitorAMD */ (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) /* glGetPerfMonitorCounterDataAMD */ (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERANGLEPROC) /* glBlitFramebufferANGLE */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) /* glRenderbufferStorageMultisampleANGLE */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDANGLEPROC) /* glDrawArraysInstancedANGLE */ (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) /* glDrawElementsInstancedANGLE */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORANGLEPROC) /* glVertexAttribDivisorANGLE */ (GLuint index, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) /* glGetTranslatedShaderSourceANGLE */ (GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source);
typedef void (GL_APIENTRYP PFNGLCOPYTEXTURELEVELSAPPLEPROC) /* glCopyTextureLevelsAPPLE */ (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) /* glRenderbufferStorageMultisampleAPPLE */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) /* glResolveMultisampleFramebufferAPPLE */ ();
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCAPPLEPROC) /* glFenceSyncAPPLE */ (GLenum condition, GLbitfield flags);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCAPPLEPROC) /* glIsSyncAPPLE */ (GLsync sync);
typedef void (GL_APIENTRYP PFNGLDELETESYNCAPPLEPROC) /* glDeleteSyncAPPLE */ (GLsync sync);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCAPPLEPROC) /* glClientWaitSyncAPPLE */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLWAITSYNCAPPLEPROC) /* glWaitSyncAPPLE */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VAPPLEPROC) /* glGetInteger64vAPPLE */ (GLenum pname, GLint64 * params);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVAPPLEPROC) /* glGetSyncivAPPLE */ (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) /* glDrawArraysInstancedBaseInstanceEXT */ (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) /* glDrawElementsInstancedBaseInstanceEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) /* glDrawElementsInstancedBaseVertexBaseInstanceEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTPROC) /* glBufferStorageEXT */ (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAEXTPROC) /* glCopyImageSubDataEXT */ (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRYP PFNGLLABELOBJECTEXTPROC) /* glLabelObjectEXT */ (GLenum type, GLuint object, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELEXTPROC) /* glGetObjectLabelEXT */ (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) /* glInsertEventMarkerEXT */ (GLsizei length, const GLchar * marker);
typedef void (GL_APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) /* glPushGroupMarkerEXT */ (GLsizei length, const GLchar * marker);
typedef void (GL_APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) /* glPopGroupMarkerEXT */ ();
typedef void (GL_APIENTRYP PFNGLDISCARDFRAMEBUFFEREXTPROC) /* glDiscardFramebufferEXT */ (GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (GL_APIENTRYP PFNGLGENQUERIESEXTPROC) /* glGenQueriesEXT */ (GLsizei n, GLuint * ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESEXTPROC) /* glDeleteQueriesEXT */ (GLsizei n, const GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYEXTPROC) /* glIsQueryEXT */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYEXTPROC) /* glBeginQueryEXT */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYEXTPROC) /* glEndQueryEXT */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLQUERYCOUNTEREXTPROC) /* glQueryCounterEXT */ (GLuint id, GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVEXTPROC) /* glGetQueryivEXT */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTIVEXTPROC) /* glGetQueryObjectivEXT */ (GLuint id, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVEXTPROC) /* glGetQueryObjectuivEXT */ (GLuint id, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTI64VEXTPROC) /* glGetQueryObjecti64vEXT */ (GLuint id, GLenum pname, GLint64 * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUI64VEXTPROC) /* glGetQueryObjectui64vEXT */ (GLuint id, GLenum pname, GLuint64 * params);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSEXTPROC) /* glDrawBuffersEXT */ (GLsizei n, const GLenum * bufs);
typedef void (GL_APIENTRYP PFNGLENABLEIEXTPROC) /* glEnableiEXT */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIEXTPROC) /* glDisableiEXT */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIEXTPROC) /* glBlendEquationiEXT */ (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIEXTPROC) /* glBlendEquationSeparateiEXT */ (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIEXTPROC) /* glBlendFunciEXT */ (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIEXTPROC) /* glBlendFuncSeparateiEXT */ (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIEXTPROC) /* glColorMaskiEXT */ (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIEXTPROC) /* glIsEnablediEXT */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXEXTPROC) /* glDrawElementsBaseVertexEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) /* glDrawRangeElementsBaseVertexEXT */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) /* glDrawElementsInstancedBaseVertexEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) /* glMultiDrawElementsBaseVertexEXT */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) /* glDrawArraysInstancedEXT */ (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) /* glDrawElementsInstancedEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREEXTPROC) /* glFramebufferTextureEXT */ (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) /* glDrawArraysInstancedEXT */ (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) /* glDrawElementsInstancedEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISOREXTPROC) /* glVertexAttribDivisorEXT */ (GLuint index, GLuint divisor);
typedef void * (GL_APIENTRYP PFNGLMAPBUFFERRANGEEXTPROC) /* glMapBufferRangeEXT */ (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) /* glFlushMappedBufferRangeEXT */ (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) /* glMultiDrawArraysEXT */ (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) /* glMultiDrawElementsEXT */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC) /* glMultiDrawArraysIndirectEXT */ (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC) /* glMultiDrawElementsIndirectEXT */ (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) /* glRenderbufferStorageMultisampleEXT */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) /* glFramebufferTexture2DMultisampleEXT */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
typedef void (GL_APIENTRYP PFNGLREADBUFFERINDEXEDEXTPROC) /* glReadBufferIndexedEXT */ (GLenum src, GLint index);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSINDEXEDEXTPROC) /* glDrawBuffersIndexedEXT */ (GLint n, const GLenum * location, const GLint * indices);
typedef void (GL_APIENTRYP PFNGLGETINTEGERI_VEXTPROC) /* glGetIntegeri_vEXT */ (GLenum target, GLuint index, GLint * data);
typedef void (GL_APIENTRYP PFNGLGENQUERIESEXTPROC) /* glGenQueriesEXT */ (GLsizei n, GLuint * ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESEXTPROC) /* glDeleteQueriesEXT */ (GLsizei n, const GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYEXTPROC) /* glIsQueryEXT */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYEXTPROC) /* glBeginQueryEXT */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYEXTPROC) /* glEndQueryEXT */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVEXTPROC) /* glGetQueryivEXT */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVEXTPROC) /* glGetQueryObjectuivEXT */ (GLuint id, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXEXTPROC) /* glPrimitiveBoundingBoxEXT */ (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) /* glRasterSamplesEXT */ (GLuint samples, GLboolean fixedsamplelocations);
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSEXTPROC) /* glGetGraphicsResetStatusEXT */ ();
typedef void (GL_APIENTRYP PFNGLREADNPIXELSEXTPROC) /* glReadnPixelsEXT */ (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVEXTPROC) /* glGetnUniformfvEXT */ (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVEXTPROC) /* glGetnUniformivEXT */ (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLACTIVESHADERPROGRAMEXTPROC) /* glActiveShaderProgramEXT */ (GLuint pipeline, GLuint program);
typedef void (GL_APIENTRYP PFNGLBINDPROGRAMPIPELINEEXTPROC) /* glBindProgramPipelineEXT */ (GLuint pipeline);
typedef GLuint (GL_APIENTRYP PFNGLCREATESHADERPROGRAMVEXTPROC) /* glCreateShaderProgramvEXT */ (GLenum type, GLsizei count, const GLchar ** strings);
typedef void (GL_APIENTRYP PFNGLDELETEPROGRAMPIPELINESEXTPROC) /* glDeleteProgramPipelinesEXT */ (GLsizei n, const GLuint * pipelines);
typedef void (GL_APIENTRYP PFNGLGENPROGRAMPIPELINESEXTPROC) /* glGenProgramPipelinesEXT */ (GLsizei n, GLuint * pipelines);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC) /* glGetProgramPipelineInfoLogEXT */ (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEIVEXTPROC) /* glGetProgramPipelineivEXT */ (GLuint pipeline, GLenum pname, GLint * params);
typedef GLboolean (GL_APIENTRYP PFNGLISPROGRAMPIPELINEEXTPROC) /* glIsProgramPipelineEXT */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLPROGRAMPARAMETERIEXTPROC) /* glProgramParameteriEXT */ (GLuint program, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) /* glProgramUniform1fEXT */ (GLuint program, GLint location, GLfloat v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) /* glProgramUniform1fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) /* glProgramUniform1iEXT */ (GLuint program, GLint location, GLint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) /* glProgramUniform1ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) /* glProgramUniform2fEXT */ (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) /* glProgramUniform2fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) /* glProgramUniform2iEXT */ (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) /* glProgramUniform2ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) /* glProgramUniform3fEXT */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) /* glProgramUniform3fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) /* glProgramUniform3iEXT */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) /* glProgramUniform3ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) /* glProgramUniform4fEXT */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) /* glProgramUniform4fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) /* glProgramUniform4iEXT */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) /* glProgramUniform4ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) /* glProgramUniformMatrix2fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) /* glProgramUniformMatrix3fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) /* glProgramUniformMatrix4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUSEPROGRAMSTAGESEXTPROC) /* glUseProgramStagesEXT */ (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GL_APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEEXTPROC) /* glValidateProgramPipelineEXT */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) /* glProgramUniform1uiEXT */ (GLuint program, GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) /* glProgramUniform2uiEXT */ (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) /* glProgramUniform3uiEXT */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) /* glProgramUniform4uiEXT */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) /* glProgramUniform1uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) /* glProgramUniform2uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) /* glProgramUniform3uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) /* glProgramUniform4uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) /* glProgramUniformMatrix4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) /* glProgramUniformMatrix2x3fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) /* glProgramUniformMatrix3x2fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) /* glProgramUniformMatrix2x4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) /* glProgramUniformMatrix4x2fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) /* glProgramUniformMatrix3x4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) /* glProgramUniformMatrix4x3fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLTEXPAGECOMMITMENTARBPROC) /* glTexPageCommitmentARB */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIEXTPROC) /* glPatchParameteriEXT */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVEXTPROC) /* glTexParameterIivEXT */ (GLenum target, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVEXTPROC) /* glTexParameterIuivEXT */ (GLenum target, GLenum pname, const GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVEXTPROC) /* glGetTexParameterIivEXT */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVEXTPROC) /* glGetTexParameterIuivEXT */ (GLenum target, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVEXTPROC) /* glSamplerParameterIivEXT */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVEXTPROC) /* glSamplerParameterIuivEXT */ (GLuint sampler, GLenum pname, const GLuint * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVEXTPROC) /* glGetSamplerParameterIivEXT */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVEXTPROC) /* glGetSamplerParameterIuivEXT */ (GLuint sampler, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLTEXBUFFEREXTPROC) /* glTexBufferEXT */ (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEEXTPROC) /* glTexBufferRangeEXT */ (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) /* glRasterSamplesEXT */ (GLuint samples, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE1DEXTPROC) /* glTexStorage1DEXT */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DEXTPROC) /* glTexStorage2DEXT */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DEXTPROC) /* glTexStorage3DEXT */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) /* glTextureStorage1DEXT */ (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) /* glTextureStorage2DEXT */ (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) /* glTextureStorage3DEXT */ (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWEXTPROC) /* glTextureViewEXT */ (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) /* glRenderbufferStorageMultisampleIMG */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) /* glFramebufferTexture2DMultisampleIMG */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
typedef void (GL_APIENTRYP PFNGLBEGINPERFQUERYINTELPROC) /* glBeginPerfQueryINTEL */ (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLCREATEPERFQUERYINTELPROC) /* glCreatePerfQueryINTEL */ (GLuint queryId, GLuint * queryHandle);
typedef void (GL_APIENTRYP PFNGLDELETEPERFQUERYINTELPROC) /* glDeletePerfQueryINTEL */ (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLENDPERFQUERYINTELPROC) /* glEndPerfQueryINTEL */ (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLGETFIRSTPERFQUERYIDINTELPROC) /* glGetFirstPerfQueryIdINTEL */ (GLuint * queryId);
typedef void (GL_APIENTRYP PFNGLGETNEXTPERFQUERYIDINTELPROC) /* glGetNextPerfQueryIdINTEL */ (GLuint queryId, GLuint * nextQueryId);
typedef void (GL_APIENTRYP PFNGLGETPERFCOUNTERINFOINTELPROC) /* glGetPerfCounterInfoINTEL */ (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYDATAINTELPROC) /* glGetPerfQueryDataINTEL */ (GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYIDBYNAMEINTELPROC) /* glGetPerfQueryIdByNameINTEL */ (GLchar * queryName, GLuint * queryId);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYINFOINTELPROC) /* glGetPerfQueryInfoINTEL */ (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERKHRPROC) /* glBlendBarrierKHR */ ();
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECONTROLKHRPROC) /* glDebugMessageControlKHR */ (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGEINSERTKHRPROC) /* glDebugMessageInsertKHR */ (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECALLBACKKHRPROC) /* glDebugMessageCallbackKHR */ (GLDEBUGPROCKHR callback, const void * userParam);
typedef GLuint (GL_APIENTRYP PFNGLGETDEBUGMESSAGELOGKHRPROC) /* glGetDebugMessageLogKHR */ (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef void (GL_APIENTRYP PFNGLPUSHDEBUGGROUPKHRPROC) /* glPushDebugGroupKHR */ (GLenum source, GLuint id, GLsizei length, const GLchar * message);
typedef void (GL_APIENTRYP PFNGLPOPDEBUGGROUPKHRPROC) /* glPopDebugGroupKHR */ ();
typedef void (GL_APIENTRYP PFNGLOBJECTLABELKHRPROC) /* glObjectLabelKHR */ (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELKHRPROC) /* glGetObjectLabelKHR */ (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLOBJECTPTRLABELKHRPROC) /* glObjectPtrLabelKHR */ (const void * ptr, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTPTRLABELKHRPROC) /* glGetObjectPtrLabelKHR */ (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETPOINTERVKHRPROC) /* glGetPointervKHR */ (GLenum pname, void ** params);
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSKHRPROC) /* glGetGraphicsResetStatusKHR */ ();
typedef void (GL_APIENTRYP PFNGLREADNPIXELSKHRPROC) /* glReadnPixelsKHR */ (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVKHRPROC) /* glGetnUniformfvKHR */ (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVKHRPROC) /* glGetnUniformivKHR */ (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMUIVKHRPROC) /* glGetnUniformuivKHR */ (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTUREHANDLENVPROC) /* glGetTextureHandleNV */ (GLuint texture);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTURESAMPLERHANDLENVPROC) /* glGetTextureSamplerHandleNV */ (GLuint texture, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) /* glMakeTextureHandleResidentNV */ (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) /* glMakeTextureHandleNonResidentNV */ (GLuint64 handle);
typedef GLuint64 (GL_APIENTRYP PFNGLGETIMAGEHANDLENVPROC) /* glGetImageHandleNV */ (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) /* glMakeImageHandleResidentNV */ (GLuint64 handle, GLenum access);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) /* glMakeImageHandleNonResidentNV */ (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64NVPROC) /* glUniformHandleui64NV */ (GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64VNVPROC) /* glUniformHandleui64vNV */ (GLint location, GLsizei count, const GLuint64 * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) /* glProgramUniformHandleui64NV */ (GLuint program, GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) /* glProgramUniformHandleui64vNV */ (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
typedef GLboolean (GL_APIENTRYP PFNGLISTEXTUREHANDLERESIDENTNVPROC) /* glIsTextureHandleResidentNV */ (GLuint64 handle);
typedef GLboolean (GL_APIENTRYP PFNGLISIMAGEHANDLERESIDENTNVPROC) /* glIsImageHandleResidentNV */ (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLBLENDPARAMETERINVPROC) /* glBlendParameteriNV */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERNVPROC) /* glBlendBarrierNV */ ();
typedef void (GL_APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) /* glBeginConditionalRenderNV */ (GLuint id, GLenum mode);
typedef void (GL_APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) /* glEndConditionalRenderNV */ ();
typedef void (GL_APIENTRYP PFNGLSUBPIXELPRECISIONBIASNVPROC) /* glSubpixelPrecisionBiasNV */ (GLuint xbits, GLuint ybits);
typedef void (GL_APIENTRYP PFNGLCOPYBUFFERSUBDATANVPROC) /* glCopyBufferSubDataNV */ (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMASKNVPROC) /* glCoverageMaskNV */ (GLboolean mask);
typedef void (GL_APIENTRYP PFNGLCOVERAGEOPERATIONNVPROC) /* glCoverageOperationNV */ (GLenum operation);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSNVPROC) /* glDrawBuffersNV */ (GLsizei n, const GLenum * bufs);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDNVPROC) /* glDrawArraysInstancedNV */ (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDNVPROC) /* glDrawElementsInstancedNV */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDELETEFENCESNVPROC) /* glDeleteFencesNV */ (GLsizei n, const GLuint * fences);
typedef void (GL_APIENTRYP PFNGLGENFENCESNVPROC) /* glGenFencesNV */ (GLsizei n, GLuint * fences);
typedef GLboolean (GL_APIENTRYP PFNGLISFENCENVPROC) /* glIsFenceNV */ (GLuint fence);
typedef GLboolean (GL_APIENTRYP PFNGLTESTFENCENVPROC) /* glTestFenceNV */ (GLuint fence);
typedef void (GL_APIENTRYP PFNGLGETFENCEIVNVPROC) /* glGetFenceivNV */ (GLuint fence, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLFINISHFENCENVPROC) /* glFinishFenceNV */ (GLuint fence);
typedef void (GL_APIENTRYP PFNGLSETFENCENVPROC) /* glSetFenceNV */ (GLuint fence, GLenum condition);
typedef void (GL_APIENTRYP PFNGLFRAGMENTCOVERAGECOLORNVPROC) /* glFragmentCoverageColorNV */ (GLuint color);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERNVPROC) /* glBlitFramebufferNV */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) /* glRasterSamplesEXT */ (GLuint samples, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONTABLENVPROC) /* glCoverageModulationTableNV */ (GLsizei n, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLGETCOVERAGEMODULATIONTABLENVPROC) /* glGetCoverageModulationTableNV */ (GLsizei bufsize, GLfloat * v);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONNVPROC) /* glCoverageModulationNV */ (GLenum components);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC) /* glRenderbufferStorageMultisampleNV */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORNVPROC) /* glVertexAttribDivisorNV */ (GLuint index, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) /* glGetInternalformatSampleivNV */ (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X3FVNVPROC) /* glUniformMatrix2x3fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X2FVNVPROC) /* glUniformMatrix3x2fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X4FVNVPROC) /* glUniformMatrix2x4fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X2FVNVPROC) /* glUniformMatrix4x2fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X4FVNVPROC) /* glUniformMatrix3x4fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X3FVNVPROC) /* glUniformMatrix4x3fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef GLuint (GL_APIENTRYP PFNGLGENPATHSNVPROC) /* glGenPathsNV */ (GLsizei range);
typedef void (GL_APIENTRYP PFNGLDELETEPATHSNVPROC) /* glDeletePathsNV */ (GLuint path, GLsizei range);
typedef GLboolean (GL_APIENTRYP PFNGLISPATHNVPROC) /* glIsPathNV */ (GLuint path);
typedef void (GL_APIENTRYP PFNGLPATHCOMMANDSNVPROC) /* glPathCommandsNV */ (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHCOORDSNVPROC) /* glPathCoordsNV */ (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOMMANDSNVPROC) /* glPathSubCommandsNV */ (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOORDSNVPROC) /* glPathSubCoordsNV */ (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHSTRINGNVPROC) /* glPathStringNV */ (GLuint path, GLenum format, GLsizei length, const void * pathString);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHSNVPROC) /* glPathGlyphsNV */ (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHRANGENVPROC) /* glPathGlyphRangeNV */ (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLWEIGHTPATHSNVPROC) /* glWeightPathsNV */ (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights);
typedef void (GL_APIENTRYP PFNGLCOPYPATHNVPROC) /* glCopyPathNV */ (GLuint resultPath, GLuint srcPath);
typedef void (GL_APIENTRYP PFNGLINTERPOLATEPATHSNVPROC) /* glInterpolatePathsNV */ (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
typedef void (GL_APIENTRYP PFNGLTRANSFORMPATHNVPROC) /* glTransformPathNV */ (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERIVNVPROC) /* glPathParameterivNV */ (GLuint path, GLenum pname, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERINVPROC) /* glPathParameteriNV */ (GLuint path, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFVNVPROC) /* glPathParameterfvNV */ (GLuint path, GLenum pname, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFNVPROC) /* glPathParameterfNV */ (GLuint path, GLenum pname, GLfloat value);
typedef void (GL_APIENTRYP PFNGLPATHDASHARRAYNVPROC) /* glPathDashArrayNV */ (GLuint path, GLsizei dashCount, const GLfloat * dashArray);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILFUNCNVPROC) /* glPathStencilFuncNV */ (GLenum func, GLint ref, GLuint mask);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILDEPTHOFFSETNVPROC) /* glPathStencilDepthOffsetNV */ (GLfloat factor, GLfloat units);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHNVPROC) /* glStencilFillPathNV */ (GLuint path, GLenum fillMode, GLuint mask);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHNVPROC) /* glStencilStrokePathNV */ (GLuint path, GLint reference, GLuint mask);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHINSTANCEDNVPROC) /* glStencilFillPathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) /* glStencilStrokePathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLPATHCOVERDEPTHFUNCNVPROC) /* glPathCoverDepthFuncNV */ (GLenum func);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHNVPROC) /* glCoverFillPathNV */ (GLuint path, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHNVPROC) /* glCoverStrokePathNV */ (GLuint path, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHINSTANCEDNVPROC) /* glCoverFillPathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) /* glCoverStrokePathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERIVNVPROC) /* glGetPathParameterivNV */ (GLuint path, GLenum pname, GLint * value);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERFVNVPROC) /* glGetPathParameterfvNV */ (GLuint path, GLenum pname, GLfloat * value);
typedef void (GL_APIENTRYP PFNGLGETPATHCOMMANDSNVPROC) /* glGetPathCommandsNV */ (GLuint path, GLubyte * commands);
typedef void (GL_APIENTRYP PFNGLGETPATHCOORDSNVPROC) /* glGetPathCoordsNV */ (GLuint path, GLfloat * coords);
typedef void (GL_APIENTRYP PFNGLGETPATHDASHARRAYNVPROC) /* glGetPathDashArrayNV */ (GLuint path, GLfloat * dashArray);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICSNVPROC) /* glGetPathMetricsNV */ (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICRANGENVPROC) /* glGetPathMetricRangeNV */ (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics);
typedef void (GL_APIENTRYP PFNGLGETPATHSPACINGNVPROC) /* glGetPathSpacingNV */ (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINFILLPATHNVPROC) /* glIsPointInFillPathNV */ (GLuint path, GLuint mask, GLfloat x, GLfloat y);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINSTROKEPATHNVPROC) /* glIsPointInStrokePathNV */ (GLuint path, GLfloat x, GLfloat y);
typedef GLfloat (GL_APIENTRYP PFNGLGETPATHLENGTHNVPROC) /* glGetPathLengthNV */ (GLuint path, GLsizei startSegment, GLsizei numSegments);
typedef GLboolean (GL_APIENTRYP PFNGLPOINTALONGPATHNVPROC) /* glPointAlongPathNV */ (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X2FNVPROC) /* glMatrixLoad3x2fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X3FNVPROC) /* glMatrixLoad3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) /* glMatrixLoadTranspose3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X2FNVPROC) /* glMatrixMult3x2fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X3FNVPROC) /* glMatrixMult3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) /* glMatrixMultTranspose3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHNVPROC) /* glStencilThenCoverFillPathNV */ (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) /* glStencilThenCoverStrokePathNV */ (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) /* glStencilThenCoverFillPathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) /* glStencilThenCoverStrokePathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXRANGENVPROC) /* glPathGlyphIndexRangeNV */ (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXARRAYNVPROC) /* glPathGlyphIndexArrayNV */ (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef GLenum (GL_APIENTRYP PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) /* glPathMemoryGlyphIndexArrayNV */ (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) /* glProgramPathFragmentInputGenNV */ (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEFVNVPROC) /* glGetProgramResourcefvNV */ (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLPOLYGONMODENVPROC) /* glPolygonModeNV */ (GLenum face, GLenum mode);
typedef void (GL_APIENTRYP PFNGLREADBUFFERNVPROC) /* glReadBufferNV */ (GLenum mode);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) /* glFramebufferSampleLocationsfvNV */ (GLenum target, GLuint start, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) /* glNamedFramebufferSampleLocationsfvNV */ (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLRESOLVEDEPTHVALUESNVPROC) /* glResolveDepthValuesNV */ ();
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVNVPROC) /* glViewportArrayvNV */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFNVPROC) /* glViewportIndexedfNV */ (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVNVPROC) /* glViewportIndexedfvNV */ (GLuint index, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVNVPROC) /* glScissorArrayvNV */ (GLuint first, GLsizei count, const GLint * v);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDNVPROC) /* glScissorIndexedNV */ (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVNVPROC) /* glScissorIndexedvNV */ (GLuint index, const GLint * v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVNVPROC) /* glDepthRangeArrayfvNV */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFNVPROC) /* glDepthRangeIndexedfNV */ (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VNVPROC) /* glGetFloati_vNV */ (GLenum target, GLuint index, GLfloat * data);
typedef void (GL_APIENTRYP PFNGLENABLEINVPROC) /* glEnableiNV */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEINVPROC) /* glDisableiNV */ (GLenum target, GLuint index);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDINVPROC) /* glIsEnablediNV */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) /* glEGLImageTargetTexture2DOES */ (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) /* glEGLImageTargetRenderbufferStorageOES */ (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAOESPROC) /* glCopyImageSubDataOES */ (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRYP PFNGLENABLEIOESPROC) /* glEnableiOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIOESPROC) /* glDisableiOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIOESPROC) /* glBlendEquationiOES */ (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIOESPROC) /* glBlendEquationSeparateiOES */ (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIOESPROC) /* glBlendFunciOES */ (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIOESPROC) /* glBlendFuncSeparateiOES */ (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIOESPROC) /* glColorMaskiOES */ (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIOESPROC) /* glIsEnablediOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXOESPROC) /* glDrawElementsBaseVertexOES */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) /* glDrawRangeElementsBaseVertexOES */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) /* glDrawElementsInstancedBaseVertexOES */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC) /* glMultiDrawElementsBaseVertexOES */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREOESPROC) /* glFramebufferTextureOES */ (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYOESPROC) /* glGetProgramBinaryOES */ (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYOESPROC) /* glProgramBinaryOES */ (GLuint program, GLenum binaryFormat, const void * binary, GLint length);
typedef void * (GL_APIENTRYP PFNGLMAPBUFFEROESPROC) /* glMapBufferOES */ (GLenum target, GLenum access);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFEROESPROC) /* glUnmapBufferOES */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVOESPROC) /* glGetBufferPointervOES */ (GLenum target, GLenum pname, void ** params);
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXOESPROC) /* glPrimitiveBoundingBoxOES */ (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GL_APIENTRYP PFNGLMINSAMPLESHADINGOESPROC) /* glMinSampleShadingOES */ (GLfloat value);
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIOESPROC) /* glPatchParameteriOES */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DOESPROC) /* glTexImage3DOES */ (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DOESPROC) /* glTexSubImage3DOES */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DOESPROC) /* glCopyTexSubImage3DOES */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) /* glCompressedTexImage3DOES */ (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) /* glCompressedTexSubImage3DOES */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DOESPROC) /* glFramebufferTexture3DOES */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVOESPROC) /* glTexParameterIivOES */ (GLenum target, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVOESPROC) /* glTexParameterIuivOES */ (GLenum target, GLenum pname, const GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVOESPROC) /* glGetTexParameterIivOES */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVOESPROC) /* glGetTexParameterIuivOES */ (GLenum target, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVOESPROC) /* glSamplerParameterIivOES */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVOESPROC) /* glSamplerParameterIuivOES */ (GLuint sampler, GLenum pname, const GLuint * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVOESPROC) /* glGetSamplerParameterIivOES */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVOESPROC) /* glGetSamplerParameterIuivOES */ (GLuint sampler, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLTEXBUFFEROESPROC) /* glTexBufferOES */ (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEOESPROC) /* glTexBufferRangeOES */ (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) /* glTexStorage3DMultisampleOES */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWOESPROC) /* glTextureViewOES */ (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYOESPROC) /* glBindVertexArrayOES */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSOESPROC) /* glDeleteVertexArraysOES */ (GLsizei n, const GLuint * arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSOESPROC) /* glGenVertexArraysOES */ (GLsizei n, GLuint * arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYOESPROC) /* glIsVertexArrayOES */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) /* glFramebufferTextureMultiviewOVR */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
typedef void (GL_APIENTRYP PFNGLALPHAFUNCQCOMPROC) /* glAlphaFuncQCOM */ (GLenum func, GLclampf ref);
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSQCOMPROC) /* glGetDriverControlsQCOM */ (GLint * num, GLsizei size, GLuint * driverControls);
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSTRINGQCOMPROC) /* glGetDriverControlStringQCOM */ (GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString);
typedef void (GL_APIENTRYP PFNGLENABLEDRIVERCONTROLQCOMPROC) /* glEnableDriverControlQCOM */ (GLuint driverControl);
typedef void (GL_APIENTRYP PFNGLDISABLEDRIVERCONTROLQCOMPROC) /* glDisableDriverControlQCOM */ (GLuint driverControl);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXTURESQCOMPROC) /* glExtGetTexturesQCOM */ (GLuint * textures, GLint maxTextures, GLint * numTextures);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERSQCOMPROC) /* glExtGetBuffersQCOM */ (GLuint * buffers, GLint maxBuffers, GLint * numBuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETRENDERBUFFERSQCOMPROC) /* glExtGetRenderbuffersQCOM */ (GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETFRAMEBUFFERSQCOMPROC) /* glExtGetFramebuffersQCOM */ (GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC) /* glExtGetTexLevelParameterivQCOM */ (GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC) /* glExtTexObjectStateOverrideiQCOM */ (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXSUBIMAGEQCOMPROC) /* glExtGetTexSubImageQCOM */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERPOINTERVQCOMPROC) /* glExtGetBufferPointervQCOM */ (GLenum target, void ** params);
typedef void (GL_APIENTRYP PFNGLEXTGETSHADERSQCOMPROC) /* glExtGetShadersQCOM */ (GLuint * shaders, GLint maxShaders, GLint * numShaders);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMSQCOMPROC) /* glExtGetProgramsQCOM */ (GLuint * programs, GLint maxPrograms, GLint * numPrograms);
typedef GLboolean (GL_APIENTRYP PFNGLEXTISPROGRAMBINARYQCOMPROC) /* glExtIsProgramBinaryQCOM */ (GLuint program);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC) /* glExtGetProgramBinarySourceQCOM */ (GLuint program, GLenum shadertype, GLchar * source, GLint * length);
typedef void (GL_APIENTRYP PFNGLSTARTTILINGQCOMPROC) /* glStartTilingQCOM */ (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
typedef void (GL_APIENTRYP PFNGLENDTILINGQCOMPROC) /* glEndTilingQCOM */ (GLbitfield preserveMask);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{
  class gles
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    enum FeatureSet
    {
      GLEW_GL_ES_VERSION_2_0,
      GLEW_GL_ES_VERSION_3_0,
      GLEW_GL_ES_VERSION_3_1,
      GLEW_GL_AMD_compressed_3DC_texture,
      GLEW_GL_AMD_compressed_ATC_texture,
      GLEW_GL_AMD_performance_monitor,
      GLEW_GL_AMD_program_binary_Z400,
      GLEW_GL_ANDROID_extension_pack_es31a,
      GLEW_GL_ANGLE_depth_texture,
      GLEW_GL_ANGLE_framebuffer_blit,
      GLEW_GL_ANGLE_framebuffer_multisample,
      GLEW_GL_ANGLE_instanced_arrays,
      GLEW_GL_ANGLE_pack_reverse_row_order,
      GLEW_GL_ANGLE_program_binary,
      GLEW_GL_ANGLE_texture_compression_dxt3,
      GLEW_GL_ANGLE_texture_compression_dxt5,
      GLEW_GL_ANGLE_texture_usage,
      GLEW_GL_ANGLE_translated_shader_source,
      GLEW_GL_APPLE_clip_distance,
      GLEW_GL_APPLE_color_buffer_packed_float,
      GLEW_GL_APPLE_copy_texture_levels,
      GLEW_GL_APPLE_framebuffer_multisample,
      GLEW_GL_APPLE_rgb_422,
      GLEW_GL_APPLE_sync,
      GLEW_GL_APPLE_texture_format_BGRA8888,
      GLEW_GL_APPLE_texture_max_level,
      GLEW_GL_APPLE_texture_packed_float,
      GLEW_GL_ARM_mali_program_binary,
      GLEW_GL_ARM_mali_shader_binary,
      GLEW_GL_ARM_rgba8,
      GLEW_GL_ARM_shader_framebuffer_fetch,
      GLEW_GL_ARM_shader_framebuffer_fetch_depth_stencil,
      GLEW_GL_DMP_program_binary,
      GLEW_GL_DMP_shader_binary,
      GLEW_GL_EXT_base_instance,
      GLEW_GL_EXT_blend_minmax,
      GLEW_GL_EXT_buffer_storage,
      GLEW_GL_EXT_color_buffer_half_float,
      GLEW_GL_EXT_copy_image,
      GLEW_GL_EXT_debug_label,
      GLEW_GL_EXT_debug_marker,
      GLEW_GL_EXT_discard_framebuffer,
      GLEW_GL_EXT_disjoint_timer_query,
      GLEW_GL_EXT_draw_buffers,
      GLEW_GL_EXT_draw_buffers_indexed,
      GLEW_GL_EXT_draw_elements_base_vertex,
      GLEW_GL_EXT_draw_instanced,
      GLEW_GL_EXT_float_blend,
      GLEW_GL_EXT_geometry_point_size,
      GLEW_GL_EXT_geometry_shader,
      GLEW_GL_EXT_gpu_shader5,
      GLEW_GL_EXT_instanced_arrays,
      GLEW_GL_EXT_map_buffer_range,
      GLEW_GL_EXT_multi_draw_arrays,
      GLEW_GL_EXT_multi_draw_indirect,
      GLEW_GL_EXT_multisampled_render_to_texture,
      GLEW_GL_EXT_multiview_draw_buffers,
      GLEW_GL_EXT_occlusion_query_boolean,
      GLEW_GL_EXT_post_depth_coverage,
      GLEW_GL_EXT_primitive_bounding_box,
      GLEW_GL_EXT_pvrtc_sRGB,
      GLEW_GL_EXT_raster_multisample,
      GLEW_GL_EXT_read_format_bgra,
      GLEW_GL_EXT_render_snorm,
      GLEW_GL_EXT_robustness,
      GLEW_GL_EXT_sRGB,
      GLEW_GL_EXT_sRGB_write_control,
      GLEW_GL_EXT_separate_shader_objects,
      GLEW_GL_EXT_shader_framebuffer_fetch,
      GLEW_GL_EXT_shader_implicit_conversions,
      GLEW_GL_EXT_shader_integer_mix,
      GLEW_GL_EXT_shader_io_blocks,
      GLEW_GL_EXT_shader_pixel_local_storage,
      GLEW_GL_EXT_shader_texture_lod,
      GLEW_GL_EXT_shadow_samplers,
      GLEW_GL_EXT_sparse_texture,
      GLEW_GL_EXT_tessellation_point_size,
      GLEW_GL_EXT_tessellation_shader,
      GLEW_GL_EXT_texture_border_clamp,
      GLEW_GL_EXT_texture_buffer,
      GLEW_GL_EXT_texture_compression_dxt1,
      GLEW_GL_EXT_texture_compression_s3tc,
      GLEW_GL_EXT_texture_cube_map_array,
      GLEW_GL_EXT_texture_filter_anisotropic,
      GLEW_GL_EXT_texture_filter_minmax,
      GLEW_GL_EXT_texture_format_BGRA8888,
      GLEW_GL_EXT_texture_norm16,
      GLEW_GL_EXT_texture_rg,
      GLEW_GL_EXT_texture_sRGB_decode,
      GLEW_GL_EXT_texture_sRGB_R8,
      GLEW_GL_EXT_texture_sRGB_RG8,
      GLEW_GL_EXT_texture_storage,
      GLEW_GL_EXT_texture_type_2_10_10_10_REV,
      GLEW_GL_EXT_texture_view,
      GLEW_GL_EXT_unpack_subimage,
      GLEW_GL_EXT_YUV_target,
      GLEW_GL_FJ_shader_binary_GCCSO,
      GLEW_GL_IMG_multisampled_render_to_texture,
      GLEW_GL_IMG_program_binary,
      GLEW_GL_IMG_read_format,
      GLEW_GL_IMG_shader_binary,
      GLEW_GL_IMG_texture_compression_pvrtc,
      GLEW_GL_IMG_texture_compression_pvrtc2,
      GLEW_GL_INTEL_performance_query,
      GLEW_GL_KHR_blend_equation_advanced,
      GLEW_GL_KHR_blend_equation_advanced_coherent,
      GLEW_GL_KHR_context_flush_control,
      GLEW_GL_KHR_debug,
      GLEW_GL_KHR_no_error,
      GLEW_GL_KHR_robust_buffer_access_behavior,
      GLEW_GL_KHR_robustness,
      GLEW_GL_KHR_texture_compression_astc_hdr,
      GLEW_GL_KHR_texture_compression_astc_ldr,
      GLEW_GL_NV_bindless_texture,
      GLEW_GL_NV_blend_equation_advanced,
      GLEW_GL_NV_blend_equation_advanced_coherent,
      GLEW_GL_NV_conditional_render,
      GLEW_GL_NV_conservative_raster,
      GLEW_GL_NV_copy_buffer,
      GLEW_GL_NV_coverage_sample,
      GLEW_GL_NV_depth_nonlinear,
      GLEW_GL_NV_draw_buffers,
      GLEW_GL_NV_draw_instanced,
      GLEW_GL_NV_explicit_attrib_location,
      GLEW_GL_NV_fbo_color_attachments,
      GLEW_GL_NV_fence,
      GLEW_GL_NV_fill_rectangle,
      GLEW_GL_NV_fragment_coverage_to_color,
      GLEW_GL_NV_fragment_shader_interlock,
      GLEW_GL_NV_framebuffer_blit,
      GLEW_GL_NV_framebuffer_mixed_samples,
      GLEW_GL_NV_framebuffer_multisample,
      GLEW_GL_NV_generate_mipmap_sRGB,
      GLEW_GL_NV_geometry_shader_passthrough,
      GLEW_GL_NV_image_formats,
      GLEW_GL_NV_instanced_arrays,
      GLEW_GL_NV_internalformat_sample_query,
      GLEW_GL_NV_non_square_matrices,
      GLEW_GL_NV_path_rendering,
      GLEW_GL_NV_polygon_mode,
      GLEW_GL_NV_read_buffer,
      GLEW_GL_NV_read_buffer_front,
      GLEW_GL_NV_read_depth,
      GLEW_GL_NV_read_depth_stencil,
      GLEW_GL_NV_read_stencil,
      GLEW_GL_NV_path_rendering_shared_edge,
      GLEW_GL_NV_sRGB_formats,
      GLEW_GL_NV_sample_locations,
      GLEW_GL_NV_sample_mask_override_coverage,
      GLEW_GL_NV_shader_noperspective_interpolation,
      GLEW_GL_NV_shadow_samplers_array,
      GLEW_GL_NV_shadow_samplers_cube,
      GLEW_GL_NV_texture_border_clamp,
      GLEW_GL_NV_texture_compression_s3tc_update,
      GLEW_GL_NV_texture_npot_2D_mipmap,
      GLEW_GL_NV_viewport_array,
      GLEW_GL_NV_viewport_array2,
      GLEW_GL_OES_EGL_image,
      GLEW_GL_OES_EGL_image_external,
      GLEW_GL_OES_EGL_image_external_essl3,
      GLEW_GL_OES_compressed_ETC1_RGB8_sub_texture,
      GLEW_GL_OES_compressed_ETC1_RGB8_texture,
      GLEW_GL_OES_compressed_paletted_texture,
      GLEW_GL_OES_copy_image,
      GLEW_GL_OES_depth24,
      GLEW_GL_OES_depth32,
      GLEW_GL_OES_depth_texture,
      GLEW_GL_OES_draw_buffers_indexed,
      GLEW_GL_OES_draw_elements_base_vertex,
      GLEW_GL_OES_element_index_uint,
      GLEW_GL_OES_fbo_render_mipmap,
      GLEW_GL_OES_fragment_precision_high,
      GLEW_GL_OES_geometry_shader,
      GLEW_GL_OES_geometry_point_size,
      GLEW_GL_OES_get_program_binary,
      GLEW_GL_OES_gpu_shader5,
      GLEW_GL_OES_mapbuffer,
      GLEW_GL_OES_packed_depth_stencil,
      GLEW_GL_OES_primitive_bounding_box,
      GLEW_GL_OES_required_internalformat,
      GLEW_GL_OES_rgb8_rgba8,
      GLEW_GL_OES_sample_shading,
      GLEW_GL_OES_sample_variables,
      GLEW_GL_OES_shader_image_atomic,
      GLEW_GL_OES_shader_io_blocks,
      GLEW_GL_OES_shader_multisample_interpolation,
      GLEW_GL_OES_standard_derivatives,
      GLEW_GL_OES_stencil1,
      GLEW_GL_OES_stencil4,
      GLEW_GL_OES_surfaceless_context,
      GLEW_GL_OES_tessellation_shader,
      GLEW_GL_OES_tessellation_point_size,
      GLEW_GL_OES_texture_3D,
      GLEW_GL_OES_texture_border_clamp,
      GLEW_GL_OES_texture_buffer,
      GLEW_GL_OES_texture_compression_astc,
      GLEW_GL_OES_texture_cube_map_array,
      GLEW_GL_OES_texture_float,
      GLEW_GL_OES_texture_float_linear,
      GLEW_GL_OES_texture_half_float,
      GLEW_GL_OES_texture_half_float_linear,
      GLEW_GL_OES_texture_npot,
      GLEW_GL_OES_texture_stencil8,
      GLEW_GL_OES_texture_storage_multisample_2d_array,
      GLEW_GL_OES_texture_view,
      GLEW_GL_OES_vertex_array_object,
      GLEW_GL_OES_vertex_half_float,
      GLEW_GL_OES_vertex_type_10_10_10_2,
      GLEW_GL_OVR_multiview,
      GLEW_GL_OVR_multiview2,
      GLEW_GL_QCOM_alpha_test,
      GLEW_GL_QCOM_binning_control,
      GLEW_GL_QCOM_driver_control,
      GLEW_GL_QCOM_extended_get,
      GLEW_GL_QCOM_extended_get2,
      GLEW_GL_QCOM_perfmon_global_mode,
      GLEW_GL_QCOM_tiled_rendering,
      GLEW_GL_QCOM_writeonly_rendering,
      GLEW_GL_VIV_shader_binary,
      GLEW_GLES_FeatureSetCount
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceConfig
    {
    public:

      bool m_featureSupported [glew::gles::FeatureSet::GLEW_GLES_FeatureSetCount];

      PFNGLREADBUFFERPROC m_glReadBuffer;
      PFNGLDRAWRANGEELEMENTSPROC m_glDrawRangeElements;
      PFNGLTEXIMAGE3DPROC m_glTexImage3D;
      PFNGLTEXSUBIMAGE3DPROC m_glTexSubImage3D;
      PFNGLCOPYTEXSUBIMAGE3DPROC m_glCopyTexSubImage3D;
      PFNGLCOMPRESSEDTEXIMAGE3DPROC m_glCompressedTexImage3D;
      PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC m_glCompressedTexSubImage3D;
      PFNGLGENQUERIESPROC m_glGenQueries;
      PFNGLDELETEQUERIESPROC m_glDeleteQueries;
      PFNGLISQUERYPROC m_glIsQuery;
      PFNGLBEGINQUERYPROC m_glBeginQuery;
      PFNGLENDQUERYPROC m_glEndQuery;
      PFNGLGETQUERYIVPROC m_glGetQueryiv;
      PFNGLGETQUERYOBJECTUIVPROC m_glGetQueryObjectuiv;
      PFNGLUNMAPBUFFERPROC m_glUnmapBuffer;
      PFNGLGETBUFFERPOINTERVPROC m_glGetBufferPointerv;
      PFNGLDRAWBUFFERSPROC m_glDrawBuffers;
      PFNGLUNIFORMMATRIX2X3FVPROC m_glUniformMatrix2x3fv;
      PFNGLUNIFORMMATRIX3X2FVPROC m_glUniformMatrix3x2fv;
      PFNGLUNIFORMMATRIX2X4FVPROC m_glUniformMatrix2x4fv;
      PFNGLUNIFORMMATRIX4X2FVPROC m_glUniformMatrix4x2fv;
      PFNGLUNIFORMMATRIX3X4FVPROC m_glUniformMatrix3x4fv;
      PFNGLUNIFORMMATRIX4X3FVPROC m_glUniformMatrix4x3fv;
      PFNGLBLITFRAMEBUFFERPROC m_glBlitFramebuffer;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC m_glRenderbufferStorageMultisample;
      PFNGLFRAMEBUFFERTEXTURELAYERPROC m_glFramebufferTextureLayer;
      PFNGLMAPBUFFERRANGEPROC m_glMapBufferRange;
      PFNGLFLUSHMAPPEDBUFFERRANGEPROC m_glFlushMappedBufferRange;
      PFNGLBINDVERTEXARRAYPROC m_glBindVertexArray;
      PFNGLDELETEVERTEXARRAYSPROC m_glDeleteVertexArrays;
      PFNGLGENVERTEXARRAYSPROC m_glGenVertexArrays;
      PFNGLISVERTEXARRAYPROC m_glIsVertexArray;
      PFNGLGETINTEGERI_VPROC m_glGetIntegeri_v;
      PFNGLBEGINTRANSFORMFEEDBACKPROC m_glBeginTransformFeedback;
      PFNGLENDTRANSFORMFEEDBACKPROC m_glEndTransformFeedback;
      PFNGLBINDBUFFERRANGEPROC m_glBindBufferRange;
      PFNGLBINDBUFFERBASEPROC m_glBindBufferBase;
      PFNGLTRANSFORMFEEDBACKVARYINGSPROC m_glTransformFeedbackVaryings;
      PFNGLGETTRANSFORMFEEDBACKVARYINGPROC m_glGetTransformFeedbackVarying;
      PFNGLVERTEXATTRIBIPOINTERPROC m_glVertexAttribIPointer;
      PFNGLGETVERTEXATTRIBIIVPROC m_glGetVertexAttribIiv;
      PFNGLGETVERTEXATTRIBIUIVPROC m_glGetVertexAttribIuiv;
      PFNGLVERTEXATTRIBI4IPROC m_glVertexAttribI4i;
      PFNGLVERTEXATTRIBI4UIPROC m_glVertexAttribI4ui;
      PFNGLVERTEXATTRIBI4IVPROC m_glVertexAttribI4iv;
      PFNGLVERTEXATTRIBI4UIVPROC m_glVertexAttribI4uiv;
      PFNGLGETUNIFORMUIVPROC m_glGetUniformuiv;
      PFNGLGETFRAGDATALOCATIONPROC m_glGetFragDataLocation;
      PFNGLUNIFORM1UIPROC m_glUniform1ui;
      PFNGLUNIFORM2UIPROC m_glUniform2ui;
      PFNGLUNIFORM3UIPROC m_glUniform3ui;
      PFNGLUNIFORM4UIPROC m_glUniform4ui;
      PFNGLUNIFORM1UIVPROC m_glUniform1uiv;
      PFNGLUNIFORM2UIVPROC m_glUniform2uiv;
      PFNGLUNIFORM3UIVPROC m_glUniform3uiv;
      PFNGLUNIFORM4UIVPROC m_glUniform4uiv;
      PFNGLCLEARBUFFERIVPROC m_glClearBufferiv;
      PFNGLCLEARBUFFERUIVPROC m_glClearBufferuiv;
      PFNGLCLEARBUFFERFVPROC m_glClearBufferfv;
      PFNGLCLEARBUFFERFIPROC m_glClearBufferfi;
      PFNGLGETSTRINGIPROC m_glGetStringi;
      PFNGLCOPYBUFFERSUBDATAPROC m_glCopyBufferSubData;
      PFNGLGETUNIFORMINDICESPROC m_glGetUniformIndices;
      PFNGLGETACTIVEUNIFORMSIVPROC m_glGetActiveUniformsiv;
      PFNGLGETUNIFORMBLOCKINDEXPROC m_glGetUniformBlockIndex;
      PFNGLGETACTIVEUNIFORMBLOCKIVPROC m_glGetActiveUniformBlockiv;
      PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC m_glGetActiveUniformBlockName;
      PFNGLUNIFORMBLOCKBINDINGPROC m_glUniformBlockBinding;
      PFNGLDRAWARRAYSINSTANCEDPROC m_glDrawArraysInstanced;
      PFNGLDRAWELEMENTSINSTANCEDPROC m_glDrawElementsInstanced;
      PFNGLFENCESYNCPROC m_glFenceSync;
      PFNGLISSYNCPROC m_glIsSync;
      PFNGLDELETESYNCPROC m_glDeleteSync;
      PFNGLCLIENTWAITSYNCPROC m_glClientWaitSync;
      PFNGLWAITSYNCPROC m_glWaitSync;
      PFNGLGETINTEGER64VPROC m_glGetInteger64v;
      PFNGLGETSYNCIVPROC m_glGetSynciv;
      PFNGLGETINTEGER64I_VPROC m_glGetInteger64i_v;
      PFNGLGETBUFFERPARAMETERI64VPROC m_glGetBufferParameteri64v;
      PFNGLGENSAMPLERSPROC m_glGenSamplers;
      PFNGLDELETESAMPLERSPROC m_glDeleteSamplers;
      PFNGLISSAMPLERPROC m_glIsSampler;
      PFNGLBINDSAMPLERPROC m_glBindSampler;
      PFNGLSAMPLERPARAMETERIPROC m_glSamplerParameteri;
      PFNGLSAMPLERPARAMETERIVPROC m_glSamplerParameteriv;
      PFNGLSAMPLERPARAMETERFPROC m_glSamplerParameterf;
      PFNGLSAMPLERPARAMETERFVPROC m_glSamplerParameterfv;
      PFNGLGETSAMPLERPARAMETERIVPROC m_glGetSamplerParameteriv;
      PFNGLGETSAMPLERPARAMETERFVPROC m_glGetSamplerParameterfv;
      PFNGLVERTEXATTRIBDIVISORPROC m_glVertexAttribDivisor;
      PFNGLBINDTRANSFORMFEEDBACKPROC m_glBindTransformFeedback;
      PFNGLDELETETRANSFORMFEEDBACKSPROC m_glDeleteTransformFeedbacks;
      PFNGLGENTRANSFORMFEEDBACKSPROC m_glGenTransformFeedbacks;
      PFNGLISTRANSFORMFEEDBACKPROC m_glIsTransformFeedback;
      PFNGLPAUSETRANSFORMFEEDBACKPROC m_glPauseTransformFeedback;
      PFNGLRESUMETRANSFORMFEEDBACKPROC m_glResumeTransformFeedback;
      PFNGLGETPROGRAMBINARYPROC m_glGetProgramBinary;
      PFNGLPROGRAMBINARYPROC m_glProgramBinary;
      PFNGLPROGRAMPARAMETERIPROC m_glProgramParameteri;
      PFNGLINVALIDATEFRAMEBUFFERPROC m_glInvalidateFramebuffer;
      PFNGLINVALIDATESUBFRAMEBUFFERPROC m_glInvalidateSubFramebuffer;
      PFNGLTEXSTORAGE2DPROC m_glTexStorage2D;
      PFNGLTEXSTORAGE3DPROC m_glTexStorage3D;
      PFNGLGETINTERNALFORMATIVPROC m_glGetInternalformativ;
      PFNGLDISPATCHCOMPUTEPROC m_glDispatchCompute;
      PFNGLDISPATCHCOMPUTEINDIRECTPROC m_glDispatchComputeIndirect;
      PFNGLDRAWARRAYSINDIRECTPROC m_glDrawArraysIndirect;
      PFNGLDRAWELEMENTSINDIRECTPROC m_glDrawElementsIndirect;
      PFNGLFRAMEBUFFERPARAMETERIPROC m_glFramebufferParameteri;
      PFNGLGETFRAMEBUFFERPARAMETERIVPROC m_glGetFramebufferParameteriv;
      PFNGLGETPROGRAMINTERFACEIVPROC m_glGetProgramInterfaceiv;
      PFNGLGETPROGRAMRESOURCEINDEXPROC m_glGetProgramResourceIndex;
      PFNGLGETPROGRAMRESOURCENAMEPROC m_glGetProgramResourceName;
      PFNGLGETPROGRAMRESOURCEIVPROC m_glGetProgramResourceiv;
      PFNGLGETPROGRAMRESOURCELOCATIONPROC m_glGetProgramResourceLocation;
      PFNGLUSEPROGRAMSTAGESPROC m_glUseProgramStages;
      PFNGLACTIVESHADERPROGRAMPROC m_glActiveShaderProgram;
      PFNGLCREATESHADERPROGRAMVPROC m_glCreateShaderProgramv;
      PFNGLBINDPROGRAMPIPELINEPROC m_glBindProgramPipeline;
      PFNGLDELETEPROGRAMPIPELINESPROC m_glDeleteProgramPipelines;
      PFNGLGENPROGRAMPIPELINESPROC m_glGenProgramPipelines;
      PFNGLISPROGRAMPIPELINEPROC m_glIsProgramPipeline;
      PFNGLGETPROGRAMPIPELINEIVPROC m_glGetProgramPipelineiv;
      PFNGLPROGRAMUNIFORM1IPROC m_glProgramUniform1i;
      PFNGLPROGRAMUNIFORM2IPROC m_glProgramUniform2i;
      PFNGLPROGRAMUNIFORM3IPROC m_glProgramUniform3i;
      PFNGLPROGRAMUNIFORM4IPROC m_glProgramUniform4i;
      PFNGLPROGRAMUNIFORM1UIPROC m_glProgramUniform1ui;
      PFNGLPROGRAMUNIFORM2UIPROC m_glProgramUniform2ui;
      PFNGLPROGRAMUNIFORM3UIPROC m_glProgramUniform3ui;
      PFNGLPROGRAMUNIFORM4UIPROC m_glProgramUniform4ui;
      PFNGLPROGRAMUNIFORM1FPROC m_glProgramUniform1f;
      PFNGLPROGRAMUNIFORM2FPROC m_glProgramUniform2f;
      PFNGLPROGRAMUNIFORM3FPROC m_glProgramUniform3f;
      PFNGLPROGRAMUNIFORM4FPROC m_glProgramUniform4f;
      PFNGLPROGRAMUNIFORM1IVPROC m_glProgramUniform1iv;
      PFNGLPROGRAMUNIFORM2IVPROC m_glProgramUniform2iv;
      PFNGLPROGRAMUNIFORM3IVPROC m_glProgramUniform3iv;
      PFNGLPROGRAMUNIFORM4IVPROC m_glProgramUniform4iv;
      PFNGLPROGRAMUNIFORM1UIVPROC m_glProgramUniform1uiv;
      PFNGLPROGRAMUNIFORM2UIVPROC m_glProgramUniform2uiv;
      PFNGLPROGRAMUNIFORM3UIVPROC m_glProgramUniform3uiv;
      PFNGLPROGRAMUNIFORM4UIVPROC m_glProgramUniform4uiv;
      PFNGLPROGRAMUNIFORM1FVPROC m_glProgramUniform1fv;
      PFNGLPROGRAMUNIFORM2FVPROC m_glProgramUniform2fv;
      PFNGLPROGRAMUNIFORM3FVPROC m_glProgramUniform3fv;
      PFNGLPROGRAMUNIFORM4FVPROC m_glProgramUniform4fv;
      PFNGLPROGRAMUNIFORMMATRIX2FVPROC m_glProgramUniformMatrix2fv;
      PFNGLPROGRAMUNIFORMMATRIX3FVPROC m_glProgramUniformMatrix3fv;
      PFNGLPROGRAMUNIFORMMATRIX4FVPROC m_glProgramUniformMatrix4fv;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC m_glProgramUniformMatrix2x3fv;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC m_glProgramUniformMatrix3x2fv;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC m_glProgramUniformMatrix2x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC m_glProgramUniformMatrix4x2fv;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC m_glProgramUniformMatrix3x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC m_glProgramUniformMatrix4x3fv;
      PFNGLVALIDATEPROGRAMPIPELINEPROC m_glValidateProgramPipeline;
      PFNGLGETPROGRAMPIPELINEINFOLOGPROC m_glGetProgramPipelineInfoLog;
      PFNGLBINDIMAGETEXTUREPROC m_glBindImageTexture;
      PFNGLGETBOOLEANI_VPROC m_glGetBooleani_v;
      PFNGLMEMORYBARRIERPROC m_glMemoryBarrier;
      PFNGLMEMORYBARRIERBYREGIONPROC m_glMemoryBarrierByRegion;
      PFNGLTEXSTORAGE2DMULTISAMPLEPROC m_glTexStorage2DMultisample;
      PFNGLGETMULTISAMPLEFVPROC m_glGetMultisamplefv;
      PFNGLSAMPLEMASKIPROC m_glSampleMaski;
      PFNGLGETTEXLEVELPARAMETERIVPROC m_glGetTexLevelParameteriv;
      PFNGLGETTEXLEVELPARAMETERFVPROC m_glGetTexLevelParameterfv;
      PFNGLBINDVERTEXBUFFERPROC m_glBindVertexBuffer;
      PFNGLVERTEXATTRIBFORMATPROC m_glVertexAttribFormat;
      PFNGLVERTEXATTRIBIFORMATPROC m_glVertexAttribIFormat;
      PFNGLVERTEXATTRIBBINDINGPROC m_glVertexAttribBinding;
      PFNGLVERTEXBINDINGDIVISORPROC m_glVertexBindingDivisor;
      PFNGLGETPERFMONITORGROUPSAMDPROC m_glGetPerfMonitorGroupsAMD;
      PFNGLGETPERFMONITORCOUNTERSAMDPROC m_glGetPerfMonitorCountersAMD;
      PFNGLGETPERFMONITORGROUPSTRINGAMDPROC m_glGetPerfMonitorGroupStringAMD;
      PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC m_glGetPerfMonitorCounterStringAMD;
      PFNGLGETPERFMONITORCOUNTERINFOAMDPROC m_glGetPerfMonitorCounterInfoAMD;
      PFNGLGENPERFMONITORSAMDPROC m_glGenPerfMonitorsAMD;
      PFNGLDELETEPERFMONITORSAMDPROC m_glDeletePerfMonitorsAMD;
      PFNGLSELECTPERFMONITORCOUNTERSAMDPROC m_glSelectPerfMonitorCountersAMD;
      PFNGLBEGINPERFMONITORAMDPROC m_glBeginPerfMonitorAMD;
      PFNGLENDPERFMONITORAMDPROC m_glEndPerfMonitorAMD;
      PFNGLGETPERFMONITORCOUNTERDATAAMDPROC m_glGetPerfMonitorCounterDataAMD;
      PFNGLBLITFRAMEBUFFERANGLEPROC m_glBlitFramebufferANGLE;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC m_glRenderbufferStorageMultisampleANGLE;
      PFNGLDRAWARRAYSINSTANCEDANGLEPROC m_glDrawArraysInstancedANGLE;
      PFNGLDRAWELEMENTSINSTANCEDANGLEPROC m_glDrawElementsInstancedANGLE;
      PFNGLVERTEXATTRIBDIVISORANGLEPROC m_glVertexAttribDivisorANGLE;
      PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC m_glGetTranslatedShaderSourceANGLE;
      PFNGLCOPYTEXTURELEVELSAPPLEPROC m_glCopyTextureLevelsAPPLE;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC m_glRenderbufferStorageMultisampleAPPLE;
      PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC m_glResolveMultisampleFramebufferAPPLE;
      PFNGLFENCESYNCAPPLEPROC m_glFenceSyncAPPLE;
      PFNGLISSYNCAPPLEPROC m_glIsSyncAPPLE;
      PFNGLDELETESYNCAPPLEPROC m_glDeleteSyncAPPLE;
      PFNGLCLIENTWAITSYNCAPPLEPROC m_glClientWaitSyncAPPLE;
      PFNGLWAITSYNCAPPLEPROC m_glWaitSyncAPPLE;
      PFNGLGETINTEGER64VAPPLEPROC m_glGetInteger64vAPPLE;
      PFNGLGETSYNCIVAPPLEPROC m_glGetSyncivAPPLE;
      PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC m_glDrawArraysInstancedBaseInstanceEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC m_glDrawElementsInstancedBaseInstanceEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC m_glDrawElementsInstancedBaseVertexBaseInstanceEXT;
      PFNGLBUFFERSTORAGEEXTPROC m_glBufferStorageEXT;
      PFNGLCOPYIMAGESUBDATAEXTPROC m_glCopyImageSubDataEXT;
      PFNGLLABELOBJECTEXTPROC m_glLabelObjectEXT;
      PFNGLGETOBJECTLABELEXTPROC m_glGetObjectLabelEXT;
      PFNGLINSERTEVENTMARKEREXTPROC m_glInsertEventMarkerEXT;
      PFNGLPUSHGROUPMARKEREXTPROC m_glPushGroupMarkerEXT;
      PFNGLPOPGROUPMARKEREXTPROC m_glPopGroupMarkerEXT;
      PFNGLDISCARDFRAMEBUFFEREXTPROC m_glDiscardFramebufferEXT;
      PFNGLGENQUERIESEXTPROC m_glGenQueriesEXT;
      PFNGLDELETEQUERIESEXTPROC m_glDeleteQueriesEXT;
      PFNGLISQUERYEXTPROC m_glIsQueryEXT;
      PFNGLBEGINQUERYEXTPROC m_glBeginQueryEXT;
      PFNGLENDQUERYEXTPROC m_glEndQueryEXT;
      PFNGLQUERYCOUNTEREXTPROC m_glQueryCounterEXT;
      PFNGLGETQUERYIVEXTPROC m_glGetQueryivEXT;
      PFNGLGETQUERYOBJECTIVEXTPROC m_glGetQueryObjectivEXT;
      PFNGLGETQUERYOBJECTUIVEXTPROC m_glGetQueryObjectuivEXT;
      PFNGLGETQUERYOBJECTI64VEXTPROC m_glGetQueryObjecti64vEXT;
      PFNGLGETQUERYOBJECTUI64VEXTPROC m_glGetQueryObjectui64vEXT;
      PFNGLDRAWBUFFERSEXTPROC m_glDrawBuffersEXT;
      PFNGLENABLEIEXTPROC m_glEnableiEXT;
      PFNGLDISABLEIEXTPROC m_glDisableiEXT;
      PFNGLBLENDEQUATIONIEXTPROC m_glBlendEquationiEXT;
      PFNGLBLENDEQUATIONSEPARATEIEXTPROC m_glBlendEquationSeparateiEXT;
      PFNGLBLENDFUNCIEXTPROC m_glBlendFunciEXT;
      PFNGLBLENDFUNCSEPARATEIEXTPROC m_glBlendFuncSeparateiEXT;
      PFNGLCOLORMASKIEXTPROC m_glColorMaskiEXT;
      PFNGLISENABLEDIEXTPROC m_glIsEnablediEXT;
      PFNGLDRAWELEMENTSBASEVERTEXEXTPROC m_glDrawElementsBaseVertexEXT;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC m_glDrawRangeElementsBaseVertexEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC m_glDrawElementsInstancedBaseVertexEXT;
      PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC m_glMultiDrawElementsBaseVertexEXT;
      PFNGLDRAWARRAYSINSTANCEDEXTPROC m_glDrawArraysInstancedEXT;
      PFNGLDRAWELEMENTSINSTANCEDEXTPROC m_glDrawElementsInstancedEXT;
      PFNGLFRAMEBUFFERTEXTUREEXTPROC m_glFramebufferTextureEXT;
      PFNGLVERTEXATTRIBDIVISOREXTPROC m_glVertexAttribDivisorEXT;
      PFNGLMAPBUFFERRANGEEXTPROC m_glMapBufferRangeEXT;
      PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC m_glFlushMappedBufferRangeEXT;
      PFNGLMULTIDRAWARRAYSEXTPROC m_glMultiDrawArraysEXT;
      PFNGLMULTIDRAWELEMENTSEXTPROC m_glMultiDrawElementsEXT;
      PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC m_glMultiDrawArraysIndirectEXT;
      PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC m_glMultiDrawElementsIndirectEXT;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC m_glRenderbufferStorageMultisampleEXT;
      PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC m_glFramebufferTexture2DMultisampleEXT;
      PFNGLREADBUFFERINDEXEDEXTPROC m_glReadBufferIndexedEXT;
      PFNGLDRAWBUFFERSINDEXEDEXTPROC m_glDrawBuffersIndexedEXT;
      PFNGLGETINTEGERI_VEXTPROC m_glGetIntegeri_vEXT;
      PFNGLPRIMITIVEBOUNDINGBOXEXTPROC m_glPrimitiveBoundingBoxEXT;
      PFNGLRASTERSAMPLESEXTPROC m_glRasterSamplesEXT;
      PFNGLGETGRAPHICSRESETSTATUSEXTPROC m_glGetGraphicsResetStatusEXT;
      PFNGLREADNPIXELSEXTPROC m_glReadnPixelsEXT;
      PFNGLGETNUNIFORMFVEXTPROC m_glGetnUniformfvEXT;
      PFNGLGETNUNIFORMIVEXTPROC m_glGetnUniformivEXT;
      PFNGLACTIVESHADERPROGRAMEXTPROC m_glActiveShaderProgramEXT;
      PFNGLBINDPROGRAMPIPELINEEXTPROC m_glBindProgramPipelineEXT;
      PFNGLCREATESHADERPROGRAMVEXTPROC m_glCreateShaderProgramvEXT;
      PFNGLDELETEPROGRAMPIPELINESEXTPROC m_glDeleteProgramPipelinesEXT;
      PFNGLGENPROGRAMPIPELINESEXTPROC m_glGenProgramPipelinesEXT;
      PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC m_glGetProgramPipelineInfoLogEXT;
      PFNGLGETPROGRAMPIPELINEIVEXTPROC m_glGetProgramPipelineivEXT;
      PFNGLISPROGRAMPIPELINEEXTPROC m_glIsProgramPipelineEXT;
      PFNGLPROGRAMPARAMETERIEXTPROC m_glProgramParameteriEXT;
      PFNGLPROGRAMUNIFORM1FEXTPROC m_glProgramUniform1fEXT;
      PFNGLPROGRAMUNIFORM1FVEXTPROC m_glProgramUniform1fvEXT;
      PFNGLPROGRAMUNIFORM1IEXTPROC m_glProgramUniform1iEXT;
      PFNGLPROGRAMUNIFORM1IVEXTPROC m_glProgramUniform1ivEXT;
      PFNGLPROGRAMUNIFORM2FEXTPROC m_glProgramUniform2fEXT;
      PFNGLPROGRAMUNIFORM2FVEXTPROC m_glProgramUniform2fvEXT;
      PFNGLPROGRAMUNIFORM2IEXTPROC m_glProgramUniform2iEXT;
      PFNGLPROGRAMUNIFORM2IVEXTPROC m_glProgramUniform2ivEXT;
      PFNGLPROGRAMUNIFORM3FEXTPROC m_glProgramUniform3fEXT;
      PFNGLPROGRAMUNIFORM3FVEXTPROC m_glProgramUniform3fvEXT;
      PFNGLPROGRAMUNIFORM3IEXTPROC m_glProgramUniform3iEXT;
      PFNGLPROGRAMUNIFORM3IVEXTPROC m_glProgramUniform3ivEXT;
      PFNGLPROGRAMUNIFORM4FEXTPROC m_glProgramUniform4fEXT;
      PFNGLPROGRAMUNIFORM4FVEXTPROC m_glProgramUniform4fvEXT;
      PFNGLPROGRAMUNIFORM4IEXTPROC m_glProgramUniform4iEXT;
      PFNGLPROGRAMUNIFORM4IVEXTPROC m_glProgramUniform4ivEXT;
      PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC m_glProgramUniformMatrix2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC m_glProgramUniformMatrix3fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC m_glProgramUniformMatrix4fvEXT;
      PFNGLUSEPROGRAMSTAGESEXTPROC m_glUseProgramStagesEXT;
      PFNGLVALIDATEPROGRAMPIPELINEEXTPROC m_glValidateProgramPipelineEXT;
      PFNGLPROGRAMUNIFORM1UIEXTPROC m_glProgramUniform1uiEXT;
      PFNGLPROGRAMUNIFORM2UIEXTPROC m_glProgramUniform2uiEXT;
      PFNGLPROGRAMUNIFORM3UIEXTPROC m_glProgramUniform3uiEXT;
      PFNGLPROGRAMUNIFORM4UIEXTPROC m_glProgramUniform4uiEXT;
      PFNGLPROGRAMUNIFORM1UIVEXTPROC m_glProgramUniform1uivEXT;
      PFNGLPROGRAMUNIFORM2UIVEXTPROC m_glProgramUniform2uivEXT;
      PFNGLPROGRAMUNIFORM3UIVEXTPROC m_glProgramUniform3uivEXT;
      PFNGLPROGRAMUNIFORM4UIVEXTPROC m_glProgramUniform4uivEXT;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC m_glProgramUniformMatrix2x3fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC m_glProgramUniformMatrix3x2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC m_glProgramUniformMatrix2x4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC m_glProgramUniformMatrix4x2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC m_glProgramUniformMatrix3x4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC m_glProgramUniformMatrix4x3fvEXT;
      PFNGLTEXPAGECOMMITMENTARBPROC m_glTexPageCommitmentARB;
      PFNGLPATCHPARAMETERIEXTPROC m_glPatchParameteriEXT;
      PFNGLTEXPARAMETERIIVEXTPROC m_glTexParameterIivEXT;
      PFNGLTEXPARAMETERIUIVEXTPROC m_glTexParameterIuivEXT;
      PFNGLGETTEXPARAMETERIIVEXTPROC m_glGetTexParameterIivEXT;
      PFNGLGETTEXPARAMETERIUIVEXTPROC m_glGetTexParameterIuivEXT;
      PFNGLSAMPLERPARAMETERIIVEXTPROC m_glSamplerParameterIivEXT;
      PFNGLSAMPLERPARAMETERIUIVEXTPROC m_glSamplerParameterIuivEXT;
      PFNGLGETSAMPLERPARAMETERIIVEXTPROC m_glGetSamplerParameterIivEXT;
      PFNGLGETSAMPLERPARAMETERIUIVEXTPROC m_glGetSamplerParameterIuivEXT;
      PFNGLTEXBUFFEREXTPROC m_glTexBufferEXT;
      PFNGLTEXBUFFERRANGEEXTPROC m_glTexBufferRangeEXT;
      PFNGLTEXSTORAGE1DEXTPROC m_glTexStorage1DEXT;
      PFNGLTEXSTORAGE2DEXTPROC m_glTexStorage2DEXT;
      PFNGLTEXSTORAGE3DEXTPROC m_glTexStorage3DEXT;
      PFNGLTEXTURESTORAGE1DEXTPROC m_glTextureStorage1DEXT;
      PFNGLTEXTURESTORAGE2DEXTPROC m_glTextureStorage2DEXT;
      PFNGLTEXTURESTORAGE3DEXTPROC m_glTextureStorage3DEXT;
      PFNGLTEXTUREVIEWEXTPROC m_glTextureViewEXT;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC m_glRenderbufferStorageMultisampleIMG;
      PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC m_glFramebufferTexture2DMultisampleIMG;
      PFNGLBEGINPERFQUERYINTELPROC m_glBeginPerfQueryINTEL;
      PFNGLCREATEPERFQUERYINTELPROC m_glCreatePerfQueryINTEL;
      PFNGLDELETEPERFQUERYINTELPROC m_glDeletePerfQueryINTEL;
      PFNGLENDPERFQUERYINTELPROC m_glEndPerfQueryINTEL;
      PFNGLGETFIRSTPERFQUERYIDINTELPROC m_glGetFirstPerfQueryIdINTEL;
      PFNGLGETNEXTPERFQUERYIDINTELPROC m_glGetNextPerfQueryIdINTEL;
      PFNGLGETPERFCOUNTERINFOINTELPROC m_glGetPerfCounterInfoINTEL;
      PFNGLGETPERFQUERYDATAINTELPROC m_glGetPerfQueryDataINTEL;
      PFNGLGETPERFQUERYIDBYNAMEINTELPROC m_glGetPerfQueryIdByNameINTEL;
      PFNGLGETPERFQUERYINFOINTELPROC m_glGetPerfQueryInfoINTEL;
      PFNGLBLENDBARRIERKHRPROC m_glBlendBarrierKHR;
      PFNGLDEBUGMESSAGECONTROLKHRPROC m_glDebugMessageControlKHR;
      PFNGLDEBUGMESSAGEINSERTKHRPROC m_glDebugMessageInsertKHR;
      PFNGLDEBUGMESSAGECALLBACKKHRPROC m_glDebugMessageCallbackKHR;
      PFNGLGETDEBUGMESSAGELOGKHRPROC m_glGetDebugMessageLogKHR;
      PFNGLPUSHDEBUGGROUPKHRPROC m_glPushDebugGroupKHR;
      PFNGLPOPDEBUGGROUPKHRPROC m_glPopDebugGroupKHR;
      PFNGLOBJECTLABELKHRPROC m_glObjectLabelKHR;
      PFNGLGETOBJECTLABELKHRPROC m_glGetObjectLabelKHR;
      PFNGLOBJECTPTRLABELKHRPROC m_glObjectPtrLabelKHR;
      PFNGLGETOBJECTPTRLABELKHRPROC m_glGetObjectPtrLabelKHR;
      PFNGLGETPOINTERVKHRPROC m_glGetPointervKHR;
      PFNGLGETGRAPHICSRESETSTATUSKHRPROC m_glGetGraphicsResetStatusKHR;
      PFNGLREADNPIXELSKHRPROC m_glReadnPixelsKHR;
      PFNGLGETNUNIFORMFVKHRPROC m_glGetnUniformfvKHR;
      PFNGLGETNUNIFORMIVKHRPROC m_glGetnUniformivKHR;
      PFNGLGETNUNIFORMUIVKHRPROC m_glGetnUniformuivKHR;
      PFNGLGETTEXTUREHANDLENVPROC m_glGetTextureHandleNV;
      PFNGLGETTEXTURESAMPLERHANDLENVPROC m_glGetTextureSamplerHandleNV;
      PFNGLMAKETEXTUREHANDLERESIDENTNVPROC m_glMakeTextureHandleResidentNV;
      PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC m_glMakeTextureHandleNonResidentNV;
      PFNGLGETIMAGEHANDLENVPROC m_glGetImageHandleNV;
      PFNGLMAKEIMAGEHANDLERESIDENTNVPROC m_glMakeImageHandleResidentNV;
      PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC m_glMakeImageHandleNonResidentNV;
      PFNGLUNIFORMHANDLEUI64NVPROC m_glUniformHandleui64NV;
      PFNGLUNIFORMHANDLEUI64VNVPROC m_glUniformHandleui64vNV;
      PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC m_glProgramUniformHandleui64NV;
      PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC m_glProgramUniformHandleui64vNV;
      PFNGLISTEXTUREHANDLERESIDENTNVPROC m_glIsTextureHandleResidentNV;
      PFNGLISIMAGEHANDLERESIDENTNVPROC m_glIsImageHandleResidentNV;
      PFNGLBLENDPARAMETERINVPROC m_glBlendParameteriNV;
      PFNGLBLENDBARRIERNVPROC m_glBlendBarrierNV;
      PFNGLBEGINCONDITIONALRENDERNVPROC m_glBeginConditionalRenderNV;
      PFNGLENDCONDITIONALRENDERNVPROC m_glEndConditionalRenderNV;
      PFNGLSUBPIXELPRECISIONBIASNVPROC m_glSubpixelPrecisionBiasNV;
      PFNGLCOPYBUFFERSUBDATANVPROC m_glCopyBufferSubDataNV;
      PFNGLCOVERAGEMASKNVPROC m_glCoverageMaskNV;
      PFNGLCOVERAGEOPERATIONNVPROC m_glCoverageOperationNV;
      PFNGLDRAWBUFFERSNVPROC m_glDrawBuffersNV;
      PFNGLDRAWARRAYSINSTANCEDNVPROC m_glDrawArraysInstancedNV;
      PFNGLDRAWELEMENTSINSTANCEDNVPROC m_glDrawElementsInstancedNV;
      PFNGLDELETEFENCESNVPROC m_glDeleteFencesNV;
      PFNGLGENFENCESNVPROC m_glGenFencesNV;
      PFNGLISFENCENVPROC m_glIsFenceNV;
      PFNGLTESTFENCENVPROC m_glTestFenceNV;
      PFNGLGETFENCEIVNVPROC m_glGetFenceivNV;
      PFNGLFINISHFENCENVPROC m_glFinishFenceNV;
      PFNGLSETFENCENVPROC m_glSetFenceNV;
      PFNGLFRAGMENTCOVERAGECOLORNVPROC m_glFragmentCoverageColorNV;
      PFNGLBLITFRAMEBUFFERNVPROC m_glBlitFramebufferNV;
      PFNGLCOVERAGEMODULATIONTABLENVPROC m_glCoverageModulationTableNV;
      PFNGLGETCOVERAGEMODULATIONTABLENVPROC m_glGetCoverageModulationTableNV;
      PFNGLCOVERAGEMODULATIONNVPROC m_glCoverageModulationNV;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC m_glRenderbufferStorageMultisampleNV;
      PFNGLVERTEXATTRIBDIVISORNVPROC m_glVertexAttribDivisorNV;
      PFNGLGETINTERNALFORMATSAMPLEIVNVPROC m_glGetInternalformatSampleivNV;
      PFNGLUNIFORMMATRIX2X3FVNVPROC m_glUniformMatrix2x3fvNV;
      PFNGLUNIFORMMATRIX3X2FVNVPROC m_glUniformMatrix3x2fvNV;
      PFNGLUNIFORMMATRIX2X4FVNVPROC m_glUniformMatrix2x4fvNV;
      PFNGLUNIFORMMATRIX4X2FVNVPROC m_glUniformMatrix4x2fvNV;
      PFNGLUNIFORMMATRIX3X4FVNVPROC m_glUniformMatrix3x4fvNV;
      PFNGLUNIFORMMATRIX4X3FVNVPROC m_glUniformMatrix4x3fvNV;
      PFNGLGENPATHSNVPROC m_glGenPathsNV;
      PFNGLDELETEPATHSNVPROC m_glDeletePathsNV;
      PFNGLISPATHNVPROC m_glIsPathNV;
      PFNGLPATHCOMMANDSNVPROC m_glPathCommandsNV;
      PFNGLPATHCOORDSNVPROC m_glPathCoordsNV;
      PFNGLPATHSUBCOMMANDSNVPROC m_glPathSubCommandsNV;
      PFNGLPATHSUBCOORDSNVPROC m_glPathSubCoordsNV;
      PFNGLPATHSTRINGNVPROC m_glPathStringNV;
      PFNGLPATHGLYPHSNVPROC m_glPathGlyphsNV;
      PFNGLPATHGLYPHRANGENVPROC m_glPathGlyphRangeNV;
      PFNGLWEIGHTPATHSNVPROC m_glWeightPathsNV;
      PFNGLCOPYPATHNVPROC m_glCopyPathNV;
      PFNGLINTERPOLATEPATHSNVPROC m_glInterpolatePathsNV;
      PFNGLTRANSFORMPATHNVPROC m_glTransformPathNV;
      PFNGLPATHPARAMETERIVNVPROC m_glPathParameterivNV;
      PFNGLPATHPARAMETERINVPROC m_glPathParameteriNV;
      PFNGLPATHPARAMETERFVNVPROC m_glPathParameterfvNV;
      PFNGLPATHPARAMETERFNVPROC m_glPathParameterfNV;
      PFNGLPATHDASHARRAYNVPROC m_glPathDashArrayNV;
      PFNGLPATHSTENCILFUNCNVPROC m_glPathStencilFuncNV;
      PFNGLPATHSTENCILDEPTHOFFSETNVPROC m_glPathStencilDepthOffsetNV;
      PFNGLSTENCILFILLPATHNVPROC m_glStencilFillPathNV;
      PFNGLSTENCILSTROKEPATHNVPROC m_glStencilStrokePathNV;
      PFNGLSTENCILFILLPATHINSTANCEDNVPROC m_glStencilFillPathInstancedNV;
      PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC m_glStencilStrokePathInstancedNV;
      PFNGLPATHCOVERDEPTHFUNCNVPROC m_glPathCoverDepthFuncNV;
      PFNGLCOVERFILLPATHNVPROC m_glCoverFillPathNV;
      PFNGLCOVERSTROKEPATHNVPROC m_glCoverStrokePathNV;
      PFNGLCOVERFILLPATHINSTANCEDNVPROC m_glCoverFillPathInstancedNV;
      PFNGLCOVERSTROKEPATHINSTANCEDNVPROC m_glCoverStrokePathInstancedNV;
      PFNGLGETPATHPARAMETERIVNVPROC m_glGetPathParameterivNV;
      PFNGLGETPATHPARAMETERFVNVPROC m_glGetPathParameterfvNV;
      PFNGLGETPATHCOMMANDSNVPROC m_glGetPathCommandsNV;
      PFNGLGETPATHCOORDSNVPROC m_glGetPathCoordsNV;
      PFNGLGETPATHDASHARRAYNVPROC m_glGetPathDashArrayNV;
      PFNGLGETPATHMETRICSNVPROC m_glGetPathMetricsNV;
      PFNGLGETPATHMETRICRANGENVPROC m_glGetPathMetricRangeNV;
      PFNGLGETPATHSPACINGNVPROC m_glGetPathSpacingNV;
      PFNGLISPOINTINFILLPATHNVPROC m_glIsPointInFillPathNV;
      PFNGLISPOINTINSTROKEPATHNVPROC m_glIsPointInStrokePathNV;
      PFNGLGETPATHLENGTHNVPROC m_glGetPathLengthNV;
      PFNGLPOINTALONGPATHNVPROC m_glPointAlongPathNV;
      PFNGLMATRIXLOAD3X2FNVPROC m_glMatrixLoad3x2fNV;
      PFNGLMATRIXLOAD3X3FNVPROC m_glMatrixLoad3x3fNV;
      PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC m_glMatrixLoadTranspose3x3fNV;
      PFNGLMATRIXMULT3X2FNVPROC m_glMatrixMult3x2fNV;
      PFNGLMATRIXMULT3X3FNVPROC m_glMatrixMult3x3fNV;
      PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC m_glMatrixMultTranspose3x3fNV;
      PFNGLSTENCILTHENCOVERFILLPATHNVPROC m_glStencilThenCoverFillPathNV;
      PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC m_glStencilThenCoverStrokePathNV;
      PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC m_glStencilThenCoverFillPathInstancedNV;
      PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC m_glStencilThenCoverStrokePathInstancedNV;
      PFNGLPATHGLYPHINDEXRANGENVPROC m_glPathGlyphIndexRangeNV;
      PFNGLPATHGLYPHINDEXARRAYNVPROC m_glPathGlyphIndexArrayNV;
      PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC m_glPathMemoryGlyphIndexArrayNV;
      PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC m_glProgramPathFragmentInputGenNV;
      PFNGLGETPROGRAMRESOURCEFVNVPROC m_glGetProgramResourcefvNV;
      PFNGLPOLYGONMODENVPROC m_glPolygonModeNV;
      PFNGLREADBUFFERNVPROC m_glReadBufferNV;
      PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC m_glFramebufferSampleLocationsfvNV;
      PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC m_glNamedFramebufferSampleLocationsfvNV;
      PFNGLRESOLVEDEPTHVALUESNVPROC m_glResolveDepthValuesNV;
      PFNGLVIEWPORTARRAYVNVPROC m_glViewportArrayvNV;
      PFNGLVIEWPORTINDEXEDFNVPROC m_glViewportIndexedfNV;
      PFNGLVIEWPORTINDEXEDFVNVPROC m_glViewportIndexedfvNV;
      PFNGLSCISSORARRAYVNVPROC m_glScissorArrayvNV;
      PFNGLSCISSORINDEXEDNVPROC m_glScissorIndexedNV;
      PFNGLSCISSORINDEXEDVNVPROC m_glScissorIndexedvNV;
      PFNGLDEPTHRANGEARRAYFVNVPROC m_glDepthRangeArrayfvNV;
      PFNGLDEPTHRANGEINDEXEDFNVPROC m_glDepthRangeIndexedfNV;
      PFNGLGETFLOATI_VNVPROC m_glGetFloati_vNV;
      PFNGLENABLEINVPROC m_glEnableiNV;
      PFNGLDISABLEINVPROC m_glDisableiNV;
      PFNGLISENABLEDINVPROC m_glIsEnablediNV;
      PFNGLEGLIMAGETARGETTEXTURE2DOESPROC m_glEGLImageTargetTexture2DOES;
      PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC m_glEGLImageTargetRenderbufferStorageOES;
      PFNGLCOPYIMAGESUBDATAOESPROC m_glCopyImageSubDataOES;
      PFNGLENABLEIOESPROC m_glEnableiOES;
      PFNGLDISABLEIOESPROC m_glDisableiOES;
      PFNGLBLENDEQUATIONIOESPROC m_glBlendEquationiOES;
      PFNGLBLENDEQUATIONSEPARATEIOESPROC m_glBlendEquationSeparateiOES;
      PFNGLBLENDFUNCIOESPROC m_glBlendFunciOES;
      PFNGLBLENDFUNCSEPARATEIOESPROC m_glBlendFuncSeparateiOES;
      PFNGLCOLORMASKIOESPROC m_glColorMaskiOES;
      PFNGLISENABLEDIOESPROC m_glIsEnablediOES;
      PFNGLDRAWELEMENTSBASEVERTEXOESPROC m_glDrawElementsBaseVertexOES;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC m_glDrawRangeElementsBaseVertexOES;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC m_glDrawElementsInstancedBaseVertexOES;
      PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC m_glMultiDrawElementsBaseVertexOES;
      PFNGLFRAMEBUFFERTEXTUREOESPROC m_glFramebufferTextureOES;
      PFNGLGETPROGRAMBINARYOESPROC m_glGetProgramBinaryOES;
      PFNGLPROGRAMBINARYOESPROC m_glProgramBinaryOES;
      PFNGLMAPBUFFEROESPROC m_glMapBufferOES;
      PFNGLUNMAPBUFFEROESPROC m_glUnmapBufferOES;
      PFNGLGETBUFFERPOINTERVOESPROC m_glGetBufferPointervOES;
      PFNGLPRIMITIVEBOUNDINGBOXOESPROC m_glPrimitiveBoundingBoxOES;
      PFNGLMINSAMPLESHADINGOESPROC m_glMinSampleShadingOES;
      PFNGLPATCHPARAMETERIOESPROC m_glPatchParameteriOES;
      PFNGLTEXIMAGE3DOESPROC m_glTexImage3DOES;
      PFNGLTEXSUBIMAGE3DOESPROC m_glTexSubImage3DOES;
      PFNGLCOPYTEXSUBIMAGE3DOESPROC m_glCopyTexSubImage3DOES;
      PFNGLCOMPRESSEDTEXIMAGE3DOESPROC m_glCompressedTexImage3DOES;
      PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC m_glCompressedTexSubImage3DOES;
      PFNGLFRAMEBUFFERTEXTURE3DOESPROC m_glFramebufferTexture3DOES;
      PFNGLTEXPARAMETERIIVOESPROC m_glTexParameterIivOES;
      PFNGLTEXPARAMETERIUIVOESPROC m_glTexParameterIuivOES;
      PFNGLGETTEXPARAMETERIIVOESPROC m_glGetTexParameterIivOES;
      PFNGLGETTEXPARAMETERIUIVOESPROC m_glGetTexParameterIuivOES;
      PFNGLSAMPLERPARAMETERIIVOESPROC m_glSamplerParameterIivOES;
      PFNGLSAMPLERPARAMETERIUIVOESPROC m_glSamplerParameterIuivOES;
      PFNGLGETSAMPLERPARAMETERIIVOESPROC m_glGetSamplerParameterIivOES;
      PFNGLGETSAMPLERPARAMETERIUIVOESPROC m_glGetSamplerParameterIuivOES;
      PFNGLTEXBUFFEROESPROC m_glTexBufferOES;
      PFNGLTEXBUFFERRANGEOESPROC m_glTexBufferRangeOES;
      PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC m_glTexStorage3DMultisampleOES;
      PFNGLTEXTUREVIEWOESPROC m_glTextureViewOES;
      PFNGLBINDVERTEXARRAYOESPROC m_glBindVertexArrayOES;
      PFNGLDELETEVERTEXARRAYSOESPROC m_glDeleteVertexArraysOES;
      PFNGLGENVERTEXARRAYSOESPROC m_glGenVertexArraysOES;
      PFNGLISVERTEXARRAYOESPROC m_glIsVertexArrayOES;
      PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC m_glFramebufferTextureMultiviewOVR;
      PFNGLALPHAFUNCQCOMPROC m_glAlphaFuncQCOM;
      PFNGLGETDRIVERCONTROLSQCOMPROC m_glGetDriverControlsQCOM;
      PFNGLGETDRIVERCONTROLSTRINGQCOMPROC m_glGetDriverControlStringQCOM;
      PFNGLENABLEDRIVERCONTROLQCOMPROC m_glEnableDriverControlQCOM;
      PFNGLDISABLEDRIVERCONTROLQCOMPROC m_glDisableDriverControlQCOM;
      PFNGLEXTGETTEXTURESQCOMPROC m_glExtGetTexturesQCOM;
      PFNGLEXTGETBUFFERSQCOMPROC m_glExtGetBuffersQCOM;
      PFNGLEXTGETRENDERBUFFERSQCOMPROC m_glExtGetRenderbuffersQCOM;
      PFNGLEXTGETFRAMEBUFFERSQCOMPROC m_glExtGetFramebuffersQCOM;
      PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC m_glExtGetTexLevelParameterivQCOM;
      PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC m_glExtTexObjectStateOverrideiQCOM;
      PFNGLEXTGETTEXSUBIMAGEQCOMPROC m_glExtGetTexSubImageQCOM;
      PFNGLEXTGETBUFFERPOINTERVQCOMPROC m_glExtGetBufferPointervQCOM;
      PFNGLEXTGETSHADERSQCOMPROC m_glExtGetShadersQCOM;
      PFNGLEXTGETPROGRAMSQCOMPROC m_glExtGetProgramsQCOM;
      PFNGLEXTISPROGRAMBINARYQCOMPROC m_glExtIsProgramBinaryQCOM;
      PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC m_glExtGetProgramBinarySourceQCOM;
      PFNGLSTARTTILINGQCOMPROC m_glStartTilingQCOM;
      PFNGLENDTILINGQCOMPROC m_glEndTilingQCOM;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise ();

    static void Deinitialise ();

    static void SetConfig (glew::gles::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::gles::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static glew::gles::DeviceConfig s_deviceConfig;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void glReadBuffer (GLenum src);
    static void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
    static void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
    static void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
    static void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    static void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
    static void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
    static void glGenQueries (GLsizei n, GLuint * ids);
    static void glDeleteQueries (GLsizei n, const GLuint * ids);
    static GLboolean glIsQuery (GLuint id);
    static void glBeginQuery (GLenum target, GLuint id);
    static void glEndQuery (GLenum target);
    static void glGetQueryiv (GLenum target, GLenum pname, GLint * params);
    static void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint * params);
    static GLboolean glUnmapBuffer (GLenum target);
    static void glGetBufferPointerv (GLenum target, GLenum pname, void ** params);
    static void glDrawBuffers (GLsizei n, const GLenum * bufs);
    static void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    static void * glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    static void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
    static void glBindVertexArray (GLuint array);
    static void glDeleteVertexArrays (GLsizei n, const GLuint * arrays);
    static void glGenVertexArrays (GLsizei n, GLuint * arrays);
    static GLboolean glIsVertexArray (GLuint array);
    static void glGetIntegeri_v (GLenum target, GLuint index, GLint * data);
    static void glBeginTransformFeedback (GLenum primitiveMode);
    static void glEndTransformFeedback ();
    static void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
    static void glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
    static void glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
    static void glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
    static void glGetVertexAttribIiv (GLuint index, GLenum pname, GLint * params);
    static void glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint * params);
    static void glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w);
    static void glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    static void glVertexAttribI4iv (GLuint index, const GLint * v);
    static void glVertexAttribI4uiv (GLuint index, const GLuint * v);
    static void glGetUniformuiv (GLuint program, GLint location, GLuint * params);
    static GLint glGetFragDataLocation (GLuint program, const GLchar * name);
    static void glUniform1ui (GLint location, GLuint v0);
    static void glUniform2ui (GLint location, GLuint v0, GLuint v1);
    static void glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2);
    static void glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    static void glUniform1uiv (GLint location, GLsizei count, const GLuint * value);
    static void glUniform2uiv (GLint location, GLsizei count, const GLuint * value);
    static void glUniform3uiv (GLint location, GLsizei count, const GLuint * value);
    static void glUniform4uiv (GLint location, GLsizei count, const GLuint * value);
    static void glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint * value);
    static void glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint * value);
    static void glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat * value);
    static void glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    static const GLubyte * glGetStringi (GLenum name, GLuint index);
    static void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    static void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
    static void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
    static GLuint glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName);
    static void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
    static void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
    static void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
    static void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
    static void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
    static GLsync glFenceSync (GLenum condition, GLbitfield flags);
    static GLboolean glIsSync (GLsync sync);
    static void glDeleteSync (GLsync sync);
    static GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    static void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    static void glGetInteger64v (GLenum pname, GLint64 * data);
    static void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
    static void glGetInteger64i_v (GLenum target, GLuint index, GLint64 * data);
    static void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 * params);
    static void glGenSamplers (GLsizei count, GLuint * samplers);
    static void glDeleteSamplers (GLsizei count, const GLuint * samplers);
    static GLboolean glIsSampler (GLuint sampler);
    static void glBindSampler (GLuint unit, GLuint sampler);
    static void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
    static void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param);
    static void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
    static void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param);
    static void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params);
    static void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params);
    static void glVertexAttribDivisor (GLuint index, GLuint divisor);
    static void glBindTransformFeedback (GLenum target, GLuint id);
    static void glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids);
    static void glGenTransformFeedbacks (GLsizei n, GLuint * ids);
    static GLboolean glIsTransformFeedback (GLuint id);
    static void glPauseTransformFeedback ();
    static void glResumeTransformFeedback ();
    static void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
    static void glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
    static void glProgramParameteri (GLuint program, GLenum pname, GLint value);
    static void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments);
    static void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    static void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    static void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    static void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
    static void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
    static void glDispatchComputeIndirect (GLintptr indirect);
    static void glDrawArraysIndirect (GLenum mode, const void * indirect);
    static void glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect);
    static void glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
    static void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params);
    static void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
    static GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name);
    static void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
    static void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
    static GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name);
    static void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
    static void glActiveShaderProgram (GLuint pipeline, GLuint program);
    static GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings);
    static void glBindProgramPipeline (GLuint pipeline);
    static void glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines);
    static void glGenProgramPipelines (GLsizei n, GLuint * pipelines);
    static GLboolean glIsProgramPipeline (GLuint pipeline);
    static void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params);
    static void glProgramUniform1i (GLuint program, GLint location, GLint v0);
    static void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
    static void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    static void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    static void glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
    static void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
    static void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    static void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    static void glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
    static void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    static void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    static void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    static void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glValidateProgramPipeline (GLuint pipeline);
    static void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    static void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
    static void glGetBooleani_v (GLenum target, GLuint index, GLboolean * data);
    static void glMemoryBarrier (GLbitfield barriers);
    static void glMemoryBarrierByRegion (GLbitfield barriers);
    static void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    static void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val);
    static void glSampleMaski (GLuint maskNumber, GLbitfield mask);
    static void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint * params);
    static void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat * params);
    static void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    static void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    static void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    static void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
    static void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
    static void glGetPerfMonitorGroupsAMD (GLint * numGroups, GLsizei groupsSize, GLuint * groups);
    static void glGetPerfMonitorCountersAMD (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters);
    static void glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString);
    static void glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString);
    static void glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void * data);
    static void glGenPerfMonitorsAMD (GLsizei n, GLuint * monitors);
    static void glDeletePerfMonitorsAMD (GLsizei n, GLuint * monitors);
    static void glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList);
    static void glBeginPerfMonitorAMD (GLuint monitor);
    static void glEndPerfMonitorAMD (GLuint monitor);
    static void glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten);
    static void glBlitFramebufferANGLE (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static void glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glDrawArraysInstancedANGLE (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
    static void glDrawElementsInstancedANGLE (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
    static void glVertexAttribDivisorANGLE (GLuint index, GLuint divisor);
    static void glGetTranslatedShaderSourceANGLE (GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source);
    static void glCopyTextureLevelsAPPLE (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
    static void glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glResolveMultisampleFramebufferAPPLE ();
    static GLsync glFenceSyncAPPLE (GLenum condition, GLbitfield flags);
    static GLboolean glIsSyncAPPLE (GLsync sync);
    static void glDeleteSyncAPPLE (GLsync sync);
    static GLenum glClientWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
    static void glWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
    static void glGetInteger64vAPPLE (GLenum pname, GLint64 * params);
    static void glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
    static void glDrawArraysInstancedBaseInstanceEXT (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
    static void glDrawElementsInstancedBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
    static void glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
    static void glBufferStorageEXT (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
    static void glCopyImageSubDataEXT (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    static void glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar * label);
    static void glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label);
    static void glInsertEventMarkerEXT (GLsizei length, const GLchar * marker);
    static void glPushGroupMarkerEXT (GLsizei length, const GLchar * marker);
    static void glPopGroupMarkerEXT ();
    static void glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum * attachments);
    static void glGenQueriesEXT (GLsizei n, GLuint * ids);
    static void glDeleteQueriesEXT (GLsizei n, const GLuint * ids);
    static GLboolean glIsQueryEXT (GLuint id);
    static void glBeginQueryEXT (GLenum target, GLuint id);
    static void glEndQueryEXT (GLenum target);
    static void glQueryCounterEXT (GLuint id, GLenum target);
    static void glGetQueryivEXT (GLenum target, GLenum pname, GLint * params);
    static void glGetQueryObjectivEXT (GLuint id, GLenum pname, GLint * params);
    static void glGetQueryObjectuivEXT (GLuint id, GLenum pname, GLuint * params);
    static void glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 * params);
    static void glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 * params);
    static void glDrawBuffersEXT (GLsizei n, const GLenum * bufs);
    static void glEnableiEXT (GLenum target, GLuint index);
    static void glDisableiEXT (GLenum target, GLuint index);
    static void glBlendEquationiEXT (GLuint buf, GLenum mode);
    static void glBlendEquationSeparateiEXT (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    static void glBlendFunciEXT (GLuint buf, GLenum src, GLenum dst);
    static void glBlendFuncSeparateiEXT (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    static void glColorMaskiEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    static GLboolean glIsEnablediEXT (GLenum target, GLuint index);
    static void glDrawElementsBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    static void glDrawRangeElementsBaseVertexEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    static void glDrawElementsInstancedBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
    static void glMultiDrawElementsBaseVertexEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);
    static void glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
    static void glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
    static void glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level);
    static void glVertexAttribDivisorEXT (GLuint index, GLuint divisor);
    static void * glMapBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    static void glFlushMappedBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length);
    static void glMultiDrawArraysEXT (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount);
    static void glMultiDrawElementsEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount);
    static void glMultiDrawArraysIndirectEXT (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
    static void glMultiDrawElementsIndirectEXT (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
    static void glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glFramebufferTexture2DMultisampleEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
    static void glReadBufferIndexedEXT (GLenum src, GLint index);
    static void glDrawBuffersIndexedEXT (GLint n, const GLenum * location, const GLint * indices);
    static void glGetIntegeri_vEXT (GLenum target, GLuint index, GLint * data);
    static void glPrimitiveBoundingBoxEXT (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
    static void glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations);
    static GLenum glGetGraphicsResetStatusEXT ();
    static void glReadnPixelsEXT (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    static void glGetnUniformfvEXT (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    static void glGetnUniformivEXT (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    static void glActiveShaderProgramEXT (GLuint pipeline, GLuint program);
    static void glBindProgramPipelineEXT (GLuint pipeline);
    static GLuint glCreateShaderProgramvEXT (GLenum type, GLsizei count, const GLchar ** strings);
    static void glDeleteProgramPipelinesEXT (GLsizei n, const GLuint * pipelines);
    static void glGenProgramPipelinesEXT (GLsizei n, GLuint * pipelines);
    static void glGetProgramPipelineInfoLogEXT (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    static void glGetProgramPipelineivEXT (GLuint pipeline, GLenum pname, GLint * params);
    static GLboolean glIsProgramPipelineEXT (GLuint pipeline);
    static void glProgramParameteriEXT (GLuint program, GLenum pname, GLint value);
    static void glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0);
    static void glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform1iEXT (GLuint program, GLint location, GLint v0);
    static void glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    static void glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1);
    static void glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    static void glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    static void glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    static void glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    static void glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUseProgramStagesEXT (GLuint pipeline, GLbitfield stages, GLuint program);
    static void glValidateProgramPipelineEXT (GLuint pipeline);
    static void glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0);
    static void glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1);
    static void glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    static void glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    static void glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
    static void glPatchParameteriEXT (GLenum pname, GLint value);
    static void glTexParameterIivEXT (GLenum target, GLenum pname, const GLint * params);
    static void glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint * params);
    static void glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint * params);
    static void glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint * params);
    static void glSamplerParameterIivEXT (GLuint sampler, GLenum pname, const GLint * param);
    static void glSamplerParameterIuivEXT (GLuint sampler, GLenum pname, const GLuint * param);
    static void glGetSamplerParameterIivEXT (GLuint sampler, GLenum pname, GLint * params);
    static void glGetSamplerParameterIuivEXT (GLuint sampler, GLenum pname, GLuint * params);
    static void glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer);
    static void glTexBufferRangeEXT (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    static void glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    static void glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    static void glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    static void glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    static void glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    static void glTextureViewEXT (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
    static void glRenderbufferStorageMultisampleIMG (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glFramebufferTexture2DMultisampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
    static void glBeginPerfQueryINTEL (GLuint queryHandle);
    static void glCreatePerfQueryINTEL (GLuint queryId, GLuint * queryHandle);
    static void glDeletePerfQueryINTEL (GLuint queryHandle);
    static void glEndPerfQueryINTEL (GLuint queryHandle);
    static void glGetFirstPerfQueryIdINTEL (GLuint * queryId);
    static void glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint * nextQueryId);
    static void glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue);
    static void glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten);
    static void glGetPerfQueryIdByNameINTEL (GLchar * queryName, GLuint * queryId);
    static void glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask);
    static void glBlendBarrierKHR ();
    static void glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    static void glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    static void glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void * userParam);
    static GLuint glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    static void glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar * message);
    static void glPopDebugGroupKHR ();
    static void glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
    static void glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
    static void glObjectPtrLabelKHR (const void * ptr, GLsizei length, const GLchar * label);
    static void glGetObjectPtrLabelKHR (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
    static void glGetPointervKHR (GLenum pname, void ** params);
    static GLenum glGetGraphicsResetStatusKHR ();
    static void glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    static void glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    static void glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    static void glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
    static GLuint64 glGetTextureHandleNV (GLuint texture);
    static GLuint64 glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler);
    static void glMakeTextureHandleResidentNV (GLuint64 handle);
    static void glMakeTextureHandleNonResidentNV (GLuint64 handle);
    static GLuint64 glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    static void glMakeImageHandleResidentNV (GLuint64 handle, GLenum access);
    static void glMakeImageHandleNonResidentNV (GLuint64 handle);
    static void glUniformHandleui64NV (GLint location, GLuint64 value);
    static void glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 * value);
    static void glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value);
    static void glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
    static GLboolean glIsTextureHandleResidentNV (GLuint64 handle);
    static GLboolean glIsImageHandleResidentNV (GLuint64 handle);
    static void glBlendParameteriNV (GLenum pname, GLint value);
    static void glBlendBarrierNV ();
    static void glBeginConditionalRenderNV (GLuint id, GLenum mode);
    static void glEndConditionalRenderNV ();
    static void glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits);
    static void glCopyBufferSubDataNV (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    static void glCoverageMaskNV (GLboolean mask);
    static void glCoverageOperationNV (GLenum operation);
    static void glDrawBuffersNV (GLsizei n, const GLenum * bufs);
    static void glDrawArraysInstancedNV (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
    static void glDrawElementsInstancedNV (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
    static void glDeleteFencesNV (GLsizei n, const GLuint * fences);
    static void glGenFencesNV (GLsizei n, GLuint * fences);
    static GLboolean glIsFenceNV (GLuint fence);
    static GLboolean glTestFenceNV (GLuint fence);
    static void glGetFenceivNV (GLuint fence, GLenum pname, GLint * params);
    static void glFinishFenceNV (GLuint fence);
    static void glSetFenceNV (GLuint fence, GLenum condition);
    static void glFragmentCoverageColorNV (GLuint color);
    static void glBlitFramebufferNV (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static void glCoverageModulationTableNV (GLsizei n, const GLfloat * v);
    static void glGetCoverageModulationTableNV (GLsizei bufsize, GLfloat * v);
    static void glCoverageModulationNV (GLenum components);
    static void glRenderbufferStorageMultisampleNV (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glVertexAttribDivisorNV (GLuint index, GLuint divisor);
    static void glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params);
    static void glUniformMatrix2x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix3x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix2x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix4x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix3x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glUniformMatrix4x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static GLuint glGenPathsNV (GLsizei range);
    static void glDeletePathsNV (GLuint path, GLsizei range);
    static GLboolean glIsPathNV (GLuint path);
    static void glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
    static void glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords);
    static void glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
    static void glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords);
    static void glPathStringNV (GLuint path, GLenum format, GLsizei length, const void * pathString);
    static void glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    static void glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    static void glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights);
    static void glCopyPathNV (GLuint resultPath, GLuint srcPath);
    static void glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
    static void glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues);
    static void glPathParameterivNV (GLuint path, GLenum pname, const GLint * value);
    static void glPathParameteriNV (GLuint path, GLenum pname, GLint value);
    static void glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat * value);
    static void glPathParameterfNV (GLuint path, GLenum pname, GLfloat value);
    static void glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat * dashArray);
    static void glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask);
    static void glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units);
    static void glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask);
    static void glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask);
    static void glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues);
    static void glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues);
    static void glPathCoverDepthFuncNV (GLenum func);
    static void glCoverFillPathNV (GLuint path, GLenum coverMode);
    static void glCoverStrokePathNV (GLuint path, GLenum coverMode);
    static void glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    static void glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    static void glGetPathParameterivNV (GLuint path, GLenum pname, GLint * value);
    static void glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat * value);
    static void glGetPathCommandsNV (GLuint path, GLubyte * commands);
    static void glGetPathCoordsNV (GLuint path, GLfloat * coords);
    static void glGetPathDashArrayNV (GLuint path, GLfloat * dashArray);
    static void glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics);
    static void glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics);
    static void glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing);
    static GLboolean glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y);
    static GLboolean glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y);
    static GLfloat glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments);
    static GLboolean glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY);
    static void glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat * m);
    static void glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat * m);
    static void glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat * m);
    static void glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat * m);
    static void glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat * m);
    static void glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat * m);
    static void glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
    static void glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
    static void glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    static void glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    static GLenum glPathGlyphIndexRangeNV (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
    static GLenum glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    static GLenum glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    static void glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs);
    static void glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params);
    static void glPolygonModeNV (GLenum face, GLenum mode);
    static void glReadBufferNV (GLenum mode);
    static void glFramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat * v);
    static void glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v);
    static void glResolveDepthValuesNV ();
    static void glViewportArrayvNV (GLuint first, GLsizei count, const GLfloat * v);
    static void glViewportIndexedfNV (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
    static void glViewportIndexedfvNV (GLuint index, const GLfloat * v);
    static void glScissorArrayvNV (GLuint first, GLsizei count, const GLint * v);
    static void glScissorIndexedNV (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
    static void glScissorIndexedvNV (GLuint index, const GLint * v);
    static void glDepthRangeArrayfvNV (GLuint first, GLsizei count, const GLfloat * v);
    static void glDepthRangeIndexedfNV (GLuint index, GLfloat n, GLfloat f);
    static void glGetFloati_vNV (GLenum target, GLuint index, GLfloat * data);
    static void glEnableiNV (GLenum target, GLuint index);
    static void glDisableiNV (GLenum target, GLuint index);
    static GLboolean glIsEnablediNV (GLenum target, GLuint index);
    static void glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image);
    static void glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image);
    static void glCopyImageSubDataOES (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    static void glEnableiOES (GLenum target, GLuint index);
    static void glDisableiOES (GLenum target, GLuint index);
    static void glBlendEquationiOES (GLuint buf, GLenum mode);
    static void glBlendEquationSeparateiOES (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    static void glBlendFunciOES (GLuint buf, GLenum src, GLenum dst);
    static void glBlendFuncSeparateiOES (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    static void glColorMaskiOES (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    static GLboolean glIsEnablediOES (GLenum target, GLuint index);
    static void glDrawElementsBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    static void glDrawRangeElementsBaseVertexOES (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    static void glDrawElementsInstancedBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
    static void glMultiDrawElementsBaseVertexOES (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);
    static void glFramebufferTextureOES (GLenum target, GLenum attachment, GLuint texture, GLint level);
    static void glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
    static void glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void * binary, GLint length);
    static void * glMapBufferOES (GLenum target, GLenum access);
    static GLboolean glUnmapBufferOES (GLenum target);
    static void glGetBufferPointervOES (GLenum target, GLenum pname, void ** params);
    static void glPrimitiveBoundingBoxOES (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
    static void glMinSampleShadingOES (GLfloat value);
    static void glPatchParameteriOES (GLenum pname, GLint value);
    static void glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
    static void glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
    static void glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    static void glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
    static void glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
    static void glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    static void glTexParameterIivOES (GLenum target, GLenum pname, const GLint * params);
    static void glTexParameterIuivOES (GLenum target, GLenum pname, const GLuint * params);
    static void glGetTexParameterIivOES (GLenum target, GLenum pname, GLint * params);
    static void glGetTexParameterIuivOES (GLenum target, GLenum pname, GLuint * params);
    static void glSamplerParameterIivOES (GLuint sampler, GLenum pname, const GLint * param);
    static void glSamplerParameterIuivOES (GLuint sampler, GLenum pname, const GLuint * param);
    static void glGetSamplerParameterIivOES (GLuint sampler, GLenum pname, GLint * params);
    static void glGetSamplerParameterIuivOES (GLuint sampler, GLenum pname, GLuint * params);
    static void glTexBufferOES (GLenum target, GLenum internalformat, GLuint buffer);
    static void glTexBufferRangeOES (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glTexStorage3DMultisampleOES (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    static void glTextureViewOES (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
    static void glBindVertexArrayOES (GLuint array);
    static void glDeleteVertexArraysOES (GLsizei n, const GLuint * arrays);
    static void glGenVertexArraysOES (GLsizei n, GLuint * arrays);
    static GLboolean glIsVertexArrayOES (GLuint array);
    static void glFramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
    static void glAlphaFuncQCOM (GLenum func, GLclampf ref);
    static void glGetDriverControlsQCOM (GLint * num, GLsizei size, GLuint * driverControls);
    static void glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString);
    static void glEnableDriverControlQCOM (GLuint driverControl);
    static void glDisableDriverControlQCOM (GLuint driverControl);
    static void glExtGetTexturesQCOM (GLuint * textures, GLint maxTextures, GLint * numTextures);
    static void glExtGetBuffersQCOM (GLuint * buffers, GLint maxBuffers, GLint * numBuffers);
    static void glExtGetRenderbuffersQCOM (GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers);
    static void glExtGetFramebuffersQCOM (GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers);
    static void glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params);
    static void glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param);
    static void glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels);
    static void glExtGetBufferPointervQCOM (GLenum target, void ** params);
    static void glExtGetShadersQCOM (GLuint * shaders, GLint maxShaders, GLint * numShaders);
    static void glExtGetProgramsQCOM (GLuint * programs, GLint maxPrograms, GLint * numPrograms);
    static GLboolean glExtIsProgramBinaryQCOM (GLuint program);
    static void glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, GLchar * source, GLint * length);
    static void glStartTilingQCOM (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
    static void glEndTilingQCOM (GLbitfield preserveMask);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glReadBuffer glew::gles::glReadBuffer
#define glDrawRangeElements glew::gles::glDrawRangeElements
#define glTexImage3D glew::gles::glTexImage3D
#define glTexSubImage3D glew::gles::glTexSubImage3D
#define glCopyTexSubImage3D glew::gles::glCopyTexSubImage3D
#define glCompressedTexImage3D glew::gles::glCompressedTexImage3D
#define glCompressedTexSubImage3D glew::gles::glCompressedTexSubImage3D
#define glGenQueries glew::gles::glGenQueries
#define glDeleteQueries glew::gles::glDeleteQueries
#define glIsQuery glew::gles::glIsQuery
#define glBeginQuery glew::gles::glBeginQuery
#define glEndQuery glew::gles::glEndQuery
#define glGetQueryiv glew::gles::glGetQueryiv
#define glGetQueryObjectuiv glew::gles::glGetQueryObjectuiv
#define glUnmapBuffer glew::gles::glUnmapBuffer
#define glGetBufferPointerv glew::gles::glGetBufferPointerv
#define glDrawBuffers glew::gles::glDrawBuffers
#define glUniformMatrix2x3fv glew::gles::glUniformMatrix2x3fv
#define glUniformMatrix3x2fv glew::gles::glUniformMatrix3x2fv
#define glUniformMatrix2x4fv glew::gles::glUniformMatrix2x4fv
#define glUniformMatrix4x2fv glew::gles::glUniformMatrix4x2fv
#define glUniformMatrix3x4fv glew::gles::glUniformMatrix3x4fv
#define glUniformMatrix4x3fv glew::gles::glUniformMatrix4x3fv
#define glBlitFramebuffer glew::gles::glBlitFramebuffer
#define glRenderbufferStorageMultisample glew::gles::glRenderbufferStorageMultisample
#define glFramebufferTextureLayer glew::gles::glFramebufferTextureLayer
#define glMapBufferRange glew::gles::glMapBufferRange
#define glFlushMappedBufferRange glew::gles::glFlushMappedBufferRange
#define glBindVertexArray glew::gles::glBindVertexArray
#define glDeleteVertexArrays glew::gles::glDeleteVertexArrays
#define glGenVertexArrays glew::gles::glGenVertexArrays
#define glIsVertexArray glew::gles::glIsVertexArray
#define glGetIntegeri_v glew::gles::glGetIntegeri_v
#define glBeginTransformFeedback glew::gles::glBeginTransformFeedback
#define glEndTransformFeedback glew::gles::glEndTransformFeedback
#define glBindBufferRange glew::gles::glBindBufferRange
#define glBindBufferBase glew::gles::glBindBufferBase
#define glTransformFeedbackVaryings glew::gles::glTransformFeedbackVaryings
#define glGetTransformFeedbackVarying glew::gles::glGetTransformFeedbackVarying
#define glVertexAttribIPointer glew::gles::glVertexAttribIPointer
#define glGetVertexAttribIiv glew::gles::glGetVertexAttribIiv
#define glGetVertexAttribIuiv glew::gles::glGetVertexAttribIuiv
#define glVertexAttribI4i glew::gles::glVertexAttribI4i
#define glVertexAttribI4ui glew::gles::glVertexAttribI4ui
#define glVertexAttribI4iv glew::gles::glVertexAttribI4iv
#define glVertexAttribI4uiv glew::gles::glVertexAttribI4uiv
#define glGetUniformuiv glew::gles::glGetUniformuiv
#define glGetFragDataLocation glew::gles::glGetFragDataLocation
#define glUniform1ui glew::gles::glUniform1ui
#define glUniform2ui glew::gles::glUniform2ui
#define glUniform3ui glew::gles::glUniform3ui
#define glUniform4ui glew::gles::glUniform4ui
#define glUniform1uiv glew::gles::glUniform1uiv
#define glUniform2uiv glew::gles::glUniform2uiv
#define glUniform3uiv glew::gles::glUniform3uiv
#define glUniform4uiv glew::gles::glUniform4uiv
#define glClearBufferiv glew::gles::glClearBufferiv
#define glClearBufferuiv glew::gles::glClearBufferuiv
#define glClearBufferfv glew::gles::glClearBufferfv
#define glClearBufferfi glew::gles::glClearBufferfi
#define glGetStringi glew::gles::glGetStringi
#define glCopyBufferSubData glew::gles::glCopyBufferSubData
#define glGetUniformIndices glew::gles::glGetUniformIndices
#define glGetActiveUniformsiv glew::gles::glGetActiveUniformsiv
#define glGetUniformBlockIndex glew::gles::glGetUniformBlockIndex
#define glGetActiveUniformBlockiv glew::gles::glGetActiveUniformBlockiv
#define glGetActiveUniformBlockName glew::gles::glGetActiveUniformBlockName
#define glUniformBlockBinding glew::gles::glUniformBlockBinding
#define glDrawArraysInstanced glew::gles::glDrawArraysInstanced
#define glDrawElementsInstanced glew::gles::glDrawElementsInstanced
#define glFenceSync glew::gles::glFenceSync
#define glIsSync glew::gles::glIsSync
#define glDeleteSync glew::gles::glDeleteSync
#define glClientWaitSync glew::gles::glClientWaitSync
#define glWaitSync glew::gles::glWaitSync
#define glGetInteger64v glew::gles::glGetInteger64v
#define glGetSynciv glew::gles::glGetSynciv
#define glGetInteger64i_v glew::gles::glGetInteger64i_v
#define glGetBufferParameteri64v glew::gles::glGetBufferParameteri64v
#define glGenSamplers glew::gles::glGenSamplers
#define glDeleteSamplers glew::gles::glDeleteSamplers
#define glIsSampler glew::gles::glIsSampler
#define glBindSampler glew::gles::glBindSampler
#define glSamplerParameteri glew::gles::glSamplerParameteri
#define glSamplerParameteriv glew::gles::glSamplerParameteriv
#define glSamplerParameterf glew::gles::glSamplerParameterf
#define glSamplerParameterfv glew::gles::glSamplerParameterfv
#define glGetSamplerParameteriv glew::gles::glGetSamplerParameteriv
#define glGetSamplerParameterfv glew::gles::glGetSamplerParameterfv
#define glVertexAttribDivisor glew::gles::glVertexAttribDivisor
#define glBindTransformFeedback glew::gles::glBindTransformFeedback
#define glDeleteTransformFeedbacks glew::gles::glDeleteTransformFeedbacks
#define glGenTransformFeedbacks glew::gles::glGenTransformFeedbacks
#define glIsTransformFeedback glew::gles::glIsTransformFeedback
#define glPauseTransformFeedback glew::gles::glPauseTransformFeedback
#define glResumeTransformFeedback glew::gles::glResumeTransformFeedback
#define glGetProgramBinary glew::gles::glGetProgramBinary
#define glProgramBinary glew::gles::glProgramBinary
#define glProgramParameteri glew::gles::glProgramParameteri
#define glInvalidateFramebuffer glew::gles::glInvalidateFramebuffer
#define glInvalidateSubFramebuffer glew::gles::glInvalidateSubFramebuffer
#define glTexStorage2D glew::gles::glTexStorage2D
#define glTexStorage3D glew::gles::glTexStorage3D
#define glGetInternalformativ glew::gles::glGetInternalformativ
#define glDispatchCompute glew::gles::glDispatchCompute
#define glDispatchComputeIndirect glew::gles::glDispatchComputeIndirect
#define glDrawArraysIndirect glew::gles::glDrawArraysIndirect
#define glDrawElementsIndirect glew::gles::glDrawElementsIndirect
#define glFramebufferParameteri glew::gles::glFramebufferParameteri
#define glGetFramebufferParameteriv glew::gles::glGetFramebufferParameteriv
#define glGetProgramInterfaceiv glew::gles::glGetProgramInterfaceiv
#define glGetProgramResourceIndex glew::gles::glGetProgramResourceIndex
#define glGetProgramResourceName glew::gles::glGetProgramResourceName
#define glGetProgramResourceiv glew::gles::glGetProgramResourceiv
#define glGetProgramResourceLocation glew::gles::glGetProgramResourceLocation
#define glUseProgramStages glew::gles::glUseProgramStages
#define glActiveShaderProgram glew::gles::glActiveShaderProgram
#define glCreateShaderProgramv glew::gles::glCreateShaderProgramv
#define glBindProgramPipeline glew::gles::glBindProgramPipeline
#define glDeleteProgramPipelines glew::gles::glDeleteProgramPipelines
#define glGenProgramPipelines glew::gles::glGenProgramPipelines
#define glIsProgramPipeline glew::gles::glIsProgramPipeline
#define glGetProgramPipelineiv glew::gles::glGetProgramPipelineiv
#define glProgramUniform1i glew::gles::glProgramUniform1i
#define glProgramUniform2i glew::gles::glProgramUniform2i
#define glProgramUniform3i glew::gles::glProgramUniform3i
#define glProgramUniform4i glew::gles::glProgramUniform4i
#define glProgramUniform1ui glew::gles::glProgramUniform1ui
#define glProgramUniform2ui glew::gles::glProgramUniform2ui
#define glProgramUniform3ui glew::gles::glProgramUniform3ui
#define glProgramUniform4ui glew::gles::glProgramUniform4ui
#define glProgramUniform1f glew::gles::glProgramUniform1f
#define glProgramUniform2f glew::gles::glProgramUniform2f
#define glProgramUniform3f glew::gles::glProgramUniform3f
#define glProgramUniform4f glew::gles::glProgramUniform4f
#define glProgramUniform1iv glew::gles::glProgramUniform1iv
#define glProgramUniform2iv glew::gles::glProgramUniform2iv
#define glProgramUniform3iv glew::gles::glProgramUniform3iv
#define glProgramUniform4iv glew::gles::glProgramUniform4iv
#define glProgramUniform1uiv glew::gles::glProgramUniform1uiv
#define glProgramUniform2uiv glew::gles::glProgramUniform2uiv
#define glProgramUniform3uiv glew::gles::glProgramUniform3uiv
#define glProgramUniform4uiv glew::gles::glProgramUniform4uiv
#define glProgramUniform1fv glew::gles::glProgramUniform1fv
#define glProgramUniform2fv glew::gles::glProgramUniform2fv
#define glProgramUniform3fv glew::gles::glProgramUniform3fv
#define glProgramUniform4fv glew::gles::glProgramUniform4fv
#define glProgramUniformMatrix2fv glew::gles::glProgramUniformMatrix2fv
#define glProgramUniformMatrix3fv glew::gles::glProgramUniformMatrix3fv
#define glProgramUniformMatrix4fv glew::gles::glProgramUniformMatrix4fv
#define glProgramUniformMatrix2x3fv glew::gles::glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix3x2fv glew::gles::glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix2x4fv glew::gles::glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix4x2fv glew::gles::glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix3x4fv glew::gles::glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix4x3fv glew::gles::glProgramUniformMatrix4x3fv
#define glValidateProgramPipeline glew::gles::glValidateProgramPipeline
#define glGetProgramPipelineInfoLog glew::gles::glGetProgramPipelineInfoLog
#define glBindImageTexture glew::gles::glBindImageTexture
#define glGetBooleani_v glew::gles::glGetBooleani_v
#define glMemoryBarrier glew::gles::glMemoryBarrier
#define glMemoryBarrierByRegion glew::gles::glMemoryBarrierByRegion
#define glTexStorage2DMultisample glew::gles::glTexStorage2DMultisample
#define glGetMultisamplefv glew::gles::glGetMultisamplefv
#define glSampleMaski glew::gles::glSampleMaski
#define glGetTexLevelParameteriv glew::gles::glGetTexLevelParameteriv
#define glGetTexLevelParameterfv glew::gles::glGetTexLevelParameterfv
#define glBindVertexBuffer glew::gles::glBindVertexBuffer
#define glVertexAttribFormat glew::gles::glVertexAttribFormat
#define glVertexAttribIFormat glew::gles::glVertexAttribIFormat
#define glVertexAttribBinding glew::gles::glVertexAttribBinding
#define glVertexBindingDivisor glew::gles::glVertexBindingDivisor
#define glGetPerfMonitorGroupsAMD glew::gles::glGetPerfMonitorGroupsAMD
#define glGetPerfMonitorCountersAMD glew::gles::glGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD glew::gles::glGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorCounterStringAMD glew::gles::glGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCounterInfoAMD glew::gles::glGetPerfMonitorCounterInfoAMD
#define glGenPerfMonitorsAMD glew::gles::glGenPerfMonitorsAMD
#define glDeletePerfMonitorsAMD glew::gles::glDeletePerfMonitorsAMD
#define glSelectPerfMonitorCountersAMD glew::gles::glSelectPerfMonitorCountersAMD
#define glBeginPerfMonitorAMD glew::gles::glBeginPerfMonitorAMD
#define glEndPerfMonitorAMD glew::gles::glEndPerfMonitorAMD
#define glGetPerfMonitorCounterDataAMD glew::gles::glGetPerfMonitorCounterDataAMD
#define glBlitFramebufferANGLE glew::gles::glBlitFramebufferANGLE
#define glRenderbufferStorageMultisampleANGLE glew::gles::glRenderbufferStorageMultisampleANGLE
#define glDrawArraysInstancedANGLE glew::gles::glDrawArraysInstancedANGLE
#define glDrawElementsInstancedANGLE glew::gles::glDrawElementsInstancedANGLE
#define glVertexAttribDivisorANGLE glew::gles::glVertexAttribDivisorANGLE
#define glGetTranslatedShaderSourceANGLE glew::gles::glGetTranslatedShaderSourceANGLE
#define glCopyTextureLevelsAPPLE glew::gles::glCopyTextureLevelsAPPLE
#define glRenderbufferStorageMultisampleAPPLE glew::gles::glRenderbufferStorageMultisampleAPPLE
#define glResolveMultisampleFramebufferAPPLE glew::gles::glResolveMultisampleFramebufferAPPLE
#define glFenceSyncAPPLE glew::gles::glFenceSyncAPPLE
#define glIsSyncAPPLE glew::gles::glIsSyncAPPLE
#define glDeleteSyncAPPLE glew::gles::glDeleteSyncAPPLE
#define glClientWaitSyncAPPLE glew::gles::glClientWaitSyncAPPLE
#define glWaitSyncAPPLE glew::gles::glWaitSyncAPPLE
#define glGetInteger64vAPPLE glew::gles::glGetInteger64vAPPLE
#define glGetSyncivAPPLE glew::gles::glGetSyncivAPPLE
#define glDrawArraysInstancedBaseInstanceEXT glew::gles::glDrawArraysInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseInstanceEXT glew::gles::glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT glew::gles::glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glBufferStorageEXT glew::gles::glBufferStorageEXT
#define glCopyImageSubDataEXT glew::gles::glCopyImageSubDataEXT
#define glLabelObjectEXT glew::gles::glLabelObjectEXT
#define glGetObjectLabelEXT glew::gles::glGetObjectLabelEXT
#define glInsertEventMarkerEXT glew::gles::glInsertEventMarkerEXT
#define glPushGroupMarkerEXT glew::gles::glPushGroupMarkerEXT
#define glPopGroupMarkerEXT glew::gles::glPopGroupMarkerEXT
#define glDiscardFramebufferEXT glew::gles::glDiscardFramebufferEXT
#define glGenQueriesEXT glew::gles::glGenQueriesEXT
#define glDeleteQueriesEXT glew::gles::glDeleteQueriesEXT
#define glIsQueryEXT glew::gles::glIsQueryEXT
#define glBeginQueryEXT glew::gles::glBeginQueryEXT
#define glEndQueryEXT glew::gles::glEndQueryEXT
#define glQueryCounterEXT glew::gles::glQueryCounterEXT
#define glGetQueryivEXT glew::gles::glGetQueryivEXT
#define glGetQueryObjectivEXT glew::gles::glGetQueryObjectivEXT
#define glGetQueryObjectuivEXT glew::gles::glGetQueryObjectuivEXT
#define glGetQueryObjecti64vEXT glew::gles::glGetQueryObjecti64vEXT
#define glGetQueryObjectui64vEXT glew::gles::glGetQueryObjectui64vEXT
#define glDrawBuffersEXT glew::gles::glDrawBuffersEXT
#define glEnableiEXT glew::gles::glEnableiEXT
#define glDisableiEXT glew::gles::glDisableiEXT
#define glBlendEquationiEXT glew::gles::glBlendEquationiEXT
#define glBlendEquationSeparateiEXT glew::gles::glBlendEquationSeparateiEXT
#define glBlendFunciEXT glew::gles::glBlendFunciEXT
#define glBlendFuncSeparateiEXT glew::gles::glBlendFuncSeparateiEXT
#define glColorMaskiEXT glew::gles::glColorMaskiEXT
#define glIsEnablediEXT glew::gles::glIsEnablediEXT
#define glDrawElementsBaseVertexEXT glew::gles::glDrawElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexEXT glew::gles::glDrawRangeElementsBaseVertexEXT
#define glDrawElementsInstancedBaseVertexEXT glew::gles::glDrawElementsInstancedBaseVertexEXT
#define glMultiDrawElementsBaseVertexEXT glew::gles::glMultiDrawElementsBaseVertexEXT
#define glDrawArraysInstancedEXT glew::gles::glDrawArraysInstancedEXT
#define glDrawElementsInstancedEXT glew::gles::glDrawElementsInstancedEXT
#define glFramebufferTextureEXT glew::gles::glFramebufferTextureEXT
#define glVertexAttribDivisorEXT glew::gles::glVertexAttribDivisorEXT
#define glMapBufferRangeEXT glew::gles::glMapBufferRangeEXT
#define glFlushMappedBufferRangeEXT glew::gles::glFlushMappedBufferRangeEXT
#define glMultiDrawArraysEXT glew::gles::glMultiDrawArraysEXT
#define glMultiDrawElementsEXT glew::gles::glMultiDrawElementsEXT
#define glMultiDrawArraysIndirectEXT glew::gles::glMultiDrawArraysIndirectEXT
#define glMultiDrawElementsIndirectEXT glew::gles::glMultiDrawElementsIndirectEXT
#define glRenderbufferStorageMultisampleEXT glew::gles::glRenderbufferStorageMultisampleEXT
#define glFramebufferTexture2DMultisampleEXT glew::gles::glFramebufferTexture2DMultisampleEXT
#define glReadBufferIndexedEXT glew::gles::glReadBufferIndexedEXT
#define glDrawBuffersIndexedEXT glew::gles::glDrawBuffersIndexedEXT
#define glGetIntegeri_vEXT glew::gles::glGetIntegeri_vEXT
#define glPrimitiveBoundingBoxEXT glew::gles::glPrimitiveBoundingBoxEXT
#define glRasterSamplesEXT glew::gles::glRasterSamplesEXT
#define glGetGraphicsResetStatusEXT glew::gles::glGetGraphicsResetStatusEXT
#define glReadnPixelsEXT glew::gles::glReadnPixelsEXT
#define glGetnUniformfvEXT glew::gles::glGetnUniformfvEXT
#define glGetnUniformivEXT glew::gles::glGetnUniformivEXT
#define glActiveShaderProgramEXT glew::gles::glActiveShaderProgramEXT
#define glBindProgramPipelineEXT glew::gles::glBindProgramPipelineEXT
#define glCreateShaderProgramvEXT glew::gles::glCreateShaderProgramvEXT
#define glDeleteProgramPipelinesEXT glew::gles::glDeleteProgramPipelinesEXT
#define glGenProgramPipelinesEXT glew::gles::glGenProgramPipelinesEXT
#define glGetProgramPipelineInfoLogEXT glew::gles::glGetProgramPipelineInfoLogEXT
#define glGetProgramPipelineivEXT glew::gles::glGetProgramPipelineivEXT
#define glIsProgramPipelineEXT glew::gles::glIsProgramPipelineEXT
#define glProgramParameteriEXT glew::gles::glProgramParameteriEXT
#define glProgramUniform1fEXT glew::gles::glProgramUniform1fEXT
#define glProgramUniform1fvEXT glew::gles::glProgramUniform1fvEXT
#define glProgramUniform1iEXT glew::gles::glProgramUniform1iEXT
#define glProgramUniform1ivEXT glew::gles::glProgramUniform1ivEXT
#define glProgramUniform2fEXT glew::gles::glProgramUniform2fEXT
#define glProgramUniform2fvEXT glew::gles::glProgramUniform2fvEXT
#define glProgramUniform2iEXT glew::gles::glProgramUniform2iEXT
#define glProgramUniform2ivEXT glew::gles::glProgramUniform2ivEXT
#define glProgramUniform3fEXT glew::gles::glProgramUniform3fEXT
#define glProgramUniform3fvEXT glew::gles::glProgramUniform3fvEXT
#define glProgramUniform3iEXT glew::gles::glProgramUniform3iEXT
#define glProgramUniform3ivEXT glew::gles::glProgramUniform3ivEXT
#define glProgramUniform4fEXT glew::gles::glProgramUniform4fEXT
#define glProgramUniform4fvEXT glew::gles::glProgramUniform4fvEXT
#define glProgramUniform4iEXT glew::gles::glProgramUniform4iEXT
#define glProgramUniform4ivEXT glew::gles::glProgramUniform4ivEXT
#define glProgramUniformMatrix2fvEXT glew::gles::glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix3fvEXT glew::gles::glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix4fvEXT glew::gles::glProgramUniformMatrix4fvEXT
#define glUseProgramStagesEXT glew::gles::glUseProgramStagesEXT
#define glValidateProgramPipelineEXT glew::gles::glValidateProgramPipelineEXT
#define glProgramUniform1uiEXT glew::gles::glProgramUniform1uiEXT
#define glProgramUniform2uiEXT glew::gles::glProgramUniform2uiEXT
#define glProgramUniform3uiEXT glew::gles::glProgramUniform3uiEXT
#define glProgramUniform4uiEXT glew::gles::glProgramUniform4uiEXT
#define glProgramUniform1uivEXT glew::gles::glProgramUniform1uivEXT
#define glProgramUniform2uivEXT glew::gles::glProgramUniform2uivEXT
#define glProgramUniform3uivEXT glew::gles::glProgramUniform3uivEXT
#define glProgramUniform4uivEXT glew::gles::glProgramUniform4uivEXT
#define glProgramUniformMatrix2x3fvEXT glew::gles::glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix3x2fvEXT glew::gles::glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix2x4fvEXT glew::gles::glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix4x2fvEXT glew::gles::glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix3x4fvEXT glew::gles::glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4x3fvEXT glew::gles::glProgramUniformMatrix4x3fvEXT
#define glTexPageCommitmentARB glew::gles::glTexPageCommitmentARB
#define glPatchParameteriEXT glew::gles::glPatchParameteriEXT
#define glTexParameterIivEXT glew::gles::glTexParameterIivEXT
#define glTexParameterIuivEXT glew::gles::glTexParameterIuivEXT
#define glGetTexParameterIivEXT glew::gles::glGetTexParameterIivEXT
#define glGetTexParameterIuivEXT glew::gles::glGetTexParameterIuivEXT
#define glSamplerParameterIivEXT glew::gles::glSamplerParameterIivEXT
#define glSamplerParameterIuivEXT glew::gles::glSamplerParameterIuivEXT
#define glGetSamplerParameterIivEXT glew::gles::glGetSamplerParameterIivEXT
#define glGetSamplerParameterIuivEXT glew::gles::glGetSamplerParameterIuivEXT
#define glTexBufferEXT glew::gles::glTexBufferEXT
#define glTexBufferRangeEXT glew::gles::glTexBufferRangeEXT
#define glTexStorage1DEXT glew::gles::glTexStorage1DEXT
#define glTexStorage2DEXT glew::gles::glTexStorage2DEXT
#define glTexStorage3DEXT glew::gles::glTexStorage3DEXT
#define glTextureStorage1DEXT glew::gles::glTextureStorage1DEXT
#define glTextureStorage2DEXT glew::gles::glTextureStorage2DEXT
#define glTextureStorage3DEXT glew::gles::glTextureStorage3DEXT
#define glTextureViewEXT glew::gles::glTextureViewEXT
#define glRenderbufferStorageMultisampleIMG glew::gles::glRenderbufferStorageMultisampleIMG
#define glFramebufferTexture2DMultisampleIMG glew::gles::glFramebufferTexture2DMultisampleIMG
#define glBeginPerfQueryINTEL glew::gles::glBeginPerfQueryINTEL
#define glCreatePerfQueryINTEL glew::gles::glCreatePerfQueryINTEL
#define glDeletePerfQueryINTEL glew::gles::glDeletePerfQueryINTEL
#define glEndPerfQueryINTEL glew::gles::glEndPerfQueryINTEL
#define glGetFirstPerfQueryIdINTEL glew::gles::glGetFirstPerfQueryIdINTEL
#define glGetNextPerfQueryIdINTEL glew::gles::glGetNextPerfQueryIdINTEL
#define glGetPerfCounterInfoINTEL glew::gles::glGetPerfCounterInfoINTEL
#define glGetPerfQueryDataINTEL glew::gles::glGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL glew::gles::glGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL glew::gles::glGetPerfQueryInfoINTEL
#define glBlendBarrierKHR glew::gles::glBlendBarrierKHR
#define glDebugMessageControlKHR glew::gles::glDebugMessageControlKHR
#define glDebugMessageInsertKHR glew::gles::glDebugMessageInsertKHR
#define glDebugMessageCallbackKHR glew::gles::glDebugMessageCallbackKHR
#define glGetDebugMessageLogKHR glew::gles::glGetDebugMessageLogKHR
#define glPushDebugGroupKHR glew::gles::glPushDebugGroupKHR
#define glPopDebugGroupKHR glew::gles::glPopDebugGroupKHR
#define glObjectLabelKHR glew::gles::glObjectLabelKHR
#define glGetObjectLabelKHR glew::gles::glGetObjectLabelKHR
#define glObjectPtrLabelKHR glew::gles::glObjectPtrLabelKHR
#define glGetObjectPtrLabelKHR glew::gles::glGetObjectPtrLabelKHR
#define glGetPointervKHR glew::gles::glGetPointervKHR
#define glGetGraphicsResetStatusKHR glew::gles::glGetGraphicsResetStatusKHR
#define glReadnPixelsKHR glew::gles::glReadnPixelsKHR
#define glGetnUniformfvKHR glew::gles::glGetnUniformfvKHR
#define glGetnUniformivKHR glew::gles::glGetnUniformivKHR
#define glGetnUniformuivKHR glew::gles::glGetnUniformuivKHR
#define glGetTextureHandleNV glew::gles::glGetTextureHandleNV
#define glGetTextureSamplerHandleNV glew::gles::glGetTextureSamplerHandleNV
#define glMakeTextureHandleResidentNV glew::gles::glMakeTextureHandleResidentNV
#define glMakeTextureHandleNonResidentNV glew::gles::glMakeTextureHandleNonResidentNV
#define glGetImageHandleNV glew::gles::glGetImageHandleNV
#define glMakeImageHandleResidentNV glew::gles::glMakeImageHandleResidentNV
#define glMakeImageHandleNonResidentNV glew::gles::glMakeImageHandleNonResidentNV
#define glUniformHandleui64NV glew::gles::glUniformHandleui64NV
#define glUniformHandleui64vNV glew::gles::glUniformHandleui64vNV
#define glProgramUniformHandleui64NV glew::gles::glProgramUniformHandleui64NV
#define glProgramUniformHandleui64vNV glew::gles::glProgramUniformHandleui64vNV
#define glIsTextureHandleResidentNV glew::gles::glIsTextureHandleResidentNV
#define glIsImageHandleResidentNV glew::gles::glIsImageHandleResidentNV
#define glBlendParameteriNV glew::gles::glBlendParameteriNV
#define glBlendBarrierNV glew::gles::glBlendBarrierNV
#define glBeginConditionalRenderNV glew::gles::glBeginConditionalRenderNV
#define glEndConditionalRenderNV glew::gles::glEndConditionalRenderNV
#define glSubpixelPrecisionBiasNV glew::gles::glSubpixelPrecisionBiasNV
#define glCopyBufferSubDataNV glew::gles::glCopyBufferSubDataNV
#define glCoverageMaskNV glew::gles::glCoverageMaskNV
#define glCoverageOperationNV glew::gles::glCoverageOperationNV
#define glDrawBuffersNV glew::gles::glDrawBuffersNV
#define glDrawArraysInstancedNV glew::gles::glDrawArraysInstancedNV
#define glDrawElementsInstancedNV glew::gles::glDrawElementsInstancedNV
#define glDeleteFencesNV glew::gles::glDeleteFencesNV
#define glGenFencesNV glew::gles::glGenFencesNV
#define glIsFenceNV glew::gles::glIsFenceNV
#define glTestFenceNV glew::gles::glTestFenceNV
#define glGetFenceivNV glew::gles::glGetFenceivNV
#define glFinishFenceNV glew::gles::glFinishFenceNV
#define glSetFenceNV glew::gles::glSetFenceNV
#define glFragmentCoverageColorNV glew::gles::glFragmentCoverageColorNV
#define glBlitFramebufferNV glew::gles::glBlitFramebufferNV
#define glCoverageModulationTableNV glew::gles::glCoverageModulationTableNV
#define glGetCoverageModulationTableNV glew::gles::glGetCoverageModulationTableNV
#define glCoverageModulationNV glew::gles::glCoverageModulationNV
#define glRenderbufferStorageMultisampleNV glew::gles::glRenderbufferStorageMultisampleNV
#define glVertexAttribDivisorNV glew::gles::glVertexAttribDivisorNV
#define glGetInternalformatSampleivNV glew::gles::glGetInternalformatSampleivNV
#define glUniformMatrix2x3fvNV glew::gles::glUniformMatrix2x3fvNV
#define glUniformMatrix3x2fvNV glew::gles::glUniformMatrix3x2fvNV
#define glUniformMatrix2x4fvNV glew::gles::glUniformMatrix2x4fvNV
#define glUniformMatrix4x2fvNV glew::gles::glUniformMatrix4x2fvNV
#define glUniformMatrix3x4fvNV glew::gles::glUniformMatrix3x4fvNV
#define glUniformMatrix4x3fvNV glew::gles::glUniformMatrix4x3fvNV
#define glGenPathsNV glew::gles::glGenPathsNV
#define glDeletePathsNV glew::gles::glDeletePathsNV
#define glIsPathNV glew::gles::glIsPathNV
#define glPathCommandsNV glew::gles::glPathCommandsNV
#define glPathCoordsNV glew::gles::glPathCoordsNV
#define glPathSubCommandsNV glew::gles::glPathSubCommandsNV
#define glPathSubCoordsNV glew::gles::glPathSubCoordsNV
#define glPathStringNV glew::gles::glPathStringNV
#define glPathGlyphsNV glew::gles::glPathGlyphsNV
#define glPathGlyphRangeNV glew::gles::glPathGlyphRangeNV
#define glWeightPathsNV glew::gles::glWeightPathsNV
#define glCopyPathNV glew::gles::glCopyPathNV
#define glInterpolatePathsNV glew::gles::glInterpolatePathsNV
#define glTransformPathNV glew::gles::glTransformPathNV
#define glPathParameterivNV glew::gles::glPathParameterivNV
#define glPathParameteriNV glew::gles::glPathParameteriNV
#define glPathParameterfvNV glew::gles::glPathParameterfvNV
#define glPathParameterfNV glew::gles::glPathParameterfNV
#define glPathDashArrayNV glew::gles::glPathDashArrayNV
#define glPathStencilFuncNV glew::gles::glPathStencilFuncNV
#define glPathStencilDepthOffsetNV glew::gles::glPathStencilDepthOffsetNV
#define glStencilFillPathNV glew::gles::glStencilFillPathNV
#define glStencilStrokePathNV glew::gles::glStencilStrokePathNV
#define glStencilFillPathInstancedNV glew::gles::glStencilFillPathInstancedNV
#define glStencilStrokePathInstancedNV glew::gles::glStencilStrokePathInstancedNV
#define glPathCoverDepthFuncNV glew::gles::glPathCoverDepthFuncNV
#define glCoverFillPathNV glew::gles::glCoverFillPathNV
#define glCoverStrokePathNV glew::gles::glCoverStrokePathNV
#define glCoverFillPathInstancedNV glew::gles::glCoverFillPathInstancedNV
#define glCoverStrokePathInstancedNV glew::gles::glCoverStrokePathInstancedNV
#define glGetPathParameterivNV glew::gles::glGetPathParameterivNV
#define glGetPathParameterfvNV glew::gles::glGetPathParameterfvNV
#define glGetPathCommandsNV glew::gles::glGetPathCommandsNV
#define glGetPathCoordsNV glew::gles::glGetPathCoordsNV
#define glGetPathDashArrayNV glew::gles::glGetPathDashArrayNV
#define glGetPathMetricsNV glew::gles::glGetPathMetricsNV
#define glGetPathMetricRangeNV glew::gles::glGetPathMetricRangeNV
#define glGetPathSpacingNV glew::gles::glGetPathSpacingNV
#define glIsPointInFillPathNV glew::gles::glIsPointInFillPathNV
#define glIsPointInStrokePathNV glew::gles::glIsPointInStrokePathNV
#define glGetPathLengthNV glew::gles::glGetPathLengthNV
#define glPointAlongPathNV glew::gles::glPointAlongPathNV
#define glMatrixLoad3x2fNV glew::gles::glMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV glew::gles::glMatrixLoad3x3fNV
#define glMatrixLoadTranspose3x3fNV glew::gles::glMatrixLoadTranspose3x3fNV
#define glMatrixMult3x2fNV glew::gles::glMatrixMult3x2fNV
#define glMatrixMult3x3fNV glew::gles::glMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV glew::gles::glMatrixMultTranspose3x3fNV
#define glStencilThenCoverFillPathNV glew::gles::glStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathNV glew::gles::glStencilThenCoverStrokePathNV
#define glStencilThenCoverFillPathInstancedNV glew::gles::glStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverStrokePathInstancedNV glew::gles::glStencilThenCoverStrokePathInstancedNV
#define glPathGlyphIndexRangeNV glew::gles::glPathGlyphIndexRangeNV
#define glPathGlyphIndexArrayNV glew::gles::glPathGlyphIndexArrayNV
#define glPathMemoryGlyphIndexArrayNV glew::gles::glPathMemoryGlyphIndexArrayNV
#define glProgramPathFragmentInputGenNV glew::gles::glProgramPathFragmentInputGenNV
#define glGetProgramResourcefvNV glew::gles::glGetProgramResourcefvNV
#define glPolygonModeNV glew::gles::glPolygonModeNV
#define glReadBufferNV glew::gles::glReadBufferNV
#define glFramebufferSampleLocationsfvNV glew::gles::glFramebufferSampleLocationsfvNV
#define glNamedFramebufferSampleLocationsfvNV glew::gles::glNamedFramebufferSampleLocationsfvNV
#define glResolveDepthValuesNV glew::gles::glResolveDepthValuesNV
#define glViewportArrayvNV glew::gles::glViewportArrayvNV
#define glViewportIndexedfNV glew::gles::glViewportIndexedfNV
#define glViewportIndexedfvNV glew::gles::glViewportIndexedfvNV
#define glScissorArrayvNV glew::gles::glScissorArrayvNV
#define glScissorIndexedNV glew::gles::glScissorIndexedNV
#define glScissorIndexedvNV glew::gles::glScissorIndexedvNV
#define glDepthRangeArrayfvNV glew::gles::glDepthRangeArrayfvNV
#define glDepthRangeIndexedfNV glew::gles::glDepthRangeIndexedfNV
#define glGetFloati_vNV glew::gles::glGetFloati_vNV
#define glEnableiNV glew::gles::glEnableiNV
#define glDisableiNV glew::gles::glDisableiNV
#define glIsEnablediNV glew::gles::glIsEnablediNV
#define glEGLImageTargetTexture2DOES glew::gles::glEGLImageTargetTexture2DOES
#define glEGLImageTargetRenderbufferStorageOES glew::gles::glEGLImageTargetRenderbufferStorageOES
#define glCopyImageSubDataOES glew::gles::glCopyImageSubDataOES
#define glEnableiOES glew::gles::glEnableiOES
#define glDisableiOES glew::gles::glDisableiOES
#define glBlendEquationiOES glew::gles::glBlendEquationiOES
#define glBlendEquationSeparateiOES glew::gles::glBlendEquationSeparateiOES
#define glBlendFunciOES glew::gles::glBlendFunciOES
#define glBlendFuncSeparateiOES glew::gles::glBlendFuncSeparateiOES
#define glColorMaskiOES glew::gles::glColorMaskiOES
#define glIsEnablediOES glew::gles::glIsEnablediOES
#define glDrawElementsBaseVertexOES glew::gles::glDrawElementsBaseVertexOES
#define glDrawRangeElementsBaseVertexOES glew::gles::glDrawRangeElementsBaseVertexOES
#define glDrawElementsInstancedBaseVertexOES glew::gles::glDrawElementsInstancedBaseVertexOES
#define glMultiDrawElementsBaseVertexOES glew::gles::glMultiDrawElementsBaseVertexOES
#define glFramebufferTextureOES glew::gles::glFramebufferTextureOES
#define glGetProgramBinaryOES glew::gles::glGetProgramBinaryOES
#define glProgramBinaryOES glew::gles::glProgramBinaryOES
#define glMapBufferOES glew::gles::glMapBufferOES
#define glUnmapBufferOES glew::gles::glUnmapBufferOES
#define glGetBufferPointervOES glew::gles::glGetBufferPointervOES
#define glPrimitiveBoundingBoxOES glew::gles::glPrimitiveBoundingBoxOES
#define glMinSampleShadingOES glew::gles::glMinSampleShadingOES
#define glPatchParameteriOES glew::gles::glPatchParameteriOES
#define glTexImage3DOES glew::gles::glTexImage3DOES
#define glTexSubImage3DOES glew::gles::glTexSubImage3DOES
#define glCopyTexSubImage3DOES glew::gles::glCopyTexSubImage3DOES
#define glCompressedTexImage3DOES glew::gles::glCompressedTexImage3DOES
#define glCompressedTexSubImage3DOES glew::gles::glCompressedTexSubImage3DOES
#define glFramebufferTexture3DOES glew::gles::glFramebufferTexture3DOES
#define glTexParameterIivOES glew::gles::glTexParameterIivOES
#define glTexParameterIuivOES glew::gles::glTexParameterIuivOES
#define glGetTexParameterIivOES glew::gles::glGetTexParameterIivOES
#define glGetTexParameterIuivOES glew::gles::glGetTexParameterIuivOES
#define glSamplerParameterIivOES glew::gles::glSamplerParameterIivOES
#define glSamplerParameterIuivOES glew::gles::glSamplerParameterIuivOES
#define glGetSamplerParameterIivOES glew::gles::glGetSamplerParameterIivOES
#define glGetSamplerParameterIuivOES glew::gles::glGetSamplerParameterIuivOES
#define glTexBufferOES glew::gles::glTexBufferOES
#define glTexBufferRangeOES glew::gles::glTexBufferRangeOES
#define glTexStorage3DMultisampleOES glew::gles::glTexStorage3DMultisampleOES
#define glTextureViewOES glew::gles::glTextureViewOES
#define glBindVertexArrayOES glew::gles::glBindVertexArrayOES
#define glDeleteVertexArraysOES glew::gles::glDeleteVertexArraysOES
#define glGenVertexArraysOES glew::gles::glGenVertexArraysOES
#define glIsVertexArrayOES glew::gles::glIsVertexArrayOES
#define glFramebufferTextureMultiviewOVR glew::gles::glFramebufferTextureMultiviewOVR
#define glAlphaFuncQCOM glew::gles::glAlphaFuncQCOM
#define glGetDriverControlsQCOM glew::gles::glGetDriverControlsQCOM
#define glGetDriverControlStringQCOM glew::gles::glGetDriverControlStringQCOM
#define glEnableDriverControlQCOM glew::gles::glEnableDriverControlQCOM
#define glDisableDriverControlQCOM glew::gles::glDisableDriverControlQCOM
#define glExtGetTexturesQCOM glew::gles::glExtGetTexturesQCOM
#define glExtGetBuffersQCOM glew::gles::glExtGetBuffersQCOM
#define glExtGetRenderbuffersQCOM glew::gles::glExtGetRenderbuffersQCOM
#define glExtGetFramebuffersQCOM glew::gles::glExtGetFramebuffersQCOM
#define glExtGetTexLevelParameterivQCOM glew::gles::glExtGetTexLevelParameterivQCOM
#define glExtTexObjectStateOverrideiQCOM glew::gles::glExtTexObjectStateOverrideiQCOM
#define glExtGetTexSubImageQCOM glew::gles::glExtGetTexSubImageQCOM
#define glExtGetBufferPointervQCOM glew::gles::glExtGetBufferPointervQCOM
#define glExtGetShadersQCOM glew::gles::glExtGetShadersQCOM
#define glExtGetProgramsQCOM glew::gles::glExtGetProgramsQCOM
#define glExtIsProgramBinaryQCOM glew::gles::glExtIsProgramBinaryQCOM
#define glExtGetProgramBinarySourceQCOM glew::gles::glExtGetProgramBinarySourceQCOM
#define glStartTilingQCOM glew::gles::glStartTilingQCOM
#define glEndTilingQCOM glew::gles::glEndTilingQCOM

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLES_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
