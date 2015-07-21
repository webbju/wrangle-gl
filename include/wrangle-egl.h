////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WRANGLE_EGL_H__
#define __WRANGLE_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <EGL/egl.h>

#include <EGL/eglext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct EGLCapabilities
{
  bool
    __EGL_VERSION_1_0,
    __EGL_VERSION_1_1,
    __EGL_VERSION_1_2,
    __EGL_VERSION_1_3,
    __EGL_VERSION_1_4,
    __EGL_VERSION_1_5;

  bool
    __EGL_ANDROID_blob_cache,
    __EGL_ANDROID_framebuffer_target,
    __EGL_ANDROID_image_native_buffer,
    __EGL_ANDROID_native_fence_sync,
    __EGL_ANDROID_recordable,
    __EGL_ANGLE_d3d_share_handle_client_buffer,
    __EGL_ANGLE_device_d3d,
    __EGL_ANGLE_query_surface_pointer,
    __EGL_ANGLE_surface_d3d_texture_2d_share_handle,
    __EGL_ANGLE_window_fixed_size,
    __EGL_ARM_pixmap_multisample_discard,
    __EGL_EXT_buffer_age,
    __EGL_EXT_client_extensions,
    __EGL_EXT_create_context_robustness,
    __EGL_EXT_device_base,
    __EGL_EXT_device_drm,
    __EGL_EXT_device_enumeration,
    __EGL_EXT_device_openwf,
    __EGL_EXT_device_query,
    __EGL_EXT_image_dma_buf_import,
    __EGL_EXT_multiview_window,
    __EGL_EXT_output_base,
    __EGL_EXT_output_drm,
    __EGL_EXT_output_openwf,
    __EGL_EXT_platform_base,
    __EGL_EXT_platform_device,
    __EGL_EXT_platform_wayland,
    __EGL_EXT_platform_x11,
    __EGL_EXT_protected_surface,
    __EGL_EXT_stream_consumer_egloutput,
    __EGL_EXT_swap_buffers_with_damage,
    __EGL_EXT_yuv_surface,
    __EGL_HI_clientpixmap,
    __EGL_HI_colorformats,
    __EGL_IMG_context_priority,
    __EGL_KHR_cl_event,
    __EGL_KHR_cl_event2,
    __EGL_KHR_config_attribs,
    __EGL_KHR_client_get_all_proc_addresses,
    __EGL_KHR_create_context,
    __EGL_KHR_create_context_no_error,
    __EGL_KHR_fence_sync,
    __EGL_KHR_get_all_proc_addresses,
    __EGL_KHR_gl_colorspace,
    __EGL_KHR_gl_renderbuffer_image,
    __EGL_KHR_gl_texture_2D_image,
    __EGL_KHR_gl_texture_3D_image,
    __EGL_KHR_gl_texture_cubemap_image,
    __EGL_KHR_image,
    __EGL_KHR_image_base,
    __EGL_KHR_image_pixmap,
    __EGL_KHR_lock_surface,
    __EGL_KHR_lock_surface2,
    __EGL_KHR_lock_surface3,
    __EGL_KHR_partial_update,
    __EGL_KHR_platform_android,
    __EGL_KHR_platform_gbm,
    __EGL_KHR_platform_wayland,
    __EGL_KHR_platform_x11,
    __EGL_KHR_reusable_sync,
    __EGL_KHR_stream,
    __EGL_KHR_stream_consumer_gltexture,
    __EGL_KHR_stream_cross_process_fd,
    __EGL_KHR_stream_fifo,
    __EGL_KHR_stream_producer_aldatalocator,
    __EGL_KHR_stream_producer_eglsurface,
    __EGL_KHR_surfaceless_context,
    __EGL_KHR_swap_buffers_with_damage,
    __EGL_KHR_vg_parent_image,
    __EGL_KHR_wait_sync,
    __EGL_MESA_drm_image,
    __EGL_MESA_image_dma_buf_export,
    __EGL_MESA_platform_gbm,
    __EGL_NOK_swap_region,
    __EGL_NOK_swap_region2,
    __EGL_NOK_texture_from_pixmap,
    __EGL_NV_3dvision_surface,
    __EGL_NV_coverage_sample,
    __EGL_NV_coverage_sample_resolve,
    __EGL_NV_cuda_event,
    __EGL_NV_depth_nonlinear,
    __EGL_NV_device_cuda,
    __EGL_NV_native_query,
    __EGL_NV_post_convert_rounding,
    __EGL_NV_post_sub_buffer,
    __EGL_NV_stream_sync,
    __EGL_NV_sync,
    __EGL_NV_system_time,
    __EGL_TIZEN_image_native_buffer,
    __EGL_TIZEN_image_native_surface;

  // EGL_VERSION_1_0
  PFNEGLCHOOSECONFIGPROC
    eglChooseConfig;
  PFNEGLCOPYBUFFERSPROC
    eglCopyBuffers;
  PFNEGLCREATECONTEXTPROC
    eglCreateContext;
  PFNEGLCREATEPBUFFERSURFACEPROC
    eglCreatePbufferSurface;
  PFNEGLCREATEPIXMAPSURFACEPROC
    eglCreatePixmapSurface;
  PFNEGLCREATEWINDOWSURFACEPROC
    eglCreateWindowSurface;
  PFNEGLDESTROYCONTEXTPROC
    eglDestroyContext;
  PFNEGLDESTROYSURFACEPROC
    eglDestroySurface;
  PFNEGLGETCONFIGATTRIBPROC
    eglGetConfigAttrib;
  PFNEGLGETCONFIGSPROC
    eglGetConfigs;
  PFNEGLGETCURRENTDISPLAYPROC
    eglGetCurrentDisplay;
  PFNEGLGETCURRENTSURFACEPROC
    eglGetCurrentSurface;
  PFNEGLGETDISPLAYPROC
    eglGetDisplay;
  PFNEGLGETERRORPROC
    eglGetError;
  PFNEGLGETPROCADDRESSPROC
    eglGetProcAddress;
  PFNEGLINITIALIZEPROC
    eglInitialize;
  PFNEGLMAKECURRENTPROC
    eglMakeCurrent;
  PFNEGLQUERYCONTEXTPROC
    eglQueryContext;
  PFNEGLQUERYSTRINGPROC
    eglQueryString;
  PFNEGLQUERYSURFACEPROC
    eglQuerySurface;
  PFNEGLSWAPBUFFERSPROC
    eglSwapBuffers;
  PFNEGLTERMINATEPROC
    eglTerminate;
  PFNEGLWAITGLPROC
    eglWaitGL;
  PFNEGLWAITNATIVEPROC
    eglWaitNative;

  // EGL_VERSION_1_1
  PFNEGLBINDTEXIMAGEPROC
    eglBindTexImage;
  PFNEGLRELEASETEXIMAGEPROC
    eglReleaseTexImage;
  PFNEGLSURFACEATTRIBPROC
    eglSurfaceAttrib;
  PFNEGLSWAPINTERVALPROC
    eglSwapInterval;

  // EGL_VERSION_1_2
  PFNEGLBINDAPIPROC
    eglBindAPI;
  PFNEGLQUERYAPIPROC
    eglQueryAPI;
  PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC
    eglCreatePbufferFromClientBuffer;
  PFNEGLRELEASETHREADPROC
    eglReleaseThread;
  PFNEGLWAITCLIENTPROC
    eglWaitClient;

  // EGL_VERSION_1_4
  PFNEGLGETCURRENTCONTEXTPROC
    eglGetCurrentContext;

  // EGL_VERSION_1_5
  PFNEGLCREATESYNCPROC
    eglCreateSync;
  PFNEGLDESTROYSYNCPROC
    eglDestroySync;
  PFNEGLCLIENTWAITSYNCPROC
    eglClientWaitSync;
  PFNEGLGETSYNCATTRIBPROC
    eglGetSyncAttrib;
  PFNEGLCREATEIMAGEPROC
    eglCreateImage;
  PFNEGLDESTROYIMAGEPROC
    eglDestroyImage;
  PFNEGLGETPLATFORMDISPLAYPROC
    eglGetPlatformDisplay;
  PFNEGLCREATEPLATFORMWINDOWSURFACEPROC
    eglCreatePlatformWindowSurface;
  PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC
    eglCreatePlatformPixmapSurface;
  PFNEGLWAITSYNCPROC
    eglWaitSync;

  // EGL_ANDROID_blob_cache
  PFNEGLSETBLOBCACHEFUNCSANDROIDPROC
    eglSetBlobCacheFuncsANDROID;

  // EGL_ANDROID_native_fence_sync
  PFNEGLDUPNATIVEFENCEFDANDROIDPROC
    eglDupNativeFenceFDANDROID;

  // EGL_ANGLE_query_surface_pointer
  PFNEGLQUERYSURFACEPOINTERANGLEPROC
    eglQuerySurfacePointerANGLE;

  // EGL_EXT_device_base
  PFNEGLQUERYDEVICEATTRIBEXTPROC
    eglQueryDeviceAttribEXT;
  PFNEGLQUERYDEVICESTRINGEXTPROC
    eglQueryDeviceStringEXT;
  PFNEGLQUERYDEVICESEXTPROC
    eglQueryDevicesEXT;
  PFNEGLQUERYDISPLAYATTRIBEXTPROC
    eglQueryDisplayAttribEXT;

  // EGL_EXT_device_enumeration
  PFNEGLQUERYDEVICESEXTPROC
    eglQueryDevicesEXT;

  // EGL_EXT_device_query
  PFNEGLQUERYDEVICEATTRIBEXTPROC
    eglQueryDeviceAttribEXT;
  PFNEGLQUERYDEVICESTRINGEXTPROC
    eglQueryDeviceStringEXT;
  PFNEGLQUERYDISPLAYATTRIBEXTPROC
    eglQueryDisplayAttribEXT;

  // EGL_EXT_output_base
  PFNEGLGETOUTPUTLAYERSEXTPROC
    eglGetOutputLayersEXT;
  PFNEGLGETOUTPUTPORTSEXTPROC
    eglGetOutputPortsEXT;
  PFNEGLOUTPUTLAYERATTRIBEXTPROC
    eglOutputLayerAttribEXT;
  PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC
    eglQueryOutputLayerAttribEXT;
  PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC
    eglQueryOutputLayerStringEXT;
  PFNEGLOUTPUTPORTATTRIBEXTPROC
    eglOutputPortAttribEXT;
  PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC
    eglQueryOutputPortAttribEXT;
  PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC
    eglQueryOutputPortStringEXT;

  // EGL_EXT_platform_base
  PFNEGLGETPLATFORMDISPLAYEXTPROC
    eglGetPlatformDisplayEXT;
  PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC
    eglCreatePlatformWindowSurfaceEXT;
  PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC
    eglCreatePlatformPixmapSurfaceEXT;

  // EGL_EXT_stream_consumer_egloutput
  PFNEGLSTREAMCONSUMEROUTPUTEXTPROC
    eglStreamConsumerOutputEXT;

  // EGL_EXT_swap_buffers_with_damage
  PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC
    eglSwapBuffersWithDamageEXT;

  // EGL_HI_clientpixmap
  PFNEGLCREATEPIXMAPSURFACEHIPROC
    eglCreatePixmapSurfaceHI;

  // EGL_KHR_cl_event2
  PFNEGLCREATESYNC64KHRPROC
    eglCreateSync64KHR;

  // EGL_KHR_fence_sync
  PFNEGLCREATESYNCKHRPROC
    eglCreateSyncKHR;
  PFNEGLDESTROYSYNCKHRPROC
    eglDestroySyncKHR;
  PFNEGLCLIENTWAITSYNCKHRPROC
    eglClientWaitSyncKHR;
  PFNEGLGETSYNCATTRIBKHRPROC
    eglGetSyncAttribKHR;

  // EGL_KHR_image
  PFNEGLCREATEIMAGEKHRPROC
    eglCreateImageKHR;
  PFNEGLDESTROYIMAGEKHRPROC
    eglDestroyImageKHR;

  // EGL_KHR_image_base
  PFNEGLCREATEIMAGEKHRPROC
    eglCreateImageKHR;
  PFNEGLDESTROYIMAGEKHRPROC
    eglDestroyImageKHR;

  // EGL_KHR_lock_surface
  PFNEGLLOCKSURFACEKHRPROC
    eglLockSurfaceKHR;
  PFNEGLUNLOCKSURFACEKHRPROC
    eglUnlockSurfaceKHR;

  // EGL_KHR_lock_surface3
  PFNEGLLOCKSURFACEKHRPROC
    eglLockSurfaceKHR;
  PFNEGLUNLOCKSURFACEKHRPROC
    eglUnlockSurfaceKHR;
  PFNEGLQUERYSURFACE64KHRPROC
    eglQuerySurface64KHR;

  // EGL_KHR_partial_update
  PFNEGLSETDAMAGEREGIONKHRPROC
    eglSetDamageRegionKHR;

  // EGL_KHR_reusable_sync
  PFNEGLCREATESYNCKHRPROC
    eglCreateSyncKHR;
  PFNEGLDESTROYSYNCKHRPROC
    eglDestroySyncKHR;
  PFNEGLCLIENTWAITSYNCKHRPROC
    eglClientWaitSyncKHR;
  PFNEGLSIGNALSYNCKHRPROC
    eglSignalSyncKHR;
  PFNEGLGETSYNCATTRIBKHRPROC
    eglGetSyncAttribKHR;

  // EGL_KHR_stream
  PFNEGLCREATESTREAMKHRPROC
    eglCreateStreamKHR;
  PFNEGLDESTROYSTREAMKHRPROC
    eglDestroyStreamKHR;
  PFNEGLSTREAMATTRIBKHRPROC
    eglStreamAttribKHR;
  PFNEGLQUERYSTREAMKHRPROC
    eglQueryStreamKHR;
  PFNEGLQUERYSTREAMU64KHRPROC
    eglQueryStreamu64KHR;

  // EGL_KHR_stream_consumer_gltexture
  PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC
    eglStreamConsumerGLTextureExternalKHR;
  PFNEGLSTREAMCONSUMERACQUIREKHRPROC
    eglStreamConsumerAcquireKHR;
  PFNEGLSTREAMCONSUMERRELEASEKHRPROC
    eglStreamConsumerReleaseKHR;

  // EGL_KHR_stream_cross_process_fd
  PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC
    eglGetStreamFileDescriptorKHR;
  PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC
    eglCreateStreamFromFileDescriptorKHR;

  // EGL_KHR_stream_fifo
  PFNEGLQUERYSTREAMTIMEKHRPROC
    eglQueryStreamTimeKHR;

  // EGL_KHR_stream_producer_eglsurface
  PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC
    eglCreateStreamProducerSurfaceKHR;

  // EGL_KHR_swap_buffers_with_damage
  PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC
    eglSwapBuffersWithDamageKHR;

  // EGL_KHR_wait_sync
  PFNEGLWAITSYNCKHRPROC
    eglWaitSyncKHR;

  // EGL_MESA_drm_image
  PFNEGLCREATEDRMIMAGEMESAPROC
    eglCreateDRMImageMESA;
  PFNEGLEXPORTDRMIMAGEMESAPROC
    eglExportDRMImageMESA;

  // EGL_MESA_image_dma_buf_export
  PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC
    eglExportDMABUFImageQueryMESA;
  PFNEGLEXPORTDMABUFIMAGEMESAPROC
    eglExportDMABUFImageMESA;

  // EGL_NOK_swap_region
  PFNEGLSWAPBUFFERSREGIONNOKPROC
    eglSwapBuffersRegionNOK;

  // EGL_NOK_swap_region2
  PFNEGLSWAPBUFFERSREGION2NOKPROC
    eglSwapBuffersRegion2NOK;

  // EGL_NV_native_query
  PFNEGLQUERYNATIVEDISPLAYNVPROC
    eglQueryNativeDisplayNV;
  PFNEGLQUERYNATIVEWINDOWNVPROC
    eglQueryNativeWindowNV;
  PFNEGLQUERYNATIVEPIXMAPNVPROC
    eglQueryNativePixmapNV;

  // EGL_NV_post_sub_buffer
  PFNEGLPOSTSUBBUFFERNVPROC
    eglPostSubBufferNV;

  // EGL_NV_stream_sync
  PFNEGLCREATESTREAMSYNCNVPROC
    eglCreateStreamSyncNV;

  // EGL_NV_sync
  PFNEGLCREATEFENCESYNCNVPROC
    eglCreateFenceSyncNV;
  PFNEGLDESTROYSYNCNVPROC
    eglDestroySyncNV;
  PFNEGLFENCENVPROC
    eglFenceNV;
  PFNEGLCLIENTWAITSYNCNVPROC
    eglClientWaitSyncNV;
  PFNEGLSIGNALSYNCNVPROC
    eglSignalSyncNV;
  PFNEGLGETSYNCATTRIBNVPROC
    eglGetSyncAttribNV;

  // EGL_NV_system_time
  PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC
    eglGetSystemTimeFrequencyNV;
  PFNEGLGETSYSTEMTIMENVPROC
    eglGetSystemTimeNV;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

EGLBoolean eglwQueryCapabilities (EGLCapabilities *capabilities);

const EGLCapabilities *eglwGetCapabilities ();

EGLBoolean eglwSetCapabilities (const EGLCapabilities *capabilities);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define eglBindAPI __eglBindAPI
#define eglBindTexImage __eglBindTexImage
#define eglChooseConfig __eglChooseConfig
#define eglClientWaitSync __eglClientWaitSync
#define eglClientWaitSyncKHR __eglClientWaitSyncKHR
#define eglClientWaitSyncNV __eglClientWaitSyncNV
#define eglCopyBuffers __eglCopyBuffers
#define eglCreateContext __eglCreateContext
#define eglCreateDRMImageMESA __eglCreateDRMImageMESA
#define eglCreateFenceSyncNV __eglCreateFenceSyncNV
#define eglCreateImage __eglCreateImage
#define eglCreateImageKHR __eglCreateImageKHR
#define eglCreatePbufferFromClientBuffer __eglCreatePbufferFromClientBuffer
#define eglCreatePbufferSurface __eglCreatePbufferSurface
#define eglCreatePixmapSurface __eglCreatePixmapSurface
#define eglCreatePixmapSurfaceHI __eglCreatePixmapSurfaceHI
#define eglCreatePlatformPixmapSurface __eglCreatePlatformPixmapSurface
#define eglCreatePlatformPixmapSurfaceEXT __eglCreatePlatformPixmapSurfaceEXT
#define eglCreatePlatformWindowSurface __eglCreatePlatformWindowSurface
#define eglCreatePlatformWindowSurfaceEXT __eglCreatePlatformWindowSurfaceEXT
#define eglCreateStreamFromFileDescriptorKHR __eglCreateStreamFromFileDescriptorKHR
#define eglCreateStreamKHR __eglCreateStreamKHR
#define eglCreateStreamProducerSurfaceKHR __eglCreateStreamProducerSurfaceKHR
#define eglCreateStreamSyncNV __eglCreateStreamSyncNV
#define eglCreateSync __eglCreateSync
#define eglCreateSyncKHR __eglCreateSyncKHR
#define eglCreateSync64KHR __eglCreateSync64KHR
#define eglCreateWindowSurface __eglCreateWindowSurface
#define eglDestroyContext __eglDestroyContext
#define eglDestroyImage __eglDestroyImage
#define eglDestroyImageKHR __eglDestroyImageKHR
#define eglDestroyStreamKHR __eglDestroyStreamKHR
#define eglDestroySurface __eglDestroySurface
#define eglDestroySync __eglDestroySync
#define eglDestroySyncKHR __eglDestroySyncKHR
#define eglDestroySyncNV __eglDestroySyncNV
#define eglDupNativeFenceFDANDROID __eglDupNativeFenceFDANDROID
#define eglExportDMABUFImageMESA __eglExportDMABUFImageMESA
#define eglExportDMABUFImageQueryMESA __eglExportDMABUFImageQueryMESA
#define eglExportDRMImageMESA __eglExportDRMImageMESA
#define eglFenceNV __eglFenceNV
#define eglGetConfigAttrib __eglGetConfigAttrib
#define eglGetConfigs __eglGetConfigs
#define eglGetCurrentContext __eglGetCurrentContext
#define eglGetCurrentDisplay __eglGetCurrentDisplay
#define eglGetCurrentSurface __eglGetCurrentSurface
#define eglGetDisplay __eglGetDisplay
#define eglGetError __eglGetError
#define eglGetOutputLayersEXT __eglGetOutputLayersEXT
#define eglGetOutputPortsEXT __eglGetOutputPortsEXT
#define eglGetPlatformDisplay __eglGetPlatformDisplay
#define eglGetPlatformDisplayEXT __eglGetPlatformDisplayEXT
#define eglGetProcAddress __eglGetProcAddress
#define eglGetStreamFileDescriptorKHR __eglGetStreamFileDescriptorKHR
#define eglGetSyncAttrib __eglGetSyncAttrib
#define eglGetSyncAttribKHR __eglGetSyncAttribKHR
#define eglGetSyncAttribNV __eglGetSyncAttribNV
#define eglGetSystemTimeFrequencyNV __eglGetSystemTimeFrequencyNV
#define eglGetSystemTimeNV __eglGetSystemTimeNV
#define eglInitialize __eglInitialize
#define eglLockSurfaceKHR __eglLockSurfaceKHR
#define eglMakeCurrent __eglMakeCurrent
#define eglOutputLayerAttribEXT __eglOutputLayerAttribEXT
#define eglOutputPortAttribEXT __eglOutputPortAttribEXT
#define eglPostSubBufferNV __eglPostSubBufferNV
#define eglQueryAPI __eglQueryAPI
#define eglQueryContext __eglQueryContext
#define eglQueryDeviceAttribEXT __eglQueryDeviceAttribEXT
#define eglQueryDeviceStringEXT __eglQueryDeviceStringEXT
#define eglQueryDevicesEXT __eglQueryDevicesEXT
#define eglQueryDisplayAttribEXT __eglQueryDisplayAttribEXT
#define eglQueryNativeDisplayNV __eglQueryNativeDisplayNV
#define eglQueryNativePixmapNV __eglQueryNativePixmapNV
#define eglQueryNativeWindowNV __eglQueryNativeWindowNV
#define eglQueryOutputLayerAttribEXT __eglQueryOutputLayerAttribEXT
#define eglQueryOutputLayerStringEXT __eglQueryOutputLayerStringEXT
#define eglQueryOutputPortAttribEXT __eglQueryOutputPortAttribEXT
#define eglQueryOutputPortStringEXT __eglQueryOutputPortStringEXT
#define eglQueryStreamKHR __eglQueryStreamKHR
#define eglQueryStreamTimeKHR __eglQueryStreamTimeKHR
#define eglQueryStreamu64KHR __eglQueryStreamu64KHR
#define eglQueryString __eglQueryString
#define eglQuerySurface __eglQuerySurface
#define eglQuerySurface64KHR __eglQuerySurface64KHR
#define eglQuerySurfacePointerANGLE __eglQuerySurfacePointerANGLE
#define eglReleaseTexImage __eglReleaseTexImage
#define eglReleaseThread __eglReleaseThread
#define eglSetBlobCacheFuncsANDROID __eglSetBlobCacheFuncsANDROID
#define eglSetDamageRegionKHR __eglSetDamageRegionKHR
#define eglSignalSyncKHR __eglSignalSyncKHR
#define eglSignalSyncNV __eglSignalSyncNV
#define eglStreamAttribKHR __eglStreamAttribKHR
#define eglStreamConsumerAcquireKHR __eglStreamConsumerAcquireKHR
#define eglStreamConsumerGLTextureExternalKHR __eglStreamConsumerGLTextureExternalKHR
#define eglStreamConsumerOutputEXT __eglStreamConsumerOutputEXT
#define eglStreamConsumerReleaseKHR __eglStreamConsumerReleaseKHR
#define eglSurfaceAttrib __eglSurfaceAttrib
#define eglSwapBuffers __eglSwapBuffers
#define eglSwapBuffersWithDamageEXT __eglSwapBuffersWithDamageEXT
#define eglSwapBuffersWithDamageKHR __eglSwapBuffersWithDamageKHR
#define eglSwapBuffersRegionNOK __eglSwapBuffersRegionNOK
#define eglSwapBuffersRegion2NOK __eglSwapBuffersRegion2NOK
#define eglSwapInterval __eglSwapInterval
#define eglTerminate __eglTerminate
#define eglUnlockSurfaceKHR __eglUnlockSurfaceKHR
#define eglWaitClient __eglWaitClient
#define eglWaitGL __eglWaitGL
#define eglWaitNative __eglWaitNative
#define eglWaitSync __eglWaitSync
#define eglWaitSyncKHR __eglWaitSyncKHR

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __WRANGLE_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
