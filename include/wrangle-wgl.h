////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_WGL_H__
#define __GLEW_WGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/wgl.h>

#include <GL/wglext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{
  class wgl
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    enum FeatureSet
    {
      // Features
      GLEW_WGL_VERSION_1_0,
      // Extensions
      GLEW_WGL_3DFX_multisample,
      GLEW_WGL_3DL_stereo_control,
      GLEW_WGL_AMD_gpu_association,
      GLEW_WGL_ARB_buffer_region,
      GLEW_WGL_ARB_context_flush_control,
      GLEW_WGL_ARB_create_context,
      GLEW_WGL_ARB_create_context_profile,
      GLEW_WGL_ARB_create_context_robustness,
      GLEW_WGL_ARB_extensions_string,
      GLEW_WGL_ARB_framebuffer_sRGB,
      GLEW_WGL_ARB_make_current_read,
      GLEW_WGL_ARB_multisample,
      GLEW_WGL_ARB_pbuffer,
      GLEW_WGL_ARB_pixel_format,
      GLEW_WGL_ARB_pixel_format_float,
      GLEW_WGL_ARB_render_texture,
      GLEW_WGL_ARB_robustness_application_isolation,
      GLEW_WGL_ARB_robustness_share_group_isolation,
      GLEW_WGL_ATI_pixel_format_float,
      GLEW_WGL_EXT_create_context_es_profile,
      GLEW_WGL_EXT_create_context_es2_profile,
      GLEW_WGL_EXT_depth_float,
      GLEW_WGL_EXT_display_color_table,
      GLEW_WGL_EXT_extensions_string,
      GLEW_WGL_EXT_framebuffer_sRGB,
      GLEW_WGL_EXT_make_current_read,
      GLEW_WGL_EXT_multisample,
      GLEW_WGL_EXT_pbuffer,
      GLEW_WGL_EXT_pixel_format,
      GLEW_WGL_EXT_pixel_format_packed_float,
      GLEW_WGL_EXT_swap_control,
      GLEW_WGL_EXT_swap_control_tear,
      GLEW_WGL_I3D_digital_video_control,
      GLEW_WGL_I3D_gamma,
      GLEW_WGL_I3D_genlock,
      GLEW_WGL_I3D_image_buffer,
      GLEW_WGL_I3D_swap_frame_lock,
      GLEW_WGL_I3D_swap_frame_usage,
      GLEW_WGL_NV_copy_image,
      GLEW_WGL_NV_delay_before_swap,
      GLEW_WGL_NV_DX_interop,
      GLEW_WGL_NV_DX_interop2,
      GLEW_WGL_NV_float_buffer,
      GLEW_WGL_NV_gpu_affinity,
      GLEW_WGL_NV_multisample_coverage,
      GLEW_WGL_NV_present_video,
      GLEW_WGL_NV_render_depth_texture,
      GLEW_WGL_NV_render_texture_rectangle,
      GLEW_WGL_NV_swap_group,
      GLEW_WGL_NV_video_capture,
      GLEW_WGL_NV_video_output,
      GLEW_WGL_NV_vertex_array_range,
      GLEW_WGL_OML_sync_control,
      GLEW_GL_FeatureSetCount
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::wgl::FeatureSet::GLEW_GL_FeatureSetCount];

    public:

      bool IsSupported (glew::wgl::FeatureSet feature);
      bool IsSupported (const char *feature);

      // WGL_VERSION_1_0
      PFNCHOOSEPIXELFORMATPROC ChoosePixelFormat;
      PFNDESCRIBEPIXELFORMATPROC DescribePixelFormat;
      PFNGETENHMETAFILEPIXELFORMATPROC GetEnhMetaFilePixelFormat;
      PFNGETPIXELFORMATPROC GetPixelFormat;
      PFNSETPIXELFORMATPROC SetPixelFormat;
      PFNSWAPBUFFERSPROC SwapBuffers;
      PFNWGLCOPYCONTEXTPROC wglCopyContext;
      PFNWGLCREATECONTEXTPROC wglCreateContext;
      PFNWGLCREATELAYERCONTEXTPROC wglCreateLayerContext;
      PFNWGLDELETECONTEXTPROC wglDeleteContext;
      PFNWGLDESCRIBELAYERPLANEPROC wglDescribeLayerPlane;
      PFNWGLGETCURRENTCONTEXTPROC wglGetCurrentContext;
      PFNWGLGETCURRENTDCPROC wglGetCurrentDC;
      PFNWGLGETLAYERPALETTEENTRIESPROC wglGetLayerPaletteEntries;
      PFNWGLGETPROCADDRESSPROC wglGetProcAddress;
      PFNWGLMAKECURRENTPROC wglMakeCurrent;
      PFNWGLREALIZELAYERPALETTEPROC wglRealizeLayerPalette;
      PFNWGLSETLAYERPALETTEENTRIESPROC wglSetLayerPaletteEntries;
      PFNWGLSHARELISTSPROC wglShareLists;
      PFNWGLSWAPLAYERBUFFERSPROC wglSwapLayerBuffers;
      PFNWGLUSEFONTBITMAPSPROC wglUseFontBitmaps;
      PFNWGLUSEFONTBITMAPSAPROC wglUseFontBitmapsA;
      PFNWGLUSEFONTBITMAPSWPROC wglUseFontBitmapsW;
      PFNWGLUSEFONTOUTLINESPROC wglUseFontOutlines;
      PFNWGLUSEFONTOUTLINESAPROC wglUseFontOutlinesA;
      PFNWGLUSEFONTOUTLINESWPROC wglUseFontOutlinesW;

      // WGL_3DL_stereo_control
      PFNWGLSETSTEREOEMITTERSTATE3DLPROC wglSetStereoEmitterState3DL;

      // WGL_AMD_gpu_association
      PFNWGLGETGPUIDSAMDPROC wglGetGPUIDsAMD;
      PFNWGLGETGPUINFOAMDPROC wglGetGPUInfoAMD;
      PFNWGLGETCONTEXTGPUIDAMDPROC wglGetContextGPUIDAMD;
      PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC wglCreateAssociatedContextAMD;
      PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC wglCreateAssociatedContextAttribsAMD;
      PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC wglDeleteAssociatedContextAMD;
      PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC wglMakeAssociatedContextCurrentAMD;
      PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC wglGetCurrentAssociatedContextAMD;
      PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC wglBlitContextFramebufferAMD;

      // WGL_ARB_buffer_region
      PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB;
      PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB;
      PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB;
      PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB;

      // WGL_ARB_create_context
      PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB;

      // WGL_ARB_extensions_string
      PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;

      // WGL_ARB_make_current_read
      PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB;
      PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB;

      // WGL_ARB_pbuffer
      PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB;
      PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB;
      PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB;
      PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB;
      PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB;

      // WGL_ARB_pixel_format
      PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
      PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
      PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

      // WGL_ARB_render_texture
      PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB;
      PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB;
      PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB;

      // WGL_EXT_display_color_table
      PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT;
      PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
      PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;
      PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;

      // WGL_EXT_extensions_string
      PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT;

      // WGL_EXT_make_current_read
      PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT;
      PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT;

      // WGL_EXT_pbuffer
      PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT;
      PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT;
      PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT;
      PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT;
      PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT;

      // WGL_EXT_pixel_format
      PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
      PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;
      PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;

      // WGL_EXT_swap_control
      PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
      PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;

      // WGL_I3D_digital_video_control
      PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D;
      PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D;

      // WGL_I3D_gamma
      PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D;
      PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D;
      PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D;
      PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D;

      // WGL_I3D_genlock
      PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D;
      PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D;
      PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D;
      PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D;
      PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D;
      PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D;
      PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D;
      PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D;
      PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D;
      PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D;
      PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D;
      PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D;

      // WGL_I3D_image_buffer
      PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D;
      PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D;
      PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D;
      PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D;

      // WGL_I3D_swap_frame_lock
      PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D;
      PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D;
      PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D;
      PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D;

      // WGL_I3D_swap_frame_usage
      PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D;
      PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D;
      PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D;
      PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D;

      // WGL_NV_copy_image
      PFNWGLCOPYIMAGESUBDATANVPROC wglCopyImageSubDataNV;

      // WGL_NV_delay_before_swap
      PFNWGLDELAYBEFORESWAPNVPROC wglDelayBeforeSwapNV;

      // WGL_NV_DX_interop
      PFNWGLDXSETRESOURCESHAREHANDLENVPROC wglDXSetResourceShareHandleNV;
      PFNWGLDXOPENDEVICENVPROC wglDXOpenDeviceNV;
      PFNWGLDXCLOSEDEVICENVPROC wglDXCloseDeviceNV;
      PFNWGLDXREGISTEROBJECTNVPROC wglDXRegisterObjectNV;
      PFNWGLDXUNREGISTEROBJECTNVPROC wglDXUnregisterObjectNV;
      PFNWGLDXOBJECTACCESSNVPROC wglDXObjectAccessNV;
      PFNWGLDXLOCKOBJECTSNVPROC wglDXLockObjectsNV;
      PFNWGLDXUNLOCKOBJECTSNVPROC wglDXUnlockObjectsNV;

      // WGL_NV_gpu_affinity
      PFNWGLENUMGPUSNVPROC wglEnumGpusNV;
      PFNWGLENUMGPUDEVICESNVPROC wglEnumGpuDevicesNV;
      PFNWGLCREATEAFFINITYDCNVPROC wglCreateAffinityDCNV;
      PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wglEnumGpusFromAffinityDCNV;
      PFNWGLDELETEDCNVPROC wglDeleteDCNV;

      // WGL_NV_present_video
      PFNWGLENUMERATEVIDEODEVICESNVPROC wglEnumerateVideoDevicesNV;
      PFNWGLBINDVIDEODEVICENVPROC wglBindVideoDeviceNV;
      PFNWGLQUERYCURRENTCONTEXTNVPROC wglQueryCurrentContextNV;

      // WGL_NV_swap_group
      PFNWGLJOINSWAPGROUPNVPROC wglJoinSwapGroupNV;
      PFNWGLBINDSWAPBARRIERNVPROC wglBindSwapBarrierNV;
      PFNWGLQUERYSWAPGROUPNVPROC wglQuerySwapGroupNV;
      PFNWGLQUERYMAXSWAPGROUPSNVPROC wglQueryMaxSwapGroupsNV;
      PFNWGLQUERYFRAMECOUNTNVPROC wglQueryFrameCountNV;
      PFNWGLRESETFRAMECOUNTNVPROC wglResetFrameCountNV;

      // WGL_NV_video_capture
      PFNWGLBINDVIDEOCAPTUREDEVICENVPROC wglBindVideoCaptureDeviceNV;
      PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC wglEnumerateVideoCaptureDevicesNV;
      PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC wglLockVideoCaptureDeviceNV;
      PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC wglQueryVideoCaptureDeviceNV;
      PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC wglReleaseVideoCaptureDeviceNV;

      // WGL_NV_video_output
      PFNWGLGETVIDEODEVICENVPROC wglGetVideoDeviceNV;
      PFNWGLRELEASEVIDEODEVICENVPROC wglReleaseVideoDeviceNV;
      PFNWGLBINDVIDEOIMAGENVPROC wglBindVideoImageNV;
      PFNWGLRELEASEVIDEOIMAGENVPROC wglReleaseVideoImageNV;
      PFNWGLSENDPBUFFERTOVIDEONVPROC wglSendPbufferToVideoNV;
      PFNWGLGETVIDEOINFONVPROC wglGetVideoInfoNV;

      // WGL_NV_vertex_array_range
      PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV;
      PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV;

      // WGL_OML_sync_control
      PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML;
      PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML;
      PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML;
      PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML;
      PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML;
      PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (glew::wgl::DeviceState *deviceState);

    static void Deinitialise ();

    static glew::wgl::DeviceState *GetDeviceState ();

  protected:

    static glew::wgl::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    // WGL_VERSION_1_0
    int  ChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR * pPfd);
    int  DescribePixelFormat (HDC hdc, int  ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR * ppfd);
    UINT GetEnhMetaFilePixelFormat (HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR * ppfd);
    int  GetPixelFormat (HDC hdc);
    BOOL SetPixelFormat (HDC hdc, int  ipfd, const PIXELFORMATDESCRIPTOR * ppfd);
    BOOL SwapBuffers (HDC hdc);
    BOOL wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
    HGLRC wglCreateContext (HDC hDc);
    HGLRC wglCreateLayerContext (HDC hDc, int  level);
    BOOL wglDeleteContext (HGLRC oldContext);
    BOOL wglDescribeLayerPlane (HDC hDc, int  pixelFormat, int  layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);
    HGLRC wglGetCurrentContext ();
    HDC wglGetCurrentDC ();
    int  wglGetLayerPaletteEntries (HDC hdc, int  iLayerPlane, int  iStart, int  cEntries, const COLORREF * pcr);
    PROC wglGetProcAddress (LPCSTR lpszProc);
    BOOL wglMakeCurrent (HDC hDc, HGLRC newContext);
    BOOL wglRealizeLayerPalette (HDC hdc, int  iLayerPlane, BOOL bRealize);
    int  wglSetLayerPaletteEntries (HDC hdc, int  iLayerPlane, int  iStart, int  cEntries, const COLORREF * pcr);
    BOOL wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
    BOOL wglSwapLayerBuffers (HDC hdc, UINT fuFlags);
    BOOL wglUseFontBitmaps (HDC hDC, DWORD first, DWORD count, DWORD listBase);
    BOOL wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD listBase);
    BOOL wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD listBase);
    BOOL wglUseFontOutlines (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int  format, LPGLYPHMETRICSFLOAT lpgmf);
    BOOL wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int  format, LPGLYPHMETRICSFLOAT lpgmf);
    BOOL wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int  format, LPGLYPHMETRICSFLOAT lpgmf);

    // WGL_3DL_stereo_control
    BOOL wglSetStereoEmitterState3DL (HDC hDC, UINT uState);

    // WGL_AMD_gpu_association
    UINT wglGetGPUIDsAMD (UINT maxCount, UINT * ids);
    INT wglGetGPUInfoAMD (UINT id, int  property, GLenum dataType, UINT size, void * data);
    UINT wglGetContextGPUIDAMD (HGLRC hglrc);
    HGLRC wglCreateAssociatedContextAMD (UINT id);
    HGLRC wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC hShareContext, const int * attribList);
    BOOL wglDeleteAssociatedContextAMD (HGLRC hglrc);
    BOOL wglMakeAssociatedContextCurrentAMD (HGLRC hglrc);
    HGLRC wglGetCurrentAssociatedContextAMD ();
    VOID wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

    // WGL_ARB_buffer_region
    HANDLE wglCreateBufferRegionARB (HDC hDC, int  iLayerPlane, UINT uType);
    VOID wglDeleteBufferRegionARB (HANDLE hRegion);
    BOOL wglSaveBufferRegionARB (HANDLE hRegion, int  x, int  y, int  width, int  height);
    BOOL wglRestoreBufferRegionARB (HANDLE hRegion, int  x, int  y, int  width, int  height, int  xSrc, int  ySrc);

    // WGL_ARB_create_context
    HGLRC wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const int * attribList);

    // WGL_ARB_extensions_string
    const char * wglGetExtensionsStringARB (HDC hdc);

    // WGL_ARB_make_current_read
    BOOL wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
    HDC wglGetCurrentReadDCARB ();

    // WGL_ARB_pbuffer
    HPBUFFERARB wglCreatePbufferARB (HDC hDC, int  iPixelFormat, int  iWidth, int  iHeight, const int * piAttribList);
    HDC wglGetPbufferDCARB (HPBUFFERARB hPbuffer);
    int  wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC);
    BOOL wglDestroyPbufferARB (HPBUFFERARB hPbuffer);
    BOOL wglQueryPbufferARB (HPBUFFERARB hPbuffer, int  iAttribute, int * piValue);

    // WGL_ARB_pixel_format
    BOOL wglGetPixelFormatAttribivARB (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues);
    BOOL wglGetPixelFormatAttribfvARB (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues);
    BOOL wglChoosePixelFormatARB (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);

    // WGL_ARB_render_texture
    BOOL wglBindTexImageARB (HPBUFFERARB hPbuffer, int  iBuffer);
    BOOL wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int  iBuffer);
    BOOL wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int * piAttribList);

    // WGL_EXT_display_color_table
    GLboolean wglCreateDisplayColorTableEXT (GLushort id);
    GLboolean wglLoadDisplayColorTableEXT (const GLushort * table, GLuint length);
    GLboolean wglBindDisplayColorTableEXT (GLushort id);
    VOID wglDestroyDisplayColorTableEXT (GLushort id);

    // WGL_EXT_extensions_string
    const char * wglGetExtensionsStringEXT ();

    // WGL_EXT_make_current_read
    BOOL wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
    HDC wglGetCurrentReadDCEXT ();

    // WGL_EXT_pbuffer
    HPBUFFEREXT wglCreatePbufferEXT (HDC hDC, int  iPixelFormat, int  iWidth, int  iHeight, const int * piAttribList);
    HDC wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer);
    int  wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC);
    BOOL wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer);
    BOOL wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int  iAttribute, int * piValue);

    // WGL_EXT_pixel_format
    BOOL wglGetPixelFormatAttribivEXT (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues);
    BOOL wglGetPixelFormatAttribfvEXT (HDC hdc, int  iPixelFormat, int  iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues);
    BOOL wglChoosePixelFormatEXT (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);

    // WGL_EXT_swap_control
    BOOL wglSwapIntervalEXT (int  interval);
    int  wglGetSwapIntervalEXT ();

    // WGL_I3D_digital_video_control
    BOOL wglGetDigitalVideoParametersI3D (HDC hDC, int  iAttribute, int * piValue);
    BOOL wglSetDigitalVideoParametersI3D (HDC hDC, int  iAttribute, const int * piValue);

    // WGL_I3D_gamma
    BOOL wglGetGammaTableParametersI3D (HDC hDC, int  iAttribute, int * piValue);
    BOOL wglSetGammaTableParametersI3D (HDC hDC, int  iAttribute, const int * piValue);
    BOOL wglGetGammaTableI3D (HDC hDC, int  iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue);
    BOOL wglSetGammaTableI3D (HDC hDC, int  iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue);

    // WGL_I3D_genlock
    BOOL wglEnableGenlockI3D (HDC hDC);
    BOOL wglDisableGenlockI3D (HDC hDC);
    BOOL wglIsEnabledGenlockI3D (HDC hDC, BOOL * pFlag);
    BOOL wglGenlockSourceI3D (HDC hDC, UINT uSource);
    BOOL wglGetGenlockSourceI3D (HDC hDC, UINT * uSource);
    BOOL wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge);
    BOOL wglGetGenlockSourceEdgeI3D (HDC hDC, UINT * uEdge);
    BOOL wglGenlockSampleRateI3D (HDC hDC, UINT uRate);
    BOOL wglGetGenlockSampleRateI3D (HDC hDC, UINT * uRate);
    BOOL wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay);
    BOOL wglGetGenlockSourceDelayI3D (HDC hDC, UINT * uDelay);
    BOOL wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay);

    // WGL_I3D_image_buffer
    LPVOID wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags);
    BOOL wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress);
    BOOL wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count);
    BOOL wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID * pAddress, UINT count);

    // WGL_I3D_swap_frame_lock
    BOOL wglEnableFrameLockI3D ();
    BOOL wglDisableFrameLockI3D ();
    BOOL wglIsEnabledFrameLockI3D (BOOL * pFlag);
    BOOL wglQueryFrameLockMasterI3D (BOOL * pFlag);

    // WGL_I3D_swap_frame_usage
    BOOL wglGetFrameUsageI3D (float * pUsage);
    BOOL wglBeginFrameTrackingI3D ();
    BOOL wglEndFrameTrackingI3D ();
    BOOL wglQueryFrameTrackingI3D (DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage);

    // WGL_NV_copy_image
    BOOL wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

    // WGL_NV_delay_before_swap
    BOOL wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds);

    // WGL_NV_DX_interop
    BOOL wglDXSetResourceShareHandleNV (void * dxObject, HANDLE shareHandle);
    HANDLE wglDXOpenDeviceNV (void * dxDevice);
    BOOL wglDXCloseDeviceNV (HANDLE hDevice);
    HANDLE wglDXRegisterObjectNV (HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
    BOOL wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject);
    BOOL wglDXObjectAccessNV (HANDLE hObject, GLenum access);
    BOOL wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
    BOOL wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);

    // WGL_NV_gpu_affinity
    BOOL wglEnumGpusNV (UINT iGpuIndex, HGPUNV * phGpu);
    BOOL wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
    HDC wglCreateAffinityDCNV (const HGPUNV * phGpuList);
    BOOL wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu);
    BOOL wglDeleteDCNV (HDC hdc);

    // WGL_NV_present_video
    int  wglEnumerateVideoDevicesNV (HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList);
    BOOL wglBindVideoDeviceNV (HDC hDC, unsigned int  uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
    BOOL wglQueryCurrentContextNV (int  iAttribute, int * piValue);

    // WGL_NV_swap_group
    BOOL wglJoinSwapGroupNV (HDC hDC, GLuint group);
    BOOL wglBindSwapBarrierNV (GLuint group, GLuint barrier);
    BOOL wglQuerySwapGroupNV (HDC hDC, GLuint * group, GLuint * barrier);
    BOOL wglQueryMaxSwapGroupsNV (HDC hDC, GLuint * maxGroups, GLuint * maxBarriers);
    BOOL wglQueryFrameCountNV (HDC hDC, GLuint * count);
    BOOL wglResetFrameCountNV (HDC hDC);

    // WGL_NV_video_capture
    BOOL wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
    UINT wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList);
    BOOL wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
    BOOL wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int  iAttribute, int * piValue);
    BOOL wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);

    // WGL_NV_video_output
    BOOL wglGetVideoDeviceNV (HDC hDC, int  numDevices, HPVIDEODEV * hVideoDevice);
    BOOL wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice);
    BOOL wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int  iVideoBuffer);
    BOOL wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int  iVideoBuffer);
    BOOL wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int  iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock);
    BOOL wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);

    // WGL_NV_vertex_array_range
    void * wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
    void  wglFreeMemoryNV (void * pointer);

    // WGL_OML_sync_control
    BOOL wglGetSyncValuesOML (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc);
    BOOL wglGetMscRateOML (HDC hdc, INT32 * numerator, INT32 * denominator);
    INT64 wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
    INT64 wglSwapLayerBuffersMscOML (HDC hdc, int  fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
    BOOL wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc);
    BOOL wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define ChoosePixelFormat glew::wgl::ChoosePixelFormat
#define DescribePixelFormat glew::wgl::DescribePixelFormat
#define GetPixelFormat glew::wgl::GetPixelFormat
#define SetPixelFormat glew::wgl::SetPixelFormat
#define SwapBuffers glew::wgl::SwapBuffers
#define wglAllocateMemoryNV glew::wgl::wglAllocateMemoryNV
#define wglAssociateImageBufferEventsI3D glew::wgl::wglAssociateImageBufferEventsI3D
#define wglBeginFrameTrackingI3D glew::wgl::wglBeginFrameTrackingI3D
#define wglBindDisplayColorTableEXT glew::wgl::wglBindDisplayColorTableEXT
#define wglBindSwapBarrierNV glew::wgl::wglBindSwapBarrierNV
#define wglBindTexImageARB glew::wgl::wglBindTexImageARB
#define wglBindVideoCaptureDeviceNV glew::wgl::wglBindVideoCaptureDeviceNV
#define wglBindVideoDeviceNV glew::wgl::wglBindVideoDeviceNV
#define wglBindVideoImageNV glew::wgl::wglBindVideoImageNV
#define wglBlitContextFramebufferAMD glew::wgl::wglBlitContextFramebufferAMD
#define wglChoosePixelFormatARB glew::wgl::wglChoosePixelFormatARB
#define wglChoosePixelFormatEXT glew::wgl::wglChoosePixelFormatEXT
#define wglCopyContext glew::wgl::wglCopyContext
#define wglCopyImageSubDataNV glew::wgl::wglCopyImageSubDataNV
#define wglCreateAffinityDCNV glew::wgl::wglCreateAffinityDCNV
#define wglCreateAssociatedContextAMD glew::wgl::wglCreateAssociatedContextAMD
#define wglCreateAssociatedContextAttribsAMD glew::wgl::wglCreateAssociatedContextAttribsAMD
#define wglCreateBufferRegionARB glew::wgl::wglCreateBufferRegionARB
#define wglCreateContext glew::wgl::wglCreateContext
#define wglCreateContextAttribsARB glew::wgl::wglCreateContextAttribsARB
#define wglCreateDisplayColorTableEXT glew::wgl::wglCreateDisplayColorTableEXT
#define wglCreateImageBufferI3D glew::wgl::wglCreateImageBufferI3D
#define wglCreateLayerContext glew::wgl::wglCreateLayerContext
#define wglCreatePbufferARB glew::wgl::wglCreatePbufferARB
#define wglCreatePbufferEXT glew::wgl::wglCreatePbufferEXT
#define wglDelayBeforeSwapNV glew::wgl::wglDelayBeforeSwapNV
#define wglDeleteAssociatedContextAMD glew::wgl::wglDeleteAssociatedContextAMD
#define wglDeleteBufferRegionARB glew::wgl::wglDeleteBufferRegionARB
#define wglDeleteContext glew::wgl::wglDeleteContext
#define wglDeleteDCNV glew::wgl::wglDeleteDCNV
#define wglDescribeLayerPlane glew::wgl::wglDescribeLayerPlane
#define wglDestroyDisplayColorTableEXT glew::wgl::wglDestroyDisplayColorTableEXT
#define wglDestroyImageBufferI3D glew::wgl::wglDestroyImageBufferI3D
#define wglDestroyPbufferARB glew::wgl::wglDestroyPbufferARB
#define wglDestroyPbufferEXT glew::wgl::wglDestroyPbufferEXT
#define wglDisableFrameLockI3D glew::wgl::wglDisableFrameLockI3D
#define wglDisableGenlockI3D glew::wgl::wglDisableGenlockI3D
#define wglDXCloseDeviceNV glew::wgl::wglDXCloseDeviceNV
#define wglDXLockObjectsNV glew::wgl::wglDXLockObjectsNV
#define wglDXObjectAccessNV glew::wgl::wglDXObjectAccessNV
#define wglDXOpenDeviceNV glew::wgl::wglDXOpenDeviceNV
#define wglDXRegisterObjectNV glew::wgl::wglDXRegisterObjectNV
#define wglDXSetResourceShareHandleNV glew::wgl::wglDXSetResourceShareHandleNV
#define wglDXUnlockObjectsNV glew::wgl::wglDXUnlockObjectsNV
#define wglDXUnregisterObjectNV glew::wgl::wglDXUnregisterObjectNV
#define wglEnableFrameLockI3D glew::wgl::wglEnableFrameLockI3D
#define wglEnableGenlockI3D glew::wgl::wglEnableGenlockI3D
#define wglEndFrameTrackingI3D glew::wgl::wglEndFrameTrackingI3D
#define wglEnumerateVideoCaptureDevicesNV glew::wgl::wglEnumerateVideoCaptureDevicesNV
#define wglEnumerateVideoDevicesNV glew::wgl::wglEnumerateVideoDevicesNV
#define wglEnumGpuDevicesNV glew::wgl::wglEnumGpuDevicesNV
#define wglEnumGpusFromAffinityDCNV glew::wgl::wglEnumGpusFromAffinityDCNV
#define wglEnumGpusNV glew::wgl::wglEnumGpusNV
#define wglFreeMemoryNV glew::wgl::wglFreeMemoryNV
#define wglGenlockSampleRateI3D glew::wgl::wglGenlockSampleRateI3D
#define wglGenlockSourceDelayI3D glew::wgl::wglGenlockSourceDelayI3D
#define wglGenlockSourceEdgeI3D glew::wgl::wglGenlockSourceEdgeI3D
#define wglGenlockSourceI3D glew::wgl::wglGenlockSourceI3D
#define wglGetContextGPUIDAMD glew::wgl::wglGetContextGPUIDAMD
#define wglGetCurrentAssociatedContextAMD glew::wgl::wglGetCurrentAssociatedContextAMD
#define wglGetCurrentContext glew::wgl::wglGetCurrentContext
#define wglGetCurrentDC glew::wgl::wglGetCurrentDC
#define wglGetCurrentReadDCARB glew::wgl::wglGetCurrentReadDCARB
#define wglGetCurrentReadDCEXT glew::wgl::wglGetCurrentReadDCEXT
#define wglGetDefaultProcAddress glew::wgl::wglGetDefaultProcAddress
#define wglGetDigitalVideoParametersI3D glew::wgl::wglGetDigitalVideoParametersI3D
#define GetEnhMetaFilePixelFormat glew::wgl::GetEnhMetaFilePixelFormat
#define wglGetExtensionsStringARB glew::wgl::wglGetExtensionsStringARB
#define wglGetExtensionsStringEXT glew::wgl::wglGetExtensionsStringEXT
#define wglGetFrameUsageI3D glew::wgl::wglGetFrameUsageI3D
#define wglGetGammaTableI3D glew::wgl::wglGetGammaTableI3D
#define wglGetGammaTableParametersI3D glew::wgl::wglGetGammaTableParametersI3D
#define wglGetGenlockSampleRateI3D glew::wgl::wglGetGenlockSampleRateI3D
#define wglGetGenlockSourceDelayI3D glew::wgl::wglGetGenlockSourceDelayI3D
#define wglGetGenlockSourceEdgeI3D glew::wgl::wglGetGenlockSourceEdgeI3D
#define wglGetGenlockSourceI3D glew::wgl::wglGetGenlockSourceI3D
#define wglGetGPUIDsAMD glew::wgl::wglGetGPUIDsAMD
#define wglGetGPUInfoAMD glew::wgl::wglGetGPUInfoAMD
#define wglGetLayerPaletteEntries glew::wgl::wglGetLayerPaletteEntries
#define wglGetMscRateOML glew::wgl::wglGetMscRateOML
#define wglGetPbufferDCARB glew::wgl::wglGetPbufferDCARB
#define wglGetPbufferDCEXT glew::wgl::wglGetPbufferDCEXT
#define wglGetPixelFormatAttribfvARB glew::wgl::wglGetPixelFormatAttribfvARB
#define wglGetPixelFormatAttribfvEXT glew::wgl::wglGetPixelFormatAttribfvEXT
#define wglGetPixelFormatAttribivARB glew::wgl::wglGetPixelFormatAttribivARB
#define wglGetPixelFormatAttribivEXT glew::wgl::wglGetPixelFormatAttribivEXT
#define wglGetProcAddress glew::wgl::wglGetProcAddress
#define wglGetSwapIntervalEXT glew::wgl::wglGetSwapIntervalEXT
#define wglGetSyncValuesOML glew::wgl::wglGetSyncValuesOML
#define wglGetVideoDeviceNV glew::wgl::wglGetVideoDeviceNV
#define wglGetVideoInfoNV glew::wgl::wglGetVideoInfoNV
#define wglIsEnabledFrameLockI3D glew::wgl::wglIsEnabledFrameLockI3D
#define wglIsEnabledGenlockI3D glew::wgl::wglIsEnabledGenlockI3D
#define wglJoinSwapGroupNV glew::wgl::wglJoinSwapGroupNV
#define wglLoadDisplayColorTableEXT glew::wgl::wglLoadDisplayColorTableEXT
#define wglLockVideoCaptureDeviceNV glew::wgl::wglLockVideoCaptureDeviceNV
#define wglMakeAssociatedContextCurrentAMD glew::wgl::wglMakeAssociatedContextCurrentAMD
#define wglMakeContextCurrentARB glew::wgl::wglMakeContextCurrentARB
#define wglMakeContextCurrentEXT glew::wgl::wglMakeContextCurrentEXT
#define wglMakeCurrent glew::wgl::wglMakeCurrent
#define wglQueryCurrentContextNV glew::wgl::wglQueryCurrentContextNV
#define wglQueryFrameCountNV glew::wgl::wglQueryFrameCountNV
#define wglQueryFrameLockMasterI3D glew::wgl::wglQueryFrameLockMasterI3D
#define wglQueryFrameTrackingI3D glew::wgl::wglQueryFrameTrackingI3D
#define wglQueryGenlockMaxSourceDelayI3D glew::wgl::wglQueryGenlockMaxSourceDelayI3D
#define wglQueryMaxSwapGroupsNV glew::wgl::wglQueryMaxSwapGroupsNV
#define wglQueryPbufferARB glew::wgl::wglQueryPbufferARB
#define wglQueryPbufferEXT glew::wgl::wglQueryPbufferEXT
#define wglQuerySwapGroupNV glew::wgl::wglQuerySwapGroupNV
#define wglQueryVideoCaptureDeviceNV glew::wgl::wglQueryVideoCaptureDeviceNV
#define wglRealizeLayerPalette glew::wgl::wglRealizeLayerPalette
#define wglReleaseImageBufferEventsI3D glew::wgl::wglReleaseImageBufferEventsI3D
#define wglReleasePbufferDCARB glew::wgl::wglReleasePbufferDCARB
#define wglReleasePbufferDCEXT glew::wgl::wglReleasePbufferDCEXT
#define wglReleaseTexImageARB glew::wgl::wglReleaseTexImageARB
#define wglReleaseVideoCaptureDeviceNV glew::wgl::wglReleaseVideoCaptureDeviceNV
#define wglReleaseVideoDeviceNV glew::wgl::wglReleaseVideoDeviceNV
#define wglReleaseVideoImageNV glew::wgl::wglReleaseVideoImageNV
#define wglResetFrameCountNV glew::wgl::wglResetFrameCountNV
#define wglRestoreBufferRegionARB glew::wgl::wglRestoreBufferRegionARB
#define wglSaveBufferRegionARB glew::wgl::wglSaveBufferRegionARB
#define wglSendPbufferToVideoNV glew::wgl::wglSendPbufferToVideoNV
#define wglSetDigitalVideoParametersI3D glew::wgl::wglSetDigitalVideoParametersI3D
#define wglSetGammaTableI3D glew::wgl::wglSetGammaTableI3D
#define wglSetGammaTableParametersI3D glew::wgl::wglSetGammaTableParametersI3D
#define wglSetLayerPaletteEntries glew::wgl::wglSetLayerPaletteEntries
#define wglSetPbufferAttribARB glew::wgl::wglSetPbufferAttribARB
#define wglSetStereoEmitterState3DL glew::wgl::wglSetStereoEmitterState3DL
#define wglShareLists glew::wgl::wglShareLists
#define wglSwapBuffersMscOML glew::wgl::wglSwapBuffersMscOML
#define wglSwapLayerBuffers glew::wgl::wglSwapLayerBuffers
#define wglSwapIntervalEXT glew::wgl::wglSwapIntervalEXT
#define wglSwapLayerBuffersMscOML glew::wgl::wglSwapLayerBuffersMscOML
#define wglUseFontBitmaps glew::wgl::wglUseFontBitmaps
#define wglUseFontBitmapsA glew::wgl::wglUseFontBitmapsA
#define wglUseFontBitmapsW glew::wgl::wglUseFontBitmapsW
#define wglUseFontOutlines glew::wgl::wglUseFontOutlines
#define wglUseFontOutlinesA glew::wgl::wglUseFontOutlinesA
#define wglUseFontOutlinesW glew::wgl::wglUseFontOutlinesW
#define wglWaitForMscOML glew::wgl::wglWaitForMscOML
#define wglWaitForSbcOML glew::wgl::wglWaitForSbcOML

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_WGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
