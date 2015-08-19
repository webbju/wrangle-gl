////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLX_H__
#define __GLEW_GLX_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glx.h>

#include <GL/glxext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 XVisualInfo * glXChooseVisual (Display * dpy, int screen, int * attribList);
 GLXContext glXCreateContext (Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
 void  glXDestroyContext (Display * dpy, GLXContext ctx);
 Bool glXMakeCurrent (Display * dpy, GLXDrawable drawable, GLXContext ctx);
 void  glXCopyContext (Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
 void  glXSwapBuffers (Display * dpy, GLXDrawable drawable);
 GLXPixmap glXCreateGLXPixmap (Display * dpy, XVisualInfo * visual, Pixmap pixmap);
 void  glXDestroyGLXPixmap (Display * dpy, GLXPixmap pixmap);
 Bool glXQueryExtension (Display * dpy, int * errorb, int * event);
 Bool glXQueryVersion (Display * dpy, int * maj, int * min);
 Bool glXIsDirect (Display * dpy, GLXContext ctx);
 int  glXGetConfig (Display * dpy, XVisualInfo * visual, int attrib, int * value);
 GLXContext glXGetCurrentContext ();
 GLXDrawable glXGetCurrentDrawable ();
 void  glXWaitGL ();
 void  glXWaitX ();
 void  glXUseXFont (Font font, int first, int count, int list);
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
  class glx
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    enum FeatureSet
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

    class DeviceConfig
    {
    public:

      bool m_featureSupported [glew::glx::FeatureSet::GLEW_GLX_FeatureSetCount];

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

    static void SetConfig (glew::glx::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::glx::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static glew::glx::DeviceConfig s_deviceConfig;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static const char * glXQueryExtensionsString (Display * dpy, int screen);
    static const char * glXQueryServerString (Display * dpy, int screen, int name);
    static const char * glXGetClientString (Display * dpy, int name);
    static Display * glXGetCurrentDisplay ();
    static GLXFBConfig * glXGetFBConfigs (Display * dpy, int screen, int * nelements);
    static GLXFBConfig * glXChooseFBConfig (Display * dpy, int screen, const int * attrib_list, int * nelements);
    static int glXGetFBConfigAttrib (Display * dpy, GLXFBConfig config, int attribute, int * value);
    static XVisualInfo * glXGetVisualFromFBConfig (Display * dpy, GLXFBConfig config);
    static GLXWindow glXCreateWindow (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
    static void glXDestroyWindow (Display * dpy, GLXWindow win);
    static GLXPixmap glXCreatePixmap (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
    static void glXDestroyPixmap (Display * dpy, GLXPixmap pixmap);
    static GLXPbuffer glXCreatePbuffer (Display * dpy, GLXFBConfig config, const int * attrib_list);
    static void glXDestroyPbuffer (Display * dpy, GLXPbuffer pbuf);
    static void glXQueryDrawable (Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
    static GLXContext glXCreateNewContext (Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
    static Bool glXMakeContextCurrent (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    static GLXDrawable glXGetCurrentReadDrawable ();
    static int glXQueryContext (Display * dpy, GLXContext ctx, int attribute, int * value);
    static void glXSelectEvent (Display * dpy, GLXDrawable draw, unsigned long event_mask);
    static void glXGetSelectedEvent (Display * dpy, GLXDrawable draw, unsigned long * event_mask);
    static __GLXextFuncPtr glXGetProcAddress (const GLubyte * procName);
    static unsigned int glXGetGPUIDsAMD (unsigned int maxCount, unsigned int * ids);
    static int glXGetGPUInfoAMD (unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
    static unsigned int glXGetContextGPUIDAMD (GLXContext ctx);
    static GLXContext glXCreateAssociatedContextAMD (unsigned int id, GLXContext share_list);
    static GLXContext glXCreateAssociatedContextAttribsAMD (unsigned int id, GLXContext share_context, const int * attribList);
    static Bool glXDeleteAssociatedContextAMD (GLXContext ctx);
    static Bool glXMakeAssociatedContextCurrentAMD (GLXContext ctx);
    static GLXContext glXGetCurrentAssociatedContextAMD ();
    static void glXBlitContextFramebufferAMD (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static GLXContext glXCreateContextAttribsARB (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
    static __GLXextFuncPtr glXGetProcAddressARB (const GLubyte * procName);
    static Display * glXGetCurrentDisplayEXT ();
    static int glXQueryContextInfoEXT (Display * dpy, GLXContext context, int attribute, int * value);
    static GLXContextID glXGetContextIDEXT (const GLXContext context);
    static GLXContext glXImportContextEXT (Display * dpy, GLXContextID contextID);
    static void glXFreeContextEXT (Display * dpy, GLXContext context);
    static void glXSwapIntervalEXT (Display * dpy, GLXDrawable drawable, int interval);
    static void glXBindTexImageEXT (Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
    static void glXReleaseTexImageEXT (Display * dpy, GLXDrawable drawable, int buffer);
    static unsigned int glXGetAGPOffsetMESA (const void * pointer);
    static void glXCopySubBufferMESA (Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
    static GLXPixmap glXCreateGLXPixmapMESA (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
    static Bool glXQueryCurrentRendererIntegerMESA (int attribute, unsigned int * value);
    static const char * glXQueryCurrentRendererStringMESA (int attribute);
    static Bool glXQueryRendererIntegerMESA (Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
    static const char * glXQueryRendererStringMESA (Display * dpy, int screen, int renderer, int attribute);
    static Bool glXReleaseBuffersMESA (Display * dpy, GLXDrawable drawable);
    static Bool glXSet3DfxModeMESA (int mode);
    static void glXCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    static void glXNamedCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    static void glXCopyImageSubDataNV (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
    static Bool glXDelayBeforeSwapNV (Display * dpy, GLXDrawable drawable, GLfloat seconds);
    static unsigned int * glXEnumerateVideoDevicesNV (Display * dpy, int screen, int * nelements);
    static int glXBindVideoDeviceNV (Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
    static Bool glXJoinSwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint group);
    static Bool glXBindSwapBarrierNV (Display * dpy, GLuint group, GLuint barrier);
    static Bool glXQuerySwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
    static Bool glXQueryMaxSwapGroupsNV (Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
    static Bool glXQueryFrameCountNV (Display * dpy, int screen, GLuint * count);
    static Bool glXResetFrameCountNV (Display * dpy, int screen);
    static int glXBindVideoCaptureDeviceNV (Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
    static GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV (Display * dpy, int screen, int * nelements);
    static void glXLockVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
    static int glXQueryVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
    static void glXReleaseVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
    static int glXGetVideoDeviceNV (Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
    static int glXReleaseVideoDeviceNV (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
    static int glXBindVideoImageNV (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
    static int glXReleaseVideoImageNV (Display * dpy, GLXPbuffer pbuf);
    static int glXSendPbufferToVideoNV (Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
    static int glXGetVideoInfoNV (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
    static Bool glXGetSyncValuesOML (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
    static Bool glXGetMscRateOML (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
    static int64_t glXSwapBuffersMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
    static Bool glXWaitForMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
    static Bool glXWaitForSbcOML (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
    static void glXCushionSGI (Display * dpy, Window window, float cushion);
    static Bool glXMakeCurrentReadSGI (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    static GLXDrawable glXGetCurrentReadDrawableSGI ();
    static int glXSwapIntervalSGI (int interval);
    static int glXGetVideoSyncSGI (unsigned int * count);
    static int glXWaitVideoSyncSGI (int divisor, int remainder, unsigned int * count);
    static Bool glXAssociateDMPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
    static int glXGetFBConfigAttribSGIX (Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
    static GLXFBConfigSGIX * glXChooseFBConfigSGIX (Display * dpy, int screen, int * attrib_list, int * nelements);
    static GLXPixmap glXCreateGLXPixmapWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
    static GLXContext glXCreateContextWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
    static XVisualInfo * glXGetVisualFromFBConfigSGIX (Display * dpy, GLXFBConfigSGIX config);
    static GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX (Display * dpy, XVisualInfo * vis);
    static GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX (Display * dpy, int * npipes);
    static int glXHyperpipeConfigSGIX (Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
    static GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX (Display * dpy, int hpId, int * npipes);
    static int glXDestroyHyperpipeConfigSGIX (Display * dpy, int hpId);
    static int glXBindHyperpipeSGIX (Display * dpy, int hpId);
    static int glXQueryHyperpipeBestAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
    static int glXHyperpipeAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * attribList);
    static int glXQueryHyperpipeAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
    static GLXPbufferSGIX glXCreateGLXPbufferSGIX (Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
    static void glXDestroyGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf);
    static int glXQueryGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
    static void glXSelectEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long mask);
    static void glXGetSelectedEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long * mask);
    static void glXBindSwapBarrierSGIX (Display * dpy, GLXDrawable drawable, int barrier);
    static Bool glXQueryMaxSwapBarriersSGIX (Display * dpy, int screen, int * max);
    static void glXJoinSwapGroupSGIX (Display * dpy, GLXDrawable drawable, GLXDrawable member);
    static int glXBindChannelToWindowSGIX (Display * display, int screen, int channel, Window window);
    static int glXChannelRectSGIX (Display * display, int screen, int channel, int x, int y, int w, int h);
    static int glXQueryChannelRectSGIX (Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
    static int glXQueryChannelDeltasSGIX (Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
    static int glXChannelRectSyncSGIX (Display * display, int screen, int channel, GLenum synctype);
    static GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX (Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
    static void glXDestroyGLXVideoSourceSGIX (Display * dpy, GLXVideoSourceSGIX glxvideosource);
    static Status glXGetTransparentIndexSUN (Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glXQueryExtensionsString glew::glx::glXQueryExtensionsString
#define glXQueryServerString glew::glx::glXQueryServerString
#define glXGetClientString glew::glx::glXGetClientString
#define glXGetCurrentDisplay glew::glx::glXGetCurrentDisplay
#define glXGetFBConfigs glew::glx::glXGetFBConfigs
#define glXChooseFBConfig glew::glx::glXChooseFBConfig
#define glXGetFBConfigAttrib glew::glx::glXGetFBConfigAttrib
#define glXGetVisualFromFBConfig glew::glx::glXGetVisualFromFBConfig
#define glXCreateWindow glew::glx::glXCreateWindow
#define glXDestroyWindow glew::glx::glXDestroyWindow
#define glXCreatePixmap glew::glx::glXCreatePixmap
#define glXDestroyPixmap glew::glx::glXDestroyPixmap
#define glXCreatePbuffer glew::glx::glXCreatePbuffer
#define glXDestroyPbuffer glew::glx::glXDestroyPbuffer
#define glXQueryDrawable glew::glx::glXQueryDrawable
#define glXCreateNewContext glew::glx::glXCreateNewContext
#define glXMakeContextCurrent glew::glx::glXMakeContextCurrent
#define glXGetCurrentReadDrawable glew::glx::glXGetCurrentReadDrawable
#define glXQueryContext glew::glx::glXQueryContext
#define glXSelectEvent glew::glx::glXSelectEvent
#define glXGetSelectedEvent glew::glx::glXGetSelectedEvent
#define glXGetProcAddress glew::glx::glXGetProcAddress
#define glXGetGPUIDsAMD glew::glx::glXGetGPUIDsAMD
#define glXGetGPUInfoAMD glew::glx::glXGetGPUInfoAMD
#define glXGetContextGPUIDAMD glew::glx::glXGetContextGPUIDAMD
#define glXCreateAssociatedContextAMD glew::glx::glXCreateAssociatedContextAMD
#define glXCreateAssociatedContextAttribsAMD glew::glx::glXCreateAssociatedContextAttribsAMD
#define glXDeleteAssociatedContextAMD glew::glx::glXDeleteAssociatedContextAMD
#define glXMakeAssociatedContextCurrentAMD glew::glx::glXMakeAssociatedContextCurrentAMD
#define glXGetCurrentAssociatedContextAMD glew::glx::glXGetCurrentAssociatedContextAMD
#define glXBlitContextFramebufferAMD glew::glx::glXBlitContextFramebufferAMD
#define glXCreateContextAttribsARB glew::glx::glXCreateContextAttribsARB
#define glXGetProcAddressARB glew::glx::glXGetProcAddressARB
#define glXGetCurrentDisplayEXT glew::glx::glXGetCurrentDisplayEXT
#define glXQueryContextInfoEXT glew::glx::glXQueryContextInfoEXT
#define glXGetContextIDEXT glew::glx::glXGetContextIDEXT
#define glXImportContextEXT glew::glx::glXImportContextEXT
#define glXFreeContextEXT glew::glx::glXFreeContextEXT
#define glXSwapIntervalEXT glew::glx::glXSwapIntervalEXT
#define glXBindTexImageEXT glew::glx::glXBindTexImageEXT
#define glXReleaseTexImageEXT glew::glx::glXReleaseTexImageEXT
#define glXGetAGPOffsetMESA glew::glx::glXGetAGPOffsetMESA
#define glXCopySubBufferMESA glew::glx::glXCopySubBufferMESA
#define glXCreateGLXPixmapMESA glew::glx::glXCreateGLXPixmapMESA
#define glXQueryCurrentRendererIntegerMESA glew::glx::glXQueryCurrentRendererIntegerMESA
#define glXQueryCurrentRendererStringMESA glew::glx::glXQueryCurrentRendererStringMESA
#define glXQueryRendererIntegerMESA glew::glx::glXQueryRendererIntegerMESA
#define glXQueryRendererStringMESA glew::glx::glXQueryRendererStringMESA
#define glXReleaseBuffersMESA glew::glx::glXReleaseBuffersMESA
#define glXSet3DfxModeMESA glew::glx::glXSet3DfxModeMESA
#define glXCopyBufferSubDataNV glew::glx::glXCopyBufferSubDataNV
#define glXNamedCopyBufferSubDataNV glew::glx::glXNamedCopyBufferSubDataNV
#define glXCopyImageSubDataNV glew::glx::glXCopyImageSubDataNV
#define glXDelayBeforeSwapNV glew::glx::glXDelayBeforeSwapNV
#define glXEnumerateVideoDevicesNV glew::glx::glXEnumerateVideoDevicesNV
#define glXBindVideoDeviceNV glew::glx::glXBindVideoDeviceNV
#define glXJoinSwapGroupNV glew::glx::glXJoinSwapGroupNV
#define glXBindSwapBarrierNV glew::glx::glXBindSwapBarrierNV
#define glXQuerySwapGroupNV glew::glx::glXQuerySwapGroupNV
#define glXQueryMaxSwapGroupsNV glew::glx::glXQueryMaxSwapGroupsNV
#define glXQueryFrameCountNV glew::glx::glXQueryFrameCountNV
#define glXResetFrameCountNV glew::glx::glXResetFrameCountNV
#define glXBindVideoCaptureDeviceNV glew::glx::glXBindVideoCaptureDeviceNV
#define glXEnumerateVideoCaptureDevicesNV glew::glx::glXEnumerateVideoCaptureDevicesNV
#define glXLockVideoCaptureDeviceNV glew::glx::glXLockVideoCaptureDeviceNV
#define glXQueryVideoCaptureDeviceNV glew::glx::glXQueryVideoCaptureDeviceNV
#define glXReleaseVideoCaptureDeviceNV glew::glx::glXReleaseVideoCaptureDeviceNV
#define glXGetVideoDeviceNV glew::glx::glXGetVideoDeviceNV
#define glXReleaseVideoDeviceNV glew::glx::glXReleaseVideoDeviceNV
#define glXBindVideoImageNV glew::glx::glXBindVideoImageNV
#define glXReleaseVideoImageNV glew::glx::glXReleaseVideoImageNV
#define glXSendPbufferToVideoNV glew::glx::glXSendPbufferToVideoNV
#define glXGetVideoInfoNV glew::glx::glXGetVideoInfoNV
#define glXGetSyncValuesOML glew::glx::glXGetSyncValuesOML
#define glXGetMscRateOML glew::glx::glXGetMscRateOML
#define glXSwapBuffersMscOML glew::glx::glXSwapBuffersMscOML
#define glXWaitForMscOML glew::glx::glXWaitForMscOML
#define glXWaitForSbcOML glew::glx::glXWaitForSbcOML
#define glXCushionSGI glew::glx::glXCushionSGI
#define glXMakeCurrentReadSGI glew::glx::glXMakeCurrentReadSGI
#define glXGetCurrentReadDrawableSGI glew::glx::glXGetCurrentReadDrawableSGI
#define glXSwapIntervalSGI glew::glx::glXSwapIntervalSGI
#define glXGetVideoSyncSGI glew::glx::glXGetVideoSyncSGI
#define glXWaitVideoSyncSGI glew::glx::glXWaitVideoSyncSGI
#define glXAssociateDMPbufferSGIX glew::glx::glXAssociateDMPbufferSGIX
#define glXGetFBConfigAttribSGIX glew::glx::glXGetFBConfigAttribSGIX
#define glXChooseFBConfigSGIX glew::glx::glXChooseFBConfigSGIX
#define glXCreateGLXPixmapWithConfigSGIX glew::glx::glXCreateGLXPixmapWithConfigSGIX
#define glXCreateContextWithConfigSGIX glew::glx::glXCreateContextWithConfigSGIX
#define glXGetVisualFromFBConfigSGIX glew::glx::glXGetVisualFromFBConfigSGIX
#define glXGetFBConfigFromVisualSGIX glew::glx::glXGetFBConfigFromVisualSGIX
#define glXQueryHyperpipeNetworkSGIX glew::glx::glXQueryHyperpipeNetworkSGIX
#define glXHyperpipeConfigSGIX glew::glx::glXHyperpipeConfigSGIX
#define glXQueryHyperpipeConfigSGIX glew::glx::glXQueryHyperpipeConfigSGIX
#define glXDestroyHyperpipeConfigSGIX glew::glx::glXDestroyHyperpipeConfigSGIX
#define glXBindHyperpipeSGIX glew::glx::glXBindHyperpipeSGIX
#define glXQueryHyperpipeBestAttribSGIX glew::glx::glXQueryHyperpipeBestAttribSGIX
#define glXHyperpipeAttribSGIX glew::glx::glXHyperpipeAttribSGIX
#define glXQueryHyperpipeAttribSGIX glew::glx::glXQueryHyperpipeAttribSGIX
#define glXCreateGLXPbufferSGIX glew::glx::glXCreateGLXPbufferSGIX
#define glXDestroyGLXPbufferSGIX glew::glx::glXDestroyGLXPbufferSGIX
#define glXQueryGLXPbufferSGIX glew::glx::glXQueryGLXPbufferSGIX
#define glXSelectEventSGIX glew::glx::glXSelectEventSGIX
#define glXGetSelectedEventSGIX glew::glx::glXGetSelectedEventSGIX
#define glXBindSwapBarrierSGIX glew::glx::glXBindSwapBarrierSGIX
#define glXQueryMaxSwapBarriersSGIX glew::glx::glXQueryMaxSwapBarriersSGIX
#define glXJoinSwapGroupSGIX glew::glx::glXJoinSwapGroupSGIX
#define glXBindChannelToWindowSGIX glew::glx::glXBindChannelToWindowSGIX
#define glXChannelRectSGIX glew::glx::glXChannelRectSGIX
#define glXQueryChannelRectSGIX glew::glx::glXQueryChannelRectSGIX
#define glXQueryChannelDeltasSGIX glew::glx::glXQueryChannelDeltasSGIX
#define glXChannelRectSyncSGIX glew::glx::glXChannelRectSyncSGIX
#define glXCreateGLXVideoSourceSGIX glew::glx::glXCreateGLXVideoSourceSGIX
#define glXDestroyGLXVideoSourceSGIX glew::glx::glXDestroyGLXVideoSourceSGIX
#define glXGetTransparentIndexSUN glew::glx::glXGetTransparentIndexSUN

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLX_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
