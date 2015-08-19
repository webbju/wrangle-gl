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
typedef BOOL (WINAPI * PFNWGLSETSTEREOEMITTERSTATE3DLPROC) /* wglSetStereoEmitterState3DL */ (HDC hDC, UINT uState);
typedef UINT (WINAPI * PFNWGLGETGPUIDSAMDPROC) /* wglGetGPUIDsAMD */ (UINT maxCount, UINT * ids);
typedef INT (WINAPI * PFNWGLGETGPUINFOAMDPROC) /* wglGetGPUInfoAMD */ (UINT id, int property, GLenum dataType, UINT size, void * data);
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
typedef int (WINAPI * PFNWGLENUMERATEVIDEODEVICESNVPROC) /* wglEnumerateVideoDevicesNV */ (HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList);
typedef BOOL (WINAPI * PFNWGLBINDVIDEODEVICENVPROC) /* wglBindVideoDeviceNV */ (HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
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
typedef INT64 (WINAPI * PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) /* wglSwapLayerBuffersMscOML */ (HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef BOOL (WINAPI * PFNWGLWAITFORMSCOMLPROC) /* wglWaitForMscOML */ (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc);
typedef BOOL (WINAPI * PFNWGLWAITFORSBCOMLPROC) /* wglWaitForSbcOML */ (HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc);

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
      GLEW_WGL_VERSION_1_0,
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

    class DeviceConfig
    {
    public:

      bool m_featureSupported [glew::wgl::FeatureSet::GLEW_WGL_FeatureSetCount];

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

    static void Initialise ();

    static void Deinitialise ();

    static void SetConfig (glew::wgl::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::wgl::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static glew::wgl::DeviceConfig s_deviceConfig;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static BOOL wglSetStereoEmitterState3DL (HDC hDC, UINT uState);
    static UINT wglGetGPUIDsAMD (UINT maxCount, UINT * ids);
    static INT wglGetGPUInfoAMD (UINT id, int property, GLenum dataType, UINT size, void * data);
    static UINT wglGetContextGPUIDAMD (HGLRC hglrc);
    static HGLRC wglCreateAssociatedContextAMD (UINT id);
    static HGLRC wglCreateAssociatedContextAttribsAMD (UINT id, HGLRC hShareContext, const int * attribList);
    static BOOL wglDeleteAssociatedContextAMD (HGLRC hglrc);
    static BOOL wglMakeAssociatedContextCurrentAMD (HGLRC hglrc);
    static HGLRC wglGetCurrentAssociatedContextAMD ();
    static VOID wglBlitContextFramebufferAMD (HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static HANDLE wglCreateBufferRegionARB (HDC hDC, int iLayerPlane, UINT uType);
    static VOID wglDeleteBufferRegionARB (HANDLE hRegion);
    static BOOL wglSaveBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height);
    static BOOL wglRestoreBufferRegionARB (HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
    static HGLRC wglCreateContextAttribsARB (HDC hDC, HGLRC hShareContext, const int * attribList);
    static const char * wglGetExtensionsStringARB (HDC hdc);
    static BOOL wglMakeContextCurrentARB (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
    static HDC wglGetCurrentReadDCARB ();
    static HPBUFFERARB wglCreatePbufferARB (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
    static HDC wglGetPbufferDCARB (HPBUFFERARB hPbuffer);
    static int wglReleasePbufferDCARB (HPBUFFERARB hPbuffer, HDC hDC);
    static BOOL wglDestroyPbufferARB (HPBUFFERARB hPbuffer);
    static BOOL wglQueryPbufferARB (HPBUFFERARB hPbuffer, int iAttribute, int * piValue);
    static BOOL wglGetPixelFormatAttribivARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, int * piValues);
    static BOOL wglGetPixelFormatAttribfvARB (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int * piAttributes, FLOAT * pfValues);
    static BOOL wglChoosePixelFormatARB (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
    static BOOL wglBindTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
    static BOOL wglReleaseTexImageARB (HPBUFFERARB hPbuffer, int iBuffer);
    static BOOL wglSetPbufferAttribARB (HPBUFFERARB hPbuffer, const int * piAttribList);
    static GLboolean wglCreateDisplayColorTableEXT (GLushort id);
    static GLboolean wglLoadDisplayColorTableEXT (const GLushort * table, GLuint length);
    static GLboolean wglBindDisplayColorTableEXT (GLushort id);
    static VOID wglDestroyDisplayColorTableEXT (GLushort id);
    static const char * wglGetExtensionsStringEXT ();
    static BOOL wglMakeContextCurrentEXT (HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
    static HDC wglGetCurrentReadDCEXT ();
    static HPBUFFEREXT wglCreatePbufferEXT (HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int * piAttribList);
    static HDC wglGetPbufferDCEXT (HPBUFFEREXT hPbuffer);
    static int wglReleasePbufferDCEXT (HPBUFFEREXT hPbuffer, HDC hDC);
    static BOOL wglDestroyPbufferEXT (HPBUFFEREXT hPbuffer);
    static BOOL wglQueryPbufferEXT (HPBUFFEREXT hPbuffer, int iAttribute, int * piValue);
    static BOOL wglGetPixelFormatAttribivEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, int * piValues);
    static BOOL wglGetPixelFormatAttribfvEXT (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int * piAttributes, FLOAT * pfValues);
    static BOOL wglChoosePixelFormatEXT (HDC hdc, const int * piAttribIList, const FLOAT * pfAttribFList, UINT nMaxFormats, int * piFormats, UINT * nNumFormats);
    static BOOL wglSwapIntervalEXT (int interval);
    static int wglGetSwapIntervalEXT ();
    static BOOL wglGetDigitalVideoParametersI3D (HDC hDC, int iAttribute, int * piValue);
    static BOOL wglSetDigitalVideoParametersI3D (HDC hDC, int iAttribute, const int * piValue);
    static BOOL wglGetGammaTableParametersI3D (HDC hDC, int iAttribute, int * piValue);
    static BOOL wglSetGammaTableParametersI3D (HDC hDC, int iAttribute, const int * piValue);
    static BOOL wglGetGammaTableI3D (HDC hDC, int iEntries, USHORT * puRed, USHORT * puGreen, USHORT * puBlue);
    static BOOL wglSetGammaTableI3D (HDC hDC, int iEntries, const USHORT * puRed, const USHORT * puGreen, const USHORT * puBlue);
    static BOOL wglEnableGenlockI3D (HDC hDC);
    static BOOL wglDisableGenlockI3D (HDC hDC);
    static BOOL wglIsEnabledGenlockI3D (HDC hDC, BOOL * pFlag);
    static BOOL wglGenlockSourceI3D (HDC hDC, UINT uSource);
    static BOOL wglGetGenlockSourceI3D (HDC hDC, UINT * uSource);
    static BOOL wglGenlockSourceEdgeI3D (HDC hDC, UINT uEdge);
    static BOOL wglGetGenlockSourceEdgeI3D (HDC hDC, UINT * uEdge);
    static BOOL wglGenlockSampleRateI3D (HDC hDC, UINT uRate);
    static BOOL wglGetGenlockSampleRateI3D (HDC hDC, UINT * uRate);
    static BOOL wglGenlockSourceDelayI3D (HDC hDC, UINT uDelay);
    static BOOL wglGetGenlockSourceDelayI3D (HDC hDC, UINT * uDelay);
    static BOOL wglQueryGenlockMaxSourceDelayI3D (HDC hDC, UINT * uMaxLineDelay, UINT * uMaxPixelDelay);
    static LPVOID wglCreateImageBufferI3D (HDC hDC, DWORD dwSize, UINT uFlags);
    static BOOL wglDestroyImageBufferI3D (HDC hDC, LPVOID pAddress);
    static BOOL wglAssociateImageBufferEventsI3D (HDC hDC, const HANDLE * pEvent, const LPVOID * pAddress, const DWORD * pSize, UINT count);
    static BOOL wglReleaseImageBufferEventsI3D (HDC hDC, const LPVOID * pAddress, UINT count);
    static BOOL wglEnableFrameLockI3D ();
    static BOOL wglDisableFrameLockI3D ();
    static BOOL wglIsEnabledFrameLockI3D (BOOL * pFlag);
    static BOOL wglQueryFrameLockMasterI3D (BOOL * pFlag);
    static BOOL wglGetFrameUsageI3D (float * pUsage);
    static BOOL wglBeginFrameTrackingI3D ();
    static BOOL wglEndFrameTrackingI3D ();
    static BOOL wglQueryFrameTrackingI3D (DWORD * pFrameCount, DWORD * pMissedFrames, float * pLastMissedUsage);
    static BOOL wglCopyImageSubDataNV (HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
    static BOOL wglDelayBeforeSwapNV (HDC hDC, GLfloat seconds);
    static BOOL wglDXSetResourceShareHandleNV (void * dxObject, HANDLE shareHandle);
    static HANDLE wglDXOpenDeviceNV (void * dxDevice);
    static BOOL wglDXCloseDeviceNV (HANDLE hDevice);
    static HANDLE wglDXRegisterObjectNV (HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
    static BOOL wglDXUnregisterObjectNV (HANDLE hDevice, HANDLE hObject);
    static BOOL wglDXObjectAccessNV (HANDLE hObject, GLenum access);
    static BOOL wglDXLockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
    static BOOL wglDXUnlockObjectsNV (HANDLE hDevice, GLint count, HANDLE * hObjects);
    static BOOL wglEnumGpusNV (UINT iGpuIndex, HGPUNV * phGpu);
    static BOOL wglEnumGpuDevicesNV (HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
    static HDC wglCreateAffinityDCNV (const HGPUNV * phGpuList);
    static BOOL wglEnumGpusFromAffinityDCNV (HDC hAffinityDC, UINT iGpuIndex, HGPUNV * hGpu);
    static BOOL wglDeleteDCNV (HDC hdc);
    static int wglEnumerateVideoDevicesNV (HDC hDC, HVIDEOOUTPUTDEVICENV * phDeviceList);
    static BOOL wglBindVideoDeviceNV (HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int * piAttribList);
    static BOOL wglQueryCurrentContextNV (int iAttribute, int * piValue);
    static BOOL wglJoinSwapGroupNV (HDC hDC, GLuint group);
    static BOOL wglBindSwapBarrierNV (GLuint group, GLuint barrier);
    static BOOL wglQuerySwapGroupNV (HDC hDC, GLuint * group, GLuint * barrier);
    static BOOL wglQueryMaxSwapGroupsNV (HDC hDC, GLuint * maxGroups, GLuint * maxBarriers);
    static BOOL wglQueryFrameCountNV (HDC hDC, GLuint * count);
    static BOOL wglResetFrameCountNV (HDC hDC);
    static BOOL wglBindVideoCaptureDeviceNV (UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
    static UINT wglEnumerateVideoCaptureDevicesNV (HDC hDc, HVIDEOINPUTDEVICENV * phDeviceList);
    static BOOL wglLockVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
    static BOOL wglQueryVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int * piValue);
    static BOOL wglReleaseVideoCaptureDeviceNV (HDC hDc, HVIDEOINPUTDEVICENV hDevice);
    static BOOL wglGetVideoDeviceNV (HDC hDC, int numDevices, HPVIDEODEV * hVideoDevice);
    static BOOL wglReleaseVideoDeviceNV (HPVIDEODEV hVideoDevice);
    static BOOL wglBindVideoImageNV (HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
    static BOOL wglReleaseVideoImageNV (HPBUFFERARB hPbuffer, int iVideoBuffer);
    static BOOL wglSendPbufferToVideoNV (HPBUFFERARB hPbuffer, int iBufferType, unsigned long * pulCounterPbuffer, BOOL bBlock);
    static BOOL wglGetVideoInfoNV (HPVIDEODEV hpVideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
    static void * wglAllocateMemoryNV (GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
    static void wglFreeMemoryNV (void * pointer);
    static BOOL wglGetSyncValuesOML (HDC hdc, INT64 * ust, INT64 * msc, INT64 * sbc);
    static BOOL wglGetMscRateOML (HDC hdc, INT32 * numerator, INT32 * denominator);
    static INT64 wglSwapBuffersMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
    static INT64 wglSwapLayerBuffersMscOML (HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
    static BOOL wglWaitForMscOML (HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64 * ust, INT64 * msc, INT64 * sbc);
    static BOOL wglWaitForSbcOML (HDC hdc, INT64 target_sbc, INT64 * ust, INT64 * msc, INT64 * sbc);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define wglSetStereoEmitterState3DL glew::wgl::wglSetStereoEmitterState3DL
#define wglGetGPUIDsAMD glew::wgl::wglGetGPUIDsAMD
#define wglGetGPUInfoAMD glew::wgl::wglGetGPUInfoAMD
#define wglGetContextGPUIDAMD glew::wgl::wglGetContextGPUIDAMD
#define wglCreateAssociatedContextAMD glew::wgl::wglCreateAssociatedContextAMD
#define wglCreateAssociatedContextAttribsAMD glew::wgl::wglCreateAssociatedContextAttribsAMD
#define wglDeleteAssociatedContextAMD glew::wgl::wglDeleteAssociatedContextAMD
#define wglMakeAssociatedContextCurrentAMD glew::wgl::wglMakeAssociatedContextCurrentAMD
#define wglGetCurrentAssociatedContextAMD glew::wgl::wglGetCurrentAssociatedContextAMD
#define wglBlitContextFramebufferAMD glew::wgl::wglBlitContextFramebufferAMD
#define wglCreateBufferRegionARB glew::wgl::wglCreateBufferRegionARB
#define wglDeleteBufferRegionARB glew::wgl::wglDeleteBufferRegionARB
#define wglSaveBufferRegionARB glew::wgl::wglSaveBufferRegionARB
#define wglRestoreBufferRegionARB glew::wgl::wglRestoreBufferRegionARB
#define wglCreateContextAttribsARB glew::wgl::wglCreateContextAttribsARB
#define wglGetExtensionsStringARB glew::wgl::wglGetExtensionsStringARB
#define wglMakeContextCurrentARB glew::wgl::wglMakeContextCurrentARB
#define wglGetCurrentReadDCARB glew::wgl::wglGetCurrentReadDCARB
#define wglCreatePbufferARB glew::wgl::wglCreatePbufferARB
#define wglGetPbufferDCARB glew::wgl::wglGetPbufferDCARB
#define wglReleasePbufferDCARB glew::wgl::wglReleasePbufferDCARB
#define wglDestroyPbufferARB glew::wgl::wglDestroyPbufferARB
#define wglQueryPbufferARB glew::wgl::wglQueryPbufferARB
#define wglGetPixelFormatAttribivARB glew::wgl::wglGetPixelFormatAttribivARB
#define wglGetPixelFormatAttribfvARB glew::wgl::wglGetPixelFormatAttribfvARB
#define wglChoosePixelFormatARB glew::wgl::wglChoosePixelFormatARB
#define wglBindTexImageARB glew::wgl::wglBindTexImageARB
#define wglReleaseTexImageARB glew::wgl::wglReleaseTexImageARB
#define wglSetPbufferAttribARB glew::wgl::wglSetPbufferAttribARB
#define wglCreateDisplayColorTableEXT glew::wgl::wglCreateDisplayColorTableEXT
#define wglLoadDisplayColorTableEXT glew::wgl::wglLoadDisplayColorTableEXT
#define wglBindDisplayColorTableEXT glew::wgl::wglBindDisplayColorTableEXT
#define wglDestroyDisplayColorTableEXT glew::wgl::wglDestroyDisplayColorTableEXT
#define wglGetExtensionsStringEXT glew::wgl::wglGetExtensionsStringEXT
#define wglMakeContextCurrentEXT glew::wgl::wglMakeContextCurrentEXT
#define wglGetCurrentReadDCEXT glew::wgl::wglGetCurrentReadDCEXT
#define wglCreatePbufferEXT glew::wgl::wglCreatePbufferEXT
#define wglGetPbufferDCEXT glew::wgl::wglGetPbufferDCEXT
#define wglReleasePbufferDCEXT glew::wgl::wglReleasePbufferDCEXT
#define wglDestroyPbufferEXT glew::wgl::wglDestroyPbufferEXT
#define wglQueryPbufferEXT glew::wgl::wglQueryPbufferEXT
#define wglGetPixelFormatAttribivEXT glew::wgl::wglGetPixelFormatAttribivEXT
#define wglGetPixelFormatAttribfvEXT glew::wgl::wglGetPixelFormatAttribfvEXT
#define wglChoosePixelFormatEXT glew::wgl::wglChoosePixelFormatEXT
#define wglSwapIntervalEXT glew::wgl::wglSwapIntervalEXT
#define wglGetSwapIntervalEXT glew::wgl::wglGetSwapIntervalEXT
#define wglGetDigitalVideoParametersI3D glew::wgl::wglGetDigitalVideoParametersI3D
#define wglSetDigitalVideoParametersI3D glew::wgl::wglSetDigitalVideoParametersI3D
#define wglGetGammaTableParametersI3D glew::wgl::wglGetGammaTableParametersI3D
#define wglSetGammaTableParametersI3D glew::wgl::wglSetGammaTableParametersI3D
#define wglGetGammaTableI3D glew::wgl::wglGetGammaTableI3D
#define wglSetGammaTableI3D glew::wgl::wglSetGammaTableI3D
#define wglEnableGenlockI3D glew::wgl::wglEnableGenlockI3D
#define wglDisableGenlockI3D glew::wgl::wglDisableGenlockI3D
#define wglIsEnabledGenlockI3D glew::wgl::wglIsEnabledGenlockI3D
#define wglGenlockSourceI3D glew::wgl::wglGenlockSourceI3D
#define wglGetGenlockSourceI3D glew::wgl::wglGetGenlockSourceI3D
#define wglGenlockSourceEdgeI3D glew::wgl::wglGenlockSourceEdgeI3D
#define wglGetGenlockSourceEdgeI3D glew::wgl::wglGetGenlockSourceEdgeI3D
#define wglGenlockSampleRateI3D glew::wgl::wglGenlockSampleRateI3D
#define wglGetGenlockSampleRateI3D glew::wgl::wglGetGenlockSampleRateI3D
#define wglGenlockSourceDelayI3D glew::wgl::wglGenlockSourceDelayI3D
#define wglGetGenlockSourceDelayI3D glew::wgl::wglGetGenlockSourceDelayI3D
#define wglQueryGenlockMaxSourceDelayI3D glew::wgl::wglQueryGenlockMaxSourceDelayI3D
#define wglCreateImageBufferI3D glew::wgl::wglCreateImageBufferI3D
#define wglDestroyImageBufferI3D glew::wgl::wglDestroyImageBufferI3D
#define wglAssociateImageBufferEventsI3D glew::wgl::wglAssociateImageBufferEventsI3D
#define wglReleaseImageBufferEventsI3D glew::wgl::wglReleaseImageBufferEventsI3D
#define wglEnableFrameLockI3D glew::wgl::wglEnableFrameLockI3D
#define wglDisableFrameLockI3D glew::wgl::wglDisableFrameLockI3D
#define wglIsEnabledFrameLockI3D glew::wgl::wglIsEnabledFrameLockI3D
#define wglQueryFrameLockMasterI3D glew::wgl::wglQueryFrameLockMasterI3D
#define wglGetFrameUsageI3D glew::wgl::wglGetFrameUsageI3D
#define wglBeginFrameTrackingI3D glew::wgl::wglBeginFrameTrackingI3D
#define wglEndFrameTrackingI3D glew::wgl::wglEndFrameTrackingI3D
#define wglQueryFrameTrackingI3D glew::wgl::wglQueryFrameTrackingI3D
#define wglCopyImageSubDataNV glew::wgl::wglCopyImageSubDataNV
#define wglDelayBeforeSwapNV glew::wgl::wglDelayBeforeSwapNV
#define wglDXSetResourceShareHandleNV glew::wgl::wglDXSetResourceShareHandleNV
#define wglDXOpenDeviceNV glew::wgl::wglDXOpenDeviceNV
#define wglDXCloseDeviceNV glew::wgl::wglDXCloseDeviceNV
#define wglDXRegisterObjectNV glew::wgl::wglDXRegisterObjectNV
#define wglDXUnregisterObjectNV glew::wgl::wglDXUnregisterObjectNV
#define wglDXObjectAccessNV glew::wgl::wglDXObjectAccessNV
#define wglDXLockObjectsNV glew::wgl::wglDXLockObjectsNV
#define wglDXUnlockObjectsNV glew::wgl::wglDXUnlockObjectsNV
#define wglEnumGpusNV glew::wgl::wglEnumGpusNV
#define wglEnumGpuDevicesNV glew::wgl::wglEnumGpuDevicesNV
#define wglCreateAffinityDCNV glew::wgl::wglCreateAffinityDCNV
#define wglEnumGpusFromAffinityDCNV glew::wgl::wglEnumGpusFromAffinityDCNV
#define wglDeleteDCNV glew::wgl::wglDeleteDCNV
#define wglEnumerateVideoDevicesNV glew::wgl::wglEnumerateVideoDevicesNV
#define wglBindVideoDeviceNV glew::wgl::wglBindVideoDeviceNV
#define wglQueryCurrentContextNV glew::wgl::wglQueryCurrentContextNV
#define wglJoinSwapGroupNV glew::wgl::wglJoinSwapGroupNV
#define wglBindSwapBarrierNV glew::wgl::wglBindSwapBarrierNV
#define wglQuerySwapGroupNV glew::wgl::wglQuerySwapGroupNV
#define wglQueryMaxSwapGroupsNV glew::wgl::wglQueryMaxSwapGroupsNV
#define wglQueryFrameCountNV glew::wgl::wglQueryFrameCountNV
#define wglResetFrameCountNV glew::wgl::wglResetFrameCountNV
#define wglBindVideoCaptureDeviceNV glew::wgl::wglBindVideoCaptureDeviceNV
#define wglEnumerateVideoCaptureDevicesNV glew::wgl::wglEnumerateVideoCaptureDevicesNV
#define wglLockVideoCaptureDeviceNV glew::wgl::wglLockVideoCaptureDeviceNV
#define wglQueryVideoCaptureDeviceNV glew::wgl::wglQueryVideoCaptureDeviceNV
#define wglReleaseVideoCaptureDeviceNV glew::wgl::wglReleaseVideoCaptureDeviceNV
#define wglGetVideoDeviceNV glew::wgl::wglGetVideoDeviceNV
#define wglReleaseVideoDeviceNV glew::wgl::wglReleaseVideoDeviceNV
#define wglBindVideoImageNV glew::wgl::wglBindVideoImageNV
#define wglReleaseVideoImageNV glew::wgl::wglReleaseVideoImageNV
#define wglSendPbufferToVideoNV glew::wgl::wglSendPbufferToVideoNV
#define wglGetVideoInfoNV glew::wgl::wglGetVideoInfoNV
#define wglAllocateMemoryNV glew::wgl::wglAllocateMemoryNV
#define wglFreeMemoryNV glew::wgl::wglFreeMemoryNV
#define wglGetSyncValuesOML glew::wgl::wglGetSyncValuesOML
#define wglGetMscRateOML glew::wgl::wglGetMscRateOML
#define wglSwapBuffersMscOML glew::wgl::wglSwapBuffersMscOML
#define wglSwapLayerBuffersMscOML glew::wgl::wglSwapLayerBuffersMscOML
#define wglWaitForMscOML glew::wgl::wglWaitForMscOML
#define wglWaitForSbcOML glew::wgl::wglWaitForSbcOML

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_WGL_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
