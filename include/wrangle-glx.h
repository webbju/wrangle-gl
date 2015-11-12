////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLX_H__
#define __GLEW_GLX_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <wrangle.h>

#include <GL/glx.h>

#include <GL/glxext.h>

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

enum GLEW_GLX_FeatureSet
{
  GLEW_GLX_VERSION_1_0,
  GLEW_GLX_VERSION_1_1,
  GLEW_GLX_VERSION_1_2,
  GLEW_GLX_VERSION_1_3,
  GLEW_GLX_VERSION_1_4,
  GLEW_GLX_3DFX_multisample,
  GLEW_GLX_AMD_gpu_association,
  GLEW_GLX_ARB_context_flush_control,
  GLEW_GLX_ARB_create_context,
  GLEW_GLX_ARB_create_context_profile,
  GLEW_GLX_ARB_create_context_robustness,
  GLEW_GLX_ARB_fbconfig_float,
  GLEW_GLX_ARB_framebuffer_sRGB,
  GLEW_GLX_ARB_get_proc_address,
  GLEW_GLX_ARB_multisample,
  GLEW_GLX_ARB_robustness_application_isolation,
  GLEW_GLX_ARB_robustness_share_group_isolation,
  GLEW_GLX_ARB_vertex_buffer_object,
  GLEW_GLX_EXT_buffer_age,
  GLEW_GLX_EXT_create_context_es_profile,
  GLEW_GLX_EXT_create_context_es2_profile,
  GLEW_GLX_EXT_fbconfig_packed_float,
  GLEW_GLX_EXT_framebuffer_sRGB,
  GLEW_GLX_EXT_import_context,
  GLEW_GLX_EXT_stereo_tree,
  GLEW_GLX_EXT_swap_control,
  GLEW_GLX_EXT_swap_control_tear,
  GLEW_GLX_EXT_texture_from_pixmap,
  GLEW_GLX_EXT_visual_info,
  GLEW_GLX_EXT_visual_rating,
  GLEW_GLX_INTEL_swap_event,
  GLEW_GLX_MESA_agp_offset,
  GLEW_GLX_MESA_copy_sub_buffer,
  GLEW_GLX_MESA_pixmap_colormap,
  GLEW_GLX_MESA_query_renderer,
  GLEW_GLX_MESA_release_buffers,
  GLEW_GLX_MESA_set_3dfx_mode,
  GLEW_GLX_NV_copy_buffer,
  GLEW_GLX_NV_copy_image,
  GLEW_GLX_NV_delay_before_swap,
  GLEW_GLX_NV_float_buffer,
  GLEW_GLX_NV_multisample_coverage,
  GLEW_GLX_NV_present_video,
  GLEW_GLX_NV_swap_group,
  GLEW_GLX_NV_video_capture,
  GLEW_GLX_NV_video_out,
  GLEW_GLX_OML_swap_method,
  GLEW_GLX_OML_sync_control,
  GLEW_GLX_SGI_cushion,
  GLEW_GLX_SGI_make_current_read,
  GLEW_GLX_SGI_swap_control,
  GLEW_GLX_SGI_video_sync,
  GLEW_GLX_SGIS_blended_overlay,
  GLEW_GLX_SGIS_multisample,
  GLEW_GLX_SGIS_shared_multisample,
  GLEW_GLX_SGIX_dmbuffer,
  GLEW_GLX_SGIX_fbconfig,
  GLEW_GLX_SGIX_hyperpipe,
  GLEW_GLX_SGIX_pbuffer,
  GLEW_GLX_SGIX_swap_barrier,
  GLEW_GLX_SGIX_swap_group,
  GLEW_GLX_SGIX_video_resize,
  GLEW_GLX_SGIX_video_source,
  GLEW_GLX_SGIX_visual_select_group,
  GLEW_GLX_SUN_get_transparent_index,
  GLEW_GLX_FeatureSetCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_EXTERN_C XVisualInfo * glXChooseVisual (Display * dpy, int screen, int * attribList);
GLEW_EXTERN_C GLXContext glXCreateContext (Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
GLEW_EXTERN_C void glXDestroyContext (Display * dpy, GLXContext ctx);
GLEW_EXTERN_C Bool glXMakeCurrent (Display * dpy, GLXDrawable drawable, GLXContext ctx);
GLEW_EXTERN_C void glXCopyContext (Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
GLEW_EXTERN_C void glXSwapBuffers (Display * dpy, GLXDrawable drawable);
GLEW_EXTERN_C GLXPixmap glXCreateGLXPixmap (Display * dpy, XVisualInfo * visual, Pixmap pixmap);
GLEW_EXTERN_C void glXDestroyGLXPixmap (Display * dpy, GLXPixmap pixmap);
GLEW_EXTERN_C Bool glXQueryExtension (Display * dpy, int * errorb, int * event);
GLEW_EXTERN_C Bool glXQueryVersion (Display * dpy, int * maj, int * min);
GLEW_EXTERN_C Bool glXIsDirect (Display * dpy, GLXContext ctx);
GLEW_EXTERN_C int glXGetConfig (Display * dpy, XVisualInfo * visual, int attrib, int * value);
GLEW_EXTERN_C GLXContext glXGetCurrentContext ();
GLEW_EXTERN_C GLXDrawable glXGetCurrentDrawable ();
GLEW_EXTERN_C void glXWaitGL ();
GLEW_EXTERN_C void glXWaitX ();
GLEW_EXTERN_C void glXUseXFont (Font font, int first, int count, int list);
typedef const char * ( PFNGLXQUERYEXTENSIONSSTRINGPROC) /* glXQueryExtensionsString */ (Display * dpy, int screen);
typedef const char * ( PFNGLXQUERYSERVERSTRINGPROC) /* glXQueryServerString */ (Display * dpy, int screen, int name);
typedef const char * ( PFNGLXGETCLIENTSTRINGPROC) /* glXGetClientString */ (Display * dpy, int name);
typedef Display * ( PFNGLXGETCURRENTDISPLAYPROC) /* glXGetCurrentDisplay */ ();
typedef GLXFBConfig * ( PFNGLXGETFBCONFIGSPROC) /* glXGetFBConfigs */ (Display * dpy, int screen, int * nelements);
typedef GLXFBConfig * ( PFNGLXCHOOSEFBCONFIGPROC) /* glXChooseFBConfig */ (Display * dpy, int screen, const int * attrib_list, int * nelements);
typedef int ( PFNGLXGETFBCONFIGATTRIBPROC) /* glXGetFBConfigAttrib */ (Display * dpy, GLXFBConfig config, int attribute, int * value);
typedef XVisualInfo * ( PFNGLXGETVISUALFROMFBCONFIGPROC) /* glXGetVisualFromFBConfig */ (Display * dpy, GLXFBConfig config);
typedef GLXWindow ( PFNGLXCREATEWINDOWPROC) /* glXCreateWindow */ (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
typedef void ( PFNGLXDESTROYWINDOWPROC) /* glXDestroyWindow */ (Display * dpy, GLXWindow win);
typedef GLXPixmap ( PFNGLXCREATEPIXMAPPROC) /* glXCreatePixmap */ (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
typedef void ( PFNGLXDESTROYPIXMAPPROC) /* glXDestroyPixmap */ (Display * dpy, GLXPixmap pixmap);
typedef GLXPbuffer ( PFNGLXCREATEPBUFFERPROC) /* glXCreatePbuffer */ (Display * dpy, GLXFBConfig config, const int * attrib_list);
typedef void ( PFNGLXDESTROYPBUFFERPROC) /* glXDestroyPbuffer */ (Display * dpy, GLXPbuffer pbuf);
typedef void ( PFNGLXQUERYDRAWABLEPROC) /* glXQueryDrawable */ (Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
typedef GLXContext ( PFNGLXCREATENEWCONTEXTPROC) /* glXCreateNewContext */ (Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef Bool ( PFNGLXMAKECONTEXTCURRENTPROC) /* glXMakeContextCurrent */ (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable ( PFNGLXGETCURRENTREADDRAWABLEPROC) /* glXGetCurrentReadDrawable */ ();
typedef int ( PFNGLXQUERYCONTEXTPROC) /* glXQueryContext */ (Display * dpy, GLXContext ctx, int attribute, int * value);
typedef void ( PFNGLXSELECTEVENTPROC) /* glXSelectEvent */ (Display * dpy, GLXDrawable draw, unsigned long event_mask);
typedef void ( PFNGLXGETSELECTEDEVENTPROC) /* glXGetSelectedEvent */ (Display * dpy, GLXDrawable draw, unsigned long * event_mask);
typedef __GLXextFuncPtr ( PFNGLXGETPROCADDRESSPROC) /* glXGetProcAddress */ (const GLubyte * procName);
typedef unsigned int ( PFNGLXGETGPUIDSAMDPROC) /* glXGetGPUIDsAMD */ (unsigned int maxCount, unsigned int * ids);
typedef int ( PFNGLXGETGPUINFOAMDPROC) /* glXGetGPUInfoAMD */ (unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
typedef unsigned int ( PFNGLXGETCONTEXTGPUIDAMDPROC) /* glXGetContextGPUIDAMD */ (GLXContext ctx);
typedef GLXContext ( PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) /* glXCreateAssociatedContextAMD */ (unsigned int id, GLXContext share_list);
typedef GLXContext ( PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) /* glXCreateAssociatedContextAttribsAMD */ (unsigned int id, GLXContext share_context, const int * attribList);
typedef Bool ( PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) /* glXDeleteAssociatedContextAMD */ (GLXContext ctx);
typedef Bool ( PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) /* glXMakeAssociatedContextCurrentAMD */ (GLXContext ctx);
typedef GLXContext ( PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) /* glXGetCurrentAssociatedContextAMD */ ();
typedef void ( PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) /* glXBlitContextFramebufferAMD */ (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLXContext ( PFNGLXCREATECONTEXTATTRIBSARBPROC) /* glXCreateContextAttribsARB */ (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
typedef __GLXextFuncPtr ( PFNGLXGETPROCADDRESSARBPROC) /* glXGetProcAddressARB */ (const GLubyte * procName);
typedef Display * ( PFNGLXGETCURRENTDISPLAYEXTPROC) /* glXGetCurrentDisplayEXT */ ();
typedef int ( PFNGLXQUERYCONTEXTINFOEXTPROC) /* glXQueryContextInfoEXT */ (Display * dpy, GLXContext context, int attribute, int * value);
typedef GLXContextID ( PFNGLXGETCONTEXTIDEXTPROC) /* glXGetContextIDEXT */ (const GLXContext context);
typedef GLXContext ( PFNGLXIMPORTCONTEXTEXTPROC) /* glXImportContextEXT */ (Display * dpy, GLXContextID contextID);
typedef void ( PFNGLXFREECONTEXTEXTPROC) /* glXFreeContextEXT */ (Display * dpy, GLXContext context);
typedef void ( PFNGLXSWAPINTERVALEXTPROC) /* glXSwapIntervalEXT */ (Display * dpy, GLXDrawable drawable, int interval);
typedef void ( PFNGLXBINDTEXIMAGEEXTPROC) /* glXBindTexImageEXT */ (Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
typedef void ( PFNGLXRELEASETEXIMAGEEXTPROC) /* glXReleaseTexImageEXT */ (Display * dpy, GLXDrawable drawable, int buffer);
typedef unsigned int ( PFNGLXGETAGPOFFSETMESAPROC) /* glXGetAGPOffsetMESA */ (const void * pointer);
typedef void ( PFNGLXCOPYSUBBUFFERMESAPROC) /* glXCopySubBufferMESA */ (Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
typedef GLXPixmap ( PFNGLXCREATEGLXPIXMAPMESAPROC) /* glXCreateGLXPixmapMESA */ (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
typedef Bool ( PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) /* glXQueryCurrentRendererIntegerMESA */ (int attribute, unsigned int * value);
typedef const char * ( PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) /* glXQueryCurrentRendererStringMESA */ (int attribute);
typedef Bool ( PFNGLXQUERYRENDERERINTEGERMESAPROC) /* glXQueryRendererIntegerMESA */ (Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
typedef const char * ( PFNGLXQUERYRENDERERSTRINGMESAPROC) /* glXQueryRendererStringMESA */ (Display * dpy, int screen, int renderer, int attribute);
typedef Bool ( PFNGLXRELEASEBUFFERSMESAPROC) /* glXReleaseBuffersMESA */ (Display * dpy, GLXDrawable drawable);
typedef Bool ( PFNGLXSET3DFXMODEMESAPROC) /* glXSet3DfxModeMESA */ (int mode);
typedef void ( PFNGLXCOPYBUFFERSUBDATANVPROC) /* glXCopyBufferSubDataNV */ (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void ( PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) /* glXNamedCopyBufferSubDataNV */ (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void ( PFNGLXCOPYIMAGESUBDATANVPROC) /* glXCopyImageSubDataNV */ (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
typedef Bool ( PFNGLXDELAYBEFORESWAPNVPROC) /* glXDelayBeforeSwapNV */ (Display * dpy, GLXDrawable drawable, GLfloat seconds);
typedef unsigned int * ( PFNGLXENUMERATEVIDEODEVICESNVPROC) /* glXEnumerateVideoDevicesNV */ (Display * dpy, int screen, int * nelements);
typedef int ( PFNGLXBINDVIDEODEVICENVPROC) /* glXBindVideoDeviceNV */ (Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
typedef Bool ( PFNGLXJOINSWAPGROUPNVPROC) /* glXJoinSwapGroupNV */ (Display * dpy, GLXDrawable drawable, GLuint group);
typedef Bool ( PFNGLXBINDSWAPBARRIERNVPROC) /* glXBindSwapBarrierNV */ (Display * dpy, GLuint group, GLuint barrier);
typedef Bool ( PFNGLXQUERYSWAPGROUPNVPROC) /* glXQuerySwapGroupNV */ (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
typedef Bool ( PFNGLXQUERYMAXSWAPGROUPSNVPROC) /* glXQueryMaxSwapGroupsNV */ (Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
typedef Bool ( PFNGLXQUERYFRAMECOUNTNVPROC) /* glXQueryFrameCountNV */ (Display * dpy, int screen, GLuint * count);
typedef Bool ( PFNGLXRESETFRAMECOUNTNVPROC) /* glXResetFrameCountNV */ (Display * dpy, int screen);
typedef int ( PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) /* glXBindVideoCaptureDeviceNV */ (Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef GLXVideoCaptureDeviceNV * ( PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) /* glXEnumerateVideoCaptureDevicesNV */ (Display * dpy, int screen, int * nelements);
typedef void ( PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) /* glXLockVideoCaptureDeviceNV */ (Display * dpy, GLXVideoCaptureDeviceNV device);
typedef int ( PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) /* glXQueryVideoCaptureDeviceNV */ (Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
typedef void ( PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) /* glXReleaseVideoCaptureDeviceNV */ (Display * dpy, GLXVideoCaptureDeviceNV device);
typedef int ( PFNGLXGETVIDEODEVICENVPROC) /* glXGetVideoDeviceNV */ (Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
typedef int ( PFNGLXRELEASEVIDEODEVICENVPROC) /* glXReleaseVideoDeviceNV */ (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef int ( PFNGLXBINDVIDEOIMAGENVPROC) /* glXBindVideoImageNV */ (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
typedef int ( PFNGLXRELEASEVIDEOIMAGENVPROC) /* glXReleaseVideoImageNV */ (Display * dpy, GLXPbuffer pbuf);
typedef int ( PFNGLXSENDPBUFFERTOVIDEONVPROC) /* glXSendPbufferToVideoNV */ (Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
typedef int ( PFNGLXGETVIDEOINFONVPROC) /* glXGetVideoInfoNV */ (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
typedef Bool ( PFNGLXGETSYNCVALUESOMLPROC) /* glXGetSyncValuesOML */ (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef Bool ( PFNGLXGETMSCRATEOMLPROC) /* glXGetMscRateOML */ (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
typedef int64_t ( PFNGLXSWAPBUFFERSMSCOMLPROC) /* glXSwapBuffersMscOML */ (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef Bool ( PFNGLXWAITFORMSCOMLPROC) /* glXWaitForMscOML */ (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef Bool ( PFNGLXWAITFORSBCOMLPROC) /* glXWaitForSbcOML */ (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef void ( PFNGLXCUSHIONSGIPROC) /* glXCushionSGI */ (Display * dpy, Window window, float cushion);
typedef Bool ( PFNGLXMAKECURRENTREADSGIPROC) /* glXMakeCurrentReadSGI */ (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable ( PFNGLXGETCURRENTREADDRAWABLESGIPROC) /* glXGetCurrentReadDrawableSGI */ ();
typedef int ( PFNGLXSWAPINTERVALSGIPROC) /* glXSwapIntervalSGI */ (int interval);
typedef int ( PFNGLXGETVIDEOSYNCSGIPROC) /* glXGetVideoSyncSGI */ (unsigned int * count);
typedef int ( PFNGLXWAITVIDEOSYNCSGIPROC) /* glXWaitVideoSyncSGI */ (int divisor, int remainder, unsigned int * count);
typedef Bool ( PFNGLXASSOCIATEDMPBUFFERSGIXPROC) /* glXAssociateDMPbufferSGIX */ (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
typedef int ( PFNGLXGETFBCONFIGATTRIBSGIXPROC) /* glXGetFBConfigAttribSGIX */ (Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
typedef GLXFBConfigSGIX * ( PFNGLXCHOOSEFBCONFIGSGIXPROC) /* glXChooseFBConfigSGIX */ (Display * dpy, int screen, int * attrib_list, int * nelements);
typedef GLXPixmap ( PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) /* glXCreateGLXPixmapWithConfigSGIX */ (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef GLXContext ( PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) /* glXCreateContextWithConfigSGIX */ (Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
typedef XVisualInfo * ( PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) /* glXGetVisualFromFBConfigSGIX */ (Display * dpy, GLXFBConfigSGIX config);
typedef GLXFBConfigSGIX ( PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) /* glXGetFBConfigFromVisualSGIX */ (Display * dpy, XVisualInfo * vis);
typedef GLXHyperpipeNetworkSGIX * ( PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) /* glXQueryHyperpipeNetworkSGIX */ (Display * dpy, int * npipes);
typedef int ( PFNGLXHYPERPIPECONFIGSGIXPROC) /* glXHyperpipeConfigSGIX */ (Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
typedef GLXHyperpipeConfigSGIX * ( PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) /* glXQueryHyperpipeConfigSGIX */ (Display * dpy, int hpId, int * npipes);
typedef int ( PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) /* glXDestroyHyperpipeConfigSGIX */ (Display * dpy, int hpId);
typedef int ( PFNGLXBINDHYPERPIPESGIXPROC) /* glXBindHyperpipeSGIX */ (Display * dpy, int hpId);
typedef int ( PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) /* glXQueryHyperpipeBestAttribSGIX */ (Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
typedef int ( PFNGLXHYPERPIPEATTRIBSGIXPROC) /* glXHyperpipeAttribSGIX */ (Display * dpy, int timeSlice, int attrib, int size, void * attribList);
typedef int ( PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) /* glXQueryHyperpipeAttribSGIX */ (Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
typedef GLXPbufferSGIX ( PFNGLXCREATEGLXPBUFFERSGIXPROC) /* glXCreateGLXPbufferSGIX */ (Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
typedef void ( PFNGLXDESTROYGLXPBUFFERSGIXPROC) /* glXDestroyGLXPbufferSGIX */ (Display * dpy, GLXPbufferSGIX pbuf);
typedef int ( PFNGLXQUERYGLXPBUFFERSGIXPROC) /* glXQueryGLXPbufferSGIX */ (Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
typedef void ( PFNGLXSELECTEVENTSGIXPROC) /* glXSelectEventSGIX */ (Display * dpy, GLXDrawable drawable, unsigned long mask);
typedef void ( PFNGLXGETSELECTEDEVENTSGIXPROC) /* glXGetSelectedEventSGIX */ (Display * dpy, GLXDrawable drawable, unsigned long * mask);
typedef void ( PFNGLXBINDSWAPBARRIERSGIXPROC) /* glXBindSwapBarrierSGIX */ (Display * dpy, GLXDrawable drawable, int barrier);
typedef Bool ( PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) /* glXQueryMaxSwapBarriersSGIX */ (Display * dpy, int screen, int * max);
typedef void ( PFNGLXJOINSWAPGROUPSGIXPROC) /* glXJoinSwapGroupSGIX */ (Display * dpy, GLXDrawable drawable, GLXDrawable member);
typedef int ( PFNGLXBINDCHANNELTOWINDOWSGIXPROC) /* glXBindChannelToWindowSGIX */ (Display * display, int screen, int channel, Window window);
typedef int ( PFNGLXCHANNELRECTSGIXPROC) /* glXChannelRectSGIX */ (Display * display, int screen, int channel, int x, int y, int w, int h);
typedef int ( PFNGLXQUERYCHANNELRECTSGIXPROC) /* glXQueryChannelRectSGIX */ (Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
typedef int ( PFNGLXQUERYCHANNELDELTASSGIXPROC) /* glXQueryChannelDeltasSGIX */ (Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
typedef int ( PFNGLXCHANNELRECTSYNCSGIXPROC) /* glXChannelRectSyncSGIX */ (Display * display, int screen, int channel, GLenum synctype);
typedef GLXVideoSourceSGIX ( PFNGLXCREATEGLXVIDEOSOURCESGIXPROC) /* glXCreateGLXVideoSourceSGIX */ (Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
typedef void ( PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC) /* glXDestroyGLXVideoSourceSGIX */ (Display * dpy, GLXVideoSourceSGIX glxvideosource);
typedef Status ( PFNGLXGETTRANSPARENTINDEXSUNPROC) /* glXGetTransparentIndexSUN */ (Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  class glx
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceConfig
    {
    public:

      bool m_featureSupported [GLEW_GLX_FeatureSetCount];

      PFNGLXQUERYEXTENSIONSSTRINGPROC m_glXQueryExtensionsString;
      PFNGLXQUERYSERVERSTRINGPROC m_glXQueryServerString;
      PFNGLXGETCLIENTSTRINGPROC m_glXGetClientString;
      PFNGLXGETCURRENTDISPLAYPROC m_glXGetCurrentDisplay;
      PFNGLXGETFBCONFIGSPROC m_glXGetFBConfigs;
      PFNGLXCHOOSEFBCONFIGPROC m_glXChooseFBConfig;
      PFNGLXGETFBCONFIGATTRIBPROC m_glXGetFBConfigAttrib;
      PFNGLXGETVISUALFROMFBCONFIGPROC m_glXGetVisualFromFBConfig;
      PFNGLXCREATEWINDOWPROC m_glXCreateWindow;
      PFNGLXDESTROYWINDOWPROC m_glXDestroyWindow;
      PFNGLXCREATEPIXMAPPROC m_glXCreatePixmap;
      PFNGLXDESTROYPIXMAPPROC m_glXDestroyPixmap;
      PFNGLXCREATEPBUFFERPROC m_glXCreatePbuffer;
      PFNGLXDESTROYPBUFFERPROC m_glXDestroyPbuffer;
      PFNGLXQUERYDRAWABLEPROC m_glXQueryDrawable;
      PFNGLXCREATENEWCONTEXTPROC m_glXCreateNewContext;
      PFNGLXMAKECONTEXTCURRENTPROC m_glXMakeContextCurrent;
      PFNGLXGETCURRENTREADDRAWABLEPROC m_glXGetCurrentReadDrawable;
      PFNGLXQUERYCONTEXTPROC m_glXQueryContext;
      PFNGLXSELECTEVENTPROC m_glXSelectEvent;
      PFNGLXGETSELECTEDEVENTPROC m_glXGetSelectedEvent;
      PFNGLXGETPROCADDRESSPROC m_glXGetProcAddress;
      PFNGLXGETGPUIDSAMDPROC m_glXGetGPUIDsAMD;
      PFNGLXGETGPUINFOAMDPROC m_glXGetGPUInfoAMD;
      PFNGLXGETCONTEXTGPUIDAMDPROC m_glXGetContextGPUIDAMD;
      PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC m_glXCreateAssociatedContextAMD;
      PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC m_glXCreateAssociatedContextAttribsAMD;
      PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC m_glXDeleteAssociatedContextAMD;
      PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC m_glXMakeAssociatedContextCurrentAMD;
      PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC m_glXGetCurrentAssociatedContextAMD;
      PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC m_glXBlitContextFramebufferAMD;
      PFNGLXCREATECONTEXTATTRIBSARBPROC m_glXCreateContextAttribsARB;
      PFNGLXGETPROCADDRESSARBPROC m_glXGetProcAddressARB;
      PFNGLXGETCURRENTDISPLAYEXTPROC m_glXGetCurrentDisplayEXT;
      PFNGLXQUERYCONTEXTINFOEXTPROC m_glXQueryContextInfoEXT;
      PFNGLXGETCONTEXTIDEXTPROC m_glXGetContextIDEXT;
      PFNGLXIMPORTCONTEXTEXTPROC m_glXImportContextEXT;
      PFNGLXFREECONTEXTEXTPROC m_glXFreeContextEXT;
      PFNGLXSWAPINTERVALEXTPROC m_glXSwapIntervalEXT;
      PFNGLXBINDTEXIMAGEEXTPROC m_glXBindTexImageEXT;
      PFNGLXRELEASETEXIMAGEEXTPROC m_glXReleaseTexImageEXT;
      PFNGLXGETAGPOFFSETMESAPROC m_glXGetAGPOffsetMESA;
      PFNGLXCOPYSUBBUFFERMESAPROC m_glXCopySubBufferMESA;
      PFNGLXCREATEGLXPIXMAPMESAPROC m_glXCreateGLXPixmapMESA;
      PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC m_glXQueryCurrentRendererIntegerMESA;
      PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC m_glXQueryCurrentRendererStringMESA;
      PFNGLXQUERYRENDERERINTEGERMESAPROC m_glXQueryRendererIntegerMESA;
      PFNGLXQUERYRENDERERSTRINGMESAPROC m_glXQueryRendererStringMESA;
      PFNGLXRELEASEBUFFERSMESAPROC m_glXReleaseBuffersMESA;
      PFNGLXSET3DFXMODEMESAPROC m_glXSet3DfxModeMESA;
      PFNGLXCOPYBUFFERSUBDATANVPROC m_glXCopyBufferSubDataNV;
      PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC m_glXNamedCopyBufferSubDataNV;
      PFNGLXCOPYIMAGESUBDATANVPROC m_glXCopyImageSubDataNV;
      PFNGLXDELAYBEFORESWAPNVPROC m_glXDelayBeforeSwapNV;
      PFNGLXENUMERATEVIDEODEVICESNVPROC m_glXEnumerateVideoDevicesNV;
      PFNGLXBINDVIDEODEVICENVPROC m_glXBindVideoDeviceNV;
      PFNGLXJOINSWAPGROUPNVPROC m_glXJoinSwapGroupNV;
      PFNGLXBINDSWAPBARRIERNVPROC m_glXBindSwapBarrierNV;
      PFNGLXQUERYSWAPGROUPNVPROC m_glXQuerySwapGroupNV;
      PFNGLXQUERYMAXSWAPGROUPSNVPROC m_glXQueryMaxSwapGroupsNV;
      PFNGLXQUERYFRAMECOUNTNVPROC m_glXQueryFrameCountNV;
      PFNGLXRESETFRAMECOUNTNVPROC m_glXResetFrameCountNV;
      PFNGLXBINDVIDEOCAPTUREDEVICENVPROC m_glXBindVideoCaptureDeviceNV;
      PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC m_glXEnumerateVideoCaptureDevicesNV;
      PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC m_glXLockVideoCaptureDeviceNV;
      PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC m_glXQueryVideoCaptureDeviceNV;
      PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC m_glXReleaseVideoCaptureDeviceNV;
      PFNGLXGETVIDEODEVICENVPROC m_glXGetVideoDeviceNV;
      PFNGLXRELEASEVIDEODEVICENVPROC m_glXReleaseVideoDeviceNV;
      PFNGLXBINDVIDEOIMAGENVPROC m_glXBindVideoImageNV;
      PFNGLXRELEASEVIDEOIMAGENVPROC m_glXReleaseVideoImageNV;
      PFNGLXSENDPBUFFERTOVIDEONVPROC m_glXSendPbufferToVideoNV;
      PFNGLXGETVIDEOINFONVPROC m_glXGetVideoInfoNV;
      PFNGLXGETSYNCVALUESOMLPROC m_glXGetSyncValuesOML;
      PFNGLXGETMSCRATEOMLPROC m_glXGetMscRateOML;
      PFNGLXSWAPBUFFERSMSCOMLPROC m_glXSwapBuffersMscOML;
      PFNGLXWAITFORMSCOMLPROC m_glXWaitForMscOML;
      PFNGLXWAITFORSBCOMLPROC m_glXWaitForSbcOML;
      PFNGLXCUSHIONSGIPROC m_glXCushionSGI;
      PFNGLXMAKECURRENTREADSGIPROC m_glXMakeCurrentReadSGI;
      PFNGLXGETCURRENTREADDRAWABLESGIPROC m_glXGetCurrentReadDrawableSGI;
      PFNGLXSWAPINTERVALSGIPROC m_glXSwapIntervalSGI;
      PFNGLXGETVIDEOSYNCSGIPROC m_glXGetVideoSyncSGI;
      PFNGLXWAITVIDEOSYNCSGIPROC m_glXWaitVideoSyncSGI;
      PFNGLXASSOCIATEDMPBUFFERSGIXPROC m_glXAssociateDMPbufferSGIX;
      PFNGLXGETFBCONFIGATTRIBSGIXPROC m_glXGetFBConfigAttribSGIX;
      PFNGLXCHOOSEFBCONFIGSGIXPROC m_glXChooseFBConfigSGIX;
      PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC m_glXCreateGLXPixmapWithConfigSGIX;
      PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC m_glXCreateContextWithConfigSGIX;
      PFNGLXGETVISUALFROMFBCONFIGSGIXPROC m_glXGetVisualFromFBConfigSGIX;
      PFNGLXGETFBCONFIGFROMVISUALSGIXPROC m_glXGetFBConfigFromVisualSGIX;
      PFNGLXQUERYHYPERPIPENETWORKSGIXPROC m_glXQueryHyperpipeNetworkSGIX;
      PFNGLXHYPERPIPECONFIGSGIXPROC m_glXHyperpipeConfigSGIX;
      PFNGLXQUERYHYPERPIPECONFIGSGIXPROC m_glXQueryHyperpipeConfigSGIX;
      PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC m_glXDestroyHyperpipeConfigSGIX;
      PFNGLXBINDHYPERPIPESGIXPROC m_glXBindHyperpipeSGIX;
      PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC m_glXQueryHyperpipeBestAttribSGIX;
      PFNGLXHYPERPIPEATTRIBSGIXPROC m_glXHyperpipeAttribSGIX;
      PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC m_glXQueryHyperpipeAttribSGIX;
      PFNGLXCREATEGLXPBUFFERSGIXPROC m_glXCreateGLXPbufferSGIX;
      PFNGLXDESTROYGLXPBUFFERSGIXPROC m_glXDestroyGLXPbufferSGIX;
      PFNGLXQUERYGLXPBUFFERSGIXPROC m_glXQueryGLXPbufferSGIX;
      PFNGLXSELECTEVENTSGIXPROC m_glXSelectEventSGIX;
      PFNGLXGETSELECTEDEVENTSGIXPROC m_glXGetSelectedEventSGIX;
      PFNGLXBINDSWAPBARRIERSGIXPROC m_glXBindSwapBarrierSGIX;
      PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC m_glXQueryMaxSwapBarriersSGIX;
      PFNGLXJOINSWAPGROUPSGIXPROC m_glXJoinSwapGroupSGIX;
      PFNGLXBINDCHANNELTOWINDOWSGIXPROC m_glXBindChannelToWindowSGIX;
      PFNGLXCHANNELRECTSGIXPROC m_glXChannelRectSGIX;
      PFNGLXQUERYCHANNELRECTSGIXPROC m_glXQueryChannelRectSGIX;
      PFNGLXQUERYCHANNELDELTASSGIXPROC m_glXQueryChannelDeltasSGIX;
      PFNGLXCHANNELRECTSYNCSGIXPROC m_glXChannelRectSyncSGIX;
      PFNGLXCREATEGLXVIDEOSOURCESGIXPROC m_glXCreateGLXVideoSourceSGIX;
      PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC m_glXDestroyGLXVideoSourceSGIX;
      PFNGLXGETTRANSPARENTINDEXSUNPROC m_glXGetTransparentIndexSUN;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise ();

    static void Deinitialise ();

    static bool IsSupported (GLEW_GLX_FeatureSet feature)
    {
      GLEW_ASSERT (s_initialised);

      return s_deviceConfig.m_featureSupported [feature];
    }

    static void SetConfig (glew::glx::DeviceConfig &deviceConfig)
    {
      GLEW_ASSERT (s_initialised);

      s_deviceConfig = deviceConfig;
    }

    static glew::glx::DeviceConfig &GetConfig ()
    {
      GLEW_ASSERT (s_initialised);

      return s_deviceConfig;
    }

  protected:

    static bool s_initialised;

    static glew::glx::DeviceConfig s_deviceConfig;

  };

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  bool IsSupported (GLEW_GLX_FeatureSet feature);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_API const char * GLEW_APIENTRY _glew_glx_glXQueryExtensionsString (Display * dpy, int screen);
GLEW_API const char * GLEW_APIENTRY _glew_glx_glXQueryServerString (Display * dpy, int screen, int name);
GLEW_API const char * GLEW_APIENTRY _glew_glx_glXGetClientString (Display * dpy, int name);
GLEW_API Display * GLEW_APIENTRY _glew_glx_glXGetCurrentDisplay ();
GLEW_API GLXFBConfig * GLEW_APIENTRY _glew_glx_glXGetFBConfigs (Display * dpy, int screen, int * nelements);
GLEW_API GLXFBConfig * GLEW_APIENTRY _glew_glx_glXChooseFBConfig (Display * dpy, int screen, const int * attrib_list, int * nelements);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetFBConfigAttrib (Display * dpy, GLXFBConfig config, int attribute, int * value);
GLEW_API XVisualInfo * GLEW_APIENTRY _glew_glx_glXGetVisualFromFBConfig (Display * dpy, GLXFBConfig config);
GLEW_API GLXWindow GLEW_APIENTRY _glew_glx_glXCreateWindow (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
GLEW_API void GLEW_APIENTRY _glew_glx_glXDestroyWindow (Display * dpy, GLXWindow win);
GLEW_API GLXPixmap GLEW_APIENTRY _glew_glx_glXCreatePixmap (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
GLEW_API void GLEW_APIENTRY _glew_glx_glXDestroyPixmap (Display * dpy, GLXPixmap pixmap);
GLEW_API GLXPbuffer GLEW_APIENTRY _glew_glx_glXCreatePbuffer (Display * dpy, GLXFBConfig config, const int * attrib_list);
GLEW_API void GLEW_APIENTRY _glew_glx_glXDestroyPbuffer (Display * dpy, GLXPbuffer pbuf);
GLEW_API void GLEW_APIENTRY _glew_glx_glXQueryDrawable (Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXCreateNewContext (Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXMakeContextCurrent (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
GLEW_API GLXDrawable GLEW_APIENTRY _glew_glx_glXGetCurrentReadDrawable ();
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryContext (Display * dpy, GLXContext ctx, int attribute, int * value);
GLEW_API void GLEW_APIENTRY _glew_glx_glXSelectEvent (Display * dpy, GLXDrawable draw, unsigned long event_mask);
GLEW_API void GLEW_APIENTRY _glew_glx_glXGetSelectedEvent (Display * dpy, GLXDrawable draw, unsigned long * event_mask);
GLEW_API __GLXextFuncPtr GLEW_APIENTRY _glew_glx_glXGetProcAddress (const GLubyte * procName);
GLEW_API unsigned int GLEW_APIENTRY _glew_glx_glXGetGPUIDsAMD (unsigned int maxCount, unsigned int * ids);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetGPUInfoAMD (unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
GLEW_API unsigned int GLEW_APIENTRY _glew_glx_glXGetContextGPUIDAMD (GLXContext ctx);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXCreateAssociatedContextAMD (unsigned int id, GLXContext share_list);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXCreateAssociatedContextAttribsAMD (unsigned int id, GLXContext share_context, const int * attribList);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXDeleteAssociatedContextAMD (GLXContext ctx);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXMakeAssociatedContextCurrentAMD (GLXContext ctx);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXGetCurrentAssociatedContextAMD ();
GLEW_API void GLEW_APIENTRY _glew_glx_glXBlitContextFramebufferAMD (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXCreateContextAttribsARB (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
GLEW_API __GLXextFuncPtr GLEW_APIENTRY _glew_glx_glXGetProcAddressARB (const GLubyte * procName);
GLEW_API Display * GLEW_APIENTRY _glew_glx_glXGetCurrentDisplayEXT ();
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryContextInfoEXT (Display * dpy, GLXContext context, int attribute, int * value);
GLEW_API GLXContextID GLEW_APIENTRY _glew_glx_glXGetContextIDEXT (const GLXContext context);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXImportContextEXT (Display * dpy, GLXContextID contextID);
GLEW_API void GLEW_APIENTRY _glew_glx_glXFreeContextEXT (Display * dpy, GLXContext context);
GLEW_API void GLEW_APIENTRY _glew_glx_glXSwapIntervalEXT (Display * dpy, GLXDrawable drawable, int interval);
GLEW_API void GLEW_APIENTRY _glew_glx_glXBindTexImageEXT (Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
GLEW_API void GLEW_APIENTRY _glew_glx_glXReleaseTexImageEXT (Display * dpy, GLXDrawable drawable, int buffer);
GLEW_API unsigned int GLEW_APIENTRY _glew_glx_glXGetAGPOffsetMESA (const void * pointer);
GLEW_API void GLEW_APIENTRY _glew_glx_glXCopySubBufferMESA (Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
GLEW_API GLXPixmap GLEW_APIENTRY _glew_glx_glXCreateGLXPixmapMESA (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXQueryCurrentRendererIntegerMESA (int attribute, unsigned int * value);
GLEW_API const char * GLEW_APIENTRY _glew_glx_glXQueryCurrentRendererStringMESA (int attribute);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXQueryRendererIntegerMESA (Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
GLEW_API const char * GLEW_APIENTRY _glew_glx_glXQueryRendererStringMESA (Display * dpy, int screen, int renderer, int attribute);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXReleaseBuffersMESA (Display * dpy, GLXDrawable drawable);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXSet3DfxModeMESA (int mode);
GLEW_API void GLEW_APIENTRY _glew_glx_glXCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_glx_glXNamedCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_glx_glXCopyImageSubDataNV (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXDelayBeforeSwapNV (Display * dpy, GLXDrawable drawable, GLfloat seconds);
GLEW_API unsigned int * GLEW_APIENTRY _glew_glx_glXEnumerateVideoDevicesNV (Display * dpy, int screen, int * nelements);
GLEW_API int GLEW_APIENTRY _glew_glx_glXBindVideoDeviceNV (Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXJoinSwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint group);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXBindSwapBarrierNV (Display * dpy, GLuint group, GLuint barrier);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXQuerySwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXQueryMaxSwapGroupsNV (Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXQueryFrameCountNV (Display * dpy, int screen, GLuint * count);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXResetFrameCountNV (Display * dpy, int screen);
GLEW_API int GLEW_APIENTRY _glew_glx_glXBindVideoCaptureDeviceNV (Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
GLEW_API GLXVideoCaptureDeviceNV * GLEW_APIENTRY _glew_glx_glXEnumerateVideoCaptureDevicesNV (Display * dpy, int screen, int * nelements);
GLEW_API void GLEW_APIENTRY _glew_glx_glXLockVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
GLEW_API void GLEW_APIENTRY _glew_glx_glXReleaseVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetVideoDeviceNV (Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
GLEW_API int GLEW_APIENTRY _glew_glx_glXReleaseVideoDeviceNV (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
GLEW_API int GLEW_APIENTRY _glew_glx_glXBindVideoImageNV (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
GLEW_API int GLEW_APIENTRY _glew_glx_glXReleaseVideoImageNV (Display * dpy, GLXPbuffer pbuf);
GLEW_API int GLEW_APIENTRY _glew_glx_glXSendPbufferToVideoNV (Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetVideoInfoNV (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXGetSyncValuesOML (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXGetMscRateOML (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
GLEW_API int64_t GLEW_APIENTRY _glew_glx_glXSwapBuffersMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXWaitForMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXWaitForSbcOML (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
GLEW_API void GLEW_APIENTRY _glew_glx_glXCushionSGI (Display * dpy, Window window, float cushion);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXMakeCurrentReadSGI (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
GLEW_API GLXDrawable GLEW_APIENTRY _glew_glx_glXGetCurrentReadDrawableSGI ();
GLEW_API int GLEW_APIENTRY _glew_glx_glXSwapIntervalSGI (int interval);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetVideoSyncSGI (unsigned int * count);
GLEW_API int GLEW_APIENTRY _glew_glx_glXWaitVideoSyncSGI (int divisor, int remainder, unsigned int * count);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXAssociateDMPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetFBConfigAttribSGIX (Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
GLEW_API GLXFBConfigSGIX * GLEW_APIENTRY _glew_glx_glXChooseFBConfigSGIX (Display * dpy, int screen, int * attrib_list, int * nelements);
GLEW_API GLXPixmap GLEW_APIENTRY _glew_glx_glXCreateGLXPixmapWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
GLEW_API GLXContext GLEW_APIENTRY _glew_glx_glXCreateContextWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
GLEW_API XVisualInfo * GLEW_APIENTRY _glew_glx_glXGetVisualFromFBConfigSGIX (Display * dpy, GLXFBConfigSGIX config);
GLEW_API GLXFBConfigSGIX GLEW_APIENTRY _glew_glx_glXGetFBConfigFromVisualSGIX (Display * dpy, XVisualInfo * vis);
GLEW_API GLXHyperpipeNetworkSGIX * GLEW_APIENTRY _glew_glx_glXQueryHyperpipeNetworkSGIX (Display * dpy, int * npipes);
GLEW_API int GLEW_APIENTRY _glew_glx_glXHyperpipeConfigSGIX (Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
GLEW_API GLXHyperpipeConfigSGIX * GLEW_APIENTRY _glew_glx_glXQueryHyperpipeConfigSGIX (Display * dpy, int hpId, int * npipes);
GLEW_API int GLEW_APIENTRY _glew_glx_glXDestroyHyperpipeConfigSGIX (Display * dpy, int hpId);
GLEW_API int GLEW_APIENTRY _glew_glx_glXBindHyperpipeSGIX (Display * dpy, int hpId);
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryHyperpipeBestAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
GLEW_API int GLEW_APIENTRY _glew_glx_glXHyperpipeAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * attribList);
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryHyperpipeAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
GLEW_API GLXPbufferSGIX GLEW_APIENTRY _glew_glx_glXCreateGLXPbufferSGIX (Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
GLEW_API void GLEW_APIENTRY _glew_glx_glXDestroyGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf);
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
GLEW_API void GLEW_APIENTRY _glew_glx_glXSelectEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long mask);
GLEW_API void GLEW_APIENTRY _glew_glx_glXGetSelectedEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long * mask);
GLEW_API void GLEW_APIENTRY _glew_glx_glXBindSwapBarrierSGIX (Display * dpy, GLXDrawable drawable, int barrier);
GLEW_API Bool GLEW_APIENTRY _glew_glx_glXQueryMaxSwapBarriersSGIX (Display * dpy, int screen, int * max);
GLEW_API void GLEW_APIENTRY _glew_glx_glXJoinSwapGroupSGIX (Display * dpy, GLXDrawable drawable, GLXDrawable member);
GLEW_API int GLEW_APIENTRY _glew_glx_glXBindChannelToWindowSGIX (Display * display, int screen, int channel, Window window);
GLEW_API int GLEW_APIENTRY _glew_glx_glXChannelRectSGIX (Display * display, int screen, int channel, int x, int y, int w, int h);
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryChannelRectSGIX (Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
GLEW_API int GLEW_APIENTRY _glew_glx_glXQueryChannelDeltasSGIX (Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
GLEW_API int GLEW_APIENTRY _glew_glx_glXChannelRectSyncSGIX (Display * display, int screen, int channel, GLenum synctype);
GLEW_API GLXVideoSourceSGIX GLEW_APIENTRY _glew_glx_glXCreateGLXVideoSourceSGIX (Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
GLEW_API void GLEW_APIENTRY _glew_glx_glXDestroyGLXVideoSourceSGIX (Display * dpy, GLXVideoSourceSGIX glxvideosource);
GLEW_API Status GLEW_APIENTRY _glew_glx_glXGetTransparentIndexSUN (Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glXQueryExtensionsString _glew_glx_glXQueryExtensionsString
#define glXQueryServerString _glew_glx_glXQueryServerString
#define glXGetClientString _glew_glx_glXGetClientString
#define glXGetCurrentDisplay _glew_glx_glXGetCurrentDisplay
#define glXGetFBConfigs _glew_glx_glXGetFBConfigs
#define glXChooseFBConfig _glew_glx_glXChooseFBConfig
#define glXGetFBConfigAttrib _glew_glx_glXGetFBConfigAttrib
#define glXGetVisualFromFBConfig _glew_glx_glXGetVisualFromFBConfig
#define glXCreateWindow _glew_glx_glXCreateWindow
#define glXDestroyWindow _glew_glx_glXDestroyWindow
#define glXCreatePixmap _glew_glx_glXCreatePixmap
#define glXDestroyPixmap _glew_glx_glXDestroyPixmap
#define glXCreatePbuffer _glew_glx_glXCreatePbuffer
#define glXDestroyPbuffer _glew_glx_glXDestroyPbuffer
#define glXQueryDrawable _glew_glx_glXQueryDrawable
#define glXCreateNewContext _glew_glx_glXCreateNewContext
#define glXMakeContextCurrent _glew_glx_glXMakeContextCurrent
#define glXGetCurrentReadDrawable _glew_glx_glXGetCurrentReadDrawable
#define glXQueryContext _glew_glx_glXQueryContext
#define glXSelectEvent _glew_glx_glXSelectEvent
#define glXGetSelectedEvent _glew_glx_glXGetSelectedEvent
#define glXGetProcAddress _glew_glx_glXGetProcAddress
#define glXGetGPUIDsAMD _glew_glx_glXGetGPUIDsAMD
#define glXGetGPUInfoAMD _glew_glx_glXGetGPUInfoAMD
#define glXGetContextGPUIDAMD _glew_glx_glXGetContextGPUIDAMD
#define glXCreateAssociatedContextAMD _glew_glx_glXCreateAssociatedContextAMD
#define glXCreateAssociatedContextAttribsAMD _glew_glx_glXCreateAssociatedContextAttribsAMD
#define glXDeleteAssociatedContextAMD _glew_glx_glXDeleteAssociatedContextAMD
#define glXMakeAssociatedContextCurrentAMD _glew_glx_glXMakeAssociatedContextCurrentAMD
#define glXGetCurrentAssociatedContextAMD _glew_glx_glXGetCurrentAssociatedContextAMD
#define glXBlitContextFramebufferAMD _glew_glx_glXBlitContextFramebufferAMD
#define glXCreateContextAttribsARB _glew_glx_glXCreateContextAttribsARB
#define glXGetProcAddressARB _glew_glx_glXGetProcAddressARB
#define glXGetCurrentDisplayEXT _glew_glx_glXGetCurrentDisplayEXT
#define glXQueryContextInfoEXT _glew_glx_glXQueryContextInfoEXT
#define glXGetContextIDEXT _glew_glx_glXGetContextIDEXT
#define glXImportContextEXT _glew_glx_glXImportContextEXT
#define glXFreeContextEXT _glew_glx_glXFreeContextEXT
#define glXSwapIntervalEXT _glew_glx_glXSwapIntervalEXT
#define glXBindTexImageEXT _glew_glx_glXBindTexImageEXT
#define glXReleaseTexImageEXT _glew_glx_glXReleaseTexImageEXT
#define glXGetAGPOffsetMESA _glew_glx_glXGetAGPOffsetMESA
#define glXCopySubBufferMESA _glew_glx_glXCopySubBufferMESA
#define glXCreateGLXPixmapMESA _glew_glx_glXCreateGLXPixmapMESA
#define glXQueryCurrentRendererIntegerMESA _glew_glx_glXQueryCurrentRendererIntegerMESA
#define glXQueryCurrentRendererStringMESA _glew_glx_glXQueryCurrentRendererStringMESA
#define glXQueryRendererIntegerMESA _glew_glx_glXQueryRendererIntegerMESA
#define glXQueryRendererStringMESA _glew_glx_glXQueryRendererStringMESA
#define glXReleaseBuffersMESA _glew_glx_glXReleaseBuffersMESA
#define glXSet3DfxModeMESA _glew_glx_glXSet3DfxModeMESA
#define glXCopyBufferSubDataNV _glew_glx_glXCopyBufferSubDataNV
#define glXNamedCopyBufferSubDataNV _glew_glx_glXNamedCopyBufferSubDataNV
#define glXCopyImageSubDataNV _glew_glx_glXCopyImageSubDataNV
#define glXDelayBeforeSwapNV _glew_glx_glXDelayBeforeSwapNV
#define glXEnumerateVideoDevicesNV _glew_glx_glXEnumerateVideoDevicesNV
#define glXBindVideoDeviceNV _glew_glx_glXBindVideoDeviceNV
#define glXJoinSwapGroupNV _glew_glx_glXJoinSwapGroupNV
#define glXBindSwapBarrierNV _glew_glx_glXBindSwapBarrierNV
#define glXQuerySwapGroupNV _glew_glx_glXQuerySwapGroupNV
#define glXQueryMaxSwapGroupsNV _glew_glx_glXQueryMaxSwapGroupsNV
#define glXQueryFrameCountNV _glew_glx_glXQueryFrameCountNV
#define glXResetFrameCountNV _glew_glx_glXResetFrameCountNV
#define glXBindVideoCaptureDeviceNV _glew_glx_glXBindVideoCaptureDeviceNV
#define glXEnumerateVideoCaptureDevicesNV _glew_glx_glXEnumerateVideoCaptureDevicesNV
#define glXLockVideoCaptureDeviceNV _glew_glx_glXLockVideoCaptureDeviceNV
#define glXQueryVideoCaptureDeviceNV _glew_glx_glXQueryVideoCaptureDeviceNV
#define glXReleaseVideoCaptureDeviceNV _glew_glx_glXReleaseVideoCaptureDeviceNV
#define glXGetVideoDeviceNV _glew_glx_glXGetVideoDeviceNV
#define glXReleaseVideoDeviceNV _glew_glx_glXReleaseVideoDeviceNV
#define glXBindVideoImageNV _glew_glx_glXBindVideoImageNV
#define glXReleaseVideoImageNV _glew_glx_glXReleaseVideoImageNV
#define glXSendPbufferToVideoNV _glew_glx_glXSendPbufferToVideoNV
#define glXGetVideoInfoNV _glew_glx_glXGetVideoInfoNV
#define glXGetSyncValuesOML _glew_glx_glXGetSyncValuesOML
#define glXGetMscRateOML _glew_glx_glXGetMscRateOML
#define glXSwapBuffersMscOML _glew_glx_glXSwapBuffersMscOML
#define glXWaitForMscOML _glew_glx_glXWaitForMscOML
#define glXWaitForSbcOML _glew_glx_glXWaitForSbcOML
#define glXCushionSGI _glew_glx_glXCushionSGI
#define glXMakeCurrentReadSGI _glew_glx_glXMakeCurrentReadSGI
#define glXGetCurrentReadDrawableSGI _glew_glx_glXGetCurrentReadDrawableSGI
#define glXSwapIntervalSGI _glew_glx_glXSwapIntervalSGI
#define glXGetVideoSyncSGI _glew_glx_glXGetVideoSyncSGI
#define glXWaitVideoSyncSGI _glew_glx_glXWaitVideoSyncSGI
#define glXAssociateDMPbufferSGIX _glew_glx_glXAssociateDMPbufferSGIX
#define glXGetFBConfigAttribSGIX _glew_glx_glXGetFBConfigAttribSGIX
#define glXChooseFBConfigSGIX _glew_glx_glXChooseFBConfigSGIX
#define glXCreateGLXPixmapWithConfigSGIX _glew_glx_glXCreateGLXPixmapWithConfigSGIX
#define glXCreateContextWithConfigSGIX _glew_glx_glXCreateContextWithConfigSGIX
#define glXGetVisualFromFBConfigSGIX _glew_glx_glXGetVisualFromFBConfigSGIX
#define glXGetFBConfigFromVisualSGIX _glew_glx_glXGetFBConfigFromVisualSGIX
#define glXQueryHyperpipeNetworkSGIX _glew_glx_glXQueryHyperpipeNetworkSGIX
#define glXHyperpipeConfigSGIX _glew_glx_glXHyperpipeConfigSGIX
#define glXQueryHyperpipeConfigSGIX _glew_glx_glXQueryHyperpipeConfigSGIX
#define glXDestroyHyperpipeConfigSGIX _glew_glx_glXDestroyHyperpipeConfigSGIX
#define glXBindHyperpipeSGIX _glew_glx_glXBindHyperpipeSGIX
#define glXQueryHyperpipeBestAttribSGIX _glew_glx_glXQueryHyperpipeBestAttribSGIX
#define glXHyperpipeAttribSGIX _glew_glx_glXHyperpipeAttribSGIX
#define glXQueryHyperpipeAttribSGIX _glew_glx_glXQueryHyperpipeAttribSGIX
#define glXCreateGLXPbufferSGIX _glew_glx_glXCreateGLXPbufferSGIX
#define glXDestroyGLXPbufferSGIX _glew_glx_glXDestroyGLXPbufferSGIX
#define glXQueryGLXPbufferSGIX _glew_glx_glXQueryGLXPbufferSGIX
#define glXSelectEventSGIX _glew_glx_glXSelectEventSGIX
#define glXGetSelectedEventSGIX _glew_glx_glXGetSelectedEventSGIX
#define glXBindSwapBarrierSGIX _glew_glx_glXBindSwapBarrierSGIX
#define glXQueryMaxSwapBarriersSGIX _glew_glx_glXQueryMaxSwapBarriersSGIX
#define glXJoinSwapGroupSGIX _glew_glx_glXJoinSwapGroupSGIX
#define glXBindChannelToWindowSGIX _glew_glx_glXBindChannelToWindowSGIX
#define glXChannelRectSGIX _glew_glx_glXChannelRectSGIX
#define glXQueryChannelRectSGIX _glew_glx_glXQueryChannelRectSGIX
#define glXQueryChannelDeltasSGIX _glew_glx_glXQueryChannelDeltasSGIX
#define glXChannelRectSyncSGIX _glew_glx_glXChannelRectSyncSGIX
#define glXCreateGLXVideoSourceSGIX _glew_glx_glXCreateGLXVideoSourceSGIX
#define glXDestroyGLXVideoSourceSGIX _glew_glx_glXDestroyGLXVideoSourceSGIX
#define glXGetTransparentIndexSUN _glew_glx_glXGetTransparentIndexSUN

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

#endif // __GLEW_GLX_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
