////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_EGL_H__
#define __GLEW_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <wrangle.h>

#include <EGL/egl.h>

#include <EGL/eglext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600 
#pragma GCC diagnostic push // push/pop not available before GCC 4.6
#endif
#pragma GCC diagnostic ignored "-Wunused-function"
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum GLEW_EGL_FeatureSet
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

GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglChooseConfig (EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglCopyBuffers (EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
GLEW_EXTERN_C EGLAPI EGLContext EGLAPIENTRY eglCreateContext (EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list);
GLEW_EXTERN_C EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferSurface (EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list);
GLEW_EXTERN_C EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurface (EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list);
GLEW_EXTERN_C EGLAPI EGLSurface EGLAPIENTRY eglCreateWindowSurface (EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglDestroyContext (EGLDisplay dpy, EGLContext ctx);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglDestroySurface (EGLDisplay dpy, EGLSurface surface);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigAttrib (EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigs (EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config);
GLEW_EXTERN_C EGLAPI EGLDisplay EGLAPIENTRY eglGetCurrentDisplay ();
GLEW_EXTERN_C EGLAPI EGLSurface EGLAPIENTRY eglGetCurrentSurface (EGLint readdraw);
GLEW_EXTERN_C EGLAPI EGLDisplay EGLAPIENTRY eglGetDisplay (EGLNativeDisplayType display_id);
GLEW_EXTERN_C EGLAPI EGLint EGLAPIENTRY eglGetError ();
GLEW_EXTERN_C EGLAPI __eglMustCastToProperFunctionPointerType EGLAPIENTRY eglGetProcAddress (const char * procname);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglInitialize (EGLDisplay dpy, EGLint * major, EGLint * minor);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglMakeCurrent (EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglQueryContext (EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value);
GLEW_EXTERN_C EGLAPI const char * EGLAPIENTRY eglQueryString (EGLDisplay dpy, EGLint name);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffers (EGLDisplay dpy, EGLSurface surface);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglTerminate (EGLDisplay dpy);
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglWaitGL ();
GLEW_EXTERN_C EGLAPI EGLBoolean EGLAPIENTRY eglWaitNative (EGLint engine);
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
typedef EGLBoolean (EGLAPIENTRYP PFNEGLLOCKSURFACEKHRPROC) /* eglLockSurfaceKHR */ (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLUNLOCKSURFACEKHRPROC) /* eglUnlockSurfaceKHR */ (EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSURFACE64KHRPROC) /* eglQuerySurface64KHR */ (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSETDAMAGEREGIONKHRPROC) /* eglSetDamageRegionKHR */ (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSIGNALSYNCKHRPROC) /* eglSignalSyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
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

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  class egl
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceConfig
    {
    public:

      bool m_featureSupported [GLEW_EGL_FeatureSetCount];

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

    static void Initialise (EGLDisplay display);

    static void Deinitialise ();

    static bool IsSupported (GLEW_EGL_FeatureSet feature) { return s_deviceConfig.m_featureSupported [feature]; }

    static void SetConfig (glew::egl::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::egl::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static EGLDisplay s_display;

    static glew::egl::DeviceConfig s_deviceConfig;

  };

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  bool IsSupported (GLEW_EGL_FeatureSet feature);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_EXTERN_C EGLBoolean _glew_egl_eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSwapInterval (EGLDisplay dpy, EGLint interval);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglBindAPI (EGLenum api);
GLEW_EXTERN_C EGLenum _glew_egl_eglQueryAPI ();
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglReleaseThread ();
GLEW_EXTERN_C EGLBoolean _glew_egl_eglWaitClient ();
GLEW_EXTERN_C EGLContext _glew_egl_eglGetCurrentContext ();
GLEW_EXTERN_C EGLSync _glew_egl_eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglDestroySync (EGLDisplay dpy, EGLSync sync);
GLEW_EXTERN_C EGLint _glew_egl_eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value);
GLEW_EXTERN_C EGLImage _glew_egl_eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglDestroyImage (EGLDisplay dpy, EGLImage image);
GLEW_EXTERN_C EGLDisplay _glew_egl_eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list);
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list);
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags);
GLEW_EXTERN_C void _glew_egl_eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
GLEW_EXTERN_C EGLint _glew_egl_eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
GLEW_EXTERN_C const char * _glew_egl_eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value);
GLEW_EXTERN_C const char * _glew_egl_eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value);
GLEW_EXTERN_C const char * _glew_egl_eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);
GLEW_EXTERN_C EGLDisplay _glew_egl_eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list);
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list);
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap);
GLEW_EXTERN_C EGLSyncKHR _glew_egl_eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);
GLEW_EXTERN_C EGLSyncKHR _glew_egl_eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync);
GLEW_EXTERN_C EGLint _glew_egl_eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);
GLEW_EXTERN_C EGLImageKHR _glew_egl_eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
GLEW_EXTERN_C EGLStreamKHR _glew_egl_eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_EXTERN_C EGLNativeFileDescriptorKHR _glew_egl_eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_EXTERN_C EGLStreamKHR _glew_egl_eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);
GLEW_EXTERN_C EGLSurface _glew_egl_eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
GLEW_EXTERN_C EGLint _glew_egl_eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
GLEW_EXTERN_C EGLImageKHR _glew_egl_eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
GLEW_EXTERN_C EGLSyncKHR _glew_egl_eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);
GLEW_EXTERN_C EGLSyncNV _glew_egl_eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglDestroySyncNV (EGLSyncNV sync);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglFenceNV (EGLSyncNV sync);
GLEW_EXTERN_C EGLint _glew_egl_eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglSignalSyncNV (EGLSyncNV sync, EGLenum mode);
GLEW_EXTERN_C EGLBoolean _glew_egl_eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value);
GLEW_EXTERN_C EGLuint64NV _glew_egl_eglGetSystemTimeFrequencyNV ();
GLEW_EXTERN_C EGLuint64NV _glew_egl_eglGetSystemTimeNV ();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define eglBindTexImage _glew_egl_eglBindTexImage
#define eglReleaseTexImage _glew_egl_eglReleaseTexImage
#define eglSurfaceAttrib _glew_egl_eglSurfaceAttrib
#define eglSwapInterval _glew_egl_eglSwapInterval
#define eglBindAPI _glew_egl_eglBindAPI
#define eglQueryAPI _glew_egl_eglQueryAPI
#define eglCreatePbufferFromClientBuffer _glew_egl_eglCreatePbufferFromClientBuffer
#define eglReleaseThread _glew_egl_eglReleaseThread
#define eglWaitClient _glew_egl_eglWaitClient
#define eglGetCurrentContext _glew_egl_eglGetCurrentContext
#define eglCreateSync _glew_egl_eglCreateSync
#define eglDestroySync _glew_egl_eglDestroySync
#define eglClientWaitSync _glew_egl_eglClientWaitSync
#define eglGetSyncAttrib _glew_egl_eglGetSyncAttrib
#define eglCreateImage _glew_egl_eglCreateImage
#define eglDestroyImage _glew_egl_eglDestroyImage
#define eglGetPlatformDisplay _glew_egl_eglGetPlatformDisplay
#define eglCreatePlatformWindowSurface _glew_egl_eglCreatePlatformWindowSurface
#define eglCreatePlatformPixmapSurface _glew_egl_eglCreatePlatformPixmapSurface
#define eglWaitSync _glew_egl_eglWaitSync
#define eglSetBlobCacheFuncsANDROID _glew_egl_eglSetBlobCacheFuncsANDROID
#define eglDupNativeFenceFDANDROID _glew_egl_eglDupNativeFenceFDANDROID
#define eglQuerySurfacePointerANGLE _glew_egl_eglQuerySurfacePointerANGLE
#define eglQueryDeviceAttribEXT _glew_egl_eglQueryDeviceAttribEXT
#define eglQueryDeviceStringEXT _glew_egl_eglQueryDeviceStringEXT
#define eglQueryDevicesEXT _glew_egl_eglQueryDevicesEXT
#define eglQueryDisplayAttribEXT _glew_egl_eglQueryDisplayAttribEXT
#define eglGetOutputLayersEXT _glew_egl_eglGetOutputLayersEXT
#define eglGetOutputPortsEXT _glew_egl_eglGetOutputPortsEXT
#define eglOutputLayerAttribEXT _glew_egl_eglOutputLayerAttribEXT
#define eglQueryOutputLayerAttribEXT _glew_egl_eglQueryOutputLayerAttribEXT
#define eglQueryOutputLayerStringEXT _glew_egl_eglQueryOutputLayerStringEXT
#define eglOutputPortAttribEXT _glew_egl_eglOutputPortAttribEXT
#define eglQueryOutputPortAttribEXT _glew_egl_eglQueryOutputPortAttribEXT
#define eglQueryOutputPortStringEXT _glew_egl_eglQueryOutputPortStringEXT
#define eglGetPlatformDisplayEXT _glew_egl_eglGetPlatformDisplayEXT
#define eglCreatePlatformWindowSurfaceEXT _glew_egl_eglCreatePlatformWindowSurfaceEXT
#define eglCreatePlatformPixmapSurfaceEXT _glew_egl_eglCreatePlatformPixmapSurfaceEXT
#define eglStreamConsumerOutputEXT _glew_egl_eglStreamConsumerOutputEXT
#define eglSwapBuffersWithDamageEXT _glew_egl_eglSwapBuffersWithDamageEXT
#define eglCreatePixmapSurfaceHI _glew_egl_eglCreatePixmapSurfaceHI
#define eglCreateSync64KHR _glew_egl_eglCreateSync64KHR
#define eglCreateSyncKHR _glew_egl_eglCreateSyncKHR
#define eglDestroySyncKHR _glew_egl_eglDestroySyncKHR
#define eglClientWaitSyncKHR _glew_egl_eglClientWaitSyncKHR
#define eglGetSyncAttribKHR _glew_egl_eglGetSyncAttribKHR
#define eglCreateImageKHR _glew_egl_eglCreateImageKHR
#define eglDestroyImageKHR _glew_egl_eglDestroyImageKHR
#define eglLockSurfaceKHR _glew_egl_eglLockSurfaceKHR
#define eglUnlockSurfaceKHR _glew_egl_eglUnlockSurfaceKHR
#define eglQuerySurface64KHR _glew_egl_eglQuerySurface64KHR
#define eglSetDamageRegionKHR _glew_egl_eglSetDamageRegionKHR
#define eglSignalSyncKHR _glew_egl_eglSignalSyncKHR
#define eglCreateStreamKHR _glew_egl_eglCreateStreamKHR
#define eglDestroyStreamKHR _glew_egl_eglDestroyStreamKHR
#define eglStreamAttribKHR _glew_egl_eglStreamAttribKHR
#define eglQueryStreamKHR _glew_egl_eglQueryStreamKHR
#define eglQueryStreamu64KHR _glew_egl_eglQueryStreamu64KHR
#define eglStreamConsumerGLTextureExternalKHR _glew_egl_eglStreamConsumerGLTextureExternalKHR
#define eglStreamConsumerAcquireKHR _glew_egl_eglStreamConsumerAcquireKHR
#define eglStreamConsumerReleaseKHR _glew_egl_eglStreamConsumerReleaseKHR
#define eglGetStreamFileDescriptorKHR _glew_egl_eglGetStreamFileDescriptorKHR
#define eglCreateStreamFromFileDescriptorKHR _glew_egl_eglCreateStreamFromFileDescriptorKHR
#define eglQueryStreamTimeKHR _glew_egl_eglQueryStreamTimeKHR
#define eglCreateStreamProducerSurfaceKHR _glew_egl_eglCreateStreamProducerSurfaceKHR
#define eglSwapBuffersWithDamageKHR _glew_egl_eglSwapBuffersWithDamageKHR
#define eglWaitSyncKHR _glew_egl_eglWaitSyncKHR
#define eglCreateDRMImageMESA _glew_egl_eglCreateDRMImageMESA
#define eglExportDRMImageMESA _glew_egl_eglExportDRMImageMESA
#define eglExportDMABUFImageQueryMESA _glew_egl_eglExportDMABUFImageQueryMESA
#define eglExportDMABUFImageMESA _glew_egl_eglExportDMABUFImageMESA
#define eglSwapBuffersRegionNOK _glew_egl_eglSwapBuffersRegionNOK
#define eglSwapBuffersRegion2NOK _glew_egl_eglSwapBuffersRegion2NOK
#define eglQueryNativeDisplayNV _glew_egl_eglQueryNativeDisplayNV
#define eglQueryNativeWindowNV _glew_egl_eglQueryNativeWindowNV
#define eglQueryNativePixmapNV _glew_egl_eglQueryNativePixmapNV
#define eglPostSubBufferNV _glew_egl_eglPostSubBufferNV
#define eglCreateStreamSyncNV _glew_egl_eglCreateStreamSyncNV
#define eglCreateFenceSyncNV _glew_egl_eglCreateFenceSyncNV
#define eglDestroySyncNV _glew_egl_eglDestroySyncNV
#define eglFenceNV _glew_egl_eglFenceNV
#define eglClientWaitSyncNV _glew_egl_eglClientWaitSyncNV
#define eglSignalSyncNV _glew_egl_eglSignalSyncNV
#define eglGetSyncAttribNV _glew_egl_eglGetSyncAttribNV
#define eglGetSystemTimeFrequencyNV _glew_egl_eglGetSystemTimeFrequencyNV
#define eglGetSystemTimeNV _glew_egl_eglGetSystemTimeNV

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef __GNUC__
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600 
#pragma GCC diagnostic pop // push/pop not available before GCC 4.6
#endif
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
