////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <cstring>
#include <string>
#include <unordered_set>

#include <wrangle-wgl.h>
#include "wrangle-wgl.inl"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::wgl::s_initialised = false;

glew::wgl::DeviceConfig glew::wgl::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::wgl::Initialise ()
{
  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  //
  // Determine current driver's feature reporting.
  //

  s_deviceConfig.m_featureSupported [GLEW_WGL_VERSION_1_0] = true;

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *wglExtensions = NULL;

  PFNWGLGETEXTENSIONSSTRINGARBPROC _wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) wglGetProcAddress ("wglGetExtensionsStringARB");

  PFNWGLGETEXTENSIONSSTRINGEXTPROC _wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) wglGetProcAddress ("wglGetExtensionsStringEXT");

  if (_wglGetExtensionsStringEXT != NULL)
  {
    wglExtensions = (const unsigned char*) _wglGetExtensionsStringEXT ();
  }
  else if (_wglGetExtensionsStringARB != NULL)
  {
    wglExtensions = (const unsigned char*) _wglGetExtensionsStringARB (wglGetCurrentDC());
  }

  if (!wglExtensions)
  {
    wglExtensions = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t wglExtensionsLen = strlen ((const char *) wglExtensions);

  if (wglExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) wglExtensions;

    unsigned char *thisExtEnd = NULL;

    char thisExtBuffer [128];

    memset (thisExtBuffer, 0, sizeof (thisExtBuffer));

    do
    {
      const char * seperator = strchr ((const char *) thisExtStart, ' ');

      if (seperator)
      {
        const size_t len = (((uintptr_t) seperator - (uintptr_t) thisExtStart) / sizeof (unsigned char));

      #if _WIN32
        strncpy_s (thisExtBuffer, 128, (const char *)thisExtStart, len);
      #else
        strncpy (thisExtBuffer, (const char *)thisExtStart, len);
      #endif

        thisExtBuffer [GLEW_MIN (len, 127)] = '\0';

        thisExtEnd = (unsigned char *) seperator + 1; // skip tab character
      }
      else
      {
        const size_t len = strlen ((const char *) thisExtStart);

      #if _WIN32
        strncpy_s (thisExtBuffer, 128, (const char *)thisExtStart, len);
      #else
        strncpy (thisExtBuffer, (const char *)thisExtStart, len);
      #endif

        thisExtBuffer [GLEW_MIN (len + 1, 127)] = '\0';

        thisExtEnd = NULL;
      }

      std::string thisExt (thisExtBuffer);

      if (supportedExtensions.find (thisExt) == supportedExtensions.end ())
      {
        supportedExtensions.insert (thisExt);
      }

      thisExtStart = thisExtEnd;
    }
    while ((thisExtStart && *thisExtStart != '\0') && (thisExtEnd && *thisExtEnd != '\0'));
  }

  s_deviceConfig.m_featureSupported [GLEW_WGL_3DFX_multisample] = (supportedExtensions.find ("WGL_3DFX_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_3DL_stereo_control] = (supportedExtensions.find ("WGL_3DL_stereo_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association] = (supportedExtensions.find ("WGL_AMD_gpu_association") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region] = (supportedExtensions.find ("WGL_ARB_buffer_region") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_context_flush_control] = (supportedExtensions.find ("WGL_ARB_context_flush_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context] = (supportedExtensions.find ("WGL_ARB_create_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context_no_error] = (supportedExtensions.find ("WGL_ARB_create_context_no_error") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context_profile] = (supportedExtensions.find ("WGL_ARB_create_context_profile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context_robustness] = (supportedExtensions.find ("WGL_ARB_create_context_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_extensions_string] = (supportedExtensions.find ("WGL_ARB_extensions_string") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_framebuffer_sRGB] = (supportedExtensions.find ("WGL_ARB_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read] = (supportedExtensions.find ("WGL_ARB_make_current_read") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_multisample] = (supportedExtensions.find ("WGL_ARB_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer] = (supportedExtensions.find ("WGL_ARB_pbuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format] = (supportedExtensions.find ("WGL_ARB_pixel_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format_float] = (supportedExtensions.find ("WGL_ARB_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_render_texture] = (supportedExtensions.find ("WGL_ARB_render_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_robustness_application_isolation] = (supportedExtensions.find ("WGL_ARB_robustness_application_isolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_robustness_share_group_isolation] = (supportedExtensions.find ("WGL_ARB_robustness_share_group_isolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ATI_pixel_format_float] = (supportedExtensions.find ("WGL_ATI_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_ATI_render_texture_rectangle] = (supportedExtensions.find ("WGL_ATI_render_texture_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_colorspace] = (supportedExtensions.find ("WGL_EXT_colorspace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_create_context_es_profile] = (supportedExtensions.find ("WGL_EXT_create_context_es_profile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_create_context_es2_profile] = (supportedExtensions.find ("WGL_EXT_create_context_es2_profile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_depth_float] = (supportedExtensions.find ("WGL_EXT_depth_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table] = (supportedExtensions.find ("WGL_EXT_display_color_table") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_extensions_string] = (supportedExtensions.find ("WGL_EXT_extensions_string") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_framebuffer_sRGB] = (supportedExtensions.find ("WGL_EXT_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read] = (supportedExtensions.find ("WGL_EXT_make_current_read") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_multisample] = (supportedExtensions.find ("WGL_EXT_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer] = (supportedExtensions.find ("WGL_EXT_pbuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format] = (supportedExtensions.find ("WGL_EXT_pixel_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format_packed_float] = (supportedExtensions.find ("WGL_EXT_pixel_format_packed_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_swap_control] = (supportedExtensions.find ("WGL_EXT_swap_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_swap_control_tear] = (supportedExtensions.find ("WGL_EXT_swap_control_tear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control] = (supportedExtensions.find ("WGL_I3D_digital_video_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_gamma] = (supportedExtensions.find ("WGL_I3D_gamma") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_genlock] = (supportedExtensions.find ("WGL_I3D_genlock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer] = (supportedExtensions.find ("WGL_I3D_image_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock] = (supportedExtensions.find ("WGL_I3D_swap_frame_lock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage] = (supportedExtensions.find ("WGL_I3D_swap_frame_usage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_copy_image] = (supportedExtensions.find ("WGL_NV_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_delay_before_swap] = (supportedExtensions.find ("WGL_NV_delay_before_swap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_DX_interop] = (supportedExtensions.find ("WGL_NV_DX_interop") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_DX_interop2] = (supportedExtensions.find ("WGL_NV_DX_interop2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_float_buffer] = (supportedExtensions.find ("WGL_NV_float_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity] = (supportedExtensions.find ("WGL_NV_gpu_affinity") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_multisample_coverage] = (supportedExtensions.find ("WGL_NV_multisample_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_present_video] = (supportedExtensions.find ("WGL_NV_present_video") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_render_depth_texture] = (supportedExtensions.find ("WGL_NV_render_depth_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_render_texture_rectangle] = (supportedExtensions.find ("WGL_NV_render_texture_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_swap_group] = (supportedExtensions.find ("WGL_NV_swap_group") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_capture] = (supportedExtensions.find ("WGL_NV_video_capture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_output] = (supportedExtensions.find ("WGL_NV_video_output") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range] = (supportedExtensions.find ("WGL_NV_vertex_array_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_OML_sync_control] = (supportedExtensions.find ("WGL_OML_sync_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_WGL_NV_multigpu_context] = (supportedExtensions.find ("WGL_NV_multigpu_context") != supportedExtensions.end ());

  // WGL_3DL_stereo_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_3DL_stereo_control])
  {
    s_deviceConfig.m_wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC) glewGetProcAddress ("wglSetStereoEmitterState3DL");
  }

  // WGL_AMD_gpu_association
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_AMD_gpu_association])
  {
    s_deviceConfig.m_wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC) glewGetProcAddress ("wglGetGPUIDsAMD");
    s_deviceConfig.m_wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC) glewGetProcAddress ("wglGetGPUInfoAMD");
    s_deviceConfig.m_wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC) glewGetProcAddress ("wglGetContextGPUIDAMD");
    s_deviceConfig.m_wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) glewGetProcAddress ("wglCreateAssociatedContextAMD");
    s_deviceConfig.m_wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) glewGetProcAddress ("wglCreateAssociatedContextAttribsAMD");
    s_deviceConfig.m_wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) glewGetProcAddress ("wglDeleteAssociatedContextAMD");
    s_deviceConfig.m_wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) glewGetProcAddress ("wglMakeAssociatedContextCurrentAMD");
    s_deviceConfig.m_wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) glewGetProcAddress ("wglGetCurrentAssociatedContextAMD");
    s_deviceConfig.m_wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) glewGetProcAddress ("wglBlitContextFramebufferAMD");
  }

  // WGL_ARB_buffer_region
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_buffer_region])
  {
    s_deviceConfig.m_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC) glewGetProcAddress ("wglCreateBufferRegionARB");
    s_deviceConfig.m_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC) glewGetProcAddress ("wglDeleteBufferRegionARB");
    s_deviceConfig.m_wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC) glewGetProcAddress ("wglSaveBufferRegionARB");
    s_deviceConfig.m_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC) glewGetProcAddress ("wglRestoreBufferRegionARB");
  }

  // WGL_ARB_create_context
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_create_context])
  {
    s_deviceConfig.m_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC) glewGetProcAddress ("wglCreateContextAttribsARB");
  }

  // WGL_ARB_extensions_string
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_extensions_string])
  {
    s_deviceConfig.m_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) glewGetProcAddress ("wglGetExtensionsStringARB");
  }

  // WGL_ARB_make_current_read
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_make_current_read])
  {
    s_deviceConfig.m_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC) glewGetProcAddress ("wglMakeContextCurrentARB");
    s_deviceConfig.m_wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC) glewGetProcAddress ("wglGetCurrentReadDCARB");
  }

  // WGL_ARB_pbuffer
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pbuffer])
  {
    s_deviceConfig.m_wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC) glewGetProcAddress ("wglCreatePbufferARB");
    s_deviceConfig.m_wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC) glewGetProcAddress ("wglGetPbufferDCARB");
    s_deviceConfig.m_wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC) glewGetProcAddress ("wglReleasePbufferDCARB");
    s_deviceConfig.m_wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC) glewGetProcAddress ("wglDestroyPbufferARB");
    s_deviceConfig.m_wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC) glewGetProcAddress ("wglQueryPbufferARB");
  }

  // WGL_ARB_pixel_format
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_pixel_format])
  {
    s_deviceConfig.m_wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC) glewGetProcAddress ("wglGetPixelFormatAttribivARB");
    s_deviceConfig.m_wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC) glewGetProcAddress ("wglGetPixelFormatAttribfvARB");
    s_deviceConfig.m_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC) glewGetProcAddress ("wglChoosePixelFormatARB");
  }

  // WGL_ARB_render_texture
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_ARB_render_texture])
  {
    s_deviceConfig.m_wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC) glewGetProcAddress ("wglBindTexImageARB");
    s_deviceConfig.m_wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC) glewGetProcAddress ("wglReleaseTexImageARB");
    s_deviceConfig.m_wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC) glewGetProcAddress ("wglSetPbufferAttribARB");
  }

  // WGL_EXT_display_color_table
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_display_color_table])
  {
    s_deviceConfig.m_wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglCreateDisplayColorTableEXT");
    s_deviceConfig.m_wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglLoadDisplayColorTableEXT");
    s_deviceConfig.m_wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglBindDisplayColorTableEXT");
    s_deviceConfig.m_wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) glewGetProcAddress ("wglDestroyDisplayColorTableEXT");
  }

  // WGL_EXT_extensions_string
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_extensions_string])
  {
    s_deviceConfig.m_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) glewGetProcAddress ("wglGetExtensionsStringEXT");
  }

  // WGL_EXT_make_current_read
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_make_current_read])
  {
    s_deviceConfig.m_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC) glewGetProcAddress ("wglMakeContextCurrentEXT");
    s_deviceConfig.m_wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC) glewGetProcAddress ("wglGetCurrentReadDCEXT");
  }

  // WGL_EXT_pbuffer
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pbuffer])
  {
    s_deviceConfig.m_wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC) glewGetProcAddress ("wglCreatePbufferEXT");
    s_deviceConfig.m_wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC) glewGetProcAddress ("wglGetPbufferDCEXT");
    s_deviceConfig.m_wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC) glewGetProcAddress ("wglReleasePbufferDCEXT");
    s_deviceConfig.m_wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC) glewGetProcAddress ("wglDestroyPbufferEXT");
    s_deviceConfig.m_wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC) glewGetProcAddress ("wglQueryPbufferEXT");
  }

  // WGL_EXT_pixel_format
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_pixel_format])
  {
    s_deviceConfig.m_wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) glewGetProcAddress ("wglGetPixelFormatAttribivEXT");
    s_deviceConfig.m_wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) glewGetProcAddress ("wglGetPixelFormatAttribfvEXT");
    s_deviceConfig.m_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC) glewGetProcAddress ("wglChoosePixelFormatEXT");
  }

  // WGL_EXT_swap_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_EXT_swap_control])
  {
    s_deviceConfig.m_wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC) glewGetProcAddress ("wglSwapIntervalEXT");
    s_deviceConfig.m_wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC) glewGetProcAddress ("wglGetSwapIntervalEXT");
  }

  // WGL_I3D_digital_video_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_digital_video_control])
  {
    s_deviceConfig.m_wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) glewGetProcAddress ("wglGetDigitalVideoParametersI3D");
    s_deviceConfig.m_wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) glewGetProcAddress ("wglSetDigitalVideoParametersI3D");
  }

  // WGL_I3D_gamma
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_gamma])
  {
    s_deviceConfig.m_wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) glewGetProcAddress ("wglGetGammaTableParametersI3D");
    s_deviceConfig.m_wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) glewGetProcAddress ("wglSetGammaTableParametersI3D");
    s_deviceConfig.m_wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC) glewGetProcAddress ("wglGetGammaTableI3D");
    s_deviceConfig.m_wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC) glewGetProcAddress ("wglSetGammaTableI3D");
  }

  // WGL_I3D_genlock
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_genlock])
  {
    s_deviceConfig.m_wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC) glewGetProcAddress ("wglEnableGenlockI3D");
    s_deviceConfig.m_wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC) glewGetProcAddress ("wglDisableGenlockI3D");
    s_deviceConfig.m_wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC) glewGetProcAddress ("wglIsEnabledGenlockI3D");
    s_deviceConfig.m_wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC) glewGetProcAddress ("wglGenlockSourceI3D");
    s_deviceConfig.m_wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC) glewGetProcAddress ("wglGetGenlockSourceI3D");
    s_deviceConfig.m_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC) glewGetProcAddress ("wglGenlockSourceEdgeI3D");
    s_deviceConfig.m_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) glewGetProcAddress ("wglGetGenlockSourceEdgeI3D");
    s_deviceConfig.m_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC) glewGetProcAddress ("wglGenlockSampleRateI3D");
    s_deviceConfig.m_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC) glewGetProcAddress ("wglGetGenlockSampleRateI3D");
    s_deviceConfig.m_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC) glewGetProcAddress ("wglGenlockSourceDelayI3D");
    s_deviceConfig.m_wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) glewGetProcAddress ("wglGetGenlockSourceDelayI3D");
    s_deviceConfig.m_wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) glewGetProcAddress ("wglQueryGenlockMaxSourceDelayI3D");
  }

  // WGL_I3D_image_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_image_buffer])
  {
    s_deviceConfig.m_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC) glewGetProcAddress ("wglCreateImageBufferI3D");
    s_deviceConfig.m_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC) glewGetProcAddress ("wglDestroyImageBufferI3D");
    s_deviceConfig.m_wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) glewGetProcAddress ("wglAssociateImageBufferEventsI3D");
    s_deviceConfig.m_wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) glewGetProcAddress ("wglReleaseImageBufferEventsI3D");
  }

  // WGL_I3D_swap_frame_lock
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_lock])
  {
    s_deviceConfig.m_wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC) glewGetProcAddress ("wglEnableFrameLockI3D");
    s_deviceConfig.m_wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC) glewGetProcAddress ("wglDisableFrameLockI3D");
    s_deviceConfig.m_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC) glewGetProcAddress ("wglIsEnabledFrameLockI3D");
    s_deviceConfig.m_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC) glewGetProcAddress ("wglQueryFrameLockMasterI3D");
  }

  // WGL_I3D_swap_frame_usage
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_I3D_swap_frame_usage])
  {
    s_deviceConfig.m_wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC) glewGetProcAddress ("wglGetFrameUsageI3D");
    s_deviceConfig.m_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC) glewGetProcAddress ("wglBeginFrameTrackingI3D");
    s_deviceConfig.m_wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC) glewGetProcAddress ("wglEndFrameTrackingI3D");
    s_deviceConfig.m_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC) glewGetProcAddress ("wglQueryFrameTrackingI3D");
  }

  // WGL_NV_copy_image
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_copy_image])
  {
    s_deviceConfig.m_wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC) glewGetProcAddress ("wglCopyImageSubDataNV");
  }

  // WGL_NV_delay_before_swap
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_delay_before_swap])
  {
    s_deviceConfig.m_wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC) glewGetProcAddress ("wglDelayBeforeSwapNV");
  }

  // WGL_NV_DX_interop
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_DX_interop])
  {
    s_deviceConfig.m_wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC) glewGetProcAddress ("wglDXSetResourceShareHandleNV");
    s_deviceConfig.m_wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC) glewGetProcAddress ("wglDXOpenDeviceNV");
    s_deviceConfig.m_wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC) glewGetProcAddress ("wglDXCloseDeviceNV");
    s_deviceConfig.m_wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC) glewGetProcAddress ("wglDXRegisterObjectNV");
    s_deviceConfig.m_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC) glewGetProcAddress ("wglDXUnregisterObjectNV");
    s_deviceConfig.m_wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC) glewGetProcAddress ("wglDXObjectAccessNV");
    s_deviceConfig.m_wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC) glewGetProcAddress ("wglDXLockObjectsNV");
    s_deviceConfig.m_wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC) glewGetProcAddress ("wglDXUnlockObjectsNV");
  }

  // WGL_NV_gpu_affinity
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_gpu_affinity])
  {
    s_deviceConfig.m_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC) glewGetProcAddress ("wglEnumGpusNV");
    s_deviceConfig.m_wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC) glewGetProcAddress ("wglEnumGpuDevicesNV");
    s_deviceConfig.m_wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC) glewGetProcAddress ("wglCreateAffinityDCNV");
    s_deviceConfig.m_wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) glewGetProcAddress ("wglEnumGpusFromAffinityDCNV");
    s_deviceConfig.m_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC) glewGetProcAddress ("wglDeleteDCNV");
  }

  // WGL_NV_present_video
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_present_video])
  {
    s_deviceConfig.m_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC) glewGetProcAddress ("wglEnumerateVideoDevicesNV");
    s_deviceConfig.m_wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC) glewGetProcAddress ("wglBindVideoDeviceNV");
    s_deviceConfig.m_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC) glewGetProcAddress ("wglQueryCurrentContextNV");
  }

  // WGL_NV_swap_group
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_swap_group])
  {
    s_deviceConfig.m_wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC) glewGetProcAddress ("wglJoinSwapGroupNV");
    s_deviceConfig.m_wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC) glewGetProcAddress ("wglBindSwapBarrierNV");
    s_deviceConfig.m_wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC) glewGetProcAddress ("wglQuerySwapGroupNV");
    s_deviceConfig.m_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC) glewGetProcAddress ("wglQueryMaxSwapGroupsNV");
    s_deviceConfig.m_wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC) glewGetProcAddress ("wglQueryFrameCountNV");
    s_deviceConfig.m_wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC) glewGetProcAddress ("wglResetFrameCountNV");
  }

  // WGL_NV_video_capture
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_capture])
  {
    s_deviceConfig.m_wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglBindVideoCaptureDeviceNV");
    s_deviceConfig.m_wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) glewGetProcAddress ("wglEnumerateVideoCaptureDevicesNV");
    s_deviceConfig.m_wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglLockVideoCaptureDeviceNV");
    s_deviceConfig.m_wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglQueryVideoCaptureDeviceNV");
    s_deviceConfig.m_wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) glewGetProcAddress ("wglReleaseVideoCaptureDeviceNV");
  }

  // WGL_NV_video_output
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_video_output])
  {
    s_deviceConfig.m_wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC) glewGetProcAddress ("wglGetVideoDeviceNV");
    s_deviceConfig.m_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC) glewGetProcAddress ("wglReleaseVideoDeviceNV");
    s_deviceConfig.m_wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC) glewGetProcAddress ("wglBindVideoImageNV");
    s_deviceConfig.m_wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC) glewGetProcAddress ("wglReleaseVideoImageNV");
    s_deviceConfig.m_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC) glewGetProcAddress ("wglSendPbufferToVideoNV");
    s_deviceConfig.m_wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC) glewGetProcAddress ("wglGetVideoInfoNV");
  }

  // WGL_NV_vertex_array_range
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_NV_vertex_array_range])
  {
    s_deviceConfig.m_wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC) glewGetProcAddress ("wglAllocateMemoryNV");
    s_deviceConfig.m_wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC) glewGetProcAddress ("wglFreeMemoryNV");
  }

  // WGL_OML_sync_control
  if (s_deviceConfig.m_featureSupported [GLEW_WGL_OML_sync_control])
  {
    s_deviceConfig.m_wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC) glewGetProcAddress ("wglGetSyncValuesOML");
    s_deviceConfig.m_wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC) glewGetProcAddress ("wglGetMscRateOML");
    s_deviceConfig.m_wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC) glewGetProcAddress ("wglSwapBuffersMscOML");
    s_deviceConfig.m_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) glewGetProcAddress ("wglSwapLayerBuffersMscOML");
    s_deviceConfig.m_wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC) glewGetProcAddress ("wglWaitForMscOML");
    s_deviceConfig.m_wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC) glewGetProcAddress ("wglWaitForSbcOML");
  }

  s_initialised = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::wgl::Deinitialise ()
{
  s_initialised = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
