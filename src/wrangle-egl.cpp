////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
  // EGL_VERSION_1_1 - eglBindTexImage
  if (!prototypeCalled && eglConfig.m_eglBindTexImage)
  {
    prototypeCalled = true;
    return eglConfig.m_eglBindTexImage (dpy, surface, buffer);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_1 - eglReleaseTexImage
  if (!prototypeCalled && eglConfig.m_eglReleaseTexImage)
  {
    prototypeCalled = true;
    return eglConfig.m_eglReleaseTexImage (dpy, surface, buffer);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_1 - eglSurfaceAttrib
  if (!prototypeCalled && eglConfig.m_eglSurfaceAttrib)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSurfaceAttrib (dpy, surface, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapInterval (EGLDisplay dpy, EGLint interval)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_1 - eglSwapInterval
  if (!prototypeCalled && eglConfig.m_eglSwapInterval)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSwapInterval (dpy, interval);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglBindAPI (EGLenum api)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_2 - eglBindAPI
  if (!prototypeCalled && eglConfig.m_eglBindAPI)
  {
    prototypeCalled = true;
    return eglConfig.m_eglBindAPI (api);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLenum _glew_egl_eglQueryAPI ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_2 - eglQueryAPI
  if (!prototypeCalled && eglConfig.m_eglQueryAPI)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryAPI ();
  }
  return ((EGLenum)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_2 - eglCreatePbufferFromClientBuffer
  if (!prototypeCalled && eglConfig.m_eglCreatePbufferFromClientBuffer)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreatePbufferFromClientBuffer (dpy, buftype, buffer, config, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglReleaseThread ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_2 - eglReleaseThread
  if (!prototypeCalled && eglConfig.m_eglReleaseThread)
  {
    prototypeCalled = true;
    return eglConfig.m_eglReleaseThread ();
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglWaitClient ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_2 - eglWaitClient
  if (!prototypeCalled && eglConfig.m_eglWaitClient)
  {
    prototypeCalled = true;
    return eglConfig.m_eglWaitClient ();
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLContext _glew_egl_eglGetCurrentContext ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_4 - eglGetCurrentContext
  if (!prototypeCalled && eglConfig.m_eglGetCurrentContext)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetCurrentContext ();
  }
  return ((EGLContext)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSync _glew_egl_eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglCreateSync
  if (!prototypeCalled && eglConfig.m_eglCreateSync)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateSync (dpy, type, attrib_list);
  }
  // EGL_KHR_cl_event2 - eglCreateSync
  if (!prototypeCalled && eglConfig.m_eglCreateSync64KHR)
  {
    prototypeCalled = true;
    return (EGLSync) eglConfig.m_eglCreateSync64KHR (dpy, type, (const EGLAttribKHR *) attrib_list);
  }
  return ((EGLSync)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroySync (EGLDisplay dpy, EGLSync sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglDestroySync
  if (!prototypeCalled && eglConfig.m_eglDestroySync)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroySync (dpy, sync);
  }
  // EGL_KHR_fence_sync - eglDestroySync
  if (!prototypeCalled && eglConfig.m_eglDestroySyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroySyncKHR (dpy, (EGLSyncKHR) sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglClientWaitSync
  if (!prototypeCalled && eglConfig.m_eglClientWaitSync)
  {
    prototypeCalled = true;
    return eglConfig.m_eglClientWaitSync (dpy, sync, flags, timeout);
  }
  // EGL_KHR_fence_sync - eglClientWaitSync
  if (!prototypeCalled && eglConfig.m_eglClientWaitSyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglClientWaitSyncKHR (dpy, (EGLSyncKHR) sync, flags, (EGLTimeKHR) timeout);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglGetSyncAttrib
  if (!prototypeCalled && eglConfig.m_eglGetSyncAttrib)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetSyncAttrib (dpy, sync, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLImage _glew_egl_eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglCreateImage
  if (!prototypeCalled && eglConfig.m_eglCreateImage)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateImage (dpy, ctx, target, buffer, attrib_list);
  }
  return ((EGLImage)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroyImage (EGLDisplay dpy, EGLImage image)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglDestroyImage
  if (!prototypeCalled && eglConfig.m_eglDestroyImage)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroyImage (dpy, image);
  }
  // EGL_KHR_image - eglDestroyImage
  if (!prototypeCalled && eglConfig.m_eglDestroyImageKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroyImageKHR (dpy, (EGLImageKHR) image);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLDisplay _glew_egl_eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglGetPlatformDisplay
  if (!prototypeCalled && eglConfig.m_eglGetPlatformDisplay)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetPlatformDisplay (platform, native_display, attrib_list);
  }
  return ((EGLDisplay)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglCreatePlatformWindowSurface
  if (!prototypeCalled && eglConfig.m_eglCreatePlatformWindowSurface)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreatePlatformWindowSurface (dpy, config, native_window, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglCreatePlatformPixmapSurface
  if (!prototypeCalled && eglConfig.m_eglCreatePlatformPixmapSurface)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreatePlatformPixmapSurface (dpy, config, native_pixmap, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_VERSION_1_5 - eglWaitSync
  if (!prototypeCalled && eglConfig.m_eglWaitSync)
  {
    prototypeCalled = true;
    return eglConfig.m_eglWaitSync (dpy, sync, flags);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_egl_eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_ANDROID_blob_cache - eglSetBlobCacheFuncsANDROID
  if (!prototypeCalled && eglConfig.m_eglSetBlobCacheFuncsANDROID)
  {
    prototypeCalled = true;
    eglConfig.m_eglSetBlobCacheFuncsANDROID (dpy, set, get);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_ANDROID_native_fence_sync - eglDupNativeFenceFDANDROID
  if (!prototypeCalled && eglConfig.m_eglDupNativeFenceFDANDROID)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDupNativeFenceFDANDROID (dpy, sync);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_ANGLE_query_surface_pointer - eglQuerySurfacePointerANGLE
  if (!prototypeCalled && eglConfig.m_eglQuerySurfacePointerANGLE)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQuerySurfacePointerANGLE (dpy, surface, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_device_base - eglQueryDeviceAttribEXT
  if (!prototypeCalled && eglConfig.m_eglQueryDeviceAttribEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryDeviceAttribEXT (device, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_device_base - eglQueryDeviceStringEXT
  if (!prototypeCalled && eglConfig.m_eglQueryDeviceStringEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryDeviceStringEXT (device, name);
  }
  return ((const char *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_device_base - eglQueryDevicesEXT
  if (!prototypeCalled && eglConfig.m_eglQueryDevicesEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryDevicesEXT (max_devices, devices, num_devices);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_device_base - eglQueryDisplayAttribEXT
  if (!prototypeCalled && eglConfig.m_eglQueryDisplayAttribEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryDisplayAttribEXT (dpy, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglGetOutputLayersEXT
  if (!prototypeCalled && eglConfig.m_eglGetOutputLayersEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetOutputLayersEXT (dpy, attrib_list, layers, max_layers, num_layers);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglGetOutputPortsEXT
  if (!prototypeCalled && eglConfig.m_eglGetOutputPortsEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetOutputPortsEXT (dpy, attrib_list, ports, max_ports, num_ports);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglOutputLayerAttribEXT
  if (!prototypeCalled && eglConfig.m_eglOutputLayerAttribEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglOutputLayerAttribEXT (dpy, layer, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglQueryOutputLayerAttribEXT
  if (!prototypeCalled && eglConfig.m_eglQueryOutputLayerAttribEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryOutputLayerAttribEXT (dpy, layer, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglQueryOutputLayerStringEXT
  if (!prototypeCalled && eglConfig.m_eglQueryOutputLayerStringEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryOutputLayerStringEXT (dpy, layer, name);
  }
  return ((const char *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglOutputPortAttribEXT
  if (!prototypeCalled && eglConfig.m_eglOutputPortAttribEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglOutputPortAttribEXT (dpy, port, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglQueryOutputPortAttribEXT
  if (!prototypeCalled && eglConfig.m_eglQueryOutputPortAttribEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryOutputPortAttribEXT (dpy, port, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char * _glew_egl_eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_output_base - eglQueryOutputPortStringEXT
  if (!prototypeCalled && eglConfig.m_eglQueryOutputPortStringEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryOutputPortStringEXT (dpy, port, name);
  }
  return ((const char *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLDisplay _glew_egl_eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_platform_base - eglGetPlatformDisplayEXT
  if (!prototypeCalled && eglConfig.m_eglGetPlatformDisplayEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetPlatformDisplayEXT (platform, native_display, attrib_list);
  }
  return ((EGLDisplay)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_platform_base - eglCreatePlatformWindowSurfaceEXT
  if (!prototypeCalled && eglConfig.m_eglCreatePlatformWindowSurfaceEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreatePlatformWindowSurfaceEXT (dpy, config, native_window, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_platform_base - eglCreatePlatformPixmapSurfaceEXT
  if (!prototypeCalled && eglConfig.m_eglCreatePlatformPixmapSurfaceEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreatePlatformPixmapSurfaceEXT (dpy, config, native_pixmap, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_stream_consumer_egloutput - eglStreamConsumerOutputEXT
  if (!prototypeCalled && eglConfig.m_eglStreamConsumerOutputEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglStreamConsumerOutputEXT (dpy, stream, layer);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_EXT_swap_buffers_with_damage - eglSwapBuffersWithDamageEXT
  if (!prototypeCalled && eglConfig.m_eglSwapBuffersWithDamageEXT)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSwapBuffersWithDamageEXT (dpy, surface, rects, n_rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_HI_clientpixmap - eglCreatePixmapSurfaceHI
  if (!prototypeCalled && eglConfig.m_eglCreatePixmapSurfaceHI)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreatePixmapSurfaceHI (dpy, config, pixmap);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncKHR _glew_egl_eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_cl_event2 - eglCreateSync64KHR
  if (!prototypeCalled && eglConfig.m_eglCreateSync64KHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateSync64KHR (dpy, type, attrib_list);
  }
  return ((EGLSyncKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncKHR _glew_egl_eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_fence_sync - eglCreateSyncKHR
  if (!prototypeCalled && eglConfig.m_eglCreateSyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateSyncKHR (dpy, type, attrib_list);
  }
  return ((EGLSyncKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_fence_sync - eglDestroySyncKHR
  if (!prototypeCalled && eglConfig.m_eglDestroySyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroySyncKHR (dpy, sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_fence_sync - eglClientWaitSyncKHR
  if (!prototypeCalled && eglConfig.m_eglClientWaitSyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglClientWaitSyncKHR (dpy, sync, flags, timeout);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_fence_sync - eglGetSyncAttribKHR
  if (!prototypeCalled && eglConfig.m_eglGetSyncAttribKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetSyncAttribKHR (dpy, sync, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLImageKHR _glew_egl_eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_image - eglCreateImageKHR
  if (!prototypeCalled && eglConfig.m_eglCreateImageKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateImageKHR (dpy, ctx, target, buffer, attrib_list);
  }
  return ((EGLImageKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_image - eglDestroyImageKHR
  if (!prototypeCalled && eglConfig.m_eglDestroyImageKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroyImageKHR (dpy, image);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_lock_surface - eglLockSurfaceKHR
  if (!prototypeCalled && eglConfig.m_eglLockSurfaceKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglLockSurfaceKHR (dpy, surface, attrib_list);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_lock_surface - eglUnlockSurfaceKHR
  if (!prototypeCalled && eglConfig.m_eglUnlockSurfaceKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglUnlockSurfaceKHR (dpy, surface);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_lock_surface3 - eglQuerySurface64KHR
  if (!prototypeCalled && eglConfig.m_eglQuerySurface64KHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQuerySurface64KHR (dpy, surface, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_partial_update - eglSetDamageRegionKHR
  if (!prototypeCalled && eglConfig.m_eglSetDamageRegionKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSetDamageRegionKHR (dpy, surface, rects, n_rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_reusable_sync - eglSignalSyncKHR
  if (!prototypeCalled && eglConfig.m_eglSignalSyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSignalSyncKHR (dpy, sync, mode);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLStreamKHR _glew_egl_eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream - eglCreateStreamKHR
  if (!prototypeCalled && eglConfig.m_eglCreateStreamKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateStreamKHR (dpy, attrib_list);
  }
  return ((EGLStreamKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream - eglDestroyStreamKHR
  if (!prototypeCalled && eglConfig.m_eglDestroyStreamKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroyStreamKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream - eglStreamAttribKHR
  if (!prototypeCalled && eglConfig.m_eglStreamAttribKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglStreamAttribKHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream - eglQueryStreamKHR
  if (!prototypeCalled && eglConfig.m_eglQueryStreamKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryStreamKHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream - eglQueryStreamu64KHR
  if (!prototypeCalled && eglConfig.m_eglQueryStreamu64KHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryStreamu64KHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerGLTextureExternalKHR
  if (!prototypeCalled && eglConfig.m_eglStreamConsumerGLTextureExternalKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglStreamConsumerGLTextureExternalKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerAcquireKHR
  if (!prototypeCalled && eglConfig.m_eglStreamConsumerAcquireKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglStreamConsumerAcquireKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerReleaseKHR
  if (!prototypeCalled && eglConfig.m_eglStreamConsumerReleaseKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglStreamConsumerReleaseKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLNativeFileDescriptorKHR _glew_egl_eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_cross_process_fd - eglGetStreamFileDescriptorKHR
  if (!prototypeCalled && eglConfig.m_eglGetStreamFileDescriptorKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetStreamFileDescriptorKHR (dpy, stream);
  }
  return ((EGLNativeFileDescriptorKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLStreamKHR _glew_egl_eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_cross_process_fd - eglCreateStreamFromFileDescriptorKHR
  if (!prototypeCalled && eglConfig.m_eglCreateStreamFromFileDescriptorKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateStreamFromFileDescriptorKHR (dpy, file_descriptor);
  }
  return ((EGLStreamKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_fifo - eglQueryStreamTimeKHR
  if (!prototypeCalled && eglConfig.m_eglQueryStreamTimeKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryStreamTimeKHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSurface _glew_egl_eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_stream_producer_eglsurface - eglCreateStreamProducerSurfaceKHR
  if (!prototypeCalled && eglConfig.m_eglCreateStreamProducerSurfaceKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateStreamProducerSurfaceKHR (dpy, config, stream, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_swap_buffers_with_damage - eglSwapBuffersWithDamageKHR
  if (!prototypeCalled && eglConfig.m_eglSwapBuffersWithDamageKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSwapBuffersWithDamageKHR (dpy, surface, rects, n_rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_KHR_wait_sync - eglWaitSyncKHR
  if (!prototypeCalled && eglConfig.m_eglWaitSyncKHR)
  {
    prototypeCalled = true;
    return eglConfig.m_eglWaitSyncKHR (dpy, sync, flags);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLImageKHR _glew_egl_eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_MESA_drm_image - eglCreateDRMImageMESA
  if (!prototypeCalled && eglConfig.m_eglCreateDRMImageMESA)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateDRMImageMESA (dpy, attrib_list);
  }
  return ((EGLImageKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_MESA_drm_image - eglExportDRMImageMESA
  if (!prototypeCalled && eglConfig.m_eglExportDRMImageMESA)
  {
    prototypeCalled = true;
    return eglConfig.m_eglExportDRMImageMESA (dpy, image, name, handle, stride);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_MESA_image_dma_buf_export - eglExportDMABUFImageQueryMESA
  if (!prototypeCalled && eglConfig.m_eglExportDMABUFImageQueryMESA)
  {
    prototypeCalled = true;
    return eglConfig.m_eglExportDMABUFImageQueryMESA (dpy, image, fourcc, num_planes, modifiers);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_MESA_image_dma_buf_export - eglExportDMABUFImageMESA
  if (!prototypeCalled && eglConfig.m_eglExportDMABUFImageMESA)
  {
    prototypeCalled = true;
    return eglConfig.m_eglExportDMABUFImageMESA (dpy, image, fds, strides, offsets);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NOK_swap_region - eglSwapBuffersRegionNOK
  if (!prototypeCalled && eglConfig.m_eglSwapBuffersRegionNOK)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSwapBuffersRegionNOK (dpy, surface, numRects, rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NOK_swap_region2 - eglSwapBuffersRegion2NOK
  if (!prototypeCalled && eglConfig.m_eglSwapBuffersRegion2NOK)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSwapBuffersRegion2NOK (dpy, surface, numRects, rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_native_query - eglQueryNativeDisplayNV
  if (!prototypeCalled && eglConfig.m_eglQueryNativeDisplayNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryNativeDisplayNV (dpy, display_id);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_native_query - eglQueryNativeWindowNV
  if (!prototypeCalled && eglConfig.m_eglQueryNativeWindowNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryNativeWindowNV (dpy, surf, window);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_native_query - eglQueryNativePixmapNV
  if (!prototypeCalled && eglConfig.m_eglQueryNativePixmapNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglQueryNativePixmapNV (dpy, surf, pixmap);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_post_sub_buffer - eglPostSubBufferNV
  if (!prototypeCalled && eglConfig.m_eglPostSubBufferNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglPostSubBufferNV (dpy, surface, x, y, width, height);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncKHR _glew_egl_eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_stream_sync - eglCreateStreamSyncNV
  if (!prototypeCalled && eglConfig.m_eglCreateStreamSyncNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateStreamSyncNV (dpy, stream, type, attrib_list);
  }
  return ((EGLSyncKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLSyncNV _glew_egl_eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_sync - eglCreateFenceSyncNV
  if (!prototypeCalled && eglConfig.m_eglCreateFenceSyncNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglCreateFenceSyncNV (dpy, condition, attrib_list);
  }
  return ((EGLSyncNV)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglDestroySyncNV (EGLSyncNV sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_sync - eglDestroySyncNV
  if (!prototypeCalled && eglConfig.m_eglDestroySyncNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglDestroySyncNV (sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglFenceNV (EGLSyncNV sync)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_sync - eglFenceNV
  if (!prototypeCalled && eglConfig.m_eglFenceNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglFenceNV (sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLint _glew_egl_eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_sync - eglClientWaitSyncNV
  if (!prototypeCalled && eglConfig.m_eglClientWaitSyncNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglClientWaitSyncNV (sync, flags, timeout);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglSignalSyncNV (EGLSyncNV sync, EGLenum mode)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_sync - eglSignalSyncNV
  if (!prototypeCalled && eglConfig.m_eglSignalSyncNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglSignalSyncNV (sync, mode);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean _glew_egl_eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value)
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_sync - eglGetSyncAttribNV
  if (!prototypeCalled && eglConfig.m_eglGetSyncAttribNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetSyncAttribNV (sync, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLuint64NV _glew_egl_eglGetSystemTimeFrequencyNV ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_system_time - eglGetSystemTimeFrequencyNV
  if (!prototypeCalled && eglConfig.m_eglGetSystemTimeFrequencyNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetSystemTimeFrequencyNV ();
  }
  return ((EGLuint64NV)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLuint64NV _glew_egl_eglGetSystemTimeNV ()
{
  bool prototypeCalled = false;
  const glew::egl::DeviceConfig &eglConfig = glew::egl::GetConfig ();
  // EGL_NV_system_time - eglGetSystemTimeNV
  if (!prototypeCalled && eglConfig.m_eglGetSystemTimeNV)
  {
    prototypeCalled = true;
    return eglConfig.m_eglGetSystemTimeNV ();
  }
  return ((EGLuint64NV)0);
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
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_framebuffer_target] = (supportedExtensions.find ("EGL_ANDROID_framebuffer_target") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_image_native_buffer] = (supportedExtensions.find ("EGL_ANDROID_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync] = (supportedExtensions.find ("EGL_ANDROID_native_fence_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_recordable] = (supportedExtensions.find ("EGL_ANDROID_recordable") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_d3d_share_handle_client_buffer] = (supportedExtensions.find ("EGL_ANGLE_d3d_share_handle_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_device_d3d] = (supportedExtensions.find ("EGL_ANGLE_device_d3d") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer] = (supportedExtensions.find ("EGL_ANGLE_query_surface_pointer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_surface_d3d_texture_2d_share_handle] = (supportedExtensions.find ("EGL_ANGLE_surface_d3d_texture_2d_share_handle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_window_fixed_size] = (supportedExtensions.find ("EGL_ANGLE_window_fixed_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_pixmap_multisample_discard] = (supportedExtensions.find ("EGL_ARM_pixmap_multisample_discard") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_buffer_age] = (supportedExtensions.find ("EGL_EXT_buffer_age") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_extensions] = (supportedExtensions.find ("EGL_EXT_client_extensions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_create_context_robustness] = (supportedExtensions.find ("EGL_EXT_create_context_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base] = (supportedExtensions.find ("EGL_EXT_device_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_drm] = (supportedExtensions.find ("EGL_EXT_device_drm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_enumeration] = (supportedExtensions.find ("EGL_EXT_device_enumeration") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_openwf] = (supportedExtensions.find ("EGL_EXT_device_openwf") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query] = (supportedExtensions.find ("EGL_EXT_device_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import] = (supportedExtensions.find ("EGL_EXT_image_dma_buf_import") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_multiview_window] = (supportedExtensions.find ("EGL_EXT_multiview_window") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_base] = (supportedExtensions.find ("EGL_EXT_output_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_drm] = (supportedExtensions.find ("EGL_EXT_output_drm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_openwf] = (supportedExtensions.find ("EGL_EXT_output_openwf") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_base] = (supportedExtensions.find ("EGL_EXT_platform_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_device] = (supportedExtensions.find ("EGL_EXT_platform_device") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_wayland] = (supportedExtensions.find ("EGL_EXT_platform_wayland") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_x11] = (supportedExtensions.find ("EGL_EXT_platform_x11") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_protected_surface] = (supportedExtensions.find ("EGL_EXT_protected_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput] = (supportedExtensions.find ("EGL_EXT_stream_consumer_egloutput") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage] = (supportedExtensions.find ("EGL_EXT_swap_buffers_with_damage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_yuv_surface] = (supportedExtensions.find ("EGL_EXT_yuv_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap] = (supportedExtensions.find ("EGL_HI_clientpixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_HI_colorformats] = (supportedExtensions.find ("EGL_HI_colorformats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_IMG_context_priority] = (supportedExtensions.find ("EGL_IMG_context_priority") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event] = (supportedExtensions.find ("EGL_KHR_cl_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2] = (supportedExtensions.find ("EGL_KHR_cl_event2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_config_attribs] = (supportedExtensions.find ("EGL_KHR_config_attribs") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_client_get_all_proc_addresses] = (supportedExtensions.find ("EGL_KHR_client_get_all_proc_addresses") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_create_context] = (supportedExtensions.find ("EGL_KHR_create_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_create_context_no_error] = (supportedExtensions.find ("EGL_KHR_create_context_no_error") != supportedExtensions.end ());
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
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_partial_update] = (supportedExtensions.find ("EGL_KHR_partial_update") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_android] = (supportedExtensions.find ("EGL_KHR_platform_android") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_gbm] = (supportedExtensions.find ("EGL_KHR_platform_gbm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_wayland] = (supportedExtensions.find ("EGL_KHR_platform_wayland") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_x11] = (supportedExtensions.find ("EGL_KHR_platform_x11") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] = (supportedExtensions.find ("EGL_KHR_reusable_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream] = (supportedExtensions.find ("EGL_KHR_stream") != supportedExtensions.end ());
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
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region] = (supportedExtensions.find ("EGL_NOK_swap_region") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2] = (supportedExtensions.find ("EGL_NOK_swap_region2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_texture_from_pixmap] = (supportedExtensions.find ("EGL_NOK_texture_from_pixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_3dvision_surface] = (supportedExtensions.find ("EGL_NV_3dvision_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_coverage_sample] = (supportedExtensions.find ("EGL_NV_coverage_sample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_coverage_sample_resolve] = (supportedExtensions.find ("EGL_NV_coverage_sample_resolve") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_cuda_event] = (supportedExtensions.find ("EGL_NV_cuda_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_depth_nonlinear] = (supportedExtensions.find ("EGL_NV_depth_nonlinear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_device_cuda] = (supportedExtensions.find ("EGL_NV_device_cuda") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_native_query] = (supportedExtensions.find ("EGL_NV_native_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_convert_rounding] = (supportedExtensions.find ("EGL_NV_post_convert_rounding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer] = (supportedExtensions.find ("EGL_NV_post_sub_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_sync] = (supportedExtensions.find ("EGL_NV_stream_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_sync] = (supportedExtensions.find ("EGL_NV_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_system_time] = (supportedExtensions.find ("EGL_NV_system_time") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_TIZEN_image_native_buffer] = (supportedExtensions.find ("EGL_TIZEN_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_TIZEN_image_native_surface] = (supportedExtensions.find ("EGL_TIZEN_image_native_surface") != supportedExtensions.end ());

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

  // EGL_ANDROID_native_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync])
  {
    s_deviceConfig.m_eglDupNativeFenceFDANDROID = (PFNEGLDUPNATIVEFENCEFDANDROIDPROC) glewGetProcAddress ("eglDupNativeFenceFDANDROID");
  }

  // EGL_ANGLE_query_surface_pointer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer])
  {
    s_deviceConfig.m_eglQuerySurfacePointerANGLE = (PFNEGLQUERYSURFACEPOINTERANGLEPROC) glewGetProcAddress ("eglQuerySurfacePointerANGLE");
  }

  // EGL_EXT_device_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base])
  {
    s_deviceConfig.m_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) glewGetProcAddress ("eglQueryDeviceAttribEXT");
    s_deviceConfig.m_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) glewGetProcAddress ("eglQueryDeviceStringEXT");
    s_deviceConfig.m_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) glewGetProcAddress ("eglQueryDevicesEXT");
    s_deviceConfig.m_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) glewGetProcAddress ("eglQueryDisplayAttribEXT");
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

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::egl::Deinitialise ()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
