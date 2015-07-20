////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glx.h>

#include <GL/glxext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class GLXCapabilities
{
public:

  bool Initialise ();

  bool Deinitialise ();

  bool IsSupported (const char *extension);

  bool
    __GLX_VERSION_1_0,
    __GLX_VERSION_1_1,
    __GLX_VERSION_1_2,
    __GLX_VERSION_1_3,
    __GLX_VERSION_1_4;

  bool
    __GLX_3DFX_multisample,
    __GLX_AMD_gpu_association,
    __GLX_ARB_context_flush_control,
    __GLX_ARB_create_context,
    __GLX_ARB_create_context_profile,
    __GLX_ARB_create_context_robustness,
    __GLX_ARB_fbconfig_float,
    __GLX_ARB_framebuffer_sRGB,
    __GLX_ARB_get_proc_address,
    __GLX_ARB_multisample,
    __GLX_ARB_robustness_application_isolation,
    __GLX_ARB_robustness_share_group_isolation,
    __GLX_ARB_vertex_buffer_object,
    __GLX_EXT_buffer_age,
    __GLX_EXT_create_context_es_profile,
    __GLX_EXT_create_context_es2_profile,
    __GLX_EXT_fbconfig_packed_float,
    __GLX_EXT_framebuffer_sRGB,
    __GLX_EXT_import_context,
    __GLX_EXT_stereo_tree,
    __GLX_EXT_swap_control,
    __GLX_EXT_swap_control_tear,
    __GLX_EXT_texture_from_pixmap,
    __GLX_EXT_visual_info,
    __GLX_EXT_visual_rating,
    __GLX_INTEL_swap_event,
    __GLX_MESA_agp_offset,
    __GLX_MESA_copy_sub_buffer,
    __GLX_MESA_pixmap_colormap,
    __GLX_MESA_query_renderer,
    __GLX_MESA_release_buffers,
    __GLX_MESA_set_3dfx_mode,
    __GLX_NV_copy_buffer,
    __GLX_NV_copy_image,
    __GLX_NV_delay_before_swap,
    __GLX_NV_float_buffer,
    __GLX_NV_multisample_coverage,
    __GLX_NV_present_video,
    __GLX_NV_swap_group,
    __GLX_NV_video_capture,
    __GLX_NV_video_out,
    __GLX_OML_swap_method,
    __GLX_OML_sync_control,
    __GLX_SGI_cushion,
    __GLX_SGI_make_current_read,
    __GLX_SGI_swap_control,
    __GLX_SGI_video_sync,
    __GLX_SGIS_blended_overlay,
    __GLX_SGIS_multisample,
    __GLX_SGIS_shared_multisample,
    __GLX_SGIX_dmbuffer,
    __GLX_SGIX_fbconfig,
    __GLX_SGIX_hyperpipe,
    __GLX_SGIX_pbuffer,
    __GLX_SGIX_swap_barrier,
    __GLX_SGIX_swap_group,
    __GLX_SGIX_video_resize,
    __GLX_SGIX_video_source,
    __GLX_SGIX_visual_select_group,
    __GLX_SUN_get_transparent_index;

  // GLX_VERSION_1_0
  PFNGLXCHOOSEVISUALPROC
    glXChooseVisual;
  PFNGLXCREATECONTEXTPROC
    glXCreateContext;
  PFNGLXDESTROYCONTEXTPROC
    glXDestroyContext;
  PFNGLXMAKECURRENTPROC
    glXMakeCurrent;
  PFNGLXCOPYCONTEXTPROC
    glXCopyContext;
  PFNGLXSWAPBUFFERSPROC
    glXSwapBuffers;
  PFNGLXCREATEGLXPIXMAPPROC
    glXCreateGLXPixmap;
  PFNGLXDESTROYGLXPIXMAPPROC
    glXDestroyGLXPixmap;
  PFNGLXQUERYEXTENSIONPROC
    glXQueryExtension;
  PFNGLXQUERYVERSIONPROC
    glXQueryVersion;
  PFNGLXISDIRECTPROC
    glXIsDirect;
  PFNGLXGETCONFIGPROC
    glXGetConfig;
  PFNGLXGETCURRENTCONTEXTPROC
    glXGetCurrentContext;
  PFNGLXGETCURRENTDRAWABLEPROC
    glXGetCurrentDrawable;
  PFNGLXWAITGLPROC
    glXWaitGL;
  PFNGLXWAITXPROC
    glXWaitX;
  PFNGLXUSEXFONTPROC
    glXUseXFont;

  // GLX_VERSION_1_1
  PFNGLXQUERYEXTENSIONSSTRINGPROC
    glXQueryExtensionsString;
  PFNGLXQUERYSERVERSTRINGPROC
    glXQueryServerString;
  PFNGLXGETCLIENTSTRINGPROC
    glXGetClientString;

  // GLX_VERSION_1_2
  PFNGLXGETCURRENTDISPLAYPROC
    glXGetCurrentDisplay;

  // GLX_VERSION_1_3
  PFNGLXGETFBCONFIGSPROC
    glXGetFBConfigs;
  PFNGLXCHOOSEFBCONFIGPROC
    glXChooseFBConfig;
  PFNGLXGETFBCONFIGATTRIBPROC
    glXGetFBConfigAttrib;
  PFNGLXGETVISUALFROMFBCONFIGPROC
    glXGetVisualFromFBConfig;
  PFNGLXCREATEWINDOWPROC
    glXCreateWindow;
  PFNGLXDESTROYWINDOWPROC
    glXDestroyWindow;
  PFNGLXCREATEPIXMAPPROC
    glXCreatePixmap;
  PFNGLXDESTROYPIXMAPPROC
    glXDestroyPixmap;
  PFNGLXCREATEPBUFFERPROC
    glXCreatePbuffer;
  PFNGLXDESTROYPBUFFERPROC
    glXDestroyPbuffer;
  PFNGLXQUERYDRAWABLEPROC
    glXQueryDrawable;
  PFNGLXCREATENEWCONTEXTPROC
    glXCreateNewContext;
  PFNGLXMAKECONTEXTCURRENTPROC
    glXMakeContextCurrent;
  PFNGLXGETCURRENTREADDRAWABLEPROC
    glXGetCurrentReadDrawable;
  PFNGLXQUERYCONTEXTPROC
    glXQueryContext;
  PFNGLXSELECTEVENTPROC
    glXSelectEvent;
  PFNGLXGETSELECTEDEVENTPROC
    glXGetSelectedEvent;

  // GLX_VERSION_1_4
  PFNGLXGETPROCADDRESSPROC
    glXGetProcAddress;

  // GLX_AMD_gpu_association
  PFNGLXGETGPUIDSAMDPROC
    glXGetGPUIDsAMD;
  PFNGLXGETGPUINFOAMDPROC
    glXGetGPUInfoAMD;
  PFNGLXGETCONTEXTGPUIDAMDPROC
    glXGetContextGPUIDAMD;
  PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC
    glXCreateAssociatedContextAMD;
  PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
    glXCreateAssociatedContextAttribsAMD;
  PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC
    glXDeleteAssociatedContextAMD;
  PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
    glXMakeAssociatedContextCurrentAMD;
  PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC
    glXGetCurrentAssociatedContextAMD;
  PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC
    glXBlitContextFramebufferAMD;

  // GLX_ARB_create_context
  PFNGLXCREATECONTEXTATTRIBSARBPROC
    glXCreateContextAttribsARB;

  // GLX_ARB_get_proc_address
  PFNGLXGETPROCADDRESSARBPROC
    glXGetProcAddressARB;

  // GLX_EXT_import_context
  PFNGLXGETCURRENTDISPLAYEXTPROC
    glXGetCurrentDisplayEXT;
  PFNGLXQUERYCONTEXTINFOEXTPROC
    glXQueryContextInfoEXT;
  PFNGLXGETCONTEXTIDEXTPROC
    glXGetContextIDEXT;
  PFNGLXIMPORTCONTEXTEXTPROC
    glXImportContextEXT;
  PFNGLXFREECONTEXTEXTPROC
    glXFreeContextEXT;

  // GLX_EXT_swap_control
  PFNGLXSWAPINTERVALEXTPROC
    glXSwapIntervalEXT;

  // GLX_EXT_texture_from_pixmap
  PFNGLXBINDTEXIMAGEEXTPROC
    glXBindTexImageEXT;
  PFNGLXRELEASETEXIMAGEEXTPROC
    glXReleaseTexImageEXT;

  // GLX_MESA_agp_offset
  PFNGLXGETAGPOFFSETMESAPROC
    glXGetAGPOffsetMESA;

  // GLX_MESA_copy_sub_buffer
  PFNGLXCOPYSUBBUFFERMESAPROC
    glXCopySubBufferMESA;

  // GLX_MESA_pixmap_colormap
  PFNGLXCREATEGLXPIXMAPMESAPROC
    glXCreateGLXPixmapMESA;

  // GLX_MESA_query_renderer
  PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC
    glXQueryCurrentRendererIntegerMESA;
  PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC
    glXQueryCurrentRendererStringMESA;
  PFNGLXQUERYRENDERERINTEGERMESAPROC
    glXQueryRendererIntegerMESA;
  PFNGLXQUERYRENDERERSTRINGMESAPROC
    glXQueryRendererStringMESA;

  // GLX_MESA_release_buffers
  PFNGLXRELEASEBUFFERSMESAPROC
    glXReleaseBuffersMESA;

  // GLX_MESA_set_3dfx_mode
  PFNGLXSET3DFXMODEMESAPROC
    glXSet3DfxModeMESA;

  // GLX_NV_copy_buffer
  PFNGLXCOPYBUFFERSUBDATANVPROC
    glXCopyBufferSubDataNV;
  PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC
    glXNamedCopyBufferSubDataNV;

  // GLX_NV_copy_image
  PFNGLXCOPYIMAGESUBDATANVPROC
    glXCopyImageSubDataNV;

  // GLX_NV_delay_before_swap
  PFNGLXDELAYBEFORESWAPNVPROC
    glXDelayBeforeSwapNV;

  // GLX_NV_present_video
  PFNGLXENUMERATEVIDEODEVICESNVPROC
    glXEnumerateVideoDevicesNV;
  PFNGLXBINDVIDEODEVICENVPROC
    glXBindVideoDeviceNV;

  // GLX_NV_swap_group
  PFNGLXJOINSWAPGROUPNVPROC
    glXJoinSwapGroupNV;
  PFNGLXBINDSWAPBARRIERNVPROC
    glXBindSwapBarrierNV;
  PFNGLXQUERYSWAPGROUPNVPROC
    glXQuerySwapGroupNV;
  PFNGLXQUERYMAXSWAPGROUPSNVPROC
    glXQueryMaxSwapGroupsNV;
  PFNGLXQUERYFRAMECOUNTNVPROC
    glXQueryFrameCountNV;
  PFNGLXRESETFRAMECOUNTNVPROC
    glXResetFrameCountNV;

  // GLX_NV_video_capture
  PFNGLXBINDVIDEOCAPTUREDEVICENVPROC
    glXBindVideoCaptureDeviceNV;
  PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC
    glXEnumerateVideoCaptureDevicesNV;
  PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC
    glXLockVideoCaptureDeviceNV;
  PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC
    glXQueryVideoCaptureDeviceNV;
  PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC
    glXReleaseVideoCaptureDeviceNV;

  // GLX_NV_video_out
  PFNGLXGETVIDEODEVICENVPROC
    glXGetVideoDeviceNV;
  PFNGLXRELEASEVIDEODEVICENVPROC
    glXReleaseVideoDeviceNV;
  PFNGLXBINDVIDEOIMAGENVPROC
    glXBindVideoImageNV;
  PFNGLXRELEASEVIDEOIMAGENVPROC
    glXReleaseVideoImageNV;
  PFNGLXSENDPBUFFERTOVIDEONVPROC
    glXSendPbufferToVideoNV;
  PFNGLXGETVIDEOINFONVPROC
    glXGetVideoInfoNV;

  // GLX_OML_sync_control
  PFNGLXGETSYNCVALUESOMLPROC
    glXGetSyncValuesOML;
  PFNGLXGETMSCRATEOMLPROC
    glXGetMscRateOML;
  PFNGLXSWAPBUFFERSMSCOMLPROC
    glXSwapBuffersMscOML;
  PFNGLXWAITFORMSCOMLPROC
    glXWaitForMscOML;
  PFNGLXWAITFORSBCOMLPROC
    glXWaitForSbcOML;

  // GLX_SGI_cushion
  PFNGLXCUSHIONSGIPROC
    glXCushionSGI;

  // GLX_SGI_make_current_read
  PFNGLXMAKECURRENTREADSGIPROC
    glXMakeCurrentReadSGI;
  PFNGLXGETCURRENTREADDRAWABLESGIPROC
    glXGetCurrentReadDrawableSGI;

  // GLX_SGI_swap_control
  PFNGLXSWAPINTERVALSGIPROC
    glXSwapIntervalSGI;

  // GLX_SGI_video_sync
  PFNGLXGETVIDEOSYNCSGIPROC
    glXGetVideoSyncSGI;
  PFNGLXWAITVIDEOSYNCSGIPROC
    glXWaitVideoSyncSGI;

  // GLX_SGIX_dmbuffer
  PFNGLXASSOCIATEDMPBUFFERSGIXPROC
    glXAssociateDMPbufferSGIX;

  // GLX_SGIX_fbconfig
  PFNGLXGETFBCONFIGATTRIBSGIXPROC
    glXGetFBConfigAttribSGIX;
  PFNGLXCHOOSEFBCONFIGSGIXPROC
    glXChooseFBConfigSGIX;
  PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC
    glXCreateGLXPixmapWithConfigSGIX;
  PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC
    glXCreateContextWithConfigSGIX;
  PFNGLXGETVISUALFROMFBCONFIGSGIXPROC
    glXGetVisualFromFBConfigSGIX;
  PFNGLXGETFBCONFIGFROMVISUALSGIXPROC
    glXGetFBConfigFromVisualSGIX;

  // GLX_SGIX_hyperpipe
  PFNGLXQUERYHYPERPIPENETWORKSGIXPROC
    glXQueryHyperpipeNetworkSGIX;
  PFNGLXHYPERPIPECONFIGSGIXPROC
    glXHyperpipeConfigSGIX;
  PFNGLXQUERYHYPERPIPECONFIGSGIXPROC
    glXQueryHyperpipeConfigSGIX;
  PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC
    glXDestroyHyperpipeConfigSGIX;
  PFNGLXBINDHYPERPIPESGIXPROC
    glXBindHyperpipeSGIX;
  PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC
    glXQueryHyperpipeBestAttribSGIX;
  PFNGLXHYPERPIPEATTRIBSGIXPROC
    glXHyperpipeAttribSGIX;
  PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC
    glXQueryHyperpipeAttribSGIX;

  // GLX_SGIX_pbuffer
  PFNGLXCREATEGLXPBUFFERSGIXPROC
    glXCreateGLXPbufferSGIX;
  PFNGLXDESTROYGLXPBUFFERSGIXPROC
    glXDestroyGLXPbufferSGIX;
  PFNGLXQUERYGLXPBUFFERSGIXPROC
    glXQueryGLXPbufferSGIX;
  PFNGLXSELECTEVENTSGIXPROC
    glXSelectEventSGIX;
  PFNGLXGETSELECTEDEVENTSGIXPROC
    glXGetSelectedEventSGIX;

  // GLX_SGIX_swap_barrier
  PFNGLXBINDSWAPBARRIERSGIXPROC
    glXBindSwapBarrierSGIX;
  PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC
    glXQueryMaxSwapBarriersSGIX;

  // GLX_SGIX_swap_group
  PFNGLXJOINSWAPGROUPSGIXPROC
    glXJoinSwapGroupSGIX;

  // GLX_SGIX_video_resize
  PFNGLXBINDCHANNELTOWINDOWSGIXPROC
    glXBindChannelToWindowSGIX;
  PFNGLXCHANNELRECTSGIXPROC
    glXChannelRectSGIX;
  PFNGLXQUERYCHANNELRECTSGIXPROC
    glXQueryChannelRectSGIX;
  PFNGLXQUERYCHANNELDELTASSGIXPROC
    glXQueryChannelDeltasSGIX;
  PFNGLXCHANNELRECTSYNCSGIXPROC
    glXChannelRectSyncSGIX;

  // GLX_SGIX_video_source
  PFNGLXCREATEGLXVIDEOSOURCESGIXPROC
    glXCreateGLXVideoSourceSGIX;
  PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC
    glXDestroyGLXVideoSourceSGIX;

  // GLX_SUN_get_transparent_index
  PFNGLXGETTRANSPARENTINDEXSUNPROC
    glXGetTransparentIndexSUN;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLXBoolean glxGetCapabilities (GLXCapabilities *capabilities);

#define glXAssociateDMPbufferSGIX __glXAssociateDMPbufferSGIX
#define glXBindChannelToWindowSGIX __glXBindChannelToWindowSGIX
#define glXBindHyperpipeSGIX __glXBindHyperpipeSGIX
#define glXBindSwapBarrierNV __glXBindSwapBarrierNV
#define glXBindSwapBarrierSGIX __glXBindSwapBarrierSGIX
#define glXBindTexImageEXT __glXBindTexImageEXT
#define glXBindVideoCaptureDeviceNV __glXBindVideoCaptureDeviceNV
#define glXBindVideoDeviceNV __glXBindVideoDeviceNV
#define glXBindVideoImageNV __glXBindVideoImageNV
#define glXBlitContextFramebufferAMD __glXBlitContextFramebufferAMD
#define glXChannelRectSGIX __glXChannelRectSGIX
#define glXChannelRectSyncSGIX __glXChannelRectSyncSGIX
#define glXChooseFBConfig __glXChooseFBConfig
#define glXChooseFBConfigSGIX __glXChooseFBConfigSGIX
#define glXChooseVisual __glXChooseVisual
#define glXCopyBufferSubDataNV __glXCopyBufferSubDataNV
#define glXNamedCopyBufferSubDataNV __glXNamedCopyBufferSubDataNV
#define glXCopyContext __glXCopyContext
#define glXCopyImageSubDataNV __glXCopyImageSubDataNV
#define glXCopySubBufferMESA __glXCopySubBufferMESA
#define glXCreateAssociatedContextAMD __glXCreateAssociatedContextAMD
#define glXCreateAssociatedContextAttribsAMD __glXCreateAssociatedContextAttribsAMD
#define glXCreateContextAttribsARB __glXCreateContextAttribsARB
#define glXCreateContext __glXCreateContext
#define glXCreateContextWithConfigSGIX __glXCreateContextWithConfigSGIX
#define glXCreateGLXPbufferSGIX __glXCreateGLXPbufferSGIX
#define glXCreateGLXPixmap __glXCreateGLXPixmap
#define glXCreateGLXPixmapMESA __glXCreateGLXPixmapMESA
#define glXCreateGLXPixmapWithConfigSGIX __glXCreateGLXPixmapWithConfigSGIX
#define glXCreateGLXVideoSourceSGIX __glXCreateGLXVideoSourceSGIX
#define glXCreateNewContext __glXCreateNewContext
#define glXCreatePbuffer __glXCreatePbuffer
#define glXCreatePixmap __glXCreatePixmap
#define glXCreateWindow __glXCreateWindow
#define glXCushionSGI __glXCushionSGI
#define glXDelayBeforeSwapNV __glXDelayBeforeSwapNV
#define glXDeleteAssociatedContextAMD __glXDeleteAssociatedContextAMD
#define glXDestroyContext __glXDestroyContext
#define glXDestroyGLXPbufferSGIX __glXDestroyGLXPbufferSGIX
#define glXDestroyGLXPixmap __glXDestroyGLXPixmap
#define glXDestroyGLXVideoSourceSGIX __glXDestroyGLXVideoSourceSGIX
#define glXDestroyHyperpipeConfigSGIX __glXDestroyHyperpipeConfigSGIX
#define glXDestroyPbuffer __glXDestroyPbuffer
#define glXDestroyPixmap __glXDestroyPixmap
#define glXDestroyWindow __glXDestroyWindow
#define glXEnumerateVideoCaptureDevicesNV __glXEnumerateVideoCaptureDevicesNV
#define glXEnumerateVideoDevicesNV __glXEnumerateVideoDevicesNV
#define glXFreeContextEXT __glXFreeContextEXT
#define glXGetAGPOffsetMESA __glXGetAGPOffsetMESA
#define glXGetClientString __glXGetClientString
#define glXGetConfig __glXGetConfig
#define glXGetContextGPUIDAMD __glXGetContextGPUIDAMD
#define glXGetContextIDEXT __glXGetContextIDEXT
#define glXGetCurrentAssociatedContextAMD __glXGetCurrentAssociatedContextAMD
#define glXGetCurrentContext __glXGetCurrentContext
#define glXGetCurrentDisplayEXT __glXGetCurrentDisplayEXT
#define glXGetCurrentDisplay __glXGetCurrentDisplay
#define glXGetCurrentDrawable __glXGetCurrentDrawable
#define glXGetCurrentReadDrawableSGI __glXGetCurrentReadDrawableSGI
#define glXGetCurrentReadDrawable __glXGetCurrentReadDrawable
#define glXGetFBConfigAttrib __glXGetFBConfigAttrib
#define glXGetFBConfigAttribSGIX __glXGetFBConfigAttribSGIX
#define glXGetFBConfigFromVisualSGIX __glXGetFBConfigFromVisualSGIX
#define glXGetFBConfigs __glXGetFBConfigs
#define glXGetGPUIDsAMD __glXGetGPUIDsAMD
#define glXGetGPUInfoAMD __glXGetGPUInfoAMD
#define glXGetMscRateOML __glXGetMscRateOML
#define glXGetProcAddressARB __glXGetProcAddressARB
#define glXGetProcAddress __glXGetProcAddress
#define glXGetSelectedEvent __glXGetSelectedEvent
#define glXGetSelectedEventSGIX __glXGetSelectedEventSGIX
#define glXGetSyncValuesOML __glXGetSyncValuesOML
#define glXGetTransparentIndexSUN __glXGetTransparentIndexSUN
#define glXGetVideoDeviceNV __glXGetVideoDeviceNV
#define glXGetVideoInfoNV __glXGetVideoInfoNV
#define glXGetVideoSyncSGI __glXGetVideoSyncSGI
#define glXGetVisualFromFBConfig __glXGetVisualFromFBConfig
#define glXGetVisualFromFBConfigSGIX __glXGetVisualFromFBConfigSGIX
#define glXHyperpipeAttribSGIX __glXHyperpipeAttribSGIX
#define glXHyperpipeConfigSGIX __glXHyperpipeConfigSGIX
#define glXImportContextEXT __glXImportContextEXT
#define glXIsDirect __glXIsDirect
#define glXJoinSwapGroupNV __glXJoinSwapGroupNV
#define glXJoinSwapGroupSGIX __glXJoinSwapGroupSGIX
#define glXLockVideoCaptureDeviceNV __glXLockVideoCaptureDeviceNV
#define glXMakeAssociatedContextCurrentAMD __glXMakeAssociatedContextCurrentAMD
#define glXMakeContextCurrent __glXMakeContextCurrent
#define glXMakeCurrent __glXMakeCurrent
#define glXMakeCurrentReadSGI __glXMakeCurrentReadSGI
#define glXQueryChannelDeltasSGIX __glXQueryChannelDeltasSGIX
#define glXQueryChannelRectSGIX __glXQueryChannelRectSGIX
#define glXQueryContext __glXQueryContext
#define glXQueryContextInfoEXT __glXQueryContextInfoEXT
#define glXQueryCurrentRendererIntegerMESA __glXQueryCurrentRendererIntegerMESA
#define glXQueryCurrentRendererStringMESA __glXQueryCurrentRendererStringMESA
#define glXQueryDrawable __glXQueryDrawable
#define glXQueryExtension __glXQueryExtension
#define glXQueryExtensionsString __glXQueryExtensionsString
#define glXQueryFrameCountNV __glXQueryFrameCountNV
#define glXQueryGLXPbufferSGIX __glXQueryGLXPbufferSGIX
#define glXQueryHyperpipeAttribSGIX __glXQueryHyperpipeAttribSGIX
#define glXQueryHyperpipeBestAttribSGIX __glXQueryHyperpipeBestAttribSGIX
#define glXQueryHyperpipeConfigSGIX __glXQueryHyperpipeConfigSGIX
#define glXQueryHyperpipeNetworkSGIX __glXQueryHyperpipeNetworkSGIX
#define glXQueryMaxSwapBarriersSGIX __glXQueryMaxSwapBarriersSGIX
#define glXQueryMaxSwapGroupsNV __glXQueryMaxSwapGroupsNV
#define glXQueryRendererIntegerMESA __glXQueryRendererIntegerMESA
#define glXQueryRendererStringMESA __glXQueryRendererStringMESA
#define glXQueryServerString __glXQueryServerString
#define glXQuerySwapGroupNV __glXQuerySwapGroupNV
#define glXQueryVersion __glXQueryVersion
#define glXQueryVideoCaptureDeviceNV __glXQueryVideoCaptureDeviceNV
#define glXReleaseBuffersMESA __glXReleaseBuffersMESA
#define glXReleaseTexImageEXT __glXReleaseTexImageEXT
#define glXReleaseVideoCaptureDeviceNV __glXReleaseVideoCaptureDeviceNV
#define glXReleaseVideoDeviceNV __glXReleaseVideoDeviceNV
#define glXReleaseVideoImageNV __glXReleaseVideoImageNV
#define glXResetFrameCountNV __glXResetFrameCountNV
#define glXSelectEvent __glXSelectEvent
#define glXSelectEventSGIX __glXSelectEventSGIX
#define glXSendPbufferToVideoNV __glXSendPbufferToVideoNV
#define glXSet3DfxModeMESA __glXSet3DfxModeMESA
#define glXSwapBuffers __glXSwapBuffers
#define glXSwapBuffersMscOML __glXSwapBuffersMscOML
#define glXSwapIntervalEXT __glXSwapIntervalEXT
#define glXSwapIntervalSGI __glXSwapIntervalSGI
#define glXUseXFont __glXUseXFont
#define glXWaitForMscOML __glXWaitForMscOML
#define glXWaitForSbcOML __glXWaitForSbcOML
#define glXWaitGL __glXWaitGL
#define glXWaitVideoSyncSGI __glXWaitVideoSyncSGI
#define glXWaitX __glXWaitX

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
