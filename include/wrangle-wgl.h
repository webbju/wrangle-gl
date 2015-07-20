////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/wgl.h>

#include <GL/wglext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class WGLCapabilities
{
public:

  bool Initialise ();

  bool Deinitialise ();

  bool IsSupported (const char *extension);

  bool
    __WGL_VERSION_1_0;

  bool
    __WGL_3DFX_multisample,
    __WGL_3DL_stereo_control,
    __WGL_AMD_gpu_association,
    __WGL_ARB_buffer_region,
    __WGL_ARB_context_flush_control,
    __WGL_ARB_create_context,
    __WGL_ARB_create_context_profile,
    __WGL_ARB_create_context_robustness,
    __WGL_ARB_extensions_string,
    __WGL_ARB_framebuffer_sRGB,
    __WGL_ARB_make_current_read,
    __WGL_ARB_multisample,
    __WGL_ARB_pbuffer,
    __WGL_ARB_pixel_format,
    __WGL_ARB_pixel_format_float,
    __WGL_ARB_render_texture,
    __WGL_ARB_robustness_application_isolation,
    __WGL_ARB_robustness_share_group_isolation,
    __WGL_ATI_pixel_format_float,
    __WGL_EXT_create_context_es_profile,
    __WGL_EXT_create_context_es2_profile,
    __WGL_EXT_depth_float,
    __WGL_EXT_display_color_table,
    __WGL_EXT_extensions_string,
    __WGL_EXT_framebuffer_sRGB,
    __WGL_EXT_make_current_read,
    __WGL_EXT_multisample,
    __WGL_EXT_pbuffer,
    __WGL_EXT_pixel_format,
    __WGL_EXT_pixel_format_packed_float,
    __WGL_EXT_swap_control,
    __WGL_EXT_swap_control_tear,
    __WGL_I3D_digital_video_control,
    __WGL_I3D_gamma,
    __WGL_I3D_genlock,
    __WGL_I3D_image_buffer,
    __WGL_I3D_swap_frame_lock,
    __WGL_I3D_swap_frame_usage,
    __WGL_NV_copy_image,
    __WGL_NV_delay_before_swap,
    __WGL_NV_DX_interop,
    __WGL_NV_DX_interop2,
    __WGL_NV_float_buffer,
    __WGL_NV_gpu_affinity,
    __WGL_NV_multisample_coverage,
    __WGL_NV_present_video,
    __WGL_NV_render_depth_texture,
    __WGL_NV_render_texture_rectangle,
    __WGL_NV_swap_group,
    __WGL_NV_video_capture,
    __WGL_NV_video_output,
    __WGL_NV_vertex_array_range,
    __WGL_OML_sync_control;

  // WGL_VERSION_1_0
  PFNCHOOSEPIXELFORMATPROC
    ChoosePixelFormat;
  PFNDESCRIBEPIXELFORMATPROC
    DescribePixelFormat;
  PFNGETENHMETAFILEPIXELFORMATPROC
    GetEnhMetaFilePixelFormat;
  PFNGETPIXELFORMATPROC
    GetPixelFormat;
  PFNSETPIXELFORMATPROC
    SetPixelFormat;
  PFNSWAPBUFFERSPROC
    SwapBuffers;
  PFNWGLCOPYCONTEXTPROC
    wglCopyContext;
  PFNWGLCREATECONTEXTPROC
    wglCreateContext;
  PFNWGLCREATELAYERCONTEXTPROC
    wglCreateLayerContext;
  PFNWGLDELETECONTEXTPROC
    wglDeleteContext;
  PFNWGLDESCRIBELAYERPLANEPROC
    wglDescribeLayerPlane;
  PFNWGLGETCURRENTCONTEXTPROC
    wglGetCurrentContext;
  PFNWGLGETCURRENTDCPROC
    wglGetCurrentDC;
  PFNWGLGETLAYERPALETTEENTRIESPROC
    wglGetLayerPaletteEntries;
  PFNWGLGETPROCADDRESSPROC
    wglGetProcAddress;
  PFNWGLMAKECURRENTPROC
    wglMakeCurrent;
  PFNWGLREALIZELAYERPALETTEPROC
    wglRealizeLayerPalette;
  PFNWGLSETLAYERPALETTEENTRIESPROC
    wglSetLayerPaletteEntries;
  PFNWGLSHARELISTSPROC
    wglShareLists;
  PFNWGLSWAPLAYERBUFFERSPROC
    wglSwapLayerBuffers;
  PFNWGLUSEFONTBITMAPSPROC
    wglUseFontBitmaps;
  PFNWGLUSEFONTBITMAPSAPROC
    wglUseFontBitmapsA;
  PFNWGLUSEFONTBITMAPSWPROC
    wglUseFontBitmapsW;
  PFNWGLUSEFONTOUTLINESPROC
    wglUseFontOutlines;
  PFNWGLUSEFONTOUTLINESAPROC
    wglUseFontOutlinesA;
  PFNWGLUSEFONTOUTLINESWPROC
    wglUseFontOutlinesW;

  // WGL_3DL_stereo_control
  PFNWGLSETSTEREOEMITTERSTATE3DLPROC
    wglSetStereoEmitterState3DL;

  // WGL_AMD_gpu_association
  PFNWGLGETGPUIDSAMDPROC
    wglGetGPUIDsAMD;
  PFNWGLGETGPUINFOAMDPROC
    wglGetGPUInfoAMD;
  PFNWGLGETCONTEXTGPUIDAMDPROC
    wglGetContextGPUIDAMD;
  PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC
    wglCreateAssociatedContextAMD;
  PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
    wglCreateAssociatedContextAttribsAMD;
  PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC
    wglDeleteAssociatedContextAMD;
  PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
    wglMakeAssociatedContextCurrentAMD;
  PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC
    wglGetCurrentAssociatedContextAMD;
  PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC
    wglBlitContextFramebufferAMD;

  // WGL_ARB_buffer_region
  PFNWGLCREATEBUFFERREGIONARBPROC
    wglCreateBufferRegionARB;
  PFNWGLDELETEBUFFERREGIONARBPROC
    wglDeleteBufferRegionARB;
  PFNWGLSAVEBUFFERREGIONARBPROC
    wglSaveBufferRegionARB;
  PFNWGLRESTOREBUFFERREGIONARBPROC
    wglRestoreBufferRegionARB;

  // WGL_ARB_create_context
  PFNWGLCREATECONTEXTATTRIBSARBPROC
    wglCreateContextAttribsARB;

  // WGL_ARB_extensions_string
  PFNWGLGETEXTENSIONSSTRINGARBPROC
    wglGetExtensionsStringARB;

  // WGL_ARB_make_current_read
  PFNWGLMAKECONTEXTCURRENTARBPROC
    wglMakeContextCurrentARB;
  PFNWGLGETCURRENTREADDCARBPROC
    wglGetCurrentReadDCARB;

  // WGL_ARB_pbuffer
  PFNWGLCREATEPBUFFERARBPROC
    wglCreatePbufferARB;
  PFNWGLGETPBUFFERDCARBPROC
    wglGetPbufferDCARB;
  PFNWGLRELEASEPBUFFERDCARBPROC
    wglReleasePbufferDCARB;
  PFNWGLDESTROYPBUFFERARBPROC
    wglDestroyPbufferARB;
  PFNWGLQUERYPBUFFERARBPROC
    wglQueryPbufferARB;

  // WGL_ARB_pixel_format
  PFNWGLGETPIXELFORMATATTRIBIVARBPROC
    wglGetPixelFormatAttribivARB;
  PFNWGLGETPIXELFORMATATTRIBFVARBPROC
    wglGetPixelFormatAttribfvARB;
  PFNWGLCHOOSEPIXELFORMATARBPROC
    wglChoosePixelFormatARB;

  // WGL_ARB_render_texture
  PFNWGLBINDTEXIMAGEARBPROC
    wglBindTexImageARB;
  PFNWGLRELEASETEXIMAGEARBPROC
    wglReleaseTexImageARB;
  PFNWGLSETPBUFFERATTRIBARBPROC
    wglSetPbufferAttribARB;

  // WGL_EXT_display_color_table
  PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC
    wglCreateDisplayColorTableEXT;
  PFNWGLLOADDISPLAYCOLORTABLEEXTPROC
    wglLoadDisplayColorTableEXT;
  PFNWGLBINDDISPLAYCOLORTABLEEXTPROC
    wglBindDisplayColorTableEXT;
  PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC
    wglDestroyDisplayColorTableEXT;

  // WGL_EXT_extensions_string
  PFNWGLGETEXTENSIONSSTRINGEXTPROC
    wglGetExtensionsStringEXT;

  // WGL_EXT_make_current_read
  PFNWGLMAKECONTEXTCURRENTEXTPROC
    wglMakeContextCurrentEXT;
  PFNWGLGETCURRENTREADDCEXTPROC
    wglGetCurrentReadDCEXT;

  // WGL_EXT_pbuffer
  PFNWGLCREATEPBUFFEREXTPROC
    wglCreatePbufferEXT;
  PFNWGLGETPBUFFERDCEXTPROC
    wglGetPbufferDCEXT;
  PFNWGLRELEASEPBUFFERDCEXTPROC
    wglReleasePbufferDCEXT;
  PFNWGLDESTROYPBUFFEREXTPROC
    wglDestroyPbufferEXT;
  PFNWGLQUERYPBUFFEREXTPROC
    wglQueryPbufferEXT;

  // WGL_EXT_pixel_format
  PFNWGLGETPIXELFORMATATTRIBIVEXTPROC
    wglGetPixelFormatAttribivEXT;
  PFNWGLGETPIXELFORMATATTRIBFVEXTPROC
    wglGetPixelFormatAttribfvEXT;
  PFNWGLCHOOSEPIXELFORMATEXTPROC
    wglChoosePixelFormatEXT;

  // WGL_EXT_swap_control
  PFNWGLSWAPINTERVALEXTPROC
    wglSwapIntervalEXT;
  PFNWGLGETSWAPINTERVALEXTPROC
    wglGetSwapIntervalEXT;

  // WGL_I3D_digital_video_control
  PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC
    wglGetDigitalVideoParametersI3D;
  PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC
    wglSetDigitalVideoParametersI3D;

  // WGL_I3D_gamma
  PFNWGLGETGAMMATABLEPARAMETERSI3DPROC
    wglGetGammaTableParametersI3D;
  PFNWGLSETGAMMATABLEPARAMETERSI3DPROC
    wglSetGammaTableParametersI3D;
  PFNWGLGETGAMMATABLEI3DPROC
    wglGetGammaTableI3D;
  PFNWGLSETGAMMATABLEI3DPROC
    wglSetGammaTableI3D;

  // WGL_I3D_genlock
  PFNWGLENABLEGENLOCKI3DPROC
    wglEnableGenlockI3D;
  PFNWGLDISABLEGENLOCKI3DPROC
    wglDisableGenlockI3D;
  PFNWGLISENABLEDGENLOCKI3DPROC
    wglIsEnabledGenlockI3D;
  PFNWGLGENLOCKSOURCEI3DPROC
    wglGenlockSourceI3D;
  PFNWGLGETGENLOCKSOURCEI3DPROC
    wglGetGenlockSourceI3D;
  PFNWGLGENLOCKSOURCEEDGEI3DPROC
    wglGenlockSourceEdgeI3D;
  PFNWGLGETGENLOCKSOURCEEDGEI3DPROC
    wglGetGenlockSourceEdgeI3D;
  PFNWGLGENLOCKSAMPLERATEI3DPROC
    wglGenlockSampleRateI3D;
  PFNWGLGETGENLOCKSAMPLERATEI3DPROC
    wglGetGenlockSampleRateI3D;
  PFNWGLGENLOCKSOURCEDELAYI3DPROC
    wglGenlockSourceDelayI3D;
  PFNWGLGETGENLOCKSOURCEDELAYI3DPROC
    wglGetGenlockSourceDelayI3D;
  PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC
    wglQueryGenlockMaxSourceDelayI3D;

  // WGL_I3D_image_buffer
  PFNWGLCREATEIMAGEBUFFERI3DPROC
    wglCreateImageBufferI3D;
  PFNWGLDESTROYIMAGEBUFFERI3DPROC
    wglDestroyImageBufferI3D;
  PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC
    wglAssociateImageBufferEventsI3D;
  PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC
    wglReleaseImageBufferEventsI3D;

  // WGL_I3D_swap_frame_lock
  PFNWGLENABLEFRAMELOCKI3DPROC
    wglEnableFrameLockI3D;
  PFNWGLDISABLEFRAMELOCKI3DPROC
    wglDisableFrameLockI3D;
  PFNWGLISENABLEDFRAMELOCKI3DPROC
    wglIsEnabledFrameLockI3D;
  PFNWGLQUERYFRAMELOCKMASTERI3DPROC
    wglQueryFrameLockMasterI3D;

  // WGL_I3D_swap_frame_usage
  PFNWGLGETFRAMEUSAGEI3DPROC
    wglGetFrameUsageI3D;
  PFNWGLBEGINFRAMETRACKINGI3DPROC
    wglBeginFrameTrackingI3D;
  PFNWGLENDFRAMETRACKINGI3DPROC
    wglEndFrameTrackingI3D;
  PFNWGLQUERYFRAMETRACKINGI3DPROC
    wglQueryFrameTrackingI3D;

  // WGL_NV_copy_image
  PFNWGLCOPYIMAGESUBDATANVPROC
    wglCopyImageSubDataNV;

  // WGL_NV_delay_before_swap
  PFNWGLDELAYBEFORESWAPNVPROC
    wglDelayBeforeSwapNV;

  // WGL_NV_DX_interop
  PFNWGLDXSETRESOURCESHAREHANDLENVPROC
    wglDXSetResourceShareHandleNV;
  PFNWGLDXOPENDEVICENVPROC
    wglDXOpenDeviceNV;
  PFNWGLDXCLOSEDEVICENVPROC
    wglDXCloseDeviceNV;
  PFNWGLDXREGISTEROBJECTNVPROC
    wglDXRegisterObjectNV;
  PFNWGLDXUNREGISTEROBJECTNVPROC
    wglDXUnregisterObjectNV;
  PFNWGLDXOBJECTACCESSNVPROC
    wglDXObjectAccessNV;
  PFNWGLDXLOCKOBJECTSNVPROC
    wglDXLockObjectsNV;
  PFNWGLDXUNLOCKOBJECTSNVPROC
    wglDXUnlockObjectsNV;

  // WGL_NV_gpu_affinity
  PFNWGLENUMGPUSNVPROC
    wglEnumGpusNV;
  PFNWGLENUMGPUDEVICESNVPROC
    wglEnumGpuDevicesNV;
  PFNWGLCREATEAFFINITYDCNVPROC
    wglCreateAffinityDCNV;
  PFNWGLENUMGPUSFROMAFFINITYDCNVPROC
    wglEnumGpusFromAffinityDCNV;
  PFNWGLDELETEDCNVPROC
    wglDeleteDCNV;

  // WGL_NV_present_video
  PFNWGLENUMERATEVIDEODEVICESNVPROC
    wglEnumerateVideoDevicesNV;
  PFNWGLBINDVIDEODEVICENVPROC
    wglBindVideoDeviceNV;
  PFNWGLQUERYCURRENTCONTEXTNVPROC
    wglQueryCurrentContextNV;

  // WGL_NV_swap_group
  PFNWGLJOINSWAPGROUPNVPROC
    wglJoinSwapGroupNV;
  PFNWGLBINDSWAPBARRIERNVPROC
    wglBindSwapBarrierNV;
  PFNWGLQUERYSWAPGROUPNVPROC
    wglQuerySwapGroupNV;
  PFNWGLQUERYMAXSWAPGROUPSNVPROC
    wglQueryMaxSwapGroupsNV;
  PFNWGLQUERYFRAMECOUNTNVPROC
    wglQueryFrameCountNV;
  PFNWGLRESETFRAMECOUNTNVPROC
    wglResetFrameCountNV;

  // WGL_NV_video_capture
  PFNWGLBINDVIDEOCAPTUREDEVICENVPROC
    wglBindVideoCaptureDeviceNV;
  PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC
    wglEnumerateVideoCaptureDevicesNV;
  PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC
    wglLockVideoCaptureDeviceNV;
  PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC
    wglQueryVideoCaptureDeviceNV;
  PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC
    wglReleaseVideoCaptureDeviceNV;

  // WGL_NV_video_output
  PFNWGLGETVIDEODEVICENVPROC
    wglGetVideoDeviceNV;
  PFNWGLRELEASEVIDEODEVICENVPROC
    wglReleaseVideoDeviceNV;
  PFNWGLBINDVIDEOIMAGENVPROC
    wglBindVideoImageNV;
  PFNWGLRELEASEVIDEOIMAGENVPROC
    wglReleaseVideoImageNV;
  PFNWGLSENDPBUFFERTOVIDEONVPROC
    wglSendPbufferToVideoNV;
  PFNWGLGETVIDEOINFONVPROC
    wglGetVideoInfoNV;

  // WGL_NV_vertex_array_range
  PFNWGLALLOCATEMEMORYNVPROC
    wglAllocateMemoryNV;
  PFNWGLFREEMEMORYNVPROC
    wglFreeMemoryNV;

  // WGL_OML_sync_control
  PFNWGLGETSYNCVALUESOMLPROC
    wglGetSyncValuesOML;
  PFNWGLGETMSCRATEOMLPROC
    wglGetMscRateOML;
  PFNWGLSWAPBUFFERSMSCOMLPROC
    wglSwapBuffersMscOML;
  PFNWGLSWAPLAYERBUFFERSMSCOMLPROC
    wglSwapLayerBuffersMscOML;
  PFNWGLWAITFORMSCOMLPROC
    wglWaitForMscOML;
  PFNWGLWAITFORSBCOMLPROC
    wglWaitForSbcOML;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

WGLBoolean wglGetCapabilities (WGLCapabilities *capabilities);

#define ChoosePixelFormat __ChoosePixelFormat
#define DescribePixelFormat __DescribePixelFormat
#define GetPixelFormat __GetPixelFormat
#define SetPixelFormat __SetPixelFormat
#define SwapBuffers __SwapBuffers
#define wglAllocateMemoryNV __wglAllocateMemoryNV
#define wglAssociateImageBufferEventsI3D __wglAssociateImageBufferEventsI3D
#define wglBeginFrameTrackingI3D __wglBeginFrameTrackingI3D
#define wglBindDisplayColorTableEXT __wglBindDisplayColorTableEXT
#define wglBindSwapBarrierNV __wglBindSwapBarrierNV
#define wglBindTexImageARB __wglBindTexImageARB
#define wglBindVideoCaptureDeviceNV __wglBindVideoCaptureDeviceNV
#define wglBindVideoDeviceNV __wglBindVideoDeviceNV
#define wglBindVideoImageNV __wglBindVideoImageNV
#define wglBlitContextFramebufferAMD __wglBlitContextFramebufferAMD
#define wglChoosePixelFormatARB __wglChoosePixelFormatARB
#define wglChoosePixelFormatEXT __wglChoosePixelFormatEXT
#define wglCopyContext __wglCopyContext
#define wglCopyImageSubDataNV __wglCopyImageSubDataNV
#define wglCreateAffinityDCNV __wglCreateAffinityDCNV
#define wglCreateAssociatedContextAMD __wglCreateAssociatedContextAMD
#define wglCreateAssociatedContextAttribsAMD __wglCreateAssociatedContextAttribsAMD
#define wglCreateBufferRegionARB __wglCreateBufferRegionARB
#define wglCreateContext __wglCreateContext
#define wglCreateContextAttribsARB __wglCreateContextAttribsARB
#define wglCreateDisplayColorTableEXT __wglCreateDisplayColorTableEXT
#define wglCreateImageBufferI3D __wglCreateImageBufferI3D
#define wglCreateLayerContext __wglCreateLayerContext
#define wglCreatePbufferARB __wglCreatePbufferARB
#define wglCreatePbufferEXT __wglCreatePbufferEXT
#define wglDelayBeforeSwapNV __wglDelayBeforeSwapNV
#define wglDeleteAssociatedContextAMD __wglDeleteAssociatedContextAMD
#define wglDeleteBufferRegionARB __wglDeleteBufferRegionARB
#define wglDeleteContext __wglDeleteContext
#define wglDeleteDCNV __wglDeleteDCNV
#define wglDescribeLayerPlane __wglDescribeLayerPlane
#define wglDestroyDisplayColorTableEXT __wglDestroyDisplayColorTableEXT
#define wglDestroyImageBufferI3D __wglDestroyImageBufferI3D
#define wglDestroyPbufferARB __wglDestroyPbufferARB
#define wglDestroyPbufferEXT __wglDestroyPbufferEXT
#define wglDisableFrameLockI3D __wglDisableFrameLockI3D
#define wglDisableGenlockI3D __wglDisableGenlockI3D
#define wglDXCloseDeviceNV __wglDXCloseDeviceNV
#define wglDXLockObjectsNV __wglDXLockObjectsNV
#define wglDXObjectAccessNV __wglDXObjectAccessNV
#define wglDXOpenDeviceNV __wglDXOpenDeviceNV
#define wglDXRegisterObjectNV __wglDXRegisterObjectNV
#define wglDXSetResourceShareHandleNV __wglDXSetResourceShareHandleNV
#define wglDXUnlockObjectsNV __wglDXUnlockObjectsNV
#define wglDXUnregisterObjectNV __wglDXUnregisterObjectNV
#define wglEnableFrameLockI3D __wglEnableFrameLockI3D
#define wglEnableGenlockI3D __wglEnableGenlockI3D
#define wglEndFrameTrackingI3D __wglEndFrameTrackingI3D
#define wglEnumerateVideoCaptureDevicesNV __wglEnumerateVideoCaptureDevicesNV
#define wglEnumerateVideoDevicesNV __wglEnumerateVideoDevicesNV
#define wglEnumGpuDevicesNV __wglEnumGpuDevicesNV
#define wglEnumGpusFromAffinityDCNV __wglEnumGpusFromAffinityDCNV
#define wglEnumGpusNV __wglEnumGpusNV
#define wglFreeMemoryNV __wglFreeMemoryNV
#define wglGenlockSampleRateI3D __wglGenlockSampleRateI3D
#define wglGenlockSourceDelayI3D __wglGenlockSourceDelayI3D
#define wglGenlockSourceEdgeI3D __wglGenlockSourceEdgeI3D
#define wglGenlockSourceI3D __wglGenlockSourceI3D
#define wglGetContextGPUIDAMD __wglGetContextGPUIDAMD
#define wglGetCurrentAssociatedContextAMD __wglGetCurrentAssociatedContextAMD
#define wglGetCurrentContext __wglGetCurrentContext
#define wglGetCurrentDC __wglGetCurrentDC
#define wglGetCurrentReadDCARB __wglGetCurrentReadDCARB
#define wglGetCurrentReadDCEXT __wglGetCurrentReadDCEXT
#define wglGetDefaultProcAddress __wglGetDefaultProcAddress
#define wglGetDigitalVideoParametersI3D __wglGetDigitalVideoParametersI3D
#define GetEnhMetaFilePixelFormat __GetEnhMetaFilePixelFormat
#define wglGetExtensionsStringARB __wglGetExtensionsStringARB
#define wglGetExtensionsStringEXT __wglGetExtensionsStringEXT
#define wglGetFrameUsageI3D __wglGetFrameUsageI3D
#define wglGetGammaTableI3D __wglGetGammaTableI3D
#define wglGetGammaTableParametersI3D __wglGetGammaTableParametersI3D
#define wglGetGenlockSampleRateI3D __wglGetGenlockSampleRateI3D
#define wglGetGenlockSourceDelayI3D __wglGetGenlockSourceDelayI3D
#define wglGetGenlockSourceEdgeI3D __wglGetGenlockSourceEdgeI3D
#define wglGetGenlockSourceI3D __wglGetGenlockSourceI3D
#define wglGetGPUIDsAMD __wglGetGPUIDsAMD
#define wglGetGPUInfoAMD __wglGetGPUInfoAMD
#define wglGetLayerPaletteEntries __wglGetLayerPaletteEntries
#define wglGetMscRateOML __wglGetMscRateOML
#define wglGetPbufferDCARB __wglGetPbufferDCARB
#define wglGetPbufferDCEXT __wglGetPbufferDCEXT
#define wglGetPixelFormatAttribfvARB __wglGetPixelFormatAttribfvARB
#define wglGetPixelFormatAttribfvEXT __wglGetPixelFormatAttribfvEXT
#define wglGetPixelFormatAttribivARB __wglGetPixelFormatAttribivARB
#define wglGetPixelFormatAttribivEXT __wglGetPixelFormatAttribivEXT
#define wglGetProcAddress __wglGetProcAddress
#define wglGetSwapIntervalEXT __wglGetSwapIntervalEXT
#define wglGetSyncValuesOML __wglGetSyncValuesOML
#define wglGetVideoDeviceNV __wglGetVideoDeviceNV
#define wglGetVideoInfoNV __wglGetVideoInfoNV
#define wglIsEnabledFrameLockI3D __wglIsEnabledFrameLockI3D
#define wglIsEnabledGenlockI3D __wglIsEnabledGenlockI3D
#define wglJoinSwapGroupNV __wglJoinSwapGroupNV
#define wglLoadDisplayColorTableEXT __wglLoadDisplayColorTableEXT
#define wglLockVideoCaptureDeviceNV __wglLockVideoCaptureDeviceNV
#define wglMakeAssociatedContextCurrentAMD __wglMakeAssociatedContextCurrentAMD
#define wglMakeContextCurrentARB __wglMakeContextCurrentARB
#define wglMakeContextCurrentEXT __wglMakeContextCurrentEXT
#define wglMakeCurrent __wglMakeCurrent
#define wglQueryCurrentContextNV __wglQueryCurrentContextNV
#define wglQueryFrameCountNV __wglQueryFrameCountNV
#define wglQueryFrameLockMasterI3D __wglQueryFrameLockMasterI3D
#define wglQueryFrameTrackingI3D __wglQueryFrameTrackingI3D
#define wglQueryGenlockMaxSourceDelayI3D __wglQueryGenlockMaxSourceDelayI3D
#define wglQueryMaxSwapGroupsNV __wglQueryMaxSwapGroupsNV
#define wglQueryPbufferARB __wglQueryPbufferARB
#define wglQueryPbufferEXT __wglQueryPbufferEXT
#define wglQuerySwapGroupNV __wglQuerySwapGroupNV
#define wglQueryVideoCaptureDeviceNV __wglQueryVideoCaptureDeviceNV
#define wglRealizeLayerPalette __wglRealizeLayerPalette
#define wglReleaseImageBufferEventsI3D __wglReleaseImageBufferEventsI3D
#define wglReleasePbufferDCARB __wglReleasePbufferDCARB
#define wglReleasePbufferDCEXT __wglReleasePbufferDCEXT
#define wglReleaseTexImageARB __wglReleaseTexImageARB
#define wglReleaseVideoCaptureDeviceNV __wglReleaseVideoCaptureDeviceNV
#define wglReleaseVideoDeviceNV __wglReleaseVideoDeviceNV
#define wglReleaseVideoImageNV __wglReleaseVideoImageNV
#define wglResetFrameCountNV __wglResetFrameCountNV
#define wglRestoreBufferRegionARB __wglRestoreBufferRegionARB
#define wglSaveBufferRegionARB __wglSaveBufferRegionARB
#define wglSendPbufferToVideoNV __wglSendPbufferToVideoNV
#define wglSetDigitalVideoParametersI3D __wglSetDigitalVideoParametersI3D
#define wglSetGammaTableI3D __wglSetGammaTableI3D
#define wglSetGammaTableParametersI3D __wglSetGammaTableParametersI3D
#define wglSetLayerPaletteEntries __wglSetLayerPaletteEntries
#define wglSetPbufferAttribARB __wglSetPbufferAttribARB
#define wglSetStereoEmitterState3DL __wglSetStereoEmitterState3DL
#define wglShareLists __wglShareLists
#define wglSwapBuffersMscOML __wglSwapBuffersMscOML
#define wglSwapLayerBuffers __wglSwapLayerBuffers
#define wglSwapIntervalEXT __wglSwapIntervalEXT
#define wglSwapLayerBuffersMscOML __wglSwapLayerBuffersMscOML
#define wglUseFontBitmaps __wglUseFontBitmaps
#define wglUseFontBitmapsA __wglUseFontBitmapsA
#define wglUseFontBitmapsW __wglUseFontBitmapsW
#define wglUseFontOutlines __wglUseFontOutlines
#define wglUseFontOutlinesA __wglUseFontOutlinesA
#define wglUseFontOutlinesW __wglUseFontOutlinesW
#define wglWaitForMscOML __wglWaitForMscOML
#define wglWaitForSbcOML __wglWaitForSbcOML

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
