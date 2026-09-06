////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glReadBuffer (GLenum src)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glReadBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glReadBuffer)
  {
    prototypeCalled = true;
    glesConfig.m_glReadBuffer (src);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDrawRangeElements
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDrawRangeElements)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawRangeElements (mode, start, end, count, type, indices);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glTexImage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glTexImage3D)
  {
    prototypeCalled = true;
    glesConfig.m_glTexImage3D (target, level, internalformat, width, height, depth, border, format, type, pixels);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glTexSubImage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glTexSubImage3D)
  {
    prototypeCalled = true;
    glesConfig.m_glTexSubImage3D (target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glCopyTexSubImage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glCopyTexSubImage3D)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyTexSubImage3D (target, level, xoffset, yoffset, zoffset, x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glCompressedTexImage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glCompressedTexImage3D)
  {
    prototypeCalled = true;
    glesConfig.m_glCompressedTexImage3D (target, level, internalformat, width, height, depth, border, imageSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glCompressedTexSubImage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glCompressedTexSubImage3D)
  {
    prototypeCalled = true;
    glesConfig.m_glCompressedTexSubImage3D (target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenQueries (GLsizei n, GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGenQueries
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGenQueries)
  {
    prototypeCalled = true;
    glesConfig.m_glGenQueries (n, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteQueries (GLsizei n, const GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDeleteQueries
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDeleteQueries)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteQueries (n, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsQuery (GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glIsQuery
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glIsQuery)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsQuery (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBeginQuery (GLenum target, GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBeginQuery
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBeginQuery)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginQuery (target, id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndQuery (GLenum target)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glEndQuery
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glEndQuery)
  {
    prototypeCalled = true;
    glesConfig.m_glEndQuery (target);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryiv (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetQueryiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetQueryiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryiv (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetQueryObjectuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetQueryObjectuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryObjectuiv (id, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glUnmapBuffer (GLenum target)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUnmapBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUnmapBuffer)
  {
    prototypeCalled = true;
    result = glesConfig.m_glUnmapBuffer (target);
  }
  // GL_OES_mapbuffer - glUnmapBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_mapbuffer] && glesConfig.m_glUnmapBufferOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glUnmapBufferOES (target);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetBufferPointerv (GLenum target, GLenum pname, void ** params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetBufferPointerv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetBufferPointerv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetBufferPointerv (target, pname, params);
  }
  // GL_OES_mapbuffer - glGetBufferPointerv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_mapbuffer] && glesConfig.m_glGetBufferPointervOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetBufferPointervOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawBuffers (GLsizei n, const GLenum * bufs)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDrawBuffers
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDrawBuffers)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawBuffers (n, bufs);
  }
  // GL_EXT_draw_buffers - glDrawBuffers
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers] && glesConfig.m_glDrawBuffersEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawBuffersEXT (n, bufs);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformMatrix2x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformMatrix2x3fv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix2x3fv (location, count, transpose, value);
  }
  // GL_NV_non_square_matrices - glUniformMatrix2x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix2x3fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix2x3fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformMatrix3x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformMatrix3x2fv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix3x2fv (location, count, transpose, value);
  }
  // GL_NV_non_square_matrices - glUniformMatrix3x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix3x2fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix3x2fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformMatrix2x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformMatrix2x4fv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix2x4fv (location, count, transpose, value);
  }
  // GL_NV_non_square_matrices - glUniformMatrix2x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix2x4fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix2x4fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformMatrix4x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformMatrix4x2fv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix4x2fv (location, count, transpose, value);
  }
  // GL_NV_non_square_matrices - glUniformMatrix4x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix4x2fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix4x2fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformMatrix3x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformMatrix3x4fv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix3x4fv (location, count, transpose, value);
  }
  // GL_NV_non_square_matrices - glUniformMatrix3x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix3x4fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix3x4fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformMatrix4x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformMatrix4x3fv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix4x3fv (location, count, transpose, value);
  }
  // GL_NV_non_square_matrices - glUniformMatrix4x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix4x3fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix4x3fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBlitFramebuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBlitFramebuffer)
  {
    prototypeCalled = true;
    glesConfig.m_glBlitFramebuffer (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  // GL_NV_framebuffer_blit - glBlitFramebuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_blit] && glesConfig.m_glBlitFramebufferNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBlitFramebufferNV (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glRenderbufferStorageMultisample
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glRenderbufferStorageMultisample)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisample (target, samples, internalformat, width, height);
  }
  // GL_EXT_multisampled_render_to_texture - glRenderbufferStorageMultisample
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multisampled_render_to_texture] && glesConfig.m_glRenderbufferStorageMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleEXT (target, samples, internalformat, width, height);
  }
  // GL_NV_framebuffer_multisample - glRenderbufferStorageMultisample
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_multisample] && glesConfig.m_glRenderbufferStorageMultisampleNV)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleNV (target, samples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glFramebufferTextureLayer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glFramebufferTextureLayer)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureLayer (target, attachment, texture, level, layer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_gles_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  void * result = ((void *)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glMapBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glMapBufferRange)
  {
    prototypeCalled = true;
    result = glesConfig.m_glMapBufferRange (target, offset, length, access);
  }
  // GL_EXT_map_buffer_range - glMapBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_map_buffer_range] && glesConfig.m_glMapBufferRangeEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glMapBufferRangeEXT (target, offset, length, access);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glFlushMappedBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glFlushMappedBufferRange)
  {
    prototypeCalled = true;
    glesConfig.m_glFlushMappedBufferRange (target, offset, length);
  }
  // GL_EXT_map_buffer_range - glFlushMappedBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_map_buffer_range] && glesConfig.m_glFlushMappedBufferRangeEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFlushMappedBufferRangeEXT (target, offset, length);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindVertexArray (GLuint array)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBindVertexArray
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBindVertexArray)
  {
    prototypeCalled = true;
    glesConfig.m_glBindVertexArray (array);
  }
  // GL_OES_vertex_array_object - glBindVertexArray
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glBindVertexArrayOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBindVertexArrayOES (array);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteVertexArrays (GLsizei n, const GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDeleteVertexArrays
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDeleteVertexArrays)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteVertexArrays (n, arrays);
  }
  // GL_OES_vertex_array_object - glDeleteVertexArrays
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glDeleteVertexArraysOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteVertexArraysOES (n, arrays);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenVertexArrays (GLsizei n, GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGenVertexArrays
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGenVertexArrays)
  {
    prototypeCalled = true;
    glesConfig.m_glGenVertexArrays (n, arrays);
  }
  // GL_OES_vertex_array_object - glGenVertexArrays
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glGenVertexArraysOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGenVertexArraysOES (n, arrays);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsVertexArray (GLuint array)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glIsVertexArray
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glIsVertexArray)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsVertexArray (array);
  }
  // GL_OES_vertex_array_object - glIsVertexArray
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glIsVertexArrayOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsVertexArrayOES (array);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetIntegeri_v (GLenum target, GLuint index, GLint * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetIntegeri_v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetIntegeri_v)
  {
    prototypeCalled = true;
    glesConfig.m_glGetIntegeri_v (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBeginTransformFeedback (GLenum primitiveMode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBeginTransformFeedback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBeginTransformFeedback)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginTransformFeedback (primitiveMode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndTransformFeedback ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glEndTransformFeedback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glEndTransformFeedback)
  {
    prototypeCalled = true;
    glesConfig.m_glEndTransformFeedback ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBindBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBindBufferRange)
  {
    prototypeCalled = true;
    glesConfig.m_glBindBufferRange (target, index, buffer, offset, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindBufferBase (GLenum target, GLuint index, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBindBufferBase
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBindBufferBase)
  {
    prototypeCalled = true;
    glesConfig.m_glBindBufferBase (target, index, buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glTransformFeedbackVaryings
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glTransformFeedbackVaryings)
  {
    prototypeCalled = true;
    glesConfig.m_glTransformFeedbackVaryings (program, count, varyings, bufferMode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetTransformFeedbackVarying
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetTransformFeedbackVarying)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTransformFeedbackVarying (program, index, bufSize, length, size, type, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glVertexAttribIPointer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glVertexAttribIPointer)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribIPointer (index, size, type, stride, pointer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetVertexAttribIiv (GLuint index, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetVertexAttribIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetVertexAttribIiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetVertexAttribIiv (index, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetVertexAttribIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetVertexAttribIuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetVertexAttribIuiv (index, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glVertexAttribI4i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glVertexAttribI4i)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribI4i (index, x, y, z, w);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glVertexAttribI4ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glVertexAttribI4ui)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribI4ui (index, x, y, z, w);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribI4iv (GLuint index, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glVertexAttribI4iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glVertexAttribI4iv)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribI4iv (index, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribI4uiv (GLuint index, const GLuint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glVertexAttribI4uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glVertexAttribI4uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribI4uiv (index, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetUniformuiv (GLuint program, GLint location, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetUniformuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetUniformuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUniformuiv (program, location, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_gles_glGetFragDataLocation (GLuint program, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLint result = ((GLint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetFragDataLocation
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetFragDataLocation)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetFragDataLocation (program, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform1ui (GLint location, GLuint v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform1ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform1ui)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform1ui (location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform2ui (GLint location, GLuint v0, GLuint v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform2ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform2ui)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform2ui (location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform3ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform3ui)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform3ui (location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform4ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform4ui)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform4ui (location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform1uiv (GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform1uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform1uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform1uiv (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform2uiv (GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform2uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform2uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform2uiv (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform3uiv (GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform3uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform3uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform3uiv (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform4uiv (GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniform4uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniform4uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform4uiv (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glClearBufferiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glClearBufferiv)
  {
    prototypeCalled = true;
    glesConfig.m_glClearBufferiv (buffer, drawbuffer, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glClearBufferuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glClearBufferuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glClearBufferuiv (buffer, drawbuffer, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glClearBufferfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glClearBufferfv)
  {
    prototypeCalled = true;
    glesConfig.m_glClearBufferfv (buffer, drawbuffer, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glClearBufferfi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glClearBufferfi)
  {
    prototypeCalled = true;
    glesConfig.m_glClearBufferfi (buffer, drawbuffer, depth, stencil);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const GLubyte * _glew_gles_glGetStringi (GLenum name, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  const GLubyte * result = ((const GLubyte *)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetStringi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetStringi)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetStringi (name, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glCopyBufferSubData
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glCopyBufferSubData)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyBufferSubData (readTarget, writeTarget, readOffset, writeOffset, size);
  }
  // GL_NV_copy_buffer - glCopyBufferSubData
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_copy_buffer] && glesConfig.m_glCopyBufferSubDataNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyBufferSubDataNV (readTarget, writeTarget, readOffset, writeOffset, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetUniformIndices
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetUniformIndices)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUniformIndices (program, uniformCount, uniformNames, uniformIndices);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetActiveUniformsiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetActiveUniformsiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetActiveUniformsiv (program, uniformCount, uniformIndices, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetUniformBlockIndex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetUniformBlockIndex)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetUniformBlockIndex (program, uniformBlockName);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetActiveUniformBlockiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetActiveUniformBlockiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetActiveUniformBlockiv (program, uniformBlockIndex, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetActiveUniformBlockName
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetActiveUniformBlockName)
  {
    prototypeCalled = true;
    glesConfig.m_glGetActiveUniformBlockName (program, uniformBlockIndex, bufSize, length, uniformBlockName);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glUniformBlockBinding
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glUniformBlockBinding)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformBlockBinding (program, uniformBlockIndex, uniformBlockBinding);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDrawArraysInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDrawArraysInstanced)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstanced (mode, first, count, instancecount);
  }
  // GL_ANGLE_instanced_arrays - glDrawArraysInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] && glesConfig.m_glDrawArraysInstancedANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedANGLE (mode, first, count, instancecount);
  }
  // GL_EXT_draw_instanced - glDrawArraysInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced] && glesConfig.m_glDrawArraysInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedEXT (mode, first, count, instancecount);
  }
  // GL_NV_draw_instanced - glDrawArraysInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_instanced] && glesConfig.m_glDrawArraysInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedNV (mode, first, count, instancecount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDrawElementsInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDrawElementsInstanced)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstanced (mode, count, type, indices, instancecount);
  }
  // GL_ANGLE_instanced_arrays - glDrawElementsInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] && glesConfig.m_glDrawElementsInstancedANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedANGLE (mode, count, type, indices, instancecount);
  }
  // GL_EXT_draw_instanced - glDrawElementsInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced] && glesConfig.m_glDrawElementsInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedEXT (mode, count, type, indices, instancecount);
  }
  // GL_NV_draw_instanced - glDrawElementsInstanced
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_instanced] && glesConfig.m_glDrawElementsInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedNV (mode, count, type, indices, instancecount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLsync _glew_gles_glFenceSync (GLenum condition, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLsync result = ((GLsync)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glFenceSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glFenceSync)
  {
    prototypeCalled = true;
    result = glesConfig.m_glFenceSync (condition, flags);
  }
  // GL_APPLE_sync - glFenceSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glFenceSyncAPPLE)
  {
    prototypeCalled = true;
    result = glesConfig.m_glFenceSyncAPPLE (condition, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsSync (GLsync sync)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glIsSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glIsSync)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsSync (sync);
  }
  // GL_APPLE_sync - glIsSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glIsSyncAPPLE)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsSyncAPPLE (sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteSync (GLsync sync)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDeleteSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDeleteSync)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteSync (sync);
  }
  // GL_APPLE_sync - glDeleteSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glDeleteSyncAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteSyncAPPLE (sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glClientWaitSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glClientWaitSync)
  {
    prototypeCalled = true;
    result = glesConfig.m_glClientWaitSync (sync, flags, timeout);
  }
  // GL_APPLE_sync - glClientWaitSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glClientWaitSyncAPPLE)
  {
    prototypeCalled = true;
    result = glesConfig.m_glClientWaitSyncAPPLE (sync, flags, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glWaitSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glWaitSync)
  {
    prototypeCalled = true;
    glesConfig.m_glWaitSync (sync, flags, timeout);
  }
  // GL_APPLE_sync - glWaitSync
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glWaitSyncAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glWaitSyncAPPLE (sync, flags, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetInteger64v (GLenum pname, GLint64 * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetInteger64v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetInteger64v)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInteger64v (pname, data);
  }
  // GL_APPLE_sync - glGetInteger64v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glGetInteger64vAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInteger64vAPPLE (pname, data);
  }
  // GL_EXT_disjoint_timer_query - glGetInteger64v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetInteger64vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInteger64vEXT (pname, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSynciv (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetSynciv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetSynciv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSynciv (sync, pname, count, length, values);
  }
  // GL_APPLE_sync - glGetSynciv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glGetSyncivAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSyncivAPPLE (sync, pname, count, length, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetInteger64i_v (GLenum target, GLuint index, GLint64 * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetInteger64i_v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetInteger64i_v)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInteger64i_v (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetBufferParameteri64v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetBufferParameteri64v)
  {
    prototypeCalled = true;
    glesConfig.m_glGetBufferParameteri64v (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenSamplers (GLsizei count, GLuint * samplers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGenSamplers
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGenSamplers)
  {
    prototypeCalled = true;
    glesConfig.m_glGenSamplers (count, samplers);
  }
  // GL_MESA_sampler_objects - glGenSamplers
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glGenSamplers)
  {
    prototypeCalled = true;
    glesConfig.m_glGenSamplers (count, samplers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteSamplers (GLsizei count, const GLuint * samplers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDeleteSamplers
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDeleteSamplers)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteSamplers (count, samplers);
  }
  // GL_MESA_sampler_objects - glDeleteSamplers
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glDeleteSamplers)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteSamplers (count, samplers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsSampler (GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glIsSampler
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glIsSampler)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsSampler (sampler);
  }
  // GL_MESA_sampler_objects - glIsSampler
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glIsSampler)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsSampler (sampler);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindSampler (GLuint unit, GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBindSampler
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBindSampler)
  {
    prototypeCalled = true;
    glesConfig.m_glBindSampler (unit, sampler);
  }
  // GL_MESA_sampler_objects - glBindSampler
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glBindSampler)
  {
    prototypeCalled = true;
    glesConfig.m_glBindSampler (unit, sampler);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glSamplerParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glSamplerParameteri)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameteri (sampler, pname, param);
  }
  // GL_MESA_sampler_objects - glSamplerParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glSamplerParameteri)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameteri (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glSamplerParameteriv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glSamplerParameteriv)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameteriv (sampler, pname, param);
  }
  // GL_MESA_sampler_objects - glSamplerParameteriv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glSamplerParameteriv)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameteriv (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glSamplerParameterf
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glSamplerParameterf)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterf (sampler, pname, param);
  }
  // GL_MESA_sampler_objects - glSamplerParameterf
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glSamplerParameterf)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterf (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glSamplerParameterfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glSamplerParameterfv)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterfv (sampler, pname, param);
  }
  // GL_MESA_sampler_objects - glSamplerParameterfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glSamplerParameterfv)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterfv (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetSamplerParameteriv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetSamplerParameteriv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameteriv (sampler, pname, params);
  }
  // GL_MESA_sampler_objects - glGetSamplerParameteriv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glGetSamplerParameteriv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameteriv (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetSamplerParameterfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetSamplerParameterfv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterfv (sampler, pname, params);
  }
  // GL_MESA_sampler_objects - glGetSamplerParameterfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] && glesConfig.m_glGetSamplerParameterfv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterfv (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribDivisor (GLuint index, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glVertexAttribDivisor
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glVertexAttribDivisor)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisor (index, divisor);
  }
  // GL_ANGLE_instanced_arrays - glVertexAttribDivisor
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] && glesConfig.m_glVertexAttribDivisorANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisorANGLE (index, divisor);
  }
  // GL_EXT_instanced_arrays - glVertexAttribDivisor
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_instanced_arrays] && glesConfig.m_glVertexAttribDivisorEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisorEXT (index, divisor);
  }
  // GL_NV_instanced_arrays - glVertexAttribDivisor
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_instanced_arrays] && glesConfig.m_glVertexAttribDivisorNV)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisorNV (index, divisor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindTransformFeedback (GLenum target, GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glBindTransformFeedback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glBindTransformFeedback)
  {
    prototypeCalled = true;
    glesConfig.m_glBindTransformFeedback (target, id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glDeleteTransformFeedbacks
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glDeleteTransformFeedbacks)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteTransformFeedbacks (n, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenTransformFeedbacks (GLsizei n, GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGenTransformFeedbacks
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGenTransformFeedbacks)
  {
    prototypeCalled = true;
    glesConfig.m_glGenTransformFeedbacks (n, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsTransformFeedback (GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glIsTransformFeedback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glIsTransformFeedback)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsTransformFeedback (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPauseTransformFeedback ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glPauseTransformFeedback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glPauseTransformFeedback)
  {
    prototypeCalled = true;
    glesConfig.m_glPauseTransformFeedback ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glResumeTransformFeedback ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glResumeTransformFeedback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glResumeTransformFeedback)
  {
    prototypeCalled = true;
    glesConfig.m_glResumeTransformFeedback ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetProgramBinary
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetProgramBinary)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramBinary (program, bufSize, length, binaryFormat, binary);
  }
  // GL_OES_get_program_binary - glGetProgramBinary
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_get_program_binary] && glesConfig.m_glGetProgramBinaryOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramBinaryOES (program, bufSize, length, binaryFormat, binary);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glProgramBinary
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glProgramBinary)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramBinary (program, binaryFormat, binary, length);
  }
  // GL_OES_get_program_binary - glProgramBinary
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_get_program_binary] && glesConfig.m_glProgramBinaryOES)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramBinaryOES (program, binaryFormat, binary, (GLint) length);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramParameteri (GLuint program, GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glProgramParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glProgramParameteri)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramParameteri (program, pname, value);
  }
  // GL_EXT_separate_shader_objects - glProgramParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramParameteriEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramParameteriEXT (program, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glInvalidateFramebuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glInvalidateFramebuffer)
  {
    prototypeCalled = true;
    glesConfig.m_glInvalidateFramebuffer (target, numAttachments, attachments);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glInvalidateSubFramebuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glInvalidateSubFramebuffer)
  {
    prototypeCalled = true;
    glesConfig.m_glInvalidateSubFramebuffer (target, numAttachments, attachments, x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glTexStorage2D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glTexStorage2D)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage2D (target, levels, internalformat, width, height);
  }
  // GL_EXT_texture_storage - glTexStorage2D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTexStorage2DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage2DEXT (target, levels, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glTexStorage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glTexStorage3D)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage3D (target, levels, internalformat, width, height, depth);
  }
  // GL_EXT_texture_storage - glTexStorage3D
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTexStorage3DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage3DEXT (target, levels, internalformat, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_0 - glGetInternalformativ
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] && glesConfig.m_glGetInternalformativ)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInternalformativ (target, internalformat, pname, count, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glDispatchCompute
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glDispatchCompute)
  {
    prototypeCalled = true;
    glesConfig.m_glDispatchCompute (num_groups_x, num_groups_y, num_groups_z);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDispatchComputeIndirect (GLintptr indirect)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glDispatchComputeIndirect
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glDispatchComputeIndirect)
  {
    prototypeCalled = true;
    glesConfig.m_glDispatchComputeIndirect (indirect);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawArraysIndirect (GLenum mode, const void * indirect)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glDrawArraysIndirect
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glDrawArraysIndirect)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysIndirect (mode, indirect);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glDrawElementsIndirect
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glDrawElementsIndirect)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsIndirect (mode, type, indirect);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferParameteri (GLenum target, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glFramebufferParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glFramebufferParameteri)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferParameteri (target, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetFramebufferParameteriv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetFramebufferParameteriv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFramebufferParameteriv (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramInterfaceiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramInterfaceiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramInterfaceiv (program, programInterface, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramResourceIndex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramResourceIndex)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetProgramResourceIndex (program, programInterface, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramResourceName
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramResourceName)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramResourceName (program, programInterface, index, bufSize, length, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramResourceiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramResourceiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramResourceiv (program, programInterface, index, propCount, props, count, length, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_gles_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLint result = ((GLint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramResourceLocation
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramResourceLocation)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetProgramResourceLocation (program, programInterface, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glUseProgramStages
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glUseProgramStages)
  {
    prototypeCalled = true;
    glesConfig.m_glUseProgramStages (pipeline, stages, program);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glActiveShaderProgram (GLuint pipeline, GLuint program)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glActiveShaderProgram
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glActiveShaderProgram)
  {
    prototypeCalled = true;
    glesConfig.m_glActiveShaderProgram (pipeline, program);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glCreateShaderProgramv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glCreateShaderProgramv)
  {
    prototypeCalled = true;
    result = glesConfig.m_glCreateShaderProgramv (type, count, strings);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindProgramPipeline (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glBindProgramPipeline
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glBindProgramPipeline)
  {
    prototypeCalled = true;
    glesConfig.m_glBindProgramPipeline (pipeline);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glDeleteProgramPipelines
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glDeleteProgramPipelines)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteProgramPipelines (n, pipelines);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenProgramPipelines (GLsizei n, GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGenProgramPipelines
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGenProgramPipelines)
  {
    prototypeCalled = true;
    glesConfig.m_glGenProgramPipelines (n, pipelines);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsProgramPipeline (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glIsProgramPipeline
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glIsProgramPipeline)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsProgramPipeline (pipeline);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramPipelineiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramPipelineiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramPipelineiv (pipeline, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1i (GLuint program, GLint location, GLint v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform1i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform1i)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1i (program, location, v0);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform1i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1iEXT (program, location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform2i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform2i)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2i (program, location, v0, v1);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform2i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2iEXT (program, location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform3i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform3i)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3i (program, location, v0, v1, v2);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform3i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3iEXT (program, location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform4i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform4i)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4i (program, location, v0, v1, v2, v3);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform4i
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4iEXT (program, location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1ui (GLuint program, GLint location, GLuint v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform1ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform1ui)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1ui (program, location, v0);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform1ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1uiEXT (program, location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform2ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform2ui)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2ui (program, location, v0, v1);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform2ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2uiEXT (program, location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform3ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform3ui)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3ui (program, location, v0, v1, v2);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform3ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3uiEXT (program, location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform4ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform4ui)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4ui (program, location, v0, v1, v2, v3);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform4ui
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4uiEXT (program, location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1f (GLuint program, GLint location, GLfloat v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform1f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform1f)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1f (program, location, v0);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform1f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1fEXT (program, location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform2f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform2f)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2f (program, location, v0, v1);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform2f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2fEXT (program, location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform3f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform3f)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3f (program, location, v0, v1, v2);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform3f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3fEXT (program, location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform4f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform4f)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4f (program, location, v0, v1, v2, v3);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform4f
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4fEXT (program, location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform1iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform1iv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1iv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform1iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform2iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform2iv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2iv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform2iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform3iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform3iv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3iv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform3iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform4iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform4iv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4iv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform4iv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform1uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform1uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1uiv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform1uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform2uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform2uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2uiv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform2uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform3uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform3uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3uiv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform3uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform4uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform4uiv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4uiv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform4uiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform1fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform1fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1fv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform1fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform2fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2fv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform3fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3fv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniform4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniform4fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4fv (program, location, count, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniform4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix2fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix3fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix4fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix2x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix2x3fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2x3fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix2x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix2x3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2x3fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix3x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix3x2fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3x2fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix3x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix3x2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3x2fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix2x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix2x4fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2x4fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix2x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix2x4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2x4fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix4x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix4x2fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4x2fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix4x2fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix4x2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4x2fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix3x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix3x4fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3x4fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix3x4fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix3x4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3x4fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glProgramUniformMatrix4x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glProgramUniformMatrix4x3fv)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4x3fv (program, location, count, transpose, value);
  }
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix4x3fv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix4x3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4x3fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glValidateProgramPipeline (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glValidateProgramPipeline
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glValidateProgramPipeline)
  {
    prototypeCalled = true;
    glesConfig.m_glValidateProgramPipeline (pipeline);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetProgramPipelineInfoLog
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetProgramPipelineInfoLog)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramPipelineInfoLog (pipeline, bufSize, length, infoLog);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glBindImageTexture
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glBindImageTexture)
  {
    prototypeCalled = true;
    glesConfig.m_glBindImageTexture (unit, texture, level, layered, layer, access, format);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetBooleani_v (GLenum target, GLuint index, GLboolean * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetBooleani_v
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetBooleani_v)
  {
    prototypeCalled = true;
    glesConfig.m_glGetBooleani_v (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMemoryBarrier (GLbitfield barriers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glMemoryBarrier
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glMemoryBarrier)
  {
    prototypeCalled = true;
    glesConfig.m_glMemoryBarrier (barriers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMemoryBarrierByRegion (GLbitfield barriers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glMemoryBarrierByRegion
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glMemoryBarrierByRegion)
  {
    prototypeCalled = true;
    glesConfig.m_glMemoryBarrierByRegion (barriers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glTexStorage2DMultisample
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glTexStorage2DMultisample)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetMultisamplefv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetMultisamplefv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetMultisamplefv (pname, index, val);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSampleMaski (GLuint maskNumber, GLbitfield mask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glSampleMaski
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glSampleMaski)
  {
    prototypeCalled = true;
    glesConfig.m_glSampleMaski (maskNumber, mask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetTexLevelParameteriv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetTexLevelParameteriv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexLevelParameteriv (target, level, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glGetTexLevelParameterfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glGetTexLevelParameterfv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexLevelParameterfv (target, level, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glBindVertexBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glBindVertexBuffer)
  {
    prototypeCalled = true;
    glesConfig.m_glBindVertexBuffer (bindingindex, buffer, offset, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glVertexAttribFormat
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glVertexAttribFormat)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribFormat (attribindex, size, type, normalized, relativeoffset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glVertexAttribIFormat
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glVertexAttribIFormat)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribIFormat (attribindex, size, type, relativeoffset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glVertexAttribBinding
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glVertexAttribBinding)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribBinding (attribindex, bindingindex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_1 - glVertexBindingDivisor
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] && glesConfig.m_glVertexBindingDivisor)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexBindingDivisor (bindingindex, divisor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendBarrier ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glBlendBarrier
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glBlendBarrier)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendBarrier ();
  }
  // GL_KHR_blend_equation_advanced - glBlendBarrier
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_blend_equation_advanced] && glesConfig.m_glBlendBarrierKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendBarrierKHR ();
  }
  // GL_NV_blend_equation_advanced - glBlendBarrier
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced] && glesConfig.m_glBlendBarrierNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendBarrierNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glCopyImageSubData
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glCopyImageSubData)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyImageSubData (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
  }
  // GL_EXT_copy_image - glCopyImageSubData
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_copy_image] && glesConfig.m_glCopyImageSubDataEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyImageSubDataEXT (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
  }
  // GL_OES_copy_image - glCopyImageSubData
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_copy_image] && glesConfig.m_glCopyImageSubDataOES)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyImageSubDataOES (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDebugMessageControl
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDebugMessageControl)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageControl (source, type, severity, count, ids, enabled);
  }
  // GL_KHR_debug - glDebugMessageControl
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glDebugMessageControlKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageControlKHR (source, type, severity, count, ids, enabled);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDebugMessageInsert
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDebugMessageInsert)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageInsert (source, type, id, severity, length, buf);
  }
  // GL_KHR_debug - glDebugMessageInsert
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glDebugMessageInsertKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageInsertKHR (source, type, id, severity, length, buf);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDebugMessageCallback (GLDEBUGPROC callback, const void * userParam)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDebugMessageCallback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDebugMessageCallback)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageCallback (callback, userParam);
  }
  // GL_KHR_debug - glDebugMessageCallback
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glDebugMessageCallbackKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageCallbackKHR ((GLDEBUGPROCKHR) callback, userParam);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetDebugMessageLog
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetDebugMessageLog)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetDebugMessageLog (count, bufSize, sources, types, ids, severities, lengths, messageLog);
  }
  // GL_KHR_debug - glGetDebugMessageLog
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetDebugMessageLogKHR)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetDebugMessageLogKHR (count, bufSize, sources, types, ids, severities, lengths, messageLog);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glPushDebugGroup
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glPushDebugGroup)
  {
    prototypeCalled = true;
    glesConfig.m_glPushDebugGroup (source, id, length, message);
  }
  // GL_KHR_debug - glPushDebugGroup
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glPushDebugGroupKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glPushDebugGroupKHR (source, id, length, message);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPopDebugGroup ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glPopDebugGroup
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glPopDebugGroup)
  {
    prototypeCalled = true;
    glesConfig.m_glPopDebugGroup ();
  }
  // GL_KHR_debug - glPopDebugGroup
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glPopDebugGroupKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glPopDebugGroupKHR ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glObjectLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glObjectLabel)
  {
    prototypeCalled = true;
    glesConfig.m_glObjectLabel (identifier, name, length, label);
  }
  // GL_KHR_debug - glObjectLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glObjectLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glObjectLabelKHR (identifier, name, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetObjectLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetObjectLabel)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectLabel (identifier, name, bufSize, length, label);
  }
  // GL_KHR_debug - glGetObjectLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetObjectLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectLabelKHR (identifier, name, bufSize, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glObjectPtrLabel (const void * ptr, GLsizei length, const GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glObjectPtrLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glObjectPtrLabel)
  {
    prototypeCalled = true;
    glesConfig.m_glObjectPtrLabel (ptr, length, label);
  }
  // GL_KHR_debug - glObjectPtrLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glObjectPtrLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glObjectPtrLabelKHR (ptr, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetObjectPtrLabel (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetObjectPtrLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetObjectPtrLabel)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectPtrLabel (ptr, bufSize, length, label);
  }
  // GL_KHR_debug - glGetObjectPtrLabel
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetObjectPtrLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectPtrLabelKHR (ptr, bufSize, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPointerv (GLenum pname, void ** params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetPointerv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetPointerv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPointerv (pname, params);
  }
  // GL_KHR_debug - glGetPointerv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetPointervKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPointervKHR (pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEnablei (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glEnablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glEnablei)
  {
    prototypeCalled = true;
    glesConfig.m_glEnablei (target, index);
  }
  // GL_EXT_draw_buffers_indexed - glEnablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glEnableiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiEXT (target, index);
  }
  // GL_NV_viewport_array - glEnablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glEnableiNV)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiNV (target, index);
  }
  // GL_OES_draw_buffers_indexed - glEnablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glEnableiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiOES (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDisablei (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDisablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDisablei)
  {
    prototypeCalled = true;
    glesConfig.m_glDisablei (target, index);
  }
  // GL_EXT_draw_buffers_indexed - glDisablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glDisableiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiEXT (target, index);
  }
  // GL_NV_viewport_array - glDisablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glDisableiNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiNV (target, index);
  }
  // GL_OES_draw_buffers_indexed - glDisablei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glDisableiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiOES (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendEquationi (GLuint buf, GLenum mode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glBlendEquationi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glBlendEquationi)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationi (buf, mode);
  }
  // GL_EXT_draw_buffers_indexed - glBlendEquationi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendEquationiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationiEXT (buf, mode);
  }
  // GL_OES_draw_buffers_indexed - glBlendEquationi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendEquationiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationiOES (buf, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glBlendEquationSeparatei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glBlendEquationSeparatei)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationSeparatei (buf, modeRGB, modeAlpha);
  }
  // GL_EXT_draw_buffers_indexed - glBlendEquationSeparatei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendEquationSeparateiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationSeparateiEXT (buf, modeRGB, modeAlpha);
  }
  // GL_OES_draw_buffers_indexed - glBlendEquationSeparatei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendEquationSeparateiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationSeparateiOES (buf, modeRGB, modeAlpha);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendFunci (GLuint buf, GLenum src, GLenum dst)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glBlendFunci
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glBlendFunci)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFunci (buf, src, dst);
  }
  // GL_EXT_draw_buffers_indexed - glBlendFunci
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendFunciEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFunciEXT (buf, src, dst);
  }
  // GL_OES_draw_buffers_indexed - glBlendFunci
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendFunciOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFunciOES (buf, src, dst);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glBlendFuncSeparatei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glBlendFuncSeparatei)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFuncSeparatei (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
  }
  // GL_EXT_draw_buffers_indexed - glBlendFuncSeparatei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendFuncSeparateiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFuncSeparateiEXT (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
  }
  // GL_OES_draw_buffers_indexed - glBlendFuncSeparatei
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendFuncSeparateiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFuncSeparateiOES (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glColorMaski
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glColorMaski)
  {
    prototypeCalled = true;
    glesConfig.m_glColorMaski (index, r, g, b, a);
  }
  // GL_EXT_draw_buffers_indexed - glColorMaski
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glColorMaskiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glColorMaskiEXT (index, r, g, b, a);
  }
  // GL_OES_draw_buffers_indexed - glColorMaski
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glColorMaskiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glColorMaskiOES (index, r, g, b, a);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsEnabledi (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glIsEnabledi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glIsEnabledi)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnabledi (target, index);
  }
  // GL_EXT_draw_buffers_indexed - glIsEnabledi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glIsEnablediEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediEXT (target, index);
  }
  // GL_NV_viewport_array - glIsEnabledi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glIsEnablediNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediNV (target, index);
  }
  // GL_OES_draw_buffers_indexed - glIsEnabledi
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glIsEnablediOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediOES (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDrawElementsBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDrawElementsBaseVertex)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsBaseVertex (mode, count, type, indices, basevertex);
  }
  // GL_EXT_draw_elements_base_vertex - glDrawElementsBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glDrawElementsBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsBaseVertexEXT (mode, count, type, indices, basevertex);
  }
  // GL_OES_draw_elements_base_vertex - glDrawElementsBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glDrawElementsBaseVertexOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsBaseVertexOES (mode, count, type, indices, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDrawRangeElementsBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDrawRangeElementsBaseVertex)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawRangeElementsBaseVertex (mode, start, end, count, type, indices, basevertex);
  }
  // GL_EXT_draw_elements_base_vertex - glDrawRangeElementsBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glDrawRangeElementsBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawRangeElementsBaseVertexEXT (mode, start, end, count, type, indices, basevertex);
  }
  // GL_OES_draw_elements_base_vertex - glDrawRangeElementsBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glDrawRangeElementsBaseVertexOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawRangeElementsBaseVertexOES (mode, start, end, count, type, indices, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glDrawElementsInstancedBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glDrawElementsInstancedBaseVertex)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseVertex (mode, count, type, indices, instancecount, basevertex);
  }
  // GL_EXT_draw_elements_base_vertex - glDrawElementsInstancedBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glDrawElementsInstancedBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseVertexEXT (mode, count, type, indices, instancecount, basevertex);
  }
  // GL_OES_draw_elements_base_vertex - glDrawElementsInstancedBaseVertex
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glDrawElementsInstancedBaseVertexOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseVertexOES (mode, count, type, indices, instancecount, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glFramebufferTexture
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glFramebufferTexture)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTexture (target, attachment, texture, level);
  }
  // GL_EXT_geometry_shader - glFramebufferTexture
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_geometry_shader] && glesConfig.m_glFramebufferTextureEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureEXT (target, attachment, texture, level);
  }
  // GL_OES_geometry_shader - glFramebufferTexture
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_geometry_shader] && glesConfig.m_glFramebufferTextureOES)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureOES (target, attachment, texture, level);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPrimitiveBoundingBox (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glPrimitiveBoundingBox
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glPrimitiveBoundingBox)
  {
    prototypeCalled = true;
    glesConfig.m_glPrimitiveBoundingBox (minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
  }
  // GL_EXT_primitive_bounding_box - glPrimitiveBoundingBox
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_primitive_bounding_box] && glesConfig.m_glPrimitiveBoundingBoxEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPrimitiveBoundingBoxEXT (minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
  }
  // GL_OES_primitive_bounding_box - glPrimitiveBoundingBox
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_primitive_bounding_box] && glesConfig.m_glPrimitiveBoundingBoxOES)
  {
    prototypeCalled = true;
    glesConfig.m_glPrimitiveBoundingBoxOES (minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glGetGraphicsResetStatus ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetGraphicsResetStatus
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetGraphicsResetStatus)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetGraphicsResetStatus ();
  }
  // GL_EXT_robustness - glGetGraphicsResetStatus
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glGetGraphicsResetStatusEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetGraphicsResetStatusEXT ();
  }
  // GL_KHR_robustness - glGetGraphicsResetStatus
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetGraphicsResetStatusKHR)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetGraphicsResetStatusKHR ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glReadnPixels
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glReadnPixels)
  {
    prototypeCalled = true;
    glesConfig.m_glReadnPixels (x, y, width, height, format, type, bufSize, data);
  }
  // GL_EXT_robustness - glReadnPixels
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glReadnPixelsEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glReadnPixelsEXT (x, y, width, height, format, type, bufSize, data);
  }
  // GL_KHR_robustness - glReadnPixels
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glReadnPixelsKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glReadnPixelsKHR (x, y, width, height, format, type, bufSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetnUniformfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetnUniformfv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformfv (program, location, bufSize, params);
  }
  // GL_EXT_robustness - glGetnUniformfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glGetnUniformfvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformfvEXT (program, location, bufSize, params);
  }
  // GL_KHR_robustness - glGetnUniformfv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetnUniformfvKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformfvKHR (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetnUniformiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetnUniformiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformiv (program, location, bufSize, params);
  }
  // GL_EXT_robustness - glGetnUniformiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glGetnUniformivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformivEXT (program, location, bufSize, params);
  }
  // GL_KHR_robustness - glGetnUniformiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetnUniformivKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformivKHR (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetnUniformuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetnUniformuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformuiv (program, location, bufSize, params);
  }
  // GL_KHR_robustness - glGetnUniformuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetnUniformuivKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformuivKHR (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMinSampleShading (GLfloat value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glMinSampleShading
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glMinSampleShading)
  {
    prototypeCalled = true;
    glesConfig.m_glMinSampleShading (value);
  }
  // GL_OES_sample_shading - glMinSampleShading
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_sample_shading] && glesConfig.m_glMinSampleShadingOES)
  {
    prototypeCalled = true;
    glesConfig.m_glMinSampleShadingOES (value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPatchParameteri (GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glPatchParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glPatchParameteri)
  {
    prototypeCalled = true;
    glesConfig.m_glPatchParameteri (pname, value);
  }
  // GL_EXT_tessellation_shader - glPatchParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_tessellation_shader] && glesConfig.m_glPatchParameteriEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPatchParameteriEXT (pname, value);
  }
  // GL_OES_tessellation_shader - glPatchParameteri
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_tessellation_shader] && glesConfig.m_glPatchParameteriOES)
  {
    prototypeCalled = true;
    glesConfig.m_glPatchParameteriOES (pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexParameterIiv (GLenum target, GLenum pname, const GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glTexParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glTexParameterIiv)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIiv (target, pname, params);
  }
  // GL_EXT_texture_border_clamp - glTexParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glTexParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIivEXT (target, pname, params);
  }
  // GL_OES_texture_border_clamp - glTexParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glTexParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexParameterIuiv (GLenum target, GLenum pname, const GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glTexParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glTexParameterIuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIuiv (target, pname, params);
  }
  // GL_EXT_texture_border_clamp - glTexParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glTexParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIuivEXT (target, pname, params);
  }
  // GL_OES_texture_border_clamp - glTexParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glTexParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIuivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexParameterIiv (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetTexParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetTexParameterIiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIiv (target, pname, params);
  }
  // GL_EXT_texture_border_clamp - glGetTexParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetTexParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIivEXT (target, pname, params);
  }
  // GL_OES_texture_border_clamp - glGetTexParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetTexParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetTexParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetTexParameterIuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIuiv (target, pname, params);
  }
  // GL_EXT_texture_border_clamp - glGetTexParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetTexParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIuivEXT (target, pname, params);
  }
  // GL_OES_texture_border_clamp - glGetTexParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetTexParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIuivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glSamplerParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glSamplerParameterIiv)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIiv (sampler, pname, param);
  }
  // GL_EXT_texture_border_clamp - glSamplerParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glSamplerParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIivEXT (sampler, pname, param);
  }
  // GL_OES_texture_border_clamp - glSamplerParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glSamplerParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIivOES (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glSamplerParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glSamplerParameterIuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIuiv (sampler, pname, param);
  }
  // GL_EXT_texture_border_clamp - glSamplerParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glSamplerParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIuivEXT (sampler, pname, param);
  }
  // GL_OES_texture_border_clamp - glSamplerParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glSamplerParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIuivOES (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetSamplerParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetSamplerParameterIiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIiv (sampler, pname, params);
  }
  // GL_EXT_texture_border_clamp - glGetSamplerParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIivEXT (sampler, pname, params);
  }
  // GL_OES_texture_border_clamp - glGetSamplerParameterIiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIivOES (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glGetSamplerParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glGetSamplerParameterIuiv)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIuiv (sampler, pname, params);
  }
  // GL_EXT_texture_border_clamp - glGetSamplerParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIuivEXT (sampler, pname, params);
  }
  // GL_OES_texture_border_clamp - glGetSamplerParameterIuiv
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIuivOES (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glTexBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glTexBuffer)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBuffer (target, internalformat, buffer);
  }
  // GL_EXT_texture_buffer - glTexBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer] && glesConfig.m_glTexBufferEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferEXT (target, internalformat, buffer);
  }
  // GL_OES_texture_buffer - glTexBuffer
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_buffer] && glesConfig.m_glTexBufferOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferOES (target, internalformat, buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glTexBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glTexBufferRange)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferRange (target, internalformat, buffer, offset, size);
  }
  // GL_EXT_texture_buffer - glTexBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer] && glesConfig.m_glTexBufferRangeEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferRangeEXT (target, internalformat, buffer, offset, size);
  }
  // GL_OES_texture_buffer - glTexBufferRange
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_buffer] && glesConfig.m_glTexBufferRangeOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferRangeOES (target, internalformat, buffer, offset, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ES_VERSION_3_2 - glTexStorage3DMultisample
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] && glesConfig.m_glTexStorage3DMultisample)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);
  }
  // GL_OES_texture_storage_multisample_2d_array - glTexStorage3DMultisample
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_storage_multisample_2d_array] && glesConfig.m_glTexStorage3DMultisampleOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage3DMultisampleOES (target, samples, internalformat, width, height, depth, fixedsamplelocations);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisampleAdvancedAMD (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_framebuffer_multisample_advanced - glRenderbufferStorageMultisampleAdvancedAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_multisample_advanced] && glesConfig.m_glRenderbufferStorageMultisampleAdvancedAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleAdvancedAMD (target, samples, storageSamples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedRenderbufferStorageMultisampleAdvancedAMD (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_framebuffer_multisample_advanced - glNamedRenderbufferStorageMultisampleAdvancedAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_multisample_advanced] && glesConfig.m_glNamedRenderbufferStorageMultisampleAdvancedAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedRenderbufferStorageMultisampleAdvancedAMD (renderbuffer, samples, storageSamples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfMonitorGroupsAMD (GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGetPerfMonitorGroupsAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGetPerfMonitorGroupsAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfMonitorGroupsAMD (numGroups, groupsSize, groups);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfMonitorCountersAMD (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGetPerfMonitorCountersAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGetPerfMonitorCountersAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfMonitorCountersAMD (group, numCounters, maxActiveCounters, counterSize, counters);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGetPerfMonitorGroupStringAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGetPerfMonitorGroupStringAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfMonitorGroupStringAMD (group, bufSize, length, groupString);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGetPerfMonitorCounterStringAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGetPerfMonitorCounterStringAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfMonitorCounterStringAMD (group, counter, bufSize, length, counterString);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGetPerfMonitorCounterInfoAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGetPerfMonitorCounterInfoAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfMonitorCounterInfoAMD (group, counter, pname, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenPerfMonitorsAMD (GLsizei n, GLuint * monitors)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGenPerfMonitorsAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGenPerfMonitorsAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGenPerfMonitorsAMD (n, monitors);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeletePerfMonitorsAMD (GLsizei n, GLuint * monitors)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glDeletePerfMonitorsAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glDeletePerfMonitorsAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glDeletePerfMonitorsAMD (n, monitors);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glSelectPerfMonitorCountersAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glSelectPerfMonitorCountersAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glSelectPerfMonitorCountersAMD (monitor, enable, group, numCounters, counterList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBeginPerfMonitorAMD (GLuint monitor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glBeginPerfMonitorAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glBeginPerfMonitorAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginPerfMonitorAMD (monitor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndPerfMonitorAMD (GLuint monitor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glEndPerfMonitorAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glEndPerfMonitorAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glEndPerfMonitorAMD (monitor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_AMD_performance_monitor - glGetPerfMonitorCounterDataAMD
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] && glesConfig.m_glGetPerfMonitorCounterDataAMD)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfMonitorCounterDataAMD (monitor, pname, dataSize, data, bytesWritten);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlitFramebufferANGLE (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ANGLE_framebuffer_blit - glBlitFramebufferANGLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_framebuffer_blit] && glesConfig.m_glBlitFramebufferANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glBlitFramebufferANGLE (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ANGLE_framebuffer_multisample - glRenderbufferStorageMultisampleANGLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_framebuffer_multisample] && glesConfig.m_glRenderbufferStorageMultisampleANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleANGLE (target, samples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawArraysInstancedANGLE (GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ANGLE_instanced_arrays - glDrawArraysInstancedANGLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] && glesConfig.m_glDrawArraysInstancedANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedANGLE (mode, first, count, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedANGLE (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ANGLE_instanced_arrays - glDrawElementsInstancedANGLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] && glesConfig.m_glDrawElementsInstancedANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedANGLE (mode, count, type, indices, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribDivisorANGLE (GLuint index, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ANGLE_instanced_arrays - glVertexAttribDivisorANGLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] && glesConfig.m_glVertexAttribDivisorANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisorANGLE (index, divisor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTranslatedShaderSourceANGLE (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ANGLE_translated_shader_source - glGetTranslatedShaderSourceANGLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ANGLE_translated_shader_source] && glesConfig.m_glGetTranslatedShaderSourceANGLE)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTranslatedShaderSourceANGLE (shader, bufSize, length, source);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyTextureLevelsAPPLE (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_copy_texture_levels - glCopyTextureLevelsAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_copy_texture_levels] && glesConfig.m_glCopyTextureLevelsAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyTextureLevelsAPPLE (destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_framebuffer_multisample - glRenderbufferStorageMultisampleAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_framebuffer_multisample] && glesConfig.m_glRenderbufferStorageMultisampleAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleAPPLE (target, samples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glResolveMultisampleFramebufferAPPLE ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_framebuffer_multisample - glResolveMultisampleFramebufferAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_framebuffer_multisample] && glesConfig.m_glResolveMultisampleFramebufferAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glResolveMultisampleFramebufferAPPLE ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLsync _glew_gles_glFenceSyncAPPLE (GLenum condition, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLsync result = ((GLsync)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glFenceSyncAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glFenceSyncAPPLE)
  {
    prototypeCalled = true;
    result = glesConfig.m_glFenceSyncAPPLE (condition, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsSyncAPPLE (GLsync sync)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glIsSyncAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glIsSyncAPPLE)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsSyncAPPLE (sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteSyncAPPLE (GLsync sync)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glDeleteSyncAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glDeleteSyncAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteSyncAPPLE (sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glClientWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glClientWaitSyncAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glClientWaitSyncAPPLE)
  {
    prototypeCalled = true;
    result = glesConfig.m_glClientWaitSyncAPPLE (sync, flags, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glWaitSyncAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glWaitSyncAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glWaitSyncAPPLE (sync, flags, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetInteger64vAPPLE (GLenum pname, GLint64 * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glGetInteger64vAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glGetInteger64vAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInteger64vAPPLE (pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_APPLE_sync - glGetSyncivAPPLE
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_APPLE_sync] && glesConfig.m_glGetSyncivAPPLE)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSyncivAPPLE (sync, pname, count, length, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMaxActiveShaderCoresARM (GLuint count)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_ARM_shader_core_properties - glMaxActiveShaderCoresARM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_ARM_shader_core_properties] && glesConfig.m_glMaxActiveShaderCoresARM)
  {
    prototypeCalled = true;
    glesConfig.m_glMaxActiveShaderCoresARM (count);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEGLImageTargetTexStorageEXT (GLenum target, GLeglImageOES image, const GLint*  attrib_list)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_EGL_image_storage - glEGLImageTargetTexStorageEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage] && glesConfig.m_glEGLImageTargetTexStorageEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glEGLImageTargetTexStorageEXT (target, image, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEGLImageTargetTextureStorageEXT (GLuint texture, GLeglImageOES image, const GLint*  attrib_list)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_EGL_image_storage - glEGLImageTargetTextureStorageEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage] && glesConfig.m_glEGLImageTargetTextureStorageEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glEGLImageTargetTextureStorageEXT (texture, image, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawArraysInstancedBaseInstanceEXT (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_base_instance - glDrawArraysInstancedBaseInstanceEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_base_instance] && glesConfig.m_glDrawArraysInstancedBaseInstanceEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedBaseInstanceEXT (mode, first, count, instancecount, baseinstance);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_base_instance - glDrawElementsInstancedBaseInstanceEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_base_instance] && glesConfig.m_glDrawElementsInstancedBaseInstanceEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseInstanceEXT (mode, count, type, indices, instancecount, baseinstance);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_base_instance - glDrawElementsInstancedBaseVertexBaseInstanceEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_base_instance] && glesConfig.m_glDrawElementsInstancedBaseVertexBaseInstanceEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseVertexBaseInstanceEXT (mode, count, type, indices, instancecount, basevertex, baseinstance);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindFragDataLocationIndexedEXT (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_blend_func_extended - glBindFragDataLocationIndexedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_blend_func_extended] && glesConfig.m_glBindFragDataLocationIndexedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBindFragDataLocationIndexedEXT (program, colorNumber, index, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_blend_func_extended - glBindFragDataLocationEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_blend_func_extended] && glesConfig.m_glBindFragDataLocationEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBindFragDataLocationEXT (program, color, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_gles_glGetProgramResourceLocationIndexEXT (GLuint program, GLenum programInterface, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLint result = ((GLint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_blend_func_extended - glGetProgramResourceLocationIndexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_blend_func_extended] && glesConfig.m_glGetProgramResourceLocationIndexEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetProgramResourceLocationIndexEXT (program, programInterface, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_gles_glGetFragDataIndexEXT (GLuint program, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLint result = ((GLint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_blend_func_extended - glGetFragDataIndexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_blend_func_extended] && glesConfig.m_glGetFragDataIndexEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetFragDataIndexEXT (program, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBufferStorageEXT (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_buffer_storage - glBufferStorageEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_buffer_storage] && glesConfig.m_glBufferStorageEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBufferStorageEXT (target, size, data, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearTexImageEXT (GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_clear_texture - glClearTexImageEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_clear_texture] && glesConfig.m_glClearTexImageEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glClearTexImageEXT (texture, level, format, type, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearTexSubImageEXT (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_clear_texture - glClearTexSubImageEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_clear_texture] && glesConfig.m_glClearTexSubImageEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glClearTexSubImageEXT (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClipControlEXT (GLenum origin, GLenum depth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_clip_control - glClipControlEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_clip_control] && glesConfig.m_glClipControlEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glClipControlEXT (origin, depth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyImageSubDataEXT (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_copy_image - glCopyImageSubDataEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_copy_image] && glesConfig.m_glCopyImageSubDataEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyImageSubDataEXT (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_debug_label - glLabelObjectEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_debug_label] && glesConfig.m_glLabelObjectEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glLabelObjectEXT (type, object, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_debug_label - glGetObjectLabelEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_debug_label] && glesConfig.m_glGetObjectLabelEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectLabelEXT (type, object, bufSize, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glInsertEventMarkerEXT (GLsizei length, const GLchar * marker)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_debug_marker - glInsertEventMarkerEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_debug_marker] && glesConfig.m_glInsertEventMarkerEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glInsertEventMarkerEXT (length, marker);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPushGroupMarkerEXT (GLsizei length, const GLchar * marker)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_debug_marker - glPushGroupMarkerEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_debug_marker] && glesConfig.m_glPushGroupMarkerEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPushGroupMarkerEXT (length, marker);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPopGroupMarkerEXT ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_debug_marker - glPopGroupMarkerEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_debug_marker] && glesConfig.m_glPopGroupMarkerEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPopGroupMarkerEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_discard_framebuffer - glDiscardFramebufferEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_discard_framebuffer] && glesConfig.m_glDiscardFramebufferEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDiscardFramebufferEXT (target, numAttachments, attachments);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenQueriesEXT (GLsizei n, GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGenQueriesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGenQueriesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGenQueriesEXT (n, ids);
  }
  // GL_EXT_occlusion_query_boolean - glGenQueriesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glGenQueriesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGenQueriesEXT (n, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteQueriesEXT (GLsizei n, const GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glDeleteQueriesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glDeleteQueriesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteQueriesEXT (n, ids);
  }
  // GL_EXT_occlusion_query_boolean - glDeleteQueriesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glDeleteQueriesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteQueriesEXT (n, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsQueryEXT (GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glIsQueryEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glIsQueryEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsQueryEXT (id);
  }
  // GL_EXT_occlusion_query_boolean - glIsQueryEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glIsQueryEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsQueryEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBeginQueryEXT (GLenum target, GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glBeginQueryEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glBeginQueryEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginQueryEXT (target, id);
  }
  // GL_EXT_occlusion_query_boolean - glBeginQueryEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glBeginQueryEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginQueryEXT (target, id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndQueryEXT (GLenum target)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glEndQueryEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glEndQueryEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glEndQueryEXT (target);
  }
  // GL_EXT_occlusion_query_boolean - glEndQueryEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glEndQueryEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glEndQueryEXT (target);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glQueryCounterEXT (GLuint id, GLenum target)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glQueryCounterEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glQueryCounterEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glQueryCounterEXT (id, target);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryivEXT (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGetQueryivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetQueryivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryivEXT (target, pname, params);
  }
  // GL_EXT_occlusion_query_boolean - glGetQueryivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glGetQueryivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryivEXT (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryObjectivEXT (GLuint id, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGetQueryObjectivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetQueryObjectivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryObjectivEXT (id, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryObjectuivEXT (GLuint id, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGetQueryObjectuivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetQueryObjectuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryObjectuivEXT (id, pname, params);
  }
  // GL_EXT_occlusion_query_boolean - glGetQueryObjectuivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] && glesConfig.m_glGetQueryObjectuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryObjectuivEXT (id, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGetQueryObjecti64vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetQueryObjecti64vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryObjecti64vEXT (id, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGetQueryObjectui64vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetQueryObjectui64vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetQueryObjectui64vEXT (id, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetInteger64vEXT (GLenum pname, GLint64 * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_disjoint_timer_query - glGetInteger64vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] && glesConfig.m_glGetInteger64vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInteger64vEXT (pname, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawBuffersEXT (GLsizei n, const GLenum * bufs)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers - glDrawBuffersEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers] && glesConfig.m_glDrawBuffersEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawBuffersEXT (n, bufs);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEnableiEXT (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glEnableiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glEnableiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiEXT (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDisableiEXT (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glDisableiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glDisableiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiEXT (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendEquationiEXT (GLuint buf, GLenum mode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glBlendEquationiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendEquationiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationiEXT (buf, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendEquationSeparateiEXT (GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glBlendEquationSeparateiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendEquationSeparateiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationSeparateiEXT (buf, modeRGB, modeAlpha);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendFunciEXT (GLuint buf, GLenum src, GLenum dst)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glBlendFunciEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendFunciEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFunciEXT (buf, src, dst);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendFuncSeparateiEXT (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glBlendFuncSeparateiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glBlendFuncSeparateiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFuncSeparateiEXT (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glColorMaskiEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glColorMaskiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glColorMaskiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glColorMaskiEXT (index, r, g, b, a);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsEnablediEXT (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_buffers_indexed - glIsEnablediEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] && glesConfig.m_glIsEnablediEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediEXT (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_elements_base_vertex - glDrawElementsBaseVertexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glDrawElementsBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsBaseVertexEXT (mode, count, type, indices, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawRangeElementsBaseVertexEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_elements_base_vertex - glDrawRangeElementsBaseVertexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glDrawRangeElementsBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawRangeElementsBaseVertexEXT (mode, start, end, count, type, indices, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_elements_base_vertex - glDrawElementsInstancedBaseVertexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glDrawElementsInstancedBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseVertexEXT (mode, count, type, indices, instancecount, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawElementsBaseVertexEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_elements_base_vertex - glMultiDrawElementsBaseVertexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] && glesConfig.m_glMultiDrawElementsBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawElementsBaseVertexEXT (mode, count, type, indices, drawcount, basevertex);
  }
  // GL_OES_draw_elements_base_vertex - glMultiDrawElementsBaseVertexEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glMultiDrawElementsBaseVertexEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawElementsBaseVertexEXT (mode, count, type, indices, drawcount, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_instanced - glDrawArraysInstancedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced] && glesConfig.m_glDrawArraysInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedEXT (mode, start, count, primcount);
  }
  // GL_EXT_instanced_arrays - glDrawArraysInstancedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_instanced_arrays] && glesConfig.m_glDrawArraysInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedEXT (mode, start, count, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_instanced - glDrawElementsInstancedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced] && glesConfig.m_glDrawElementsInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedEXT (mode, count, type, indices, primcount);
  }
  // GL_EXT_instanced_arrays - glDrawElementsInstancedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_instanced_arrays] && glesConfig.m_glDrawElementsInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedEXT (mode, count, type, indices, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawTransformFeedbackEXT (GLenum mode, GLuint id)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_transform_feedback - glDrawTransformFeedbackEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_transform_feedback] && glesConfig.m_glDrawTransformFeedbackEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawTransformFeedbackEXT (mode, id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawTransformFeedbackInstancedEXT (GLenum mode, GLuint id, GLsizei instancecount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_draw_transform_feedback - glDrawTransformFeedbackInstancedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_draw_transform_feedback] && glesConfig.m_glDrawTransformFeedbackInstancedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawTransformFeedbackInstancedEXT (mode, id, instancecount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBufferStorageExternalEXT (GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_external_buffer - glBufferStorageExternalEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_external_buffer] && glesConfig.m_glBufferStorageExternalEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBufferStorageExternalEXT (target, offset, size, clientBuffer, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedBufferStorageExternalEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_external_buffer - glNamedBufferStorageExternalEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_external_buffer] && glesConfig.m_glNamedBufferStorageExternalEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedBufferStorageExternalEXT (buffer, offset, size, clientBuffer, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFragmentShadingRatesEXT (GLsizei samples, GLsizei maxCount, GLsizei * count, GLenum * shadingRates)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_fragment_shading_rate - glGetFragmentShadingRatesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate] && glesConfig.m_glGetFragmentShadingRatesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFragmentShadingRatesEXT (samples, maxCount, count, shadingRates);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateEXT (GLenum rate)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_fragment_shading_rate - glShadingRateEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate] && glesConfig.m_glShadingRateEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateEXT (rate);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateCombinerOpsEXT (GLenum combinerOp0, GLenum combinerOp1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_fragment_shading_rate - glShadingRateCombinerOpsEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate] && glesConfig.m_glShadingRateCombinerOpsEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateCombinerOpsEXT (combinerOp0, combinerOp1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferShadingRateEXT (GLenum target, GLenum attachment, GLuint texture, GLint baseLayer, GLsizei numLayers, GLsizei texelWidth, GLsizei texelHeight)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_fragment_shading_rate - glFramebufferShadingRateEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate] && glesConfig.m_glFramebufferShadingRateEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferShadingRateEXT (target, attachment, texture, baseLayer, numLayers, texelWidth, texelHeight);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlitFramebufferLayersEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_framebuffer_blit_layers - glBlitFramebufferLayersEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit_layers] && glesConfig.m_glBlitFramebufferLayersEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlitFramebufferLayersEXT (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlitFramebufferLayerEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint srcLayer, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLint dstLayer, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_framebuffer_blit_layers - glBlitFramebufferLayerEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit_layers] && glesConfig.m_glBlitFramebufferLayerEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBlitFramebufferLayerEXT (srcX0, srcY0, srcX1, srcY1, srcLayer, dstX0, dstY0, dstX1, dstY1, dstLayer, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_geometry_shader - glFramebufferTextureEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_geometry_shader] && glesConfig.m_glFramebufferTextureEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureEXT (target, attachment, texture, level);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribDivisorEXT (GLuint index, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_instanced_arrays - glVertexAttribDivisorEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_instanced_arrays] && glesConfig.m_glVertexAttribDivisorEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisorEXT (index, divisor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_gles_glMapBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  void * result = ((void *)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_map_buffer_range - glMapBufferRangeEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_map_buffer_range] && glesConfig.m_glMapBufferRangeEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glMapBufferRangeEXT (target, offset, length, access);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFlushMappedBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_map_buffer_range - glFlushMappedBufferRangeEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_map_buffer_range] && glesConfig.m_glFlushMappedBufferRangeEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFlushMappedBufferRangeEXT (target, offset, length);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetUnsignedBytevEXT (GLenum pname, GLubyte * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glGetUnsignedBytevEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glGetUnsignedBytevEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUnsignedBytevEXT (pname, data);
  }
  // GL_EXT_semaphore - glGetUnsignedBytevEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glGetUnsignedBytevEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUnsignedBytevEXT (pname, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetUnsignedBytei_vEXT (GLenum target, GLuint index, GLubyte * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glGetUnsignedBytei_vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glGetUnsignedBytei_vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUnsignedBytei_vEXT (target, index, data);
  }
  // GL_EXT_semaphore - glGetUnsignedBytei_vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glGetUnsignedBytei_vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUnsignedBytei_vEXT (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteMemoryObjectsEXT (GLsizei n, const GLuint * memoryObjects)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glDeleteMemoryObjectsEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glDeleteMemoryObjectsEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteMemoryObjectsEXT (n, memoryObjects);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsMemoryObjectEXT (GLuint memoryObject)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glIsMemoryObjectEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glIsMemoryObjectEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsMemoryObjectEXT (memoryObject);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCreateMemoryObjectsEXT (GLsizei n, GLuint * memoryObjects)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glCreateMemoryObjectsEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glCreateMemoryObjectsEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glCreateMemoryObjectsEXT (n, memoryObjects);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMemoryObjectParameterivEXT (GLuint memoryObject, GLenum pname, const GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glMemoryObjectParameterivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glMemoryObjectParameterivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMemoryObjectParameterivEXT (memoryObject, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetMemoryObjectParameterivEXT (GLuint memoryObject, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glGetMemoryObjectParameterivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glGetMemoryObjectParameterivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetMemoryObjectParameterivEXT (memoryObject, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorageMem2DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTexStorageMem2DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTexStorageMem2DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorageMem2DEXT (target, levels, internalFormat, width, height, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorageMem2DMultisampleEXT (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTexStorageMem2DMultisampleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTexStorageMem2DMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorageMem2DMultisampleEXT (target, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorageMem3DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTexStorageMem3DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTexStorageMem3DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorageMem3DEXT (target, levels, internalFormat, width, height, depth, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorageMem3DMultisampleEXT (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTexStorageMem3DMultisampleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTexStorageMem3DMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorageMem3DMultisampleEXT (target, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBufferStorageMemEXT (GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glBufferStorageMemEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glBufferStorageMemEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBufferStorageMemEXT (target, size, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorageMem2DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTextureStorageMem2DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTextureStorageMem2DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorageMem2DEXT (texture, levels, internalFormat, width, height, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorageMem2DMultisampleEXT (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTextureStorageMem2DMultisampleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTextureStorageMem2DMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorageMem2DMultisampleEXT (texture, samples, internalFormat, width, height, fixedSampleLocations, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorageMem3DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTextureStorageMem3DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTextureStorageMem3DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorageMem3DEXT (texture, levels, internalFormat, width, height, depth, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorageMem3DMultisampleEXT (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glTextureStorageMem3DMultisampleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glTextureStorageMem3DMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorageMem3DMultisampleEXT (texture, samples, internalFormat, width, height, depth, fixedSampleLocations, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedBufferStorageMemEXT (GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object - glNamedBufferStorageMemEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object] && glesConfig.m_glNamedBufferStorageMemEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedBufferStorageMemEXT (buffer, size, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glImportMemoryFdEXT (GLuint memory, GLuint64 size, GLenum handleType, GLint fd)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object_fd - glImportMemoryFdEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object_fd] && glesConfig.m_glImportMemoryFdEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glImportMemoryFdEXT (memory, size, handleType, fd);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glImportMemoryWin32HandleEXT (GLuint memory, GLuint64 size, GLenum handleType, void * handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object_win32 - glImportMemoryWin32HandleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object_win32] && glesConfig.m_glImportMemoryWin32HandleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glImportMemoryWin32HandleEXT (memory, size, handleType, handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glImportMemoryWin32NameEXT (GLuint memory, GLuint64 size, GLenum handleType, const void * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_memory_object_win32 - glImportMemoryWin32NameEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_memory_object_win32] && glesConfig.m_glImportMemoryWin32NameEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glImportMemoryWin32NameEXT (memory, size, handleType, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawMeshTasksEXT (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_mesh_shader - glDrawMeshTasksEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader] && glesConfig.m_glDrawMeshTasksEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawMeshTasksEXT (num_groups_x, num_groups_y, num_groups_z);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawMeshTasksIndirectEXT (GLintptr indirect)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_mesh_shader - glDrawMeshTasksIndirectEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader] && glesConfig.m_glDrawMeshTasksIndirectEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawMeshTasksIndirectEXT (indirect);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawMeshTasksIndirectEXT (GLintptr indirect, GLsizei drawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_mesh_shader - glMultiDrawMeshTasksIndirectEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader] && glesConfig.m_glMultiDrawMeshTasksIndirectEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawMeshTasksIndirectEXT (indirect, drawcount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawMeshTasksIndirectCountEXT (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_mesh_shader - glMultiDrawMeshTasksIndirectCountEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader] && glesConfig.m_glMultiDrawMeshTasksIndirectCountEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawMeshTasksIndirectCountEXT (indirect, drawcount, maxdrawcount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawArraysEXT (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multi_draw_arrays - glMultiDrawArraysEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_arrays] && glesConfig.m_glMultiDrawArraysEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawArraysEXT (mode, first, count, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawElementsEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multi_draw_arrays - glMultiDrawElementsEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_arrays] && glesConfig.m_glMultiDrawElementsEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawElementsEXT (mode, count, type, indices, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawArraysIndirectEXT (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multi_draw_indirect - glMultiDrawArraysIndirectEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_indirect] && glesConfig.m_glMultiDrawArraysIndirectEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawArraysIndirectEXT (mode, indirect, drawcount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawElementsIndirectEXT (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multi_draw_indirect - glMultiDrawElementsIndirectEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_indirect] && glesConfig.m_glMultiDrawElementsIndirectEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawElementsIndirectEXT (mode, type, indirect, drawcount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multisampled_render_to_texture - glRenderbufferStorageMultisampleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multisampled_render_to_texture] && glesConfig.m_glRenderbufferStorageMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleEXT (target, samples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTexture2DMultisampleEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multisampled_render_to_texture - glFramebufferTexture2DMultisampleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multisampled_render_to_texture] && glesConfig.m_glFramebufferTexture2DMultisampleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTexture2DMultisampleEXT (target, attachment, textarget, texture, level, samples);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glReadBufferIndexedEXT (GLenum src, GLint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multiview_draw_buffers - glReadBufferIndexedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multiview_draw_buffers] && glesConfig.m_glReadBufferIndexedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glReadBufferIndexedEXT (src, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawBuffersIndexedEXT (GLint n, const GLenum * location, const GLint * indices)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multiview_draw_buffers - glDrawBuffersIndexedEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multiview_draw_buffers] && glesConfig.m_glDrawBuffersIndexedEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawBuffersIndexedEXT (n, location, indices);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetIntegeri_vEXT (GLenum target, GLuint index, GLint * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_multiview_draw_buffers - glGetIntegeri_vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_multiview_draw_buffers] && glesConfig.m_glGetIntegeri_vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetIntegeri_vEXT (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPolygonOffsetClampEXT (GLfloat factor, GLfloat units, GLfloat clamp)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_polygon_offset_clamp - glPolygonOffsetClampEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset_clamp] && glesConfig.m_glPolygonOffsetClampEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPolygonOffsetClampEXT (factor, units, clamp);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPrimitiveBoundingBoxEXT (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_primitive_bounding_box - glPrimitiveBoundingBoxEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_primitive_bounding_box] && glesConfig.m_glPrimitiveBoundingBoxEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPrimitiveBoundingBoxEXT (minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_raster_multisample - glRasterSamplesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_raster_multisample] && glesConfig.m_glRasterSamplesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glRasterSamplesEXT (samples, fixedsamplelocations);
  }
  // GL_NV_framebuffer_mixed_samples - glRasterSamplesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples] && glesConfig.m_glRasterSamplesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glRasterSamplesEXT (samples, fixedsamplelocations);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glGetGraphicsResetStatusEXT ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_robustness - glGetGraphicsResetStatusEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glGetGraphicsResetStatusEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetGraphicsResetStatusEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glReadnPixelsEXT (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_robustness - glReadnPixelsEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glReadnPixelsEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glReadnPixelsEXT (x, y, width, height, format, type, bufSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformfvEXT (GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_robustness - glGetnUniformfvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glGetnUniformfvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformfvEXT (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformivEXT (GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_robustness - glGetnUniformivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_robustness] && glesConfig.m_glGetnUniformivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformivEXT (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenSemaphoresEXT (GLsizei n, GLuint * semaphores)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glGenSemaphoresEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glGenSemaphoresEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGenSemaphoresEXT (n, semaphores);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteSemaphoresEXT (GLsizei n, const GLuint * semaphores)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glDeleteSemaphoresEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glDeleteSemaphoresEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteSemaphoresEXT (n, semaphores);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsSemaphoreEXT (GLuint semaphore)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glIsSemaphoreEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glIsSemaphoreEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsSemaphoreEXT (semaphore);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSemaphoreParameterui64vEXT (GLuint semaphore, GLenum pname, const GLuint64 * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glSemaphoreParameterui64vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glSemaphoreParameterui64vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glSemaphoreParameterui64vEXT (semaphore, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSemaphoreParameterui64vEXT (GLuint semaphore, GLenum pname, GLuint64 * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glGetSemaphoreParameterui64vEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glGetSemaphoreParameterui64vEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSemaphoreParameterui64vEXT (semaphore, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glWaitSemaphoreEXT (GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * srcLayouts)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glWaitSemaphoreEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glWaitSemaphoreEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glWaitSemaphoreEXT (semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, srcLayouts);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSignalSemaphoreEXT (GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore - glSignalSemaphoreEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore] && glesConfig.m_glSignalSemaphoreEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glSignalSemaphoreEXT (semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, dstLayouts);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glImportSemaphoreFdEXT (GLuint semaphore, GLenum handleType, GLint fd)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore_fd - glImportSemaphoreFdEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore_fd] && glesConfig.m_glImportSemaphoreFdEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glImportSemaphoreFdEXT (semaphore, handleType, fd);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glImportSemaphoreWin32HandleEXT (GLuint semaphore, GLenum handleType, void * handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore_win32 - glImportSemaphoreWin32HandleEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore_win32] && glesConfig.m_glImportSemaphoreWin32HandleEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glImportSemaphoreWin32HandleEXT (semaphore, handleType, handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glImportSemaphoreWin32NameEXT (GLuint semaphore, GLenum handleType, const void * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_semaphore_win32 - glImportSemaphoreWin32NameEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_semaphore_win32] && glesConfig.m_glImportSemaphoreWin32NameEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glImportSemaphoreWin32NameEXT (semaphore, handleType, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glActiveShaderProgramEXT (GLuint pipeline, GLuint program)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glActiveShaderProgramEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glActiveShaderProgramEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glActiveShaderProgramEXT (pipeline, program);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindProgramPipelineEXT (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glBindProgramPipelineEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glBindProgramPipelineEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glBindProgramPipelineEXT (pipeline);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glCreateShaderProgramvEXT (GLenum type, GLsizei count, const GLchar *const* strings)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glCreateShaderProgramvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glCreateShaderProgramvEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glCreateShaderProgramvEXT (type, count, strings);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteProgramPipelinesEXT (GLsizei n, const GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glDeleteProgramPipelinesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glDeleteProgramPipelinesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteProgramPipelinesEXT (n, pipelines);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenProgramPipelinesEXT (GLsizei n, GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glGenProgramPipelinesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glGenProgramPipelinesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGenProgramPipelinesEXT (n, pipelines);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramPipelineInfoLogEXT (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glGetProgramPipelineInfoLogEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glGetProgramPipelineInfoLogEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramPipelineInfoLogEXT (pipeline, bufSize, length, infoLog);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramPipelineivEXT (GLuint pipeline, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glGetProgramPipelineivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glGetProgramPipelineivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramPipelineivEXT (pipeline, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsProgramPipelineEXT (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glIsProgramPipelineEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glIsProgramPipelineEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsProgramPipelineEXT (pipeline);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramParameteriEXT (GLuint program, GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramParameteriEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramParameteriEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramParameteriEXT (program, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform1fEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1fEXT (program, location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform1fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1iEXT (GLuint program, GLint location, GLint v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform1iEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1iEXT (program, location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform1ivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform2fEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2fEXT (program, location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform2fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform2iEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2iEXT (program, location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform2ivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform3fEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3fEXT (program, location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform3fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform3iEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3iEXT (program, location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform3ivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform4fEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4fEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4fEXT (program, location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform4fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4fvEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform4iEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4iEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4iEXT (program, location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform4ivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4ivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4ivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix2fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix3fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix4fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUseProgramStagesEXT (GLuint pipeline, GLbitfield stages, GLuint program)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glUseProgramStagesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glUseProgramStagesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glUseProgramStagesEXT (pipeline, stages, program);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glValidateProgramPipelineEXT (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glValidateProgramPipelineEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glValidateProgramPipelineEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glValidateProgramPipelineEXT (pipeline);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform1uiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1uiEXT (program, location, v0);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform2uiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2uiEXT (program, location, v0, v1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform3uiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3uiEXT (program, location, v0, v1, v2);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform4uiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4uiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4uiEXT (program, location, v0, v1, v2, v3);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform1uivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform1uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform2uivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform2uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform3uivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform3uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniform4uivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniform4uivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4uivEXT (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix2x3fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix2x3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2x3fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix3x2fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix3x2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3x2fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix2x4fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix2x4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix2x4fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix4x2fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix4x2fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4x2fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix3x4fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix3x4fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix3x4fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_separate_shader_objects - glProgramUniformMatrix4x3fvEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] && glesConfig.m_glProgramUniformMatrix4x3fvEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformMatrix4x3fvEXT (program, location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferFetchBarrierEXT ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_shader_framebuffer_fetch_non_coherent - glFramebufferFetchBarrierEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch_non_coherent] && glesConfig.m_glFramebufferFetchBarrierEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferFetchBarrierEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferPixelLocalStorageSizeEXT (GLuint target, GLsizei size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_shader_pixel_local_storage2 - glFramebufferPixelLocalStorageSizeEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_shader_pixel_local_storage2] && glesConfig.m_glFramebufferPixelLocalStorageSizeEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferPixelLocalStorageSizeEXT (target, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLsizei _glew_gles_glGetFramebufferPixelLocalStorageSizeEXT (GLuint target)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLsizei result = ((GLsizei)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_shader_pixel_local_storage2 - glGetFramebufferPixelLocalStorageSizeEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_shader_pixel_local_storage2] && glesConfig.m_glGetFramebufferPixelLocalStorageSizeEXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetFramebufferPixelLocalStorageSizeEXT (target);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glClearPixelLocalStorageuiEXT (GLsizei offset, GLsizei n, const GLuint * values)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_shader_pixel_local_storage2 - glClearPixelLocalStorageuiEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_shader_pixel_local_storage2] && glesConfig.m_glClearPixelLocalStorageuiEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glClearPixelLocalStorageuiEXT (offset, n, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexPageCommitmentEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_sparse_texture - glTexPageCommitmentEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_sparse_texture] && glesConfig.m_glTexPageCommitmentEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexPageCommitmentEXT (target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPatchParameteriEXT (GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_tessellation_shader - glPatchParameteriEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_tessellation_shader] && glesConfig.m_glPatchParameteriEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glPatchParameteriEXT (pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexParameterIivEXT (GLenum target, GLenum pname, const GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glTexParameterIivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glTexParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIivEXT (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glTexParameterIuivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glTexParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIuivEXT (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glGetTexParameterIivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetTexParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIivEXT (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glGetTexParameterIuivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetTexParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIuivEXT (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterIivEXT (GLuint sampler, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glSamplerParameterIivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glSamplerParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIivEXT (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterIuivEXT (GLuint sampler, GLenum pname, const GLuint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glSamplerParameterIuivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glSamplerParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIuivEXT (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterIivEXT (GLuint sampler, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glGetSamplerParameterIivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIivEXT (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterIuivEXT (GLuint sampler, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_border_clamp - glGetSamplerParameterIuivEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIuivEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIuivEXT (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_buffer - glTexBufferEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer] && glesConfig.m_glTexBufferEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferEXT (target, internalformat, buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexBufferRangeEXT (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_buffer - glTexBufferRangeEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer] && glesConfig.m_glTexBufferRangeEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferRangeEXT (target, internalformat, buffer, offset, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage - glTexStorage1DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTexStorage1DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage1DEXT (target, levels, internalformat, width);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage - glTexStorage2DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTexStorage2DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage2DEXT (target, levels, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage - glTexStorage3DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTexStorage3DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage3DEXT (target, levels, internalformat, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage - glTextureStorage1DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTextureStorage1DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorage1DEXT (texture, target, levels, internalformat, width);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage - glTextureStorage2DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTextureStorage2DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorage2DEXT (texture, target, levels, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage - glTextureStorage3DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] && glesConfig.m_glTextureStorage3DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureStorage3DEXT (texture, target, levels, internalformat, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorageAttribs2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, const GLint*  attrib_list)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage_compression - glTexStorageAttribs2DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage_compression] && glesConfig.m_glTexStorageAttribs2DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorageAttribs2DEXT (target, levels, internalformat, width, height, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorageAttribs3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, const GLint*  attrib_list)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_storage_compression - glTexStorageAttribs3DEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_storage_compression] && glesConfig.m_glTexStorageAttribs3DEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorageAttribs3DEXT (target, levels, internalformat, width, height, depth, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureViewEXT (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_texture_view - glTextureViewEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_texture_view] && glesConfig.m_glTextureViewEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureViewEXT (texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCreateSemaphoresNV (GLsizei n, GLuint * semaphores)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_timeline_semaphore - glCreateSemaphoresNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore] && glesConfig.m_glCreateSemaphoresNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCreateSemaphoresNV (n, semaphores);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSemaphoreParameterivNV (GLuint semaphore, GLenum pname, const GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_timeline_semaphore - glSemaphoreParameterivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore] && glesConfig.m_glSemaphoreParameterivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glSemaphoreParameterivNV (semaphore, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSemaphoreParameterivNV (GLuint semaphore, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_timeline_semaphore - glGetSemaphoreParameterivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore] && glesConfig.m_glGetSemaphoreParameterivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSemaphoreParameterivNV (semaphore, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glAcquireKeyedMutexWin32EXT (GLuint memory, GLuint64 key, GLuint timeout)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_win32_keyed_mutex - glAcquireKeyedMutexWin32EXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_win32_keyed_mutex] && glesConfig.m_glAcquireKeyedMutexWin32EXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glAcquireKeyedMutexWin32EXT (memory, key, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glReleaseKeyedMutexWin32EXT (GLuint memory, GLuint64 key)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_win32_keyed_mutex - glReleaseKeyedMutexWin32EXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_win32_keyed_mutex] && glesConfig.m_glReleaseKeyedMutexWin32EXT)
  {
    prototypeCalled = true;
    result = glesConfig.m_glReleaseKeyedMutexWin32EXT (memory, key);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glWindowRectanglesEXT (GLenum mode, GLsizei count, const GLint * box)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_EXT_window_rectangles - glWindowRectanglesEXT
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_EXT_window_rectangles] && glesConfig.m_glWindowRectanglesEXT)
  {
    prototypeCalled = true;
    glesConfig.m_glWindowRectanglesEXT (mode, count, box);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_gles_glGetTextureHandleIMG (GLuint texture)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint64 result = ((GLuint64)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_bindless_texture - glGetTextureHandleIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] && glesConfig.m_glGetTextureHandleIMG)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetTextureHandleIMG (texture);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_gles_glGetTextureSamplerHandleIMG (GLuint texture, GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint64 result = ((GLuint64)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_bindless_texture - glGetTextureSamplerHandleIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] && glesConfig.m_glGetTextureSamplerHandleIMG)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetTextureSamplerHandleIMG (texture, sampler);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformHandleui64IMG (GLint location, GLuint64 value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_bindless_texture - glUniformHandleui64IMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] && glesConfig.m_glUniformHandleui64IMG)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformHandleui64IMG (location, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformHandleui64vIMG (GLint location, GLsizei count, const GLuint64 * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_bindless_texture - glUniformHandleui64vIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] && glesConfig.m_glUniformHandleui64vIMG)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformHandleui64vIMG (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformHandleui64IMG (GLuint program, GLint location, GLuint64 value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_bindless_texture - glProgramUniformHandleui64IMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] && glesConfig.m_glProgramUniformHandleui64IMG)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformHandleui64IMG (program, location, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformHandleui64vIMG (GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_bindless_texture - glProgramUniformHandleui64vIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] && glesConfig.m_glProgramUniformHandleui64vIMG)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformHandleui64vIMG (program, location, count, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTexture2DDownsampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint xscale, GLint yscale)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_framebuffer_downsample - glFramebufferTexture2DDownsampleIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_framebuffer_downsample] && glesConfig.m_glFramebufferTexture2DDownsampleIMG)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTexture2DDownsampleIMG (target, attachment, textarget, texture, level, xscale, yscale);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTextureLayerDownsampleIMG (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint xscale, GLint yscale)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_framebuffer_downsample - glFramebufferTextureLayerDownsampleIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_framebuffer_downsample] && glesConfig.m_glFramebufferTextureLayerDownsampleIMG)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureLayerDownsampleIMG (target, attachment, texture, level, layer, xscale, yscale);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisampleIMG (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_multisampled_render_to_texture - glRenderbufferStorageMultisampleIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_multisampled_render_to_texture] && glesConfig.m_glRenderbufferStorageMultisampleIMG)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleIMG (target, samples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTexture2DMultisampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_IMG_multisampled_render_to_texture - glFramebufferTexture2DMultisampleIMG
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_IMG_multisampled_render_to_texture] && glesConfig.m_glFramebufferTexture2DMultisampleIMG)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTexture2DMultisampleIMG (target, attachment, textarget, texture, level, samples);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glApplyFramebufferAttachmentCMAAINTEL ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_framebuffer_CMAA - glApplyFramebufferAttachmentCMAAINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_framebuffer_CMAA] && glesConfig.m_glApplyFramebufferAttachmentCMAAINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glApplyFramebufferAttachmentCMAAINTEL ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBeginPerfQueryINTEL (GLuint queryHandle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glBeginPerfQueryINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glBeginPerfQueryINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginPerfQueryINTEL (queryHandle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCreatePerfQueryINTEL (GLuint queryId, GLuint * queryHandle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glCreatePerfQueryINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glCreatePerfQueryINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glCreatePerfQueryINTEL (queryId, queryHandle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeletePerfQueryINTEL (GLuint queryHandle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glDeletePerfQueryINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glDeletePerfQueryINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glDeletePerfQueryINTEL (queryHandle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndPerfQueryINTEL (GLuint queryHandle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glEndPerfQueryINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glEndPerfQueryINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glEndPerfQueryINTEL (queryHandle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFirstPerfQueryIdINTEL (GLuint * queryId)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glGetFirstPerfQueryIdINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glGetFirstPerfQueryIdINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFirstPerfQueryIdINTEL (queryId);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint * nextQueryId)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glGetNextPerfQueryIdINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glGetNextPerfQueryIdINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glGetNextPerfQueryIdINTEL (queryId, nextQueryId);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glGetPerfCounterInfoINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glGetPerfCounterInfoINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfCounterInfoINTEL (queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glGetPerfQueryDataINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glGetPerfQueryDataINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfQueryDataINTEL (queryHandle, flags, dataSize, data, bytesWritten);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfQueryIdByNameINTEL (GLchar * queryName, GLuint * queryId)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glGetPerfQueryIdByNameINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glGetPerfQueryIdByNameINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfQueryIdByNameINTEL (queryName, queryId);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_INTEL_performance_query - glGetPerfQueryInfoINTEL
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] && glesConfig.m_glGetPerfQueryInfoINTEL)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPerfQueryInfoINTEL (queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendBarrierKHR ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_blend_equation_advanced - glBlendBarrierKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_blend_equation_advanced] && glesConfig.m_glBlendBarrierKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendBarrierKHR ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glDebugMessageControlKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glDebugMessageControlKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageControlKHR (source, type, severity, count, ids, enabled);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glDebugMessageInsertKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glDebugMessageInsertKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageInsertKHR (source, type, id, severity, length, buf);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void * userParam)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glDebugMessageCallbackKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glDebugMessageCallbackKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glDebugMessageCallbackKHR (callback, userParam);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glGetDebugMessageLogKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetDebugMessageLogKHR)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetDebugMessageLogKHR (count, bufSize, sources, types, ids, severities, lengths, messageLog);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar * message)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glPushDebugGroupKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glPushDebugGroupKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glPushDebugGroupKHR (source, id, length, message);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPopDebugGroupKHR ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glPopDebugGroupKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glPopDebugGroupKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glPopDebugGroupKHR ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glObjectLabelKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glObjectLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glObjectLabelKHR (identifier, name, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glGetObjectLabelKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetObjectLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectLabelKHR (identifier, name, bufSize, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glObjectPtrLabelKHR (const void * ptr, GLsizei length, const GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glObjectPtrLabelKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glObjectPtrLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glObjectPtrLabelKHR (ptr, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetObjectPtrLabelKHR (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glGetObjectPtrLabelKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetObjectPtrLabelKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetObjectPtrLabelKHR (ptr, bufSize, length, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPointervKHR (GLenum pname, void ** params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_debug - glGetPointervKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_debug] && glesConfig.m_glGetPointervKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPointervKHR (pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glGetGraphicsResetStatusKHR ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_robustness - glGetGraphicsResetStatusKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetGraphicsResetStatusKHR)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetGraphicsResetStatusKHR ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_robustness - glReadnPixelsKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glReadnPixelsKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glReadnPixelsKHR (x, y, width, height, format, type, bufSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_robustness - glGetnUniformfvKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetnUniformfvKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformfvKHR (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_robustness - glGetnUniformivKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetnUniformivKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformivKHR (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_robustness - glGetnUniformuivKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_robustness] && glesConfig.m_glGetnUniformuivKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glGetnUniformuivKHR (program, location, bufSize, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMaxShaderCompilerThreadsKHR (GLuint count)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_KHR_parallel_shader_compile - glMaxShaderCompilerThreadsKHR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_KHR_parallel_shader_compile] && glesConfig.m_glMaxShaderCompilerThreadsKHR)
  {
    prototypeCalled = true;
    glesConfig.m_glMaxShaderCompilerThreadsKHR (count);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferParameteriMESA (GLenum target, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_MESA_framebuffer_flip_y - glFramebufferParameteriMESA
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_y] && glesConfig.m_glFramebufferParameteriMESA)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferParameteriMESA (target, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFramebufferParameterivMESA (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_MESA_framebuffer_flip_y - glGetFramebufferParameterivMESA
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_y] && glesConfig.m_glGetFramebufferParameterivMESA)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFramebufferParameterivMESA (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_gles_glGetTextureHandleNV (GLuint texture)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint64 result = ((GLuint64)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glGetTextureHandleNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glGetTextureHandleNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetTextureHandleNV (texture);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_gles_glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint64 result = ((GLuint64)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glGetTextureSamplerHandleNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glGetTextureSamplerHandleNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetTextureSamplerHandleNV (texture, sampler);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMakeTextureHandleResidentNV (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glMakeTextureHandleResidentNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glMakeTextureHandleResidentNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMakeTextureHandleResidentNV (handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMakeTextureHandleNonResidentNV (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glMakeTextureHandleNonResidentNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glMakeTextureHandleNonResidentNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMakeTextureHandleNonResidentNV (handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_gles_glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint64 result = ((GLuint64)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glGetImageHandleNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glGetImageHandleNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetImageHandleNV (texture, level, layered, layer, format);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMakeImageHandleResidentNV (GLuint64 handle, GLenum access)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glMakeImageHandleResidentNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glMakeImageHandleResidentNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMakeImageHandleResidentNV (handle, access);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMakeImageHandleNonResidentNV (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glMakeImageHandleNonResidentNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glMakeImageHandleNonResidentNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMakeImageHandleNonResidentNV (handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformHandleui64NV (GLint location, GLuint64 value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glUniformHandleui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glUniformHandleui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformHandleui64NV (location, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glUniformHandleui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glUniformHandleui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformHandleui64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glProgramUniformHandleui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glProgramUniformHandleui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformHandleui64NV (program, location, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glProgramUniformHandleui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glProgramUniformHandleui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniformHandleui64vNV (program, location, count, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsTextureHandleResidentNV (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glIsTextureHandleResidentNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glIsTextureHandleResidentNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsTextureHandleResidentNV (handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsImageHandleResidentNV (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_bindless_texture - glIsImageHandleResidentNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] && glesConfig.m_glIsImageHandleResidentNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsImageHandleResidentNV (handle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendParameteriNV (GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_blend_equation_advanced - glBlendParameteriNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced] && glesConfig.m_glBlendParameteriNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendParameteriNV (pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendBarrierNV ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_blend_equation_advanced - glBlendBarrierNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced] && glesConfig.m_glBlendBarrierNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendBarrierNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportPositionWScaleNV (GLuint index, GLfloat xcoeff, GLfloat ycoeff)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_clip_space_w_scaling - glViewportPositionWScaleNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_clip_space_w_scaling] && glesConfig.m_glViewportPositionWScaleNV)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportPositionWScaleNV (index, xcoeff, ycoeff);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBeginConditionalRenderNV (GLuint id, GLenum mode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_conditional_render - glBeginConditionalRenderNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_conditional_render] && glesConfig.m_glBeginConditionalRenderNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBeginConditionalRenderNV (id, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndConditionalRenderNV ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_conditional_render - glEndConditionalRenderNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_conditional_render] && glesConfig.m_glEndConditionalRenderNV)
  {
    prototypeCalled = true;
    glesConfig.m_glEndConditionalRenderNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_conservative_raster - glSubpixelPrecisionBiasNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_conservative_raster] && glesConfig.m_glSubpixelPrecisionBiasNV)
  {
    prototypeCalled = true;
    glesConfig.m_glSubpixelPrecisionBiasNV (xbits, ybits);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glConservativeRasterParameteriNV (GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_conservative_raster_pre_snap_triangles - glConservativeRasterParameteriNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap_triangles] && glesConfig.m_glConservativeRasterParameteriNV)
  {
    prototypeCalled = true;
    glesConfig.m_glConservativeRasterParameteriNV (pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyBufferSubDataNV (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_copy_buffer - glCopyBufferSubDataNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_copy_buffer] && glesConfig.m_glCopyBufferSubDataNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyBufferSubDataNV (readTarget, writeTarget, readOffset, writeOffset, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverageMaskNV (GLboolean mask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_coverage_sample - glCoverageMaskNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_coverage_sample] && glesConfig.m_glCoverageMaskNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverageMaskNV (mask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverageOperationNV (GLenum operation)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_coverage_sample - glCoverageOperationNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_coverage_sample] && glesConfig.m_glCoverageOperationNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverageOperationNV (operation);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawBuffersNV (GLsizei n, const GLenum * bufs)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_buffers - glDrawBuffersNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_buffers] && glesConfig.m_glDrawBuffersNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawBuffersNV (n, bufs);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawArraysInstancedNV (GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_instanced - glDrawArraysInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_instanced] && glesConfig.m_glDrawArraysInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawArraysInstancedNV (mode, first, count, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedNV (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_instanced - glDrawElementsInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_instanced] && glesConfig.m_glDrawElementsInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedNV (mode, count, type, indices, primcount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawVkImageNV (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_vulkan_image - glDrawVkImageNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] && glesConfig.m_glDrawVkImageNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawVkImageNV (vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLVULKANPROCNV _glew_gles_glGetVkProcAddrNV (const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLVULKANPROCNV result = ((GLVULKANPROCNV)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_vulkan_image - glGetVkProcAddrNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] && glesConfig.m_glGetVkProcAddrNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetVkProcAddrNV (name);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glWaitVkSemaphoreNV (GLuint64 vkSemaphore)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_vulkan_image - glWaitVkSemaphoreNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] && glesConfig.m_glWaitVkSemaphoreNV)
  {
    prototypeCalled = true;
    glesConfig.m_glWaitVkSemaphoreNV (vkSemaphore);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSignalVkSemaphoreNV (GLuint64 vkSemaphore)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_vulkan_image - glSignalVkSemaphoreNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] && glesConfig.m_glSignalVkSemaphoreNV)
  {
    prototypeCalled = true;
    glesConfig.m_glSignalVkSemaphoreNV (vkSemaphore);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSignalVkFenceNV (GLuint64 vkFence)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_draw_vulkan_image - glSignalVkFenceNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] && glesConfig.m_glSignalVkFenceNV)
  {
    prototypeCalled = true;
    glesConfig.m_glSignalVkFenceNV (vkFence);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteFencesNV (GLsizei n, const GLuint * fences)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glDeleteFencesNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glDeleteFencesNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteFencesNV (n, fences);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenFencesNV (GLsizei n, GLuint * fences)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glGenFencesNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glGenFencesNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGenFencesNV (n, fences);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsFenceNV (GLuint fence)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glIsFenceNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glIsFenceNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsFenceNV (fence);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glTestFenceNV (GLuint fence)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glTestFenceNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glTestFenceNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glTestFenceNV (fence);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFenceivNV (GLuint fence, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glGetFenceivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glGetFenceivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFenceivNV (fence, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFinishFenceNV (GLuint fence)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glFinishFenceNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glFinishFenceNV)
  {
    prototypeCalled = true;
    glesConfig.m_glFinishFenceNV (fence);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSetFenceNV (GLuint fence, GLenum condition)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fence - glSetFenceNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fence] && glesConfig.m_glSetFenceNV)
  {
    prototypeCalled = true;
    glesConfig.m_glSetFenceNV (fence, condition);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFragmentCoverageColorNV (GLuint color)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_fragment_coverage_to_color - glFragmentCoverageColorNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_fragment_coverage_to_color] && glesConfig.m_glFragmentCoverageColorNV)
  {
    prototypeCalled = true;
    glesConfig.m_glFragmentCoverageColorNV (color);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlitFramebufferNV (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_framebuffer_blit - glBlitFramebufferNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_blit] && glesConfig.m_glBlitFramebufferNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBlitFramebufferNV (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverageModulationTableNV (GLsizei n, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_framebuffer_mixed_samples - glCoverageModulationTableNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples] && glesConfig.m_glCoverageModulationTableNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverageModulationTableNV (n, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetCoverageModulationTableNV (GLsizei bufSize, GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_framebuffer_mixed_samples - glGetCoverageModulationTableNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples] && glesConfig.m_glGetCoverageModulationTableNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetCoverageModulationTableNV (bufSize, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverageModulationNV (GLenum components)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_framebuffer_mixed_samples - glCoverageModulationNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples] && glesConfig.m_glCoverageModulationNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverageModulationNV (components);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glRenderbufferStorageMultisampleNV (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_framebuffer_multisample - glRenderbufferStorageMultisampleNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_framebuffer_multisample] && glesConfig.m_glRenderbufferStorageMultisampleNV)
  {
    prototypeCalled = true;
    glesConfig.m_glRenderbufferStorageMultisampleNV (target, samples, internalformat, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform1i64NV (GLint location, GLint64EXT x)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform1i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform1i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform1i64NV (location, x);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform2i64NV (GLint location, GLint64EXT x, GLint64EXT y)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform2i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform2i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform2i64NV (location, x, y);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform3i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform3i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform3i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform3i64NV (location, x, y, z);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform4i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform4i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform4i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform4i64NV (location, x, y, z, w);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform1i64vNV (GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform1i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform1i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform1i64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform2i64vNV (GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform2i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform2i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform2i64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform3i64vNV (GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform3i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform3i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform3i64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform4i64vNV (GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform4i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform4i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform4i64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform1ui64NV (GLint location, GLuint64EXT x)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform1ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform1ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform1ui64NV (location, x);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform2ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform2ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform2ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform2ui64NV (location, x, y);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform3ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform3ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform3ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform3ui64NV (location, x, y, z);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform4ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform4ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform4ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform4ui64NV (location, x, y, z, w);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform1ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform1ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform1ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform1ui64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform2ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform2ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform2ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform2ui64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform3ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform3ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform3ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform3ui64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniform4ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glUniform4ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glUniform4ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniform4ui64vNV (location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetUniformi64vNV (GLuint program, GLint location, GLint64EXT * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glGetUniformi64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glGetUniformi64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetUniformi64vNV (program, location, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1i64NV (GLuint program, GLint location, GLint64EXT x)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform1i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform1i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1i64NV (program, location, x);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform2i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform2i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2i64NV (program, location, x, y);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform3i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform3i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3i64NV (program, location, x, y, z);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform4i64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform4i64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4i64NV (program, location, x, y, z, w);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform1i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform1i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1i64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform2i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform2i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2i64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform3i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform3i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3i64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform4i64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform4i64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4i64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1ui64NV (GLuint program, GLint location, GLuint64EXT x)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform1ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform1ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1ui64NV (program, location, x);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform2ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform2ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2ui64NV (program, location, x, y);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform3ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform3ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3ui64NV (program, location, x, y, z);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform4ui64NV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform4ui64NV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4ui64NV (program, location, x, y, z, w);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform1ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform1ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform1ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform1ui64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform2ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform2ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform2ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform2ui64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform3ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform3ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform3ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform3ui64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramUniform4ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_gpu_shader5 - glProgramUniform4ui64vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] && glesConfig.m_glProgramUniform4ui64vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramUniform4ui64vNV (program, location, count, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glVertexAttribDivisorNV (GLuint index, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_instanced_arrays - glVertexAttribDivisorNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_instanced_arrays] && glesConfig.m_glVertexAttribDivisorNV)
  {
    prototypeCalled = true;
    glesConfig.m_glVertexAttribDivisorNV (index, divisor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_internalformat_sample_query - glGetInternalformatSampleivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_internalformat_sample_query] && glesConfig.m_glGetInternalformatSampleivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetInternalformatSampleivNV (target, internalformat, samples, pname, count, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetMemoryObjectDetachedResourcesuivNV (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_attachment - glGetMemoryObjectDetachedResourcesuivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] && glesConfig.m_glGetMemoryObjectDetachedResourcesuivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetMemoryObjectDetachedResourcesuivNV (memory, pname, first, count, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glResetMemoryObjectParameterNV (GLuint memory, GLenum pname)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_attachment - glResetMemoryObjectParameterNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] && glesConfig.m_glResetMemoryObjectParameterNV)
  {
    prototypeCalled = true;
    glesConfig.m_glResetMemoryObjectParameterNV (memory, pname);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_attachment - glTexAttachMemoryNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] && glesConfig.m_glTexAttachMemoryNV)
  {
    prototypeCalled = true;
    glesConfig.m_glTexAttachMemoryNV (target, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBufferAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_attachment - glBufferAttachMemoryNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] && glesConfig.m_glBufferAttachMemoryNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBufferAttachMemoryNV (target, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureAttachMemoryNV (GLuint texture, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_attachment - glTextureAttachMemoryNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] && glesConfig.m_glTextureAttachMemoryNV)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureAttachMemoryNV (texture, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedBufferAttachMemoryNV (GLuint buffer, GLuint memory, GLuint64 offset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_attachment - glNamedBufferAttachMemoryNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] && glesConfig.m_glNamedBufferAttachMemoryNV)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedBufferAttachMemoryNV (buffer, memory, offset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBufferPageCommitmentMemNV (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_object_sparse - glBufferPageCommitmentMemNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse] && glesConfig.m_glBufferPageCommitmentMemNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBufferPageCommitmentMemNV (target, offset, size, memory, memOffset, commit);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexPageCommitmentMemNV (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_object_sparse - glTexPageCommitmentMemNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse] && glesConfig.m_glTexPageCommitmentMemNV)
  {
    prototypeCalled = true;
    glesConfig.m_glTexPageCommitmentMemNV (target, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedBufferPageCommitmentMemNV (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_object_sparse - glNamedBufferPageCommitmentMemNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse] && glesConfig.m_glNamedBufferPageCommitmentMemNV)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedBufferPageCommitmentMemNV (buffer, offset, size, memory, memOffset, commit);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexturePageCommitmentMemNV (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_memory_object_sparse - glTexturePageCommitmentMemNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse] && glesConfig.m_glTexturePageCommitmentMemNV)
  {
    prototypeCalled = true;
    glesConfig.m_glTexturePageCommitmentMemNV (texture, layer, level, xoffset, yoffset, zoffset, width, height, depth, memory, offset, commit);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawMeshTasksNV (GLuint first, GLuint count)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_mesh_shader - glDrawMeshTasksNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_mesh_shader] && glesConfig.m_glDrawMeshTasksNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawMeshTasksNV (first, count);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawMeshTasksIndirectNV (GLintptr indirect)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_mesh_shader - glDrawMeshTasksIndirectNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_mesh_shader] && glesConfig.m_glDrawMeshTasksIndirectNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawMeshTasksIndirectNV (indirect);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawMeshTasksIndirectNV (GLintptr indirect, GLsizei drawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_mesh_shader - glMultiDrawMeshTasksIndirectNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_mesh_shader] && glesConfig.m_glMultiDrawMeshTasksIndirectNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawMeshTasksIndirectNV (indirect, drawcount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMultiDrawMeshTasksIndirectCountNV (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_mesh_shader - glMultiDrawMeshTasksIndirectCountNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_mesh_shader] && glesConfig.m_glMultiDrawMeshTasksIndirectCountNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMultiDrawMeshTasksIndirectCountNV (indirect, drawcount, maxdrawcount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix2x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_non_square_matrices - glUniformMatrix2x3fvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix2x3fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix2x3fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix3x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_non_square_matrices - glUniformMatrix3x2fvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix3x2fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix3x2fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix2x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_non_square_matrices - glUniformMatrix2x4fvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix2x4fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix2x4fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix4x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_non_square_matrices - glUniformMatrix4x2fvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix4x2fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix4x2fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix3x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_non_square_matrices - glUniformMatrix3x4fvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix3x4fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix3x4fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glUniformMatrix4x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_non_square_matrices - glUniformMatrix4x3fvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] && glesConfig.m_glUniformMatrix4x3fvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glUniformMatrix4x3fvNV (location, count, transpose, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_gles_glGenPathsNV (GLsizei range)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLuint result = ((GLuint)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGenPathsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGenPathsNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGenPathsNV (range);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeletePathsNV (GLuint path, GLsizei range)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glDeletePathsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glDeletePathsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDeletePathsNV (path, range);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsPathNV (GLuint path)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glIsPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glIsPathNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsPathNV (path);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathCommandsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathCommandsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathCommandsNV (path, numCommands, commands, numCoords, coordType, coords);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathCoordsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathCoordsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathCoordsNV (path, numCoords, coordType, coords);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathSubCommandsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathSubCommandsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathSubCommandsNV (path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathSubCoordsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathSubCoordsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathSubCoordsNV (path, coordStart, numCoords, coordType, coords);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathStringNV (GLuint path, GLenum format, GLsizei length, const void * pathString)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathStringNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathStringNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathStringNV (path, format, length, pathString);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathGlyphsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathGlyphsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathGlyphsNV (firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathGlyphRangeNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathGlyphRangeNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathGlyphRangeNV (firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glWeightPathsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glWeightPathsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glWeightPathsNV (resultPath, numPaths, paths, weights);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyPathNV (GLuint resultPath, GLuint srcPath)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glCopyPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glCopyPathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyPathNV (resultPath, srcPath);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glInterpolatePathsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glInterpolatePathsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glInterpolatePathsNV (resultPath, pathA, pathB, weight);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glTransformPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glTransformPathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glTransformPathNV (resultPath, srcPath, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathParameterivNV (GLuint path, GLenum pname, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathParameterivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathParameterivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathParameterivNV (path, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathParameteriNV (GLuint path, GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathParameteriNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathParameteriNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathParameteriNV (path, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathParameterfvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathParameterfvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathParameterfvNV (path, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathParameterfNV (GLuint path, GLenum pname, GLfloat value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathParameterfNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathParameterfNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathParameterfNV (path, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat * dashArray)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathDashArrayNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathDashArrayNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathDashArrayNV (path, dashCount, dashArray);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathStencilFuncNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathStencilFuncNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathStencilFuncNV (func, ref, mask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathStencilDepthOffsetNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathStencilDepthOffsetNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathStencilDepthOffsetNV (factor, units);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilFillPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilFillPathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilFillPathNV (path, fillMode, mask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilStrokePathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilStrokePathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilStrokePathNV (path, reference, mask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilFillPathInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilFillPathInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilFillPathInstancedNV (numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilStrokePathInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilStrokePathInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilStrokePathInstancedNV (numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPathCoverDepthFuncNV (GLenum func)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathCoverDepthFuncNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathCoverDepthFuncNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPathCoverDepthFuncNV (func);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverFillPathNV (GLuint path, GLenum coverMode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glCoverFillPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glCoverFillPathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverFillPathNV (path, coverMode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverStrokePathNV (GLuint path, GLenum coverMode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glCoverStrokePathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glCoverStrokePathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverStrokePathNV (path, coverMode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glCoverFillPathInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glCoverFillPathInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverFillPathInstancedNV (numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glCoverStrokePathInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glCoverStrokePathInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glCoverStrokePathInstancedNV (numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathParameterivNV (GLuint path, GLenum pname, GLint * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathParameterivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathParameterivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathParameterivNV (path, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathParameterfvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathParameterfvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathParameterfvNV (path, pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathCommandsNV (GLuint path, GLubyte * commands)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathCommandsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathCommandsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathCommandsNV (path, commands);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathCoordsNV (GLuint path, GLfloat * coords)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathCoordsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathCoordsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathCoordsNV (path, coords);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathDashArrayNV (GLuint path, GLfloat * dashArray)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathDashArrayNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathDashArrayNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathDashArrayNV (path, dashArray);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathMetricsNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathMetricsNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathMetricsNV (metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathMetricRangeNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathMetricRangeNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathMetricRangeNV (metricQueryMask, firstPathName, numPaths, stride, metrics);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathSpacingNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathSpacingNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetPathSpacingNV (pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glIsPointInFillPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glIsPointInFillPathNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsPointInFillPathNV (path, mask, x, y);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glIsPointInStrokePathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glIsPointInStrokePathNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsPointInStrokePathNV (path, x, y);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLfloat _glew_gles_glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLfloat result = ((GLfloat)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetPathLengthNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetPathLengthNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glGetPathLengthNV (path, startSegment, numSegments);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPointAlongPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPointAlongPathNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glPointAlongPathNV (path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat * m)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glMatrixLoad3x2fNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glMatrixLoad3x2fNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMatrixLoad3x2fNV (matrixMode, m);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat * m)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glMatrixLoad3x3fNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glMatrixLoad3x3fNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMatrixLoad3x3fNV (matrixMode, m);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat * m)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glMatrixLoadTranspose3x3fNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glMatrixLoadTranspose3x3fNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMatrixLoadTranspose3x3fNV (matrixMode, m);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat * m)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glMatrixMult3x2fNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glMatrixMult3x2fNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMatrixMult3x2fNV (matrixMode, m);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat * m)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glMatrixMult3x3fNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glMatrixMult3x3fNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMatrixMult3x3fNV (matrixMode, m);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat * m)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glMatrixMultTranspose3x3fNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glMatrixMultTranspose3x3fNV)
  {
    prototypeCalled = true;
    glesConfig.m_glMatrixMultTranspose3x3fNV (matrixMode, m);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilThenCoverFillPathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilThenCoverFillPathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilThenCoverFillPathNV (path, fillMode, mask, coverMode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilThenCoverStrokePathNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilThenCoverStrokePathNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilThenCoverStrokePathNV (path, reference, mask, coverMode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilThenCoverFillPathInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilThenCoverFillPathInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilThenCoverFillPathInstancedNV (numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glStencilThenCoverStrokePathInstancedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glStencilThenCoverStrokePathInstancedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glStencilThenCoverStrokePathInstancedNV (numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glPathGlyphIndexRangeNV (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathGlyphIndexRangeNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathGlyphIndexRangeNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glPathGlyphIndexRangeNV (fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathGlyphIndexArrayNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathGlyphIndexArrayNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glPathGlyphIndexArrayNV (firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_gles_glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLenum result = ((GLenum)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glPathMemoryGlyphIndexArrayNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glPathMemoryGlyphIndexArrayNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glPathMemoryGlyphIndexArrayNV (firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glProgramPathFragmentInputGenNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glProgramPathFragmentInputGenNV)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramPathFragmentInputGenNV (program, location, genMode, components, coeffs);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_path_rendering - glGetProgramResourcefvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_path_rendering] && glesConfig.m_glGetProgramResourcefvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramResourcefvNV (program, programInterface, index, propCount, props, count, length, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPolygonModeNV (GLenum face, GLenum mode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_polygon_mode - glPolygonModeNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_polygon_mode] && glesConfig.m_glPolygonModeNV)
  {
    prototypeCalled = true;
    glesConfig.m_glPolygonModeNV (face, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glReadBufferNV (GLenum mode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_read_buffer - glReadBufferNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_read_buffer] && glesConfig.m_glReadBufferNV)
  {
    prototypeCalled = true;
    glesConfig.m_glReadBufferNV (mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_sample_locations - glFramebufferSampleLocationsfvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_sample_locations] && glesConfig.m_glFramebufferSampleLocationsfvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferSampleLocationsfvNV (target, start, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_sample_locations - glNamedFramebufferSampleLocationsfvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_sample_locations] && glesConfig.m_glNamedFramebufferSampleLocationsfvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedFramebufferSampleLocationsfvNV (framebuffer, start, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glResolveDepthValuesNV ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_sample_locations - glResolveDepthValuesNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_sample_locations] && glesConfig.m_glResolveDepthValuesNV)
  {
    prototypeCalled = true;
    glesConfig.m_glResolveDepthValuesNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorExclusiveNV (GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_scissor_exclusive - glScissorExclusiveNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_scissor_exclusive] && glesConfig.m_glScissorExclusiveNV)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorExclusiveNV (x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorExclusiveArrayvNV (GLuint first, GLsizei count, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_scissor_exclusive - glScissorExclusiveArrayvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_scissor_exclusive] && glesConfig.m_glScissorExclusiveArrayvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorExclusiveArrayvNV (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindShadingRateImageNV (GLuint texture)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glBindShadingRateImageNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glBindShadingRateImageNV)
  {
    prototypeCalled = true;
    glesConfig.m_glBindShadingRateImageNV (texture);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetShadingRateImagePaletteNV (GLuint viewport, GLuint entry, GLenum * rate)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glGetShadingRateImagePaletteNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glGetShadingRateImagePaletteNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetShadingRateImagePaletteNV (viewport, entry, rate);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetShadingRateSampleLocationivNV (GLenum rate, GLuint samples, GLuint index, GLint * location)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glGetShadingRateSampleLocationivNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glGetShadingRateSampleLocationivNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetShadingRateSampleLocationivNV (rate, samples, index, location);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateImageBarrierNV (GLboolean synchronize)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glShadingRateImageBarrierNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glShadingRateImageBarrierNV)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateImageBarrierNV (synchronize);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateImagePaletteNV (GLuint viewport, GLuint first, GLsizei count, const GLenum * rates)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glShadingRateImagePaletteNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glShadingRateImagePaletteNV)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateImagePaletteNV (viewport, first, count, rates);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateSampleOrderNV (GLenum order)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glShadingRateSampleOrderNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glShadingRateSampleOrderNV)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateSampleOrderNV (order);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateSampleOrderCustomNV (GLenum rate, GLuint samples, const GLint * locations)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_shading_rate_image - glShadingRateSampleOrderCustomNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] && glesConfig.m_glShadingRateSampleOrderCustomNV)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateSampleOrderCustomNV (rate, samples, locations);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureBarrierNV ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_texture_barrier - glTextureBarrierNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_texture_barrier] && glesConfig.m_glTextureBarrierNV)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureBarrierNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportArrayvNV (GLuint first, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glViewportArrayvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glViewportArrayvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportArrayvNV (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportIndexedfNV (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glViewportIndexedfNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glViewportIndexedfNV)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportIndexedfNV (index, x, y, w, h);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportIndexedfvNV (GLuint index, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glViewportIndexedfvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glViewportIndexedfvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportIndexedfvNV (index, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorArrayvNV (GLuint first, GLsizei count, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glScissorArrayvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glScissorArrayvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorArrayvNV (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorIndexedNV (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glScissorIndexedNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glScissorIndexedNV)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorIndexedNV (index, left, bottom, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorIndexedvNV (GLuint index, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glScissorIndexedvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glScissorIndexedvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorIndexedvNV (index, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDepthRangeArrayfvNV (GLuint first, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glDepthRangeArrayfvNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glDepthRangeArrayfvNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDepthRangeArrayfvNV (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDepthRangeIndexedfNV (GLuint index, GLfloat n, GLfloat f)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glDepthRangeIndexedfNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glDepthRangeIndexedfNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDepthRangeIndexedfNV (index, n, f);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFloati_vNV (GLenum target, GLuint index, GLfloat * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glGetFloati_vNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glGetFloati_vNV)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFloati_vNV (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEnableiNV (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glEnableiNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glEnableiNV)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiNV (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDisableiNV (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glDisableiNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glDisableiNV)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiNV (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsEnablediNV (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_array - glIsEnablediNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_array] && glesConfig.m_glIsEnablediNV)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediNV (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportSwizzleNV (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_NV_viewport_swizzle - glViewportSwizzleNV
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_NV_viewport_swizzle] && glesConfig.m_glViewportSwizzleNV)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportSwizzleNV (index, swizzlex, swizzley, swizzlez, swizzlew);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_EGL_image - glEGLImageTargetTexture2DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_EGL_image] && glesConfig.m_glEGLImageTargetTexture2DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glEGLImageTargetTexture2DOES (target, image);
  }
  // GL_OES_EGL_image_external - glEGLImageTargetTexture2DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_EGL_image_external] && glesConfig.m_glEGLImageTargetTexture2DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glEGLImageTargetTexture2DOES (target, image);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_EGL_image - glEGLImageTargetRenderbufferStorageOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_EGL_image] && glesConfig.m_glEGLImageTargetRenderbufferStorageOES)
  {
    prototypeCalled = true;
    glesConfig.m_glEGLImageTargetRenderbufferStorageOES (target, image);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyImageSubDataOES (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_copy_image - glCopyImageSubDataOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_copy_image] && glesConfig.m_glCopyImageSubDataOES)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyImageSubDataOES (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEnableiOES (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glEnableiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glEnableiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiOES (target, index);
  }
  // GL_OES_viewport_array - glEnableiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glEnableiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableiOES (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDisableiOES (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glDisableiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glDisableiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiOES (target, index);
  }
  // GL_OES_viewport_array - glDisableiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glDisableiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableiOES (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendEquationiOES (GLuint buf, GLenum mode)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glBlendEquationiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendEquationiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationiOES (buf, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendEquationSeparateiOES (GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glBlendEquationSeparateiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendEquationSeparateiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendEquationSeparateiOES (buf, modeRGB, modeAlpha);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendFunciOES (GLuint buf, GLenum src, GLenum dst)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glBlendFunciOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendFunciOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFunciOES (buf, src, dst);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBlendFuncSeparateiOES (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glBlendFuncSeparateiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glBlendFuncSeparateiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBlendFuncSeparateiOES (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glColorMaskiOES (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glColorMaskiOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glColorMaskiOES)
  {
    prototypeCalled = true;
    glesConfig.m_glColorMaskiOES (index, r, g, b, a);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsEnablediOES (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_buffers_indexed - glIsEnablediOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] && glesConfig.m_glIsEnablediOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediOES (target, index);
  }
  // GL_OES_viewport_array - glIsEnablediOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glIsEnablediOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsEnablediOES (target, index);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_elements_base_vertex - glDrawElementsBaseVertexOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glDrawElementsBaseVertexOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsBaseVertexOES (mode, count, type, indices, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawRangeElementsBaseVertexOES (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_elements_base_vertex - glDrawRangeElementsBaseVertexOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glDrawRangeElementsBaseVertexOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawRangeElementsBaseVertexOES (mode, start, end, count, type, indices, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDrawElementsInstancedBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_draw_elements_base_vertex - glDrawElementsInstancedBaseVertexOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] && glesConfig.m_glDrawElementsInstancedBaseVertexOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDrawElementsInstancedBaseVertexOES (mode, count, type, indices, instancecount, basevertex);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTextureOES (GLenum target, GLenum attachment, GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_geometry_shader - glFramebufferTextureOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_geometry_shader] && glesConfig.m_glFramebufferTextureOES)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureOES (target, attachment, texture, level);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_get_program_binary - glGetProgramBinaryOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_get_program_binary] && glesConfig.m_glGetProgramBinaryOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetProgramBinaryOES (program, bufSize, length, binaryFormat, binary);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void * binary, GLint length)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_get_program_binary - glProgramBinaryOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_get_program_binary] && glesConfig.m_glProgramBinaryOES)
  {
    prototypeCalled = true;
    glesConfig.m_glProgramBinaryOES (program, binaryFormat, binary, length);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_gles_glMapBufferOES (GLenum target, GLenum access)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  void * result = ((void *)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_mapbuffer - glMapBufferOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_mapbuffer] && glesConfig.m_glMapBufferOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glMapBufferOES (target, access);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glUnmapBufferOES (GLenum target)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_mapbuffer - glUnmapBufferOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_mapbuffer] && glesConfig.m_glUnmapBufferOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glUnmapBufferOES (target);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetBufferPointervOES (GLenum target, GLenum pname, void ** params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_mapbuffer - glGetBufferPointervOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_mapbuffer] && glesConfig.m_glGetBufferPointervOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetBufferPointervOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPrimitiveBoundingBoxOES (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_primitive_bounding_box - glPrimitiveBoundingBoxOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_primitive_bounding_box] && glesConfig.m_glPrimitiveBoundingBoxOES)
  {
    prototypeCalled = true;
    glesConfig.m_glPrimitiveBoundingBoxOES (minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glMinSampleShadingOES (GLfloat value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_sample_shading - glMinSampleShadingOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_sample_shading] && glesConfig.m_glMinSampleShadingOES)
  {
    prototypeCalled = true;
    glesConfig.m_glMinSampleShadingOES (value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glPatchParameteriOES (GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_tessellation_shader - glPatchParameteriOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_tessellation_shader] && glesConfig.m_glPatchParameteriOES)
  {
    prototypeCalled = true;
    glesConfig.m_glPatchParameteriOES (pname, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_3D - glTexImage3DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_3D] && glesConfig.m_glTexImage3DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexImage3DOES (target, level, internalformat, width, height, depth, border, format, type, pixels);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_3D - glTexSubImage3DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_3D] && glesConfig.m_glTexSubImage3DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexSubImage3DOES (target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_3D - glCopyTexSubImage3DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_3D] && glesConfig.m_glCopyTexSubImage3DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glCopyTexSubImage3DOES (target, level, xoffset, yoffset, zoffset, x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_3D - glCompressedTexImage3DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_3D] && glesConfig.m_glCompressedTexImage3DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glCompressedTexImage3DOES (target, level, internalformat, width, height, depth, border, imageSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_3D - glCompressedTexSubImage3DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_3D] && glesConfig.m_glCompressedTexSubImage3DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glCompressedTexSubImage3DOES (target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_3D - glFramebufferTexture3DOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_3D] && glesConfig.m_glFramebufferTexture3DOES)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTexture3DOES (target, attachment, textarget, texture, level, zoffset);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexParameterIivOES (GLenum target, GLenum pname, const GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glTexParameterIivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glTexParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexParameterIuivOES (GLenum target, GLenum pname, const GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glTexParameterIuivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glTexParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexParameterIuivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexParameterIivOES (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glGetTexParameterIivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetTexParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetTexParameterIuivOES (GLenum target, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glGetTexParameterIuivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetTexParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetTexParameterIuivOES (target, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterIivOES (GLuint sampler, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glSamplerParameterIivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glSamplerParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIivOES (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glSamplerParameterIuivOES (GLuint sampler, GLenum pname, const GLuint * param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glSamplerParameterIuivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glSamplerParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glSamplerParameterIuivOES (sampler, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterIivOES (GLuint sampler, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glGetSamplerParameterIivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIivOES (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetSamplerParameterIuivOES (GLuint sampler, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_border_clamp - glGetSamplerParameterIuivOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] && glesConfig.m_glGetSamplerParameterIuivOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetSamplerParameterIuivOES (sampler, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexBufferOES (GLenum target, GLenum internalformat, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_buffer - glTexBufferOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_buffer] && glesConfig.m_glTexBufferOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferOES (target, internalformat, buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexBufferRangeOES (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_buffer - glTexBufferRangeOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_buffer] && glesConfig.m_glTexBufferRangeOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexBufferRangeOES (target, internalformat, buffer, offset, size);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexStorage3DMultisampleOES (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_storage_multisample_2d_array - glTexStorage3DMultisampleOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_storage_multisample_2d_array] && glesConfig.m_glTexStorage3DMultisampleOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTexStorage3DMultisampleOES (target, samples, internalformat, width, height, depth, fixedsamplelocations);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureViewOES (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_texture_view - glTextureViewOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_texture_view] && glesConfig.m_glTextureViewOES)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureViewOES (texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glBindVertexArrayOES (GLuint array)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_vertex_array_object - glBindVertexArrayOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glBindVertexArrayOES)
  {
    prototypeCalled = true;
    glesConfig.m_glBindVertexArrayOES (array);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDeleteVertexArraysOES (GLsizei n, const GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_vertex_array_object - glDeleteVertexArraysOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glDeleteVertexArraysOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDeleteVertexArraysOES (n, arrays);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGenVertexArraysOES (GLsizei n, GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_vertex_array_object - glGenVertexArraysOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glGenVertexArraysOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGenVertexArraysOES (n, arrays);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glIsVertexArrayOES (GLuint array)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_vertex_array_object - glIsVertexArrayOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] && glesConfig.m_glIsVertexArrayOES)
  {
    prototypeCalled = true;
    result = glesConfig.m_glIsVertexArrayOES (array);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportArrayvOES (GLuint first, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glViewportArrayvOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glViewportArrayvOES)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportArrayvOES (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportIndexedfOES (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glViewportIndexedfOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glViewportIndexedfOES)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportIndexedfOES (index, x, y, w, h);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glViewportIndexedfvOES (GLuint index, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glViewportIndexedfvOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glViewportIndexedfvOES)
  {
    prototypeCalled = true;
    glesConfig.m_glViewportIndexedfvOES (index, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorArrayvOES (GLuint first, GLsizei count, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glScissorArrayvOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glScissorArrayvOES)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorArrayvOES (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorIndexedOES (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glScissorIndexedOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glScissorIndexedOES)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorIndexedOES (index, left, bottom, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glScissorIndexedvOES (GLuint index, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glScissorIndexedvOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glScissorIndexedvOES)
  {
    prototypeCalled = true;
    glesConfig.m_glScissorIndexedvOES (index, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDepthRangeArrayfvOES (GLuint first, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glDepthRangeArrayfvOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glDepthRangeArrayfvOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDepthRangeArrayfvOES (first, count, v);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDepthRangeIndexedfOES (GLuint index, GLfloat n, GLfloat f)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glDepthRangeIndexedfOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glDepthRangeIndexedfOES)
  {
    prototypeCalled = true;
    glesConfig.m_glDepthRangeIndexedfOES (index, n, f);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetFloati_vOES (GLenum target, GLuint index, GLfloat * data)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OES_viewport_array - glGetFloati_vOES
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OES_viewport_array] && glesConfig.m_glGetFloati_vOES)
  {
    prototypeCalled = true;
    glesConfig.m_glGetFloati_vOES (target, index, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OVR_multiview - glFramebufferTextureMultiviewOVR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OVR_multiview] && glesConfig.m_glFramebufferTextureMultiviewOVR)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureMultiviewOVR (target, attachment, texture, level, baseViewIndex, numViews);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glNamedFramebufferTextureMultiviewOVR (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OVR_multiview - glNamedFramebufferTextureMultiviewOVR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OVR_multiview] && glesConfig.m_glNamedFramebufferTextureMultiviewOVR)
  {
    prototypeCalled = true;
    glesConfig.m_glNamedFramebufferTextureMultiviewOVR (framebuffer, attachment, texture, level, baseViewIndex, numViews);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferTextureMultisampleMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_OVR_multiview_multisampled_render_to_texture - glFramebufferTextureMultisampleMultiviewOVR
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_OVR_multiview_multisampled_render_to_texture] && glesConfig.m_glFramebufferTextureMultisampleMultiviewOVR)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferTextureMultisampleMultiviewOVR (target, attachment, texture, level, samples, baseViewIndex, numViews);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glAlphaFuncQCOM (GLenum func, GLclampf ref)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_alpha_test - glAlphaFuncQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_alpha_test] && glesConfig.m_glAlphaFuncQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glAlphaFuncQCOM (func, ref);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetDriverControlsQCOM (GLint * num, GLsizei size, GLuint * driverControls)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_driver_control - glGetDriverControlsQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_driver_control] && glesConfig.m_glGetDriverControlsQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glGetDriverControlsQCOM (num, size, driverControls);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_driver_control - glGetDriverControlStringQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_driver_control] && glesConfig.m_glGetDriverControlStringQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glGetDriverControlStringQCOM (driverControl, bufSize, length, driverControlString);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEnableDriverControlQCOM (GLuint driverControl)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_driver_control - glEnableDriverControlQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_driver_control] && glesConfig.m_glEnableDriverControlQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glEnableDriverControlQCOM (driverControl);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glDisableDriverControlQCOM (GLuint driverControl)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_driver_control - glDisableDriverControlQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_driver_control] && glesConfig.m_glDisableDriverControlQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glDisableDriverControlQCOM (driverControl);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetTexturesQCOM (GLuint * textures, GLint maxTextures, GLint * numTextures)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetTexturesQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetTexturesQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetTexturesQCOM (textures, maxTextures, numTextures);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetBuffersQCOM (GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetBuffersQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetBuffersQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetBuffersQCOM (buffers, maxBuffers, numBuffers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetRenderbuffersQCOM (GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetRenderbuffersQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetRenderbuffersQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetRenderbuffersQCOM (renderbuffers, maxRenderbuffers, numRenderbuffers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetFramebuffersQCOM (GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetFramebuffersQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetFramebuffersQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetFramebuffersQCOM (framebuffers, maxFramebuffers, numFramebuffers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetTexLevelParameterivQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetTexLevelParameterivQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetTexLevelParameterivQCOM (texture, face, level, pname, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtTexObjectStateOverrideiQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtTexObjectStateOverrideiQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtTexObjectStateOverrideiQCOM (target, pname, param);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetTexSubImageQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetTexSubImageQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetTexSubImageQCOM (target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetBufferPointervQCOM (GLenum target, void ** params)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get - glExtGetBufferPointervQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] && glesConfig.m_glExtGetBufferPointervQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetBufferPointervQCOM (target, params);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetShadersQCOM (GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get2 - glExtGetShadersQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get2] && glesConfig.m_glExtGetShadersQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetShadersQCOM (shaders, maxShaders, numShaders);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetProgramsQCOM (GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get2 - glExtGetProgramsQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get2] && glesConfig.m_glExtGetProgramsQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetProgramsQCOM (programs, maxPrograms, numPrograms);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_gles_glExtIsProgramBinaryQCOM (GLuint program)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
  GLboolean result = ((GLboolean)0);
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get2 - glExtIsProgramBinaryQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get2] && glesConfig.m_glExtIsProgramBinaryQCOM)
  {
    prototypeCalled = true;
    result = glesConfig.m_glExtIsProgramBinaryQCOM (program);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_extended_get2 - glExtGetProgramBinarySourceQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_extended_get2] && glesConfig.m_glExtGetProgramBinarySourceQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtGetProgramBinarySourceQCOM (program, shadertype, source, length);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferFoveationConfigQCOM (GLuint framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint * providedFeatures)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_framebuffer_foveated - glFramebufferFoveationConfigQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_framebuffer_foveated] && glesConfig.m_glFramebufferFoveationConfigQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferFoveationConfigQCOM (framebuffer, numLayers, focalPointsPerLayer, requestedFeatures, providedFeatures);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferFoveationParametersQCOM (GLuint framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_framebuffer_foveated - glFramebufferFoveationParametersQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_framebuffer_foveated] && glesConfig.m_glFramebufferFoveationParametersQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferFoveationParametersQCOM (framebuffer, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexEstimateMotionQCOM (GLuint ref, GLuint target, GLuint output)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_motion_estimation - glTexEstimateMotionQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_motion_estimation] && glesConfig.m_glTexEstimateMotionQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glTexEstimateMotionQCOM (ref, target, output);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTexEstimateMotionRegionsQCOM (GLuint ref, GLuint target, GLuint output, GLuint mask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_motion_estimation - glTexEstimateMotionRegionsQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_motion_estimation] && glesConfig.m_glTexEstimateMotionRegionsQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glTexEstimateMotionRegionsQCOM (ref, target, output, mask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glExtrapolateTex2DQCOM (GLuint src1, GLuint src2, GLuint output, GLfloat scaleFactor)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_frame_extrapolation - glExtrapolateTex2DQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_frame_extrapolation] && glesConfig.m_glExtrapolateTex2DQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glExtrapolateTex2DQCOM (src1, src2, output, scaleFactor);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glTextureFoveationParametersQCOM (GLuint texture, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_texture_foveated - glTextureFoveationParametersQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_texture_foveated] && glesConfig.m_glTextureFoveationParametersQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glTextureFoveationParametersQCOM (texture, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glFramebufferFetchBarrierQCOM ()
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_shader_framebuffer_fetch_noncoherent - glFramebufferFetchBarrierQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_shader_framebuffer_fetch_noncoherent] && glesConfig.m_glFramebufferFetchBarrierQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glFramebufferFetchBarrierQCOM ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glShadingRateQCOM (GLenum rate)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_shading_rate - glShadingRateQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_shading_rate] && glesConfig.m_glShadingRateQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glShadingRateQCOM (rate);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glStartTilingQCOM (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_tiled_rendering - glStartTilingQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_tiled_rendering] && glesConfig.m_glStartTilingQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glStartTilingQCOM (x, y, width, height, preserveMask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_gles_glEndTilingQCOM (GLbitfield preserveMask)
{
  bool prototypeCalled = false;
  const glew::gles::DeviceConfig &glesConfig = glew::gles::GetConfig ();
#if defined (GLEW_GLES_PRE_ERROR_CHECK)
  GLEW_GLES_PRE_ERROR_CHECK();
#endif
  // GL_QCOM_tiled_rendering - glEndTilingQCOM
  if (!prototypeCalled && glesConfig.m_featureSupported [GLEW_GL_QCOM_tiled_rendering] && glesConfig.m_glEndTilingQCOM)
  {
    prototypeCalled = true;
    glesConfig.m_glEndTilingQCOM (preserveMask);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_GLES_POST_ERROR_CHECK)
  GLEW_GLES_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

