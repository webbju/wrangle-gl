////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <cstring>
#include <string>
#include <unordered_set>

#include <wrangle-egl.h>
#include "wrangle-egl.inl"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::egl::s_initialised = false;

EGLDisplay glew::egl::s_display = EGL_NO_DISPLAY;

glew::egl::DeviceConfig glew::egl::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::egl::Initialise (EGLDisplay display)
{
  s_display = display;

  if (s_display == EGL_NO_DISPLAY)
  {
    s_display = eglGetDisplay (EGL_DEFAULT_DISPLAY);
  }

  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  //
  // Determine current driver's feature reporting.
  //

  const unsigned char *eglVersion = (const unsigned char *) eglQueryString (s_display, EGL_VERSION);

  if (!eglVersion)
  {
    eglVersion = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t eglVersionLen = strlen ((const char *) eglVersion);

  if (eglVersionLen)
  {
    unsigned int major = 0, minor = 0;

    const char *divisor = strchr ((const char *) eglVersion, '.');

    if (divisor)
    {
      major = (*(char *) (divisor - 1)) - '0';
      minor = (*(char *) (divisor + 1)) - '0';
    }

    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_0] = ((major >= 1));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1] = ((major >= 1) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2] = ((major >= 1) && (minor >= 2));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_3] = ((major >= 1) && (minor >= 3));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4] = ((major >= 1) && (minor >= 4));
    s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5] = ((major >= 1) && (minor >= 5));
  }

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *eglExtensions = (const unsigned char *) eglQueryString (s_display, EGL_EXTENSIONS);

  if (!eglExtensions)
  {
    eglExtensions = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t eglExtensionsLen = strlen ((const char *) eglExtensions);

  if (eglExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) eglExtensions;

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

  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_blob_cache] = (supportedExtensions.find ("EGL_ANDROID_blob_cache") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_create_native_client_buffer] = (supportedExtensions.find ("EGL_ANDROID_create_native_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_framebuffer_target] = (supportedExtensions.find ("EGL_ANDROID_framebuffer_target") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_native_client_buffer] = (supportedExtensions.find ("EGL_ANDROID_get_native_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_front_buffer_auto_refresh] = (supportedExtensions.find ("EGL_ANDROID_front_buffer_auto_refresh") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_image_native_buffer] = (supportedExtensions.find ("EGL_ANDROID_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync] = (supportedExtensions.find ("EGL_ANDROID_native_fence_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_presentation_time] = (supportedExtensions.find ("EGL_ANDROID_presentation_time") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps] = (supportedExtensions.find ("EGL_ANDROID_get_frame_timestamps") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_recordable] = (supportedExtensions.find ("EGL_ANDROID_recordable") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_GLES_layers] = (supportedExtensions.find ("EGL_ANDROID_GLES_layers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_telemetry_hint] = (supportedExtensions.find ("EGL_ANDROID_telemetry_hint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_d3d_share_handle_client_buffer] = (supportedExtensions.find ("EGL_ANGLE_d3d_share_handle_client_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_device_d3d] = (supportedExtensions.find ("EGL_ANGLE_device_d3d") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer] = (supportedExtensions.find ("EGL_ANGLE_query_surface_pointer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_surface_d3d_texture_2d_share_handle] = (supportedExtensions.find ("EGL_ANGLE_surface_d3d_texture_2d_share_handle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_sync_control_rate] = (supportedExtensions.find ("EGL_ANGLE_sync_control_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_window_fixed_size] = (supportedExtensions.find ("EGL_ANGLE_window_fixed_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_implicit_external_sync] = (supportedExtensions.find ("EGL_ARM_implicit_external_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_pixmap_multisample_discard] = (supportedExtensions.find ("EGL_ARM_pixmap_multisample_discard") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_buffer_age] = (supportedExtensions.find ("EGL_EXT_buffer_age") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_extensions] = (supportedExtensions.find ("EGL_EXT_client_extensions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_sync] = (supportedExtensions.find ("EGL_EXT_client_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_config_select_group] = (supportedExtensions.find ("EGL_EXT_config_select_group") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_create_context_robustness] = (supportedExtensions.find ("EGL_EXT_create_context_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base] = (supportedExtensions.find ("EGL_EXT_device_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_drm] = (supportedExtensions.find ("EGL_EXT_device_drm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_enumeration] = (supportedExtensions.find ("EGL_EXT_device_enumeration") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_openwf] = (supportedExtensions.find ("EGL_EXT_device_openwf") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query] = (supportedExtensions.find ("EGL_EXT_device_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_bt2020_hlg] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_bt2020_hlg") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_bt2020_linear] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_bt2020_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_bt2020_pq] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_bt2020_pq") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_scrgb] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_scrgb") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_scrgb_linear] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_scrgb_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_display_p3_linear] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_display_p3_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_display_p3] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_display_p3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_gl_colorspace_display_p3_passthrough] = (supportedExtensions.find ("EGL_EXT_gl_colorspace_display_p3_passthrough") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import] = (supportedExtensions.find ("EGL_EXT_image_dma_buf_import") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import_modifiers] = (supportedExtensions.find ("EGL_EXT_image_dma_buf_import_modifiers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_gl_colorspace] = (supportedExtensions.find ("EGL_EXT_image_gl_colorspace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_multiview_window] = (supportedExtensions.find ("EGL_EXT_multiview_window") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_base] = (supportedExtensions.find ("EGL_EXT_output_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_drm] = (supportedExtensions.find ("EGL_EXT_output_drm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_openwf] = (supportedExtensions.find ("EGL_EXT_output_openwf") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_pixel_format_float] = (supportedExtensions.find ("EGL_EXT_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_base] = (supportedExtensions.find ("EGL_EXT_platform_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_device] = (supportedExtensions.find ("EGL_EXT_platform_device") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_wayland] = (supportedExtensions.find ("EGL_EXT_platform_wayland") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_x11] = (supportedExtensions.find ("EGL_EXT_platform_x11") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_xcb] = (supportedExtensions.find ("EGL_EXT_platform_xcb") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_present_opaque] = (supportedExtensions.find ("EGL_EXT_present_opaque") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_protected_content] = (supportedExtensions.find ("EGL_EXT_protected_content") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_protected_surface] = (supportedExtensions.find ("EGL_EXT_protected_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_query_reset_notification_strategy] = (supportedExtensions.find ("EGL_EXT_query_reset_notification_strategy") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput] = (supportedExtensions.find ("EGL_EXT_stream_consumer_egloutput") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_surface_SMPTE2086_metadata] = (supportedExtensions.find ("EGL_EXT_surface_SMPTE2086_metadata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage] = (supportedExtensions.find ("EGL_EXT_swap_buffers_with_damage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_sync_reuse] = (supportedExtensions.find ("EGL_EXT_sync_reuse") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_yuv_surface] = (supportedExtensions.find ("EGL_EXT_yuv_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap] = (supportedExtensions.find ("EGL_HI_clientpixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_HI_colorformats] = (supportedExtensions.find ("EGL_HI_colorformats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_IMG_context_priority] = (supportedExtensions.find ("EGL_IMG_context_priority") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_IMG_image_plane_attribs] = (supportedExtensions.find ("EGL_IMG_image_plane_attribs") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event] = (supportedExtensions.find ("EGL_KHR_cl_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2] = (supportedExtensions.find ("EGL_KHR_cl_event2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_config_attribs] = (supportedExtensions.find ("EGL_KHR_config_attribs") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_client_get_all_proc_addresses] = (supportedExtensions.find ("EGL_KHR_client_get_all_proc_addresses") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_context_flush_control] = (supportedExtensions.find ("EGL_KHR_context_flush_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_create_context] = (supportedExtensions.find ("EGL_KHR_create_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_create_context_no_error] = (supportedExtensions.find ("EGL_KHR_create_context_no_error") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_debug] = (supportedExtensions.find ("EGL_KHR_debug") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_display_reference] = (supportedExtensions.find ("EGL_KHR_display_reference") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync] = (supportedExtensions.find ("EGL_KHR_fence_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_get_all_proc_addresses] = (supportedExtensions.find ("EGL_KHR_get_all_proc_addresses") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_colorspace] = (supportedExtensions.find ("EGL_KHR_gl_colorspace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_renderbuffer_image] = (supportedExtensions.find ("EGL_KHR_gl_renderbuffer_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_texture_2D_image] = (supportedExtensions.find ("EGL_KHR_gl_texture_2D_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_texture_3D_image] = (supportedExtensions.find ("EGL_KHR_gl_texture_3D_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_gl_texture_cubemap_image] = (supportedExtensions.find ("EGL_KHR_gl_texture_cubemap_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image] = (supportedExtensions.find ("EGL_KHR_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image_base] = (supportedExtensions.find ("EGL_KHR_image_base") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image_pixmap] = (supportedExtensions.find ("EGL_KHR_image_pixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface] = (supportedExtensions.find ("EGL_KHR_lock_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface2] = (supportedExtensions.find ("EGL_KHR_lock_surface2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3] = (supportedExtensions.find ("EGL_KHR_lock_surface3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_mutable_render_buffer] = (supportedExtensions.find ("EGL_KHR_mutable_render_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_no_config_context] = (supportedExtensions.find ("EGL_KHR_no_config_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_partial_update] = (supportedExtensions.find ("EGL_KHR_partial_update") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_android] = (supportedExtensions.find ("EGL_KHR_platform_android") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_gbm] = (supportedExtensions.find ("EGL_KHR_platform_gbm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_wayland] = (supportedExtensions.find ("EGL_KHR_platform_wayland") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_platform_x11] = (supportedExtensions.find ("EGL_KHR_platform_x11") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync] = (supportedExtensions.find ("EGL_KHR_reusable_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream] = (supportedExtensions.find ("EGL_KHR_stream") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib] = (supportedExtensions.find ("EGL_KHR_stream_attrib") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture] = (supportedExtensions.find ("EGL_KHR_stream_consumer_gltexture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd] = (supportedExtensions.find ("EGL_KHR_stream_cross_process_fd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_fifo] = (supportedExtensions.find ("EGL_KHR_stream_fifo") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_aldatalocator] = (supportedExtensions.find ("EGL_KHR_stream_producer_aldatalocator") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_eglsurface] = (supportedExtensions.find ("EGL_KHR_stream_producer_eglsurface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_surfaceless_context] = (supportedExtensions.find ("EGL_KHR_surfaceless_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_swap_buffers_with_damage] = (supportedExtensions.find ("EGL_KHR_swap_buffers_with_damage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_vg_parent_image] = (supportedExtensions.find ("EGL_KHR_vg_parent_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_wait_sync] = (supportedExtensions.find ("EGL_KHR_wait_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_drm_image] = (supportedExtensions.find ("EGL_MESA_drm_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export] = (supportedExtensions.find ("EGL_MESA_image_dma_buf_export") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_platform_gbm] = (supportedExtensions.find ("EGL_MESA_platform_gbm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_platform_surfaceless] = (supportedExtensions.find ("EGL_MESA_platform_surfaceless") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_query_driver] = (supportedExtensions.find ("EGL_MESA_query_driver") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region] = (supportedExtensions.find ("EGL_NOK_swap_region") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2] = (supportedExtensions.find ("EGL_NOK_swap_region2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_texture_from_pixmap] = (supportedExtensions.find ("EGL_NOK_texture_from_pixmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_3dvision_surface] = (supportedExtensions.find ("EGL_NV_3dvision_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_coverage_sample] = (supportedExtensions.find ("EGL_NV_coverage_sample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_context_priority_realtime] = (supportedExtensions.find ("EGL_NV_context_priority_realtime") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_coverage_sample_resolve] = (supportedExtensions.find ("EGL_NV_coverage_sample_resolve") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_cuda_event] = (supportedExtensions.find ("EGL_NV_cuda_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_depth_nonlinear] = (supportedExtensions.find ("EGL_NV_depth_nonlinear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_device_cuda] = (supportedExtensions.find ("EGL_NV_device_cuda") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_native_query] = (supportedExtensions.find ("EGL_NV_native_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_convert_rounding] = (supportedExtensions.find ("EGL_NV_post_convert_rounding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer] = (supportedExtensions.find ("EGL_NV_post_sub_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_quadruple_buffer] = (supportedExtensions.find ("EGL_NV_quadruple_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_robustness_video_memory_purge] = (supportedExtensions.find ("EGL_NV_robustness_video_memory_purge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_gltexture_yuv] = (supportedExtensions.find ("EGL_NV_stream_consumer_gltexture_yuv") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_object] = (supportedExtensions.find ("EGL_NV_stream_cross_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_display] = (supportedExtensions.find ("EGL_NV_stream_cross_display") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_partition] = (supportedExtensions.find ("EGL_NV_stream_cross_partition") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_process] = (supportedExtensions.find ("EGL_NV_stream_cross_process") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_cross_system] = (supportedExtensions.find ("EGL_NV_stream_cross_system") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_dma] = (supportedExtensions.find ("EGL_NV_stream_dma") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage] = (supportedExtensions.find ("EGL_NV_stream_consumer_eglimage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_fifo_next] = (supportedExtensions.find ("EGL_NV_stream_fifo_next") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_fifo_synchronous] = (supportedExtensions.find ("EGL_NV_stream_fifo_synchronous") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_flush] = (supportedExtensions.find ("EGL_NV_stream_flush") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_frame_limits] = (supportedExtensions.find ("EGL_NV_stream_frame_limits") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata] = (supportedExtensions.find ("EGL_NV_stream_metadata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_reset] = (supportedExtensions.find ("EGL_NV_stream_reset") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_remote] = (supportedExtensions.find ("EGL_NV_stream_remote") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_socket] = (supportedExtensions.find ("EGL_NV_stream_socket") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_socket_inet] = (supportedExtensions.find ("EGL_NV_stream_socket_inet") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_socket_unix] = (supportedExtensions.find ("EGL_NV_stream_socket_unix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_sync] = (supportedExtensions.find ("EGL_NV_stream_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_sync] = (supportedExtensions.find ("EGL_NV_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_system_time] = (supportedExtensions.find ("EGL_NV_system_time") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_triple_buffer] = (supportedExtensions.find ("EGL_NV_triple_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_TIZEN_image_native_buffer] = (supportedExtensions.find ("EGL_TIZEN_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_TIZEN_image_native_surface] = (supportedExtensions.find ("EGL_TIZEN_image_native_surface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_compositor] = (supportedExtensions.find ("EGL_EXT_compositor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_surface_CTA861_3_metadata] = (supportedExtensions.find ("EGL_EXT_surface_CTA861_3_metadata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_surface_compression] = (supportedExtensions.find ("EGL_EXT_surface_compression") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_implicit_sync_control] = (supportedExtensions.find ("EGL_EXT_image_implicit_sync_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_bind_to_front] = (supportedExtensions.find ("EGL_EXT_bind_to_front") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_origin] = (supportedExtensions.find ("EGL_NV_stream_origin") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display] = (supportedExtensions.find ("EGL_WL_bind_wayland_display") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_WL_create_wayland_buffer_from_image] = (supportedExtensions.find ("EGL_WL_create_wayland_buffer_from_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_ARM_image_format] = (supportedExtensions.find ("EGL_ARM_image_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query_name] = (supportedExtensions.find ("EGL_EXT_device_query_name") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_persistent_id] = (supportedExtensions.find ("EGL_EXT_device_persistent_id") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_drm_render_node] = (supportedExtensions.find ("EGL_EXT_device_drm_render_node") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_explicit_device] = (supportedExtensions.find ("EGL_EXT_explicit_device") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage_use_scanout_attrib] = (supportedExtensions.find ("EGL_NV_stream_consumer_eglimage_use_scanout_attrib") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_QNX_platform_screen] = (supportedExtensions.find ("EGL_QNX_platform_screen") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_QNX_image_native_buffer] = (supportedExtensions.find ("EGL_QNX_image_native_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_display_alloc] = (supportedExtensions.find ("EGL_EXT_display_alloc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_type] = (supportedExtensions.find ("EGL_EXT_device_type") != supportedExtensions.end ());

  // EGL_VERSION_1_1
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_1])
  {
    s_deviceConfig.m_eglBindTexImage = (PFNEGLBINDTEXIMAGEPROC) glewGetProcAddress ("eglBindTexImage");
    s_deviceConfig.m_eglReleaseTexImage = (PFNEGLRELEASETEXIMAGEPROC) glewGetProcAddress ("eglReleaseTexImage");
    s_deviceConfig.m_eglSurfaceAttrib = (PFNEGLSURFACEATTRIBPROC) glewGetProcAddress ("eglSurfaceAttrib");
    s_deviceConfig.m_eglSwapInterval = (PFNEGLSWAPINTERVALPROC) glewGetProcAddress ("eglSwapInterval");
  }

  // EGL_VERSION_1_2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_2])
  {
    s_deviceConfig.m_eglBindAPI = (PFNEGLBINDAPIPROC) glewGetProcAddress ("eglBindAPI");
    s_deviceConfig.m_eglQueryAPI = (PFNEGLQUERYAPIPROC) glewGetProcAddress ("eglQueryAPI");
    s_deviceConfig.m_eglCreatePbufferFromClientBuffer = (PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC) glewGetProcAddress ("eglCreatePbufferFromClientBuffer");
    s_deviceConfig.m_eglReleaseThread = (PFNEGLRELEASETHREADPROC) glewGetProcAddress ("eglReleaseThread");
    s_deviceConfig.m_eglWaitClient = (PFNEGLWAITCLIENTPROC) glewGetProcAddress ("eglWaitClient");
  }

  // EGL_VERSION_1_4
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_4])
  {
    s_deviceConfig.m_eglGetCurrentContext = (PFNEGLGETCURRENTCONTEXTPROC) glewGetProcAddress ("eglGetCurrentContext");
  }

  // EGL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_VERSION_1_5])
  {
    s_deviceConfig.m_eglCreateSync = (PFNEGLCREATESYNCPROC) glewGetProcAddress ("eglCreateSync");
    s_deviceConfig.m_eglDestroySync = (PFNEGLDESTROYSYNCPROC) glewGetProcAddress ("eglDestroySync");
    s_deviceConfig.m_eglClientWaitSync = (PFNEGLCLIENTWAITSYNCPROC) glewGetProcAddress ("eglClientWaitSync");
    s_deviceConfig.m_eglGetSyncAttrib = (PFNEGLGETSYNCATTRIBPROC) glewGetProcAddress ("eglGetSyncAttrib");
    s_deviceConfig.m_eglCreateImage = (PFNEGLCREATEIMAGEPROC) glewGetProcAddress ("eglCreateImage");
    s_deviceConfig.m_eglDestroyImage = (PFNEGLDESTROYIMAGEPROC) glewGetProcAddress ("eglDestroyImage");
    s_deviceConfig.m_eglGetPlatformDisplay = (PFNEGLGETPLATFORMDISPLAYPROC) glewGetProcAddress ("eglGetPlatformDisplay");
    s_deviceConfig.m_eglCreatePlatformWindowSurface = (PFNEGLCREATEPLATFORMWINDOWSURFACEPROC) glewGetProcAddress ("eglCreatePlatformWindowSurface");
    s_deviceConfig.m_eglCreatePlatformPixmapSurface = (PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC) glewGetProcAddress ("eglCreatePlatformPixmapSurface");
    s_deviceConfig.m_eglWaitSync = (PFNEGLWAITSYNCPROC) glewGetProcAddress ("eglWaitSync");
  }

  // EGL_ANDROID_blob_cache
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_blob_cache])
  {
    s_deviceConfig.m_eglSetBlobCacheFuncsANDROID = (PFNEGLSETBLOBCACHEFUNCSANDROIDPROC) glewGetProcAddress ("eglSetBlobCacheFuncsANDROID");
  }

  // EGL_ANDROID_create_native_client_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_create_native_client_buffer])
  {
    s_deviceConfig.m_eglCreateNativeClientBufferANDROID = (PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC) glewGetProcAddress ("eglCreateNativeClientBufferANDROID");
  }

  // EGL_ANDROID_get_native_client_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_native_client_buffer])
  {
    s_deviceConfig.m_eglGetNativeClientBufferANDROID = (PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC) glewGetProcAddress ("eglGetNativeClientBufferANDROID");
  }

  // EGL_ANDROID_native_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_native_fence_sync])
  {
    s_deviceConfig.m_eglDupNativeFenceFDANDROID = (PFNEGLDUPNATIVEFENCEFDANDROIDPROC) glewGetProcAddress ("eglDupNativeFenceFDANDROID");
  }

  // EGL_ANDROID_presentation_time
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_presentation_time])
  {
    s_deviceConfig.m_eglPresentationTimeANDROID = (PFNEGLPRESENTATIONTIMEANDROIDPROC) glewGetProcAddress ("eglPresentationTimeANDROID");
  }

  // EGL_ANDROID_get_frame_timestamps
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANDROID_get_frame_timestamps])
  {
    s_deviceConfig.m_eglGetCompositorTimingSupportedANDROID = (PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC) glewGetProcAddress ("eglGetCompositorTimingSupportedANDROID");
    s_deviceConfig.m_eglGetCompositorTimingANDROID = (PFNEGLGETCOMPOSITORTIMINGANDROIDPROC) glewGetProcAddress ("eglGetCompositorTimingANDROID");
    s_deviceConfig.m_eglGetNextFrameIdANDROID = (PFNEGLGETNEXTFRAMEIDANDROIDPROC) glewGetProcAddress ("eglGetNextFrameIdANDROID");
    s_deviceConfig.m_eglGetFrameTimestampSupportedANDROID = (PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC) glewGetProcAddress ("eglGetFrameTimestampSupportedANDROID");
    s_deviceConfig.m_eglGetFrameTimestampsANDROID = (PFNEGLGETFRAMETIMESTAMPSANDROIDPROC) glewGetProcAddress ("eglGetFrameTimestampsANDROID");
  }

  // EGL_ANGLE_query_surface_pointer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_query_surface_pointer])
  {
    s_deviceConfig.m_eglQuerySurfacePointerANGLE = (PFNEGLQUERYSURFACEPOINTERANGLEPROC) glewGetProcAddress ("eglQuerySurfacePointerANGLE");
  }

  // EGL_ANGLE_sync_control_rate
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_ANGLE_sync_control_rate])
  {
    s_deviceConfig.m_eglGetMscRateANGLE = (PFNEGLGETMSCRATEANGLEPROC) glewGetProcAddress ("eglGetMscRateANGLE");
  }

  // EGL_EXT_client_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_client_sync])
  {
    s_deviceConfig.m_eglClientSignalSyncEXT = (PFNEGLCLIENTSIGNALSYNCEXTPROC) glewGetProcAddress ("eglClientSignalSyncEXT");
  }

  // EGL_EXT_device_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_base])
  {
    s_deviceConfig.m_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) glewGetProcAddress ("eglQueryDeviceAttribEXT");
    s_deviceConfig.m_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) glewGetProcAddress ("eglQueryDeviceStringEXT");
    s_deviceConfig.m_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) glewGetProcAddress ("eglQueryDevicesEXT");
    s_deviceConfig.m_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) glewGetProcAddress ("eglQueryDisplayAttribEXT");
  }

  // EGL_EXT_device_enumeration
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_enumeration])
  {
    s_deviceConfig.m_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) glewGetProcAddress ("eglQueryDevicesEXT");
  }

  // EGL_EXT_device_query
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_query])
  {
    s_deviceConfig.m_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) glewGetProcAddress ("eglQueryDeviceAttribEXT");
    s_deviceConfig.m_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) glewGetProcAddress ("eglQueryDeviceStringEXT");
    s_deviceConfig.m_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) glewGetProcAddress ("eglQueryDisplayAttribEXT");
  }

  // EGL_EXT_image_dma_buf_import_modifiers
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_image_dma_buf_import_modifiers])
  {
    s_deviceConfig.m_eglQueryDmaBufFormatsEXT = (PFNEGLQUERYDMABUFFORMATSEXTPROC) glewGetProcAddress ("eglQueryDmaBufFormatsEXT");
    s_deviceConfig.m_eglQueryDmaBufModifiersEXT = (PFNEGLQUERYDMABUFMODIFIERSEXTPROC) glewGetProcAddress ("eglQueryDmaBufModifiersEXT");
  }

  // EGL_EXT_output_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_output_base])
  {
    s_deviceConfig.m_eglGetOutputLayersEXT = (PFNEGLGETOUTPUTLAYERSEXTPROC) glewGetProcAddress ("eglGetOutputLayersEXT");
    s_deviceConfig.m_eglGetOutputPortsEXT = (PFNEGLGETOUTPUTPORTSEXTPROC) glewGetProcAddress ("eglGetOutputPortsEXT");
    s_deviceConfig.m_eglOutputLayerAttribEXT = (PFNEGLOUTPUTLAYERATTRIBEXTPROC) glewGetProcAddress ("eglOutputLayerAttribEXT");
    s_deviceConfig.m_eglQueryOutputLayerAttribEXT = (PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC) glewGetProcAddress ("eglQueryOutputLayerAttribEXT");
    s_deviceConfig.m_eglQueryOutputLayerStringEXT = (PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC) glewGetProcAddress ("eglQueryOutputLayerStringEXT");
    s_deviceConfig.m_eglOutputPortAttribEXT = (PFNEGLOUTPUTPORTATTRIBEXTPROC) glewGetProcAddress ("eglOutputPortAttribEXT");
    s_deviceConfig.m_eglQueryOutputPortAttribEXT = (PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC) glewGetProcAddress ("eglQueryOutputPortAttribEXT");
    s_deviceConfig.m_eglQueryOutputPortStringEXT = (PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC) glewGetProcAddress ("eglQueryOutputPortStringEXT");
  }

  // EGL_EXT_platform_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_platform_base])
  {
    s_deviceConfig.m_eglGetPlatformDisplayEXT = (PFNEGLGETPLATFORMDISPLAYEXTPROC) glewGetProcAddress ("eglGetPlatformDisplayEXT");
    s_deviceConfig.m_eglCreatePlatformWindowSurfaceEXT = (PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC) glewGetProcAddress ("eglCreatePlatformWindowSurfaceEXT");
    s_deviceConfig.m_eglCreatePlatformPixmapSurfaceEXT = (PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC) glewGetProcAddress ("eglCreatePlatformPixmapSurfaceEXT");
  }

  // EGL_EXT_stream_consumer_egloutput
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_stream_consumer_egloutput])
  {
    s_deviceConfig.m_eglStreamConsumerOutputEXT = (PFNEGLSTREAMCONSUMEROUTPUTEXTPROC) glewGetProcAddress ("eglStreamConsumerOutputEXT");
  }

  // EGL_EXT_swap_buffers_with_damage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_swap_buffers_with_damage])
  {
    s_deviceConfig.m_eglSwapBuffersWithDamageEXT = (PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC) glewGetProcAddress ("eglSwapBuffersWithDamageEXT");
  }

  // EGL_EXT_sync_reuse
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_sync_reuse])
  {
    s_deviceConfig.m_eglUnsignalSyncEXT = (PFNEGLUNSIGNALSYNCEXTPROC) glewGetProcAddress ("eglUnsignalSyncEXT");
  }

  // EGL_HI_clientpixmap
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_HI_clientpixmap])
  {
    s_deviceConfig.m_eglCreatePixmapSurfaceHI = (PFNEGLCREATEPIXMAPSURFACEHIPROC) glewGetProcAddress ("eglCreatePixmapSurfaceHI");
  }

  // EGL_KHR_cl_event2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_cl_event2])
  {
    s_deviceConfig.m_eglCreateSync64KHR = (PFNEGLCREATESYNC64KHRPROC) glewGetProcAddress ("eglCreateSync64KHR");
  }

  // EGL_KHR_debug
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_debug])
  {
    s_deviceConfig.m_eglDebugMessageControlKHR = (PFNEGLDEBUGMESSAGECONTROLKHRPROC) glewGetProcAddress ("eglDebugMessageControlKHR");
    s_deviceConfig.m_eglQueryDebugKHR = (PFNEGLQUERYDEBUGKHRPROC) glewGetProcAddress ("eglQueryDebugKHR");
    s_deviceConfig.m_eglLabelObjectKHR = (PFNEGLLABELOBJECTKHRPROC) glewGetProcAddress ("eglLabelObjectKHR");
  }

  // EGL_KHR_display_reference
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_display_reference])
  {
    s_deviceConfig.m_eglQueryDisplayAttribKHR = (PFNEGLQUERYDISPLAYATTRIBKHRPROC) glewGetProcAddress ("eglQueryDisplayAttribKHR");
  }

  // EGL_KHR_fence_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_fence_sync])
  {
    s_deviceConfig.m_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) glewGetProcAddress ("eglCreateSyncKHR");
    s_deviceConfig.m_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) glewGetProcAddress ("eglDestroySyncKHR");
    s_deviceConfig.m_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) glewGetProcAddress ("eglClientWaitSyncKHR");
    s_deviceConfig.m_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) glewGetProcAddress ("eglGetSyncAttribKHR");
  }

  // EGL_KHR_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image])
  {
    s_deviceConfig.m_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) glewGetProcAddress ("eglCreateImageKHR");
    s_deviceConfig.m_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) glewGetProcAddress ("eglDestroyImageKHR");
  }

  // EGL_KHR_image_base
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_image_base])
  {
    s_deviceConfig.m_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) glewGetProcAddress ("eglCreateImageKHR");
    s_deviceConfig.m_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) glewGetProcAddress ("eglDestroyImageKHR");
  }

  // EGL_KHR_lock_surface
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface])
  {
    s_deviceConfig.m_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) glewGetProcAddress ("eglLockSurfaceKHR");
    s_deviceConfig.m_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) glewGetProcAddress ("eglUnlockSurfaceKHR");
  }

  // EGL_KHR_lock_surface3
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_lock_surface3])
  {
    s_deviceConfig.m_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) glewGetProcAddress ("eglLockSurfaceKHR");
    s_deviceConfig.m_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) glewGetProcAddress ("eglUnlockSurfaceKHR");
    s_deviceConfig.m_eglQuerySurface64KHR = (PFNEGLQUERYSURFACE64KHRPROC) glewGetProcAddress ("eglQuerySurface64KHR");
  }

  // EGL_KHR_partial_update
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_partial_update])
  {
    s_deviceConfig.m_eglSetDamageRegionKHR = (PFNEGLSETDAMAGEREGIONKHRPROC) glewGetProcAddress ("eglSetDamageRegionKHR");
  }

  // EGL_KHR_reusable_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_reusable_sync])
  {
    s_deviceConfig.m_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) glewGetProcAddress ("eglCreateSyncKHR");
    s_deviceConfig.m_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) glewGetProcAddress ("eglDestroySyncKHR");
    s_deviceConfig.m_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) glewGetProcAddress ("eglClientWaitSyncKHR");
    s_deviceConfig.m_eglSignalSyncKHR = (PFNEGLSIGNALSYNCKHRPROC) glewGetProcAddress ("eglSignalSyncKHR");
    s_deviceConfig.m_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) glewGetProcAddress ("eglGetSyncAttribKHR");
  }

  // EGL_KHR_stream
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream])
  {
    s_deviceConfig.m_eglCreateStreamKHR = (PFNEGLCREATESTREAMKHRPROC) glewGetProcAddress ("eglCreateStreamKHR");
    s_deviceConfig.m_eglDestroyStreamKHR = (PFNEGLDESTROYSTREAMKHRPROC) glewGetProcAddress ("eglDestroyStreamKHR");
    s_deviceConfig.m_eglStreamAttribKHR = (PFNEGLSTREAMATTRIBKHRPROC) glewGetProcAddress ("eglStreamAttribKHR");
    s_deviceConfig.m_eglQueryStreamKHR = (PFNEGLQUERYSTREAMKHRPROC) glewGetProcAddress ("eglQueryStreamKHR");
    s_deviceConfig.m_eglQueryStreamu64KHR = (PFNEGLQUERYSTREAMU64KHRPROC) glewGetProcAddress ("eglQueryStreamu64KHR");
  }

  // EGL_KHR_stream_attrib
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_attrib])
  {
    s_deviceConfig.m_eglCreateStreamAttribKHR = (PFNEGLCREATESTREAMATTRIBKHRPROC) glewGetProcAddress ("eglCreateStreamAttribKHR");
    s_deviceConfig.m_eglSetStreamAttribKHR = (PFNEGLSETSTREAMATTRIBKHRPROC) glewGetProcAddress ("eglSetStreamAttribKHR");
    s_deviceConfig.m_eglQueryStreamAttribKHR = (PFNEGLQUERYSTREAMATTRIBKHRPROC) glewGetProcAddress ("eglQueryStreamAttribKHR");
    s_deviceConfig.m_eglStreamConsumerAcquireAttribKHR = (PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC) glewGetProcAddress ("eglStreamConsumerAcquireAttribKHR");
    s_deviceConfig.m_eglStreamConsumerReleaseAttribKHR = (PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC) glewGetProcAddress ("eglStreamConsumerReleaseAttribKHR");
  }

  // EGL_KHR_stream_consumer_gltexture
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_consumer_gltexture])
  {
    s_deviceConfig.m_eglStreamConsumerGLTextureExternalKHR = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC) glewGetProcAddress ("eglStreamConsumerGLTextureExternalKHR");
    s_deviceConfig.m_eglStreamConsumerAcquireKHR = (PFNEGLSTREAMCONSUMERACQUIREKHRPROC) glewGetProcAddress ("eglStreamConsumerAcquireKHR");
    s_deviceConfig.m_eglStreamConsumerReleaseKHR = (PFNEGLSTREAMCONSUMERRELEASEKHRPROC) glewGetProcAddress ("eglStreamConsumerReleaseKHR");
  }

  // EGL_KHR_stream_cross_process_fd
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_cross_process_fd])
  {
    s_deviceConfig.m_eglGetStreamFileDescriptorKHR = (PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC) glewGetProcAddress ("eglGetStreamFileDescriptorKHR");
    s_deviceConfig.m_eglCreateStreamFromFileDescriptorKHR = (PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC) glewGetProcAddress ("eglCreateStreamFromFileDescriptorKHR");
  }

  // EGL_KHR_stream_fifo
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_fifo])
  {
    s_deviceConfig.m_eglQueryStreamTimeKHR = (PFNEGLQUERYSTREAMTIMEKHRPROC) glewGetProcAddress ("eglQueryStreamTimeKHR");
  }

  // EGL_KHR_stream_producer_eglsurface
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_stream_producer_eglsurface])
  {
    s_deviceConfig.m_eglCreateStreamProducerSurfaceKHR = (PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC) glewGetProcAddress ("eglCreateStreamProducerSurfaceKHR");
  }

  // EGL_KHR_swap_buffers_with_damage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_swap_buffers_with_damage])
  {
    s_deviceConfig.m_eglSwapBuffersWithDamageKHR = (PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC) glewGetProcAddress ("eglSwapBuffersWithDamageKHR");
  }

  // EGL_KHR_wait_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_KHR_wait_sync])
  {
    s_deviceConfig.m_eglWaitSyncKHR = (PFNEGLWAITSYNCKHRPROC) glewGetProcAddress ("eglWaitSyncKHR");
  }

  // EGL_MESA_drm_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_drm_image])
  {
    s_deviceConfig.m_eglCreateDRMImageMESA = (PFNEGLCREATEDRMIMAGEMESAPROC) glewGetProcAddress ("eglCreateDRMImageMESA");
    s_deviceConfig.m_eglExportDRMImageMESA = (PFNEGLEXPORTDRMIMAGEMESAPROC) glewGetProcAddress ("eglExportDRMImageMESA");
  }

  // EGL_MESA_image_dma_buf_export
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_image_dma_buf_export])
  {
    s_deviceConfig.m_eglExportDMABUFImageQueryMESA = (PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC) glewGetProcAddress ("eglExportDMABUFImageQueryMESA");
    s_deviceConfig.m_eglExportDMABUFImageMESA = (PFNEGLEXPORTDMABUFIMAGEMESAPROC) glewGetProcAddress ("eglExportDMABUFImageMESA");
  }

  // EGL_MESA_query_driver
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_MESA_query_driver])
  {
    s_deviceConfig.m_eglGetDisplayDriverConfig = (PFNEGLGETDISPLAYDRIVERCONFIGPROC) glewGetProcAddress ("eglGetDisplayDriverConfig");
    s_deviceConfig.m_eglGetDisplayDriverName = (PFNEGLGETDISPLAYDRIVERNAMEPROC) glewGetProcAddress ("eglGetDisplayDriverName");
  }

  // EGL_NOK_swap_region
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region])
  {
    s_deviceConfig.m_eglSwapBuffersRegionNOK = (PFNEGLSWAPBUFFERSREGIONNOKPROC) glewGetProcAddress ("eglSwapBuffersRegionNOK");
  }

  // EGL_NOK_swap_region2
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NOK_swap_region2])
  {
    s_deviceConfig.m_eglSwapBuffersRegion2NOK = (PFNEGLSWAPBUFFERSREGION2NOKPROC) glewGetProcAddress ("eglSwapBuffersRegion2NOK");
  }

  // EGL_NV_native_query
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_native_query])
  {
    s_deviceConfig.m_eglQueryNativeDisplayNV = (PFNEGLQUERYNATIVEDISPLAYNVPROC) glewGetProcAddress ("eglQueryNativeDisplayNV");
    s_deviceConfig.m_eglQueryNativeWindowNV = (PFNEGLQUERYNATIVEWINDOWNVPROC) glewGetProcAddress ("eglQueryNativeWindowNV");
    s_deviceConfig.m_eglQueryNativePixmapNV = (PFNEGLQUERYNATIVEPIXMAPNVPROC) glewGetProcAddress ("eglQueryNativePixmapNV");
  }

  // EGL_NV_post_sub_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_post_sub_buffer])
  {
    s_deviceConfig.m_eglPostSubBufferNV = (PFNEGLPOSTSUBBUFFERNVPROC) glewGetProcAddress ("eglPostSubBufferNV");
  }

  // EGL_NV_stream_consumer_gltexture_yuv
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_gltexture_yuv])
  {
    s_deviceConfig.m_eglStreamConsumerGLTextureExternalAttribsNV = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC) glewGetProcAddress ("eglStreamConsumerGLTextureExternalAttribsNV");
  }

  // EGL_NV_stream_consumer_eglimage
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_consumer_eglimage])
  {
    s_deviceConfig.m_eglStreamImageConsumerConnectNV = (PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC) glewGetProcAddress ("eglStreamImageConsumerConnectNV");
    s_deviceConfig.m_eglQueryStreamConsumerEventNV = (PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC) glewGetProcAddress ("eglQueryStreamConsumerEventNV");
    s_deviceConfig.m_eglStreamAcquireImageNV = (PFNEGLSTREAMACQUIREIMAGENVPROC) glewGetProcAddress ("eglStreamAcquireImageNV");
    s_deviceConfig.m_eglStreamReleaseImageNV = (PFNEGLSTREAMRELEASEIMAGENVPROC) glewGetProcAddress ("eglStreamReleaseImageNV");
  }

  // EGL_NV_stream_flush
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_flush])
  {
    s_deviceConfig.m_eglStreamFlushNV = (PFNEGLSTREAMFLUSHNVPROC) glewGetProcAddress ("eglStreamFlushNV");
  }

  // EGL_NV_stream_metadata
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_metadata])
  {
    s_deviceConfig.m_eglQueryDisplayAttribNV = (PFNEGLQUERYDISPLAYATTRIBNVPROC) glewGetProcAddress ("eglQueryDisplayAttribNV");
    s_deviceConfig.m_eglSetStreamMetadataNV = (PFNEGLSETSTREAMMETADATANVPROC) glewGetProcAddress ("eglSetStreamMetadataNV");
    s_deviceConfig.m_eglQueryStreamMetadataNV = (PFNEGLQUERYSTREAMMETADATANVPROC) glewGetProcAddress ("eglQueryStreamMetadataNV");
  }

  // EGL_NV_stream_reset
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_reset])
  {
    s_deviceConfig.m_eglResetStreamNV = (PFNEGLRESETSTREAMNVPROC) glewGetProcAddress ("eglResetStreamNV");
  }

  // EGL_NV_stream_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_stream_sync])
  {
    s_deviceConfig.m_eglCreateStreamSyncNV = (PFNEGLCREATESTREAMSYNCNVPROC) glewGetProcAddress ("eglCreateStreamSyncNV");
  }

  // EGL_NV_sync
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_sync])
  {
    s_deviceConfig.m_eglCreateFenceSyncNV = (PFNEGLCREATEFENCESYNCNVPROC) glewGetProcAddress ("eglCreateFenceSyncNV");
    s_deviceConfig.m_eglDestroySyncNV = (PFNEGLDESTROYSYNCNVPROC) glewGetProcAddress ("eglDestroySyncNV");
    s_deviceConfig.m_eglFenceNV = (PFNEGLFENCENVPROC) glewGetProcAddress ("eglFenceNV");
    s_deviceConfig.m_eglClientWaitSyncNV = (PFNEGLCLIENTWAITSYNCNVPROC) glewGetProcAddress ("eglClientWaitSyncNV");
    s_deviceConfig.m_eglSignalSyncNV = (PFNEGLSIGNALSYNCNVPROC) glewGetProcAddress ("eglSignalSyncNV");
    s_deviceConfig.m_eglGetSyncAttribNV = (PFNEGLGETSYNCATTRIBNVPROC) glewGetProcAddress ("eglGetSyncAttribNV");
  }

  // EGL_NV_system_time
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_NV_system_time])
  {
    s_deviceConfig.m_eglGetSystemTimeFrequencyNV = (PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC) glewGetProcAddress ("eglGetSystemTimeFrequencyNV");
    s_deviceConfig.m_eglGetSystemTimeNV = (PFNEGLGETSYSTEMTIMENVPROC) glewGetProcAddress ("eglGetSystemTimeNV");
  }

  // EGL_EXT_compositor
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_compositor])
  {
    s_deviceConfig.m_eglCompositorSetContextListEXT = (PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC) glewGetProcAddress ("eglCompositorSetContextListEXT");
    s_deviceConfig.m_eglCompositorSetContextAttributesEXT = (PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC) glewGetProcAddress ("eglCompositorSetContextAttributesEXT");
    s_deviceConfig.m_eglCompositorSetWindowListEXT = (PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC) glewGetProcAddress ("eglCompositorSetWindowListEXT");
    s_deviceConfig.m_eglCompositorSetWindowAttributesEXT = (PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC) glewGetProcAddress ("eglCompositorSetWindowAttributesEXT");
    s_deviceConfig.m_eglCompositorBindTexWindowEXT = (PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC) glewGetProcAddress ("eglCompositorBindTexWindowEXT");
    s_deviceConfig.m_eglCompositorSetSizeEXT = (PFNEGLCOMPOSITORSETSIZEEXTPROC) glewGetProcAddress ("eglCompositorSetSizeEXT");
    s_deviceConfig.m_eglCompositorSwapPolicyEXT = (PFNEGLCOMPOSITORSWAPPOLICYEXTPROC) glewGetProcAddress ("eglCompositorSwapPolicyEXT");
  }

  // EGL_EXT_surface_compression
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_surface_compression])
  {
    s_deviceConfig.m_eglQuerySupportedCompressionRatesEXT = (PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC) glewGetProcAddress ("eglQuerySupportedCompressionRatesEXT");
  }

  // EGL_WL_bind_wayland_display
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_WL_bind_wayland_display])
  {
    s_deviceConfig.m_eglBindWaylandDisplayWL = (PFNEGLBINDWAYLANDDISPLAYWLPROC) glewGetProcAddress ("eglBindWaylandDisplayWL");
    s_deviceConfig.m_eglUnbindWaylandDisplayWL = (PFNEGLUNBINDWAYLANDDISPLAYWLPROC) glewGetProcAddress ("eglUnbindWaylandDisplayWL");
    s_deviceConfig.m_eglQueryWaylandBufferWL = (PFNEGLQUERYWAYLANDBUFFERWLPROC) glewGetProcAddress ("eglQueryWaylandBufferWL");
  }

  // EGL_WL_create_wayland_buffer_from_image
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_WL_create_wayland_buffer_from_image])
  {
    s_deviceConfig.m_eglCreateWaylandBufferFromImageWL = (PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC) glewGetProcAddress ("eglCreateWaylandBufferFromImageWL");
  }

  // EGL_EXT_device_persistent_id
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_device_persistent_id])
  {
    s_deviceConfig.m_eglQueryDeviceBinaryEXT = (PFNEGLQUERYDEVICEBINARYEXTPROC) glewGetProcAddress ("eglQueryDeviceBinaryEXT");
  }

  // EGL_EXT_display_alloc
  if (s_deviceConfig.m_featureSupported [GLEW_EGL_EXT_display_alloc])
  {
    s_deviceConfig.m_eglDestroyDisplayEXT = (PFNEGLDESTROYDISPLAYEXTPROC) glewGetProcAddress ("eglDestroyDisplayEXT");
  }

  s_initialised = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::egl::Deinitialise ()
{
  s_initialised = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
