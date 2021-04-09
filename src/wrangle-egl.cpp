////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <cstring>

#include <string>

#include <unordered_set>

#include <wrangle-egl.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_1 - eglBindTexImage
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] && eglConfig.m_eglBindTexImage)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglBindTexImage (dpy, surface, buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_1 - eglReleaseTexImage
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] && eglConfig.m_eglReleaseTexImage)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglReleaseTexImage (dpy, surface, buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_1 - eglSurfaceAttrib
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] && eglConfig.m_eglSurfaceAttrib)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSurfaceAttrib (dpy, surface, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapInterval (EGLDisplay dpy, EGLint interval)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_1 - eglSwapInterval
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] && eglConfig.m_eglSwapInterval)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSwapInterval (dpy, interval);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglBindAPI (EGLenum api)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_2 - eglBindAPI
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] && eglConfig.m_eglBindAPI)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglBindAPI (api);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLenum _glew_egl_eglQueryAPI ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLenum result = ((EGLenum)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_2 - eglQueryAPI
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] && eglConfig.m_eglQueryAPI)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryAPI ();
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_2 - eglCreatePbufferFromClientBuffer
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] && eglConfig.m_eglCreatePbufferFromClientBuffer)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreatePbufferFromClientBuffer (dpy, buftype, buffer, config, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglReleaseThread ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_2 - eglReleaseThread
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] && eglConfig.m_eglReleaseThread)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglReleaseThread ();
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglWaitClient ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_2 - eglWaitClient
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] && eglConfig.m_eglWaitClient)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglWaitClient ();
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLContext _glew_egl_eglGetCurrentContext ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLContext result = ((EGLContext)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_4 - eglGetCurrentContext
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_4] && eglConfig.m_eglGetCurrentContext)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetCurrentContext ();
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSync _glew_egl_eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSync result = ((EGLSync)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglCreateSync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglCreateSync)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateSync (dpy, type, attrib_list);
  }
  // EGL_KHR_cl_event2 - eglCreateSync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2] && eglConfig.m_eglCreateSync64KHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateSync64KHR (dpy, type, (const EGLAttribKHR *) attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroySync (EGLDisplay dpy, EGLSync sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglDestroySync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglDestroySync)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroySync (dpy, sync);
  }
  // EGL_KHR_fence_sync - eglDestroySync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] && eglConfig.m_eglDestroySyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroySyncKHR (dpy, (EGLSyncKHR) sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglClientWaitSync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglClientWaitSync)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglClientWaitSync (dpy, sync, flags, timeout);
  }
  // EGL_KHR_fence_sync - eglClientWaitSync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] && eglConfig.m_eglClientWaitSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglClientWaitSyncKHR (dpy, (EGLSyncKHR) sync, flags, (EGLTimeKHR) timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglGetSyncAttrib
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglGetSyncAttrib)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetSyncAttrib (dpy, sync, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLImage _glew_egl_eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLImage result = ((EGLImage)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglCreateImage
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglCreateImage)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateImage (dpy, ctx, target, buffer, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroyImage (EGLDisplay dpy, EGLImage image)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglDestroyImage
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglDestroyImage)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroyImage (dpy, image);
  }
  // EGL_KHR_image - eglDestroyImage
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_image] && eglConfig.m_eglDestroyImageKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroyImageKHR (dpy, (EGLImageKHR) image);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLDisplay _glew_egl_eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLDisplay result = ((EGLDisplay)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglGetPlatformDisplay
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglGetPlatformDisplay)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetPlatformDisplay (platform, native_display, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglCreatePlatformWindowSurface
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglCreatePlatformWindowSurface)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreatePlatformWindowSurface (dpy, config, native_window, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglCreatePlatformPixmapSurface
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglCreatePlatformPixmapSurface)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreatePlatformPixmapSurface (dpy, config, native_pixmap, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_VERSION_1_5 - eglWaitSync
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] && eglConfig.m_eglWaitSync)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglWaitSync (dpy, sync, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_egl_eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_blob_cache - eglSetBlobCacheFuncsANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_blob_cache] && eglConfig.m_eglSetBlobCacheFuncsANDROID)
  {
    prototypeCalled = true;
    eglConfig.m_eglSetBlobCacheFuncsANDROID (dpy, set, get);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLClientBuffer _glew_egl_eglCreateNativeClientBufferANDROID (const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLClientBuffer result = ((EGLClientBuffer)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_create_native_client_buffer - eglCreateNativeClientBufferANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_create_native_client_buffer] && eglConfig.m_eglCreateNativeClientBufferANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateNativeClientBufferANDROID (attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLClientBuffer _glew_egl_eglGetNativeClientBufferANDROID (const struct AHardwareBuffer * buffer)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLClientBuffer result = ((EGLClientBuffer)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_get_native_client_buffer - eglGetNativeClientBufferANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_get_native_client_buffer] && eglConfig.m_eglGetNativeClientBufferANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetNativeClientBufferANDROID (buffer);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_native_fence_sync - eglDupNativeFenceFDANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync] && eglConfig.m_eglDupNativeFenceFDANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDupNativeFenceFDANDROID (dpy, sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglPresentationTimeANDROID (EGLDisplay dpy, EGLSurface surface, EGLnsecsANDROID time)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_presentation_time - eglPresentationTimeANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_presentation_time] && eglConfig.m_eglPresentationTimeANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglPresentationTimeANDROID (dpy, surface, time);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetCompositorTimingSupportedANDROID (EGLDisplay dpy, EGLSurface surface, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_get_frame_timestamps - eglGetCompositorTimingSupportedANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] && eglConfig.m_eglGetCompositorTimingSupportedANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetCompositorTimingSupportedANDROID (dpy, surface, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetCompositorTimingANDROID (EGLDisplay dpy, EGLSurface surface, EGLint numTimestamps,  const EGLint * names, EGLnsecsANDROID * values)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_get_frame_timestamps - eglGetCompositorTimingANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] && eglConfig.m_eglGetCompositorTimingANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetCompositorTimingANDROID (dpy, surface, numTimestamps, names, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetNextFrameIdANDROID (EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * frameId)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_get_frame_timestamps - eglGetNextFrameIdANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] && eglConfig.m_eglGetNextFrameIdANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetNextFrameIdANDROID (dpy, surface, frameId);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetFrameTimestampSupportedANDROID (EGLDisplay dpy, EGLSurface surface, EGLint timestamp)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_get_frame_timestamps - eglGetFrameTimestampSupportedANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] && eglConfig.m_eglGetFrameTimestampSupportedANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetFrameTimestampSupportedANDROID (dpy, surface, timestamp);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetFrameTimestampsANDROID (EGLDisplay dpy, EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps,  const EGLint * timestamps, EGLnsecsANDROID * values)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANDROID_get_frame_timestamps - eglGetFrameTimestampsANDROID
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] && eglConfig.m_eglGetFrameTimestampsANDROID)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetFrameTimestampsANDROID (dpy, surface, frameId, numTimestamps, timestamps, values);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANGLE_query_surface_pointer - eglQuerySurfacePointerANGLE
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer] && eglConfig.m_eglQuerySurfacePointerANGLE)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQuerySurfacePointerANGLE (dpy, surface, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetMscRateANGLE (EGLDisplay dpy, EGLSurface surface, EGLint * numerator, EGLint * denominator)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_ANGLE_sync_control_rate - eglGetMscRateANGLE
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_ANGLE_sync_control_rate] && eglConfig.m_eglGetMscRateANGLE)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetMscRateANGLE (dpy, surface, numerator, denominator);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglClientSignalSyncEXT (EGLDisplay dpy, EGLSync sync, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_client_sync - eglClientSignalSyncEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_client_sync] && eglConfig.m_eglClientSignalSyncEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglClientSignalSyncEXT (dpy, sync, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_device_base - eglQueryDeviceAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_base] && eglConfig.m_eglQueryDeviceAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDeviceAttribEXT (device, attribute, value);
  }
  // EGL_EXT_device_query - eglQueryDeviceAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_query] && eglConfig.m_eglQueryDeviceAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDeviceAttribEXT (device, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  const char * result = ((const char *)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_device_base - eglQueryDeviceStringEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_base] && eglConfig.m_eglQueryDeviceStringEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDeviceStringEXT (device, name);
  }
  // EGL_EXT_device_query - eglQueryDeviceStringEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_query] && eglConfig.m_eglQueryDeviceStringEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDeviceStringEXT (device, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_device_base - eglQueryDevicesEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_base] && eglConfig.m_eglQueryDevicesEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDevicesEXT (max_devices, devices, num_devices);
  }
  // EGL_EXT_device_enumeration - eglQueryDevicesEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_enumeration] && eglConfig.m_eglQueryDevicesEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDevicesEXT (max_devices, devices, num_devices);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_device_base - eglQueryDisplayAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_base] && eglConfig.m_eglQueryDisplayAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDisplayAttribEXT (dpy, attribute, value);
  }
  // EGL_EXT_device_query - eglQueryDisplayAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_query] && eglConfig.m_eglQueryDisplayAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDisplayAttribEXT (dpy, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDmaBufFormatsEXT (EGLDisplay dpy, EGLint max_formats, EGLint * formats, EGLint * num_formats)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_image_dma_buf_import_modifiers - eglQueryDmaBufFormatsEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import_modifiers] && eglConfig.m_eglQueryDmaBufFormatsEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDmaBufFormatsEXT (dpy, max_formats, formats, num_formats);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDmaBufModifiersEXT (EGLDisplay dpy, EGLint format, EGLint max_modifiers, EGLuint64KHR * modifiers, EGLBoolean * external_only, EGLint * num_modifiers)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_image_dma_buf_import_modifiers - eglQueryDmaBufModifiersEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import_modifiers] && eglConfig.m_eglQueryDmaBufModifiersEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDmaBufModifiersEXT (dpy, format, max_modifiers, modifiers, external_only, num_modifiers);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglGetOutputLayersEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglGetOutputLayersEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetOutputLayersEXT (dpy, attrib_list, layers, max_layers, num_layers);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglGetOutputPortsEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglGetOutputPortsEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetOutputPortsEXT (dpy, attrib_list, ports, max_ports, num_ports);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglOutputLayerAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglOutputLayerAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglOutputLayerAttribEXT (dpy, layer, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglQueryOutputLayerAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglQueryOutputLayerAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryOutputLayerAttribEXT (dpy, layer, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  const char * result = ((const char *)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglQueryOutputLayerStringEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglQueryOutputLayerStringEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryOutputLayerStringEXT (dpy, layer, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglOutputPortAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglOutputPortAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglOutputPortAttribEXT (dpy, port, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglQueryOutputPortAttribEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglQueryOutputPortAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryOutputPortAttribEXT (dpy, port, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  const char * result = ((const char *)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_output_base - eglQueryOutputPortStringEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_output_base] && eglConfig.m_eglQueryOutputPortStringEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryOutputPortStringEXT (dpy, port, name);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLDisplay _glew_egl_eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLDisplay result = ((EGLDisplay)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_platform_base - eglGetPlatformDisplayEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_platform_base] && eglConfig.m_eglGetPlatformDisplayEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetPlatformDisplayEXT (platform, native_display, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_platform_base - eglCreatePlatformWindowSurfaceEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_platform_base] && eglConfig.m_eglCreatePlatformWindowSurfaceEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreatePlatformWindowSurfaceEXT (dpy, config, native_window, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_platform_base - eglCreatePlatformPixmapSurfaceEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_platform_base] && eglConfig.m_eglCreatePlatformPixmapSurfaceEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreatePlatformPixmapSurfaceEXT (dpy, config, native_pixmap, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_stream_consumer_egloutput - eglStreamConsumerOutputEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput] && eglConfig.m_eglStreamConsumerOutputEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerOutputEXT (dpy, stream, layer);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, const EGLint * rects, EGLint n_rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_swap_buffers_with_damage - eglSwapBuffersWithDamageEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage] && eglConfig.m_eglSwapBuffersWithDamageEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSwapBuffersWithDamageEXT (dpy, surface, rects, n_rects);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglUnsignalSyncEXT (EGLDisplay dpy, EGLSync sync, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_sync_reuse - eglUnsignalSyncEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_sync_reuse] && eglConfig.m_eglUnsignalSyncEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglUnsignalSyncEXT (dpy, sync, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_HI_clientpixmap - eglCreatePixmapSurfaceHI
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap] && eglConfig.m_eglCreatePixmapSurfaceHI)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreatePixmapSurfaceHI (dpy, config, pixmap);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncKHR _glew_egl_eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSyncKHR result = ((EGLSyncKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_cl_event2 - eglCreateSync64KHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2] && eglConfig.m_eglCreateSync64KHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateSync64KHR (dpy, type, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglDebugMessageControlKHR (EGLDEBUGPROCKHR callback, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_debug - eglDebugMessageControlKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_debug] && eglConfig.m_eglDebugMessageControlKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDebugMessageControlKHR (callback, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDebugKHR (EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_debug - eglQueryDebugKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_debug] && eglConfig.m_eglQueryDebugKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDebugKHR (attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglLabelObjectKHR (EGLDisplay display, EGLenum objectType, EGLObjectKHR object, EGLLabelKHR label)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_debug - eglLabelObjectKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_debug] && eglConfig.m_eglLabelObjectKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglLabelObjectKHR (display, objectType, object, label);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDisplayAttribKHR (EGLDisplay dpy, EGLint name, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_display_reference - eglQueryDisplayAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_display_reference] && eglConfig.m_eglQueryDisplayAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDisplayAttribKHR (dpy, name, value);
  }
  // EGL_EXT_device_base - eglQueryDisplayAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_device_base] && eglConfig.m_eglQueryDisplayAttribEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDisplayAttribEXT (dpy, name, value);
  }
  // EGL_NV_stream_metadata - eglQueryDisplayAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata] && eglConfig.m_eglQueryDisplayAttribNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDisplayAttribNV (dpy, name, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncKHR _glew_egl_eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSyncKHR result = ((EGLSyncKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_fence_sync - eglCreateSyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] && eglConfig.m_eglCreateSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateSyncKHR (dpy, type, attrib_list);
  }
  // EGL_KHR_reusable_sync - eglCreateSyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] && eglConfig.m_eglCreateSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateSyncKHR (dpy, type, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_fence_sync - eglDestroySyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] && eglConfig.m_eglDestroySyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroySyncKHR (dpy, sync);
  }
  // EGL_KHR_reusable_sync - eglDestroySyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] && eglConfig.m_eglDestroySyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroySyncKHR (dpy, sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_fence_sync - eglClientWaitSyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] && eglConfig.m_eglClientWaitSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglClientWaitSyncKHR (dpy, sync, flags, timeout);
  }
  // EGL_KHR_reusable_sync - eglClientWaitSyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] && eglConfig.m_eglClientWaitSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglClientWaitSyncKHR (dpy, sync, flags, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_fence_sync - eglGetSyncAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] && eglConfig.m_eglGetSyncAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetSyncAttribKHR (dpy, sync, attribute, value);
  }
  // EGL_KHR_reusable_sync - eglGetSyncAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] && eglConfig.m_eglGetSyncAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetSyncAttribKHR (dpy, sync, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLImageKHR _glew_egl_eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLImageKHR result = ((EGLImageKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_image - eglCreateImageKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_image] && eglConfig.m_eglCreateImageKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateImageKHR (dpy, ctx, target, buffer, attrib_list);
  }
  // EGL_KHR_image_base - eglCreateImageKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_image_base] && eglConfig.m_eglCreateImageKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateImageKHR (dpy, ctx, target, buffer, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_image - eglDestroyImageKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_image] && eglConfig.m_eglDestroyImageKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroyImageKHR (dpy, image);
  }
  // EGL_KHR_image_base - eglDestroyImageKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_image_base] && eglConfig.m_eglDestroyImageKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroyImageKHR (dpy, image);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_lock_surface - eglLockSurfaceKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface] && eglConfig.m_eglLockSurfaceKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglLockSurfaceKHR (dpy, surface, attrib_list);
  }
  // EGL_KHR_lock_surface3 - eglLockSurfaceKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3] && eglConfig.m_eglLockSurfaceKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglLockSurfaceKHR (dpy, surface, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_lock_surface - eglUnlockSurfaceKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface] && eglConfig.m_eglUnlockSurfaceKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglUnlockSurfaceKHR (dpy, surface);
  }
  // EGL_KHR_lock_surface3 - eglUnlockSurfaceKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3] && eglConfig.m_eglUnlockSurfaceKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglUnlockSurfaceKHR (dpy, surface);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_lock_surface3 - eglQuerySurface64KHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3] && eglConfig.m_eglQuerySurface64KHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQuerySurface64KHR (dpy, surface, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_partial_update - eglSetDamageRegionKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_partial_update] && eglConfig.m_eglSetDamageRegionKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSetDamageRegionKHR (dpy, surface, rects, n_rects);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_reusable_sync - eglSignalSyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] && eglConfig.m_eglSignalSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSignalSyncKHR (dpy, sync, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLStreamKHR _glew_egl_eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLStreamKHR result = ((EGLStreamKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream - eglCreateStreamKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream] && eglConfig.m_eglCreateStreamKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateStreamKHR (dpy, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream - eglDestroyStreamKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream] && eglConfig.m_eglDestroyStreamKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroyStreamKHR (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream - eglStreamAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream] && eglConfig.m_eglStreamAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamAttribKHR (dpy, stream, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream - eglQueryStreamKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream] && eglConfig.m_eglQueryStreamKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryStreamKHR (dpy, stream, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream - eglQueryStreamu64KHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream] && eglConfig.m_eglQueryStreamu64KHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryStreamu64KHR (dpy, stream, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLStreamKHR _glew_egl_eglCreateStreamAttribKHR (EGLDisplay dpy, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLStreamKHR result = ((EGLStreamKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_attrib - eglCreateStreamAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] && eglConfig.m_eglCreateStreamAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateStreamAttribKHR (dpy, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSetStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_attrib - eglSetStreamAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] && eglConfig.m_eglSetStreamAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSetStreamAttribKHR (dpy, stream, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_attrib - eglQueryStreamAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] && eglConfig.m_eglQueryStreamAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryStreamAttribKHR (dpy, stream, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerAcquireAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_attrib - eglStreamConsumerAcquireAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] && eglConfig.m_eglStreamConsumerAcquireAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerAcquireAttribKHR (dpy, stream, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerReleaseAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_attrib - eglStreamConsumerReleaseAttribKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] && eglConfig.m_eglStreamConsumerReleaseAttribKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerReleaseAttribKHR (dpy, stream, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerGLTextureExternalKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture] && eglConfig.m_eglStreamConsumerGLTextureExternalKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerGLTextureExternalKHR (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerAcquireKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture] && eglConfig.m_eglStreamConsumerAcquireKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerAcquireKHR (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerReleaseKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture] && eglConfig.m_eglStreamConsumerReleaseKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerReleaseKHR (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLNativeFileDescriptorKHR _glew_egl_eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLNativeFileDescriptorKHR result = ((EGLNativeFileDescriptorKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_cross_process_fd - eglGetStreamFileDescriptorKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd] && eglConfig.m_eglGetStreamFileDescriptorKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetStreamFileDescriptorKHR (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLStreamKHR _glew_egl_eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLStreamKHR result = ((EGLStreamKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_cross_process_fd - eglCreateStreamFromFileDescriptorKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd] && eglConfig.m_eglCreateStreamFromFileDescriptorKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateStreamFromFileDescriptorKHR (dpy, file_descriptor);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_fifo - eglQueryStreamTimeKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_fifo] && eglConfig.m_eglQueryStreamTimeKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryStreamTimeKHR (dpy, stream, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSurface result = ((EGLSurface)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_stream_producer_eglsurface - eglCreateStreamProducerSurfaceKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_eglsurface] && eglConfig.m_eglCreateStreamProducerSurfaceKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateStreamProducerSurfaceKHR (dpy, config, stream, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * rects, EGLint n_rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_swap_buffers_with_damage - eglSwapBuffersWithDamageKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_swap_buffers_with_damage] && eglConfig.m_eglSwapBuffersWithDamageKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSwapBuffersWithDamageKHR (dpy, surface, rects, n_rects);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_KHR_wait_sync - eglWaitSyncKHR
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_KHR_wait_sync] && eglConfig.m_eglWaitSyncKHR)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglWaitSyncKHR (dpy, sync, flags);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLImageKHR _glew_egl_eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLImageKHR result = ((EGLImageKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_MESA_drm_image - eglCreateDRMImageMESA
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_MESA_drm_image] && eglConfig.m_eglCreateDRMImageMESA)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateDRMImageMESA (dpy, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_MESA_drm_image - eglExportDRMImageMESA
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_MESA_drm_image] && eglConfig.m_eglExportDRMImageMESA)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglExportDRMImageMESA (dpy, image, name, handle, stride);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_MESA_image_dma_buf_export - eglExportDMABUFImageQueryMESA
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export] && eglConfig.m_eglExportDMABUFImageQueryMESA)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglExportDMABUFImageQueryMESA (dpy, image, fourcc, num_planes, modifiers);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_MESA_image_dma_buf_export - eglExportDMABUFImageMESA
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export] && eglConfig.m_eglExportDMABUFImageMESA)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglExportDMABUFImageMESA (dpy, image, fds, strides, offsets);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char * _glew_egl_eglGetDisplayDriverConfig (EGLDisplay dpy)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  char * result = ((char *)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_MESA_query_driver - eglGetDisplayDriverConfig
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_MESA_query_driver] && eglConfig.m_eglGetDisplayDriverConfig)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetDisplayDriverConfig (dpy);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglGetDisplayDriverName (EGLDisplay dpy)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  const char * result = ((const char *)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_MESA_query_driver - eglGetDisplayDriverName
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_MESA_query_driver] && eglConfig.m_eglGetDisplayDriverName)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetDisplayDriverName (dpy);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NOK_swap_region - eglSwapBuffersRegionNOK
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NOK_swap_region] && eglConfig.m_eglSwapBuffersRegionNOK)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSwapBuffersRegionNOK (dpy, surface, numRects, rects);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NOK_swap_region2 - eglSwapBuffersRegion2NOK
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2] && eglConfig.m_eglSwapBuffersRegion2NOK)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSwapBuffersRegion2NOK (dpy, surface, numRects, rects);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_native_query - eglQueryNativeDisplayNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_native_query] && eglConfig.m_eglQueryNativeDisplayNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryNativeDisplayNV (dpy, display_id);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_native_query - eglQueryNativeWindowNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_native_query] && eglConfig.m_eglQueryNativeWindowNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryNativeWindowNV (dpy, surf, window);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_native_query - eglQueryNativePixmapNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_native_query] && eglConfig.m_eglQueryNativePixmapNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryNativePixmapNV (dpy, surf, pixmap);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_post_sub_buffer - eglPostSubBufferNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer] && eglConfig.m_eglPostSubBufferNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglPostSubBufferNV (dpy, surface, x, y, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerGLTextureExternalAttribsNV (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_consumer_gltexture_yuv - eglStreamConsumerGLTextureExternalAttribsNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_gltexture_yuv] && eglConfig.m_eglStreamConsumerGLTextureExternalAttribsNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamConsumerGLTextureExternalAttribsNV (dpy, stream, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamImageConsumerConnectNV (EGLDisplay dpy, EGLStreamKHR stream, EGLint num_modifiers, EGLuint64KHR * modifiers, EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_consumer_eglimage - eglStreamImageConsumerConnectNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage] && eglConfig.m_eglStreamImageConsumerConnectNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamImageConsumerConnectNV (dpy, stream, num_modifiers, modifiers, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglQueryStreamConsumerEventNV (EGLDisplay dpy, EGLStreamKHR stream, EGLTime timeout, EGLenum * event, EGLAttrib * aux)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_consumer_eglimage - eglQueryStreamConsumerEventNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage] && eglConfig.m_eglQueryStreamConsumerEventNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryStreamConsumerEventNV (dpy, stream, timeout, event, aux);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamAcquireImageNV (EGLDisplay dpy, EGLStreamKHR stream, EGLImage * pImage, EGLSync sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_consumer_eglimage - eglStreamAcquireImageNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage] && eglConfig.m_eglStreamAcquireImageNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamAcquireImageNV (dpy, stream, pImage, sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamReleaseImageNV (EGLDisplay dpy, EGLStreamKHR stream, EGLImage image, EGLSync sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_consumer_eglimage - eglStreamReleaseImageNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage] && eglConfig.m_eglStreamReleaseImageNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamReleaseImageNV (dpy, stream, image, sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamFlushNV (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_flush - eglStreamFlushNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_flush] && eglConfig.m_eglStreamFlushNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglStreamFlushNV (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDisplayAttribNV (EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_metadata - eglQueryDisplayAttribNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata] && eglConfig.m_eglQueryDisplayAttribNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryDisplayAttribNV (dpy, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSetStreamMetadataNV (EGLDisplay dpy, EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void * data)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_metadata - eglSetStreamMetadataNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata] && eglConfig.m_eglSetStreamMetadataNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSetStreamMetadataNV (dpy, stream, n, offset, size, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamMetadataNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size, void * data)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_metadata - eglQueryStreamMetadataNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata] && eglConfig.m_eglQueryStreamMetadataNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryStreamMetadataNV (dpy, stream, name, n, offset, size, data);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglResetStreamNV (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_reset - eglResetStreamNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_reset] && eglConfig.m_eglResetStreamNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglResetStreamNV (dpy, stream);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncKHR _glew_egl_eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSyncKHR result = ((EGLSyncKHR)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_stream_sync - eglCreateStreamSyncNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_stream_sync] && eglConfig.m_eglCreateStreamSyncNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateStreamSyncNV (dpy, stream, type, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncNV _glew_egl_eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLSyncNV result = ((EGLSyncNV)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_sync - eglCreateFenceSyncNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_sync] && eglConfig.m_eglCreateFenceSyncNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateFenceSyncNV (dpy, condition, attrib_list);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroySyncNV (EGLSyncNV sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_sync - eglDestroySyncNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_sync] && eglConfig.m_eglDestroySyncNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglDestroySyncNV (sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglFenceNV (EGLSyncNV sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_sync - eglFenceNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_sync] && eglConfig.m_eglFenceNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglFenceNV (sync);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLint result = ((EGLint)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_sync - eglClientWaitSyncNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_sync] && eglConfig.m_eglClientWaitSyncNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglClientWaitSyncNV (sync, flags, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSignalSyncNV (EGLSyncNV sync, EGLenum mode)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_sync - eglSignalSyncNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_sync] && eglConfig.m_eglSignalSyncNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglSignalSyncNV (sync, mode);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_sync - eglGetSyncAttribNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_sync] && eglConfig.m_eglGetSyncAttribNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetSyncAttribNV (sync, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLuint64NV _glew_egl_eglGetSystemTimeFrequencyNV ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLuint64NV result = ((EGLuint64NV)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_system_time - eglGetSystemTimeFrequencyNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_system_time] && eglConfig.m_eglGetSystemTimeFrequencyNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetSystemTimeFrequencyNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLuint64NV _glew_egl_eglGetSystemTimeNV ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLuint64NV result = ((EGLuint64NV)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_NV_system_time - eglGetSystemTimeNV
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_NV_system_time] && eglConfig.m_eglGetSystemTimeNV)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglGetSystemTimeNV ();
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorSetContextListEXT (const EGLint * external_ref_ids, EGLint num_entries)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorSetContextListEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorSetContextListEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorSetContextListEXT (external_ref_ids, num_entries);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorSetContextAttributesEXT (EGLint external_ref_id, const EGLint * context_attributes, EGLint num_entries)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorSetContextAttributesEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorSetContextAttributesEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorSetContextAttributesEXT (external_ref_id, context_attributes, num_entries);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorSetWindowListEXT (EGLint external_ref_id, const EGLint * external_win_ids, EGLint num_entries)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorSetWindowListEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorSetWindowListEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorSetWindowListEXT (external_ref_id, external_win_ids, num_entries);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorSetWindowAttributesEXT (EGLint external_win_id, const EGLint * window_attributes, EGLint num_entries)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorSetWindowAttributesEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorSetWindowAttributesEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorSetWindowAttributesEXT (external_win_id, window_attributes, num_entries);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorBindTexWindowEXT (EGLint external_win_id)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorBindTexWindowEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorBindTexWindowEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorBindTexWindowEXT (external_win_id);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorSetSizeEXT (EGLint external_win_id, EGLint width, EGLint height)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorSetSizeEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorSetSizeEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorSetSizeEXT (external_win_id, width, height);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglCompositorSwapPolicyEXT (EGLint external_win_id, EGLint policy)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_EXT_compositor - eglCompositorSwapPolicyEXT
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_EXT_compositor] && eglConfig.m_eglCompositorSwapPolicyEXT)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCompositorSwapPolicyEXT (external_win_id, policy);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglBindWaylandDisplayWL (EGLDisplay dpy, struct wl_display * display)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_WL_bind_wayland_display - eglBindWaylandDisplayWL
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display] && eglConfig.m_eglBindWaylandDisplayWL)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglBindWaylandDisplayWL (dpy, display);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglUnbindWaylandDisplayWL (EGLDisplay dpy, struct wl_display * display)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_WL_bind_wayland_display - eglUnbindWaylandDisplayWL
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display] && eglConfig.m_eglUnbindWaylandDisplayWL)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglUnbindWaylandDisplayWL (dpy, display);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryWaylandBufferWL (EGLDisplay dpy, struct wl_resource * buffer, EGLint attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  EGLBoolean result = ((EGLBoolean)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_WL_bind_wayland_display - eglQueryWaylandBufferWL
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display] && eglConfig.m_eglQueryWaylandBufferWL)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglQueryWaylandBufferWL (dpy, buffer, attribute, value);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct wl_buffer * _glew_egl_eglCreateWaylandBufferFromImageWL (EGLDisplay dpy, EGLImageKHR image)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  struct wl_buffer * result = ((struct wl_buffer *)0);
#if GLEW_EGL_PRE_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  // EGL_WL_create_wayland_buffer_from_image - eglCreateWaylandBufferFromImageWL
  if (!prototypeCalled && eglConfig.m_featureSupported [GLEW_EGL_WL_create_wayland_buffer_from_image] && eglConfig.m_eglCreateWaylandBufferFromImageWL)
  {
    prototypeCalled = true;
    result = eglConfig.m_eglCreateWaylandBufferFromImageWL (dpy, image);
  }
  GLEW_ASSERT (prototypeCalled);
#if GLEW_GL_POST_ERROR_CHECK
  GLEW_ASSERT (eglGetError () == EGL_SUCCESS);
#endif
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::IsSupported (GLEW_EGL_FeatureSet feature)
{
  return glew::egl::IsSupported (feature);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::egl::s_initialised = false;

EGLDisplay glew::egl::s_display = EGL_NO_DISPLAY;

glew::egl::DeviceConfig glew::egl::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::egl::Initialise (EGLDisplay display)
{
  s_display = display;

  if (s_display == EGL_NO_DISPLAY)
  {
    s_display = eglGetDisplay (EGL_DEFAULT_DISPLAY);
  }

  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  //
  // Determine current driver's feature reporting.
  //

  const unsigned char *eglVersion = (const unsigned char *) eglQueryString (s_display, EGL_VERSION);

  if (!eglVersion)
  {
    eglVersion = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t eglVersionLen = strlen ((const char *) eglVersion);

  if (eglVersionLen)
  {
    unsigned int major = 0, minor = 0;

    const char *divisor = strchr ((const char *) eglVersion, '.');

    if (divisor)
    {
      major = (*(char *) (divisor - 1)) - '0';
      minor = (*(char *) (divisor + 1)) - '0';
    }

    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_0] = ((major >= 1));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] = ((major >= 1) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] = ((major >= 1) && (minor >= 2));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_3] = ((major >= 1) && (minor >= 3));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4] = ((major >= 1) && (minor >= 4));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] = ((major >= 1) && (minor >= 5));
  }

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *eglExtensions = (const unsigned char *) eglQueryString (s_display, EGL_EXTENSIONS);

  if (!eglExtensions)
  {
    eglExtensions = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t eglExtensionsLen = strlen ((const char *) eglExtensions);

  if (eglExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) eglExtensions;

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

  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_blob_cache] = (supportedExtensions.find ("EGL_ANDROID_blob_cache") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_create_native_client_buffer] = (supportedExtensions.find ("EGL_ANDROID_create_native_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_framebuffer_target] = (supportedExtensions.find ("EGL_ANDROID_framebuffer_target") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_native_client_buffer] = (supportedExtensions.find ("EGL_ANDROID_get_native_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_front_buffer_auto_refresh] = (supportedExtensions.find ("EGL_ANDROID_front_buffer_auto_refresh") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_image_native_buffer] = (supportedExtensions.find ("EGL_ANDROID_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync] = (supportedExtensions.find ("EGL_ANDROID_native_fence_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_presentation_time] = (supportedExtensions.find ("EGL_ANDROID_presentation_time") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] = (supportedExtensions.find ("EGL_ANDROID_get_frame_timestamps") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_recordable] = (supportedExtensions.find ("EGL_ANDROID_recordable") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_GLES_layers] = (supportedExtensions.find ("EGL_ANDROID_GLES_layers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_d3d_share_handle_client_buffer] = (supportedExtensions.find ("EGL_ANGLE_d3d_share_handle_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_device_d3d] = (supportedExtensions.find ("EGL_ANGLE_device_d3d") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer] = (supportedExtensions.find ("EGL_ANGLE_query_surface_pointer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_surface_d3d_texture_2d_share_handle] = (supportedExtensions.find ("EGL_ANGLE_surface_d3d_texture_2d_share_handle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_sync_control_rate] = (supportedExtensions.find ("EGL_ANGLE_sync_control_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_window_fixed_size] = (supportedExtensions.find ("EGL_ANGLE_window_fixed_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_implicit_external_sync] = (supportedExtensions.find ("EGL_ARM_implicit_external_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_pixmap_multisample_discard] = (supportedExtensions.find ("EGL_ARM_pixmap_multisample_discard") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_buffer_age] = (supportedExtensions.find ("EGL_EXT_buffer_age") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_extensions] = (supportedExtensions.find ("EGL_EXT_client_extensions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_sync] = (supportedExtensions.find ("EGL_EXT_client_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_create_context_robustness] = (supportedExtensions.find ("EGL_EXT_create_context_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base] = (supportedExtensions.find ("EGL_EXT_device_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_drm] = (supportedExtensions.find ("EGL_EXT_device_drm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_enumeration] = (supportedExtensions.find ("EGL_EXT_device_enumeration") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_openwf] = (supportedExtensions.find ("EGL_EXT_device_openwf") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query] = (supportedExtensions.find ("EGL_EXT_device_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_bt2020_linear] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_bt2020_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_bt2020_pq] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_bt2020_pq") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_scrgb] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_scrgb") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_scrgb_linear] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_scrgb_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_display_p3_linear] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_display_p3_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_display_p3] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_display_p3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_display_p3_passthrough] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_display_p3_passthrough") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import] = (supportedExtensions.find ("EGL_EXT_image_dma_buf_import") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import_modifiers] = (supportedExtensions.find ("EGL_EXT_image_dma_buf_import_modifiers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_gl_colorspace] = (supportedExtensions.find ("EGL_EXT_image_gl_colorspace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_multiview_window] = (supportedExtensions.find ("EGL_EXT_multiview_window") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_base] = (supportedExtensions.find ("EGL_EXT_output_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_drm] = (supportedExtensions.find ("EGL_EXT_output_drm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_openwf] = (supportedExtensions.find ("EGL_EXT_output_openwf") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_pixel_format_float] = (supportedExtensions.find ("EGL_EXT_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_base] = (supportedExtensions.find ("EGL_EXT_platform_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_device] = (supportedExtensions.find ("EGL_EXT_platform_device") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_wayland] = (supportedExtensions.find ("EGL_EXT_platform_wayland") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_x11] = (supportedExtensions.find ("EGL_EXT_platform_x11") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_xcb] = (supportedExtensions.find ("EGL_EXT_platform_xcb") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_protected_content] = (supportedExtensions.find ("EGL_EXT_protected_content") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_protected_surface] = (supportedExtensions.find ("EGL_EXT_protected_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput] = (supportedExtensions.find ("EGL_EXT_stream_consumer_egloutput") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_surface_SMPTE2086_metadata] = (supportedExtensions.find ("EGL_EXT_surface_SMPTE2086_metadata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage] = (supportedExtensions.find ("EGL_EXT_swap_buffers_with_damage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_sync_reuse] = (supportedExtensions.find ("EGL_EXT_sync_reuse") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_yuv_surface] = (supportedExtensions.find ("EGL_EXT_yuv_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap] = (supportedExtensions.find ("EGL_HI_clientpixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_HI_colorformats] = (supportedExtensions.find ("EGL_HI_colorformats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_IMG_context_priority] = (supportedExtensions.find ("EGL_IMG_context_priority") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_IMG_image_plane_attribs] = (supportedExtensions.find ("EGL_IMG_image_plane_attribs") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event] = (supportedExtensions.find ("EGL_KHR_cl_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2] = (supportedExtensions.find ("EGL_KHR_cl_event2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_config_attribs] = (supportedExtensions.find ("EGL_KHR_config_attribs") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_client_get_all_proc_addresses] = (supportedExtensions.find ("EGL_KHR_client_get_all_proc_addresses") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_context_flush_control] = (supportedExtensions.find ("EGL_KHR_context_flush_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_create_context] = (supportedExtensions.find ("EGL_KHR_create_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_create_context_no_error] = (supportedExtensions.find ("EGL_KHR_create_context_no_error") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_debug] = (supportedExtensions.find ("EGL_KHR_debug") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_display_reference] = (supportedExtensions.find ("EGL_KHR_display_reference") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] = (supportedExtensions.find ("EGL_KHR_fence_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_get_all_proc_addresses] = (supportedExtensions.find ("EGL_KHR_get_all_proc_addresses") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_colorspace] = (supportedExtensions.find ("EGL_KHR_gl_colorspace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_renderbuffer_image] = (supportedExtensions.find ("EGL_KHR_gl_renderbuffer_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_texture_2D_image] = (supportedExtensions.find ("EGL_KHR_gl_texture_2D_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_texture_3D_image] = (supportedExtensions.find ("EGL_KHR_gl_texture_3D_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_texture_cubemap_image] = (supportedExtensions.find ("EGL_KHR_gl_texture_cubemap_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image] = (supportedExtensions.find ("EGL_KHR_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image_base] = (supportedExtensions.find ("EGL_KHR_image_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image_pixmap] = (supportedExtensions.find ("EGL_KHR_image_pixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface] = (supportedExtensions.find ("EGL_KHR_lock_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface2] = (supportedExtensions.find ("EGL_KHR_lock_surface2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3] = (supportedExtensions.find ("EGL_KHR_lock_surface3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_mutable_render_buffer] = (supportedExtensions.find ("EGL_KHR_mutable_render_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_no_config_context] = (supportedExtensions.find ("EGL_KHR_no_config_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_partial_update] = (supportedExtensions.find ("EGL_KHR_partial_update") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_android] = (supportedExtensions.find ("EGL_KHR_platform_android") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_gbm] = (supportedExtensions.find ("EGL_KHR_platform_gbm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_wayland] = (supportedExtensions.find ("EGL_KHR_platform_wayland") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_x11] = (supportedExtensions.find ("EGL_KHR_platform_x11") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] = (supportedExtensions.find ("EGL_KHR_reusable_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream] = (supportedExtensions.find ("EGL_KHR_stream") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] = (supportedExtensions.find ("EGL_KHR_stream_attrib") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture] = (supportedExtensions.find ("EGL_KHR_stream_consumer_gltexture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd] = (supportedExtensions.find ("EGL_KHR_stream_cross_process_fd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_fifo] = (supportedExtensions.find ("EGL_KHR_stream_fifo") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_aldatalocator] = (supportedExtensions.find ("EGL_KHR_stream_producer_aldatalocator") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_eglsurface] = (supportedExtensions.find ("EGL_KHR_stream_producer_eglsurface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_surfaceless_context] = (supportedExtensions.find ("EGL_KHR_surfaceless_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_swap_buffers_with_damage] = (supportedExtensions.find ("EGL_KHR_swap_buffers_with_damage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_vg_parent_image] = (supportedExtensions.find ("EGL_KHR_vg_parent_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_wait_sync] = (supportedExtensions.find ("EGL_KHR_wait_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_drm_image] = (supportedExtensions.find ("EGL_MESA_drm_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export] = (supportedExtensions.find ("EGL_MESA_image_dma_buf_export") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_platform_gbm] = (supportedExtensions.find ("EGL_MESA_platform_gbm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_platform_surfaceless] = (supportedExtensions.find ("EGL_MESA_platform_surfaceless") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_query_driver] = (supportedExtensions.find ("EGL_MESA_query_driver") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region] = (supportedExtensions.find ("EGL_NOK_swap_region") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2] = (supportedExtensions.find ("EGL_NOK_swap_region2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_texture_from_pixmap] = (supportedExtensions.find ("EGL_NOK_texture_from_pixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_3dvision_surface] = (supportedExtensions.find ("EGL_NV_3dvision_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_coverage_sample] = (supportedExtensions.find ("EGL_NV_coverage_sample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_context_priority_realtime] = (supportedExtensions.find ("EGL_NV_context_priority_realtime") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_coverage_sample_resolve] = (supportedExtensions.find ("EGL_NV_coverage_sample_resolve") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_cuda_event] = (supportedExtensions.find ("EGL_NV_cuda_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_depth_nonlinear] = (supportedExtensions.find ("EGL_NV_depth_nonlinear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_device_cuda] = (supportedExtensions.find ("EGL_NV_device_cuda") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_native_query] = (supportedExtensions.find ("EGL_NV_native_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_convert_rounding] = (supportedExtensions.find ("EGL_NV_post_convert_rounding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer] = (supportedExtensions.find ("EGL_NV_post_sub_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_quadruple_buffer] = (supportedExtensions.find ("EGL_NV_quadruple_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_robustness_video_memory_purge] = (supportedExtensions.find ("EGL_NV_robustness_video_memory_purge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_gltexture_yuv] = (supportedExtensions.find ("EGL_NV_stream_consumer_gltexture_yuv") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_object] = (supportedExtensions.find ("EGL_NV_stream_cross_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_display] = (supportedExtensions.find ("EGL_NV_stream_cross_display") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_partition] = (supportedExtensions.find ("EGL_NV_stream_cross_partition") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_process] = (supportedExtensions.find ("EGL_NV_stream_cross_process") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_system] = (supportedExtensions.find ("EGL_NV_stream_cross_system") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_dma] = (supportedExtensions.find ("EGL_NV_stream_dma") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage] = (supportedExtensions.find ("EGL_NV_stream_consumer_eglimage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_fifo_next] = (supportedExtensions.find ("EGL_NV_stream_fifo_next") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_fifo_synchronous] = (supportedExtensions.find ("EGL_NV_stream_fifo_synchronous") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_flush] = (supportedExtensions.find ("EGL_NV_stream_flush") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_frame_limits] = (supportedExtensions.find ("EGL_NV_stream_frame_limits") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata] = (supportedExtensions.find ("EGL_NV_stream_metadata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_reset] = (supportedExtensions.find ("EGL_NV_stream_reset") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_remote] = (supportedExtensions.find ("EGL_NV_stream_remote") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_socket] = (supportedExtensions.find ("EGL_NV_stream_socket") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_socket_inet] = (supportedExtensions.find ("EGL_NV_stream_socket_inet") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_socket_unix] = (supportedExtensions.find ("EGL_NV_stream_socket_unix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_sync] = (supportedExtensions.find ("EGL_NV_stream_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_sync] = (supportedExtensions.find ("EGL_NV_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_system_time] = (supportedExtensions.find ("EGL_NV_system_time") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_triple_buffer] = (supportedExtensions.find ("EGL_NV_triple_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_TIZEN_image_native_buffer] = (supportedExtensions.find ("EGL_TIZEN_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_TIZEN_image_native_surface] = (supportedExtensions.find ("EGL_TIZEN_image_native_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_compositor] = (supportedExtensions.find ("EGL_EXT_compositor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_surface_CTA861_3_metadata] = (supportedExtensions.find ("EGL_EXT_surface_CTA861_3_metadata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_implicit_sync_control] = (supportedExtensions.find ("EGL_EXT_image_implicit_sync_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_bind_to_front] = (supportedExtensions.find ("EGL_EXT_bind_to_front") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_origin] = (supportedExtensions.find ("EGL_NV_stream_origin") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display] = (supportedExtensions.find ("EGL_WL_bind_wayland_display") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_WL_create_wayland_buffer_from_image] = (supportedExtensions.find ("EGL_WL_create_wayland_buffer_from_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_image_format] = (supportedExtensions.find ("EGL_ARM_image_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query_name] = (supportedExtensions.find ("EGL_EXT_device_query_name") != supportedExtensions.end ());

  // EGL_VERSION_1_1
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1])
  {
    s_deviceConfig.m_eglBindTexImage = (PFNEGLBINDTEXIMAGEPROC) glewGetProcAddress ("eglBindTexImage");
    s_deviceConfig.m_eglReleaseTexImage = (PFNEGLRELEASETEXIMAGEPROC) glewGetProcAddress ("eglReleaseTexImage");
    s_deviceConfig.m_eglSurfaceAttrib = (PFNEGLSURFACEATTRIBPROC) glewGetProcAddress ("eglSurfaceAttrib");
    s_deviceConfig.m_eglSwapInterval = (PFNEGLSWAPINTERVALPROC) glewGetProcAddress ("eglSwapInterval");
  }

  // EGL_VERSION_1_2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2])
  {
    s_deviceConfig.m_eglBindAPI = (PFNEGLBINDAPIPROC) glewGetProcAddress ("eglBindAPI");
    s_deviceConfig.m_eglQueryAPI = (PFNEGLQUERYAPIPROC) glewGetProcAddress ("eglQueryAPI");
    s_deviceConfig.m_eglCreatePbufferFromClientBuffer = (PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC) glewGetProcAddress ("eglCreatePbufferFromClientBuffer");
    s_deviceConfig.m_eglReleaseThread = (PFNEGLRELEASETHREADPROC) glewGetProcAddress ("eglReleaseThread");
    s_deviceConfig.m_eglWaitClient = (PFNEGLWAITCLIENTPROC) glewGetProcAddress ("eglWaitClient");
  }

  // EGL_VERSION_1_4
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4])
  {
    s_deviceConfig.m_eglGetCurrentContext = (PFNEGLGETCURRENTCONTEXTPROC) glewGetProcAddress ("eglGetCurrentContext");
  }

  // EGL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5])
  {
    s_deviceConfig.m_eglCreateSync = (PFNEGLCREATESYNCPROC) glewGetProcAddress ("eglCreateSync");
    s_deviceConfig.m_eglDestroySync = (PFNEGLDESTROYSYNCPROC) glewGetProcAddress ("eglDestroySync");
    s_deviceConfig.m_eglClientWaitSync = (PFNEGLCLIENTWAITSYNCPROC) glewGetProcAddress ("eglClientWaitSync");
    s_deviceConfig.m_eglGetSyncAttrib = (PFNEGLGETSYNCATTRIBPROC) glewGetProcAddress ("eglGetSyncAttrib");
    s_deviceConfig.m_eglCreateImage = (PFNEGLCREATEIMAGEPROC) glewGetProcAddress ("eglCreateImage");
    s_deviceConfig.m_eglDestroyImage = (PFNEGLDESTROYIMAGEPROC) glewGetProcAddress ("eglDestroyImage");
    s_deviceConfig.m_eglGetPlatformDisplay = (PFNEGLGETPLATFORMDISPLAYPROC) glewGetProcAddress ("eglGetPlatformDisplay");
    s_deviceConfig.m_eglCreatePlatformWindowSurface = (PFNEGLCREATEPLATFORMWINDOWSURFACEPROC) glewGetProcAddress ("eglCreatePlatformWindowSurface");
    s_deviceConfig.m_eglCreatePlatformPixmapSurface = (PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC) glewGetProcAddress ("eglCreatePlatformPixmapSurface");
    s_deviceConfig.m_eglWaitSync = (PFNEGLWAITSYNCPROC) glewGetProcAddress ("eglWaitSync");
  }

  // EGL_ANDROID_blob_cache
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_blob_cache])
  {
    s_deviceConfig.m_eglSetBlobCacheFuncsANDROID = (PFNEGLSETBLOBCACHEFUNCSANDROIDPROC) glewGetProcAddress ("eglSetBlobCacheFuncsANDROID");
  }

  // EGL_ANDROID_create_native_client_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_create_native_client_buffer])
  {
    s_deviceConfig.m_eglCreateNativeClientBufferANDROID = (PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC) glewGetProcAddress ("eglCreateNativeClientBufferANDROID");
  }

  // EGL_ANDROID_get_native_client_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_native_client_buffer])
  {
    s_deviceConfig.m_eglGetNativeClientBufferANDROID = (PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC) glewGetProcAddress ("eglGetNativeClientBufferANDROID");
  }

  // EGL_ANDROID_native_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync])
  {
    s_deviceConfig.m_eglDupNativeFenceFDANDROID = (PFNEGLDUPNATIVEFENCEFDANDROIDPROC) glewGetProcAddress ("eglDupNativeFenceFDANDROID");
  }

  // EGL_ANDROID_presentation_time
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_presentation_time])
  {
    s_deviceConfig.m_eglPresentationTimeANDROID = (PFNEGLPRESENTATIONTIMEANDROIDPROC) glewGetProcAddress ("eglPresentationTimeANDROID");
  }

  // EGL_ANDROID_get_frame_timestamps
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps])
  {
    s_deviceConfig.m_eglGetCompositorTimingSupportedANDROID = (PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC) glewGetProcAddress ("eglGetCompositorTimingSupportedANDROID");
    s_deviceConfig.m_eglGetCompositorTimingANDROID = (PFNEGLGETCOMPOSITORTIMINGANDROIDPROC) glewGetProcAddress ("eglGetCompositorTimingANDROID");
    s_deviceConfig.m_eglGetNextFrameIdANDROID = (PFNEGLGETNEXTFRAMEIDANDROIDPROC) glewGetProcAddress ("eglGetNextFrameIdANDROID");
    s_deviceConfig.m_eglGetFrameTimestampSupportedANDROID = (PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC) glewGetProcAddress ("eglGetFrameTimestampSupportedANDROID");
    s_deviceConfig.m_eglGetFrameTimestampsANDROID = (PFNEGLGETFRAMETIMESTAMPSANDROIDPROC) glewGetProcAddress ("eglGetFrameTimestampsANDROID");
  }

  // EGL_ANGLE_query_surface_pointer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer])
  {
    s_deviceConfig.m_eglQuerySurfacePointerANGLE = (PFNEGLQUERYSURFACEPOINTERANGLEPROC) glewGetProcAddress ("eglQuerySurfacePointerANGLE");
  }

  // EGL_ANGLE_sync_control_rate
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_sync_control_rate])
  {
    s_deviceConfig.m_eglGetMscRateANGLE = (PFNEGLGETMSCRATEANGLEPROC) glewGetProcAddress ("eglGetMscRateANGLE");
  }

  // EGL_EXT_client_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_sync])
  {
    s_deviceConfig.m_eglClientSignalSyncEXT = (PFNEGLCLIENTSIGNALSYNCEXTPROC) glewGetProcAddress ("eglClientSignalSyncEXT");
  }

  // EGL_EXT_device_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base])
  {
    s_deviceConfig.m_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) glewGetProcAddress ("eglQueryDeviceAttribEXT");
    s_deviceConfig.m_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) glewGetProcAddress ("eglQueryDeviceStringEXT");
    s_deviceConfig.m_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) glewGetProcAddress ("eglQueryDevicesEXT");
    s_deviceConfig.m_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) glewGetProcAddress ("eglQueryDisplayAttribEXT");
  }

  // EGL_EXT_image_dma_buf_import_modifiers
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import_modifiers])
  {
    s_deviceConfig.m_eglQueryDmaBufFormatsEXT = (PFNEGLQUERYDMABUFFORMATSEXTPROC) glewGetProcAddress ("eglQueryDmaBufFormatsEXT");
    s_deviceConfig.m_eglQueryDmaBufModifiersEXT = (PFNEGLQUERYDMABUFMODIFIERSEXTPROC) glewGetProcAddress ("eglQueryDmaBufModifiersEXT");
  }

  // EGL_EXT_output_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_base])
  {
    s_deviceConfig.m_eglGetOutputLayersEXT = (PFNEGLGETOUTPUTLAYERSEXTPROC) glewGetProcAddress ("eglGetOutputLayersEXT");
    s_deviceConfig.m_eglGetOutputPortsEXT = (PFNEGLGETOUTPUTPORTSEXTPROC) glewGetProcAddress ("eglGetOutputPortsEXT");
    s_deviceConfig.m_eglOutputLayerAttribEXT = (PFNEGLOUTPUTLAYERATTRIBEXTPROC) glewGetProcAddress ("eglOutputLayerAttribEXT");
    s_deviceConfig.m_eglQueryOutputLayerAttribEXT = (PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC) glewGetProcAddress ("eglQueryOutputLayerAttribEXT");
    s_deviceConfig.m_eglQueryOutputLayerStringEXT = (PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC) glewGetProcAddress ("eglQueryOutputLayerStringEXT");
    s_deviceConfig.m_eglOutputPortAttribEXT = (PFNEGLOUTPUTPORTATTRIBEXTPROC) glewGetProcAddress ("eglOutputPortAttribEXT");
    s_deviceConfig.m_eglQueryOutputPortAttribEXT = (PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC) glewGetProcAddress ("eglQueryOutputPortAttribEXT");
    s_deviceConfig.m_eglQueryOutputPortStringEXT = (PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC) glewGetProcAddress ("eglQueryOutputPortStringEXT");
  }

  // EGL_EXT_platform_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_base])
  {
    s_deviceConfig.m_eglGetPlatformDisplayEXT = (PFNEGLGETPLATFORMDISPLAYEXTPROC) glewGetProcAddress ("eglGetPlatformDisplayEXT");
    s_deviceConfig.m_eglCreatePlatformWindowSurfaceEXT = (PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC) glewGetProcAddress ("eglCreatePlatformWindowSurfaceEXT");
    s_deviceConfig.m_eglCreatePlatformPixmapSurfaceEXT = (PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC) glewGetProcAddress ("eglCreatePlatformPixmapSurfaceEXT");
  }

  // EGL_EXT_stream_consumer_egloutput
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput])
  {
    s_deviceConfig.m_eglStreamConsumerOutputEXT = (PFNEGLSTREAMCONSUMEROUTPUTEXTPROC) glewGetProcAddress ("eglStreamConsumerOutputEXT");
  }

  // EGL_EXT_swap_buffers_with_damage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage])
  {
    s_deviceConfig.m_eglSwapBuffersWithDamageEXT = (PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC) glewGetProcAddress ("eglSwapBuffersWithDamageEXT");
  }

  // EGL_EXT_sync_reuse
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_sync_reuse])
  {
    s_deviceConfig.m_eglUnsignalSyncEXT = (PFNEGLUNSIGNALSYNCEXTPROC) glewGetProcAddress ("eglUnsignalSyncEXT");
  }

  // EGL_HI_clientpixmap
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap])
  {
    s_deviceConfig.m_eglCreatePixmapSurfaceHI = (PFNEGLCREATEPIXMAPSURFACEHIPROC) glewGetProcAddress ("eglCreatePixmapSurfaceHI");
  }

  // EGL_KHR_cl_event2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2])
  {
    s_deviceConfig.m_eglCreateSync64KHR = (PFNEGLCREATESYNC64KHRPROC) glewGetProcAddress ("eglCreateSync64KHR");
  }

  // EGL_KHR_debug
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_debug])
  {
    s_deviceConfig.m_eglDebugMessageControlKHR = (PFNEGLDEBUGMESSAGECONTROLKHRPROC) glewGetProcAddress ("eglDebugMessageControlKHR");
    s_deviceConfig.m_eglQueryDebugKHR = (PFNEGLQUERYDEBUGKHRPROC) glewGetProcAddress ("eglQueryDebugKHR");
    s_deviceConfig.m_eglLabelObjectKHR = (PFNEGLLABELOBJECTKHRPROC) glewGetProcAddress ("eglLabelObjectKHR");
  }

  // EGL_KHR_display_reference
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_display_reference])
  {
    s_deviceConfig.m_eglQueryDisplayAttribKHR = (PFNEGLQUERYDISPLAYATTRIBKHRPROC) glewGetProcAddress ("eglQueryDisplayAttribKHR");
  }

  // EGL_KHR_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync])
  {
    s_deviceConfig.m_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) glewGetProcAddress ("eglCreateSyncKHR");
    s_deviceConfig.m_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) glewGetProcAddress ("eglDestroySyncKHR");
    s_deviceConfig.m_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) glewGetProcAddress ("eglClientWaitSyncKHR");
    s_deviceConfig.m_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) glewGetProcAddress ("eglGetSyncAttribKHR");
  }

  // EGL_KHR_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image])
  {
    s_deviceConfig.m_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) glewGetProcAddress ("eglCreateImageKHR");
    s_deviceConfig.m_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) glewGetProcAddress ("eglDestroyImageKHR");
  }

  // EGL_KHR_lock_surface
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface])
  {
    s_deviceConfig.m_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) glewGetProcAddress ("eglLockSurfaceKHR");
    s_deviceConfig.m_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) glewGetProcAddress ("eglUnlockSurfaceKHR");
  }

  // EGL_KHR_lock_surface3
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3])
  {
    s_deviceConfig.m_eglQuerySurface64KHR = (PFNEGLQUERYSURFACE64KHRPROC) glewGetProcAddress ("eglQuerySurface64KHR");
  }

  // EGL_KHR_partial_update
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_partial_update])
  {
    s_deviceConfig.m_eglSetDamageRegionKHR = (PFNEGLSETDAMAGEREGIONKHRPROC) glewGetProcAddress ("eglSetDamageRegionKHR");
  }

  // EGL_KHR_reusable_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync])
  {
    s_deviceConfig.m_eglSignalSyncKHR = (PFNEGLSIGNALSYNCKHRPROC) glewGetProcAddress ("eglSignalSyncKHR");
  }

  // EGL_KHR_stream
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream])
  {
    s_deviceConfig.m_eglCreateStreamKHR = (PFNEGLCREATESTREAMKHRPROC) glewGetProcAddress ("eglCreateStreamKHR");
    s_deviceConfig.m_eglDestroyStreamKHR = (PFNEGLDESTROYSTREAMKHRPROC) glewGetProcAddress ("eglDestroyStreamKHR");
    s_deviceConfig.m_eglStreamAttribKHR = (PFNEGLSTREAMATTRIBKHRPROC) glewGetProcAddress ("eglStreamAttribKHR");
    s_deviceConfig.m_eglQueryStreamKHR = (PFNEGLQUERYSTREAMKHRPROC) glewGetProcAddress ("eglQueryStreamKHR");
    s_deviceConfig.m_eglQueryStreamu64KHR = (PFNEGLQUERYSTREAMU64KHRPROC) glewGetProcAddress ("eglQueryStreamu64KHR");
  }

  // EGL_KHR_stream_attrib
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib])
  {
    s_deviceConfig.m_eglCreateStreamAttribKHR = (PFNEGLCREATESTREAMATTRIBKHRPROC) glewGetProcAddress ("eglCreateStreamAttribKHR");
    s_deviceConfig.m_eglSetStreamAttribKHR = (PFNEGLSETSTREAMATTRIBKHRPROC) glewGetProcAddress ("eglSetStreamAttribKHR");
    s_deviceConfig.m_eglQueryStreamAttribKHR = (PFNEGLQUERYSTREAMATTRIBKHRPROC) glewGetProcAddress ("eglQueryStreamAttribKHR");
    s_deviceConfig.m_eglStreamConsumerAcquireAttribKHR = (PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC) glewGetProcAddress ("eglStreamConsumerAcquireAttribKHR");
    s_deviceConfig.m_eglStreamConsumerReleaseAttribKHR = (PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC) glewGetProcAddress ("eglStreamConsumerReleaseAttribKHR");
  }

  // EGL_KHR_stream_consumer_gltexture
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture])
  {
    s_deviceConfig.m_eglStreamConsumerGLTextureExternalKHR = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC) glewGetProcAddress ("eglStreamConsumerGLTextureExternalKHR");
    s_deviceConfig.m_eglStreamConsumerAcquireKHR = (PFNEGLSTREAMCONSUMERACQUIREKHRPROC) glewGetProcAddress ("eglStreamConsumerAcquireKHR");
    s_deviceConfig.m_eglStreamConsumerReleaseKHR = (PFNEGLSTREAMCONSUMERRELEASEKHRPROC) glewGetProcAddress ("eglStreamConsumerReleaseKHR");
  }

  // EGL_KHR_stream_cross_process_fd
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd])
  {
    s_deviceConfig.m_eglGetStreamFileDescriptorKHR = (PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC) glewGetProcAddress ("eglGetStreamFileDescriptorKHR");
    s_deviceConfig.m_eglCreateStreamFromFileDescriptorKHR = (PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC) glewGetProcAddress ("eglCreateStreamFromFileDescriptorKHR");
  }

  // EGL_KHR_stream_fifo
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_fifo])
  {
    s_deviceConfig.m_eglQueryStreamTimeKHR = (PFNEGLQUERYSTREAMTIMEKHRPROC) glewGetProcAddress ("eglQueryStreamTimeKHR");
  }

  // EGL_KHR_stream_producer_eglsurface
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_eglsurface])
  {
    s_deviceConfig.m_eglCreateStreamProducerSurfaceKHR = (PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC) glewGetProcAddress ("eglCreateStreamProducerSurfaceKHR");
  }

  // EGL_KHR_swap_buffers_with_damage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_swap_buffers_with_damage])
  {
    s_deviceConfig.m_eglSwapBuffersWithDamageKHR = (PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC) glewGetProcAddress ("eglSwapBuffersWithDamageKHR");
  }

  // EGL_KHR_wait_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_wait_sync])
  {
    s_deviceConfig.m_eglWaitSyncKHR = (PFNEGLWAITSYNCKHRPROC) glewGetProcAddress ("eglWaitSyncKHR");
  }

  // EGL_MESA_drm_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_drm_image])
  {
    s_deviceConfig.m_eglCreateDRMImageMESA = (PFNEGLCREATEDRMIMAGEMESAPROC) glewGetProcAddress ("eglCreateDRMImageMESA");
    s_deviceConfig.m_eglExportDRMImageMESA = (PFNEGLEXPORTDRMIMAGEMESAPROC) glewGetProcAddress ("eglExportDRMImageMESA");
  }

  // EGL_MESA_image_dma_buf_export
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export])
  {
    s_deviceConfig.m_eglExportDMABUFImageQueryMESA = (PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC) glewGetProcAddress ("eglExportDMABUFImageQueryMESA");
    s_deviceConfig.m_eglExportDMABUFImageMESA = (PFNEGLEXPORTDMABUFIMAGEMESAPROC) glewGetProcAddress ("eglExportDMABUFImageMESA");
  }

  // EGL_MESA_query_driver
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_query_driver])
  {
    s_deviceConfig.m_eglGetDisplayDriverConfig = (PFNEGLGETDISPLAYDRIVERCONFIGPROC) glewGetProcAddress ("eglGetDisplayDriverConfig");
    s_deviceConfig.m_eglGetDisplayDriverName = (PFNEGLGETDISPLAYDRIVERNAMEPROC) glewGetProcAddress ("eglGetDisplayDriverName");
  }

  // EGL_NOK_swap_region
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region])
  {
    s_deviceConfig.m_eglSwapBuffersRegionNOK = (PFNEGLSWAPBUFFERSREGIONNOKPROC) glewGetProcAddress ("eglSwapBuffersRegionNOK");
  }

  // EGL_NOK_swap_region2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2])
  {
    s_deviceConfig.m_eglSwapBuffersRegion2NOK = (PFNEGLSWAPBUFFERSREGION2NOKPROC) glewGetProcAddress ("eglSwapBuffersRegion2NOK");
  }

  // EGL_NV_native_query
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_native_query])
  {
    s_deviceConfig.m_eglQueryNativeDisplayNV = (PFNEGLQUERYNATIVEDISPLAYNVPROC) glewGetProcAddress ("eglQueryNativeDisplayNV");
    s_deviceConfig.m_eglQueryNativeWindowNV = (PFNEGLQUERYNATIVEWINDOWNVPROC) glewGetProcAddress ("eglQueryNativeWindowNV");
    s_deviceConfig.m_eglQueryNativePixmapNV = (PFNEGLQUERYNATIVEPIXMAPNVPROC) glewGetProcAddress ("eglQueryNativePixmapNV");
  }

  // EGL_NV_post_sub_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer])
  {
    s_deviceConfig.m_eglPostSubBufferNV = (PFNEGLPOSTSUBBUFFERNVPROC) glewGetProcAddress ("eglPostSubBufferNV");
  }

  // EGL_NV_stream_consumer_gltexture_yuv
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_gltexture_yuv])
  {
    s_deviceConfig.m_eglStreamConsumerGLTextureExternalAttribsNV = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC) glewGetProcAddress ("eglStreamConsumerGLTextureExternalAttribsNV");
  }

  // EGL_NV_stream_consumer_eglimage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage])
  {
    s_deviceConfig.m_eglStreamImageConsumerConnectNV = (PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC) glewGetProcAddress ("eglStreamImageConsumerConnectNV");
    s_deviceConfig.m_eglQueryStreamConsumerEventNV = (PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC) glewGetProcAddress ("eglQueryStreamConsumerEventNV");
    s_deviceConfig.m_eglStreamAcquireImageNV = (PFNEGLSTREAMACQUIREIMAGENVPROC) glewGetProcAddress ("eglStreamAcquireImageNV");
    s_deviceConfig.m_eglStreamReleaseImageNV = (PFNEGLSTREAMRELEASEIMAGENVPROC) glewGetProcAddress ("eglStreamReleaseImageNV");
  }

  // EGL_NV_stream_flush
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_flush])
  {
    s_deviceConfig.m_eglStreamFlushNV = (PFNEGLSTREAMFLUSHNVPROC) glewGetProcAddress ("eglStreamFlushNV");
  }

  // EGL_NV_stream_metadata
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata])
  {
    s_deviceConfig.m_eglQueryDisplayAttribNV = (PFNEGLQUERYDISPLAYATTRIBNVPROC) glewGetProcAddress ("eglQueryDisplayAttribNV");
    s_deviceConfig.m_eglSetStreamMetadataNV = (PFNEGLSETSTREAMMETADATANVPROC) glewGetProcAddress ("eglSetStreamMetadataNV");
    s_deviceConfig.m_eglQueryStreamMetadataNV = (PFNEGLQUERYSTREAMMETADATANVPROC) glewGetProcAddress ("eglQueryStreamMetadataNV");
  }

  // EGL_NV_stream_reset
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_reset])
  {
    s_deviceConfig.m_eglResetStreamNV = (PFNEGLRESETSTREAMNVPROC) glewGetProcAddress ("eglResetStreamNV");
  }

  // EGL_NV_stream_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_sync])
  {
    s_deviceConfig.m_eglCreateStreamSyncNV = (PFNEGLCREATESTREAMSYNCNVPROC) glewGetProcAddress ("eglCreateStreamSyncNV");
  }

  // EGL_NV_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_sync])
  {
    s_deviceConfig.m_eglCreateFenceSyncNV = (PFNEGLCREATEFENCESYNCNVPROC) glewGetProcAddress ("eglCreateFenceSyncNV");
    s_deviceConfig.m_eglDestroySyncNV = (PFNEGLDESTROYSYNCNVPROC) glewGetProcAddress ("eglDestroySyncNV");
    s_deviceConfig.m_eglFenceNV = (PFNEGLFENCENVPROC) glewGetProcAddress ("eglFenceNV");
    s_deviceConfig.m_eglClientWaitSyncNV = (PFNEGLCLIENTWAITSYNCNVPROC) glewGetProcAddress ("eglClientWaitSyncNV");
    s_deviceConfig.m_eglSignalSyncNV = (PFNEGLSIGNALSYNCNVPROC) glewGetProcAddress ("eglSignalSyncNV");
    s_deviceConfig.m_eglGetSyncAttribNV = (PFNEGLGETSYNCATTRIBNVPROC) glewGetProcAddress ("eglGetSyncAttribNV");
  }

  // EGL_NV_system_time
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_system_time])
  {
    s_deviceConfig.m_eglGetSystemTimeFrequencyNV = (PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC) glewGetProcAddress ("eglGetSystemTimeFrequencyNV");
    s_deviceConfig.m_eglGetSystemTimeNV = (PFNEGLGETSYSTEMTIMENVPROC) glewGetProcAddress ("eglGetSystemTimeNV");
  }

  // EGL_EXT_compositor
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_compositor])
  {
    s_deviceConfig.m_eglCompositorSetContextListEXT = (PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC) glewGetProcAddress ("eglCompositorSetContextListEXT");
    s_deviceConfig.m_eglCompositorSetContextAttributesEXT = (PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC) glewGetProcAddress ("eglCompositorSetContextAttributesEXT");
    s_deviceConfig.m_eglCompositorSetWindowListEXT = (PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC) glewGetProcAddress ("eglCompositorSetWindowListEXT");
    s_deviceConfig.m_eglCompositorSetWindowAttributesEXT = (PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC) glewGetProcAddress ("eglCompositorSetWindowAttributesEXT");
    s_deviceConfig.m_eglCompositorBindTexWindowEXT = (PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC) glewGetProcAddress ("eglCompositorBindTexWindowEXT");
    s_deviceConfig.m_eglCompositorSetSizeEXT = (PFNEGLCOMPOSITORSETSIZEEXTPROC) glewGetProcAddress ("eglCompositorSetSizeEXT");
    s_deviceConfig.m_eglCompositorSwapPolicyEXT = (PFNEGLCOMPOSITORSWAPPOLICYEXTPROC) glewGetProcAddress ("eglCompositorSwapPolicyEXT");
  }

  // EGL_WL_bind_wayland_display
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display])
  {
    s_deviceConfig.m_eglBindWaylandDisplayWL = (PFNEGLBINDWAYLANDDISPLAYWLPROC) glewGetProcAddress ("eglBindWaylandDisplayWL");
    s_deviceConfig.m_eglUnbindWaylandDisplayWL = (PFNEGLUNBINDWAYLANDDISPLAYWLPROC) glewGetProcAddress ("eglUnbindWaylandDisplayWL");
    s_deviceConfig.m_eglQueryWaylandBufferWL = (PFNEGLQUERYWAYLANDBUFFERWLPROC) glewGetProcAddress ("eglQueryWaylandBufferWL");
  }

  // EGL_WL_create_wayland_buffer_from_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_WL_create_wayland_buffer_from_image])
  {
    s_deviceConfig.m_eglCreateWaylandBufferFromImageWL = (PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC) glewGetProcAddress ("eglCreateWaylandBufferFromImageWL");
  }

  s_initialised = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::egl::Deinitialise ()
{
  s_initialised = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
