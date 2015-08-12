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
      // Features
      GLEW_EGL_VERSION_1_0,
      GLEW_EGL_VERSION_1_1,
      GLEW_EGL_VERSION_1_2,
      GLEW_EGL_VERSION_1_3,
      GLEW_EGL_VERSION_1_4,
      GLEW_EGL_VERSION_1_5,
      // Extensions
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
      GLEW_GL_FeatureSetCount
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::egl::FeatureSet::GLEW_GL_FeatureSetCount];

    public:

      bool IsSupported (glew::egl::FeatureSet feature);
      bool IsSupported (const char *feature);

      // EGL_VERSION_1_0
      PFNEGLCHOOSECONFIGPROC eglChooseConfig;
      PFNEGLCOPYBUFFERSPROC eglCopyBuffers;
      PFNEGLCREATECONTEXTPROC eglCreateContext;
      PFNEGLCREATEPBUFFERSURFACEPROC eglCreatePbufferSurface;
      PFNEGLCREATEPIXMAPSURFACEPROC eglCreatePixmapSurface;
      PFNEGLCREATEWINDOWSURFACEPROC eglCreateWindowSurface;
      PFNEGLDESTROYCONTEXTPROC eglDestroyContext;
      PFNEGLDESTROYSURFACEPROC eglDestroySurface;
      PFNEGLGETCONFIGATTRIBPROC eglGetConfigAttrib;
      PFNEGLGETCONFIGSPROC eglGetConfigs;
      PFNEGLGETCURRENTDISPLAYPROC eglGetCurrentDisplay;
      PFNEGLGETCURRENTSURFACEPROC eglGetCurrentSurface;
      PFNEGLGETDISPLAYPROC eglGetDisplay;
      PFNEGLGETERRORPROC eglGetError;
      PFNEGLGETPROCADDRESSPROC eglGetProcAddress;
      PFNEGLINITIALIZEPROC eglInitialize;
      PFNEGLMAKECURRENTPROC eglMakeCurrent;
      PFNEGLQUERYCONTEXTPROC eglQueryContext;
      PFNEGLQUERYSTRINGPROC eglQueryString;
      PFNEGLQUERYSURFACEPROC eglQuerySurface;
      PFNEGLSWAPBUFFERSPROC eglSwapBuffers;
      PFNEGLTERMINATEPROC eglTerminate;
      PFNEGLWAITGLPROC eglWaitGL;
      PFNEGLWAITNATIVEPROC eglWaitNative;

      // EGL_VERSION_1_1
      PFNEGLBINDTEXIMAGEPROC eglBindTexImage;
      PFNEGLRELEASETEXIMAGEPROC eglReleaseTexImage;
      PFNEGLSURFACEATTRIBPROC eglSurfaceAttrib;
      PFNEGLSWAPINTERVALPROC eglSwapInterval;

      // EGL_VERSION_1_2
      PFNEGLBINDAPIPROC eglBindAPI;
      PFNEGLQUERYAPIPROC eglQueryAPI;
      PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC eglCreatePbufferFromClientBuffer;
      PFNEGLRELEASETHREADPROC eglReleaseThread;
      PFNEGLWAITCLIENTPROC eglWaitClient;

      // EGL_VERSION_1_4
      PFNEGLGETCURRENTCONTEXTPROC eglGetCurrentContext;

      // EGL_VERSION_1_5
      PFNEGLCREATESYNCPROC eglCreateSync;
      PFNEGLDESTROYSYNCPROC eglDestroySync;
      PFNEGLCLIENTWAITSYNCPROC eglClientWaitSync;
      PFNEGLGETSYNCATTRIBPROC eglGetSyncAttrib;
      PFNEGLCREATEIMAGEPROC eglCreateImage;
      PFNEGLDESTROYIMAGEPROC eglDestroyImage;
      PFNEGLGETPLATFORMDISPLAYPROC eglGetPlatformDisplay;
      PFNEGLCREATEPLATFORMWINDOWSURFACEPROC eglCreatePlatformWindowSurface;
      PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC eglCreatePlatformPixmapSurface;
      PFNEGLWAITSYNCPROC eglWaitSync;

      // EGL_ANDROID_blob_cache
      PFNEGLSETBLOBCACHEFUNCSANDROIDPROC eglSetBlobCacheFuncsANDROID;

      // EGL_ANDROID_native_fence_sync
      PFNEGLDUPNATIVEFENCEFDANDROIDPROC eglDupNativeFenceFDANDROID;

      // EGL_ANGLE_query_surface_pointer
      PFNEGLQUERYSURFACEPOINTERANGLEPROC eglQuerySurfacePointerANGLE;

      // EGL_EXT_device_base
      PFNEGLQUERYDEVICEATTRIBEXTPROC eglQueryDeviceAttribEXT;
      PFNEGLQUERYDEVICESTRINGEXTPROC eglQueryDeviceStringEXT;
      PFNEGLQUERYDEVICESEXTPROC eglQueryDevicesEXT;
      PFNEGLQUERYDISPLAYATTRIBEXTPROC eglQueryDisplayAttribEXT;

      // EGL_EXT_device_enumeration
      PFNEGLQUERYDEVICESEXTPROC eglQueryDevicesEXT;

      // EGL_EXT_device_query
      PFNEGLQUERYDEVICEATTRIBEXTPROC eglQueryDeviceAttribEXT;
      PFNEGLQUERYDEVICESTRINGEXTPROC eglQueryDeviceStringEXT;
      PFNEGLQUERYDISPLAYATTRIBEXTPROC eglQueryDisplayAttribEXT;

      // EGL_EXT_output_base
      PFNEGLGETOUTPUTLAYERSEXTPROC eglGetOutputLayersEXT;
      PFNEGLGETOUTPUTPORTSEXTPROC eglGetOutputPortsEXT;
      PFNEGLOUTPUTLAYERATTRIBEXTPROC eglOutputLayerAttribEXT;
      PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC eglQueryOutputLayerAttribEXT;
      PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC eglQueryOutputLayerStringEXT;
      PFNEGLOUTPUTPORTATTRIBEXTPROC eglOutputPortAttribEXT;
      PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC eglQueryOutputPortAttribEXT;
      PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC eglQueryOutputPortStringEXT;

      // EGL_EXT_platform_base
      PFNEGLGETPLATFORMDISPLAYEXTPROC eglGetPlatformDisplayEXT;
      PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC eglCreatePlatformWindowSurfaceEXT;
      PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC eglCreatePlatformPixmapSurfaceEXT;

      // EGL_EXT_stream_consumer_egloutput
      PFNEGLSTREAMCONSUMEROUTPUTEXTPROC eglStreamConsumerOutputEXT;

      // EGL_EXT_swap_buffers_with_damage
      PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC eglSwapBuffersWithDamageEXT;

      // EGL_HI_clientpixmap
      PFNEGLCREATEPIXMAPSURFACEHIPROC eglCreatePixmapSurfaceHI;

      // EGL_KHR_cl_event2
      PFNEGLCREATESYNC64KHRPROC eglCreateSync64KHR;

      // EGL_KHR_fence_sync
      PFNEGLCREATESYNCKHRPROC eglCreateSyncKHR;
      PFNEGLDESTROYSYNCKHRPROC eglDestroySyncKHR;
      PFNEGLCLIENTWAITSYNCKHRPROC eglClientWaitSyncKHR;
      PFNEGLGETSYNCATTRIBKHRPROC eglGetSyncAttribKHR;

      // EGL_KHR_image
      PFNEGLCREATEIMAGEKHRPROC eglCreateImageKHR;
      PFNEGLDESTROYIMAGEKHRPROC eglDestroyImageKHR;

      // EGL_KHR_image_base
      PFNEGLCREATEIMAGEKHRPROC eglCreateImageKHR;
      PFNEGLDESTROYIMAGEKHRPROC eglDestroyImageKHR;

      // EGL_KHR_lock_surface
      PFNEGLLOCKSURFACEKHRPROC eglLockSurfaceKHR;
      PFNEGLUNLOCKSURFACEKHRPROC eglUnlockSurfaceKHR;

      // EGL_KHR_lock_surface3
      PFNEGLLOCKSURFACEKHRPROC eglLockSurfaceKHR;
      PFNEGLUNLOCKSURFACEKHRPROC eglUnlockSurfaceKHR;
      PFNEGLQUERYSURFACE64KHRPROC eglQuerySurface64KHR;

      // EGL_KHR_partial_update
      PFNEGLSETDAMAGEREGIONKHRPROC eglSetDamageRegionKHR;

      // EGL_KHR_reusable_sync
      PFNEGLCREATESYNCKHRPROC eglCreateSyncKHR;
      PFNEGLDESTROYSYNCKHRPROC eglDestroySyncKHR;
      PFNEGLCLIENTWAITSYNCKHRPROC eglClientWaitSyncKHR;
      PFNEGLSIGNALSYNCKHRPROC eglSignalSyncKHR;
      PFNEGLGETSYNCATTRIBKHRPROC eglGetSyncAttribKHR;

      // EGL_KHR_stream
      PFNEGLCREATESTREAMKHRPROC eglCreateStreamKHR;
      PFNEGLDESTROYSTREAMKHRPROC eglDestroyStreamKHR;
      PFNEGLSTREAMATTRIBKHRPROC eglStreamAttribKHR;
      PFNEGLQUERYSTREAMKHRPROC eglQueryStreamKHR;
      PFNEGLQUERYSTREAMU64KHRPROC eglQueryStreamu64KHR;

      // EGL_KHR_stream_consumer_gltexture
      PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC eglStreamConsumerGLTextureExternalKHR;
      PFNEGLSTREAMCONSUMERACQUIREKHRPROC eglStreamConsumerAcquireKHR;
      PFNEGLSTREAMCONSUMERRELEASEKHRPROC eglStreamConsumerReleaseKHR;

      // EGL_KHR_stream_cross_process_fd
      PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC eglGetStreamFileDescriptorKHR;
      PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC eglCreateStreamFromFileDescriptorKHR;

      // EGL_KHR_stream_fifo
      PFNEGLQUERYSTREAMTIMEKHRPROC eglQueryStreamTimeKHR;

      // EGL_KHR_stream_producer_eglsurface
      PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC eglCreateStreamProducerSurfaceKHR;

      // EGL_KHR_swap_buffers_with_damage
      PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC eglSwapBuffersWithDamageKHR;

      // EGL_KHR_wait_sync
      PFNEGLWAITSYNCKHRPROC eglWaitSyncKHR;

      // EGL_MESA_drm_image
      PFNEGLCREATEDRMIMAGEMESAPROC eglCreateDRMImageMESA;
      PFNEGLEXPORTDRMIMAGEMESAPROC eglExportDRMImageMESA;

      // EGL_MESA_image_dma_buf_export
      PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC eglExportDMABUFImageQueryMESA;
      PFNEGLEXPORTDMABUFIMAGEMESAPROC eglExportDMABUFImageMESA;

      // EGL_NOK_swap_region
      PFNEGLSWAPBUFFERSREGIONNOKPROC eglSwapBuffersRegionNOK;

      // EGL_NOK_swap_region2
      PFNEGLSWAPBUFFERSREGION2NOKPROC eglSwapBuffersRegion2NOK;

      // EGL_NV_native_query
      PFNEGLQUERYNATIVEDISPLAYNVPROC eglQueryNativeDisplayNV;
      PFNEGLQUERYNATIVEWINDOWNVPROC eglQueryNativeWindowNV;
      PFNEGLQUERYNATIVEPIXMAPNVPROC eglQueryNativePixmapNV;

      // EGL_NV_post_sub_buffer
      PFNEGLPOSTSUBBUFFERNVPROC eglPostSubBufferNV;

      // EGL_NV_stream_sync
      PFNEGLCREATESTREAMSYNCNVPROC eglCreateStreamSyncNV;

      // EGL_NV_sync
      PFNEGLCREATEFENCESYNCNVPROC eglCreateFenceSyncNV;
      PFNEGLDESTROYSYNCNVPROC eglDestroySyncNV;
      PFNEGLFENCENVPROC eglFenceNV;
      PFNEGLCLIENTWAITSYNCNVPROC eglClientWaitSyncNV;
      PFNEGLSIGNALSYNCNVPROC eglSignalSyncNV;
      PFNEGLGETSYNCATTRIBNVPROC eglGetSyncAttribNV;

      // EGL_NV_system_time
      PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC eglGetSystemTimeFrequencyNV;
      PFNEGLGETSYSTEMTIMENVPROC eglGetSystemTimeNV;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (glew::egl::DeviceState *deviceState);

    static void Deinitialise ();

    static glew::egl::DeviceState *GetDeviceState ();

  protected:

    static glew::egl::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    // EGL_VERSION_1_0
    EGLBoolean eglChooseConfig (EGLDisplay dpy, const EGLint * attrib_list, EGLConfig * configs, EGLint config_size, EGLint * num_config);
    EGLBoolean eglCopyBuffers (EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
    EGLContext eglCreateContext (EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint * attrib_list);
    EGLSurface eglCreatePbufferSurface (EGLDisplay dpy, EGLConfig config, const EGLint * attrib_list);
    EGLSurface eglCreatePixmapSurface (EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint * attrib_list);
    EGLSurface eglCreateWindowSurface (EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint * attrib_list);
    EGLBoolean eglDestroyContext (EGLDisplay dpy, EGLContext ctx);
    EGLBoolean eglDestroySurface (EGLDisplay dpy, EGLSurface surface);
    EGLBoolean eglGetConfigAttrib (EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint * value);
    EGLBoolean eglGetConfigs (EGLDisplay dpy, EGLConfig * configs, EGLint config_size, EGLint * num_config);
    EGLDisplay eglGetCurrentDisplay ();
    EGLSurface eglGetCurrentSurface (EGLint readdraw);
    EGLDisplay eglGetDisplay (EGLNativeDisplayType display_id);
    EGLint eglGetError ();
    __eglMustCastToProperFunctionPointerType eglGetProcAddress (const char * procname);
    EGLBoolean eglInitialize (EGLDisplay dpy, EGLint * major, EGLint * minor);
    EGLBoolean eglMakeCurrent (EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
    EGLBoolean eglQueryContext (EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint * value);
    const char * eglQueryString (EGLDisplay dpy, EGLint name);
    EGLBoolean eglQuerySurface (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint * value);
    EGLBoolean eglSwapBuffers (EGLDisplay dpy, EGLSurface surface);
    EGLBoolean eglTerminate (EGLDisplay dpy);
    EGLBoolean eglWaitGL ();
    EGLBoolean eglWaitNative (EGLint engine);

    // EGL_VERSION_1_1
    EGLBoolean eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
    EGLBoolean eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
    EGLBoolean eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
    EGLBoolean eglSwapInterval (EGLDisplay dpy, EGLint interval);

    // EGL_VERSION_1_2
    EGLBoolean eglBindAPI (EGLenum api);
    EGLenum eglQueryAPI ();
    EGLSurface eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint * attrib_list);
    EGLBoolean eglReleaseThread ();
    EGLBoolean eglWaitClient ();

    // EGL_VERSION_1_4
    EGLContext eglGetCurrentContext ();

    // EGL_VERSION_1_5
    EGLSync eglCreateSync (EGLDisplay dpy, EGLenum type, const EGLAttrib * attrib_list);
    EGLBoolean eglDestroySync (EGLDisplay dpy, EGLSync sync);
    EGLint eglClientWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout);
    EGLBoolean eglGetSyncAttrib (EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib * value);
    EGLImage eglCreateImage (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib * attrib_list);
    EGLBoolean eglDestroyImage (EGLDisplay dpy, EGLImage image);
    EGLDisplay eglGetPlatformDisplay (EGLenum platform, void * native_display, const EGLAttrib * attrib_list);
    EGLSurface eglCreatePlatformWindowSurface (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLAttrib * attrib_list);
    EGLSurface eglCreatePlatformPixmapSurface (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLAttrib * attrib_list);
    EGLBoolean eglWaitSync (EGLDisplay dpy, EGLSync sync, EGLint flags);

    // EGL_ANDROID_blob_cache
    void  eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);

    // EGL_ANDROID_native_fence_sync
    EGLint eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync);

    // EGL_ANGLE_query_surface_pointer
    EGLBoolean eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void ** value);

    // EGL_EXT_device_base
    EGLBoolean eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
    const char * eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name);
    EGLBoolean eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);
    EGLBoolean eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);

    // EGL_EXT_device_enumeration
    EGLBoolean eglQueryDevicesEXT (EGLint max_devices, EGLDeviceEXT * devices, EGLint * num_devices);

    // EGL_EXT_device_query
    EGLBoolean eglQueryDeviceAttribEXT (EGLDeviceEXT device, EGLint attribute, EGLAttrib * value);
    const char * eglQueryDeviceStringEXT (EGLDeviceEXT device, EGLint name);
    EGLBoolean eglQueryDisplayAttribEXT (EGLDisplay dpy, EGLint attribute, EGLAttrib * value);

    // EGL_EXT_output_base
    EGLBoolean eglGetOutputLayersEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputLayerEXT * layers, EGLint max_layers, EGLint * num_layers);
    EGLBoolean eglGetOutputPortsEXT (EGLDisplay dpy, const EGLAttrib * attrib_list, EGLOutputPortEXT * ports, EGLint max_ports, EGLint * num_ports);
    EGLBoolean eglOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value);
    EGLBoolean eglQueryOutputLayerAttribEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib * value);
    const char * eglQueryOutputLayerStringEXT (EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name);
    EGLBoolean eglOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value);
    EGLBoolean eglQueryOutputPortAttribEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib * value);
    const char * eglQueryOutputPortStringEXT (EGLDisplay dpy, EGLOutputPortEXT port, EGLint name);

    // EGL_EXT_platform_base
    EGLDisplay eglGetPlatformDisplayEXT (EGLenum platform, void * native_display, const EGLint * attrib_list);
    EGLSurface eglCreatePlatformWindowSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_window, const EGLint * attrib_list);
    EGLSurface eglCreatePlatformPixmapSurfaceEXT (EGLDisplay dpy, EGLConfig config, void * native_pixmap, const EGLint * attrib_list);

    // EGL_EXT_stream_consumer_egloutput
    EGLBoolean eglStreamConsumerOutputEXT (EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer);

    // EGL_EXT_swap_buffers_with_damage
    EGLBoolean eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);

    // EGL_HI_clientpixmap
    EGLSurface eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI * pixmap);

    // EGL_KHR_cl_event2
    EGLSyncKHR eglCreateSync64KHR (EGLDisplay dpy, EGLenum type, const EGLAttribKHR * attrib_list);

    // EGL_KHR_fence_sync
    EGLSyncKHR eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
    EGLBoolean eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync);
    EGLint eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
    EGLBoolean eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);

    // EGL_KHR_image
    EGLImageKHR eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
    EGLBoolean eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image);

    // EGL_KHR_image_base
    EGLImageKHR eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint * attrib_list);
    EGLBoolean eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image);

    // EGL_KHR_lock_surface
    EGLBoolean eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
    EGLBoolean eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface);

    // EGL_KHR_lock_surface3
    EGLBoolean eglLockSurfaceKHR (EGLDisplay dpy, EGLSurface surface, const EGLint * attrib_list);
    EGLBoolean eglUnlockSurfaceKHR (EGLDisplay dpy, EGLSurface surface);
    EGLBoolean eglQuerySurface64KHR (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR * value);

    // EGL_KHR_partial_update
    EGLBoolean eglSetDamageRegionKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);

    // EGL_KHR_reusable_sync
    EGLSyncKHR eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint * attrib_list);
    EGLBoolean eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync);
    EGLint eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
    EGLBoolean eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
    EGLBoolean eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint * value);

    // EGL_KHR_stream
    EGLStreamKHR eglCreateStreamKHR (EGLDisplay dpy, const EGLint * attrib_list);
    EGLBoolean eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream);
    EGLBoolean eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
    EGLBoolean eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint * value);
    EGLBoolean eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR * value);

    // EGL_KHR_stream_consumer_gltexture
    EGLBoolean eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream);
    EGLBoolean eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream);
    EGLBoolean eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream);

    // EGL_KHR_stream_cross_process_fd
    EGLNativeFileDescriptorKHR eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream);
    EGLStreamKHR eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);

    // EGL_KHR_stream_fifo
    EGLBoolean eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR * value);

    // EGL_KHR_stream_producer_eglsurface
    EGLSurface eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint * attrib_list);

    // EGL_KHR_swap_buffers_with_damage
    EGLBoolean eglSwapBuffersWithDamageKHR (EGLDisplay dpy, EGLSurface surface, EGLint * rects, EGLint n_rects);

    // EGL_KHR_wait_sync
    EGLint eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);

    // EGL_MESA_drm_image
    EGLImageKHR eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint * attrib_list);
    EGLBoolean eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint * name, EGLint * handle, EGLint * stride);

    // EGL_MESA_image_dma_buf_export
    EGLBoolean eglExportDMABUFImageQueryMESA (EGLDisplay dpy, EGLImageKHR image, int * fourcc, int * num_planes, EGLuint64KHR * modifiers);
    EGLBoolean eglExportDMABUFImageMESA (EGLDisplay dpy, EGLImageKHR image, int * fds, EGLint * strides, EGLint * offsets);

    // EGL_NOK_swap_region
    EGLBoolean eglSwapBuffersRegionNOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);

    // EGL_NOK_swap_region2
    EGLBoolean eglSwapBuffersRegion2NOK (EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint * rects);

    // EGL_NV_native_query
    EGLBoolean eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType * display_id);
    EGLBoolean eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType * window);
    EGLBoolean eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType * pixmap);

    // EGL_NV_post_sub_buffer
    EGLBoolean eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);

    // EGL_NV_stream_sync
    EGLSyncKHR eglCreateStreamSyncNV (EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint * attrib_list);

    // EGL_NV_sync
    EGLSyncNV eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint * attrib_list);
    EGLBoolean eglDestroySyncNV (EGLSyncNV sync);
    EGLBoolean eglFenceNV (EGLSyncNV sync);
    EGLint eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
    EGLBoolean eglSignalSyncNV (EGLSyncNV sync, EGLenum mode);
    EGLBoolean eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint * value);

    // EGL_NV_system_time
    EGLuint64NV eglGetSystemTimeFrequencyNV ();
    EGLuint64NV eglGetSystemTimeNV ();
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define eglBindAPI glew::egl::eglBindAPI
#define eglBindTexImage glew::egl::eglBindTexImage
#define eglChooseConfig glew::egl::eglChooseConfig
#define eglClientWaitSync glew::egl::eglClientWaitSync
#define eglClientWaitSyncKHR glew::egl::eglClientWaitSyncKHR
#define eglClientWaitSyncNV glew::egl::eglClientWaitSyncNV
#define eglCopyBuffers glew::egl::eglCopyBuffers
#define eglCreateContext glew::egl::eglCreateContext
#define eglCreateDRMImageMESA glew::egl::eglCreateDRMImageMESA
#define eglCreateFenceSyncNV glew::egl::eglCreateFenceSyncNV
#define eglCreateImage glew::egl::eglCreateImage
#define eglCreateImageKHR glew::egl::eglCreateImageKHR
#define eglCreatePbufferFromClientBuffer glew::egl::eglCreatePbufferFromClientBuffer
#define eglCreatePbufferSurface glew::egl::eglCreatePbufferSurface
#define eglCreatePixmapSurface glew::egl::eglCreatePixmapSurface
#define eglCreatePixmapSurfaceHI glew::egl::eglCreatePixmapSurfaceHI
#define eglCreatePlatformPixmapSurface glew::egl::eglCreatePlatformPixmapSurface
#define eglCreatePlatformPixmapSurfaceEXT glew::egl::eglCreatePlatformPixmapSurfaceEXT
#define eglCreatePlatformWindowSurface glew::egl::eglCreatePlatformWindowSurface
#define eglCreatePlatformWindowSurfaceEXT glew::egl::eglCreatePlatformWindowSurfaceEXT
#define eglCreateStreamFromFileDescriptorKHR glew::egl::eglCreateStreamFromFileDescriptorKHR
#define eglCreateStreamKHR glew::egl::eglCreateStreamKHR
#define eglCreateStreamProducerSurfaceKHR glew::egl::eglCreateStreamProducerSurfaceKHR
#define eglCreateStreamSyncNV glew::egl::eglCreateStreamSyncNV
#define eglCreateSync glew::egl::eglCreateSync
#define eglCreateSyncKHR glew::egl::eglCreateSyncKHR
#define eglCreateSync64KHR glew::egl::eglCreateSync64KHR
#define eglCreateWindowSurface glew::egl::eglCreateWindowSurface
#define eglDestroyContext glew::egl::eglDestroyContext
#define eglDestroyImage glew::egl::eglDestroyImage
#define eglDestroyImageKHR glew::egl::eglDestroyImageKHR
#define eglDestroyStreamKHR glew::egl::eglDestroyStreamKHR
#define eglDestroySurface glew::egl::eglDestroySurface
#define eglDestroySync glew::egl::eglDestroySync
#define eglDestroySyncKHR glew::egl::eglDestroySyncKHR
#define eglDestroySyncNV glew::egl::eglDestroySyncNV
#define eglDupNativeFenceFDANDROID glew::egl::eglDupNativeFenceFDANDROID
#define eglExportDMABUFImageMESA glew::egl::eglExportDMABUFImageMESA
#define eglExportDMABUFImageQueryMESA glew::egl::eglExportDMABUFImageQueryMESA
#define eglExportDRMImageMESA glew::egl::eglExportDRMImageMESA
#define eglFenceNV glew::egl::eglFenceNV
#define eglGetConfigAttrib glew::egl::eglGetConfigAttrib
#define eglGetConfigs glew::egl::eglGetConfigs
#define eglGetCurrentContext glew::egl::eglGetCurrentContext
#define eglGetCurrentDisplay glew::egl::eglGetCurrentDisplay
#define eglGetCurrentSurface glew::egl::eglGetCurrentSurface
#define eglGetDisplay glew::egl::eglGetDisplay
#define eglGetError glew::egl::eglGetError
#define eglGetOutputLayersEXT glew::egl::eglGetOutputLayersEXT
#define eglGetOutputPortsEXT glew::egl::eglGetOutputPortsEXT
#define eglGetPlatformDisplay glew::egl::eglGetPlatformDisplay
#define eglGetPlatformDisplayEXT glew::egl::eglGetPlatformDisplayEXT
#define eglGetProcAddress glew::egl::eglGetProcAddress
#define eglGetStreamFileDescriptorKHR glew::egl::eglGetStreamFileDescriptorKHR
#define eglGetSyncAttrib glew::egl::eglGetSyncAttrib
#define eglGetSyncAttribKHR glew::egl::eglGetSyncAttribKHR
#define eglGetSyncAttribNV glew::egl::eglGetSyncAttribNV
#define eglGetSystemTimeFrequencyNV glew::egl::eglGetSystemTimeFrequencyNV
#define eglGetSystemTimeNV glew::egl::eglGetSystemTimeNV
#define eglInitialize glew::egl::eglInitialize
#define eglLockSurfaceKHR glew::egl::eglLockSurfaceKHR
#define eglMakeCurrent glew::egl::eglMakeCurrent
#define eglOutputLayerAttribEXT glew::egl::eglOutputLayerAttribEXT
#define eglOutputPortAttribEXT glew::egl::eglOutputPortAttribEXT
#define eglPostSubBufferNV glew::egl::eglPostSubBufferNV
#define eglQueryAPI glew::egl::eglQueryAPI
#define eglQueryContext glew::egl::eglQueryContext
#define eglQueryDeviceAttribEXT glew::egl::eglQueryDeviceAttribEXT
#define eglQueryDeviceStringEXT glew::egl::eglQueryDeviceStringEXT
#define eglQueryDevicesEXT glew::egl::eglQueryDevicesEXT
#define eglQueryDisplayAttribEXT glew::egl::eglQueryDisplayAttribEXT
#define eglQueryNativeDisplayNV glew::egl::eglQueryNativeDisplayNV
#define eglQueryNativePixmapNV glew::egl::eglQueryNativePixmapNV
#define eglQueryNativeWindowNV glew::egl::eglQueryNativeWindowNV
#define eglQueryOutputLayerAttribEXT glew::egl::eglQueryOutputLayerAttribEXT
#define eglQueryOutputLayerStringEXT glew::egl::eglQueryOutputLayerStringEXT
#define eglQueryOutputPortAttribEXT glew::egl::eglQueryOutputPortAttribEXT
#define eglQueryOutputPortStringEXT glew::egl::eglQueryOutputPortStringEXT
#define eglQueryStreamKHR glew::egl::eglQueryStreamKHR
#define eglQueryStreamTimeKHR glew::egl::eglQueryStreamTimeKHR
#define eglQueryStreamu64KHR glew::egl::eglQueryStreamu64KHR
#define eglQueryString glew::egl::eglQueryString
#define eglQuerySurface glew::egl::eglQuerySurface
#define eglQuerySurface64KHR glew::egl::eglQuerySurface64KHR
#define eglQuerySurfacePointerANGLE glew::egl::eglQuerySurfacePointerANGLE
#define eglReleaseTexImage glew::egl::eglReleaseTexImage
#define eglReleaseThread glew::egl::eglReleaseThread
#define eglSetBlobCacheFuncsANDROID glew::egl::eglSetBlobCacheFuncsANDROID
#define eglSetDamageRegionKHR glew::egl::eglSetDamageRegionKHR
#define eglSignalSyncKHR glew::egl::eglSignalSyncKHR
#define eglSignalSyncNV glew::egl::eglSignalSyncNV
#define eglStreamAttribKHR glew::egl::eglStreamAttribKHR
#define eglStreamConsumerAcquireKHR glew::egl::eglStreamConsumerAcquireKHR
#define eglStreamConsumerGLTextureExternalKHR glew::egl::eglStreamConsumerGLTextureExternalKHR
#define eglStreamConsumerOutputEXT glew::egl::eglStreamConsumerOutputEXT
#define eglStreamConsumerReleaseKHR glew::egl::eglStreamConsumerReleaseKHR
#define eglSurfaceAttrib glew::egl::eglSurfaceAttrib
#define eglSwapBuffers glew::egl::eglSwapBuffers
#define eglSwapBuffersWithDamageEXT glew::egl::eglSwapBuffersWithDamageEXT
#define eglSwapBuffersWithDamageKHR glew::egl::eglSwapBuffersWithDamageKHR
#define eglSwapBuffersRegionNOK glew::egl::eglSwapBuffersRegionNOK
#define eglSwapBuffersRegion2NOK glew::egl::eglSwapBuffersRegion2NOK
#define eglSwapInterval glew::egl::eglSwapInterval
#define eglTerminate glew::egl::eglTerminate
#define eglUnlockSurfaceKHR glew::egl::eglUnlockSurfaceKHR
#define eglWaitClient glew::egl::eglWaitClient
#define eglWaitGL glew::egl::eglWaitGL
#define eglWaitNative glew::egl::eglWaitNative
#define eglWaitSync glew::egl::eglWaitSync
#define eglWaitSyncKHR glew::egl::eglWaitSyncKHR

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_EGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
