////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <string>

#include <unordered_set>

#include <wrangle-glcore.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glReleaseShaderCompiler ()
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_ES2_compatibility - glReleaseShaderCompiler
  if (!prototypeCalled && glcoreConfig.m_glReleaseShaderCompiler)
  {
    prototypeCalled = true;
    glcoreConfig.m_glReleaseShaderCompiler ();
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_ES2_compatibility - glShaderBinary
  if (!prototypeCalled && glcoreConfig.m_glShaderBinary)
  {
    prototypeCalled = true;
    glcoreConfig.m_glShaderBinary (count, shaders, binaryformat, binary, length);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_ES2_compatibility - glGetShaderPrecisionFormat
  if (!prototypeCalled && glcoreConfig.m_glGetShaderPrecisionFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetShaderPrecisionFormat (shadertype, precisiontype, range, precision);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDepthRangef (GLfloat n, GLfloat f)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_ES2_compatibility - glDepthRangef
  if (!prototypeCalled && glcoreConfig.m_glDepthRangef)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDepthRangef (n, f);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearDepthf (GLfloat d)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_ES2_compatibility - glClearDepthf
  if (!prototypeCalled && glcoreConfig.m_glClearDepthf)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearDepthf (d);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMemoryBarrierByRegion (GLbitfield barriers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_ES3_1_compatibility - glMemoryBarrierByRegion
  if (!prototypeCalled && glcoreConfig.m_glMemoryBarrierByRegion)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMemoryBarrierByRegion (barriers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_base_instance - glDrawArraysInstancedBaseInstance
  if (!prototypeCalled && glcoreConfig.m_glDrawArraysInstancedBaseInstance)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawArraysInstancedBaseInstance (mode, first, count, instancecount, baseinstance);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_base_instance - glDrawElementsInstancedBaseInstance
  if (!prototypeCalled && glcoreConfig.m_glDrawElementsInstancedBaseInstance)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawElementsInstancedBaseInstance (mode, count, type, indices, instancecount, baseinstance);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_base_instance - glDrawElementsInstancedBaseVertexBaseInstance
  if (!prototypeCalled && glcoreConfig.m_glDrawElementsInstancedBaseVertexBaseInstance)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawElementsInstancedBaseVertexBaseInstance (mode, count, type, indices, instancecount, basevertex, baseinstance);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_glcore_glGetTextureHandleARB (GLuint texture)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glGetTextureHandleARB
  if (!prototypeCalled && glcoreConfig.m_glGetTextureHandleARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetTextureHandleARB (texture);
  }
  return ((GLuint64)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_glcore_glGetTextureSamplerHandleARB (GLuint texture, GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glGetTextureSamplerHandleARB
  if (!prototypeCalled && glcoreConfig.m_glGetTextureSamplerHandleARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetTextureSamplerHandleARB (texture, sampler);
  }
  return ((GLuint64)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMakeTextureHandleResidentARB (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glMakeTextureHandleResidentARB
  if (!prototypeCalled && glcoreConfig.m_glMakeTextureHandleResidentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMakeTextureHandleResidentARB (handle);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMakeTextureHandleNonResidentARB (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glMakeTextureHandleNonResidentARB
  if (!prototypeCalled && glcoreConfig.m_glMakeTextureHandleNonResidentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMakeTextureHandleNonResidentARB (handle);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint64 _glew_glcore_glGetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glGetImageHandleARB
  if (!prototypeCalled && glcoreConfig.m_glGetImageHandleARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetImageHandleARB (texture, level, layered, layer, format);
  }
  return ((GLuint64)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMakeImageHandleResidentARB (GLuint64 handle, GLenum access)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glMakeImageHandleResidentARB
  if (!prototypeCalled && glcoreConfig.m_glMakeImageHandleResidentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMakeImageHandleResidentARB (handle, access);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMakeImageHandleNonResidentARB (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glMakeImageHandleNonResidentARB
  if (!prototypeCalled && glcoreConfig.m_glMakeImageHandleNonResidentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMakeImageHandleNonResidentARB (handle);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformHandleui64ARB (GLint location, GLuint64 value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glUniformHandleui64ARB
  if (!prototypeCalled && glcoreConfig.m_glUniformHandleui64ARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformHandleui64ARB (location, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glUniformHandleui64vARB
  if (!prototypeCalled && glcoreConfig.m_glUniformHandleui64vARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformHandleui64vARB (location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glProgramUniformHandleui64ARB
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformHandleui64ARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformHandleui64ARB (program, location, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * values)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glProgramUniformHandleui64vARB
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformHandleui64vARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformHandleui64vARB (program, location, count, values);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsTextureHandleResidentARB (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glIsTextureHandleResidentARB
  if (!prototypeCalled && glcoreConfig.m_glIsTextureHandleResidentARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsTextureHandleResidentARB (handle);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsImageHandleResidentARB (GLuint64 handle)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glIsImageHandleResidentARB
  if (!prototypeCalled && glcoreConfig.m_glIsImageHandleResidentARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsImageHandleResidentARB (handle);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glVertexAttribL1ui64ARB
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL1ui64ARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL1ui64ARB (index, x);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glVertexAttribL1ui64vARB
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL1ui64vARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL1ui64vARB (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_bindless_texture - glGetVertexAttribLui64vARB
  if (!prototypeCalled && glcoreConfig.m_glGetVertexAttribLui64vARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetVertexAttribLui64vARB (index, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_blend_func_extended - glBindFragDataLocationIndexed
  if (!prototypeCalled && glcoreConfig.m_glBindFragDataLocationIndexed)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindFragDataLocationIndexed (program, colorNumber, index, name);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_glcore_glGetFragDataIndex (GLuint program, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_blend_func_extended - glGetFragDataIndex
  if (!prototypeCalled && glcoreConfig.m_glGetFragDataIndex)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetFragDataIndex (program, name);
  }
  return ((GLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBufferStorage (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_buffer_storage - glBufferStorage
  if (!prototypeCalled && glcoreConfig.m_glBufferStorage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBufferStorage (target, size, data, flags);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLsync _glew_glcore_glCreateSyncFromCLeventARB (struct _cl_context * context, struct _cl_event * event, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_cl_event - glCreateSyncFromCLeventARB
  if (!prototypeCalled && glcoreConfig.m_glCreateSyncFromCLeventARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glCreateSyncFromCLeventARB (context, event, flags);
  }
  return ((GLsync)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_clear_buffer_object - glClearBufferData
  if (!prototypeCalled && glcoreConfig.m_glClearBufferData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearBufferData (target, internalformat, format, type, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_clear_buffer_object - glClearBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glClearBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearBufferSubData (target, internalformat, offset, size, format, type, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_clear_texture - glClearTexImage
  if (!prototypeCalled && glcoreConfig.m_glClearTexImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearTexImage (texture, level, format, type, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_clear_texture - glClearTexSubImage
  if (!prototypeCalled && glcoreConfig.m_glClearTexSubImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearTexSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClipControl (GLenum origin, GLenum depth)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_clip_control - glClipControl
  if (!prototypeCalled && glcoreConfig.m_glClipControl)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClipControl (origin, depth);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_compute_shader - glDispatchCompute
  if (!prototypeCalled && glcoreConfig.m_glDispatchCompute)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDispatchCompute (num_groups_x, num_groups_y, num_groups_z);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDispatchComputeIndirect (GLintptr indirect)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_compute_shader - glDispatchComputeIndirect
  if (!prototypeCalled && glcoreConfig.m_glDispatchComputeIndirect)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDispatchComputeIndirect (indirect);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_compute_variable_group_size - glDispatchComputeGroupSizeARB
  if (!prototypeCalled && glcoreConfig.m_glDispatchComputeGroupSizeARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDispatchComputeGroupSizeARB (num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_copy_buffer - glCopyBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glCopyBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCopyBufferSubData (readTarget, writeTarget, readOffset, writeOffset, size);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_copy_image - glCopyImageSubData
  if (!prototypeCalled && glcoreConfig.m_glCopyImageSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCopyImageSubData (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_debug_output - glDebugMessageControlARB
  if (!prototypeCalled && glcoreConfig.m_glDebugMessageControlARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDebugMessageControlARB (source, type, severity, count, ids, enabled);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_debug_output - glDebugMessageInsertARB
  if (!prototypeCalled && glcoreConfig.m_glDebugMessageInsertARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDebugMessageInsertARB (source, type, id, severity, length, buf);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const void * userParam)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_debug_output - glDebugMessageCallbackARB
  if (!prototypeCalled && glcoreConfig.m_glDebugMessageCallbackARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDebugMessageCallbackARB (callback, userParam);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_glcore_glGetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_debug_output - glGetDebugMessageLogARB
  if (!prototypeCalled && glcoreConfig.m_glGetDebugMessageLogARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetDebugMessageLogARB (count, bufSize, sources, types, ids, severities, lengths, messageLog);
  }
  return ((GLuint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateTransformFeedbacks (GLsizei n, GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateTransformFeedbacks
  if (!prototypeCalled && glcoreConfig.m_glCreateTransformFeedbacks)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateTransformFeedbacks (n, ids);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTransformFeedbackBufferBase
  if (!prototypeCalled && glcoreConfig.m_glTransformFeedbackBufferBase)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTransformFeedbackBufferBase (xfb, index, buffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTransformFeedbackBufferRange
  if (!prototypeCalled && glcoreConfig.m_glTransformFeedbackBufferRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTransformFeedbackBufferRange (xfb, index, buffer, offset, size);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTransformFeedbackiv
  if (!prototypeCalled && glcoreConfig.m_glGetTransformFeedbackiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTransformFeedbackiv (xfb, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTransformFeedbacki_v
  if (!prototypeCalled && glcoreConfig.m_glGetTransformFeedbacki_v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTransformFeedbacki_v (xfb, pname, index, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTransformFeedbacki64_v
  if (!prototypeCalled && glcoreConfig.m_glGetTransformFeedbacki64_v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTransformFeedbacki64_v (xfb, pname, index, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateBuffers (GLsizei n, GLuint * buffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateBuffers
  if (!prototypeCalled && glcoreConfig.m_glCreateBuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateBuffers (n, buffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedBufferStorage
  if (!prototypeCalled && glcoreConfig.m_glNamedBufferStorage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedBufferStorage (buffer, size, data, flags);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedBufferData (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedBufferData
  if (!prototypeCalled && glcoreConfig.m_glNamedBufferData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedBufferData (buffer, size, data, usage);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glNamedBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedBufferSubData (buffer, offset, size, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCopyNamedBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glCopyNamedBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCopyNamedBufferSubData (readBuffer, writeBuffer, readOffset, writeOffset, size);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glClearNamedBufferData
  if (!prototypeCalled && glcoreConfig.m_glClearNamedBufferData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearNamedBufferData (buffer, internalformat, format, type, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glClearNamedBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glClearNamedBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearNamedBufferSubData (buffer, internalformat, offset, size, format, type, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_glcore_glMapNamedBuffer (GLuint buffer, GLenum access)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glMapNamedBuffer
  if (!prototypeCalled && glcoreConfig.m_glMapNamedBuffer)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glMapNamedBuffer (buffer, access);
  }
  return ((void *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_glcore_glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glMapNamedBufferRange
  if (!prototypeCalled && glcoreConfig.m_glMapNamedBufferRange)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glMapNamedBufferRange (buffer, offset, length, access);
  }
  return ((void *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glUnmapNamedBuffer (GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glUnmapNamedBuffer
  if (!prototypeCalled && glcoreConfig.m_glUnmapNamedBuffer)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glUnmapNamedBuffer (buffer);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glFlushMappedNamedBufferRange
  if (!prototypeCalled && glcoreConfig.m_glFlushMappedNamedBufferRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFlushMappedNamedBufferRange (buffer, offset, length);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedBufferParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetNamedBufferParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedBufferParameteriv (buffer, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedBufferParameteri64v
  if (!prototypeCalled && glcoreConfig.m_glGetNamedBufferParameteri64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedBufferParameteri64v (buffer, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void ** params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedBufferPointerv
  if (!prototypeCalled && glcoreConfig.m_glGetNamedBufferPointerv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedBufferPointerv (buffer, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glGetNamedBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedBufferSubData (buffer, offset, size, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateFramebuffers (GLsizei n, GLuint * framebuffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateFramebuffers
  if (!prototypeCalled && glcoreConfig.m_glCreateFramebuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateFramebuffers (n, framebuffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferRenderbuffer
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferRenderbuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferRenderbuffer (framebuffer, attachment, renderbuffertarget, renderbuffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferParameteri
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferParameteri)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferParameteri (framebuffer, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferTexture
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferTexture)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferTexture (framebuffer, attachment, texture, level);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferTextureLayer
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferTextureLayer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferTextureLayer (framebuffer, attachment, texture, level, layer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferDrawBuffer
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferDrawBuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferDrawBuffer (framebuffer, buf);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum * bufs)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferDrawBuffers
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferDrawBuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferDrawBuffers (framebuffer, n, bufs);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedFramebufferReadBuffer
  if (!prototypeCalled && glcoreConfig.m_glNamedFramebufferReadBuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedFramebufferReadBuffer (framebuffer, src);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glInvalidateNamedFramebufferData
  if (!prototypeCalled && glcoreConfig.m_glInvalidateNamedFramebufferData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateNamedFramebufferData (framebuffer, numAttachments, attachments);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glInvalidateNamedFramebufferSubData
  if (!prototypeCalled && glcoreConfig.m_glInvalidateNamedFramebufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateNamedFramebufferSubData (framebuffer, numAttachments, attachments, x, y, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glClearNamedFramebufferiv
  if (!prototypeCalled && glcoreConfig.m_glClearNamedFramebufferiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearNamedFramebufferiv (framebuffer, buffer, drawbuffer, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glClearNamedFramebufferuiv
  if (!prototypeCalled && glcoreConfig.m_glClearNamedFramebufferuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearNamedFramebufferuiv (framebuffer, buffer, drawbuffer, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glClearNamedFramebufferfv
  if (!prototypeCalled && glcoreConfig.m_glClearNamedFramebufferfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearNamedFramebufferfv (framebuffer, buffer, drawbuffer, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glClearNamedFramebufferfi
  if (!prototypeCalled && glcoreConfig.m_glClearNamedFramebufferfi)
  {
    prototypeCalled = true;
    glcoreConfig.m_glClearNamedFramebufferfi (framebuffer, buffer, depth, stencil);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glBlitNamedFramebuffer
  if (!prototypeCalled && glcoreConfig.m_glBlitNamedFramebuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlitNamedFramebuffer (readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_glcore_glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCheckNamedFramebufferStatus
  if (!prototypeCalled && glcoreConfig.m_glCheckNamedFramebufferStatus)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glCheckNamedFramebufferStatus (framebuffer, target);
  }
  return ((GLenum)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedFramebufferParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetNamedFramebufferParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedFramebufferParameteriv (framebuffer, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedFramebufferAttachmentParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetNamedFramebufferAttachmentParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedFramebufferAttachmentParameteriv (framebuffer, attachment, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateRenderbuffers (GLsizei n, GLuint * renderbuffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateRenderbuffers
  if (!prototypeCalled && glcoreConfig.m_glCreateRenderbuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateRenderbuffers (n, renderbuffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedRenderbufferStorage
  if (!prototypeCalled && glcoreConfig.m_glNamedRenderbufferStorage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedRenderbufferStorage (renderbuffer, internalformat, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glNamedRenderbufferStorageMultisample
  if (!prototypeCalled && glcoreConfig.m_glNamedRenderbufferStorageMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedRenderbufferStorageMultisample (renderbuffer, samples, internalformat, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetNamedRenderbufferParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetNamedRenderbufferParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedRenderbufferParameteriv (renderbuffer, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateTextures (GLenum target, GLsizei n, GLuint * textures)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateTextures
  if (!prototypeCalled && glcoreConfig.m_glCreateTextures)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateTextures (target, n, textures);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureBuffer
  if (!prototypeCalled && glcoreConfig.m_glTextureBuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureBuffer (texture, internalformat, buffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureBufferRange
  if (!prototypeCalled && glcoreConfig.m_glTextureBufferRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureBufferRange (texture, internalformat, buffer, offset, size);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureStorage1D
  if (!prototypeCalled && glcoreConfig.m_glTextureStorage1D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureStorage1D (texture, levels, internalformat, width);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureStorage2D
  if (!prototypeCalled && glcoreConfig.m_glTextureStorage2D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureStorage2D (texture, levels, internalformat, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureStorage3D
  if (!prototypeCalled && glcoreConfig.m_glTextureStorage3D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureStorage3D (texture, levels, internalformat, width, height, depth);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureStorage2DMultisample
  if (!prototypeCalled && glcoreConfig.m_glTextureStorage2DMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureStorage2DMultisample (texture, samples, internalformat, width, height, fixedsamplelocations);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureStorage3DMultisample
  if (!prototypeCalled && glcoreConfig.m_glTextureStorage3DMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureStorage3DMultisample (texture, samples, internalformat, width, height, depth, fixedsamplelocations);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureSubImage1D
  if (!prototypeCalled && glcoreConfig.m_glTextureSubImage1D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureSubImage1D (texture, level, xoffset, width, format, type, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureSubImage2D
  if (!prototypeCalled && glcoreConfig.m_glTextureSubImage2D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureSubImage2D (texture, level, xoffset, yoffset, width, height, format, type, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureSubImage3D
  if (!prototypeCalled && glcoreConfig.m_glTextureSubImage3D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCompressedTextureSubImage1D
  if (!prototypeCalled && glcoreConfig.m_glCompressedTextureSubImage1D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCompressedTextureSubImage1D (texture, level, xoffset, width, format, imageSize, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCompressedTextureSubImage2D
  if (!prototypeCalled && glcoreConfig.m_glCompressedTextureSubImage2D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCompressedTextureSubImage2D (texture, level, xoffset, yoffset, width, height, format, imageSize, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCompressedTextureSubImage3D
  if (!prototypeCalled && glcoreConfig.m_glCompressedTextureSubImage3D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCompressedTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCopyTextureSubImage1D
  if (!prototypeCalled && glcoreConfig.m_glCopyTextureSubImage1D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCopyTextureSubImage1D (texture, level, xoffset, x, y, width);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCopyTextureSubImage2D
  if (!prototypeCalled && glcoreConfig.m_glCopyTextureSubImage2D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCopyTextureSubImage2D (texture, level, xoffset, yoffset, x, y, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCopyTextureSubImage3D
  if (!prototypeCalled && glcoreConfig.m_glCopyTextureSubImage3D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCopyTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, x, y, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureParameterf (GLuint texture, GLenum pname, GLfloat param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureParameterf
  if (!prototypeCalled && glcoreConfig.m_glTextureParameterf)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureParameterf (texture, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureParameterfv
  if (!prototypeCalled && glcoreConfig.m_glTextureParameterfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureParameterfv (texture, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureParameteri (GLuint texture, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureParameteri
  if (!prototypeCalled && glcoreConfig.m_glTextureParameteri)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureParameteri (texture, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureParameterIiv (GLuint texture, GLenum pname, const GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureParameterIiv
  if (!prototypeCalled && glcoreConfig.m_glTextureParameterIiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureParameterIiv (texture, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureParameterIuiv
  if (!prototypeCalled && glcoreConfig.m_glTextureParameterIuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureParameterIuiv (texture, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureParameteriv (GLuint texture, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glTextureParameteriv
  if (!prototypeCalled && glcoreConfig.m_glTextureParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureParameteriv (texture, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenerateTextureMipmap (GLuint texture)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGenerateTextureMipmap
  if (!prototypeCalled && glcoreConfig.m_glGenerateTextureMipmap)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenerateTextureMipmap (texture);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindTextureUnit (GLuint unit, GLuint texture)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glBindTextureUnit
  if (!prototypeCalled && glcoreConfig.m_glBindTextureUnit)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindTextureUnit (unit, texture);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureImage
  if (!prototypeCalled && glcoreConfig.m_glGetTextureImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureImage (texture, level, format, type, bufSize, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetCompressedTextureImage
  if (!prototypeCalled && glcoreConfig.m_glGetCompressedTextureImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetCompressedTextureImage (texture, level, bufSize, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureLevelParameterfv
  if (!prototypeCalled && glcoreConfig.m_glGetTextureLevelParameterfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureLevelParameterfv (texture, level, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureLevelParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetTextureLevelParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureLevelParameteriv (texture, level, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureParameterfv
  if (!prototypeCalled && glcoreConfig.m_glGetTextureParameterfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureParameterfv (texture, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureParameterIiv
  if (!prototypeCalled && glcoreConfig.m_glGetTextureParameterIiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureParameterIiv (texture, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureParameterIuiv
  if (!prototypeCalled && glcoreConfig.m_glGetTextureParameterIuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureParameterIuiv (texture, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureParameteriv (GLuint texture, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetTextureParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetTextureParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureParameteriv (texture, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateVertexArrays (GLsizei n, GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateVertexArrays
  if (!prototypeCalled && glcoreConfig.m_glCreateVertexArrays)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateVertexArrays (n, arrays);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDisableVertexArrayAttrib (GLuint vaobj, GLuint index)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glDisableVertexArrayAttrib
  if (!prototypeCalled && glcoreConfig.m_glDisableVertexArrayAttrib)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDisableVertexArrayAttrib (vaobj, index);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glEnableVertexArrayAttrib (GLuint vaobj, GLuint index)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glEnableVertexArrayAttrib
  if (!prototypeCalled && glcoreConfig.m_glEnableVertexArrayAttrib)
  {
    prototypeCalled = true;
    glcoreConfig.m_glEnableVertexArrayAttrib (vaobj, index);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayElementBuffer
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayElementBuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayElementBuffer (vaobj, buffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayVertexBuffer
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayVertexBuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayVertexBuffer (vaobj, bindingindex, buffer, offset, stride);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayVertexBuffers
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayVertexBuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayVertexBuffers (vaobj, first, count, buffers, offsets, strides);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayAttribBinding
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayAttribBinding)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayAttribBinding (vaobj, attribindex, bindingindex);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayAttribFormat
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayAttribFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayAttribFormat (vaobj, attribindex, size, type, normalized, relativeoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayAttribIFormat
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayAttribIFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayAttribIFormat (vaobj, attribindex, size, type, relativeoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayAttribLFormat
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayAttribLFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayAttribLFormat (vaobj, attribindex, size, type, relativeoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glVertexArrayBindingDivisor
  if (!prototypeCalled && glcoreConfig.m_glVertexArrayBindingDivisor)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexArrayBindingDivisor (vaobj, bindingindex, divisor);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetVertexArrayiv
  if (!prototypeCalled && glcoreConfig.m_glGetVertexArrayiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetVertexArrayiv (vaobj, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetVertexArrayIndexediv
  if (!prototypeCalled && glcoreConfig.m_glGetVertexArrayIndexediv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetVertexArrayIndexediv (vaobj, index, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetVertexArrayIndexed64iv
  if (!prototypeCalled && glcoreConfig.m_glGetVertexArrayIndexed64iv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetVertexArrayIndexed64iv (vaobj, index, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateSamplers (GLsizei n, GLuint * samplers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateSamplers
  if (!prototypeCalled && glcoreConfig.m_glCreateSamplers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateSamplers (n, samplers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateProgramPipelines (GLsizei n, GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateProgramPipelines
  if (!prototypeCalled && glcoreConfig.m_glCreateProgramPipelines)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateProgramPipelines (n, pipelines);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCreateQueries (GLenum target, GLsizei n, GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glCreateQueries
  if (!prototypeCalled && glcoreConfig.m_glCreateQueries)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCreateQueries (target, n, ids);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetQueryBufferObjecti64v
  if (!prototypeCalled && glcoreConfig.m_glGetQueryBufferObjecti64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryBufferObjecti64v (id, buffer, pname, offset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetQueryBufferObjectiv
  if (!prototypeCalled && glcoreConfig.m_glGetQueryBufferObjectiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryBufferObjectiv (id, buffer, pname, offset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetQueryBufferObjectui64v
  if (!prototypeCalled && glcoreConfig.m_glGetQueryBufferObjectui64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryBufferObjectui64v (id, buffer, pname, offset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_direct_state_access - glGetQueryBufferObjectuiv
  if (!prototypeCalled && glcoreConfig.m_glGetQueryBufferObjectuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryBufferObjectuiv (id, buffer, pname, offset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlendEquationiARB (GLuint buf, GLenum mode)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_buffers_blend - glBlendEquationiARB
  if (!prototypeCalled && glcoreConfig.m_glBlendEquationiARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlendEquationiARB (buf, mode);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_buffers_blend - glBlendEquationSeparateiARB
  if (!prototypeCalled && glcoreConfig.m_glBlendEquationSeparateiARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlendEquationSeparateiARB (buf, modeRGB, modeAlpha);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlendFunciARB (GLuint buf, GLenum src, GLenum dst)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_buffers_blend - glBlendFunciARB
  if (!prototypeCalled && glcoreConfig.m_glBlendFunciARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlendFunciARB (buf, src, dst);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_buffers_blend - glBlendFuncSeparateiARB
  if (!prototypeCalled && glcoreConfig.m_glBlendFuncSeparateiARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlendFuncSeparateiARB (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_elements_base_vertex - glDrawElementsBaseVertex
  if (!prototypeCalled && glcoreConfig.m_glDrawElementsBaseVertex)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawElementsBaseVertex (mode, count, type, indices, basevertex);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_elements_base_vertex - glDrawRangeElementsBaseVertex
  if (!prototypeCalled && glcoreConfig.m_glDrawRangeElementsBaseVertex)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawRangeElementsBaseVertex (mode, start, end, count, type, indices, basevertex);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_elements_base_vertex - glDrawElementsInstancedBaseVertex
  if (!prototypeCalled && glcoreConfig.m_glDrawElementsInstancedBaseVertex)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawElementsInstancedBaseVertex (mode, count, type, indices, instancecount, basevertex);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_elements_base_vertex - glMultiDrawElementsBaseVertex
  if (!prototypeCalled && glcoreConfig.m_glMultiDrawElementsBaseVertex)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMultiDrawElementsBaseVertex (mode, count, type, indices, drawcount, basevertex);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawArraysIndirect (GLenum mode, const void * indirect)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_indirect - glDrawArraysIndirect
  if (!prototypeCalled && glcoreConfig.m_glDrawArraysIndirect)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawArraysIndirect (mode, indirect);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_draw_indirect - glDrawElementsIndirect
  if (!prototypeCalled && glcoreConfig.m_glDrawElementsIndirect)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawElementsIndirect (mode, type, indirect);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFramebufferParameteri (GLenum target, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_no_attachments - glFramebufferParameteri
  if (!prototypeCalled && glcoreConfig.m_glFramebufferParameteri)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFramebufferParameteri (target, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_no_attachments - glGetFramebufferParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetFramebufferParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetFramebufferParameteriv (target, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsRenderbuffer (GLuint renderbuffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glIsRenderbuffer
  if (!prototypeCalled && glcoreConfig.m_glIsRenderbuffer)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsRenderbuffer (renderbuffer);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindRenderbuffer (GLenum target, GLuint renderbuffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glBindRenderbuffer
  if (!prototypeCalled && glcoreConfig.m_glBindRenderbuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindRenderbuffer (target, renderbuffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glDeleteRenderbuffers
  if (!prototypeCalled && glcoreConfig.m_glDeleteRenderbuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteRenderbuffers (n, renderbuffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenRenderbuffers (GLsizei n, GLuint * renderbuffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glGenRenderbuffers
  if (!prototypeCalled && glcoreConfig.m_glGenRenderbuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenRenderbuffers (n, renderbuffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glRenderbufferStorage
  if (!prototypeCalled && glcoreConfig.m_glRenderbufferStorage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glRenderbufferStorage (target, internalformat, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glGetRenderbufferParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetRenderbufferParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetRenderbufferParameteriv (target, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsFramebuffer (GLuint framebuffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glIsFramebuffer
  if (!prototypeCalled && glcoreConfig.m_glIsFramebuffer)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsFramebuffer (framebuffer);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindFramebuffer (GLenum target, GLuint framebuffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glBindFramebuffer
  if (!prototypeCalled && glcoreConfig.m_glBindFramebuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindFramebuffer (target, framebuffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glDeleteFramebuffers
  if (!prototypeCalled && glcoreConfig.m_glDeleteFramebuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteFramebuffers (n, framebuffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenFramebuffers (GLsizei n, GLuint * framebuffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glGenFramebuffers
  if (!prototypeCalled && glcoreConfig.m_glGenFramebuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenFramebuffers (n, framebuffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_glcore_glCheckFramebufferStatus (GLenum target)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glCheckFramebufferStatus
  if (!prototypeCalled && glcoreConfig.m_glCheckFramebufferStatus)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glCheckFramebufferStatus (target);
  }
  return ((GLenum)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glFramebufferTexture1D
  if (!prototypeCalled && glcoreConfig.m_glFramebufferTexture1D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFramebufferTexture1D (target, attachment, textarget, texture, level);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glFramebufferTexture2D
  if (!prototypeCalled && glcoreConfig.m_glFramebufferTexture2D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFramebufferTexture2D (target, attachment, textarget, texture, level);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glFramebufferTexture3D
  if (!prototypeCalled && glcoreConfig.m_glFramebufferTexture3D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFramebufferTexture3D (target, attachment, textarget, texture, level, zoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glFramebufferRenderbuffer
  if (!prototypeCalled && glcoreConfig.m_glFramebufferRenderbuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFramebufferRenderbuffer (target, attachment, renderbuffertarget, renderbuffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glGetFramebufferAttachmentParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetFramebufferAttachmentParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetFramebufferAttachmentParameteriv (target, attachment, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenerateMipmap (GLenum target)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glGenerateMipmap
  if (!prototypeCalled && glcoreConfig.m_glGenerateMipmap)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenerateMipmap (target);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glBlitFramebuffer
  if (!prototypeCalled && glcoreConfig.m_glBlitFramebuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlitFramebuffer (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glRenderbufferStorageMultisample
  if (!prototypeCalled && glcoreConfig.m_glRenderbufferStorageMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glRenderbufferStorageMultisample (target, samples, internalformat, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_framebuffer_object - glFramebufferTextureLayer
  if (!prototypeCalled && glcoreConfig.m_glFramebufferTextureLayer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFramebufferTextureLayer (target, attachment, texture, level, layer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_get_program_binary - glGetProgramBinary
  if (!prototypeCalled && glcoreConfig.m_glGetProgramBinary)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramBinary (program, bufSize, length, binaryFormat, binary);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_get_program_binary - glProgramBinary
  if (!prototypeCalled && glcoreConfig.m_glProgramBinary)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramBinary (program, binaryFormat, binary, length);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramParameteri (GLuint program, GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_get_program_binary - glProgramParameteri
  if (!prototypeCalled && glcoreConfig.m_glProgramParameteri)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramParameteri (program, pname, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_get_texture_sub_image - glGetTextureSubImage
  if (!prototypeCalled && glcoreConfig.m_glGetTextureSubImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetTextureSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_get_texture_sub_image - glGetCompressedTextureSubImage
  if (!prototypeCalled && glcoreConfig.m_glGetCompressedTextureSubImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetCompressedTextureSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform1d (GLint location, GLdouble x)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform1d
  if (!prototypeCalled && glcoreConfig.m_glUniform1d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform1d (location, x);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform2d (GLint location, GLdouble x, GLdouble y)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform2d
  if (!prototypeCalled && glcoreConfig.m_glUniform2d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform2d (location, x, y);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform3d
  if (!prototypeCalled && glcoreConfig.m_glUniform3d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform3d (location, x, y, z);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform4d
  if (!prototypeCalled && glcoreConfig.m_glUniform4d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform4d (location, x, y, z, w);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform1dv (GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform1dv
  if (!prototypeCalled && glcoreConfig.m_glUniform1dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform1dv (location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform2dv (GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform2dv
  if (!prototypeCalled && glcoreConfig.m_glUniform2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform2dv (location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform3dv (GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform3dv
  if (!prototypeCalled && glcoreConfig.m_glUniform3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform3dv (location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniform4dv (GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniform4dv
  if (!prototypeCalled && glcoreConfig.m_glUniform4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniform4dv (location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix2dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix2dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix3dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix3dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix4dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix4dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix2x3dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix2x3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix2x3dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix2x4dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix2x4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix2x4dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix3x2dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix3x2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix3x2dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix3x4dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix3x4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix3x4dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix4x2dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix4x2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix4x2dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glUniformMatrix4x3dv
  if (!prototypeCalled && glcoreConfig.m_glUniformMatrix4x3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformMatrix4x3dv (location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetUniformdv (GLuint program, GLint location, GLdouble * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_gpu_shader_fp64 - glGetUniformdv
  if (!prototypeCalled && glcoreConfig.m_glGetUniformdv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetUniformdv (program, location, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_imaging - glBlendColor
  if (!prototypeCalled && glcoreConfig.m_glBlendColor)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlendColor (red, green, blue, alpha);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBlendEquation (GLenum mode)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_imaging - glBlendEquation
  if (!prototypeCalled && glcoreConfig.m_glBlendEquation)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBlendEquation (mode);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMultiDrawArraysIndirectCountARB (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_indirect_parameters - glMultiDrawArraysIndirectCountARB
  if (!prototypeCalled && glcoreConfig.m_glMultiDrawArraysIndirectCountARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMultiDrawArraysIndirectCountARB (mode, indirect, drawcount, maxdrawcount, stride);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_indirect_parameters - glMultiDrawElementsIndirectCountARB
  if (!prototypeCalled && glcoreConfig.m_glMultiDrawElementsIndirectCountARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMultiDrawElementsIndirectCountARB (mode, type, indirect, drawcount, maxdrawcount, stride);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_internalformat_query - glGetInternalformativ
  if (!prototypeCalled && glcoreConfig.m_glGetInternalformativ)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetInternalformativ (target, internalformat, pname, bufSize, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_internalformat_query2 - glGetInternalformati64v
  if (!prototypeCalled && glcoreConfig.m_glGetInternalformati64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetInternalformati64v (target, internalformat, pname, bufSize, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_invalidate_subdata - glInvalidateTexSubImage
  if (!prototypeCalled && glcoreConfig.m_glInvalidateTexSubImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateTexSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateTexImage (GLuint texture, GLint level)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_invalidate_subdata - glInvalidateTexImage
  if (!prototypeCalled && glcoreConfig.m_glInvalidateTexImage)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateTexImage (texture, level);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_invalidate_subdata - glInvalidateBufferSubData
  if (!prototypeCalled && glcoreConfig.m_glInvalidateBufferSubData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateBufferSubData (buffer, offset, length);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateBufferData (GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_invalidate_subdata - glInvalidateBufferData
  if (!prototypeCalled && glcoreConfig.m_glInvalidateBufferData)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateBufferData (buffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_invalidate_subdata - glInvalidateFramebuffer
  if (!prototypeCalled && glcoreConfig.m_glInvalidateFramebuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateFramebuffer (target, numAttachments, attachments);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_invalidate_subdata - glInvalidateSubFramebuffer
  if (!prototypeCalled && glcoreConfig.m_glInvalidateSubFramebuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glInvalidateSubFramebuffer (target, numAttachments, attachments, x, y, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_glcore_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_map_buffer_range - glMapBufferRange
  if (!prototypeCalled && glcoreConfig.m_glMapBufferRange)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glMapBufferRange (target, offset, length, access);
  }
  return ((void *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_map_buffer_range - glFlushMappedBufferRange
  if (!prototypeCalled && glcoreConfig.m_glFlushMappedBufferRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glFlushMappedBufferRange (target, offset, length);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint * buffers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_bind - glBindBuffersBase
  if (!prototypeCalled && glcoreConfig.m_glBindBuffersBase)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindBuffersBase (target, first, count, buffers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_bind - glBindBuffersRange
  if (!prototypeCalled && glcoreConfig.m_glBindBuffersRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindBuffersRange (target, first, count, buffers, offsets, sizes);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindTextures (GLuint first, GLsizei count, const GLuint * textures)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_bind - glBindTextures
  if (!prototypeCalled && glcoreConfig.m_glBindTextures)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindTextures (first, count, textures);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindSamplers (GLuint first, GLsizei count, const GLuint * samplers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_bind - glBindSamplers
  if (!prototypeCalled && glcoreConfig.m_glBindSamplers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindSamplers (first, count, samplers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindImageTextures (GLuint first, GLsizei count, const GLuint * textures)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_bind - glBindImageTextures
  if (!prototypeCalled && glcoreConfig.m_glBindImageTextures)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindImageTextures (first, count, textures);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindVertexBuffers (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_bind - glBindVertexBuffers
  if (!prototypeCalled && glcoreConfig.m_glBindVertexBuffers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindVertexBuffers (first, count, buffers, offsets, strides);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMultiDrawArraysIndirect (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_draw_indirect - glMultiDrawArraysIndirect
  if (!prototypeCalled && glcoreConfig.m_glMultiDrawArraysIndirect)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMultiDrawArraysIndirect (mode, indirect, drawcount, stride);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_multi_draw_indirect - glMultiDrawElementsIndirect
  if (!prototypeCalled && glcoreConfig.m_glMultiDrawElementsIndirect)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMultiDrawElementsIndirect (mode, type, indirect, drawcount, stride);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_program_interface_query - glGetProgramInterfaceiv
  if (!prototypeCalled && glcoreConfig.m_glGetProgramInterfaceiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramInterfaceiv (program, programInterface, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_glcore_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_program_interface_query - glGetProgramResourceIndex
  if (!prototypeCalled && glcoreConfig.m_glGetProgramResourceIndex)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetProgramResourceIndex (program, programInterface, name);
  }
  return ((GLuint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_program_interface_query - glGetProgramResourceName
  if (!prototypeCalled && glcoreConfig.m_glGetProgramResourceName)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramResourceName (program, programInterface, index, bufSize, length, name);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_program_interface_query - glGetProgramResourceiv
  if (!prototypeCalled && glcoreConfig.m_glGetProgramResourceiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramResourceiv (program, programInterface, index, propCount, props, bufSize, length, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_glcore_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_program_interface_query - glGetProgramResourceLocation
  if (!prototypeCalled && glcoreConfig.m_glGetProgramResourceLocation)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetProgramResourceLocation (program, programInterface, name);
  }
  return ((GLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_glcore_glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_program_interface_query - glGetProgramResourceLocationIndex
  if (!prototypeCalled && glcoreConfig.m_glGetProgramResourceLocationIndex)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetProgramResourceLocationIndex (program, programInterface, name);
  }
  return ((GLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProvokingVertex (GLenum mode)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_provoking_vertex - glProvokingVertex
  if (!prototypeCalled && glcoreConfig.m_glProvokingVertex)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProvokingVertex (mode);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_glcore_glGetGraphicsResetStatusARB ()
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetGraphicsResetStatusARB
  if (!prototypeCalled && glcoreConfig.m_glGetGraphicsResetStatusARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetGraphicsResetStatusARB ();
  }
  return ((GLenum)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetnTexImageARB
  if (!prototypeCalled && glcoreConfig.m_glGetnTexImageARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetnTexImageARB (target, level, format, type, bufSize, img);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glReadnPixelsARB
  if (!prototypeCalled && glcoreConfig.m_glReadnPixelsARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glReadnPixelsARB (x, y, width, height, format, type, bufSize, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void * img)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetnCompressedTexImageARB
  if (!prototypeCalled && glcoreConfig.m_glGetnCompressedTexImageARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetnCompressedTexImageARB (target, lod, bufSize, img);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetnUniformfvARB
  if (!prototypeCalled && glcoreConfig.m_glGetnUniformfvARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetnUniformfvARB (program, location, bufSize, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetnUniformivARB
  if (!prototypeCalled && glcoreConfig.m_glGetnUniformivARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetnUniformivARB (program, location, bufSize, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetnUniformuivARB
  if (!prototypeCalled && glcoreConfig.m_glGetnUniformuivARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetnUniformuivARB (program, location, bufSize, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_robustness - glGetnUniformdvARB
  if (!prototypeCalled && glcoreConfig.m_glGetnUniformdvARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetnUniformdvARB (program, location, bufSize, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMinSampleShadingARB (GLfloat value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sample_shading - glMinSampleShadingARB
  if (!prototypeCalled && glcoreConfig.m_glMinSampleShadingARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMinSampleShadingARB (value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenSamplers (GLsizei count, GLuint * samplers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glGenSamplers
  if (!prototypeCalled && glcoreConfig.m_glGenSamplers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenSamplers (count, samplers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteSamplers (GLsizei count, const GLuint * samplers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glDeleteSamplers
  if (!prototypeCalled && glcoreConfig.m_glDeleteSamplers)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteSamplers (count, samplers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsSampler (GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glIsSampler
  if (!prototypeCalled && glcoreConfig.m_glIsSampler)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsSampler (sampler);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindSampler (GLuint unit, GLuint sampler)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glBindSampler
  if (!prototypeCalled && glcoreConfig.m_glBindSampler)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindSampler (unit, sampler);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glSamplerParameteri
  if (!prototypeCalled && glcoreConfig.m_glSamplerParameteri)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSamplerParameteri (sampler, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glSamplerParameteriv
  if (!prototypeCalled && glcoreConfig.m_glSamplerParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSamplerParameteriv (sampler, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glSamplerParameterf
  if (!prototypeCalled && glcoreConfig.m_glSamplerParameterf)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSamplerParameterf (sampler, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glSamplerParameterfv
  if (!prototypeCalled && glcoreConfig.m_glSamplerParameterfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSamplerParameterfv (sampler, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glSamplerParameterIiv
  if (!prototypeCalled && glcoreConfig.m_glSamplerParameterIiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSamplerParameterIiv (sampler, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glSamplerParameterIuiv
  if (!prototypeCalled && glcoreConfig.m_glSamplerParameterIuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSamplerParameterIuiv (sampler, pname, param);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glGetSamplerParameteriv
  if (!prototypeCalled && glcoreConfig.m_glGetSamplerParameteriv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetSamplerParameteriv (sampler, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glGetSamplerParameterIiv
  if (!prototypeCalled && glcoreConfig.m_glGetSamplerParameterIiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetSamplerParameterIiv (sampler, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glGetSamplerParameterfv
  if (!prototypeCalled && glcoreConfig.m_glGetSamplerParameterfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetSamplerParameterfv (sampler, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sampler_objects - glGetSamplerParameterIuiv
  if (!prototypeCalled && glcoreConfig.m_glGetSamplerParameterIuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetSamplerParameterIuiv (sampler, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glUseProgramStages
  if (!prototypeCalled && glcoreConfig.m_glUseProgramStages)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUseProgramStages (pipeline, stages, program);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glActiveShaderProgram (GLuint pipeline, GLuint program)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glActiveShaderProgram
  if (!prototypeCalled && glcoreConfig.m_glActiveShaderProgram)
  {
    prototypeCalled = true;
    glcoreConfig.m_glActiveShaderProgram (pipeline, program);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_glcore_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glCreateShaderProgramv
  if (!prototypeCalled && glcoreConfig.m_glCreateShaderProgramv)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glCreateShaderProgramv (type, count, strings);
  }
  return ((GLuint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindProgramPipeline (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glBindProgramPipeline
  if (!prototypeCalled && glcoreConfig.m_glBindProgramPipeline)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindProgramPipeline (pipeline);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glDeleteProgramPipelines
  if (!prototypeCalled && glcoreConfig.m_glDeleteProgramPipelines)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteProgramPipelines (n, pipelines);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenProgramPipelines (GLsizei n, GLuint * pipelines)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glGenProgramPipelines
  if (!prototypeCalled && glcoreConfig.m_glGenProgramPipelines)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenProgramPipelines (n, pipelines);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsProgramPipeline (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glIsProgramPipeline
  if (!prototypeCalled && glcoreConfig.m_glIsProgramPipeline)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsProgramPipeline (pipeline);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glGetProgramPipelineiv
  if (!prototypeCalled && glcoreConfig.m_glGetProgramPipelineiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramPipelineiv (pipeline, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1i (GLuint program, GLint location, GLint v0)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1i
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1i)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1i (program, location, v0);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1iv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1iv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1iv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1f (GLuint program, GLint location, GLfloat v0)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1f
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1f)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1f (program, location, v0);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1fv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1d (GLuint program, GLint location, GLdouble v0)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1d
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1d (program, location, v0);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1dv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1ui (GLuint program, GLint location, GLuint v0)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1ui
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1ui (program, location, v0);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform1uiv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform1uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform1uiv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2i
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2i)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2i (program, location, v0, v1);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2iv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2iv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2iv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2f
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2f)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2f (program, location, v0, v1);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2fv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2d
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2d (program, location, v0, v1);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2dv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2ui
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2ui (program, location, v0, v1);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform2uiv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform2uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform2uiv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3i
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3i)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3i (program, location, v0, v1, v2);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3iv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3iv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3iv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3f
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3f)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3f (program, location, v0, v1, v2);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3fv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3d
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3d (program, location, v0, v1, v2);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3dv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3ui
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3ui (program, location, v0, v1, v2);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform3uiv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform3uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform3uiv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4i
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4i)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4i (program, location, v0, v1, v2, v3);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4iv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4iv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4iv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4f
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4f)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4f (program, location, v0, v1, v2, v3);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4fv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4d
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4d (program, location, v0, v1, v2, v3);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4dv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4ui
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4ui (program, location, v0, v1, v2, v3);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniform4uiv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniform4uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniform4uiv (program, location, count, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix2fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix2fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix2fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix3fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix3fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix3fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix4fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix4fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix4fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix2dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix2dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix3dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix3dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix4dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix4dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix2x3fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix2x3fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix2x3fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix3x2fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix3x2fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix3x2fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix2x4fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix2x4fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix2x4fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix4x2fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix4x2fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix4x2fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix3x4fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix3x4fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix3x4fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix4x3fv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix4x3fv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix4x3fv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix2x3dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix2x3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix2x3dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix3x2dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix3x2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix3x2dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix2x4dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix2x4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix2x4dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix4x2dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix4x2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix4x2dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix3x4dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix3x4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix3x4dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glProgramUniformMatrix4x3dv
  if (!prototypeCalled && glcoreConfig.m_glProgramUniformMatrix4x3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glProgramUniformMatrix4x3dv (program, location, count, transpose, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glValidateProgramPipeline (GLuint pipeline)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glValidateProgramPipeline
  if (!prototypeCalled && glcoreConfig.m_glValidateProgramPipeline)
  {
    prototypeCalled = true;
    glcoreConfig.m_glValidateProgramPipeline (pipeline);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_separate_shader_objects - glGetProgramPipelineInfoLog
  if (!prototypeCalled && glcoreConfig.m_glGetProgramPipelineInfoLog)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramPipelineInfoLog (pipeline, bufSize, length, infoLog);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_atomic_counters - glGetActiveAtomicCounterBufferiv
  if (!prototypeCalled && glcoreConfig.m_glGetActiveAtomicCounterBufferiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveAtomicCounterBufferiv (program, bufferIndex, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_image_load_store - glBindImageTexture
  if (!prototypeCalled && glcoreConfig.m_glBindImageTexture)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindImageTexture (unit, texture, level, layered, layer, access, format);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glMemoryBarrier (GLbitfield barriers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_image_load_store - glMemoryBarrier
  if (!prototypeCalled && glcoreConfig.m_glMemoryBarrier)
  {
    prototypeCalled = true;
    glcoreConfig.m_glMemoryBarrier (barriers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_storage_buffer_object - glShaderStorageBlockBinding
  if (!prototypeCalled && glcoreConfig.m_glShaderStorageBlockBinding)
  {
    prototypeCalled = true;
    glcoreConfig.m_glShaderStorageBlockBinding (program, storageBlockIndex, storageBlockBinding);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLint _glew_glcore_glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetSubroutineUniformLocation
  if (!prototypeCalled && glcoreConfig.m_glGetSubroutineUniformLocation)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetSubroutineUniformLocation (program, shadertype, name);
  }
  return ((GLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_glcore_glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetSubroutineIndex
  if (!prototypeCalled && glcoreConfig.m_glGetSubroutineIndex)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetSubroutineIndex (program, shadertype, name);
  }
  return ((GLuint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetActiveSubroutineUniformiv
  if (!prototypeCalled && glcoreConfig.m_glGetActiveSubroutineUniformiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveSubroutineUniformiv (program, shadertype, index, pname, values);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetActiveSubroutineUniformName
  if (!prototypeCalled && glcoreConfig.m_glGetActiveSubroutineUniformName)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveSubroutineUniformName (program, shadertype, index, bufsize, length, name);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetActiveSubroutineName
  if (!prototypeCalled && glcoreConfig.m_glGetActiveSubroutineName)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveSubroutineName (program, shadertype, index, bufsize, length, name);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint * indices)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glUniformSubroutinesuiv
  if (!prototypeCalled && glcoreConfig.m_glUniformSubroutinesuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformSubroutinesuiv (shadertype, count, indices);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetUniformSubroutineuiv
  if (!prototypeCalled && glcoreConfig.m_glGetUniformSubroutineuiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetUniformSubroutineuiv (shadertype, location, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint * values)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shader_subroutine - glGetProgramStageiv
  if (!prototypeCalled && glcoreConfig.m_glGetProgramStageiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetProgramStageiv (program, shadertype, pname, values);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedStringARB (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shading_language_include - glNamedStringARB
  if (!prototypeCalled && glcoreConfig.m_glNamedStringARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedStringARB (type, namelen, name, stringlen, string);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteNamedStringARB (GLint namelen, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shading_language_include - glDeleteNamedStringARB
  if (!prototypeCalled && glcoreConfig.m_glDeleteNamedStringARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteNamedStringARB (namelen, name);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shading_language_include - glCompileShaderIncludeARB
  if (!prototypeCalled && glcoreConfig.m_glCompileShaderIncludeARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glCompileShaderIncludeARB (shader, count, path, length);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsNamedStringARB (GLint namelen, const GLchar * name)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shading_language_include - glIsNamedStringARB
  if (!prototypeCalled && glcoreConfig.m_glIsNamedStringARB)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsNamedStringARB (namelen, name);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedStringARB (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shading_language_include - glGetNamedStringARB
  if (!prototypeCalled && glcoreConfig.m_glGetNamedStringARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedStringARB (namelen, name, bufSize, stringlen, string);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetNamedStringivARB (GLint namelen, const GLchar * name, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_shading_language_include - glGetNamedStringivARB
  if (!prototypeCalled && glcoreConfig.m_glGetNamedStringivARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetNamedStringivARB (namelen, name, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sparse_buffer - glBufferPageCommitmentARB
  if (!prototypeCalled && glcoreConfig.m_glBufferPageCommitmentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBufferPageCommitmentARB (target, offset, size, commit);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sparse_buffer - glNamedBufferPageCommitmentEXT
  if (!prototypeCalled && glcoreConfig.m_glNamedBufferPageCommitmentEXT)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedBufferPageCommitmentEXT (buffer, offset, size, commit);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sparse_buffer - glNamedBufferPageCommitmentARB
  if (!prototypeCalled && glcoreConfig.m_glNamedBufferPageCommitmentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glNamedBufferPageCommitmentARB (buffer, offset, size, commit);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sparse_texture - glTexPageCommitmentARB
  if (!prototypeCalled && glcoreConfig.m_glTexPageCommitmentARB)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexPageCommitmentARB (target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLsync _glew_glcore_glFenceSync (GLenum condition, GLbitfield flags)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glFenceSync
  if (!prototypeCalled && glcoreConfig.m_glFenceSync)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glFenceSync (condition, flags);
  }
  return ((GLsync)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsSync (GLsync sync)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glIsSync
  if (!prototypeCalled && glcoreConfig.m_glIsSync)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsSync (sync);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteSync (GLsync sync)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glDeleteSync
  if (!prototypeCalled && glcoreConfig.m_glDeleteSync)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteSync (sync);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLenum _glew_glcore_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glClientWaitSync
  if (!prototypeCalled && glcoreConfig.m_glClientWaitSync)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glClientWaitSync (sync, flags, timeout);
  }
  return ((GLenum)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glWaitSync
  if (!prototypeCalled && glcoreConfig.m_glWaitSync)
  {
    prototypeCalled = true;
    glcoreConfig.m_glWaitSync (sync, flags, timeout);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetInteger64v (GLenum pname, GLint64 * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glGetInteger64v
  if (!prototypeCalled && glcoreConfig.m_glGetInteger64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetInteger64v (pname, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_sync - glGetSynciv
  if (!prototypeCalled && glcoreConfig.m_glGetSynciv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetSynciv (sync, pname, bufSize, length, values);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glPatchParameteri (GLenum pname, GLint value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_tessellation_shader - glPatchParameteri
  if (!prototypeCalled && glcoreConfig.m_glPatchParameteri)
  {
    prototypeCalled = true;
    glcoreConfig.m_glPatchParameteri (pname, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glPatchParameterfv (GLenum pname, const GLfloat * values)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_tessellation_shader - glPatchParameterfv
  if (!prototypeCalled && glcoreConfig.m_glPatchParameterfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glPatchParameterfv (pname, values);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureBarrier ()
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_barrier - glTextureBarrier
  if (!prototypeCalled && glcoreConfig.m_glTextureBarrier)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureBarrier ();
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_buffer_range - glTexBufferRange
  if (!prototypeCalled && glcoreConfig.m_glTexBufferRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexBufferRange (target, internalformat, buffer, offset, size);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_multisample - glTexImage2DMultisample
  if (!prototypeCalled && glcoreConfig.m_glTexImage2DMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexImage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_multisample - glTexImage3DMultisample
  if (!prototypeCalled && glcoreConfig.m_glTexImage3DMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexImage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_multisample - glGetMultisamplefv
  if (!prototypeCalled && glcoreConfig.m_glGetMultisamplefv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetMultisamplefv (pname, index, val);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glSampleMaski (GLuint maskNumber, GLbitfield mask)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_multisample - glSampleMaski
  if (!prototypeCalled && glcoreConfig.m_glSampleMaski)
  {
    prototypeCalled = true;
    glcoreConfig.m_glSampleMaski (maskNumber, mask);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_storage - glTexStorage1D
  if (!prototypeCalled && glcoreConfig.m_glTexStorage1D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexStorage1D (target, levels, internalformat, width);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_storage - glTexStorage2D
  if (!prototypeCalled && glcoreConfig.m_glTexStorage2D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexStorage2D (target, levels, internalformat, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_storage - glTexStorage3D
  if (!prototypeCalled && glcoreConfig.m_glTexStorage3D)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexStorage3D (target, levels, internalformat, width, height, depth);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_storage_multisample - glTexStorage2DMultisample
  if (!prototypeCalled && glcoreConfig.m_glTexStorage2DMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexStorage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_storage_multisample - glTexStorage3DMultisample
  if (!prototypeCalled && glcoreConfig.m_glTexStorage3DMultisample)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTexStorage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_texture_view - glTextureView
  if (!prototypeCalled && glcoreConfig.m_glTextureView)
  {
    prototypeCalled = true;
    glcoreConfig.m_glTextureView (texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glQueryCounter (GLuint id, GLenum target)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_timer_query - glQueryCounter
  if (!prototypeCalled && glcoreConfig.m_glQueryCounter)
  {
    prototypeCalled = true;
    glcoreConfig.m_glQueryCounter (id, target);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_timer_query - glGetQueryObjecti64v
  if (!prototypeCalled && glcoreConfig.m_glGetQueryObjecti64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryObjecti64v (id, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_timer_query - glGetQueryObjectui64v
  if (!prototypeCalled && glcoreConfig.m_glGetQueryObjectui64v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryObjectui64v (id, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindTransformFeedback (GLenum target, GLuint id)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glBindTransformFeedback
  if (!prototypeCalled && glcoreConfig.m_glBindTransformFeedback)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindTransformFeedback (target, id);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glDeleteTransformFeedbacks
  if (!prototypeCalled && glcoreConfig.m_glDeleteTransformFeedbacks)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteTransformFeedbacks (n, ids);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenTransformFeedbacks (GLsizei n, GLuint * ids)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glGenTransformFeedbacks
  if (!prototypeCalled && glcoreConfig.m_glGenTransformFeedbacks)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenTransformFeedbacks (n, ids);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsTransformFeedback (GLuint id)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glIsTransformFeedback
  if (!prototypeCalled && glcoreConfig.m_glIsTransformFeedback)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsTransformFeedback (id);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glPauseTransformFeedback ()
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glPauseTransformFeedback
  if (!prototypeCalled && glcoreConfig.m_glPauseTransformFeedback)
  {
    prototypeCalled = true;
    glcoreConfig.m_glPauseTransformFeedback ();
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glResumeTransformFeedback ()
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glResumeTransformFeedback
  if (!prototypeCalled && glcoreConfig.m_glResumeTransformFeedback)
  {
    prototypeCalled = true;
    glcoreConfig.m_glResumeTransformFeedback ();
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawTransformFeedback (GLenum mode, GLuint id)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback2 - glDrawTransformFeedback
  if (!prototypeCalled && glcoreConfig.m_glDrawTransformFeedback)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawTransformFeedback (mode, id);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback3 - glDrawTransformFeedbackStream
  if (!prototypeCalled && glcoreConfig.m_glDrawTransformFeedbackStream)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawTransformFeedbackStream (mode, id, stream);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBeginQueryIndexed (GLenum target, GLuint index, GLuint id)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback3 - glBeginQueryIndexed
  if (!prototypeCalled && glcoreConfig.m_glBeginQueryIndexed)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBeginQueryIndexed (target, index, id);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glEndQueryIndexed (GLenum target, GLuint index)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback3 - glEndQueryIndexed
  if (!prototypeCalled && glcoreConfig.m_glEndQueryIndexed)
  {
    prototypeCalled = true;
    glcoreConfig.m_glEndQueryIndexed (target, index);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback3 - glGetQueryIndexediv
  if (!prototypeCalled && glcoreConfig.m_glGetQueryIndexediv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetQueryIndexediv (target, index, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback_instanced - glDrawTransformFeedbackInstanced
  if (!prototypeCalled && glcoreConfig.m_glDrawTransformFeedbackInstanced)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawTransformFeedbackInstanced (mode, id, instancecount);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_transform_feedback_instanced - glDrawTransformFeedbackStreamInstanced
  if (!prototypeCalled && glcoreConfig.m_glDrawTransformFeedbackStreamInstanced)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDrawTransformFeedbackStreamInstanced (mode, id, stream, instancecount);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetUniformIndices
  if (!prototypeCalled && glcoreConfig.m_glGetUniformIndices)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetUniformIndices (program, uniformCount, uniformNames, uniformIndices);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetActiveUniformsiv
  if (!prototypeCalled && glcoreConfig.m_glGetActiveUniformsiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveUniformsiv (program, uniformCount, uniformIndices, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetActiveUniformName
  if (!prototypeCalled && glcoreConfig.m_glGetActiveUniformName)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveUniformName (program, uniformIndex, bufSize, length, uniformName);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLuint _glew_glcore_glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetUniformBlockIndex
  if (!prototypeCalled && glcoreConfig.m_glGetUniformBlockIndex)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glGetUniformBlockIndex (program, uniformBlockName);
  }
  return ((GLuint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetActiveUniformBlockiv
  if (!prototypeCalled && glcoreConfig.m_glGetActiveUniformBlockiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveUniformBlockiv (program, uniformBlockIndex, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetActiveUniformBlockName
  if (!prototypeCalled && glcoreConfig.m_glGetActiveUniformBlockName)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetActiveUniformBlockName (program, uniformBlockIndex, bufSize, length, uniformBlockName);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glUniformBlockBinding
  if (!prototypeCalled && glcoreConfig.m_glUniformBlockBinding)
  {
    prototypeCalled = true;
    glcoreConfig.m_glUniformBlockBinding (program, uniformBlockIndex, uniformBlockBinding);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glBindBufferRange
  if (!prototypeCalled && glcoreConfig.m_glBindBufferRange)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindBufferRange (target, index, buffer, offset, size);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindBufferBase (GLenum target, GLuint index, GLuint buffer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glBindBufferBase
  if (!prototypeCalled && glcoreConfig.m_glBindBufferBase)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindBufferBase (target, index, buffer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetIntegeri_v (GLenum target, GLuint index, GLint * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_uniform_buffer_object - glGetIntegeri_v
  if (!prototypeCalled && glcoreConfig.m_glGetIntegeri_v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetIntegeri_v (target, index, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindVertexArray (GLuint array)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_array_object - glBindVertexArray
  if (!prototypeCalled && glcoreConfig.m_glBindVertexArray)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindVertexArray (array);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDeleteVertexArrays (GLsizei n, const GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_array_object - glDeleteVertexArrays
  if (!prototypeCalled && glcoreConfig.m_glDeleteVertexArrays)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDeleteVertexArrays (n, arrays);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGenVertexArrays (GLsizei n, GLuint * arrays)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_array_object - glGenVertexArrays
  if (!prototypeCalled && glcoreConfig.m_glGenVertexArrays)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGenVertexArrays (n, arrays);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_glcore_glIsVertexArray (GLuint array)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_array_object - glIsVertexArray
  if (!prototypeCalled && glcoreConfig.m_glIsVertexArray)
  {
    prototypeCalled = true;
    return glcoreConfig.m_glIsVertexArray (array);
  }
  return ((GLboolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL1d (GLuint index, GLdouble x)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL1d
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL1d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL1d (index, x);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL2d
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL2d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL2d (index, x, y);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL3d
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL3d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL3d (index, x, y, z);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL4d
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL4d)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL4d (index, x, y, z, w);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL1dv (GLuint index, const GLdouble * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL1dv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL1dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL1dv (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL2dv (GLuint index, const GLdouble * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL2dv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL2dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL2dv (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL3dv (GLuint index, const GLdouble * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL3dv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL3dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL3dv (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribL4dv (GLuint index, const GLdouble * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribL4dv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribL4dv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribL4dv (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glVertexAttribLPointer
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribLPointer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribLPointer (index, size, type, stride, pointer);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble * params)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_64bit - glGetVertexAttribLdv
  if (!prototypeCalled && glcoreConfig.m_glGetVertexAttribLdv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetVertexAttribLdv (index, pname, params);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_binding - glBindVertexBuffer
  if (!prototypeCalled && glcoreConfig.m_glBindVertexBuffer)
  {
    prototypeCalled = true;
    glcoreConfig.m_glBindVertexBuffer (bindingindex, buffer, offset, stride);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_binding - glVertexAttribFormat
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribFormat (attribindex, size, type, normalized, relativeoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_binding - glVertexAttribIFormat
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribIFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribIFormat (attribindex, size, type, relativeoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_binding - glVertexAttribLFormat
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribLFormat)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribLFormat (attribindex, size, type, relativeoffset);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_binding - glVertexAttribBinding
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribBinding)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribBinding (attribindex, bindingindex);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_attrib_binding - glVertexBindingDivisor
  if (!prototypeCalled && glcoreConfig.m_glVertexBindingDivisor)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexBindingDivisor (bindingindex, divisor);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP1ui
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP1ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP1ui (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP1uiv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP1uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP1uiv (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP2ui
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP2ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP2ui (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP2uiv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP2uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP2uiv (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP3ui
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP3ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP3ui (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP3uiv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP3uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP3uiv (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP4ui
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP4ui)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP4ui (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_vertex_type_2_10_10_10_rev - glVertexAttribP4uiv
  if (!prototypeCalled && glcoreConfig.m_glVertexAttribP4uiv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glVertexAttribP4uiv (index, type, normalized, value);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glViewportArrayv (GLuint first, GLsizei count, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glViewportArrayv
  if (!prototypeCalled && glcoreConfig.m_glViewportArrayv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glViewportArrayv (first, count, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glViewportIndexedf
  if (!prototypeCalled && glcoreConfig.m_glViewportIndexedf)
  {
    prototypeCalled = true;
    glcoreConfig.m_glViewportIndexedf (index, x, y, w, h);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glViewportIndexedfv (GLuint index, const GLfloat * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glViewportIndexedfv
  if (!prototypeCalled && glcoreConfig.m_glViewportIndexedfv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glViewportIndexedfv (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glScissorArrayv (GLuint first, GLsizei count, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glScissorArrayv
  if (!prototypeCalled && glcoreConfig.m_glScissorArrayv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glScissorArrayv (first, count, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glScissorIndexed
  if (!prototypeCalled && glcoreConfig.m_glScissorIndexed)
  {
    prototypeCalled = true;
    glcoreConfig.m_glScissorIndexed (index, left, bottom, width, height);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glScissorIndexedv (GLuint index, const GLint * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glScissorIndexedv
  if (!prototypeCalled && glcoreConfig.m_glScissorIndexedv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glScissorIndexedv (index, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble * v)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glDepthRangeArrayv
  if (!prototypeCalled && glcoreConfig.m_glDepthRangeArrayv)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDepthRangeArrayv (first, count, v);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glDepthRangeIndexed
  if (!prototypeCalled && glcoreConfig.m_glDepthRangeIndexed)
  {
    prototypeCalled = true;
    glcoreConfig.m_glDepthRangeIndexed (index, n, f);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetFloati_v (GLenum target, GLuint index, GLfloat * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glGetFloati_v
  if (!prototypeCalled && glcoreConfig.m_glGetFloati_v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetFloati_v (target, index, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void  _glew_glcore_glGetDoublei_v (GLenum target, GLuint index, GLdouble * data)
{
  bool prototypeCalled = false;
  const glew::glcore::DeviceConfig &glcoreConfig = glew::glcore::GetConfig ();
  // GL_ARB_viewport_array - glGetDoublei_v
  if (!prototypeCalled && glcoreConfig.m_glGetDoublei_v)
  {
    prototypeCalled = true;
    glcoreConfig.m_glGetDoublei_v (target, index, data);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::IsSupported (GLEW_GLCORE_FeatureSet feature)
{
  return glew::glcore::IsSupported (feature);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

glew::glcore::DeviceConfig glew::glcore::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::glcore::Initialise ()
{
  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  // 
  // Determine current driver's feature reporting.
  // 

  const unsigned char *glVersion = glGetString (GL_VERSION);

  if (!glVersion)
  {
    glVersion = (const unsigned char*) "";
  }

  /*const size_t glVersionLen = strlen ((const char *) glVersion);

  if (glVersionLen)
  {
#if _WIN32
  #define strncasecmp _strnicmp
#endif

    const bool es20Supported = (strncasecmp ((const char *) glVersion, "OpenGL ES 2", 11) == 0);
    const bool es30Supported = (strncasecmp ((const char *) glVersion, "OpenGL ES 3", 11) == 0);
    const bool es31Supported = (strncasecmp ((const char *) glVersion, "OpenGL ES 3.1", 13) == 0);

    s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_2_0] = es20Supported;
    s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] = es30Supported;
    s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] = es31Supported;
  }*/

  // 
  // Evaluate extension support.
  // 

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *glExtensions = (const unsigned char*) glGetString (GL_EXTENSIONS);

  if (!glExtensions)
  {
    glExtensions = (const unsigned char*) ""; // Protect against some drivers will happily passing back NULL.
  }

  const size_t glExtensionsLen = strlen ((const char *) glExtensions);

  if (glExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) glExtensions;

    unsigned char *thisExtEnd = NULL;

    char thisExtBuffer [128];

    memset (thisExtBuffer, 0, sizeof (thisExtBuffer));

    do 
    {
      const char * seperator = strchr ((const char *) thisExtStart, ' ');

      if (seperator)
      {
        const size_t len = (((uintptr_t) seperator - (uintptr_t) thisExtStart) / sizeof (unsigned char));

      #if _WIN32
        strncpy_s (thisExtBuffer, 128, (const char *)thisExtStart, len);
      #else 
        strncpy (thisExtBuffer, (const char *)thisExtStart, len);
      #endif

        thisExtBuffer [GLEW_MIN (len, 127)] = '\0';

        thisExtEnd = (unsigned char *) seperator + 1; // skip tab character
      }
      else
      {
        const size_t len = strlen ((const char *) thisExtStart);

      #if _WIN32
        strncpy_s (thisExtBuffer, 128, (const char *)thisExtStart, len);
      #else 
        strncpy (thisExtBuffer, (const char *)thisExtStart, len);
      #endif

        thisExtBuffer [GLEW_MIN (len + 1, 127)] = '\0';

        thisExtEnd = NULL;
      }

      std::string thisExt (thisExtBuffer);

      if (supportedExtensions.find (thisExt) == supportedExtensions.end ())
      {
        supportedExtensions.insert (thisExt);
      }

      thisExtStart = thisExtEnd;
    }
    while ((thisExtStart && *thisExtStart != '\0') && (thisExtEnd && *thisExtEnd != '\0'));
  }

  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES2_compatibility] = (supportedExtensions.find ("GL_ARB_ES2_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_1_compatibility] = (supportedExtensions.find ("GL_ARB_ES3_1_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_compatibility] = (supportedExtensions.find ("GL_ARB_ES3_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_arrays_of_arrays] = (supportedExtensions.find ("GL_ARB_arrays_of_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_base_instance] = (supportedExtensions.find ("GL_ARB_base_instance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_bindless_texture] = (supportedExtensions.find ("GL_ARB_bindless_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_blend_func_extended] = (supportedExtensions.find ("GL_ARB_blend_func_extended") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_buffer_storage] = (supportedExtensions.find ("GL_ARB_buffer_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_cl_event] = (supportedExtensions.find ("GL_ARB_cl_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_buffer_object] = (supportedExtensions.find ("GL_ARB_clear_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_texture] = (supportedExtensions.find ("GL_ARB_clear_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clip_control] = (supportedExtensions.find ("GL_ARB_clip_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compressed_texture_pixel_storage] = (supportedExtensions.find ("GL_ARB_compressed_texture_pixel_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_shader] = (supportedExtensions.find ("GL_ARB_compute_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_variable_group_size] = (supportedExtensions.find ("GL_ARB_compute_variable_group_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_conditional_render_inverted] = (supportedExtensions.find ("GL_ARB_conditional_render_inverted") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_conservative_depth] = (supportedExtensions.find ("GL_ARB_conservative_depth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_buffer] = (supportedExtensions.find ("GL_ARB_copy_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_image] = (supportedExtensions.find ("GL_ARB_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_cull_distance] = (supportedExtensions.find ("GL_ARB_cull_distance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_debug_output] = (supportedExtensions.find ("GL_ARB_debug_output") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_depth_buffer_float] = (supportedExtensions.find ("GL_ARB_depth_buffer_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_depth_clamp] = (supportedExtensions.find ("GL_ARB_depth_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_derivative_control] = (supportedExtensions.find ("GL_ARB_derivative_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access] = (supportedExtensions.find ("GL_ARB_direct_state_access") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_buffers_blend] = (supportedExtensions.find ("GL_ARB_draw_buffers_blend") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_elements_base_vertex] = (supportedExtensions.find ("GL_ARB_draw_elements_base_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_indirect] = (supportedExtensions.find ("GL_ARB_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_enhanced_layouts] = (supportedExtensions.find ("GL_ARB_enhanced_layouts") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_explicit_attrib_location] = (supportedExtensions.find ("GL_ARB_explicit_attrib_location") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_explicit_uniform_location] = (supportedExtensions.find ("GL_ARB_explicit_uniform_location") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_coord_conventions] = (supportedExtensions.find ("GL_ARB_fragment_coord_conventions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_layer_viewport] = (supportedExtensions.find ("GL_ARB_fragment_layer_viewport") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_no_attachments] = (supportedExtensions.find ("GL_ARB_framebuffer_no_attachments") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_object] = (supportedExtensions.find ("GL_ARB_framebuffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_sRGB] = (supportedExtensions.find ("GL_ARB_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_program_binary] = (supportedExtensions.find ("GL_ARB_get_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_texture_sub_image] = (supportedExtensions.find ("GL_ARB_get_texture_sub_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader5] = (supportedExtensions.find ("GL_ARB_gpu_shader5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader_fp64] = (supportedExtensions.find ("GL_ARB_gpu_shader_fp64") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_half_float_vertex] = (supportedExtensions.find ("GL_ARB_half_float_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_imaging] = (supportedExtensions.find ("GL_ARB_imaging") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_indirect_parameters] = (supportedExtensions.find ("GL_ARB_indirect_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query] = (supportedExtensions.find ("GL_ARB_internalformat_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query2] = (supportedExtensions.find ("GL_ARB_internalformat_query2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_invalidate_subdata] = (supportedExtensions.find ("GL_ARB_invalidate_subdata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_map_buffer_alignment] = (supportedExtensions.find ("GL_ARB_map_buffer_alignment") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_map_buffer_range] = (supportedExtensions.find ("GL_ARB_map_buffer_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_bind] = (supportedExtensions.find ("GL_ARB_multi_bind") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_draw_indirect] = (supportedExtensions.find ("GL_ARB_multi_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_occlusion_query2] = (supportedExtensions.find ("GL_ARB_occlusion_query2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_pipeline_statistics_query] = (supportedExtensions.find ("GL_ARB_pipeline_statistics_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_program_interface_query] = (supportedExtensions.find ("GL_ARB_program_interface_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_provoking_vertex] = (supportedExtensions.find ("GL_ARB_provoking_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_query_buffer_object] = (supportedExtensions.find ("GL_ARB_query_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robust_buffer_access_behavior] = (supportedExtensions.find ("GL_ARB_robust_buffer_access_behavior") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robustness] = (supportedExtensions.find ("GL_ARB_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robustness_isolation] = (supportedExtensions.find ("GL_ARB_robustness_isolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sample_shading] = (supportedExtensions.find ("GL_ARB_sample_shading") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sampler_objects] = (supportedExtensions.find ("GL_ARB_sampler_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_seamless_cube_map] = (supportedExtensions.find ("GL_ARB_seamless_cube_map") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_seamless_cubemap_per_texture] = (supportedExtensions.find ("GL_ARB_seamless_cubemap_per_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_separate_shader_objects] = (supportedExtensions.find ("GL_ARB_separate_shader_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_atomic_counters] = (supportedExtensions.find ("GL_ARB_shader_atomic_counters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_bit_encoding] = (supportedExtensions.find ("GL_ARB_shader_bit_encoding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_draw_parameters] = (supportedExtensions.find ("GL_ARB_shader_draw_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_group_vote] = (supportedExtensions.find ("GL_ARB_shader_group_vote") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_image_load_store] = (supportedExtensions.find ("GL_ARB_shader_image_load_store") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_image_size] = (supportedExtensions.find ("GL_ARB_shader_image_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_precision] = (supportedExtensions.find ("GL_ARB_shader_precision") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_stencil_export] = (supportedExtensions.find ("GL_ARB_shader_stencil_export") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_storage_buffer_object] = (supportedExtensions.find ("GL_ARB_shader_storage_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_subroutine] = (supportedExtensions.find ("GL_ARB_shader_subroutine") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_texture_image_samples] = (supportedExtensions.find ("GL_ARB_shader_texture_image_samples") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_420pack] = (supportedExtensions.find ("GL_ARB_shading_language_420pack") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_include] = (supportedExtensions.find ("GL_ARB_shading_language_include") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_packing] = (supportedExtensions.find ("GL_ARB_shading_language_packing") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_buffer] = (supportedExtensions.find ("GL_ARB_sparse_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_texture] = (supportedExtensions.find ("GL_ARB_sparse_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_stencil_texturing] = (supportedExtensions.find ("GL_ARB_stencil_texturing") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sync] = (supportedExtensions.find ("GL_ARB_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_tessellation_shader] = (supportedExtensions.find ("GL_ARB_tessellation_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_barrier] = (supportedExtensions.find ("GL_ARB_texture_barrier") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_object_rgb32] = (supportedExtensions.find ("GL_ARB_texture_buffer_object_rgb32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_range] = (supportedExtensions.find ("GL_ARB_texture_buffer_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_compression_bptc] = (supportedExtensions.find ("GL_ARB_texture_compression_bptc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_compression_rgtc] = (supportedExtensions.find ("GL_ARB_texture_compression_rgtc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_cube_map_array] = (supportedExtensions.find ("GL_ARB_texture_cube_map_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_gather] = (supportedExtensions.find ("GL_ARB_texture_gather") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_mirror_clamp_to_edge] = (supportedExtensions.find ("GL_ARB_texture_mirror_clamp_to_edge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_multisample] = (supportedExtensions.find ("GL_ARB_texture_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_query_levels] = (supportedExtensions.find ("GL_ARB_texture_query_levels") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_query_lod] = (supportedExtensions.find ("GL_ARB_texture_query_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_rg] = (supportedExtensions.find ("GL_ARB_texture_rg") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_rgb10_a2ui] = (supportedExtensions.find ("GL_ARB_texture_rgb10_a2ui") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_stencil8] = (supportedExtensions.find ("GL_ARB_texture_stencil8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage] = (supportedExtensions.find ("GL_ARB_texture_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage_multisample] = (supportedExtensions.find ("GL_ARB_texture_storage_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_swizzle] = (supportedExtensions.find ("GL_ARB_texture_swizzle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_view] = (supportedExtensions.find ("GL_ARB_texture_view") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_timer_query] = (supportedExtensions.find ("GL_ARB_timer_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback2] = (supportedExtensions.find ("GL_ARB_transform_feedback2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback3] = (supportedExtensions.find ("GL_ARB_transform_feedback3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback_instanced] = (supportedExtensions.find ("GL_ARB_transform_feedback_instanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback_overflow_query] = (supportedExtensions.find ("GL_ARB_transform_feedback_overflow_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_uniform_buffer_object] = (supportedExtensions.find ("GL_ARB_uniform_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_array_bgra] = (supportedExtensions.find ("GL_ARB_vertex_array_bgra") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_array_object] = (supportedExtensions.find ("GL_ARB_vertex_array_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_64bit] = (supportedExtensions.find ("GL_ARB_vertex_attrib_64bit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_binding] = (supportedExtensions.find ("GL_ARB_vertex_attrib_binding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_type_10f_11f_11f_rev] = (supportedExtensions.find ("GL_ARB_vertex_type_10f_11f_11f_rev") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_type_2_10_10_10_rev] = (supportedExtensions.find ("GL_ARB_vertex_type_2_10_10_10_rev") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_viewport_array] = (supportedExtensions.find ("GL_ARB_viewport_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_context_flush_control] = (supportedExtensions.find ("GL_KHR_context_flush_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_debug] = (supportedExtensions.find ("GL_KHR_debug") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_no_error] = (supportedExtensions.find ("GL_KHR_no_error") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_robust_buffer_access_behavior] = (supportedExtensions.find ("GL_KHR_robust_buffer_access_behavior") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_robustness] = (supportedExtensions.find ("GL_KHR_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_texture_compression_astc_hdr] = (supportedExtensions.find ("GL_KHR_texture_compression_astc_hdr") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_texture_compression_astc_ldr] = (supportedExtensions.find ("GL_KHR_texture_compression_astc_ldr") != supportedExtensions.end ());

  // GL_ARB_ES2_compatibility
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES2_compatibility])
  {
    s_deviceConfig.m_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) glewGetProcAddress ("glReleaseShaderCompiler");
    s_deviceConfig.m_glShaderBinary = (PFNGLSHADERBINARYPROC) glewGetProcAddress ("glShaderBinary");
    s_deviceConfig.m_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) glewGetProcAddress ("glGetShaderPrecisionFormat");
    s_deviceConfig.m_glDepthRangef = (PFNGLDEPTHRANGEFPROC) glewGetProcAddress ("glDepthRangef");
    s_deviceConfig.m_glClearDepthf = (PFNGLCLEARDEPTHFPROC) glewGetProcAddress ("glClearDepthf");
  }

  // GL_ARB_ES3_1_compatibility
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_1_compatibility])
  {
    s_deviceConfig.m_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) glewGetProcAddress ("glMemoryBarrierByRegion");
  }

  // GL_ARB_base_instance
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_base_instance])
  {
    s_deviceConfig.m_glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) glewGetProcAddress ("glDrawArraysInstancedBaseInstance");
    s_deviceConfig.m_glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) glewGetProcAddress ("glDrawElementsInstancedBaseInstance");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertexBaseInstance");
  }

  // GL_ARB_bindless_texture
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_bindless_texture])
  {
    s_deviceConfig.m_glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC) glewGetProcAddress ("glGetTextureHandleARB");
    s_deviceConfig.m_glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) glewGetProcAddress ("glGetTextureSamplerHandleARB");
    s_deviceConfig.m_glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) glewGetProcAddress ("glMakeTextureHandleResidentARB");
    s_deviceConfig.m_glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) glewGetProcAddress ("glMakeTextureHandleNonResidentARB");
    s_deviceConfig.m_glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC) glewGetProcAddress ("glGetImageHandleARB");
    s_deviceConfig.m_glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) glewGetProcAddress ("glMakeImageHandleResidentARB");
    s_deviceConfig.m_glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) glewGetProcAddress ("glMakeImageHandleNonResidentARB");
    s_deviceConfig.m_glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC) glewGetProcAddress ("glUniformHandleui64ARB");
    s_deviceConfig.m_glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC) glewGetProcAddress ("glUniformHandleui64vARB");
    s_deviceConfig.m_glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) glewGetProcAddress ("glProgramUniformHandleui64ARB");
    s_deviceConfig.m_glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) glewGetProcAddress ("glProgramUniformHandleui64vARB");
    s_deviceConfig.m_glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) glewGetProcAddress ("glIsTextureHandleResidentARB");
    s_deviceConfig.m_glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC) glewGetProcAddress ("glIsImageHandleResidentARB");
    s_deviceConfig.m_glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC) glewGetProcAddress ("glVertexAttribL1ui64ARB");
    s_deviceConfig.m_glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC) glewGetProcAddress ("glVertexAttribL1ui64vARB");
    s_deviceConfig.m_glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) glewGetProcAddress ("glGetVertexAttribLui64vARB");
  }

  // GL_ARB_blend_func_extended
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_blend_func_extended])
  {
    s_deviceConfig.m_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) glewGetProcAddress ("glBindFragDataLocationIndexed");
    s_deviceConfig.m_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) glewGetProcAddress ("glGetFragDataIndex");
  }

  // GL_ARB_buffer_storage
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_buffer_storage])
  {
    s_deviceConfig.m_glBufferStorage = (PFNGLBUFFERSTORAGEPROC) glewGetProcAddress ("glBufferStorage");
  }

  // GL_ARB_cl_event
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_cl_event])
  {
    s_deviceConfig.m_glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC) glewGetProcAddress ("glCreateSyncFromCLeventARB");
  }

  // GL_ARB_clear_buffer_object
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_buffer_object])
  {
    s_deviceConfig.m_glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) glewGetProcAddress ("glClearBufferData");
    s_deviceConfig.m_glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) glewGetProcAddress ("glClearBufferSubData");
  }

  // GL_ARB_clear_texture
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_texture])
  {
    s_deviceConfig.m_glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) glewGetProcAddress ("glClearTexImage");
    s_deviceConfig.m_glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) glewGetProcAddress ("glClearTexSubImage");
  }

  // GL_ARB_clip_control
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clip_control])
  {
    s_deviceConfig.m_glClipControl = (PFNGLCLIPCONTROLPROC) glewGetProcAddress ("glClipControl");
  }

  // GL_ARB_compute_shader
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_shader])
  {
    s_deviceConfig.m_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) glewGetProcAddress ("glDispatchCompute");
    s_deviceConfig.m_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) glewGetProcAddress ("glDispatchComputeIndirect");
  }

  // GL_ARB_compute_variable_group_size
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_variable_group_size])
  {
    s_deviceConfig.m_glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) glewGetProcAddress ("glDispatchComputeGroupSizeARB");
  }

  // GL_ARB_copy_buffer
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_buffer])
  {
    s_deviceConfig.m_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyBufferSubData");
  }

  // GL_ARB_copy_image
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_image])
  {
    s_deviceConfig.m_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) glewGetProcAddress ("glCopyImageSubData");
  }

  // GL_ARB_debug_output
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_debug_output])
  {
    s_deviceConfig.m_glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC) glewGetProcAddress ("glDebugMessageControlARB");
    s_deviceConfig.m_glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC) glewGetProcAddress ("glDebugMessageInsertARB");
    s_deviceConfig.m_glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC) glewGetProcAddress ("glDebugMessageCallbackARB");
    s_deviceConfig.m_glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC) glewGetProcAddress ("glGetDebugMessageLogARB");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glCreateTransformFeedbacks");
    s_deviceConfig.m_glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) glewGetProcAddress ("glTransformFeedbackBufferBase");
    s_deviceConfig.m_glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) glewGetProcAddress ("glTransformFeedbackBufferRange");
    s_deviceConfig.m_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) glewGetProcAddress ("glGetTransformFeedbackiv");
    s_deviceConfig.m_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) glewGetProcAddress ("glGetTransformFeedbacki_v");
    s_deviceConfig.m_glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) glewGetProcAddress ("glGetTransformFeedbacki64_v");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateBuffers = (PFNGLCREATEBUFFERSPROC) glewGetProcAddress ("glCreateBuffers");
    s_deviceConfig.m_glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) glewGetProcAddress ("glNamedBufferStorage");
    s_deviceConfig.m_glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) glewGetProcAddress ("glNamedBufferData");
    s_deviceConfig.m_glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glNamedBufferSubData");
    s_deviceConfig.m_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyNamedBufferSubData");
    s_deviceConfig.m_glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) glewGetProcAddress ("glClearNamedBufferData");
    s_deviceConfig.m_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glClearNamedBufferSubData");
    s_deviceConfig.m_glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) glewGetProcAddress ("glMapNamedBuffer");
    s_deviceConfig.m_glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) glewGetProcAddress ("glMapNamedBufferRange");
    s_deviceConfig.m_glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) glewGetProcAddress ("glUnmapNamedBuffer");
    s_deviceConfig.m_glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedNamedBufferRange");
    s_deviceConfig.m_glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedBufferParameteriv");
    s_deviceConfig.m_glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) glewGetProcAddress ("glGetNamedBufferParameteri64v");
    s_deviceConfig.m_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) glewGetProcAddress ("glGetNamedBufferPointerv");
    s_deviceConfig.m_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glGetNamedBufferSubData");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) glewGetProcAddress ("glCreateFramebuffers");
    s_deviceConfig.m_glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) glewGetProcAddress ("glNamedFramebufferRenderbuffer");
    s_deviceConfig.m_glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glNamedFramebufferParameteri");
    s_deviceConfig.m_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) glewGetProcAddress ("glNamedFramebufferTexture");
    s_deviceConfig.m_glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glNamedFramebufferTextureLayer");
    s_deviceConfig.m_glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) glewGetProcAddress ("glNamedFramebufferDrawBuffer");
    s_deviceConfig.m_glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) glewGetProcAddress ("glNamedFramebufferDrawBuffers");
    s_deviceConfig.m_glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) glewGetProcAddress ("glNamedFramebufferReadBuffer");
    s_deviceConfig.m_glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) glewGetProcAddress ("glInvalidateNamedFramebufferData");
    s_deviceConfig.m_glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) glewGetProcAddress ("glInvalidateNamedFramebufferSubData");
    s_deviceConfig.m_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) glewGetProcAddress ("glClearNamedFramebufferiv");
    s_deviceConfig.m_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) glewGetProcAddress ("glClearNamedFramebufferuiv");
    s_deviceConfig.m_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) glewGetProcAddress ("glClearNamedFramebufferfv");
    s_deviceConfig.m_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) glewGetProcAddress ("glClearNamedFramebufferfi");
    s_deviceConfig.m_glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) glewGetProcAddress ("glBlitNamedFramebuffer");
    s_deviceConfig.m_glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) glewGetProcAddress ("glCheckNamedFramebufferStatus");
    s_deviceConfig.m_glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedFramebufferParameteriv");
    s_deviceConfig.m_glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) glewGetProcAddress ("glGetNamedFramebufferAttachmentParameteriv");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) glewGetProcAddress ("glCreateRenderbuffers");
    s_deviceConfig.m_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) glewGetProcAddress ("glNamedRenderbufferStorage");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisample");
    s_deviceConfig.m_glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedRenderbufferParameteriv");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateTextures = (PFNGLCREATETEXTURESPROC) glewGetProcAddress ("glCreateTextures");
    s_deviceConfig.m_glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) glewGetProcAddress ("glTextureBuffer");
    s_deviceConfig.m_glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) glewGetProcAddress ("glTextureBufferRange");
    s_deviceConfig.m_glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) glewGetProcAddress ("glTextureStorage1D");
    s_deviceConfig.m_glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) glewGetProcAddress ("glTextureStorage2D");
    s_deviceConfig.m_glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) glewGetProcAddress ("glTextureStorage3D");
    s_deviceConfig.m_glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTextureStorage2DMultisample");
    s_deviceConfig.m_glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTextureStorage3DMultisample");
    s_deviceConfig.m_glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glTextureSubImage1D");
    s_deviceConfig.m_glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glTextureSubImage2D");
    s_deviceConfig.m_glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glTextureSubImage3D");
    s_deviceConfig.m_glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glCompressedTextureSubImage1D");
    s_deviceConfig.m_glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glCompressedTextureSubImage2D");
    s_deviceConfig.m_glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glCompressedTextureSubImage3D");
    s_deviceConfig.m_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glCopyTextureSubImage1D");
    s_deviceConfig.m_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glCopyTextureSubImage2D");
    s_deviceConfig.m_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glCopyTextureSubImage3D");
    s_deviceConfig.m_glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) glewGetProcAddress ("glTextureParameterf");
    s_deviceConfig.m_glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) glewGetProcAddress ("glTextureParameterfv");
    s_deviceConfig.m_glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) glewGetProcAddress ("glTextureParameteri");
    s_deviceConfig.m_glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) glewGetProcAddress ("glTextureParameterIiv");
    s_deviceConfig.m_glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) glewGetProcAddress ("glTextureParameterIuiv");
    s_deviceConfig.m_glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) glewGetProcAddress ("glTextureParameteriv");
    s_deviceConfig.m_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) glewGetProcAddress ("glGenerateTextureMipmap");
    s_deviceConfig.m_glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) glewGetProcAddress ("glBindTextureUnit");
    s_deviceConfig.m_glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) glewGetProcAddress ("glGetTextureImage");
    s_deviceConfig.m_glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) glewGetProcAddress ("glGetCompressedTextureImage");
    s_deviceConfig.m_glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) glewGetProcAddress ("glGetTextureLevelParameterfv");
    s_deviceConfig.m_glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) glewGetProcAddress ("glGetTextureLevelParameteriv");
    s_deviceConfig.m_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) glewGetProcAddress ("glGetTextureParameterfv");
    s_deviceConfig.m_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) glewGetProcAddress ("glGetTextureParameterIiv");
    s_deviceConfig.m_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) glewGetProcAddress ("glGetTextureParameterIuiv");
    s_deviceConfig.m_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) glewGetProcAddress ("glGetTextureParameteriv");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) glewGetProcAddress ("glCreateVertexArrays");
    s_deviceConfig.m_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) glewGetProcAddress ("glDisableVertexArrayAttrib");
    s_deviceConfig.m_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) glewGetProcAddress ("glEnableVertexArrayAttrib");
    s_deviceConfig.m_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) glewGetProcAddress ("glVertexArrayElementBuffer");
    s_deviceConfig.m_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) glewGetProcAddress ("glVertexArrayVertexBuffer");
    s_deviceConfig.m_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) glewGetProcAddress ("glVertexArrayVertexBuffers");
    s_deviceConfig.m_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) glewGetProcAddress ("glVertexArrayAttribBinding");
    s_deviceConfig.m_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) glewGetProcAddress ("glVertexArrayAttribFormat");
    s_deviceConfig.m_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) glewGetProcAddress ("glVertexArrayAttribIFormat");
    s_deviceConfig.m_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) glewGetProcAddress ("glVertexArrayAttribLFormat");
    s_deviceConfig.m_glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) glewGetProcAddress ("glVertexArrayBindingDivisor");
    s_deviceConfig.m_glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) glewGetProcAddress ("glGetVertexArrayiv");
    s_deviceConfig.m_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) glewGetProcAddress ("glGetVertexArrayIndexediv");
    s_deviceConfig.m_glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) glewGetProcAddress ("glGetVertexArrayIndexed64iv");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateSamplers = (PFNGLCREATESAMPLERSPROC) glewGetProcAddress ("glCreateSamplers");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) glewGetProcAddress ("glCreateProgramPipelines");
  }

  // GL_ARB_direct_state_access
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateQueries = (PFNGLCREATEQUERIESPROC) glewGetProcAddress ("glCreateQueries");
    s_deviceConfig.m_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) glewGetProcAddress ("glGetQueryBufferObjecti64v");
    s_deviceConfig.m_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) glewGetProcAddress ("glGetQueryBufferObjectiv");
    s_deviceConfig.m_glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) glewGetProcAddress ("glGetQueryBufferObjectui64v");
    s_deviceConfig.m_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) glewGetProcAddress ("glGetQueryBufferObjectuiv");
  }

  // GL_ARB_draw_buffers_blend
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_buffers_blend])
  {
    s_deviceConfig.m_glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC) glewGetProcAddress ("glBlendEquationiARB");
    s_deviceConfig.m_glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) glewGetProcAddress ("glBlendEquationSeparateiARB");
    s_deviceConfig.m_glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC) glewGetProcAddress ("glBlendFunciARB");
    s_deviceConfig.m_glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC) glewGetProcAddress ("glBlendFuncSeparateiARB");
  }

  // GL_ARB_draw_elements_base_vertex
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_elements_base_vertex])
  {
    s_deviceConfig.m_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsBaseVertex");
    s_deviceConfig.m_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawRangeElementsBaseVertex");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertex");
    s_deviceConfig.m_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glMultiDrawElementsBaseVertex");
  }

  // GL_ARB_draw_indirect
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_indirect])
  {
    s_deviceConfig.m_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glDrawArraysIndirect");
    s_deviceConfig.m_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glDrawElementsIndirect");
  }

  // GL_ARB_framebuffer_no_attachments
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_no_attachments])
  {
    s_deviceConfig.m_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glFramebufferParameteri");
    s_deviceConfig.m_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferParameteriv");
  }

  // GL_ARB_framebuffer_object
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_object])
  {
    s_deviceConfig.m_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) glewGetProcAddress ("glIsRenderbuffer");
    s_deviceConfig.m_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) glewGetProcAddress ("glBindRenderbuffer");
    s_deviceConfig.m_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) glewGetProcAddress ("glDeleteRenderbuffers");
    s_deviceConfig.m_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) glewGetProcAddress ("glGenRenderbuffers");
    s_deviceConfig.m_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) glewGetProcAddress ("glRenderbufferStorage");
    s_deviceConfig.m_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetRenderbufferParameteriv");
    s_deviceConfig.m_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) glewGetProcAddress ("glIsFramebuffer");
    s_deviceConfig.m_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) glewGetProcAddress ("glBindFramebuffer");
    s_deviceConfig.m_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) glewGetProcAddress ("glDeleteFramebuffers");
    s_deviceConfig.m_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) glewGetProcAddress ("glGenFramebuffers");
    s_deviceConfig.m_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) glewGetProcAddress ("glCheckFramebufferStatus");
    s_deviceConfig.m_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) glewGetProcAddress ("glFramebufferTexture1D");
    s_deviceConfig.m_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) glewGetProcAddress ("glFramebufferTexture2D");
    s_deviceConfig.m_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) glewGetProcAddress ("glFramebufferTexture3D");
    s_deviceConfig.m_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) glewGetProcAddress ("glFramebufferRenderbuffer");
    s_deviceConfig.m_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferAttachmentParameteriv");
    s_deviceConfig.m_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) glewGetProcAddress ("glGenerateMipmap");
    s_deviceConfig.m_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) glewGetProcAddress ("glBlitFramebuffer");
    s_deviceConfig.m_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glRenderbufferStorageMultisample");
    s_deviceConfig.m_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glFramebufferTextureLayer");
  }

  // GL_ARB_get_program_binary
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_program_binary])
  {
    s_deviceConfig.m_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) glewGetProcAddress ("glGetProgramBinary");
    s_deviceConfig.m_glProgramBinary = (PFNGLPROGRAMBINARYPROC) glewGetProcAddress ("glProgramBinary");
    s_deviceConfig.m_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) glewGetProcAddress ("glProgramParameteri");
  }

  // GL_ARB_get_texture_sub_image
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_texture_sub_image])
  {
    s_deviceConfig.m_glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) glewGetProcAddress ("glGetTextureSubImage");
    s_deviceConfig.m_glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) glewGetProcAddress ("glGetCompressedTextureSubImage");
  }

  // GL_ARB_gpu_shader_fp64
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader_fp64])
  {
    s_deviceConfig.m_glUniform1d = (PFNGLUNIFORM1DPROC) glewGetProcAddress ("glUniform1d");
    s_deviceConfig.m_glUniform2d = (PFNGLUNIFORM2DPROC) glewGetProcAddress ("glUniform2d");
    s_deviceConfig.m_glUniform3d = (PFNGLUNIFORM3DPROC) glewGetProcAddress ("glUniform3d");
    s_deviceConfig.m_glUniform4d = (PFNGLUNIFORM4DPROC) glewGetProcAddress ("glUniform4d");
    s_deviceConfig.m_glUniform1dv = (PFNGLUNIFORM1DVPROC) glewGetProcAddress ("glUniform1dv");
    s_deviceConfig.m_glUniform2dv = (PFNGLUNIFORM2DVPROC) glewGetProcAddress ("glUniform2dv");
    s_deviceConfig.m_glUniform3dv = (PFNGLUNIFORM3DVPROC) glewGetProcAddress ("glUniform3dv");
    s_deviceConfig.m_glUniform4dv = (PFNGLUNIFORM4DVPROC) glewGetProcAddress ("glUniform4dv");
    s_deviceConfig.m_glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) glewGetProcAddress ("glUniformMatrix2dv");
    s_deviceConfig.m_glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) glewGetProcAddress ("glUniformMatrix3dv");
    s_deviceConfig.m_glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) glewGetProcAddress ("glUniformMatrix4dv");
    s_deviceConfig.m_glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) glewGetProcAddress ("glUniformMatrix2x3dv");
    s_deviceConfig.m_glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) glewGetProcAddress ("glUniformMatrix2x4dv");
    s_deviceConfig.m_glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) glewGetProcAddress ("glUniformMatrix3x2dv");
    s_deviceConfig.m_glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) glewGetProcAddress ("glUniformMatrix3x4dv");
    s_deviceConfig.m_glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) glewGetProcAddress ("glUniformMatrix4x2dv");
    s_deviceConfig.m_glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) glewGetProcAddress ("glUniformMatrix4x3dv");
    s_deviceConfig.m_glGetUniformdv = (PFNGLGETUNIFORMDVPROC) glewGetProcAddress ("glGetUniformdv");
  }

  // GL_ARB_imaging
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_imaging])
  {
    s_deviceConfig.m_glBlendColor = (PFNGLBLENDCOLORPROC) glewGetProcAddress ("glBlendColor");
    s_deviceConfig.m_glBlendEquation = (PFNGLBLENDEQUATIONPROC) glewGetProcAddress ("glBlendEquation");
  }

  // GL_ARB_indirect_parameters
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_indirect_parameters])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) glewGetProcAddress ("glMultiDrawArraysIndirectCountARB");
    s_deviceConfig.m_glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) glewGetProcAddress ("glMultiDrawElementsIndirectCountARB");
  }

  // GL_ARB_internalformat_query
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query])
  {
    s_deviceConfig.m_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) glewGetProcAddress ("glGetInternalformativ");
  }

  // GL_ARB_internalformat_query2
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query2])
  {
    s_deviceConfig.m_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) glewGetProcAddress ("glGetInternalformati64v");
  }

  // GL_ARB_invalidate_subdata
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_invalidate_subdata])
  {
    s_deviceConfig.m_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) glewGetProcAddress ("glInvalidateTexSubImage");
    s_deviceConfig.m_glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) glewGetProcAddress ("glInvalidateTexImage");
    s_deviceConfig.m_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) glewGetProcAddress ("glInvalidateBufferSubData");
    s_deviceConfig.m_glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) glewGetProcAddress ("glInvalidateBufferData");
    s_deviceConfig.m_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateFramebuffer");
    s_deviceConfig.m_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateSubFramebuffer");
  }

  // GL_ARB_map_buffer_range
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_map_buffer_range])
  {
    s_deviceConfig.m_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) glewGetProcAddress ("glMapBufferRange");
    s_deviceConfig.m_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedBufferRange");
  }

  // GL_ARB_multi_bind
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_bind])
  {
    s_deviceConfig.m_glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) glewGetProcAddress ("glBindBuffersBase");
    s_deviceConfig.m_glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) glewGetProcAddress ("glBindBuffersRange");
    s_deviceConfig.m_glBindTextures = (PFNGLBINDTEXTURESPROC) glewGetProcAddress ("glBindTextures");
    s_deviceConfig.m_glBindSamplers = (PFNGLBINDSAMPLERSPROC) glewGetProcAddress ("glBindSamplers");
    s_deviceConfig.m_glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) glewGetProcAddress ("glBindImageTextures");
    s_deviceConfig.m_glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) glewGetProcAddress ("glBindVertexBuffers");
  }

  // GL_ARB_multi_draw_indirect
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_draw_indirect])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glMultiDrawArraysIndirect");
    s_deviceConfig.m_glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glMultiDrawElementsIndirect");
  }

  // GL_ARB_program_interface_query
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_program_interface_query])
  {
    s_deviceConfig.m_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) glewGetProcAddress ("glGetProgramInterfaceiv");
    s_deviceConfig.m_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) glewGetProcAddress ("glGetProgramResourceIndex");
    s_deviceConfig.m_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) glewGetProcAddress ("glGetProgramResourceName");
    s_deviceConfig.m_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) glewGetProcAddress ("glGetProgramResourceiv");
    s_deviceConfig.m_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) glewGetProcAddress ("glGetProgramResourceLocation");
    s_deviceConfig.m_glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) glewGetProcAddress ("glGetProgramResourceLocationIndex");
  }

  // GL_ARB_provoking_vertex
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_provoking_vertex])
  {
    s_deviceConfig.m_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) glewGetProcAddress ("glProvokingVertex");
  }

  // GL_ARB_robustness
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robustness])
  {
    s_deviceConfig.m_glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) glewGetProcAddress ("glGetGraphicsResetStatusARB");
    s_deviceConfig.m_glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC) glewGetProcAddress ("glGetnTexImageARB");
    s_deviceConfig.m_glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC) glewGetProcAddress ("glReadnPixelsARB");
    s_deviceConfig.m_glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) glewGetProcAddress ("glGetnCompressedTexImageARB");
    s_deviceConfig.m_glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC) glewGetProcAddress ("glGetnUniformfvARB");
    s_deviceConfig.m_glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC) glewGetProcAddress ("glGetnUniformivARB");
    s_deviceConfig.m_glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC) glewGetProcAddress ("glGetnUniformuivARB");
    s_deviceConfig.m_glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC) glewGetProcAddress ("glGetnUniformdvARB");
  }

  // GL_ARB_sample_shading
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sample_shading])
  {
    s_deviceConfig.m_glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC) glewGetProcAddress ("glMinSampleShadingARB");
  }

  // GL_ARB_sampler_objects
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sampler_objects])
  {
    s_deviceConfig.m_glGenSamplers = (PFNGLGENSAMPLERSPROC) glewGetProcAddress ("glGenSamplers");
    s_deviceConfig.m_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) glewGetProcAddress ("glDeleteSamplers");
    s_deviceConfig.m_glIsSampler = (PFNGLISSAMPLERPROC) glewGetProcAddress ("glIsSampler");
    s_deviceConfig.m_glBindSampler = (PFNGLBINDSAMPLERPROC) glewGetProcAddress ("glBindSampler");
    s_deviceConfig.m_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) glewGetProcAddress ("glSamplerParameteri");
    s_deviceConfig.m_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glSamplerParameteriv");
    s_deviceConfig.m_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) glewGetProcAddress ("glSamplerParameterf");
    s_deviceConfig.m_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glSamplerParameterfv");
    s_deviceConfig.m_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glSamplerParameterIiv");
    s_deviceConfig.m_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glSamplerParameterIuiv");
    s_deviceConfig.m_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glGetSamplerParameteriv");
    s_deviceConfig.m_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glGetSamplerParameterIiv");
    s_deviceConfig.m_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glGetSamplerParameterfv");
    s_deviceConfig.m_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glGetSamplerParameterIuiv");
  }

  // GL_ARB_separate_shader_objects
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_separate_shader_objects])
  {
    s_deviceConfig.m_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) glewGetProcAddress ("glUseProgramStages");
    s_deviceConfig.m_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) glewGetProcAddress ("glActiveShaderProgram");
    s_deviceConfig.m_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) glewGetProcAddress ("glCreateShaderProgramv");
    s_deviceConfig.m_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) glewGetProcAddress ("glBindProgramPipeline");
    s_deviceConfig.m_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) glewGetProcAddress ("glDeleteProgramPipelines");
    s_deviceConfig.m_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) glewGetProcAddress ("glGenProgramPipelines");
    s_deviceConfig.m_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) glewGetProcAddress ("glIsProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) glewGetProcAddress ("glGetProgramPipelineiv");
    s_deviceConfig.m_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) glewGetProcAddress ("glProgramUniform1i");
    s_deviceConfig.m_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) glewGetProcAddress ("glProgramUniform1iv");
    s_deviceConfig.m_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) glewGetProcAddress ("glProgramUniform1f");
    s_deviceConfig.m_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) glewGetProcAddress ("glProgramUniform1fv");
    s_deviceConfig.m_glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) glewGetProcAddress ("glProgramUniform1d");
    s_deviceConfig.m_glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) glewGetProcAddress ("glProgramUniform1dv");
    s_deviceConfig.m_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) glewGetProcAddress ("glProgramUniform1ui");
    s_deviceConfig.m_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) glewGetProcAddress ("glProgramUniform1uiv");
    s_deviceConfig.m_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) glewGetProcAddress ("glProgramUniform2i");
    s_deviceConfig.m_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) glewGetProcAddress ("glProgramUniform2iv");
    s_deviceConfig.m_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) glewGetProcAddress ("glProgramUniform2f");
    s_deviceConfig.m_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) glewGetProcAddress ("glProgramUniform2fv");
    s_deviceConfig.m_glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) glewGetProcAddress ("glProgramUniform2d");
    s_deviceConfig.m_glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) glewGetProcAddress ("glProgramUniform2dv");
    s_deviceConfig.m_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) glewGetProcAddress ("glProgramUniform2ui");
    s_deviceConfig.m_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) glewGetProcAddress ("glProgramUniform2uiv");
    s_deviceConfig.m_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) glewGetProcAddress ("glProgramUniform3i");
    s_deviceConfig.m_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) glewGetProcAddress ("glProgramUniform3iv");
    s_deviceConfig.m_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) glewGetProcAddress ("glProgramUniform3f");
    s_deviceConfig.m_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) glewGetProcAddress ("glProgramUniform3fv");
    s_deviceConfig.m_glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) glewGetProcAddress ("glProgramUniform3d");
    s_deviceConfig.m_glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) glewGetProcAddress ("glProgramUniform3dv");
    s_deviceConfig.m_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) glewGetProcAddress ("glProgramUniform3ui");
    s_deviceConfig.m_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) glewGetProcAddress ("glProgramUniform3uiv");
    s_deviceConfig.m_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) glewGetProcAddress ("glProgramUniform4i");
    s_deviceConfig.m_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) glewGetProcAddress ("glProgramUniform4iv");
    s_deviceConfig.m_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) glewGetProcAddress ("glProgramUniform4f");
    s_deviceConfig.m_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) glewGetProcAddress ("glProgramUniform4fv");
    s_deviceConfig.m_glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) glewGetProcAddress ("glProgramUniform4d");
    s_deviceConfig.m_glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) glewGetProcAddress ("glProgramUniform4dv");
    s_deviceConfig.m_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) glewGetProcAddress ("glProgramUniform4ui");
    s_deviceConfig.m_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) glewGetProcAddress ("glProgramUniform4uiv");
    s_deviceConfig.m_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) glewGetProcAddress ("glProgramUniformMatrix2fv");
    s_deviceConfig.m_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) glewGetProcAddress ("glProgramUniformMatrix3fv");
    s_deviceConfig.m_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) glewGetProcAddress ("glProgramUniformMatrix4fv");
    s_deviceConfig.m_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) glewGetProcAddress ("glProgramUniformMatrix2dv");
    s_deviceConfig.m_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) glewGetProcAddress ("glProgramUniformMatrix3dv");
    s_deviceConfig.m_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) glewGetProcAddress ("glProgramUniformMatrix4dv");
    s_deviceConfig.m_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3fv");
    s_deviceConfig.m_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2fv");
    s_deviceConfig.m_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2fv");
    s_deviceConfig.m_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3fv");
    s_deviceConfig.m_glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3dv");
    s_deviceConfig.m_glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2dv");
    s_deviceConfig.m_glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4dv");
    s_deviceConfig.m_glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2dv");
    s_deviceConfig.m_glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4dv");
    s_deviceConfig.m_glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3dv");
    s_deviceConfig.m_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) glewGetProcAddress ("glValidateProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) glewGetProcAddress ("glGetProgramPipelineInfoLog");
  }

  // GL_ARB_shader_atomic_counters
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_atomic_counters])
  {
    s_deviceConfig.m_glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) glewGetProcAddress ("glGetActiveAtomicCounterBufferiv");
  }

  // GL_ARB_shader_image_load_store
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_image_load_store])
  {
    s_deviceConfig.m_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) glewGetProcAddress ("glBindImageTexture");
    s_deviceConfig.m_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) glewGetProcAddress ("glMemoryBarrier");
  }

  // GL_ARB_shader_storage_buffer_object
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_storage_buffer_object])
  {
    s_deviceConfig.m_glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) glewGetProcAddress ("glShaderStorageBlockBinding");
  }

  // GL_ARB_shader_subroutine
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_subroutine])
  {
    s_deviceConfig.m_glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) glewGetProcAddress ("glGetSubroutineUniformLocation");
    s_deviceConfig.m_glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) glewGetProcAddress ("glGetSubroutineIndex");
    s_deviceConfig.m_glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) glewGetProcAddress ("glGetActiveSubroutineUniformiv");
    s_deviceConfig.m_glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) glewGetProcAddress ("glGetActiveSubroutineUniformName");
    s_deviceConfig.m_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) glewGetProcAddress ("glGetActiveSubroutineName");
    s_deviceConfig.m_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) glewGetProcAddress ("glUniformSubroutinesuiv");
    s_deviceConfig.m_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) glewGetProcAddress ("glGetUniformSubroutineuiv");
    s_deviceConfig.m_glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) glewGetProcAddress ("glGetProgramStageiv");
  }

  // GL_ARB_shading_language_include
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_include])
  {
    s_deviceConfig.m_glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC) glewGetProcAddress ("glNamedStringARB");
    s_deviceConfig.m_glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC) glewGetProcAddress ("glDeleteNamedStringARB");
    s_deviceConfig.m_glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC) glewGetProcAddress ("glCompileShaderIncludeARB");
    s_deviceConfig.m_glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC) glewGetProcAddress ("glIsNamedStringARB");
    s_deviceConfig.m_glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC) glewGetProcAddress ("glGetNamedStringARB");
    s_deviceConfig.m_glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC) glewGetProcAddress ("glGetNamedStringivARB");
  }

  // GL_ARB_sparse_buffer
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_buffer])
  {
    s_deviceConfig.m_glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC) glewGetProcAddress ("glBufferPageCommitmentARB");
  }

  // GL_ARB_sparse_buffer
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_buffer])
  {
    s_deviceConfig.m_glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) glewGetProcAddress ("glNamedBufferPageCommitmentEXT");
  }

  // GL_ARB_sparse_buffer
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_buffer])
  {
    s_deviceConfig.m_glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) glewGetProcAddress ("glNamedBufferPageCommitmentARB");
  }

  // GL_ARB_sparse_texture
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_texture])
  {
    s_deviceConfig.m_glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC) glewGetProcAddress ("glTexPageCommitmentARB");
  }

  // GL_ARB_sync
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sync])
  {
    s_deviceConfig.m_glFenceSync = (PFNGLFENCESYNCPROC) glewGetProcAddress ("glFenceSync");
    s_deviceConfig.m_glIsSync = (PFNGLISSYNCPROC) glewGetProcAddress ("glIsSync");
    s_deviceConfig.m_glDeleteSync = (PFNGLDELETESYNCPROC) glewGetProcAddress ("glDeleteSync");
    s_deviceConfig.m_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) glewGetProcAddress ("glClientWaitSync");
    s_deviceConfig.m_glWaitSync = (PFNGLWAITSYNCPROC) glewGetProcAddress ("glWaitSync");
    s_deviceConfig.m_glGetInteger64v = (PFNGLGETINTEGER64VPROC) glewGetProcAddress ("glGetInteger64v");
    s_deviceConfig.m_glGetSynciv = (PFNGLGETSYNCIVPROC) glewGetProcAddress ("glGetSynciv");
  }

  // GL_ARB_tessellation_shader
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_tessellation_shader])
  {
    s_deviceConfig.m_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) glewGetProcAddress ("glPatchParameteri");
    s_deviceConfig.m_glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) glewGetProcAddress ("glPatchParameterfv");
  }

  // GL_ARB_texture_barrier
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_barrier])
  {
    s_deviceConfig.m_glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) glewGetProcAddress ("glTextureBarrier");
  }

  // GL_ARB_texture_buffer_range
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_range])
  {
    s_deviceConfig.m_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) glewGetProcAddress ("glTexBufferRange");
  }

  // GL_ARB_texture_multisample
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_multisample])
  {
    s_deviceConfig.m_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexImage2DMultisample");
    s_deviceConfig.m_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexImage3DMultisample");
    s_deviceConfig.m_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) glewGetProcAddress ("glGetMultisamplefv");
    s_deviceConfig.m_glSampleMaski = (PFNGLSAMPLEMASKIPROC) glewGetProcAddress ("glSampleMaski");
  }

  // GL_ARB_texture_storage
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage])
  {
    s_deviceConfig.m_glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) glewGetProcAddress ("glTexStorage1D");
    s_deviceConfig.m_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) glewGetProcAddress ("glTexStorage2D");
    s_deviceConfig.m_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) glewGetProcAddress ("glTexStorage3D");
  }

  // GL_ARB_texture_storage_multisample
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage_multisample])
  {
    s_deviceConfig.m_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage2DMultisample");
    s_deviceConfig.m_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage3DMultisample");
  }

  // GL_ARB_texture_view
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_view])
  {
    s_deviceConfig.m_glTextureView = (PFNGLTEXTUREVIEWPROC) glewGetProcAddress ("glTextureView");
  }

  // GL_ARB_timer_query
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_timer_query])
  {
    s_deviceConfig.m_glQueryCounter = (PFNGLQUERYCOUNTERPROC) glewGetProcAddress ("glQueryCounter");
    s_deviceConfig.m_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) glewGetProcAddress ("glGetQueryObjecti64v");
    s_deviceConfig.m_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) glewGetProcAddress ("glGetQueryObjectui64v");
  }

  // GL_ARB_transform_feedback2
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback2])
  {
    s_deviceConfig.m_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glBindTransformFeedback");
    s_deviceConfig.m_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glDeleteTransformFeedbacks");
    s_deviceConfig.m_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glGenTransformFeedbacks");
    s_deviceConfig.m_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glIsTransformFeedback");
    s_deviceConfig.m_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glPauseTransformFeedback");
    s_deviceConfig.m_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glResumeTransformFeedback");
    s_deviceConfig.m_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glDrawTransformFeedback");
  }

  // GL_ARB_transform_feedback3
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback3])
  {
    s_deviceConfig.m_glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) glewGetProcAddress ("glDrawTransformFeedbackStream");
    s_deviceConfig.m_glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) glewGetProcAddress ("glBeginQueryIndexed");
    s_deviceConfig.m_glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) glewGetProcAddress ("glEndQueryIndexed");
    s_deviceConfig.m_glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) glewGetProcAddress ("glGetQueryIndexediv");
  }

  // GL_ARB_transform_feedback_instanced
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback_instanced])
  {
    s_deviceConfig.m_glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) glewGetProcAddress ("glDrawTransformFeedbackInstanced");
    s_deviceConfig.m_glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) glewGetProcAddress ("glDrawTransformFeedbackStreamInstanced");
  }

  // GL_ARB_uniform_buffer_object
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_uniform_buffer_object])
  {
    s_deviceConfig.m_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) glewGetProcAddress ("glGetUniformIndices");
    s_deviceConfig.m_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) glewGetProcAddress ("glGetActiveUniformsiv");
    s_deviceConfig.m_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) glewGetProcAddress ("glGetActiveUniformName");
    s_deviceConfig.m_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) glewGetProcAddress ("glGetUniformBlockIndex");
    s_deviceConfig.m_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) glewGetProcAddress ("glGetActiveUniformBlockiv");
    s_deviceConfig.m_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) glewGetProcAddress ("glGetActiveUniformBlockName");
    s_deviceConfig.m_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) glewGetProcAddress ("glUniformBlockBinding");
    s_deviceConfig.m_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) glewGetProcAddress ("glBindBufferRange");
    s_deviceConfig.m_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) glewGetProcAddress ("glBindBufferBase");
    s_deviceConfig.m_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) glewGetProcAddress ("glGetIntegeri_v");
  }

  // GL_ARB_vertex_array_object
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_array_object])
  {
    s_deviceConfig.m_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) glewGetProcAddress ("glBindVertexArray");
    s_deviceConfig.m_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) glewGetProcAddress ("glDeleteVertexArrays");
    s_deviceConfig.m_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) glewGetProcAddress ("glGenVertexArrays");
    s_deviceConfig.m_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) glewGetProcAddress ("glIsVertexArray");
  }

  // GL_ARB_vertex_attrib_64bit
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_64bit])
  {
    s_deviceConfig.m_glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) glewGetProcAddress ("glVertexAttribL1d");
    s_deviceConfig.m_glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) glewGetProcAddress ("glVertexAttribL2d");
    s_deviceConfig.m_glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) glewGetProcAddress ("glVertexAttribL3d");
    s_deviceConfig.m_glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) glewGetProcAddress ("glVertexAttribL4d");
    s_deviceConfig.m_glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) glewGetProcAddress ("glVertexAttribL1dv");
    s_deviceConfig.m_glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) glewGetProcAddress ("glVertexAttribL2dv");
    s_deviceConfig.m_glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) glewGetProcAddress ("glVertexAttribL3dv");
    s_deviceConfig.m_glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) glewGetProcAddress ("glVertexAttribL4dv");
    s_deviceConfig.m_glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) glewGetProcAddress ("glVertexAttribLPointer");
    s_deviceConfig.m_glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) glewGetProcAddress ("glGetVertexAttribLdv");
  }

  // GL_ARB_vertex_attrib_binding
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_binding])
  {
    s_deviceConfig.m_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) glewGetProcAddress ("glBindVertexBuffer");
    s_deviceConfig.m_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) glewGetProcAddress ("glVertexAttribFormat");
    s_deviceConfig.m_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) glewGetProcAddress ("glVertexAttribIFormat");
    s_deviceConfig.m_glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) glewGetProcAddress ("glVertexAttribLFormat");
    s_deviceConfig.m_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) glewGetProcAddress ("glVertexAttribBinding");
    s_deviceConfig.m_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) glewGetProcAddress ("glVertexBindingDivisor");
  }

  // GL_ARB_vertex_type_2_10_10_10_rev
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_type_2_10_10_10_rev])
  {
    s_deviceConfig.m_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) glewGetProcAddress ("glVertexAttribP1ui");
    s_deviceConfig.m_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) glewGetProcAddress ("glVertexAttribP1uiv");
    s_deviceConfig.m_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) glewGetProcAddress ("glVertexAttribP2ui");
    s_deviceConfig.m_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) glewGetProcAddress ("glVertexAttribP2uiv");
    s_deviceConfig.m_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) glewGetProcAddress ("glVertexAttribP3ui");
    s_deviceConfig.m_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) glewGetProcAddress ("glVertexAttribP3uiv");
    s_deviceConfig.m_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) glewGetProcAddress ("glVertexAttribP4ui");
    s_deviceConfig.m_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) glewGetProcAddress ("glVertexAttribP4uiv");
  }

  // GL_ARB_viewport_array
  //if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_viewport_array])
  {
    s_deviceConfig.m_glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) glewGetProcAddress ("glViewportArrayv");
    s_deviceConfig.m_glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) glewGetProcAddress ("glViewportIndexedf");
    s_deviceConfig.m_glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) glewGetProcAddress ("glViewportIndexedfv");
    s_deviceConfig.m_glScissorArrayv = (PFNGLSCISSORARRAYVPROC) glewGetProcAddress ("glScissorArrayv");
    s_deviceConfig.m_glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) glewGetProcAddress ("glScissorIndexed");
    s_deviceConfig.m_glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) glewGetProcAddress ("glScissorIndexedv");
    s_deviceConfig.m_glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) glewGetProcAddress ("glDepthRangeArrayv");
    s_deviceConfig.m_glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) glewGetProcAddress ("glDepthRangeIndexed");
    s_deviceConfig.m_glGetFloati_v = (PFNGLGETFLOATI_VPROC) glewGetProcAddress ("glGetFloati_v");
    s_deviceConfig.m_glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) glewGetProcAddress ("glGetDoublei_v");
  }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::glcore::Deinitialise ()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
