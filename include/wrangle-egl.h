////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_EGL_H__
#define __GLEW_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <EGL/egl.h>

#include <EGL/eglext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglChooseConfig (EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglCopyBuffers (EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
extern "C" EGLAPI EGLContext EGLAPIENTRY eglCreateContext (EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list);
extern "C" EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferSurface (EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list);
extern "C" EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurface (EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list);
extern "C" EGLAPI EGLSurface EGLAPIENTRY eglCreateWindowSurface (EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglDestroyContext (EGLDisplay dpy, EGLContext ctx);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglDestroySurface (EGLDisplay dpy, EGLSurface surface);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigAttrib (EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigs (EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config);
extern "C" EGLAPI EGLDisplay EGLAPIENTRY eglGetCurrentDisplay ();
extern "C" EGLAPI EGLSurface EGLAPIENTRY eglGetCurrentSurface (EGLint readdraw);
extern "C" EGLAPI EGLDisplay EGLAPIENTRY eglGetDisplay (EGLNativeDisplayType display_id);
extern "C" EGLAPI EGLint EGLAPIENTRY eglGetError ();
extern "C" EGLAPI __eglMustCastToProperFunctionPointerType EGLAPIENTRY eglGetProcAddress (const char * procname);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglInitialize (EGLDisplay dpy, EGLint * major, EGLint * minor);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglMakeCurrent (EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglQueryContext (EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value);
extern "C" EGLAPI const char * EGLAPIENTRY eglQueryString (EGLDisplay dpy, EGLint name);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffers (EGLDisplay dpy, EGLSurface surface);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglTerminate (EGLDisplay dpy);
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglWaitGL ();
extern "C" EGLAPI EGLBoolean EGLAPIENTRY eglWaitNative (EGLint engine);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLBINDTEXIMAGEPROC) /* eglBindTexImage */ (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLRELEASETEXIMAGEPROC) /* eglReleaseTexImage */ (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSURFACEATTRIBPROC) /* eglSurfaceAttrib */ (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPINTERVALPROC) /* eglSwapInterval */ (EGLDisplay dpy, EGLint interval);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLBINDAPIPROC) /* eglBindAPI */ (EGLenum api);
typedef EGLenum (EGLAPIENTRYP PFNEGLQUERYAPIPROC) /* eglQueryAPI */ ();
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC) /* eglCreatePbufferFromClientBuffer */ (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLRELEASETHREADPROC) /* eglReleaseThread */ ();
typedef EGLBoolean (EGLAPIENTRYP PFNEGLWAITCLIENTPROC) /* eglWaitClient */ ();
typedef EGLContext (EGLAPIENTRYP PFNEGLGETCURRENTCONTEXTPROC) /* eglGetCurrentContext */ ();
typedef EGLSync (EGLAPIENTRYP PFNEGLCREATESYNCPROC) /* eglCreateSync */ (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYSYNCPROC) /* eglDestroySync */ (EGLDisplay dpy, EGLSync sync);
typedef EGLint (EGLAPIENTRYP PFNEGLCLIENTWAITSYNCPROC) /* eglClientWaitSync */ (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETSYNCATTRIBPROC) /* eglGetSyncAttrib */ (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value);
typedef EGLImage (EGLAPIENTRYP PFNEGLCREATEIMAGEPROC) /* eglCreateImage */ (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYIMAGEPROC) /* eglDestroyImage */ (EGLDisplay dpy, EGLImage image);
typedef EGLDisplay (EGLAPIENTRYP PFNEGLGETPLATFORMDISPLAYPROC) /* eglGetPlatformDisplay */ (EGLenum platform, void * native_display, const EGLAttrib * attrib_list);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPLATFORMWINDOWSURFACEPROC) /* eglCreatePlatformWindowSurface */ (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC) /* eglCreatePlatformPixmapSurface */ (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLWAITSYNCPROC) /* eglWaitSync */ (EGLDisplay dpy, EGLSync sync, EGLint flags);
typedef void (EGLAPIENTRYP PFNEGLSETBLOBCACHEFUNCSANDROIDPROC) /* eglSetBlobCacheFuncsANDROID */ (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
typedef EGLint (EGLAPIENTRYP PFNEGLDUPNATIVEFENCEFDANDROIDPROC) /* eglDupNativeFenceFDANDROID */ (EGLDisplay dpy, EGLSyncKHR sync);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSURFACEPOINTERANGLEPROC) /* eglQuerySurfacePointerANGLE */ (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICEATTRIBEXTPROC) /* eglQueryDeviceAttribEXT */ (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
typedef const char * (EGLAPIENTRYP PFNEGLQUERYDEVICESTRINGEXTPROC) /* eglQueryDeviceStringEXT */ (EGLDeviceEXT device, EGLint name);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICESEXTPROC) /* eglQueryDevicesEXT */ (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDISPLAYATTRIBEXTPROC) /* eglQueryDisplayAttribEXT */ (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICESEXTPROC) /* eglQueryDevicesEXT */ (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICEATTRIBEXTPROC) /* eglQueryDeviceAttribEXT */ (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
typedef const char * (EGLAPIENTRYP PFNEGLQUERYDEVICESTRINGEXTPROC) /* eglQueryDeviceStringEXT */ (EGLDeviceEXT device, EGLint name);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDISPLAYATTRIBEXTPROC) /* eglQueryDisplayAttribEXT */ (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETOUTPUTLAYERSEXTPROC) /* eglGetOutputLayersEXT */ (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETOUTPUTPORTSEXTPROC) /* eglGetOutputPortsEXT */ (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLOUTPUTLAYERATTRIBEXTPROC) /* eglOutputLayerAttribEXT */ (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC) /* eglQueryOutputLayerAttribEXT */ (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value);
typedef const char * (EGLAPIENTRYP PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC) /* eglQueryOutputLayerStringEXT */ (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLOUTPUTPORTATTRIBEXTPROC) /* eglOutputPortAttribEXT */ (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC) /* eglQueryOutputPortAttribEXT */ (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value);
typedef const char * (EGLAPIENTRYP PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC) /* eglQueryOutputPortStringEXT */ (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);
typedef EGLDisplay (EGLAPIENTRYP PFNEGLGETPLATFORMDISPLAYEXTPROC) /* eglGetPlatformDisplayEXT */ (EGLenum platform, void * native_display, const EGLint * attrib_list);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC) /* eglCreatePlatformWindowSurfaceEXT */ (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC) /* eglCreatePlatformPixmapSurfaceEXT */ (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMEROUTPUTEXTPROC) /* eglStreamConsumerOutputEXT */ (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC) /* eglSwapBuffersWithDamageEXT */ (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPIXMAPSURFACEHIPROC) /* eglCreatePixmapSurfaceHI */ (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap);
typedef EGLSyncKHR (EGLAPIENTRYP PFNEGLCREATESYNC64KHRPROC) /* eglCreateSync64KHR */ (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);
typedef EGLSyncKHR (EGLAPIENTRYP PFNEGLCREATESYNCKHRPROC) /* eglCreateSyncKHR */ (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYSYNCKHRPROC) /* eglDestroySyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync);
typedef EGLint (EGLAPIENTRYP PFNEGLCLIENTWAITSYNCKHRPROC) /* eglClientWaitSyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETSYNCATTRIBKHRPROC) /* eglGetSyncAttribKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);
typedef EGLImageKHR (EGLAPIENTRYP PFNEGLCREATEIMAGEKHRPROC) /* eglCreateImageKHR */ (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYIMAGEKHRPROC) /* eglDestroyImageKHR */ (EGLDisplay dpy, EGLImageKHR image);
typedef EGLImageKHR (EGLAPIENTRYP PFNEGLCREATEIMAGEKHRPROC) /* eglCreateImageKHR */ (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYIMAGEKHRPROC) /* eglDestroyImageKHR */ (EGLDisplay dpy, EGLImageKHR image);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLLOCKSURFACEKHRPROC) /* eglLockSurfaceKHR */ (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLUNLOCKSURFACEKHRPROC) /* eglUnlockSurfaceKHR */ (EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLLOCKSURFACEKHRPROC) /* eglLockSurfaceKHR */ (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLUNLOCKSURFACEKHRPROC) /* eglUnlockSurfaceKHR */ (EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSURFACE64KHRPROC) /* eglQuerySurface64KHR */ (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSETDAMAGEREGIONKHRPROC) /* eglSetDamageRegionKHR */ (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
typedef EGLSyncKHR (EGLAPIENTRYP PFNEGLCREATESYNCKHRPROC) /* eglCreateSyncKHR */ (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYSYNCKHRPROC) /* eglDestroySyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync);
typedef EGLint (EGLAPIENTRYP PFNEGLCLIENTWAITSYNCKHRPROC) /* eglClientWaitSyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSIGNALSYNCKHRPROC) /* eglSignalSyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETSYNCATTRIBKHRPROC) /* eglGetSyncAttribKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);
typedef EGLStreamKHR (EGLAPIENTRYP PFNEGLCREATESTREAMKHRPROC) /* eglCreateStreamKHR */ (EGLDisplay dpy, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYSTREAMKHRPROC) /* eglDestroyStreamKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMATTRIBKHRPROC) /* eglStreamAttribKHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSTREAMKHRPROC) /* eglQueryStreamKHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSTREAMU64KHRPROC) /* eglQueryStreamu64KHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC) /* eglStreamConsumerGLTextureExternalKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERACQUIREKHRPROC) /* eglStreamConsumerAcquireKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERRELEASEKHRPROC) /* eglStreamConsumerReleaseKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLNativeFileDescriptorKHR (EGLAPIENTRYP PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC) /* eglGetStreamFileDescriptorKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLStreamKHR (EGLAPIENTRYP PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC) /* eglCreateStreamFromFileDescriptorKHR */ (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSTREAMTIMEKHRPROC) /* eglQueryStreamTimeKHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC) /* eglCreateStreamProducerSurfaceKHR */ (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC) /* eglSwapBuffersWithDamageKHR */ (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
typedef EGLint (EGLAPIENTRYP PFNEGLWAITSYNCKHRPROC) /* eglWaitSyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
typedef EGLImageKHR (EGLAPIENTRYP PFNEGLCREATEDRMIMAGEMESAPROC) /* eglCreateDRMImageMESA */ (EGLDisplay dpy, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLEXPORTDRMIMAGEMESAPROC) /* eglExportDRMImageMESA */ (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC) /* eglExportDMABUFImageQueryMESA */ (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLEXPORTDMABUFIMAGEMESAPROC) /* eglExportDMABUFImageMESA */ (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSREGIONNOKPROC) /* eglSwapBuffersRegionNOK */ (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSREGION2NOKPROC) /* eglSwapBuffersRegion2NOK */ (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYNATIVEDISPLAYNVPROC) /* eglQueryNativeDisplayNV */ (EGLDisplay dpy, EGLNativeDisplayType * display_id);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYNATIVEWINDOWNVPROC) /* eglQueryNativeWindowNV */ (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYNATIVEPIXMAPNVPROC) /* eglQueryNativePixmapNV */ (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLPOSTSUBBUFFERNVPROC) /* eglPostSubBufferNV */ (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
typedef EGLSyncKHR (EGLAPIENTRYP PFNEGLCREATESTREAMSYNCNVPROC) /* eglCreateStreamSyncNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);
typedef EGLSyncNV (EGLAPIENTRYP PFNEGLCREATEFENCESYNCNVPROC) /* eglCreateFenceSyncNV */ (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYSYNCNVPROC) /* eglDestroySyncNV */ (EGLSyncNV sync);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLFENCENVPROC) /* eglFenceNV */ (EGLSyncNV sync);
typedef EGLint (EGLAPIENTRYP PFNEGLCLIENTWAITSYNCNVPROC) /* eglClientWaitSyncNV */ (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSIGNALSYNCNVPROC) /* eglSignalSyncNV */ (EGLSyncNV sync, EGLenum mode);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETSYNCATTRIBNVPROC) /* eglGetSyncAttribNV */ (EGLSyncNV sync, EGLint attribute, EGLint * value);
typedef EGLuint64NV (EGLAPIENTRYP PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC) /* eglGetSystemTimeFrequencyNV */ ();
typedef EGLuint64NV (EGLAPIENTRYP PFNEGLGETSYSTEMTIMENVPROC) /* eglGetSystemTimeNV */ ();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{
  class egl
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    enum FeatureSet
    {
      GLEW_EGL_VERSION_1_0,
      GLEW_EGL_VERSION_1_1,
      GLEW_EGL_VERSION_1_2,
      GLEW_EGL_VERSION_1_3,
      GLEW_EGL_VERSION_1_4,
      GLEW_EGL_VERSION_1_5,
      GLEW_EGL_ANDROID_blob_cache,
      GLEW_EGL_ANDROID_framebuffer_target,
      GLEW_EGL_ANDROID_image_native_buffer,
      GLEW_EGL_ANDROID_native_fence_sync,
      GLEW_EGL_ANDROID_recordable,
      GLEW_EGL_ANGLE_d3d_share_handle_client_buffer,
      GLEW_EGL_ANGLE_device_d3d,
      GLEW_EGL_ANGLE_query_surface_pointer,
      GLEW_EGL_ANGLE_surface_d3d_texture_2d_share_handle,
      GLEW_EGL_ANGLE_window_fixed_size,
      GLEW_EGL_ARM_pixmap_multisample_discard,
      GLEW_EGL_EXT_buffer_age,
      GLEW_EGL_EXT_client_extensions,
      GLEW_EGL_EXT_create_context_robustness,
      GLEW_EGL_EXT_device_base,
      GLEW_EGL_EXT_device_drm,
      GLEW_EGL_EXT_device_enumeration,
      GLEW_EGL_EXT_device_openwf,
      GLEW_EGL_EXT_device_query,
      GLEW_EGL_EXT_image_dma_buf_import,
      GLEW_EGL_EXT_multiview_window,
      GLEW_EGL_EXT_output_base,
      GLEW_EGL_EXT_output_drm,
      GLEW_EGL_EXT_output_openwf,
      GLEW_EGL_EXT_platform_base,
      GLEW_EGL_EXT_platform_device,
      GLEW_EGL_EXT_platform_wayland,
      GLEW_EGL_EXT_platform_x11,
      GLEW_EGL_EXT_protected_surface,
      GLEW_EGL_EXT_stream_consumer_egloutput,
      GLEW_EGL_EXT_swap_buffers_with_damage,
      GLEW_EGL_EXT_yuv_surface,
      GLEW_EGL_HI_clientpixmap,
      GLEW_EGL_HI_colorformats,
      GLEW_EGL_IMG_context_priority,
      GLEW_EGL_KHR_cl_event,
      GLEW_EGL_KHR_cl_event2,
      GLEW_EGL_KHR_config_attribs,
      GLEW_EGL_KHR_client_get_all_proc_addresses,
      GLEW_EGL_KHR_create_context,
      GLEW_EGL_KHR_create_context_no_error,
      GLEW_EGL_KHR_fence_sync,
      GLEW_EGL_KHR_get_all_proc_addresses,
      GLEW_EGL_KHR_gl_colorspace,
      GLEW_EGL_KHR_gl_renderbuffer_image,
      GLEW_EGL_KHR_gl_texture_2D_image,
      GLEW_EGL_KHR_gl_texture_3D_image,
      GLEW_EGL_KHR_gl_texture_cubemap_image,
      GLEW_EGL_KHR_image,
      GLEW_EGL_KHR_image_base,
      GLEW_EGL_KHR_image_pixmap,
      GLEW_EGL_KHR_lock_surface,
      GLEW_EGL_KHR_lock_surface2,
      GLEW_EGL_KHR_lock_surface3,
      GLEW_EGL_KHR_partial_update,
      GLEW_EGL_KHR_platform_android,
      GLEW_EGL_KHR_platform_gbm,
      GLEW_EGL_KHR_platform_wayland,
      GLEW_EGL_KHR_platform_x11,
      GLEW_EGL_KHR_reusable_sync,
      GLEW_EGL_KHR_stream,
      GLEW_EGL_KHR_stream_consumer_gltexture,
      GLEW_EGL_KHR_stream_cross_process_fd,
      GLEW_EGL_KHR_stream_fifo,
      GLEW_EGL_KHR_stream_producer_aldatalocator,
      GLEW_EGL_KHR_stream_producer_eglsurface,
      GLEW_EGL_KHR_surfaceless_context,
      GLEW_EGL_KHR_swap_buffers_with_damage,
      GLEW_EGL_KHR_vg_parent_image,
      GLEW_EGL_KHR_wait_sync,
      GLEW_EGL_MESA_drm_image,
      GLEW_EGL_MESA_image_dma_buf_export,
      GLEW_EGL_MESA_platform_gbm,
      GLEW_EGL_NOK_swap_region,
      GLEW_EGL_NOK_swap_region2,
      GLEW_EGL_NOK_texture_from_pixmap,
      GLEW_EGL_NV_3dvision_surface,
      GLEW_EGL_NV_coverage_sample,
      GLEW_EGL_NV_coverage_sample_resolve,
      GLEW_EGL_NV_cuda_event,
      GLEW_EGL_NV_depth_nonlinear,
      GLEW_EGL_NV_device_cuda,
      GLEW_EGL_NV_native_query,
      GLEW_EGL_NV_post_convert_rounding,
      GLEW_EGL_NV_post_sub_buffer,
      GLEW_EGL_NV_stream_sync,
      GLEW_EGL_NV_sync,
      GLEW_EGL_NV_system_time,
      GLEW_EGL_TIZEN_image_native_buffer,
      GLEW_EGL_TIZEN_image_native_surface,
      GLEW_EGL_FeatureSetCount
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceConfig
    {
    public:

      bool m_featureSupported [glew::egl::FeatureSet::GLEW_EGL_FeatureSetCount];

      PFNEGLBINDTEXIMAGEPROC m_eglBindTexImage;
      PFNEGLRELEASETEXIMAGEPROC m_eglReleaseTexImage;
      PFNEGLSURFACEATTRIBPROC m_eglSurfaceAttrib;
      PFNEGLSWAPINTERVALPROC m_eglSwapInterval;
      PFNEGLBINDAPIPROC m_eglBindAPI;
      PFNEGLQUERYAPIPROC m_eglQueryAPI;
      PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC m_eglCreatePbufferFromClientBuffer;
      PFNEGLRELEASETHREADPROC m_eglReleaseThread;
      PFNEGLWAITCLIENTPROC m_eglWaitClient;
      PFNEGLGETCURRENTCONTEXTPROC m_eglGetCurrentContext;
      PFNEGLCREATESYNCPROC m_eglCreateSync;
      PFNEGLDESTROYSYNCPROC m_eglDestroySync;
      PFNEGLCLIENTWAITSYNCPROC m_eglClientWaitSync;
      PFNEGLGETSYNCATTRIBPROC m_eglGetSyncAttrib;
      PFNEGLCREATEIMAGEPROC m_eglCreateImage;
      PFNEGLDESTROYIMAGEPROC m_eglDestroyImage;
      PFNEGLGETPLATFORMDISPLAYPROC m_eglGetPlatformDisplay;
      PFNEGLCREATEPLATFORMWINDOWSURFACEPROC m_eglCreatePlatformWindowSurface;
      PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC m_eglCreatePlatformPixmapSurface;
      PFNEGLWAITSYNCPROC m_eglWaitSync;
      PFNEGLSETBLOBCACHEFUNCSANDROIDPROC m_eglSetBlobCacheFuncsANDROID;
      PFNEGLDUPNATIVEFENCEFDANDROIDPROC m_eglDupNativeFenceFDANDROID;
      PFNEGLQUERYSURFACEPOINTERANGLEPROC m_eglQuerySurfacePointerANGLE;
      PFNEGLQUERYDEVICEATTRIBEXTPROC m_eglQueryDeviceAttribEXT;
      PFNEGLQUERYDEVICESTRINGEXTPROC m_eglQueryDeviceStringEXT;
      PFNEGLQUERYDEVICESEXTPROC m_eglQueryDevicesEXT;
      PFNEGLQUERYDISPLAYATTRIBEXTPROC m_eglQueryDisplayAttribEXT;
      PFNEGLGETOUTPUTLAYERSEXTPROC m_eglGetOutputLayersEXT;
      PFNEGLGETOUTPUTPORTSEXTPROC m_eglGetOutputPortsEXT;
      PFNEGLOUTPUTLAYERATTRIBEXTPROC m_eglOutputLayerAttribEXT;
      PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC m_eglQueryOutputLayerAttribEXT;
      PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC m_eglQueryOutputLayerStringEXT;
      PFNEGLOUTPUTPORTATTRIBEXTPROC m_eglOutputPortAttribEXT;
      PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC m_eglQueryOutputPortAttribEXT;
      PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC m_eglQueryOutputPortStringEXT;
      PFNEGLGETPLATFORMDISPLAYEXTPROC m_eglGetPlatformDisplayEXT;
      PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC m_eglCreatePlatformWindowSurfaceEXT;
      PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC m_eglCreatePlatformPixmapSurfaceEXT;
      PFNEGLSTREAMCONSUMEROUTPUTEXTPROC m_eglStreamConsumerOutputEXT;
      PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC m_eglSwapBuffersWithDamageEXT;
      PFNEGLCREATEPIXMAPSURFACEHIPROC m_eglCreatePixmapSurfaceHI;
      PFNEGLCREATESYNC64KHRPROC m_eglCreateSync64KHR;
      PFNEGLCREATESYNCKHRPROC m_eglCreateSyncKHR;
      PFNEGLDESTROYSYNCKHRPROC m_eglDestroySyncKHR;
      PFNEGLCLIENTWAITSYNCKHRPROC m_eglClientWaitSyncKHR;
      PFNEGLGETSYNCATTRIBKHRPROC m_eglGetSyncAttribKHR;
      PFNEGLCREATEIMAGEKHRPROC m_eglCreateImageKHR;
      PFNEGLDESTROYIMAGEKHRPROC m_eglDestroyImageKHR;
      PFNEGLLOCKSURFACEKHRPROC m_eglLockSurfaceKHR;
      PFNEGLUNLOCKSURFACEKHRPROC m_eglUnlockSurfaceKHR;
      PFNEGLQUERYSURFACE64KHRPROC m_eglQuerySurface64KHR;
      PFNEGLSETDAMAGEREGIONKHRPROC m_eglSetDamageRegionKHR;
      PFNEGLSIGNALSYNCKHRPROC m_eglSignalSyncKHR;
      PFNEGLCREATESTREAMKHRPROC m_eglCreateStreamKHR;
      PFNEGLDESTROYSTREAMKHRPROC m_eglDestroyStreamKHR;
      PFNEGLSTREAMATTRIBKHRPROC m_eglStreamAttribKHR;
      PFNEGLQUERYSTREAMKHRPROC m_eglQueryStreamKHR;
      PFNEGLQUERYSTREAMU64KHRPROC m_eglQueryStreamu64KHR;
      PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC m_eglStreamConsumerGLTextureExternalKHR;
      PFNEGLSTREAMCONSUMERACQUIREKHRPROC m_eglStreamConsumerAcquireKHR;
      PFNEGLSTREAMCONSUMERRELEASEKHRPROC m_eglStreamConsumerReleaseKHR;
      PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC m_eglGetStreamFileDescriptorKHR;
      PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC m_eglCreateStreamFromFileDescriptorKHR;
      PFNEGLQUERYSTREAMTIMEKHRPROC m_eglQueryStreamTimeKHR;
      PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC m_eglCreateStreamProducerSurfaceKHR;
      PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC m_eglSwapBuffersWithDamageKHR;
      PFNEGLWAITSYNCKHRPROC m_eglWaitSyncKHR;
      PFNEGLCREATEDRMIMAGEMESAPROC m_eglCreateDRMImageMESA;
      PFNEGLEXPORTDRMIMAGEMESAPROC m_eglExportDRMImageMESA;
      PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC m_eglExportDMABUFImageQueryMESA;
      PFNEGLEXPORTDMABUFIMAGEMESAPROC m_eglExportDMABUFImageMESA;
      PFNEGLSWAPBUFFERSREGIONNOKPROC m_eglSwapBuffersRegionNOK;
      PFNEGLSWAPBUFFERSREGION2NOKPROC m_eglSwapBuffersRegion2NOK;
      PFNEGLQUERYNATIVEDISPLAYNVPROC m_eglQueryNativeDisplayNV;
      PFNEGLQUERYNATIVEWINDOWNVPROC m_eglQueryNativeWindowNV;
      PFNEGLQUERYNATIVEPIXMAPNVPROC m_eglQueryNativePixmapNV;
      PFNEGLPOSTSUBBUFFERNVPROC m_eglPostSubBufferNV;
      PFNEGLCREATESTREAMSYNCNVPROC m_eglCreateStreamSyncNV;
      PFNEGLCREATEFENCESYNCNVPROC m_eglCreateFenceSyncNV;
      PFNEGLDESTROYSYNCNVPROC m_eglDestroySyncNV;
      PFNEGLFENCENVPROC m_eglFenceNV;
      PFNEGLCLIENTWAITSYNCNVPROC m_eglClientWaitSyncNV;
      PFNEGLSIGNALSYNCNVPROC m_eglSignalSyncNV;
      PFNEGLGETSYNCATTRIBNVPROC m_eglGetSyncAttribNV;
      PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC m_eglGetSystemTimeFrequencyNV;
      PFNEGLGETSYSTEMTIMENVPROC m_eglGetSystemTimeNV;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise ();

    static void Deinitialise ();

    static void SetConfig (glew::egl::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::egl::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static glew::egl::DeviceConfig s_deviceConfig;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static EGLBoolean eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
    static EGLBoolean eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
    static EGLBoolean eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
    static EGLBoolean eglSwapInterval (EGLDisplay dpy, EGLint interval);
    static EGLBoolean eglBindAPI (EGLenum api);
    static EGLenum eglQueryAPI ();
    static EGLSurface eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
    static EGLBoolean eglReleaseThread ();
    static EGLBoolean eglWaitClient ();
    static EGLContext eglGetCurrentContext ();
    static EGLSync eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list);
    static EGLBoolean eglDestroySync (EGLDisplay dpy, EGLSync sync);
    static EGLint eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
    static EGLBoolean eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value);
    static EGLImage eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list);
    static EGLBoolean eglDestroyImage (EGLDisplay dpy, EGLImage image);
    static EGLDisplay eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list);
    static EGLSurface eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list);
    static EGLSurface eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list);
    static EGLBoolean eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags);
    static void eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
    static EGLint eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync);
    static EGLBoolean eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);
    static EGLBoolean eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
    static const char * eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name);
    static EGLBoolean eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
    static EGLBoolean eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
    static EGLBoolean eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers);
    static EGLBoolean eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports);
    static EGLBoolean eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
    static EGLBoolean eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value);
    static const char * eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
    static EGLBoolean eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
    static EGLBoolean eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value);
    static const char * eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);
    static EGLDisplay eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list);
    static EGLSurface eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list);
    static EGLSurface eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list);
    static EGLBoolean eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);
    static EGLBoolean eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
    static EGLSurface eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap);
    static EGLSyncKHR eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);
    static EGLSyncKHR eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
    static EGLBoolean eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync);
    static EGLint eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
    static EGLBoolean eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);
    static EGLImageKHR eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
    static EGLBoolean eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image);
    static EGLBoolean eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
    static EGLBoolean eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface);
    static EGLBoolean eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);
    static EGLBoolean eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
    static EGLBoolean eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
    static EGLStreamKHR eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list);
    static EGLBoolean eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream);
    static EGLBoolean eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
    static EGLBoolean eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value);
    static EGLBoolean eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value);
    static EGLBoolean eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream);
    static EGLBoolean eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream);
    static EGLBoolean eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream);
    static EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream);
    static EGLStreamKHR eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
    static EGLBoolean eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);
    static EGLSurface eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);
    static EGLBoolean eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
    static EGLint eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
    static EGLImageKHR eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list);
    static EGLBoolean eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);
    static EGLBoolean eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
    static EGLBoolean eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);
    static EGLBoolean eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
    static EGLBoolean eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
    static EGLBoolean eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id);
    static EGLBoolean eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
    static EGLBoolean eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);
    static EGLBoolean eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
    static EGLSyncKHR eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);
    static EGLSyncNV eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
    static EGLBoolean eglDestroySyncNV (EGLSyncNV sync);
    static EGLBoolean eglFenceNV (EGLSyncNV sync);
    static EGLint eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
    static EGLBoolean eglSignalSyncNV (EGLSyncNV sync, EGLenum mode);
    static EGLBoolean eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value);
    static EGLuint64NV eglGetSystemTimeFrequencyNV ();
    static EGLuint64NV eglGetSystemTimeNV ();
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define eglBindTexImage glew::egl::eglBindTexImage
#define eglReleaseTexImage glew::egl::eglReleaseTexImage
#define eglSurfaceAttrib glew::egl::eglSurfaceAttrib
#define eglSwapInterval glew::egl::eglSwapInterval
#define eglBindAPI glew::egl::eglBindAPI
#define eglQueryAPI glew::egl::eglQueryAPI
#define eglCreatePbufferFromClientBuffer glew::egl::eglCreatePbufferFromClientBuffer
#define eglReleaseThread glew::egl::eglReleaseThread
#define eglWaitClient glew::egl::eglWaitClient
#define eglGetCurrentContext glew::egl::eglGetCurrentContext
#define eglCreateSync glew::egl::eglCreateSync
#define eglDestroySync glew::egl::eglDestroySync
#define eglClientWaitSync glew::egl::eglClientWaitSync
#define eglGetSyncAttrib glew::egl::eglGetSyncAttrib
#define eglCreateImage glew::egl::eglCreateImage
#define eglDestroyImage glew::egl::eglDestroyImage
#define eglGetPlatformDisplay glew::egl::eglGetPlatformDisplay
#define eglCreatePlatformWindowSurface glew::egl::eglCreatePlatformWindowSurface
#define eglCreatePlatformPixmapSurface glew::egl::eglCreatePlatformPixmapSurface
#define eglWaitSync glew::egl::eglWaitSync
#define eglSetBlobCacheFuncsANDROID glew::egl::eglSetBlobCacheFuncsANDROID
#define eglDupNativeFenceFDANDROID glew::egl::eglDupNativeFenceFDANDROID
#define eglQuerySurfacePointerANGLE glew::egl::eglQuerySurfacePointerANGLE
#define eglQueryDeviceAttribEXT glew::egl::eglQueryDeviceAttribEXT
#define eglQueryDeviceStringEXT glew::egl::eglQueryDeviceStringEXT
#define eglQueryDevicesEXT glew::egl::eglQueryDevicesEXT
#define eglQueryDisplayAttribEXT glew::egl::eglQueryDisplayAttribEXT
#define eglGetOutputLayersEXT glew::egl::eglGetOutputLayersEXT
#define eglGetOutputPortsEXT glew::egl::eglGetOutputPortsEXT
#define eglOutputLayerAttribEXT glew::egl::eglOutputLayerAttribEXT
#define eglQueryOutputLayerAttribEXT glew::egl::eglQueryOutputLayerAttribEXT
#define eglQueryOutputLayerStringEXT glew::egl::eglQueryOutputLayerStringEXT
#define eglOutputPortAttribEXT glew::egl::eglOutputPortAttribEXT
#define eglQueryOutputPortAttribEXT glew::egl::eglQueryOutputPortAttribEXT
#define eglQueryOutputPortStringEXT glew::egl::eglQueryOutputPortStringEXT
#define eglGetPlatformDisplayEXT glew::egl::eglGetPlatformDisplayEXT
#define eglCreatePlatformWindowSurfaceEXT glew::egl::eglCreatePlatformWindowSurfaceEXT
#define eglCreatePlatformPixmapSurfaceEXT glew::egl::eglCreatePlatformPixmapSurfaceEXT
#define eglStreamConsumerOutputEXT glew::egl::eglStreamConsumerOutputEXT
#define eglSwapBuffersWithDamageEXT glew::egl::eglSwapBuffersWithDamageEXT
#define eglCreatePixmapSurfaceHI glew::egl::eglCreatePixmapSurfaceHI
#define eglCreateSync64KHR glew::egl::eglCreateSync64KHR
#define eglCreateSyncKHR glew::egl::eglCreateSyncKHR
#define eglDestroySyncKHR glew::egl::eglDestroySyncKHR
#define eglClientWaitSyncKHR glew::egl::eglClientWaitSyncKHR
#define eglGetSyncAttribKHR glew::egl::eglGetSyncAttribKHR
#define eglCreateImageKHR glew::egl::eglCreateImageKHR
#define eglDestroyImageKHR glew::egl::eglDestroyImageKHR
#define eglLockSurfaceKHR glew::egl::eglLockSurfaceKHR
#define eglUnlockSurfaceKHR glew::egl::eglUnlockSurfaceKHR
#define eglQuerySurface64KHR glew::egl::eglQuerySurface64KHR
#define eglSetDamageRegionKHR glew::egl::eglSetDamageRegionKHR
#define eglSignalSyncKHR glew::egl::eglSignalSyncKHR
#define eglCreateStreamKHR glew::egl::eglCreateStreamKHR
#define eglDestroyStreamKHR glew::egl::eglDestroyStreamKHR
#define eglStreamAttribKHR glew::egl::eglStreamAttribKHR
#define eglQueryStreamKHR glew::egl::eglQueryStreamKHR
#define eglQueryStreamu64KHR glew::egl::eglQueryStreamu64KHR
#define eglStreamConsumerGLTextureExternalKHR glew::egl::eglStreamConsumerGLTextureExternalKHR
#define eglStreamConsumerAcquireKHR glew::egl::eglStreamConsumerAcquireKHR
#define eglStreamConsumerReleaseKHR glew::egl::eglStreamConsumerReleaseKHR
#define eglGetStreamFileDescriptorKHR glew::egl::eglGetStreamFileDescriptorKHR
#define eglCreateStreamFromFileDescriptorKHR glew::egl::eglCreateStreamFromFileDescriptorKHR
#define eglQueryStreamTimeKHR glew::egl::eglQueryStreamTimeKHR
#define eglCreateStreamProducerSurfaceKHR glew::egl::eglCreateStreamProducerSurfaceKHR
#define eglSwapBuffersWithDamageKHR glew::egl::eglSwapBuffersWithDamageKHR
#define eglWaitSyncKHR glew::egl::eglWaitSyncKHR
#define eglCreateDRMImageMESA glew::egl::eglCreateDRMImageMESA
#define eglExportDRMImageMESA glew::egl::eglExportDRMImageMESA
#define eglExportDMABUFImageQueryMESA glew::egl::eglExportDMABUFImageQueryMESA
#define eglExportDMABUFImageMESA glew::egl::eglExportDMABUFImageMESA
#define eglSwapBuffersRegionNOK glew::egl::eglSwapBuffersRegionNOK
#define eglSwapBuffersRegion2NOK glew::egl::eglSwapBuffersRegion2NOK
#define eglQueryNativeDisplayNV glew::egl::eglQueryNativeDisplayNV
#define eglQueryNativeWindowNV glew::egl::eglQueryNativeWindowNV
#define eglQueryNativePixmapNV glew::egl::eglQueryNativePixmapNV
#define eglPostSubBufferNV glew::egl::eglPostSubBufferNV
#define eglCreateStreamSyncNV glew::egl::eglCreateStreamSyncNV
#define eglCreateFenceSyncNV glew::egl::eglCreateFenceSyncNV
#define eglDestroySyncNV glew::egl::eglDestroySyncNV
#define eglFenceNV glew::egl::eglFenceNV
#define eglClientWaitSyncNV glew::egl::eglClientWaitSyncNV
#define eglSignalSyncNV glew::egl::eglSignalSyncNV
#define eglGetSyncAttribNV glew::egl::eglGetSyncAttribNV
#define eglGetSystemTimeFrequencyNV glew::egl::eglGetSystemTimeFrequencyNV
#define eglGetSystemTimeNV glew::egl::eglGetSystemTimeNV

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
