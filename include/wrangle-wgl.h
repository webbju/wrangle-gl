////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic push // push/pop not available before GCC 4.6
#endif
#pragma GCC diagnostic ignored "-Wunused-function"
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define GLEW_USE_WGL 1

#include <wrangle.h>

#include <cstring>

#include <string>

#include <unordered_set>

// Support standalone inclusion without GL headers.
typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;

#include <GL/wgl.h>

#include <GL/wglext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum GLEW_WGL_FeatureSet
{
  GLEW_WGL_VERSION_1_0,
  GLEW_WGL_3DFX_multisample,
  GLEW_WGL_3DL_stereo_control,
  GLEW_WGL_AMD_gpu_association,
  GLEW_WGL_ARB_buffer_region,
  GLEW_WGL_ARB_context_flush_control,
  GLEW_WGL_ARB_create_context,
  GLEW_WGL_ARB_create_context_no_error,
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
  GLEW_WGL_ATI_render_texture_rectangle,
  GLEW_WGL_EXT_colorspace,
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
  GLEW_WGL_NV_multigpu_context,
  GLEW_WGL_FeatureSetCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum GLEW_WGL_ProcDelegate
{
  GLEW_WGL_wglSetStereoEmitterState3DL,
  GLEW_WGL_wglGetGPUIDsAMD,
  GLEW_WGL_wglGetGPUInfoAMD,
  GLEW_WGL_wglGetContextGPUIDAMD,
  GLEW_WGL_wglCreateAssociatedContextAMD,
  GLEW_WGL_wglCreateAssociatedContextAttribsAMD,
  GLEW_WGL_wglDeleteAssociatedContextAMD,
  GLEW_WGL_wglMakeAssociatedContextCurrentAMD,
  GLEW_WGL_wglGetCurrentAssociatedContextAMD,
  GLEW_WGL_wglBlitContextFramebufferAMD,
  GLEW_WGL_wglCreateBufferRegionARB,
  GLEW_WGL_wglDeleteBufferRegionARB,
  GLEW_WGL_wglSaveBufferRegionARB,
  GLEW_WGL_wglRestoreBufferRegionARB,
  GLEW_WGL_wglCreateContextAttribsARB,
  GLEW_WGL_wglGetExtensionsStringARB,
  GLEW_WGL_wglMakeContextCurrentARB,
  GLEW_WGL_wglGetCurrentReadDCARB,
  GLEW_WGL_wglCreatePbufferARB,
  GLEW_WGL_wglGetPbufferDCARB,
  GLEW_WGL_wglReleasePbufferDCARB,
  GLEW_WGL_wglDestroyPbufferARB,
  GLEW_WGL_wglQueryPbufferARB,
  GLEW_WGL_wglGetPixelFormatAttribivARB,
  GLEW_WGL_wglGetPixelFormatAttribfvARB,
  GLEW_WGL_wglChoosePixelFormatARB,
  GLEW_WGL_wglBindTexImageARB,
  GLEW_WGL_wglReleaseTexImageARB,
  GLEW_WGL_wglSetPbufferAttribARB,
  GLEW_WGL_wglCreateDisplayColorTableEXT,
  GLEW_WGL_wglLoadDisplayColorTableEXT,
  GLEW_WGL_wglBindDisplayColorTableEXT,
  GLEW_WGL_wglDestroyDisplayColorTableEXT,
  GLEW_WGL_wglGetExtensionsStringEXT,
  GLEW_WGL_wglMakeContextCurrentEXT,
  GLEW_WGL_wglGetCurrentReadDCEXT,
  GLEW_WGL_wglCreatePbufferEXT,
  GLEW_WGL_wglGetPbufferDCEXT,
  GLEW_WGL_wglReleasePbufferDCEXT,
  GLEW_WGL_wglDestroyPbufferEXT,
  GLEW_WGL_wglQueryPbufferEXT,
  GLEW_WGL_wglGetPixelFormatAttribivEXT,
  GLEW_WGL_wglGetPixelFormatAttribfvEXT,
  GLEW_WGL_wglChoosePixelFormatEXT,
  GLEW_WGL_wglSwapIntervalEXT,
  GLEW_WGL_wglGetSwapIntervalEXT,
  GLEW_WGL_wglGetDigitalVideoParametersI3D,
  GLEW_WGL_wglSetDigitalVideoParametersI3D,
  GLEW_WGL_wglGetGammaTableParametersI3D,
  GLEW_WGL_wglSetGammaTableParametersI3D,
  GLEW_WGL_wglGetGammaTableI3D,
  GLEW_WGL_wglSetGammaTableI3D,
  GLEW_WGL_wglEnableGenlockI3D,
  GLEW_WGL_wglDisableGenlockI3D,
  GLEW_WGL_wglIsEnabledGenlockI3D,
  GLEW_WGL_wglGenlockSourceI3D,
  GLEW_WGL_wglGetGenlockSourceI3D,
  GLEW_WGL_wglGenlockSourceEdgeI3D,
  GLEW_WGL_wglGetGenlockSourceEdgeI3D,
  GLEW_WGL_wglGenlockSampleRateI3D,
  GLEW_WGL_wglGetGenlockSampleRateI3D,
  GLEW_WGL_wglGenlockSourceDelayI3D,
  GLEW_WGL_wglGetGenlockSourceDelayI3D,
  GLEW_WGL_wglQueryGenlockMaxSourceDelayI3D,
  GLEW_WGL_wglCreateImageBufferI3D,
  GLEW_WGL_wglDestroyImageBufferI3D,
  GLEW_WGL_wglAssociateImageBufferEventsI3D,
  GLEW_WGL_wglReleaseImageBufferEventsI3D,
  GLEW_WGL_wglEnableFrameLockI3D,
  GLEW_WGL_wglDisableFrameLockI3D,
  GLEW_WGL_wglIsEnabledFrameLockI3D,
  GLEW_WGL_wglQueryFrameLockMasterI3D,
  GLEW_WGL_wglGetFrameUsageI3D,
  GLEW_WGL_wglBeginFrameTrackingI3D,
  GLEW_WGL_wglEndFrameTrackingI3D,
  GLEW_WGL_wglQueryFrameTrackingI3D,
  GLEW_WGL_wglCopyImageSubDataNV,
  GLEW_WGL_wglDelayBeforeSwapNV,
  GLEW_WGL_wglDXSetResourceShareHandleNV,
  GLEW_WGL_wglDXOpenDeviceNV,
  GLEW_WGL_wglDXCloseDeviceNV,
  GLEW_WGL_wglDXRegisterObjectNV,
  GLEW_WGL_wglDXUnregisterObjectNV,
  GLEW_WGL_wglDXObjectAccessNV,
  GLEW_WGL_wglDXLockObjectsNV,
  GLEW_WGL_wglDXUnlockObjectsNV,
  GLEW_WGL_wglEnumGpusNV,
  GLEW_WGL_wglEnumGpuDevicesNV,
  GLEW_WGL_wglCreateAffinityDCNV,
  GLEW_WGL_wglEnumGpusFromAffinityDCNV,
  GLEW_WGL_wglDeleteDCNV,
  GLEW_WGL_wglEnumerateVideoDevicesNV,
  GLEW_WGL_wglBindVideoDeviceNV,
  GLEW_WGL_wglQueryCurrentContextNV,
  GLEW_WGL_wglJoinSwapGroupNV,
  GLEW_WGL_wglBindSwapBarrierNV,
  GLEW_WGL_wglQuerySwapGroupNV,
  GLEW_WGL_wglQueryMaxSwapGroupsNV,
  GLEW_WGL_wglQueryFrameCountNV,
  GLEW_WGL_wglResetFrameCountNV,
  GLEW_WGL_wglBindVideoCaptureDeviceNV,
  GLEW_WGL_wglEnumerateVideoCaptureDevicesNV,
  GLEW_WGL_wglLockVideoCaptureDeviceNV,
  GLEW_WGL_wglQueryVideoCaptureDeviceNV,
  GLEW_WGL_wglReleaseVideoCaptureDeviceNV,
  GLEW_WGL_wglGetVideoDeviceNV,
  GLEW_WGL_wglReleaseVideoDeviceNV,
  GLEW_WGL_wglBindVideoImageNV,
  GLEW_WGL_wglReleaseVideoImageNV,
  GLEW_WGL_wglSendPbufferToVideoNV,
  GLEW_WGL_wglGetVideoInfoNV,
  GLEW_WGL_wglAllocateMemoryNV,
  GLEW_WGL_wglFreeMemoryNV,
  GLEW_WGL_wglGetSyncValuesOML,
  GLEW_WGL_wglGetMscRateOML,
  GLEW_WGL_wglSwapBuffersMscOML,
  GLEW_WGL_wglSwapLayerBuffersMscOML,
  GLEW_WGL_wglWaitForMscOML,
  GLEW_WGL_wglWaitForSbcOML,
  GLEW_WGL_ProcDelegateCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

WINGDIAPI int WINAPI ChoosePixelFormat (HDC hDc, const PIXELFORMATDESCRIPTOR * pPfd);
WINGDIAPI int WINAPI DescribePixelFormat (HDC hdc, int ipfd, UINT cjpfd, const PIXELFORMATDESCRIPTOR * ppfd);
WINGDIAPI UINT WINAPI GetEnhMetaFilePixelFormat (HENHMETAFILE hemf, const PIXELFORMATDESCRIPTOR * ppfd);
WINGDIAPI int WINAPI GetPixelFormat (HDC hdc);
WINGDIAPI BOOL WINAPI SetPixelFormat (HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR * ppfd);
WINGDIAPI BOOL WINAPI SwapBuffers (HDC hdc);
WINGDIAPI BOOL WINAPI wglCopyContext (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
WINGDIAPI HGLRC WINAPI wglCreateContext (HDC hDc);
WINGDIAPI HGLRC WINAPI wglCreateLayerContext (HDC hDc, int level);
WINGDIAPI BOOL WINAPI wglDeleteContext (HGLRC oldContext);
WINGDIAPI BOOL WINAPI wglDescribeLayerPlane (HDC hDc, int pixelFormat, int layerPlane, UINT nBytes, const LAYERPLANEDESCRIPTOR * plpd);
WINGDIAPI HGLRC WINAPI wglGetCurrentContext ();
WINGDIAPI HDC WINAPI wglGetCurrentDC ();
WINGDIAPI int WINAPI wglGetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
WINGDIAPI PROC WINAPI wglGetProcAddress (LPCSTR lpszProc);
WINGDIAPI BOOL WINAPI wglMakeCurrent (HDC hDc, HGLRC newContext);
WINGDIAPI BOOL WINAPI wglRealizeLayerPalette (HDC hdc, int iLayerPlane, BOOL bRealize);
WINGDIAPI int WINAPI wglSetLayerPaletteEntries (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF * pcr);
WINGDIAPI BOOL WINAPI wglShareLists (HGLRC hrcSrvShare, HGLRC hrcSrvSource);
WINGDIAPI BOOL WINAPI wglSwapLayerBuffers (HDC hdc, UINT fuFlags);
WINGDIAPI BOOL WINAPI wglUseFontBitmaps (HDC hDC, DWORD first, DWORD count, DWORD listBase);
WINGDIAPI BOOL WINAPI wglUseFontBitmapsA (HDC hDC, DWORD first, DWORD count, DWORD listBase);
WINGDIAPI BOOL WINAPI wglUseFontBitmapsW (HDC hDC, DWORD first, DWORD count, DWORD listBase);
WINGDIAPI BOOL WINAPI wglUseFontOutlines (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
WINGDIAPI BOOL WINAPI wglUseFontOutlinesA (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
WINGDIAPI BOOL WINAPI wglUseFontOutlinesW (HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef BOOL (WINAPI * PFNWGLSETSTEREOEMITTERSTATE3DLPROC) /* wglSetStereoEmitterState3DL */ (HDC hDC, UINT uState);
typedef UINT (WINAPI * PFNWGLGETGPUIDSAMDPROC) /* wglGetGPUIDsAMD */ (UINT maxCount, UINT * ids);
typedef INT (WINAPI * PFNWGLGETGPUINFOAMDPROC) /* wglGetGPUInfoAMD */ (UINT id, INT property, GLenum dataType, UINT size, void * data);
typedef UINT (WINAPI * PFNWGLGETCONTEXTGPUIDAMDPROC) /* wglGetContextGPUIDAMD */ (HGLRC hglrc);
typedef HGLRC (WINAPI * PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) /* wglCreateAssociatedContextAMD */ (UINT id);
typedef HGLRC (WINAPI * PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) /* wglCreateAssociatedContextAttribsAMD */ (UINT id, HGLRC hShareContext, const int * attribList);
typedef BOOL (WINAPI * PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) /* wglDeleteAssociatedContextAMD */ (HGLRC hglrc);
typedef BOOL (WINAPI * PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) /* wglMakeAssociatedContextCurrentAMD */ (HGLRC hglrc);
typedef HGLRC (WINAPI * PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) /* wglGetCurrentAssociatedContextAMD */ ();
typedef VOID (WINAPI * PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) /* wglBlitContextFramebufferAMD */ (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef HANDLE (WINAPI * PFNWGLCREATEBUFFERREGIONARBPROC) /* wglCreateBufferRegionARB */ (HDC hDC, int iLayerPlane, UINT uType);
typedef VOID (WINAPI * PFNWGLDELETEBUFFERREGIONARBPROC) /* wglDeleteBufferRegionARB */ (HANDLE hRegion);
typedef BOOL (WINAPI * PFNWGLSAVEBUFFERREGIONARBPROC) /* wglSaveBufferRegionARB */ (HANDLE hRegion, int x, int y, int width, int height);
typedef BOOL (WINAPI * PFNWGLRESTOREBUFFERREGIONARBPROC) /* wglRestoreBufferRegionARB */ (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
typedef HGLRC (WINAPI * PFNWGLCREATECONTEXTATTRIBSARBPROC) /* wglCreateContextAttribsARB */ (HDC hDC, HGLRC hShareContext, const int * attribList);
typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGARBPROC) /* wglGetExtensionsStringARB */ (HDC hdc);
typedef BOOL (WINAPI * PFNWGLMAKECONTEXTCURRENTARBPROC) /* wglMakeContextCurrentARB */ (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (WINAPI * PFNWGLGETCURRENTREADDCARBPROC) /* wglGetCurrentReadDCARB */ ();
typedef HPBUFFERARB (WINAPI * PFNWGLCREATEPBUFFERARBPROC) /* wglCreatePbufferARB */ (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
typedef HDC (WINAPI * PFNWGLGETPBUFFERDCARBPROC) /* wglGetPbufferDCARB */ (HPBUFFERARB hPbuffer);
typedef int (WINAPI * PFNWGLRELEASEPBUFFERDCARBPROC) /* wglReleasePbufferDCARB */ (HPBUFFERARB hPbuffer, HDC hDC);
typedef BOOL (WINAPI * PFNWGLDESTROYPBUFFERARBPROC) /* wglDestroyPbufferARB */ (HPBUFFERARB hPbuffer);
typedef BOOL (WINAPI * PFNWGLQUERYPBUFFERARBPROC) /* wglQueryPbufferARB */ (HPBUFFERARB hPbuffer, int iAttribute, int * piValue);
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBIVARBPROC) /* wglGetPixelFormatAttribivARB */ (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues);
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBFVARBPROC) /* wglGetPixelFormatAttribfvARB */ (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues);
typedef BOOL (WINAPI * PFNWGLCHOOSEPIXELFORMATARBPROC) /* wglChoosePixelFormatARB */ (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
typedef BOOL (WINAPI * PFNWGLBINDTEXIMAGEARBPROC) /* wglBindTexImageARB */ (HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (WINAPI * PFNWGLRELEASETEXIMAGEARBPROC) /* wglReleaseTexImageARB */ (HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (WINAPI * PFNWGLSETPBUFFERATTRIBARBPROC) /* wglSetPbufferAttribARB */ (HPBUFFERARB hPbuffer, const int * piAttribList);
typedef GLboolean (WINAPI * PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) /* wglCreateDisplayColorTableEXT */ (GLushort id);
typedef GLboolean (WINAPI * PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) /* wglLoadDisplayColorTableEXT */ (const GLushort * table, GLuint length);
typedef GLboolean (WINAPI * PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) /* wglBindDisplayColorTableEXT */ (GLushort id);
typedef VOID (WINAPI * PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) /* wglDestroyDisplayColorTableEXT */ (GLushort id);
typedef const char * (WINAPI * PFNWGLGETEXTENSIONSSTRINGEXTPROC) /* wglGetExtensionsStringEXT */ ();
typedef BOOL (WINAPI * PFNWGLMAKECONTEXTCURRENTEXTPROC) /* wglMakeContextCurrentEXT */ (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (WINAPI * PFNWGLGETCURRENTREADDCEXTPROC) /* wglGetCurrentReadDCEXT */ ();
typedef HPBUFFEREXT (WINAPI * PFNWGLCREATEPBUFFEREXTPROC) /* wglCreatePbufferEXT */ (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
typedef HDC (WINAPI * PFNWGLGETPBUFFERDCEXTPROC) /* wglGetPbufferDCEXT */ (HPBUFFEREXT hPbuffer);
typedef int (WINAPI * PFNWGLRELEASEPBUFFERDCEXTPROC) /* wglReleasePbufferDCEXT */ (HPBUFFEREXT hPbuffer, HDC hDC);
typedef BOOL (WINAPI * PFNWGLDESTROYPBUFFEREXTPROC) /* wglDestroyPbufferEXT */ (HPBUFFEREXT hPbuffer);
typedef BOOL (WINAPI * PFNWGLQUERYPBUFFEREXTPROC) /* wglQueryPbufferEXT */ (HPBUFFEREXT hPbuffer, int iAttribute, int * piValue);
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) /* wglGetPixelFormatAttribivEXT */ (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues);
typedef BOOL (WINAPI * PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) /* wglGetPixelFormatAttribfvEXT */ (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues);
typedef BOOL (WINAPI * PFNWGLCHOOSEPIXELFORMATEXTPROC) /* wglChoosePixelFormatEXT */ (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
typedef BOOL (WINAPI * PFNWGLSWAPINTERVALEXTPROC) /* wglSwapIntervalEXT */ (int interval);
typedef int (WINAPI * PFNWGLGETSWAPINTERVALEXTPROC) /* wglGetSwapIntervalEXT */ ();
typedef BOOL (WINAPI * PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) /* wglGetDigitalVideoParametersI3D */ (HDC hDC, int iAttribute, int * piValue);
typedef BOOL (WINAPI * PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) /* wglSetDigitalVideoParametersI3D */ (HDC hDC, int iAttribute, const int * piValue);
typedef BOOL (WINAPI * PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) /* wglGetGammaTableParametersI3D */ (HDC hDC, int iAttribute, int * piValue);
typedef BOOL (WINAPI * PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) /* wglSetGammaTableParametersI3D */ (HDC hDC, int iAttribute, const int * piValue);
typedef BOOL (WINAPI * PFNWGLGETGAMMATABLEI3DPROC) /* wglGetGammaTableI3D */ (HDC hDC, int iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue);
typedef BOOL (WINAPI * PFNWGLSETGAMMATABLEI3DPROC) /* wglSetGammaTableI3D */ (HDC hDC, int iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue);
typedef BOOL (WINAPI * PFNWGLENABLEGENLOCKI3DPROC) /* wglEnableGenlockI3D */ (HDC hDC);
typedef BOOL (WINAPI * PFNWGLDISABLEGENLOCKI3DPROC) /* wglDisableGenlockI3D */ (HDC hDC);
typedef BOOL (WINAPI * PFNWGLISENABLEDGENLOCKI3DPROC) /* wglIsEnabledGenlockI3D */ (HDC hDC, BOOL * pFlag);
typedef BOOL (WINAPI * PFNWGLGENLOCKSOURCEI3DPROC) /* wglGenlockSourceI3D */ (HDC hDC, UINT uSource);
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSOURCEI3DPROC) /* wglGetGenlockSourceI3D */ (HDC hDC, UINT * uSource);
typedef BOOL (WINAPI * PFNWGLGENLOCKSOURCEEDGEI3DPROC) /* wglGenlockSourceEdgeI3D */ (HDC hDC, UINT uEdge);
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) /* wglGetGenlockSourceEdgeI3D */ (HDC hDC, UINT * uEdge);
typedef BOOL (WINAPI * PFNWGLGENLOCKSAMPLERATEI3DPROC) /* wglGenlockSampleRateI3D */ (HDC hDC, UINT uRate);
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSAMPLERATEI3DPROC) /* wglGetGenlockSampleRateI3D */ (HDC hDC, UINT * uRate);
typedef BOOL (WINAPI * PFNWGLGENLOCKSOURCEDELAYI3DPROC) /* wglGenlockSourceDelayI3D */ (HDC hDC, UINT uDelay);
typedef BOOL (WINAPI * PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) /* wglGetGenlockSourceDelayI3D */ (HDC hDC, UINT * uDelay);
typedef BOOL (WINAPI * PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) /* wglQueryGenlockMaxSourceDelayI3D */ (HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay);
typedef LPVOID (WINAPI * PFNWGLCREATEIMAGEBUFFERI3DPROC) /* wglCreateImageBufferI3D */ (HDC hDC, DWORD dwSize, UINT uFlags);
typedef BOOL (WINAPI * PFNWGLDESTROYIMAGEBUFFERI3DPROC) /* wglDestroyImageBufferI3D */ (HDC hDC, LPVOID pAddress);
typedef BOOL (WINAPI * PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) /* wglAssociateImageBufferEventsI3D */ (HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count);
typedef BOOL (WINAPI * PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) /* wglReleaseImageBufferEventsI3D */ (HDC hDC, const LPVOID * pAddress, UINT count);
typedef BOOL (WINAPI * PFNWGLENABLEFRAMELOCKI3DPROC) /* wglEnableFrameLockI3D */ ();
typedef BOOL (WINAPI * PFNWGLDISABLEFRAMELOCKI3DPROC) /* wglDisableFrameLockI3D */ ();
typedef BOOL (WINAPI * PFNWGLISENABLEDFRAMELOCKI3DPROC) /* wglIsEnabledFrameLockI3D */ (BOOL * pFlag);
typedef BOOL (WINAPI * PFNWGLQUERYFRAMELOCKMASTERI3DPROC) /* wglQueryFrameLockMasterI3D */ (BOOL * pFlag);
typedef BOOL (WINAPI * PFNWGLGETFRAMEUSAGEI3DPROC) /* wglGetFrameUsageI3D */ (float * pUsage);
typedef BOOL (WINAPI * PFNWGLBEGINFRAMETRACKINGI3DPROC) /* wglBeginFrameTrackingI3D */ ();
typedef BOOL (WINAPI * PFNWGLENDFRAMETRACKINGI3DPROC) /* wglEndFrameTrackingI3D */ ();
typedef BOOL (WINAPI * PFNWGLQUERYFRAMETRACKINGI3DPROC) /* wglQueryFrameTrackingI3D */ (DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage);
typedef BOOL (WINAPI * PFNWGLCOPYIMAGESUBDATANVPROC) /* wglCopyImageSubDataNV */ (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
typedef BOOL (WINAPI * PFNWGLDELAYBEFORESWAPNVPROC) /* wglDelayBeforeSwapNV */ (HDC hDC, GLfloat seconds);
typedef BOOL (WINAPI * PFNWGLDXSETRESOURCESHAREHANDLENVPROC) /* wglDXSetResourceShareHandleNV */ (void * dxObject, HANDLE shareHandle);
typedef HANDLE (WINAPI * PFNWGLDXOPENDEVICENVPROC) /* wglDXOpenDeviceNV */ (void * dxDevice);
typedef BOOL (WINAPI * PFNWGLDXCLOSEDEVICENVPROC) /* wglDXCloseDeviceNV */ (HANDLE hDevice);
typedef HANDLE (WINAPI * PFNWGLDXREGISTEROBJECTNVPROC) /* wglDXRegisterObjectNV */ (HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
typedef BOOL (WINAPI * PFNWGLDXUNREGISTEROBJECTNVPROC) /* wglDXUnregisterObjectNV */ (HANDLE hDevice, HANDLE hObject);
typedef BOOL (WINAPI * PFNWGLDXOBJECTACCESSNVPROC) /* wglDXObjectAccessNV */ (HANDLE hObject, GLenum access);
typedef BOOL (WINAPI * PFNWGLDXLOCKOBJECTSNVPROC) /* wglDXLockObjectsNV */ (HANDLE hDevice, GLint count, HANDLE * hObjects);
typedef BOOL (WINAPI * PFNWGLDXUNLOCKOBJECTSNVPROC) /* wglDXUnlockObjectsNV */ (HANDLE hDevice, GLint count, HANDLE * hObjects);
typedef BOOL (WINAPI * PFNWGLENUMGPUSNVPROC) /* wglEnumGpusNV */ (UINT iGpuIndex, HGPUNV * phGpu);
typedef BOOL (WINAPI * PFNWGLENUMGPUDEVICESNVPROC) /* wglEnumGpuDevicesNV */ (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
typedef HDC (WINAPI * PFNWGLCREATEAFFINITYDCNVPROC) /* wglCreateAffinityDCNV */ (const HGPUNV * phGpuList);
typedef BOOL (WINAPI * PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) /* wglEnumGpusFromAffinityDCNV */ (HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu);
typedef BOOL (WINAPI * PFNWGLDELETEDCNVPROC) /* wglDeleteDCNV */ (HDC hdc);
typedef int (WINAPI * PFNWGLENUMERATEVIDEODEVICESNVPROC) /* wglEnumerateVideoDevicesNV */ (HDC hDc, HVIDEOOUTPUTDEVICENV * phDeviceList);
typedef BOOL (WINAPI * PFNWGLBINDVIDEODEVICENVPROC) /* wglBindVideoDeviceNV */ (HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
typedef BOOL (WINAPI * PFNWGLQUERYCURRENTCONTEXTNVPROC) /* wglQueryCurrentContextNV */ (int iAttribute, int * piValue);
typedef BOOL (WINAPI * PFNWGLJOINSWAPGROUPNVPROC) /* wglJoinSwapGroupNV */ (HDC hDC, GLuint group);
typedef BOOL (WINAPI * PFNWGLBINDSWAPBARRIERNVPROC) /* wglBindSwapBarrierNV */ (GLuint group, GLuint barrier);
typedef BOOL (WINAPI * PFNWGLQUERYSWAPGROUPNVPROC) /* wglQuerySwapGroupNV */ (HDC hDC, GLuint * group, GLuint * barrier);
typedef BOOL (WINAPI * PFNWGLQUERYMAXSWAPGROUPSNVPROC) /* wglQueryMaxSwapGroupsNV */ (HDC hDC, GLuint * maxGroups, GLuint * maxBarriers);
typedef BOOL (WINAPI * PFNWGLQUERYFRAMECOUNTNVPROC) /* wglQueryFrameCountNV */ (HDC hDC, GLuint * count);
typedef BOOL (WINAPI * PFNWGLRESETFRAMECOUNTNVPROC) /* wglResetFrameCountNV */ (HDC hDC);
typedef BOOL (WINAPI * PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) /* wglBindVideoCaptureDeviceNV */ (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
typedef UINT (WINAPI * PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) /* wglEnumerateVideoCaptureDevicesNV */ (HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList);
typedef BOOL (WINAPI * PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) /* wglLockVideoCaptureDeviceNV */ (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (WINAPI * PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) /* wglQueryVideoCaptureDeviceNV */ (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int * piValue);
typedef BOOL (WINAPI * PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) /* wglReleaseVideoCaptureDeviceNV */ (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (WINAPI * PFNWGLGETVIDEODEVICENVPROC) /* wglGetVideoDeviceNV */ (HDC hDC, int numDevices, HPVIDEODEV * hVideoDevice);
typedef BOOL (WINAPI * PFNWGLRELEASEVIDEODEVICENVPROC) /* wglReleaseVideoDeviceNV */ (HPVIDEODEV hVideoDevice);
typedef BOOL (WINAPI * PFNWGLBINDVIDEOIMAGENVPROC) /* wglBindVideoImageNV */ (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (WINAPI * PFNWGLRELEASEVIDEOIMAGENVPROC) /* wglReleaseVideoImageNV */ (HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (WINAPI * PFNWGLSENDPBUFFERTOVIDEONVPROC) /* wglSendPbufferToVideoNV */ (HPBUFFERARB hPbuffer, int iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock);
typedef BOOL (WINAPI * PFNWGLGETVIDEOINFONVPROC) /* wglGetVideoInfoNV */ (HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
typedef void * (WINAPI * PFNWGLALLOCATEMEMORYNVPROC) /* wglAllocateMemoryNV */ (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
typedef void (WINAPI * PFNWGLFREEMEMORYNVPROC) /* wglFreeMemoryNV */ (void * pointer);
typedef BOOL (WINAPI * PFNWGLGETSYNCVALUESOMLPROC) /* wglGetSyncValuesOML */ (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc);
typedef BOOL (WINAPI * PFNWGLGETMSCRATEOMLPROC) /* wglGetMscRateOML */ (HDC hdc, INT32 * numerator, INT32 * denominator);
typedef INT64 (WINAPI * PFNWGLSWAPBUFFERSMSCOMLPROC) /* wglSwapBuffersMscOML */ (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef INT64 (WINAPI * PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) /* wglSwapLayerBuffersMscOML */ (HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef BOOL (WINAPI * PFNWGLWAITFORMSCOMLPROC) /* wglWaitForMscOML */ (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc);
typedef BOOL (WINAPI * PFNWGLWAITFORSBCOMLPROC) /* wglWaitForSbcOML */ (HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew {
  namespace wgl {

    class Context {
    public:

      Context(std::unordered_set<std::string> &supportedExtensions, void* (*wglGetProcAddressFunc)(const char*)) {
        m_featureSupported[GLEW_WGL_3DFX_multisample] = (supportedExtensions.find("WGL_3DFX_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_3DL_stereo_control] = (supportedExtensions.find("WGL_3DL_stereo_control") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_AMD_gpu_association] = (supportedExtensions.find("WGL_AMD_gpu_association") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_buffer_region] = (supportedExtensions.find("WGL_ARB_buffer_region") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_context_flush_control] = (supportedExtensions.find("WGL_ARB_context_flush_control") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_create_context] = (supportedExtensions.find("WGL_ARB_create_context") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_create_context_no_error] = (supportedExtensions.find("WGL_ARB_create_context_no_error") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_create_context_profile] = (supportedExtensions.find("WGL_ARB_create_context_profile") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_create_context_robustness] = (supportedExtensions.find("WGL_ARB_create_context_robustness") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_extensions_string] = (supportedExtensions.find("WGL_ARB_extensions_string") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_framebuffer_sRGB] = (supportedExtensions.find("WGL_ARB_framebuffer_sRGB") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_make_current_read] = (supportedExtensions.find("WGL_ARB_make_current_read") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_multisample] = (supportedExtensions.find("WGL_ARB_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_pbuffer] = (supportedExtensions.find("WGL_ARB_pbuffer") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_pixel_format] = (supportedExtensions.find("WGL_ARB_pixel_format") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_pixel_format_float] = (supportedExtensions.find("WGL_ARB_pixel_format_float") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_render_texture] = (supportedExtensions.find("WGL_ARB_render_texture") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_robustness_application_isolation] = (supportedExtensions.find("WGL_ARB_robustness_application_isolation") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ARB_robustness_share_group_isolation] = (supportedExtensions.find("WGL_ARB_robustness_share_group_isolation") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ATI_pixel_format_float] = (supportedExtensions.find("WGL_ATI_pixel_format_float") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_ATI_render_texture_rectangle] = (supportedExtensions.find("WGL_ATI_render_texture_rectangle") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_colorspace] = (supportedExtensions.find("WGL_EXT_colorspace") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_create_context_es_profile] = (supportedExtensions.find("WGL_EXT_create_context_es_profile") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_create_context_es2_profile] = (supportedExtensions.find("WGL_EXT_create_context_es2_profile") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_depth_float] = (supportedExtensions.find("WGL_EXT_depth_float") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_display_color_table] = (supportedExtensions.find("WGL_EXT_display_color_table") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_extensions_string] = (supportedExtensions.find("WGL_EXT_extensions_string") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_framebuffer_sRGB] = (supportedExtensions.find("WGL_EXT_framebuffer_sRGB") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_make_current_read] = (supportedExtensions.find("WGL_EXT_make_current_read") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_multisample] = (supportedExtensions.find("WGL_EXT_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_pbuffer] = (supportedExtensions.find("WGL_EXT_pbuffer") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_pixel_format] = (supportedExtensions.find("WGL_EXT_pixel_format") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_pixel_format_packed_float] = (supportedExtensions.find("WGL_EXT_pixel_format_packed_float") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_swap_control] = (supportedExtensions.find("WGL_EXT_swap_control") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_EXT_swap_control_tear] = (supportedExtensions.find("WGL_EXT_swap_control_tear") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_I3D_digital_video_control] = (supportedExtensions.find("WGL_I3D_digital_video_control") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_I3D_gamma] = (supportedExtensions.find("WGL_I3D_gamma") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_I3D_genlock] = (supportedExtensions.find("WGL_I3D_genlock") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_I3D_image_buffer] = (supportedExtensions.find("WGL_I3D_image_buffer") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_I3D_swap_frame_lock] = (supportedExtensions.find("WGL_I3D_swap_frame_lock") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_I3D_swap_frame_usage] = (supportedExtensions.find("WGL_I3D_swap_frame_usage") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_copy_image] = (supportedExtensions.find("WGL_NV_copy_image") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_delay_before_swap] = (supportedExtensions.find("WGL_NV_delay_before_swap") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_DX_interop] = (supportedExtensions.find("WGL_NV_DX_interop") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_DX_interop2] = (supportedExtensions.find("WGL_NV_DX_interop2") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_float_buffer] = (supportedExtensions.find("WGL_NV_float_buffer") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_gpu_affinity] = (supportedExtensions.find("WGL_NV_gpu_affinity") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_multisample_coverage] = (supportedExtensions.find("WGL_NV_multisample_coverage") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_present_video] = (supportedExtensions.find("WGL_NV_present_video") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_render_depth_texture] = (supportedExtensions.find("WGL_NV_render_depth_texture") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_render_texture_rectangle] = (supportedExtensions.find("WGL_NV_render_texture_rectangle") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_swap_group] = (supportedExtensions.find("WGL_NV_swap_group") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_video_capture] = (supportedExtensions.find("WGL_NV_video_capture") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_video_output] = (supportedExtensions.find("WGL_NV_video_output") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_vertex_array_range] = (supportedExtensions.find("WGL_NV_vertex_array_range") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_OML_sync_control] = (supportedExtensions.find("WGL_OML_sync_control") != supportedExtensions.end());
        m_featureSupported[GLEW_WGL_NV_multigpu_context] = (supportedExtensions.find("WGL_NV_multigpu_context") != supportedExtensions.end());


        // WGL_3DL_stereo_control
        if (m_featureSupported[GLEW_WGL_3DL_stereo_control]) {
          m_wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC) wglGetProcAddressFunc("wglSetStereoEmitterState3DL");
        }

        // WGL_AMD_gpu_association
        if (m_featureSupported[GLEW_WGL_AMD_gpu_association]) {
          m_wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC) wglGetProcAddressFunc("wglGetGPUIDsAMD");
          m_wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC) wglGetProcAddressFunc("wglGetGPUInfoAMD");
          m_wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC) wglGetProcAddressFunc("wglGetContextGPUIDAMD");
          m_wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) wglGetProcAddressFunc("wglCreateAssociatedContextAMD");
          m_wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) wglGetProcAddressFunc("wglCreateAssociatedContextAttribsAMD");
          m_wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) wglGetProcAddressFunc("wglDeleteAssociatedContextAMD");
          m_wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) wglGetProcAddressFunc("wglMakeAssociatedContextCurrentAMD");
          m_wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) wglGetProcAddressFunc("wglGetCurrentAssociatedContextAMD");
          m_wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) wglGetProcAddressFunc("wglBlitContextFramebufferAMD");
        }

        // WGL_ARB_buffer_region
        if (m_featureSupported[GLEW_WGL_ARB_buffer_region]) {
          m_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC) wglGetProcAddressFunc("wglCreateBufferRegionARB");
          m_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC) wglGetProcAddressFunc("wglDeleteBufferRegionARB");
          m_wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC) wglGetProcAddressFunc("wglSaveBufferRegionARB");
          m_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC) wglGetProcAddressFunc("wglRestoreBufferRegionARB");
        }

        // WGL_ARB_create_context
        if (m_featureSupported[GLEW_WGL_ARB_create_context]) {
          m_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC) wglGetProcAddressFunc("wglCreateContextAttribsARB");
        }

        // WGL_ARB_extensions_string
        if (m_featureSupported[GLEW_WGL_ARB_extensions_string]) {
          m_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) wglGetProcAddressFunc("wglGetExtensionsStringARB");
        }

        // WGL_ARB_make_current_read
        if (m_featureSupported[GLEW_WGL_ARB_make_current_read]) {
          m_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC) wglGetProcAddressFunc("wglMakeContextCurrentARB");
          m_wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC) wglGetProcAddressFunc("wglGetCurrentReadDCARB");
        }

        // WGL_ARB_pbuffer
        if (m_featureSupported[GLEW_WGL_ARB_pbuffer]) {
          m_wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC) wglGetProcAddressFunc("wglCreatePbufferARB");
          m_wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC) wglGetProcAddressFunc("wglGetPbufferDCARB");
          m_wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC) wglGetProcAddressFunc("wglReleasePbufferDCARB");
          m_wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC) wglGetProcAddressFunc("wglDestroyPbufferARB");
          m_wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC) wglGetProcAddressFunc("wglQueryPbufferARB");
        }

        // WGL_ARB_pixel_format
        if (m_featureSupported[GLEW_WGL_ARB_pixel_format]) {
          m_wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC) wglGetProcAddressFunc("wglGetPixelFormatAttribivARB");
          m_wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC) wglGetProcAddressFunc("wglGetPixelFormatAttribfvARB");
          m_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC) wglGetProcAddressFunc("wglChoosePixelFormatARB");
        }

        // WGL_ARB_render_texture
        if (m_featureSupported[GLEW_WGL_ARB_render_texture]) {
          m_wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC) wglGetProcAddressFunc("wglBindTexImageARB");
          m_wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC) wglGetProcAddressFunc("wglReleaseTexImageARB");
          m_wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC) wglGetProcAddressFunc("wglSetPbufferAttribARB");
        }

        // WGL_EXT_display_color_table
        if (m_featureSupported[GLEW_WGL_EXT_display_color_table]) {
          m_wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) wglGetProcAddressFunc("wglCreateDisplayColorTableEXT");
          m_wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) wglGetProcAddressFunc("wglLoadDisplayColorTableEXT");
          m_wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) wglGetProcAddressFunc("wglBindDisplayColorTableEXT");
          m_wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) wglGetProcAddressFunc("wglDestroyDisplayColorTableEXT");
        }

        // WGL_EXT_extensions_string
        if (m_featureSupported[GLEW_WGL_EXT_extensions_string]) {
          m_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) wglGetProcAddressFunc("wglGetExtensionsStringEXT");
        }

        // WGL_EXT_make_current_read
        if (m_featureSupported[GLEW_WGL_EXT_make_current_read]) {
          m_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC) wglGetProcAddressFunc("wglMakeContextCurrentEXT");
          m_wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC) wglGetProcAddressFunc("wglGetCurrentReadDCEXT");
        }

        // WGL_EXT_pbuffer
        if (m_featureSupported[GLEW_WGL_EXT_pbuffer]) {
          m_wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC) wglGetProcAddressFunc("wglCreatePbufferEXT");
          m_wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC) wglGetProcAddressFunc("wglGetPbufferDCEXT");
          m_wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC) wglGetProcAddressFunc("wglReleasePbufferDCEXT");
          m_wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC) wglGetProcAddressFunc("wglDestroyPbufferEXT");
          m_wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC) wglGetProcAddressFunc("wglQueryPbufferEXT");
        }

        // WGL_EXT_pixel_format
        if (m_featureSupported[GLEW_WGL_EXT_pixel_format]) {
          m_wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) wglGetProcAddressFunc("wglGetPixelFormatAttribivEXT");
          m_wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) wglGetProcAddressFunc("wglGetPixelFormatAttribfvEXT");
          m_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC) wglGetProcAddressFunc("wglChoosePixelFormatEXT");
        }

        // WGL_EXT_swap_control
        if (m_featureSupported[GLEW_WGL_EXT_swap_control]) {
          m_wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC) wglGetProcAddressFunc("wglSwapIntervalEXT");
          m_wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC) wglGetProcAddressFunc("wglGetSwapIntervalEXT");
        }

        // WGL_I3D_digital_video_control
        if (m_featureSupported[GLEW_WGL_I3D_digital_video_control]) {
          m_wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) wglGetProcAddressFunc("wglGetDigitalVideoParametersI3D");
          m_wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) wglGetProcAddressFunc("wglSetDigitalVideoParametersI3D");
        }

        // WGL_I3D_gamma
        if (m_featureSupported[GLEW_WGL_I3D_gamma]) {
          m_wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) wglGetProcAddressFunc("wglGetGammaTableParametersI3D");
          m_wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) wglGetProcAddressFunc("wglSetGammaTableParametersI3D");
          m_wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC) wglGetProcAddressFunc("wglGetGammaTableI3D");
          m_wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC) wglGetProcAddressFunc("wglSetGammaTableI3D");
        }

        // WGL_I3D_genlock
        if (m_featureSupported[GLEW_WGL_I3D_genlock]) {
          m_wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC) wglGetProcAddressFunc("wglEnableGenlockI3D");
          m_wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC) wglGetProcAddressFunc("wglDisableGenlockI3D");
          m_wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC) wglGetProcAddressFunc("wglIsEnabledGenlockI3D");
          m_wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC) wglGetProcAddressFunc("wglGenlockSourceI3D");
          m_wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC) wglGetProcAddressFunc("wglGetGenlockSourceI3D");
          m_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC) wglGetProcAddressFunc("wglGenlockSourceEdgeI3D");
          m_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) wglGetProcAddressFunc("wglGetGenlockSourceEdgeI3D");
          m_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC) wglGetProcAddressFunc("wglGenlockSampleRateI3D");
          m_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC) wglGetProcAddressFunc("wglGetGenlockSampleRateI3D");
          m_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC) wglGetProcAddressFunc("wglGenlockSourceDelayI3D");
          m_wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) wglGetProcAddressFunc("wglGetGenlockSourceDelayI3D");
          m_wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) wglGetProcAddressFunc("wglQueryGenlockMaxSourceDelayI3D");
        }

        // WGL_I3D_image_buffer
        if (m_featureSupported[GLEW_WGL_I3D_image_buffer]) {
          m_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC) wglGetProcAddressFunc("wglCreateImageBufferI3D");
          m_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC) wglGetProcAddressFunc("wglDestroyImageBufferI3D");
          m_wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) wglGetProcAddressFunc("wglAssociateImageBufferEventsI3D");
          m_wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) wglGetProcAddressFunc("wglReleaseImageBufferEventsI3D");
        }

        // WGL_I3D_swap_frame_lock
        if (m_featureSupported[GLEW_WGL_I3D_swap_frame_lock]) {
          m_wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC) wglGetProcAddressFunc("wglEnableFrameLockI3D");
          m_wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC) wglGetProcAddressFunc("wglDisableFrameLockI3D");
          m_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC) wglGetProcAddressFunc("wglIsEnabledFrameLockI3D");
          m_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC) wglGetProcAddressFunc("wglQueryFrameLockMasterI3D");
        }

        // WGL_I3D_swap_frame_usage
        if (m_featureSupported[GLEW_WGL_I3D_swap_frame_usage]) {
          m_wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC) wglGetProcAddressFunc("wglGetFrameUsageI3D");
          m_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC) wglGetProcAddressFunc("wglBeginFrameTrackingI3D");
          m_wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC) wglGetProcAddressFunc("wglEndFrameTrackingI3D");
          m_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC) wglGetProcAddressFunc("wglQueryFrameTrackingI3D");
        }

        // WGL_NV_copy_image
        if (m_featureSupported[GLEW_WGL_NV_copy_image]) {
          m_wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC) wglGetProcAddressFunc("wglCopyImageSubDataNV");
        }

        // WGL_NV_delay_before_swap
        if (m_featureSupported[GLEW_WGL_NV_delay_before_swap]) {
          m_wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC) wglGetProcAddressFunc("wglDelayBeforeSwapNV");
        }

        // WGL_NV_DX_interop
        if (m_featureSupported[GLEW_WGL_NV_DX_interop]) {
          m_wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC) wglGetProcAddressFunc("wglDXSetResourceShareHandleNV");
          m_wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC) wglGetProcAddressFunc("wglDXOpenDeviceNV");
          m_wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC) wglGetProcAddressFunc("wglDXCloseDeviceNV");
          m_wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC) wglGetProcAddressFunc("wglDXRegisterObjectNV");
          m_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC) wglGetProcAddressFunc("wglDXUnregisterObjectNV");
          m_wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC) wglGetProcAddressFunc("wglDXObjectAccessNV");
          m_wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC) wglGetProcAddressFunc("wglDXLockObjectsNV");
          m_wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC) wglGetProcAddressFunc("wglDXUnlockObjectsNV");
        }

        // WGL_NV_gpu_affinity
        if (m_featureSupported[GLEW_WGL_NV_gpu_affinity]) {
          m_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC) wglGetProcAddressFunc("wglEnumGpusNV");
          m_wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC) wglGetProcAddressFunc("wglEnumGpuDevicesNV");
          m_wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC) wglGetProcAddressFunc("wglCreateAffinityDCNV");
          m_wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) wglGetProcAddressFunc("wglEnumGpusFromAffinityDCNV");
          m_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC) wglGetProcAddressFunc("wglDeleteDCNV");
        }

        // WGL_NV_present_video
        if (m_featureSupported[GLEW_WGL_NV_present_video]) {
          m_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC) wglGetProcAddressFunc("wglEnumerateVideoDevicesNV");
          m_wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC) wglGetProcAddressFunc("wglBindVideoDeviceNV");
          m_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC) wglGetProcAddressFunc("wglQueryCurrentContextNV");
        }

        // WGL_NV_swap_group
        if (m_featureSupported[GLEW_WGL_NV_swap_group]) {
          m_wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC) wglGetProcAddressFunc("wglJoinSwapGroupNV");
          m_wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC) wglGetProcAddressFunc("wglBindSwapBarrierNV");
          m_wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC) wglGetProcAddressFunc("wglQuerySwapGroupNV");
          m_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC) wglGetProcAddressFunc("wglQueryMaxSwapGroupsNV");
          m_wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC) wglGetProcAddressFunc("wglQueryFrameCountNV");
          m_wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC) wglGetProcAddressFunc("wglResetFrameCountNV");
        }

        // WGL_NV_video_capture
        if (m_featureSupported[GLEW_WGL_NV_video_capture]) {
          m_wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) wglGetProcAddressFunc("wglBindVideoCaptureDeviceNV");
          m_wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) wglGetProcAddressFunc("wglEnumerateVideoCaptureDevicesNV");
          m_wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) wglGetProcAddressFunc("wglLockVideoCaptureDeviceNV");
          m_wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) wglGetProcAddressFunc("wglQueryVideoCaptureDeviceNV");
          m_wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) wglGetProcAddressFunc("wglReleaseVideoCaptureDeviceNV");
        }

        // WGL_NV_video_output
        if (m_featureSupported[GLEW_WGL_NV_video_output]) {
          m_wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC) wglGetProcAddressFunc("wglGetVideoDeviceNV");
          m_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC) wglGetProcAddressFunc("wglReleaseVideoDeviceNV");
          m_wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC) wglGetProcAddressFunc("wglBindVideoImageNV");
          m_wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC) wglGetProcAddressFunc("wglReleaseVideoImageNV");
          m_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC) wglGetProcAddressFunc("wglSendPbufferToVideoNV");
          m_wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC) wglGetProcAddressFunc("wglGetVideoInfoNV");
        }

        // WGL_NV_vertex_array_range
        if (m_featureSupported[GLEW_WGL_NV_vertex_array_range]) {
          m_wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC) wglGetProcAddressFunc("wglAllocateMemoryNV");
          m_wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC) wglGetProcAddressFunc("wglFreeMemoryNV");
        }

        // WGL_OML_sync_control
        if (m_featureSupported[GLEW_WGL_OML_sync_control]) {
          m_wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC) wglGetProcAddressFunc("wglGetSyncValuesOML");
          m_wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC) wglGetProcAddressFunc("wglGetMscRateOML");
          m_wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC) wglGetProcAddressFunc("wglSwapBuffersMscOML");
          m_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) wglGetProcAddressFunc("wglSwapLayerBuffersMscOML");
          m_wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC) wglGetProcAddressFunc("wglWaitForMscOML");
          m_wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC) wglGetProcAddressFunc("wglWaitForSbcOML");
        }
      }

      bool IsSupported(GLEW_WGL_FeatureSet feature) const {
        return m_featureSupported[feature];
      }

      void SetSupported(GLEW_WGL_FeatureSet feature, bool supported) {
        m_featureSupported[feature] = supported;
      }

      bool m_featureSupported[GLEW_WGL_FeatureSetCount];

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

    static Context* s_wglContext = nullptr;

  }  // namespace wgl
}  // namespace glew

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSetStereoEmitterState3DL (HDC hDC, UINT uState);
GLEW_API UINT GLEW_APIENTRY _glew_wgl_wglGetGPUIDsAMD (UINT maxCount, UINT * ids);
GLEW_API INT GLEW_APIENTRY _glew_wgl_wglGetGPUInfoAMD (UINT id, INT property, GLenum dataType, UINT size, void * data);
GLEW_API UINT GLEW_APIENTRY _glew_wgl_wglGetContextGPUIDAMD (HGLRC hglrc);
GLEW_API HGLRC GLEW_APIENTRY _glew_wgl_wglCreateAssociatedContextAMD (UINT id);
GLEW_API HGLRC GLEW_APIENTRY _glew_wgl_wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC hShareContext, const int * attribList);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDeleteAssociatedContextAMD (HGLRC hglrc);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglMakeAssociatedContextCurrentAMD (HGLRC hglrc);
GLEW_API HGLRC GLEW_APIENTRY _glew_wgl_wglGetCurrentAssociatedContextAMD ();
GLEW_API VOID GLEW_APIENTRY _glew_wgl_wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_API HANDLE GLEW_APIENTRY _glew_wgl_wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT uType);
GLEW_API VOID GLEW_APIENTRY _glew_wgl_wglDeleteBufferRegionARB (HANDLE hRegion);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSaveBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglRestoreBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
GLEW_API HGLRC GLEW_APIENTRY _glew_wgl_wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const int * attribList);
GLEW_API const char * GLEW_APIENTRY _glew_wgl_wglGetExtensionsStringARB (HDC hdc);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
GLEW_API HDC GLEW_APIENTRY _glew_wgl_wglGetCurrentReadDCARB ();
GLEW_API HPBUFFERARB GLEW_APIENTRY _glew_wgl_wglCreatePbufferARB (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
GLEW_API HDC GLEW_APIENTRY _glew_wgl_wglGetPbufferDCARB (HPBUFFERARB hPbuffer);
GLEW_API int GLEW_APIENTRY _glew_wgl_wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDestroyPbufferARB (HPBUFFERARB hPbuffer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryPbufferARB (HPBUFFERARB hPbuffer, int iAttribute, int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetPixelFormatAttribivARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetPixelFormatAttribfvARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglChoosePixelFormatARB (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglBindTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int * piAttribList);
GLEW_API GLboolean GLEW_APIENTRY _glew_wgl_wglCreateDisplayColorTableEXT (GLushort id);
GLEW_API GLboolean GLEW_APIENTRY _glew_wgl_wglLoadDisplayColorTableEXT (const GLushort * table, GLuint length);
GLEW_API GLboolean GLEW_APIENTRY _glew_wgl_wglBindDisplayColorTableEXT (GLushort id);
GLEW_API VOID GLEW_APIENTRY _glew_wgl_wglDestroyDisplayColorTableEXT (GLushort id);
GLEW_API const char * GLEW_APIENTRY _glew_wgl_wglGetExtensionsStringEXT ();
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
GLEW_API HDC GLEW_APIENTRY _glew_wgl_wglGetCurrentReadDCEXT ();
GLEW_API HPBUFFEREXT GLEW_APIENTRY _glew_wgl_wglCreatePbufferEXT (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
GLEW_API HDC GLEW_APIENTRY _glew_wgl_wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer);
GLEW_API int GLEW_APIENTRY _glew_wgl_wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int iAttribute, int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetPixelFormatAttribivEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetPixelFormatAttribfvEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglChoosePixelFormatEXT (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSwapIntervalEXT (int interval);
GLEW_API int GLEW_APIENTRY _glew_wgl_wglGetSwapIntervalEXT ();
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetDigitalVideoParametersI3D (HDC hDC, int iAttribute, int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSetDigitalVideoParametersI3D (HDC hDC, int iAttribute, const int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetGammaTableParametersI3D (HDC hDC, int iAttribute, int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSetGammaTableParametersI3D (HDC hDC, int iAttribute, const int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetGammaTableI3D (HDC hDC, int iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSetGammaTableI3D (HDC hDC, int iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglEnableGenlockI3D (HDC hDC);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDisableGenlockI3D (HDC hDC);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglIsEnabledGenlockI3D (HDC hDC, BOOL * pFlag);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGenlockSourceI3D (HDC hDC, UINT uSource);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetGenlockSourceI3D (HDC hDC, UINT * uSource);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetGenlockSourceEdgeI3D (HDC hDC, UINT * uEdge);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGenlockSampleRateI3D (HDC hDC, UINT uRate);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetGenlockSampleRateI3D (HDC hDC, UINT * uRate);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetGenlockSourceDelayI3D (HDC hDC, UINT * uDelay);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay);
GLEW_API LPVOID GLEW_APIENTRY _glew_wgl_wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID * pAddress, UINT count);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglEnableFrameLockI3D ();
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDisableFrameLockI3D ();
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglIsEnabledFrameLockI3D (BOOL * pFlag);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryFrameLockMasterI3D (BOOL * pFlag);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetFrameUsageI3D (float * pUsage);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglBeginFrameTrackingI3D ();
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglEndFrameTrackingI3D ();
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryFrameTrackingI3D (DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDXSetResourceShareHandleNV (void * dxObject, HANDLE shareHandle);
GLEW_API HANDLE GLEW_APIENTRY _glew_wgl_wglDXOpenDeviceNV (void * dxDevice);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDXCloseDeviceNV (HANDLE hDevice);
GLEW_API HANDLE GLEW_APIENTRY _glew_wgl_wglDXRegisterObjectNV (HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDXObjectAccessNV (HANDLE hObject, GLenum access);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglEnumGpusNV (UINT iGpuIndex, HGPUNV * phGpu);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
GLEW_API HDC GLEW_APIENTRY _glew_wgl_wglCreateAffinityDCNV (const HGPUNV * phGpuList);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglDeleteDCNV (HDC hdc);
GLEW_API int GLEW_APIENTRY _glew_wgl_wglEnumerateVideoDevicesNV (HDC hDc, HVIDEOOUTPUTDEVICENV * phDeviceList);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglBindVideoDeviceNV (HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryCurrentContextNV (int iAttribute, int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglJoinSwapGroupNV (HDC hDC, GLuint group);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglBindSwapBarrierNV (GLuint group, GLuint barrier);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQuerySwapGroupNV (HDC hDC, GLuint * group, GLuint * barrier);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryMaxSwapGroupsNV (HDC hDC, GLuint * maxGroups, GLuint * maxBarriers);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryFrameCountNV (HDC hDC, GLuint * count);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglResetFrameCountNV (HDC hDC);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
GLEW_API UINT GLEW_APIENTRY _glew_wgl_wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int * piValue);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetVideoDeviceNV (HDC hDC, int numDevices, HPVIDEODEV * hVideoDevice);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int iVideoBuffer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
GLEW_API void * GLEW_APIENTRY _glew_wgl_wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
GLEW_API void GLEW_APIENTRY _glew_wgl_wglFreeMemoryNV (void * pointer);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetSyncValuesOML (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglGetMscRateOML (HDC hdc, INT32 * numerator, INT32 * denominator);
GLEW_API INT64 GLEW_APIENTRY _glew_wgl_wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
GLEW_API INT64 GLEW_APIENTRY _glew_wgl_wglSwapLayerBuffersMscOML (HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc);
GLEW_API BOOL GLEW_APIENTRY _glew_wgl_wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define wglSetStereoEmitterState3DL _glew_wgl_wglSetStereoEmitterState3DL
#define wglGetGPUIDsAMD _glew_wgl_wglGetGPUIDsAMD
#define wglGetGPUInfoAMD _glew_wgl_wglGetGPUInfoAMD
#define wglGetContextGPUIDAMD _glew_wgl_wglGetContextGPUIDAMD
#define wglCreateAssociatedContextAMD _glew_wgl_wglCreateAssociatedContextAMD
#define wglCreateAssociatedContextAttribsAMD _glew_wgl_wglCreateAssociatedContextAttribsAMD
#define wglDeleteAssociatedContextAMD _glew_wgl_wglDeleteAssociatedContextAMD
#define wglMakeAssociatedContextCurrentAMD _glew_wgl_wglMakeAssociatedContextCurrentAMD
#define wglGetCurrentAssociatedContextAMD _glew_wgl_wglGetCurrentAssociatedContextAMD
#define wglBlitContextFramebufferAMD _glew_wgl_wglBlitContextFramebufferAMD
#define wglCreateBufferRegionARB _glew_wgl_wglCreateBufferRegionARB
#define wglDeleteBufferRegionARB _glew_wgl_wglDeleteBufferRegionARB
#define wglSaveBufferRegionARB _glew_wgl_wglSaveBufferRegionARB
#define wglRestoreBufferRegionARB _glew_wgl_wglRestoreBufferRegionARB
#define wglCreateContextAttribsARB _glew_wgl_wglCreateContextAttribsARB
#define wglGetExtensionsStringARB _glew_wgl_wglGetExtensionsStringARB
#define wglMakeContextCurrentARB _glew_wgl_wglMakeContextCurrentARB
#define wglGetCurrentReadDCARB _glew_wgl_wglGetCurrentReadDCARB
#define wglCreatePbufferARB _glew_wgl_wglCreatePbufferARB
#define wglGetPbufferDCARB _glew_wgl_wglGetPbufferDCARB
#define wglReleasePbufferDCARB _glew_wgl_wglReleasePbufferDCARB
#define wglDestroyPbufferARB _glew_wgl_wglDestroyPbufferARB
#define wglQueryPbufferARB _glew_wgl_wglQueryPbufferARB
#define wglGetPixelFormatAttribivARB _glew_wgl_wglGetPixelFormatAttribivARB
#define wglGetPixelFormatAttribfvARB _glew_wgl_wglGetPixelFormatAttribfvARB
#define wglChoosePixelFormatARB _glew_wgl_wglChoosePixelFormatARB
#define wglBindTexImageARB _glew_wgl_wglBindTexImageARB
#define wglReleaseTexImageARB _glew_wgl_wglReleaseTexImageARB
#define wglSetPbufferAttribARB _glew_wgl_wglSetPbufferAttribARB
#define wglCreateDisplayColorTableEXT _glew_wgl_wglCreateDisplayColorTableEXT
#define wglLoadDisplayColorTableEXT _glew_wgl_wglLoadDisplayColorTableEXT
#define wglBindDisplayColorTableEXT _glew_wgl_wglBindDisplayColorTableEXT
#define wglDestroyDisplayColorTableEXT _glew_wgl_wglDestroyDisplayColorTableEXT
#define wglGetExtensionsStringEXT _glew_wgl_wglGetExtensionsStringEXT
#define wglMakeContextCurrentEXT _glew_wgl_wglMakeContextCurrentEXT
#define wglGetCurrentReadDCEXT _glew_wgl_wglGetCurrentReadDCEXT
#define wglCreatePbufferEXT _glew_wgl_wglCreatePbufferEXT
#define wglGetPbufferDCEXT _glew_wgl_wglGetPbufferDCEXT
#define wglReleasePbufferDCEXT _glew_wgl_wglReleasePbufferDCEXT
#define wglDestroyPbufferEXT _glew_wgl_wglDestroyPbufferEXT
#define wglQueryPbufferEXT _glew_wgl_wglQueryPbufferEXT
#define wglGetPixelFormatAttribivEXT _glew_wgl_wglGetPixelFormatAttribivEXT
#define wglGetPixelFormatAttribfvEXT _glew_wgl_wglGetPixelFormatAttribfvEXT
#define wglChoosePixelFormatEXT _glew_wgl_wglChoosePixelFormatEXT
#define wglSwapIntervalEXT _glew_wgl_wglSwapIntervalEXT
#define wglGetSwapIntervalEXT _glew_wgl_wglGetSwapIntervalEXT
#define wglGetDigitalVideoParametersI3D _glew_wgl_wglGetDigitalVideoParametersI3D
#define wglSetDigitalVideoParametersI3D _glew_wgl_wglSetDigitalVideoParametersI3D
#define wglGetGammaTableParametersI3D _glew_wgl_wglGetGammaTableParametersI3D
#define wglSetGammaTableParametersI3D _glew_wgl_wglSetGammaTableParametersI3D
#define wglGetGammaTableI3D _glew_wgl_wglGetGammaTableI3D
#define wglSetGammaTableI3D _glew_wgl_wglSetGammaTableI3D
#define wglEnableGenlockI3D _glew_wgl_wglEnableGenlockI3D
#define wglDisableGenlockI3D _glew_wgl_wglDisableGenlockI3D
#define wglIsEnabledGenlockI3D _glew_wgl_wglIsEnabledGenlockI3D
#define wglGenlockSourceI3D _glew_wgl_wglGenlockSourceI3D
#define wglGetGenlockSourceI3D _glew_wgl_wglGetGenlockSourceI3D
#define wglGenlockSourceEdgeI3D _glew_wgl_wglGenlockSourceEdgeI3D
#define wglGetGenlockSourceEdgeI3D _glew_wgl_wglGetGenlockSourceEdgeI3D
#define wglGenlockSampleRateI3D _glew_wgl_wglGenlockSampleRateI3D
#define wglGetGenlockSampleRateI3D _glew_wgl_wglGetGenlockSampleRateI3D
#define wglGenlockSourceDelayI3D _glew_wgl_wglGenlockSourceDelayI3D
#define wglGetGenlockSourceDelayI3D _glew_wgl_wglGetGenlockSourceDelayI3D
#define wglQueryGenlockMaxSourceDelayI3D _glew_wgl_wglQueryGenlockMaxSourceDelayI3D
#define wglCreateImageBufferI3D _glew_wgl_wglCreateImageBufferI3D
#define wglDestroyImageBufferI3D _glew_wgl_wglDestroyImageBufferI3D
#define wglAssociateImageBufferEventsI3D _glew_wgl_wglAssociateImageBufferEventsI3D
#define wglReleaseImageBufferEventsI3D _glew_wgl_wglReleaseImageBufferEventsI3D
#define wglEnableFrameLockI3D _glew_wgl_wglEnableFrameLockI3D
#define wglDisableFrameLockI3D _glew_wgl_wglDisableFrameLockI3D
#define wglIsEnabledFrameLockI3D _glew_wgl_wglIsEnabledFrameLockI3D
#define wglQueryFrameLockMasterI3D _glew_wgl_wglQueryFrameLockMasterI3D
#define wglGetFrameUsageI3D _glew_wgl_wglGetFrameUsageI3D
#define wglBeginFrameTrackingI3D _glew_wgl_wglBeginFrameTrackingI3D
#define wglEndFrameTrackingI3D _glew_wgl_wglEndFrameTrackingI3D
#define wglQueryFrameTrackingI3D _glew_wgl_wglQueryFrameTrackingI3D
#define wglCopyImageSubDataNV _glew_wgl_wglCopyImageSubDataNV
#define wglDelayBeforeSwapNV _glew_wgl_wglDelayBeforeSwapNV
#define wglDXSetResourceShareHandleNV _glew_wgl_wglDXSetResourceShareHandleNV
#define wglDXOpenDeviceNV _glew_wgl_wglDXOpenDeviceNV
#define wglDXCloseDeviceNV _glew_wgl_wglDXCloseDeviceNV
#define wglDXRegisterObjectNV _glew_wgl_wglDXRegisterObjectNV
#define wglDXUnregisterObjectNV _glew_wgl_wglDXUnregisterObjectNV
#define wglDXObjectAccessNV _glew_wgl_wglDXObjectAccessNV
#define wglDXLockObjectsNV _glew_wgl_wglDXLockObjectsNV
#define wglDXUnlockObjectsNV _glew_wgl_wglDXUnlockObjectsNV
#define wglEnumGpusNV _glew_wgl_wglEnumGpusNV
#define wglEnumGpuDevicesNV _glew_wgl_wglEnumGpuDevicesNV
#define wglCreateAffinityDCNV _glew_wgl_wglCreateAffinityDCNV
#define wglEnumGpusFromAffinityDCNV _glew_wgl_wglEnumGpusFromAffinityDCNV
#define wglDeleteDCNV _glew_wgl_wglDeleteDCNV
#define wglEnumerateVideoDevicesNV _glew_wgl_wglEnumerateVideoDevicesNV
#define wglBindVideoDeviceNV _glew_wgl_wglBindVideoDeviceNV
#define wglQueryCurrentContextNV _glew_wgl_wglQueryCurrentContextNV
#define wglJoinSwapGroupNV _glew_wgl_wglJoinSwapGroupNV
#define wglBindSwapBarrierNV _glew_wgl_wglBindSwapBarrierNV
#define wglQuerySwapGroupNV _glew_wgl_wglQuerySwapGroupNV
#define wglQueryMaxSwapGroupsNV _glew_wgl_wglQueryMaxSwapGroupsNV
#define wglQueryFrameCountNV _glew_wgl_wglQueryFrameCountNV
#define wglResetFrameCountNV _glew_wgl_wglResetFrameCountNV
#define wglBindVideoCaptureDeviceNV _glew_wgl_wglBindVideoCaptureDeviceNV
#define wglEnumerateVideoCaptureDevicesNV _glew_wgl_wglEnumerateVideoCaptureDevicesNV
#define wglLockVideoCaptureDeviceNV _glew_wgl_wglLockVideoCaptureDeviceNV
#define wglQueryVideoCaptureDeviceNV _glew_wgl_wglQueryVideoCaptureDeviceNV
#define wglReleaseVideoCaptureDeviceNV _glew_wgl_wglReleaseVideoCaptureDeviceNV
#define wglGetVideoDeviceNV _glew_wgl_wglGetVideoDeviceNV
#define wglReleaseVideoDeviceNV _glew_wgl_wglReleaseVideoDeviceNV
#define wglBindVideoImageNV _glew_wgl_wglBindVideoImageNV
#define wglReleaseVideoImageNV _glew_wgl_wglReleaseVideoImageNV
#define wglSendPbufferToVideoNV _glew_wgl_wglSendPbufferToVideoNV
#define wglGetVideoInfoNV _glew_wgl_wglGetVideoInfoNV
#define wglAllocateMemoryNV _glew_wgl_wglAllocateMemoryNV
#define wglFreeMemoryNV _glew_wgl_wglFreeMemoryNV
#define wglGetSyncValuesOML _glew_wgl_wglGetSyncValuesOML
#define wglGetMscRateOML _glew_wgl_wglGetMscRateOML
#define wglSwapBuffersMscOML _glew_wgl_wglSwapBuffersMscOML
#define wglSwapLayerBuffersMscOML _glew_wgl_wglSwapLayerBuffersMscOML
#define wglWaitForMscOML _glew_wgl_wglWaitForMscOML
#define wglWaitForSbcOML _glew_wgl_wglWaitForSbcOML

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
