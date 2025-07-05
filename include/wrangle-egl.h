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
  GLEW_EGL_ANDROID_create_native_client_buffer,
  GLEW_EGL_ANDROID_framebuffer_target,
  GLEW_EGL_ANDROID_get_native_client_buffer,
  GLEW_EGL_ANDROID_front_buffer_auto_refresh,
  GLEW_EGL_ANDROID_image_native_buffer,
  GLEW_EGL_ANDROID_native_fence_sync,
  GLEW_EGL_ANDROID_presentation_time,
  GLEW_EGL_ANDROID_get_frame_timestamps,
  GLEW_EGL_ANDROID_recordable,
  GLEW_EGL_ANDROID_GLES_layers,
  GLEW_EGL_ANDROID_telemetry_hint,
  GLEW_EGL_ANGLE_d3d_share_handle_client_buffer,
  GLEW_EGL_ANGLE_device_d3d,
  GLEW_EGL_ANGLE_query_surface_pointer,
  GLEW_EGL_ANGLE_surface_d3d_texture_2d_share_handle,
  GLEW_EGL_ANGLE_sync_control_rate,
  GLEW_EGL_ANGLE_window_fixed_size,
  GLEW_EGL_ARM_implicit_external_sync,
  GLEW_EGL_ARM_pixmap_multisample_discard,
  GLEW_EGL_EXT_buffer_age,
  GLEW_EGL_EXT_client_extensions,
  GLEW_EGL_EXT_client_sync,
  GLEW_EGL_EXT_config_select_group,
  GLEW_EGL_EXT_create_context_robustness,
  GLEW_EGL_EXT_device_base,
  GLEW_EGL_EXT_device_drm,
  GLEW_EGL_EXT_device_enumeration,
  GLEW_EGL_EXT_device_openwf,
  GLEW_EGL_EXT_device_query,
  GLEW_EGL_EXT_gl_colorspace_bt2020_hlg,
  GLEW_EGL_EXT_gl_colorspace_bt2020_linear,
  GLEW_EGL_EXT_gl_colorspace_bt2020_pq,
  GLEW_EGL_EXT_gl_colorspace_scrgb,
  GLEW_EGL_EXT_gl_colorspace_scrgb_linear,
  GLEW_EGL_EXT_gl_colorspace_display_p3_linear,
  GLEW_EGL_EXT_gl_colorspace_display_p3,
  GLEW_EGL_EXT_gl_colorspace_display_p3_passthrough,
  GLEW_EGL_EXT_image_dma_buf_import,
  GLEW_EGL_EXT_image_dma_buf_import_modifiers,
  GLEW_EGL_EXT_image_gl_colorspace,
  GLEW_EGL_EXT_multiview_window,
  GLEW_EGL_EXT_output_base,
  GLEW_EGL_EXT_output_drm,
  GLEW_EGL_EXT_output_openwf,
  GLEW_EGL_EXT_pixel_format_float,
  GLEW_EGL_EXT_platform_base,
  GLEW_EGL_EXT_platform_device,
  GLEW_EGL_EXT_platform_wayland,
  GLEW_EGL_EXT_platform_x11,
  GLEW_EGL_EXT_platform_xcb,
  GLEW_EGL_EXT_present_opaque,
  GLEW_EGL_EXT_protected_content,
  GLEW_EGL_EXT_protected_surface,
  GLEW_EGL_EXT_query_reset_notification_strategy,
  GLEW_EGL_EXT_stream_consumer_egloutput,
  GLEW_EGL_EXT_surface_SMPTE2086_metadata,
  GLEW_EGL_EXT_swap_buffers_with_damage,
  GLEW_EGL_EXT_sync_reuse,
  GLEW_EGL_EXT_yuv_surface,
  GLEW_EGL_HI_clientpixmap,
  GLEW_EGL_HI_colorformats,
  GLEW_EGL_IMG_context_priority,
  GLEW_EGL_IMG_image_plane_attribs,
  GLEW_EGL_KHR_cl_event,
  GLEW_EGL_KHR_cl_event2,
  GLEW_EGL_KHR_config_attribs,
  GLEW_EGL_KHR_client_get_all_proc_addresses,
  GLEW_EGL_KHR_context_flush_control,
  GLEW_EGL_KHR_create_context,
  GLEW_EGL_KHR_create_context_no_error,
  GLEW_EGL_KHR_debug,
  GLEW_EGL_KHR_display_reference,
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
  GLEW_EGL_KHR_mutable_render_buffer,
  GLEW_EGL_KHR_no_config_context,
  GLEW_EGL_KHR_partial_update,
  GLEW_EGL_KHR_platform_android,
  GLEW_EGL_KHR_platform_gbm,
  GLEW_EGL_KHR_platform_wayland,
  GLEW_EGL_KHR_platform_x11,
  GLEW_EGL_KHR_reusable_sync,
  GLEW_EGL_KHR_stream,
  GLEW_EGL_KHR_stream_attrib,
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
  GLEW_EGL_MESA_platform_surfaceless,
  GLEW_EGL_MESA_query_driver,
  GLEW_EGL_NOK_swap_region,
  GLEW_EGL_NOK_swap_region2,
  GLEW_EGL_NOK_texture_from_pixmap,
  GLEW_EGL_NV_3dvision_surface,
  GLEW_EGL_NV_coverage_sample,
  GLEW_EGL_NV_context_priority_realtime,
  GLEW_EGL_NV_coverage_sample_resolve,
  GLEW_EGL_NV_cuda_event,
  GLEW_EGL_NV_depth_nonlinear,
  GLEW_EGL_NV_device_cuda,
  GLEW_EGL_NV_native_query,
  GLEW_EGL_NV_post_convert_rounding,
  GLEW_EGL_NV_post_sub_buffer,
  GLEW_EGL_NV_quadruple_buffer,
  GLEW_EGL_NV_robustness_video_memory_purge,
  GLEW_EGL_NV_stream_consumer_gltexture_yuv,
  GLEW_EGL_NV_stream_cross_object,
  GLEW_EGL_NV_stream_cross_display,
  GLEW_EGL_NV_stream_cross_partition,
  GLEW_EGL_NV_stream_cross_process,
  GLEW_EGL_NV_stream_cross_system,
  GLEW_EGL_NV_stream_dma,
  GLEW_EGL_NV_stream_consumer_eglimage,
  GLEW_EGL_NV_stream_fifo_next,
  GLEW_EGL_NV_stream_fifo_synchronous,
  GLEW_EGL_NV_stream_flush,
  GLEW_EGL_NV_stream_frame_limits,
  GLEW_EGL_NV_stream_metadata,
  GLEW_EGL_NV_stream_reset,
  GLEW_EGL_NV_stream_remote,
  GLEW_EGL_NV_stream_socket,
  GLEW_EGL_NV_stream_socket_inet,
  GLEW_EGL_NV_stream_socket_unix,
  GLEW_EGL_NV_stream_sync,
  GLEW_EGL_NV_sync,
  GLEW_EGL_NV_system_time,
  GLEW_EGL_NV_triple_buffer,
  GLEW_EGL_TIZEN_image_native_buffer,
  GLEW_EGL_TIZEN_image_native_surface,
  GLEW_EGL_EXT_compositor,
  GLEW_EGL_EXT_surface_CTA861_3_metadata,
  GLEW_EGL_EXT_surface_compression,
  GLEW_EGL_EXT_image_implicit_sync_control,
  GLEW_EGL_EXT_bind_to_front,
  GLEW_EGL_NV_stream_origin,
  GLEW_EGL_WL_bind_wayland_display,
  GLEW_EGL_WL_create_wayland_buffer_from_image,
  GLEW_EGL_ARM_image_format,
  GLEW_EGL_EXT_device_query_name,
  GLEW_EGL_EXT_device_persistent_id,
  GLEW_EGL_EXT_device_drm_render_node,
  GLEW_EGL_EXT_explicit_device,
  GLEW_EGL_NV_stream_consumer_eglimage_use_scanout_attrib,
  GLEW_EGL_QNX_platform_screen,
  GLEW_EGL_QNX_image_native_buffer,
  GLEW_EGL_EXT_display_alloc,
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
typedef EGLClientBuffer (EGLAPIENTRYP PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC) /* eglCreateNativeClientBufferANDROID */ (const EGLint * attrib_list);
typedef EGLClientBuffer (EGLAPIENTRYP PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC) /* eglGetNativeClientBufferANDROID */ (const struct AHardwareBuffer * buffer);
typedef EGLint (EGLAPIENTRYP PFNEGLDUPNATIVEFENCEFDANDROIDPROC) /* eglDupNativeFenceFDANDROID */ (EGLDisplay dpy, EGLSyncKHR sync);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLPRESENTATIONTIMEANDROIDPROC) /* eglPresentationTimeANDROID */ (EGLDisplay dpy, EGLSurface surface, EGLnsecsANDROID time);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC) /* eglGetCompositorTimingSupportedANDROID */ (EGLDisplay dpy, EGLSurface surface, EGLint name);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETCOMPOSITORTIMINGANDROIDPROC) /* eglGetCompositorTimingANDROID */ (EGLDisplay dpy, EGLSurface surface, EGLint numTimestamps, const EGLint * names, EGLnsecsANDROID * values);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETNEXTFRAMEIDANDROIDPROC) /* eglGetNextFrameIdANDROID */ (EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * frameId);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC) /* eglGetFrameTimestampSupportedANDROID */ (EGLDisplay dpy, EGLSurface surface, EGLint timestamp);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETFRAMETIMESTAMPSANDROIDPROC) /* eglGetFrameTimestampsANDROID */ (EGLDisplay dpy, EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps, const EGLint * timestamps, EGLnsecsANDROID * values);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSURFACEPOINTERANGLEPROC) /* eglQuerySurfacePointerANGLE */ (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETMSCRATEANGLEPROC) /* eglGetMscRateANGLE */ (EGLDisplay dpy, EGLSurface surface, EGLint * numerator, EGLint * denominator);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCLIENTSIGNALSYNCEXTPROC) /* eglClientSignalSyncEXT */ (EGLDisplay dpy, EGLSync sync, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICEATTRIBEXTPROC) /* eglQueryDeviceAttribEXT */ (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
typedef const char * (EGLAPIENTRYP PFNEGLQUERYDEVICESTRINGEXTPROC) /* eglQueryDeviceStringEXT */ (EGLDeviceEXT device, EGLint name);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICESEXTPROC) /* eglQueryDevicesEXT */ (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDISPLAYATTRIBEXTPROC) /* eglQueryDisplayAttribEXT */ (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICESEXTPROC) /* eglQueryDevicesEXT */ (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICEATTRIBEXTPROC) /* eglQueryDeviceAttribEXT */ (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
typedef const char * (EGLAPIENTRYP PFNEGLQUERYDEVICESTRINGEXTPROC) /* eglQueryDeviceStringEXT */ (EGLDeviceEXT device, EGLint name);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDISPLAYATTRIBEXTPROC) /* eglQueryDisplayAttribEXT */ (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDMABUFFORMATSEXTPROC) /* eglQueryDmaBufFormatsEXT */ (EGLDisplay dpy, EGLint max_formats, EGLint * formats, EGLint * num_formats);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDMABUFMODIFIERSEXTPROC) /* eglQueryDmaBufModifiersEXT */ (EGLDisplay dpy, EGLint format, EGLint max_modifiers, EGLuint64KHR * modifiers, EGLBoolean * external_only, EGLint * num_modifiers);
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
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC) /* eglSwapBuffersWithDamageEXT */ (EGLDisplay dpy, EGLSurface surface, const EGLint * rects, EGLint n_rects);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLUNSIGNALSYNCEXTPROC) /* eglUnsignalSyncEXT */ (EGLDisplay dpy, EGLSync sync, const EGLAttrib * attrib_list);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATEPIXMAPSURFACEHIPROC) /* eglCreatePixmapSurfaceHI */ (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap);
typedef EGLSyncKHR (EGLAPIENTRYP PFNEGLCREATESYNC64KHRPROC) /* eglCreateSync64KHR */ (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);
typedef EGLint (EGLAPIENTRYP PFNEGLDEBUGMESSAGECONTROLKHRPROC) /* eglDebugMessageControlKHR */ (EGLDEBUGPROCKHR callback, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEBUGKHRPROC) /* eglQueryDebugKHR */ (EGLint attribute, EGLAttrib * value);
typedef EGLint (EGLAPIENTRYP PFNEGLLABELOBJECTKHRPROC) /* eglLabelObjectKHR */ (EGLDisplay display, EGLenum objectType, EGLObjectKHR object, EGLLabelKHR label);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDISPLAYATTRIBKHRPROC) /* eglQueryDisplayAttribKHR */ (EGLDisplay dpy, EGLint name, EGLAttrib * value);
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
typedef EGLStreamKHR (EGLAPIENTRYP PFNEGLCREATESTREAMATTRIBKHRPROC) /* eglCreateStreamAttribKHR */ (EGLDisplay dpy, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSETSTREAMATTRIBKHRPROC) /* eglSetStreamAttribKHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSTREAMATTRIBKHRPROC) /* eglQueryStreamAttribKHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC) /* eglStreamConsumerAcquireAttribKHR */ (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC) /* eglStreamConsumerReleaseAttribKHR */ (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC) /* eglStreamConsumerGLTextureExternalKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERACQUIREKHRPROC) /* eglStreamConsumerAcquireKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERRELEASEKHRPROC) /* eglStreamConsumerReleaseKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLNativeFileDescriptorKHR (EGLAPIENTRYP PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC) /* eglGetStreamFileDescriptorKHR */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLStreamKHR (EGLAPIENTRYP PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC) /* eglCreateStreamFromFileDescriptorKHR */ (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSTREAMTIMEKHRPROC) /* eglQueryStreamTimeKHR */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);
typedef EGLSurface (EGLAPIENTRYP PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC) /* eglCreateStreamProducerSurfaceKHR */ (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC) /* eglSwapBuffersWithDamageKHR */ (EGLDisplay dpy, EGLSurface surface, const EGLint * rects, EGLint n_rects);
typedef EGLint (EGLAPIENTRYP PFNEGLWAITSYNCKHRPROC) /* eglWaitSyncKHR */ (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
typedef EGLImageKHR (EGLAPIENTRYP PFNEGLCREATEDRMIMAGEMESAPROC) /* eglCreateDRMImageMESA */ (EGLDisplay dpy, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLEXPORTDRMIMAGEMESAPROC) /* eglExportDRMImageMESA */ (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC) /* eglExportDMABUFImageQueryMESA */ (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLEXPORTDMABUFIMAGEMESAPROC) /* eglExportDMABUFImageMESA */ (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);
typedef char * (EGLAPIENTRYP PFNEGLGETDISPLAYDRIVERCONFIGPROC) /* eglGetDisplayDriverConfig */ (EGLDisplay dpy);
typedef const char * (EGLAPIENTRYP PFNEGLGETDISPLAYDRIVERNAMEPROC) /* eglGetDisplayDriverName */ (EGLDisplay dpy);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSREGIONNOKPROC) /* eglSwapBuffersRegionNOK */ (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSWAPBUFFERSREGION2NOKPROC) /* eglSwapBuffersRegion2NOK */ (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYNATIVEDISPLAYNVPROC) /* eglQueryNativeDisplayNV */ (EGLDisplay dpy, EGLNativeDisplayType * display_id);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYNATIVEWINDOWNVPROC) /* eglQueryNativeWindowNV */ (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYNATIVEPIXMAPNVPROC) /* eglQueryNativePixmapNV */ (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLPOSTSUBBUFFERNVPROC) /* eglPostSubBufferNV */ (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC) /* eglStreamConsumerGLTextureExternalAttribsNV */ (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC) /* eglStreamImageConsumerConnectNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLint num_modifiers, const EGLuint64KHR * modifiers, const EGLAttrib * attrib_list);
typedef EGLint (EGLAPIENTRYP PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC) /* eglQueryStreamConsumerEventNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLTime timeout, EGLenum * event, EGLAttrib * aux);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMACQUIREIMAGENVPROC) /* eglStreamAcquireImageNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLImage * pImage, EGLSync sync);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMRELEASEIMAGENVPROC) /* eglStreamReleaseImageNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLImage image, EGLSync sync);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSTREAMFLUSHNVPROC) /* eglStreamFlushNV */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDISPLAYATTRIBNVPROC) /* eglQueryDisplayAttribNV */ (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSETSTREAMMETADATANVPROC) /* eglSetStreamMetadataNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void * data);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSTREAMMETADATANVPROC) /* eglQueryStreamMetadataNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size, void * data);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLRESETSTREAMNVPROC) /* eglResetStreamNV */ (EGLDisplay dpy, EGLStreamKHR stream);
typedef EGLSyncKHR (EGLAPIENTRYP PFNEGLCREATESTREAMSYNCNVPROC) /* eglCreateStreamSyncNV */ (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);
typedef EGLSyncNV (EGLAPIENTRYP PFNEGLCREATEFENCESYNCNVPROC) /* eglCreateFenceSyncNV */ (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYSYNCNVPROC) /* eglDestroySyncNV */ (EGLSyncNV sync);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLFENCENVPROC) /* eglFenceNV */ (EGLSyncNV sync);
typedef EGLint (EGLAPIENTRYP PFNEGLCLIENTWAITSYNCNVPROC) /* eglClientWaitSyncNV */ (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLSIGNALSYNCNVPROC) /* eglSignalSyncNV */ (EGLSyncNV sync, EGLenum mode);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLGETSYNCATTRIBNVPROC) /* eglGetSyncAttribNV */ (EGLSyncNV sync, EGLint attribute, EGLint * value);
typedef EGLuint64NV (EGLAPIENTRYP PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC) /* eglGetSystemTimeFrequencyNV */ ();
typedef EGLuint64NV (EGLAPIENTRYP PFNEGLGETSYSTEMTIMENVPROC) /* eglGetSystemTimeNV */ ();
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC) /* eglCompositorSetContextListEXT */ (const EGLint * external_ref_ids, EGLint num_entries);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC) /* eglCompositorSetContextAttributesEXT */ (EGLint external_ref_id, const EGLint * context_attributes, EGLint num_entries);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC) /* eglCompositorSetWindowListEXT */ (EGLint external_ref_id, const EGLint * external_win_ids, EGLint num_entries);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC) /* eglCompositorSetWindowAttributesEXT */ (EGLint external_win_id, const EGLint * window_attributes, EGLint num_entries);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC) /* eglCompositorBindTexWindowEXT */ (EGLint external_win_id);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORSETSIZEEXTPROC) /* eglCompositorSetSizeEXT */ (EGLint external_win_id, EGLint width, EGLint height);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLCOMPOSITORSWAPPOLICYEXTPROC) /* eglCompositorSwapPolicyEXT */ (EGLint external_win_id, EGLint policy);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC) /* eglQuerySupportedCompressionRatesEXT */ (EGLDisplay dpy, EGLConfig config, const EGLAttrib * attrib_list, EGLint * rates, EGLint rate_size, EGLint * num_rates);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLBINDWAYLANDDISPLAYWLPROC) /* eglBindWaylandDisplayWL */ (EGLDisplay dpy, struct wl_display * display);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLUNBINDWAYLANDDISPLAYWLPROC) /* eglUnbindWaylandDisplayWL */ (EGLDisplay dpy, struct wl_display * display);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYWAYLANDBUFFERWLPROC) /* eglQueryWaylandBufferWL */ (EGLDisplay dpy, struct wl_resource * buffer, EGLint attribute, EGLint * value);
typedef struct wl_buffer * (EGLAPIENTRYP PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC) /* eglCreateWaylandBufferFromImageWL */ (EGLDisplay dpy, EGLImageKHR image);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLQUERYDEVICEBINARYEXTPROC) /* eglQueryDeviceBinaryEXT */ (EGLDeviceEXT device, EGLint name, EGLint max_size, void * value, EGLint * size);
typedef EGLBoolean (EGLAPIENTRYP PFNEGLDESTROYDISPLAYEXTPROC) /* eglDestroyDisplayEXT */ (EGLDisplay dpy);

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
      PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC m_eglCreateNativeClientBufferANDROID;
      PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC m_eglGetNativeClientBufferANDROID;
      PFNEGLDUPNATIVEFENCEFDANDROIDPROC m_eglDupNativeFenceFDANDROID;
      PFNEGLPRESENTATIONTIMEANDROIDPROC m_eglPresentationTimeANDROID;
      PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC m_eglGetCompositorTimingSupportedANDROID;
      PFNEGLGETCOMPOSITORTIMINGANDROIDPROC m_eglGetCompositorTimingANDROID;
      PFNEGLGETNEXTFRAMEIDANDROIDPROC m_eglGetNextFrameIdANDROID;
      PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC m_eglGetFrameTimestampSupportedANDROID;
      PFNEGLGETFRAMETIMESTAMPSANDROIDPROC m_eglGetFrameTimestampsANDROID;
      PFNEGLQUERYSURFACEPOINTERANGLEPROC m_eglQuerySurfacePointerANGLE;
      PFNEGLGETMSCRATEANGLEPROC m_eglGetMscRateANGLE;
      PFNEGLCLIENTSIGNALSYNCEXTPROC m_eglClientSignalSyncEXT;
      PFNEGLQUERYDEVICEATTRIBEXTPROC m_eglQueryDeviceAttribEXT;
      PFNEGLQUERYDEVICESTRINGEXTPROC m_eglQueryDeviceStringEXT;
      PFNEGLQUERYDEVICESEXTPROC m_eglQueryDevicesEXT;
      PFNEGLQUERYDISPLAYATTRIBEXTPROC m_eglQueryDisplayAttribEXT;
      PFNEGLQUERYDMABUFFORMATSEXTPROC m_eglQueryDmaBufFormatsEXT;
      PFNEGLQUERYDMABUFMODIFIERSEXTPROC m_eglQueryDmaBufModifiersEXT;
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
      PFNEGLUNSIGNALSYNCEXTPROC m_eglUnsignalSyncEXT;
      PFNEGLCREATEPIXMAPSURFACEHIPROC m_eglCreatePixmapSurfaceHI;
      PFNEGLCREATESYNC64KHRPROC m_eglCreateSync64KHR;
      PFNEGLDEBUGMESSAGECONTROLKHRPROC m_eglDebugMessageControlKHR;
      PFNEGLQUERYDEBUGKHRPROC m_eglQueryDebugKHR;
      PFNEGLLABELOBJECTKHRPROC m_eglLabelObjectKHR;
      PFNEGLQUERYDISPLAYATTRIBKHRPROC m_eglQueryDisplayAttribKHR;
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
      PFNEGLCREATESTREAMATTRIBKHRPROC m_eglCreateStreamAttribKHR;
      PFNEGLSETSTREAMATTRIBKHRPROC m_eglSetStreamAttribKHR;
      PFNEGLQUERYSTREAMATTRIBKHRPROC m_eglQueryStreamAttribKHR;
      PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC m_eglStreamConsumerAcquireAttribKHR;
      PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC m_eglStreamConsumerReleaseAttribKHR;
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
      PFNEGLGETDISPLAYDRIVERCONFIGPROC m_eglGetDisplayDriverConfig;
      PFNEGLGETDISPLAYDRIVERNAMEPROC m_eglGetDisplayDriverName;
      PFNEGLSWAPBUFFERSREGIONNOKPROC m_eglSwapBuffersRegionNOK;
      PFNEGLSWAPBUFFERSREGION2NOKPROC m_eglSwapBuffersRegion2NOK;
      PFNEGLQUERYNATIVEDISPLAYNVPROC m_eglQueryNativeDisplayNV;
      PFNEGLQUERYNATIVEWINDOWNVPROC m_eglQueryNativeWindowNV;
      PFNEGLQUERYNATIVEPIXMAPNVPROC m_eglQueryNativePixmapNV;
      PFNEGLPOSTSUBBUFFERNVPROC m_eglPostSubBufferNV;
      PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC m_eglStreamConsumerGLTextureExternalAttribsNV;
      PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC m_eglStreamImageConsumerConnectNV;
      PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC m_eglQueryStreamConsumerEventNV;
      PFNEGLSTREAMACQUIREIMAGENVPROC m_eglStreamAcquireImageNV;
      PFNEGLSTREAMRELEASEIMAGENVPROC m_eglStreamReleaseImageNV;
      PFNEGLSTREAMFLUSHNVPROC m_eglStreamFlushNV;
      PFNEGLQUERYDISPLAYATTRIBNVPROC m_eglQueryDisplayAttribNV;
      PFNEGLSETSTREAMMETADATANVPROC m_eglSetStreamMetadataNV;
      PFNEGLQUERYSTREAMMETADATANVPROC m_eglQueryStreamMetadataNV;
      PFNEGLRESETSTREAMNVPROC m_eglResetStreamNV;
      PFNEGLCREATESTREAMSYNCNVPROC m_eglCreateStreamSyncNV;
      PFNEGLCREATEFENCESYNCNVPROC m_eglCreateFenceSyncNV;
      PFNEGLDESTROYSYNCNVPROC m_eglDestroySyncNV;
      PFNEGLFENCENVPROC m_eglFenceNV;
      PFNEGLCLIENTWAITSYNCNVPROC m_eglClientWaitSyncNV;
      PFNEGLSIGNALSYNCNVPROC m_eglSignalSyncNV;
      PFNEGLGETSYNCATTRIBNVPROC m_eglGetSyncAttribNV;
      PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC m_eglGetSystemTimeFrequencyNV;
      PFNEGLGETSYSTEMTIMENVPROC m_eglGetSystemTimeNV;
      PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC m_eglCompositorSetContextListEXT;
      PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC m_eglCompositorSetContextAttributesEXT;
      PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC m_eglCompositorSetWindowListEXT;
      PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC m_eglCompositorSetWindowAttributesEXT;
      PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC m_eglCompositorBindTexWindowEXT;
      PFNEGLCOMPOSITORSETSIZEEXTPROC m_eglCompositorSetSizeEXT;
      PFNEGLCOMPOSITORSWAPPOLICYEXTPROC m_eglCompositorSwapPolicyEXT;
      PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC m_eglQuerySupportedCompressionRatesEXT;
      PFNEGLBINDWAYLANDDISPLAYWLPROC m_eglBindWaylandDisplayWL;
      PFNEGLUNBINDWAYLANDDISPLAYWLPROC m_eglUnbindWaylandDisplayWL;
      PFNEGLQUERYWAYLANDBUFFERWLPROC m_eglQueryWaylandBufferWL;
      PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC m_eglCreateWaylandBufferFromImageWL;
      PFNEGLQUERYDEVICEBINARYEXTPROC m_eglQueryDeviceBinaryEXT;
      PFNEGLDESTROYDISPLAYEXTPROC m_eglDestroyDisplayEXT;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (EGLDisplay display);

    static void Deinitialise ();

    static bool IsSupported (GLEW_EGL_FeatureSet feature)
    {
      GLEW_ASSERT (s_initialised);

      return s_deviceConfig.m_featureSupported [feature];
    }

    static void SetConfig (glew::egl::DeviceConfig &deviceConfig)
    {
      GLEW_ASSERT (s_initialised);

      s_deviceConfig = deviceConfig;
    }

    static glew::egl::DeviceConfig &GetConfig ()
    {
      GLEW_ASSERT (s_initialised);

      return s_deviceConfig;
    }

  protected:

    static bool s_initialised;

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

GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSwapInterval (EGLDisplay dpy, EGLint interval);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglBindAPI (EGLenum api);
GLEW_API EGLenum GLEW_APIENTRY _glew_egl_eglQueryAPI ();
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglReleaseThread ();
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglWaitClient ();
GLEW_API EGLContext GLEW_APIENTRY _glew_egl_eglGetCurrentContext ();
GLEW_API EGLSync GLEW_APIENTRY _glew_egl_eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroySync (EGLDisplay dpy, EGLSync sync);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value);
GLEW_API EGLImage GLEW_APIENTRY _glew_egl_eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroyImage (EGLDisplay dpy, EGLImage image);
GLEW_API EGLDisplay GLEW_APIENTRY _glew_egl_eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list);
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list);
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags);
GLEW_API void GLEW_APIENTRY _glew_egl_eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
GLEW_API EGLClientBuffer GLEW_APIENTRY _glew_egl_eglCreateNativeClientBufferANDROID (const EGLint * attrib_list);
GLEW_API EGLClientBuffer GLEW_APIENTRY _glew_egl_eglGetNativeClientBufferANDROID (const struct AHardwareBuffer * buffer);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglPresentationTimeANDROID (EGLDisplay dpy, EGLSurface surface, EGLnsecsANDROID time);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetCompositorTimingSupportedANDROID (EGLDisplay dpy, EGLSurface surface, EGLint name);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetCompositorTimingANDROID (EGLDisplay dpy, EGLSurface surface, EGLint numTimestamps, const EGLint * names, EGLnsecsANDROID * values);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetNextFrameIdANDROID (EGLDisplay dpy, EGLSurface surface, EGLuint64KHR * frameId);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetFrameTimestampSupportedANDROID (EGLDisplay dpy, EGLSurface surface, EGLint timestamp);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetFrameTimestampsANDROID (EGLDisplay dpy, EGLSurface surface, EGLuint64KHR frameId, EGLint numTimestamps, const EGLint * timestamps, EGLnsecsANDROID * values);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetMscRateANGLE (EGLDisplay dpy, EGLSurface surface, EGLint * numerator, EGLint * denominator);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglClientSignalSyncEXT (EGLDisplay dpy, EGLSync sync, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
GLEW_API const char * GLEW_APIENTRY _glew_egl_eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDmaBufFormatsEXT (EGLDisplay dpy, EGLint max_formats, EGLint * formats, EGLint * num_formats);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDmaBufModifiersEXT (EGLDisplay dpy, EGLint format, EGLint max_modifiers, EGLuint64KHR * modifiers, EGLBoolean * external_only, EGLint * num_modifiers);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value);
GLEW_API const char * GLEW_APIENTRY _glew_egl_eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value);
GLEW_API const char * GLEW_APIENTRY _glew_egl_eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);
GLEW_API EGLDisplay GLEW_APIENTRY _glew_egl_eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list);
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list);
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, const EGLint * rects, EGLint n_rects);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglUnsignalSyncEXT (EGLDisplay dpy, EGLSync sync, const EGLAttrib * attrib_list);
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap);
GLEW_API EGLSyncKHR GLEW_APIENTRY _glew_egl_eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglDebugMessageControlKHR (EGLDEBUGPROCKHR callback, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDebugKHR (EGLint attribute, EGLAttrib * value);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglLabelObjectKHR (EGLDisplay display, EGLenum objectType, EGLObjectKHR object, EGLLabelKHR label);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDisplayAttribKHR (EGLDisplay dpy, EGLint name, EGLAttrib * value);
GLEW_API EGLSyncKHR GLEW_APIENTRY _glew_egl_eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);
GLEW_API EGLImageKHR GLEW_APIENTRY _glew_egl_eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
GLEW_API EGLStreamKHR GLEW_APIENTRY _glew_egl_eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value);
GLEW_API EGLStreamKHR GLEW_APIENTRY _glew_egl_eglCreateStreamAttribKHR (EGLDisplay dpy, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSetStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLAttrib * value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerAcquireAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerReleaseAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLNativeFileDescriptorKHR GLEW_APIENTRY _glew_egl_eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLStreamKHR GLEW_APIENTRY _glew_egl_eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);
GLEW_API EGLSurface GLEW_APIENTRY _glew_egl_eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * rects, EGLint n_rects);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
GLEW_API EGLImageKHR GLEW_APIENTRY _glew_egl_eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);
GLEW_API char * GLEW_APIENTRY _glew_egl_eglGetDisplayDriverConfig (EGLDisplay dpy);
GLEW_API const char * GLEW_APIENTRY _glew_egl_eglGetDisplayDriverName (EGLDisplay dpy);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamConsumerGLTextureExternalAttribsNV (EGLDisplay dpy, EGLStreamKHR stream, const EGLAttrib * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamImageConsumerConnectNV (EGLDisplay dpy, EGLStreamKHR stream, EGLint num_modifiers, const EGLuint64KHR * modifiers, const EGLAttrib * attrib_list);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglQueryStreamConsumerEventNV (EGLDisplay dpy, EGLStreamKHR stream, EGLTime timeout, EGLenum * event, EGLAttrib * aux);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamAcquireImageNV (EGLDisplay dpy, EGLStreamKHR stream, EGLImage * pImage, EGLSync sync);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamReleaseImageNV (EGLDisplay dpy, EGLStreamKHR stream, EGLImage image, EGLSync sync);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglStreamFlushNV (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDisplayAttribNV (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSetStreamMetadataNV (EGLDisplay dpy, EGLStreamKHR stream, EGLint n, EGLint offset, EGLint size, const void * data);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryStreamMetadataNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum name, EGLint n, EGLint offset, EGLint size, void * data);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglResetStreamNV (EGLDisplay dpy, EGLStreamKHR stream);
GLEW_API EGLSyncKHR GLEW_APIENTRY _glew_egl_eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);
GLEW_API EGLSyncNV GLEW_APIENTRY _glew_egl_eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroySyncNV (EGLSyncNV sync);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglFenceNV (EGLSyncNV sync);
GLEW_API EGLint GLEW_APIENTRY _glew_egl_eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglSignalSyncNV (EGLSyncNV sync, EGLenum mode);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value);
GLEW_API EGLuint64NV GLEW_APIENTRY _glew_egl_eglGetSystemTimeFrequencyNV ();
GLEW_API EGLuint64NV GLEW_APIENTRY _glew_egl_eglGetSystemTimeNV ();
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorSetContextListEXT (const EGLint * external_ref_ids, EGLint num_entries);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorSetContextAttributesEXT (EGLint external_ref_id, const EGLint * context_attributes, EGLint num_entries);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorSetWindowListEXT (EGLint external_ref_id, const EGLint * external_win_ids, EGLint num_entries);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorSetWindowAttributesEXT (EGLint external_win_id, const EGLint * window_attributes, EGLint num_entries);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorBindTexWindowEXT (EGLint external_win_id);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorSetSizeEXT (EGLint external_win_id, EGLint width, EGLint height);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglCompositorSwapPolicyEXT (EGLint external_win_id, EGLint policy);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQuerySupportedCompressionRatesEXT (EGLDisplay dpy, EGLConfig config, const EGLAttrib * attrib_list, EGLint * rates, EGLint rate_size, EGLint * num_rates);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglBindWaylandDisplayWL (EGLDisplay dpy, struct wl_display * display);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglUnbindWaylandDisplayWL (EGLDisplay dpy, struct wl_display * display);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryWaylandBufferWL (EGLDisplay dpy, struct wl_resource * buffer, EGLint attribute, EGLint * value);
GLEW_API struct wl_buffer * GLEW_APIENTRY _glew_egl_eglCreateWaylandBufferFromImageWL (EGLDisplay dpy, EGLImageKHR image);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglQueryDeviceBinaryEXT (EGLDeviceEXT device, EGLint name, EGLint max_size, void * value, EGLint * size);
GLEW_API EGLBoolean GLEW_APIENTRY _glew_egl_eglDestroyDisplayEXT (EGLDisplay dpy);

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
#define eglCreateNativeClientBufferANDROID _glew_egl_eglCreateNativeClientBufferANDROID
#define eglGetNativeClientBufferANDROID _glew_egl_eglGetNativeClientBufferANDROID
#define eglDupNativeFenceFDANDROID _glew_egl_eglDupNativeFenceFDANDROID
#define eglPresentationTimeANDROID _glew_egl_eglPresentationTimeANDROID
#define eglGetCompositorTimingSupportedANDROID _glew_egl_eglGetCompositorTimingSupportedANDROID
#define eglGetCompositorTimingANDROID _glew_egl_eglGetCompositorTimingANDROID
#define eglGetNextFrameIdANDROID _glew_egl_eglGetNextFrameIdANDROID
#define eglGetFrameTimestampSupportedANDROID _glew_egl_eglGetFrameTimestampSupportedANDROID
#define eglGetFrameTimestampsANDROID _glew_egl_eglGetFrameTimestampsANDROID
#define eglQuerySurfacePointerANGLE _glew_egl_eglQuerySurfacePointerANGLE
#define eglGetMscRateANGLE _glew_egl_eglGetMscRateANGLE
#define eglClientSignalSyncEXT _glew_egl_eglClientSignalSyncEXT
#define eglQueryDeviceAttribEXT _glew_egl_eglQueryDeviceAttribEXT
#define eglQueryDeviceStringEXT _glew_egl_eglQueryDeviceStringEXT
#define eglQueryDevicesEXT _glew_egl_eglQueryDevicesEXT
#define eglQueryDisplayAttribEXT _glew_egl_eglQueryDisplayAttribEXT
#define eglQueryDmaBufFormatsEXT _glew_egl_eglQueryDmaBufFormatsEXT
#define eglQueryDmaBufModifiersEXT _glew_egl_eglQueryDmaBufModifiersEXT
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
#define eglUnsignalSyncEXT _glew_egl_eglUnsignalSyncEXT
#define eglCreatePixmapSurfaceHI _glew_egl_eglCreatePixmapSurfaceHI
#define eglCreateSync64KHR _glew_egl_eglCreateSync64KHR
#define eglDebugMessageControlKHR _glew_egl_eglDebugMessageControlKHR
#define eglQueryDebugKHR _glew_egl_eglQueryDebugKHR
#define eglLabelObjectKHR _glew_egl_eglLabelObjectKHR
#define eglQueryDisplayAttribKHR _glew_egl_eglQueryDisplayAttribKHR
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
#define eglCreateStreamAttribKHR _glew_egl_eglCreateStreamAttribKHR
#define eglSetStreamAttribKHR _glew_egl_eglSetStreamAttribKHR
#define eglQueryStreamAttribKHR _glew_egl_eglQueryStreamAttribKHR
#define eglStreamConsumerAcquireAttribKHR _glew_egl_eglStreamConsumerAcquireAttribKHR
#define eglStreamConsumerReleaseAttribKHR _glew_egl_eglStreamConsumerReleaseAttribKHR
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
#define eglGetDisplayDriverConfig _glew_egl_eglGetDisplayDriverConfig
#define eglGetDisplayDriverName _glew_egl_eglGetDisplayDriverName
#define eglSwapBuffersRegionNOK _glew_egl_eglSwapBuffersRegionNOK
#define eglSwapBuffersRegion2NOK _glew_egl_eglSwapBuffersRegion2NOK
#define eglQueryNativeDisplayNV _glew_egl_eglQueryNativeDisplayNV
#define eglQueryNativeWindowNV _glew_egl_eglQueryNativeWindowNV
#define eglQueryNativePixmapNV _glew_egl_eglQueryNativePixmapNV
#define eglPostSubBufferNV _glew_egl_eglPostSubBufferNV
#define eglStreamConsumerGLTextureExternalAttribsNV _glew_egl_eglStreamConsumerGLTextureExternalAttribsNV
#define eglStreamImageConsumerConnectNV _glew_egl_eglStreamImageConsumerConnectNV
#define eglQueryStreamConsumerEventNV _glew_egl_eglQueryStreamConsumerEventNV
#define eglStreamAcquireImageNV _glew_egl_eglStreamAcquireImageNV
#define eglStreamReleaseImageNV _glew_egl_eglStreamReleaseImageNV
#define eglStreamFlushNV _glew_egl_eglStreamFlushNV
#define eglQueryDisplayAttribNV _glew_egl_eglQueryDisplayAttribNV
#define eglSetStreamMetadataNV _glew_egl_eglSetStreamMetadataNV
#define eglQueryStreamMetadataNV _glew_egl_eglQueryStreamMetadataNV
#define eglResetStreamNV _glew_egl_eglResetStreamNV
#define eglCreateStreamSyncNV _glew_egl_eglCreateStreamSyncNV
#define eglCreateFenceSyncNV _glew_egl_eglCreateFenceSyncNV
#define eglDestroySyncNV _glew_egl_eglDestroySyncNV
#define eglFenceNV _glew_egl_eglFenceNV
#define eglClientWaitSyncNV _glew_egl_eglClientWaitSyncNV
#define eglSignalSyncNV _glew_egl_eglSignalSyncNV
#define eglGetSyncAttribNV _glew_egl_eglGetSyncAttribNV
#define eglGetSystemTimeFrequencyNV _glew_egl_eglGetSystemTimeFrequencyNV
#define eglGetSystemTimeNV _glew_egl_eglGetSystemTimeNV
#define eglCompositorSetContextListEXT _glew_egl_eglCompositorSetContextListEXT
#define eglCompositorSetContextAttributesEXT _glew_egl_eglCompositorSetContextAttributesEXT
#define eglCompositorSetWindowListEXT _glew_egl_eglCompositorSetWindowListEXT
#define eglCompositorSetWindowAttributesEXT _glew_egl_eglCompositorSetWindowAttributesEXT
#define eglCompositorBindTexWindowEXT _glew_egl_eglCompositorBindTexWindowEXT
#define eglCompositorSetSizeEXT _glew_egl_eglCompositorSetSizeEXT
#define eglCompositorSwapPolicyEXT _glew_egl_eglCompositorSwapPolicyEXT
#define eglQuerySupportedCompressionRatesEXT _glew_egl_eglQuerySupportedCompressionRatesEXT
#define eglBindWaylandDisplayWL _glew_egl_eglBindWaylandDisplayWL
#define eglUnbindWaylandDisplayWL _glew_egl_eglUnbindWaylandDisplayWL
#define eglQueryWaylandBufferWL _glew_egl_eglQueryWaylandBufferWL
#define eglCreateWaylandBufferFromImageWL _glew_egl_eglCreateWaylandBufferFromImageWL
#define eglQueryDeviceBinaryEXT _glew_egl_eglQueryDeviceBinaryEXT
#define eglDestroyDisplayEXT _glew_egl_eglDestroyDisplayEXT

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(__GNUC__)
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
