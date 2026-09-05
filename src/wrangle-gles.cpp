////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <cstring>
#include <string>
#include <unordered_set>

#include <wrangle-gles.h>
#include "wrangle-gles.inl"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::gles::s_initialised = false;

glew::gles::DeviceConfig glew::gles::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::gles::Initialise ()
{
  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));
  //
  // Determine current driver's feature reporting.
  //

  const unsigned char *glVersion = glGetString (GL_VERSION);

  if (!glVersion)
  {
    glVersion = (const unsigned char*) "";
  }

  const size_t glVersionLen = strlen ((const char *) glVersion);

  if (glVersionLen)
  {
    unsigned int major = 0, minor = 0;

#if _WIN32
  #define strncasecmp _strnicmp
#endif

    const bool openGlEsSupported = (strncasecmp ((const char *) glVersion, "OpenGL ES", 9) == 0);

    const char *divisor = strchr ((const char *) glVersion, '.');

    if (divisor)
    {
      major = (*(char *) (divisor - 1)) - '0';
      minor = (*(char *) (divisor + 1)) - '0';
    }

    if (openGlEsSupported)
    {
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_2_0] = ((major >= 2));
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0] = ((major >= 3));
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1] = ((major >= 3) && (minor >= 1));
      s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2] = ((major >= 3) && (minor >= 2));
    }
  }

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *glExtensions = glGetString (GL_EXTENSIONS);

  if (!glExtensions)
  {
    glExtensions = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t glExtensionsLen = strlen ((const char *) glExtensions);

  if (glExtensionsLen)
  {
    unsigned char *thisExtStart = (unsigned char *) glExtensions;

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

  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_compressed_3DC_texture] = (supportedExtensions.find ("GL_AMD_compressed_3DC_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_compressed_ATC_texture] = (supportedExtensions.find ("GL_AMD_compressed_ATC_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_multisample_advanced] = (supportedExtensions.find ("GL_AMD_framebuffer_multisample_advanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] = (supportedExtensions.find ("GL_AMD_performance_monitor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_program_binary_Z400] = (supportedExtensions.find ("GL_AMD_program_binary_Z400") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANDROID_extension_pack_es31a] = (supportedExtensions.find ("GL_ANDROID_extension_pack_es31a") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_depth_texture] = (supportedExtensions.find ("GL_ANGLE_depth_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_framebuffer_blit] = (supportedExtensions.find ("GL_ANGLE_framebuffer_blit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_framebuffer_multisample] = (supportedExtensions.find ("GL_ANGLE_framebuffer_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays] = (supportedExtensions.find ("GL_ANGLE_instanced_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_pack_reverse_row_order] = (supportedExtensions.find ("GL_ANGLE_pack_reverse_row_order") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_program_binary] = (supportedExtensions.find ("GL_ANGLE_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_texture_compression_dxt3] = (supportedExtensions.find ("GL_ANGLE_texture_compression_dxt3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_texture_compression_dxt5] = (supportedExtensions.find ("GL_ANGLE_texture_compression_dxt5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_texture_usage] = (supportedExtensions.find ("GL_ANGLE_texture_usage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_translated_shader_source] = (supportedExtensions.find ("GL_ANGLE_translated_shader_source") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_clip_distance] = (supportedExtensions.find ("GL_APPLE_clip_distance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_color_buffer_packed_float] = (supportedExtensions.find ("GL_APPLE_color_buffer_packed_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_copy_texture_levels] = (supportedExtensions.find ("GL_APPLE_copy_texture_levels") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_framebuffer_multisample] = (supportedExtensions.find ("GL_APPLE_framebuffer_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_rgb_422] = (supportedExtensions.find ("GL_APPLE_rgb_422") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_sync] = (supportedExtensions.find ("GL_APPLE_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_texture_format_BGRA8888] = (supportedExtensions.find ("GL_APPLE_texture_format_BGRA8888") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_texture_max_level] = (supportedExtensions.find ("GL_APPLE_texture_max_level") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_texture_packed_float] = (supportedExtensions.find ("GL_APPLE_texture_packed_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_mali_program_binary] = (supportedExtensions.find ("GL_ARM_mali_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_mali_shader_binary] = (supportedExtensions.find ("GL_ARM_mali_shader_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_rgba8] = (supportedExtensions.find ("GL_ARM_rgba8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_shader_core_properties] = (supportedExtensions.find ("GL_ARM_shader_core_properties") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_shader_framebuffer_fetch] = (supportedExtensions.find ("GL_ARM_shader_framebuffer_fetch") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_shader_framebuffer_fetch_depth_stencil] = (supportedExtensions.find ("GL_ARM_shader_framebuffer_fetch_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARM_texture_unnormalized_coordinates] = (supportedExtensions.find ("GL_ARM_texture_unnormalized_coordinates") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_DMP_program_binary] = (supportedExtensions.find ("GL_DMP_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_DMP_shader_binary] = (supportedExtensions.find ("GL_DMP_shader_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_array] = (supportedExtensions.find ("GL_EXT_EGL_image_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage] = (supportedExtensions.find ("GL_EXT_EGL_image_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage_compression] = (supportedExtensions.find ("GL_EXT_EGL_image_storage_compression") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_YUV_target] = (supportedExtensions.find ("GL_EXT_YUV_target") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_base_instance] = (supportedExtensions.find ("GL_EXT_base_instance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_func_extended] = (supportedExtensions.find ("GL_EXT_blend_func_extended") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_minmax] = (supportedExtensions.find ("GL_EXT_blend_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_buffer_storage] = (supportedExtensions.find ("GL_EXT_buffer_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_clear_texture] = (supportedExtensions.find ("GL_EXT_clear_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_clip_control] = (supportedExtensions.find ("GL_EXT_clip_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_clip_cull_distance] = (supportedExtensions.find ("GL_EXT_clip_cull_distance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_color_buffer_float] = (supportedExtensions.find ("GL_EXT_color_buffer_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_color_buffer_half_float] = (supportedExtensions.find ("GL_EXT_color_buffer_half_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_conservative_depth] = (supportedExtensions.find ("GL_EXT_conservative_depth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_copy_image] = (supportedExtensions.find ("GL_EXT_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_debug_label] = (supportedExtensions.find ("GL_EXT_debug_label") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_debug_marker] = (supportedExtensions.find ("GL_EXT_debug_marker") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_depth_clamp] = (supportedExtensions.find ("GL_EXT_depth_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_discard_framebuffer] = (supportedExtensions.find ("GL_EXT_discard_framebuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query] = (supportedExtensions.find ("GL_EXT_disjoint_timer_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers] = (supportedExtensions.find ("GL_EXT_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed] = (supportedExtensions.find ("GL_EXT_draw_buffers_indexed") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex] = (supportedExtensions.find ("GL_EXT_draw_elements_base_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced] = (supportedExtensions.find ("GL_EXT_draw_instanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_transform_feedback] = (supportedExtensions.find ("GL_EXT_draw_transform_feedback") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_external_buffer] = (supportedExtensions.find ("GL_EXT_external_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_float_blend] = (supportedExtensions.find ("GL_EXT_float_blend") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate] = (supportedExtensions.find ("GL_EXT_fragment_shading_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit_layers] = (supportedExtensions.find ("GL_EXT_framebuffer_blit_layers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_geometry_point_size] = (supportedExtensions.find ("GL_EXT_geometry_point_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_geometry_shader] = (supportedExtensions.find ("GL_EXT_geometry_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_gpu_shader5] = (supportedExtensions.find ("GL_EXT_gpu_shader5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_instanced_arrays] = (supportedExtensions.find ("GL_EXT_instanced_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_map_buffer_range] = (supportedExtensions.find ("GL_EXT_map_buffer_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object] = (supportedExtensions.find ("GL_EXT_memory_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object_fd] = (supportedExtensions.find ("GL_EXT_memory_object_fd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object_win32] = (supportedExtensions.find ("GL_EXT_memory_object_win32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader] = (supportedExtensions.find ("GL_EXT_mesh_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_arrays] = (supportedExtensions.find ("GL_EXT_multi_draw_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_indirect] = (supportedExtensions.find ("GL_EXT_multi_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multisampled_compatibility] = (supportedExtensions.find ("GL_EXT_multisampled_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multisampled_render_to_texture] = (supportedExtensions.find ("GL_EXT_multisampled_render_to_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multisampled_render_to_texture2] = (supportedExtensions.find ("GL_EXT_multisampled_render_to_texture2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_draw_buffers] = (supportedExtensions.find ("GL_EXT_multiview_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_tessellation_geometry_shader] = (supportedExtensions.find ("GL_EXT_multiview_tessellation_geometry_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_texture_multisample] = (supportedExtensions.find ("GL_EXT_multiview_texture_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_timer_query] = (supportedExtensions.find ("GL_EXT_multiview_timer_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_occlusion_query_boolean] = (supportedExtensions.find ("GL_EXT_occlusion_query_boolean") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset_clamp] = (supportedExtensions.find ("GL_EXT_polygon_offset_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_post_depth_coverage] = (supportedExtensions.find ("GL_EXT_post_depth_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_primitive_bounding_box] = (supportedExtensions.find ("GL_EXT_primitive_bounding_box") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_protected_textures] = (supportedExtensions.find ("GL_EXT_protected_textures") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_pvrtc_sRGB] = (supportedExtensions.find ("GL_EXT_pvrtc_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_raster_multisample] = (supportedExtensions.find ("GL_EXT_raster_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_read_format_bgra] = (supportedExtensions.find ("GL_EXT_read_format_bgra") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_render_snorm] = (supportedExtensions.find ("GL_EXT_render_snorm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_robustness] = (supportedExtensions.find ("GL_EXT_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore] = (supportedExtensions.find ("GL_EXT_semaphore") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore_fd] = (supportedExtensions.find ("GL_EXT_semaphore_fd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore_win32] = (supportedExtensions.find ("GL_EXT_semaphore_win32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_sRGB] = (supportedExtensions.find ("GL_EXT_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_sRGB_write_control] = (supportedExtensions.find ("GL_EXT_sRGB_write_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_separate_depth_stencil] = (supportedExtensions.find ("GL_EXT_separate_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] = (supportedExtensions.find ("GL_EXT_separate_shader_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch] = (supportedExtensions.find ("GL_EXT_shader_framebuffer_fetch") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch_non_coherent] = (supportedExtensions.find ("GL_EXT_shader_framebuffer_fetch_non_coherent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_group_vote] = (supportedExtensions.find ("GL_EXT_shader_group_vote") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_implicit_conversions] = (supportedExtensions.find ("GL_EXT_shader_implicit_conversions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_integer_mix] = (supportedExtensions.find ("GL_EXT_shader_integer_mix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_io_blocks] = (supportedExtensions.find ("GL_EXT_shader_io_blocks") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_non_constant_global_initializers] = (supportedExtensions.find ("GL_EXT_shader_non_constant_global_initializers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_pixel_local_storage] = (supportedExtensions.find ("GL_EXT_shader_pixel_local_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_pixel_local_storage2] = (supportedExtensions.find ("GL_EXT_shader_pixel_local_storage2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_samples_identical] = (supportedExtensions.find ("GL_EXT_shader_samples_identical") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_texture_lod] = (supportedExtensions.find ("GL_EXT_shader_texture_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_texture_samples] = (supportedExtensions.find ("GL_EXT_shader_texture_samples") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shadow_samplers] = (supportedExtensions.find ("GL_EXT_shadow_samplers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_sparse_texture] = (supportedExtensions.find ("GL_EXT_sparse_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_sparse_texture2] = (supportedExtensions.find ("GL_EXT_sparse_texture2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_tessellation_point_size] = (supportedExtensions.find ("GL_EXT_tessellation_point_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_tessellation_shader] = (supportedExtensions.find ("GL_EXT_tessellation_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp] = (supportedExtensions.find ("GL_EXT_texture_border_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer] = (supportedExtensions.find ("GL_EXT_texture_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_astc_decode_mode] = (supportedExtensions.find ("GL_EXT_texture_compression_astc_decode_mode") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_bptc] = (supportedExtensions.find ("GL_EXT_texture_compression_bptc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_dxt1] = (supportedExtensions.find ("GL_EXT_texture_compression_dxt1") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_rgtc] = (supportedExtensions.find ("GL_EXT_texture_compression_rgtc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_s3tc] = (supportedExtensions.find ("GL_EXT_texture_compression_s3tc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_s3tc_srgb] = (supportedExtensions.find ("GL_EXT_texture_compression_s3tc_srgb") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_cube_map_array] = (supportedExtensions.find ("GL_EXT_texture_cube_map_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_filter_anisotropic] = (supportedExtensions.find ("GL_EXT_texture_filter_anisotropic") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_filter_minmax] = (supportedExtensions.find ("GL_EXT_texture_filter_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_format_BGRA8888] = (supportedExtensions.find ("GL_EXT_texture_format_BGRA8888") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_format_sRGB_override] = (supportedExtensions.find ("GL_EXT_texture_format_sRGB_override") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_mirror_clamp_to_edge] = (supportedExtensions.find ("GL_EXT_texture_mirror_clamp_to_edge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_norm16] = (supportedExtensions.find ("GL_EXT_texture_norm16") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_query_lod] = (supportedExtensions.find ("GL_EXT_texture_query_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_rg] = (supportedExtensions.find ("GL_EXT_texture_rg") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB_R8] = (supportedExtensions.find ("GL_EXT_texture_sRGB_R8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB_RG8] = (supportedExtensions.find ("GL_EXT_texture_sRGB_RG8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB_decode] = (supportedExtensions.find ("GL_EXT_texture_sRGB_decode") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_shadow_lod] = (supportedExtensions.find ("GL_EXT_texture_shadow_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] = (supportedExtensions.find ("GL_EXT_texture_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_storage_compression] = (supportedExtensions.find ("GL_EXT_texture_storage_compression") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_type_2_10_10_10_REV] = (supportedExtensions.find ("GL_EXT_texture_type_2_10_10_10_REV") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_view] = (supportedExtensions.find ("GL_EXT_texture_view") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore] = (supportedExtensions.find ("GL_NV_timeline_semaphore") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_unpack_subimage] = (supportedExtensions.find ("GL_EXT_unpack_subimage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_win32_keyed_mutex] = (supportedExtensions.find ("GL_EXT_win32_keyed_mutex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_window_rectangles] = (supportedExtensions.find ("GL_EXT_window_rectangles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_FJ_shader_binary_GCCSO] = (supportedExtensions.find ("GL_FJ_shader_binary_GCCSO") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_HUAWEI_program_binary] = (supportedExtensions.find ("GL_HUAWEI_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_HUAWEI_shader_binary] = (supportedExtensions.find ("GL_HUAWEI_shader_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture] = (supportedExtensions.find ("GL_IMG_bindless_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_framebuffer_downsample] = (supportedExtensions.find ("GL_IMG_framebuffer_downsample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_multisampled_render_to_texture] = (supportedExtensions.find ("GL_IMG_multisampled_render_to_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_program_binary] = (supportedExtensions.find ("GL_IMG_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_read_format] = (supportedExtensions.find ("GL_IMG_read_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_shader_binary] = (supportedExtensions.find ("GL_IMG_shader_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_texture_compression_pvrtc] = (supportedExtensions.find ("GL_IMG_texture_compression_pvrtc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_texture_compression_pvrtc2] = (supportedExtensions.find ("GL_IMG_texture_compression_pvrtc2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IMG_texture_filter_cubic] = (supportedExtensions.find ("GL_IMG_texture_filter_cubic") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_conservative_rasterization] = (supportedExtensions.find ("GL_INTEL_conservative_rasterization") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_framebuffer_CMAA] = (supportedExtensions.find ("GL_INTEL_framebuffer_CMAA") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_blackhole_render] = (supportedExtensions.find ("GL_INTEL_blackhole_render") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_performance_query] = (supportedExtensions.find ("GL_INTEL_performance_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_blend_equation_advanced] = (supportedExtensions.find ("GL_KHR_blend_equation_advanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_blend_equation_advanced_coherent] = (supportedExtensions.find ("GL_KHR_blend_equation_advanced_coherent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_context_flush_control] = (supportedExtensions.find ("GL_KHR_context_flush_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_debug] = (supportedExtensions.find ("GL_KHR_debug") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_no_error] = (supportedExtensions.find ("GL_KHR_no_error") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_robust_buffer_access_behavior] = (supportedExtensions.find ("GL_KHR_robust_buffer_access_behavior") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_robustness] = (supportedExtensions.find ("GL_KHR_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_shader_subgroup] = (supportedExtensions.find ("GL_KHR_shader_subgroup") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_texture_compression_astc_hdr] = (supportedExtensions.find ("GL_KHR_texture_compression_astc_hdr") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_texture_compression_astc_ldr] = (supportedExtensions.find ("GL_KHR_texture_compression_astc_ldr") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_texture_compression_astc_sliced_3d] = (supportedExtensions.find ("GL_KHR_texture_compression_astc_sliced_3d") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_KHR_parallel_shader_compile] = (supportedExtensions.find ("GL_KHR_parallel_shader_compile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_bgra] = (supportedExtensions.find ("GL_MESA_bgra") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_x] = (supportedExtensions.find ("GL_MESA_framebuffer_flip_x") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_y] = (supportedExtensions.find ("GL_MESA_framebuffer_flip_y") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_swap_xy] = (supportedExtensions.find ("GL_MESA_framebuffer_swap_xy") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_program_binary_formats] = (supportedExtensions.find ("GL_MESA_program_binary_formats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_sampler_objects] = (supportedExtensions.find ("GL_MESA_sampler_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_shader_integer_functions] = (supportedExtensions.find ("GL_MESA_shader_integer_functions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_texture_const_bandwidth] = (supportedExtensions.find ("GL_MESA_texture_const_bandwidth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_blend_equation_advanced_multi_draw_buffers] = (supportedExtensions.find ("GL_NVX_blend_equation_advanced_multi_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] = (supportedExtensions.find ("GL_NV_bindless_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced] = (supportedExtensions.find ("GL_NV_blend_equation_advanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced_coherent] = (supportedExtensions.find ("GL_NV_blend_equation_advanced_coherent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_minmax_factor] = (supportedExtensions.find ("GL_NV_blend_minmax_factor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_clip_space_w_scaling] = (supportedExtensions.find ("GL_NV_clip_space_w_scaling") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_compute_shader_derivatives] = (supportedExtensions.find ("GL_NV_compute_shader_derivatives") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conditional_render] = (supportedExtensions.find ("GL_NV_conditional_render") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster] = (supportedExtensions.find ("GL_NV_conservative_raster") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap] = (supportedExtensions.find ("GL_NV_conservative_raster_pre_snap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap_triangles] = (supportedExtensions.find ("GL_NV_conservative_raster_pre_snap_triangles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_copy_buffer] = (supportedExtensions.find ("GL_NV_copy_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_coverage_sample] = (supportedExtensions.find ("GL_NV_coverage_sample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_depth_nonlinear] = (supportedExtensions.find ("GL_NV_depth_nonlinear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_buffers] = (supportedExtensions.find ("GL_NV_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_instanced] = (supportedExtensions.find ("GL_NV_draw_instanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] = (supportedExtensions.find ("GL_NV_draw_vulkan_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_explicit_attrib_location] = (supportedExtensions.find ("GL_NV_explicit_attrib_location") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fbo_color_attachments] = (supportedExtensions.find ("GL_NV_fbo_color_attachments") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fence] = (supportedExtensions.find ("GL_NV_fence") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fill_rectangle] = (supportedExtensions.find ("GL_NV_fill_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_coverage_to_color] = (supportedExtensions.find ("GL_NV_fragment_coverage_to_color") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_shader_barycentric] = (supportedExtensions.find ("GL_NV_fragment_shader_barycentric") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_shader_interlock] = (supportedExtensions.find ("GL_NV_fragment_shader_interlock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_blit] = (supportedExtensions.find ("GL_NV_framebuffer_blit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples] = (supportedExtensions.find ("GL_NV_framebuffer_mixed_samples") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_multisample] = (supportedExtensions.find ("GL_NV_framebuffer_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_generate_mipmap_sRGB] = (supportedExtensions.find ("GL_NV_generate_mipmap_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_geometry_shader_passthrough] = (supportedExtensions.find ("GL_NV_geometry_shader_passthrough") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] = (supportedExtensions.find ("GL_NV_gpu_shader5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_image_formats] = (supportedExtensions.find ("GL_NV_image_formats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_instanced_arrays] = (supportedExtensions.find ("GL_NV_instanced_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_internalformat_sample_query] = (supportedExtensions.find ("GL_NV_internalformat_sample_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] = (supportedExtensions.find ("GL_NV_memory_attachment") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse] = (supportedExtensions.find ("GL_NV_memory_object_sparse") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_mesh_shader] = (supportedExtensions.find ("GL_NV_mesh_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices] = (supportedExtensions.find ("GL_NV_non_square_matrices") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_path_rendering] = (supportedExtensions.find ("GL_NV_path_rendering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_path_rendering_shared_edge] = (supportedExtensions.find ("GL_NV_path_rendering_shared_edge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_pixel_buffer_object] = (supportedExtensions.find ("GL_NV_pixel_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_polygon_mode] = (supportedExtensions.find ("GL_NV_polygon_mode") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_primitive_shading_rate] = (supportedExtensions.find ("GL_NV_primitive_shading_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_read_buffer] = (supportedExtensions.find ("GL_NV_read_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_read_buffer_front] = (supportedExtensions.find ("GL_NV_read_buffer_front") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_read_depth] = (supportedExtensions.find ("GL_NV_read_depth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_read_depth_stencil] = (supportedExtensions.find ("GL_NV_read_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_read_stencil] = (supportedExtensions.find ("GL_NV_read_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_representative_fragment_test] = (supportedExtensions.find ("GL_NV_representative_fragment_test") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_sRGB_formats] = (supportedExtensions.find ("GL_NV_sRGB_formats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_sample_locations] = (supportedExtensions.find ("GL_NV_sample_locations") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_sample_mask_override_coverage] = (supportedExtensions.find ("GL_NV_sample_mask_override_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_scissor_exclusive] = (supportedExtensions.find ("GL_NV_scissor_exclusive") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_atomic_fp16_vector] = (supportedExtensions.find ("GL_NV_shader_atomic_fp16_vector") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_noperspective_interpolation] = (supportedExtensions.find ("GL_NV_shader_noperspective_interpolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_subgroup_partitioned] = (supportedExtensions.find ("GL_NV_shader_subgroup_partitioned") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_texture_footprint] = (supportedExtensions.find ("GL_NV_shader_texture_footprint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] = (supportedExtensions.find ("GL_NV_shading_rate_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shadow_samplers_array] = (supportedExtensions.find ("GL_NV_shadow_samplers_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shadow_samplers_cube] = (supportedExtensions.find ("GL_NV_shadow_samplers_cube") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_stereo_view_rendering] = (supportedExtensions.find ("GL_NV_stereo_view_rendering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_barrier] = (supportedExtensions.find ("GL_NV_texture_barrier") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_border_clamp] = (supportedExtensions.find ("GL_NV_texture_border_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_compression_s3tc_update] = (supportedExtensions.find ("GL_NV_texture_compression_s3tc_update") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_npot_2D_mipmap] = (supportedExtensions.find ("GL_NV_texture_npot_2D_mipmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_array] = (supportedExtensions.find ("GL_NV_viewport_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_array2] = (supportedExtensions.find ("GL_NV_viewport_array2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_swizzle] = (supportedExtensions.find ("GL_NV_viewport_swizzle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_pack_subimage] = (supportedExtensions.find ("GL_NV_pack_subimage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_EGL_image] = (supportedExtensions.find ("GL_OES_EGL_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_EGL_image_external] = (supportedExtensions.find ("GL_OES_EGL_image_external") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_EGL_image_external_essl3] = (supportedExtensions.find ("GL_OES_EGL_image_external_essl3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_compressed_ETC1_RGB8_sub_texture] = (supportedExtensions.find ("GL_OES_compressed_ETC1_RGB8_sub_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_compressed_ETC1_RGB8_texture] = (supportedExtensions.find ("GL_OES_compressed_ETC1_RGB8_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_compressed_paletted_texture] = (supportedExtensions.find ("GL_OES_compressed_paletted_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_copy_image] = (supportedExtensions.find ("GL_OES_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_depth24] = (supportedExtensions.find ("GL_OES_depth24") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_depth32] = (supportedExtensions.find ("GL_OES_depth32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_depth_texture] = (supportedExtensions.find ("GL_OES_depth_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed] = (supportedExtensions.find ("GL_OES_draw_buffers_indexed") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex] = (supportedExtensions.find ("GL_OES_draw_elements_base_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_element_index_uint] = (supportedExtensions.find ("GL_OES_element_index_uint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_fbo_render_mipmap] = (supportedExtensions.find ("GL_OES_fbo_render_mipmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_fragment_precision_high] = (supportedExtensions.find ("GL_OES_fragment_precision_high") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_geometry_point_size] = (supportedExtensions.find ("GL_OES_geometry_point_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_geometry_shader] = (supportedExtensions.find ("GL_OES_geometry_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_get_program_binary] = (supportedExtensions.find ("GL_OES_get_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_gpu_shader5] = (supportedExtensions.find ("GL_OES_gpu_shader5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_mapbuffer] = (supportedExtensions.find ("GL_OES_mapbuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_packed_depth_stencil] = (supportedExtensions.find ("GL_OES_packed_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_primitive_bounding_box] = (supportedExtensions.find ("GL_OES_primitive_bounding_box") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_required_internalformat] = (supportedExtensions.find ("GL_OES_required_internalformat") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_rgb8_rgba8] = (supportedExtensions.find ("GL_OES_rgb8_rgba8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_sample_shading] = (supportedExtensions.find ("GL_OES_sample_shading") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_sample_variables] = (supportedExtensions.find ("GL_OES_sample_variables") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_shader_image_atomic] = (supportedExtensions.find ("GL_OES_shader_image_atomic") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_shader_io_blocks] = (supportedExtensions.find ("GL_OES_shader_io_blocks") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_shader_multisample_interpolation] = (supportedExtensions.find ("GL_OES_shader_multisample_interpolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_standard_derivatives] = (supportedExtensions.find ("GL_OES_standard_derivatives") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_stencil1] = (supportedExtensions.find ("GL_OES_stencil1") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_stencil4] = (supportedExtensions.find ("GL_OES_stencil4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_surfaceless_context] = (supportedExtensions.find ("GL_OES_surfaceless_context") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_tessellation_point_size] = (supportedExtensions.find ("GL_OES_tessellation_point_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_tessellation_shader] = (supportedExtensions.find ("GL_OES_tessellation_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_3D] = (supportedExtensions.find ("GL_OES_texture_3D") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp] = (supportedExtensions.find ("GL_OES_texture_border_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_buffer] = (supportedExtensions.find ("GL_OES_texture_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_compression_astc] = (supportedExtensions.find ("GL_OES_texture_compression_astc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_cube_map_array] = (supportedExtensions.find ("GL_OES_texture_cube_map_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_float] = (supportedExtensions.find ("GL_OES_texture_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_float_linear] = (supportedExtensions.find ("GL_OES_texture_float_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_half_float] = (supportedExtensions.find ("GL_OES_texture_half_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_half_float_linear] = (supportedExtensions.find ("GL_OES_texture_half_float_linear") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_npot] = (supportedExtensions.find ("GL_OES_texture_npot") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_stencil8] = (supportedExtensions.find ("GL_OES_texture_stencil8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_storage_multisample_2d_array] = (supportedExtensions.find ("GL_OES_texture_storage_multisample_2d_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_view] = (supportedExtensions.find ("GL_OES_texture_view") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object] = (supportedExtensions.find ("GL_OES_vertex_array_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_vertex_half_float] = (supportedExtensions.find ("GL_OES_vertex_half_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_vertex_type_10_10_10_2] = (supportedExtensions.find ("GL_OES_vertex_type_10_10_10_2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_viewport_array] = (supportedExtensions.find ("GL_OES_viewport_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview] = (supportedExtensions.find ("GL_OVR_multiview") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview2] = (supportedExtensions.find ("GL_OVR_multiview2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview_multisampled_render_to_texture] = (supportedExtensions.find ("GL_OVR_multiview_multisampled_render_to_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_alpha_test] = (supportedExtensions.find ("GL_QCOM_alpha_test") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_binning_control] = (supportedExtensions.find ("GL_QCOM_binning_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_driver_control] = (supportedExtensions.find ("GL_QCOM_driver_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_extended_get] = (supportedExtensions.find ("GL_QCOM_extended_get") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_extended_get2] = (supportedExtensions.find ("GL_QCOM_extended_get2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_framebuffer_foveated] = (supportedExtensions.find ("GL_QCOM_framebuffer_foveated") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_motion_estimation] = (supportedExtensions.find ("GL_QCOM_motion_estimation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_frame_extrapolation] = (supportedExtensions.find ("GL_QCOM_frame_extrapolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_render_shared_exponent] = (supportedExtensions.find ("GL_QCOM_render_shared_exponent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_render_sRGB_R8_RG8] = (supportedExtensions.find ("GL_QCOM_render_sRGB_R8_RG8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_texture_foveated] = (supportedExtensions.find ("GL_QCOM_texture_foveated") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_texture_foveated2] = (supportedExtensions.find ("GL_QCOM_texture_foveated2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_texture_foveated_subsampled_layout] = (supportedExtensions.find ("GL_QCOM_texture_foveated_subsampled_layout") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_ycbcr_degamma] = (supportedExtensions.find ("GL_QCOM_ycbcr_degamma") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_texture_lod_bias] = (supportedExtensions.find ("GL_QCOM_texture_lod_bias") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_perfmon_global_mode] = (supportedExtensions.find ("GL_QCOM_perfmon_global_mode") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_shader_framebuffer_fetch_noncoherent] = (supportedExtensions.find ("GL_QCOM_shader_framebuffer_fetch_noncoherent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_shader_framebuffer_fetch_rate] = (supportedExtensions.find ("GL_QCOM_shader_framebuffer_fetch_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_shading_rate] = (supportedExtensions.find ("GL_QCOM_shading_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_tiled_rendering] = (supportedExtensions.find ("GL_QCOM_tiled_rendering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_writeonly_rendering] = (supportedExtensions.find ("GL_QCOM_writeonly_rendering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_YUV_texture_gather] = (supportedExtensions.find ("GL_QCOM_YUV_texture_gather") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_VIV_shader_binary] = (supportedExtensions.find ("GL_VIV_shader_binary") != supportedExtensions.end ());

  // GL_ES_VERSION_3_0
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_0])
  {
    s_deviceConfig.m_glReadBuffer = (PFNGLREADBUFFERPROC) glewGetProcAddress ("glReadBuffer");
    s_deviceConfig.m_glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) glewGetProcAddress ("glDrawRangeElements");
    s_deviceConfig.m_glTexImage3D = (PFNGLTEXIMAGE3DPROC) glewGetProcAddress ("glTexImage3D");
    s_deviceConfig.m_glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) glewGetProcAddress ("glTexSubImage3D");
    s_deviceConfig.m_glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) glewGetProcAddress ("glCopyTexSubImage3D");
    s_deviceConfig.m_glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) glewGetProcAddress ("glCompressedTexImage3D");
    s_deviceConfig.m_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) glewGetProcAddress ("glCompressedTexSubImage3D");
    s_deviceConfig.m_glGenQueries = (PFNGLGENQUERIESPROC) glewGetProcAddress ("glGenQueries");
    s_deviceConfig.m_glDeleteQueries = (PFNGLDELETEQUERIESPROC) glewGetProcAddress ("glDeleteQueries");
    s_deviceConfig.m_glIsQuery = (PFNGLISQUERYPROC) glewGetProcAddress ("glIsQuery");
    s_deviceConfig.m_glBeginQuery = (PFNGLBEGINQUERYPROC) glewGetProcAddress ("glBeginQuery");
    s_deviceConfig.m_glEndQuery = (PFNGLENDQUERYPROC) glewGetProcAddress ("glEndQuery");
    s_deviceConfig.m_glGetQueryiv = (PFNGLGETQUERYIVPROC) glewGetProcAddress ("glGetQueryiv");
    s_deviceConfig.m_glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) glewGetProcAddress ("glGetQueryObjectuiv");
    s_deviceConfig.m_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) glewGetProcAddress ("glUnmapBuffer");
    s_deviceConfig.m_glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) glewGetProcAddress ("glGetBufferPointerv");
    s_deviceConfig.m_glDrawBuffers = (PFNGLDRAWBUFFERSPROC) glewGetProcAddress ("glDrawBuffers");
    s_deviceConfig.m_glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) glewGetProcAddress ("glUniformMatrix2x3fv");
    s_deviceConfig.m_glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) glewGetProcAddress ("glUniformMatrix3x2fv");
    s_deviceConfig.m_glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) glewGetProcAddress ("glUniformMatrix2x4fv");
    s_deviceConfig.m_glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) glewGetProcAddress ("glUniformMatrix4x2fv");
    s_deviceConfig.m_glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) glewGetProcAddress ("glUniformMatrix3x4fv");
    s_deviceConfig.m_glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) glewGetProcAddress ("glUniformMatrix4x3fv");
    s_deviceConfig.m_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) glewGetProcAddress ("glBlitFramebuffer");
    s_deviceConfig.m_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glRenderbufferStorageMultisample");
    s_deviceConfig.m_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glFramebufferTextureLayer");
    s_deviceConfig.m_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) glewGetProcAddress ("glMapBufferRange");
    s_deviceConfig.m_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedBufferRange");
    s_deviceConfig.m_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) glewGetProcAddress ("glBindVertexArray");
    s_deviceConfig.m_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) glewGetProcAddress ("glDeleteVertexArrays");
    s_deviceConfig.m_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) glewGetProcAddress ("glGenVertexArrays");
    s_deviceConfig.m_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) glewGetProcAddress ("glIsVertexArray");
    s_deviceConfig.m_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) glewGetProcAddress ("glGetIntegeri_v");
    s_deviceConfig.m_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glBeginTransformFeedback");
    s_deviceConfig.m_glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glEndTransformFeedback");
    s_deviceConfig.m_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) glewGetProcAddress ("glBindBufferRange");
    s_deviceConfig.m_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) glewGetProcAddress ("glBindBufferBase");
    s_deviceConfig.m_glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) glewGetProcAddress ("glTransformFeedbackVaryings");
    s_deviceConfig.m_glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) glewGetProcAddress ("glGetTransformFeedbackVarying");
    s_deviceConfig.m_glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) glewGetProcAddress ("glVertexAttribIPointer");
    s_deviceConfig.m_glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) glewGetProcAddress ("glGetVertexAttribIiv");
    s_deviceConfig.m_glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) glewGetProcAddress ("glGetVertexAttribIuiv");
    s_deviceConfig.m_glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) glewGetProcAddress ("glVertexAttribI4i");
    s_deviceConfig.m_glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) glewGetProcAddress ("glVertexAttribI4ui");
    s_deviceConfig.m_glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) glewGetProcAddress ("glVertexAttribI4iv");
    s_deviceConfig.m_glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) glewGetProcAddress ("glVertexAttribI4uiv");
    s_deviceConfig.m_glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) glewGetProcAddress ("glGetUniformuiv");
    s_deviceConfig.m_glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) glewGetProcAddress ("glGetFragDataLocation");
    s_deviceConfig.m_glUniform1ui = (PFNGLUNIFORM1UIPROC) glewGetProcAddress ("glUniform1ui");
    s_deviceConfig.m_glUniform2ui = (PFNGLUNIFORM2UIPROC) glewGetProcAddress ("glUniform2ui");
    s_deviceConfig.m_glUniform3ui = (PFNGLUNIFORM3UIPROC) glewGetProcAddress ("glUniform3ui");
    s_deviceConfig.m_glUniform4ui = (PFNGLUNIFORM4UIPROC) glewGetProcAddress ("glUniform4ui");
    s_deviceConfig.m_glUniform1uiv = (PFNGLUNIFORM1UIVPROC) glewGetProcAddress ("glUniform1uiv");
    s_deviceConfig.m_glUniform2uiv = (PFNGLUNIFORM2UIVPROC) glewGetProcAddress ("glUniform2uiv");
    s_deviceConfig.m_glUniform3uiv = (PFNGLUNIFORM3UIVPROC) glewGetProcAddress ("glUniform3uiv");
    s_deviceConfig.m_glUniform4uiv = (PFNGLUNIFORM4UIVPROC) glewGetProcAddress ("glUniform4uiv");
    s_deviceConfig.m_glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) glewGetProcAddress ("glClearBufferiv");
    s_deviceConfig.m_glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) glewGetProcAddress ("glClearBufferuiv");
    s_deviceConfig.m_glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) glewGetProcAddress ("glClearBufferfv");
    s_deviceConfig.m_glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) glewGetProcAddress ("glClearBufferfi");
    s_deviceConfig.m_glGetStringi = (PFNGLGETSTRINGIPROC) glewGetProcAddress ("glGetStringi");
    s_deviceConfig.m_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyBufferSubData");
    s_deviceConfig.m_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) glewGetProcAddress ("glGetUniformIndices");
    s_deviceConfig.m_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) glewGetProcAddress ("glGetActiveUniformsiv");
    s_deviceConfig.m_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) glewGetProcAddress ("glGetUniformBlockIndex");
    s_deviceConfig.m_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) glewGetProcAddress ("glGetActiveUniformBlockiv");
    s_deviceConfig.m_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) glewGetProcAddress ("glGetActiveUniformBlockName");
    s_deviceConfig.m_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) glewGetProcAddress ("glUniformBlockBinding");
    s_deviceConfig.m_glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) glewGetProcAddress ("glDrawArraysInstanced");
    s_deviceConfig.m_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) glewGetProcAddress ("glDrawElementsInstanced");
    s_deviceConfig.m_glFenceSync = (PFNGLFENCESYNCPROC) glewGetProcAddress ("glFenceSync");
    s_deviceConfig.m_glIsSync = (PFNGLISSYNCPROC) glewGetProcAddress ("glIsSync");
    s_deviceConfig.m_glDeleteSync = (PFNGLDELETESYNCPROC) glewGetProcAddress ("glDeleteSync");
    s_deviceConfig.m_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) glewGetProcAddress ("glClientWaitSync");
    s_deviceConfig.m_glWaitSync = (PFNGLWAITSYNCPROC) glewGetProcAddress ("glWaitSync");
    s_deviceConfig.m_glGetInteger64v = (PFNGLGETINTEGER64VPROC) glewGetProcAddress ("glGetInteger64v");
    s_deviceConfig.m_glGetSynciv = (PFNGLGETSYNCIVPROC) glewGetProcAddress ("glGetSynciv");
    s_deviceConfig.m_glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) glewGetProcAddress ("glGetInteger64i_v");
    s_deviceConfig.m_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) glewGetProcAddress ("glGetBufferParameteri64v");
    s_deviceConfig.m_glGenSamplers = (PFNGLGENSAMPLERSPROC) glewGetProcAddress ("glGenSamplers");
    s_deviceConfig.m_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) glewGetProcAddress ("glDeleteSamplers");
    s_deviceConfig.m_glIsSampler = (PFNGLISSAMPLERPROC) glewGetProcAddress ("glIsSampler");
    s_deviceConfig.m_glBindSampler = (PFNGLBINDSAMPLERPROC) glewGetProcAddress ("glBindSampler");
    s_deviceConfig.m_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) glewGetProcAddress ("glSamplerParameteri");
    s_deviceConfig.m_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glSamplerParameteriv");
    s_deviceConfig.m_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) glewGetProcAddress ("glSamplerParameterf");
    s_deviceConfig.m_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glSamplerParameterfv");
    s_deviceConfig.m_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glGetSamplerParameteriv");
    s_deviceConfig.m_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glGetSamplerParameterfv");
    s_deviceConfig.m_glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) glewGetProcAddress ("glVertexAttribDivisor");
    s_deviceConfig.m_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glBindTransformFeedback");
    s_deviceConfig.m_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glDeleteTransformFeedbacks");
    s_deviceConfig.m_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glGenTransformFeedbacks");
    s_deviceConfig.m_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glIsTransformFeedback");
    s_deviceConfig.m_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glPauseTransformFeedback");
    s_deviceConfig.m_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glResumeTransformFeedback");
    s_deviceConfig.m_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) glewGetProcAddress ("glGetProgramBinary");
    s_deviceConfig.m_glProgramBinary = (PFNGLPROGRAMBINARYPROC) glewGetProcAddress ("glProgramBinary");
    s_deviceConfig.m_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) glewGetProcAddress ("glProgramParameteri");
    s_deviceConfig.m_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateFramebuffer");
    s_deviceConfig.m_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateSubFramebuffer");
    s_deviceConfig.m_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) glewGetProcAddress ("glTexStorage2D");
    s_deviceConfig.m_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) glewGetProcAddress ("glTexStorage3D");
    s_deviceConfig.m_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) glewGetProcAddress ("glGetInternalformativ");
  }

  // GL_ES_VERSION_3_1
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_1])
  {
    s_deviceConfig.m_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) glewGetProcAddress ("glDispatchCompute");
    s_deviceConfig.m_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) glewGetProcAddress ("glDispatchComputeIndirect");
    s_deviceConfig.m_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glDrawArraysIndirect");
    s_deviceConfig.m_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glDrawElementsIndirect");
    s_deviceConfig.m_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glFramebufferParameteri");
    s_deviceConfig.m_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferParameteriv");
    s_deviceConfig.m_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) glewGetProcAddress ("glGetProgramInterfaceiv");
    s_deviceConfig.m_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) glewGetProcAddress ("glGetProgramResourceIndex");
    s_deviceConfig.m_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) glewGetProcAddress ("glGetProgramResourceName");
    s_deviceConfig.m_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) glewGetProcAddress ("glGetProgramResourceiv");
    s_deviceConfig.m_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) glewGetProcAddress ("glGetProgramResourceLocation");
    s_deviceConfig.m_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) glewGetProcAddress ("glUseProgramStages");
    s_deviceConfig.m_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) glewGetProcAddress ("glActiveShaderProgram");
    s_deviceConfig.m_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) glewGetProcAddress ("glCreateShaderProgramv");
    s_deviceConfig.m_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) glewGetProcAddress ("glBindProgramPipeline");
    s_deviceConfig.m_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) glewGetProcAddress ("glDeleteProgramPipelines");
    s_deviceConfig.m_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) glewGetProcAddress ("glGenProgramPipelines");
    s_deviceConfig.m_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) glewGetProcAddress ("glIsProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) glewGetProcAddress ("glGetProgramPipelineiv");
    s_deviceConfig.m_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) glewGetProcAddress ("glProgramUniform1i");
    s_deviceConfig.m_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) glewGetProcAddress ("glProgramUniform2i");
    s_deviceConfig.m_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) glewGetProcAddress ("glProgramUniform3i");
    s_deviceConfig.m_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) glewGetProcAddress ("glProgramUniform4i");
    s_deviceConfig.m_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) glewGetProcAddress ("glProgramUniform1ui");
    s_deviceConfig.m_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) glewGetProcAddress ("glProgramUniform2ui");
    s_deviceConfig.m_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) glewGetProcAddress ("glProgramUniform3ui");
    s_deviceConfig.m_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) glewGetProcAddress ("glProgramUniform4ui");
    s_deviceConfig.m_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) glewGetProcAddress ("glProgramUniform1f");
    s_deviceConfig.m_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) glewGetProcAddress ("glProgramUniform2f");
    s_deviceConfig.m_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) glewGetProcAddress ("glProgramUniform3f");
    s_deviceConfig.m_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) glewGetProcAddress ("glProgramUniform4f");
    s_deviceConfig.m_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) glewGetProcAddress ("glProgramUniform1iv");
    s_deviceConfig.m_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) glewGetProcAddress ("glProgramUniform2iv");
    s_deviceConfig.m_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) glewGetProcAddress ("glProgramUniform3iv");
    s_deviceConfig.m_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) glewGetProcAddress ("glProgramUniform4iv");
    s_deviceConfig.m_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) glewGetProcAddress ("glProgramUniform1uiv");
    s_deviceConfig.m_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) glewGetProcAddress ("glProgramUniform2uiv");
    s_deviceConfig.m_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) glewGetProcAddress ("glProgramUniform3uiv");
    s_deviceConfig.m_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) glewGetProcAddress ("glProgramUniform4uiv");
    s_deviceConfig.m_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) glewGetProcAddress ("glProgramUniform1fv");
    s_deviceConfig.m_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) glewGetProcAddress ("glProgramUniform2fv");
    s_deviceConfig.m_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) glewGetProcAddress ("glProgramUniform3fv");
    s_deviceConfig.m_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) glewGetProcAddress ("glProgramUniform4fv");
    s_deviceConfig.m_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) glewGetProcAddress ("glProgramUniformMatrix2fv");
    s_deviceConfig.m_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) glewGetProcAddress ("glProgramUniformMatrix3fv");
    s_deviceConfig.m_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) glewGetProcAddress ("glProgramUniformMatrix4fv");
    s_deviceConfig.m_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3fv");
    s_deviceConfig.m_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2fv");
    s_deviceConfig.m_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2fv");
    s_deviceConfig.m_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3fv");
    s_deviceConfig.m_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) glewGetProcAddress ("glValidateProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) glewGetProcAddress ("glGetProgramPipelineInfoLog");
    s_deviceConfig.m_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) glewGetProcAddress ("glBindImageTexture");
    s_deviceConfig.m_glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) glewGetProcAddress ("glGetBooleani_v");
    s_deviceConfig.m_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) glewGetProcAddress ("glMemoryBarrier");
    s_deviceConfig.m_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) glewGetProcAddress ("glMemoryBarrierByRegion");
    s_deviceConfig.m_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage2DMultisample");
    s_deviceConfig.m_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) glewGetProcAddress ("glGetMultisamplefv");
    s_deviceConfig.m_glSampleMaski = (PFNGLSAMPLEMASKIPROC) glewGetProcAddress ("glSampleMaski");
    s_deviceConfig.m_glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) glewGetProcAddress ("glGetTexLevelParameteriv");
    s_deviceConfig.m_glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) glewGetProcAddress ("glGetTexLevelParameterfv");
    s_deviceConfig.m_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) glewGetProcAddress ("glBindVertexBuffer");
    s_deviceConfig.m_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) glewGetProcAddress ("glVertexAttribFormat");
    s_deviceConfig.m_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) glewGetProcAddress ("glVertexAttribIFormat");
    s_deviceConfig.m_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) glewGetProcAddress ("glVertexAttribBinding");
    s_deviceConfig.m_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) glewGetProcAddress ("glVertexBindingDivisor");
  }

  // GL_ES_VERSION_3_2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ES_VERSION_3_2])
  {
    s_deviceConfig.m_glBlendBarrier = (PFNGLBLENDBARRIERPROC) glewGetProcAddress ("glBlendBarrier");
    s_deviceConfig.m_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) glewGetProcAddress ("glCopyImageSubData");
    s_deviceConfig.m_glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) glewGetProcAddress ("glDebugMessageControl");
    s_deviceConfig.m_glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) glewGetProcAddress ("glDebugMessageInsert");
    s_deviceConfig.m_glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) glewGetProcAddress ("glDebugMessageCallback");
    s_deviceConfig.m_glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) glewGetProcAddress ("glGetDebugMessageLog");
    s_deviceConfig.m_glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) glewGetProcAddress ("glPushDebugGroup");
    s_deviceConfig.m_glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) glewGetProcAddress ("glPopDebugGroup");
    s_deviceConfig.m_glObjectLabel = (PFNGLOBJECTLABELPROC) glewGetProcAddress ("glObjectLabel");
    s_deviceConfig.m_glGetObjectLabel = (PFNGLGETOBJECTLABELPROC) glewGetProcAddress ("glGetObjectLabel");
    s_deviceConfig.m_glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) glewGetProcAddress ("glObjectPtrLabel");
    s_deviceConfig.m_glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) glewGetProcAddress ("glGetObjectPtrLabel");
    s_deviceConfig.m_glGetPointerv = (PFNGLGETPOINTERVPROC) glewGetProcAddress ("glGetPointerv");
    s_deviceConfig.m_glEnablei = (PFNGLENABLEIPROC) glewGetProcAddress ("glEnablei");
    s_deviceConfig.m_glDisablei = (PFNGLDISABLEIPROC) glewGetProcAddress ("glDisablei");
    s_deviceConfig.m_glBlendEquationi = (PFNGLBLENDEQUATIONIPROC) glewGetProcAddress ("glBlendEquationi");
    s_deviceConfig.m_glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC) glewGetProcAddress ("glBlendEquationSeparatei");
    s_deviceConfig.m_glBlendFunci = (PFNGLBLENDFUNCIPROC) glewGetProcAddress ("glBlendFunci");
    s_deviceConfig.m_glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC) glewGetProcAddress ("glBlendFuncSeparatei");
    s_deviceConfig.m_glColorMaski = (PFNGLCOLORMASKIPROC) glewGetProcAddress ("glColorMaski");
    s_deviceConfig.m_glIsEnabledi = (PFNGLISENABLEDIPROC) glewGetProcAddress ("glIsEnabledi");
    s_deviceConfig.m_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsBaseVertex");
    s_deviceConfig.m_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawRangeElementsBaseVertex");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertex");
    s_deviceConfig.m_glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) glewGetProcAddress ("glFramebufferTexture");
    s_deviceConfig.m_glPrimitiveBoundingBox = (PFNGLPRIMITIVEBOUNDINGBOXPROC) glewGetProcAddress ("glPrimitiveBoundingBox");
    s_deviceConfig.m_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) glewGetProcAddress ("glGetGraphicsResetStatus");
    s_deviceConfig.m_glReadnPixels = (PFNGLREADNPIXELSPROC) glewGetProcAddress ("glReadnPixels");
    s_deviceConfig.m_glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) glewGetProcAddress ("glGetnUniformfv");
    s_deviceConfig.m_glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) glewGetProcAddress ("glGetnUniformiv");
    s_deviceConfig.m_glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) glewGetProcAddress ("glGetnUniformuiv");
    s_deviceConfig.m_glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC) glewGetProcAddress ("glMinSampleShading");
    s_deviceConfig.m_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) glewGetProcAddress ("glPatchParameteri");
    s_deviceConfig.m_glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) glewGetProcAddress ("glTexParameterIiv");
    s_deviceConfig.m_glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) glewGetProcAddress ("glTexParameterIuiv");
    s_deviceConfig.m_glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) glewGetProcAddress ("glGetTexParameterIiv");
    s_deviceConfig.m_glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) glewGetProcAddress ("glGetTexParameterIuiv");
    s_deviceConfig.m_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glSamplerParameterIiv");
    s_deviceConfig.m_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glSamplerParameterIuiv");
    s_deviceConfig.m_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glGetSamplerParameterIiv");
    s_deviceConfig.m_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glGetSamplerParameterIuiv");
    s_deviceConfig.m_glTexBuffer = (PFNGLTEXBUFFERPROC) glewGetProcAddress ("glTexBuffer");
    s_deviceConfig.m_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) glewGetProcAddress ("glTexBufferRange");
    s_deviceConfig.m_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage3DMultisample");
  }

  // GL_AMD_framebuffer_multisample_advanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_multisample_advanced])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleAdvancedAMD = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleAdvancedAMD");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisampleAdvancedAMD");
  }

  // GL_AMD_performance_monitor
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor])
  {
    s_deviceConfig.m_glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC) glewGetProcAddress ("glGetPerfMonitorGroupsAMD");
    s_deviceConfig.m_glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) glewGetProcAddress ("glGetPerfMonitorCountersAMD");
    s_deviceConfig.m_glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) glewGetProcAddress ("glGetPerfMonitorGroupStringAMD");
    s_deviceConfig.m_glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) glewGetProcAddress ("glGetPerfMonitorCounterStringAMD");
    s_deviceConfig.m_glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) glewGetProcAddress ("glGetPerfMonitorCounterInfoAMD");
    s_deviceConfig.m_glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC) glewGetProcAddress ("glGenPerfMonitorsAMD");
    s_deviceConfig.m_glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC) glewGetProcAddress ("glDeletePerfMonitorsAMD");
    s_deviceConfig.m_glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) glewGetProcAddress ("glSelectPerfMonitorCountersAMD");
    s_deviceConfig.m_glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC) glewGetProcAddress ("glBeginPerfMonitorAMD");
    s_deviceConfig.m_glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC) glewGetProcAddress ("glEndPerfMonitorAMD");
    s_deviceConfig.m_glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) glewGetProcAddress ("glGetPerfMonitorCounterDataAMD");
  }

  // GL_ANGLE_framebuffer_blit
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_framebuffer_blit])
  {
    s_deviceConfig.m_glBlitFramebufferANGLE = (PFNGLBLITFRAMEBUFFERANGLEPROC) glewGetProcAddress ("glBlitFramebufferANGLE");
  }

  // GL_ANGLE_framebuffer_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_framebuffer_multisample])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleANGLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleANGLE");
  }

  // GL_ANGLE_instanced_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_instanced_arrays])
  {
    s_deviceConfig.m_glDrawArraysInstancedANGLE = (PFNGLDRAWARRAYSINSTANCEDANGLEPROC) glewGetProcAddress ("glDrawArraysInstancedANGLE");
    s_deviceConfig.m_glDrawElementsInstancedANGLE = (PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) glewGetProcAddress ("glDrawElementsInstancedANGLE");
    s_deviceConfig.m_glVertexAttribDivisorANGLE = (PFNGLVERTEXATTRIBDIVISORANGLEPROC) glewGetProcAddress ("glVertexAttribDivisorANGLE");
  }

  // GL_ANGLE_translated_shader_source
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ANGLE_translated_shader_source])
  {
    s_deviceConfig.m_glGetTranslatedShaderSourceANGLE = (PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) glewGetProcAddress ("glGetTranslatedShaderSourceANGLE");
  }

  // GL_APPLE_copy_texture_levels
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_copy_texture_levels])
  {
    s_deviceConfig.m_glCopyTextureLevelsAPPLE = (PFNGLCOPYTEXTURELEVELSAPPLEPROC) glewGetProcAddress ("glCopyTextureLevelsAPPLE");
  }

  // GL_APPLE_framebuffer_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_framebuffer_multisample])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleAPPLE = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleAPPLE");
    s_deviceConfig.m_glResolveMultisampleFramebufferAPPLE = (PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) glewGetProcAddress ("glResolveMultisampleFramebufferAPPLE");
  }

  // GL_APPLE_sync
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_sync])
  {
    s_deviceConfig.m_glFenceSyncAPPLE = (PFNGLFENCESYNCAPPLEPROC) glewGetProcAddress ("glFenceSyncAPPLE");
    s_deviceConfig.m_glIsSyncAPPLE = (PFNGLISSYNCAPPLEPROC) glewGetProcAddress ("glIsSyncAPPLE");
    s_deviceConfig.m_glDeleteSyncAPPLE = (PFNGLDELETESYNCAPPLEPROC) glewGetProcAddress ("glDeleteSyncAPPLE");
    s_deviceConfig.m_glClientWaitSyncAPPLE = (PFNGLCLIENTWAITSYNCAPPLEPROC) glewGetProcAddress ("glClientWaitSyncAPPLE");
    s_deviceConfig.m_glWaitSyncAPPLE = (PFNGLWAITSYNCAPPLEPROC) glewGetProcAddress ("glWaitSyncAPPLE");
    s_deviceConfig.m_glGetInteger64vAPPLE = (PFNGLGETINTEGER64VAPPLEPROC) glewGetProcAddress ("glGetInteger64vAPPLE");
    s_deviceConfig.m_glGetSyncivAPPLE = (PFNGLGETSYNCIVAPPLEPROC) glewGetProcAddress ("glGetSyncivAPPLE");
  }

  // GL_ARM_shader_core_properties
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARM_shader_core_properties])
  {
    s_deviceConfig.m_glMaxActiveShaderCoresARM = (PFNGLMAXACTIVESHADERCORESARMPROC) glewGetProcAddress ("glMaxActiveShaderCoresARM");
  }

  // GL_EXT_EGL_image_storage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage])
  {
    s_deviceConfig.m_glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) glewGetProcAddress ("glEGLImageTargetTexStorageEXT");
    s_deviceConfig.m_glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) glewGetProcAddress ("glEGLImageTargetTextureStorageEXT");
  }

  // GL_EXT_base_instance
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_base_instance])
  {
    s_deviceConfig.m_glDrawArraysInstancedBaseInstanceEXT = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) glewGetProcAddress ("glDrawArraysInstancedBaseInstanceEXT");
    s_deviceConfig.m_glDrawElementsInstancedBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) glewGetProcAddress ("glDrawElementsInstancedBaseInstanceEXT");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertexBaseInstanceEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertexBaseInstanceEXT");
  }

  // GL_EXT_blend_func_extended
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_func_extended])
  {
    s_deviceConfig.m_glBindFragDataLocationIndexedEXT = (PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) glewGetProcAddress ("glBindFragDataLocationIndexedEXT");
    s_deviceConfig.m_glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC) glewGetProcAddress ("glBindFragDataLocationEXT");
    s_deviceConfig.m_glGetProgramResourceLocationIndexEXT = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) glewGetProcAddress ("glGetProgramResourceLocationIndexEXT");
    s_deviceConfig.m_glGetFragDataIndexEXT = (PFNGLGETFRAGDATAINDEXEXTPROC) glewGetProcAddress ("glGetFragDataIndexEXT");
  }

  // GL_EXT_buffer_storage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_buffer_storage])
  {
    s_deviceConfig.m_glBufferStorageEXT = (PFNGLBUFFERSTORAGEEXTPROC) glewGetProcAddress ("glBufferStorageEXT");
  }

  // GL_EXT_clear_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_clear_texture])
  {
    s_deviceConfig.m_glClearTexImageEXT = (PFNGLCLEARTEXIMAGEEXTPROC) glewGetProcAddress ("glClearTexImageEXT");
    s_deviceConfig.m_glClearTexSubImageEXT = (PFNGLCLEARTEXSUBIMAGEEXTPROC) glewGetProcAddress ("glClearTexSubImageEXT");
  }

  // GL_EXT_clip_control
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_clip_control])
  {
    s_deviceConfig.m_glClipControlEXT = (PFNGLCLIPCONTROLEXTPROC) glewGetProcAddress ("glClipControlEXT");
  }

  // GL_EXT_copy_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_copy_image])
  {
    s_deviceConfig.m_glCopyImageSubDataEXT = (PFNGLCOPYIMAGESUBDATAEXTPROC) glewGetProcAddress ("glCopyImageSubDataEXT");
  }

  // GL_EXT_debug_label
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_debug_label])
  {
    s_deviceConfig.m_glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC) glewGetProcAddress ("glLabelObjectEXT");
    s_deviceConfig.m_glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC) glewGetProcAddress ("glGetObjectLabelEXT");
  }

  // GL_EXT_debug_marker
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_debug_marker])
  {
    s_deviceConfig.m_glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC) glewGetProcAddress ("glInsertEventMarkerEXT");
    s_deviceConfig.m_glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC) glewGetProcAddress ("glPushGroupMarkerEXT");
    s_deviceConfig.m_glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC) glewGetProcAddress ("glPopGroupMarkerEXT");
  }

  // GL_EXT_discard_framebuffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_discard_framebuffer])
  {
    s_deviceConfig.m_glDiscardFramebufferEXT = (PFNGLDISCARDFRAMEBUFFEREXTPROC) glewGetProcAddress ("glDiscardFramebufferEXT");
  }

  // GL_EXT_disjoint_timer_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_disjoint_timer_query])
  {
    s_deviceConfig.m_glGenQueriesEXT = (PFNGLGENQUERIESEXTPROC) glewGetProcAddress ("glGenQueriesEXT");
    s_deviceConfig.m_glDeleteQueriesEXT = (PFNGLDELETEQUERIESEXTPROC) glewGetProcAddress ("glDeleteQueriesEXT");
    s_deviceConfig.m_glIsQueryEXT = (PFNGLISQUERYEXTPROC) glewGetProcAddress ("glIsQueryEXT");
    s_deviceConfig.m_glBeginQueryEXT = (PFNGLBEGINQUERYEXTPROC) glewGetProcAddress ("glBeginQueryEXT");
    s_deviceConfig.m_glEndQueryEXT = (PFNGLENDQUERYEXTPROC) glewGetProcAddress ("glEndQueryEXT");
    s_deviceConfig.m_glQueryCounterEXT = (PFNGLQUERYCOUNTEREXTPROC) glewGetProcAddress ("glQueryCounterEXT");
    s_deviceConfig.m_glGetQueryivEXT = (PFNGLGETQUERYIVEXTPROC) glewGetProcAddress ("glGetQueryivEXT");
    s_deviceConfig.m_glGetQueryObjectivEXT = (PFNGLGETQUERYOBJECTIVEXTPROC) glewGetProcAddress ("glGetQueryObjectivEXT");
    s_deviceConfig.m_glGetQueryObjectuivEXT = (PFNGLGETQUERYOBJECTUIVEXTPROC) glewGetProcAddress ("glGetQueryObjectuivEXT");
    s_deviceConfig.m_glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC) glewGetProcAddress ("glGetQueryObjecti64vEXT");
    s_deviceConfig.m_glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC) glewGetProcAddress ("glGetQueryObjectui64vEXT");
    s_deviceConfig.m_glGetInteger64vEXT = (PFNGLGETINTEGER64VEXTPROC) glewGetProcAddress ("glGetInteger64vEXT");
  }

  // GL_EXT_draw_buffers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers])
  {
    s_deviceConfig.m_glDrawBuffersEXT = (PFNGLDRAWBUFFERSEXTPROC) glewGetProcAddress ("glDrawBuffersEXT");
  }

  // GL_EXT_draw_buffers_indexed
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers_indexed])
  {
    s_deviceConfig.m_glEnableiEXT = (PFNGLENABLEIEXTPROC) glewGetProcAddress ("glEnableiEXT");
    s_deviceConfig.m_glDisableiEXT = (PFNGLDISABLEIEXTPROC) glewGetProcAddress ("glDisableiEXT");
    s_deviceConfig.m_glBlendEquationiEXT = (PFNGLBLENDEQUATIONIEXTPROC) glewGetProcAddress ("glBlendEquationiEXT");
    s_deviceConfig.m_glBlendEquationSeparateiEXT = (PFNGLBLENDEQUATIONSEPARATEIEXTPROC) glewGetProcAddress ("glBlendEquationSeparateiEXT");
    s_deviceConfig.m_glBlendFunciEXT = (PFNGLBLENDFUNCIEXTPROC) glewGetProcAddress ("glBlendFunciEXT");
    s_deviceConfig.m_glBlendFuncSeparateiEXT = (PFNGLBLENDFUNCSEPARATEIEXTPROC) glewGetProcAddress ("glBlendFuncSeparateiEXT");
    s_deviceConfig.m_glColorMaskiEXT = (PFNGLCOLORMASKIEXTPROC) glewGetProcAddress ("glColorMaskiEXT");
    s_deviceConfig.m_glIsEnablediEXT = (PFNGLISENABLEDIEXTPROC) glewGetProcAddress ("glIsEnablediEXT");
  }

  // GL_EXT_draw_elements_base_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_elements_base_vertex])
  {
    s_deviceConfig.m_glDrawElementsBaseVertexEXT = (PFNGLDRAWELEMENTSBASEVERTEXEXTPROC) glewGetProcAddress ("glDrawElementsBaseVertexEXT");
    s_deviceConfig.m_glDrawRangeElementsBaseVertexEXT = (PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) glewGetProcAddress ("glDrawRangeElementsBaseVertexEXT");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertexEXT = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertexEXT");
    s_deviceConfig.m_glMultiDrawElementsBaseVertexEXT = (PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) glewGetProcAddress ("glMultiDrawElementsBaseVertexEXT");
  }

  // GL_EXT_draw_instanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced])
  {
    s_deviceConfig.m_glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) glewGetProcAddress ("glDrawArraysInstancedEXT");
    s_deviceConfig.m_glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) glewGetProcAddress ("glDrawElementsInstancedEXT");
  }

  // GL_EXT_draw_transform_feedback
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_transform_feedback])
  {
    s_deviceConfig.m_glDrawTransformFeedbackEXT = (PFNGLDRAWTRANSFORMFEEDBACKEXTPROC) glewGetProcAddress ("glDrawTransformFeedbackEXT");
    s_deviceConfig.m_glDrawTransformFeedbackInstancedEXT = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC) glewGetProcAddress ("glDrawTransformFeedbackInstancedEXT");
  }

  // GL_EXT_external_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_external_buffer])
  {
    s_deviceConfig.m_glBufferStorageExternalEXT = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC) glewGetProcAddress ("glBufferStorageExternalEXT");
    s_deviceConfig.m_glNamedBufferStorageExternalEXT = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) glewGetProcAddress ("glNamedBufferStorageExternalEXT");
  }

  // GL_EXT_fragment_shading_rate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate])
  {
    s_deviceConfig.m_glGetFragmentShadingRatesEXT = (PFNGLGETFRAGMENTSHADINGRATESEXTPROC) glewGetProcAddress ("glGetFragmentShadingRatesEXT");
    s_deviceConfig.m_glShadingRateEXT = (PFNGLSHADINGRATEEXTPROC) glewGetProcAddress ("glShadingRateEXT");
    s_deviceConfig.m_glShadingRateCombinerOpsEXT = (PFNGLSHADINGRATECOMBINEROPSEXTPROC) glewGetProcAddress ("glShadingRateCombinerOpsEXT");
    s_deviceConfig.m_glFramebufferShadingRateEXT = (PFNGLFRAMEBUFFERSHADINGRATEEXTPROC) glewGetProcAddress ("glFramebufferShadingRateEXT");
  }

  // GL_EXT_framebuffer_blit_layers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit_layers])
  {
    s_deviceConfig.m_glBlitFramebufferLayersEXT = (PFNGLBLITFRAMEBUFFERLAYERSEXTPROC) glewGetProcAddress ("glBlitFramebufferLayersEXT");
    s_deviceConfig.m_glBlitFramebufferLayerEXT = (PFNGLBLITFRAMEBUFFERLAYEREXTPROC) glewGetProcAddress ("glBlitFramebufferLayerEXT");
  }

  // GL_EXT_geometry_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_geometry_shader])
  {
    s_deviceConfig.m_glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC) glewGetProcAddress ("glFramebufferTextureEXT");
  }

  // GL_EXT_instanced_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_instanced_arrays])
  {
    s_deviceConfig.m_glVertexAttribDivisorEXT = (PFNGLVERTEXATTRIBDIVISOREXTPROC) glewGetProcAddress ("glVertexAttribDivisorEXT");
  }

  // GL_EXT_map_buffer_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_map_buffer_range])
  {
    s_deviceConfig.m_glMapBufferRangeEXT = (PFNGLMAPBUFFERRANGEEXTPROC) glewGetProcAddress ("glMapBufferRangeEXT");
    s_deviceConfig.m_glFlushMappedBufferRangeEXT = (PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) glewGetProcAddress ("glFlushMappedBufferRangeEXT");
  }

  // GL_EXT_memory_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object])
  {
    s_deviceConfig.m_glGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) glewGetProcAddress ("glGetUnsignedBytevEXT");
    s_deviceConfig.m_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) glewGetProcAddress ("glGetUnsignedBytei_vEXT");
    s_deviceConfig.m_glDeleteMemoryObjectsEXT = (PFNGLDELETEMEMORYOBJECTSEXTPROC) glewGetProcAddress ("glDeleteMemoryObjectsEXT");
    s_deviceConfig.m_glIsMemoryObjectEXT = (PFNGLISMEMORYOBJECTEXTPROC) glewGetProcAddress ("glIsMemoryObjectEXT");
    s_deviceConfig.m_glCreateMemoryObjectsEXT = (PFNGLCREATEMEMORYOBJECTSEXTPROC) glewGetProcAddress ("glCreateMemoryObjectsEXT");
    s_deviceConfig.m_glMemoryObjectParameterivEXT = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC) glewGetProcAddress ("glMemoryObjectParameterivEXT");
    s_deviceConfig.m_glGetMemoryObjectParameterivEXT = (PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC) glewGetProcAddress ("glGetMemoryObjectParameterivEXT");
    s_deviceConfig.m_glTexStorageMem2DEXT = (PFNGLTEXSTORAGEMEM2DEXTPROC) glewGetProcAddress ("glTexStorageMem2DEXT");
    s_deviceConfig.m_glTexStorageMem2DMultisampleEXT = (PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC) glewGetProcAddress ("glTexStorageMem2DMultisampleEXT");
    s_deviceConfig.m_glTexStorageMem3DEXT = (PFNGLTEXSTORAGEMEM3DEXTPROC) glewGetProcAddress ("glTexStorageMem3DEXT");
    s_deviceConfig.m_glTexStorageMem3DMultisampleEXT = (PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC) glewGetProcAddress ("glTexStorageMem3DMultisampleEXT");
    s_deviceConfig.m_glBufferStorageMemEXT = (PFNGLBUFFERSTORAGEMEMEXTPROC) glewGetProcAddress ("glBufferStorageMemEXT");
    s_deviceConfig.m_glTextureStorageMem2DEXT = (PFNGLTEXTURESTORAGEMEM2DEXTPROC) glewGetProcAddress ("glTextureStorageMem2DEXT");
    s_deviceConfig.m_glTextureStorageMem2DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC) glewGetProcAddress ("glTextureStorageMem2DMultisampleEXT");
    s_deviceConfig.m_glTextureStorageMem3DEXT = (PFNGLTEXTURESTORAGEMEM3DEXTPROC) glewGetProcAddress ("glTextureStorageMem3DEXT");
    s_deviceConfig.m_glTextureStorageMem3DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC) glewGetProcAddress ("glTextureStorageMem3DMultisampleEXT");
    s_deviceConfig.m_glNamedBufferStorageMemEXT = (PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC) glewGetProcAddress ("glNamedBufferStorageMemEXT");
  }

  // GL_EXT_memory_object_fd
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object_fd])
  {
    s_deviceConfig.m_glImportMemoryFdEXT = (PFNGLIMPORTMEMORYFDEXTPROC) glewGetProcAddress ("glImportMemoryFdEXT");
  }

  // GL_EXT_memory_object_win32
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object_win32])
  {
    s_deviceConfig.m_glImportMemoryWin32HandleEXT = (PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC) glewGetProcAddress ("glImportMemoryWin32HandleEXT");
    s_deviceConfig.m_glImportMemoryWin32NameEXT = (PFNGLIMPORTMEMORYWIN32NAMEEXTPROC) glewGetProcAddress ("glImportMemoryWin32NameEXT");
  }

  // GL_EXT_mesh_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader])
  {
    s_deviceConfig.m_glDrawMeshTasksEXT = (PFNGLDRAWMESHTASKSEXTPROC) glewGetProcAddress ("glDrawMeshTasksEXT");
    s_deviceConfig.m_glDrawMeshTasksIndirectEXT = (PFNGLDRAWMESHTASKSINDIRECTEXTPROC) glewGetProcAddress ("glDrawMeshTasksIndirectEXT");
    s_deviceConfig.m_glMultiDrawMeshTasksIndirectEXT = (PFNGLMULTIDRAWMESHTASKSINDIRECTEXTPROC) glewGetProcAddress ("glMultiDrawMeshTasksIndirectEXT");
    s_deviceConfig.m_glMultiDrawMeshTasksIndirectCountEXT = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTEXTPROC) glewGetProcAddress ("glMultiDrawMeshTasksIndirectCountEXT");
  }

  // GL_EXT_multi_draw_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_arrays])
  {
    s_deviceConfig.m_glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC) glewGetProcAddress ("glMultiDrawArraysEXT");
    s_deviceConfig.m_glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC) glewGetProcAddress ("glMultiDrawElementsEXT");
  }

  // GL_EXT_multi_draw_indirect
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_indirect])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirectEXT = (PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC) glewGetProcAddress ("glMultiDrawArraysIndirectEXT");
    s_deviceConfig.m_glMultiDrawElementsIndirectEXT = (PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC) glewGetProcAddress ("glMultiDrawElementsIndirectEXT");
  }

  // GL_EXT_multisampled_render_to_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multisampled_render_to_texture])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleEXT");
    s_deviceConfig.m_glFramebufferTexture2DMultisampleEXT = (PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) glewGetProcAddress ("glFramebufferTexture2DMultisampleEXT");
  }

  // GL_EXT_multiview_draw_buffers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_draw_buffers])
  {
    s_deviceConfig.m_glReadBufferIndexedEXT = (PFNGLREADBUFFERINDEXEDEXTPROC) glewGetProcAddress ("glReadBufferIndexedEXT");
    s_deviceConfig.m_glDrawBuffersIndexedEXT = (PFNGLDRAWBUFFERSINDEXEDEXTPROC) glewGetProcAddress ("glDrawBuffersIndexedEXT");
    s_deviceConfig.m_glGetIntegeri_vEXT = (PFNGLGETINTEGERI_VEXTPROC) glewGetProcAddress ("glGetIntegeri_vEXT");
  }

  // GL_EXT_polygon_offset_clamp
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset_clamp])
  {
    s_deviceConfig.m_glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) glewGetProcAddress ("glPolygonOffsetClampEXT");
  }

  // GL_EXT_primitive_bounding_box
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_primitive_bounding_box])
  {
    s_deviceConfig.m_glPrimitiveBoundingBoxEXT = (PFNGLPRIMITIVEBOUNDINGBOXEXTPROC) glewGetProcAddress ("glPrimitiveBoundingBoxEXT");
  }

  // GL_EXT_raster_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_raster_multisample])
  {
    s_deviceConfig.m_glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) glewGetProcAddress ("glRasterSamplesEXT");
  }

  // GL_EXT_robustness
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_robustness])
  {
    s_deviceConfig.m_glGetGraphicsResetStatusEXT = (PFNGLGETGRAPHICSRESETSTATUSEXTPROC) glewGetProcAddress ("glGetGraphicsResetStatusEXT");
    s_deviceConfig.m_glReadnPixelsEXT = (PFNGLREADNPIXELSEXTPROC) glewGetProcAddress ("glReadnPixelsEXT");
    s_deviceConfig.m_glGetnUniformfvEXT = (PFNGLGETNUNIFORMFVEXTPROC) glewGetProcAddress ("glGetnUniformfvEXT");
    s_deviceConfig.m_glGetnUniformivEXT = (PFNGLGETNUNIFORMIVEXTPROC) glewGetProcAddress ("glGetnUniformivEXT");
  }

  // GL_EXT_semaphore
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore])
  {
    s_deviceConfig.m_glGenSemaphoresEXT = (PFNGLGENSEMAPHORESEXTPROC) glewGetProcAddress ("glGenSemaphoresEXT");
    s_deviceConfig.m_glDeleteSemaphoresEXT = (PFNGLDELETESEMAPHORESEXTPROC) glewGetProcAddress ("glDeleteSemaphoresEXT");
    s_deviceConfig.m_glIsSemaphoreEXT = (PFNGLISSEMAPHOREEXTPROC) glewGetProcAddress ("glIsSemaphoreEXT");
    s_deviceConfig.m_glSemaphoreParameterui64vEXT = (PFNGLSEMAPHOREPARAMETERUI64VEXTPROC) glewGetProcAddress ("glSemaphoreParameterui64vEXT");
    s_deviceConfig.m_glGetSemaphoreParameterui64vEXT = (PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC) glewGetProcAddress ("glGetSemaphoreParameterui64vEXT");
    s_deviceConfig.m_glWaitSemaphoreEXT = (PFNGLWAITSEMAPHOREEXTPROC) glewGetProcAddress ("glWaitSemaphoreEXT");
    s_deviceConfig.m_glSignalSemaphoreEXT = (PFNGLSIGNALSEMAPHOREEXTPROC) glewGetProcAddress ("glSignalSemaphoreEXT");
  }

  // GL_EXT_semaphore_fd
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore_fd])
  {
    s_deviceConfig.m_glImportSemaphoreFdEXT = (PFNGLIMPORTSEMAPHOREFDEXTPROC) glewGetProcAddress ("glImportSemaphoreFdEXT");
  }

  // GL_EXT_semaphore_win32
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore_win32])
  {
    s_deviceConfig.m_glImportSemaphoreWin32HandleEXT = (PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC) glewGetProcAddress ("glImportSemaphoreWin32HandleEXT");
    s_deviceConfig.m_glImportSemaphoreWin32NameEXT = (PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC) glewGetProcAddress ("glImportSemaphoreWin32NameEXT");
  }

  // GL_EXT_separate_shader_objects
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects])
  {
    s_deviceConfig.m_glActiveShaderProgramEXT = (PFNGLACTIVESHADERPROGRAMEXTPROC) glewGetProcAddress ("glActiveShaderProgramEXT");
    s_deviceConfig.m_glBindProgramPipelineEXT = (PFNGLBINDPROGRAMPIPELINEEXTPROC) glewGetProcAddress ("glBindProgramPipelineEXT");
    s_deviceConfig.m_glCreateShaderProgramvEXT = (PFNGLCREATESHADERPROGRAMVEXTPROC) glewGetProcAddress ("glCreateShaderProgramvEXT");
    s_deviceConfig.m_glDeleteProgramPipelinesEXT = (PFNGLDELETEPROGRAMPIPELINESEXTPROC) glewGetProcAddress ("glDeleteProgramPipelinesEXT");
    s_deviceConfig.m_glGenProgramPipelinesEXT = (PFNGLGENPROGRAMPIPELINESEXTPROC) glewGetProcAddress ("glGenProgramPipelinesEXT");
    s_deviceConfig.m_glGetProgramPipelineInfoLogEXT = (PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC) glewGetProcAddress ("glGetProgramPipelineInfoLogEXT");
    s_deviceConfig.m_glGetProgramPipelineivEXT = (PFNGLGETPROGRAMPIPELINEIVEXTPROC) glewGetProcAddress ("glGetProgramPipelineivEXT");
    s_deviceConfig.m_glIsProgramPipelineEXT = (PFNGLISPROGRAMPIPELINEEXTPROC) glewGetProcAddress ("glIsProgramPipelineEXT");
    s_deviceConfig.m_glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC) glewGetProcAddress ("glProgramParameteriEXT");
    s_deviceConfig.m_glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) glewGetProcAddress ("glProgramUniform1fEXT");
    s_deviceConfig.m_glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) glewGetProcAddress ("glProgramUniform1fvEXT");
    s_deviceConfig.m_glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) glewGetProcAddress ("glProgramUniform1iEXT");
    s_deviceConfig.m_glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) glewGetProcAddress ("glProgramUniform1ivEXT");
    s_deviceConfig.m_glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) glewGetProcAddress ("glProgramUniform2fEXT");
    s_deviceConfig.m_glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) glewGetProcAddress ("glProgramUniform2fvEXT");
    s_deviceConfig.m_glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) glewGetProcAddress ("glProgramUniform2iEXT");
    s_deviceConfig.m_glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) glewGetProcAddress ("glProgramUniform2ivEXT");
    s_deviceConfig.m_glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) glewGetProcAddress ("glProgramUniform3fEXT");
    s_deviceConfig.m_glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) glewGetProcAddress ("glProgramUniform3fvEXT");
    s_deviceConfig.m_glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) glewGetProcAddress ("glProgramUniform3iEXT");
    s_deviceConfig.m_glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) glewGetProcAddress ("glProgramUniform3ivEXT");
    s_deviceConfig.m_glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) glewGetProcAddress ("glProgramUniform4fEXT");
    s_deviceConfig.m_glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) glewGetProcAddress ("glProgramUniform4fvEXT");
    s_deviceConfig.m_glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) glewGetProcAddress ("glProgramUniform4iEXT");
    s_deviceConfig.m_glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) glewGetProcAddress ("glProgramUniform4ivEXT");
    s_deviceConfig.m_glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4fvEXT");
    s_deviceConfig.m_glUseProgramStagesEXT = (PFNGLUSEPROGRAMSTAGESEXTPROC) glewGetProcAddress ("glUseProgramStagesEXT");
    s_deviceConfig.m_glValidateProgramPipelineEXT = (PFNGLVALIDATEPROGRAMPIPELINEEXTPROC) glewGetProcAddress ("glValidateProgramPipelineEXT");
    s_deviceConfig.m_glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) glewGetProcAddress ("glProgramUniform1uiEXT");
    s_deviceConfig.m_glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) glewGetProcAddress ("glProgramUniform2uiEXT");
    s_deviceConfig.m_glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) glewGetProcAddress ("glProgramUniform3uiEXT");
    s_deviceConfig.m_glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) glewGetProcAddress ("glProgramUniform4uiEXT");
    s_deviceConfig.m_glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) glewGetProcAddress ("glProgramUniform1uivEXT");
    s_deviceConfig.m_glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) glewGetProcAddress ("glProgramUniform2uivEXT");
    s_deviceConfig.m_glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) glewGetProcAddress ("glProgramUniform3uivEXT");
    s_deviceConfig.m_glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) glewGetProcAddress ("glProgramUniform4uivEXT");
    s_deviceConfig.m_glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2x3fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3x2fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2x4fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4x2fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3x4fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4x3fvEXT");
  }

  // GL_EXT_shader_framebuffer_fetch_non_coherent
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch_non_coherent])
  {
    s_deviceConfig.m_glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) glewGetProcAddress ("glFramebufferFetchBarrierEXT");
  }

  // GL_EXT_shader_pixel_local_storage2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_pixel_local_storage2])
  {
    s_deviceConfig.m_glFramebufferPixelLocalStorageSizeEXT = (PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) glewGetProcAddress ("glFramebufferPixelLocalStorageSizeEXT");
    s_deviceConfig.m_glGetFramebufferPixelLocalStorageSizeEXT = (PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) glewGetProcAddress ("glGetFramebufferPixelLocalStorageSizeEXT");
    s_deviceConfig.m_glClearPixelLocalStorageuiEXT = (PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC) glewGetProcAddress ("glClearPixelLocalStorageuiEXT");
  }

  // GL_EXT_sparse_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_sparse_texture])
  {
    s_deviceConfig.m_glTexPageCommitmentEXT = (PFNGLTEXPAGECOMMITMENTEXTPROC) glewGetProcAddress ("glTexPageCommitmentEXT");
  }

  // GL_EXT_tessellation_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_tessellation_shader])
  {
    s_deviceConfig.m_glPatchParameteriEXT = (PFNGLPATCHPARAMETERIEXTPROC) glewGetProcAddress ("glPatchParameteriEXT");
  }

  // GL_EXT_texture_border_clamp
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_border_clamp])
  {
    s_deviceConfig.m_glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC) glewGetProcAddress ("glTexParameterIivEXT");
    s_deviceConfig.m_glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC) glewGetProcAddress ("glTexParameterIuivEXT");
    s_deviceConfig.m_glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC) glewGetProcAddress ("glGetTexParameterIivEXT");
    s_deviceConfig.m_glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC) glewGetProcAddress ("glGetTexParameterIuivEXT");
    s_deviceConfig.m_glSamplerParameterIivEXT = (PFNGLSAMPLERPARAMETERIIVEXTPROC) glewGetProcAddress ("glSamplerParameterIivEXT");
    s_deviceConfig.m_glSamplerParameterIuivEXT = (PFNGLSAMPLERPARAMETERIUIVEXTPROC) glewGetProcAddress ("glSamplerParameterIuivEXT");
    s_deviceConfig.m_glGetSamplerParameterIivEXT = (PFNGLGETSAMPLERPARAMETERIIVEXTPROC) glewGetProcAddress ("glGetSamplerParameterIivEXT");
    s_deviceConfig.m_glGetSamplerParameterIuivEXT = (PFNGLGETSAMPLERPARAMETERIUIVEXTPROC) glewGetProcAddress ("glGetSamplerParameterIuivEXT");
  }

  // GL_EXT_texture_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer])
  {
    s_deviceConfig.m_glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC) glewGetProcAddress ("glTexBufferEXT");
    s_deviceConfig.m_glTexBufferRangeEXT = (PFNGLTEXBUFFERRANGEEXTPROC) glewGetProcAddress ("glTexBufferRangeEXT");
  }

  // GL_EXT_texture_storage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_storage])
  {
    s_deviceConfig.m_glTexStorage1DEXT = (PFNGLTEXSTORAGE1DEXTPROC) glewGetProcAddress ("glTexStorage1DEXT");
    s_deviceConfig.m_glTexStorage2DEXT = (PFNGLTEXSTORAGE2DEXTPROC) glewGetProcAddress ("glTexStorage2DEXT");
    s_deviceConfig.m_glTexStorage3DEXT = (PFNGLTEXSTORAGE3DEXTPROC) glewGetProcAddress ("glTexStorage3DEXT");
    s_deviceConfig.m_glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) glewGetProcAddress ("glTextureStorage1DEXT");
    s_deviceConfig.m_glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) glewGetProcAddress ("glTextureStorage2DEXT");
    s_deviceConfig.m_glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) glewGetProcAddress ("glTextureStorage3DEXT");
  }

  // GL_EXT_texture_storage_compression
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_storage_compression])
  {
    s_deviceConfig.m_glTexStorageAttribs2DEXT = (PFNGLTEXSTORAGEATTRIBS2DEXTPROC) glewGetProcAddress ("glTexStorageAttribs2DEXT");
    s_deviceConfig.m_glTexStorageAttribs3DEXT = (PFNGLTEXSTORAGEATTRIBS3DEXTPROC) glewGetProcAddress ("glTexStorageAttribs3DEXT");
  }

  // GL_EXT_texture_view
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_view])
  {
    s_deviceConfig.m_glTextureViewEXT = (PFNGLTEXTUREVIEWEXTPROC) glewGetProcAddress ("glTextureViewEXT");
  }

  // GL_NV_timeline_semaphore
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore])
  {
    s_deviceConfig.m_glCreateSemaphoresNV = (PFNGLCREATESEMAPHORESNVPROC) glewGetProcAddress ("glCreateSemaphoresNV");
    s_deviceConfig.m_glSemaphoreParameterivNV = (PFNGLSEMAPHOREPARAMETERIVNVPROC) glewGetProcAddress ("glSemaphoreParameterivNV");
    s_deviceConfig.m_glGetSemaphoreParameterivNV = (PFNGLGETSEMAPHOREPARAMETERIVNVPROC) glewGetProcAddress ("glGetSemaphoreParameterivNV");
  }

  // GL_EXT_win32_keyed_mutex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_win32_keyed_mutex])
  {
    s_deviceConfig.m_glAcquireKeyedMutexWin32EXT = (PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC) glewGetProcAddress ("glAcquireKeyedMutexWin32EXT");
    s_deviceConfig.m_glReleaseKeyedMutexWin32EXT = (PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC) glewGetProcAddress ("glReleaseKeyedMutexWin32EXT");
  }

  // GL_EXT_window_rectangles
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_window_rectangles])
  {
    s_deviceConfig.m_glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC) glewGetProcAddress ("glWindowRectanglesEXT");
  }

  // GL_IMG_bindless_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_IMG_bindless_texture])
  {
    s_deviceConfig.m_glGetTextureHandleIMG = (PFNGLGETTEXTUREHANDLEIMGPROC) glewGetProcAddress ("glGetTextureHandleIMG");
    s_deviceConfig.m_glGetTextureSamplerHandleIMG = (PFNGLGETTEXTURESAMPLERHANDLEIMGPROC) glewGetProcAddress ("glGetTextureSamplerHandleIMG");
    s_deviceConfig.m_glUniformHandleui64IMG = (PFNGLUNIFORMHANDLEUI64IMGPROC) glewGetProcAddress ("glUniformHandleui64IMG");
    s_deviceConfig.m_glUniformHandleui64vIMG = (PFNGLUNIFORMHANDLEUI64VIMGPROC) glewGetProcAddress ("glUniformHandleui64vIMG");
    s_deviceConfig.m_glProgramUniformHandleui64IMG = (PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC) glewGetProcAddress ("glProgramUniformHandleui64IMG");
    s_deviceConfig.m_glProgramUniformHandleui64vIMG = (PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC) glewGetProcAddress ("glProgramUniformHandleui64vIMG");
  }

  // GL_IMG_framebuffer_downsample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_IMG_framebuffer_downsample])
  {
    s_deviceConfig.m_glFramebufferTexture2DDownsampleIMG = (PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC) glewGetProcAddress ("glFramebufferTexture2DDownsampleIMG");
    s_deviceConfig.m_glFramebufferTextureLayerDownsampleIMG = (PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC) glewGetProcAddress ("glFramebufferTextureLayerDownsampleIMG");
  }

  // GL_IMG_multisampled_render_to_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_IMG_multisampled_render_to_texture])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleIMG = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleIMG");
    s_deviceConfig.m_glFramebufferTexture2DMultisampleIMG = (PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) glewGetProcAddress ("glFramebufferTexture2DMultisampleIMG");
  }

  // GL_INTEL_framebuffer_CMAA
  if (s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_framebuffer_CMAA])
  {
    s_deviceConfig.m_glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) glewGetProcAddress ("glApplyFramebufferAttachmentCMAAINTEL");
  }

  // GL_INTEL_performance_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_performance_query])
  {
    s_deviceConfig.m_glBeginPerfQueryINTEL = (PFNGLBEGINPERFQUERYINTELPROC) glewGetProcAddress ("glBeginPerfQueryINTEL");
    s_deviceConfig.m_glCreatePerfQueryINTEL = (PFNGLCREATEPERFQUERYINTELPROC) glewGetProcAddress ("glCreatePerfQueryINTEL");
    s_deviceConfig.m_glDeletePerfQueryINTEL = (PFNGLDELETEPERFQUERYINTELPROC) glewGetProcAddress ("glDeletePerfQueryINTEL");
    s_deviceConfig.m_glEndPerfQueryINTEL = (PFNGLENDPERFQUERYINTELPROC) glewGetProcAddress ("glEndPerfQueryINTEL");
    s_deviceConfig.m_glGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) glewGetProcAddress ("glGetFirstPerfQueryIdINTEL");
    s_deviceConfig.m_glGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC) glewGetProcAddress ("glGetNextPerfQueryIdINTEL");
    s_deviceConfig.m_glGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC) glewGetProcAddress ("glGetPerfCounterInfoINTEL");
    s_deviceConfig.m_glGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC) glewGetProcAddress ("glGetPerfQueryDataINTEL");
    s_deviceConfig.m_glGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) glewGetProcAddress ("glGetPerfQueryIdByNameINTEL");
    s_deviceConfig.m_glGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC) glewGetProcAddress ("glGetPerfQueryInfoINTEL");
  }

  // GL_KHR_blend_equation_advanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_KHR_blend_equation_advanced])
  {
    s_deviceConfig.m_glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC) glewGetProcAddress ("glBlendBarrierKHR");
  }

  // GL_KHR_debug
  if (s_deviceConfig.m_featureSupported [GLEW_GL_KHR_debug])
  {
    s_deviceConfig.m_glDebugMessageControlKHR = (PFNGLDEBUGMESSAGECONTROLKHRPROC) glewGetProcAddress ("glDebugMessageControlKHR");
    s_deviceConfig.m_glDebugMessageInsertKHR = (PFNGLDEBUGMESSAGEINSERTKHRPROC) glewGetProcAddress ("glDebugMessageInsertKHR");
    s_deviceConfig.m_glDebugMessageCallbackKHR = (PFNGLDEBUGMESSAGECALLBACKKHRPROC) glewGetProcAddress ("glDebugMessageCallbackKHR");
    s_deviceConfig.m_glGetDebugMessageLogKHR = (PFNGLGETDEBUGMESSAGELOGKHRPROC) glewGetProcAddress ("glGetDebugMessageLogKHR");
    s_deviceConfig.m_glPushDebugGroupKHR = (PFNGLPUSHDEBUGGROUPKHRPROC) glewGetProcAddress ("glPushDebugGroupKHR");
    s_deviceConfig.m_glPopDebugGroupKHR = (PFNGLPOPDEBUGGROUPKHRPROC) glewGetProcAddress ("glPopDebugGroupKHR");
    s_deviceConfig.m_glObjectLabelKHR = (PFNGLOBJECTLABELKHRPROC) glewGetProcAddress ("glObjectLabelKHR");
    s_deviceConfig.m_glGetObjectLabelKHR = (PFNGLGETOBJECTLABELKHRPROC) glewGetProcAddress ("glGetObjectLabelKHR");
    s_deviceConfig.m_glObjectPtrLabelKHR = (PFNGLOBJECTPTRLABELKHRPROC) glewGetProcAddress ("glObjectPtrLabelKHR");
    s_deviceConfig.m_glGetObjectPtrLabelKHR = (PFNGLGETOBJECTPTRLABELKHRPROC) glewGetProcAddress ("glGetObjectPtrLabelKHR");
    s_deviceConfig.m_glGetPointervKHR = (PFNGLGETPOINTERVKHRPROC) glewGetProcAddress ("glGetPointervKHR");
  }

  // GL_KHR_robustness
  if (s_deviceConfig.m_featureSupported [GLEW_GL_KHR_robustness])
  {
    s_deviceConfig.m_glGetGraphicsResetStatusKHR = (PFNGLGETGRAPHICSRESETSTATUSKHRPROC) glewGetProcAddress ("glGetGraphicsResetStatusKHR");
    s_deviceConfig.m_glReadnPixelsKHR = (PFNGLREADNPIXELSKHRPROC) glewGetProcAddress ("glReadnPixelsKHR");
    s_deviceConfig.m_glGetnUniformfvKHR = (PFNGLGETNUNIFORMFVKHRPROC) glewGetProcAddress ("glGetnUniformfvKHR");
    s_deviceConfig.m_glGetnUniformivKHR = (PFNGLGETNUNIFORMIVKHRPROC) glewGetProcAddress ("glGetnUniformivKHR");
    s_deviceConfig.m_glGetnUniformuivKHR = (PFNGLGETNUNIFORMUIVKHRPROC) glewGetProcAddress ("glGetnUniformuivKHR");
  }

  // GL_KHR_parallel_shader_compile
  if (s_deviceConfig.m_featureSupported [GLEW_GL_KHR_parallel_shader_compile])
  {
    s_deviceConfig.m_glMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) glewGetProcAddress ("glMaxShaderCompilerThreadsKHR");
  }

  // GL_MESA_framebuffer_flip_y
  if (s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_y])
  {
    s_deviceConfig.m_glFramebufferParameteriMESA = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) glewGetProcAddress ("glFramebufferParameteriMESA");
    s_deviceConfig.m_glGetFramebufferParameterivMESA = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) glewGetProcAddress ("glGetFramebufferParameterivMESA");
  }

  // GL_NV_bindless_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_texture])
  {
    s_deviceConfig.m_glGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC) glewGetProcAddress ("glGetTextureHandleNV");
    s_deviceConfig.m_glGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) glewGetProcAddress ("glGetTextureSamplerHandleNV");
    s_deviceConfig.m_glMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) glewGetProcAddress ("glMakeTextureHandleResidentNV");
    s_deviceConfig.m_glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) glewGetProcAddress ("glMakeTextureHandleNonResidentNV");
    s_deviceConfig.m_glGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC) glewGetProcAddress ("glGetImageHandleNV");
    s_deviceConfig.m_glMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) glewGetProcAddress ("glMakeImageHandleResidentNV");
    s_deviceConfig.m_glMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) glewGetProcAddress ("glMakeImageHandleNonResidentNV");
    s_deviceConfig.m_glUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC) glewGetProcAddress ("glUniformHandleui64NV");
    s_deviceConfig.m_glUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC) glewGetProcAddress ("glUniformHandleui64vNV");
    s_deviceConfig.m_glProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) glewGetProcAddress ("glProgramUniformHandleui64NV");
    s_deviceConfig.m_glProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) glewGetProcAddress ("glProgramUniformHandleui64vNV");
    s_deviceConfig.m_glIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) glewGetProcAddress ("glIsTextureHandleResidentNV");
    s_deviceConfig.m_glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC) glewGetProcAddress ("glIsImageHandleResidentNV");
  }

  // GL_NV_blend_equation_advanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced])
  {
    s_deviceConfig.m_glBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC) glewGetProcAddress ("glBlendParameteriNV");
    s_deviceConfig.m_glBlendBarrierNV = (PFNGLBLENDBARRIERNVPROC) glewGetProcAddress ("glBlendBarrierNV");
  }

  // GL_NV_clip_space_w_scaling
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_clip_space_w_scaling])
  {
    s_deviceConfig.m_glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) glewGetProcAddress ("glViewportPositionWScaleNV");
  }

  // GL_NV_conditional_render
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_conditional_render])
  {
    s_deviceConfig.m_glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC) glewGetProcAddress ("glBeginConditionalRenderNV");
    s_deviceConfig.m_glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC) glewGetProcAddress ("glEndConditionalRenderNV");
  }

  // GL_NV_conservative_raster
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster])
  {
    s_deviceConfig.m_glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC) glewGetProcAddress ("glSubpixelPrecisionBiasNV");
  }

  // GL_NV_conservative_raster_pre_snap_triangles
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap_triangles])
  {
    s_deviceConfig.m_glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) glewGetProcAddress ("glConservativeRasterParameteriNV");
  }

  // GL_NV_copy_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_copy_buffer])
  {
    s_deviceConfig.m_glCopyBufferSubDataNV = (PFNGLCOPYBUFFERSUBDATANVPROC) glewGetProcAddress ("glCopyBufferSubDataNV");
  }

  // GL_NV_coverage_sample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_coverage_sample])
  {
    s_deviceConfig.m_glCoverageMaskNV = (PFNGLCOVERAGEMASKNVPROC) glewGetProcAddress ("glCoverageMaskNV");
    s_deviceConfig.m_glCoverageOperationNV = (PFNGLCOVERAGEOPERATIONNVPROC) glewGetProcAddress ("glCoverageOperationNV");
  }

  // GL_NV_draw_buffers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_buffers])
  {
    s_deviceConfig.m_glDrawBuffersNV = (PFNGLDRAWBUFFERSNVPROC) glewGetProcAddress ("glDrawBuffersNV");
  }

  // GL_NV_draw_instanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_instanced])
  {
    s_deviceConfig.m_glDrawArraysInstancedNV = (PFNGLDRAWARRAYSINSTANCEDNVPROC) glewGetProcAddress ("glDrawArraysInstancedNV");
    s_deviceConfig.m_glDrawElementsInstancedNV = (PFNGLDRAWELEMENTSINSTANCEDNVPROC) glewGetProcAddress ("glDrawElementsInstancedNV");
  }

  // GL_NV_draw_vulkan_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image])
  {
    s_deviceConfig.m_glDrawVkImageNV = (PFNGLDRAWVKIMAGENVPROC) glewGetProcAddress ("glDrawVkImageNV");
    s_deviceConfig.m_glGetVkProcAddrNV = (PFNGLGETVKPROCADDRNVPROC) glewGetProcAddress ("glGetVkProcAddrNV");
    s_deviceConfig.m_glWaitVkSemaphoreNV = (PFNGLWAITVKSEMAPHORENVPROC) glewGetProcAddress ("glWaitVkSemaphoreNV");
    s_deviceConfig.m_glSignalVkSemaphoreNV = (PFNGLSIGNALVKSEMAPHORENVPROC) glewGetProcAddress ("glSignalVkSemaphoreNV");
    s_deviceConfig.m_glSignalVkFenceNV = (PFNGLSIGNALVKFENCENVPROC) glewGetProcAddress ("glSignalVkFenceNV");
  }

  // GL_NV_fence
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_fence])
  {
    s_deviceConfig.m_glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC) glewGetProcAddress ("glDeleteFencesNV");
    s_deviceConfig.m_glGenFencesNV = (PFNGLGENFENCESNVPROC) glewGetProcAddress ("glGenFencesNV");
    s_deviceConfig.m_glIsFenceNV = (PFNGLISFENCENVPROC) glewGetProcAddress ("glIsFenceNV");
    s_deviceConfig.m_glTestFenceNV = (PFNGLTESTFENCENVPROC) glewGetProcAddress ("glTestFenceNV");
    s_deviceConfig.m_glGetFenceivNV = (PFNGLGETFENCEIVNVPROC) glewGetProcAddress ("glGetFenceivNV");
    s_deviceConfig.m_glFinishFenceNV = (PFNGLFINISHFENCENVPROC) glewGetProcAddress ("glFinishFenceNV");
    s_deviceConfig.m_glSetFenceNV = (PFNGLSETFENCENVPROC) glewGetProcAddress ("glSetFenceNV");
  }

  // GL_NV_fragment_coverage_to_color
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_coverage_to_color])
  {
    s_deviceConfig.m_glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) glewGetProcAddress ("glFragmentCoverageColorNV");
  }

  // GL_NV_framebuffer_blit
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_blit])
  {
    s_deviceConfig.m_glBlitFramebufferNV = (PFNGLBLITFRAMEBUFFERNVPROC) glewGetProcAddress ("glBlitFramebufferNV");
  }

  // GL_NV_framebuffer_mixed_samples
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples])
  {
    s_deviceConfig.m_glCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC) glewGetProcAddress ("glCoverageModulationTableNV");
    s_deviceConfig.m_glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) glewGetProcAddress ("glGetCoverageModulationTableNV");
    s_deviceConfig.m_glCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC) glewGetProcAddress ("glCoverageModulationNV");
  }

  // GL_NV_framebuffer_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_multisample])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleNV");
  }

  // GL_NV_gpu_shader5
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5])
  {
    s_deviceConfig.m_glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC) glewGetProcAddress ("glUniform1i64NV");
    s_deviceConfig.m_glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC) glewGetProcAddress ("glUniform2i64NV");
    s_deviceConfig.m_glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC) glewGetProcAddress ("glUniform3i64NV");
    s_deviceConfig.m_glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC) glewGetProcAddress ("glUniform4i64NV");
    s_deviceConfig.m_glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC) glewGetProcAddress ("glUniform1i64vNV");
    s_deviceConfig.m_glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC) glewGetProcAddress ("glUniform2i64vNV");
    s_deviceConfig.m_glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC) glewGetProcAddress ("glUniform3i64vNV");
    s_deviceConfig.m_glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC) glewGetProcAddress ("glUniform4i64vNV");
    s_deviceConfig.m_glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC) glewGetProcAddress ("glUniform1ui64NV");
    s_deviceConfig.m_glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC) glewGetProcAddress ("glUniform2ui64NV");
    s_deviceConfig.m_glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC) glewGetProcAddress ("glUniform3ui64NV");
    s_deviceConfig.m_glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC) glewGetProcAddress ("glUniform4ui64NV");
    s_deviceConfig.m_glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC) glewGetProcAddress ("glUniform1ui64vNV");
    s_deviceConfig.m_glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC) glewGetProcAddress ("glUniform2ui64vNV");
    s_deviceConfig.m_glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC) glewGetProcAddress ("glUniform3ui64vNV");
    s_deviceConfig.m_glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC) glewGetProcAddress ("glUniform4ui64vNV");
    s_deviceConfig.m_glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC) glewGetProcAddress ("glGetUniformi64vNV");
    s_deviceConfig.m_glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC) glewGetProcAddress ("glProgramUniform1i64NV");
    s_deviceConfig.m_glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC) glewGetProcAddress ("glProgramUniform2i64NV");
    s_deviceConfig.m_glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC) glewGetProcAddress ("glProgramUniform3i64NV");
    s_deviceConfig.m_glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC) glewGetProcAddress ("glProgramUniform4i64NV");
    s_deviceConfig.m_glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC) glewGetProcAddress ("glProgramUniform1i64vNV");
    s_deviceConfig.m_glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC) glewGetProcAddress ("glProgramUniform2i64vNV");
    s_deviceConfig.m_glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC) glewGetProcAddress ("glProgramUniform3i64vNV");
    s_deviceConfig.m_glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC) glewGetProcAddress ("glProgramUniform4i64vNV");
    s_deviceConfig.m_glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC) glewGetProcAddress ("glProgramUniform1ui64NV");
    s_deviceConfig.m_glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC) glewGetProcAddress ("glProgramUniform2ui64NV");
    s_deviceConfig.m_glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC) glewGetProcAddress ("glProgramUniform3ui64NV");
    s_deviceConfig.m_glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC) glewGetProcAddress ("glProgramUniform4ui64NV");
    s_deviceConfig.m_glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) glewGetProcAddress ("glProgramUniform1ui64vNV");
    s_deviceConfig.m_glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) glewGetProcAddress ("glProgramUniform2ui64vNV");
    s_deviceConfig.m_glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) glewGetProcAddress ("glProgramUniform3ui64vNV");
    s_deviceConfig.m_glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) glewGetProcAddress ("glProgramUniform4ui64vNV");
  }

  // GL_NV_instanced_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_instanced_arrays])
  {
    s_deviceConfig.m_glVertexAttribDivisorNV = (PFNGLVERTEXATTRIBDIVISORNVPROC) glewGetProcAddress ("glVertexAttribDivisorNV");
  }

  // GL_NV_internalformat_sample_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_internalformat_sample_query])
  {
    s_deviceConfig.m_glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) glewGetProcAddress ("glGetInternalformatSampleivNV");
  }

  // GL_NV_memory_attachment
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_memory_attachment])
  {
    s_deviceConfig.m_glGetMemoryObjectDetachedResourcesuivNV = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) glewGetProcAddress ("glGetMemoryObjectDetachedResourcesuivNV");
    s_deviceConfig.m_glResetMemoryObjectParameterNV = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) glewGetProcAddress ("glResetMemoryObjectParameterNV");
    s_deviceConfig.m_glTexAttachMemoryNV = (PFNGLTEXATTACHMEMORYNVPROC) glewGetProcAddress ("glTexAttachMemoryNV");
    s_deviceConfig.m_glBufferAttachMemoryNV = (PFNGLBUFFERATTACHMEMORYNVPROC) glewGetProcAddress ("glBufferAttachMemoryNV");
    s_deviceConfig.m_glTextureAttachMemoryNV = (PFNGLTEXTUREATTACHMEMORYNVPROC) glewGetProcAddress ("glTextureAttachMemoryNV");
    s_deviceConfig.m_glNamedBufferAttachMemoryNV = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) glewGetProcAddress ("glNamedBufferAttachMemoryNV");
  }

  // GL_NV_memory_object_sparse
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse])
  {
    s_deviceConfig.m_glBufferPageCommitmentMemNV = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) glewGetProcAddress ("glBufferPageCommitmentMemNV");
    s_deviceConfig.m_glTexPageCommitmentMemNV = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) glewGetProcAddress ("glTexPageCommitmentMemNV");
    s_deviceConfig.m_glNamedBufferPageCommitmentMemNV = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) glewGetProcAddress ("glNamedBufferPageCommitmentMemNV");
    s_deviceConfig.m_glTexturePageCommitmentMemNV = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) glewGetProcAddress ("glTexturePageCommitmentMemNV");
  }

  // GL_NV_mesh_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_mesh_shader])
  {
    s_deviceConfig.m_glDrawMeshTasksNV = (PFNGLDRAWMESHTASKSNVPROC) glewGetProcAddress ("glDrawMeshTasksNV");
    s_deviceConfig.m_glDrawMeshTasksIndirectNV = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) glewGetProcAddress ("glDrawMeshTasksIndirectNV");
    s_deviceConfig.m_glMultiDrawMeshTasksIndirectNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) glewGetProcAddress ("glMultiDrawMeshTasksIndirectNV");
    s_deviceConfig.m_glMultiDrawMeshTasksIndirectCountNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) glewGetProcAddress ("glMultiDrawMeshTasksIndirectCountNV");
  }

  // GL_NV_non_square_matrices
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_non_square_matrices])
  {
    s_deviceConfig.m_glUniformMatrix2x3fvNV = (PFNGLUNIFORMMATRIX2X3FVNVPROC) glewGetProcAddress ("glUniformMatrix2x3fvNV");
    s_deviceConfig.m_glUniformMatrix3x2fvNV = (PFNGLUNIFORMMATRIX3X2FVNVPROC) glewGetProcAddress ("glUniformMatrix3x2fvNV");
    s_deviceConfig.m_glUniformMatrix2x4fvNV = (PFNGLUNIFORMMATRIX2X4FVNVPROC) glewGetProcAddress ("glUniformMatrix2x4fvNV");
    s_deviceConfig.m_glUniformMatrix4x2fvNV = (PFNGLUNIFORMMATRIX4X2FVNVPROC) glewGetProcAddress ("glUniformMatrix4x2fvNV");
    s_deviceConfig.m_glUniformMatrix3x4fvNV = (PFNGLUNIFORMMATRIX3X4FVNVPROC) glewGetProcAddress ("glUniformMatrix3x4fvNV");
    s_deviceConfig.m_glUniformMatrix4x3fvNV = (PFNGLUNIFORMMATRIX4X3FVNVPROC) glewGetProcAddress ("glUniformMatrix4x3fvNV");
  }

  // GL_NV_path_rendering
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_path_rendering])
  {
    s_deviceConfig.m_glGenPathsNV = (PFNGLGENPATHSNVPROC) glewGetProcAddress ("glGenPathsNV");
    s_deviceConfig.m_glDeletePathsNV = (PFNGLDELETEPATHSNVPROC) glewGetProcAddress ("glDeletePathsNV");
    s_deviceConfig.m_glIsPathNV = (PFNGLISPATHNVPROC) glewGetProcAddress ("glIsPathNV");
    s_deviceConfig.m_glPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC) glewGetProcAddress ("glPathCommandsNV");
    s_deviceConfig.m_glPathCoordsNV = (PFNGLPATHCOORDSNVPROC) glewGetProcAddress ("glPathCoordsNV");
    s_deviceConfig.m_glPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC) glewGetProcAddress ("glPathSubCommandsNV");
    s_deviceConfig.m_glPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC) glewGetProcAddress ("glPathSubCoordsNV");
    s_deviceConfig.m_glPathStringNV = (PFNGLPATHSTRINGNVPROC) glewGetProcAddress ("glPathStringNV");
    s_deviceConfig.m_glPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC) glewGetProcAddress ("glPathGlyphsNV");
    s_deviceConfig.m_glPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC) glewGetProcAddress ("glPathGlyphRangeNV");
    s_deviceConfig.m_glWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC) glewGetProcAddress ("glWeightPathsNV");
    s_deviceConfig.m_glCopyPathNV = (PFNGLCOPYPATHNVPROC) glewGetProcAddress ("glCopyPathNV");
    s_deviceConfig.m_glInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC) glewGetProcAddress ("glInterpolatePathsNV");
    s_deviceConfig.m_glTransformPathNV = (PFNGLTRANSFORMPATHNVPROC) glewGetProcAddress ("glTransformPathNV");
    s_deviceConfig.m_glPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC) glewGetProcAddress ("glPathParameterivNV");
    s_deviceConfig.m_glPathParameteriNV = (PFNGLPATHPARAMETERINVPROC) glewGetProcAddress ("glPathParameteriNV");
    s_deviceConfig.m_glPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC) glewGetProcAddress ("glPathParameterfvNV");
    s_deviceConfig.m_glPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC) glewGetProcAddress ("glPathParameterfNV");
    s_deviceConfig.m_glPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC) glewGetProcAddress ("glPathDashArrayNV");
    s_deviceConfig.m_glPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC) glewGetProcAddress ("glPathStencilFuncNV");
    s_deviceConfig.m_glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) glewGetProcAddress ("glPathStencilDepthOffsetNV");
    s_deviceConfig.m_glStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC) glewGetProcAddress ("glStencilFillPathNV");
    s_deviceConfig.m_glStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC) glewGetProcAddress ("glStencilStrokePathNV");
    s_deviceConfig.m_glStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) glewGetProcAddress ("glStencilFillPathInstancedNV");
    s_deviceConfig.m_glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) glewGetProcAddress ("glStencilStrokePathInstancedNV");
    s_deviceConfig.m_glPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC) glewGetProcAddress ("glPathCoverDepthFuncNV");
    s_deviceConfig.m_glCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC) glewGetProcAddress ("glCoverFillPathNV");
    s_deviceConfig.m_glCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC) glewGetProcAddress ("glCoverStrokePathNV");
    s_deviceConfig.m_glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) glewGetProcAddress ("glCoverFillPathInstancedNV");
    s_deviceConfig.m_glCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) glewGetProcAddress ("glCoverStrokePathInstancedNV");
    s_deviceConfig.m_glGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC) glewGetProcAddress ("glGetPathParameterivNV");
    s_deviceConfig.m_glGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC) glewGetProcAddress ("glGetPathParameterfvNV");
    s_deviceConfig.m_glGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC) glewGetProcAddress ("glGetPathCommandsNV");
    s_deviceConfig.m_glGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC) glewGetProcAddress ("glGetPathCoordsNV");
    s_deviceConfig.m_glGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC) glewGetProcAddress ("glGetPathDashArrayNV");
    s_deviceConfig.m_glGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC) glewGetProcAddress ("glGetPathMetricsNV");
    s_deviceConfig.m_glGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC) glewGetProcAddress ("glGetPathMetricRangeNV");
    s_deviceConfig.m_glGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC) glewGetProcAddress ("glGetPathSpacingNV");
    s_deviceConfig.m_glIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC) glewGetProcAddress ("glIsPointInFillPathNV");
    s_deviceConfig.m_glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC) glewGetProcAddress ("glIsPointInStrokePathNV");
    s_deviceConfig.m_glGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC) glewGetProcAddress ("glGetPathLengthNV");
    s_deviceConfig.m_glPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC) glewGetProcAddress ("glPointAlongPathNV");
    s_deviceConfig.m_glMatrixLoad3x2fNV = (PFNGLMATRIXLOAD3X2FNVPROC) glewGetProcAddress ("glMatrixLoad3x2fNV");
    s_deviceConfig.m_glMatrixLoad3x3fNV = (PFNGLMATRIXLOAD3X3FNVPROC) glewGetProcAddress ("glMatrixLoad3x3fNV");
    s_deviceConfig.m_glMatrixLoadTranspose3x3fNV = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) glewGetProcAddress ("glMatrixLoadTranspose3x3fNV");
    s_deviceConfig.m_glMatrixMult3x2fNV = (PFNGLMATRIXMULT3X2FNVPROC) glewGetProcAddress ("glMatrixMult3x2fNV");
    s_deviceConfig.m_glMatrixMult3x3fNV = (PFNGLMATRIXMULT3X3FNVPROC) glewGetProcAddress ("glMatrixMult3x3fNV");
    s_deviceConfig.m_glMatrixMultTranspose3x3fNV = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) glewGetProcAddress ("glMatrixMultTranspose3x3fNV");
    s_deviceConfig.m_glStencilThenCoverFillPathNV = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) glewGetProcAddress ("glStencilThenCoverFillPathNV");
    s_deviceConfig.m_glStencilThenCoverStrokePathNV = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) glewGetProcAddress ("glStencilThenCoverStrokePathNV");
    s_deviceConfig.m_glStencilThenCoverFillPathInstancedNV = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) glewGetProcAddress ("glStencilThenCoverFillPathInstancedNV");
    s_deviceConfig.m_glStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) glewGetProcAddress ("glStencilThenCoverStrokePathInstancedNV");
    s_deviceConfig.m_glPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC) glewGetProcAddress ("glPathGlyphIndexRangeNV");
    s_deviceConfig.m_glPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC) glewGetProcAddress ("glPathGlyphIndexArrayNV");
    s_deviceConfig.m_glPathMemoryGlyphIndexArrayNV = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) glewGetProcAddress ("glPathMemoryGlyphIndexArrayNV");
    s_deviceConfig.m_glProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) glewGetProcAddress ("glProgramPathFragmentInputGenNV");
    s_deviceConfig.m_glGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC) glewGetProcAddress ("glGetProgramResourcefvNV");
  }

  // GL_NV_polygon_mode
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_polygon_mode])
  {
    s_deviceConfig.m_glPolygonModeNV = (PFNGLPOLYGONMODENVPROC) glewGetProcAddress ("glPolygonModeNV");
  }

  // GL_NV_read_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_read_buffer])
  {
    s_deviceConfig.m_glReadBufferNV = (PFNGLREADBUFFERNVPROC) glewGetProcAddress ("glReadBufferNV");
  }

  // GL_NV_sample_locations
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_sample_locations])
  {
    s_deviceConfig.m_glFramebufferSampleLocationsfvNV = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) glewGetProcAddress ("glFramebufferSampleLocationsfvNV");
    s_deviceConfig.m_glNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) glewGetProcAddress ("glNamedFramebufferSampleLocationsfvNV");
    s_deviceConfig.m_glResolveDepthValuesNV = (PFNGLRESOLVEDEPTHVALUESNVPROC) glewGetProcAddress ("glResolveDepthValuesNV");
  }

  // GL_NV_scissor_exclusive
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_scissor_exclusive])
  {
    s_deviceConfig.m_glScissorExclusiveNV = (PFNGLSCISSOREXCLUSIVENVPROC) glewGetProcAddress ("glScissorExclusiveNV");
    s_deviceConfig.m_glScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) glewGetProcAddress ("glScissorExclusiveArrayvNV");
  }

  // GL_NV_shading_rate_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image])
  {
    s_deviceConfig.m_glBindShadingRateImageNV = (PFNGLBINDSHADINGRATEIMAGENVPROC) glewGetProcAddress ("glBindShadingRateImageNV");
    s_deviceConfig.m_glGetShadingRateImagePaletteNV = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) glewGetProcAddress ("glGetShadingRateImagePaletteNV");
    s_deviceConfig.m_glGetShadingRateSampleLocationivNV = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) glewGetProcAddress ("glGetShadingRateSampleLocationivNV");
    s_deviceConfig.m_glShadingRateImageBarrierNV = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) glewGetProcAddress ("glShadingRateImageBarrierNV");
    s_deviceConfig.m_glShadingRateImagePaletteNV = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) glewGetProcAddress ("glShadingRateImagePaletteNV");
    s_deviceConfig.m_glShadingRateSampleOrderNV = (PFNGLSHADINGRATESAMPLEORDERNVPROC) glewGetProcAddress ("glShadingRateSampleOrderNV");
    s_deviceConfig.m_glShadingRateSampleOrderCustomNV = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) glewGetProcAddress ("glShadingRateSampleOrderCustomNV");
  }

  // GL_NV_texture_barrier
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_barrier])
  {
    s_deviceConfig.m_glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC) glewGetProcAddress ("glTextureBarrierNV");
  }

  // GL_NV_viewport_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_array])
  {
    s_deviceConfig.m_glViewportArrayvNV = (PFNGLVIEWPORTARRAYVNVPROC) glewGetProcAddress ("glViewportArrayvNV");
    s_deviceConfig.m_glViewportIndexedfNV = (PFNGLVIEWPORTINDEXEDFNVPROC) glewGetProcAddress ("glViewportIndexedfNV");
    s_deviceConfig.m_glViewportIndexedfvNV = (PFNGLVIEWPORTINDEXEDFVNVPROC) glewGetProcAddress ("glViewportIndexedfvNV");
    s_deviceConfig.m_glScissorArrayvNV = (PFNGLSCISSORARRAYVNVPROC) glewGetProcAddress ("glScissorArrayvNV");
    s_deviceConfig.m_glScissorIndexedNV = (PFNGLSCISSORINDEXEDNVPROC) glewGetProcAddress ("glScissorIndexedNV");
    s_deviceConfig.m_glScissorIndexedvNV = (PFNGLSCISSORINDEXEDVNVPROC) glewGetProcAddress ("glScissorIndexedvNV");
    s_deviceConfig.m_glDepthRangeArrayfvNV = (PFNGLDEPTHRANGEARRAYFVNVPROC) glewGetProcAddress ("glDepthRangeArrayfvNV");
    s_deviceConfig.m_glDepthRangeIndexedfNV = (PFNGLDEPTHRANGEINDEXEDFNVPROC) glewGetProcAddress ("glDepthRangeIndexedfNV");
    s_deviceConfig.m_glGetFloati_vNV = (PFNGLGETFLOATI_VNVPROC) glewGetProcAddress ("glGetFloati_vNV");
    s_deviceConfig.m_glEnableiNV = (PFNGLENABLEINVPROC) glewGetProcAddress ("glEnableiNV");
    s_deviceConfig.m_glDisableiNV = (PFNGLDISABLEINVPROC) glewGetProcAddress ("glDisableiNV");
    s_deviceConfig.m_glIsEnablediNV = (PFNGLISENABLEDINVPROC) glewGetProcAddress ("glIsEnablediNV");
  }

  // GL_NV_viewport_swizzle
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_swizzle])
  {
    s_deviceConfig.m_glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC) glewGetProcAddress ("glViewportSwizzleNV");
  }

  // GL_OES_EGL_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_EGL_image])
  {
    s_deviceConfig.m_glEGLImageTargetTexture2DOES = (PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) glewGetProcAddress ("glEGLImageTargetTexture2DOES");
    s_deviceConfig.m_glEGLImageTargetRenderbufferStorageOES = (PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) glewGetProcAddress ("glEGLImageTargetRenderbufferStorageOES");
  }

  // GL_OES_copy_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_copy_image])
  {
    s_deviceConfig.m_glCopyImageSubDataOES = (PFNGLCOPYIMAGESUBDATAOESPROC) glewGetProcAddress ("glCopyImageSubDataOES");
  }

  // GL_OES_draw_buffers_indexed
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_draw_buffers_indexed])
  {
    s_deviceConfig.m_glEnableiOES = (PFNGLENABLEIOESPROC) glewGetProcAddress ("glEnableiOES");
    s_deviceConfig.m_glDisableiOES = (PFNGLDISABLEIOESPROC) glewGetProcAddress ("glDisableiOES");
    s_deviceConfig.m_glBlendEquationiOES = (PFNGLBLENDEQUATIONIOESPROC) glewGetProcAddress ("glBlendEquationiOES");
    s_deviceConfig.m_glBlendEquationSeparateiOES = (PFNGLBLENDEQUATIONSEPARATEIOESPROC) glewGetProcAddress ("glBlendEquationSeparateiOES");
    s_deviceConfig.m_glBlendFunciOES = (PFNGLBLENDFUNCIOESPROC) glewGetProcAddress ("glBlendFunciOES");
    s_deviceConfig.m_glBlendFuncSeparateiOES = (PFNGLBLENDFUNCSEPARATEIOESPROC) glewGetProcAddress ("glBlendFuncSeparateiOES");
    s_deviceConfig.m_glColorMaskiOES = (PFNGLCOLORMASKIOESPROC) glewGetProcAddress ("glColorMaskiOES");
    s_deviceConfig.m_glIsEnablediOES = (PFNGLISENABLEDIOESPROC) glewGetProcAddress ("glIsEnablediOES");
  }

  // GL_OES_draw_elements_base_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_draw_elements_base_vertex])
  {
    s_deviceConfig.m_glDrawElementsBaseVertexOES = (PFNGLDRAWELEMENTSBASEVERTEXOESPROC) glewGetProcAddress ("glDrawElementsBaseVertexOES");
    s_deviceConfig.m_glDrawRangeElementsBaseVertexOES = (PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) glewGetProcAddress ("glDrawRangeElementsBaseVertexOES");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertexOES = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertexOES");
  }

  // GL_OES_geometry_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_geometry_shader])
  {
    s_deviceConfig.m_glFramebufferTextureOES = (PFNGLFRAMEBUFFERTEXTUREOESPROC) glewGetProcAddress ("glFramebufferTextureOES");
  }

  // GL_OES_get_program_binary
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_get_program_binary])
  {
    s_deviceConfig.m_glGetProgramBinaryOES = (PFNGLGETPROGRAMBINARYOESPROC) glewGetProcAddress ("glGetProgramBinaryOES");
    s_deviceConfig.m_glProgramBinaryOES = (PFNGLPROGRAMBINARYOESPROC) glewGetProcAddress ("glProgramBinaryOES");
  }

  // GL_OES_mapbuffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_mapbuffer])
  {
    s_deviceConfig.m_glMapBufferOES = (PFNGLMAPBUFFEROESPROC) glewGetProcAddress ("glMapBufferOES");
    s_deviceConfig.m_glUnmapBufferOES = (PFNGLUNMAPBUFFEROESPROC) glewGetProcAddress ("glUnmapBufferOES");
    s_deviceConfig.m_glGetBufferPointervOES = (PFNGLGETBUFFERPOINTERVOESPROC) glewGetProcAddress ("glGetBufferPointervOES");
  }

  // GL_OES_primitive_bounding_box
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_primitive_bounding_box])
  {
    s_deviceConfig.m_glPrimitiveBoundingBoxOES = (PFNGLPRIMITIVEBOUNDINGBOXOESPROC) glewGetProcAddress ("glPrimitiveBoundingBoxOES");
  }

  // GL_OES_sample_shading
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_sample_shading])
  {
    s_deviceConfig.m_glMinSampleShadingOES = (PFNGLMINSAMPLESHADINGOESPROC) glewGetProcAddress ("glMinSampleShadingOES");
  }

  // GL_OES_tessellation_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_tessellation_shader])
  {
    s_deviceConfig.m_glPatchParameteriOES = (PFNGLPATCHPARAMETERIOESPROC) glewGetProcAddress ("glPatchParameteriOES");
  }

  // GL_OES_texture_3D
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_3D])
  {
    s_deviceConfig.m_glTexImage3DOES = (PFNGLTEXIMAGE3DOESPROC) glewGetProcAddress ("glTexImage3DOES");
    s_deviceConfig.m_glTexSubImage3DOES = (PFNGLTEXSUBIMAGE3DOESPROC) glewGetProcAddress ("glTexSubImage3DOES");
    s_deviceConfig.m_glCopyTexSubImage3DOES = (PFNGLCOPYTEXSUBIMAGE3DOESPROC) glewGetProcAddress ("glCopyTexSubImage3DOES");
    s_deviceConfig.m_glCompressedTexImage3DOES = (PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) glewGetProcAddress ("glCompressedTexImage3DOES");
    s_deviceConfig.m_glCompressedTexSubImage3DOES = (PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) glewGetProcAddress ("glCompressedTexSubImage3DOES");
    s_deviceConfig.m_glFramebufferTexture3DOES = (PFNGLFRAMEBUFFERTEXTURE3DOESPROC) glewGetProcAddress ("glFramebufferTexture3DOES");
  }

  // GL_OES_texture_border_clamp
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_border_clamp])
  {
    s_deviceConfig.m_glTexParameterIivOES = (PFNGLTEXPARAMETERIIVOESPROC) glewGetProcAddress ("glTexParameterIivOES");
    s_deviceConfig.m_glTexParameterIuivOES = (PFNGLTEXPARAMETERIUIVOESPROC) glewGetProcAddress ("glTexParameterIuivOES");
    s_deviceConfig.m_glGetTexParameterIivOES = (PFNGLGETTEXPARAMETERIIVOESPROC) glewGetProcAddress ("glGetTexParameterIivOES");
    s_deviceConfig.m_glGetTexParameterIuivOES = (PFNGLGETTEXPARAMETERIUIVOESPROC) glewGetProcAddress ("glGetTexParameterIuivOES");
    s_deviceConfig.m_glSamplerParameterIivOES = (PFNGLSAMPLERPARAMETERIIVOESPROC) glewGetProcAddress ("glSamplerParameterIivOES");
    s_deviceConfig.m_glSamplerParameterIuivOES = (PFNGLSAMPLERPARAMETERIUIVOESPROC) glewGetProcAddress ("glSamplerParameterIuivOES");
    s_deviceConfig.m_glGetSamplerParameterIivOES = (PFNGLGETSAMPLERPARAMETERIIVOESPROC) glewGetProcAddress ("glGetSamplerParameterIivOES");
    s_deviceConfig.m_glGetSamplerParameterIuivOES = (PFNGLGETSAMPLERPARAMETERIUIVOESPROC) glewGetProcAddress ("glGetSamplerParameterIuivOES");
  }

  // GL_OES_texture_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_buffer])
  {
    s_deviceConfig.m_glTexBufferOES = (PFNGLTEXBUFFEROESPROC) glewGetProcAddress ("glTexBufferOES");
    s_deviceConfig.m_glTexBufferRangeOES = (PFNGLTEXBUFFERRANGEOESPROC) glewGetProcAddress ("glTexBufferRangeOES");
  }

  // GL_OES_texture_storage_multisample_2d_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_storage_multisample_2d_array])
  {
    s_deviceConfig.m_glTexStorage3DMultisampleOES = (PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) glewGetProcAddress ("glTexStorage3DMultisampleOES");
  }

  // GL_OES_texture_view
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_texture_view])
  {
    s_deviceConfig.m_glTextureViewOES = (PFNGLTEXTUREVIEWOESPROC) glewGetProcAddress ("glTextureViewOES");
  }

  // GL_OES_vertex_array_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_vertex_array_object])
  {
    s_deviceConfig.m_glBindVertexArrayOES = (PFNGLBINDVERTEXARRAYOESPROC) glewGetProcAddress ("glBindVertexArrayOES");
    s_deviceConfig.m_glDeleteVertexArraysOES = (PFNGLDELETEVERTEXARRAYSOESPROC) glewGetProcAddress ("glDeleteVertexArraysOES");
    s_deviceConfig.m_glGenVertexArraysOES = (PFNGLGENVERTEXARRAYSOESPROC) glewGetProcAddress ("glGenVertexArraysOES");
    s_deviceConfig.m_glIsVertexArrayOES = (PFNGLISVERTEXARRAYOESPROC) glewGetProcAddress ("glIsVertexArrayOES");
  }

  // GL_OES_viewport_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_viewport_array])
  {
    s_deviceConfig.m_glViewportArrayvOES = (PFNGLVIEWPORTARRAYVOESPROC) glewGetProcAddress ("glViewportArrayvOES");
    s_deviceConfig.m_glViewportIndexedfOES = (PFNGLVIEWPORTINDEXEDFOESPROC) glewGetProcAddress ("glViewportIndexedfOES");
    s_deviceConfig.m_glViewportIndexedfvOES = (PFNGLVIEWPORTINDEXEDFVOESPROC) glewGetProcAddress ("glViewportIndexedfvOES");
    s_deviceConfig.m_glScissorArrayvOES = (PFNGLSCISSORARRAYVOESPROC) glewGetProcAddress ("glScissorArrayvOES");
    s_deviceConfig.m_glScissorIndexedOES = (PFNGLSCISSORINDEXEDOESPROC) glewGetProcAddress ("glScissorIndexedOES");
    s_deviceConfig.m_glScissorIndexedvOES = (PFNGLSCISSORINDEXEDVOESPROC) glewGetProcAddress ("glScissorIndexedvOES");
    s_deviceConfig.m_glDepthRangeArrayfvOES = (PFNGLDEPTHRANGEARRAYFVOESPROC) glewGetProcAddress ("glDepthRangeArrayfvOES");
    s_deviceConfig.m_glDepthRangeIndexedfOES = (PFNGLDEPTHRANGEINDEXEDFOESPROC) glewGetProcAddress ("glDepthRangeIndexedfOES");
    s_deviceConfig.m_glGetFloati_vOES = (PFNGLGETFLOATI_VOESPROC) glewGetProcAddress ("glGetFloati_vOES");
  }

  // GL_OVR_multiview
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview])
  {
    s_deviceConfig.m_glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) glewGetProcAddress ("glFramebufferTextureMultiviewOVR");
    s_deviceConfig.m_glNamedFramebufferTextureMultiviewOVR = (PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) glewGetProcAddress ("glNamedFramebufferTextureMultiviewOVR");
  }

  // GL_OVR_multiview_multisampled_render_to_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview_multisampled_render_to_texture])
  {
    s_deviceConfig.m_glFramebufferTextureMultisampleMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC) glewGetProcAddress ("glFramebufferTextureMultisampleMultiviewOVR");
  }

  // GL_QCOM_alpha_test
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_alpha_test])
  {
    s_deviceConfig.m_glAlphaFuncQCOM = (PFNGLALPHAFUNCQCOMPROC) glewGetProcAddress ("glAlphaFuncQCOM");
  }

  // GL_QCOM_driver_control
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_driver_control])
  {
    s_deviceConfig.m_glGetDriverControlsQCOM = (PFNGLGETDRIVERCONTROLSQCOMPROC) glewGetProcAddress ("glGetDriverControlsQCOM");
    s_deviceConfig.m_glGetDriverControlStringQCOM = (PFNGLGETDRIVERCONTROLSTRINGQCOMPROC) glewGetProcAddress ("glGetDriverControlStringQCOM");
    s_deviceConfig.m_glEnableDriverControlQCOM = (PFNGLENABLEDRIVERCONTROLQCOMPROC) glewGetProcAddress ("glEnableDriverControlQCOM");
    s_deviceConfig.m_glDisableDriverControlQCOM = (PFNGLDISABLEDRIVERCONTROLQCOMPROC) glewGetProcAddress ("glDisableDriverControlQCOM");
  }

  // GL_QCOM_extended_get
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_extended_get])
  {
    s_deviceConfig.m_glExtGetTexturesQCOM = (PFNGLEXTGETTEXTURESQCOMPROC) glewGetProcAddress ("glExtGetTexturesQCOM");
    s_deviceConfig.m_glExtGetBuffersQCOM = (PFNGLEXTGETBUFFERSQCOMPROC) glewGetProcAddress ("glExtGetBuffersQCOM");
    s_deviceConfig.m_glExtGetRenderbuffersQCOM = (PFNGLEXTGETRENDERBUFFERSQCOMPROC) glewGetProcAddress ("glExtGetRenderbuffersQCOM");
    s_deviceConfig.m_glExtGetFramebuffersQCOM = (PFNGLEXTGETFRAMEBUFFERSQCOMPROC) glewGetProcAddress ("glExtGetFramebuffersQCOM");
    s_deviceConfig.m_glExtGetTexLevelParameterivQCOM = (PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC) glewGetProcAddress ("glExtGetTexLevelParameterivQCOM");
    s_deviceConfig.m_glExtTexObjectStateOverrideiQCOM = (PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC) glewGetProcAddress ("glExtTexObjectStateOverrideiQCOM");
    s_deviceConfig.m_glExtGetTexSubImageQCOM = (PFNGLEXTGETTEXSUBIMAGEQCOMPROC) glewGetProcAddress ("glExtGetTexSubImageQCOM");
    s_deviceConfig.m_glExtGetBufferPointervQCOM = (PFNGLEXTGETBUFFERPOINTERVQCOMPROC) glewGetProcAddress ("glExtGetBufferPointervQCOM");
  }

  // GL_QCOM_extended_get2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_extended_get2])
  {
    s_deviceConfig.m_glExtGetShadersQCOM = (PFNGLEXTGETSHADERSQCOMPROC) glewGetProcAddress ("glExtGetShadersQCOM");
    s_deviceConfig.m_glExtGetProgramsQCOM = (PFNGLEXTGETPROGRAMSQCOMPROC) glewGetProcAddress ("glExtGetProgramsQCOM");
    s_deviceConfig.m_glExtIsProgramBinaryQCOM = (PFNGLEXTISPROGRAMBINARYQCOMPROC) glewGetProcAddress ("glExtIsProgramBinaryQCOM");
    s_deviceConfig.m_glExtGetProgramBinarySourceQCOM = (PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC) glewGetProcAddress ("glExtGetProgramBinarySourceQCOM");
  }

  // GL_QCOM_framebuffer_foveated
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_framebuffer_foveated])
  {
    s_deviceConfig.m_glFramebufferFoveationConfigQCOM = (PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC) glewGetProcAddress ("glFramebufferFoveationConfigQCOM");
    s_deviceConfig.m_glFramebufferFoveationParametersQCOM = (PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC) glewGetProcAddress ("glFramebufferFoveationParametersQCOM");
  }

  // GL_QCOM_motion_estimation
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_motion_estimation])
  {
    s_deviceConfig.m_glTexEstimateMotionQCOM = (PFNGLTEXESTIMATEMOTIONQCOMPROC) glewGetProcAddress ("glTexEstimateMotionQCOM");
    s_deviceConfig.m_glTexEstimateMotionRegionsQCOM = (PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC) glewGetProcAddress ("glTexEstimateMotionRegionsQCOM");
  }

  // GL_QCOM_frame_extrapolation
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_frame_extrapolation])
  {
    s_deviceConfig.m_glExtrapolateTex2DQCOM = (PFNGLEXTRAPOLATETEX2DQCOMPROC) glewGetProcAddress ("glExtrapolateTex2DQCOM");
  }

  // GL_QCOM_texture_foveated
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_texture_foveated])
  {
    s_deviceConfig.m_glTextureFoveationParametersQCOM = (PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC) glewGetProcAddress ("glTextureFoveationParametersQCOM");
  }

  // GL_QCOM_shader_framebuffer_fetch_noncoherent
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_shader_framebuffer_fetch_noncoherent])
  {
    s_deviceConfig.m_glFramebufferFetchBarrierQCOM = (PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC) glewGetProcAddress ("glFramebufferFetchBarrierQCOM");
  }

  // GL_QCOM_shading_rate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_shading_rate])
  {
    s_deviceConfig.m_glShadingRateQCOM = (PFNGLSHADINGRATEQCOMPROC) glewGetProcAddress ("glShadingRateQCOM");
  }

  // GL_QCOM_tiled_rendering
  if (s_deviceConfig.m_featureSupported [GLEW_GL_QCOM_tiled_rendering])
  {
    s_deviceConfig.m_glStartTilingQCOM = (PFNGLSTARTTILINGQCOMPROC) glewGetProcAddress ("glStartTilingQCOM");
    s_deviceConfig.m_glEndTilingQCOM = (PFNGLENDTILINGQCOMPROC) glewGetProcAddress ("glEndTilingQCOM");
  }

  s_initialised = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::gles::Deinitialise ()
{
  s_initialised = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
