////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <string>

#include <unordered_set>

#include <wrangle-egl.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglBindTexImage

EGLBoolean glew::egl::eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
  // EGL_VERSION_1_1 - eglBindTexImage
  if (s_deviceConfig.m_eglBindTexImage)
  {
    return s_deviceConfig.m_eglBindTexImage (dpy, surface, buffer);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglReleaseTexImage

EGLBoolean glew::egl::eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
  // EGL_VERSION_1_1 - eglReleaseTexImage
  if (s_deviceConfig.m_eglReleaseTexImage)
  {
    return s_deviceConfig.m_eglReleaseTexImage (dpy, surface, buffer);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSurfaceAttrib

EGLBoolean glew::egl::eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
  // EGL_VERSION_1_1 - eglSurfaceAttrib
  if (s_deviceConfig.m_eglSurfaceAttrib)
  {
    return s_deviceConfig.m_eglSurfaceAttrib (dpy, surface, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSwapInterval

EGLBoolean glew::egl::eglSwapInterval (EGLDisplay dpy, EGLint interval)
{
  // EGL_VERSION_1_1 - eglSwapInterval
  if (s_deviceConfig.m_eglSwapInterval)
  {
    return s_deviceConfig.m_eglSwapInterval (dpy, interval);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglBindAPI

EGLBoolean glew::egl::eglBindAPI (EGLenum api)
{
  // EGL_VERSION_1_2 - eglBindAPI
  if (s_deviceConfig.m_eglBindAPI)
  {
    return s_deviceConfig.m_eglBindAPI (api);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryAPI

EGLenum glew::egl::eglQueryAPI ()
{
  // EGL_VERSION_1_2 - eglQueryAPI
  if (s_deviceConfig.m_eglQueryAPI)
  {
    return s_deviceConfig.m_eglQueryAPI ();
  }
  return ((EGLenum)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreatePbufferFromClientBuffer

EGLSurface glew::egl::eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list)
{
  // EGL_VERSION_1_2 - eglCreatePbufferFromClientBuffer
  if (s_deviceConfig.m_eglCreatePbufferFromClientBuffer)
  {
    return s_deviceConfig.m_eglCreatePbufferFromClientBuffer (dpy, buftype, buffer, config, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglReleaseThread

EGLBoolean glew::egl::eglReleaseThread ()
{
  // EGL_VERSION_1_2 - eglReleaseThread
  if (s_deviceConfig.m_eglReleaseThread)
  {
    return s_deviceConfig.m_eglReleaseThread ();
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglWaitClient

EGLBoolean glew::egl::eglWaitClient ()
{
  // EGL_VERSION_1_2 - eglWaitClient
  if (s_deviceConfig.m_eglWaitClient)
  {
    return s_deviceConfig.m_eglWaitClient ();
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetCurrentContext

EGLContext glew::egl::eglGetCurrentContext ()
{
  // EGL_VERSION_1_4 - eglGetCurrentContext
  if (s_deviceConfig.m_eglGetCurrentContext)
  {
    return s_deviceConfig.m_eglGetCurrentContext ();
  }
  return ((EGLContext)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateSync

EGLSync glew::egl::eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list)
{
  // EGL_VERSION_1_5 - eglCreateSync
  if (s_deviceConfig.m_eglCreateSync)
  {
    return s_deviceConfig.m_eglCreateSync (dpy, type, attrib_list);
  }
  return ((EGLSync)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDestroySync

EGLBoolean glew::egl::eglDestroySync (EGLDisplay dpy, EGLSync sync)
{
  // EGL_VERSION_1_5 - eglDestroySync
  if (s_deviceConfig.m_eglDestroySync)
  {
    return s_deviceConfig.m_eglDestroySync (dpy, sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglClientWaitSync

EGLint glew::egl::eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
  // EGL_VERSION_1_5 - eglClientWaitSync
  if (s_deviceConfig.m_eglClientWaitSync)
  {
    return s_deviceConfig.m_eglClientWaitSync (dpy, sync, flags, timeout);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetSyncAttrib

EGLBoolean glew::egl::eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value)
{
  // EGL_VERSION_1_5 - eglGetSyncAttrib
  if (s_deviceConfig.m_eglGetSyncAttrib)
  {
    return s_deviceConfig.m_eglGetSyncAttrib (dpy, sync, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateImage

EGLImage glew::egl::eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list)
{
  // EGL_VERSION_1_5 - eglCreateImage
  if (s_deviceConfig.m_eglCreateImage)
  {
    return s_deviceConfig.m_eglCreateImage (dpy, ctx, target, buffer, attrib_list);
  }
  return ((EGLImage)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDestroyImage

EGLBoolean glew::egl::eglDestroyImage (EGLDisplay dpy, EGLImage image)
{
  // EGL_VERSION_1_5 - eglDestroyImage
  if (s_deviceConfig.m_eglDestroyImage)
  {
    return s_deviceConfig.m_eglDestroyImage (dpy, image);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetPlatformDisplay

EGLDisplay glew::egl::eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list)
{
  // EGL_VERSION_1_5 - eglGetPlatformDisplay
  if (s_deviceConfig.m_eglGetPlatformDisplay)
  {
    return s_deviceConfig.m_eglGetPlatformDisplay (platform, native_display, attrib_list);
  }
  return ((EGLDisplay)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreatePlatformWindowSurface

EGLSurface glew::egl::eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list)
{
  // EGL_VERSION_1_5 - eglCreatePlatformWindowSurface
  if (s_deviceConfig.m_eglCreatePlatformWindowSurface)
  {
    return s_deviceConfig.m_eglCreatePlatformWindowSurface (dpy, config, native_window, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreatePlatformPixmapSurface

EGLSurface glew::egl::eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list)
{
  // EGL_VERSION_1_5 - eglCreatePlatformPixmapSurface
  if (s_deviceConfig.m_eglCreatePlatformPixmapSurface)
  {
    return s_deviceConfig.m_eglCreatePlatformPixmapSurface (dpy, config, native_pixmap, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglWaitSync

EGLBoolean glew::egl::eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags)
{
  // EGL_VERSION_1_5 - eglWaitSync
  if (s_deviceConfig.m_eglWaitSync)
  {
    return s_deviceConfig.m_eglWaitSync (dpy, sync, flags);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSetBlobCacheFuncsANDROID

void  glew::egl::eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
  // EGL_ANDROID_blob_cache - eglSetBlobCacheFuncsANDROID
  if (s_deviceConfig.m_eglSetBlobCacheFuncsANDROID)
  {
    s_deviceConfig.m_eglSetBlobCacheFuncsANDROID (dpy, set, get);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDupNativeFenceFDANDROID

EGLint glew::egl::eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync)
{
  // EGL_ANDROID_native_fence_sync - eglDupNativeFenceFDANDROID
  if (s_deviceConfig.m_eglDupNativeFenceFDANDROID)
  {
    return s_deviceConfig.m_eglDupNativeFenceFDANDROID (dpy, sync);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQuerySurfacePointerANGLE

EGLBoolean glew::egl::eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value)
{
  // EGL_ANGLE_query_surface_pointer - eglQuerySurfacePointerANGLE
  if (s_deviceConfig.m_eglQuerySurfacePointerANGLE)
  {
    return s_deviceConfig.m_eglQuerySurfacePointerANGLE (dpy, surface, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryDeviceAttribEXT

EGLBoolean glew::egl::eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value)
{
  // EGL_EXT_device_base - eglQueryDeviceAttribEXT
  if (s_deviceConfig.m_eglQueryDeviceAttribEXT)
  {
    return s_deviceConfig.m_eglQueryDeviceAttribEXT (device, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryDeviceStringEXT

const char * glew::egl::eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name)
{
  // EGL_EXT_device_base - eglQueryDeviceStringEXT
  if (s_deviceConfig.m_eglQueryDeviceStringEXT)
  {
    return s_deviceConfig.m_eglQueryDeviceStringEXT (device, name);
  }
  return ((const char *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryDevicesEXT

EGLBoolean glew::egl::eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices)
{
  // EGL_EXT_device_base - eglQueryDevicesEXT
  if (s_deviceConfig.m_eglQueryDevicesEXT)
  {
    return s_deviceConfig.m_eglQueryDevicesEXT (max_devices, devices, num_devices);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryDisplayAttribEXT

EGLBoolean glew::egl::eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value)
{
  // EGL_EXT_device_base - eglQueryDisplayAttribEXT
  if (s_deviceConfig.m_eglQueryDisplayAttribEXT)
  {
    return s_deviceConfig.m_eglQueryDisplayAttribEXT (dpy, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetOutputLayersEXT

EGLBoolean glew::egl::eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers)
{
  // EGL_EXT_output_base - eglGetOutputLayersEXT
  if (s_deviceConfig.m_eglGetOutputLayersEXT)
  {
    return s_deviceConfig.m_eglGetOutputLayersEXT (dpy, attrib_list, layers, max_layers, num_layers);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetOutputPortsEXT

EGLBoolean glew::egl::eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports)
{
  // EGL_EXT_output_base - eglGetOutputPortsEXT
  if (s_deviceConfig.m_eglGetOutputPortsEXT)
  {
    return s_deviceConfig.m_eglGetOutputPortsEXT (dpy, attrib_list, ports, max_ports, num_ports);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglOutputLayerAttribEXT

EGLBoolean glew::egl::eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value)
{
  // EGL_EXT_output_base - eglOutputLayerAttribEXT
  if (s_deviceConfig.m_eglOutputLayerAttribEXT)
  {
    return s_deviceConfig.m_eglOutputLayerAttribEXT (dpy, layer, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryOutputLayerAttribEXT

EGLBoolean glew::egl::eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value)
{
  // EGL_EXT_output_base - eglQueryOutputLayerAttribEXT
  if (s_deviceConfig.m_eglQueryOutputLayerAttribEXT)
  {
    return s_deviceConfig.m_eglQueryOutputLayerAttribEXT (dpy, layer, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryOutputLayerStringEXT

const char * glew::egl::eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name)
{
  // EGL_EXT_output_base - eglQueryOutputLayerStringEXT
  if (s_deviceConfig.m_eglQueryOutputLayerStringEXT)
  {
    return s_deviceConfig.m_eglQueryOutputLayerStringEXT (dpy, layer, name);
  }
  return ((const char *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglOutputPortAttribEXT

EGLBoolean glew::egl::eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value)
{
  // EGL_EXT_output_base - eglOutputPortAttribEXT
  if (s_deviceConfig.m_eglOutputPortAttribEXT)
  {
    return s_deviceConfig.m_eglOutputPortAttribEXT (dpy, port, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryOutputPortAttribEXT

EGLBoolean glew::egl::eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value)
{
  // EGL_EXT_output_base - eglQueryOutputPortAttribEXT
  if (s_deviceConfig.m_eglQueryOutputPortAttribEXT)
  {
    return s_deviceConfig.m_eglQueryOutputPortAttribEXT (dpy, port, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryOutputPortStringEXT

const char * glew::egl::eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name)
{
  // EGL_EXT_output_base - eglQueryOutputPortStringEXT
  if (s_deviceConfig.m_eglQueryOutputPortStringEXT)
  {
    return s_deviceConfig.m_eglQueryOutputPortStringEXT (dpy, port, name);
  }
  return ((const char *)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetPlatformDisplayEXT

EGLDisplay glew::egl::eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list)
{
  // EGL_EXT_platform_base - eglGetPlatformDisplayEXT
  if (s_deviceConfig.m_eglGetPlatformDisplayEXT)
  {
    return s_deviceConfig.m_eglGetPlatformDisplayEXT (platform, native_display, attrib_list);
  }
  return ((EGLDisplay)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreatePlatformWindowSurfaceEXT

EGLSurface glew::egl::eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list)
{
  // EGL_EXT_platform_base - eglCreatePlatformWindowSurfaceEXT
  if (s_deviceConfig.m_eglCreatePlatformWindowSurfaceEXT)
  {
    return s_deviceConfig.m_eglCreatePlatformWindowSurfaceEXT (dpy, config, native_window, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreatePlatformPixmapSurfaceEXT

EGLSurface glew::egl::eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list)
{
  // EGL_EXT_platform_base - eglCreatePlatformPixmapSurfaceEXT
  if (s_deviceConfig.m_eglCreatePlatformPixmapSurfaceEXT)
  {
    return s_deviceConfig.m_eglCreatePlatformPixmapSurfaceEXT (dpy, config, native_pixmap, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglStreamConsumerOutputEXT

EGLBoolean glew::egl::eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
  // EGL_EXT_stream_consumer_egloutput - eglStreamConsumerOutputEXT
  if (s_deviceConfig.m_eglStreamConsumerOutputEXT)
  {
    return s_deviceConfig.m_eglStreamConsumerOutputEXT (dpy, stream, layer);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSwapBuffersWithDamageEXT

EGLBoolean glew::egl::eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  // EGL_EXT_swap_buffers_with_damage - eglSwapBuffersWithDamageEXT
  if (s_deviceConfig.m_eglSwapBuffersWithDamageEXT)
  {
    return s_deviceConfig.m_eglSwapBuffersWithDamageEXT (dpy, surface, rects, n_rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreatePixmapSurfaceHI

EGLSurface glew::egl::eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap)
{
  // EGL_HI_clientpixmap - eglCreatePixmapSurfaceHI
  if (s_deviceConfig.m_eglCreatePixmapSurfaceHI)
  {
    return s_deviceConfig.m_eglCreatePixmapSurfaceHI (dpy, config, pixmap);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateSync64KHR

EGLSyncKHR glew::egl::eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list)
{
  // EGL_KHR_cl_event2 - eglCreateSync64KHR
  if (s_deviceConfig.m_eglCreateSync64KHR)
  {
    return s_deviceConfig.m_eglCreateSync64KHR (dpy, type, attrib_list);
  }
  return ((EGLSyncKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateSyncKHR

EGLSyncKHR glew::egl::eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list)
{
  // EGL_KHR_fence_sync - eglCreateSyncKHR
  if (s_deviceConfig.m_eglCreateSyncKHR)
  {
    return s_deviceConfig.m_eglCreateSyncKHR (dpy, type, attrib_list);
  }
  return ((EGLSyncKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDestroySyncKHR

EGLBoolean glew::egl::eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync)
{
  // EGL_KHR_fence_sync - eglDestroySyncKHR
  if (s_deviceConfig.m_eglDestroySyncKHR)
  {
    return s_deviceConfig.m_eglDestroySyncKHR (dpy, sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglClientWaitSyncKHR

EGLint glew::egl::eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout)
{
  // EGL_KHR_fence_sync - eglClientWaitSyncKHR
  if (s_deviceConfig.m_eglClientWaitSyncKHR)
  {
    return s_deviceConfig.m_eglClientWaitSyncKHR (dpy, sync, flags, timeout);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetSyncAttribKHR

EGLBoolean glew::egl::eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value)
{
  // EGL_KHR_fence_sync - eglGetSyncAttribKHR
  if (s_deviceConfig.m_eglGetSyncAttribKHR)
  {
    return s_deviceConfig.m_eglGetSyncAttribKHR (dpy, sync, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateImageKHR

EGLImageKHR glew::egl::eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list)
{
  // EGL_KHR_image - eglCreateImageKHR
  if (s_deviceConfig.m_eglCreateImageKHR)
  {
    return s_deviceConfig.m_eglCreateImageKHR (dpy, ctx, target, buffer, attrib_list);
  }
  return ((EGLImageKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDestroyImageKHR

EGLBoolean glew::egl::eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image)
{
  // EGL_KHR_image - eglDestroyImageKHR
  if (s_deviceConfig.m_eglDestroyImageKHR)
  {
    return s_deviceConfig.m_eglDestroyImageKHR (dpy, image);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglLockSurfaceKHR

EGLBoolean glew::egl::eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list)
{
  // EGL_KHR_lock_surface - eglLockSurfaceKHR
  if (s_deviceConfig.m_eglLockSurfaceKHR)
  {
    return s_deviceConfig.m_eglLockSurfaceKHR (dpy, surface, attrib_list);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglUnlockSurfaceKHR

EGLBoolean glew::egl::eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface)
{
  // EGL_KHR_lock_surface - eglUnlockSurfaceKHR
  if (s_deviceConfig.m_eglUnlockSurfaceKHR)
  {
    return s_deviceConfig.m_eglUnlockSurfaceKHR (dpy, surface);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQuerySurface64KHR

EGLBoolean glew::egl::eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value)
{
  // EGL_KHR_lock_surface3 - eglQuerySurface64KHR
  if (s_deviceConfig.m_eglQuerySurface64KHR)
  {
    return s_deviceConfig.m_eglQuerySurface64KHR (dpy, surface, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSetDamageRegionKHR

EGLBoolean glew::egl::eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  // EGL_KHR_partial_update - eglSetDamageRegionKHR
  if (s_deviceConfig.m_eglSetDamageRegionKHR)
  {
    return s_deviceConfig.m_eglSetDamageRegionKHR (dpy, surface, rects, n_rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSignalSyncKHR

EGLBoolean glew::egl::eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
  // EGL_KHR_reusable_sync - eglSignalSyncKHR
  if (s_deviceConfig.m_eglSignalSyncKHR)
  {
    return s_deviceConfig.m_eglSignalSyncKHR (dpy, sync, mode);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateStreamKHR

EGLStreamKHR glew::egl::eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list)
{
  // EGL_KHR_stream - eglCreateStreamKHR
  if (s_deviceConfig.m_eglCreateStreamKHR)
  {
    return s_deviceConfig.m_eglCreateStreamKHR (dpy, attrib_list);
  }
  return ((EGLStreamKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDestroyStreamKHR

EGLBoolean glew::egl::eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  // EGL_KHR_stream - eglDestroyStreamKHR
  if (s_deviceConfig.m_eglDestroyStreamKHR)
  {
    return s_deviceConfig.m_eglDestroyStreamKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglStreamAttribKHR

EGLBoolean glew::egl::eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
  // EGL_KHR_stream - eglStreamAttribKHR
  if (s_deviceConfig.m_eglStreamAttribKHR)
  {
    return s_deviceConfig.m_eglStreamAttribKHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryStreamKHR

EGLBoolean glew::egl::eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value)
{
  // EGL_KHR_stream - eglQueryStreamKHR
  if (s_deviceConfig.m_eglQueryStreamKHR)
  {
    return s_deviceConfig.m_eglQueryStreamKHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryStreamu64KHR

EGLBoolean glew::egl::eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value)
{
  // EGL_KHR_stream - eglQueryStreamu64KHR
  if (s_deviceConfig.m_eglQueryStreamu64KHR)
  {
    return s_deviceConfig.m_eglQueryStreamu64KHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglStreamConsumerGLTextureExternalKHR

EGLBoolean glew::egl::eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerGLTextureExternalKHR
  if (s_deviceConfig.m_eglStreamConsumerGLTextureExternalKHR)
  {
    return s_deviceConfig.m_eglStreamConsumerGLTextureExternalKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglStreamConsumerAcquireKHR

EGLBoolean glew::egl::eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerAcquireKHR
  if (s_deviceConfig.m_eglStreamConsumerAcquireKHR)
  {
    return s_deviceConfig.m_eglStreamConsumerAcquireKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglStreamConsumerReleaseKHR

EGLBoolean glew::egl::eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  // EGL_KHR_stream_consumer_gltexture - eglStreamConsumerReleaseKHR
  if (s_deviceConfig.m_eglStreamConsumerReleaseKHR)
  {
    return s_deviceConfig.m_eglStreamConsumerReleaseKHR (dpy, stream);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetStreamFileDescriptorKHR

EGLNativeFileDescriptorKHR glew::egl::eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream)
{
  // EGL_KHR_stream_cross_process_fd - eglGetStreamFileDescriptorKHR
  if (s_deviceConfig.m_eglGetStreamFileDescriptorKHR)
  {
    return s_deviceConfig.m_eglGetStreamFileDescriptorKHR (dpy, stream);
  }
  return ((EGLNativeFileDescriptorKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateStreamFromFileDescriptorKHR

EGLStreamKHR glew::egl::eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor)
{
  // EGL_KHR_stream_cross_process_fd - eglCreateStreamFromFileDescriptorKHR
  if (s_deviceConfig.m_eglCreateStreamFromFileDescriptorKHR)
  {
    return s_deviceConfig.m_eglCreateStreamFromFileDescriptorKHR (dpy, file_descriptor);
  }
  return ((EGLStreamKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryStreamTimeKHR

EGLBoolean glew::egl::eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value)
{
  // EGL_KHR_stream_fifo - eglQueryStreamTimeKHR
  if (s_deviceConfig.m_eglQueryStreamTimeKHR)
  {
    return s_deviceConfig.m_eglQueryStreamTimeKHR (dpy, stream, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateStreamProducerSurfaceKHR

EGLSurface glew::egl::eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list)
{
  // EGL_KHR_stream_producer_eglsurface - eglCreateStreamProducerSurfaceKHR
  if (s_deviceConfig.m_eglCreateStreamProducerSurfaceKHR)
  {
    return s_deviceConfig.m_eglCreateStreamProducerSurfaceKHR (dpy, config, stream, attrib_list);
  }
  return ((EGLSurface)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSwapBuffersWithDamageKHR

EGLBoolean glew::egl::eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects)
{
  // EGL_KHR_swap_buffers_with_damage - eglSwapBuffersWithDamageKHR
  if (s_deviceConfig.m_eglSwapBuffersWithDamageKHR)
  {
    return s_deviceConfig.m_eglSwapBuffersWithDamageKHR (dpy, surface, rects, n_rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglWaitSyncKHR

EGLint glew::egl::eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
  // EGL_KHR_wait_sync - eglWaitSyncKHR
  if (s_deviceConfig.m_eglWaitSyncKHR)
  {
    return s_deviceConfig.m_eglWaitSyncKHR (dpy, sync, flags);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateDRMImageMESA

EGLImageKHR glew::egl::eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list)
{
  // EGL_MESA_drm_image - eglCreateDRMImageMESA
  if (s_deviceConfig.m_eglCreateDRMImageMESA)
  {
    return s_deviceConfig.m_eglCreateDRMImageMESA (dpy, attrib_list);
  }
  return ((EGLImageKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglExportDRMImageMESA

EGLBoolean glew::egl::eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride)
{
  // EGL_MESA_drm_image - eglExportDRMImageMESA
  if (s_deviceConfig.m_eglExportDRMImageMESA)
  {
    return s_deviceConfig.m_eglExportDRMImageMESA (dpy, image, name, handle, stride);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglExportDMABUFImageQueryMESA

EGLBoolean glew::egl::eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers)
{
  // EGL_MESA_image_dma_buf_export - eglExportDMABUFImageQueryMESA
  if (s_deviceConfig.m_eglExportDMABUFImageQueryMESA)
  {
    return s_deviceConfig.m_eglExportDMABUFImageQueryMESA (dpy, image, fourcc, num_planes, modifiers);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglExportDMABUFImageMESA

EGLBoolean glew::egl::eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets)
{
  // EGL_MESA_image_dma_buf_export - eglExportDMABUFImageMESA
  if (s_deviceConfig.m_eglExportDMABUFImageMESA)
  {
    return s_deviceConfig.m_eglExportDMABUFImageMESA (dpy, image, fds, strides, offsets);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSwapBuffersRegionNOK

EGLBoolean glew::egl::eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
  // EGL_NOK_swap_region - eglSwapBuffersRegionNOK
  if (s_deviceConfig.m_eglSwapBuffersRegionNOK)
  {
    return s_deviceConfig.m_eglSwapBuffersRegionNOK (dpy, surface, numRects, rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSwapBuffersRegion2NOK

EGLBoolean glew::egl::eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects)
{
  // EGL_NOK_swap_region2 - eglSwapBuffersRegion2NOK
  if (s_deviceConfig.m_eglSwapBuffersRegion2NOK)
  {
    return s_deviceConfig.m_eglSwapBuffersRegion2NOK (dpy, surface, numRects, rects);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryNativeDisplayNV

EGLBoolean glew::egl::eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id)
{
  // EGL_NV_native_query - eglQueryNativeDisplayNV
  if (s_deviceConfig.m_eglQueryNativeDisplayNV)
  {
    return s_deviceConfig.m_eglQueryNativeDisplayNV (dpy, display_id);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryNativeWindowNV

EGLBoolean glew::egl::eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window)
{
  // EGL_NV_native_query - eglQueryNativeWindowNV
  if (s_deviceConfig.m_eglQueryNativeWindowNV)
  {
    return s_deviceConfig.m_eglQueryNativeWindowNV (dpy, surf, window);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglQueryNativePixmapNV

EGLBoolean glew::egl::eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap)
{
  // EGL_NV_native_query - eglQueryNativePixmapNV
  if (s_deviceConfig.m_eglQueryNativePixmapNV)
  {
    return s_deviceConfig.m_eglQueryNativePixmapNV (dpy, surf, pixmap);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglPostSubBufferNV

EGLBoolean glew::egl::eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height)
{
  // EGL_NV_post_sub_buffer - eglPostSubBufferNV
  if (s_deviceConfig.m_eglPostSubBufferNV)
  {
    return s_deviceConfig.m_eglPostSubBufferNV (dpy, surface, x, y, width, height);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateStreamSyncNV

EGLSyncKHR glew::egl::eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list)
{
  // EGL_NV_stream_sync - eglCreateStreamSyncNV
  if (s_deviceConfig.m_eglCreateStreamSyncNV)
  {
    return s_deviceConfig.m_eglCreateStreamSyncNV (dpy, stream, type, attrib_list);
  }
  return ((EGLSyncKHR)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglCreateFenceSyncNV

EGLSyncNV glew::egl::eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list)
{
  // EGL_NV_sync - eglCreateFenceSyncNV
  if (s_deviceConfig.m_eglCreateFenceSyncNV)
  {
    return s_deviceConfig.m_eglCreateFenceSyncNV (dpy, condition, attrib_list);
  }
  return ((EGLSyncNV)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglDestroySyncNV

EGLBoolean glew::egl::eglDestroySyncNV (EGLSyncNV sync)
{
  // EGL_NV_sync - eglDestroySyncNV
  if (s_deviceConfig.m_eglDestroySyncNV)
  {
    return s_deviceConfig.m_eglDestroySyncNV (sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglFenceNV

EGLBoolean glew::egl::eglFenceNV (EGLSyncNV sync)
{
  // EGL_NV_sync - eglFenceNV
  if (s_deviceConfig.m_eglFenceNV)
  {
    return s_deviceConfig.m_eglFenceNV (sync);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglClientWaitSyncNV

EGLint glew::egl::eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout)
{
  // EGL_NV_sync - eglClientWaitSyncNV
  if (s_deviceConfig.m_eglClientWaitSyncNV)
  {
    return s_deviceConfig.m_eglClientWaitSyncNV (sync, flags, timeout);
  }
  return ((EGLint)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglSignalSyncNV

EGLBoolean glew::egl::eglSignalSyncNV (EGLSyncNV sync, EGLenum mode)
{
  // EGL_NV_sync - eglSignalSyncNV
  if (s_deviceConfig.m_eglSignalSyncNV)
  {
    return s_deviceConfig.m_eglSignalSyncNV (sync, mode);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetSyncAttribNV

EGLBoolean glew::egl::eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value)
{
  // EGL_NV_sync - eglGetSyncAttribNV
  if (s_deviceConfig.m_eglGetSyncAttribNV)
  {
    return s_deviceConfig.m_eglGetSyncAttribNV (sync, attribute, value);
  }
  return ((EGLBoolean)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetSystemTimeFrequencyNV

EGLuint64NV glew::egl::eglGetSystemTimeFrequencyNV ()
{
  // EGL_NV_system_time - eglGetSystemTimeFrequencyNV
  if (s_deviceConfig.m_eglGetSystemTimeFrequencyNV)
  {
    return s_deviceConfig.m_eglGetSystemTimeFrequencyNV ();
  }
  return ((EGLuint64NV)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef eglGetSystemTimeNV

EGLuint64NV glew::egl::eglGetSystemTimeNV ()
{
  // EGL_NV_system_time - eglGetSystemTimeNV
  if (s_deviceConfig.m_eglGetSystemTimeNV)
  {
    return s_deviceConfig.m_eglGetSystemTimeNV ();
  }
  return ((EGLuint64NV)0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

glew::egl::DeviceConfig glew::egl::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::egl::Initialise ()
{
  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  // 
  // Determine current driver's feature reporting.
  // 

  //PFNEGLQUERYSTRINGPROC _eglQueryString = &eglQueryString;

  const unsigned char *eglVersion = (const unsigned char*) "";

  //if (_eglQueryString != 0)
  {
    eglVersion = (const unsigned char *) eglQueryString (EGL_NO_DISPLAY, EGL_VERSION);
  }

  const size_t eglVersionLen = strlen ((const char *) eglVersion);

  if (eglVersionLen)
  {
#if _WIN32
  #define strncasecmp _strnicmp
#endif

    const bool egl10Supported = (strncasecmp ((const char *) eglVersion, "1.0", 3) == 0);
    const bool egl11Supported = (strncasecmp ((const char *) eglVersion, "1.1", 3) == 0);
    const bool egl12Supported = (strncasecmp ((const char *) eglVersion, "1.2", 3) == 0);
    const bool egl13Supported = (strncasecmp ((const char *) eglVersion, "1.3", 3) == 0);
    const bool egl14Supported = (strncasecmp ((const char *) eglVersion, "1.4", 3) == 0);
    const bool egl15Supported = (strncasecmp ((const char *) eglVersion, "1.5", 3) == 0);

    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_0] = egl10Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] = egl11Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] = egl12Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_3] = egl13Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4] = egl14Supported;
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] = egl15Supported;
  }

  // 
  // Evaluate extension support.
  // 

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *eglExtensions = (const unsigned char*) "";

  //if (_eglQueryString != 0)
  {
    eglExtensions = (const unsigned char *) eglQueryString (EGL_NO_DISPLAY, EGL_EXTENSIONS);
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

        strncpy (thisExtBuffer, (const char *)thisExtStart, len);

        thisExtBuffer [min (len, 127)] = '\0';

        thisExtEnd = (unsigned char *) seperator + 1; // skip tab character
      }
      else
      {
        const size_t len = strlen ((const char *) thisExtStart);

        strncpy (thisExtBuffer, (const char *) thisExtStart, len);

        thisExtBuffer [min (len + 1, 127)] = '\0';

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
    s_deviceConfig.m_eglBindTexImage = (PFNEGLBINDTEXIMAGEPROC) eglGetProcAddress ("eglBindTexImage");
    s_deviceConfig.m_eglReleaseTexImage = (PFNEGLRELEASETEXIMAGEPROC) eglGetProcAddress ("eglReleaseTexImage");
    s_deviceConfig.m_eglSurfaceAttrib = (PFNEGLSURFACEATTRIBPROC) eglGetProcAddress ("eglSurfaceAttrib");
    s_deviceConfig.m_eglSwapInterval = (PFNEGLSWAPINTERVALPROC) eglGetProcAddress ("eglSwapInterval");
  }

  // EGL_VERSION_1_2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2])
  {
    s_deviceConfig.m_eglBindAPI = (PFNEGLBINDAPIPROC) eglGetProcAddress ("eglBindAPI");
    s_deviceConfig.m_eglQueryAPI = (PFNEGLQUERYAPIPROC) eglGetProcAddress ("eglQueryAPI");
    s_deviceConfig.m_eglCreatePbufferFromClientBuffer = (PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC) eglGetProcAddress ("eglCreatePbufferFromClientBuffer");
    s_deviceConfig.m_eglReleaseThread = (PFNEGLRELEASETHREADPROC) eglGetProcAddress ("eglReleaseThread");
    s_deviceConfig.m_eglWaitClient = (PFNEGLWAITCLIENTPROC) eglGetProcAddress ("eglWaitClient");
  }

  // EGL_VERSION_1_4
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4])
  {
    s_deviceConfig.m_eglGetCurrentContext = (PFNEGLGETCURRENTCONTEXTPROC) eglGetProcAddress ("eglGetCurrentContext");
  }

  // EGL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5])
  {
    s_deviceConfig.m_eglCreateSync = (PFNEGLCREATESYNCPROC) eglGetProcAddress ("eglCreateSync");
    s_deviceConfig.m_eglDestroySync = (PFNEGLDESTROYSYNCPROC) eglGetProcAddress ("eglDestroySync");
    s_deviceConfig.m_eglClientWaitSync = (PFNEGLCLIENTWAITSYNCPROC) eglGetProcAddress ("eglClientWaitSync");
    s_deviceConfig.m_eglGetSyncAttrib = (PFNEGLGETSYNCATTRIBPROC) eglGetProcAddress ("eglGetSyncAttrib");
  }

  // EGL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5])
  {
    s_deviceConfig.m_eglCreateImage = (PFNEGLCREATEIMAGEPROC) eglGetProcAddress ("eglCreateImage");
    s_deviceConfig.m_eglDestroyImage = (PFNEGLDESTROYIMAGEPROC) eglGetProcAddress ("eglDestroyImage");
  }

  // EGL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5])
  {
    s_deviceConfig.m_eglGetPlatformDisplay = (PFNEGLGETPLATFORMDISPLAYPROC) eglGetProcAddress ("eglGetPlatformDisplay");
    s_deviceConfig.m_eglCreatePlatformWindowSurface = (PFNEGLCREATEPLATFORMWINDOWSURFACEPROC) eglGetProcAddress ("eglCreatePlatformWindowSurface");
    s_deviceConfig.m_eglCreatePlatformPixmapSurface = (PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC) eglGetProcAddress ("eglCreatePlatformPixmapSurface");
  }

  // EGL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5])
  {
    s_deviceConfig.m_eglWaitSync = (PFNEGLWAITSYNCPROC) eglGetProcAddress ("eglWaitSync");
  }

  // EGL_ANDROID_blob_cache
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_blob_cache])
  {
    s_deviceConfig.m_eglSetBlobCacheFuncsANDROID = (PFNEGLSETBLOBCACHEFUNCSANDROIDPROC) eglGetProcAddress ("eglSetBlobCacheFuncsANDROID");
  }

  // EGL_ANDROID_native_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync])
  {
    s_deviceConfig.m_eglDupNativeFenceFDANDROID = (PFNEGLDUPNATIVEFENCEFDANDROIDPROC) eglGetProcAddress ("eglDupNativeFenceFDANDROID");
  }

  // EGL_ANGLE_query_surface_pointer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer])
  {
    s_deviceConfig.m_eglQuerySurfacePointerANGLE = (PFNEGLQUERYSURFACEPOINTERANGLEPROC) eglGetProcAddress ("eglQuerySurfacePointerANGLE");
  }

  // EGL_EXT_device_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base])
  {
    s_deviceConfig.m_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) eglGetProcAddress ("eglQueryDeviceAttribEXT");
    s_deviceConfig.m_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) eglGetProcAddress ("eglQueryDeviceStringEXT");
    s_deviceConfig.m_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) eglGetProcAddress ("eglQueryDevicesEXT");
    s_deviceConfig.m_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) eglGetProcAddress ("eglQueryDisplayAttribEXT");
  }

  // EGL_EXT_device_enumeration
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_enumeration])
  {
    s_deviceConfig.m_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) eglGetProcAddress ("eglQueryDevicesEXT");
  }

  // EGL_EXT_device_query
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query])
  {
    s_deviceConfig.m_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) eglGetProcAddress ("eglQueryDeviceAttribEXT");
    s_deviceConfig.m_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) eglGetProcAddress ("eglQueryDeviceStringEXT");
    s_deviceConfig.m_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) eglGetProcAddress ("eglQueryDisplayAttribEXT");
  }

  // EGL_EXT_output_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_base])
  {
    s_deviceConfig.m_eglGetOutputLayersEXT = (PFNEGLGETOUTPUTLAYERSEXTPROC) eglGetProcAddress ("eglGetOutputLayersEXT");
    s_deviceConfig.m_eglGetOutputPortsEXT = (PFNEGLGETOUTPUTPORTSEXTPROC) eglGetProcAddress ("eglGetOutputPortsEXT");
    s_deviceConfig.m_eglOutputLayerAttribEXT = (PFNEGLOUTPUTLAYERATTRIBEXTPROC) eglGetProcAddress ("eglOutputLayerAttribEXT");
    s_deviceConfig.m_eglQueryOutputLayerAttribEXT = (PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC) eglGetProcAddress ("eglQueryOutputLayerAttribEXT");
    s_deviceConfig.m_eglQueryOutputLayerStringEXT = (PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC) eglGetProcAddress ("eglQueryOutputLayerStringEXT");
    s_deviceConfig.m_eglOutputPortAttribEXT = (PFNEGLOUTPUTPORTATTRIBEXTPROC) eglGetProcAddress ("eglOutputPortAttribEXT");
    s_deviceConfig.m_eglQueryOutputPortAttribEXT = (PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC) eglGetProcAddress ("eglQueryOutputPortAttribEXT");
    s_deviceConfig.m_eglQueryOutputPortStringEXT = (PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC) eglGetProcAddress ("eglQueryOutputPortStringEXT");
  }

  // EGL_EXT_platform_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_base])
  {
    s_deviceConfig.m_eglGetPlatformDisplayEXT = (PFNEGLGETPLATFORMDISPLAYEXTPROC) eglGetProcAddress ("eglGetPlatformDisplayEXT");
    s_deviceConfig.m_eglCreatePlatformWindowSurfaceEXT = (PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC) eglGetProcAddress ("eglCreatePlatformWindowSurfaceEXT");
    s_deviceConfig.m_eglCreatePlatformPixmapSurfaceEXT = (PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC) eglGetProcAddress ("eglCreatePlatformPixmapSurfaceEXT");
  }

  // EGL_EXT_stream_consumer_egloutput
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput])
  {
    s_deviceConfig.m_eglStreamConsumerOutputEXT = (PFNEGLSTREAMCONSUMEROUTPUTEXTPROC) eglGetProcAddress ("eglStreamConsumerOutputEXT");
  }

  // EGL_EXT_swap_buffers_with_damage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage])
  {
    s_deviceConfig.m_eglSwapBuffersWithDamageEXT = (PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC) eglGetProcAddress ("eglSwapBuffersWithDamageEXT");
  }

  // EGL_HI_clientpixmap
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap])
  {
    s_deviceConfig.m_eglCreatePixmapSurfaceHI = (PFNEGLCREATEPIXMAPSURFACEHIPROC) eglGetProcAddress ("eglCreatePixmapSurfaceHI");
  }

  // EGL_KHR_cl_event2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2])
  {
    s_deviceConfig.m_eglCreateSync64KHR = (PFNEGLCREATESYNC64KHRPROC) eglGetProcAddress ("eglCreateSync64KHR");
  }

  // EGL_KHR_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync])
  {
    s_deviceConfig.m_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) eglGetProcAddress ("eglCreateSyncKHR");
    s_deviceConfig.m_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) eglGetProcAddress ("eglDestroySyncKHR");
    s_deviceConfig.m_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) eglGetProcAddress ("eglClientWaitSyncKHR");
    s_deviceConfig.m_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) eglGetProcAddress ("eglGetSyncAttribKHR");
  }

  // EGL_KHR_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image])
  {
    s_deviceConfig.m_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) eglGetProcAddress ("eglCreateImageKHR");
    s_deviceConfig.m_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) eglGetProcAddress ("eglDestroyImageKHR");
  }

  // EGL_KHR_image_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image_base])
  {
    s_deviceConfig.m_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) eglGetProcAddress ("eglCreateImageKHR");
    s_deviceConfig.m_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) eglGetProcAddress ("eglDestroyImageKHR");
  }

  // EGL_KHR_lock_surface
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface])
  {
    s_deviceConfig.m_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) eglGetProcAddress ("eglLockSurfaceKHR");
    s_deviceConfig.m_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) eglGetProcAddress ("eglUnlockSurfaceKHR");
  }

  // EGL_KHR_lock_surface3
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3])
  {
    s_deviceConfig.m_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) eglGetProcAddress ("eglLockSurfaceKHR");
    s_deviceConfig.m_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) eglGetProcAddress ("eglUnlockSurfaceKHR");
    s_deviceConfig.m_eglQuerySurface64KHR = (PFNEGLQUERYSURFACE64KHRPROC) eglGetProcAddress ("eglQuerySurface64KHR");
  }

  // EGL_KHR_partial_update
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_partial_update])
  {
    s_deviceConfig.m_eglSetDamageRegionKHR = (PFNEGLSETDAMAGEREGIONKHRPROC) eglGetProcAddress ("eglSetDamageRegionKHR");
  }

  // EGL_KHR_reusable_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync])
  {
    s_deviceConfig.m_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) eglGetProcAddress ("eglCreateSyncKHR");
    s_deviceConfig.m_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) eglGetProcAddress ("eglDestroySyncKHR");
    s_deviceConfig.m_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) eglGetProcAddress ("eglClientWaitSyncKHR");
    s_deviceConfig.m_eglSignalSyncKHR = (PFNEGLSIGNALSYNCKHRPROC) eglGetProcAddress ("eglSignalSyncKHR");
    s_deviceConfig.m_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) eglGetProcAddress ("eglGetSyncAttribKHR");
  }

  // EGL_KHR_stream
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream])
  {
    s_deviceConfig.m_eglCreateStreamKHR = (PFNEGLCREATESTREAMKHRPROC) eglGetProcAddress ("eglCreateStreamKHR");
    s_deviceConfig.m_eglDestroyStreamKHR = (PFNEGLDESTROYSTREAMKHRPROC) eglGetProcAddress ("eglDestroyStreamKHR");
    s_deviceConfig.m_eglStreamAttribKHR = (PFNEGLSTREAMATTRIBKHRPROC) eglGetProcAddress ("eglStreamAttribKHR");
    s_deviceConfig.m_eglQueryStreamKHR = (PFNEGLQUERYSTREAMKHRPROC) eglGetProcAddress ("eglQueryStreamKHR");
    s_deviceConfig.m_eglQueryStreamu64KHR = (PFNEGLQUERYSTREAMU64KHRPROC) eglGetProcAddress ("eglQueryStreamu64KHR");
  }

  // EGL_KHR_stream_consumer_gltexture
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture])
  {
    s_deviceConfig.m_eglStreamConsumerGLTextureExternalKHR = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC) eglGetProcAddress ("eglStreamConsumerGLTextureExternalKHR");
    s_deviceConfig.m_eglStreamConsumerAcquireKHR = (PFNEGLSTREAMCONSUMERACQUIREKHRPROC) eglGetProcAddress ("eglStreamConsumerAcquireKHR");
    s_deviceConfig.m_eglStreamConsumerReleaseKHR = (PFNEGLSTREAMCONSUMERRELEASEKHRPROC) eglGetProcAddress ("eglStreamConsumerReleaseKHR");
  }

  // EGL_KHR_stream_cross_process_fd
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd])
  {
    s_deviceConfig.m_eglGetStreamFileDescriptorKHR = (PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC) eglGetProcAddress ("eglGetStreamFileDescriptorKHR");
    s_deviceConfig.m_eglCreateStreamFromFileDescriptorKHR = (PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC) eglGetProcAddress ("eglCreateStreamFromFileDescriptorKHR");
  }

  // EGL_KHR_stream_fifo
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_fifo])
  {
    s_deviceConfig.m_eglQueryStreamTimeKHR = (PFNEGLQUERYSTREAMTIMEKHRPROC) eglGetProcAddress ("eglQueryStreamTimeKHR");
  }

  // EGL_KHR_stream_producer_eglsurface
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_eglsurface])
  {
    s_deviceConfig.m_eglCreateStreamProducerSurfaceKHR = (PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC) eglGetProcAddress ("eglCreateStreamProducerSurfaceKHR");
  }

  // EGL_KHR_swap_buffers_with_damage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_swap_buffers_with_damage])
  {
    s_deviceConfig.m_eglSwapBuffersWithDamageKHR = (PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC) eglGetProcAddress ("eglSwapBuffersWithDamageKHR");
  }

  // EGL_KHR_wait_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_wait_sync])
  {
    s_deviceConfig.m_eglWaitSyncKHR = (PFNEGLWAITSYNCKHRPROC) eglGetProcAddress ("eglWaitSyncKHR");
  }

  // EGL_MESA_drm_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_drm_image])
  {
    s_deviceConfig.m_eglCreateDRMImageMESA = (PFNEGLCREATEDRMIMAGEMESAPROC) eglGetProcAddress ("eglCreateDRMImageMESA");
    s_deviceConfig.m_eglExportDRMImageMESA = (PFNEGLEXPORTDRMIMAGEMESAPROC) eglGetProcAddress ("eglExportDRMImageMESA");
  }

  // EGL_MESA_image_dma_buf_export
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export])
  {
    s_deviceConfig.m_eglExportDMABUFImageQueryMESA = (PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC) eglGetProcAddress ("eglExportDMABUFImageQueryMESA");
    s_deviceConfig.m_eglExportDMABUFImageMESA = (PFNEGLEXPORTDMABUFIMAGEMESAPROC) eglGetProcAddress ("eglExportDMABUFImageMESA");
  }

  // EGL_NOK_swap_region
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region])
  {
    s_deviceConfig.m_eglSwapBuffersRegionNOK = (PFNEGLSWAPBUFFERSREGIONNOKPROC) eglGetProcAddress ("eglSwapBuffersRegionNOK");
  }

  // EGL_NOK_swap_region2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2])
  {
    s_deviceConfig.m_eglSwapBuffersRegion2NOK = (PFNEGLSWAPBUFFERSREGION2NOKPROC) eglGetProcAddress ("eglSwapBuffersRegion2NOK");
  }

  // EGL_NV_native_query
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_native_query])
  {
    s_deviceConfig.m_eglQueryNativeDisplayNV = (PFNEGLQUERYNATIVEDISPLAYNVPROC) eglGetProcAddress ("eglQueryNativeDisplayNV");
    s_deviceConfig.m_eglQueryNativeWindowNV = (PFNEGLQUERYNATIVEWINDOWNVPROC) eglGetProcAddress ("eglQueryNativeWindowNV");
    s_deviceConfig.m_eglQueryNativePixmapNV = (PFNEGLQUERYNATIVEPIXMAPNVPROC) eglGetProcAddress ("eglQueryNativePixmapNV");
  }

  // EGL_NV_post_sub_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer])
  {
    s_deviceConfig.m_eglPostSubBufferNV = (PFNEGLPOSTSUBBUFFERNVPROC) eglGetProcAddress ("eglPostSubBufferNV");
  }

  // EGL_NV_stream_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_sync])
  {
    s_deviceConfig.m_eglCreateStreamSyncNV = (PFNEGLCREATESTREAMSYNCNVPROC) eglGetProcAddress ("eglCreateStreamSyncNV");
  }

  // EGL_NV_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_sync])
  {
    s_deviceConfig.m_eglCreateFenceSyncNV = (PFNEGLCREATEFENCESYNCNVPROC) eglGetProcAddress ("eglCreateFenceSyncNV");
    s_deviceConfig.m_eglDestroySyncNV = (PFNEGLDESTROYSYNCNVPROC) eglGetProcAddress ("eglDestroySyncNV");
    s_deviceConfig.m_eglFenceNV = (PFNEGLFENCENVPROC) eglGetProcAddress ("eglFenceNV");
    s_deviceConfig.m_eglClientWaitSyncNV = (PFNEGLCLIENTWAITSYNCNVPROC) eglGetProcAddress ("eglClientWaitSyncNV");
    s_deviceConfig.m_eglSignalSyncNV = (PFNEGLSIGNALSYNCNVPROC) eglGetProcAddress ("eglSignalSyncNV");
    s_deviceConfig.m_eglGetSyncAttribNV = (PFNEGLGETSYNCATTRIBNVPROC) eglGetProcAddress ("eglGetSyncAttribNV");
  }

  // EGL_NV_system_time
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_system_time])
  {
    s_deviceConfig.m_eglGetSystemTimeFrequencyNV = (PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC) eglGetProcAddress ("eglGetSystemTimeFrequencyNV");
    s_deviceConfig.m_eglGetSystemTimeNV = (PFNEGLGETSYSTEMTIMENVPROC) eglGetProcAddress ("eglGetSystemTimeNV");
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
