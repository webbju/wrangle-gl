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
      // Features
      GLEW_GLX_VERSION_1_0,
      GLEW_GLX_VERSION_1_1,
      GLEW_GLX_VERSION_1_2,
      GLEW_GLX_VERSION_1_3,
      GLEW_GLX_VERSION_1_4,
      // Extensions
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
      GLEW_GL_FeatureSetCount
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::glx::FeatureSet::GLEW_GL_FeatureSetCount];

    public:

      bool IsSupported (glew::glx::FeatureSet feature);
      bool IsSupported (const char *feature);

      // GLX_VERSION_1_0
      PFNGLXCHOOSEVISUALPROC glXChooseVisual;
      PFNGLXCREATECONTEXTPROC glXCreateContext;
      PFNGLXDESTROYCONTEXTPROC glXDestroyContext;
      PFNGLXMAKECURRENTPROC glXMakeCurrent;
      PFNGLXCOPYCONTEXTPROC glXCopyContext;
      PFNGLXSWAPBUFFERSPROC glXSwapBuffers;
      PFNGLXCREATEGLXPIXMAPPROC glXCreateGLXPixmap;
      PFNGLXDESTROYGLXPIXMAPPROC glXDestroyGLXPixmap;
      PFNGLXQUERYEXTENSIONPROC glXQueryExtension;
      PFNGLXQUERYVERSIONPROC glXQueryVersion;
      PFNGLXISDIRECTPROC glXIsDirect;
      PFNGLXGETCONFIGPROC glXGetConfig;
      PFNGLXGETCURRENTCONTEXTPROC glXGetCurrentContext;
      PFNGLXGETCURRENTDRAWABLEPROC glXGetCurrentDrawable;
      PFNGLXWAITGLPROC glXWaitGL;
      PFNGLXWAITXPROC glXWaitX;
      PFNGLXUSEXFONTPROC glXUseXFont;

      // GLX_VERSION_1_1
      PFNGLXQUERYEXTENSIONSSTRINGPROC glXQueryExtensionsString;
      PFNGLXQUERYSERVERSTRINGPROC glXQueryServerString;
      PFNGLXGETCLIENTSTRINGPROC glXGetClientString;

      // GLX_VERSION_1_2
      PFNGLXGETCURRENTDISPLAYPROC glXGetCurrentDisplay;

      // GLX_VERSION_1_3
      PFNGLXGETFBCONFIGSPROC glXGetFBConfigs;
      PFNGLXCHOOSEFBCONFIGPROC glXChooseFBConfig;
      PFNGLXGETFBCONFIGATTRIBPROC glXGetFBConfigAttrib;
      PFNGLXGETVISUALFROMFBCONFIGPROC glXGetVisualFromFBConfig;
      PFNGLXCREATEWINDOWPROC glXCreateWindow;
      PFNGLXDESTROYWINDOWPROC glXDestroyWindow;
      PFNGLXCREATEPIXMAPPROC glXCreatePixmap;
      PFNGLXDESTROYPIXMAPPROC glXDestroyPixmap;
      PFNGLXCREATEPBUFFERPROC glXCreatePbuffer;
      PFNGLXDESTROYPBUFFERPROC glXDestroyPbuffer;
      PFNGLXQUERYDRAWABLEPROC glXQueryDrawable;
      PFNGLXCREATENEWCONTEXTPROC glXCreateNewContext;
      PFNGLXMAKECONTEXTCURRENTPROC glXMakeContextCurrent;
      PFNGLXGETCURRENTREADDRAWABLEPROC glXGetCurrentReadDrawable;
      PFNGLXQUERYCONTEXTPROC glXQueryContext;
      PFNGLXSELECTEVENTPROC glXSelectEvent;
      PFNGLXGETSELECTEDEVENTPROC glXGetSelectedEvent;

      // GLX_VERSION_1_4
      PFNGLXGETPROCADDRESSPROC glXGetProcAddress;

      // GLX_AMD_gpu_association
      PFNGLXGETGPUIDSAMDPROC glXGetGPUIDsAMD;
      PFNGLXGETGPUINFOAMDPROC glXGetGPUInfoAMD;
      PFNGLXGETCONTEXTGPUIDAMDPROC glXGetContextGPUIDAMD;
      PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC glXCreateAssociatedContextAMD;
      PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC glXCreateAssociatedContextAttribsAMD;
      PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC glXDeleteAssociatedContextAMD;
      PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC glXMakeAssociatedContextCurrentAMD;
      PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC glXGetCurrentAssociatedContextAMD;
      PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC glXBlitContextFramebufferAMD;

      // GLX_ARB_create_context
      PFNGLXCREATECONTEXTATTRIBSARBPROC glXCreateContextAttribsARB;

      // GLX_ARB_get_proc_address
      PFNGLXGETPROCADDRESSARBPROC glXGetProcAddressARB;

      // GLX_EXT_import_context
      PFNGLXGETCURRENTDISPLAYEXTPROC glXGetCurrentDisplayEXT;
      PFNGLXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT;
      PFNGLXGETCONTEXTIDEXTPROC glXGetContextIDEXT;
      PFNGLXIMPORTCONTEXTEXTPROC glXImportContextEXT;
      PFNGLXFREECONTEXTEXTPROC glXFreeContextEXT;

      // GLX_EXT_swap_control
      PFNGLXSWAPINTERVALEXTPROC glXSwapIntervalEXT;

      // GLX_EXT_texture_from_pixmap
      PFNGLXBINDTEXIMAGEEXTPROC glXBindTexImageEXT;
      PFNGLXRELEASETEXIMAGEEXTPROC glXReleaseTexImageEXT;

      // GLX_MESA_agp_offset
      PFNGLXGETAGPOFFSETMESAPROC glXGetAGPOffsetMESA;

      // GLX_MESA_copy_sub_buffer
      PFNGLXCOPYSUBBUFFERMESAPROC glXCopySubBufferMESA;

      // GLX_MESA_pixmap_colormap
      PFNGLXCREATEGLXPIXMAPMESAPROC glXCreateGLXPixmapMESA;

      // GLX_MESA_query_renderer
      PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC glXQueryCurrentRendererIntegerMESA;
      PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC glXQueryCurrentRendererStringMESA;
      PFNGLXQUERYRENDERERINTEGERMESAPROC glXQueryRendererIntegerMESA;
      PFNGLXQUERYRENDERERSTRINGMESAPROC glXQueryRendererStringMESA;

      // GLX_MESA_release_buffers
      PFNGLXRELEASEBUFFERSMESAPROC glXReleaseBuffersMESA;

      // GLX_MESA_set_3dfx_mode
      PFNGLXSET3DFXMODEMESAPROC glXSet3DfxModeMESA;

      // GLX_NV_copy_buffer
      PFNGLXCOPYBUFFERSUBDATANVPROC glXCopyBufferSubDataNV;
      PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC glXNamedCopyBufferSubDataNV;

      // GLX_NV_copy_image
      PFNGLXCOPYIMAGESUBDATANVPROC glXCopyImageSubDataNV;

      // GLX_NV_delay_before_swap
      PFNGLXDELAYBEFORESWAPNVPROC glXDelayBeforeSwapNV;

      // GLX_NV_present_video
      PFNGLXENUMERATEVIDEODEVICESNVPROC glXEnumerateVideoDevicesNV;
      PFNGLXBINDVIDEODEVICENVPROC glXBindVideoDeviceNV;

      // GLX_NV_swap_group
      PFNGLXJOINSWAPGROUPNVPROC glXJoinSwapGroupNV;
      PFNGLXBINDSWAPBARRIERNVPROC glXBindSwapBarrierNV;
      PFNGLXQUERYSWAPGROUPNVPROC glXQuerySwapGroupNV;
      PFNGLXQUERYMAXSWAPGROUPSNVPROC glXQueryMaxSwapGroupsNV;
      PFNGLXQUERYFRAMECOUNTNVPROC glXQueryFrameCountNV;
      PFNGLXRESETFRAMECOUNTNVPROC glXResetFrameCountNV;

      // GLX_NV_video_capture
      PFNGLXBINDVIDEOCAPTUREDEVICENVPROC glXBindVideoCaptureDeviceNV;
      PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC glXEnumerateVideoCaptureDevicesNV;
      PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC glXLockVideoCaptureDeviceNV;
      PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC glXQueryVideoCaptureDeviceNV;
      PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC glXReleaseVideoCaptureDeviceNV;

      // GLX_NV_video_out
      PFNGLXGETVIDEODEVICENVPROC glXGetVideoDeviceNV;
      PFNGLXRELEASEVIDEODEVICENVPROC glXReleaseVideoDeviceNV;
      PFNGLXBINDVIDEOIMAGENVPROC glXBindVideoImageNV;
      PFNGLXRELEASEVIDEOIMAGENVPROC glXReleaseVideoImageNV;
      PFNGLXSENDPBUFFERTOVIDEONVPROC glXSendPbufferToVideoNV;
      PFNGLXGETVIDEOINFONVPROC glXGetVideoInfoNV;

      // GLX_OML_sync_control
      PFNGLXGETSYNCVALUESOMLPROC glXGetSyncValuesOML;
      PFNGLXGETMSCRATEOMLPROC glXGetMscRateOML;
      PFNGLXSWAPBUFFERSMSCOMLPROC glXSwapBuffersMscOML;
      PFNGLXWAITFORMSCOMLPROC glXWaitForMscOML;
      PFNGLXWAITFORSBCOMLPROC glXWaitForSbcOML;

      // GLX_SGI_cushion
      PFNGLXCUSHIONSGIPROC glXCushionSGI;

      // GLX_SGI_make_current_read
      PFNGLXMAKECURRENTREADSGIPROC glXMakeCurrentReadSGI;
      PFNGLXGETCURRENTREADDRAWABLESGIPROC glXGetCurrentReadDrawableSGI;

      // GLX_SGI_swap_control
      PFNGLXSWAPINTERVALSGIPROC glXSwapIntervalSGI;

      // GLX_SGI_video_sync
      PFNGLXGETVIDEOSYNCSGIPROC glXGetVideoSyncSGI;
      PFNGLXWAITVIDEOSYNCSGIPROC glXWaitVideoSyncSGI;

      // GLX_SGIX_dmbuffer
      PFNGLXASSOCIATEDMPBUFFERSGIXPROC glXAssociateDMPbufferSGIX;

      // GLX_SGIX_fbconfig
      PFNGLXGETFBCONFIGATTRIBSGIXPROC glXGetFBConfigAttribSGIX;
      PFNGLXCHOOSEFBCONFIGSGIXPROC glXChooseFBConfigSGIX;
      PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glXCreateGLXPixmapWithConfigSGIX;
      PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glXCreateContextWithConfigSGIX;
      PFNGLXGETVISUALFROMFBCONFIGSGIXPROC glXGetVisualFromFBConfigSGIX;
      PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glXGetFBConfigFromVisualSGIX;

      // GLX_SGIX_hyperpipe
      PFNGLXQUERYHYPERPIPENETWORKSGIXPROC glXQueryHyperpipeNetworkSGIX;
      PFNGLXHYPERPIPECONFIGSGIXPROC glXHyperpipeConfigSGIX;
      PFNGLXQUERYHYPERPIPECONFIGSGIXPROC glXQueryHyperpipeConfigSGIX;
      PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC glXDestroyHyperpipeConfigSGIX;
      PFNGLXBINDHYPERPIPESGIXPROC glXBindHyperpipeSGIX;
      PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC glXQueryHyperpipeBestAttribSGIX;
      PFNGLXHYPERPIPEATTRIBSGIXPROC glXHyperpipeAttribSGIX;
      PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC glXQueryHyperpipeAttribSGIX;

      // GLX_SGIX_pbuffer
      PFNGLXCREATEGLXPBUFFERSGIXPROC glXCreateGLXPbufferSGIX;
      PFNGLXDESTROYGLXPBUFFERSGIXPROC glXDestroyGLXPbufferSGIX;
      PFNGLXQUERYGLXPBUFFERSGIXPROC glXQueryGLXPbufferSGIX;
      PFNGLXSELECTEVENTSGIXPROC glXSelectEventSGIX;
      PFNGLXGETSELECTEDEVENTSGIXPROC glXGetSelectedEventSGIX;

      // GLX_SGIX_swap_barrier
      PFNGLXBINDSWAPBARRIERSGIXPROC glXBindSwapBarrierSGIX;
      PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glXQueryMaxSwapBarriersSGIX;

      // GLX_SGIX_swap_group
      PFNGLXJOINSWAPGROUPSGIXPROC glXJoinSwapGroupSGIX;

      // GLX_SGIX_video_resize
      PFNGLXBINDCHANNELTOWINDOWSGIXPROC glXBindChannelToWindowSGIX;
      PFNGLXCHANNELRECTSGIXPROC glXChannelRectSGIX;
      PFNGLXQUERYCHANNELRECTSGIXPROC glXQueryChannelRectSGIX;
      PFNGLXQUERYCHANNELDELTASSGIXPROC glXQueryChannelDeltasSGIX;
      PFNGLXCHANNELRECTSYNCSGIXPROC glXChannelRectSyncSGIX;

      // GLX_SGIX_video_source
      PFNGLXCREATEGLXVIDEOSOURCESGIXPROC glXCreateGLXVideoSourceSGIX;
      PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC glXDestroyGLXVideoSourceSGIX;

      // GLX_SUN_get_transparent_index
      PFNGLXGETTRANSPARENTINDEXSUNPROC glXGetTransparentIndexSUN;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (glew::glx::DeviceState *deviceState);

    static void Deinitialise ();

    static glew::glx::DeviceState *GetDeviceState ();

  protected:

    static glew::glx::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    // GLX_VERSION_1_0
    XVisualInfo * glXChooseVisual (Display * dpy, int  screen, int * attribList);
    GLXContext glXCreateContext (Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
    void  glXDestroyContext (Display * dpy, GLXContext ctx);
    Bool glXMakeCurrent (Display * dpy, GLXDrawable drawable, GLXContext ctx);
    void  glXCopyContext (Display * dpy, GLXContext src, GLXContext dst, unsigned long  mask);
    void  glXSwapBuffers (Display * dpy, GLXDrawable drawable);
    GLXPixmap glXCreateGLXPixmap (Display * dpy, XVisualInfo * visual, Pixmap pixmap);
    void  glXDestroyGLXPixmap (Display * dpy, GLXPixmap pixmap);
    Bool glXQueryExtension (Display * dpy, int * errorb, int * event);
    Bool glXQueryVersion (Display * dpy, int * maj, int * min);
    Bool glXIsDirect (Display * dpy, GLXContext ctx);
    int  glXGetConfig (Display * dpy, XVisualInfo * visual, int  attrib, int * value);
    GLXContext glXGetCurrentContext ();
    GLXDrawable glXGetCurrentDrawable ();
    void  glXWaitGL ();
    void  glXWaitX ();
    void  glXUseXFont (Font font, int  first, int  count, int  list);

    // GLX_VERSION_1_1
    const char * glXQueryExtensionsString (Display * dpy, int  screen);
    const char * glXQueryServerString (Display * dpy, int  screen, int  name);
    const char * glXGetClientString (Display * dpy, int  name);

    // GLX_VERSION_1_2
    Display * glXGetCurrentDisplay ();

    // GLX_VERSION_1_3
    GLXFBConfig * glXGetFBConfigs (Display * dpy, int  screen, int * nelements);
    GLXFBConfig * glXChooseFBConfig (Display * dpy, int  screen, const int * attrib_list, int * nelements);
    int  glXGetFBConfigAttrib (Display * dpy, GLXFBConfig config, int  attribute, int * value);
    XVisualInfo * glXGetVisualFromFBConfig (Display * dpy, GLXFBConfig config);
    GLXWindow glXCreateWindow (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
    void  glXDestroyWindow (Display * dpy, GLXWindow win);
    GLXPixmap glXCreatePixmap (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
    void  glXDestroyPixmap (Display * dpy, GLXPixmap pixmap);
    GLXPbuffer glXCreatePbuffer (Display * dpy, GLXFBConfig config, const int * attrib_list);
    void  glXDestroyPbuffer (Display * dpy, GLXPbuffer pbuf);
    void  glXQueryDrawable (Display * dpy, GLXDrawable draw, int  attribute, unsigned int * value);
    GLXContext glXCreateNewContext (Display * dpy, GLXFBConfig config, int  render_type, GLXContext share_list, Bool direct);
    Bool glXMakeContextCurrent (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    GLXDrawable glXGetCurrentReadDrawable ();
    int  glXQueryContext (Display * dpy, GLXContext ctx, int  attribute, int * value);
    void  glXSelectEvent (Display * dpy, GLXDrawable draw, unsigned long  event_mask);
    void  glXGetSelectedEvent (Display * dpy, GLXDrawable draw, unsigned long * event_mask);

    // GLX_VERSION_1_4
    __GLXextFuncPtr glXGetProcAddress (const GLubyte * procName);

    // GLX_AMD_gpu_association
    unsigned int  glXGetGPUIDsAMD (unsigned int  maxCount, unsigned int * ids);
    int  glXGetGPUInfoAMD (unsigned int  id, int  property, GLenum dataType, unsigned int  size, void * data);
    unsigned int  glXGetContextGPUIDAMD (GLXContext ctx);
    GLXContext glXCreateAssociatedContextAMD (unsigned int  id, GLXContext share_list);
    GLXContext glXCreateAssociatedContextAttribsAMD (unsigned int  id, GLXContext share_context, const int * attribList);
    Bool glXDeleteAssociatedContextAMD (GLXContext ctx);
    Bool glXMakeAssociatedContextCurrentAMD (GLXContext ctx);
    GLXContext glXGetCurrentAssociatedContextAMD ();
    void  glXBlitContextFramebufferAMD (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

    // GLX_ARB_create_context
    GLXContext glXCreateContextAttribsARB (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);

    // GLX_ARB_get_proc_address
    __GLXextFuncPtr glXGetProcAddressARB (const GLubyte * procName);

    // GLX_EXT_import_context
    Display * glXGetCurrentDisplayEXT ();
    int  glXQueryContextInfoEXT (Display * dpy, GLXContext context, int  attribute, int * value);
    GLXContextID glXGetContextIDEXT (const GLXContext context);
    GLXContext glXImportContextEXT (Display * dpy, GLXContextID contextID);
    void  glXFreeContextEXT (Display * dpy, GLXContext context);

    // GLX_EXT_swap_control
    void  glXSwapIntervalEXT (Display * dpy, GLXDrawable drawable, int  interval);

    // GLX_EXT_texture_from_pixmap
    void  glXBindTexImageEXT (Display * dpy, GLXDrawable drawable, int  buffer, const int * attrib_list);
    void  glXReleaseTexImageEXT (Display * dpy, GLXDrawable drawable, int  buffer);

    // GLX_MESA_agp_offset
    unsigned int  glXGetAGPOffsetMESA (const void * pointer);

    // GLX_MESA_copy_sub_buffer
    void  glXCopySubBufferMESA (Display * dpy, GLXDrawable drawable, int  x, int  y, int  width, int  height);

    // GLX_MESA_pixmap_colormap
    GLXPixmap glXCreateGLXPixmapMESA (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);

    // GLX_MESA_query_renderer
    Bool glXQueryCurrentRendererIntegerMESA (int  attribute, unsigned int * value);
    const char * glXQueryCurrentRendererStringMESA (int  attribute);
    Bool glXQueryRendererIntegerMESA (Display * dpy, int  screen, int  renderer, int  attribute, unsigned int * value);
    const char * glXQueryRendererStringMESA (Display * dpy, int  screen, int  renderer, int  attribute);

    // GLX_MESA_release_buffers
    Bool glXReleaseBuffersMESA (Display * dpy, GLXDrawable drawable);

    // GLX_MESA_set_3dfx_mode
    Bool glXSet3DfxModeMESA (int  mode);

    // GLX_NV_copy_buffer
    void  glXCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    void  glXNamedCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

    // GLX_NV_copy_image
    void  glXCopyImageSubDataNV (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

    // GLX_NV_delay_before_swap
    Bool glXDelayBeforeSwapNV (Display * dpy, GLXDrawable drawable, GLfloat seconds);

    // GLX_NV_present_video
    unsigned int * glXEnumerateVideoDevicesNV (Display * dpy, int  screen, int * nelements);
    int  glXBindVideoDeviceNV (Display * dpy, unsigned int  video_slot, unsigned int  video_device, const int * attrib_list);

    // GLX_NV_swap_group
    Bool glXJoinSwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint group);
    Bool glXBindSwapBarrierNV (Display * dpy, GLuint group, GLuint barrier);
    Bool glXQuerySwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
    Bool glXQueryMaxSwapGroupsNV (Display * dpy, int  screen, GLuint * maxGroups, GLuint * maxBarriers);
    Bool glXQueryFrameCountNV (Display * dpy, int  screen, GLuint * count);
    Bool glXResetFrameCountNV (Display * dpy, int  screen);

    // GLX_NV_video_capture
    int  glXBindVideoCaptureDeviceNV (Display * dpy, unsigned int  video_capture_slot, GLXVideoCaptureDeviceNV device);
    GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV (Display * dpy, int  screen, int * nelements);
    void  glXLockVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
    int  glXQueryVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device, int  attribute, int * value);
    void  glXReleaseVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);

    // GLX_NV_video_out
    int  glXGetVideoDeviceNV (Display * dpy, int  screen, int  numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
    int  glXReleaseVideoDeviceNV (Display * dpy, int  screen, GLXVideoDeviceNV VideoDevice);
    int  glXBindVideoImageNV (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int  iVideoBuffer);
    int  glXReleaseVideoImageNV (Display * dpy, GLXPbuffer pbuf);
    int  glXSendPbufferToVideoNV (Display * dpy, GLXPbuffer pbuf, int  iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
    int  glXGetVideoInfoNV (Display * dpy, int  screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);

    // GLX_OML_sync_control
    Bool glXGetSyncValuesOML (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
    Bool glXGetMscRateOML (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
    int64_t glXSwapBuffersMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
    Bool glXWaitForMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
    Bool glXWaitForSbcOML (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);

    // GLX_SGI_cushion
    void  glXCushionSGI (Display * dpy, Window window, float  cushion);

    // GLX_SGI_make_current_read
    Bool glXMakeCurrentReadSGI (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    GLXDrawable glXGetCurrentReadDrawableSGI ();

    // GLX_SGI_swap_control
    int  glXSwapIntervalSGI (int  interval);

    // GLX_SGI_video_sync
    int  glXGetVideoSyncSGI (unsigned int * count);
    int  glXWaitVideoSyncSGI (int  divisor, int  remainder, unsigned int * count);

    // GLX_SGIX_dmbuffer
    Bool glXAssociateDMPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);

    // GLX_SGIX_fbconfig
    int  glXGetFBConfigAttribSGIX (Display * dpy, GLXFBConfigSGIX config, int  attribute, int * value);
    GLXFBConfigSGIX * glXChooseFBConfigSGIX (Display * dpy, int  screen, int * attrib_list, int * nelements);
    GLXPixmap glXCreateGLXPixmapWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
    GLXContext glXCreateContextWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, int  render_type, GLXContext share_list, Bool direct);
    XVisualInfo * glXGetVisualFromFBConfigSGIX (Display * dpy, GLXFBConfigSGIX config);
    GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX (Display * dpy, XVisualInfo * vis);

    // GLX_SGIX_hyperpipe
    GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX (Display * dpy, int * npipes);
    int  glXHyperpipeConfigSGIX (Display * dpy, int  networkId, int  npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
    GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX (Display * dpy, int  hpId, int * npipes);
    int  glXDestroyHyperpipeConfigSGIX (Display * dpy, int  hpId);
    int  glXBindHyperpipeSGIX (Display * dpy, int  hpId);
    int  glXQueryHyperpipeBestAttribSGIX (Display * dpy, int  timeSlice, int  attrib, int  size, void * attribList, void * returnAttribList);
    int  glXHyperpipeAttribSGIX (Display * dpy, int  timeSlice, int  attrib, int  size, void * attribList);
    int  glXQueryHyperpipeAttribSGIX (Display * dpy, int  timeSlice, int  attrib, int  size, void * returnAttribList);

    // GLX_SGIX_pbuffer
    GLXPbufferSGIX glXCreateGLXPbufferSGIX (Display * dpy, GLXFBConfigSGIX config, unsigned int  width, unsigned int  height, int * attrib_list);
    void  glXDestroyGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf);
    int  glXQueryGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf, int  attribute, unsigned int * value);
    void  glXSelectEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long  mask);
    void  glXGetSelectedEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long * mask);

    // GLX_SGIX_swap_barrier
    void  glXBindSwapBarrierSGIX (Display * dpy, GLXDrawable drawable, int  barrier);
    Bool glXQueryMaxSwapBarriersSGIX (Display * dpy, int  screen, int * max);

    // GLX_SGIX_swap_group
    void  glXJoinSwapGroupSGIX (Display * dpy, GLXDrawable drawable, GLXDrawable member);

    // GLX_SGIX_video_resize
    int  glXBindChannelToWindowSGIX (Display * display, int  screen, int  channel, Window window);
    int  glXChannelRectSGIX (Display * display, int  screen, int  channel, int  x, int  y, int  w, int  h);
    int  glXQueryChannelRectSGIX (Display * display, int  screen, int  channel, int * dx, int * dy, int * dw, int * dh);
    int  glXQueryChannelDeltasSGIX (Display * display, int  screen, int  channel, int * x, int * y, int * w, int * h);
    int  glXChannelRectSyncSGIX (Display * display, int  screen, int  channel, GLenum synctype);

    // GLX_SGIX_video_source
    GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX (Display * display, int  screen, VLServer server, VLPath path, int  nodeClass, VLNode drainNode);
    void  glXDestroyGLXVideoSourceSGIX (Display * dpy, GLXVideoSourceSGIX glxvideosource);

    // GLX_SUN_get_transparent_index
    Status glXGetTransparentIndexSUN (Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glXAssociateDMPbufferSGIX glew::glx::glXAssociateDMPbufferSGIX
#define glXBindChannelToWindowSGIX glew::glx::glXBindChannelToWindowSGIX
#define glXBindHyperpipeSGIX glew::glx::glXBindHyperpipeSGIX
#define glXBindSwapBarrierNV glew::glx::glXBindSwapBarrierNV
#define glXBindSwapBarrierSGIX glew::glx::glXBindSwapBarrierSGIX
#define glXBindTexImageEXT glew::glx::glXBindTexImageEXT
#define glXBindVideoCaptureDeviceNV glew::glx::glXBindVideoCaptureDeviceNV
#define glXBindVideoDeviceNV glew::glx::glXBindVideoDeviceNV
#define glXBindVideoImageNV glew::glx::glXBindVideoImageNV
#define glXBlitContextFramebufferAMD glew::glx::glXBlitContextFramebufferAMD
#define glXChannelRectSGIX glew::glx::glXChannelRectSGIX
#define glXChannelRectSyncSGIX glew::glx::glXChannelRectSyncSGIX
#define glXChooseFBConfig glew::glx::glXChooseFBConfig
#define glXChooseFBConfigSGIX glew::glx::glXChooseFBConfigSGIX
#define glXChooseVisual glew::glx::glXChooseVisual
#define glXCopyBufferSubDataNV glew::glx::glXCopyBufferSubDataNV
#define glXNamedCopyBufferSubDataNV glew::glx::glXNamedCopyBufferSubDataNV
#define glXCopyContext glew::glx::glXCopyContext
#define glXCopyImageSubDataNV glew::glx::glXCopyImageSubDataNV
#define glXCopySubBufferMESA glew::glx::glXCopySubBufferMESA
#define glXCreateAssociatedContextAMD glew::glx::glXCreateAssociatedContextAMD
#define glXCreateAssociatedContextAttribsAMD glew::glx::glXCreateAssociatedContextAttribsAMD
#define glXCreateContextAttribsARB glew::glx::glXCreateContextAttribsARB
#define glXCreateContext glew::glx::glXCreateContext
#define glXCreateContextWithConfigSGIX glew::glx::glXCreateContextWithConfigSGIX
#define glXCreateGLXPbufferSGIX glew::glx::glXCreateGLXPbufferSGIX
#define glXCreateGLXPixmap glew::glx::glXCreateGLXPixmap
#define glXCreateGLXPixmapMESA glew::glx::glXCreateGLXPixmapMESA
#define glXCreateGLXPixmapWithConfigSGIX glew::glx::glXCreateGLXPixmapWithConfigSGIX
#define glXCreateGLXVideoSourceSGIX glew::glx::glXCreateGLXVideoSourceSGIX
#define glXCreateNewContext glew::glx::glXCreateNewContext
#define glXCreatePbuffer glew::glx::glXCreatePbuffer
#define glXCreatePixmap glew::glx::glXCreatePixmap
#define glXCreateWindow glew::glx::glXCreateWindow
#define glXCushionSGI glew::glx::glXCushionSGI
#define glXDelayBeforeSwapNV glew::glx::glXDelayBeforeSwapNV
#define glXDeleteAssociatedContextAMD glew::glx::glXDeleteAssociatedContextAMD
#define glXDestroyContext glew::glx::glXDestroyContext
#define glXDestroyGLXPbufferSGIX glew::glx::glXDestroyGLXPbufferSGIX
#define glXDestroyGLXPixmap glew::glx::glXDestroyGLXPixmap
#define glXDestroyGLXVideoSourceSGIX glew::glx::glXDestroyGLXVideoSourceSGIX
#define glXDestroyHyperpipeConfigSGIX glew::glx::glXDestroyHyperpipeConfigSGIX
#define glXDestroyPbuffer glew::glx::glXDestroyPbuffer
#define glXDestroyPixmap glew::glx::glXDestroyPixmap
#define glXDestroyWindow glew::glx::glXDestroyWindow
#define glXEnumerateVideoCaptureDevicesNV glew::glx::glXEnumerateVideoCaptureDevicesNV
#define glXEnumerateVideoDevicesNV glew::glx::glXEnumerateVideoDevicesNV
#define glXFreeContextEXT glew::glx::glXFreeContextEXT
#define glXGetAGPOffsetMESA glew::glx::glXGetAGPOffsetMESA
#define glXGetClientString glew::glx::glXGetClientString
#define glXGetConfig glew::glx::glXGetConfig
#define glXGetContextGPUIDAMD glew::glx::glXGetContextGPUIDAMD
#define glXGetContextIDEXT glew::glx::glXGetContextIDEXT
#define glXGetCurrentAssociatedContextAMD glew::glx::glXGetCurrentAssociatedContextAMD
#define glXGetCurrentContext glew::glx::glXGetCurrentContext
#define glXGetCurrentDisplayEXT glew::glx::glXGetCurrentDisplayEXT
#define glXGetCurrentDisplay glew::glx::glXGetCurrentDisplay
#define glXGetCurrentDrawable glew::glx::glXGetCurrentDrawable
#define glXGetCurrentReadDrawableSGI glew::glx::glXGetCurrentReadDrawableSGI
#define glXGetCurrentReadDrawable glew::glx::glXGetCurrentReadDrawable
#define glXGetFBConfigAttrib glew::glx::glXGetFBConfigAttrib
#define glXGetFBConfigAttribSGIX glew::glx::glXGetFBConfigAttribSGIX
#define glXGetFBConfigFromVisualSGIX glew::glx::glXGetFBConfigFromVisualSGIX
#define glXGetFBConfigs glew::glx::glXGetFBConfigs
#define glXGetGPUIDsAMD glew::glx::glXGetGPUIDsAMD
#define glXGetGPUInfoAMD glew::glx::glXGetGPUInfoAMD
#define glXGetMscRateOML glew::glx::glXGetMscRateOML
#define glXGetProcAddressARB glew::glx::glXGetProcAddressARB
#define glXGetProcAddress glew::glx::glXGetProcAddress
#define glXGetSelectedEvent glew::glx::glXGetSelectedEvent
#define glXGetSelectedEventSGIX glew::glx::glXGetSelectedEventSGIX
#define glXGetSyncValuesOML glew::glx::glXGetSyncValuesOML
#define glXGetTransparentIndexSUN glew::glx::glXGetTransparentIndexSUN
#define glXGetVideoDeviceNV glew::glx::glXGetVideoDeviceNV
#define glXGetVideoInfoNV glew::glx::glXGetVideoInfoNV
#define glXGetVideoSyncSGI glew::glx::glXGetVideoSyncSGI
#define glXGetVisualFromFBConfig glew::glx::glXGetVisualFromFBConfig
#define glXGetVisualFromFBConfigSGIX glew::glx::glXGetVisualFromFBConfigSGIX
#define glXHyperpipeAttribSGIX glew::glx::glXHyperpipeAttribSGIX
#define glXHyperpipeConfigSGIX glew::glx::glXHyperpipeConfigSGIX
#define glXImportContextEXT glew::glx::glXImportContextEXT
#define glXIsDirect glew::glx::glXIsDirect
#define glXJoinSwapGroupNV glew::glx::glXJoinSwapGroupNV
#define glXJoinSwapGroupSGIX glew::glx::glXJoinSwapGroupSGIX
#define glXLockVideoCaptureDeviceNV glew::glx::glXLockVideoCaptureDeviceNV
#define glXMakeAssociatedContextCurrentAMD glew::glx::glXMakeAssociatedContextCurrentAMD
#define glXMakeContextCurrent glew::glx::glXMakeContextCurrent
#define glXMakeCurrent glew::glx::glXMakeCurrent
#define glXMakeCurrentReadSGI glew::glx::glXMakeCurrentReadSGI
#define glXQueryChannelDeltasSGIX glew::glx::glXQueryChannelDeltasSGIX
#define glXQueryChannelRectSGIX glew::glx::glXQueryChannelRectSGIX
#define glXQueryContext glew::glx::glXQueryContext
#define glXQueryContextInfoEXT glew::glx::glXQueryContextInfoEXT
#define glXQueryCurrentRendererIntegerMESA glew::glx::glXQueryCurrentRendererIntegerMESA
#define glXQueryCurrentRendererStringMESA glew::glx::glXQueryCurrentRendererStringMESA
#define glXQueryDrawable glew::glx::glXQueryDrawable
#define glXQueryExtension glew::glx::glXQueryExtension
#define glXQueryExtensionsString glew::glx::glXQueryExtensionsString
#define glXQueryFrameCountNV glew::glx::glXQueryFrameCountNV
#define glXQueryGLXPbufferSGIX glew::glx::glXQueryGLXPbufferSGIX
#define glXQueryHyperpipeAttribSGIX glew::glx::glXQueryHyperpipeAttribSGIX
#define glXQueryHyperpipeBestAttribSGIX glew::glx::glXQueryHyperpipeBestAttribSGIX
#define glXQueryHyperpipeConfigSGIX glew::glx::glXQueryHyperpipeConfigSGIX
#define glXQueryHyperpipeNetworkSGIX glew::glx::glXQueryHyperpipeNetworkSGIX
#define glXQueryMaxSwapBarriersSGIX glew::glx::glXQueryMaxSwapBarriersSGIX
#define glXQueryMaxSwapGroupsNV glew::glx::glXQueryMaxSwapGroupsNV
#define glXQueryRendererIntegerMESA glew::glx::glXQueryRendererIntegerMESA
#define glXQueryRendererStringMESA glew::glx::glXQueryRendererStringMESA
#define glXQueryServerString glew::glx::glXQueryServerString
#define glXQuerySwapGroupNV glew::glx::glXQuerySwapGroupNV
#define glXQueryVersion glew::glx::glXQueryVersion
#define glXQueryVideoCaptureDeviceNV glew::glx::glXQueryVideoCaptureDeviceNV
#define glXReleaseBuffersMESA glew::glx::glXReleaseBuffersMESA
#define glXReleaseTexImageEXT glew::glx::glXReleaseTexImageEXT
#define glXReleaseVideoCaptureDeviceNV glew::glx::glXReleaseVideoCaptureDeviceNV
#define glXReleaseVideoDeviceNV glew::glx::glXReleaseVideoDeviceNV
#define glXReleaseVideoImageNV glew::glx::glXReleaseVideoImageNV
#define glXResetFrameCountNV glew::glx::glXResetFrameCountNV
#define glXSelectEvent glew::glx::glXSelectEvent
#define glXSelectEventSGIX glew::glx::glXSelectEventSGIX
#define glXSendPbufferToVideoNV glew::glx::glXSendPbufferToVideoNV
#define glXSet3DfxModeMESA glew::glx::glXSet3DfxModeMESA
#define glXSwapBuffers glew::glx::glXSwapBuffers
#define glXSwapBuffersMscOML glew::glx::glXSwapBuffersMscOML
#define glXSwapIntervalEXT glew::glx::glXSwapIntervalEXT
#define glXSwapIntervalSGI glew::glx::glXSwapIntervalSGI
#define glXUseXFont glew::glx::glXUseXFont
#define glXWaitForMscOML glew::glx::glXWaitForMscOML
#define glXWaitForSbcOML glew::glx::glXWaitForSbcOML
#define glXWaitGL glew::glx::glXWaitGL
#define glXWaitVideoSyncSGI glew::glx::glXWaitVideoSyncSGI
#define glXWaitX glew::glx::glXWaitX

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLX_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
