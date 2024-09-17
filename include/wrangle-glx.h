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

#define GLEW_USE_GLX 1

#include <wrangle.h>

#include <cstring>

#include <string>

#include <unordered_set>

#include <X11/Xlib.h>

#include <X11/Xutil.h>

#include <GL/glcorearb.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct __GLXcontextRec *GLXContext;
typedef XID GLXPixmap;
typedef XID GLXDrawable;

typedef struct __GLXFBConfigRec *GLXFBConfig;
typedef XID GLXFBConfigID;
typedef XID GLXContextID;
typedef XID GLXWindow;
typedef XID GLXPbuffer;

// SGIX extension dummy types.
typedef void* DMbuffer;
typedef void* DMparams;
typedef void* VLServer;
typedef void* VLPath;
typedef void* VLNode;

#include <GL/glxext.h>

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
  GLEW_GLX_ARB_create_context_no_error,
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
  GLEW_GLX_EXT_context_priority,
  GLEW_GLX_EXT_create_context_es_profile,
  GLEW_GLX_EXT_create_context_es2_profile,
  GLEW_GLX_EXT_fbconfig_packed_float,
  GLEW_GLX_EXT_framebuffer_sRGB,
  GLEW_GLX_EXT_get_drawable_type,
  GLEW_GLX_EXT_import_context,
  GLEW_GLX_EXT_libglvnd,
  GLEW_GLX_EXT_no_config_context,
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
  GLEW_GLX_MESA_swap_control,
  GLEW_GLX_NV_copy_buffer,
  GLEW_GLX_NV_copy_image,
  GLEW_GLX_NV_delay_before_swap,
  GLEW_GLX_NV_float_buffer,
  GLEW_GLX_NV_multisample_coverage,
  GLEW_GLX_NV_present_video,
  GLEW_GLX_NV_robustness_video_memory_purge,
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
  GLEW_GLX_NV_multigpu_context,
  GLEW_GLX_FeatureSetCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum GLEW_GLX_ProcDelegate
{
  GLEW_GLX_glXQueryExtensionsString,
  GLEW_GLX_glXQueryServerString,
  GLEW_GLX_glXGetClientString,
  GLEW_GLX_glXGetCurrentDisplay,
  GLEW_GLX_glXGetFBConfigs,
  GLEW_GLX_glXChooseFBConfig,
  GLEW_GLX_glXGetFBConfigAttrib,
  GLEW_GLX_glXGetVisualFromFBConfig,
  GLEW_GLX_glXCreateWindow,
  GLEW_GLX_glXDestroyWindow,
  GLEW_GLX_glXCreatePixmap,
  GLEW_GLX_glXDestroyPixmap,
  GLEW_GLX_glXCreatePbuffer,
  GLEW_GLX_glXDestroyPbuffer,
  GLEW_GLX_glXQueryDrawable,
  GLEW_GLX_glXCreateNewContext,
  GLEW_GLX_glXMakeContextCurrent,
  GLEW_GLX_glXGetCurrentReadDrawable,
  GLEW_GLX_glXQueryContext,
  GLEW_GLX_glXSelectEvent,
  GLEW_GLX_glXGetSelectedEvent,
  GLEW_GLX_glXGetProcAddress,
  GLEW_GLX_glXGetGPUIDsAMD,
  GLEW_GLX_glXGetGPUInfoAMD,
  GLEW_GLX_glXGetContextGPUIDAMD,
  GLEW_GLX_glXCreateAssociatedContextAMD,
  GLEW_GLX_glXCreateAssociatedContextAttribsAMD,
  GLEW_GLX_glXDeleteAssociatedContextAMD,
  GLEW_GLX_glXMakeAssociatedContextCurrentAMD,
  GLEW_GLX_glXGetCurrentAssociatedContextAMD,
  GLEW_GLX_glXBlitContextFramebufferAMD,
  GLEW_GLX_glXCreateContextAttribsARB,
  GLEW_GLX_glXGetProcAddressARB,
  GLEW_GLX_glXGetCurrentDisplayEXT,
  GLEW_GLX_glXQueryContextInfoEXT,
  GLEW_GLX_glXGetContextIDEXT,
  GLEW_GLX_glXImportContextEXT,
  GLEW_GLX_glXFreeContextEXT,
  GLEW_GLX_glXSwapIntervalEXT,
  GLEW_GLX_glXBindTexImageEXT,
  GLEW_GLX_glXReleaseTexImageEXT,
  GLEW_GLX_glXGetAGPOffsetMESA,
  GLEW_GLX_glXCopySubBufferMESA,
  GLEW_GLX_glXCreateGLXPixmapMESA,
  GLEW_GLX_glXQueryCurrentRendererIntegerMESA,
  GLEW_GLX_glXQueryCurrentRendererStringMESA,
  GLEW_GLX_glXQueryRendererIntegerMESA,
  GLEW_GLX_glXQueryRendererStringMESA,
  GLEW_GLX_glXReleaseBuffersMESA,
  GLEW_GLX_glXSet3DfxModeMESA,
  GLEW_GLX_glXGetSwapIntervalMESA,
  GLEW_GLX_glXSwapIntervalMESA,
  GLEW_GLX_glXCopyBufferSubDataNV,
  GLEW_GLX_glXNamedCopyBufferSubDataNV,
  GLEW_GLX_glXCopyImageSubDataNV,
  GLEW_GLX_glXDelayBeforeSwapNV,
  GLEW_GLX_glXEnumerateVideoDevicesNV,
  GLEW_GLX_glXBindVideoDeviceNV,
  GLEW_GLX_glXJoinSwapGroupNV,
  GLEW_GLX_glXBindSwapBarrierNV,
  GLEW_GLX_glXQuerySwapGroupNV,
  GLEW_GLX_glXQueryMaxSwapGroupsNV,
  GLEW_GLX_glXQueryFrameCountNV,
  GLEW_GLX_glXResetFrameCountNV,
  GLEW_GLX_glXBindVideoCaptureDeviceNV,
  GLEW_GLX_glXEnumerateVideoCaptureDevicesNV,
  GLEW_GLX_glXLockVideoCaptureDeviceNV,
  GLEW_GLX_glXQueryVideoCaptureDeviceNV,
  GLEW_GLX_glXReleaseVideoCaptureDeviceNV,
  GLEW_GLX_glXGetVideoDeviceNV,
  GLEW_GLX_glXReleaseVideoDeviceNV,
  GLEW_GLX_glXBindVideoImageNV,
  GLEW_GLX_glXReleaseVideoImageNV,
  GLEW_GLX_glXSendPbufferToVideoNV,
  GLEW_GLX_glXGetVideoInfoNV,
  GLEW_GLX_glXGetSyncValuesOML,
  GLEW_GLX_glXGetMscRateOML,
  GLEW_GLX_glXSwapBuffersMscOML,
  GLEW_GLX_glXWaitForMscOML,
  GLEW_GLX_glXWaitForSbcOML,
  GLEW_GLX_glXCushionSGI,
  GLEW_GLX_glXMakeCurrentReadSGI,
  GLEW_GLX_glXGetCurrentReadDrawableSGI,
  GLEW_GLX_glXSwapIntervalSGI,
  GLEW_GLX_glXGetVideoSyncSGI,
  GLEW_GLX_glXWaitVideoSyncSGI,
  GLEW_GLX_glXAssociateDMPbufferSGIX,
  GLEW_GLX_glXGetFBConfigAttribSGIX,
  GLEW_GLX_glXChooseFBConfigSGIX,
  GLEW_GLX_glXCreateGLXPixmapWithConfigSGIX,
  GLEW_GLX_glXCreateContextWithConfigSGIX,
  GLEW_GLX_glXGetVisualFromFBConfigSGIX,
  GLEW_GLX_glXGetFBConfigFromVisualSGIX,
  GLEW_GLX_glXQueryHyperpipeNetworkSGIX,
  GLEW_GLX_glXHyperpipeConfigSGIX,
  GLEW_GLX_glXQueryHyperpipeConfigSGIX,
  GLEW_GLX_glXDestroyHyperpipeConfigSGIX,
  GLEW_GLX_glXBindHyperpipeSGIX,
  GLEW_GLX_glXQueryHyperpipeBestAttribSGIX,
  GLEW_GLX_glXHyperpipeAttribSGIX,
  GLEW_GLX_glXQueryHyperpipeAttribSGIX,
  GLEW_GLX_glXCreateGLXPbufferSGIX,
  GLEW_GLX_glXDestroyGLXPbufferSGIX,
  GLEW_GLX_glXQueryGLXPbufferSGIX,
  GLEW_GLX_glXSelectEventSGIX,
  GLEW_GLX_glXGetSelectedEventSGIX,
  GLEW_GLX_glXBindSwapBarrierSGIX,
  GLEW_GLX_glXQueryMaxSwapBarriersSGIX,
  GLEW_GLX_glXJoinSwapGroupSGIX,
  GLEW_GLX_glXBindChannelToWindowSGIX,
  GLEW_GLX_glXChannelRectSGIX,
  GLEW_GLX_glXQueryChannelRectSGIX,
  GLEW_GLX_glXQueryChannelDeltasSGIX,
  GLEW_GLX_glXChannelRectSyncSGIX,
  GLEW_GLX_glXCreateGLXVideoSourceSGIX,
  GLEW_GLX_glXDestroyGLXVideoSourceSGIX,
  GLEW_GLX_glXGetTransparentIndexSUN,
  GLEW_GLX_ProcDelegateCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef const char * (* PFNGLXQUERYEXTENSIONSSTRINGPROC) /* glXQueryExtensionsString */ (Display * dpy, int screen);
typedef const char * (* PFNGLXQUERYSERVERSTRINGPROC) /* glXQueryServerString */ (Display * dpy, int screen, int name);
typedef const char * (* PFNGLXGETCLIENTSTRINGPROC) /* glXGetClientString */ (Display * dpy, int name);
typedef Display * (* PFNGLXGETCURRENTDISPLAYPROC) /* glXGetCurrentDisplay */ ();
typedef GLXFBConfig * (* PFNGLXGETFBCONFIGSPROC) /* glXGetFBConfigs */ (Display * dpy, int screen, int * nelements);
typedef GLXFBConfig * (* PFNGLXCHOOSEFBCONFIGPROC) /* glXChooseFBConfig */ (Display * dpy, int screen, const int * attrib_list, int * nelements);
typedef int (* PFNGLXGETFBCONFIGATTRIBPROC) /* glXGetFBConfigAttrib */ (Display * dpy, GLXFBConfig config, int attribute, int * value);
typedef XVisualInfo * (* PFNGLXGETVISUALFROMFBCONFIGPROC) /* glXGetVisualFromFBConfig */ (Display * dpy, GLXFBConfig config);
typedef GLXWindow (* PFNGLXCREATEWINDOWPROC) /* glXCreateWindow */ (Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
typedef void (* PFNGLXDESTROYWINDOWPROC) /* glXDestroyWindow */ (Display * dpy, GLXWindow win);
typedef GLXPixmap (* PFNGLXCREATEPIXMAPPROC) /* glXCreatePixmap */ (Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
typedef void (* PFNGLXDESTROYPIXMAPPROC) /* glXDestroyPixmap */ (Display * dpy, GLXPixmap pixmap);
typedef GLXPbuffer (* PFNGLXCREATEPBUFFERPROC) /* glXCreatePbuffer */ (Display * dpy, GLXFBConfig config, const int * attrib_list);
typedef void (* PFNGLXDESTROYPBUFFERPROC) /* glXDestroyPbuffer */ (Display * dpy, GLXPbuffer pbuf);
typedef void (* PFNGLXQUERYDRAWABLEPROC) /* glXQueryDrawable */ (Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
typedef GLXContext (* PFNGLXCREATENEWCONTEXTPROC) /* glXCreateNewContext */ (Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef Bool (* PFNGLXMAKECONTEXTCURRENTPROC) /* glXMakeContextCurrent */ (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable (* PFNGLXGETCURRENTREADDRAWABLEPROC) /* glXGetCurrentReadDrawable */ ();
typedef int (* PFNGLXQUERYCONTEXTPROC) /* glXQueryContext */ (Display * dpy, GLXContext ctx, int attribute, int * value);
typedef void (* PFNGLXSELECTEVENTPROC) /* glXSelectEvent */ (Display * dpy, GLXDrawable draw, unsigned long event_mask);
typedef void (* PFNGLXGETSELECTEDEVENTPROC) /* glXGetSelectedEvent */ (Display * dpy, GLXDrawable draw, unsigned long * event_mask);
typedef __GLXextFuncPtr (* PFNGLXGETPROCADDRESSPROC) /* glXGetProcAddress */ (const GLubyte * procName);
typedef unsigned int (* PFNGLXGETGPUIDSAMDPROC) /* glXGetGPUIDsAMD */ (unsigned int maxCount, unsigned int * ids);
typedef int (* PFNGLXGETGPUINFOAMDPROC) /* glXGetGPUInfoAMD */ (unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
typedef unsigned int (* PFNGLXGETCONTEXTGPUIDAMDPROC) /* glXGetContextGPUIDAMD */ (GLXContext ctx);
typedef GLXContext (* PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) /* glXCreateAssociatedContextAMD */ (unsigned int id, GLXContext share_list);
typedef GLXContext (* PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) /* glXCreateAssociatedContextAttribsAMD */ (unsigned int id, GLXContext share_context, const int * attribList);
typedef Bool (* PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) /* glXDeleteAssociatedContextAMD */ (GLXContext ctx);
typedef Bool (* PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) /* glXMakeAssociatedContextCurrentAMD */ (GLXContext ctx);
typedef GLXContext (* PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) /* glXGetCurrentAssociatedContextAMD */ ();
typedef void (* PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) /* glXBlitContextFramebufferAMD */ (GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLXContext (* PFNGLXCREATECONTEXTATTRIBSARBPROC) /* glXCreateContextAttribsARB */ (Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
typedef __GLXextFuncPtr (* PFNGLXGETPROCADDRESSARBPROC) /* glXGetProcAddressARB */ (const GLubyte * procName);
typedef Display * (* PFNGLXGETCURRENTDISPLAYEXTPROC) /* glXGetCurrentDisplayEXT */ ();
typedef int (* PFNGLXQUERYCONTEXTINFOEXTPROC) /* glXQueryContextInfoEXT */ (Display * dpy, GLXContext context, int attribute, int * value);
typedef GLXContextID (* PFNGLXGETCONTEXTIDEXTPROC) /* glXGetContextIDEXT */ (const GLXContext context);
typedef GLXContext (* PFNGLXIMPORTCONTEXTEXTPROC) /* glXImportContextEXT */ (Display * dpy, GLXContextID contextID);
typedef void (* PFNGLXFREECONTEXTEXTPROC) /* glXFreeContextEXT */ (Display * dpy, GLXContext context);
typedef void (* PFNGLXSWAPINTERVALEXTPROC) /* glXSwapIntervalEXT */ (Display * dpy, GLXDrawable drawable, int interval);
typedef void (* PFNGLXBINDTEXIMAGEEXTPROC) /* glXBindTexImageEXT */ (Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
typedef void (* PFNGLXRELEASETEXIMAGEEXTPROC) /* glXReleaseTexImageEXT */ (Display * dpy, GLXDrawable drawable, int buffer);
typedef unsigned int (* PFNGLXGETAGPOFFSETMESAPROC) /* glXGetAGPOffsetMESA */ (const void * pointer);
typedef void (* PFNGLXCOPYSUBBUFFERMESAPROC) /* glXCopySubBufferMESA */ (Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
typedef GLXPixmap (* PFNGLXCREATEGLXPIXMAPMESAPROC) /* glXCreateGLXPixmapMESA */ (Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
typedef Bool (* PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) /* glXQueryCurrentRendererIntegerMESA */ (int attribute, unsigned int * value);
typedef const char * (* PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) /* glXQueryCurrentRendererStringMESA */ (int attribute);
typedef Bool (* PFNGLXQUERYRENDERERINTEGERMESAPROC) /* glXQueryRendererIntegerMESA */ (Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
typedef const char * (* PFNGLXQUERYRENDERERSTRINGMESAPROC) /* glXQueryRendererStringMESA */ (Display * dpy, int screen, int renderer, int attribute);
typedef Bool (* PFNGLXRELEASEBUFFERSMESAPROC) /* glXReleaseBuffersMESA */ (Display * dpy, GLXDrawable drawable);
typedef GLboolean (* PFNGLXSET3DFXMODEMESAPROC) /* glXSet3DfxModeMESA */ (GLint mode);
typedef int (* PFNGLXGETSWAPINTERVALMESAPROC) /* glXGetSwapIntervalMESA */ ();
typedef int (* PFNGLXSWAPINTERVALMESAPROC) /* glXSwapIntervalMESA */ (unsigned int interval);
typedef void (* PFNGLXCOPYBUFFERSUBDATANVPROC) /* glXCopyBufferSubDataNV */ (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (* PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) /* glXNamedCopyBufferSubDataNV */ (Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (* PFNGLXCOPYIMAGESUBDATANVPROC) /* glXCopyImageSubDataNV */ (Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
typedef Bool (* PFNGLXDELAYBEFORESWAPNVPROC) /* glXDelayBeforeSwapNV */ (Display * dpy, GLXDrawable drawable, GLfloat seconds);
typedef unsigned int * (* PFNGLXENUMERATEVIDEODEVICESNVPROC) /* glXEnumerateVideoDevicesNV */ (Display * dpy, int screen, int * nelements);
typedef int (* PFNGLXBINDVIDEODEVICENVPROC) /* glXBindVideoDeviceNV */ (Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
typedef Bool (* PFNGLXJOINSWAPGROUPNVPROC) /* glXJoinSwapGroupNV */ (Display * dpy, GLXDrawable drawable, GLuint group);
typedef Bool (* PFNGLXBINDSWAPBARRIERNVPROC) /* glXBindSwapBarrierNV */ (Display * dpy, GLuint group, GLuint barrier);
typedef Bool (* PFNGLXQUERYSWAPGROUPNVPROC) /* glXQuerySwapGroupNV */ (Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
typedef Bool (* PFNGLXQUERYMAXSWAPGROUPSNVPROC) /* glXQueryMaxSwapGroupsNV */ (Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
typedef Bool (* PFNGLXQUERYFRAMECOUNTNVPROC) /* glXQueryFrameCountNV */ (Display * dpy, int screen, GLuint * count);
typedef Bool (* PFNGLXRESETFRAMECOUNTNVPROC) /* glXResetFrameCountNV */ (Display * dpy, int screen);
typedef int (* PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) /* glXBindVideoCaptureDeviceNV */ (Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef GLXVideoCaptureDeviceNV * (* PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) /* glXEnumerateVideoCaptureDevicesNV */ (Display * dpy, int screen, int * nelements);
typedef void (* PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) /* glXLockVideoCaptureDeviceNV */ (Display * dpy, GLXVideoCaptureDeviceNV device);
typedef int (* PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) /* glXQueryVideoCaptureDeviceNV */ (Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
typedef void (* PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) /* glXReleaseVideoCaptureDeviceNV */ (Display * dpy, GLXVideoCaptureDeviceNV device);
typedef int (* PFNGLXGETVIDEODEVICENVPROC) /* glXGetVideoDeviceNV */ (Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
typedef int (* PFNGLXRELEASEVIDEODEVICENVPROC) /* glXReleaseVideoDeviceNV */ (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef int (* PFNGLXBINDVIDEOIMAGENVPROC) /* glXBindVideoImageNV */ (Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
typedef int (* PFNGLXRELEASEVIDEOIMAGENVPROC) /* glXReleaseVideoImageNV */ (Display * dpy, GLXPbuffer pbuf);
typedef int (* PFNGLXSENDPBUFFERTOVIDEONVPROC) /* glXSendPbufferToVideoNV */ (Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
typedef int (* PFNGLXGETVIDEOINFONVPROC) /* glXGetVideoInfoNV */ (Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
typedef Bool (* PFNGLXGETSYNCVALUESOMLPROC) /* glXGetSyncValuesOML */ (Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef Bool (* PFNGLXGETMSCRATEOMLPROC) /* glXGetMscRateOML */ (Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
typedef int64_t (* PFNGLXSWAPBUFFERSMSCOMLPROC) /* glXSwapBuffersMscOML */ (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef Bool (* PFNGLXWAITFORMSCOMLPROC) /* glXWaitForMscOML */ (Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef Bool (* PFNGLXWAITFORSBCOMLPROC) /* glXWaitForSbcOML */ (Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef void (* PFNGLXCUSHIONSGIPROC) /* glXCushionSGI */ (Display * dpy, Window window, float cushion);
typedef Bool (* PFNGLXMAKECURRENTREADSGIPROC) /* glXMakeCurrentReadSGI */ (Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable (* PFNGLXGETCURRENTREADDRAWABLESGIPROC) /* glXGetCurrentReadDrawableSGI */ ();
typedef int (* PFNGLXSWAPINTERVALSGIPROC) /* glXSwapIntervalSGI */ (int interval);
typedef int (* PFNGLXGETVIDEOSYNCSGIPROC) /* glXGetVideoSyncSGI */ (unsigned int * count);
typedef int (* PFNGLXWAITVIDEOSYNCSGIPROC) /* glXWaitVideoSyncSGI */ (int divisor, int remainder, unsigned int * count);
typedef Bool (* PFNGLXASSOCIATEDMPBUFFERSGIXPROC) /* glXAssociateDMPbufferSGIX */ (Display * dpy, GLXPbufferSGIX pbuffer, DMparams * params, DMbuffer dmbuffer);
typedef int (* PFNGLXGETFBCONFIGATTRIBSGIXPROC) /* glXGetFBConfigAttribSGIX */ (Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
typedef GLXFBConfigSGIX * (* PFNGLXCHOOSEFBCONFIGSGIXPROC) /* glXChooseFBConfigSGIX */ (Display * dpy, int screen, int * attrib_list, int * nelements);
typedef GLXPixmap (* PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) /* glXCreateGLXPixmapWithConfigSGIX */ (Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef GLXContext (* PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) /* glXCreateContextWithConfigSGIX */ (Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
typedef XVisualInfo * (* PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) /* glXGetVisualFromFBConfigSGIX */ (Display * dpy, GLXFBConfigSGIX config);
typedef GLXFBConfigSGIX (* PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) /* glXGetFBConfigFromVisualSGIX */ (Display * dpy, XVisualInfo * vis);
typedef GLXHyperpipeNetworkSGIX * (* PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) /* glXQueryHyperpipeNetworkSGIX */ (Display * dpy, int * npipes);
typedef int (* PFNGLXHYPERPIPECONFIGSGIXPROC) /* glXHyperpipeConfigSGIX */ (Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
typedef GLXHyperpipeConfigSGIX * (* PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) /* glXQueryHyperpipeConfigSGIX */ (Display * dpy, int hpId, int * npipes);
typedef int (* PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) /* glXDestroyHyperpipeConfigSGIX */ (Display * dpy, int hpId);
typedef int (* PFNGLXBINDHYPERPIPESGIXPROC) /* glXBindHyperpipeSGIX */ (Display * dpy, int hpId);
typedef int (* PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) /* glXQueryHyperpipeBestAttribSGIX */ (Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
typedef int (* PFNGLXHYPERPIPEATTRIBSGIXPROC) /* glXHyperpipeAttribSGIX */ (Display * dpy, int timeSlice, int attrib, int size, void * attribList);
typedef int (* PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) /* glXQueryHyperpipeAttribSGIX */ (Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
typedef GLXPbufferSGIX (* PFNGLXCREATEGLXPBUFFERSGIXPROC) /* glXCreateGLXPbufferSGIX */ (Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
typedef void (* PFNGLXDESTROYGLXPBUFFERSGIXPROC) /* glXDestroyGLXPbufferSGIX */ (Display * dpy, GLXPbufferSGIX pbuf);
typedef void (* PFNGLXQUERYGLXPBUFFERSGIXPROC) /* glXQueryGLXPbufferSGIX */ (Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
typedef void (* PFNGLXSELECTEVENTSGIXPROC) /* glXSelectEventSGIX */ (Display * dpy, GLXDrawable drawable, unsigned long mask);
typedef void (* PFNGLXGETSELECTEDEVENTSGIXPROC) /* glXGetSelectedEventSGIX */ (Display * dpy, GLXDrawable drawable, unsigned long * mask);
typedef void (* PFNGLXBINDSWAPBARRIERSGIXPROC) /* glXBindSwapBarrierSGIX */ (Display * dpy, GLXDrawable drawable, int barrier);
typedef Bool (* PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) /* glXQueryMaxSwapBarriersSGIX */ (Display * dpy, int screen, int * max);
typedef void (* PFNGLXJOINSWAPGROUPSGIXPROC) /* glXJoinSwapGroupSGIX */ (Display * dpy, GLXDrawable drawable, GLXDrawable member);
typedef int (* PFNGLXBINDCHANNELTOWINDOWSGIXPROC) /* glXBindChannelToWindowSGIX */ (Display * display, int screen, int channel, Window window);
typedef int (* PFNGLXCHANNELRECTSGIXPROC) /* glXChannelRectSGIX */ (Display * display, int screen, int channel, int x, int y, int w, int h);
typedef int (* PFNGLXQUERYCHANNELRECTSGIXPROC) /* glXQueryChannelRectSGIX */ (Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
typedef int (* PFNGLXQUERYCHANNELDELTASSGIXPROC) /* glXQueryChannelDeltasSGIX */ (Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
typedef int (* PFNGLXCHANNELRECTSYNCSGIXPROC) /* glXChannelRectSyncSGIX */ (Display * display, int screen, int channel, GLenum synctype);
typedef GLXVideoSourceSGIX (* PFNGLXCREATEGLXVIDEOSOURCESGIXPROC) /* glXCreateGLXVideoSourceSGIX */ (Display * display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
typedef void (* PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC) /* glXDestroyGLXVideoSourceSGIX */ (Display * dpy, GLXVideoSourceSGIX glxvideosource);
typedef Status (* PFNGLXGETTRANSPARENTINDEXSUNPROC) /* glXGetTransparentIndexSUN */ (Display * dpy, Window overlay, Window underlay, unsigned long * pTransparentIndex);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew {
  namespace glx {

    class Context {
    public:

      Context(std::unordered_set<std::string> &supportedExtensions, void* (*glxGetProcAddressFunc)(const char*)) {
        m_featureSupported[GLEW_GLX_VERSION_1_1] = (supportedExtensions.find("GLX_VERSION_1_1") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_VERSION_1_2] = (supportedExtensions.find("GLX_VERSION_1_2") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_VERSION_1_3] = (supportedExtensions.find("GLX_VERSION_1_3") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_VERSION_1_4] = (supportedExtensions.find("GLX_VERSION_1_4") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_3DFX_multisample] = (supportedExtensions.find("GLX_3DFX_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_AMD_gpu_association] = (supportedExtensions.find("GLX_AMD_gpu_association") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_context_flush_control] = (supportedExtensions.find("GLX_ARB_context_flush_control") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_create_context] = (supportedExtensions.find("GLX_ARB_create_context") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_create_context_no_error] = (supportedExtensions.find("GLX_ARB_create_context_no_error") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_create_context_profile] = (supportedExtensions.find("GLX_ARB_create_context_profile") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_create_context_robustness] = (supportedExtensions.find("GLX_ARB_create_context_robustness") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_fbconfig_float] = (supportedExtensions.find("GLX_ARB_fbconfig_float") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_framebuffer_sRGB] = (supportedExtensions.find("GLX_ARB_framebuffer_sRGB") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_get_proc_address] = (supportedExtensions.find("GLX_ARB_get_proc_address") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_multisample] = (supportedExtensions.find("GLX_ARB_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_robustness_application_isolation] = (supportedExtensions.find("GLX_ARB_robustness_application_isolation") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_robustness_share_group_isolation] = (supportedExtensions.find("GLX_ARB_robustness_share_group_isolation") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_ARB_vertex_buffer_object] = (supportedExtensions.find("GLX_ARB_vertex_buffer_object") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_buffer_age] = (supportedExtensions.find("GLX_EXT_buffer_age") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_context_priority] = (supportedExtensions.find("GLX_EXT_context_priority") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_create_context_es_profile] = (supportedExtensions.find("GLX_EXT_create_context_es_profile") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_create_context_es2_profile] = (supportedExtensions.find("GLX_EXT_create_context_es2_profile") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_fbconfig_packed_float] = (supportedExtensions.find("GLX_EXT_fbconfig_packed_float") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_framebuffer_sRGB] = (supportedExtensions.find("GLX_EXT_framebuffer_sRGB") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_get_drawable_type] = (supportedExtensions.find("GLX_EXT_get_drawable_type") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_import_context] = (supportedExtensions.find("GLX_EXT_import_context") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_libglvnd] = (supportedExtensions.find("GLX_EXT_libglvnd") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_no_config_context] = (supportedExtensions.find("GLX_EXT_no_config_context") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_stereo_tree] = (supportedExtensions.find("GLX_EXT_stereo_tree") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_swap_control] = (supportedExtensions.find("GLX_EXT_swap_control") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_swap_control_tear] = (supportedExtensions.find("GLX_EXT_swap_control_tear") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_texture_from_pixmap] = (supportedExtensions.find("GLX_EXT_texture_from_pixmap") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_visual_info] = (supportedExtensions.find("GLX_EXT_visual_info") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_EXT_visual_rating] = (supportedExtensions.find("GLX_EXT_visual_rating") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_INTEL_swap_event] = (supportedExtensions.find("GLX_INTEL_swap_event") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_agp_offset] = (supportedExtensions.find("GLX_MESA_agp_offset") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_copy_sub_buffer] = (supportedExtensions.find("GLX_MESA_copy_sub_buffer") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_pixmap_colormap] = (supportedExtensions.find("GLX_MESA_pixmap_colormap") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_query_renderer] = (supportedExtensions.find("GLX_MESA_query_renderer") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_release_buffers] = (supportedExtensions.find("GLX_MESA_release_buffers") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_set_3dfx_mode] = (supportedExtensions.find("GLX_MESA_set_3dfx_mode") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_MESA_swap_control] = (supportedExtensions.find("GLX_MESA_swap_control") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_copy_buffer] = (supportedExtensions.find("GLX_NV_copy_buffer") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_copy_image] = (supportedExtensions.find("GLX_NV_copy_image") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_delay_before_swap] = (supportedExtensions.find("GLX_NV_delay_before_swap") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_float_buffer] = (supportedExtensions.find("GLX_NV_float_buffer") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_multisample_coverage] = (supportedExtensions.find("GLX_NV_multisample_coverage") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_present_video] = (supportedExtensions.find("GLX_NV_present_video") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_robustness_video_memory_purge] = (supportedExtensions.find("GLX_NV_robustness_video_memory_purge") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_swap_group] = (supportedExtensions.find("GLX_NV_swap_group") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_video_capture] = (supportedExtensions.find("GLX_NV_video_capture") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_video_out] = (supportedExtensions.find("GLX_NV_video_out") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_OML_swap_method] = (supportedExtensions.find("GLX_OML_swap_method") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_OML_sync_control] = (supportedExtensions.find("GLX_OML_sync_control") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGI_cushion] = (supportedExtensions.find("GLX_SGI_cushion") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGI_make_current_read] = (supportedExtensions.find("GLX_SGI_make_current_read") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGI_swap_control] = (supportedExtensions.find("GLX_SGI_swap_control") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGI_video_sync] = (supportedExtensions.find("GLX_SGI_video_sync") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIS_blended_overlay] = (supportedExtensions.find("GLX_SGIS_blended_overlay") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIS_multisample] = (supportedExtensions.find("GLX_SGIS_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIS_shared_multisample] = (supportedExtensions.find("GLX_SGIS_shared_multisample") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_dmbuffer] = (supportedExtensions.find("GLX_SGIX_dmbuffer") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_fbconfig] = (supportedExtensions.find("GLX_SGIX_fbconfig") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_hyperpipe] = (supportedExtensions.find("GLX_SGIX_hyperpipe") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_pbuffer] = (supportedExtensions.find("GLX_SGIX_pbuffer") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_swap_barrier] = (supportedExtensions.find("GLX_SGIX_swap_barrier") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_swap_group] = (supportedExtensions.find("GLX_SGIX_swap_group") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_video_resize] = (supportedExtensions.find("GLX_SGIX_video_resize") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_video_source] = (supportedExtensions.find("GLX_SGIX_video_source") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SGIX_visual_select_group] = (supportedExtensions.find("GLX_SGIX_visual_select_group") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_SUN_get_transparent_index] = (supportedExtensions.find("GLX_SUN_get_transparent_index") != supportedExtensions.end());
        m_featureSupported[GLEW_GLX_NV_multigpu_context] = (supportedExtensions.find("GLX_NV_multigpu_context") != supportedExtensions.end());


        // GLX_VERSION_1_1
        if (m_featureSupported[GLEW_GLX_VERSION_1_1]) {
          m_glXQueryExtensionsString = (PFNGLXQUERYEXTENSIONSSTRINGPROC) glxGetProcAddressFunc("glXQueryExtensionsString");
          m_glXQueryServerString = (PFNGLXQUERYSERVERSTRINGPROC) glxGetProcAddressFunc("glXQueryServerString");
          m_glXGetClientString = (PFNGLXGETCLIENTSTRINGPROC) glxGetProcAddressFunc("glXGetClientString");
        }

        // GLX_VERSION_1_2
        if (m_featureSupported[GLEW_GLX_VERSION_1_2]) {
          m_glXGetCurrentDisplay = (PFNGLXGETCURRENTDISPLAYPROC) glxGetProcAddressFunc("glXGetCurrentDisplay");
        }

        // GLX_VERSION_1_3
        if (m_featureSupported[GLEW_GLX_VERSION_1_3]) {
          m_glXGetFBConfigs = (PFNGLXGETFBCONFIGSPROC) glxGetProcAddressFunc("glXGetFBConfigs");
          m_glXChooseFBConfig = (PFNGLXCHOOSEFBCONFIGPROC) glxGetProcAddressFunc("glXChooseFBConfig");
          m_glXGetFBConfigAttrib = (PFNGLXGETFBCONFIGATTRIBPROC) glxGetProcAddressFunc("glXGetFBConfigAttrib");
          m_glXGetVisualFromFBConfig = (PFNGLXGETVISUALFROMFBCONFIGPROC) glxGetProcAddressFunc("glXGetVisualFromFBConfig");
          m_glXCreateWindow = (PFNGLXCREATEWINDOWPROC) glxGetProcAddressFunc("glXCreateWindow");
          m_glXDestroyWindow = (PFNGLXDESTROYWINDOWPROC) glxGetProcAddressFunc("glXDestroyWindow");
          m_glXCreatePixmap = (PFNGLXCREATEPIXMAPPROC) glxGetProcAddressFunc("glXCreatePixmap");
          m_glXDestroyPixmap = (PFNGLXDESTROYPIXMAPPROC) glxGetProcAddressFunc("glXDestroyPixmap");
          m_glXCreatePbuffer = (PFNGLXCREATEPBUFFERPROC) glxGetProcAddressFunc("glXCreatePbuffer");
          m_glXDestroyPbuffer = (PFNGLXDESTROYPBUFFERPROC) glxGetProcAddressFunc("glXDestroyPbuffer");
          m_glXQueryDrawable = (PFNGLXQUERYDRAWABLEPROC) glxGetProcAddressFunc("glXQueryDrawable");
          m_glXCreateNewContext = (PFNGLXCREATENEWCONTEXTPROC) glxGetProcAddressFunc("glXCreateNewContext");
          m_glXMakeContextCurrent = (PFNGLXMAKECONTEXTCURRENTPROC) glxGetProcAddressFunc("glXMakeContextCurrent");
          m_glXGetCurrentReadDrawable = (PFNGLXGETCURRENTREADDRAWABLEPROC) glxGetProcAddressFunc("glXGetCurrentReadDrawable");
          m_glXQueryContext = (PFNGLXQUERYCONTEXTPROC) glxGetProcAddressFunc("glXQueryContext");
          m_glXSelectEvent = (PFNGLXSELECTEVENTPROC) glxGetProcAddressFunc("glXSelectEvent");
          m_glXGetSelectedEvent = (PFNGLXGETSELECTEDEVENTPROC) glxGetProcAddressFunc("glXGetSelectedEvent");
        }

        // GLX_VERSION_1_4
        if (m_featureSupported[GLEW_GLX_VERSION_1_4]) {
          m_glXGetProcAddress = (PFNGLXGETPROCADDRESSPROC) glxGetProcAddressFunc("glXGetProcAddress");
        }

        // GLX_AMD_gpu_association
        if (m_featureSupported[GLEW_GLX_AMD_gpu_association]) {
          m_glXGetGPUIDsAMD = (PFNGLXGETGPUIDSAMDPROC) glxGetProcAddressFunc("glXGetGPUIDsAMD");
          m_glXGetGPUInfoAMD = (PFNGLXGETGPUINFOAMDPROC) glxGetProcAddressFunc("glXGetGPUInfoAMD");
          m_glXGetContextGPUIDAMD = (PFNGLXGETCONTEXTGPUIDAMDPROC) glxGetProcAddressFunc("glXGetContextGPUIDAMD");
          m_glXCreateAssociatedContextAMD = (PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) glxGetProcAddressFunc("glXCreateAssociatedContextAMD");
          m_glXCreateAssociatedContextAttribsAMD = (PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) glxGetProcAddressFunc("glXCreateAssociatedContextAttribsAMD");
          m_glXDeleteAssociatedContextAMD = (PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) glxGetProcAddressFunc("glXDeleteAssociatedContextAMD");
          m_glXMakeAssociatedContextCurrentAMD = (PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) glxGetProcAddressFunc("glXMakeAssociatedContextCurrentAMD");
          m_glXGetCurrentAssociatedContextAMD = (PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) glxGetProcAddressFunc("glXGetCurrentAssociatedContextAMD");
          m_glXBlitContextFramebufferAMD = (PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) glxGetProcAddressFunc("glXBlitContextFramebufferAMD");
        }

        // GLX_ARB_create_context
        if (m_featureSupported[GLEW_GLX_ARB_create_context]) {
          m_glXCreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC) glxGetProcAddressFunc("glXCreateContextAttribsARB");
        }

        // GLX_ARB_get_proc_address
        if (m_featureSupported[GLEW_GLX_ARB_get_proc_address]) {
          m_glXGetProcAddressARB = (PFNGLXGETPROCADDRESSARBPROC) glxGetProcAddressFunc("glXGetProcAddressARB");
        }

        // GLX_EXT_import_context
        if (m_featureSupported[GLEW_GLX_EXT_import_context]) {
          m_glXGetCurrentDisplayEXT = (PFNGLXGETCURRENTDISPLAYEXTPROC) glxGetProcAddressFunc("glXGetCurrentDisplayEXT");
          m_glXQueryContextInfoEXT = (PFNGLXQUERYCONTEXTINFOEXTPROC) glxGetProcAddressFunc("glXQueryContextInfoEXT");
          m_glXGetContextIDEXT = (PFNGLXGETCONTEXTIDEXTPROC) glxGetProcAddressFunc("glXGetContextIDEXT");
          m_glXImportContextEXT = (PFNGLXIMPORTCONTEXTEXTPROC) glxGetProcAddressFunc("glXImportContextEXT");
          m_glXFreeContextEXT = (PFNGLXFREECONTEXTEXTPROC) glxGetProcAddressFunc("glXFreeContextEXT");
        }

        // GLX_EXT_swap_control
        if (m_featureSupported[GLEW_GLX_EXT_swap_control]) {
          m_glXSwapIntervalEXT = (PFNGLXSWAPINTERVALEXTPROC) glxGetProcAddressFunc("glXSwapIntervalEXT");
        }

        // GLX_EXT_texture_from_pixmap
        if (m_featureSupported[GLEW_GLX_EXT_texture_from_pixmap]) {
          m_glXBindTexImageEXT = (PFNGLXBINDTEXIMAGEEXTPROC) glxGetProcAddressFunc("glXBindTexImageEXT");
          m_glXReleaseTexImageEXT = (PFNGLXRELEASETEXIMAGEEXTPROC) glxGetProcAddressFunc("glXReleaseTexImageEXT");
        }

        // GLX_MESA_agp_offset
        if (m_featureSupported[GLEW_GLX_MESA_agp_offset]) {
          m_glXGetAGPOffsetMESA = (PFNGLXGETAGPOFFSETMESAPROC) glxGetProcAddressFunc("glXGetAGPOffsetMESA");
        }

        // GLX_MESA_copy_sub_buffer
        if (m_featureSupported[GLEW_GLX_MESA_copy_sub_buffer]) {
          m_glXCopySubBufferMESA = (PFNGLXCOPYSUBBUFFERMESAPROC) glxGetProcAddressFunc("glXCopySubBufferMESA");
        }

        // GLX_MESA_pixmap_colormap
        if (m_featureSupported[GLEW_GLX_MESA_pixmap_colormap]) {
          m_glXCreateGLXPixmapMESA = (PFNGLXCREATEGLXPIXMAPMESAPROC) glxGetProcAddressFunc("glXCreateGLXPixmapMESA");
        }

        // GLX_MESA_query_renderer
        if (m_featureSupported[GLEW_GLX_MESA_query_renderer]) {
          m_glXQueryCurrentRendererIntegerMESA = (PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) glxGetProcAddressFunc("glXQueryCurrentRendererIntegerMESA");
          m_glXQueryCurrentRendererStringMESA = (PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) glxGetProcAddressFunc("glXQueryCurrentRendererStringMESA");
          m_glXQueryRendererIntegerMESA = (PFNGLXQUERYRENDERERINTEGERMESAPROC) glxGetProcAddressFunc("glXQueryRendererIntegerMESA");
          m_glXQueryRendererStringMESA = (PFNGLXQUERYRENDERERSTRINGMESAPROC) glxGetProcAddressFunc("glXQueryRendererStringMESA");
        }

        // GLX_MESA_release_buffers
        if (m_featureSupported[GLEW_GLX_MESA_release_buffers]) {
          m_glXReleaseBuffersMESA = (PFNGLXRELEASEBUFFERSMESAPROC) glxGetProcAddressFunc("glXReleaseBuffersMESA");
        }

        // GLX_MESA_set_3dfx_mode
        if (m_featureSupported[GLEW_GLX_MESA_set_3dfx_mode]) {
          m_glXSet3DfxModeMESA = (PFNGLXSET3DFXMODEMESAPROC) glxGetProcAddressFunc("glXSet3DfxModeMESA");
        }

        // GLX_MESA_swap_control
        if (m_featureSupported[GLEW_GLX_MESA_swap_control]) {
          m_glXGetSwapIntervalMESA = (PFNGLXGETSWAPINTERVALMESAPROC) glxGetProcAddressFunc("glXGetSwapIntervalMESA");
          m_glXSwapIntervalMESA = (PFNGLXSWAPINTERVALMESAPROC) glxGetProcAddressFunc("glXSwapIntervalMESA");
        }

        // GLX_NV_copy_buffer
        if (m_featureSupported[GLEW_GLX_NV_copy_buffer]) {
          m_glXCopyBufferSubDataNV = (PFNGLXCOPYBUFFERSUBDATANVPROC) glxGetProcAddressFunc("glXCopyBufferSubDataNV");
          m_glXNamedCopyBufferSubDataNV = (PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) glxGetProcAddressFunc("glXNamedCopyBufferSubDataNV");
        }

        // GLX_NV_copy_image
        if (m_featureSupported[GLEW_GLX_NV_copy_image]) {
          m_glXCopyImageSubDataNV = (PFNGLXCOPYIMAGESUBDATANVPROC) glxGetProcAddressFunc("glXCopyImageSubDataNV");
        }

        // GLX_NV_delay_before_swap
        if (m_featureSupported[GLEW_GLX_NV_delay_before_swap]) {
          m_glXDelayBeforeSwapNV = (PFNGLXDELAYBEFORESWAPNVPROC) glxGetProcAddressFunc("glXDelayBeforeSwapNV");
        }

        // GLX_NV_present_video
        if (m_featureSupported[GLEW_GLX_NV_present_video]) {
          m_glXEnumerateVideoDevicesNV = (PFNGLXENUMERATEVIDEODEVICESNVPROC) glxGetProcAddressFunc("glXEnumerateVideoDevicesNV");
          m_glXBindVideoDeviceNV = (PFNGLXBINDVIDEODEVICENVPROC) glxGetProcAddressFunc("glXBindVideoDeviceNV");
        }

        // GLX_NV_swap_group
        if (m_featureSupported[GLEW_GLX_NV_swap_group]) {
          m_glXJoinSwapGroupNV = (PFNGLXJOINSWAPGROUPNVPROC) glxGetProcAddressFunc("glXJoinSwapGroupNV");
          m_glXBindSwapBarrierNV = (PFNGLXBINDSWAPBARRIERNVPROC) glxGetProcAddressFunc("glXBindSwapBarrierNV");
          m_glXQuerySwapGroupNV = (PFNGLXQUERYSWAPGROUPNVPROC) glxGetProcAddressFunc("glXQuerySwapGroupNV");
          m_glXQueryMaxSwapGroupsNV = (PFNGLXQUERYMAXSWAPGROUPSNVPROC) glxGetProcAddressFunc("glXQueryMaxSwapGroupsNV");
          m_glXQueryFrameCountNV = (PFNGLXQUERYFRAMECOUNTNVPROC) glxGetProcAddressFunc("glXQueryFrameCountNV");
          m_glXResetFrameCountNV = (PFNGLXRESETFRAMECOUNTNVPROC) glxGetProcAddressFunc("glXResetFrameCountNV");
        }

        // GLX_NV_video_capture
        if (m_featureSupported[GLEW_GLX_NV_video_capture]) {
          m_glXBindVideoCaptureDeviceNV = (PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) glxGetProcAddressFunc("glXBindVideoCaptureDeviceNV");
          m_glXEnumerateVideoCaptureDevicesNV = (PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) glxGetProcAddressFunc("glXEnumerateVideoCaptureDevicesNV");
          m_glXLockVideoCaptureDeviceNV = (PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) glxGetProcAddressFunc("glXLockVideoCaptureDeviceNV");
          m_glXQueryVideoCaptureDeviceNV = (PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) glxGetProcAddressFunc("glXQueryVideoCaptureDeviceNV");
          m_glXReleaseVideoCaptureDeviceNV = (PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) glxGetProcAddressFunc("glXReleaseVideoCaptureDeviceNV");
        }

        // GLX_NV_video_out
        if (m_featureSupported[GLEW_GLX_NV_video_out]) {
          m_glXGetVideoDeviceNV = (PFNGLXGETVIDEODEVICENVPROC) glxGetProcAddressFunc("glXGetVideoDeviceNV");
          m_glXReleaseVideoDeviceNV = (PFNGLXRELEASEVIDEODEVICENVPROC) glxGetProcAddressFunc("glXReleaseVideoDeviceNV");
          m_glXBindVideoImageNV = (PFNGLXBINDVIDEOIMAGENVPROC) glxGetProcAddressFunc("glXBindVideoImageNV");
          m_glXReleaseVideoImageNV = (PFNGLXRELEASEVIDEOIMAGENVPROC) glxGetProcAddressFunc("glXReleaseVideoImageNV");
          m_glXSendPbufferToVideoNV = (PFNGLXSENDPBUFFERTOVIDEONVPROC) glxGetProcAddressFunc("glXSendPbufferToVideoNV");
          m_glXGetVideoInfoNV = (PFNGLXGETVIDEOINFONVPROC) glxGetProcAddressFunc("glXGetVideoInfoNV");
        }

        // GLX_OML_sync_control
        if (m_featureSupported[GLEW_GLX_OML_sync_control]) {
          m_glXGetSyncValuesOML = (PFNGLXGETSYNCVALUESOMLPROC) glxGetProcAddressFunc("glXGetSyncValuesOML");
          m_glXGetMscRateOML = (PFNGLXGETMSCRATEOMLPROC) glxGetProcAddressFunc("glXGetMscRateOML");
          m_glXSwapBuffersMscOML = (PFNGLXSWAPBUFFERSMSCOMLPROC) glxGetProcAddressFunc("glXSwapBuffersMscOML");
          m_glXWaitForMscOML = (PFNGLXWAITFORMSCOMLPROC) glxGetProcAddressFunc("glXWaitForMscOML");
          m_glXWaitForSbcOML = (PFNGLXWAITFORSBCOMLPROC) glxGetProcAddressFunc("glXWaitForSbcOML");
        }

        // GLX_SGI_cushion
        if (m_featureSupported[GLEW_GLX_SGI_cushion]) {
          m_glXCushionSGI = (PFNGLXCUSHIONSGIPROC) glxGetProcAddressFunc("glXCushionSGI");
        }

        // GLX_SGI_make_current_read
        if (m_featureSupported[GLEW_GLX_SGI_make_current_read]) {
          m_glXMakeCurrentReadSGI = (PFNGLXMAKECURRENTREADSGIPROC) glxGetProcAddressFunc("glXMakeCurrentReadSGI");
          m_glXGetCurrentReadDrawableSGI = (PFNGLXGETCURRENTREADDRAWABLESGIPROC) glxGetProcAddressFunc("glXGetCurrentReadDrawableSGI");
        }

        // GLX_SGI_swap_control
        if (m_featureSupported[GLEW_GLX_SGI_swap_control]) {
          m_glXSwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC) glxGetProcAddressFunc("glXSwapIntervalSGI");
        }

        // GLX_SGI_video_sync
        if (m_featureSupported[GLEW_GLX_SGI_video_sync]) {
          m_glXGetVideoSyncSGI = (PFNGLXGETVIDEOSYNCSGIPROC) glxGetProcAddressFunc("glXGetVideoSyncSGI");
          m_glXWaitVideoSyncSGI = (PFNGLXWAITVIDEOSYNCSGIPROC) glxGetProcAddressFunc("glXWaitVideoSyncSGI");
        }

        // GLX_SGIX_dmbuffer
        if (m_featureSupported[GLEW_GLX_SGIX_dmbuffer]) {
          m_glXAssociateDMPbufferSGIX = (PFNGLXASSOCIATEDMPBUFFERSGIXPROC) glxGetProcAddressFunc("glXAssociateDMPbufferSGIX");
        }

        // GLX_SGIX_fbconfig
        if (m_featureSupported[GLEW_GLX_SGIX_fbconfig]) {
          m_glXGetFBConfigAttribSGIX = (PFNGLXGETFBCONFIGATTRIBSGIXPROC) glxGetProcAddressFunc("glXGetFBConfigAttribSGIX");
          m_glXChooseFBConfigSGIX = (PFNGLXCHOOSEFBCONFIGSGIXPROC) glxGetProcAddressFunc("glXChooseFBConfigSGIX");
          m_glXCreateGLXPixmapWithConfigSGIX = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) glxGetProcAddressFunc("glXCreateGLXPixmapWithConfigSGIX");
          m_glXCreateContextWithConfigSGIX = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) glxGetProcAddressFunc("glXCreateContextWithConfigSGIX");
          m_glXGetVisualFromFBConfigSGIX = (PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) glxGetProcAddressFunc("glXGetVisualFromFBConfigSGIX");
          m_glXGetFBConfigFromVisualSGIX = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) glxGetProcAddressFunc("glXGetFBConfigFromVisualSGIX");
        }

        // GLX_SGIX_hyperpipe
        if (m_featureSupported[GLEW_GLX_SGIX_hyperpipe]) {
          m_glXQueryHyperpipeNetworkSGIX = (PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) glxGetProcAddressFunc("glXQueryHyperpipeNetworkSGIX");
          m_glXHyperpipeConfigSGIX = (PFNGLXHYPERPIPECONFIGSGIXPROC) glxGetProcAddressFunc("glXHyperpipeConfigSGIX");
          m_glXQueryHyperpipeConfigSGIX = (PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) glxGetProcAddressFunc("glXQueryHyperpipeConfigSGIX");
          m_glXDestroyHyperpipeConfigSGIX = (PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) glxGetProcAddressFunc("glXDestroyHyperpipeConfigSGIX");
          m_glXBindHyperpipeSGIX = (PFNGLXBINDHYPERPIPESGIXPROC) glxGetProcAddressFunc("glXBindHyperpipeSGIX");
          m_glXQueryHyperpipeBestAttribSGIX = (PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) glxGetProcAddressFunc("glXQueryHyperpipeBestAttribSGIX");
          m_glXHyperpipeAttribSGIX = (PFNGLXHYPERPIPEATTRIBSGIXPROC) glxGetProcAddressFunc("glXHyperpipeAttribSGIX");
          m_glXQueryHyperpipeAttribSGIX = (PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) glxGetProcAddressFunc("glXQueryHyperpipeAttribSGIX");
        }

        // GLX_SGIX_pbuffer
        if (m_featureSupported[GLEW_GLX_SGIX_pbuffer]) {
          m_glXCreateGLXPbufferSGIX = (PFNGLXCREATEGLXPBUFFERSGIXPROC) glxGetProcAddressFunc("glXCreateGLXPbufferSGIX");
          m_glXDestroyGLXPbufferSGIX = (PFNGLXDESTROYGLXPBUFFERSGIXPROC) glxGetProcAddressFunc("glXDestroyGLXPbufferSGIX");
          m_glXQueryGLXPbufferSGIX = (PFNGLXQUERYGLXPBUFFERSGIXPROC) glxGetProcAddressFunc("glXQueryGLXPbufferSGIX");
          m_glXSelectEventSGIX = (PFNGLXSELECTEVENTSGIXPROC) glxGetProcAddressFunc("glXSelectEventSGIX");
          m_glXGetSelectedEventSGIX = (PFNGLXGETSELECTEDEVENTSGIXPROC) glxGetProcAddressFunc("glXGetSelectedEventSGIX");
        }

        // GLX_SGIX_swap_barrier
        if (m_featureSupported[GLEW_GLX_SGIX_swap_barrier]) {
          m_glXBindSwapBarrierSGIX = (PFNGLXBINDSWAPBARRIERSGIXPROC) glxGetProcAddressFunc("glXBindSwapBarrierSGIX");
          m_glXQueryMaxSwapBarriersSGIX = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) glxGetProcAddressFunc("glXQueryMaxSwapBarriersSGIX");
        }

        // GLX_SGIX_swap_group
        if (m_featureSupported[GLEW_GLX_SGIX_swap_group]) {
          m_glXJoinSwapGroupSGIX = (PFNGLXJOINSWAPGROUPSGIXPROC) glxGetProcAddressFunc("glXJoinSwapGroupSGIX");
        }

        // GLX_SGIX_video_resize
        if (m_featureSupported[GLEW_GLX_SGIX_video_resize]) {
          m_glXBindChannelToWindowSGIX = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC) glxGetProcAddressFunc("glXBindChannelToWindowSGIX");
          m_glXChannelRectSGIX = (PFNGLXCHANNELRECTSGIXPROC) glxGetProcAddressFunc("glXChannelRectSGIX");
          m_glXQueryChannelRectSGIX = (PFNGLXQUERYCHANNELRECTSGIXPROC) glxGetProcAddressFunc("glXQueryChannelRectSGIX");
          m_glXQueryChannelDeltasSGIX = (PFNGLXQUERYCHANNELDELTASSGIXPROC) glxGetProcAddressFunc("glXQueryChannelDeltasSGIX");
          m_glXChannelRectSyncSGIX = (PFNGLXCHANNELRECTSYNCSGIXPROC) glxGetProcAddressFunc("glXChannelRectSyncSGIX");
        }

        // GLX_SGIX_video_source
        if (m_featureSupported[GLEW_GLX_SGIX_video_source]) {
          m_glXCreateGLXVideoSourceSGIX = (PFNGLXCREATEGLXVIDEOSOURCESGIXPROC) glxGetProcAddressFunc("glXCreateGLXVideoSourceSGIX");
          m_glXDestroyGLXVideoSourceSGIX = (PFNGLXDESTROYGLXVIDEOSOURCESGIXPROC) glxGetProcAddressFunc("glXDestroyGLXVideoSourceSGIX");
        }

        // GLX_SUN_get_transparent_index
        if (m_featureSupported[GLEW_GLX_SUN_get_transparent_index]) {
          m_glXGetTransparentIndexSUN = (PFNGLXGETTRANSPARENTINDEXSUNPROC) glxGetProcAddressFunc("glXGetTransparentIndexSUN");
        }
      }

      bool IsSupported(GLEW_GLX_FeatureSet feature) const {
        return m_featureSupported[feature];
      }

      void SetSupported(GLEW_GLX_FeatureSet feature, bool supported) {
        m_featureSupported[feature] = supported;
      }

      bool m_featureSupported[GLEW_GLX_FeatureSetCount];

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
      PFNGLXGETSWAPINTERVALMESAPROC m_glXGetSwapIntervalMESA;
      PFNGLXSWAPINTERVALMESAPROC m_glXSwapIntervalMESA;
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

    static Context* s_glxContext = nullptr;

  }  // namespace glx
}  // namespace glew

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
GLEW_API GLboolean GLEW_APIENTRY _glew_glx_glXSet3DfxModeMESA (GLint mode);
GLEW_API int GLEW_APIENTRY _glew_glx_glXGetSwapIntervalMESA ();
GLEW_API int GLEW_APIENTRY _glew_glx_glXSwapIntervalMESA (unsigned int interval);
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
GLEW_API void GLEW_APIENTRY _glew_glx_glXQueryGLXPbufferSGIX (Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
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
GLEW_API Status GLEW_APIENTRY _glew_glx_glXGetTransparentIndexSUN (Display * dpy, Window overlay, Window underlay, unsigned long * pTransparentIndex);

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
#define glXGetSwapIntervalMESA _glew_glx_glXGetSwapIntervalMESA
#define glXSwapIntervalMESA _glew_glx_glXSwapIntervalMESA
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

#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic pop // push/pop not available before GCC 4.6
#endif
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
