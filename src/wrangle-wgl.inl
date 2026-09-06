////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSetStereoEmitterState3DL (HDC hDC, UINT uState)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_3DL_stereo_control - wglSetStereoEmitterState3DL
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_3DL_stereo_control] && wglConfig.m_wglSetStereoEmitterState3DL)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetStereoEmitterState3DL (hDC, uState);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglGetGPUIDsAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetGPUIDsAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGPUIDsAMD (maxCount, ids);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

INT _glew_wgl_wglGetGPUInfoAMD (UINT id, INT property, GLenum dataType, UINT size, void * data)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  INT result = ((INT)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglGetGPUInfoAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetGPUInfoAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGPUInfoAMD (id, property, dataType, size, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglGetContextGPUIDAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetContextGPUIDAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetContextGPUIDAMD (hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglCreateAssociatedContextAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglCreateAssociatedContextAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateAssociatedContextAMD (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglCreateAssociatedContextAttribsAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglCreateAssociatedContextAttribsAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateAssociatedContextAttribsAMD (id, hShareContext, attribList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglDeleteAssociatedContextAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglDeleteAssociatedContextAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDeleteAssociatedContextAMD (hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglMakeAssociatedContextCurrentAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglMakeAssociatedContextCurrentAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglMakeAssociatedContextCurrentAMD (hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglGetCurrentAssociatedContextAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglGetCurrentAssociatedContextAMD)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetCurrentAssociatedContextAMD ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VOID _glew_wgl_wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_AMD_gpu_association - wglBlitContextFramebufferAMD
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] && wglConfig.m_wglBlitContextFramebufferAMD)
  {
    prototypeCalled = true;
    wglConfig.m_wglBlitContextFramebufferAMD (dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

HANDLE _glew_wgl_wglCreateBufferRegionARB (HDC hDC, int  iLayerPlane, UINT uType)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  HANDLE result = ((HANDLE)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_buffer_region - wglCreateBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglCreateBufferRegionARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateBufferRegionARB (hDC, iLayerPlane, uType);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VOID _glew_wgl_wglDeleteBufferRegionARB (HANDLE hRegion)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_buffer_region - wglDeleteBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglDeleteBufferRegionARB)
  {
    prototypeCalled = true;
    wglConfig.m_wglDeleteBufferRegionARB (hRegion);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglSaveBufferRegionARB (HANDLE hRegion, int  x, int  y, int  width, int  height)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_buffer_region - wglSaveBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglSaveBufferRegionARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSaveBufferRegionARB (hRegion, x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_buffer_region - wglRestoreBufferRegionARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] && wglConfig.m_wglRestoreBufferRegionARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglRestoreBufferRegionARB (hRegion, x, y, width, height, xSrc, ySrc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_create_context - wglCreateContextAttribsARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_create_context] && wglConfig.m_wglCreateContextAttribsARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateContextAttribsARB (hDC, hShareContext, attribList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_extensions_string - wglGetExtensionsStringARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_extensions_string] && wglConfig.m_wglGetExtensionsStringARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetExtensionsStringARB (hdc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_make_current_read - wglMakeContextCurrentARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read] && wglConfig.m_wglMakeContextCurrentARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglMakeContextCurrentARB (hDrawDC, hReadDC, hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_make_current_read - wglGetCurrentReadDCARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read] && wglConfig.m_wglGetCurrentReadDCARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetCurrentReadDCARB ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pbuffer - wglCreatePbufferARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglCreatePbufferARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreatePbufferARB (hDC, iPixelFormat, iWidth, iHeight, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pbuffer - wglGetPbufferDCARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglGetPbufferDCARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPbufferDCARB (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pbuffer - wglReleasePbufferDCARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglReleasePbufferDCARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleasePbufferDCARB (hPbuffer, hDC);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pbuffer - wglDestroyPbufferARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglDestroyPbufferARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDestroyPbufferARB (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pbuffer - wglQueryPbufferARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] && wglConfig.m_wglQueryPbufferARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryPbufferARB (hPbuffer, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pixel_format - wglGetPixelFormatAttribivARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] && wglConfig.m_wglGetPixelFormatAttribivARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribivARB (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pixel_format - wglGetPixelFormatAttribfvARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] && wglConfig.m_wglGetPixelFormatAttribfvARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribfvARB (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_pixel_format - wglChoosePixelFormatARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] && wglConfig.m_wglChoosePixelFormatARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglChoosePixelFormatARB (hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_render_texture - wglBindTexImageARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] && wglConfig.m_wglBindTexImageARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindTexImageARB (hPbuffer, iBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_render_texture - wglReleaseTexImageARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] && wglConfig.m_wglReleaseTexImageARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseTexImageARB (hPbuffer, iBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_ARB_render_texture - wglSetPbufferAttribARB
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] && wglConfig.m_wglSetPbufferAttribARB)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetPbufferAttribARB (hPbuffer, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_display_color_table - wglCreateDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglCreateDisplayColorTableEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateDisplayColorTableEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_display_color_table - wglLoadDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglLoadDisplayColorTableEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglLoadDisplayColorTableEXT (table, length);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_display_color_table - wglBindDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglBindDisplayColorTableEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindDisplayColorTableEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VOID _glew_wgl_wglDestroyDisplayColorTableEXT (GLushort id)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_display_color_table - wglDestroyDisplayColorTableEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] && wglConfig.m_wglDestroyDisplayColorTableEXT)
  {
    prototypeCalled = true;
    wglConfig.m_wglDestroyDisplayColorTableEXT (id);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_wgl_wglGetExtensionsStringEXT ()
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  const char * result = ((const char *)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_extensions_string - wglGetExtensionsStringEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_extensions_string] && wglConfig.m_wglGetExtensionsStringEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetExtensionsStringEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_make_current_read - wglMakeContextCurrentEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read] && wglConfig.m_wglMakeContextCurrentEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglMakeContextCurrentEXT (hDrawDC, hReadDC, hglrc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_make_current_read - wglGetCurrentReadDCEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read] && wglConfig.m_wglGetCurrentReadDCEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetCurrentReadDCEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pbuffer - wglCreatePbufferEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglCreatePbufferEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreatePbufferEXT (hDC, iPixelFormat, iWidth, iHeight, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pbuffer - wglGetPbufferDCEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglGetPbufferDCEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPbufferDCEXT (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pbuffer - wglReleasePbufferDCEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglReleasePbufferDCEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleasePbufferDCEXT (hPbuffer, hDC);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pbuffer - wglDestroyPbufferEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglDestroyPbufferEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDestroyPbufferEXT (hPbuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pbuffer - wglQueryPbufferEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] && wglConfig.m_wglQueryPbufferEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryPbufferEXT (hPbuffer, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pixel_format - wglGetPixelFormatAttribivEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] && wglConfig.m_wglGetPixelFormatAttribivEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribivEXT (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pixel_format - wglGetPixelFormatAttribfvEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] && wglConfig.m_wglGetPixelFormatAttribfvEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetPixelFormatAttribfvEXT (hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_pixel_format - wglChoosePixelFormatEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] && wglConfig.m_wglChoosePixelFormatEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglChoosePixelFormatEXT (hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_swap_control - wglSwapIntervalEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_swap_control] && wglConfig.m_wglSwapIntervalEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSwapIntervalEXT (interval);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_EXT_swap_control - wglGetSwapIntervalEXT
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_EXT_swap_control] && wglConfig.m_wglGetSwapIntervalEXT)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetSwapIntervalEXT ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_digital_video_control - wglGetDigitalVideoParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control] && wglConfig.m_wglGetDigitalVideoParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetDigitalVideoParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_digital_video_control - wglSetDigitalVideoParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control] && wglConfig.m_wglSetDigitalVideoParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetDigitalVideoParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_gamma - wglGetGammaTableParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglGetGammaTableParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGammaTableParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_gamma - wglSetGammaTableParametersI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglSetGammaTableParametersI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetGammaTableParametersI3D (hDC, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_gamma - wglGetGammaTableI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglGetGammaTableI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGammaTableI3D (hDC, iEntries, puRed, puGreen, puBlue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_gamma - wglSetGammaTableI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_gamma] && wglConfig.m_wglSetGammaTableI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSetGammaTableI3D (hDC, iEntries, puRed, puGreen, puBlue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglEnableGenlockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglEnableGenlockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnableGenlockI3D (hDC);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglDisableGenlockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglDisableGenlockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDisableGenlockI3D (hDC);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglIsEnabledGenlockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglIsEnabledGenlockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglIsEnabledGenlockI3D (hDC, pFlag);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGenlockSourceI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSourceI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSourceI3D (hDC, uSource);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGetGenlockSourceI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSourceI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSourceI3D (hDC, uSource);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGenlockSourceEdgeI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSourceEdgeI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSourceEdgeI3D (hDC, uEdge);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGetGenlockSourceEdgeI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSourceEdgeI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSourceEdgeI3D (hDC, uEdge);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGenlockSampleRateI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSampleRateI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSampleRateI3D (hDC, uRate);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGetGenlockSampleRateI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSampleRateI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSampleRateI3D (hDC, uRate);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGenlockSourceDelayI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGenlockSourceDelayI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGenlockSourceDelayI3D (hDC, uDelay);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglGetGenlockSourceDelayI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglGetGenlockSourceDelayI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetGenlockSourceDelayI3D (hDC, uDelay);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_genlock - wglQueryGenlockMaxSourceDelayI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_genlock] && wglConfig.m_wglQueryGenlockMaxSourceDelayI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryGenlockMaxSourceDelayI3D (hDC, uMaxLineDelay, uMaxPixelDelay);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_image_buffer - wglCreateImageBufferI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglCreateImageBufferI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateImageBufferI3D (hDC, dwSize, uFlags);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_image_buffer - wglDestroyImageBufferI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglDestroyImageBufferI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDestroyImageBufferI3D (hDC, pAddress);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_image_buffer - wglAssociateImageBufferEventsI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglAssociateImageBufferEventsI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglAssociateImageBufferEventsI3D (hDC, pEvent, pAddress, pSize, count);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_image_buffer - wglReleaseImageBufferEventsI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] && wglConfig.m_wglReleaseImageBufferEventsI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseImageBufferEventsI3D (hDC, pAddress, count);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_lock - wglEnableFrameLockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglEnableFrameLockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnableFrameLockI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_lock - wglDisableFrameLockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglDisableFrameLockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDisableFrameLockI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_lock - wglIsEnabledFrameLockI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglIsEnabledFrameLockI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglIsEnabledFrameLockI3D (pFlag);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_lock - wglQueryFrameLockMasterI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] && wglConfig.m_wglQueryFrameLockMasterI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryFrameLockMasterI3D (pFlag);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_usage - wglGetFrameUsageI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglGetFrameUsageI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetFrameUsageI3D (pUsage);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_usage - wglBeginFrameTrackingI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglBeginFrameTrackingI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBeginFrameTrackingI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_usage - wglEndFrameTrackingI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglEndFrameTrackingI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEndFrameTrackingI3D ();
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_I3D_swap_frame_usage - wglQueryFrameTrackingI3D
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] && wglConfig.m_wglQueryFrameTrackingI3D)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryFrameTrackingI3D (pFrameCount, pMissedFrames, pLastMissedUsage);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_copy_image - wglCopyImageSubDataNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_copy_image] && wglConfig.m_wglCopyImageSubDataNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCopyImageSubDataNV (hSrcRC, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, hDstRC, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_delay_before_swap - wglDelayBeforeSwapNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_delay_before_swap] && wglConfig.m_wglDelayBeforeSwapNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDelayBeforeSwapNV (hDC, seconds);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXSetResourceShareHandleNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXSetResourceShareHandleNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXSetResourceShareHandleNV (dxObject, shareHandle);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXOpenDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXOpenDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXOpenDeviceNV (dxDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXCloseDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXCloseDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXCloseDeviceNV (hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXRegisterObjectNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXRegisterObjectNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXRegisterObjectNV (hDevice, dxObject, name, type, access);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXUnregisterObjectNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXUnregisterObjectNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXUnregisterObjectNV (hDevice, hObject);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXObjectAccessNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXObjectAccessNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXObjectAccessNV (hObject, access);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXLockObjectsNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXLockObjectsNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXLockObjectsNV (hDevice, count, hObjects);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_DX_interop - wglDXUnlockObjectsNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] && wglConfig.m_wglDXUnlockObjectsNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDXUnlockObjectsNV (hDevice, count, hObjects);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_gpu_affinity - wglEnumGpusNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglEnumGpusNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumGpusNV (iGpuIndex, phGpu);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_gpu_affinity - wglEnumGpuDevicesNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglEnumGpuDevicesNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumGpuDevicesNV (hGpu, iDeviceIndex, lpGpuDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_gpu_affinity - wglCreateAffinityDCNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglCreateAffinityDCNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglCreateAffinityDCNV (phGpuList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_gpu_affinity - wglEnumGpusFromAffinityDCNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglEnumGpusFromAffinityDCNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumGpusFromAffinityDCNV (hAffinityDC, iGpuIndex, hGpu);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_gpu_affinity - wglDeleteDCNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] && wglConfig.m_wglDeleteDCNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglDeleteDCNV (hdc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int _glew_wgl_wglEnumerateVideoDevicesNV (HDC hDc, HVIDEOOUTPUTDEVICENV * phDeviceList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  int result = ((int)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_present_video - wglEnumerateVideoDevicesNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_present_video] && wglConfig.m_wglEnumerateVideoDevicesNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumerateVideoDevicesNV (hDc, phDeviceList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglBindVideoDeviceNV (HDC hDc, unsigned int  uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_present_video - wglBindVideoDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_present_video] && wglConfig.m_wglBindVideoDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindVideoDeviceNV (hDc, uVideoSlot, hVideoDevice, piAttribList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_present_video - wglQueryCurrentContextNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_present_video] && wglConfig.m_wglQueryCurrentContextNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryCurrentContextNV (iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_swap_group - wglJoinSwapGroupNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglJoinSwapGroupNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglJoinSwapGroupNV (hDC, group);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_swap_group - wglBindSwapBarrierNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglBindSwapBarrierNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindSwapBarrierNV (group, barrier);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_swap_group - wglQuerySwapGroupNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglQuerySwapGroupNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQuerySwapGroupNV (hDC, group, barrier);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_swap_group - wglQueryMaxSwapGroupsNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglQueryMaxSwapGroupsNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryMaxSwapGroupsNV (hDC, maxGroups, maxBarriers);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_swap_group - wglQueryFrameCountNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglQueryFrameCountNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryFrameCountNV (hDC, count);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_swap_group - wglResetFrameCountNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_swap_group] && wglConfig.m_wglResetFrameCountNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglResetFrameCountNV (hDC);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_capture - wglBindVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglBindVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindVideoCaptureDeviceNV (uVideoSlot, hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_capture - wglEnumerateVideoCaptureDevicesNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglEnumerateVideoCaptureDevicesNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglEnumerateVideoCaptureDevicesNV (hDc, phDeviceList);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_capture - wglLockVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglLockVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglLockVideoCaptureDeviceNV (hDc, hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_capture - wglQueryVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglQueryVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglQueryVideoCaptureDeviceNV (hDc, hDevice, iAttribute, piValue);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_capture - wglReleaseVideoCaptureDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_capture] && wglConfig.m_wglReleaseVideoCaptureDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseVideoCaptureDeviceNV (hDc, hDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_output - wglGetVideoDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglGetVideoDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetVideoDeviceNV (hDC, numDevices, hVideoDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_output - wglReleaseVideoDeviceNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglReleaseVideoDeviceNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseVideoDeviceNV (hVideoDevice);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_output - wglBindVideoImageNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglBindVideoImageNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglBindVideoImageNV (hVideoDevice, hPbuffer, iVideoBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_output - wglReleaseVideoImageNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglReleaseVideoImageNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglReleaseVideoImageNV (hPbuffer, iVideoBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_output - wglSendPbufferToVideoNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglSendPbufferToVideoNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSendPbufferToVideoNV (hPbuffer, iBufferType, pulCounterPbuffer, bBlock);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_video_output - wglGetVideoInfoNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_video_output] && wglConfig.m_wglGetVideoInfoNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetVideoInfoNV (hpVideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_vertex_array_range - wglAllocateMemoryNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range] && wglConfig.m_wglAllocateMemoryNV)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglAllocateMemoryNV (size, readfreq, writefreq, priority);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_wgl_wglFreeMemoryNV (void * pointer)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_NV_vertex_array_range - wglFreeMemoryNV
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range] && wglConfig.m_wglFreeMemoryNV)
  {
    prototypeCalled = true;
    wglConfig.m_wglFreeMemoryNV (pointer);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL _glew_wgl_wglGetSyncValuesOML (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  BOOL result = ((BOOL)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_OML_sync_control - wglGetSyncValuesOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglGetSyncValuesOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetSyncValuesOML (hdc, ust, msc, sbc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_OML_sync_control - wglGetMscRateOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglGetMscRateOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglGetMscRateOML (hdc, numerator, denominator);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_OML_sync_control - wglSwapBuffersMscOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglSwapBuffersMscOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSwapBuffersMscOML (hdc, target_msc, divisor, remainder);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

INT64 _glew_wgl_wglSwapLayerBuffersMscOML (HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder)
{
  bool prototypeCalled = false;
  const glew::wgl::DeviceConfig &wglConfig = glew::wgl::GetConfig ();
  INT64 result = ((INT64)0);
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_OML_sync_control - wglSwapLayerBuffersMscOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglSwapLayerBuffersMscOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglSwapLayerBuffersMscOML (hdc, fuPlanes, target_msc, divisor, remainder);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_OML_sync_control - wglWaitForMscOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglWaitForMscOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglWaitForMscOML (hdc, target_msc, divisor, remainder, ust, msc, sbc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
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
#if defined (GLEW_WGL_PRE_ERROR_CHECK)
  GLEW_WGL_PRE_ERROR_CHECK();
#endif
  // WGL_OML_sync_control - wglWaitForSbcOML
  if (!prototypeCalled && wglConfig.m_featureSupported [GLEW_WGL_OML_sync_control] && wglConfig.m_wglWaitForSbcOML)
  {
    prototypeCalled = true;
    result = wglConfig.m_wglWaitForSbcOML (hdc, target_sbc, ust, msc, sbc);
  }
  GLEW_ASSERT (prototypeCalled);
#if defined (GLEW_WGL_POST_ERROR_CHECK)
  GLEW_WGL_POST_ERROR_CHECK();
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

