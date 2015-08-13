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

// WGL_VERSION_1_0
typedef int  (GL_APIENTRYP PFNCHOOSEPIXELFORMATPROC) (HDC hDc, const PIXELFORMATDESCRIPTOR * pPfd);
typedef int  (GL_APIENTRYP PFNDESCRIBEPIXELFORMATPROC) (HDC hdc, int  ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR * ppfd);
typedef UINT (GL_APIENTRYP PFNGETENHMETAFILEPIXELFORMATPROC) (HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR * ppfd);
typedef int  (GL_APIENTRYP PFNGETPIXELFORMATPROC) (HDC hdc);
typedef BOOL (GL_APIENTRYP PFNSETPIXELFORMATPROC) (HDC hdc, int  ipfd, const PIXELFORMATDESCRIPTOR * ppfd);
typedef BOOL (GL_APIENTRYP PFNSWAPBUFFERSPROC) (HDC hdc);
typedef BOOL (GL_APIENTRYP PFNWGLCOPYCONTEXTPROC) (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
typedef HGLRC (GL_APIENTRYP PFNWGLCREATECONTEXTPROC) (HDC hDc);
typedef HGLRC (GL_APIENTRYP PFNWGLCREATELAYERCONTEXTPROC) (HDC hDc, int  level);
typedef BOOL (GL_APIENTRYP PFNWGLDELETECONTEXTPROC) (HGLRC oldContext);
typedef BOOL (GL_APIENTRYP PFNWGLDESCRIBELAYERPLANEPROC) (HDC hDc, int  pixelFormat, int  layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);
typedef HGLRC (GL_APIENTRYP PFNWGLGETCURRENTCONTEXTPROC) ();
typedef HDC (GL_APIENTRYP PFNWGLGETCURRENTDCPROC) ();
typedef int  (GL_APIENTRYP PFNWGLGETLAYERPALETTEENTRIESPROC) (HDC hdc, int  iLayerPlane, int  iStart, int  cEntries, const COLORREF * pcr);
typedef PROC (GL_APIENTRYP PFNWGLGETPROCADDRESSPROC) (LPCSTR lpszProc);
typedef BOOL (GL_APIENTRYP PFNWGLMAKECURRENTPROC) (HDC hDc, HGLRC newContext);
typedef BOOL (GL_APIENTRYP PFNWGLREALIZELAYERPALETTEPROC) (HDC hdc, int  iLayerPlane, BOOL bRealize);
typedef int  (GL_APIENTRYP PFNWGLSETLAYERPALETTEENTRIESPROC) (HDC hdc, int  iLayerPlane, int  iStart, int  cEntries, const COLORREF * pcr);
typedef BOOL (GL_APIENTRYP PFNWGLSHARELISTSPROC) (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
typedef BOOL (GL_APIENTRYP PFNWGLSWAPLAYERBUFFERSPROC) (HDC hdc, UINT fuFlags);
typedef BOOL (GL_APIENTRYP PFNWGLUSEFONTBITMAPSPROC) (HDC hDC, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (GL_APIENTRYP PFNWGLUSEFONTBITMAPSAPROC) (HDC hDC, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (GL_APIENTRYP PFNWGLUSEFONTBITMAPSWPROC) (HDC hDC, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (GL_APIENTRYP PFNWGLUSEFONTOUTLINESPROC) (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int  format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GL_APIENTRYP PFNWGLUSEFONTOUTLINESAPROC) (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int  format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GL_APIENTRYP PFNWGLUSEFONTOUTLINESWPROC) (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int  format, LPGLYPHMETRICSFLOAT lpgmf);

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
      GLEW_WGL_FeatureSetCount
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::wgl::FeatureSet::GLEW_WGL_FeatureSetCount];

    public:

      bool IsSupported (glew::wgl::FeatureSet feature);

      bool IsSupported (const char *feature);

      PFNCHOOSEPIXELFORMATPROC m_ChoosePixelFormat;
      PFNDESCRIBEPIXELFORMATPROC m_DescribePixelFormat;
      PFNGETENHMETAFILEPIXELFORMATPROC m_GetEnhMetaFilePixelFormat;
      PFNGETPIXELFORMATPROC m_GetPixelFormat;
      PFNSETPIXELFORMATPROC m_SetPixelFormat;
      PFNSWAPBUFFERSPROC m_SwapBuffers;
      PFNWGLCOPYCONTEXTPROC m_wglCopyContext;
      PFNWGLCREATECONTEXTPROC m_wglCreateContext;
      PFNWGLCREATELAYERCONTEXTPROC m_wglCreateLayerContext;
      PFNWGLDELETECONTEXTPROC m_wglDeleteContext;
      PFNWGLDESCRIBELAYERPLANEPROC m_wglDescribeLayerPlane;
      PFNWGLGETCURRENTCONTEXTPROC m_wglGetCurrentContext;
      PFNWGLGETCURRENTDCPROC m_wglGetCurrentDC;
      PFNWGLGETLAYERPALETTEENTRIESPROC m_wglGetLayerPaletteEntries;
      PFNWGLGETPROCADDRESSPROC m_wglGetProcAddress;
      PFNWGLMAKECURRENTPROC m_wglMakeCurrent;
      PFNWGLREALIZELAYERPALETTEPROC m_wglRealizeLayerPalette;
      PFNWGLSETLAYERPALETTEENTRIESPROC m_wglSetLayerPaletteEntries;
      PFNWGLSHARELISTSPROC m_wglShareLists;
      PFNWGLSWAPLAYERBUFFERSPROC m_wglSwapLayerBuffers;
      PFNWGLUSEFONTBITMAPSPROC m_wglUseFontBitmaps;
      PFNWGLUSEFONTBITMAPSAPROC m_wglUseFontBitmapsA;
      PFNWGLUSEFONTBITMAPSWPROC m_wglUseFontBitmapsW;
      PFNWGLUSEFONTOUTLINESPROC m_wglUseFontOutlines;
      PFNWGLUSEFONTOUTLINESAPROC m_wglUseFontOutlinesA;
      PFNWGLUSEFONTOUTLINESWPROC m_wglUseFontOutlinesW;
      PFNWGLSETSTEREOEMITTERSTATE3DLPROC m_wglSetStereoEmitterState3DL;
      PFNWGLGETGPUIDSAMDPROC m_wglGetGPUIDsAMD;
      PFNWGLGETGPUINFOAMDPROC m_wglGetGPUInfoAMD;
      PFNWGLGETCONTEXTGPUIDAMDPROC m_wglGetContextGPUIDAMD;
      PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC m_wglCreateAssociatedContextAMD;
      PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC m_wglCreateAssociatedContextAttribsAMD;
      PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC m_wglDeleteAssociatedContextAMD;
      PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC m_wglMakeAssociatedContextCurrentAMD;
      PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC m_wglGetCurrentAssociatedContextAMD;
      PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC m_wglBlitContextFramebufferAMD;
      PFNWGLCREATEBUFFERREGIONARBPROC m_wglCreateBufferRegionARB;
      PFNWGLDELETEBUFFERREGIONARBPROC m_wglDeleteBufferRegionARB;
      PFNWGLSAVEBUFFERREGIONARBPROC m_wglSaveBufferRegionARB;
      PFNWGLRESTOREBUFFERREGIONARBPROC m_wglRestoreBufferRegionARB;
      PFNWGLCREATECONTEXTATTRIBSARBPROC m_wglCreateContextAttribsARB;
      PFNWGLGETEXTENSIONSSTRINGARBPROC m_wglGetExtensionsStringARB;
      PFNWGLMAKECONTEXTCURRENTARBPROC m_wglMakeContextCurrentARB;
      PFNWGLGETCURRENTREADDCARBPROC m_wglGetCurrentReadDCARB;
      PFNWGLCREATEPBUFFERARBPROC m_wglCreatePbufferARB;
      PFNWGLGETPBUFFERDCARBPROC m_wglGetPbufferDCARB;
      PFNWGLRELEASEPBUFFERDCARBPROC m_wglReleasePbufferDCARB;
      PFNWGLDESTROYPBUFFERARBPROC m_wglDestroyPbufferARB;
      PFNWGLQUERYPBUFFERARBPROC m_wglQueryPbufferARB;
      PFNWGLGETPIXELFORMATATTRIBIVARBPROC m_wglGetPixelFormatAttribivARB;
      PFNWGLGETPIXELFORMATATTRIBFVARBPROC m_wglGetPixelFormatAttribfvARB;
      PFNWGLCHOOSEPIXELFORMATARBPROC m_wglChoosePixelFormatARB;
      PFNWGLBINDTEXIMAGEARBPROC m_wglBindTexImageARB;
      PFNWGLRELEASETEXIMAGEARBPROC m_wglReleaseTexImageARB;
      PFNWGLSETPBUFFERATTRIBARBPROC m_wglSetPbufferAttribARB;
      PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC m_wglCreateDisplayColorTableEXT;
      PFNWGLLOADDISPLAYCOLORTABLEEXTPROC m_wglLoadDisplayColorTableEXT;
      PFNWGLBINDDISPLAYCOLORTABLEEXTPROC m_wglBindDisplayColorTableEXT;
      PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC m_wglDestroyDisplayColorTableEXT;
      PFNWGLGETEXTENSIONSSTRINGEXTPROC m_wglGetExtensionsStringEXT;
      PFNWGLMAKECONTEXTCURRENTEXTPROC m_wglMakeContextCurrentEXT;
      PFNWGLGETCURRENTREADDCEXTPROC m_wglGetCurrentReadDCEXT;
      PFNWGLCREATEPBUFFEREXTPROC m_wglCreatePbufferEXT;
      PFNWGLGETPBUFFERDCEXTPROC m_wglGetPbufferDCEXT;
      PFNWGLRELEASEPBUFFERDCEXTPROC m_wglReleasePbufferDCEXT;
      PFNWGLDESTROYPBUFFEREXTPROC m_wglDestroyPbufferEXT;
      PFNWGLQUERYPBUFFEREXTPROC m_wglQueryPbufferEXT;
      PFNWGLGETPIXELFORMATATTRIBIVEXTPROC m_wglGetPixelFormatAttribivEXT;
      PFNWGLGETPIXELFORMATATTRIBFVEXTPROC m_wglGetPixelFormatAttribfvEXT;
      PFNWGLCHOOSEPIXELFORMATEXTPROC m_wglChoosePixelFormatEXT;
      PFNWGLSWAPINTERVALEXTPROC m_wglSwapIntervalEXT;
      PFNWGLGETSWAPINTERVALEXTPROC m_wglGetSwapIntervalEXT;
      PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC m_wglGetDigitalVideoParametersI3D;
      PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC m_wglSetDigitalVideoParametersI3D;
      PFNWGLGETGAMMATABLEPARAMETERSI3DPROC m_wglGetGammaTableParametersI3D;
      PFNWGLSETGAMMATABLEPARAMETERSI3DPROC m_wglSetGammaTableParametersI3D;
      PFNWGLGETGAMMATABLEI3DPROC m_wglGetGammaTableI3D;
      PFNWGLSETGAMMATABLEI3DPROC m_wglSetGammaTableI3D;
      PFNWGLENABLEGENLOCKI3DPROC m_wglEnableGenlockI3D;
      PFNWGLDISABLEGENLOCKI3DPROC m_wglDisableGenlockI3D;
      PFNWGLISENABLEDGENLOCKI3DPROC m_wglIsEnabledGenlockI3D;
      PFNWGLGENLOCKSOURCEI3DPROC m_wglGenlockSourceI3D;
      PFNWGLGETGENLOCKSOURCEI3DPROC m_wglGetGenlockSourceI3D;
      PFNWGLGENLOCKSOURCEEDGEI3DPROC m_wglGenlockSourceEdgeI3D;
      PFNWGLGETGENLOCKSOURCEEDGEI3DPROC m_wglGetGenlockSourceEdgeI3D;
      PFNWGLGENLOCKSAMPLERATEI3DPROC m_wglGenlockSampleRateI3D;
      PFNWGLGETGENLOCKSAMPLERATEI3DPROC m_wglGetGenlockSampleRateI3D;
      PFNWGLGENLOCKSOURCEDELAYI3DPROC m_wglGenlockSourceDelayI3D;
      PFNWGLGETGENLOCKSOURCEDELAYI3DPROC m_wglGetGenlockSourceDelayI3D;
      PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC m_wglQueryGenlockMaxSourceDelayI3D;
      PFNWGLCREATEIMAGEBUFFERI3DPROC m_wglCreateImageBufferI3D;
      PFNWGLDESTROYIMAGEBUFFERI3DPROC m_wglDestroyImageBufferI3D;
      PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC m_wglAssociateImageBufferEventsI3D;
      PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC m_wglReleaseImageBufferEventsI3D;
      PFNWGLENABLEFRAMELOCKI3DPROC m_wglEnableFrameLockI3D;
      PFNWGLDISABLEFRAMELOCKI3DPROC m_wglDisableFrameLockI3D;
      PFNWGLISENABLEDFRAMELOCKI3DPROC m_wglIsEnabledFrameLockI3D;
      PFNWGLQUERYFRAMELOCKMASTERI3DPROC m_wglQueryFrameLockMasterI3D;
      PFNWGLGETFRAMEUSAGEI3DPROC m_wglGetFrameUsageI3D;
      PFNWGLBEGINFRAMETRACKINGI3DPROC m_wglBeginFrameTrackingI3D;
      PFNWGLENDFRAMETRACKINGI3DPROC m_wglEndFrameTrackingI3D;
      PFNWGLQUERYFRAMETRACKINGI3DPROC m_wglQueryFrameTrackingI3D;
      PFNWGLCOPYIMAGESUBDATANVPROC m_wglCopyImageSubDataNV;
      PFNWGLDELAYBEFORESWAPNVPROC m_wglDelayBeforeSwapNV;
      PFNWGLDXSETRESOURCESHAREHANDLENVPROC m_wglDXSetResourceShareHandleNV;
      PFNWGLDXOPENDEVICENVPROC m_wglDXOpenDeviceNV;
      PFNWGLDXCLOSEDEVICENVPROC m_wglDXCloseDeviceNV;
      PFNWGLDXREGISTEROBJECTNVPROC m_wglDXRegisterObjectNV;
      PFNWGLDXUNREGISTEROBJECTNVPROC m_wglDXUnregisterObjectNV;
      PFNWGLDXOBJECTACCESSNVPROC m_wglDXObjectAccessNV;
      PFNWGLDXLOCKOBJECTSNVPROC m_wglDXLockObjectsNV;
      PFNWGLDXUNLOCKOBJECTSNVPROC m_wglDXUnlockObjectsNV;
      PFNWGLENUMGPUSNVPROC m_wglEnumGpusNV;
      PFNWGLENUMGPUDEVICESNVPROC m_wglEnumGpuDevicesNV;
      PFNWGLCREATEAFFINITYDCNVPROC m_wglCreateAffinityDCNV;
      PFNWGLENUMGPUSFROMAFFINITYDCNVPROC m_wglEnumGpusFromAffinityDCNV;
      PFNWGLDELETEDCNVPROC m_wglDeleteDCNV;
      PFNWGLENUMERATEVIDEODEVICESNVPROC m_wglEnumerateVideoDevicesNV;
      PFNWGLBINDVIDEODEVICENVPROC m_wglBindVideoDeviceNV;
      PFNWGLQUERYCURRENTCONTEXTNVPROC m_wglQueryCurrentContextNV;
      PFNWGLJOINSWAPGROUPNVPROC m_wglJoinSwapGroupNV;
      PFNWGLBINDSWAPBARRIERNVPROC m_wglBindSwapBarrierNV;
      PFNWGLQUERYSWAPGROUPNVPROC m_wglQuerySwapGroupNV;
      PFNWGLQUERYMAXSWAPGROUPSNVPROC m_wglQueryMaxSwapGroupsNV;
      PFNWGLQUERYFRAMECOUNTNVPROC m_wglQueryFrameCountNV;
      PFNWGLRESETFRAMECOUNTNVPROC m_wglResetFrameCountNV;
      PFNWGLBINDVIDEOCAPTUREDEVICENVPROC m_wglBindVideoCaptureDeviceNV;
      PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC m_wglEnumerateVideoCaptureDevicesNV;
      PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC m_wglLockVideoCaptureDeviceNV;
      PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC m_wglQueryVideoCaptureDeviceNV;
      PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC m_wglReleaseVideoCaptureDeviceNV;
      PFNWGLGETVIDEODEVICENVPROC m_wglGetVideoDeviceNV;
      PFNWGLRELEASEVIDEODEVICENVPROC m_wglReleaseVideoDeviceNV;
      PFNWGLBINDVIDEOIMAGENVPROC m_wglBindVideoImageNV;
      PFNWGLRELEASEVIDEOIMAGENVPROC m_wglReleaseVideoImageNV;
      PFNWGLSENDPBUFFERTOVIDEONVPROC m_wglSendPbufferToVideoNV;
      PFNWGLGETVIDEOINFONVPROC m_wglGetVideoInfoNV;
      PFNWGLALLOCATEMEMORYNVPROC m_wglAllocateMemoryNV;
      PFNWGLFREEMEMORYNVPROC m_wglFreeMemoryNV;
      PFNWGLGETSYNCVALUESOMLPROC m_wglGetSyncValuesOML;
      PFNWGLGETMSCRATEOMLPROC m_wglGetMscRateOML;
      PFNWGLSWAPBUFFERSMSCOMLPROC m_wglSwapBuffersMscOML;
      PFNWGLSWAPLAYERBUFFERSMSCOMLPROC m_wglSwapLayerBuffersMscOML;
      PFNWGLWAITFORMSCOMLPROC m_wglWaitForMscOML;
      PFNWGLWAITFORSBCOMLPROC m_wglWaitForSbcOML;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (glew::wgl::DeviceState *deviceState);

    static void Deinitialise ();

    static const glew::wgl::DeviceState *GetDeviceState () { return s_deviceState; }

  protected:

    static glew::wgl::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    int ChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR * pPfd);
    int DescribePixelFormat (HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR * ppfd);
    UINT GetEnhMetaFilePixelFormat (HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR * ppfd);
    int GetPixelFormat (HDC hdc);
    BOOL SetPixelFormat (HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR * ppfd);
    BOOL SwapBuffers (HDC hdc);
    BOOL wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
    HGLRC wglCreateContext (HDC hDc);
    HGLRC wglCreateLayerContext (HDC hDc, int level);
    BOOL wglDeleteContext (HGLRC oldContext);
    BOOL wglDescribeLayerPlane (HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);
    HGLRC wglGetCurrentContext ();
    HDC wglGetCurrentDC ();
    int wglGetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
    PROC wglGetProcAddress (LPCSTR lpszProc);
    BOOL wglMakeCurrent (HDC hDc, HGLRC newContext);
    BOOL wglRealizeLayerPalette (HDC hdc, int iLayerPlane, BOOL bRealize);
    int wglSetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
    BOOL wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
    BOOL wglSwapLayerBuffers (HDC hdc, UINT fuFlags);
    BOOL wglUseFontBitmaps (HDC hDC, DWORD first, DWORD count, DWORD listBase);
    BOOL wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD listBase);
    BOOL wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD listBase);
    BOOL wglUseFontOutlines (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
    BOOL wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
    BOOL wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
    BOOL wglSetStereoEmitterState3DL (HDC hDC, UINT uState);
    UINT wglGetGPUIDsAMD (UINT maxCount, UINT * ids);
    INT wglGetGPUInfoAMD (UINT id, int property, GLenum dataType, UINT size, void * data);
    UINT wglGetContextGPUIDAMD (HGLRC hglrc);
    HGLRC wglCreateAssociatedContextAMD (UINT id);
    HGLRC wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC hShareContext, const int * attribList);
    BOOL wglDeleteAssociatedContextAMD (HGLRC hglrc);
    BOOL wglMakeAssociatedContextCurrentAMD (HGLRC hglrc);
    HGLRC wglGetCurrentAssociatedContextAMD ();
    VOID wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    HANDLE wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT uType);
    VOID wglDeleteBufferRegionARB (HANDLE hRegion);
    BOOL wglSaveBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height);
    BOOL wglRestoreBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
    HGLRC wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const int * attribList);
    const char * wglGetExtensionsStringARB (HDC hdc);
    BOOL wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
    HDC wglGetCurrentReadDCARB ();
    HPBUFFERARB wglCreatePbufferARB (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
    HDC wglGetPbufferDCARB (HPBUFFERARB hPbuffer);
    int wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC);
    BOOL wglDestroyPbufferARB (HPBUFFERARB hPbuffer);
    BOOL wglQueryPbufferARB (HPBUFFERARB hPbuffer, int iAttribute, int * piValue);
    BOOL wglGetPixelFormatAttribivARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues);
    BOOL wglGetPixelFormatAttribfvARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues);
    BOOL wglChoosePixelFormatARB (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
    BOOL wglBindTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
    BOOL wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
    BOOL wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int * piAttribList);
    GLboolean wglCreateDisplayColorTableEXT (GLushort id);
    GLboolean wglLoadDisplayColorTableEXT (const GLushort * table, GLuint length);
    GLboolean wglBindDisplayColorTableEXT (GLushort id);
    VOID wglDestroyDisplayColorTableEXT (GLushort id);
    const char * wglGetExtensionsStringEXT ();
    BOOL wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
    HDC wglGetCurrentReadDCEXT ();
    HPBUFFEREXT wglCreatePbufferEXT (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
    HDC wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer);
    int wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC);
    BOOL wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer);
    BOOL wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int iAttribute, int * piValue);
    BOOL wglGetPixelFormatAttribivEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues);
    BOOL wglGetPixelFormatAttribfvEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues);
    BOOL wglChoosePixelFormatEXT (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
    BOOL wglSwapIntervalEXT (int interval);
    int wglGetSwapIntervalEXT ();
    BOOL wglGetDigitalVideoParametersI3D (HDC hDC, int iAttribute, int * piValue);
    BOOL wglSetDigitalVideoParametersI3D (HDC hDC, int iAttribute, const int * piValue);
    BOOL wglGetGammaTableParametersI3D (HDC hDC, int iAttribute, int * piValue);
    BOOL wglSetGammaTableParametersI3D (HDC hDC, int iAttribute, const int * piValue);
    BOOL wglGetGammaTableI3D (HDC hDC, int iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue);
    BOOL wglSetGammaTableI3D (HDC hDC, int iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue);
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
    LPVOID wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags);
    BOOL wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress);
    BOOL wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count);
    BOOL wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID * pAddress, UINT count);
    BOOL wglEnableFrameLockI3D ();
    BOOL wglDisableFrameLockI3D ();
    BOOL wglIsEnabledFrameLockI3D (BOOL * pFlag);
    BOOL wglQueryFrameLockMasterI3D (BOOL * pFlag);
    BOOL wglGetFrameUsageI3D (float * pUsage);
    BOOL wglBeginFrameTrackingI3D ();
    BOOL wglEndFrameTrackingI3D ();
    BOOL wglQueryFrameTrackingI3D (DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage);
    BOOL wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
    BOOL wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds);
    BOOL wglDXSetResourceShareHandleNV (void * dxObject, HANDLE shareHandle);
    HANDLE wglDXOpenDeviceNV (void * dxDevice);
    BOOL wglDXCloseDeviceNV (HANDLE hDevice);
    HANDLE wglDXRegisterObjectNV (HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
    BOOL wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject);
    BOOL wglDXObjectAccessNV (HANDLE hObject, GLenum access);
    BOOL wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
    BOOL wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
    BOOL wglEnumGpusNV (UINT iGpuIndex, HGPUNV * phGpu);
    BOOL wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
    HDC wglCreateAffinityDCNV (const HGPUNV * phGpuList);
    BOOL wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu);
    BOOL wglDeleteDCNV (HDC hdc);
    int wglEnumerateVideoDevicesNV (HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList);
    BOOL wglBindVideoDeviceNV (HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
    BOOL wglQueryCurrentContextNV (int iAttribute, int * piValue);
    BOOL wglJoinSwapGroupNV (HDC hDC, GLuint group);
    BOOL wglBindSwapBarrierNV (GLuint group, GLuint barrier);
    BOOL wglQuerySwapGroupNV (HDC hDC, GLuint * group, GLuint * barrier);
    BOOL wglQueryMaxSwapGroupsNV (HDC hDC, GLuint * maxGroups, GLuint * maxBarriers);
    BOOL wglQueryFrameCountNV (HDC hDC, GLuint * count);
    BOOL wglResetFrameCountNV (HDC hDC);
    BOOL wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
    UINT wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList);
    BOOL wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
    BOOL wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int * piValue);
    BOOL wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
    BOOL wglGetVideoDeviceNV (HDC hDC, int numDevices, HPVIDEODEV * hVideoDevice);
    BOOL wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice);
    BOOL wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
    BOOL wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int iVideoBuffer);
    BOOL wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock);
    BOOL wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
    void * wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
    void wglFreeMemoryNV (void * pointer);
    BOOL wglGetSyncValuesOML (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc);
    BOOL wglGetMscRateOML (HDC hdc, INT32 * numerator, INT32 * denominator);
    INT64 wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
    INT64 wglSwapLayerBuffersMscOML (HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
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
