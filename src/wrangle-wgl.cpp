////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <string>

#include <unordered_set>

#include <wrangle-wgl.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSetStereoEmitterState3DL (HDC hDC, UINT uState)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_3DL_stereo_control - wglSetStereoEmitterState3DL
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_3DL_stereo_control] && wglConfig.m_wglSetStereoEmitterState3DL)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetStereoEmitterState3DL (hDC, uState);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT _glew_wgl_wglGetGPUIDsAMD (UINT maxCount, UINT * ids)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  UINT result = ((UINT)0);
  // WGL_AMD_gpu_association - wglGetGPUIDsAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetGPUIDsAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGPUIDsAMD (maxCount, ids);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

INT _glew_wgl_wglGetGPUInfoAMD (UINT id, int  property, GLenum dataType, UINT size, void * data)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  INT result = ((INT)0);
  // WGL_AMD_gpu_association - wglGetGPUInfoAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetGPUInfoAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGPUInfoAMD (id, property, dataType, size, data);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT _glew_wgl_wglGetContextGPUIDAMD (HGLRC hglrc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  UINT result = ((UINT)0);
  // WGL_AMD_gpu_association - wglGetContextGPUIDAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetContextGPUIDAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetContextGPUIDAMD (hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HGLRC _glew_wgl_wglCreateAssociatedContextAMD (UINT id)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HGLRC result = ((HGLRC)0);
  // WGL_AMD_gpu_association - wglCreateAssociatedContextAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglCreateAssociatedContextAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateAssociatedContextAMD (id);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HGLRC _glew_wgl_wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC hShareContext, const int * attribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HGLRC result = ((HGLRC)0);
  // WGL_AMD_gpu_association - wglCreateAssociatedContextAttribsAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglCreateAssociatedContextAttribsAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateAssociatedContextAttribsAMD (id, hShareContext, attribList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDeleteAssociatedContextAMD (HGLRC hglrc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_AMD_gpu_association - wglDeleteAssociatedContextAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglDeleteAssociatedContextAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDeleteAssociatedContextAMD (hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglMakeAssociatedContextCurrentAMD (HGLRC hglrc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_AMD_gpu_association - wglMakeAssociatedContextCurrentAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglMakeAssociatedContextCurrentAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglMakeAssociatedContextCurrentAMD (hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HGLRC _glew_wgl_wglGetCurrentAssociatedContextAMD ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HGLRC result = ((HGLRC)0);
  // WGL_AMD_gpu_association - wglGetCurrentAssociatedContextAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetCurrentAssociatedContextAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetCurrentAssociatedContextAMD ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VOID _glew_wgl_wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  // WGL_AMD_gpu_association - wglBlitContextFramebufferAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglBlitContextFramebufferAMD)
  {
    prototypeCalled = true;
    wglConfig.m_wglBlitContextFramebufferAMD (dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HANDLE _glew_wgl_wglCreateBufferRegionARB (HDC hDC, int  iLayerPlane, UINT uType)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HANDLE result = ((HANDLE)0);
  // WGL_ARB_buffer_region - wglCreateBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglCreateBufferRegionARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateBufferRegionARB (hDC, iLayerPlane, uType);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VOID _glew_wgl_wglDeleteBufferRegionARB (HANDLE hRegion)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  // WGL_ARB_buffer_region - wglDeleteBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglDeleteBufferRegionARB)
  {
    prototypeCalled = true;
    wglConfig.m_wglDeleteBufferRegionARB (hRegion);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSaveBufferRegionARB (HANDLE hRegion, int  x, int  y, int  width, int  height)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_buffer_region - wglSaveBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglSaveBufferRegionARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSaveBufferRegionARB (hRegion, x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglRestoreBufferRegionARB (HANDLE hRegion, int  x, int  y, int  width, int  height, int  xSrc, int  ySrc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_buffer_region - wglRestoreBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglRestoreBufferRegionARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglRestoreBufferRegionARB (hRegion, x, y, width, height, xSrc, ySrc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HGLRC _glew_wgl_wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const int * attribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HGLRC result = ((HGLRC)0);
  // WGL_ARB_create_context - wglCreateContextAttribsARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_create_context] && wglConfig.m_wglCreateContextAttribsARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateContextAttribsARB (hDC, hShareContext, attribList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_wgl_wglGetExtensionsStringARB (HDC hdc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  const char * result = ((const char *)0);
  // WGL_ARB_extensions_string - wglGetExtensionsStringARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_extensions_string] && wglConfig.m_wglGetExtensionsStringARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetExtensionsStringARB (hdc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_make_current_read - wglMakeContextCurrentARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read] && wglConfig.m_wglMakeContextCurrentARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglMakeContextCurrentARB (hDrawDC, hReadDC, hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HDC _glew_wgl_wglGetCurrentReadDCARB ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HDC result = ((HDC)0);
  // WGL_ARB_make_current_read - wglGetCurrentReadDCARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read] && wglConfig.m_wglGetCurrentReadDCARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetCurrentReadDCARB ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HPBUFFERARB _glew_wgl_wglCreatePbufferARB (HDC hDC, int  iPixelFormat, int  iWidth, int  iHeight, const int * piAttribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HPBUFFERARB result = ((HPBUFFERARB)0);
  // WGL_ARB_pbuffer - wglCreatePbufferARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglCreatePbufferARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreatePbufferARB (hDC, iPixelFormat, iWidth, iHeight, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HDC _glew_wgl_wglGetPbufferDCARB (HPBUFFERARB hPbuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HDC result = ((HDC)0);
  // WGL_ARB_pbuffer - wglGetPbufferDCARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglGetPbufferDCARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPbufferDCARB (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int _glew_wgl_wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  int result = ((int)0);
  // WGL_ARB_pbuffer - wglReleasePbufferDCARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglReleasePbufferDCARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleasePbufferDCARB (hPbuffer, hDC);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDestroyPbufferARB (HPBUFFERARB hPbuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_pbuffer - wglDestroyPbufferARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglDestroyPbufferARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDestroyPbufferARB (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryPbufferARB (HPBUFFERARB hPbuffer, int  iAttribute, int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_pbuffer - wglQueryPbufferARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglQueryPbufferARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryPbufferARB (hPbuffer, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetPixelFormatAttribivARB (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_pixel_format - wglGetPixelFormatAttribivARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] && wglConfig.m_wglGetPixelFormatAttribivARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribivARB (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetPixelFormatAttribfvARB (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_pixel_format - wglGetPixelFormatAttribfvARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] && wglConfig.m_wglGetPixelFormatAttribfvARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribfvARB (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglChoosePixelFormatARB (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_pixel_format - wglChoosePixelFormatARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] && wglConfig.m_wglChoosePixelFormatARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglChoosePixelFormatARB (hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBindTexImageARB (HPBUFFERARB hPbuffer, int  iBuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_render_texture - wglBindTexImageARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] && wglConfig.m_wglBindTexImageARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindTexImageARB (hPbuffer, iBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int  iBuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_render_texture - wglReleaseTexImageARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] && wglConfig.m_wglReleaseTexImageARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseTexImageARB (hPbuffer, iBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int * piAttribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_ARB_render_texture - wglSetPbufferAttribARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] && wglConfig.m_wglSetPbufferAttribARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetPbufferAttribARB (hPbuffer, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_wgl_wglCreateDisplayColorTableEXT (GLushort id)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  GLboolean result = ((GLboolean)0);
  // WGL_EXT_display_color_table - wglCreateDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglCreateDisplayColorTableEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateDisplayColorTableEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_wgl_wglLoadDisplayColorTableEXT (const GLushort * table, GLuint length)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  GLboolean result = ((GLboolean)0);
  // WGL_EXT_display_color_table - wglLoadDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglLoadDisplayColorTableEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglLoadDisplayColorTableEXT (table, length);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLboolean _glew_wgl_wglBindDisplayColorTableEXT (GLushort id)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  GLboolean result = ((GLboolean)0);
  // WGL_EXT_display_color_table - wglBindDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglBindDisplayColorTableEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindDisplayColorTableEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VOID _glew_wgl_wglDestroyDisplayColorTableEXT (GLushort id)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  // WGL_EXT_display_color_table - wglDestroyDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglDestroyDisplayColorTableEXT)
  {
    prototypeCalled = true;
    wglConfig.m_wglDestroyDisplayColorTableEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_wgl_wglGetExtensionsStringEXT ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  const char * result = ((const char *)0);
  // WGL_EXT_extensions_string - wglGetExtensionsStringEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_extensions_string] && wglConfig.m_wglGetExtensionsStringEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetExtensionsStringEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_make_current_read - wglMakeContextCurrentEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read] && wglConfig.m_wglMakeContextCurrentEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglMakeContextCurrentEXT (hDrawDC, hReadDC, hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HDC _glew_wgl_wglGetCurrentReadDCEXT ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HDC result = ((HDC)0);
  // WGL_EXT_make_current_read - wglGetCurrentReadDCEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read] && wglConfig.m_wglGetCurrentReadDCEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetCurrentReadDCEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HPBUFFEREXT _glew_wgl_wglCreatePbufferEXT (HDC hDC, int  iPixelFormat, int  iWidth, int  iHeight, const int * piAttribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HPBUFFEREXT result = ((HPBUFFEREXT)0);
  // WGL_EXT_pbuffer - wglCreatePbufferEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglCreatePbufferEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreatePbufferEXT (hDC, iPixelFormat, iWidth, iHeight, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HDC _glew_wgl_wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HDC result = ((HDC)0);
  // WGL_EXT_pbuffer - wglGetPbufferDCEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglGetPbufferDCEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPbufferDCEXT (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int _glew_wgl_wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  int result = ((int)0);
  // WGL_EXT_pbuffer - wglReleasePbufferDCEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglReleasePbufferDCEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleasePbufferDCEXT (hPbuffer, hDC);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_pbuffer - wglDestroyPbufferEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglDestroyPbufferEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDestroyPbufferEXT (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int  iAttribute, int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_pbuffer - wglQueryPbufferEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglQueryPbufferEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryPbufferEXT (hPbuffer, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetPixelFormatAttribivEXT (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_pixel_format - wglGetPixelFormatAttribivEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] && wglConfig.m_wglGetPixelFormatAttribivEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribivEXT (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetPixelFormatAttribfvEXT (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_pixel_format - wglGetPixelFormatAttribfvEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] && wglConfig.m_wglGetPixelFormatAttribfvEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribfvEXT (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglChoosePixelFormatEXT (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_pixel_format - wglChoosePixelFormatEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] && wglConfig.m_wglChoosePixelFormatEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglChoosePixelFormatEXT (hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSwapIntervalEXT (int  interval)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_EXT_swap_control - wglSwapIntervalEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_swap_control] && wglConfig.m_wglSwapIntervalEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSwapIntervalEXT (interval);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int _glew_wgl_wglGetSwapIntervalEXT ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  int result = ((int)0);
  // WGL_EXT_swap_control - wglGetSwapIntervalEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_swap_control] && wglConfig.m_wglGetSwapIntervalEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetSwapIntervalEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetDigitalVideoParametersI3D (HDC hDC, int  iAttribute, int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_digital_video_control - wglGetDigitalVideoParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control] && wglConfig.m_wglGetDigitalVideoParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetDigitalVideoParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSetDigitalVideoParametersI3D (HDC hDC, int  iAttribute, const int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_digital_video_control - wglSetDigitalVideoParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control] && wglConfig.m_wglSetDigitalVideoParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetDigitalVideoParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetGammaTableParametersI3D (HDC hDC, int  iAttribute, int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_gamma - wglGetGammaTableParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglGetGammaTableParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGammaTableParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSetGammaTableParametersI3D (HDC hDC, int  iAttribute, const int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_gamma - wglSetGammaTableParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglSetGammaTableParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetGammaTableParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetGammaTableI3D (HDC hDC, int  iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_gamma - wglGetGammaTableI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglGetGammaTableI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGammaTableI3D (hDC, iEntries, puRed, puGreen, puBlue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSetGammaTableI3D (HDC hDC, int  iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_gamma - wglSetGammaTableI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglSetGammaTableI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetGammaTableI3D (hDC, iEntries, puRed, puGreen, puBlue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglEnableGenlockI3D (HDC hDC)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglEnableGenlockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglEnableGenlockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnableGenlockI3D (hDC);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDisableGenlockI3D (HDC hDC)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglDisableGenlockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglDisableGenlockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDisableGenlockI3D (hDC);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglIsEnabledGenlockI3D (HDC hDC, BOOL * pFlag)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglIsEnabledGenlockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglIsEnabledGenlockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglIsEnabledGenlockI3D (hDC, pFlag);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGenlockSourceI3D (HDC hDC, UINT uSource)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGenlockSourceI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSourceI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSourceI3D (hDC, uSource);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetGenlockSourceI3D (HDC hDC, UINT * uSource)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGetGenlockSourceI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSourceI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSourceI3D (hDC, uSource);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGenlockSourceEdgeI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSourceEdgeI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSourceEdgeI3D (hDC, uEdge);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetGenlockSourceEdgeI3D (HDC hDC, UINT * uEdge)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGetGenlockSourceEdgeI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSourceEdgeI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSourceEdgeI3D (hDC, uEdge);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGenlockSampleRateI3D (HDC hDC, UINT uRate)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGenlockSampleRateI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSampleRateI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSampleRateI3D (hDC, uRate);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetGenlockSampleRateI3D (HDC hDC, UINT * uRate)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGetGenlockSampleRateI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSampleRateI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSampleRateI3D (hDC, uRate);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGenlockSourceDelayI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSourceDelayI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSourceDelayI3D (hDC, uDelay);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetGenlockSourceDelayI3D (HDC hDC, UINT * uDelay)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglGetGenlockSourceDelayI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSourceDelayI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSourceDelayI3D (hDC, uDelay);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_genlock - wglQueryGenlockMaxSourceDelayI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglQueryGenlockMaxSourceDelayI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryGenlockMaxSourceDelayI3D (hDC, uMaxLineDelay, uMaxPixelDelay);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

LPVOID _glew_wgl_wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  LPVOID result = ((LPVOID)0);
  // WGL_I3D_image_buffer - wglCreateImageBufferI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglCreateImageBufferI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateImageBufferI3D (hDC, dwSize, uFlags);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_image_buffer - wglDestroyImageBufferI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglDestroyImageBufferI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDestroyImageBufferI3D (hDC, pAddress);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_image_buffer - wglAssociateImageBufferEventsI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglAssociateImageBufferEventsI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglAssociateImageBufferEventsI3D (hDC, pEvent, pAddress, pSize, count);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID * pAddress, UINT count)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_image_buffer - wglReleaseImageBufferEventsI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglReleaseImageBufferEventsI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseImageBufferEventsI3D (hDC, pAddress, count);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglEnableFrameLockI3D ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_lock - wglEnableFrameLockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglEnableFrameLockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnableFrameLockI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDisableFrameLockI3D ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_lock - wglDisableFrameLockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglDisableFrameLockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDisableFrameLockI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglIsEnabledFrameLockI3D (BOOL * pFlag)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_lock - wglIsEnabledFrameLockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglIsEnabledFrameLockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglIsEnabledFrameLockI3D (pFlag);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryFrameLockMasterI3D (BOOL * pFlag)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_lock - wglQueryFrameLockMasterI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglQueryFrameLockMasterI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryFrameLockMasterI3D (pFlag);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetFrameUsageI3D (float * pUsage)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_usage - wglGetFrameUsageI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglGetFrameUsageI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetFrameUsageI3D (pUsage);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBeginFrameTrackingI3D ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_usage - wglBeginFrameTrackingI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglBeginFrameTrackingI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBeginFrameTrackingI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglEndFrameTrackingI3D ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_usage - wglEndFrameTrackingI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglEndFrameTrackingI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEndFrameTrackingI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryFrameTrackingI3D (DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_I3D_swap_frame_usage - wglQueryFrameTrackingI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglQueryFrameTrackingI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryFrameTrackingI3D (pFrameCount, pMissedFrames, pLastMissedUsage);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_copy_image - wglCopyImageSubDataNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_copy_image] && wglConfig.m_wglCopyImageSubDataNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCopyImageSubDataNV (hSrcRC, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, hDstRC, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_delay_before_swap - wglDelayBeforeSwapNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_delay_before_swap] && wglConfig.m_wglDelayBeforeSwapNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDelayBeforeSwapNV (hDC, seconds);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDXSetResourceShareHandleNV (void * dxObject, HANDLE shareHandle)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_DX_interop - wglDXSetResourceShareHandleNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXSetResourceShareHandleNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXSetResourceShareHandleNV (dxObject, shareHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HANDLE _glew_wgl_wglDXOpenDeviceNV (void * dxDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HANDLE result = ((HANDLE)0);
  // WGL_NV_DX_interop - wglDXOpenDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXOpenDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXOpenDeviceNV (dxDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDXCloseDeviceNV (HANDLE hDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_DX_interop - wglDXCloseDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXCloseDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXCloseDeviceNV (hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HANDLE _glew_wgl_wglDXRegisterObjectNV (HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HANDLE result = ((HANDLE)0);
  // WGL_NV_DX_interop - wglDXRegisterObjectNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXRegisterObjectNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXRegisterObjectNV (hDevice, dxObject, name, type, access);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_DX_interop - wglDXUnregisterObjectNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXUnregisterObjectNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXUnregisterObjectNV (hDevice, hObject);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDXObjectAccessNV (HANDLE hObject, GLenum access)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_DX_interop - wglDXObjectAccessNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXObjectAccessNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXObjectAccessNV (hObject, access);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_DX_interop - wglDXLockObjectsNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXLockObjectsNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXLockObjectsNV (hDevice, count, hObjects);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_DX_interop - wglDXUnlockObjectsNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXUnlockObjectsNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXUnlockObjectsNV (hDevice, count, hObjects);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglEnumGpusNV (UINT iGpuIndex, HGPUNV * phGpu)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_gpu_affinity - wglEnumGpusNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglEnumGpusNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumGpusNV (iGpuIndex, phGpu);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_gpu_affinity - wglEnumGpuDevicesNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglEnumGpuDevicesNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumGpuDevicesNV (hGpu, iDeviceIndex, lpGpuDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HDC _glew_wgl_wglCreateAffinityDCNV (const HGPUNV * phGpuList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HDC result = ((HDC)0);
  // WGL_NV_gpu_affinity - wglCreateAffinityDCNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglCreateAffinityDCNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateAffinityDCNV (phGpuList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_gpu_affinity - wglEnumGpusFromAffinityDCNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglEnumGpusFromAffinityDCNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumGpusFromAffinityDCNV (hAffinityDC, iGpuIndex, hGpu);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglDeleteDCNV (HDC hdc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_gpu_affinity - wglDeleteDCNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglDeleteDCNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDeleteDCNV (hdc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int _glew_wgl_wglEnumerateVideoDevicesNV (HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  int result = ((int)0);
  // WGL_NV_present_video - wglEnumerateVideoDevicesNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_present_video] && wglConfig.m_wglEnumerateVideoDevicesNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumerateVideoDevicesNV (hDC, phDeviceList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBindVideoDeviceNV (HDC hDC, unsigned int  uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_present_video - wglBindVideoDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_present_video] && wglConfig.m_wglBindVideoDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindVideoDeviceNV (hDC, uVideoSlot, hVideoDevice, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryCurrentContextNV (int  iAttribute, int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_present_video - wglQueryCurrentContextNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_present_video] && wglConfig.m_wglQueryCurrentContextNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryCurrentContextNV (iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglJoinSwapGroupNV (HDC hDC, GLuint group)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_swap_group - wglJoinSwapGroupNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglJoinSwapGroupNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglJoinSwapGroupNV (hDC, group);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBindSwapBarrierNV (GLuint group, GLuint barrier)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_swap_group - wglBindSwapBarrierNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglBindSwapBarrierNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindSwapBarrierNV (group, barrier);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQuerySwapGroupNV (HDC hDC, GLuint * group, GLuint * barrier)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_swap_group - wglQuerySwapGroupNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglQuerySwapGroupNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQuerySwapGroupNV (hDC, group, barrier);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryMaxSwapGroupsNV (HDC hDC, GLuint * maxGroups, GLuint * maxBarriers)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_swap_group - wglQueryMaxSwapGroupsNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglQueryMaxSwapGroupsNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryMaxSwapGroupsNV (hDC, maxGroups, maxBarriers);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryFrameCountNV (HDC hDC, GLuint * count)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_swap_group - wglQueryFrameCountNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglQueryFrameCountNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryFrameCountNV (hDC, count);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglResetFrameCountNV (HDC hDC)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_swap_group - wglResetFrameCountNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglResetFrameCountNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglResetFrameCountNV (hDC);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_capture - wglBindVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglBindVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindVideoCaptureDeviceNV (uVideoSlot, hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

UINT _glew_wgl_wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  UINT result = ((UINT)0);
  // WGL_NV_video_capture - wglEnumerateVideoCaptureDevicesNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglEnumerateVideoCaptureDevicesNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumerateVideoCaptureDevicesNV (hDc, phDeviceList);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_capture - wglLockVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglLockVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglLockVideoCaptureDeviceNV (hDc, hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int  iAttribute, int * piValue)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_capture - wglQueryVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglQueryVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryVideoCaptureDeviceNV (hDc, hDevice, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_capture - wglReleaseVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglReleaseVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseVideoCaptureDeviceNV (hDc, hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetVideoDeviceNV (HDC hDC, int  numDevices, HPVIDEODEV * hVideoDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_output - wglGetVideoDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglGetVideoDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetVideoDeviceNV (hDC, numDevices, hVideoDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_output - wglReleaseVideoDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglReleaseVideoDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseVideoDeviceNV (hVideoDevice);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int  iVideoBuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_output - wglBindVideoImageNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglBindVideoImageNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindVideoImageNV (hVideoDevice, hPbuffer, iVideoBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int  iVideoBuffer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_output - wglReleaseVideoImageNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglReleaseVideoImageNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseVideoImageNV (hPbuffer, iVideoBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int  iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_output - wglSendPbufferToVideoNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglSendPbufferToVideoNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSendPbufferToVideoNV (hPbuffer, iBufferType, pulCounterPbuffer, bBlock);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_NV_video_output - wglGetVideoInfoNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglGetVideoInfoNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetVideoInfoNV (hpVideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void * _glew_wgl_wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  void * result = ((void *)0);
  // WGL_NV_vertex_array_range - wglAllocateMemoryNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range] && wglConfig.m_wglAllocateMemoryNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglAllocateMemoryNV (size, readfreq, writefreq, priority);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_wgl_wglFreeMemoryNV (void * pointer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  // WGL_NV_vertex_array_range - wglFreeMemoryNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range] && wglConfig.m_wglFreeMemoryNV)
  {
    prototypeCalled = true;
    wglConfig.m_wglFreeMemoryNV (pointer);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetSyncValuesOML (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_OML_sync_control - wglGetSyncValuesOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglGetSyncValuesOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetSyncValuesOML (hdc, ust, msc, sbc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetMscRateOML (HDC hdc, INT32 * numerator, INT32 * denominator)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_OML_sync_control - wglGetMscRateOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglGetMscRateOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetMscRateOML (hdc, numerator, denominator);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

INT64 _glew_wgl_wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  INT64 result = ((INT64)0);
  // WGL_OML_sync_control - wglSwapBuffersMscOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglSwapBuffersMscOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSwapBuffersMscOML (hdc, target_msc, divisor, remainder);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

INT64 _glew_wgl_wglSwapLayerBuffersMscOML (HDC hdc, int  fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  INT64 result = ((INT64)0);
  // WGL_OML_sync_control - wglSwapLayerBuffersMscOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglSwapLayerBuffersMscOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSwapLayerBuffersMscOML (hdc, fuPlanes, target_msc, divisor, remainder);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_OML_sync_control - wglWaitForMscOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglWaitForMscOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglWaitForMscOML (hdc, target_msc, divisor, remainder, ust, msc, sbc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
  // WGL_OML_sync_control - wglWaitForSbcOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglWaitForSbcOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglWaitForSbcOML (hdc, target_sbc, ust, msc, sbc);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::IsSupported (GLEW_WGL_FeatureSet feature)
{
  return glew::wgl::IsSupported (feature);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::wgl::s_initialised = false;

glew::wgl::DeviceConfig glew::wgl::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::wgl::Initialise ()
{
  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  // 
  // Determine current driver's feature reporting.
  // 

  s_deviceConfig.m_featureSupported [GLEW_WGL_VERSION_1_0] = true;

  // 
  // Evaluate extension support.
  // 


  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *wglExtensions = NULL;

  PFNWGLGETEXTENSIONSSTRINGARBPROC _wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) wglGetProcAddress ("wglGetExtensionsStringARB");

  PFNWGLGETEXTENSIONSSTRINGEXTPROC _wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) wglGetProcAddress ("wglGetExtensionsStringEXT");

  if (_wglGetExtensionsStringEXT != NULL)
  {
    wglExtensions = (const unsigned char*) _wglGetExtensionsStringEXT ();
  }
  else if (_wglGetExtensionsStringARB != NULL)
  {
    wglExtensions = (const unsigned char*) _wglGetExtensionsStringARB (wglGetCurrentDC());
  }

  if (!wglExtensions)
  {
    wglExtensions = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t wglExtensionsLen = strlen ((const char *) wglExtensions);

  if (wglExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) wglExtensions;

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

  s_deviceConfig.m_featureSupported [GLEW_WGL_3DFX_multisample] = (supportedExtensions.find ("WGL_3DFX_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_3DL_stereo_control] = (supportedExtensions.find ("WGL_3DL_stereo_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] = (supportedExtensions.find ("WGL_AMD_gpu_association") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] = (supportedExtensions.find ("WGL_ARB_buffer_region") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_context_flush_control] = (supportedExtensions.find ("WGL_ARB_context_flush_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context] = (supportedExtensions.find ("WGL_ARB_create_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context_profile] = (supportedExtensions.find ("WGL_ARB_create_context_profile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context_robustness] = (supportedExtensions.find ("WGL_ARB_create_context_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_extensions_string] = (supportedExtensions.find ("WGL_ARB_extensions_string") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_framebuffer_sRGB] = (supportedExtensions.find ("WGL_ARB_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read] = (supportedExtensions.find ("WGL_ARB_make_current_read") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_multisample] = (supportedExtensions.find ("WGL_ARB_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] = (supportedExtensions.find ("WGL_ARB_pbuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] = (supportedExtensions.find ("WGL_ARB_pixel_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format_float] = (supportedExtensions.find ("WGL_ARB_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] = (supportedExtensions.find ("WGL_ARB_render_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_robustness_application_isolation] = (supportedExtensions.find ("WGL_ARB_robustness_application_isolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_robustness_share_group_isolation] = (supportedExtensions.find ("WGL_ARB_robustness_share_group_isolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ATI_pixel_format_float] = (supportedExtensions.find ("WGL_ATI_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_create_context_es_profile] = (supportedExtensions.find ("WGL_EXT_create_context_es_profile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_create_context_es2_profile] = (supportedExtensions.find ("WGL_EXT_create_context_es2_profile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_depth_float] = (supportedExtensions.find ("WGL_EXT_depth_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] = (supportedExtensions.find ("WGL_EXT_display_color_table") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_extensions_string] = (supportedExtensions.find ("WGL_EXT_extensions_string") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_framebuffer_sRGB] = (supportedExtensions.find ("WGL_EXT_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read] = (supportedExtensions.find ("WGL_EXT_make_current_read") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_multisample] = (supportedExtensions.find ("WGL_EXT_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] = (supportedExtensions.find ("WGL_EXT_pbuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] = (supportedExtensions.find ("WGL_EXT_pixel_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format_packed_float] = (supportedExtensions.find ("WGL_EXT_pixel_format_packed_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_swap_control] = (supportedExtensions.find ("WGL_EXT_swap_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_swap_control_tear] = (supportedExtensions.find ("WGL_EXT_swap_control_tear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control] = (supportedExtensions.find ("WGL_I3D_digital_video_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_gamma] = (supportedExtensions.find ("WGL_I3D_gamma") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_genlock] = (supportedExtensions.find ("WGL_I3D_genlock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] = (supportedExtensions.find ("WGL_I3D_image_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] = (supportedExtensions.find ("WGL_I3D_swap_frame_lock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] = (supportedExtensions.find ("WGL_I3D_swap_frame_usage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_copy_image] = (supportedExtensions.find ("WGL_NV_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_delay_before_swap] = (supportedExtensions.find ("WGL_NV_delay_before_swap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] = (supportedExtensions.find ("WGL_NV_DX_interop") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_DX_interop2] = (supportedExtensions.find ("WGL_NV_DX_interop2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_float_buffer] = (supportedExtensions.find ("WGL_NV_float_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] = (supportedExtensions.find ("WGL_NV_gpu_affinity") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_multisample_coverage] = (supportedExtensions.find ("WGL_NV_multisample_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_present_video] = (supportedExtensions.find ("WGL_NV_present_video") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_render_depth_texture] = (supportedExtensions.find ("WGL_NV_render_depth_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_render_texture_rectangle] = (supportedExtensions.find ("WGL_NV_render_texture_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_swap_group] = (supportedExtensions.find ("WGL_NV_swap_group") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_capture] = (supportedExtensions.find ("WGL_NV_video_capture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_output] = (supportedExtensions.find ("WGL_NV_video_output") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range] = (supportedExtensions.find ("WGL_NV_vertex_array_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_OML_sync_control] = (supportedExtensions.find ("WGL_OML_sync_control") != supportedExtensions.end ());

  // WGL_3DL_stereo_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_3DL_stereo_control])
  {
    s_deviceConfig.m_wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC) glewGetProcAddress ("wglSetStereoEmitterState3DL");
  }

  // WGL_AMD_gpu_association
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association])
  {
    s_deviceConfig.m_wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC) glewGetProcAddress ("wglGetGPUIDsAMD");
    s_deviceConfig.m_wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC) glewGetProcAddress ("wglGetGPUInfoAMD");
    s_deviceConfig.m_wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC) glewGetProcAddress ("wglGetContextGPUIDAMD");
    s_deviceConfig.m_wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) glewGetProcAddress ("wglCreateAssociatedContextAMD");
    s_deviceConfig.m_wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) glewGetProcAddress ("wglCreateAssociatedContextAttribsAMD");
    s_deviceConfig.m_wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) glewGetProcAddress ("wglDeleteAssociatedContextAMD");
    s_deviceConfig.m_wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) glewGetProcAddress ("wglMakeAssociatedContextCurrentAMD");
    s_deviceConfig.m_wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) glewGetProcAddress ("wglGetCurrentAssociatedContextAMD");
    s_deviceConfig.m_wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) glewGetProcAddress ("wglBlitContextFramebufferAMD");
  }

  // WGL_ARB_buffer_region
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region])
  {
    s_deviceConfig.m_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC) glewGetProcAddress ("wglCreateBufferRegionARB");
    s_deviceConfig.m_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC) glewGetProcAddress ("wglDeleteBufferRegionARB");
    s_deviceConfig.m_wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC) glewGetProcAddress ("wglSaveBufferRegionARB");
    s_deviceConfig.m_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC) glewGetProcAddress ("wglRestoreBufferRegionARB");
  }

  // WGL_ARB_create_context
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context])
  {
    s_deviceConfig.m_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC) glewGetProcAddress ("wglCreateContextAttribsARB");
  }

  // WGL_ARB_extensions_string
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_extensions_string])
  {
    s_deviceConfig.m_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) glewGetProcAddress ("wglGetExtensionsStringARB");
  }

  // WGL_ARB_make_current_read
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read])
  {
    s_deviceConfig.m_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC) glewGetProcAddress ("wglMakeContextCurrentARB");
    s_deviceConfig.m_wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC) glewGetProcAddress ("wglGetCurrentReadDCARB");
  }

  // WGL_ARB_pbuffer
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer])
  {
    s_deviceConfig.m_wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC) glewGetProcAddress ("wglCreatePbufferARB");
    s_deviceConfig.m_wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC) glewGetProcAddress ("wglGetPbufferDCARB");
    s_deviceConfig.m_wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC) glewGetProcAddress ("wglReleasePbufferDCARB");
    s_deviceConfig.m_wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC) glewGetProcAddress ("wglDestroyPbufferARB");
    s_deviceConfig.m_wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC) glewGetProcAddress ("wglQueryPbufferARB");
  }

  // WGL_ARB_pixel_format
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format])
  {
    s_deviceConfig.m_wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC) glewGetProcAddress ("wglGetPixelFormatAttribivARB");
    s_deviceConfig.m_wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC) glewGetProcAddress ("wglGetPixelFormatAttribfvARB");
    s_deviceConfig.m_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC) glewGetProcAddress ("wglChoosePixelFormatARB");
  }

  // WGL_ARB_render_texture
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_render_texture])
  {
    s_deviceConfig.m_wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC) glewGetProcAddress ("wglBindTexImageARB");
    s_deviceConfig.m_wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC) glewGetProcAddress ("wglReleaseTexImageARB");
    s_deviceConfig.m_wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC) glewGetProcAddress ("wglSetPbufferAttribARB");
  }

  // WGL_EXT_display_color_table
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table])
  {
    s_deviceConfig.m_wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglCreateDisplayColorTableEXT");
    s_deviceConfig.m_wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglLoadDisplayColorTableEXT");
    s_deviceConfig.m_wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglBindDisplayColorTableEXT");
    s_deviceConfig.m_wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglDestroyDisplayColorTableEXT");
  }

  // WGL_EXT_extensions_string
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_extensions_string])
  {
    s_deviceConfig.m_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) glewGetProcAddress ("wglGetExtensionsStringEXT");
  }

  // WGL_EXT_make_current_read
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read])
  {
    s_deviceConfig.m_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC) glewGetProcAddress ("wglMakeContextCurrentEXT");
    s_deviceConfig.m_wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC) glewGetProcAddress ("wglGetCurrentReadDCEXT");
  }

  // WGL_EXT_pbuffer
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer])
  {
    s_deviceConfig.m_wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC) glewGetProcAddress ("wglCreatePbufferEXT");
    s_deviceConfig.m_wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC) glewGetProcAddress ("wglGetPbufferDCEXT");
    s_deviceConfig.m_wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC) glewGetProcAddress ("wglReleasePbufferDCEXT");
    s_deviceConfig.m_wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC) glewGetProcAddress ("wglDestroyPbufferEXT");
    s_deviceConfig.m_wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC) glewGetProcAddress ("wglQueryPbufferEXT");
  }

  // WGL_EXT_pixel_format
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format])
  {
    s_deviceConfig.m_wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) glewGetProcAddress ("wglGetPixelFormatAttribivEXT");
    s_deviceConfig.m_wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) glewGetProcAddress ("wglGetPixelFormatAttribfvEXT");
    s_deviceConfig.m_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC) glewGetProcAddress ("wglChoosePixelFormatEXT");
  }

  // WGL_EXT_swap_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_swap_control])
  {
    s_deviceConfig.m_wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC) glewGetProcAddress ("wglSwapIntervalEXT");
    s_deviceConfig.m_wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC) glewGetProcAddress ("wglGetSwapIntervalEXT");
  }

  // WGL_I3D_digital_video_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control])
  {
    s_deviceConfig.m_wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) glewGetProcAddress ("wglGetDigitalVideoParametersI3D");
    s_deviceConfig.m_wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) glewGetProcAddress ("wglSetDigitalVideoParametersI3D");
  }

  // WGL_I3D_gamma
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_gamma])
  {
    s_deviceConfig.m_wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) glewGetProcAddress ("wglGetGammaTableParametersI3D");
    s_deviceConfig.m_wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) glewGetProcAddress ("wglSetGammaTableParametersI3D");
    s_deviceConfig.m_wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC) glewGetProcAddress ("wglGetGammaTableI3D");
    s_deviceConfig.m_wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC) glewGetProcAddress ("wglSetGammaTableI3D");
  }

  // WGL_I3D_genlock
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_genlock])
  {
    s_deviceConfig.m_wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC) glewGetProcAddress ("wglEnableGenlockI3D");
    s_deviceConfig.m_wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC) glewGetProcAddress ("wglDisableGenlockI3D");
    s_deviceConfig.m_wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC) glewGetProcAddress ("wglIsEnabledGenlockI3D");
    s_deviceConfig.m_wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC) glewGetProcAddress ("wglGenlockSourceI3D");
    s_deviceConfig.m_wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC) glewGetProcAddress ("wglGetGenlockSourceI3D");
    s_deviceConfig.m_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC) glewGetProcAddress ("wglGenlockSourceEdgeI3D");
    s_deviceConfig.m_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) glewGetProcAddress ("wglGetGenlockSourceEdgeI3D");
    s_deviceConfig.m_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC) glewGetProcAddress ("wglGenlockSampleRateI3D");
    s_deviceConfig.m_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC) glewGetProcAddress ("wglGetGenlockSampleRateI3D");
    s_deviceConfig.m_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC) glewGetProcAddress ("wglGenlockSourceDelayI3D");
    s_deviceConfig.m_wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) glewGetProcAddress ("wglGetGenlockSourceDelayI3D");
    s_deviceConfig.m_wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) glewGetProcAddress ("wglQueryGenlockMaxSourceDelayI3D");
  }

  // WGL_I3D_image_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer])
  {
    s_deviceConfig.m_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC) glewGetProcAddress ("wglCreateImageBufferI3D");
    s_deviceConfig.m_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC) glewGetProcAddress ("wglDestroyImageBufferI3D");
    s_deviceConfig.m_wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) glewGetProcAddress ("wglAssociateImageBufferEventsI3D");
    s_deviceConfig.m_wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) glewGetProcAddress ("wglReleaseImageBufferEventsI3D");
  }

  // WGL_I3D_swap_frame_lock
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock])
  {
    s_deviceConfig.m_wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC) glewGetProcAddress ("wglEnableFrameLockI3D");
    s_deviceConfig.m_wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC) glewGetProcAddress ("wglDisableFrameLockI3D");
    s_deviceConfig.m_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC) glewGetProcAddress ("wglIsEnabledFrameLockI3D");
    s_deviceConfig.m_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC) glewGetProcAddress ("wglQueryFrameLockMasterI3D");
  }

  // WGL_I3D_swap_frame_usage
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage])
  {
    s_deviceConfig.m_wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC) glewGetProcAddress ("wglGetFrameUsageI3D");
    s_deviceConfig.m_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC) glewGetProcAddress ("wglBeginFrameTrackingI3D");
    s_deviceConfig.m_wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC) glewGetProcAddress ("wglEndFrameTrackingI3D");
    s_deviceConfig.m_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC) glewGetProcAddress ("wglQueryFrameTrackingI3D");
  }

  // WGL_NV_copy_image
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_copy_image])
  {
    s_deviceConfig.m_wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC) glewGetProcAddress ("wglCopyImageSubDataNV");
  }

  // WGL_NV_delay_before_swap
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_delay_before_swap])
  {
    s_deviceConfig.m_wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC) glewGetProcAddress ("wglDelayBeforeSwapNV");
  }

  // WGL_NV_DX_interop
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_DX_interop])
  {
    s_deviceConfig.m_wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC) glewGetProcAddress ("wglDXSetResourceShareHandleNV");
    s_deviceConfig.m_wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC) glewGetProcAddress ("wglDXOpenDeviceNV");
    s_deviceConfig.m_wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC) glewGetProcAddress ("wglDXCloseDeviceNV");
    s_deviceConfig.m_wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC) glewGetProcAddress ("wglDXRegisterObjectNV");
    s_deviceConfig.m_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC) glewGetProcAddress ("wglDXUnregisterObjectNV");
    s_deviceConfig.m_wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC) glewGetProcAddress ("wglDXObjectAccessNV");
    s_deviceConfig.m_wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC) glewGetProcAddress ("wglDXLockObjectsNV");
    s_deviceConfig.m_wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC) glewGetProcAddress ("wglDXUnlockObjectsNV");
  }

  // WGL_NV_gpu_affinity
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity])
  {
    s_deviceConfig.m_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC) glewGetProcAddress ("wglEnumGpusNV");
    s_deviceConfig.m_wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC) glewGetProcAddress ("wglEnumGpuDevicesNV");
    s_deviceConfig.m_wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC) glewGetProcAddress ("wglCreateAffinityDCNV");
    s_deviceConfig.m_wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) glewGetProcAddress ("wglEnumGpusFromAffinityDCNV");
    s_deviceConfig.m_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC) glewGetProcAddress ("wglDeleteDCNV");
  }

  // WGL_NV_present_video
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_present_video])
  {
    s_deviceConfig.m_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC) glewGetProcAddress ("wglEnumerateVideoDevicesNV");
    s_deviceConfig.m_wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC) glewGetProcAddress ("wglBindVideoDeviceNV");
    s_deviceConfig.m_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC) glewGetProcAddress ("wglQueryCurrentContextNV");
  }

  // WGL_NV_swap_group
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_swap_group])
  {
    s_deviceConfig.m_wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC) glewGetProcAddress ("wglJoinSwapGroupNV");
    s_deviceConfig.m_wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC) glewGetProcAddress ("wglBindSwapBarrierNV");
    s_deviceConfig.m_wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC) glewGetProcAddress ("wglQuerySwapGroupNV");
    s_deviceConfig.m_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC) glewGetProcAddress ("wglQueryMaxSwapGroupsNV");
    s_deviceConfig.m_wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC) glewGetProcAddress ("wglQueryFrameCountNV");
    s_deviceConfig.m_wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC) glewGetProcAddress ("wglResetFrameCountNV");
  }

  // WGL_NV_video_capture
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_capture])
  {
    s_deviceConfig.m_wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglBindVideoCaptureDeviceNV");
    s_deviceConfig.m_wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) glewGetProcAddress ("wglEnumerateVideoCaptureDevicesNV");
    s_deviceConfig.m_wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglLockVideoCaptureDeviceNV");
    s_deviceConfig.m_wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglQueryVideoCaptureDeviceNV");
    s_deviceConfig.m_wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglReleaseVideoCaptureDeviceNV");
  }

  // WGL_NV_video_output
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_output])
  {
    s_deviceConfig.m_wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC) glewGetProcAddress ("wglGetVideoDeviceNV");
    s_deviceConfig.m_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC) glewGetProcAddress ("wglReleaseVideoDeviceNV");
    s_deviceConfig.m_wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC) glewGetProcAddress ("wglBindVideoImageNV");
    s_deviceConfig.m_wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC) glewGetProcAddress ("wglReleaseVideoImageNV");
    s_deviceConfig.m_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC) glewGetProcAddress ("wglSendPbufferToVideoNV");
    s_deviceConfig.m_wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC) glewGetProcAddress ("wglGetVideoInfoNV");
  }

  // WGL_NV_vertex_array_range
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range])
  {
    s_deviceConfig.m_wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC) glewGetProcAddress ("wglAllocateMemoryNV");
    s_deviceConfig.m_wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC) glewGetProcAddress ("wglFreeMemoryNV");
  }

  // WGL_OML_sync_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_OML_sync_control])
  {
    s_deviceConfig.m_wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC) glewGetProcAddress ("wglGetSyncValuesOML");
    s_deviceConfig.m_wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC) glewGetProcAddress ("wglGetMscRateOML");
    s_deviceConfig.m_wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC) glewGetProcAddress ("wglSwapBuffersMscOML");
    s_deviceConfig.m_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) glewGetProcAddress ("wglSwapLayerBuffersMscOML");
    s_deviceConfig.m_wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC) glewGetProcAddress ("wglWaitForMscOML");
    s_deviceConfig.m_wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC) glewGetProcAddress ("wglWaitForSbcOML");
  }

  s_initialised = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::wgl::Deinitialise ()
{
  s_initialised = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
