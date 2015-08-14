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

// GLX_VERSION_1_0
typedef  XVisualInfo * ( PFNGLXCHOOSEVISUALPROC) (Display * dpy, int  screen, int * attribList);
typedef  GLXContext ( PFNGLXCREATECONTEXTPROC) (Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
typedef  void  ( PFNGLXDESTROYCONTEXTPROC) (Display * dpy, GLXContext ctx);
typedef  Bool ( PFNGLXMAKECURRENTPROC) (Display * dpy, GLXDrawable drawable, GLXContext ctx);
typedef  void  ( PFNGLXCOPYCONTEXTPROC) (Display * dpy, GLXContext src, GLXContext dst, unsigned long  mask);
typedef  void  ( PFNGLXSWAPBUFFERSPROC) (Display * dpy, GLXDrawable drawable);
typedef  GLXPixmap ( PFNGLXCREATEGLXPIXMAPPROC) (Display * dpy, XVisualInfo * visual, Pixmap pixmap);
typedef  void  ( PFNGLXDESTROYGLXPIXMAPPROC) (Display * dpy, GLXPixmap pixmap);
typedef  Bool ( PFNGLXQUERYEXTENSIONPROC) (Display * dpy, int * errorb, int * event);
typedef  Bool ( PFNGLXQUERYVERSIONPROC) (Display * dpy, int * maj, int * min);
typedef  Bool ( PFNGLXISDIRECTPROC) (Display * dpy, GLXContext ctx);
typedef  int  ( PFNGLXGETCONFIGPROC) (Display * dpy, XVisualInfo * visual, int  attrib, int * value);
typedef  GLXContext ( PFNGLXGETCURRENTCONTEXTPROC) ();
typedef  GLXDrawable ( PFNGLXGETCURRENTDRAWABLEPROC) ();
typedef  void  ( PFNGLXWAITGLPROC) ();
typedef  void  ( PFNGLXWAITXPROC) ();
typedef  void  ( PFNGLXUSEXFONTPROC) (Font font, int  first, int  count, int  list);

// GLX_VERSION_1_1
typedef  const char * ( PFNGLXQUERYEXTENSIONSSTRINGPROC) (Display * dpy, int  screen);
typedef  const char * ( PFNGLXQUERYSERVERSTRINGPROC) (Display * dpy, int  screen, int  name);
typedef  const char * ( PFNGLXGETCLIENTSTRINGPROC) (Display * dpy, int  name);

// GLX_VERSION_1_2
typedef  Display * ( PFNGLXGETCURRENTDISPLAYPROC) ();

// GLX_VERSION_1_3
typedef  GLXFBConfig * ( PFNGLXGETFBCONFIGSPROC) (Display * dpy, int  screen, int * nelements);
typedef  GLXFBConfig * ( PFNGLXCHOOSEFBCONFIGPROC) (Display * dpy, int  screen, const int * attrib_list, int * nelements);
typedef  int  ( PFNGLXGETFBCONFIGATTRIBPROC) (Display * dpy, GLXFBConfig config, int  attribute, int * value);
typedef  XVisualInfo * ( PFNGLXGETVISUALFROMFBCONFIGPROC) (Display * dpy, GLXFBConfig config);
typedef  GLXWindow ( PFNGLXCREATEWINDOWPROC) (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
typedef  void  ( PFNGLXDESTROYWINDOWPROC) (Display * dpy, GLXWindow win);
typedef  GLXPixmap ( PFNGLXCREATEPIXMAPPROC) (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
typedef  void  ( PFNGLXDESTROYPIXMAPPROC) (Display * dpy, GLXPixmap pixmap);
typedef  GLXPbuffer ( PFNGLXCREATEPBUFFERPROC) (Display * dpy, GLXFBConfig config, const int * attrib_list);
typedef  void  ( PFNGLXDESTROYPBUFFERPROC) (Display * dpy, GLXPbuffer pbuf);
typedef  void  ( PFNGLXQUERYDRAWABLEPROC) (Display * dpy, GLXDrawable draw, int  attribute, unsigned int * value);
typedef  GLXContext ( PFNGLXCREATENEWCONTEXTPROC) (Display * dpy, GLXFBConfig config, int  render_type, GLXContext share_list, Bool direct);
typedef  Bool ( PFNGLXMAKECONTEXTCURRENTPROC) (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef  GLXDrawable ( PFNGLXGETCURRENTREADDRAWABLEPROC) ();
typedef  int  ( PFNGLXQUERYCONTEXTPROC) (Display * dpy, GLXContext ctx, int  attribute, int * value);
typedef  void  ( PFNGLXSELECTEVENTPROC) (Display * dpy, GLXDrawable draw, unsigned long  event_mask);
typedef  void  ( PFNGLXGETSELECTEDEVENTPROC) (Display * dpy, GLXDrawable draw, unsigned long * event_mask);

// GLX_VERSION_1_4
typedef  __GLXextFuncPtr ( PFNGLXGETPROCADDRESSPROC) (const GLubyte * procName);

// GLX_AMD_gpu_association
typedef  unsigned int  ( PFNGLXGETGPUIDSAMDPROC) (unsigned int  maxCount, unsigned int * ids);
typedef  int  ( PFNGLXGETGPUINFOAMDPROC) (unsigned int  id, int  property, GLenum dataType, unsigned int  size, void * data);
typedef  unsigned int  ( PFNGLXGETCONTEXTGPUIDAMDPROC) (GLXContext ctx);
typedef  GLXContext ( PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) (unsigned int  id, GLXContext share_list);
typedef  GLXContext ( PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) (unsigned int  id, GLXContext share_context, const int * attribList);
typedef  Bool ( PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) (GLXContext ctx);
typedef  Bool ( PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) (GLXContext ctx);
typedef  GLXContext ( PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) ();
typedef  void  ( PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

// GLX_ARB_create_context
typedef  GLXContext ( PFNGLXCREATECONTEXTATTRIBSARBPROC) (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);

// GLX_ARB_get_proc_address
typedef  __GLXextFuncPtr ( PFNGLXGETPROCADDRESSARBPROC) (const GLubyte * procName);

// GLX_EXT_import_context
typedef  Display * ( PFNGLXGETCURRENTDISPLAYEXTPROC) ();
typedef  int  ( PFNGLXQUERYCONTEXTINFOEXTPROC) (Display * dpy, GLXContext context, int  attribute, int * value);
typedef  GLXContextID ( PFNGLXGETCONTEXTIDEXTPROC) (const GLXContext context);
typedef  GLXContext ( PFNGLXIMPORTCONTEXTEXTPROC) (Display * dpy, GLXContextID contextID);
typedef  void  ( PFNGLXFREECONTEXTEXTPROC) (Display * dpy, GLXContext context);

// GLX_EXT_swap_control
typedef  void  ( PFNGLXSWAPINTERVALEXTPROC) (Display * dpy, GLXDrawable drawable, int  interval);

// GLX_EXT_texture_from_pixmap
typedef  void  ( PFNGLXBINDTEXIMAGEEXTPROC) (Display * dpy, GLXDrawable drawable, int  buffer, const int * attrib_list);
typedef  void  ( PFNGLXRELEASETEXIMAGEEXTPROC) (Display * dpy, GLXDrawable drawable, int  buffer);

// GLX_MESA_agp_offset
typedef  unsigned int  ( PFNGLXGETAGPOFFSETMESAPROC) (const void * pointer);

// GLX_MESA_copy_sub_buffer
typedef  void  ( PFNGLXCOPYSUBBUFFERMESAPROC) (Display * dpy, GLXDrawable drawable, int  x, int  y, int  width, int  height);

// GLX_MESA_pixmap_colormap
typedef  GLXPixmap ( PFNGLXCREATEGLXPIXMAPMESAPROC) (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);

// GLX_MESA_query_renderer
typedef  Bool ( PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) (int  attribute, unsigned int * value);
typedef  const char * ( PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) (int  attribute);
typedef  Bool ( PFNGLXQUERYRENDERERINTEGERMESAPROC) (Display * dpy, int  screen, int  renderer, int  attribute, unsigned int * value);
typedef  const char * ( PFNGLXQUERYRENDERERSTRINGMESAPROC) (Display * dpy, int  screen, int  renderer, int  attribute);

// GLX_MESA_release_buffers
typedef  Bool ( PFNGLXRELEASEBUFFERSMESAPROC) (Display * dpy, GLXDrawable drawable);

// GLX_MESA_set_3dfx_mode
typedef  Bool ( PFNGLXSET3DFXMODEMESAPROC) (int  mode);

// GLX_NV_copy_buffer
typedef  void  ( PFNGLXCOPYBUFFERSUBDATANVPROC) (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef  void  ( PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

// GLX_NV_copy_image
typedef  void  ( PFNGLXCOPYIMAGESUBDATANVPROC) (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

// GLX_NV_delay_before_swap
typedef  Bool ( PFNGLXDELAYBEFORESWAPNVPROC) (Display * dpy, GLXDrawable drawable, GLfloat seconds);

// GLX_NV_present_video
typedef  unsigned int * ( PFNGLXENUMERATEVIDEODEVICESNVPROC) (Display * dpy, int  screen, int * nelements);
typedef  int  ( PFNGLXBINDVIDEODEVICENVPROC) (Display * dpy, unsigned int  video_slot, unsigned int  video_device, const int * attrib_list);

// GLX_NV_swap_group
typedef  Bool ( PFNGLXJOINSWAPGROUPNVPROC) (Display * dpy, GLXDrawable drawable, GLuint group);
typedef  Bool ( PFNGLXBINDSWAPBARRIERNVPROC) (Display * dpy, GLuint group, GLuint barrier);
typedef  Bool ( PFNGLXQUERYSWAPGROUPNVPROC) (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
typedef  Bool ( PFNGLXQUERYMAXSWAPGROUPSNVPROC) (Display * dpy, int  screen, GLuint * maxGroups, GLuint * maxBarriers);
typedef  Bool ( PFNGLXQUERYFRAMECOUNTNVPROC) (Display * dpy, int  screen, GLuint * count);
typedef  Bool ( PFNGLXRESETFRAMECOUNTNVPROC) (Display * dpy, int  screen);

// GLX_NV_video_capture
typedef  int  ( PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) (Display * dpy, unsigned int  video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef  GLXVideoCaptureDeviceNV * ( PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) (Display * dpy, int  screen, int * nelements);
typedef  void  ( PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) (Display * dpy, GLXVideoCaptureDeviceNV device);
typedef  int  ( PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) (Display * dpy, GLXVideoCaptureDeviceNV device, int  attribute, int * value);
typedef  void  ( PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) (Display * dpy, GLXVideoCaptureDeviceNV device);

// GLX_NV_video_out
typedef  int  ( PFNGLXGETVIDEODEVICENVPROC) (Display * dpy, int  screen, int  numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
typedef  int  ( PFNGLXRELEASEVIDEODEVICENVPROC) (Display * dpy, int  screen, GLXVideoDeviceNV VideoDevice);
typedef  int  ( PFNGLXBINDVIDEOIMAGENVPROC) (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int  iVideoBuffer);
typedef  int  ( PFNGLXRELEASEVIDEOIMAGENVPROC) (Display * dpy, GLXPbuffer pbuf);
typedef  int  ( PFNGLXSENDPBUFFERTOVIDEONVPROC) (Display * dpy, GLXPbuffer pbuf, int  iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
typedef  int  ( PFNGLXGETVIDEOINFONVPROC) (Display * dpy, int  screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);

// GLX_OML_sync_control
typedef  Bool ( PFNGLXGETSYNCVALUESOMLPROC) (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef  Bool ( PFNGLXGETMSCRATEOMLPROC) (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
typedef  int64_t ( PFNGLXSWAPBUFFERSMSCOMLPROC) (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef  Bool ( PFNGLXWAITFORMSCOMLPROC) (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef  Bool ( PFNGLXWAITFORSBCOMLPROC) (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);

// GLX_SGI_cushion
typedef  void  ( PFNGLXCUSHIONSGIPROC) (Display * dpy, Window window, float  cushion);

// GLX_SGI_make_current_read
typedef  Bool ( PFNGLXMAKECURRENTREADSGIPROC) (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef  GLXDrawable ( PFNGLXGETCURRENTREADDRAWABLESGIPROC) ();

// GLX_SGI_swap_control
typedef  int  ( PFNGLXSWAPINTERVALSGIPROC) (int  interval);

// GLX_SGI_video_sync
typedef  int  ( PFNGLXGETVIDEOSYNCSGIPROC) (unsigned int * count);
typedef  int  ( PFNGLXWAITVIDEOSYNCSGIPROC) (int  divisor, int  remainder, unsigned int * count);

// GLX_SGIX_dmbuffer
typedef  Bool ( PFNGLXASSOCIATEDMPBUFFERSGIXPROC) (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);

// GLX_SGIX_fbconfig
typedef  int  ( PFNGLXGETFBCONFIGATTRIBSGIXPROC) (Display * dpy, GLXFBConfigSGIX config, int  attribute, int * value);
typedef  GLXFBConfigSGIX * ( PFNGLXCHOOSEFBCONFIGSGIXPROC) (Display * dpy, int  screen, int * attrib_list, int * nelements);
typedef  GLXPixmap ( PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef  GLXContext ( PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) (Display * dpy, GLXFBConfigSGIX config, int  render_type, GLXContext share_list, Bool direct);
typedef  XVisualInfo * ( PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) (Display * dpy, GLXFBConfigSGIX config);
typedef  GLXFBConfigSGIX ( PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) (Display * dpy, XVisualInfo * vis);

// GLX_SGIX_hyperpipe
typedef  GLXHyperpipeNetworkSGIX * ( PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) (Display * dpy, int * npipes);
typedef  int  ( PFNGLXHYPERPIPECONFIGSGIXPROC) (Display * dpy, int  networkId, int  npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
typedef  GLXHyperpipeConfigSGIX * ( PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) (Display * dpy, int  hpId, int * npipes);
typedef  int  ( PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) (Display * dpy, int  hpId);
typedef  int  ( PFNGLXBINDHYPERPIPESGIXPROC) (Display * dpy, int  hpId);
typedef  int  ( PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) (Display * dpy, int  timeSlice, int  attrib, int  size, void * attribList, void * returnAttribList);
typedef  int  ( PFNGLXHYPERPIPEATTRIBSGIXPROC) (Display * dpy, int  timeSlice, int  attrib, int  size, void * attribList);
typedef  int  ( PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) (Display * dpy, int  timeSlice, int  attrib, int  size, void * returnAttribList);

// GLX_SGIX_pbuffer
typedef  GLXPbufferSGIX ( PFNGLXCREATEGLXPBUFFERSGIXPROC) (Display * dpy, GLXFBConfigSGIX config, unsigned int  width, unsigned int  height, int * attrib_list);
typedef  void  ( PFNGLXDESTROYGLXPBUFFERSGIXPROC) (Display * dpy, GLXPbufferSGIX pbuf);
typedef  int  ( PFNGLXQUERYGLXPBUFFERSGIXPROC) (Display * dpy, GLXPbufferSGIX pbuf, int  attribute, unsigned int * value);
typedef  void  ( PFNGLXSELECTEVENTSGIXPROC) (Display * dpy, GLXDrawable drawable, unsigned long  mask);
typedef  void  ( PFNGLXGETSELECTEDEVENTSGIXPROC) (Display * dpy, GLXDrawable drawable, unsigned long * mask);

// GLX_SGIX_swap_barrier
typedef  void  ( PFNGLXBINDSWAPBARRIERSGIXPROC) (Display * dpy, GLXDrawable drawable, int  barrier);
typedef  Bool ( PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) (Display * dpy, int  screen, int * max);

// GLX_SGIX_swap_group
typedef  void  ( PFNGLXJOINSWAPGROUPSGIXPROC) (Display * dpy, GLXDrawable drawable, GLXDrawable member);

// GLX_SGIX_video_resize
typedef  int  ( PFNGLXBINDCHANNELTOWINDOWSGIXPROC) (Display * display, int  screen, int  channel, Window window);
typedef  int  ( PFNGLXCHANNELRECTSGIXPROC) (Display * display, int  screen, int  channel, int  x, int  y, int  w, int  h);
typedef  int  ( PFNGLXQUERYCHANNELRECTSGIXPROC) (Display * display, int  screen, int  channel, int * dx, int * dy, int * dw, int * dh);
typedef  int  ( PFNGLXQUERYCHANNELDELTASSGIXPROC) (Display * display, int  screen, int  channel, int * x, int * y, int * w, int * h);
typedef  int  ( PFNGLXCHANNELRECTSYNCSGIXPROC) (Display * display, int  screen, int  channel, GLenum synctype);

// GLX_SGIX_video_source
typedef  GLXVideoSourceSGIX ( PFNGLXCREATEGLXVIDEOSOURCESGIXPROC) (Display * display, int  screen, VLServer server, VLPath path, int  nodeClass, VLNode drainNode);
typedef  void  ( PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC) (Display * dpy, GLXVideoSourceSGIX glxvideosource);

// GLX_SUN_get_transparent_index
typedef  Status ( PFNGLXGETTRANSPARENTINDEXSUNPROC) (Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);

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

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::glx::FeatureSet::GLEW_GLX_FeatureSetCount];

    public:

      bool IsSupported (glew::glx::FeatureSet feature);

      bool IsSupported (const char *feature);

      PFNGLXCHOOSEVISUALPROC m_glXChooseVisual;
      PFNGLXCREATECONTEXTPROC m_glXCreateContext;
      PFNGLXDESTROYCONTEXTPROC m_glXDestroyContext;
      PFNGLXMAKECURRENTPROC m_glXMakeCurrent;
      PFNGLXCOPYCONTEXTPROC m_glXCopyContext;
      PFNGLXSWAPBUFFERSPROC m_glXSwapBuffers;
      PFNGLXCREATEGLXPIXMAPPROC m_glXCreateGLXPixmap;
      PFNGLXDESTROYGLXPIXMAPPROC m_glXDestroyGLXPixmap;
      PFNGLXQUERYEXTENSIONPROC m_glXQueryExtension;
      PFNGLXQUERYVERSIONPROC m_glXQueryVersion;
      PFNGLXISDIRECTPROC m_glXIsDirect;
      PFNGLXGETCONFIGPROC m_glXGetConfig;
      PFNGLXGETCURRENTCONTEXTPROC m_glXGetCurrentContext;
      PFNGLXGETCURRENTDRAWABLEPROC m_glXGetCurrentDrawable;
      PFNGLXWAITGLPROC m_glXWaitGL;
      PFNGLXWAITXPROC m_glXWaitX;
      PFNGLXUSEXFONTPROC m_glXUseXFont;
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

    static void Initialise (glew::glx::DeviceState *deviceState);

    static void Deinitialise ();

    static const glew::glx::DeviceState *GetDeviceState () { return s_deviceState; }

  protected:

    static glew::glx::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    XVisualInfo * glXChooseVisual (Display * dpy, int screen, int * attribList);
    GLXContext glXCreateContext (Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
    void glXDestroyContext (Display * dpy, GLXContext ctx);
    Bool glXMakeCurrent (Display * dpy, GLXDrawable drawable, GLXContext ctx);
    void glXCopyContext (Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
    void glXSwapBuffers (Display * dpy, GLXDrawable drawable);
    GLXPixmap glXCreateGLXPixmap (Display * dpy, XVisualInfo * visual, Pixmap pixmap);
    void glXDestroyGLXPixmap (Display * dpy, GLXPixmap pixmap);
    Bool glXQueryExtension (Display * dpy, int * errorb, int * event);
    Bool glXQueryVersion (Display * dpy, int * maj, int * min);
    Bool glXIsDirect (Display * dpy, GLXContext ctx);
    int glXGetConfig (Display * dpy, XVisualInfo * visual, int attrib, int * value);
    GLXContext glXGetCurrentContext ();
    GLXDrawable glXGetCurrentDrawable ();
    void glXWaitGL ();
    void glXWaitX ();
    void glXUseXFont (Font font, int first, int count, int list);
    const char * glXQueryExtensionsString (Display * dpy, int screen);
    const char * glXQueryServerString (Display * dpy, int screen, int name);
    const char * glXGetClientString (Display * dpy, int name);
    Display * glXGetCurrentDisplay ();
    GLXFBConfig * glXGetFBConfigs (Display * dpy, int screen, int * nelements);
    GLXFBConfig * glXChooseFBConfig (Display * dpy, int screen, const int * attrib_list, int * nelements);
    int glXGetFBConfigAttrib (Display * dpy, GLXFBConfig config, int attribute, int * value);
    XVisualInfo * glXGetVisualFromFBConfig (Display * dpy, GLXFBConfig config);
    GLXWindow glXCreateWindow (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
    void glXDestroyWindow (Display * dpy, GLXWindow win);
    GLXPixmap glXCreatePixmap (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
    void glXDestroyPixmap (Display * dpy, GLXPixmap pixmap);
    GLXPbuffer glXCreatePbuffer (Display * dpy, GLXFBConfig config, const int * attrib_list);
    void glXDestroyPbuffer (Display * dpy, GLXPbuffer pbuf);
    void glXQueryDrawable (Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
    GLXContext glXCreateNewContext (Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
    Bool glXMakeContextCurrent (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    GLXDrawable glXGetCurrentReadDrawable ();
    int glXQueryContext (Display * dpy, GLXContext ctx, int attribute, int * value);
    void glXSelectEvent (Display * dpy, GLXDrawable draw, unsigned long event_mask);
    void glXGetSelectedEvent (Display * dpy, GLXDrawable draw, unsigned long * event_mask);
    __GLXextFuncPtr glXGetProcAddress (const GLubyte * procName);
    unsigned int glXGetGPUIDsAMD (unsigned int maxCount, unsigned int * ids);
    int glXGetGPUInfoAMD (unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
    unsigned int glXGetContextGPUIDAMD (GLXContext ctx);
    GLXContext glXCreateAssociatedContextAMD (unsigned int id, GLXContext share_list);
    GLXContext glXCreateAssociatedContextAttribsAMD (unsigned int id, GLXContext share_context, const int * attribList);
    Bool glXDeleteAssociatedContextAMD (GLXContext ctx);
    Bool glXMakeAssociatedContextCurrentAMD (GLXContext ctx);
    GLXContext glXGetCurrentAssociatedContextAMD ();
    void glXBlitContextFramebufferAMD (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    GLXContext glXCreateContextAttribsARB (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
    __GLXextFuncPtr glXGetProcAddressARB (const GLubyte * procName);
    Display * glXGetCurrentDisplayEXT ();
    int glXQueryContextInfoEXT (Display * dpy, GLXContext context, int attribute, int * value);
    GLXContextID glXGetContextIDEXT (const GLXContext context);
    GLXContext glXImportContextEXT (Display * dpy, GLXContextID contextID);
    void glXFreeContextEXT (Display * dpy, GLXContext context);
    void glXSwapIntervalEXT (Display * dpy, GLXDrawable drawable, int interval);
    void glXBindTexImageEXT (Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
    void glXReleaseTexImageEXT (Display * dpy, GLXDrawable drawable, int buffer);
    unsigned int glXGetAGPOffsetMESA (const void * pointer);
    void glXCopySubBufferMESA (Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
    GLXPixmap glXCreateGLXPixmapMESA (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
    Bool glXQueryCurrentRendererIntegerMESA (int attribute, unsigned int * value);
    const char * glXQueryCurrentRendererStringMESA (int attribute);
    Bool glXQueryRendererIntegerMESA (Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
    const char * glXQueryRendererStringMESA (Display * dpy, int screen, int renderer, int attribute);
    Bool glXReleaseBuffersMESA (Display * dpy, GLXDrawable drawable);
    Bool glXSet3DfxModeMESA (int mode);
    void glXCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    void glXNamedCopyBufferSubDataNV (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    void glXCopyImageSubDataNV (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
    Bool glXDelayBeforeSwapNV (Display * dpy, GLXDrawable drawable, GLfloat seconds);
    unsigned int * glXEnumerateVideoDevicesNV (Display * dpy, int screen, int * nelements);
    int glXBindVideoDeviceNV (Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
    Bool glXJoinSwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint group);
    Bool glXBindSwapBarrierNV (Display * dpy, GLuint group, GLuint barrier);
    Bool glXQuerySwapGroupNV (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
    Bool glXQueryMaxSwapGroupsNV (Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
    Bool glXQueryFrameCountNV (Display * dpy, int screen, GLuint * count);
    Bool glXResetFrameCountNV (Display * dpy, int screen);
    int glXBindVideoCaptureDeviceNV (Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
    GLXVideoCaptureDeviceNV * glXEnumerateVideoCaptureDevicesNV (Display * dpy, int screen, int * nelements);
    void glXLockVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
    int glXQueryVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
    void glXReleaseVideoCaptureDeviceNV (Display * dpy, GLXVideoCaptureDeviceNV device);
    int glXGetVideoDeviceNV (Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
    int glXReleaseVideoDeviceNV (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
    int glXBindVideoImageNV (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
    int glXReleaseVideoImageNV (Display * dpy, GLXPbuffer pbuf);
    int glXSendPbufferToVideoNV (Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
    int glXGetVideoInfoNV (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
    Bool glXGetSyncValuesOML (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
    Bool glXGetMscRateOML (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
    int64_t glXSwapBuffersMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
    Bool glXWaitForMscOML (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
    Bool glXWaitForSbcOML (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
    void glXCushionSGI (Display * dpy, Window window, float cushion);
    Bool glXMakeCurrentReadSGI (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    GLXDrawable glXGetCurrentReadDrawableSGI ();
    int glXSwapIntervalSGI (int interval);
    int glXGetVideoSyncSGI (unsigned int * count);
    int glXWaitVideoSyncSGI (int divisor, int remainder, unsigned int * count);
    Bool glXAssociateDMPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
    int glXGetFBConfigAttribSGIX (Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
    GLXFBConfigSGIX * glXChooseFBConfigSGIX (Display * dpy, int screen, int * attrib_list, int * nelements);
    GLXPixmap glXCreateGLXPixmapWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
    GLXContext glXCreateContextWithConfigSGIX (Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
    XVisualInfo * glXGetVisualFromFBConfigSGIX (Display * dpy, GLXFBConfigSGIX config);
    GLXFBConfigSGIX glXGetFBConfigFromVisualSGIX (Display * dpy, XVisualInfo * vis);
    GLXHyperpipeNetworkSGIX * glXQueryHyperpipeNetworkSGIX (Display * dpy, int * npipes);
    int glXHyperpipeConfigSGIX (Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
    GLXHyperpipeConfigSGIX * glXQueryHyperpipeConfigSGIX (Display * dpy, int hpId, int * npipes);
    int glXDestroyHyperpipeConfigSGIX (Display * dpy, int hpId);
    int glXBindHyperpipeSGIX (Display * dpy, int hpId);
    int glXQueryHyperpipeBestAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
    int glXHyperpipeAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * attribList);
    int glXQueryHyperpipeAttribSGIX (Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
    GLXPbufferSGIX glXCreateGLXPbufferSGIX (Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
    void glXDestroyGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf);
    int glXQueryGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
    void glXSelectEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long mask);
    void glXGetSelectedEventSGIX (Display * dpy, GLXDrawable drawable, unsigned long * mask);
    void glXBindSwapBarrierSGIX (Display * dpy, GLXDrawable drawable, int barrier);
    Bool glXQueryMaxSwapBarriersSGIX (Display * dpy, int screen, int * max);
    void glXJoinSwapGroupSGIX (Display * dpy, GLXDrawable drawable, GLXDrawable member);
    int glXBindChannelToWindowSGIX (Display * display, int screen, int channel, Window window);
    int glXChannelRectSGIX (Display * display, int screen, int channel, int x, int y, int w, int h);
    int glXQueryChannelRectSGIX (Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
    int glXQueryChannelDeltasSGIX (Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
    int glXChannelRectSyncSGIX (Display * display, int screen, int channel, GLenum synctype);
    GLXVideoSourceSGIX glXCreateGLXVideoSourceSGIX (Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
    void glXDestroyGLXVideoSourceSGIX (Display * dpy, GLXVideoSourceSGIX glxvideosource);
    Status glXGetTransparentIndexSUN (Display * dpy, Window overlay, Window underlay, long * pTransparentIndex);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glXChooseVisual glew::glx::glXChooseVisual
#define glXCreateContext glew::glx::glXCreateContext
#define glXDestroyContext glew::glx::glXDestroyContext
#define glXMakeCurrent glew::glx::glXMakeCurrent
#define glXCopyContext glew::glx::glXCopyContext
#define glXSwapBuffers glew::glx::glXSwapBuffers
#define glXCreateGLXPixmap glew::glx::glXCreateGLXPixmap
#define glXDestroyGLXPixmap glew::glx::glXDestroyGLXPixmap
#define glXQueryExtension glew::glx::glXQueryExtension
#define glXQueryVersion glew::glx::glXQueryVersion
#define glXIsDirect glew::glx::glXIsDirect
#define glXGetConfig glew::glx::glXGetConfig
#define glXGetCurrentContext glew::glx::glXGetCurrentContext
#define glXGetCurrentDrawable glew::glx::glXGetCurrentDrawable
#define glXWaitGL glew::glx::glXWaitGL
#define glXWaitX glew::glx::glXWaitX
#define glXUseXFont glew::glx::glXUseXFont
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
