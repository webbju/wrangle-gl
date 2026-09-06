////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <cstring>
#include <string>
#include <unordered_set>

#include <wrangle-gl.h>
#include "wrangle-gl.inl"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool glew::gl::s_initialised = false;

glew::gl::DeviceConfig glew::gl::s_deviceConfig;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::gl::Initialise ()
{
  memset (&s_deviceConfig, 0, sizeof (s_deviceConfig));

  //
  // Determine current driver's feature reporting.
  //

  const unsigned char *glVersion = glGetString (GL_VERSION);

  if (!glVersion)
  {
    glVersion = (const unsigned char*) ""; // Protect against some drivers will happily pass back NULL.
  }

  const size_t glVersionLen = strlen ((const char *) glVersion);

  if (glVersionLen)
  {
    unsigned int major = 0, minor = 0;

#if _WIN32
    #define strncasecmp _strnicmp
#endif

    const char *divisor = strchr ((const char *) glVersion, '.');

    if (divisor)
    {
      major = (*(char *) (divisor - 1)) - '0';
      minor = (*(char *) (divisor + 1)) - '0';
    }

    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_0] = ((major >= 1));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_1] = ((major >= 1) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_2] = ((major >= 1) && (minor >= 2));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_3] = ((major >= 1) && (minor >= 3));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_4] = ((major >= 1) && (minor >= 4));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_5] = ((major >= 1) && (minor >= 5));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_2_0] = ((major >= 2));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_2_1] = ((major >= 2) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_0] = ((major >= 3));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_1] = ((major >= 3) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_2] = ((major >= 3) && (minor >= 2));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_3] = ((major >= 3) && (minor >= 3));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_0] = ((major >= 4));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_1] = ((major >= 4) && (minor >= 1));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_2] = ((major >= 4) && (minor >= 2));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_3] = ((major >= 4) && (minor >= 3));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_4] = ((major >= 4) && (minor >= 4));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_5] = ((major >= 4) && (minor >= 5));
    s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_6] = ((major >= 4) && (minor >= 6));
  }

  //
  // Evaluate extension support.
  //

  std::unordered_set <std::string> supportedExtensions;

  const unsigned char *glExtensions = (const unsigned char*) glGetString (GL_EXTENSIONS);

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

  s_deviceConfig.m_featureSupported [GLEW_GL_3DFX_multisample] = (supportedExtensions.find ("GL_3DFX_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_3DFX_tbuffer] = (supportedExtensions.find ("GL_3DFX_tbuffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_3DFX_texture_compression_FXT1] = (supportedExtensions.find ("GL_3DFX_texture_compression_FXT1") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_blend_minmax_factor] = (supportedExtensions.find ("GL_AMD_blend_minmax_factor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_conservative_depth] = (supportedExtensions.find ("GL_AMD_conservative_depth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_debug_output] = (supportedExtensions.find ("GL_AMD_debug_output") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_depth_clamp_separate] = (supportedExtensions.find ("GL_AMD_depth_clamp_separate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_draw_buffers_blend] = (supportedExtensions.find ("GL_AMD_draw_buffers_blend") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_multisample_advanced] = (supportedExtensions.find ("GL_AMD_framebuffer_multisample_advanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_sample_positions] = (supportedExtensions.find ("GL_AMD_framebuffer_sample_positions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_gcn_shader] = (supportedExtensions.find ("GL_AMD_gcn_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_gpu_shader_half_float] = (supportedExtensions.find ("GL_AMD_gpu_shader_half_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_gpu_shader_int16] = (supportedExtensions.find ("GL_AMD_gpu_shader_int16") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_gpu_shader_int64] = (supportedExtensions.find ("GL_AMD_gpu_shader_int64") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_interleaved_elements] = (supportedExtensions.find ("GL_AMD_interleaved_elements") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_multi_draw_indirect] = (supportedExtensions.find ("GL_AMD_multi_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_name_gen_delete] = (supportedExtensions.find ("GL_AMD_name_gen_delete") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_occlusion_query_event] = (supportedExtensions.find ("GL_AMD_occlusion_query_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_performance_monitor] = (supportedExtensions.find ("GL_AMD_performance_monitor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_pinned_memory] = (supportedExtensions.find ("GL_AMD_pinned_memory") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_query_buffer_object] = (supportedExtensions.find ("GL_AMD_query_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_sample_positions] = (supportedExtensions.find ("GL_AMD_sample_positions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_seamless_cubemap_per_texture] = (supportedExtensions.find ("GL_AMD_seamless_cubemap_per_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_atomic_counter_ops] = (supportedExtensions.find ("GL_AMD_shader_atomic_counter_ops") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_ballot] = (supportedExtensions.find ("GL_AMD_shader_ballot") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_gpu_shader_half_float_fetch] = (supportedExtensions.find ("GL_AMD_shader_gpu_shader_half_float_fetch") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_image_load_store_lod] = (supportedExtensions.find ("GL_AMD_shader_image_load_store_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_stencil_export] = (supportedExtensions.find ("GL_AMD_shader_stencil_export") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_trinary_minmax] = (supportedExtensions.find ("GL_AMD_shader_trinary_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_shader_explicit_vertex_parameter] = (supportedExtensions.find ("GL_AMD_shader_explicit_vertex_parameter") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_sparse_texture] = (supportedExtensions.find ("GL_AMD_sparse_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_stencil_operation_extended] = (supportedExtensions.find ("GL_AMD_stencil_operation_extended") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_texture_gather_bias_lod] = (supportedExtensions.find ("GL_AMD_texture_gather_bias_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_texture_texture4] = (supportedExtensions.find ("GL_AMD_texture_texture4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_transform_feedback3_lines_triangles] = (supportedExtensions.find ("GL_AMD_transform_feedback3_lines_triangles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_transform_feedback4] = (supportedExtensions.find ("GL_AMD_transform_feedback4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_vertex_shader_layer] = (supportedExtensions.find ("GL_AMD_vertex_shader_layer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_vertex_shader_tessellator] = (supportedExtensions.find ("GL_AMD_vertex_shader_tessellator") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_AMD_vertex_shader_viewport_index] = (supportedExtensions.find ("GL_AMD_vertex_shader_viewport_index") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_aux_depth_stencil] = (supportedExtensions.find ("GL_APPLE_aux_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_client_storage] = (supportedExtensions.find ("GL_APPLE_client_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_element_array] = (supportedExtensions.find ("GL_APPLE_element_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_fence] = (supportedExtensions.find ("GL_APPLE_fence") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_float_pixels] = (supportedExtensions.find ("GL_APPLE_float_pixels") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_flush_buffer_range] = (supportedExtensions.find ("GL_APPLE_flush_buffer_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_object_purgeable] = (supportedExtensions.find ("GL_APPLE_object_purgeable") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_rgb_422] = (supportedExtensions.find ("GL_APPLE_rgb_422") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_row_bytes] = (supportedExtensions.find ("GL_APPLE_row_bytes") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_specular_vector] = (supportedExtensions.find ("GL_APPLE_specular_vector") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_texture_range] = (supportedExtensions.find ("GL_APPLE_texture_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_transform_hint] = (supportedExtensions.find ("GL_APPLE_transform_hint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_vertex_array_object] = (supportedExtensions.find ("GL_APPLE_vertex_array_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_vertex_array_range] = (supportedExtensions.find ("GL_APPLE_vertex_array_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_vertex_program_evaluators] = (supportedExtensions.find ("GL_APPLE_vertex_program_evaluators") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_ycbcr_422] = (supportedExtensions.find ("GL_APPLE_ycbcr_422") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES2_compatibility] = (supportedExtensions.find ("GL_ARB_ES2_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_1_compatibility] = (supportedExtensions.find ("GL_ARB_ES3_1_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_2_compatibility] = (supportedExtensions.find ("GL_ARB_ES3_2_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_compatibility] = (supportedExtensions.find ("GL_ARB_ES3_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_arrays_of_arrays] = (supportedExtensions.find ("GL_ARB_arrays_of_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_base_instance] = (supportedExtensions.find ("GL_ARB_base_instance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_bindless_texture] = (supportedExtensions.find ("GL_ARB_bindless_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_blend_func_extended] = (supportedExtensions.find ("GL_ARB_blend_func_extended") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_buffer_storage] = (supportedExtensions.find ("GL_ARB_buffer_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_cl_event] = (supportedExtensions.find ("GL_ARB_cl_event") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_buffer_object] = (supportedExtensions.find ("GL_ARB_clear_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_texture] = (supportedExtensions.find ("GL_ARB_clear_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clip_control] = (supportedExtensions.find ("GL_ARB_clip_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_color_buffer_float] = (supportedExtensions.find ("GL_ARB_color_buffer_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compatibility] = (supportedExtensions.find ("GL_ARB_compatibility") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compressed_texture_pixel_storage] = (supportedExtensions.find ("GL_ARB_compressed_texture_pixel_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_shader] = (supportedExtensions.find ("GL_ARB_compute_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_variable_group_size] = (supportedExtensions.find ("GL_ARB_compute_variable_group_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_conditional_render_inverted] = (supportedExtensions.find ("GL_ARB_conditional_render_inverted") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_conservative_depth] = (supportedExtensions.find ("GL_ARB_conservative_depth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_buffer] = (supportedExtensions.find ("GL_ARB_copy_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_image] = (supportedExtensions.find ("GL_ARB_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_cull_distance] = (supportedExtensions.find ("GL_ARB_cull_distance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_debug_output] = (supportedExtensions.find ("GL_ARB_debug_output") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_depth_buffer_float] = (supportedExtensions.find ("GL_ARB_depth_buffer_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_depth_clamp] = (supportedExtensions.find ("GL_ARB_depth_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_depth_texture] = (supportedExtensions.find ("GL_ARB_depth_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_derivative_control] = (supportedExtensions.find ("GL_ARB_derivative_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access] = (supportedExtensions.find ("GL_ARB_direct_state_access") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_buffers] = (supportedExtensions.find ("GL_ARB_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_buffers_blend] = (supportedExtensions.find ("GL_ARB_draw_buffers_blend") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_elements_base_vertex] = (supportedExtensions.find ("GL_ARB_draw_elements_base_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_indirect] = (supportedExtensions.find ("GL_ARB_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_instanced] = (supportedExtensions.find ("GL_ARB_draw_instanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_enhanced_layouts] = (supportedExtensions.find ("GL_ARB_enhanced_layouts") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_explicit_attrib_location] = (supportedExtensions.find ("GL_ARB_explicit_attrib_location") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_explicit_uniform_location] = (supportedExtensions.find ("GL_ARB_explicit_uniform_location") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_coord_conventions] = (supportedExtensions.find ("GL_ARB_fragment_coord_conventions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_layer_viewport] = (supportedExtensions.find ("GL_ARB_fragment_layer_viewport") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_program] = (supportedExtensions.find ("GL_ARB_fragment_program") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_program_shadow] = (supportedExtensions.find ("GL_ARB_fragment_program_shadow") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_shader] = (supportedExtensions.find ("GL_ARB_fragment_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_shader_interlock] = (supportedExtensions.find ("GL_ARB_fragment_shader_interlock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_no_attachments] = (supportedExtensions.find ("GL_ARB_framebuffer_no_attachments") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_object] = (supportedExtensions.find ("GL_ARB_framebuffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_sRGB] = (supportedExtensions.find ("GL_ARB_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_geometry_shader4] = (supportedExtensions.find ("GL_ARB_geometry_shader4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_program_binary] = (supportedExtensions.find ("GL_ARB_get_program_binary") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_texture_sub_image] = (supportedExtensions.find ("GL_ARB_get_texture_sub_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gl_spirv] = (supportedExtensions.find ("GL_ARB_gl_spirv") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader5] = (supportedExtensions.find ("GL_ARB_gpu_shader5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader_fp64] = (supportedExtensions.find ("GL_ARB_gpu_shader_fp64") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader_int64] = (supportedExtensions.find ("GL_ARB_gpu_shader_int64") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_half_float_pixel] = (supportedExtensions.find ("GL_ARB_half_float_pixel") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_half_float_vertex] = (supportedExtensions.find ("GL_ARB_half_float_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_imaging] = (supportedExtensions.find ("GL_ARB_imaging") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_indirect_parameters] = (supportedExtensions.find ("GL_ARB_indirect_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_instanced_arrays] = (supportedExtensions.find ("GL_ARB_instanced_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query] = (supportedExtensions.find ("GL_ARB_internalformat_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query2] = (supportedExtensions.find ("GL_ARB_internalformat_query2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_invalidate_subdata] = (supportedExtensions.find ("GL_ARB_invalidate_subdata") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_map_buffer_alignment] = (supportedExtensions.find ("GL_ARB_map_buffer_alignment") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_map_buffer_range] = (supportedExtensions.find ("GL_ARB_map_buffer_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_matrix_palette] = (supportedExtensions.find ("GL_ARB_matrix_palette") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_bind] = (supportedExtensions.find ("GL_ARB_multi_bind") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_draw_indirect] = (supportedExtensions.find ("GL_ARB_multi_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multisample] = (supportedExtensions.find ("GL_ARB_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multitexture] = (supportedExtensions.find ("GL_ARB_multitexture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_occlusion_query] = (supportedExtensions.find ("GL_ARB_occlusion_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_occlusion_query2] = (supportedExtensions.find ("GL_ARB_occlusion_query2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_parallel_shader_compile] = (supportedExtensions.find ("GL_ARB_parallel_shader_compile") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_pipeline_statistics_query] = (supportedExtensions.find ("GL_ARB_pipeline_statistics_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_pixel_buffer_object] = (supportedExtensions.find ("GL_ARB_pixel_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_point_parameters] = (supportedExtensions.find ("GL_ARB_point_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_point_sprite] = (supportedExtensions.find ("GL_ARB_point_sprite") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_polygon_offset_clamp] = (supportedExtensions.find ("GL_ARB_polygon_offset_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_post_depth_coverage] = (supportedExtensions.find ("GL_ARB_post_depth_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_program_interface_query] = (supportedExtensions.find ("GL_ARB_program_interface_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_provoking_vertex] = (supportedExtensions.find ("GL_ARB_provoking_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_query_buffer_object] = (supportedExtensions.find ("GL_ARB_query_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robust_buffer_access_behavior] = (supportedExtensions.find ("GL_ARB_robust_buffer_access_behavior") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robustness] = (supportedExtensions.find ("GL_ARB_robustness") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robustness_isolation] = (supportedExtensions.find ("GL_ARB_robustness_isolation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sample_locations] = (supportedExtensions.find ("GL_ARB_sample_locations") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sample_shading] = (supportedExtensions.find ("GL_ARB_sample_shading") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sampler_objects] = (supportedExtensions.find ("GL_ARB_sampler_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_seamless_cube_map] = (supportedExtensions.find ("GL_ARB_seamless_cube_map") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_seamless_cubemap_per_texture] = (supportedExtensions.find ("GL_ARB_seamless_cubemap_per_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_separate_shader_objects] = (supportedExtensions.find ("GL_ARB_separate_shader_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_atomic_counter_ops] = (supportedExtensions.find ("GL_ARB_shader_atomic_counter_ops") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_atomic_counters] = (supportedExtensions.find ("GL_ARB_shader_atomic_counters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_ballot] = (supportedExtensions.find ("GL_ARB_shader_ballot") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_bit_encoding] = (supportedExtensions.find ("GL_ARB_shader_bit_encoding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_clock] = (supportedExtensions.find ("GL_ARB_shader_clock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_draw_parameters] = (supportedExtensions.find ("GL_ARB_shader_draw_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_group_vote] = (supportedExtensions.find ("GL_ARB_shader_group_vote") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_image_load_store] = (supportedExtensions.find ("GL_ARB_shader_image_load_store") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_image_size] = (supportedExtensions.find ("GL_ARB_shader_image_size") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_objects] = (supportedExtensions.find ("GL_ARB_shader_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_precision] = (supportedExtensions.find ("GL_ARB_shader_precision") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_stencil_export] = (supportedExtensions.find ("GL_ARB_shader_stencil_export") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_storage_buffer_object] = (supportedExtensions.find ("GL_ARB_shader_storage_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_subroutine] = (supportedExtensions.find ("GL_ARB_shader_subroutine") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_texture_image_samples] = (supportedExtensions.find ("GL_ARB_shader_texture_image_samples") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_texture_lod] = (supportedExtensions.find ("GL_ARB_shader_texture_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_viewport_layer_array] = (supportedExtensions.find ("GL_ARB_shader_viewport_layer_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_100] = (supportedExtensions.find ("GL_ARB_shading_language_100") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_420pack] = (supportedExtensions.find ("GL_ARB_shading_language_420pack") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_include] = (supportedExtensions.find ("GL_ARB_shading_language_include") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_packing] = (supportedExtensions.find ("GL_ARB_shading_language_packing") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shadow] = (supportedExtensions.find ("GL_ARB_shadow") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shadow_ambient] = (supportedExtensions.find ("GL_ARB_shadow_ambient") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_buffer] = (supportedExtensions.find ("GL_ARB_sparse_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_texture] = (supportedExtensions.find ("GL_ARB_sparse_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_texture2] = (supportedExtensions.find ("GL_ARB_sparse_texture2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_texture_clamp] = (supportedExtensions.find ("GL_ARB_sparse_texture_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_spirv_extensions] = (supportedExtensions.find ("GL_ARB_spirv_extensions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_stencil_texturing] = (supportedExtensions.find ("GL_ARB_stencil_texturing") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sync] = (supportedExtensions.find ("GL_ARB_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_tessellation_shader] = (supportedExtensions.find ("GL_ARB_tessellation_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_barrier] = (supportedExtensions.find ("GL_ARB_texture_barrier") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_border_clamp] = (supportedExtensions.find ("GL_ARB_texture_border_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_object] = (supportedExtensions.find ("GL_ARB_texture_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_object_rgb32] = (supportedExtensions.find ("GL_ARB_texture_buffer_object_rgb32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_range] = (supportedExtensions.find ("GL_ARB_texture_buffer_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_compression] = (supportedExtensions.find ("GL_ARB_texture_compression") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_compression_bptc] = (supportedExtensions.find ("GL_ARB_texture_compression_bptc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_compression_rgtc] = (supportedExtensions.find ("GL_ARB_texture_compression_rgtc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_cube_map] = (supportedExtensions.find ("GL_ARB_texture_cube_map") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_cube_map_array] = (supportedExtensions.find ("GL_ARB_texture_cube_map_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_env_add] = (supportedExtensions.find ("GL_ARB_texture_env_add") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_env_combine] = (supportedExtensions.find ("GL_ARB_texture_env_combine") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_env_crossbar] = (supportedExtensions.find ("GL_ARB_texture_env_crossbar") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_env_dot3] = (supportedExtensions.find ("GL_ARB_texture_env_dot3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_filter_anisotropic] = (supportedExtensions.find ("GL_ARB_texture_filter_anisotropic") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_filter_minmax] = (supportedExtensions.find ("GL_ARB_texture_filter_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_float] = (supportedExtensions.find ("GL_ARB_texture_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_gather] = (supportedExtensions.find ("GL_ARB_texture_gather") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_mirror_clamp_to_edge] = (supportedExtensions.find ("GL_ARB_texture_mirror_clamp_to_edge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_mirrored_repeat] = (supportedExtensions.find ("GL_ARB_texture_mirrored_repeat") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_multisample] = (supportedExtensions.find ("GL_ARB_texture_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_non_power_of_two] = (supportedExtensions.find ("GL_ARB_texture_non_power_of_two") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_query_levels] = (supportedExtensions.find ("GL_ARB_texture_query_levels") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_query_lod] = (supportedExtensions.find ("GL_ARB_texture_query_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_rectangle] = (supportedExtensions.find ("GL_ARB_texture_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_rg] = (supportedExtensions.find ("GL_ARB_texture_rg") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_rgb10_a2ui] = (supportedExtensions.find ("GL_ARB_texture_rgb10_a2ui") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_stencil8] = (supportedExtensions.find ("GL_ARB_texture_stencil8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage] = (supportedExtensions.find ("GL_ARB_texture_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage_multisample] = (supportedExtensions.find ("GL_ARB_texture_storage_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_swizzle] = (supportedExtensions.find ("GL_ARB_texture_swizzle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_view] = (supportedExtensions.find ("GL_ARB_texture_view") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_timer_query] = (supportedExtensions.find ("GL_ARB_timer_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback2] = (supportedExtensions.find ("GL_ARB_transform_feedback2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback3] = (supportedExtensions.find ("GL_ARB_transform_feedback3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback_instanced] = (supportedExtensions.find ("GL_ARB_transform_feedback_instanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback_overflow_query] = (supportedExtensions.find ("GL_ARB_transform_feedback_overflow_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transpose_matrix] = (supportedExtensions.find ("GL_ARB_transpose_matrix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_uniform_buffer_object] = (supportedExtensions.find ("GL_ARB_uniform_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_array_bgra] = (supportedExtensions.find ("GL_ARB_vertex_array_bgra") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_array_object] = (supportedExtensions.find ("GL_ARB_vertex_array_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_64bit] = (supportedExtensions.find ("GL_ARB_vertex_attrib_64bit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_binding] = (supportedExtensions.find ("GL_ARB_vertex_attrib_binding") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_blend] = (supportedExtensions.find ("GL_ARB_vertex_blend") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_buffer_object] = (supportedExtensions.find ("GL_ARB_vertex_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_program] = (supportedExtensions.find ("GL_ARB_vertex_program") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_shader] = (supportedExtensions.find ("GL_ARB_vertex_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_type_10f_11f_11f_rev] = (supportedExtensions.find ("GL_ARB_vertex_type_10f_11f_11f_rev") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_type_2_10_10_10_rev] = (supportedExtensions.find ("GL_ARB_vertex_type_2_10_10_10_rev") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_viewport_array] = (supportedExtensions.find ("GL_ARB_viewport_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ARB_window_pos] = (supportedExtensions.find ("GL_ARB_window_pos") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_draw_buffers] = (supportedExtensions.find ("GL_ATI_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_element_array] = (supportedExtensions.find ("GL_ATI_element_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_envmap_bumpmap] = (supportedExtensions.find ("GL_ATI_envmap_bumpmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_fragment_shader] = (supportedExtensions.find ("GL_ATI_fragment_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_map_object_buffer] = (supportedExtensions.find ("GL_ATI_map_object_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_meminfo] = (supportedExtensions.find ("GL_ATI_meminfo") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_pixel_format_float] = (supportedExtensions.find ("GL_ATI_pixel_format_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_pn_triangles] = (supportedExtensions.find ("GL_ATI_pn_triangles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_separate_stencil] = (supportedExtensions.find ("GL_ATI_separate_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_text_fragment_shader] = (supportedExtensions.find ("GL_ATI_text_fragment_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_texture_env_combine3] = (supportedExtensions.find ("GL_ATI_texture_env_combine3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_texture_float] = (supportedExtensions.find ("GL_ATI_texture_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_texture_mirror_once] = (supportedExtensions.find ("GL_ATI_texture_mirror_once") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_vertex_array_object] = (supportedExtensions.find ("GL_ATI_vertex_array_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_vertex_attrib_array_object] = (supportedExtensions.find ("GL_ATI_vertex_attrib_array_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_ATI_vertex_streams] = (supportedExtensions.find ("GL_ATI_vertex_streams") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_422_pixels] = (supportedExtensions.find ("GL_EXT_422_pixels") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage] = (supportedExtensions.find ("GL_EXT_EGL_image_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_sync] = (supportedExtensions.find ("GL_EXT_EGL_sync") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_abgr] = (supportedExtensions.find ("GL_EXT_abgr") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_bgra] = (supportedExtensions.find ("GL_EXT_bgra") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_bindable_uniform] = (supportedExtensions.find ("GL_EXT_bindable_uniform") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_color] = (supportedExtensions.find ("GL_EXT_blend_color") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_equation_separate] = (supportedExtensions.find ("GL_EXT_blend_equation_separate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_func_separate] = (supportedExtensions.find ("GL_EXT_blend_func_separate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_logic_op] = (supportedExtensions.find ("GL_EXT_blend_logic_op") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_minmax] = (supportedExtensions.find ("GL_EXT_blend_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_subtract] = (supportedExtensions.find ("GL_EXT_blend_subtract") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_clip_volume_hint] = (supportedExtensions.find ("GL_EXT_clip_volume_hint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_cmyka] = (supportedExtensions.find ("GL_EXT_cmyka") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_color_subtable] = (supportedExtensions.find ("GL_EXT_color_subtable") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_compiled_vertex_array] = (supportedExtensions.find ("GL_EXT_compiled_vertex_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_convolution] = (supportedExtensions.find ("GL_EXT_convolution") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_coordinate_frame] = (supportedExtensions.find ("GL_EXT_coordinate_frame") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_copy_texture] = (supportedExtensions.find ("GL_EXT_copy_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_cull_vertex] = (supportedExtensions.find ("GL_EXT_cull_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_debug_label] = (supportedExtensions.find ("GL_EXT_debug_label") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_debug_marker] = (supportedExtensions.find ("GL_EXT_debug_marker") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_depth_bounds_test] = (supportedExtensions.find ("GL_EXT_depth_bounds_test") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_direct_state_access] = (supportedExtensions.find ("GL_EXT_direct_state_access") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers2] = (supportedExtensions.find ("GL_EXT_draw_buffers2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced] = (supportedExtensions.find ("GL_EXT_draw_instanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_range_elements] = (supportedExtensions.find ("GL_EXT_draw_range_elements") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_external_buffer] = (supportedExtensions.find ("GL_EXT_external_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_fog_coord] = (supportedExtensions.find ("GL_EXT_fog_coord") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate] = (supportedExtensions.find ("GL_EXT_fragment_shading_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit] = (supportedExtensions.find ("GL_EXT_framebuffer_blit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit_layers] = (supportedExtensions.find ("GL_EXT_framebuffer_blit_layers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_multisample] = (supportedExtensions.find ("GL_EXT_framebuffer_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_multisample_blit_scaled] = (supportedExtensions.find ("GL_EXT_framebuffer_multisample_blit_scaled") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_object] = (supportedExtensions.find ("GL_EXT_framebuffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_sRGB] = (supportedExtensions.find ("GL_EXT_framebuffer_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_geometry_shader4] = (supportedExtensions.find ("GL_EXT_geometry_shader4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_gpu_program_parameters] = (supportedExtensions.find ("GL_EXT_gpu_program_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_gpu_shader4] = (supportedExtensions.find ("GL_EXT_gpu_shader4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_histogram] = (supportedExtensions.find ("GL_EXT_histogram") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_index_array_formats] = (supportedExtensions.find ("GL_EXT_index_array_formats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_index_func] = (supportedExtensions.find ("GL_EXT_index_func") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_index_material] = (supportedExtensions.find ("GL_EXT_index_material") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_index_texture] = (supportedExtensions.find ("GL_EXT_index_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_light_texture] = (supportedExtensions.find ("GL_EXT_light_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object] = (supportedExtensions.find ("GL_EXT_memory_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object_fd] = (supportedExtensions.find ("GL_EXT_memory_object_fd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_memory_object_win32] = (supportedExtensions.find ("GL_EXT_memory_object_win32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_mesh_shader] = (supportedExtensions.find ("GL_EXT_mesh_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_misc_attribute] = (supportedExtensions.find ("GL_EXT_misc_attribute") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multi_draw_arrays] = (supportedExtensions.find ("GL_EXT_multi_draw_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multisample] = (supportedExtensions.find ("GL_EXT_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_tessellation_geometry_shader] = (supportedExtensions.find ("GL_EXT_multiview_tessellation_geometry_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_texture_multisample] = (supportedExtensions.find ("GL_EXT_multiview_texture_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multiview_timer_query] = (supportedExtensions.find ("GL_EXT_multiview_timer_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_packed_depth_stencil] = (supportedExtensions.find ("GL_EXT_packed_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_packed_float] = (supportedExtensions.find ("GL_EXT_packed_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_packed_pixels] = (supportedExtensions.find ("GL_EXT_packed_pixels") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_paletted_texture] = (supportedExtensions.find ("GL_EXT_paletted_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_pixel_buffer_object] = (supportedExtensions.find ("GL_EXT_pixel_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_pixel_transform] = (supportedExtensions.find ("GL_EXT_pixel_transform") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_pixel_transform_color_table] = (supportedExtensions.find ("GL_EXT_pixel_transform_color_table") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_point_parameters] = (supportedExtensions.find ("GL_EXT_point_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset] = (supportedExtensions.find ("GL_EXT_polygon_offset") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset_clamp] = (supportedExtensions.find ("GL_EXT_polygon_offset_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_post_depth_coverage] = (supportedExtensions.find ("GL_EXT_post_depth_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_provoking_vertex] = (supportedExtensions.find ("GL_EXT_provoking_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_raster_multisample] = (supportedExtensions.find ("GL_EXT_raster_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_rescale_normal] = (supportedExtensions.find ("GL_EXT_rescale_normal") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore] = (supportedExtensions.find ("GL_EXT_semaphore") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore_fd] = (supportedExtensions.find ("GL_EXT_semaphore_fd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore_win32] = (supportedExtensions.find ("GL_EXT_semaphore_win32") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_secondary_color] = (supportedExtensions.find ("GL_EXT_secondary_color") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects] = (supportedExtensions.find ("GL_EXT_separate_shader_objects") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_separate_specular_color] = (supportedExtensions.find ("GL_EXT_separate_specular_color") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch] = (supportedExtensions.find ("GL_EXT_shader_framebuffer_fetch") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch_non_coherent] = (supportedExtensions.find ("GL_EXT_shader_framebuffer_fetch_non_coherent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_image_load_formatted] = (supportedExtensions.find ("GL_EXT_shader_image_load_formatted") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_image_load_store] = (supportedExtensions.find ("GL_EXT_shader_image_load_store") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_integer_mix] = (supportedExtensions.find ("GL_EXT_shader_integer_mix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_samples_identical] = (supportedExtensions.find ("GL_EXT_shader_samples_identical") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shadow_funcs] = (supportedExtensions.find ("GL_EXT_shadow_funcs") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shared_texture_palette] = (supportedExtensions.find ("GL_EXT_shared_texture_palette") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_sparse_texture2] = (supportedExtensions.find ("GL_EXT_sparse_texture2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_stencil_clear_tag] = (supportedExtensions.find ("GL_EXT_stencil_clear_tag") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_stencil_two_side] = (supportedExtensions.find ("GL_EXT_stencil_two_side") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_stencil_wrap] = (supportedExtensions.find ("GL_EXT_stencil_wrap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_subtexture] = (supportedExtensions.find ("GL_EXT_subtexture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture] = (supportedExtensions.find ("GL_EXT_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture3D] = (supportedExtensions.find ("GL_EXT_texture3D") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_array] = (supportedExtensions.find ("GL_EXT_texture_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer_object] = (supportedExtensions.find ("GL_EXT_texture_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_latc] = (supportedExtensions.find ("GL_EXT_texture_compression_latc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_rgtc] = (supportedExtensions.find ("GL_EXT_texture_compression_rgtc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_compression_s3tc] = (supportedExtensions.find ("GL_EXT_texture_compression_s3tc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_cube_map] = (supportedExtensions.find ("GL_EXT_texture_cube_map") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_env_add] = (supportedExtensions.find ("GL_EXT_texture_env_add") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_env_combine] = (supportedExtensions.find ("GL_EXT_texture_env_combine") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_env_dot3] = (supportedExtensions.find ("GL_EXT_texture_env_dot3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_filter_anisotropic] = (supportedExtensions.find ("GL_EXT_texture_filter_anisotropic") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_filter_minmax] = (supportedExtensions.find ("GL_EXT_texture_filter_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_integer] = (supportedExtensions.find ("GL_EXT_texture_integer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_lod_bias] = (supportedExtensions.find ("GL_EXT_texture_lod_bias") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_mirror_clamp] = (supportedExtensions.find ("GL_EXT_texture_mirror_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_object] = (supportedExtensions.find ("GL_EXT_texture_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_perturb_normal] = (supportedExtensions.find ("GL_EXT_texture_perturb_normal") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB] = (supportedExtensions.find ("GL_EXT_texture_sRGB") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB_R8] = (supportedExtensions.find ("GL_EXT_texture_sRGB_R8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB_RG8] = (supportedExtensions.find ("GL_EXT_texture_sRGB_RG8") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_sRGB_decode] = (supportedExtensions.find ("GL_EXT_texture_sRGB_decode") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_shadow_lod] = (supportedExtensions.find ("GL_EXT_texture_shadow_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_shared_exponent] = (supportedExtensions.find ("GL_EXT_texture_shared_exponent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_snorm] = (supportedExtensions.find ("GL_EXT_texture_snorm") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_storage] = (supportedExtensions.find ("GL_EXT_texture_storage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_swizzle] = (supportedExtensions.find ("GL_EXT_texture_swizzle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore] = (supportedExtensions.find ("GL_NV_timeline_semaphore") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_timer_query] = (supportedExtensions.find ("GL_EXT_timer_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_transform_feedback] = (supportedExtensions.find ("GL_EXT_transform_feedback") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_array] = (supportedExtensions.find ("GL_EXT_vertex_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_array_bgra] = (supportedExtensions.find ("GL_EXT_vertex_array_bgra") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_attrib_64bit] = (supportedExtensions.find ("GL_EXT_vertex_attrib_64bit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_shader] = (supportedExtensions.find ("GL_EXT_vertex_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_weighting] = (supportedExtensions.find ("GL_EXT_vertex_weighting") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_win32_keyed_mutex] = (supportedExtensions.find ("GL_EXT_win32_keyed_mutex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_window_rectangles] = (supportedExtensions.find ("GL_EXT_window_rectangles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_EXT_x11_sync_object] = (supportedExtensions.find ("GL_EXT_x11_sync_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_GREMEDY_frame_terminator] = (supportedExtensions.find ("GL_GREMEDY_frame_terminator") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_GREMEDY_string_marker] = (supportedExtensions.find ("GL_GREMEDY_string_marker") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_HP_convolution_border_modes] = (supportedExtensions.find ("GL_HP_convolution_border_modes") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_HP_image_transform] = (supportedExtensions.find ("GL_HP_image_transform") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_HP_occlusion_test] = (supportedExtensions.find ("GL_HP_occlusion_test") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_HP_texture_lighting] = (supportedExtensions.find ("GL_HP_texture_lighting") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IBM_cull_vertex] = (supportedExtensions.find ("GL_IBM_cull_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IBM_multimode_draw_arrays] = (supportedExtensions.find ("GL_IBM_multimode_draw_arrays") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IBM_rasterpos_clip] = (supportedExtensions.find ("GL_IBM_rasterpos_clip") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IBM_static_data] = (supportedExtensions.find ("GL_IBM_static_data") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IBM_texture_mirrored_repeat] = (supportedExtensions.find ("GL_IBM_texture_mirrored_repeat") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_IBM_vertex_array_lists] = (supportedExtensions.find ("GL_IBM_vertex_array_lists") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INGR_blend_func_separate] = (supportedExtensions.find ("GL_INGR_blend_func_separate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INGR_color_clamp] = (supportedExtensions.find ("GL_INGR_color_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INGR_interlace_read] = (supportedExtensions.find ("GL_INGR_interlace_read") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_conservative_rasterization] = (supportedExtensions.find ("GL_INTEL_conservative_rasterization") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_fragment_shader_ordering] = (supportedExtensions.find ("GL_INTEL_fragment_shader_ordering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_framebuffer_CMAA] = (supportedExtensions.find ("GL_INTEL_framebuffer_CMAA") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_map_texture] = (supportedExtensions.find ("GL_INTEL_map_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_blackhole_render] = (supportedExtensions.find ("GL_INTEL_blackhole_render") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_parallel_arrays] = (supportedExtensions.find ("GL_INTEL_parallel_arrays") != supportedExtensions.end ());
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
  s_deviceConfig.m_featureSupported [GLEW_GL_MESAX_texture_stack] = (supportedExtensions.find ("GL_MESAX_texture_stack") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_x] = (supportedExtensions.find ("GL_MESA_framebuffer_flip_x") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_flip_y] = (supportedExtensions.find ("GL_MESA_framebuffer_flip_y") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_framebuffer_swap_xy] = (supportedExtensions.find ("GL_MESA_framebuffer_swap_xy") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_map_buffer_client_pointer] = (supportedExtensions.find ("GL_MESA_map_buffer_client_pointer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_pack_invert] = (supportedExtensions.find ("GL_MESA_pack_invert") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_program_binary_formats] = (supportedExtensions.find ("GL_MESA_program_binary_formats") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_resize_buffers] = (supportedExtensions.find ("GL_MESA_resize_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_shader_integer_functions] = (supportedExtensions.find ("GL_MESA_shader_integer_functions") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_texture_const_bandwidth] = (supportedExtensions.find ("GL_MESA_texture_const_bandwidth") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_tile_raster_order] = (supportedExtensions.find ("GL_MESA_tile_raster_order") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_window_pos] = (supportedExtensions.find ("GL_MESA_window_pos") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_MESA_ycbcr_texture] = (supportedExtensions.find ("GL_MESA_ycbcr_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_blend_equation_advanced_multi_draw_buffers] = (supportedExtensions.find ("GL_NVX_blend_equation_advanced_multi_draw_buffers") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_conditional_render] = (supportedExtensions.find ("GL_NVX_conditional_render") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_gpu_memory_info] = (supportedExtensions.find ("GL_NVX_gpu_memory_info") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_linked_gpu_multicast] = (supportedExtensions.find ("GL_NVX_linked_gpu_multicast") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_alpha_to_coverage_dither_control] = (supportedExtensions.find ("GL_NV_alpha_to_coverage_dither_control") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_multi_draw_indirect] = (supportedExtensions.find ("GL_NV_bindless_multi_draw_indirect") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_multi_draw_indirect_count] = (supportedExtensions.find ("GL_NV_bindless_multi_draw_indirect_count") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_texture] = (supportedExtensions.find ("GL_NV_bindless_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced] = (supportedExtensions.find ("GL_NV_blend_equation_advanced") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_equation_advanced_coherent] = (supportedExtensions.find ("GL_NV_blend_equation_advanced_coherent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_minmax_factor] = (supportedExtensions.find ("GL_NV_blend_minmax_factor") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_blend_square] = (supportedExtensions.find ("GL_NV_blend_square") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_clip_space_w_scaling] = (supportedExtensions.find ("GL_NV_clip_space_w_scaling") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_command_list] = (supportedExtensions.find ("GL_NV_command_list") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_compute_program5] = (supportedExtensions.find ("GL_NV_compute_program5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_compute_shader_derivatives] = (supportedExtensions.find ("GL_NV_compute_shader_derivatives") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conditional_render] = (supportedExtensions.find ("GL_NV_conditional_render") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster] = (supportedExtensions.find ("GL_NV_conservative_raster") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_dilate] = (supportedExtensions.find ("GL_NV_conservative_raster_dilate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap] = (supportedExtensions.find ("GL_NV_conservative_raster_pre_snap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap_triangles] = (supportedExtensions.find ("GL_NV_conservative_raster_pre_snap_triangles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_underestimation] = (supportedExtensions.find ("GL_NV_conservative_raster_underestimation") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_copy_depth_to_color] = (supportedExtensions.find ("GL_NV_copy_depth_to_color") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_copy_image] = (supportedExtensions.find ("GL_NV_copy_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_deep_texture3D] = (supportedExtensions.find ("GL_NV_deep_texture3D") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_depth_buffer_float] = (supportedExtensions.find ("GL_NV_depth_buffer_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_depth_clamp] = (supportedExtensions.find ("GL_NV_depth_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_texture] = (supportedExtensions.find ("GL_NV_draw_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_vulkan_image] = (supportedExtensions.find ("GL_NV_draw_vulkan_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_evaluators] = (supportedExtensions.find ("GL_NV_evaluators") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_explicit_multisample] = (supportedExtensions.find ("GL_NV_explicit_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fence] = (supportedExtensions.find ("GL_NV_fence") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fill_rectangle] = (supportedExtensions.find ("GL_NV_fill_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_float_buffer] = (supportedExtensions.find ("GL_NV_float_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fog_distance] = (supportedExtensions.find ("GL_NV_fog_distance") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_coverage_to_color] = (supportedExtensions.find ("GL_NV_fragment_coverage_to_color") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_program] = (supportedExtensions.find ("GL_NV_fragment_program") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_program2] = (supportedExtensions.find ("GL_NV_fragment_program2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_program4] = (supportedExtensions.find ("GL_NV_fragment_program4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_program_option] = (supportedExtensions.find ("GL_NV_fragment_program_option") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_shader_barycentric] = (supportedExtensions.find ("GL_NV_fragment_shader_barycentric") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_shader_interlock] = (supportedExtensions.find ("GL_NV_fragment_shader_interlock") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples] = (supportedExtensions.find ("GL_NV_framebuffer_mixed_samples") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_multisample_coverage] = (supportedExtensions.find ("GL_NV_framebuffer_multisample_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_geometry_program4] = (supportedExtensions.find ("GL_NV_geometry_program4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_geometry_shader4] = (supportedExtensions.find ("GL_NV_geometry_shader4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_geometry_shader_passthrough] = (supportedExtensions.find ("GL_NV_geometry_shader_passthrough") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_program4] = (supportedExtensions.find ("GL_NV_gpu_program4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_program5] = (supportedExtensions.find ("GL_NV_gpu_program5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_program5_mem_extended] = (supportedExtensions.find ("GL_NV_gpu_program5_mem_extended") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_shader5] = (supportedExtensions.find ("GL_NV_gpu_shader5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_half_float] = (supportedExtensions.find ("GL_NV_half_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_internalformat_sample_query] = (supportedExtensions.find ("GL_NV_internalformat_sample_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_light_max_exponent] = (supportedExtensions.find ("GL_NV_light_max_exponent") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_multicast] = (supportedExtensions.find ("GL_NV_gpu_multicast") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_gpu_multicast2] = (supportedExtensions.find ("GL_NVX_gpu_multicast2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NVX_progress_fence] = (supportedExtensions.find ("GL_NVX_progress_fence") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_memory_attachment] = (supportedExtensions.find ("GL_NV_memory_attachment") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_memory_object_sparse] = (supportedExtensions.find ("GL_NV_memory_object_sparse") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_mesh_shader] = (supportedExtensions.find ("GL_NV_mesh_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_multisample_coverage] = (supportedExtensions.find ("GL_NV_multisample_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_multisample_filter_hint] = (supportedExtensions.find ("GL_NV_multisample_filter_hint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_occlusion_query] = (supportedExtensions.find ("GL_NV_occlusion_query") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_packed_depth_stencil] = (supportedExtensions.find ("GL_NV_packed_depth_stencil") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_parameter_buffer_object] = (supportedExtensions.find ("GL_NV_parameter_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_parameter_buffer_object2] = (supportedExtensions.find ("GL_NV_parameter_buffer_object2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_path_rendering] = (supportedExtensions.find ("GL_NV_path_rendering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_path_rendering_shared_edge] = (supportedExtensions.find ("GL_NV_path_rendering_shared_edge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_pixel_data_range] = (supportedExtensions.find ("GL_NV_pixel_data_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_point_sprite] = (supportedExtensions.find ("GL_NV_point_sprite") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_present_video] = (supportedExtensions.find ("GL_NV_present_video") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_primitive_restart] = (supportedExtensions.find ("GL_NV_primitive_restart") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_primitive_shading_rate] = (supportedExtensions.find ("GL_NV_primitive_shading_rate") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_query_resource] = (supportedExtensions.find ("GL_NV_query_resource") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_query_resource_tag] = (supportedExtensions.find ("GL_NV_query_resource_tag") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_register_combiners] = (supportedExtensions.find ("GL_NV_register_combiners") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_register_combiners2] = (supportedExtensions.find ("GL_NV_register_combiners2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_representative_fragment_test] = (supportedExtensions.find ("GL_NV_representative_fragment_test") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_robustness_video_memory_purge] = (supportedExtensions.find ("GL_NV_robustness_video_memory_purge") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_sample_locations] = (supportedExtensions.find ("GL_NV_sample_locations") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_sample_mask_override_coverage] = (supportedExtensions.find ("GL_NV_sample_mask_override_coverage") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_scissor_exclusive] = (supportedExtensions.find ("GL_NV_scissor_exclusive") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_atomic_counters] = (supportedExtensions.find ("GL_NV_shader_atomic_counters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_atomic_float] = (supportedExtensions.find ("GL_NV_shader_atomic_float") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_atomic_float64] = (supportedExtensions.find ("GL_NV_shader_atomic_float64") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_atomic_fp16_vector] = (supportedExtensions.find ("GL_NV_shader_atomic_fp16_vector") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_atomic_int64] = (supportedExtensions.find ("GL_NV_shader_atomic_int64") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_buffer_load] = (supportedExtensions.find ("GL_NV_shader_buffer_load") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_buffer_store] = (supportedExtensions.find ("GL_NV_shader_buffer_store") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_storage_buffer_object] = (supportedExtensions.find ("GL_NV_shader_storage_buffer_object") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_subgroup_partitioned] = (supportedExtensions.find ("GL_NV_shader_subgroup_partitioned") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_texture_footprint] = (supportedExtensions.find ("GL_NV_shader_texture_footprint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_thread_group] = (supportedExtensions.find ("GL_NV_shader_thread_group") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_thread_shuffle] = (supportedExtensions.find ("GL_NV_shader_thread_shuffle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_shading_rate_image] = (supportedExtensions.find ("GL_NV_shading_rate_image") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_stereo_view_rendering] = (supportedExtensions.find ("GL_NV_stereo_view_rendering") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_tessellation_program5] = (supportedExtensions.find ("GL_NV_tessellation_program5") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texgen_emboss] = (supportedExtensions.find ("GL_NV_texgen_emboss") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texgen_reflection] = (supportedExtensions.find ("GL_NV_texgen_reflection") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_barrier] = (supportedExtensions.find ("GL_NV_texture_barrier") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_compression_vtc] = (supportedExtensions.find ("GL_NV_texture_compression_vtc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_env_combine4] = (supportedExtensions.find ("GL_NV_texture_env_combine4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_expand_normal] = (supportedExtensions.find ("GL_NV_texture_expand_normal") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_multisample] = (supportedExtensions.find ("GL_NV_texture_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_rectangle] = (supportedExtensions.find ("GL_NV_texture_rectangle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_rectangle_compressed] = (supportedExtensions.find ("GL_NV_texture_rectangle_compressed") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_shader] = (supportedExtensions.find ("GL_NV_texture_shader") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_shader2] = (supportedExtensions.find ("GL_NV_texture_shader2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_shader3] = (supportedExtensions.find ("GL_NV_texture_shader3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_transform_feedback] = (supportedExtensions.find ("GL_NV_transform_feedback") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_transform_feedback2] = (supportedExtensions.find ("GL_NV_transform_feedback2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_uniform_buffer_std430_layout] = (supportedExtensions.find ("GL_NV_uniform_buffer_std430_layout") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_uniform_buffer_unified_memory] = (supportedExtensions.find ("GL_NV_uniform_buffer_unified_memory") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vdpau_interop] = (supportedExtensions.find ("GL_NV_vdpau_interop") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vdpau_interop2] = (supportedExtensions.find ("GL_NV_vdpau_interop2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_array_range] = (supportedExtensions.find ("GL_NV_vertex_array_range") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_array_range2] = (supportedExtensions.find ("GL_NV_vertex_array_range2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_attrib_integer_64bit] = (supportedExtensions.find ("GL_NV_vertex_attrib_integer_64bit") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_buffer_unified_memory] = (supportedExtensions.find ("GL_NV_vertex_buffer_unified_memory") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program] = (supportedExtensions.find ("GL_NV_vertex_program") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program1_1] = (supportedExtensions.find ("GL_NV_vertex_program1_1") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program2] = (supportedExtensions.find ("GL_NV_vertex_program2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program2_option] = (supportedExtensions.find ("GL_NV_vertex_program2_option") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program3] = (supportedExtensions.find ("GL_NV_vertex_program3") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program4] = (supportedExtensions.find ("GL_NV_vertex_program4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_video_capture] = (supportedExtensions.find ("GL_NV_video_capture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_array2] = (supportedExtensions.find ("GL_NV_viewport_array2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_swizzle] = (supportedExtensions.find ("GL_NV_viewport_swizzle") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_byte_coordinates] = (supportedExtensions.find ("GL_OES_byte_coordinates") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_compressed_paletted_texture] = (supportedExtensions.find ("GL_OES_compressed_paletted_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_fixed_point] = (supportedExtensions.find ("GL_OES_fixed_point") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_query_matrix] = (supportedExtensions.find ("GL_OES_query_matrix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_read_format] = (supportedExtensions.find ("GL_OES_read_format") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OES_single_precision] = (supportedExtensions.find ("GL_OES_single_precision") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OML_interlace] = (supportedExtensions.find ("GL_OML_interlace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OML_resample] = (supportedExtensions.find ("GL_OML_resample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OML_subsample] = (supportedExtensions.find ("GL_OML_subsample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview] = (supportedExtensions.find ("GL_OVR_multiview") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview2] = (supportedExtensions.find ("GL_OVR_multiview2") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_PGI_misc_hints] = (supportedExtensions.find ("GL_PGI_misc_hints") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_PGI_vertex_hints] = (supportedExtensions.find ("GL_PGI_vertex_hints") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_REND_screen_coordinates] = (supportedExtensions.find ("GL_REND_screen_coordinates") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_S3_s3tc] = (supportedExtensions.find ("GL_S3_s3tc") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_detail_texture] = (supportedExtensions.find ("GL_SGIS_detail_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_fog_function] = (supportedExtensions.find ("GL_SGIS_fog_function") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_generate_mipmap] = (supportedExtensions.find ("GL_SGIS_generate_mipmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_multisample] = (supportedExtensions.find ("GL_SGIS_multisample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_pixel_texture] = (supportedExtensions.find ("GL_SGIS_pixel_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_point_line_texgen] = (supportedExtensions.find ("GL_SGIS_point_line_texgen") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_point_parameters] = (supportedExtensions.find ("GL_SGIS_point_parameters") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_sharpen_texture] = (supportedExtensions.find ("GL_SGIS_sharpen_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture4D] = (supportedExtensions.find ("GL_SGIS_texture4D") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_border_clamp] = (supportedExtensions.find ("GL_SGIS_texture_border_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_color_mask] = (supportedExtensions.find ("GL_SGIS_texture_color_mask") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_edge_clamp] = (supportedExtensions.find ("GL_SGIS_texture_edge_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_filter4] = (supportedExtensions.find ("GL_SGIS_texture_filter4") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_lod] = (supportedExtensions.find ("GL_SGIS_texture_lod") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_select] = (supportedExtensions.find ("GL_SGIS_texture_select") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_async] = (supportedExtensions.find ("GL_SGIX_async") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_async_histogram] = (supportedExtensions.find ("GL_SGIX_async_histogram") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_async_pixel] = (supportedExtensions.find ("GL_SGIX_async_pixel") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_blend_alpha_minmax] = (supportedExtensions.find ("GL_SGIX_blend_alpha_minmax") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_calligraphic_fragment] = (supportedExtensions.find ("GL_SGIX_calligraphic_fragment") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_clipmap] = (supportedExtensions.find ("GL_SGIX_clipmap") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_convolution_accuracy] = (supportedExtensions.find ("GL_SGIX_convolution_accuracy") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_depth_pass_instrument] = (supportedExtensions.find ("GL_SGIX_depth_pass_instrument") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_depth_texture] = (supportedExtensions.find ("GL_SGIX_depth_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_flush_raster] = (supportedExtensions.find ("GL_SGIX_flush_raster") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_fog_offset] = (supportedExtensions.find ("GL_SGIX_fog_offset") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_fragment_lighting] = (supportedExtensions.find ("GL_SGIX_fragment_lighting") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_framezoom] = (supportedExtensions.find ("GL_SGIX_framezoom") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_igloo_interface] = (supportedExtensions.find ("GL_SGIX_igloo_interface") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_instruments] = (supportedExtensions.find ("GL_SGIX_instruments") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_interlace] = (supportedExtensions.find ("GL_SGIX_interlace") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_ir_instrument1] = (supportedExtensions.find ("GL_SGIX_ir_instrument1") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_list_priority] = (supportedExtensions.find ("GL_SGIX_list_priority") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_pixel_texture] = (supportedExtensions.find ("GL_SGIX_pixel_texture") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_pixel_tiles] = (supportedExtensions.find ("GL_SGIX_pixel_tiles") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_polynomial_ffd] = (supportedExtensions.find ("GL_SGIX_polynomial_ffd") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_reference_plane] = (supportedExtensions.find ("GL_SGIX_reference_plane") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_resample] = (supportedExtensions.find ("GL_SGIX_resample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_scalebias_hint] = (supportedExtensions.find ("GL_SGIX_scalebias_hint") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_shadow] = (supportedExtensions.find ("GL_SGIX_shadow") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_shadow_ambient] = (supportedExtensions.find ("GL_SGIX_shadow_ambient") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_sprite] = (supportedExtensions.find ("GL_SGIX_sprite") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_subsample] = (supportedExtensions.find ("GL_SGIX_subsample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_tag_sample_buffer] = (supportedExtensions.find ("GL_SGIX_tag_sample_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_texture_add_env] = (supportedExtensions.find ("GL_SGIX_texture_add_env") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_texture_coordinate_clamp] = (supportedExtensions.find ("GL_SGIX_texture_coordinate_clamp") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_texture_lod_bias] = (supportedExtensions.find ("GL_SGIX_texture_lod_bias") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_texture_multi_buffer] = (supportedExtensions.find ("GL_SGIX_texture_multi_buffer") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_texture_scale_bias] = (supportedExtensions.find ("GL_SGIX_texture_scale_bias") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_vertex_preclip] = (supportedExtensions.find ("GL_SGIX_vertex_preclip") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_ycrcb] = (supportedExtensions.find ("GL_SGIX_ycrcb") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_ycrcb_subsample] = (supportedExtensions.find ("GL_SGIX_ycrcb_subsample") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_ycrcba] = (supportedExtensions.find ("GL_SGIX_ycrcba") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGI_color_matrix] = (supportedExtensions.find ("GL_SGI_color_matrix") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGI_color_table] = (supportedExtensions.find ("GL_SGI_color_table") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SGI_texture_color_table] = (supportedExtensions.find ("GL_SGI_texture_color_table") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUNX_constant_data] = (supportedExtensions.find ("GL_SUNX_constant_data") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUN_convolution_border_modes] = (supportedExtensions.find ("GL_SUN_convolution_border_modes") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUN_global_alpha] = (supportedExtensions.find ("GL_SUN_global_alpha") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUN_mesh_array] = (supportedExtensions.find ("GL_SUN_mesh_array") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUN_slice_accum] = (supportedExtensions.find ("GL_SUN_slice_accum") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUN_triangle_list] = (supportedExtensions.find ("GL_SUN_triangle_list") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_SUN_vertex] = (supportedExtensions.find ("GL_SUN_vertex") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_WIN_phong_shading] = (supportedExtensions.find ("GL_WIN_phong_shading") != supportedExtensions.end ());
  s_deviceConfig.m_featureSupported [GLEW_GL_WIN_specular_fog] = (supportedExtensions.find ("GL_WIN_specular_fog") != supportedExtensions.end ());

  // GL_VERSION_1_1
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_1])
  {
    s_deviceConfig.m_glDrawArrays = (PFNGLDRAWARRAYSPROC) glewGetProcAddress ("glDrawArrays");
    s_deviceConfig.m_glDrawElements = (PFNGLDRAWELEMENTSPROC) glewGetProcAddress ("glDrawElements");
    s_deviceConfig.m_glGetPointerv = (PFNGLGETPOINTERVPROC) glewGetProcAddress ("glGetPointerv");
    s_deviceConfig.m_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) glewGetProcAddress ("glPolygonOffset");
    s_deviceConfig.m_glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC) glewGetProcAddress ("glCopyTexImage1D");
    s_deviceConfig.m_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) glewGetProcAddress ("glCopyTexImage2D");
    s_deviceConfig.m_glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC) glewGetProcAddress ("glCopyTexSubImage1D");
    s_deviceConfig.m_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) glewGetProcAddress ("glCopyTexSubImage2D");
    s_deviceConfig.m_glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC) glewGetProcAddress ("glTexSubImage1D");
    s_deviceConfig.m_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) glewGetProcAddress ("glTexSubImage2D");
    s_deviceConfig.m_glBindTexture = (PFNGLBINDTEXTUREPROC) glewGetProcAddress ("glBindTexture");
    s_deviceConfig.m_glDeleteTextures = (PFNGLDELETETEXTURESPROC) glewGetProcAddress ("glDeleteTextures");
    s_deviceConfig.m_glGenTextures = (PFNGLGENTEXTURESPROC) glewGetProcAddress ("glGenTextures");
    s_deviceConfig.m_glIsTexture = (PFNGLISTEXTUREPROC) glewGetProcAddress ("glIsTexture");
    s_deviceConfig.m_glArrayElement = (PFNGLARRAYELEMENTPROC) glewGetProcAddress ("glArrayElement");
    s_deviceConfig.m_glColorPointer = (PFNGLCOLORPOINTERPROC) glewGetProcAddress ("glColorPointer");
    s_deviceConfig.m_glDisableClientState = (PFNGLDISABLECLIENTSTATEPROC) glewGetProcAddress ("glDisableClientState");
    s_deviceConfig.m_glEdgeFlagPointer = (PFNGLEDGEFLAGPOINTERPROC) glewGetProcAddress ("glEdgeFlagPointer");
    s_deviceConfig.m_glEnableClientState = (PFNGLENABLECLIENTSTATEPROC) glewGetProcAddress ("glEnableClientState");
    s_deviceConfig.m_glIndexPointer = (PFNGLINDEXPOINTERPROC) glewGetProcAddress ("glIndexPointer");
    s_deviceConfig.m_glInterleavedArrays = (PFNGLINTERLEAVEDARRAYSPROC) glewGetProcAddress ("glInterleavedArrays");
    s_deviceConfig.m_glNormalPointer = (PFNGLNORMALPOINTERPROC) glewGetProcAddress ("glNormalPointer");
    s_deviceConfig.m_glTexCoordPointer = (PFNGLTEXCOORDPOINTERPROC) glewGetProcAddress ("glTexCoordPointer");
    s_deviceConfig.m_glVertexPointer = (PFNGLVERTEXPOINTERPROC) glewGetProcAddress ("glVertexPointer");
    s_deviceConfig.m_glAreTexturesResident = (PFNGLARETEXTURESRESIDENTPROC) glewGetProcAddress ("glAreTexturesResident");
    s_deviceConfig.m_glPrioritizeTextures = (PFNGLPRIORITIZETEXTURESPROC) glewGetProcAddress ("glPrioritizeTextures");
    s_deviceConfig.m_glIndexub = (PFNGLINDEXUBPROC) glewGetProcAddress ("glIndexub");
    s_deviceConfig.m_glIndexubv = (PFNGLINDEXUBVPROC) glewGetProcAddress ("glIndexubv");
    s_deviceConfig.m_glPopClientAttrib = (PFNGLPOPCLIENTATTRIBPROC) glewGetProcAddress ("glPopClientAttrib");
    s_deviceConfig.m_glPushClientAttrib = (PFNGLPUSHCLIENTATTRIBPROC) glewGetProcAddress ("glPushClientAttrib");
  }

  // GL_VERSION_1_2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_2])
  {
    s_deviceConfig.m_glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) glewGetProcAddress ("glDrawRangeElements");
    s_deviceConfig.m_glTexImage3D = (PFNGLTEXIMAGE3DPROC) glewGetProcAddress ("glTexImage3D");
    s_deviceConfig.m_glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) glewGetProcAddress ("glTexSubImage3D");
    s_deviceConfig.m_glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) glewGetProcAddress ("glCopyTexSubImage3D");
  }

  // GL_VERSION_1_3
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_3])
  {
    s_deviceConfig.m_glActiveTexture = (PFNGLACTIVETEXTUREPROC) glewGetProcAddress ("glActiveTexture");
    s_deviceConfig.m_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) glewGetProcAddress ("glSampleCoverage");
    s_deviceConfig.m_glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) glewGetProcAddress ("glCompressedTexImage3D");
    s_deviceConfig.m_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) glewGetProcAddress ("glCompressedTexImage2D");
    s_deviceConfig.m_glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) glewGetProcAddress ("glCompressedTexImage1D");
    s_deviceConfig.m_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) glewGetProcAddress ("glCompressedTexSubImage3D");
    s_deviceConfig.m_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) glewGetProcAddress ("glCompressedTexSubImage2D");
    s_deviceConfig.m_glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) glewGetProcAddress ("glCompressedTexSubImage1D");
    s_deviceConfig.m_glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) glewGetProcAddress ("glGetCompressedTexImage");
    s_deviceConfig.m_glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC) glewGetProcAddress ("glClientActiveTexture");
    s_deviceConfig.m_glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC) glewGetProcAddress ("glMultiTexCoord1d");
    s_deviceConfig.m_glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC) glewGetProcAddress ("glMultiTexCoord1dv");
    s_deviceConfig.m_glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC) glewGetProcAddress ("glMultiTexCoord1f");
    s_deviceConfig.m_glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC) glewGetProcAddress ("glMultiTexCoord1fv");
    s_deviceConfig.m_glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC) glewGetProcAddress ("glMultiTexCoord1i");
    s_deviceConfig.m_glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC) glewGetProcAddress ("glMultiTexCoord1iv");
    s_deviceConfig.m_glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC) glewGetProcAddress ("glMultiTexCoord1s");
    s_deviceConfig.m_glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC) glewGetProcAddress ("glMultiTexCoord1sv");
    s_deviceConfig.m_glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC) glewGetProcAddress ("glMultiTexCoord2d");
    s_deviceConfig.m_glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC) glewGetProcAddress ("glMultiTexCoord2dv");
    s_deviceConfig.m_glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC) glewGetProcAddress ("glMultiTexCoord2f");
    s_deviceConfig.m_glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC) glewGetProcAddress ("glMultiTexCoord2fv");
    s_deviceConfig.m_glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC) glewGetProcAddress ("glMultiTexCoord2i");
    s_deviceConfig.m_glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC) glewGetProcAddress ("glMultiTexCoord2iv");
    s_deviceConfig.m_glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC) glewGetProcAddress ("glMultiTexCoord2s");
    s_deviceConfig.m_glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC) glewGetProcAddress ("glMultiTexCoord2sv");
    s_deviceConfig.m_glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC) glewGetProcAddress ("glMultiTexCoord3d");
    s_deviceConfig.m_glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC) glewGetProcAddress ("glMultiTexCoord3dv");
    s_deviceConfig.m_glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC) glewGetProcAddress ("glMultiTexCoord3f");
    s_deviceConfig.m_glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC) glewGetProcAddress ("glMultiTexCoord3fv");
    s_deviceConfig.m_glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC) glewGetProcAddress ("glMultiTexCoord3i");
    s_deviceConfig.m_glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC) glewGetProcAddress ("glMultiTexCoord3iv");
    s_deviceConfig.m_glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC) glewGetProcAddress ("glMultiTexCoord3s");
    s_deviceConfig.m_glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC) glewGetProcAddress ("glMultiTexCoord3sv");
    s_deviceConfig.m_glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC) glewGetProcAddress ("glMultiTexCoord4d");
    s_deviceConfig.m_glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC) glewGetProcAddress ("glMultiTexCoord4dv");
    s_deviceConfig.m_glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC) glewGetProcAddress ("glMultiTexCoord4f");
    s_deviceConfig.m_glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC) glewGetProcAddress ("glMultiTexCoord4fv");
    s_deviceConfig.m_glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC) glewGetProcAddress ("glMultiTexCoord4i");
    s_deviceConfig.m_glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC) glewGetProcAddress ("glMultiTexCoord4iv");
    s_deviceConfig.m_glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC) glewGetProcAddress ("glMultiTexCoord4s");
    s_deviceConfig.m_glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC) glewGetProcAddress ("glMultiTexCoord4sv");
    s_deviceConfig.m_glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC) glewGetProcAddress ("glLoadTransposeMatrixf");
    s_deviceConfig.m_glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC) glewGetProcAddress ("glLoadTransposeMatrixd");
    s_deviceConfig.m_glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC) glewGetProcAddress ("glMultTransposeMatrixf");
    s_deviceConfig.m_glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC) glewGetProcAddress ("glMultTransposeMatrixd");
  }

  // GL_VERSION_1_4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_4])
  {
    s_deviceConfig.m_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) glewGetProcAddress ("glBlendFuncSeparate");
    s_deviceConfig.m_glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) glewGetProcAddress ("glMultiDrawArrays");
    s_deviceConfig.m_glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) glewGetProcAddress ("glMultiDrawElements");
    s_deviceConfig.m_glPointParameterf = (PFNGLPOINTPARAMETERFPROC) glewGetProcAddress ("glPointParameterf");
    s_deviceConfig.m_glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC) glewGetProcAddress ("glPointParameterfv");
    s_deviceConfig.m_glPointParameteri = (PFNGLPOINTPARAMETERIPROC) glewGetProcAddress ("glPointParameteri");
    s_deviceConfig.m_glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC) glewGetProcAddress ("glPointParameteriv");
    s_deviceConfig.m_glFogCoordf = (PFNGLFOGCOORDFPROC) glewGetProcAddress ("glFogCoordf");
    s_deviceConfig.m_glFogCoordfv = (PFNGLFOGCOORDFVPROC) glewGetProcAddress ("glFogCoordfv");
    s_deviceConfig.m_glFogCoordd = (PFNGLFOGCOORDDPROC) glewGetProcAddress ("glFogCoordd");
    s_deviceConfig.m_glFogCoorddv = (PFNGLFOGCOORDDVPROC) glewGetProcAddress ("glFogCoorddv");
    s_deviceConfig.m_glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC) glewGetProcAddress ("glFogCoordPointer");
    s_deviceConfig.m_glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC) glewGetProcAddress ("glSecondaryColor3b");
    s_deviceConfig.m_glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC) glewGetProcAddress ("glSecondaryColor3bv");
    s_deviceConfig.m_glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC) glewGetProcAddress ("glSecondaryColor3d");
    s_deviceConfig.m_glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC) glewGetProcAddress ("glSecondaryColor3dv");
    s_deviceConfig.m_glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC) glewGetProcAddress ("glSecondaryColor3f");
    s_deviceConfig.m_glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC) glewGetProcAddress ("glSecondaryColor3fv");
    s_deviceConfig.m_glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC) glewGetProcAddress ("glSecondaryColor3i");
    s_deviceConfig.m_glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC) glewGetProcAddress ("glSecondaryColor3iv");
    s_deviceConfig.m_glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC) glewGetProcAddress ("glSecondaryColor3s");
    s_deviceConfig.m_glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC) glewGetProcAddress ("glSecondaryColor3sv");
    s_deviceConfig.m_glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC) glewGetProcAddress ("glSecondaryColor3ub");
    s_deviceConfig.m_glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC) glewGetProcAddress ("glSecondaryColor3ubv");
    s_deviceConfig.m_glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC) glewGetProcAddress ("glSecondaryColor3ui");
    s_deviceConfig.m_glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC) glewGetProcAddress ("glSecondaryColor3uiv");
    s_deviceConfig.m_glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC) glewGetProcAddress ("glSecondaryColor3us");
    s_deviceConfig.m_glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC) glewGetProcAddress ("glSecondaryColor3usv");
    s_deviceConfig.m_glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC) glewGetProcAddress ("glSecondaryColorPointer");
    s_deviceConfig.m_glWindowPos2d = (PFNGLWINDOWPOS2DPROC) glewGetProcAddress ("glWindowPos2d");
    s_deviceConfig.m_glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC) glewGetProcAddress ("glWindowPos2dv");
    s_deviceConfig.m_glWindowPos2f = (PFNGLWINDOWPOS2FPROC) glewGetProcAddress ("glWindowPos2f");
    s_deviceConfig.m_glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC) glewGetProcAddress ("glWindowPos2fv");
    s_deviceConfig.m_glWindowPos2i = (PFNGLWINDOWPOS2IPROC) glewGetProcAddress ("glWindowPos2i");
    s_deviceConfig.m_glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC) glewGetProcAddress ("glWindowPos2iv");
    s_deviceConfig.m_glWindowPos2s = (PFNGLWINDOWPOS2SPROC) glewGetProcAddress ("glWindowPos2s");
    s_deviceConfig.m_glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC) glewGetProcAddress ("glWindowPos2sv");
    s_deviceConfig.m_glWindowPos3d = (PFNGLWINDOWPOS3DPROC) glewGetProcAddress ("glWindowPos3d");
    s_deviceConfig.m_glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC) glewGetProcAddress ("glWindowPos3dv");
    s_deviceConfig.m_glWindowPos3f = (PFNGLWINDOWPOS3FPROC) glewGetProcAddress ("glWindowPos3f");
    s_deviceConfig.m_glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC) glewGetProcAddress ("glWindowPos3fv");
    s_deviceConfig.m_glWindowPos3i = (PFNGLWINDOWPOS3IPROC) glewGetProcAddress ("glWindowPos3i");
    s_deviceConfig.m_glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC) glewGetProcAddress ("glWindowPos3iv");
    s_deviceConfig.m_glWindowPos3s = (PFNGLWINDOWPOS3SPROC) glewGetProcAddress ("glWindowPos3s");
    s_deviceConfig.m_glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC) glewGetProcAddress ("glWindowPos3sv");
    s_deviceConfig.m_glBlendColor = (PFNGLBLENDCOLORPROC) glewGetProcAddress ("glBlendColor");
    s_deviceConfig.m_glBlendEquation = (PFNGLBLENDEQUATIONPROC) glewGetProcAddress ("glBlendEquation");
  }

  // GL_VERSION_1_5
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_1_5])
  {
    s_deviceConfig.m_glGenQueries = (PFNGLGENQUERIESPROC) glewGetProcAddress ("glGenQueries");
    s_deviceConfig.m_glDeleteQueries = (PFNGLDELETEQUERIESPROC) glewGetProcAddress ("glDeleteQueries");
    s_deviceConfig.m_glIsQuery = (PFNGLISQUERYPROC) glewGetProcAddress ("glIsQuery");
    s_deviceConfig.m_glBeginQuery = (PFNGLBEGINQUERYPROC) glewGetProcAddress ("glBeginQuery");
    s_deviceConfig.m_glEndQuery = (PFNGLENDQUERYPROC) glewGetProcAddress ("glEndQuery");
    s_deviceConfig.m_glGetQueryiv = (PFNGLGETQUERYIVPROC) glewGetProcAddress ("glGetQueryiv");
    s_deviceConfig.m_glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) glewGetProcAddress ("glGetQueryObjectiv");
    s_deviceConfig.m_glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) glewGetProcAddress ("glGetQueryObjectuiv");
    s_deviceConfig.m_glBindBuffer = (PFNGLBINDBUFFERPROC) glewGetProcAddress ("glBindBuffer");
    s_deviceConfig.m_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) glewGetProcAddress ("glDeleteBuffers");
    s_deviceConfig.m_glGenBuffers = (PFNGLGENBUFFERSPROC) glewGetProcAddress ("glGenBuffers");
    s_deviceConfig.m_glIsBuffer = (PFNGLISBUFFERPROC) glewGetProcAddress ("glIsBuffer");
    s_deviceConfig.m_glBufferData = (PFNGLBUFFERDATAPROC) glewGetProcAddress ("glBufferData");
    s_deviceConfig.m_glBufferSubData = (PFNGLBUFFERSUBDATAPROC) glewGetProcAddress ("glBufferSubData");
    s_deviceConfig.m_glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) glewGetProcAddress ("glGetBufferSubData");
    s_deviceConfig.m_glMapBuffer = (PFNGLMAPBUFFERPROC) glewGetProcAddress ("glMapBuffer");
    s_deviceConfig.m_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) glewGetProcAddress ("glUnmapBuffer");
    s_deviceConfig.m_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetBufferParameteriv");
    s_deviceConfig.m_glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) glewGetProcAddress ("glGetBufferPointerv");
  }

  // GL_VERSION_2_0
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_2_0])
  {
    s_deviceConfig.m_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) glewGetProcAddress ("glBlendEquationSeparate");
    s_deviceConfig.m_glDrawBuffers = (PFNGLDRAWBUFFERSPROC) glewGetProcAddress ("glDrawBuffers");
    s_deviceConfig.m_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) glewGetProcAddress ("glStencilOpSeparate");
    s_deviceConfig.m_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) glewGetProcAddress ("glStencilFuncSeparate");
    s_deviceConfig.m_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) glewGetProcAddress ("glStencilMaskSeparate");
    s_deviceConfig.m_glAttachShader = (PFNGLATTACHSHADERPROC) glewGetProcAddress ("glAttachShader");
    s_deviceConfig.m_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) glewGetProcAddress ("glBindAttribLocation");
    s_deviceConfig.m_glCompileShader = (PFNGLCOMPILESHADERPROC) glewGetProcAddress ("glCompileShader");
    s_deviceConfig.m_glCreateProgram = (PFNGLCREATEPROGRAMPROC) glewGetProcAddress ("glCreateProgram");
    s_deviceConfig.m_glCreateShader = (PFNGLCREATESHADERPROC) glewGetProcAddress ("glCreateShader");
    s_deviceConfig.m_glDeleteProgram = (PFNGLDELETEPROGRAMPROC) glewGetProcAddress ("glDeleteProgram");
    s_deviceConfig.m_glDeleteShader = (PFNGLDELETESHADERPROC) glewGetProcAddress ("glDeleteShader");
    s_deviceConfig.m_glDetachShader = (PFNGLDETACHSHADERPROC) glewGetProcAddress ("glDetachShader");
    s_deviceConfig.m_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) glewGetProcAddress ("glDisableVertexAttribArray");
    s_deviceConfig.m_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) glewGetProcAddress ("glEnableVertexAttribArray");
    s_deviceConfig.m_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) glewGetProcAddress ("glGetActiveAttrib");
    s_deviceConfig.m_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) glewGetProcAddress ("glGetActiveUniform");
    s_deviceConfig.m_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) glewGetProcAddress ("glGetAttachedShaders");
    s_deviceConfig.m_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) glewGetProcAddress ("glGetAttribLocation");
    s_deviceConfig.m_glGetProgramiv = (PFNGLGETPROGRAMIVPROC) glewGetProcAddress ("glGetProgramiv");
    s_deviceConfig.m_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) glewGetProcAddress ("glGetProgramInfoLog");
    s_deviceConfig.m_glGetShaderiv = (PFNGLGETSHADERIVPROC) glewGetProcAddress ("glGetShaderiv");
    s_deviceConfig.m_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) glewGetProcAddress ("glGetShaderInfoLog");
    s_deviceConfig.m_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) glewGetProcAddress ("glGetShaderSource");
    s_deviceConfig.m_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) glewGetProcAddress ("glGetUniformLocation");
    s_deviceConfig.m_glGetUniformfv = (PFNGLGETUNIFORMFVPROC) glewGetProcAddress ("glGetUniformfv");
    s_deviceConfig.m_glGetUniformiv = (PFNGLGETUNIFORMIVPROC) glewGetProcAddress ("glGetUniformiv");
    s_deviceConfig.m_glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) glewGetProcAddress ("glGetVertexAttribdv");
    s_deviceConfig.m_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) glewGetProcAddress ("glGetVertexAttribfv");
    s_deviceConfig.m_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) glewGetProcAddress ("glGetVertexAttribiv");
    s_deviceConfig.m_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) glewGetProcAddress ("glGetVertexAttribPointerv");
    s_deviceConfig.m_glIsProgram = (PFNGLISPROGRAMPROC) glewGetProcAddress ("glIsProgram");
    s_deviceConfig.m_glIsShader = (PFNGLISSHADERPROC) glewGetProcAddress ("glIsShader");
    s_deviceConfig.m_glLinkProgram = (PFNGLLINKPROGRAMPROC) glewGetProcAddress ("glLinkProgram");
    s_deviceConfig.m_glShaderSource = (PFNGLSHADERSOURCEPROC) glewGetProcAddress ("glShaderSource");
    s_deviceConfig.m_glUseProgram = (PFNGLUSEPROGRAMPROC) glewGetProcAddress ("glUseProgram");
    s_deviceConfig.m_glUniform1f = (PFNGLUNIFORM1FPROC) glewGetProcAddress ("glUniform1f");
    s_deviceConfig.m_glUniform2f = (PFNGLUNIFORM2FPROC) glewGetProcAddress ("glUniform2f");
    s_deviceConfig.m_glUniform3f = (PFNGLUNIFORM3FPROC) glewGetProcAddress ("glUniform3f");
    s_deviceConfig.m_glUniform4f = (PFNGLUNIFORM4FPROC) glewGetProcAddress ("glUniform4f");
    s_deviceConfig.m_glUniform1i = (PFNGLUNIFORM1IPROC) glewGetProcAddress ("glUniform1i");
    s_deviceConfig.m_glUniform2i = (PFNGLUNIFORM2IPROC) glewGetProcAddress ("glUniform2i");
    s_deviceConfig.m_glUniform3i = (PFNGLUNIFORM3IPROC) glewGetProcAddress ("glUniform3i");
    s_deviceConfig.m_glUniform4i = (PFNGLUNIFORM4IPROC) glewGetProcAddress ("glUniform4i");
    s_deviceConfig.m_glUniform1fv = (PFNGLUNIFORM1FVPROC) glewGetProcAddress ("glUniform1fv");
    s_deviceConfig.m_glUniform2fv = (PFNGLUNIFORM2FVPROC) glewGetProcAddress ("glUniform2fv");
    s_deviceConfig.m_glUniform3fv = (PFNGLUNIFORM3FVPROC) glewGetProcAddress ("glUniform3fv");
    s_deviceConfig.m_glUniform4fv = (PFNGLUNIFORM4FVPROC) glewGetProcAddress ("glUniform4fv");
    s_deviceConfig.m_glUniform1iv = (PFNGLUNIFORM1IVPROC) glewGetProcAddress ("glUniform1iv");
    s_deviceConfig.m_glUniform2iv = (PFNGLUNIFORM2IVPROC) glewGetProcAddress ("glUniform2iv");
    s_deviceConfig.m_glUniform3iv = (PFNGLUNIFORM3IVPROC) glewGetProcAddress ("glUniform3iv");
    s_deviceConfig.m_glUniform4iv = (PFNGLUNIFORM4IVPROC) glewGetProcAddress ("glUniform4iv");
    s_deviceConfig.m_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) glewGetProcAddress ("glUniformMatrix2fv");
    s_deviceConfig.m_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) glewGetProcAddress ("glUniformMatrix3fv");
    s_deviceConfig.m_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) glewGetProcAddress ("glUniformMatrix4fv");
    s_deviceConfig.m_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) glewGetProcAddress ("glValidateProgram");
    s_deviceConfig.m_glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) glewGetProcAddress ("glVertexAttrib1d");
    s_deviceConfig.m_glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) glewGetProcAddress ("glVertexAttrib1dv");
    s_deviceConfig.m_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) glewGetProcAddress ("glVertexAttrib1f");
    s_deviceConfig.m_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) glewGetProcAddress ("glVertexAttrib1fv");
    s_deviceConfig.m_glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) glewGetProcAddress ("glVertexAttrib1s");
    s_deviceConfig.m_glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) glewGetProcAddress ("glVertexAttrib1sv");
    s_deviceConfig.m_glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) glewGetProcAddress ("glVertexAttrib2d");
    s_deviceConfig.m_glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) glewGetProcAddress ("glVertexAttrib2dv");
    s_deviceConfig.m_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) glewGetProcAddress ("glVertexAttrib2f");
    s_deviceConfig.m_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) glewGetProcAddress ("glVertexAttrib2fv");
    s_deviceConfig.m_glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) glewGetProcAddress ("glVertexAttrib2s");
    s_deviceConfig.m_glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) glewGetProcAddress ("glVertexAttrib2sv");
    s_deviceConfig.m_glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) glewGetProcAddress ("glVertexAttrib3d");
    s_deviceConfig.m_glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) glewGetProcAddress ("glVertexAttrib3dv");
    s_deviceConfig.m_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) glewGetProcAddress ("glVertexAttrib3f");
    s_deviceConfig.m_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) glewGetProcAddress ("glVertexAttrib3fv");
    s_deviceConfig.m_glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) glewGetProcAddress ("glVertexAttrib3s");
    s_deviceConfig.m_glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) glewGetProcAddress ("glVertexAttrib3sv");
    s_deviceConfig.m_glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) glewGetProcAddress ("glVertexAttrib4Nbv");
    s_deviceConfig.m_glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) glewGetProcAddress ("glVertexAttrib4Niv");
    s_deviceConfig.m_glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) glewGetProcAddress ("glVertexAttrib4Nsv");
    s_deviceConfig.m_glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) glewGetProcAddress ("glVertexAttrib4Nub");
    s_deviceConfig.m_glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) glewGetProcAddress ("glVertexAttrib4Nubv");
    s_deviceConfig.m_glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) glewGetProcAddress ("glVertexAttrib4Nuiv");
    s_deviceConfig.m_glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) glewGetProcAddress ("glVertexAttrib4Nusv");
    s_deviceConfig.m_glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) glewGetProcAddress ("glVertexAttrib4bv");
    s_deviceConfig.m_glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) glewGetProcAddress ("glVertexAttrib4d");
    s_deviceConfig.m_glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) glewGetProcAddress ("glVertexAttrib4dv");
    s_deviceConfig.m_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) glewGetProcAddress ("glVertexAttrib4f");
    s_deviceConfig.m_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) glewGetProcAddress ("glVertexAttrib4fv");
    s_deviceConfig.m_glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) glewGetProcAddress ("glVertexAttrib4iv");
    s_deviceConfig.m_glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) glewGetProcAddress ("glVertexAttrib4s");
    s_deviceConfig.m_glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) glewGetProcAddress ("glVertexAttrib4sv");
    s_deviceConfig.m_glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) glewGetProcAddress ("glVertexAttrib4ubv");
    s_deviceConfig.m_glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) glewGetProcAddress ("glVertexAttrib4uiv");
    s_deviceConfig.m_glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) glewGetProcAddress ("glVertexAttrib4usv");
    s_deviceConfig.m_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) glewGetProcAddress ("glVertexAttribPointer");
  }

  // GL_VERSION_2_1
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_2_1])
  {
    s_deviceConfig.m_glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) glewGetProcAddress ("glUniformMatrix2x3fv");
    s_deviceConfig.m_glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) glewGetProcAddress ("glUniformMatrix3x2fv");
    s_deviceConfig.m_glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) glewGetProcAddress ("glUniformMatrix2x4fv");
    s_deviceConfig.m_glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) glewGetProcAddress ("glUniformMatrix4x2fv");
    s_deviceConfig.m_glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) glewGetProcAddress ("glUniformMatrix3x4fv");
    s_deviceConfig.m_glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) glewGetProcAddress ("glUniformMatrix4x3fv");
  }

  // GL_VERSION_3_0
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_0])
  {
    s_deviceConfig.m_glColorMaski = (PFNGLCOLORMASKIPROC) glewGetProcAddress ("glColorMaski");
    s_deviceConfig.m_glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) glewGetProcAddress ("glGetBooleani_v");
    s_deviceConfig.m_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) glewGetProcAddress ("glGetIntegeri_v");
    s_deviceConfig.m_glEnablei = (PFNGLENABLEIPROC) glewGetProcAddress ("glEnablei");
    s_deviceConfig.m_glDisablei = (PFNGLDISABLEIPROC) glewGetProcAddress ("glDisablei");
    s_deviceConfig.m_glIsEnabledi = (PFNGLISENABLEDIPROC) glewGetProcAddress ("glIsEnabledi");
    s_deviceConfig.m_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glBeginTransformFeedback");
    s_deviceConfig.m_glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glEndTransformFeedback");
    s_deviceConfig.m_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) glewGetProcAddress ("glBindBufferRange");
    s_deviceConfig.m_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) glewGetProcAddress ("glBindBufferBase");
    s_deviceConfig.m_glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) glewGetProcAddress ("glTransformFeedbackVaryings");
    s_deviceConfig.m_glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) glewGetProcAddress ("glGetTransformFeedbackVarying");
    s_deviceConfig.m_glClampColor = (PFNGLCLAMPCOLORPROC) glewGetProcAddress ("glClampColor");
    s_deviceConfig.m_glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC) glewGetProcAddress ("glBeginConditionalRender");
    s_deviceConfig.m_glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC) glewGetProcAddress ("glEndConditionalRender");
    s_deviceConfig.m_glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) glewGetProcAddress ("glVertexAttribIPointer");
    s_deviceConfig.m_glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) glewGetProcAddress ("glGetVertexAttribIiv");
    s_deviceConfig.m_glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) glewGetProcAddress ("glGetVertexAttribIuiv");
    s_deviceConfig.m_glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC) glewGetProcAddress ("glVertexAttribI1i");
    s_deviceConfig.m_glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC) glewGetProcAddress ("glVertexAttribI2i");
    s_deviceConfig.m_glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC) glewGetProcAddress ("glVertexAttribI3i");
    s_deviceConfig.m_glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) glewGetProcAddress ("glVertexAttribI4i");
    s_deviceConfig.m_glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC) glewGetProcAddress ("glVertexAttribI1ui");
    s_deviceConfig.m_glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC) glewGetProcAddress ("glVertexAttribI2ui");
    s_deviceConfig.m_glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC) glewGetProcAddress ("glVertexAttribI3ui");
    s_deviceConfig.m_glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) glewGetProcAddress ("glVertexAttribI4ui");
    s_deviceConfig.m_glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC) glewGetProcAddress ("glVertexAttribI1iv");
    s_deviceConfig.m_glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC) glewGetProcAddress ("glVertexAttribI2iv");
    s_deviceConfig.m_glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC) glewGetProcAddress ("glVertexAttribI3iv");
    s_deviceConfig.m_glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) glewGetProcAddress ("glVertexAttribI4iv");
    s_deviceConfig.m_glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC) glewGetProcAddress ("glVertexAttribI1uiv");
    s_deviceConfig.m_glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC) glewGetProcAddress ("glVertexAttribI2uiv");
    s_deviceConfig.m_glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC) glewGetProcAddress ("glVertexAttribI3uiv");
    s_deviceConfig.m_glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) glewGetProcAddress ("glVertexAttribI4uiv");
    s_deviceConfig.m_glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC) glewGetProcAddress ("glVertexAttribI4bv");
    s_deviceConfig.m_glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC) glewGetProcAddress ("glVertexAttribI4sv");
    s_deviceConfig.m_glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC) glewGetProcAddress ("glVertexAttribI4ubv");
    s_deviceConfig.m_glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC) glewGetProcAddress ("glVertexAttribI4usv");
    s_deviceConfig.m_glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) glewGetProcAddress ("glGetUniformuiv");
    s_deviceConfig.m_glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC) glewGetProcAddress ("glBindFragDataLocation");
    s_deviceConfig.m_glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) glewGetProcAddress ("glGetFragDataLocation");
    s_deviceConfig.m_glUniform1ui = (PFNGLUNIFORM1UIPROC) glewGetProcAddress ("glUniform1ui");
    s_deviceConfig.m_glUniform2ui = (PFNGLUNIFORM2UIPROC) glewGetProcAddress ("glUniform2ui");
    s_deviceConfig.m_glUniform3ui = (PFNGLUNIFORM3UIPROC) glewGetProcAddress ("glUniform3ui");
    s_deviceConfig.m_glUniform4ui = (PFNGLUNIFORM4UIPROC) glewGetProcAddress ("glUniform4ui");
    s_deviceConfig.m_glUniform1uiv = (PFNGLUNIFORM1UIVPROC) glewGetProcAddress ("glUniform1uiv");
    s_deviceConfig.m_glUniform2uiv = (PFNGLUNIFORM2UIVPROC) glewGetProcAddress ("glUniform2uiv");
    s_deviceConfig.m_glUniform3uiv = (PFNGLUNIFORM3UIVPROC) glewGetProcAddress ("glUniform3uiv");
    s_deviceConfig.m_glUniform4uiv = (PFNGLUNIFORM4UIVPROC) glewGetProcAddress ("glUniform4uiv");
    s_deviceConfig.m_glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) glewGetProcAddress ("glTexParameterIiv");
    s_deviceConfig.m_glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) glewGetProcAddress ("glTexParameterIuiv");
    s_deviceConfig.m_glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) glewGetProcAddress ("glGetTexParameterIiv");
    s_deviceConfig.m_glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) glewGetProcAddress ("glGetTexParameterIuiv");
    s_deviceConfig.m_glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) glewGetProcAddress ("glClearBufferiv");
    s_deviceConfig.m_glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) glewGetProcAddress ("glClearBufferuiv");
    s_deviceConfig.m_glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) glewGetProcAddress ("glClearBufferfv");
    s_deviceConfig.m_glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) glewGetProcAddress ("glClearBufferfi");
    s_deviceConfig.m_glGetStringi = (PFNGLGETSTRINGIPROC) glewGetProcAddress ("glGetStringi");
    s_deviceConfig.m_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) glewGetProcAddress ("glIsRenderbuffer");
    s_deviceConfig.m_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) glewGetProcAddress ("glBindRenderbuffer");
    s_deviceConfig.m_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) glewGetProcAddress ("glDeleteRenderbuffers");
    s_deviceConfig.m_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) glewGetProcAddress ("glGenRenderbuffers");
    s_deviceConfig.m_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) glewGetProcAddress ("glRenderbufferStorage");
    s_deviceConfig.m_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetRenderbufferParameteriv");
    s_deviceConfig.m_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) glewGetProcAddress ("glIsFramebuffer");
    s_deviceConfig.m_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) glewGetProcAddress ("glBindFramebuffer");
    s_deviceConfig.m_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) glewGetProcAddress ("glDeleteFramebuffers");
    s_deviceConfig.m_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) glewGetProcAddress ("glGenFramebuffers");
    s_deviceConfig.m_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) glewGetProcAddress ("glCheckFramebufferStatus");
    s_deviceConfig.m_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) glewGetProcAddress ("glFramebufferTexture1D");
    s_deviceConfig.m_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) glewGetProcAddress ("glFramebufferTexture2D");
    s_deviceConfig.m_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) glewGetProcAddress ("glFramebufferTexture3D");
    s_deviceConfig.m_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) glewGetProcAddress ("glFramebufferRenderbuffer");
    s_deviceConfig.m_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferAttachmentParameteriv");
    s_deviceConfig.m_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) glewGetProcAddress ("glGenerateMipmap");
    s_deviceConfig.m_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) glewGetProcAddress ("glBlitFramebuffer");
    s_deviceConfig.m_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glRenderbufferStorageMultisample");
    s_deviceConfig.m_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glFramebufferTextureLayer");
    s_deviceConfig.m_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) glewGetProcAddress ("glMapBufferRange");
    s_deviceConfig.m_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedBufferRange");
    s_deviceConfig.m_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) glewGetProcAddress ("glBindVertexArray");
    s_deviceConfig.m_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) glewGetProcAddress ("glDeleteVertexArrays");
    s_deviceConfig.m_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) glewGetProcAddress ("glGenVertexArrays");
    s_deviceConfig.m_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) glewGetProcAddress ("glIsVertexArray");
  }

  // GL_VERSION_3_1
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_1])
  {
    s_deviceConfig.m_glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) glewGetProcAddress ("glDrawArraysInstanced");
    s_deviceConfig.m_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) glewGetProcAddress ("glDrawElementsInstanced");
    s_deviceConfig.m_glTexBuffer = (PFNGLTEXBUFFERPROC) glewGetProcAddress ("glTexBuffer");
    s_deviceConfig.m_glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC) glewGetProcAddress ("glPrimitiveRestartIndex");
    s_deviceConfig.m_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyBufferSubData");
    s_deviceConfig.m_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) glewGetProcAddress ("glGetUniformIndices");
    s_deviceConfig.m_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) glewGetProcAddress ("glGetActiveUniformsiv");
    s_deviceConfig.m_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) glewGetProcAddress ("glGetActiveUniformName");
    s_deviceConfig.m_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) glewGetProcAddress ("glGetUniformBlockIndex");
    s_deviceConfig.m_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) glewGetProcAddress ("glGetActiveUniformBlockiv");
    s_deviceConfig.m_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) glewGetProcAddress ("glGetActiveUniformBlockName");
    s_deviceConfig.m_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) glewGetProcAddress ("glUniformBlockBinding");
    s_deviceConfig.m_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) glewGetProcAddress ("glBindBufferRange");
    s_deviceConfig.m_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) glewGetProcAddress ("glBindBufferBase");
    s_deviceConfig.m_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) glewGetProcAddress ("glGetIntegeri_v");
  }

  // GL_VERSION_3_2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_2])
  {
    s_deviceConfig.m_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsBaseVertex");
    s_deviceConfig.m_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawRangeElementsBaseVertex");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertex");
    s_deviceConfig.m_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glMultiDrawElementsBaseVertex");
    s_deviceConfig.m_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) glewGetProcAddress ("glProvokingVertex");
    s_deviceConfig.m_glFenceSync = (PFNGLFENCESYNCPROC) glewGetProcAddress ("glFenceSync");
    s_deviceConfig.m_glIsSync = (PFNGLISSYNCPROC) glewGetProcAddress ("glIsSync");
    s_deviceConfig.m_glDeleteSync = (PFNGLDELETESYNCPROC) glewGetProcAddress ("glDeleteSync");
    s_deviceConfig.m_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) glewGetProcAddress ("glClientWaitSync");
    s_deviceConfig.m_glWaitSync = (PFNGLWAITSYNCPROC) glewGetProcAddress ("glWaitSync");
    s_deviceConfig.m_glGetInteger64v = (PFNGLGETINTEGER64VPROC) glewGetProcAddress ("glGetInteger64v");
    s_deviceConfig.m_glGetSynciv = (PFNGLGETSYNCIVPROC) glewGetProcAddress ("glGetSynciv");
    s_deviceConfig.m_glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) glewGetProcAddress ("glGetInteger64i_v");
    s_deviceConfig.m_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) glewGetProcAddress ("glGetBufferParameteri64v");
    s_deviceConfig.m_glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) glewGetProcAddress ("glFramebufferTexture");
    s_deviceConfig.m_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexImage2DMultisample");
    s_deviceConfig.m_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexImage3DMultisample");
    s_deviceConfig.m_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) glewGetProcAddress ("glGetMultisamplefv");
    s_deviceConfig.m_glSampleMaski = (PFNGLSAMPLEMASKIPROC) glewGetProcAddress ("glSampleMaski");
  }

  // GL_VERSION_3_3
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_3_3])
  {
    s_deviceConfig.m_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) glewGetProcAddress ("glBindFragDataLocationIndexed");
    s_deviceConfig.m_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) glewGetProcAddress ("glGetFragDataIndex");
    s_deviceConfig.m_glGenSamplers = (PFNGLGENSAMPLERSPROC) glewGetProcAddress ("glGenSamplers");
    s_deviceConfig.m_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) glewGetProcAddress ("glDeleteSamplers");
    s_deviceConfig.m_glIsSampler = (PFNGLISSAMPLERPROC) glewGetProcAddress ("glIsSampler");
    s_deviceConfig.m_glBindSampler = (PFNGLBINDSAMPLERPROC) glewGetProcAddress ("glBindSampler");
    s_deviceConfig.m_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) glewGetProcAddress ("glSamplerParameteri");
    s_deviceConfig.m_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glSamplerParameteriv");
    s_deviceConfig.m_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) glewGetProcAddress ("glSamplerParameterf");
    s_deviceConfig.m_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glSamplerParameterfv");
    s_deviceConfig.m_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glSamplerParameterIiv");
    s_deviceConfig.m_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glSamplerParameterIuiv");
    s_deviceConfig.m_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glGetSamplerParameteriv");
    s_deviceConfig.m_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glGetSamplerParameterIiv");
    s_deviceConfig.m_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glGetSamplerParameterfv");
    s_deviceConfig.m_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glGetSamplerParameterIuiv");
    s_deviceConfig.m_glQueryCounter = (PFNGLQUERYCOUNTERPROC) glewGetProcAddress ("glQueryCounter");
    s_deviceConfig.m_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) glewGetProcAddress ("glGetQueryObjecti64v");
    s_deviceConfig.m_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) glewGetProcAddress ("glGetQueryObjectui64v");
    s_deviceConfig.m_glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) glewGetProcAddress ("glVertexAttribDivisor");
    s_deviceConfig.m_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) glewGetProcAddress ("glVertexAttribP1ui");
    s_deviceConfig.m_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) glewGetProcAddress ("glVertexAttribP1uiv");
    s_deviceConfig.m_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) glewGetProcAddress ("glVertexAttribP2ui");
    s_deviceConfig.m_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) glewGetProcAddress ("glVertexAttribP2uiv");
    s_deviceConfig.m_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) glewGetProcAddress ("glVertexAttribP3ui");
    s_deviceConfig.m_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) glewGetProcAddress ("glVertexAttribP3uiv");
    s_deviceConfig.m_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) glewGetProcAddress ("glVertexAttribP4ui");
    s_deviceConfig.m_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) glewGetProcAddress ("glVertexAttribP4uiv");
    s_deviceConfig.m_glVertexP2ui = (PFNGLVERTEXP2UIPROC) glewGetProcAddress ("glVertexP2ui");
    s_deviceConfig.m_glVertexP2uiv = (PFNGLVERTEXP2UIVPROC) glewGetProcAddress ("glVertexP2uiv");
    s_deviceConfig.m_glVertexP3ui = (PFNGLVERTEXP3UIPROC) glewGetProcAddress ("glVertexP3ui");
    s_deviceConfig.m_glVertexP3uiv = (PFNGLVERTEXP3UIVPROC) glewGetProcAddress ("glVertexP3uiv");
    s_deviceConfig.m_glVertexP4ui = (PFNGLVERTEXP4UIPROC) glewGetProcAddress ("glVertexP4ui");
    s_deviceConfig.m_glVertexP4uiv = (PFNGLVERTEXP4UIVPROC) glewGetProcAddress ("glVertexP4uiv");
    s_deviceConfig.m_glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC) glewGetProcAddress ("glTexCoordP1ui");
    s_deviceConfig.m_glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC) glewGetProcAddress ("glTexCoordP1uiv");
    s_deviceConfig.m_glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC) glewGetProcAddress ("glTexCoordP2ui");
    s_deviceConfig.m_glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC) glewGetProcAddress ("glTexCoordP2uiv");
    s_deviceConfig.m_glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC) glewGetProcAddress ("glTexCoordP3ui");
    s_deviceConfig.m_glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC) glewGetProcAddress ("glTexCoordP3uiv");
    s_deviceConfig.m_glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC) glewGetProcAddress ("glTexCoordP4ui");
    s_deviceConfig.m_glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC) glewGetProcAddress ("glTexCoordP4uiv");
    s_deviceConfig.m_glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC) glewGetProcAddress ("glMultiTexCoordP1ui");
    s_deviceConfig.m_glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC) glewGetProcAddress ("glMultiTexCoordP1uiv");
    s_deviceConfig.m_glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC) glewGetProcAddress ("glMultiTexCoordP2ui");
    s_deviceConfig.m_glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC) glewGetProcAddress ("glMultiTexCoordP2uiv");
    s_deviceConfig.m_glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC) glewGetProcAddress ("glMultiTexCoordP3ui");
    s_deviceConfig.m_glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC) glewGetProcAddress ("glMultiTexCoordP3uiv");
    s_deviceConfig.m_glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC) glewGetProcAddress ("glMultiTexCoordP4ui");
    s_deviceConfig.m_glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC) glewGetProcAddress ("glMultiTexCoordP4uiv");
    s_deviceConfig.m_glNormalP3ui = (PFNGLNORMALP3UIPROC) glewGetProcAddress ("glNormalP3ui");
    s_deviceConfig.m_glNormalP3uiv = (PFNGLNORMALP3UIVPROC) glewGetProcAddress ("glNormalP3uiv");
    s_deviceConfig.m_glColorP3ui = (PFNGLCOLORP3UIPROC) glewGetProcAddress ("glColorP3ui");
    s_deviceConfig.m_glColorP3uiv = (PFNGLCOLORP3UIVPROC) glewGetProcAddress ("glColorP3uiv");
    s_deviceConfig.m_glColorP4ui = (PFNGLCOLORP4UIPROC) glewGetProcAddress ("glColorP4ui");
    s_deviceConfig.m_glColorP4uiv = (PFNGLCOLORP4UIVPROC) glewGetProcAddress ("glColorP4uiv");
    s_deviceConfig.m_glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC) glewGetProcAddress ("glSecondaryColorP3ui");
    s_deviceConfig.m_glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC) glewGetProcAddress ("glSecondaryColorP3uiv");
  }

  // GL_VERSION_4_0
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_0])
  {
    s_deviceConfig.m_glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC) glewGetProcAddress ("glMinSampleShading");
    s_deviceConfig.m_glBlendEquationi = (PFNGLBLENDEQUATIONIPROC) glewGetProcAddress ("glBlendEquationi");
    s_deviceConfig.m_glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC) glewGetProcAddress ("glBlendEquationSeparatei");
    s_deviceConfig.m_glBlendFunci = (PFNGLBLENDFUNCIPROC) glewGetProcAddress ("glBlendFunci");
    s_deviceConfig.m_glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC) glewGetProcAddress ("glBlendFuncSeparatei");
    s_deviceConfig.m_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glDrawArraysIndirect");
    s_deviceConfig.m_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glDrawElementsIndirect");
    s_deviceConfig.m_glUniform1d = (PFNGLUNIFORM1DPROC) glewGetProcAddress ("glUniform1d");
    s_deviceConfig.m_glUniform2d = (PFNGLUNIFORM2DPROC) glewGetProcAddress ("glUniform2d");
    s_deviceConfig.m_glUniform3d = (PFNGLUNIFORM3DPROC) glewGetProcAddress ("glUniform3d");
    s_deviceConfig.m_glUniform4d = (PFNGLUNIFORM4DPROC) glewGetProcAddress ("glUniform4d");
    s_deviceConfig.m_glUniform1dv = (PFNGLUNIFORM1DVPROC) glewGetProcAddress ("glUniform1dv");
    s_deviceConfig.m_glUniform2dv = (PFNGLUNIFORM2DVPROC) glewGetProcAddress ("glUniform2dv");
    s_deviceConfig.m_glUniform3dv = (PFNGLUNIFORM3DVPROC) glewGetProcAddress ("glUniform3dv");
    s_deviceConfig.m_glUniform4dv = (PFNGLUNIFORM4DVPROC) glewGetProcAddress ("glUniform4dv");
    s_deviceConfig.m_glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) glewGetProcAddress ("glUniformMatrix2dv");
    s_deviceConfig.m_glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) glewGetProcAddress ("glUniformMatrix3dv");
    s_deviceConfig.m_glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) glewGetProcAddress ("glUniformMatrix4dv");
    s_deviceConfig.m_glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) glewGetProcAddress ("glUniformMatrix2x3dv");
    s_deviceConfig.m_glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) glewGetProcAddress ("glUniformMatrix2x4dv");
    s_deviceConfig.m_glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) glewGetProcAddress ("glUniformMatrix3x2dv");
    s_deviceConfig.m_glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) glewGetProcAddress ("glUniformMatrix3x4dv");
    s_deviceConfig.m_glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) glewGetProcAddress ("glUniformMatrix4x2dv");
    s_deviceConfig.m_glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) glewGetProcAddress ("glUniformMatrix4x3dv");
    s_deviceConfig.m_glGetUniformdv = (PFNGLGETUNIFORMDVPROC) glewGetProcAddress ("glGetUniformdv");
    s_deviceConfig.m_glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) glewGetProcAddress ("glGetSubroutineUniformLocation");
    s_deviceConfig.m_glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) glewGetProcAddress ("glGetSubroutineIndex");
    s_deviceConfig.m_glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) glewGetProcAddress ("glGetActiveSubroutineUniformiv");
    s_deviceConfig.m_glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) glewGetProcAddress ("glGetActiveSubroutineUniformName");
    s_deviceConfig.m_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) glewGetProcAddress ("glGetActiveSubroutineName");
    s_deviceConfig.m_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) glewGetProcAddress ("glUniformSubroutinesuiv");
    s_deviceConfig.m_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) glewGetProcAddress ("glGetUniformSubroutineuiv");
    s_deviceConfig.m_glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) glewGetProcAddress ("glGetProgramStageiv");
    s_deviceConfig.m_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) glewGetProcAddress ("glPatchParameteri");
    s_deviceConfig.m_glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) glewGetProcAddress ("glPatchParameterfv");
    s_deviceConfig.m_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glBindTransformFeedback");
    s_deviceConfig.m_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glDeleteTransformFeedbacks");
    s_deviceConfig.m_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glGenTransformFeedbacks");
    s_deviceConfig.m_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glIsTransformFeedback");
    s_deviceConfig.m_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glPauseTransformFeedback");
    s_deviceConfig.m_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glResumeTransformFeedback");
    s_deviceConfig.m_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glDrawTransformFeedback");
    s_deviceConfig.m_glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) glewGetProcAddress ("glDrawTransformFeedbackStream");
    s_deviceConfig.m_glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) glewGetProcAddress ("glBeginQueryIndexed");
    s_deviceConfig.m_glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) glewGetProcAddress ("glEndQueryIndexed");
    s_deviceConfig.m_glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) glewGetProcAddress ("glGetQueryIndexediv");
  }

  // GL_VERSION_4_1
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_1])
  {
    s_deviceConfig.m_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) glewGetProcAddress ("glReleaseShaderCompiler");
    s_deviceConfig.m_glShaderBinary = (PFNGLSHADERBINARYPROC) glewGetProcAddress ("glShaderBinary");
    s_deviceConfig.m_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) glewGetProcAddress ("glGetShaderPrecisionFormat");
    s_deviceConfig.m_glDepthRangef = (PFNGLDEPTHRANGEFPROC) glewGetProcAddress ("glDepthRangef");
    s_deviceConfig.m_glClearDepthf = (PFNGLCLEARDEPTHFPROC) glewGetProcAddress ("glClearDepthf");
    s_deviceConfig.m_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) glewGetProcAddress ("glGetProgramBinary");
    s_deviceConfig.m_glProgramBinary = (PFNGLPROGRAMBINARYPROC) glewGetProcAddress ("glProgramBinary");
    s_deviceConfig.m_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) glewGetProcAddress ("glProgramParameteri");
    s_deviceConfig.m_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) glewGetProcAddress ("glUseProgramStages");
    s_deviceConfig.m_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) glewGetProcAddress ("glActiveShaderProgram");
    s_deviceConfig.m_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) glewGetProcAddress ("glCreateShaderProgramv");
    s_deviceConfig.m_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) glewGetProcAddress ("glBindProgramPipeline");
    s_deviceConfig.m_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) glewGetProcAddress ("glDeleteProgramPipelines");
    s_deviceConfig.m_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) glewGetProcAddress ("glGenProgramPipelines");
    s_deviceConfig.m_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) glewGetProcAddress ("glIsProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) glewGetProcAddress ("glGetProgramPipelineiv");
    s_deviceConfig.m_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) glewGetProcAddress ("glProgramUniform1i");
    s_deviceConfig.m_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) glewGetProcAddress ("glProgramUniform1iv");
    s_deviceConfig.m_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) glewGetProcAddress ("glProgramUniform1f");
    s_deviceConfig.m_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) glewGetProcAddress ("glProgramUniform1fv");
    s_deviceConfig.m_glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) glewGetProcAddress ("glProgramUniform1d");
    s_deviceConfig.m_glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) glewGetProcAddress ("glProgramUniform1dv");
    s_deviceConfig.m_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) glewGetProcAddress ("glProgramUniform1ui");
    s_deviceConfig.m_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) glewGetProcAddress ("glProgramUniform1uiv");
    s_deviceConfig.m_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) glewGetProcAddress ("glProgramUniform2i");
    s_deviceConfig.m_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) glewGetProcAddress ("glProgramUniform2iv");
    s_deviceConfig.m_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) glewGetProcAddress ("glProgramUniform2f");
    s_deviceConfig.m_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) glewGetProcAddress ("glProgramUniform2fv");
    s_deviceConfig.m_glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) glewGetProcAddress ("glProgramUniform2d");
    s_deviceConfig.m_glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) glewGetProcAddress ("glProgramUniform2dv");
    s_deviceConfig.m_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) glewGetProcAddress ("glProgramUniform2ui");
    s_deviceConfig.m_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) glewGetProcAddress ("glProgramUniform2uiv");
    s_deviceConfig.m_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) glewGetProcAddress ("glProgramUniform3i");
    s_deviceConfig.m_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) glewGetProcAddress ("glProgramUniform3iv");
    s_deviceConfig.m_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) glewGetProcAddress ("glProgramUniform3f");
    s_deviceConfig.m_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) glewGetProcAddress ("glProgramUniform3fv");
    s_deviceConfig.m_glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) glewGetProcAddress ("glProgramUniform3d");
    s_deviceConfig.m_glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) glewGetProcAddress ("glProgramUniform3dv");
    s_deviceConfig.m_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) glewGetProcAddress ("glProgramUniform3ui");
    s_deviceConfig.m_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) glewGetProcAddress ("glProgramUniform3uiv");
    s_deviceConfig.m_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) glewGetProcAddress ("glProgramUniform4i");
    s_deviceConfig.m_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) glewGetProcAddress ("glProgramUniform4iv");
    s_deviceConfig.m_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) glewGetProcAddress ("glProgramUniform4f");
    s_deviceConfig.m_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) glewGetProcAddress ("glProgramUniform4fv");
    s_deviceConfig.m_glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) glewGetProcAddress ("glProgramUniform4d");
    s_deviceConfig.m_glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) glewGetProcAddress ("glProgramUniform4dv");
    s_deviceConfig.m_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) glewGetProcAddress ("glProgramUniform4ui");
    s_deviceConfig.m_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) glewGetProcAddress ("glProgramUniform4uiv");
    s_deviceConfig.m_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) glewGetProcAddress ("glProgramUniformMatrix2fv");
    s_deviceConfig.m_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) glewGetProcAddress ("glProgramUniformMatrix3fv");
    s_deviceConfig.m_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) glewGetProcAddress ("glProgramUniformMatrix4fv");
    s_deviceConfig.m_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) glewGetProcAddress ("glProgramUniformMatrix2dv");
    s_deviceConfig.m_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) glewGetProcAddress ("glProgramUniformMatrix3dv");
    s_deviceConfig.m_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) glewGetProcAddress ("glProgramUniformMatrix4dv");
    s_deviceConfig.m_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3fv");
    s_deviceConfig.m_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2fv");
    s_deviceConfig.m_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2fv");
    s_deviceConfig.m_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3fv");
    s_deviceConfig.m_glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3dv");
    s_deviceConfig.m_glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2dv");
    s_deviceConfig.m_glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4dv");
    s_deviceConfig.m_glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2dv");
    s_deviceConfig.m_glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4dv");
    s_deviceConfig.m_glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3dv");
    s_deviceConfig.m_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) glewGetProcAddress ("glValidateProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) glewGetProcAddress ("glGetProgramPipelineInfoLog");
    s_deviceConfig.m_glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) glewGetProcAddress ("glVertexAttribL1d");
    s_deviceConfig.m_glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) glewGetProcAddress ("glVertexAttribL2d");
    s_deviceConfig.m_glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) glewGetProcAddress ("glVertexAttribL3d");
    s_deviceConfig.m_glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) glewGetProcAddress ("glVertexAttribL4d");
    s_deviceConfig.m_glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) glewGetProcAddress ("glVertexAttribL1dv");
    s_deviceConfig.m_glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) glewGetProcAddress ("glVertexAttribL2dv");
    s_deviceConfig.m_glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) glewGetProcAddress ("glVertexAttribL3dv");
    s_deviceConfig.m_glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) glewGetProcAddress ("glVertexAttribL4dv");
    s_deviceConfig.m_glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) glewGetProcAddress ("glVertexAttribLPointer");
    s_deviceConfig.m_glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) glewGetProcAddress ("glGetVertexAttribLdv");
    s_deviceConfig.m_glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) glewGetProcAddress ("glViewportArrayv");
    s_deviceConfig.m_glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) glewGetProcAddress ("glViewportIndexedf");
    s_deviceConfig.m_glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) glewGetProcAddress ("glViewportIndexedfv");
    s_deviceConfig.m_glScissorArrayv = (PFNGLSCISSORARRAYVPROC) glewGetProcAddress ("glScissorArrayv");
    s_deviceConfig.m_glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) glewGetProcAddress ("glScissorIndexed");
    s_deviceConfig.m_glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) glewGetProcAddress ("glScissorIndexedv");
    s_deviceConfig.m_glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) glewGetProcAddress ("glDepthRangeArrayv");
    s_deviceConfig.m_glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) glewGetProcAddress ("glDepthRangeIndexed");
    s_deviceConfig.m_glGetFloati_v = (PFNGLGETFLOATI_VPROC) glewGetProcAddress ("glGetFloati_v");
    s_deviceConfig.m_glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) glewGetProcAddress ("glGetDoublei_v");
  }

  // GL_VERSION_4_2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_2])
  {
    s_deviceConfig.m_glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) glewGetProcAddress ("glDrawArraysInstancedBaseInstance");
    s_deviceConfig.m_glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) glewGetProcAddress ("glDrawElementsInstancedBaseInstance");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertexBaseInstance");
    s_deviceConfig.m_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) glewGetProcAddress ("glGetInternalformativ");
    s_deviceConfig.m_glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) glewGetProcAddress ("glGetActiveAtomicCounterBufferiv");
    s_deviceConfig.m_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) glewGetProcAddress ("glBindImageTexture");
    s_deviceConfig.m_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) glewGetProcAddress ("glMemoryBarrier");
    s_deviceConfig.m_glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) glewGetProcAddress ("glTexStorage1D");
    s_deviceConfig.m_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) glewGetProcAddress ("glTexStorage2D");
    s_deviceConfig.m_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) glewGetProcAddress ("glTexStorage3D");
    s_deviceConfig.m_glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) glewGetProcAddress ("glDrawTransformFeedbackInstanced");
    s_deviceConfig.m_glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) glewGetProcAddress ("glDrawTransformFeedbackStreamInstanced");
  }

  // GL_VERSION_4_3
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_3])
  {
    s_deviceConfig.m_glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) glewGetProcAddress ("glClearBufferData");
    s_deviceConfig.m_glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) glewGetProcAddress ("glClearBufferSubData");
    s_deviceConfig.m_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) glewGetProcAddress ("glDispatchCompute");
    s_deviceConfig.m_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) glewGetProcAddress ("glDispatchComputeIndirect");
    s_deviceConfig.m_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) glewGetProcAddress ("glCopyImageSubData");
    s_deviceConfig.m_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glFramebufferParameteri");
    s_deviceConfig.m_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferParameteriv");
    s_deviceConfig.m_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) glewGetProcAddress ("glGetInternalformati64v");
    s_deviceConfig.m_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) glewGetProcAddress ("glInvalidateTexSubImage");
    s_deviceConfig.m_glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) glewGetProcAddress ("glInvalidateTexImage");
    s_deviceConfig.m_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) glewGetProcAddress ("glInvalidateBufferSubData");
    s_deviceConfig.m_glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) glewGetProcAddress ("glInvalidateBufferData");
    s_deviceConfig.m_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateFramebuffer");
    s_deviceConfig.m_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateSubFramebuffer");
    s_deviceConfig.m_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glMultiDrawArraysIndirect");
    s_deviceConfig.m_glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glMultiDrawElementsIndirect");
    s_deviceConfig.m_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) glewGetProcAddress ("glGetProgramInterfaceiv");
    s_deviceConfig.m_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) glewGetProcAddress ("glGetProgramResourceIndex");
    s_deviceConfig.m_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) glewGetProcAddress ("glGetProgramResourceName");
    s_deviceConfig.m_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) glewGetProcAddress ("glGetProgramResourceiv");
    s_deviceConfig.m_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) glewGetProcAddress ("glGetProgramResourceLocation");
    s_deviceConfig.m_glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) glewGetProcAddress ("glGetProgramResourceLocationIndex");
    s_deviceConfig.m_glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) glewGetProcAddress ("glShaderStorageBlockBinding");
    s_deviceConfig.m_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) glewGetProcAddress ("glTexBufferRange");
    s_deviceConfig.m_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage2DMultisample");
    s_deviceConfig.m_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage3DMultisample");
    s_deviceConfig.m_glTextureView = (PFNGLTEXTUREVIEWPROC) glewGetProcAddress ("glTextureView");
    s_deviceConfig.m_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) glewGetProcAddress ("glBindVertexBuffer");
    s_deviceConfig.m_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) glewGetProcAddress ("glVertexAttribFormat");
    s_deviceConfig.m_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) glewGetProcAddress ("glVertexAttribIFormat");
    s_deviceConfig.m_glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) glewGetProcAddress ("glVertexAttribLFormat");
    s_deviceConfig.m_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) glewGetProcAddress ("glVertexAttribBinding");
    s_deviceConfig.m_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) glewGetProcAddress ("glVertexBindingDivisor");
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
  }

  // GL_VERSION_4_4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_4])
  {
    s_deviceConfig.m_glBufferStorage = (PFNGLBUFFERSTORAGEPROC) glewGetProcAddress ("glBufferStorage");
    s_deviceConfig.m_glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) glewGetProcAddress ("glClearTexImage");
    s_deviceConfig.m_glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) glewGetProcAddress ("glClearTexSubImage");
    s_deviceConfig.m_glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) glewGetProcAddress ("glBindBuffersBase");
    s_deviceConfig.m_glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) glewGetProcAddress ("glBindBuffersRange");
    s_deviceConfig.m_glBindTextures = (PFNGLBINDTEXTURESPROC) glewGetProcAddress ("glBindTextures");
    s_deviceConfig.m_glBindSamplers = (PFNGLBINDSAMPLERSPROC) glewGetProcAddress ("glBindSamplers");
    s_deviceConfig.m_glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) glewGetProcAddress ("glBindImageTextures");
    s_deviceConfig.m_glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) glewGetProcAddress ("glBindVertexBuffers");
  }

  // GL_VERSION_4_5
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_5])
  {
    s_deviceConfig.m_glClipControl = (PFNGLCLIPCONTROLPROC) glewGetProcAddress ("glClipControl");
    s_deviceConfig.m_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glCreateTransformFeedbacks");
    s_deviceConfig.m_glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) glewGetProcAddress ("glTransformFeedbackBufferBase");
    s_deviceConfig.m_glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) glewGetProcAddress ("glTransformFeedbackBufferRange");
    s_deviceConfig.m_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) glewGetProcAddress ("glGetTransformFeedbackiv");
    s_deviceConfig.m_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) glewGetProcAddress ("glGetTransformFeedbacki_v");
    s_deviceConfig.m_glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) glewGetProcAddress ("glGetTransformFeedbacki64_v");
    s_deviceConfig.m_glCreateBuffers = (PFNGLCREATEBUFFERSPROC) glewGetProcAddress ("glCreateBuffers");
    s_deviceConfig.m_glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) glewGetProcAddress ("glNamedBufferStorage");
    s_deviceConfig.m_glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) glewGetProcAddress ("glNamedBufferData");
    s_deviceConfig.m_glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glNamedBufferSubData");
    s_deviceConfig.m_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyNamedBufferSubData");
    s_deviceConfig.m_glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) glewGetProcAddress ("glClearNamedBufferData");
    s_deviceConfig.m_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glClearNamedBufferSubData");
    s_deviceConfig.m_glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) glewGetProcAddress ("glMapNamedBuffer");
    s_deviceConfig.m_glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) glewGetProcAddress ("glMapNamedBufferRange");
    s_deviceConfig.m_glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) glewGetProcAddress ("glUnmapNamedBuffer");
    s_deviceConfig.m_glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedNamedBufferRange");
    s_deviceConfig.m_glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedBufferParameteriv");
    s_deviceConfig.m_glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) glewGetProcAddress ("glGetNamedBufferParameteri64v");
    s_deviceConfig.m_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) glewGetProcAddress ("glGetNamedBufferPointerv");
    s_deviceConfig.m_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glGetNamedBufferSubData");
    s_deviceConfig.m_glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) glewGetProcAddress ("glCreateFramebuffers");
    s_deviceConfig.m_glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) glewGetProcAddress ("glNamedFramebufferRenderbuffer");
    s_deviceConfig.m_glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glNamedFramebufferParameteri");
    s_deviceConfig.m_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) glewGetProcAddress ("glNamedFramebufferTexture");
    s_deviceConfig.m_glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glNamedFramebufferTextureLayer");
    s_deviceConfig.m_glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) glewGetProcAddress ("glNamedFramebufferDrawBuffer");
    s_deviceConfig.m_glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) glewGetProcAddress ("glNamedFramebufferDrawBuffers");
    s_deviceConfig.m_glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) glewGetProcAddress ("glNamedFramebufferReadBuffer");
    s_deviceConfig.m_glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) glewGetProcAddress ("glInvalidateNamedFramebufferData");
    s_deviceConfig.m_glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) glewGetProcAddress ("glInvalidateNamedFramebufferSubData");
    s_deviceConfig.m_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) glewGetProcAddress ("glClearNamedFramebufferiv");
    s_deviceConfig.m_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) glewGetProcAddress ("glClearNamedFramebufferuiv");
    s_deviceConfig.m_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) glewGetProcAddress ("glClearNamedFramebufferfv");
    s_deviceConfig.m_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) glewGetProcAddress ("glClearNamedFramebufferfi");
    s_deviceConfig.m_glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) glewGetProcAddress ("glBlitNamedFramebuffer");
    s_deviceConfig.m_glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) glewGetProcAddress ("glCheckNamedFramebufferStatus");
    s_deviceConfig.m_glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedFramebufferParameteriv");
    s_deviceConfig.m_glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) glewGetProcAddress ("glGetNamedFramebufferAttachmentParameteriv");
    s_deviceConfig.m_glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) glewGetProcAddress ("glCreateRenderbuffers");
    s_deviceConfig.m_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) glewGetProcAddress ("glNamedRenderbufferStorage");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisample");
    s_deviceConfig.m_glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedRenderbufferParameteriv");
    s_deviceConfig.m_glCreateTextures = (PFNGLCREATETEXTURESPROC) glewGetProcAddress ("glCreateTextures");
    s_deviceConfig.m_glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) glewGetProcAddress ("glTextureBuffer");
    s_deviceConfig.m_glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) glewGetProcAddress ("glTextureBufferRange");
    s_deviceConfig.m_glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) glewGetProcAddress ("glTextureStorage1D");
    s_deviceConfig.m_glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) glewGetProcAddress ("glTextureStorage2D");
    s_deviceConfig.m_glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) glewGetProcAddress ("glTextureStorage3D");
    s_deviceConfig.m_glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTextureStorage2DMultisample");
    s_deviceConfig.m_glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTextureStorage3DMultisample");
    s_deviceConfig.m_glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glTextureSubImage1D");
    s_deviceConfig.m_glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glTextureSubImage2D");
    s_deviceConfig.m_glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glTextureSubImage3D");
    s_deviceConfig.m_glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glCompressedTextureSubImage1D");
    s_deviceConfig.m_glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glCompressedTextureSubImage2D");
    s_deviceConfig.m_glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glCompressedTextureSubImage3D");
    s_deviceConfig.m_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glCopyTextureSubImage1D");
    s_deviceConfig.m_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glCopyTextureSubImage2D");
    s_deviceConfig.m_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glCopyTextureSubImage3D");
    s_deviceConfig.m_glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) glewGetProcAddress ("glTextureParameterf");
    s_deviceConfig.m_glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) glewGetProcAddress ("glTextureParameterfv");
    s_deviceConfig.m_glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) glewGetProcAddress ("glTextureParameteri");
    s_deviceConfig.m_glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) glewGetProcAddress ("glTextureParameterIiv");
    s_deviceConfig.m_glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) glewGetProcAddress ("glTextureParameterIuiv");
    s_deviceConfig.m_glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) glewGetProcAddress ("glTextureParameteriv");
    s_deviceConfig.m_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) glewGetProcAddress ("glGenerateTextureMipmap");
    s_deviceConfig.m_glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) glewGetProcAddress ("glBindTextureUnit");
    s_deviceConfig.m_glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) glewGetProcAddress ("glGetTextureImage");
    s_deviceConfig.m_glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) glewGetProcAddress ("glGetCompressedTextureImage");
    s_deviceConfig.m_glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) glewGetProcAddress ("glGetTextureLevelParameterfv");
    s_deviceConfig.m_glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) glewGetProcAddress ("glGetTextureLevelParameteriv");
    s_deviceConfig.m_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) glewGetProcAddress ("glGetTextureParameterfv");
    s_deviceConfig.m_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) glewGetProcAddress ("glGetTextureParameterIiv");
    s_deviceConfig.m_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) glewGetProcAddress ("glGetTextureParameterIuiv");
    s_deviceConfig.m_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) glewGetProcAddress ("glGetTextureParameteriv");
    s_deviceConfig.m_glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) glewGetProcAddress ("glCreateVertexArrays");
    s_deviceConfig.m_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) glewGetProcAddress ("glDisableVertexArrayAttrib");
    s_deviceConfig.m_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) glewGetProcAddress ("glEnableVertexArrayAttrib");
    s_deviceConfig.m_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) glewGetProcAddress ("glVertexArrayElementBuffer");
    s_deviceConfig.m_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) glewGetProcAddress ("glVertexArrayVertexBuffer");
    s_deviceConfig.m_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) glewGetProcAddress ("glVertexArrayVertexBuffers");
    s_deviceConfig.m_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) glewGetProcAddress ("glVertexArrayAttribBinding");
    s_deviceConfig.m_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) glewGetProcAddress ("glVertexArrayAttribFormat");
    s_deviceConfig.m_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) glewGetProcAddress ("glVertexArrayAttribIFormat");
    s_deviceConfig.m_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) glewGetProcAddress ("glVertexArrayAttribLFormat");
    s_deviceConfig.m_glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) glewGetProcAddress ("glVertexArrayBindingDivisor");
    s_deviceConfig.m_glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) glewGetProcAddress ("glGetVertexArrayiv");
    s_deviceConfig.m_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) glewGetProcAddress ("glGetVertexArrayIndexediv");
    s_deviceConfig.m_glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) glewGetProcAddress ("glGetVertexArrayIndexed64iv");
    s_deviceConfig.m_glCreateSamplers = (PFNGLCREATESAMPLERSPROC) glewGetProcAddress ("glCreateSamplers");
    s_deviceConfig.m_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) glewGetProcAddress ("glCreateProgramPipelines");
    s_deviceConfig.m_glCreateQueries = (PFNGLCREATEQUERIESPROC) glewGetProcAddress ("glCreateQueries");
    s_deviceConfig.m_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) glewGetProcAddress ("glGetQueryBufferObjecti64v");
    s_deviceConfig.m_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) glewGetProcAddress ("glGetQueryBufferObjectiv");
    s_deviceConfig.m_glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) glewGetProcAddress ("glGetQueryBufferObjectui64v");
    s_deviceConfig.m_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) glewGetProcAddress ("glGetQueryBufferObjectuiv");
    s_deviceConfig.m_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) glewGetProcAddress ("glMemoryBarrierByRegion");
    s_deviceConfig.m_glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) glewGetProcAddress ("glGetTextureSubImage");
    s_deviceConfig.m_glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) glewGetProcAddress ("glGetCompressedTextureSubImage");
    s_deviceConfig.m_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) glewGetProcAddress ("glGetGraphicsResetStatus");
    s_deviceConfig.m_glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) glewGetProcAddress ("glGetnCompressedTexImage");
    s_deviceConfig.m_glGetnTexImage = (PFNGLGETNTEXIMAGEPROC) glewGetProcAddress ("glGetnTexImage");
    s_deviceConfig.m_glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC) glewGetProcAddress ("glGetnUniformdv");
    s_deviceConfig.m_glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) glewGetProcAddress ("glGetnUniformfv");
    s_deviceConfig.m_glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) glewGetProcAddress ("glGetnUniformiv");
    s_deviceConfig.m_glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) glewGetProcAddress ("glGetnUniformuiv");
    s_deviceConfig.m_glReadnPixels = (PFNGLREADNPIXELSPROC) glewGetProcAddress ("glReadnPixels");
    s_deviceConfig.m_glGetnMapdv = (PFNGLGETNMAPDVPROC) glewGetProcAddress ("glGetnMapdv");
    s_deviceConfig.m_glGetnMapfv = (PFNGLGETNMAPFVPROC) glewGetProcAddress ("glGetnMapfv");
    s_deviceConfig.m_glGetnMapiv = (PFNGLGETNMAPIVPROC) glewGetProcAddress ("glGetnMapiv");
    s_deviceConfig.m_glGetnPixelMapfv = (PFNGLGETNPIXELMAPFVPROC) glewGetProcAddress ("glGetnPixelMapfv");
    s_deviceConfig.m_glGetnPixelMapuiv = (PFNGLGETNPIXELMAPUIVPROC) glewGetProcAddress ("glGetnPixelMapuiv");
    s_deviceConfig.m_glGetnPixelMapusv = (PFNGLGETNPIXELMAPUSVPROC) glewGetProcAddress ("glGetnPixelMapusv");
    s_deviceConfig.m_glGetnPolygonStipple = (PFNGLGETNPOLYGONSTIPPLEPROC) glewGetProcAddress ("glGetnPolygonStipple");
    s_deviceConfig.m_glGetnColorTable = (PFNGLGETNCOLORTABLEPROC) glewGetProcAddress ("glGetnColorTable");
    s_deviceConfig.m_glGetnConvolutionFilter = (PFNGLGETNCONVOLUTIONFILTERPROC) glewGetProcAddress ("glGetnConvolutionFilter");
    s_deviceConfig.m_glGetnSeparableFilter = (PFNGLGETNSEPARABLEFILTERPROC) glewGetProcAddress ("glGetnSeparableFilter");
    s_deviceConfig.m_glGetnHistogram = (PFNGLGETNHISTOGRAMPROC) glewGetProcAddress ("glGetnHistogram");
    s_deviceConfig.m_glGetnMinmax = (PFNGLGETNMINMAXPROC) glewGetProcAddress ("glGetnMinmax");
    s_deviceConfig.m_glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) glewGetProcAddress ("glTextureBarrier");
  }

  // GL_VERSION_4_6
  if (s_deviceConfig.m_featureSupported [GLEW_GL_VERSION_4_6])
  {
    s_deviceConfig.m_glSpecializeShader = (PFNGLSPECIALIZESHADERPROC) glewGetProcAddress ("glSpecializeShader");
    s_deviceConfig.m_glMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) glewGetProcAddress ("glMultiDrawArraysIndirectCount");
    s_deviceConfig.m_glMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) glewGetProcAddress ("glMultiDrawElementsIndirectCount");
    s_deviceConfig.m_glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) glewGetProcAddress ("glPolygonOffsetClamp");
  }

  // GL_3DFX_tbuffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_3DFX_tbuffer])
  {
    s_deviceConfig.m_glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC) glewGetProcAddress ("glTbufferMask3DFX");
  }

  // GL_AMD_debug_output
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_debug_output])
  {
    s_deviceConfig.m_glDebugMessageEnableAMD = (PFNGLDEBUGMESSAGEENABLEAMDPROC) glewGetProcAddress ("glDebugMessageEnableAMD");
    s_deviceConfig.m_glDebugMessageInsertAMD = (PFNGLDEBUGMESSAGEINSERTAMDPROC) glewGetProcAddress ("glDebugMessageInsertAMD");
    s_deviceConfig.m_glDebugMessageCallbackAMD = (PFNGLDEBUGMESSAGECALLBACKAMDPROC) glewGetProcAddress ("glDebugMessageCallbackAMD");
    s_deviceConfig.m_glGetDebugMessageLogAMD = (PFNGLGETDEBUGMESSAGELOGAMDPROC) glewGetProcAddress ("glGetDebugMessageLogAMD");
  }

  // GL_AMD_draw_buffers_blend
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_draw_buffers_blend])
  {
    s_deviceConfig.m_glBlendFuncIndexedAMD = (PFNGLBLENDFUNCINDEXEDAMDPROC) glewGetProcAddress ("glBlendFuncIndexedAMD");
    s_deviceConfig.m_glBlendFuncSeparateIndexedAMD = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC) glewGetProcAddress ("glBlendFuncSeparateIndexedAMD");
    s_deviceConfig.m_glBlendEquationIndexedAMD = (PFNGLBLENDEQUATIONINDEXEDAMDPROC) glewGetProcAddress ("glBlendEquationIndexedAMD");
    s_deviceConfig.m_glBlendEquationSeparateIndexedAMD = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC) glewGetProcAddress ("glBlendEquationSeparateIndexedAMD");
  }

  // GL_AMD_framebuffer_multisample_advanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_multisample_advanced])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleAdvancedAMD = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleAdvancedAMD");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisampleAdvancedAMD");
  }

  // GL_AMD_framebuffer_sample_positions
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_framebuffer_sample_positions])
  {
    s_deviceConfig.m_glFramebufferSamplePositionsfvAMD = (PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC) glewGetProcAddress ("glFramebufferSamplePositionsfvAMD");
    s_deviceConfig.m_glNamedFramebufferSamplePositionsfvAMD = (PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC) glewGetProcAddress ("glNamedFramebufferSamplePositionsfvAMD");
    s_deviceConfig.m_glGetFramebufferParameterfvAMD = (PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC) glewGetProcAddress ("glGetFramebufferParameterfvAMD");
    s_deviceConfig.m_glGetNamedFramebufferParameterfvAMD = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC) glewGetProcAddress ("glGetNamedFramebufferParameterfvAMD");
  }

  // GL_AMD_gpu_shader_int64
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_gpu_shader_int64])
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
    s_deviceConfig.m_glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC) glewGetProcAddress ("glGetUniformui64vNV");
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

  // GL_AMD_interleaved_elements
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_interleaved_elements])
  {
    s_deviceConfig.m_glVertexAttribParameteriAMD = (PFNGLVERTEXATTRIBPARAMETERIAMDPROC) glewGetProcAddress ("glVertexAttribParameteriAMD");
  }

  // GL_AMD_multi_draw_indirect
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_multi_draw_indirect])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirectAMD = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC) glewGetProcAddress ("glMultiDrawArraysIndirectAMD");
    s_deviceConfig.m_glMultiDrawElementsIndirectAMD = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC) glewGetProcAddress ("glMultiDrawElementsIndirectAMD");
  }

  // GL_AMD_name_gen_delete
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_name_gen_delete])
  {
    s_deviceConfig.m_glGenNamesAMD = (PFNGLGENNAMESAMDPROC) glewGetProcAddress ("glGenNamesAMD");
    s_deviceConfig.m_glDeleteNamesAMD = (PFNGLDELETENAMESAMDPROC) glewGetProcAddress ("glDeleteNamesAMD");
    s_deviceConfig.m_glIsNameAMD = (PFNGLISNAMEAMDPROC) glewGetProcAddress ("glIsNameAMD");
  }

  // GL_AMD_occlusion_query_event
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_occlusion_query_event])
  {
    s_deviceConfig.m_glQueryObjectParameteruiAMD = (PFNGLQUERYOBJECTPARAMETERUIAMDPROC) glewGetProcAddress ("glQueryObjectParameteruiAMD");
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

  // GL_AMD_sample_positions
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_sample_positions])
  {
    s_deviceConfig.m_glSetMultisamplefvAMD = (PFNGLSETMULTISAMPLEFVAMDPROC) glewGetProcAddress ("glSetMultisamplefvAMD");
  }

  // GL_AMD_sparse_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_sparse_texture])
  {
    s_deviceConfig.m_glTexStorageSparseAMD = (PFNGLTEXSTORAGESPARSEAMDPROC) glewGetProcAddress ("glTexStorageSparseAMD");
    s_deviceConfig.m_glTextureStorageSparseAMD = (PFNGLTEXTURESTORAGESPARSEAMDPROC) glewGetProcAddress ("glTextureStorageSparseAMD");
  }

  // GL_AMD_stencil_operation_extended
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_stencil_operation_extended])
  {
    s_deviceConfig.m_glStencilOpValueAMD = (PFNGLSTENCILOPVALUEAMDPROC) glewGetProcAddress ("glStencilOpValueAMD");
  }

  // GL_AMD_vertex_shader_tessellator
  if (s_deviceConfig.m_featureSupported [GLEW_GL_AMD_vertex_shader_tessellator])
  {
    s_deviceConfig.m_glTessellationFactorAMD = (PFNGLTESSELLATIONFACTORAMDPROC) glewGetProcAddress ("glTessellationFactorAMD");
    s_deviceConfig.m_glTessellationModeAMD = (PFNGLTESSELLATIONMODEAMDPROC) glewGetProcAddress ("glTessellationModeAMD");
  }

  // GL_APPLE_element_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_element_array])
  {
    s_deviceConfig.m_glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC) glewGetProcAddress ("glElementPointerAPPLE");
    s_deviceConfig.m_glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC) glewGetProcAddress ("glDrawElementArrayAPPLE");
    s_deviceConfig.m_glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC) glewGetProcAddress ("glDrawRangeElementArrayAPPLE");
    s_deviceConfig.m_glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC) glewGetProcAddress ("glMultiDrawElementArrayAPPLE");
    s_deviceConfig.m_glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC) glewGetProcAddress ("glMultiDrawRangeElementArrayAPPLE");
  }

  // GL_APPLE_fence
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_fence])
  {
    s_deviceConfig.m_glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC) glewGetProcAddress ("glGenFencesAPPLE");
    s_deviceConfig.m_glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC) glewGetProcAddress ("glDeleteFencesAPPLE");
    s_deviceConfig.m_glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC) glewGetProcAddress ("glSetFenceAPPLE");
    s_deviceConfig.m_glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC) glewGetProcAddress ("glIsFenceAPPLE");
    s_deviceConfig.m_glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC) glewGetProcAddress ("glTestFenceAPPLE");
    s_deviceConfig.m_glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC) glewGetProcAddress ("glFinishFenceAPPLE");
    s_deviceConfig.m_glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC) glewGetProcAddress ("glTestObjectAPPLE");
    s_deviceConfig.m_glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC) glewGetProcAddress ("glFinishObjectAPPLE");
  }

  // GL_APPLE_flush_buffer_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_flush_buffer_range])
  {
    s_deviceConfig.m_glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC) glewGetProcAddress ("glBufferParameteriAPPLE");
    s_deviceConfig.m_glFlushMappedBufferRangeAPPLE = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC) glewGetProcAddress ("glFlushMappedBufferRangeAPPLE");
  }

  // GL_APPLE_object_purgeable
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_object_purgeable])
  {
    s_deviceConfig.m_glObjectPurgeableAPPLE = (PFNGLOBJECTPURGEABLEAPPLEPROC) glewGetProcAddress ("glObjectPurgeableAPPLE");
    s_deviceConfig.m_glObjectUnpurgeableAPPLE = (PFNGLOBJECTUNPURGEABLEAPPLEPROC) glewGetProcAddress ("glObjectUnpurgeableAPPLE");
    s_deviceConfig.m_glGetObjectParameterivAPPLE = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC) glewGetProcAddress ("glGetObjectParameterivAPPLE");
  }

  // GL_APPLE_texture_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_texture_range])
  {
    s_deviceConfig.m_glTextureRangeAPPLE = (PFNGLTEXTURERANGEAPPLEPROC) glewGetProcAddress ("glTextureRangeAPPLE");
    s_deviceConfig.m_glGetTexParameterPointervAPPLE = (PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC) glewGetProcAddress ("glGetTexParameterPointervAPPLE");
  }

  // GL_APPLE_vertex_array_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_vertex_array_object])
  {
    s_deviceConfig.m_glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC) glewGetProcAddress ("glBindVertexArrayAPPLE");
    s_deviceConfig.m_glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC) glewGetProcAddress ("glDeleteVertexArraysAPPLE");
    s_deviceConfig.m_glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC) glewGetProcAddress ("glGenVertexArraysAPPLE");
    s_deviceConfig.m_glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC) glewGetProcAddress ("glIsVertexArrayAPPLE");
  }

  // GL_APPLE_vertex_array_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_vertex_array_range])
  {
    s_deviceConfig.m_glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC) glewGetProcAddress ("glVertexArrayRangeAPPLE");
    s_deviceConfig.m_glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC) glewGetProcAddress ("glFlushVertexArrayRangeAPPLE");
    s_deviceConfig.m_glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC) glewGetProcAddress ("glVertexArrayParameteriAPPLE");
  }

  // GL_APPLE_vertex_program_evaluators
  if (s_deviceConfig.m_featureSupported [GLEW_GL_APPLE_vertex_program_evaluators])
  {
    s_deviceConfig.m_glEnableVertexAttribAPPLE = (PFNGLENABLEVERTEXATTRIBAPPLEPROC) glewGetProcAddress ("glEnableVertexAttribAPPLE");
    s_deviceConfig.m_glDisableVertexAttribAPPLE = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC) glewGetProcAddress ("glDisableVertexAttribAPPLE");
    s_deviceConfig.m_glIsVertexAttribEnabledAPPLE = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC) glewGetProcAddress ("glIsVertexAttribEnabledAPPLE");
    s_deviceConfig.m_glMapVertexAttrib1dAPPLE = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC) glewGetProcAddress ("glMapVertexAttrib1dAPPLE");
    s_deviceConfig.m_glMapVertexAttrib1fAPPLE = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC) glewGetProcAddress ("glMapVertexAttrib1fAPPLE");
    s_deviceConfig.m_glMapVertexAttrib2dAPPLE = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC) glewGetProcAddress ("glMapVertexAttrib2dAPPLE");
    s_deviceConfig.m_glMapVertexAttrib2fAPPLE = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC) glewGetProcAddress ("glMapVertexAttrib2fAPPLE");
  }

  // GL_ARB_ES2_compatibility
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES2_compatibility])
  {
    s_deviceConfig.m_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) glewGetProcAddress ("glReleaseShaderCompiler");
    s_deviceConfig.m_glShaderBinary = (PFNGLSHADERBINARYPROC) glewGetProcAddress ("glShaderBinary");
    s_deviceConfig.m_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) glewGetProcAddress ("glGetShaderPrecisionFormat");
    s_deviceConfig.m_glDepthRangef = (PFNGLDEPTHRANGEFPROC) glewGetProcAddress ("glDepthRangef");
    s_deviceConfig.m_glClearDepthf = (PFNGLCLEARDEPTHFPROC) glewGetProcAddress ("glClearDepthf");
  }

  // GL_ARB_ES3_1_compatibility
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_1_compatibility])
  {
    s_deviceConfig.m_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) glewGetProcAddress ("glMemoryBarrierByRegion");
  }

  // GL_ARB_ES3_2_compatibility
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_ES3_2_compatibility])
  {
    s_deviceConfig.m_glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) glewGetProcAddress ("glPrimitiveBoundingBoxARB");
  }

  // GL_ARB_base_instance
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_base_instance])
  {
    s_deviceConfig.m_glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) glewGetProcAddress ("glDrawArraysInstancedBaseInstance");
    s_deviceConfig.m_glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) glewGetProcAddress ("glDrawElementsInstancedBaseInstance");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertexBaseInstance");
  }

  // GL_ARB_bindless_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_bindless_texture])
  {
    s_deviceConfig.m_glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC) glewGetProcAddress ("glGetTextureHandleARB");
    s_deviceConfig.m_glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) glewGetProcAddress ("glGetTextureSamplerHandleARB");
    s_deviceConfig.m_glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) glewGetProcAddress ("glMakeTextureHandleResidentARB");
    s_deviceConfig.m_glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) glewGetProcAddress ("glMakeTextureHandleNonResidentARB");
    s_deviceConfig.m_glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC) glewGetProcAddress ("glGetImageHandleARB");
    s_deviceConfig.m_glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) glewGetProcAddress ("glMakeImageHandleResidentARB");
    s_deviceConfig.m_glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) glewGetProcAddress ("glMakeImageHandleNonResidentARB");
    s_deviceConfig.m_glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC) glewGetProcAddress ("glUniformHandleui64ARB");
    s_deviceConfig.m_glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC) glewGetProcAddress ("glUniformHandleui64vARB");
    s_deviceConfig.m_glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) glewGetProcAddress ("glProgramUniformHandleui64ARB");
    s_deviceConfig.m_glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) glewGetProcAddress ("glProgramUniformHandleui64vARB");
    s_deviceConfig.m_glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) glewGetProcAddress ("glIsTextureHandleResidentARB");
    s_deviceConfig.m_glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC) glewGetProcAddress ("glIsImageHandleResidentARB");
    s_deviceConfig.m_glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC) glewGetProcAddress ("glVertexAttribL1ui64ARB");
    s_deviceConfig.m_glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC) glewGetProcAddress ("glVertexAttribL1ui64vARB");
    s_deviceConfig.m_glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) glewGetProcAddress ("glGetVertexAttribLui64vARB");
  }

  // GL_ARB_blend_func_extended
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_blend_func_extended])
  {
    s_deviceConfig.m_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) glewGetProcAddress ("glBindFragDataLocationIndexed");
    s_deviceConfig.m_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) glewGetProcAddress ("glGetFragDataIndex");
  }

  // GL_ARB_buffer_storage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_buffer_storage])
  {
    s_deviceConfig.m_glBufferStorage = (PFNGLBUFFERSTORAGEPROC) glewGetProcAddress ("glBufferStorage");
  }

  // GL_ARB_cl_event
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_cl_event])
  {
    s_deviceConfig.m_glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC) glewGetProcAddress ("glCreateSyncFromCLeventARB");
  }

  // GL_ARB_clear_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_buffer_object])
  {
    s_deviceConfig.m_glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) glewGetProcAddress ("glClearBufferData");
    s_deviceConfig.m_glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) glewGetProcAddress ("glClearBufferSubData");
  }

  // GL_ARB_clear_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clear_texture])
  {
    s_deviceConfig.m_glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) glewGetProcAddress ("glClearTexImage");
    s_deviceConfig.m_glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) glewGetProcAddress ("glClearTexSubImage");
  }

  // GL_ARB_clip_control
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_clip_control])
  {
    s_deviceConfig.m_glClipControl = (PFNGLCLIPCONTROLPROC) glewGetProcAddress ("glClipControl");
  }

  // GL_ARB_color_buffer_float
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_color_buffer_float])
  {
    s_deviceConfig.m_glClampColorARB = (PFNGLCLAMPCOLORARBPROC) glewGetProcAddress ("glClampColorARB");
  }

  // GL_ARB_compute_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_shader])
  {
    s_deviceConfig.m_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) glewGetProcAddress ("glDispatchCompute");
    s_deviceConfig.m_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) glewGetProcAddress ("glDispatchComputeIndirect");
  }

  // GL_ARB_compute_variable_group_size
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_compute_variable_group_size])
  {
    s_deviceConfig.m_glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) glewGetProcAddress ("glDispatchComputeGroupSizeARB");
  }

  // GL_ARB_copy_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_buffer])
  {
    s_deviceConfig.m_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyBufferSubData");
  }

  // GL_ARB_copy_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_copy_image])
  {
    s_deviceConfig.m_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) glewGetProcAddress ("glCopyImageSubData");
  }

  // GL_ARB_debug_output
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_debug_output])
  {
    s_deviceConfig.m_glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC) glewGetProcAddress ("glDebugMessageControlARB");
    s_deviceConfig.m_glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC) glewGetProcAddress ("glDebugMessageInsertARB");
    s_deviceConfig.m_glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC) glewGetProcAddress ("glDebugMessageCallbackARB");
    s_deviceConfig.m_glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC) glewGetProcAddress ("glGetDebugMessageLogARB");
  }

  // GL_ARB_direct_state_access
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_direct_state_access])
  {
    s_deviceConfig.m_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glCreateTransformFeedbacks");
    s_deviceConfig.m_glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) glewGetProcAddress ("glTransformFeedbackBufferBase");
    s_deviceConfig.m_glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) glewGetProcAddress ("glTransformFeedbackBufferRange");
    s_deviceConfig.m_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) glewGetProcAddress ("glGetTransformFeedbackiv");
    s_deviceConfig.m_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) glewGetProcAddress ("glGetTransformFeedbacki_v");
    s_deviceConfig.m_glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) glewGetProcAddress ("glGetTransformFeedbacki64_v");
    s_deviceConfig.m_glCreateBuffers = (PFNGLCREATEBUFFERSPROC) glewGetProcAddress ("glCreateBuffers");
    s_deviceConfig.m_glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) glewGetProcAddress ("glNamedBufferStorage");
    s_deviceConfig.m_glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) glewGetProcAddress ("glNamedBufferData");
    s_deviceConfig.m_glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glNamedBufferSubData");
    s_deviceConfig.m_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glCopyNamedBufferSubData");
    s_deviceConfig.m_glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) glewGetProcAddress ("glClearNamedBufferData");
    s_deviceConfig.m_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glClearNamedBufferSubData");
    s_deviceConfig.m_glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) glewGetProcAddress ("glMapNamedBuffer");
    s_deviceConfig.m_glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) glewGetProcAddress ("glMapNamedBufferRange");
    s_deviceConfig.m_glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) glewGetProcAddress ("glUnmapNamedBuffer");
    s_deviceConfig.m_glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedNamedBufferRange");
    s_deviceConfig.m_glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedBufferParameteriv");
    s_deviceConfig.m_glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) glewGetProcAddress ("glGetNamedBufferParameteri64v");
    s_deviceConfig.m_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) glewGetProcAddress ("glGetNamedBufferPointerv");
    s_deviceConfig.m_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) glewGetProcAddress ("glGetNamedBufferSubData");
    s_deviceConfig.m_glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) glewGetProcAddress ("glCreateFramebuffers");
    s_deviceConfig.m_glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) glewGetProcAddress ("glNamedFramebufferRenderbuffer");
    s_deviceConfig.m_glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glNamedFramebufferParameteri");
    s_deviceConfig.m_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) glewGetProcAddress ("glNamedFramebufferTexture");
    s_deviceConfig.m_glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glNamedFramebufferTextureLayer");
    s_deviceConfig.m_glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) glewGetProcAddress ("glNamedFramebufferDrawBuffer");
    s_deviceConfig.m_glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) glewGetProcAddress ("glNamedFramebufferDrawBuffers");
    s_deviceConfig.m_glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) glewGetProcAddress ("glNamedFramebufferReadBuffer");
    s_deviceConfig.m_glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) glewGetProcAddress ("glInvalidateNamedFramebufferData");
    s_deviceConfig.m_glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) glewGetProcAddress ("glInvalidateNamedFramebufferSubData");
    s_deviceConfig.m_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) glewGetProcAddress ("glClearNamedFramebufferiv");
    s_deviceConfig.m_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) glewGetProcAddress ("glClearNamedFramebufferuiv");
    s_deviceConfig.m_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) glewGetProcAddress ("glClearNamedFramebufferfv");
    s_deviceConfig.m_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) glewGetProcAddress ("glClearNamedFramebufferfi");
    s_deviceConfig.m_glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) glewGetProcAddress ("glBlitNamedFramebuffer");
    s_deviceConfig.m_glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) glewGetProcAddress ("glCheckNamedFramebufferStatus");
    s_deviceConfig.m_glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedFramebufferParameteriv");
    s_deviceConfig.m_glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) glewGetProcAddress ("glGetNamedFramebufferAttachmentParameteriv");
    s_deviceConfig.m_glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) glewGetProcAddress ("glCreateRenderbuffers");
    s_deviceConfig.m_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) glewGetProcAddress ("glNamedRenderbufferStorage");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisample");
    s_deviceConfig.m_glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetNamedRenderbufferParameteriv");
    s_deviceConfig.m_glCreateTextures = (PFNGLCREATETEXTURESPROC) glewGetProcAddress ("glCreateTextures");
    s_deviceConfig.m_glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) glewGetProcAddress ("glTextureBuffer");
    s_deviceConfig.m_glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) glewGetProcAddress ("glTextureBufferRange");
    s_deviceConfig.m_glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) glewGetProcAddress ("glTextureStorage1D");
    s_deviceConfig.m_glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) glewGetProcAddress ("glTextureStorage2D");
    s_deviceConfig.m_glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) glewGetProcAddress ("glTextureStorage3D");
    s_deviceConfig.m_glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTextureStorage2DMultisample");
    s_deviceConfig.m_glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTextureStorage3DMultisample");
    s_deviceConfig.m_glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glTextureSubImage1D");
    s_deviceConfig.m_glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glTextureSubImage2D");
    s_deviceConfig.m_glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glTextureSubImage3D");
    s_deviceConfig.m_glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glCompressedTextureSubImage1D");
    s_deviceConfig.m_glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glCompressedTextureSubImage2D");
    s_deviceConfig.m_glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glCompressedTextureSubImage3D");
    s_deviceConfig.m_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) glewGetProcAddress ("glCopyTextureSubImage1D");
    s_deviceConfig.m_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) glewGetProcAddress ("glCopyTextureSubImage2D");
    s_deviceConfig.m_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) glewGetProcAddress ("glCopyTextureSubImage3D");
    s_deviceConfig.m_glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) glewGetProcAddress ("glTextureParameterf");
    s_deviceConfig.m_glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) glewGetProcAddress ("glTextureParameterfv");
    s_deviceConfig.m_glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) glewGetProcAddress ("glTextureParameteri");
    s_deviceConfig.m_glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) glewGetProcAddress ("glTextureParameterIiv");
    s_deviceConfig.m_glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) glewGetProcAddress ("glTextureParameterIuiv");
    s_deviceConfig.m_glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) glewGetProcAddress ("glTextureParameteriv");
    s_deviceConfig.m_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) glewGetProcAddress ("glGenerateTextureMipmap");
    s_deviceConfig.m_glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) glewGetProcAddress ("glBindTextureUnit");
    s_deviceConfig.m_glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) glewGetProcAddress ("glGetTextureImage");
    s_deviceConfig.m_glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) glewGetProcAddress ("glGetCompressedTextureImage");
    s_deviceConfig.m_glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) glewGetProcAddress ("glGetTextureLevelParameterfv");
    s_deviceConfig.m_glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) glewGetProcAddress ("glGetTextureLevelParameteriv");
    s_deviceConfig.m_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) glewGetProcAddress ("glGetTextureParameterfv");
    s_deviceConfig.m_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) glewGetProcAddress ("glGetTextureParameterIiv");
    s_deviceConfig.m_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) glewGetProcAddress ("glGetTextureParameterIuiv");
    s_deviceConfig.m_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) glewGetProcAddress ("glGetTextureParameteriv");
    s_deviceConfig.m_glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) glewGetProcAddress ("glCreateVertexArrays");
    s_deviceConfig.m_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) glewGetProcAddress ("glDisableVertexArrayAttrib");
    s_deviceConfig.m_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) glewGetProcAddress ("glEnableVertexArrayAttrib");
    s_deviceConfig.m_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) glewGetProcAddress ("glVertexArrayElementBuffer");
    s_deviceConfig.m_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) glewGetProcAddress ("glVertexArrayVertexBuffer");
    s_deviceConfig.m_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) glewGetProcAddress ("glVertexArrayVertexBuffers");
    s_deviceConfig.m_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) glewGetProcAddress ("glVertexArrayAttribBinding");
    s_deviceConfig.m_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) glewGetProcAddress ("glVertexArrayAttribFormat");
    s_deviceConfig.m_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) glewGetProcAddress ("glVertexArrayAttribIFormat");
    s_deviceConfig.m_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) glewGetProcAddress ("glVertexArrayAttribLFormat");
    s_deviceConfig.m_glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) glewGetProcAddress ("glVertexArrayBindingDivisor");
    s_deviceConfig.m_glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) glewGetProcAddress ("glGetVertexArrayiv");
    s_deviceConfig.m_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) glewGetProcAddress ("glGetVertexArrayIndexediv");
    s_deviceConfig.m_glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) glewGetProcAddress ("glGetVertexArrayIndexed64iv");
    s_deviceConfig.m_glCreateSamplers = (PFNGLCREATESAMPLERSPROC) glewGetProcAddress ("glCreateSamplers");
    s_deviceConfig.m_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) glewGetProcAddress ("glCreateProgramPipelines");
    s_deviceConfig.m_glCreateQueries = (PFNGLCREATEQUERIESPROC) glewGetProcAddress ("glCreateQueries");
    s_deviceConfig.m_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) glewGetProcAddress ("glGetQueryBufferObjecti64v");
    s_deviceConfig.m_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) glewGetProcAddress ("glGetQueryBufferObjectiv");
    s_deviceConfig.m_glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) glewGetProcAddress ("glGetQueryBufferObjectui64v");
    s_deviceConfig.m_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) glewGetProcAddress ("glGetQueryBufferObjectuiv");
  }

  // GL_ARB_draw_buffers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_buffers])
  {
    s_deviceConfig.m_glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC) glewGetProcAddress ("glDrawBuffersARB");
  }

  // GL_ARB_draw_buffers_blend
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_buffers_blend])
  {
    s_deviceConfig.m_glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC) glewGetProcAddress ("glBlendEquationiARB");
    s_deviceConfig.m_glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) glewGetProcAddress ("glBlendEquationSeparateiARB");
    s_deviceConfig.m_glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC) glewGetProcAddress ("glBlendFunciARB");
    s_deviceConfig.m_glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC) glewGetProcAddress ("glBlendFuncSeparateiARB");
  }

  // GL_ARB_draw_elements_base_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_elements_base_vertex])
  {
    s_deviceConfig.m_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsBaseVertex");
    s_deviceConfig.m_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glDrawRangeElementsBaseVertex");
    s_deviceConfig.m_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) glewGetProcAddress ("glDrawElementsInstancedBaseVertex");
    s_deviceConfig.m_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) glewGetProcAddress ("glMultiDrawElementsBaseVertex");
  }

  // GL_ARB_draw_indirect
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_indirect])
  {
    s_deviceConfig.m_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glDrawArraysIndirect");
    s_deviceConfig.m_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glDrawElementsIndirect");
  }

  // GL_ARB_draw_instanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_draw_instanced])
  {
    s_deviceConfig.m_glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC) glewGetProcAddress ("glDrawArraysInstancedARB");
    s_deviceConfig.m_glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) glewGetProcAddress ("glDrawElementsInstancedARB");
  }

  // GL_ARB_fragment_program
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_fragment_program])
  {
    s_deviceConfig.m_glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) glewGetProcAddress ("glProgramStringARB");
    s_deviceConfig.m_glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) glewGetProcAddress ("glBindProgramARB");
    s_deviceConfig.m_glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) glewGetProcAddress ("glDeleteProgramsARB");
    s_deviceConfig.m_glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) glewGetProcAddress ("glGenProgramsARB");
    s_deviceConfig.m_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) glewGetProcAddress ("glProgramEnvParameter4dARB");
    s_deviceConfig.m_glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) glewGetProcAddress ("glProgramEnvParameter4dvARB");
    s_deviceConfig.m_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) glewGetProcAddress ("glProgramEnvParameter4fARB");
    s_deviceConfig.m_glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) glewGetProcAddress ("glProgramEnvParameter4fvARB");
    s_deviceConfig.m_glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) glewGetProcAddress ("glProgramLocalParameter4dARB");
    s_deviceConfig.m_glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) glewGetProcAddress ("glProgramLocalParameter4dvARB");
    s_deviceConfig.m_glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) glewGetProcAddress ("glProgramLocalParameter4fARB");
    s_deviceConfig.m_glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) glewGetProcAddress ("glProgramLocalParameter4fvARB");
    s_deviceConfig.m_glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) glewGetProcAddress ("glGetProgramEnvParameterdvARB");
    s_deviceConfig.m_glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) glewGetProcAddress ("glGetProgramEnvParameterfvARB");
    s_deviceConfig.m_glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) glewGetProcAddress ("glGetProgramLocalParameterdvARB");
    s_deviceConfig.m_glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) glewGetProcAddress ("glGetProgramLocalParameterfvARB");
    s_deviceConfig.m_glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) glewGetProcAddress ("glGetProgramivARB");
    s_deviceConfig.m_glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) glewGetProcAddress ("glGetProgramStringARB");
    s_deviceConfig.m_glIsProgramARB = (PFNGLISPROGRAMARBPROC) glewGetProcAddress ("glIsProgramARB");
  }

  // GL_ARB_framebuffer_no_attachments
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_no_attachments])
  {
    s_deviceConfig.m_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) glewGetProcAddress ("glFramebufferParameteri");
    s_deviceConfig.m_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferParameteriv");
  }

  // GL_ARB_framebuffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_framebuffer_object])
  {
    s_deviceConfig.m_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) glewGetProcAddress ("glIsRenderbuffer");
    s_deviceConfig.m_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) glewGetProcAddress ("glBindRenderbuffer");
    s_deviceConfig.m_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) glewGetProcAddress ("glDeleteRenderbuffers");
    s_deviceConfig.m_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) glewGetProcAddress ("glGenRenderbuffers");
    s_deviceConfig.m_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) glewGetProcAddress ("glRenderbufferStorage");
    s_deviceConfig.m_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) glewGetProcAddress ("glGetRenderbufferParameteriv");
    s_deviceConfig.m_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) glewGetProcAddress ("glIsFramebuffer");
    s_deviceConfig.m_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) glewGetProcAddress ("glBindFramebuffer");
    s_deviceConfig.m_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) glewGetProcAddress ("glDeleteFramebuffers");
    s_deviceConfig.m_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) glewGetProcAddress ("glGenFramebuffers");
    s_deviceConfig.m_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) glewGetProcAddress ("glCheckFramebufferStatus");
    s_deviceConfig.m_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) glewGetProcAddress ("glFramebufferTexture1D");
    s_deviceConfig.m_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) glewGetProcAddress ("glFramebufferTexture2D");
    s_deviceConfig.m_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) glewGetProcAddress ("glFramebufferTexture3D");
    s_deviceConfig.m_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) glewGetProcAddress ("glFramebufferRenderbuffer");
    s_deviceConfig.m_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) glewGetProcAddress ("glGetFramebufferAttachmentParameteriv");
    s_deviceConfig.m_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) glewGetProcAddress ("glGenerateMipmap");
    s_deviceConfig.m_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) glewGetProcAddress ("glBlitFramebuffer");
    s_deviceConfig.m_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) glewGetProcAddress ("glRenderbufferStorageMultisample");
    s_deviceConfig.m_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) glewGetProcAddress ("glFramebufferTextureLayer");
  }

  // GL_ARB_geometry_shader4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_geometry_shader4])
  {
    s_deviceConfig.m_glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC) glewGetProcAddress ("glProgramParameteriARB");
    s_deviceConfig.m_glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC) glewGetProcAddress ("glFramebufferTextureARB");
    s_deviceConfig.m_glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) glewGetProcAddress ("glFramebufferTextureLayerARB");
    s_deviceConfig.m_glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) glewGetProcAddress ("glFramebufferTextureFaceARB");
  }

  // GL_ARB_get_program_binary
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_program_binary])
  {
    s_deviceConfig.m_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) glewGetProcAddress ("glGetProgramBinary");
    s_deviceConfig.m_glProgramBinary = (PFNGLPROGRAMBINARYPROC) glewGetProcAddress ("glProgramBinary");
    s_deviceConfig.m_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) glewGetProcAddress ("glProgramParameteri");
  }

  // GL_ARB_get_texture_sub_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_get_texture_sub_image])
  {
    s_deviceConfig.m_glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) glewGetProcAddress ("glGetTextureSubImage");
    s_deviceConfig.m_glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) glewGetProcAddress ("glGetCompressedTextureSubImage");
  }

  // GL_ARB_gl_spirv
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gl_spirv])
  {
    s_deviceConfig.m_glSpecializeShaderARB = (PFNGLSPECIALIZESHADERARBPROC) glewGetProcAddress ("glSpecializeShaderARB");
  }

  // GL_ARB_gpu_shader_fp64
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader_fp64])
  {
    s_deviceConfig.m_glUniform1d = (PFNGLUNIFORM1DPROC) glewGetProcAddress ("glUniform1d");
    s_deviceConfig.m_glUniform2d = (PFNGLUNIFORM2DPROC) glewGetProcAddress ("glUniform2d");
    s_deviceConfig.m_glUniform3d = (PFNGLUNIFORM3DPROC) glewGetProcAddress ("glUniform3d");
    s_deviceConfig.m_glUniform4d = (PFNGLUNIFORM4DPROC) glewGetProcAddress ("glUniform4d");
    s_deviceConfig.m_glUniform1dv = (PFNGLUNIFORM1DVPROC) glewGetProcAddress ("glUniform1dv");
    s_deviceConfig.m_glUniform2dv = (PFNGLUNIFORM2DVPROC) glewGetProcAddress ("glUniform2dv");
    s_deviceConfig.m_glUniform3dv = (PFNGLUNIFORM3DVPROC) glewGetProcAddress ("glUniform3dv");
    s_deviceConfig.m_glUniform4dv = (PFNGLUNIFORM4DVPROC) glewGetProcAddress ("glUniform4dv");
    s_deviceConfig.m_glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) glewGetProcAddress ("glUniformMatrix2dv");
    s_deviceConfig.m_glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) glewGetProcAddress ("glUniformMatrix3dv");
    s_deviceConfig.m_glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) glewGetProcAddress ("glUniformMatrix4dv");
    s_deviceConfig.m_glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) glewGetProcAddress ("glUniformMatrix2x3dv");
    s_deviceConfig.m_glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) glewGetProcAddress ("glUniformMatrix2x4dv");
    s_deviceConfig.m_glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) glewGetProcAddress ("glUniformMatrix3x2dv");
    s_deviceConfig.m_glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) glewGetProcAddress ("glUniformMatrix3x4dv");
    s_deviceConfig.m_glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) glewGetProcAddress ("glUniformMatrix4x2dv");
    s_deviceConfig.m_glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) glewGetProcAddress ("glUniformMatrix4x3dv");
    s_deviceConfig.m_glGetUniformdv = (PFNGLGETUNIFORMDVPROC) glewGetProcAddress ("glGetUniformdv");
  }

  // GL_ARB_gpu_shader_int64
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_gpu_shader_int64])
  {
    s_deviceConfig.m_glUniform1i64ARB = (PFNGLUNIFORM1I64ARBPROC) glewGetProcAddress ("glUniform1i64ARB");
    s_deviceConfig.m_glUniform2i64ARB = (PFNGLUNIFORM2I64ARBPROC) glewGetProcAddress ("glUniform2i64ARB");
    s_deviceConfig.m_glUniform3i64ARB = (PFNGLUNIFORM3I64ARBPROC) glewGetProcAddress ("glUniform3i64ARB");
    s_deviceConfig.m_glUniform4i64ARB = (PFNGLUNIFORM4I64ARBPROC) glewGetProcAddress ("glUniform4i64ARB");
    s_deviceConfig.m_glUniform1i64vARB = (PFNGLUNIFORM1I64VARBPROC) glewGetProcAddress ("glUniform1i64vARB");
    s_deviceConfig.m_glUniform2i64vARB = (PFNGLUNIFORM2I64VARBPROC) glewGetProcAddress ("glUniform2i64vARB");
    s_deviceConfig.m_glUniform3i64vARB = (PFNGLUNIFORM3I64VARBPROC) glewGetProcAddress ("glUniform3i64vARB");
    s_deviceConfig.m_glUniform4i64vARB = (PFNGLUNIFORM4I64VARBPROC) glewGetProcAddress ("glUniform4i64vARB");
    s_deviceConfig.m_glUniform1ui64ARB = (PFNGLUNIFORM1UI64ARBPROC) glewGetProcAddress ("glUniform1ui64ARB");
    s_deviceConfig.m_glUniform2ui64ARB = (PFNGLUNIFORM2UI64ARBPROC) glewGetProcAddress ("glUniform2ui64ARB");
    s_deviceConfig.m_glUniform3ui64ARB = (PFNGLUNIFORM3UI64ARBPROC) glewGetProcAddress ("glUniform3ui64ARB");
    s_deviceConfig.m_glUniform4ui64ARB = (PFNGLUNIFORM4UI64ARBPROC) glewGetProcAddress ("glUniform4ui64ARB");
    s_deviceConfig.m_glUniform1ui64vARB = (PFNGLUNIFORM1UI64VARBPROC) glewGetProcAddress ("glUniform1ui64vARB");
    s_deviceConfig.m_glUniform2ui64vARB = (PFNGLUNIFORM2UI64VARBPROC) glewGetProcAddress ("glUniform2ui64vARB");
    s_deviceConfig.m_glUniform3ui64vARB = (PFNGLUNIFORM3UI64VARBPROC) glewGetProcAddress ("glUniform3ui64vARB");
    s_deviceConfig.m_glUniform4ui64vARB = (PFNGLUNIFORM4UI64VARBPROC) glewGetProcAddress ("glUniform4ui64vARB");
    s_deviceConfig.m_glGetUniformi64vARB = (PFNGLGETUNIFORMI64VARBPROC) glewGetProcAddress ("glGetUniformi64vARB");
    s_deviceConfig.m_glGetUniformui64vARB = (PFNGLGETUNIFORMUI64VARBPROC) glewGetProcAddress ("glGetUniformui64vARB");
    s_deviceConfig.m_glGetnUniformi64vARB = (PFNGLGETNUNIFORMI64VARBPROC) glewGetProcAddress ("glGetnUniformi64vARB");
    s_deviceConfig.m_glGetnUniformui64vARB = (PFNGLGETNUNIFORMUI64VARBPROC) glewGetProcAddress ("glGetnUniformui64vARB");
    s_deviceConfig.m_glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC) glewGetProcAddress ("glProgramUniform1i64ARB");
    s_deviceConfig.m_glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC) glewGetProcAddress ("glProgramUniform2i64ARB");
    s_deviceConfig.m_glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC) glewGetProcAddress ("glProgramUniform3i64ARB");
    s_deviceConfig.m_glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC) glewGetProcAddress ("glProgramUniform4i64ARB");
    s_deviceConfig.m_glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC) glewGetProcAddress ("glProgramUniform1i64vARB");
    s_deviceConfig.m_glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC) glewGetProcAddress ("glProgramUniform2i64vARB");
    s_deviceConfig.m_glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC) glewGetProcAddress ("glProgramUniform3i64vARB");
    s_deviceConfig.m_glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC) glewGetProcAddress ("glProgramUniform4i64vARB");
    s_deviceConfig.m_glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) glewGetProcAddress ("glProgramUniform1ui64ARB");
    s_deviceConfig.m_glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) glewGetProcAddress ("glProgramUniform2ui64ARB");
    s_deviceConfig.m_glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) glewGetProcAddress ("glProgramUniform3ui64ARB");
    s_deviceConfig.m_glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) glewGetProcAddress ("glProgramUniform4ui64ARB");
    s_deviceConfig.m_glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) glewGetProcAddress ("glProgramUniform1ui64vARB");
    s_deviceConfig.m_glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) glewGetProcAddress ("glProgramUniform2ui64vARB");
    s_deviceConfig.m_glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) glewGetProcAddress ("glProgramUniform3ui64vARB");
    s_deviceConfig.m_glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) glewGetProcAddress ("glProgramUniform4ui64vARB");
  }

  // GL_ARB_imaging
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_imaging])
  {
    s_deviceConfig.m_glBlendColor = (PFNGLBLENDCOLORPROC) glewGetProcAddress ("glBlendColor");
    s_deviceConfig.m_glBlendEquation = (PFNGLBLENDEQUATIONPROC) glewGetProcAddress ("glBlendEquation");
    s_deviceConfig.m_glColorTable = (PFNGLCOLORTABLEPROC) glewGetProcAddress ("glColorTable");
    s_deviceConfig.m_glColorTableParameterfv = (PFNGLCOLORTABLEPARAMETERFVPROC) glewGetProcAddress ("glColorTableParameterfv");
    s_deviceConfig.m_glColorTableParameteriv = (PFNGLCOLORTABLEPARAMETERIVPROC) glewGetProcAddress ("glColorTableParameteriv");
    s_deviceConfig.m_glCopyColorTable = (PFNGLCOPYCOLORTABLEPROC) glewGetProcAddress ("glCopyColorTable");
    s_deviceConfig.m_glGetColorTable = (PFNGLGETCOLORTABLEPROC) glewGetProcAddress ("glGetColorTable");
    s_deviceConfig.m_glGetColorTableParameterfv = (PFNGLGETCOLORTABLEPARAMETERFVPROC) glewGetProcAddress ("glGetColorTableParameterfv");
    s_deviceConfig.m_glGetColorTableParameteriv = (PFNGLGETCOLORTABLEPARAMETERIVPROC) glewGetProcAddress ("glGetColorTableParameteriv");
    s_deviceConfig.m_glColorSubTable = (PFNGLCOLORSUBTABLEPROC) glewGetProcAddress ("glColorSubTable");
    s_deviceConfig.m_glCopyColorSubTable = (PFNGLCOPYCOLORSUBTABLEPROC) glewGetProcAddress ("glCopyColorSubTable");
    s_deviceConfig.m_glConvolutionFilter1D = (PFNGLCONVOLUTIONFILTER1DPROC) glewGetProcAddress ("glConvolutionFilter1D");
    s_deviceConfig.m_glConvolutionFilter2D = (PFNGLCONVOLUTIONFILTER2DPROC) glewGetProcAddress ("glConvolutionFilter2D");
    s_deviceConfig.m_glConvolutionParameterf = (PFNGLCONVOLUTIONPARAMETERFPROC) glewGetProcAddress ("glConvolutionParameterf");
    s_deviceConfig.m_glConvolutionParameterfv = (PFNGLCONVOLUTIONPARAMETERFVPROC) glewGetProcAddress ("glConvolutionParameterfv");
    s_deviceConfig.m_glConvolutionParameteri = (PFNGLCONVOLUTIONPARAMETERIPROC) glewGetProcAddress ("glConvolutionParameteri");
    s_deviceConfig.m_glConvolutionParameteriv = (PFNGLCONVOLUTIONPARAMETERIVPROC) glewGetProcAddress ("glConvolutionParameteriv");
    s_deviceConfig.m_glCopyConvolutionFilter1D = (PFNGLCOPYCONVOLUTIONFILTER1DPROC) glewGetProcAddress ("glCopyConvolutionFilter1D");
    s_deviceConfig.m_glCopyConvolutionFilter2D = (PFNGLCOPYCONVOLUTIONFILTER2DPROC) glewGetProcAddress ("glCopyConvolutionFilter2D");
    s_deviceConfig.m_glGetConvolutionFilter = (PFNGLGETCONVOLUTIONFILTERPROC) glewGetProcAddress ("glGetConvolutionFilter");
    s_deviceConfig.m_glGetConvolutionParameterfv = (PFNGLGETCONVOLUTIONPARAMETERFVPROC) glewGetProcAddress ("glGetConvolutionParameterfv");
    s_deviceConfig.m_glGetConvolutionParameteriv = (PFNGLGETCONVOLUTIONPARAMETERIVPROC) glewGetProcAddress ("glGetConvolutionParameteriv");
    s_deviceConfig.m_glGetSeparableFilter = (PFNGLGETSEPARABLEFILTERPROC) glewGetProcAddress ("glGetSeparableFilter");
    s_deviceConfig.m_glSeparableFilter2D = (PFNGLSEPARABLEFILTER2DPROC) glewGetProcAddress ("glSeparableFilter2D");
    s_deviceConfig.m_glGetHistogram = (PFNGLGETHISTOGRAMPROC) glewGetProcAddress ("glGetHistogram");
    s_deviceConfig.m_glGetHistogramParameterfv = (PFNGLGETHISTOGRAMPARAMETERFVPROC) glewGetProcAddress ("glGetHistogramParameterfv");
    s_deviceConfig.m_glGetHistogramParameteriv = (PFNGLGETHISTOGRAMPARAMETERIVPROC) glewGetProcAddress ("glGetHistogramParameteriv");
    s_deviceConfig.m_glGetMinmax = (PFNGLGETMINMAXPROC) glewGetProcAddress ("glGetMinmax");
    s_deviceConfig.m_glGetMinmaxParameterfv = (PFNGLGETMINMAXPARAMETERFVPROC) glewGetProcAddress ("glGetMinmaxParameterfv");
    s_deviceConfig.m_glGetMinmaxParameteriv = (PFNGLGETMINMAXPARAMETERIVPROC) glewGetProcAddress ("glGetMinmaxParameteriv");
    s_deviceConfig.m_glHistogram = (PFNGLHISTOGRAMPROC) glewGetProcAddress ("glHistogram");
    s_deviceConfig.m_glMinmax = (PFNGLMINMAXPROC) glewGetProcAddress ("glMinmax");
    s_deviceConfig.m_glResetHistogram = (PFNGLRESETHISTOGRAMPROC) glewGetProcAddress ("glResetHistogram");
    s_deviceConfig.m_glResetMinmax = (PFNGLRESETMINMAXPROC) glewGetProcAddress ("glResetMinmax");
  }

  // GL_ARB_indirect_parameters
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_indirect_parameters])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) glewGetProcAddress ("glMultiDrawArraysIndirectCountARB");
    s_deviceConfig.m_glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) glewGetProcAddress ("glMultiDrawElementsIndirectCountARB");
  }

  // GL_ARB_instanced_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_instanced_arrays])
  {
    s_deviceConfig.m_glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC) glewGetProcAddress ("glVertexAttribDivisorARB");
  }

  // GL_ARB_internalformat_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query])
  {
    s_deviceConfig.m_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) glewGetProcAddress ("glGetInternalformativ");
  }

  // GL_ARB_internalformat_query2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_internalformat_query2])
  {
    s_deviceConfig.m_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) glewGetProcAddress ("glGetInternalformati64v");
  }

  // GL_ARB_invalidate_subdata
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_invalidate_subdata])
  {
    s_deviceConfig.m_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) glewGetProcAddress ("glInvalidateTexSubImage");
    s_deviceConfig.m_glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) glewGetProcAddress ("glInvalidateTexImage");
    s_deviceConfig.m_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) glewGetProcAddress ("glInvalidateBufferSubData");
    s_deviceConfig.m_glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) glewGetProcAddress ("glInvalidateBufferData");
    s_deviceConfig.m_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateFramebuffer");
    s_deviceConfig.m_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) glewGetProcAddress ("glInvalidateSubFramebuffer");
  }

  // GL_ARB_map_buffer_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_map_buffer_range])
  {
    s_deviceConfig.m_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) glewGetProcAddress ("glMapBufferRange");
    s_deviceConfig.m_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) glewGetProcAddress ("glFlushMappedBufferRange");
  }

  // GL_ARB_matrix_palette
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_matrix_palette])
  {
    s_deviceConfig.m_glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC) glewGetProcAddress ("glCurrentPaletteMatrixARB");
    s_deviceConfig.m_glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC) glewGetProcAddress ("glMatrixIndexubvARB");
    s_deviceConfig.m_glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC) glewGetProcAddress ("glMatrixIndexusvARB");
    s_deviceConfig.m_glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC) glewGetProcAddress ("glMatrixIndexuivARB");
    s_deviceConfig.m_glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC) glewGetProcAddress ("glMatrixIndexPointerARB");
  }

  // GL_ARB_multi_bind
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_bind])
  {
    s_deviceConfig.m_glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) glewGetProcAddress ("glBindBuffersBase");
    s_deviceConfig.m_glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) glewGetProcAddress ("glBindBuffersRange");
    s_deviceConfig.m_glBindTextures = (PFNGLBINDTEXTURESPROC) glewGetProcAddress ("glBindTextures");
    s_deviceConfig.m_glBindSamplers = (PFNGLBINDSAMPLERSPROC) glewGetProcAddress ("glBindSamplers");
    s_deviceConfig.m_glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) glewGetProcAddress ("glBindImageTextures");
    s_deviceConfig.m_glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) glewGetProcAddress ("glBindVertexBuffers");
  }

  // GL_ARB_multi_draw_indirect
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multi_draw_indirect])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) glewGetProcAddress ("glMultiDrawArraysIndirect");
    s_deviceConfig.m_glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) glewGetProcAddress ("glMultiDrawElementsIndirect");
  }

  // GL_ARB_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multisample])
  {
    s_deviceConfig.m_glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC) glewGetProcAddress ("glSampleCoverageARB");
  }

  // GL_ARB_multitexture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_multitexture])
  {
    s_deviceConfig.m_glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC) glewGetProcAddress ("glActiveTextureARB");
    s_deviceConfig.m_glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC) glewGetProcAddress ("glClientActiveTextureARB");
    s_deviceConfig.m_glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC) glewGetProcAddress ("glMultiTexCoord1dARB");
    s_deviceConfig.m_glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC) glewGetProcAddress ("glMultiTexCoord1dvARB");
    s_deviceConfig.m_glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC) glewGetProcAddress ("glMultiTexCoord1fARB");
    s_deviceConfig.m_glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC) glewGetProcAddress ("glMultiTexCoord1fvARB");
    s_deviceConfig.m_glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC) glewGetProcAddress ("glMultiTexCoord1iARB");
    s_deviceConfig.m_glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC) glewGetProcAddress ("glMultiTexCoord1ivARB");
    s_deviceConfig.m_glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC) glewGetProcAddress ("glMultiTexCoord1sARB");
    s_deviceConfig.m_glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC) glewGetProcAddress ("glMultiTexCoord1svARB");
    s_deviceConfig.m_glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC) glewGetProcAddress ("glMultiTexCoord2dARB");
    s_deviceConfig.m_glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC) glewGetProcAddress ("glMultiTexCoord2dvARB");
    s_deviceConfig.m_glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC) glewGetProcAddress ("glMultiTexCoord2fARB");
    s_deviceConfig.m_glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC) glewGetProcAddress ("glMultiTexCoord2fvARB");
    s_deviceConfig.m_glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC) glewGetProcAddress ("glMultiTexCoord2iARB");
    s_deviceConfig.m_glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC) glewGetProcAddress ("glMultiTexCoord2ivARB");
    s_deviceConfig.m_glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC) glewGetProcAddress ("glMultiTexCoord2sARB");
    s_deviceConfig.m_glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC) glewGetProcAddress ("glMultiTexCoord2svARB");
    s_deviceConfig.m_glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC) glewGetProcAddress ("glMultiTexCoord3dARB");
    s_deviceConfig.m_glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC) glewGetProcAddress ("glMultiTexCoord3dvARB");
    s_deviceConfig.m_glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC) glewGetProcAddress ("glMultiTexCoord3fARB");
    s_deviceConfig.m_glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC) glewGetProcAddress ("glMultiTexCoord3fvARB");
    s_deviceConfig.m_glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC) glewGetProcAddress ("glMultiTexCoord3iARB");
    s_deviceConfig.m_glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC) glewGetProcAddress ("glMultiTexCoord3ivARB");
    s_deviceConfig.m_glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC) glewGetProcAddress ("glMultiTexCoord3sARB");
    s_deviceConfig.m_glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC) glewGetProcAddress ("glMultiTexCoord3svARB");
    s_deviceConfig.m_glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC) glewGetProcAddress ("glMultiTexCoord4dARB");
    s_deviceConfig.m_glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC) glewGetProcAddress ("glMultiTexCoord4dvARB");
    s_deviceConfig.m_glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC) glewGetProcAddress ("glMultiTexCoord4fARB");
    s_deviceConfig.m_glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC) glewGetProcAddress ("glMultiTexCoord4fvARB");
    s_deviceConfig.m_glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC) glewGetProcAddress ("glMultiTexCoord4iARB");
    s_deviceConfig.m_glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC) glewGetProcAddress ("glMultiTexCoord4ivARB");
    s_deviceConfig.m_glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC) glewGetProcAddress ("glMultiTexCoord4sARB");
    s_deviceConfig.m_glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC) glewGetProcAddress ("glMultiTexCoord4svARB");
  }

  // GL_ARB_occlusion_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_occlusion_query])
  {
    s_deviceConfig.m_glGenQueriesARB = (PFNGLGENQUERIESARBPROC) glewGetProcAddress ("glGenQueriesARB");
    s_deviceConfig.m_glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC) glewGetProcAddress ("glDeleteQueriesARB");
    s_deviceConfig.m_glIsQueryARB = (PFNGLISQUERYARBPROC) glewGetProcAddress ("glIsQueryARB");
    s_deviceConfig.m_glBeginQueryARB = (PFNGLBEGINQUERYARBPROC) glewGetProcAddress ("glBeginQueryARB");
    s_deviceConfig.m_glEndQueryARB = (PFNGLENDQUERYARBPROC) glewGetProcAddress ("glEndQueryARB");
    s_deviceConfig.m_glGetQueryivARB = (PFNGLGETQUERYIVARBPROC) glewGetProcAddress ("glGetQueryivARB");
    s_deviceConfig.m_glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC) glewGetProcAddress ("glGetQueryObjectivARB");
    s_deviceConfig.m_glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC) glewGetProcAddress ("glGetQueryObjectuivARB");
  }

  // GL_ARB_parallel_shader_compile
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_parallel_shader_compile])
  {
    s_deviceConfig.m_glMaxShaderCompilerThreadsARB = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) glewGetProcAddress ("glMaxShaderCompilerThreadsARB");
  }

  // GL_ARB_point_parameters
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_point_parameters])
  {
    s_deviceConfig.m_glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC) glewGetProcAddress ("glPointParameterfARB");
    s_deviceConfig.m_glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC) glewGetProcAddress ("glPointParameterfvARB");
  }

  // GL_ARB_polygon_offset_clamp
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_polygon_offset_clamp])
  {
    s_deviceConfig.m_glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) glewGetProcAddress ("glPolygonOffsetClamp");
  }

  // GL_ARB_program_interface_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_program_interface_query])
  {
    s_deviceConfig.m_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) glewGetProcAddress ("glGetProgramInterfaceiv");
    s_deviceConfig.m_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) glewGetProcAddress ("glGetProgramResourceIndex");
    s_deviceConfig.m_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) glewGetProcAddress ("glGetProgramResourceName");
    s_deviceConfig.m_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) glewGetProcAddress ("glGetProgramResourceiv");
    s_deviceConfig.m_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) glewGetProcAddress ("glGetProgramResourceLocation");
    s_deviceConfig.m_glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) glewGetProcAddress ("glGetProgramResourceLocationIndex");
  }

  // GL_ARB_provoking_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_provoking_vertex])
  {
    s_deviceConfig.m_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) glewGetProcAddress ("glProvokingVertex");
  }

  // GL_ARB_robustness
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_robustness])
  {
    s_deviceConfig.m_glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) glewGetProcAddress ("glGetGraphicsResetStatusARB");
    s_deviceConfig.m_glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC) glewGetProcAddress ("glGetnTexImageARB");
    s_deviceConfig.m_glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC) glewGetProcAddress ("glReadnPixelsARB");
    s_deviceConfig.m_glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) glewGetProcAddress ("glGetnCompressedTexImageARB");
    s_deviceConfig.m_glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC) glewGetProcAddress ("glGetnUniformfvARB");
    s_deviceConfig.m_glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC) glewGetProcAddress ("glGetnUniformivARB");
    s_deviceConfig.m_glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC) glewGetProcAddress ("glGetnUniformuivARB");
    s_deviceConfig.m_glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC) glewGetProcAddress ("glGetnUniformdvARB");
    s_deviceConfig.m_glGetnMapdvARB = (PFNGLGETNMAPDVARBPROC) glewGetProcAddress ("glGetnMapdvARB");
    s_deviceConfig.m_glGetnMapfvARB = (PFNGLGETNMAPFVARBPROC) glewGetProcAddress ("glGetnMapfvARB");
    s_deviceConfig.m_glGetnMapivARB = (PFNGLGETNMAPIVARBPROC) glewGetProcAddress ("glGetnMapivARB");
    s_deviceConfig.m_glGetnPixelMapfvARB = (PFNGLGETNPIXELMAPFVARBPROC) glewGetProcAddress ("glGetnPixelMapfvARB");
    s_deviceConfig.m_glGetnPixelMapuivARB = (PFNGLGETNPIXELMAPUIVARBPROC) glewGetProcAddress ("glGetnPixelMapuivARB");
    s_deviceConfig.m_glGetnPixelMapusvARB = (PFNGLGETNPIXELMAPUSVARBPROC) glewGetProcAddress ("glGetnPixelMapusvARB");
    s_deviceConfig.m_glGetnPolygonStippleARB = (PFNGLGETNPOLYGONSTIPPLEARBPROC) glewGetProcAddress ("glGetnPolygonStippleARB");
    s_deviceConfig.m_glGetnColorTableARB = (PFNGLGETNCOLORTABLEARBPROC) glewGetProcAddress ("glGetnColorTableARB");
    s_deviceConfig.m_glGetnConvolutionFilterARB = (PFNGLGETNCONVOLUTIONFILTERARBPROC) glewGetProcAddress ("glGetnConvolutionFilterARB");
    s_deviceConfig.m_glGetnSeparableFilterARB = (PFNGLGETNSEPARABLEFILTERARBPROC) glewGetProcAddress ("glGetnSeparableFilterARB");
    s_deviceConfig.m_glGetnHistogramARB = (PFNGLGETNHISTOGRAMARBPROC) glewGetProcAddress ("glGetnHistogramARB");
    s_deviceConfig.m_glGetnMinmaxARB = (PFNGLGETNMINMAXARBPROC) glewGetProcAddress ("glGetnMinmaxARB");
  }

  // GL_ARB_sample_locations
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sample_locations])
  {
    s_deviceConfig.m_glFramebufferSampleLocationsfvARB = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) glewGetProcAddress ("glFramebufferSampleLocationsfvARB");
    s_deviceConfig.m_glNamedFramebufferSampleLocationsfvARB = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) glewGetProcAddress ("glNamedFramebufferSampleLocationsfvARB");
    s_deviceConfig.m_glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC) glewGetProcAddress ("glEvaluateDepthValuesARB");
  }

  // GL_ARB_sample_shading
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sample_shading])
  {
    s_deviceConfig.m_glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC) glewGetProcAddress ("glMinSampleShadingARB");
  }

  // GL_ARB_sampler_objects
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sampler_objects])
  {
    s_deviceConfig.m_glGenSamplers = (PFNGLGENSAMPLERSPROC) glewGetProcAddress ("glGenSamplers");
    s_deviceConfig.m_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) glewGetProcAddress ("glDeleteSamplers");
    s_deviceConfig.m_glIsSampler = (PFNGLISSAMPLERPROC) glewGetProcAddress ("glIsSampler");
    s_deviceConfig.m_glBindSampler = (PFNGLBINDSAMPLERPROC) glewGetProcAddress ("glBindSampler");
    s_deviceConfig.m_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) glewGetProcAddress ("glSamplerParameteri");
    s_deviceConfig.m_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glSamplerParameteriv");
    s_deviceConfig.m_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) glewGetProcAddress ("glSamplerParameterf");
    s_deviceConfig.m_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glSamplerParameterfv");
    s_deviceConfig.m_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glSamplerParameterIiv");
    s_deviceConfig.m_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glSamplerParameterIuiv");
    s_deviceConfig.m_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) glewGetProcAddress ("glGetSamplerParameteriv");
    s_deviceConfig.m_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) glewGetProcAddress ("glGetSamplerParameterIiv");
    s_deviceConfig.m_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) glewGetProcAddress ("glGetSamplerParameterfv");
    s_deviceConfig.m_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) glewGetProcAddress ("glGetSamplerParameterIuiv");
  }

  // GL_ARB_separate_shader_objects
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_separate_shader_objects])
  {
    s_deviceConfig.m_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) glewGetProcAddress ("glUseProgramStages");
    s_deviceConfig.m_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) glewGetProcAddress ("glActiveShaderProgram");
    s_deviceConfig.m_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) glewGetProcAddress ("glCreateShaderProgramv");
    s_deviceConfig.m_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) glewGetProcAddress ("glBindProgramPipeline");
    s_deviceConfig.m_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) glewGetProcAddress ("glDeleteProgramPipelines");
    s_deviceConfig.m_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) glewGetProcAddress ("glGenProgramPipelines");
    s_deviceConfig.m_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) glewGetProcAddress ("glIsProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) glewGetProcAddress ("glGetProgramPipelineiv");
    s_deviceConfig.m_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) glewGetProcAddress ("glProgramParameteri");
    s_deviceConfig.m_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) glewGetProcAddress ("glProgramUniform1i");
    s_deviceConfig.m_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) glewGetProcAddress ("glProgramUniform1iv");
    s_deviceConfig.m_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) glewGetProcAddress ("glProgramUniform1f");
    s_deviceConfig.m_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) glewGetProcAddress ("glProgramUniform1fv");
    s_deviceConfig.m_glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) glewGetProcAddress ("glProgramUniform1d");
    s_deviceConfig.m_glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) glewGetProcAddress ("glProgramUniform1dv");
    s_deviceConfig.m_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) glewGetProcAddress ("glProgramUniform1ui");
    s_deviceConfig.m_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) glewGetProcAddress ("glProgramUniform1uiv");
    s_deviceConfig.m_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) glewGetProcAddress ("glProgramUniform2i");
    s_deviceConfig.m_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) glewGetProcAddress ("glProgramUniform2iv");
    s_deviceConfig.m_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) glewGetProcAddress ("glProgramUniform2f");
    s_deviceConfig.m_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) glewGetProcAddress ("glProgramUniform2fv");
    s_deviceConfig.m_glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) glewGetProcAddress ("glProgramUniform2d");
    s_deviceConfig.m_glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) glewGetProcAddress ("glProgramUniform2dv");
    s_deviceConfig.m_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) glewGetProcAddress ("glProgramUniform2ui");
    s_deviceConfig.m_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) glewGetProcAddress ("glProgramUniform2uiv");
    s_deviceConfig.m_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) glewGetProcAddress ("glProgramUniform3i");
    s_deviceConfig.m_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) glewGetProcAddress ("glProgramUniform3iv");
    s_deviceConfig.m_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) glewGetProcAddress ("glProgramUniform3f");
    s_deviceConfig.m_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) glewGetProcAddress ("glProgramUniform3fv");
    s_deviceConfig.m_glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) glewGetProcAddress ("glProgramUniform3d");
    s_deviceConfig.m_glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) glewGetProcAddress ("glProgramUniform3dv");
    s_deviceConfig.m_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) glewGetProcAddress ("glProgramUniform3ui");
    s_deviceConfig.m_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) glewGetProcAddress ("glProgramUniform3uiv");
    s_deviceConfig.m_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) glewGetProcAddress ("glProgramUniform4i");
    s_deviceConfig.m_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) glewGetProcAddress ("glProgramUniform4iv");
    s_deviceConfig.m_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) glewGetProcAddress ("glProgramUniform4f");
    s_deviceConfig.m_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) glewGetProcAddress ("glProgramUniform4fv");
    s_deviceConfig.m_glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) glewGetProcAddress ("glProgramUniform4d");
    s_deviceConfig.m_glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) glewGetProcAddress ("glProgramUniform4dv");
    s_deviceConfig.m_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) glewGetProcAddress ("glProgramUniform4ui");
    s_deviceConfig.m_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) glewGetProcAddress ("glProgramUniform4uiv");
    s_deviceConfig.m_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) glewGetProcAddress ("glProgramUniformMatrix2fv");
    s_deviceConfig.m_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) glewGetProcAddress ("glProgramUniformMatrix3fv");
    s_deviceConfig.m_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) glewGetProcAddress ("glProgramUniformMatrix4fv");
    s_deviceConfig.m_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) glewGetProcAddress ("glProgramUniformMatrix2dv");
    s_deviceConfig.m_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) glewGetProcAddress ("glProgramUniformMatrix3dv");
    s_deviceConfig.m_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) glewGetProcAddress ("glProgramUniformMatrix4dv");
    s_deviceConfig.m_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3fv");
    s_deviceConfig.m_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2fv");
    s_deviceConfig.m_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2fv");
    s_deviceConfig.m_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4fv");
    s_deviceConfig.m_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3fv");
    s_deviceConfig.m_glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) glewGetProcAddress ("glProgramUniformMatrix2x3dv");
    s_deviceConfig.m_glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) glewGetProcAddress ("glProgramUniformMatrix3x2dv");
    s_deviceConfig.m_glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) glewGetProcAddress ("glProgramUniformMatrix2x4dv");
    s_deviceConfig.m_glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) glewGetProcAddress ("glProgramUniformMatrix4x2dv");
    s_deviceConfig.m_glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) glewGetProcAddress ("glProgramUniformMatrix3x4dv");
    s_deviceConfig.m_glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) glewGetProcAddress ("glProgramUniformMatrix4x3dv");
    s_deviceConfig.m_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) glewGetProcAddress ("glValidateProgramPipeline");
    s_deviceConfig.m_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) glewGetProcAddress ("glGetProgramPipelineInfoLog");
  }

  // GL_ARB_shader_atomic_counters
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_atomic_counters])
  {
    s_deviceConfig.m_glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) glewGetProcAddress ("glGetActiveAtomicCounterBufferiv");
  }

  // GL_ARB_shader_image_load_store
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_image_load_store])
  {
    s_deviceConfig.m_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) glewGetProcAddress ("glBindImageTexture");
    s_deviceConfig.m_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) glewGetProcAddress ("glMemoryBarrier");
  }

  // GL_ARB_shader_objects
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_objects])
  {
    s_deviceConfig.m_glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC) glewGetProcAddress ("glDeleteObjectARB");
    s_deviceConfig.m_glGetHandleARB = (PFNGLGETHANDLEARBPROC) glewGetProcAddress ("glGetHandleARB");
    s_deviceConfig.m_glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC) glewGetProcAddress ("glDetachObjectARB");
    s_deviceConfig.m_glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC) glewGetProcAddress ("glCreateShaderObjectARB");
    s_deviceConfig.m_glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC) glewGetProcAddress ("glShaderSourceARB");
    s_deviceConfig.m_glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC) glewGetProcAddress ("glCompileShaderARB");
    s_deviceConfig.m_glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC) glewGetProcAddress ("glCreateProgramObjectARB");
    s_deviceConfig.m_glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC) glewGetProcAddress ("glAttachObjectARB");
    s_deviceConfig.m_glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC) glewGetProcAddress ("glLinkProgramARB");
    s_deviceConfig.m_glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC) glewGetProcAddress ("glUseProgramObjectARB");
    s_deviceConfig.m_glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC) glewGetProcAddress ("glValidateProgramARB");
    s_deviceConfig.m_glUniform1fARB = (PFNGLUNIFORM1FARBPROC) glewGetProcAddress ("glUniform1fARB");
    s_deviceConfig.m_glUniform2fARB = (PFNGLUNIFORM2FARBPROC) glewGetProcAddress ("glUniform2fARB");
    s_deviceConfig.m_glUniform3fARB = (PFNGLUNIFORM3FARBPROC) glewGetProcAddress ("glUniform3fARB");
    s_deviceConfig.m_glUniform4fARB = (PFNGLUNIFORM4FARBPROC) glewGetProcAddress ("glUniform4fARB");
    s_deviceConfig.m_glUniform1iARB = (PFNGLUNIFORM1IARBPROC) glewGetProcAddress ("glUniform1iARB");
    s_deviceConfig.m_glUniform2iARB = (PFNGLUNIFORM2IARBPROC) glewGetProcAddress ("glUniform2iARB");
    s_deviceConfig.m_glUniform3iARB = (PFNGLUNIFORM3IARBPROC) glewGetProcAddress ("glUniform3iARB");
    s_deviceConfig.m_glUniform4iARB = (PFNGLUNIFORM4IARBPROC) glewGetProcAddress ("glUniform4iARB");
    s_deviceConfig.m_glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC) glewGetProcAddress ("glUniform1fvARB");
    s_deviceConfig.m_glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC) glewGetProcAddress ("glUniform2fvARB");
    s_deviceConfig.m_glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC) glewGetProcAddress ("glUniform3fvARB");
    s_deviceConfig.m_glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC) glewGetProcAddress ("glUniform4fvARB");
    s_deviceConfig.m_glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC) glewGetProcAddress ("glUniform1ivARB");
    s_deviceConfig.m_glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC) glewGetProcAddress ("glUniform2ivARB");
    s_deviceConfig.m_glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC) glewGetProcAddress ("glUniform3ivARB");
    s_deviceConfig.m_glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC) glewGetProcAddress ("glUniform4ivARB");
    s_deviceConfig.m_glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC) glewGetProcAddress ("glUniformMatrix2fvARB");
    s_deviceConfig.m_glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC) glewGetProcAddress ("glUniformMatrix3fvARB");
    s_deviceConfig.m_glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC) glewGetProcAddress ("glUniformMatrix4fvARB");
    s_deviceConfig.m_glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC) glewGetProcAddress ("glGetObjectParameterfvARB");
    s_deviceConfig.m_glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC) glewGetProcAddress ("glGetObjectParameterivARB");
    s_deviceConfig.m_glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC) glewGetProcAddress ("glGetInfoLogARB");
    s_deviceConfig.m_glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC) glewGetProcAddress ("glGetAttachedObjectsARB");
    s_deviceConfig.m_glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC) glewGetProcAddress ("glGetUniformLocationARB");
    s_deviceConfig.m_glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC) glewGetProcAddress ("glGetActiveUniformARB");
    s_deviceConfig.m_glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC) glewGetProcAddress ("glGetUniformfvARB");
    s_deviceConfig.m_glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC) glewGetProcAddress ("glGetUniformivARB");
    s_deviceConfig.m_glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC) glewGetProcAddress ("glGetShaderSourceARB");
  }

  // GL_ARB_shader_storage_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_storage_buffer_object])
  {
    s_deviceConfig.m_glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) glewGetProcAddress ("glShaderStorageBlockBinding");
  }

  // GL_ARB_shader_subroutine
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shader_subroutine])
  {
    s_deviceConfig.m_glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) glewGetProcAddress ("glGetSubroutineUniformLocation");
    s_deviceConfig.m_glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) glewGetProcAddress ("glGetSubroutineIndex");
    s_deviceConfig.m_glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) glewGetProcAddress ("glGetActiveSubroutineUniformiv");
    s_deviceConfig.m_glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) glewGetProcAddress ("glGetActiveSubroutineUniformName");
    s_deviceConfig.m_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) glewGetProcAddress ("glGetActiveSubroutineName");
    s_deviceConfig.m_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) glewGetProcAddress ("glUniformSubroutinesuiv");
    s_deviceConfig.m_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) glewGetProcAddress ("glGetUniformSubroutineuiv");
    s_deviceConfig.m_glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) glewGetProcAddress ("glGetProgramStageiv");
  }

  // GL_ARB_shading_language_include
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_shading_language_include])
  {
    s_deviceConfig.m_glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC) glewGetProcAddress ("glNamedStringARB");
    s_deviceConfig.m_glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC) glewGetProcAddress ("glDeleteNamedStringARB");
    s_deviceConfig.m_glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC) glewGetProcAddress ("glCompileShaderIncludeARB");
    s_deviceConfig.m_glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC) glewGetProcAddress ("glIsNamedStringARB");
    s_deviceConfig.m_glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC) glewGetProcAddress ("glGetNamedStringARB");
    s_deviceConfig.m_glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC) glewGetProcAddress ("glGetNamedStringivARB");
  }

  // GL_ARB_sparse_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_buffer])
  {
    s_deviceConfig.m_glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC) glewGetProcAddress ("glBufferPageCommitmentARB");
    s_deviceConfig.m_glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) glewGetProcAddress ("glNamedBufferPageCommitmentEXT");
    s_deviceConfig.m_glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) glewGetProcAddress ("glNamedBufferPageCommitmentARB");
  }

  // GL_ARB_sparse_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sparse_texture])
  {
    s_deviceConfig.m_glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC) glewGetProcAddress ("glTexPageCommitmentARB");
  }

  // GL_ARB_sync
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_sync])
  {
    s_deviceConfig.m_glFenceSync = (PFNGLFENCESYNCPROC) glewGetProcAddress ("glFenceSync");
    s_deviceConfig.m_glIsSync = (PFNGLISSYNCPROC) glewGetProcAddress ("glIsSync");
    s_deviceConfig.m_glDeleteSync = (PFNGLDELETESYNCPROC) glewGetProcAddress ("glDeleteSync");
    s_deviceConfig.m_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) glewGetProcAddress ("glClientWaitSync");
    s_deviceConfig.m_glWaitSync = (PFNGLWAITSYNCPROC) glewGetProcAddress ("glWaitSync");
    s_deviceConfig.m_glGetInteger64v = (PFNGLGETINTEGER64VPROC) glewGetProcAddress ("glGetInteger64v");
    s_deviceConfig.m_glGetSynciv = (PFNGLGETSYNCIVPROC) glewGetProcAddress ("glGetSynciv");
  }

  // GL_ARB_tessellation_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_tessellation_shader])
  {
    s_deviceConfig.m_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) glewGetProcAddress ("glPatchParameteri");
    s_deviceConfig.m_glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) glewGetProcAddress ("glPatchParameterfv");
  }

  // GL_ARB_texture_barrier
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_barrier])
  {
    s_deviceConfig.m_glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) glewGetProcAddress ("glTextureBarrier");
  }

  // GL_ARB_texture_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_object])
  {
    s_deviceConfig.m_glTexBufferARB = (PFNGLTEXBUFFERARBPROC) glewGetProcAddress ("glTexBufferARB");
  }

  // GL_ARB_texture_buffer_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_buffer_range])
  {
    s_deviceConfig.m_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) glewGetProcAddress ("glTexBufferRange");
  }

  // GL_ARB_texture_compression
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_compression])
  {
    s_deviceConfig.m_glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC) glewGetProcAddress ("glCompressedTexImage3DARB");
    s_deviceConfig.m_glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC) glewGetProcAddress ("glCompressedTexImage2DARB");
    s_deviceConfig.m_glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC) glewGetProcAddress ("glCompressedTexImage1DARB");
    s_deviceConfig.m_glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC) glewGetProcAddress ("glCompressedTexSubImage3DARB");
    s_deviceConfig.m_glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC) glewGetProcAddress ("glCompressedTexSubImage2DARB");
    s_deviceConfig.m_glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC) glewGetProcAddress ("glCompressedTexSubImage1DARB");
    s_deviceConfig.m_glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC) glewGetProcAddress ("glGetCompressedTexImageARB");
  }

  // GL_ARB_texture_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_multisample])
  {
    s_deviceConfig.m_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexImage2DMultisample");
    s_deviceConfig.m_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexImage3DMultisample");
    s_deviceConfig.m_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) glewGetProcAddress ("glGetMultisamplefv");
    s_deviceConfig.m_glSampleMaski = (PFNGLSAMPLEMASKIPROC) glewGetProcAddress ("glSampleMaski");
  }

  // GL_ARB_texture_storage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage])
  {
    s_deviceConfig.m_glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) glewGetProcAddress ("glTexStorage1D");
    s_deviceConfig.m_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) glewGetProcAddress ("glTexStorage2D");
    s_deviceConfig.m_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) glewGetProcAddress ("glTexStorage3D");
  }

  // GL_ARB_texture_storage_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_storage_multisample])
  {
    s_deviceConfig.m_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage2DMultisample");
    s_deviceConfig.m_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) glewGetProcAddress ("glTexStorage3DMultisample");
  }

  // GL_ARB_texture_view
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_texture_view])
  {
    s_deviceConfig.m_glTextureView = (PFNGLTEXTUREVIEWPROC) glewGetProcAddress ("glTextureView");
  }

  // GL_ARB_timer_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_timer_query])
  {
    s_deviceConfig.m_glQueryCounter = (PFNGLQUERYCOUNTERPROC) glewGetProcAddress ("glQueryCounter");
    s_deviceConfig.m_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) glewGetProcAddress ("glGetQueryObjecti64v");
    s_deviceConfig.m_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) glewGetProcAddress ("glGetQueryObjectui64v");
  }

  // GL_ARB_transform_feedback2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback2])
  {
    s_deviceConfig.m_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glBindTransformFeedback");
    s_deviceConfig.m_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glDeleteTransformFeedbacks");
    s_deviceConfig.m_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) glewGetProcAddress ("glGenTransformFeedbacks");
    s_deviceConfig.m_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glIsTransformFeedback");
    s_deviceConfig.m_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glPauseTransformFeedback");
    s_deviceConfig.m_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) glewGetProcAddress ("glResumeTransformFeedback");
    s_deviceConfig.m_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) glewGetProcAddress ("glDrawTransformFeedback");
  }

  // GL_ARB_transform_feedback3
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback3])
  {
    s_deviceConfig.m_glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) glewGetProcAddress ("glDrawTransformFeedbackStream");
    s_deviceConfig.m_glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) glewGetProcAddress ("glBeginQueryIndexed");
    s_deviceConfig.m_glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) glewGetProcAddress ("glEndQueryIndexed");
    s_deviceConfig.m_glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) glewGetProcAddress ("glGetQueryIndexediv");
  }

  // GL_ARB_transform_feedback_instanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transform_feedback_instanced])
  {
    s_deviceConfig.m_glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) glewGetProcAddress ("glDrawTransformFeedbackInstanced");
    s_deviceConfig.m_glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) glewGetProcAddress ("glDrawTransformFeedbackStreamInstanced");
  }

  // GL_ARB_transpose_matrix
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_transpose_matrix])
  {
    s_deviceConfig.m_glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC) glewGetProcAddress ("glLoadTransposeMatrixfARB");
    s_deviceConfig.m_glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC) glewGetProcAddress ("glLoadTransposeMatrixdARB");
    s_deviceConfig.m_glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC) glewGetProcAddress ("glMultTransposeMatrixfARB");
    s_deviceConfig.m_glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC) glewGetProcAddress ("glMultTransposeMatrixdARB");
  }

  // GL_ARB_uniform_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_uniform_buffer_object])
  {
    s_deviceConfig.m_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) glewGetProcAddress ("glGetUniformIndices");
    s_deviceConfig.m_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) glewGetProcAddress ("glGetActiveUniformsiv");
    s_deviceConfig.m_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) glewGetProcAddress ("glGetActiveUniformName");
    s_deviceConfig.m_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) glewGetProcAddress ("glGetUniformBlockIndex");
    s_deviceConfig.m_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) glewGetProcAddress ("glGetActiveUniformBlockiv");
    s_deviceConfig.m_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) glewGetProcAddress ("glGetActiveUniformBlockName");
    s_deviceConfig.m_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) glewGetProcAddress ("glUniformBlockBinding");
    s_deviceConfig.m_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) glewGetProcAddress ("glBindBufferRange");
    s_deviceConfig.m_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) glewGetProcAddress ("glBindBufferBase");
    s_deviceConfig.m_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) glewGetProcAddress ("glGetIntegeri_v");
  }

  // GL_ARB_vertex_array_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_array_object])
  {
    s_deviceConfig.m_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) glewGetProcAddress ("glBindVertexArray");
    s_deviceConfig.m_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) glewGetProcAddress ("glDeleteVertexArrays");
    s_deviceConfig.m_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) glewGetProcAddress ("glGenVertexArrays");
    s_deviceConfig.m_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) glewGetProcAddress ("glIsVertexArray");
  }

  // GL_ARB_vertex_attrib_64bit
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_64bit])
  {
    s_deviceConfig.m_glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) glewGetProcAddress ("glVertexAttribL1d");
    s_deviceConfig.m_glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) glewGetProcAddress ("glVertexAttribL2d");
    s_deviceConfig.m_glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) glewGetProcAddress ("glVertexAttribL3d");
    s_deviceConfig.m_glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) glewGetProcAddress ("glVertexAttribL4d");
    s_deviceConfig.m_glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) glewGetProcAddress ("glVertexAttribL1dv");
    s_deviceConfig.m_glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) glewGetProcAddress ("glVertexAttribL2dv");
    s_deviceConfig.m_glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) glewGetProcAddress ("glVertexAttribL3dv");
    s_deviceConfig.m_glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) glewGetProcAddress ("glVertexAttribL4dv");
    s_deviceConfig.m_glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) glewGetProcAddress ("glVertexAttribLPointer");
    s_deviceConfig.m_glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) glewGetProcAddress ("glGetVertexAttribLdv");
  }

  // GL_ARB_vertex_attrib_binding
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_attrib_binding])
  {
    s_deviceConfig.m_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) glewGetProcAddress ("glBindVertexBuffer");
    s_deviceConfig.m_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) glewGetProcAddress ("glVertexAttribFormat");
    s_deviceConfig.m_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) glewGetProcAddress ("glVertexAttribIFormat");
    s_deviceConfig.m_glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) glewGetProcAddress ("glVertexAttribLFormat");
    s_deviceConfig.m_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) glewGetProcAddress ("glVertexAttribBinding");
    s_deviceConfig.m_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) glewGetProcAddress ("glVertexBindingDivisor");
  }

  // GL_ARB_vertex_blend
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_blend])
  {
    s_deviceConfig.m_glWeightbvARB = (PFNGLWEIGHTBVARBPROC) glewGetProcAddress ("glWeightbvARB");
    s_deviceConfig.m_glWeightsvARB = (PFNGLWEIGHTSVARBPROC) glewGetProcAddress ("glWeightsvARB");
    s_deviceConfig.m_glWeightivARB = (PFNGLWEIGHTIVARBPROC) glewGetProcAddress ("glWeightivARB");
    s_deviceConfig.m_glWeightfvARB = (PFNGLWEIGHTFVARBPROC) glewGetProcAddress ("glWeightfvARB");
    s_deviceConfig.m_glWeightdvARB = (PFNGLWEIGHTDVARBPROC) glewGetProcAddress ("glWeightdvARB");
    s_deviceConfig.m_glWeightubvARB = (PFNGLWEIGHTUBVARBPROC) glewGetProcAddress ("glWeightubvARB");
    s_deviceConfig.m_glWeightusvARB = (PFNGLWEIGHTUSVARBPROC) glewGetProcAddress ("glWeightusvARB");
    s_deviceConfig.m_glWeightuivARB = (PFNGLWEIGHTUIVARBPROC) glewGetProcAddress ("glWeightuivARB");
    s_deviceConfig.m_glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC) glewGetProcAddress ("glWeightPointerARB");
    s_deviceConfig.m_glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC) glewGetProcAddress ("glVertexBlendARB");
  }

  // GL_ARB_vertex_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_buffer_object])
  {
    s_deviceConfig.m_glBindBufferARB = (PFNGLBINDBUFFERARBPROC) glewGetProcAddress ("glBindBufferARB");
    s_deviceConfig.m_glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC) glewGetProcAddress ("glDeleteBuffersARB");
    s_deviceConfig.m_glGenBuffersARB = (PFNGLGENBUFFERSARBPROC) glewGetProcAddress ("glGenBuffersARB");
    s_deviceConfig.m_glIsBufferARB = (PFNGLISBUFFERARBPROC) glewGetProcAddress ("glIsBufferARB");
    s_deviceConfig.m_glBufferDataARB = (PFNGLBUFFERDATAARBPROC) glewGetProcAddress ("glBufferDataARB");
    s_deviceConfig.m_glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC) glewGetProcAddress ("glBufferSubDataARB");
    s_deviceConfig.m_glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC) glewGetProcAddress ("glGetBufferSubDataARB");
    s_deviceConfig.m_glMapBufferARB = (PFNGLMAPBUFFERARBPROC) glewGetProcAddress ("glMapBufferARB");
    s_deviceConfig.m_glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC) glewGetProcAddress ("glUnmapBufferARB");
    s_deviceConfig.m_glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC) glewGetProcAddress ("glGetBufferParameterivARB");
    s_deviceConfig.m_glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC) glewGetProcAddress ("glGetBufferPointervARB");
  }

  // GL_ARB_vertex_program
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_program])
  {
    s_deviceConfig.m_glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) glewGetProcAddress ("glVertexAttrib1dARB");
    s_deviceConfig.m_glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) glewGetProcAddress ("glVertexAttrib1dvARB");
    s_deviceConfig.m_glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) glewGetProcAddress ("glVertexAttrib1fARB");
    s_deviceConfig.m_glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) glewGetProcAddress ("glVertexAttrib1fvARB");
    s_deviceConfig.m_glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) glewGetProcAddress ("glVertexAttrib1sARB");
    s_deviceConfig.m_glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) glewGetProcAddress ("glVertexAttrib1svARB");
    s_deviceConfig.m_glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) glewGetProcAddress ("glVertexAttrib2dARB");
    s_deviceConfig.m_glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) glewGetProcAddress ("glVertexAttrib2dvARB");
    s_deviceConfig.m_glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) glewGetProcAddress ("glVertexAttrib2fARB");
    s_deviceConfig.m_glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) glewGetProcAddress ("glVertexAttrib2fvARB");
    s_deviceConfig.m_glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) glewGetProcAddress ("glVertexAttrib2sARB");
    s_deviceConfig.m_glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) glewGetProcAddress ("glVertexAttrib2svARB");
    s_deviceConfig.m_glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) glewGetProcAddress ("glVertexAttrib3dARB");
    s_deviceConfig.m_glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) glewGetProcAddress ("glVertexAttrib3dvARB");
    s_deviceConfig.m_glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) glewGetProcAddress ("glVertexAttrib3fARB");
    s_deviceConfig.m_glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) glewGetProcAddress ("glVertexAttrib3fvARB");
    s_deviceConfig.m_glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) glewGetProcAddress ("glVertexAttrib3sARB");
    s_deviceConfig.m_glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) glewGetProcAddress ("glVertexAttrib3svARB");
    s_deviceConfig.m_glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) glewGetProcAddress ("glVertexAttrib4NbvARB");
    s_deviceConfig.m_glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) glewGetProcAddress ("glVertexAttrib4NivARB");
    s_deviceConfig.m_glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) glewGetProcAddress ("glVertexAttrib4NsvARB");
    s_deviceConfig.m_glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) glewGetProcAddress ("glVertexAttrib4NubARB");
    s_deviceConfig.m_glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) glewGetProcAddress ("glVertexAttrib4NubvARB");
    s_deviceConfig.m_glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) glewGetProcAddress ("glVertexAttrib4NuivARB");
    s_deviceConfig.m_glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) glewGetProcAddress ("glVertexAttrib4NusvARB");
    s_deviceConfig.m_glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) glewGetProcAddress ("glVertexAttrib4bvARB");
    s_deviceConfig.m_glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) glewGetProcAddress ("glVertexAttrib4dARB");
    s_deviceConfig.m_glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) glewGetProcAddress ("glVertexAttrib4dvARB");
    s_deviceConfig.m_glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) glewGetProcAddress ("glVertexAttrib4fARB");
    s_deviceConfig.m_glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) glewGetProcAddress ("glVertexAttrib4fvARB");
    s_deviceConfig.m_glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) glewGetProcAddress ("glVertexAttrib4ivARB");
    s_deviceConfig.m_glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) glewGetProcAddress ("glVertexAttrib4sARB");
    s_deviceConfig.m_glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) glewGetProcAddress ("glVertexAttrib4svARB");
    s_deviceConfig.m_glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) glewGetProcAddress ("glVertexAttrib4ubvARB");
    s_deviceConfig.m_glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) glewGetProcAddress ("glVertexAttrib4uivARB");
    s_deviceConfig.m_glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) glewGetProcAddress ("glVertexAttrib4usvARB");
    s_deviceConfig.m_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) glewGetProcAddress ("glVertexAttribPointerARB");
    s_deviceConfig.m_glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) glewGetProcAddress ("glEnableVertexAttribArrayARB");
    s_deviceConfig.m_glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) glewGetProcAddress ("glDisableVertexAttribArrayARB");
    s_deviceConfig.m_glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) glewGetProcAddress ("glProgramStringARB");
    s_deviceConfig.m_glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) glewGetProcAddress ("glBindProgramARB");
    s_deviceConfig.m_glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) glewGetProcAddress ("glDeleteProgramsARB");
    s_deviceConfig.m_glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) glewGetProcAddress ("glGenProgramsARB");
    s_deviceConfig.m_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) glewGetProcAddress ("glProgramEnvParameter4dARB");
    s_deviceConfig.m_glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) glewGetProcAddress ("glProgramEnvParameter4dvARB");
    s_deviceConfig.m_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) glewGetProcAddress ("glProgramEnvParameter4fARB");
    s_deviceConfig.m_glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) glewGetProcAddress ("glProgramEnvParameter4fvARB");
    s_deviceConfig.m_glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) glewGetProcAddress ("glProgramLocalParameter4dARB");
    s_deviceConfig.m_glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) glewGetProcAddress ("glProgramLocalParameter4dvARB");
    s_deviceConfig.m_glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) glewGetProcAddress ("glProgramLocalParameter4fARB");
    s_deviceConfig.m_glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) glewGetProcAddress ("glProgramLocalParameter4fvARB");
    s_deviceConfig.m_glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) glewGetProcAddress ("glGetProgramEnvParameterdvARB");
    s_deviceConfig.m_glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) glewGetProcAddress ("glGetProgramEnvParameterfvARB");
    s_deviceConfig.m_glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) glewGetProcAddress ("glGetProgramLocalParameterdvARB");
    s_deviceConfig.m_glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) glewGetProcAddress ("glGetProgramLocalParameterfvARB");
    s_deviceConfig.m_glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) glewGetProcAddress ("glGetProgramivARB");
    s_deviceConfig.m_glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) glewGetProcAddress ("glGetProgramStringARB");
    s_deviceConfig.m_glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) glewGetProcAddress ("glGetVertexAttribdvARB");
    s_deviceConfig.m_glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) glewGetProcAddress ("glGetVertexAttribfvARB");
    s_deviceConfig.m_glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) glewGetProcAddress ("glGetVertexAttribivARB");
    s_deviceConfig.m_glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) glewGetProcAddress ("glGetVertexAttribPointervARB");
    s_deviceConfig.m_glIsProgramARB = (PFNGLISPROGRAMARBPROC) glewGetProcAddress ("glIsProgramARB");
  }

  // GL_ARB_vertex_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_shader])
  {
    s_deviceConfig.m_glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) glewGetProcAddress ("glVertexAttrib1fARB");
    s_deviceConfig.m_glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) glewGetProcAddress ("glVertexAttrib1sARB");
    s_deviceConfig.m_glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) glewGetProcAddress ("glVertexAttrib1dARB");
    s_deviceConfig.m_glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) glewGetProcAddress ("glVertexAttrib2fARB");
    s_deviceConfig.m_glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) glewGetProcAddress ("glVertexAttrib2sARB");
    s_deviceConfig.m_glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) glewGetProcAddress ("glVertexAttrib2dARB");
    s_deviceConfig.m_glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) glewGetProcAddress ("glVertexAttrib3fARB");
    s_deviceConfig.m_glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) glewGetProcAddress ("glVertexAttrib3sARB");
    s_deviceConfig.m_glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) glewGetProcAddress ("glVertexAttrib3dARB");
    s_deviceConfig.m_glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) glewGetProcAddress ("glVertexAttrib4fARB");
    s_deviceConfig.m_glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) glewGetProcAddress ("glVertexAttrib4sARB");
    s_deviceConfig.m_glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) glewGetProcAddress ("glVertexAttrib4dARB");
    s_deviceConfig.m_glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) glewGetProcAddress ("glVertexAttrib4NubARB");
    s_deviceConfig.m_glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) glewGetProcAddress ("glVertexAttrib1fvARB");
    s_deviceConfig.m_glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) glewGetProcAddress ("glVertexAttrib1svARB");
    s_deviceConfig.m_glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) glewGetProcAddress ("glVertexAttrib1dvARB");
    s_deviceConfig.m_glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) glewGetProcAddress ("glVertexAttrib2fvARB");
    s_deviceConfig.m_glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) glewGetProcAddress ("glVertexAttrib2svARB");
    s_deviceConfig.m_glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) glewGetProcAddress ("glVertexAttrib2dvARB");
    s_deviceConfig.m_glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) glewGetProcAddress ("glVertexAttrib3fvARB");
    s_deviceConfig.m_glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) glewGetProcAddress ("glVertexAttrib3svARB");
    s_deviceConfig.m_glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) glewGetProcAddress ("glVertexAttrib3dvARB");
    s_deviceConfig.m_glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) glewGetProcAddress ("glVertexAttrib4fvARB");
    s_deviceConfig.m_glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) glewGetProcAddress ("glVertexAttrib4svARB");
    s_deviceConfig.m_glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) glewGetProcAddress ("glVertexAttrib4dvARB");
    s_deviceConfig.m_glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) glewGetProcAddress ("glVertexAttrib4ivARB");
    s_deviceConfig.m_glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) glewGetProcAddress ("glVertexAttrib4bvARB");
    s_deviceConfig.m_glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) glewGetProcAddress ("glVertexAttrib4ubvARB");
    s_deviceConfig.m_glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) glewGetProcAddress ("glVertexAttrib4usvARB");
    s_deviceConfig.m_glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) glewGetProcAddress ("glVertexAttrib4uivARB");
    s_deviceConfig.m_glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) glewGetProcAddress ("glVertexAttrib4NbvARB");
    s_deviceConfig.m_glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) glewGetProcAddress ("glVertexAttrib4NsvARB");
    s_deviceConfig.m_glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) glewGetProcAddress ("glVertexAttrib4NivARB");
    s_deviceConfig.m_glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) glewGetProcAddress ("glVertexAttrib4NubvARB");
    s_deviceConfig.m_glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) glewGetProcAddress ("glVertexAttrib4NusvARB");
    s_deviceConfig.m_glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) glewGetProcAddress ("glVertexAttrib4NuivARB");
    s_deviceConfig.m_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) glewGetProcAddress ("glVertexAttribPointerARB");
    s_deviceConfig.m_glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) glewGetProcAddress ("glEnableVertexAttribArrayARB");
    s_deviceConfig.m_glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) glewGetProcAddress ("glDisableVertexAttribArrayARB");
    s_deviceConfig.m_glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC) glewGetProcAddress ("glBindAttribLocationARB");
    s_deviceConfig.m_glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC) glewGetProcAddress ("glGetActiveAttribARB");
    s_deviceConfig.m_glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC) glewGetProcAddress ("glGetAttribLocationARB");
    s_deviceConfig.m_glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) glewGetProcAddress ("glGetVertexAttribdvARB");
    s_deviceConfig.m_glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) glewGetProcAddress ("glGetVertexAttribfvARB");
    s_deviceConfig.m_glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) glewGetProcAddress ("glGetVertexAttribivARB");
    s_deviceConfig.m_glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) glewGetProcAddress ("glGetVertexAttribPointervARB");
  }

  // GL_ARB_vertex_type_2_10_10_10_rev
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_vertex_type_2_10_10_10_rev])
  {
    s_deviceConfig.m_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) glewGetProcAddress ("glVertexAttribP1ui");
    s_deviceConfig.m_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) glewGetProcAddress ("glVertexAttribP1uiv");
    s_deviceConfig.m_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) glewGetProcAddress ("glVertexAttribP2ui");
    s_deviceConfig.m_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) glewGetProcAddress ("glVertexAttribP2uiv");
    s_deviceConfig.m_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) glewGetProcAddress ("glVertexAttribP3ui");
    s_deviceConfig.m_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) glewGetProcAddress ("glVertexAttribP3uiv");
    s_deviceConfig.m_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) glewGetProcAddress ("glVertexAttribP4ui");
    s_deviceConfig.m_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) glewGetProcAddress ("glVertexAttribP4uiv");
    s_deviceConfig.m_glVertexP2ui = (PFNGLVERTEXP2UIPROC) glewGetProcAddress ("glVertexP2ui");
    s_deviceConfig.m_glVertexP2uiv = (PFNGLVERTEXP2UIVPROC) glewGetProcAddress ("glVertexP2uiv");
    s_deviceConfig.m_glVertexP3ui = (PFNGLVERTEXP3UIPROC) glewGetProcAddress ("glVertexP3ui");
    s_deviceConfig.m_glVertexP3uiv = (PFNGLVERTEXP3UIVPROC) glewGetProcAddress ("glVertexP3uiv");
    s_deviceConfig.m_glVertexP4ui = (PFNGLVERTEXP4UIPROC) glewGetProcAddress ("glVertexP4ui");
    s_deviceConfig.m_glVertexP4uiv = (PFNGLVERTEXP4UIVPROC) glewGetProcAddress ("glVertexP4uiv");
    s_deviceConfig.m_glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC) glewGetProcAddress ("glTexCoordP1ui");
    s_deviceConfig.m_glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC) glewGetProcAddress ("glTexCoordP1uiv");
    s_deviceConfig.m_glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC) glewGetProcAddress ("glTexCoordP2ui");
    s_deviceConfig.m_glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC) glewGetProcAddress ("glTexCoordP2uiv");
    s_deviceConfig.m_glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC) glewGetProcAddress ("glTexCoordP3ui");
    s_deviceConfig.m_glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC) glewGetProcAddress ("glTexCoordP3uiv");
    s_deviceConfig.m_glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC) glewGetProcAddress ("glTexCoordP4ui");
    s_deviceConfig.m_glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC) glewGetProcAddress ("glTexCoordP4uiv");
    s_deviceConfig.m_glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC) glewGetProcAddress ("glMultiTexCoordP1ui");
    s_deviceConfig.m_glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC) glewGetProcAddress ("glMultiTexCoordP1uiv");
    s_deviceConfig.m_glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC) glewGetProcAddress ("glMultiTexCoordP2ui");
    s_deviceConfig.m_glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC) glewGetProcAddress ("glMultiTexCoordP2uiv");
    s_deviceConfig.m_glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC) glewGetProcAddress ("glMultiTexCoordP3ui");
    s_deviceConfig.m_glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC) glewGetProcAddress ("glMultiTexCoordP3uiv");
    s_deviceConfig.m_glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC) glewGetProcAddress ("glMultiTexCoordP4ui");
    s_deviceConfig.m_glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC) glewGetProcAddress ("glMultiTexCoordP4uiv");
    s_deviceConfig.m_glNormalP3ui = (PFNGLNORMALP3UIPROC) glewGetProcAddress ("glNormalP3ui");
    s_deviceConfig.m_glNormalP3uiv = (PFNGLNORMALP3UIVPROC) glewGetProcAddress ("glNormalP3uiv");
    s_deviceConfig.m_glColorP3ui = (PFNGLCOLORP3UIPROC) glewGetProcAddress ("glColorP3ui");
    s_deviceConfig.m_glColorP3uiv = (PFNGLCOLORP3UIVPROC) glewGetProcAddress ("glColorP3uiv");
    s_deviceConfig.m_glColorP4ui = (PFNGLCOLORP4UIPROC) glewGetProcAddress ("glColorP4ui");
    s_deviceConfig.m_glColorP4uiv = (PFNGLCOLORP4UIVPROC) glewGetProcAddress ("glColorP4uiv");
    s_deviceConfig.m_glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC) glewGetProcAddress ("glSecondaryColorP3ui");
    s_deviceConfig.m_glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC) glewGetProcAddress ("glSecondaryColorP3uiv");
  }

  // GL_ARB_viewport_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_viewport_array])
  {
    s_deviceConfig.m_glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) glewGetProcAddress ("glViewportArrayv");
    s_deviceConfig.m_glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) glewGetProcAddress ("glViewportIndexedf");
    s_deviceConfig.m_glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) glewGetProcAddress ("glViewportIndexedfv");
    s_deviceConfig.m_glScissorArrayv = (PFNGLSCISSORARRAYVPROC) glewGetProcAddress ("glScissorArrayv");
    s_deviceConfig.m_glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) glewGetProcAddress ("glScissorIndexed");
    s_deviceConfig.m_glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) glewGetProcAddress ("glScissorIndexedv");
    s_deviceConfig.m_glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) glewGetProcAddress ("glDepthRangeArrayv");
    s_deviceConfig.m_glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) glewGetProcAddress ("glDepthRangeIndexed");
    s_deviceConfig.m_glGetFloati_v = (PFNGLGETFLOATI_VPROC) glewGetProcAddress ("glGetFloati_v");
    s_deviceConfig.m_glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) glewGetProcAddress ("glGetDoublei_v");
    s_deviceConfig.m_glDepthRangeArraydvNV = (PFNGLDEPTHRANGEARRAYDVNVPROC) glewGetProcAddress ("glDepthRangeArraydvNV");
    s_deviceConfig.m_glDepthRangeIndexeddNV = (PFNGLDEPTHRANGEINDEXEDDNVPROC) glewGetProcAddress ("glDepthRangeIndexeddNV");
  }

  // GL_ARB_window_pos
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ARB_window_pos])
  {
    s_deviceConfig.m_glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC) glewGetProcAddress ("glWindowPos2dARB");
    s_deviceConfig.m_glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC) glewGetProcAddress ("glWindowPos2dvARB");
    s_deviceConfig.m_glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC) glewGetProcAddress ("glWindowPos2fARB");
    s_deviceConfig.m_glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC) glewGetProcAddress ("glWindowPos2fvARB");
    s_deviceConfig.m_glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC) glewGetProcAddress ("glWindowPos2iARB");
    s_deviceConfig.m_glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC) glewGetProcAddress ("glWindowPos2ivARB");
    s_deviceConfig.m_glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC) glewGetProcAddress ("glWindowPos2sARB");
    s_deviceConfig.m_glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC) glewGetProcAddress ("glWindowPos2svARB");
    s_deviceConfig.m_glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC) glewGetProcAddress ("glWindowPos3dARB");
    s_deviceConfig.m_glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC) glewGetProcAddress ("glWindowPos3dvARB");
    s_deviceConfig.m_glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC) glewGetProcAddress ("glWindowPos3fARB");
    s_deviceConfig.m_glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC) glewGetProcAddress ("glWindowPos3fvARB");
    s_deviceConfig.m_glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC) glewGetProcAddress ("glWindowPos3iARB");
    s_deviceConfig.m_glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC) glewGetProcAddress ("glWindowPos3ivARB");
    s_deviceConfig.m_glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC) glewGetProcAddress ("glWindowPos3sARB");
    s_deviceConfig.m_glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC) glewGetProcAddress ("glWindowPos3svARB");
  }

  // GL_ATI_draw_buffers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_draw_buffers])
  {
    s_deviceConfig.m_glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC) glewGetProcAddress ("glDrawBuffersATI");
  }

  // GL_ATI_element_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_element_array])
  {
    s_deviceConfig.m_glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC) glewGetProcAddress ("glElementPointerATI");
    s_deviceConfig.m_glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC) glewGetProcAddress ("glDrawElementArrayATI");
    s_deviceConfig.m_glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC) glewGetProcAddress ("glDrawRangeElementArrayATI");
  }

  // GL_ATI_envmap_bumpmap
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_envmap_bumpmap])
  {
    s_deviceConfig.m_glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC) glewGetProcAddress ("glTexBumpParameterivATI");
    s_deviceConfig.m_glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC) glewGetProcAddress ("glTexBumpParameterfvATI");
    s_deviceConfig.m_glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC) glewGetProcAddress ("glGetTexBumpParameterivATI");
    s_deviceConfig.m_glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC) glewGetProcAddress ("glGetTexBumpParameterfvATI");
  }

  // GL_ATI_fragment_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_fragment_shader])
  {
    s_deviceConfig.m_glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC) glewGetProcAddress ("glGenFragmentShadersATI");
    s_deviceConfig.m_glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC) glewGetProcAddress ("glBindFragmentShaderATI");
    s_deviceConfig.m_glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC) glewGetProcAddress ("glDeleteFragmentShaderATI");
    s_deviceConfig.m_glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC) glewGetProcAddress ("glBeginFragmentShaderATI");
    s_deviceConfig.m_glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC) glewGetProcAddress ("glEndFragmentShaderATI");
    s_deviceConfig.m_glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC) glewGetProcAddress ("glPassTexCoordATI");
    s_deviceConfig.m_glSampleMapATI = (PFNGLSAMPLEMAPATIPROC) glewGetProcAddress ("glSampleMapATI");
    s_deviceConfig.m_glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC) glewGetProcAddress ("glColorFragmentOp1ATI");
    s_deviceConfig.m_glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC) glewGetProcAddress ("glColorFragmentOp2ATI");
    s_deviceConfig.m_glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC) glewGetProcAddress ("glColorFragmentOp3ATI");
    s_deviceConfig.m_glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC) glewGetProcAddress ("glAlphaFragmentOp1ATI");
    s_deviceConfig.m_glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC) glewGetProcAddress ("glAlphaFragmentOp2ATI");
    s_deviceConfig.m_glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC) glewGetProcAddress ("glAlphaFragmentOp3ATI");
    s_deviceConfig.m_glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC) glewGetProcAddress ("glSetFragmentShaderConstantATI");
  }

  // GL_ATI_map_object_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_map_object_buffer])
  {
    s_deviceConfig.m_glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC) glewGetProcAddress ("glMapObjectBufferATI");
    s_deviceConfig.m_glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC) glewGetProcAddress ("glUnmapObjectBufferATI");
  }

  // GL_ATI_pn_triangles
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_pn_triangles])
  {
    s_deviceConfig.m_glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC) glewGetProcAddress ("glPNTrianglesiATI");
    s_deviceConfig.m_glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC) glewGetProcAddress ("glPNTrianglesfATI");
  }

  // GL_ATI_separate_stencil
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_separate_stencil])
  {
    s_deviceConfig.m_glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC) glewGetProcAddress ("glStencilOpSeparateATI");
    s_deviceConfig.m_glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC) glewGetProcAddress ("glStencilFuncSeparateATI");
  }

  // GL_ATI_vertex_array_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_vertex_array_object])
  {
    s_deviceConfig.m_glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC) glewGetProcAddress ("glNewObjectBufferATI");
    s_deviceConfig.m_glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC) glewGetProcAddress ("glIsObjectBufferATI");
    s_deviceConfig.m_glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC) glewGetProcAddress ("glUpdateObjectBufferATI");
    s_deviceConfig.m_glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC) glewGetProcAddress ("glGetObjectBufferfvATI");
    s_deviceConfig.m_glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC) glewGetProcAddress ("glGetObjectBufferivATI");
    s_deviceConfig.m_glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC) glewGetProcAddress ("glFreeObjectBufferATI");
    s_deviceConfig.m_glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC) glewGetProcAddress ("glArrayObjectATI");
    s_deviceConfig.m_glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC) glewGetProcAddress ("glGetArrayObjectfvATI");
    s_deviceConfig.m_glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC) glewGetProcAddress ("glGetArrayObjectivATI");
    s_deviceConfig.m_glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC) glewGetProcAddress ("glVariantArrayObjectATI");
    s_deviceConfig.m_glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC) glewGetProcAddress ("glGetVariantArrayObjectfvATI");
    s_deviceConfig.m_glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC) glewGetProcAddress ("glGetVariantArrayObjectivATI");
  }

  // GL_ATI_vertex_attrib_array_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_vertex_attrib_array_object])
  {
    s_deviceConfig.m_glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC) glewGetProcAddress ("glVertexAttribArrayObjectATI");
    s_deviceConfig.m_glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC) glewGetProcAddress ("glGetVertexAttribArrayObjectfvATI");
    s_deviceConfig.m_glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC) glewGetProcAddress ("glGetVertexAttribArrayObjectivATI");
  }

  // GL_ATI_vertex_streams
  if (s_deviceConfig.m_featureSupported [GLEW_GL_ATI_vertex_streams])
  {
    s_deviceConfig.m_glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC) glewGetProcAddress ("glVertexStream1sATI");
    s_deviceConfig.m_glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC) glewGetProcAddress ("glVertexStream1svATI");
    s_deviceConfig.m_glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC) glewGetProcAddress ("glVertexStream1iATI");
    s_deviceConfig.m_glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC) glewGetProcAddress ("glVertexStream1ivATI");
    s_deviceConfig.m_glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC) glewGetProcAddress ("glVertexStream1fATI");
    s_deviceConfig.m_glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC) glewGetProcAddress ("glVertexStream1fvATI");
    s_deviceConfig.m_glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC) glewGetProcAddress ("glVertexStream1dATI");
    s_deviceConfig.m_glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC) glewGetProcAddress ("glVertexStream1dvATI");
    s_deviceConfig.m_glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC) glewGetProcAddress ("glVertexStream2sATI");
    s_deviceConfig.m_glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC) glewGetProcAddress ("glVertexStream2svATI");
    s_deviceConfig.m_glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC) glewGetProcAddress ("glVertexStream2iATI");
    s_deviceConfig.m_glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC) glewGetProcAddress ("glVertexStream2ivATI");
    s_deviceConfig.m_glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC) glewGetProcAddress ("glVertexStream2fATI");
    s_deviceConfig.m_glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC) glewGetProcAddress ("glVertexStream2fvATI");
    s_deviceConfig.m_glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC) glewGetProcAddress ("glVertexStream2dATI");
    s_deviceConfig.m_glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC) glewGetProcAddress ("glVertexStream2dvATI");
    s_deviceConfig.m_glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC) glewGetProcAddress ("glVertexStream3sATI");
    s_deviceConfig.m_glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC) glewGetProcAddress ("glVertexStream3svATI");
    s_deviceConfig.m_glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC) glewGetProcAddress ("glVertexStream3iATI");
    s_deviceConfig.m_glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC) glewGetProcAddress ("glVertexStream3ivATI");
    s_deviceConfig.m_glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC) glewGetProcAddress ("glVertexStream3fATI");
    s_deviceConfig.m_glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC) glewGetProcAddress ("glVertexStream3fvATI");
    s_deviceConfig.m_glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC) glewGetProcAddress ("glVertexStream3dATI");
    s_deviceConfig.m_glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC) glewGetProcAddress ("glVertexStream3dvATI");
    s_deviceConfig.m_glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC) glewGetProcAddress ("glVertexStream4sATI");
    s_deviceConfig.m_glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC) glewGetProcAddress ("glVertexStream4svATI");
    s_deviceConfig.m_glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC) glewGetProcAddress ("glVertexStream4iATI");
    s_deviceConfig.m_glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC) glewGetProcAddress ("glVertexStream4ivATI");
    s_deviceConfig.m_glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC) glewGetProcAddress ("glVertexStream4fATI");
    s_deviceConfig.m_glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC) glewGetProcAddress ("glVertexStream4fvATI");
    s_deviceConfig.m_glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC) glewGetProcAddress ("glVertexStream4dATI");
    s_deviceConfig.m_glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC) glewGetProcAddress ("glVertexStream4dvATI");
    s_deviceConfig.m_glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC) glewGetProcAddress ("glNormalStream3bATI");
    s_deviceConfig.m_glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC) glewGetProcAddress ("glNormalStream3bvATI");
    s_deviceConfig.m_glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC) glewGetProcAddress ("glNormalStream3sATI");
    s_deviceConfig.m_glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC) glewGetProcAddress ("glNormalStream3svATI");
    s_deviceConfig.m_glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC) glewGetProcAddress ("glNormalStream3iATI");
    s_deviceConfig.m_glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC) glewGetProcAddress ("glNormalStream3ivATI");
    s_deviceConfig.m_glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC) glewGetProcAddress ("glNormalStream3fATI");
    s_deviceConfig.m_glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC) glewGetProcAddress ("glNormalStream3fvATI");
    s_deviceConfig.m_glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC) glewGetProcAddress ("glNormalStream3dATI");
    s_deviceConfig.m_glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC) glewGetProcAddress ("glNormalStream3dvATI");
    s_deviceConfig.m_glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC) glewGetProcAddress ("glClientActiveVertexStreamATI");
    s_deviceConfig.m_glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC) glewGetProcAddress ("glVertexBlendEnviATI");
    s_deviceConfig.m_glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC) glewGetProcAddress ("glVertexBlendEnvfATI");
  }

  // GL_EXT_EGL_image_storage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_EGL_image_storage])
  {
    s_deviceConfig.m_glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) glewGetProcAddress ("glEGLImageTargetTexStorageEXT");
    s_deviceConfig.m_glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) glewGetProcAddress ("glEGLImageTargetTextureStorageEXT");
  }

  // GL_EXT_bindable_uniform
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_bindable_uniform])
  {
    s_deviceConfig.m_glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC) glewGetProcAddress ("glUniformBufferEXT");
    s_deviceConfig.m_glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC) glewGetProcAddress ("glGetUniformBufferSizeEXT");
    s_deviceConfig.m_glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC) glewGetProcAddress ("glGetUniformOffsetEXT");
  }

  // GL_EXT_blend_color
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_color])
  {
    s_deviceConfig.m_glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC) glewGetProcAddress ("glBlendColorEXT");
  }

  // GL_EXT_blend_equation_separate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_equation_separate])
  {
    s_deviceConfig.m_glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC) glewGetProcAddress ("glBlendEquationSeparateEXT");
  }

  // GL_EXT_blend_func_separate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_func_separate])
  {
    s_deviceConfig.m_glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC) glewGetProcAddress ("glBlendFuncSeparateEXT");
  }

  // GL_EXT_blend_minmax
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_blend_minmax])
  {
    s_deviceConfig.m_glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC) glewGetProcAddress ("glBlendEquationEXT");
  }

  // GL_EXT_color_subtable
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_color_subtable])
  {
    s_deviceConfig.m_glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC) glewGetProcAddress ("glColorSubTableEXT");
    s_deviceConfig.m_glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC) glewGetProcAddress ("glCopyColorSubTableEXT");
  }

  // GL_EXT_compiled_vertex_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_compiled_vertex_array])
  {
    s_deviceConfig.m_glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC) glewGetProcAddress ("glLockArraysEXT");
    s_deviceConfig.m_glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC) glewGetProcAddress ("glUnlockArraysEXT");
  }

  // GL_EXT_convolution
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_convolution])
  {
    s_deviceConfig.m_glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC) glewGetProcAddress ("glConvolutionFilter1DEXT");
    s_deviceConfig.m_glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC) glewGetProcAddress ("glConvolutionFilter2DEXT");
    s_deviceConfig.m_glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC) glewGetProcAddress ("glConvolutionParameterfEXT");
    s_deviceConfig.m_glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC) glewGetProcAddress ("glConvolutionParameterfvEXT");
    s_deviceConfig.m_glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC) glewGetProcAddress ("glConvolutionParameteriEXT");
    s_deviceConfig.m_glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC) glewGetProcAddress ("glConvolutionParameterivEXT");
    s_deviceConfig.m_glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC) glewGetProcAddress ("glCopyConvolutionFilter1DEXT");
    s_deviceConfig.m_glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC) glewGetProcAddress ("glCopyConvolutionFilter2DEXT");
    s_deviceConfig.m_glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC) glewGetProcAddress ("glGetConvolutionFilterEXT");
    s_deviceConfig.m_glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC) glewGetProcAddress ("glGetConvolutionParameterfvEXT");
    s_deviceConfig.m_glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC) glewGetProcAddress ("glGetConvolutionParameterivEXT");
    s_deviceConfig.m_glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC) glewGetProcAddress ("glGetSeparableFilterEXT");
    s_deviceConfig.m_glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC) glewGetProcAddress ("glSeparableFilter2DEXT");
  }

  // GL_EXT_coordinate_frame
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_coordinate_frame])
  {
    s_deviceConfig.m_glTangent3bEXT = (PFNGLTANGENT3BEXTPROC) glewGetProcAddress ("glTangent3bEXT");
    s_deviceConfig.m_glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC) glewGetProcAddress ("glTangent3bvEXT");
    s_deviceConfig.m_glTangent3dEXT = (PFNGLTANGENT3DEXTPROC) glewGetProcAddress ("glTangent3dEXT");
    s_deviceConfig.m_glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC) glewGetProcAddress ("glTangent3dvEXT");
    s_deviceConfig.m_glTangent3fEXT = (PFNGLTANGENT3FEXTPROC) glewGetProcAddress ("glTangent3fEXT");
    s_deviceConfig.m_glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC) glewGetProcAddress ("glTangent3fvEXT");
    s_deviceConfig.m_glTangent3iEXT = (PFNGLTANGENT3IEXTPROC) glewGetProcAddress ("glTangent3iEXT");
    s_deviceConfig.m_glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC) glewGetProcAddress ("glTangent3ivEXT");
    s_deviceConfig.m_glTangent3sEXT = (PFNGLTANGENT3SEXTPROC) glewGetProcAddress ("glTangent3sEXT");
    s_deviceConfig.m_glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC) glewGetProcAddress ("glTangent3svEXT");
    s_deviceConfig.m_glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC) glewGetProcAddress ("glBinormal3bEXT");
    s_deviceConfig.m_glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC) glewGetProcAddress ("glBinormal3bvEXT");
    s_deviceConfig.m_glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC) glewGetProcAddress ("glBinormal3dEXT");
    s_deviceConfig.m_glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC) glewGetProcAddress ("glBinormal3dvEXT");
    s_deviceConfig.m_glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC) glewGetProcAddress ("glBinormal3fEXT");
    s_deviceConfig.m_glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC) glewGetProcAddress ("glBinormal3fvEXT");
    s_deviceConfig.m_glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC) glewGetProcAddress ("glBinormal3iEXT");
    s_deviceConfig.m_glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC) glewGetProcAddress ("glBinormal3ivEXT");
    s_deviceConfig.m_glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC) glewGetProcAddress ("glBinormal3sEXT");
    s_deviceConfig.m_glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC) glewGetProcAddress ("glBinormal3svEXT");
    s_deviceConfig.m_glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC) glewGetProcAddress ("glTangentPointerEXT");
    s_deviceConfig.m_glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC) glewGetProcAddress ("glBinormalPointerEXT");
  }

  // GL_EXT_copy_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_copy_texture])
  {
    s_deviceConfig.m_glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC) glewGetProcAddress ("glCopyTexImage1DEXT");
    s_deviceConfig.m_glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC) glewGetProcAddress ("glCopyTexImage2DEXT");
    s_deviceConfig.m_glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC) glewGetProcAddress ("glCopyTexSubImage1DEXT");
    s_deviceConfig.m_glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC) glewGetProcAddress ("glCopyTexSubImage2DEXT");
    s_deviceConfig.m_glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC) glewGetProcAddress ("glCopyTexSubImage3DEXT");
  }

  // GL_EXT_cull_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_cull_vertex])
  {
    s_deviceConfig.m_glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC) glewGetProcAddress ("glCullParameterdvEXT");
    s_deviceConfig.m_glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC) glewGetProcAddress ("glCullParameterfvEXT");
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

  // GL_EXT_depth_bounds_test
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_depth_bounds_test])
  {
    s_deviceConfig.m_glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC) glewGetProcAddress ("glDepthBoundsEXT");
  }

  // GL_EXT_direct_state_access
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_direct_state_access])
  {
    s_deviceConfig.m_glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) glewGetProcAddress ("glMatrixLoadfEXT");
    s_deviceConfig.m_glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) glewGetProcAddress ("glMatrixLoaddEXT");
    s_deviceConfig.m_glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) glewGetProcAddress ("glMatrixMultfEXT");
    s_deviceConfig.m_glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) glewGetProcAddress ("glMatrixMultdEXT");
    s_deviceConfig.m_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) glewGetProcAddress ("glMatrixLoadIdentityEXT");
    s_deviceConfig.m_glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) glewGetProcAddress ("glMatrixRotatefEXT");
    s_deviceConfig.m_glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) glewGetProcAddress ("glMatrixRotatedEXT");
    s_deviceConfig.m_glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) glewGetProcAddress ("glMatrixScalefEXT");
    s_deviceConfig.m_glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) glewGetProcAddress ("glMatrixScaledEXT");
    s_deviceConfig.m_glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) glewGetProcAddress ("glMatrixTranslatefEXT");
    s_deviceConfig.m_glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) glewGetProcAddress ("glMatrixTranslatedEXT");
    s_deviceConfig.m_glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) glewGetProcAddress ("glMatrixFrustumEXT");
    s_deviceConfig.m_glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) glewGetProcAddress ("glMatrixOrthoEXT");
    s_deviceConfig.m_glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) glewGetProcAddress ("glMatrixPopEXT");
    s_deviceConfig.m_glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) glewGetProcAddress ("glMatrixPushEXT");
    s_deviceConfig.m_glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) glewGetProcAddress ("glClientAttribDefaultEXT");
    s_deviceConfig.m_glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) glewGetProcAddress ("glPushClientAttribDefaultEXT");
    s_deviceConfig.m_glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC) glewGetProcAddress ("glTextureParameterfEXT");
    s_deviceConfig.m_glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC) glewGetProcAddress ("glTextureParameterfvEXT");
    s_deviceConfig.m_glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC) glewGetProcAddress ("glTextureParameteriEXT");
    s_deviceConfig.m_glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC) glewGetProcAddress ("glTextureParameterivEXT");
    s_deviceConfig.m_glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC) glewGetProcAddress ("glTextureImage1DEXT");
    s_deviceConfig.m_glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC) glewGetProcAddress ("glTextureImage2DEXT");
    s_deviceConfig.m_glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC) glewGetProcAddress ("glTextureSubImage1DEXT");
    s_deviceConfig.m_glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC) glewGetProcAddress ("glTextureSubImage2DEXT");
    s_deviceConfig.m_glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) glewGetProcAddress ("glCopyTextureImage1DEXT");
    s_deviceConfig.m_glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) glewGetProcAddress ("glCopyTextureImage2DEXT");
    s_deviceConfig.m_glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) glewGetProcAddress ("glCopyTextureSubImage1DEXT");
    s_deviceConfig.m_glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) glewGetProcAddress ("glCopyTextureSubImage2DEXT");
    s_deviceConfig.m_glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC) glewGetProcAddress ("glGetTextureImageEXT");
    s_deviceConfig.m_glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) glewGetProcAddress ("glGetTextureParameterfvEXT");
    s_deviceConfig.m_glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) glewGetProcAddress ("glGetTextureParameterivEXT");
    s_deviceConfig.m_glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) glewGetProcAddress ("glGetTextureLevelParameterfvEXT");
    s_deviceConfig.m_glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) glewGetProcAddress ("glGetTextureLevelParameterivEXT");
    s_deviceConfig.m_glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC) glewGetProcAddress ("glTextureImage3DEXT");
    s_deviceConfig.m_glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC) glewGetProcAddress ("glTextureSubImage3DEXT");
    s_deviceConfig.m_glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) glewGetProcAddress ("glCopyTextureSubImage3DEXT");
    s_deviceConfig.m_glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC) glewGetProcAddress ("glBindMultiTextureEXT");
    s_deviceConfig.m_glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC) glewGetProcAddress ("glMultiTexCoordPointerEXT");
    s_deviceConfig.m_glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC) glewGetProcAddress ("glMultiTexEnvfEXT");
    s_deviceConfig.m_glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC) glewGetProcAddress ("glMultiTexEnvfvEXT");
    s_deviceConfig.m_glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC) glewGetProcAddress ("glMultiTexEnviEXT");
    s_deviceConfig.m_glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC) glewGetProcAddress ("glMultiTexEnvivEXT");
    s_deviceConfig.m_glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC) glewGetProcAddress ("glMultiTexGendEXT");
    s_deviceConfig.m_glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC) glewGetProcAddress ("glMultiTexGendvEXT");
    s_deviceConfig.m_glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC) glewGetProcAddress ("glMultiTexGenfEXT");
    s_deviceConfig.m_glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC) glewGetProcAddress ("glMultiTexGenfvEXT");
    s_deviceConfig.m_glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC) glewGetProcAddress ("glMultiTexGeniEXT");
    s_deviceConfig.m_glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC) glewGetProcAddress ("glMultiTexGenivEXT");
    s_deviceConfig.m_glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC) glewGetProcAddress ("glGetMultiTexEnvfvEXT");
    s_deviceConfig.m_glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC) glewGetProcAddress ("glGetMultiTexEnvivEXT");
    s_deviceConfig.m_glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC) glewGetProcAddress ("glGetMultiTexGendvEXT");
    s_deviceConfig.m_glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC) glewGetProcAddress ("glGetMultiTexGenfvEXT");
    s_deviceConfig.m_glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC) glewGetProcAddress ("glGetMultiTexGenivEXT");
    s_deviceConfig.m_glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC) glewGetProcAddress ("glMultiTexParameteriEXT");
    s_deviceConfig.m_glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC) glewGetProcAddress ("glMultiTexParameterivEXT");
    s_deviceConfig.m_glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC) glewGetProcAddress ("glMultiTexParameterfEXT");
    s_deviceConfig.m_glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC) glewGetProcAddress ("glMultiTexParameterfvEXT");
    s_deviceConfig.m_glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC) glewGetProcAddress ("glMultiTexImage1DEXT");
    s_deviceConfig.m_glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC) glewGetProcAddress ("glMultiTexImage2DEXT");
    s_deviceConfig.m_glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) glewGetProcAddress ("glMultiTexSubImage1DEXT");
    s_deviceConfig.m_glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) glewGetProcAddress ("glMultiTexSubImage2DEXT");
    s_deviceConfig.m_glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) glewGetProcAddress ("glCopyMultiTexImage1DEXT");
    s_deviceConfig.m_glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) glewGetProcAddress ("glCopyMultiTexImage2DEXT");
    s_deviceConfig.m_glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) glewGetProcAddress ("glCopyMultiTexSubImage1DEXT");
    s_deviceConfig.m_glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) glewGetProcAddress ("glCopyMultiTexSubImage2DEXT");
    s_deviceConfig.m_glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC) glewGetProcAddress ("glGetMultiTexImageEXT");
    s_deviceConfig.m_glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) glewGetProcAddress ("glGetMultiTexParameterfvEXT");
    s_deviceConfig.m_glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) glewGetProcAddress ("glGetMultiTexParameterivEXT");
    s_deviceConfig.m_glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) glewGetProcAddress ("glGetMultiTexLevelParameterfvEXT");
    s_deviceConfig.m_glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) glewGetProcAddress ("glGetMultiTexLevelParameterivEXT");
    s_deviceConfig.m_glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC) glewGetProcAddress ("glMultiTexImage3DEXT");
    s_deviceConfig.m_glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) glewGetProcAddress ("glMultiTexSubImage3DEXT");
    s_deviceConfig.m_glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) glewGetProcAddress ("glCopyMultiTexSubImage3DEXT");
    s_deviceConfig.m_glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) glewGetProcAddress ("glEnableClientStateIndexedEXT");
    s_deviceConfig.m_glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) glewGetProcAddress ("glDisableClientStateIndexedEXT");
    s_deviceConfig.m_glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC) glewGetProcAddress ("glGetFloatIndexedvEXT");
    s_deviceConfig.m_glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC) glewGetProcAddress ("glGetDoubleIndexedvEXT");
    s_deviceConfig.m_glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC) glewGetProcAddress ("glGetPointerIndexedvEXT");
    s_deviceConfig.m_glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) glewGetProcAddress ("glEnableIndexedEXT");
    s_deviceConfig.m_glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) glewGetProcAddress ("glDisableIndexedEXT");
    s_deviceConfig.m_glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) glewGetProcAddress ("glIsEnabledIndexedEXT");
    s_deviceConfig.m_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) glewGetProcAddress ("glGetIntegerIndexedvEXT");
    s_deviceConfig.m_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) glewGetProcAddress ("glGetBooleanIndexedvEXT");
    s_deviceConfig.m_glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) glewGetProcAddress ("glCompressedTextureImage3DEXT");
    s_deviceConfig.m_glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) glewGetProcAddress ("glCompressedTextureImage2DEXT");
    s_deviceConfig.m_glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) glewGetProcAddress ("glCompressedTextureImage1DEXT");
    s_deviceConfig.m_glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) glewGetProcAddress ("glCompressedTextureSubImage3DEXT");
    s_deviceConfig.m_glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) glewGetProcAddress ("glCompressedTextureSubImage2DEXT");
    s_deviceConfig.m_glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) glewGetProcAddress ("glCompressedTextureSubImage1DEXT");
    s_deviceConfig.m_glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) glewGetProcAddress ("glGetCompressedTextureImageEXT");
    s_deviceConfig.m_glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) glewGetProcAddress ("glCompressedMultiTexImage3DEXT");
    s_deviceConfig.m_glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) glewGetProcAddress ("glCompressedMultiTexImage2DEXT");
    s_deviceConfig.m_glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) glewGetProcAddress ("glCompressedMultiTexImage1DEXT");
    s_deviceConfig.m_glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) glewGetProcAddress ("glCompressedMultiTexSubImage3DEXT");
    s_deviceConfig.m_glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) glewGetProcAddress ("glCompressedMultiTexSubImage2DEXT");
    s_deviceConfig.m_glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) glewGetProcAddress ("glCompressedMultiTexSubImage1DEXT");
    s_deviceConfig.m_glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) glewGetProcAddress ("glGetCompressedMultiTexImageEXT");
    s_deviceConfig.m_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) glewGetProcAddress ("glMatrixLoadTransposefEXT");
    s_deviceConfig.m_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) glewGetProcAddress ("glMatrixLoadTransposedEXT");
    s_deviceConfig.m_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) glewGetProcAddress ("glMatrixMultTransposefEXT");
    s_deviceConfig.m_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) glewGetProcAddress ("glMatrixMultTransposedEXT");
    s_deviceConfig.m_glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC) glewGetProcAddress ("glNamedBufferDataEXT");
    s_deviceConfig.m_glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) glewGetProcAddress ("glNamedBufferSubDataEXT");
    s_deviceConfig.m_glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC) glewGetProcAddress ("glMapNamedBufferEXT");
    s_deviceConfig.m_glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC) glewGetProcAddress ("glUnmapNamedBufferEXT");
    s_deviceConfig.m_glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) glewGetProcAddress ("glGetNamedBufferParameterivEXT");
    s_deviceConfig.m_glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) glewGetProcAddress ("glGetNamedBufferPointervEXT");
    s_deviceConfig.m_glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) glewGetProcAddress ("glGetNamedBufferSubDataEXT");
    s_deviceConfig.m_glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) glewGetProcAddress ("glProgramUniform1fEXT");
    s_deviceConfig.m_glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) glewGetProcAddress ("glProgramUniform2fEXT");
    s_deviceConfig.m_glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) glewGetProcAddress ("glProgramUniform3fEXT");
    s_deviceConfig.m_glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) glewGetProcAddress ("glProgramUniform4fEXT");
    s_deviceConfig.m_glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) glewGetProcAddress ("glProgramUniform1iEXT");
    s_deviceConfig.m_glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) glewGetProcAddress ("glProgramUniform2iEXT");
    s_deviceConfig.m_glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) glewGetProcAddress ("glProgramUniform3iEXT");
    s_deviceConfig.m_glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) glewGetProcAddress ("glProgramUniform4iEXT");
    s_deviceConfig.m_glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) glewGetProcAddress ("glProgramUniform1fvEXT");
    s_deviceConfig.m_glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) glewGetProcAddress ("glProgramUniform2fvEXT");
    s_deviceConfig.m_glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) glewGetProcAddress ("glProgramUniform3fvEXT");
    s_deviceConfig.m_glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) glewGetProcAddress ("glProgramUniform4fvEXT");
    s_deviceConfig.m_glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) glewGetProcAddress ("glProgramUniform1ivEXT");
    s_deviceConfig.m_glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) glewGetProcAddress ("glProgramUniform2ivEXT");
    s_deviceConfig.m_glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) glewGetProcAddress ("glProgramUniform3ivEXT");
    s_deviceConfig.m_glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) glewGetProcAddress ("glProgramUniform4ivEXT");
    s_deviceConfig.m_glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2x3fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3x2fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2x4fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4x2fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3x4fvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4x3fvEXT");
    s_deviceConfig.m_glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC) glewGetProcAddress ("glTextureBufferEXT");
    s_deviceConfig.m_glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC) glewGetProcAddress ("glMultiTexBufferEXT");
    s_deviceConfig.m_glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC) glewGetProcAddress ("glTextureParameterIivEXT");
    s_deviceConfig.m_glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) glewGetProcAddress ("glTextureParameterIuivEXT");
    s_deviceConfig.m_glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) glewGetProcAddress ("glGetTextureParameterIivEXT");
    s_deviceConfig.m_glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) glewGetProcAddress ("glGetTextureParameterIuivEXT");
    s_deviceConfig.m_glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC) glewGetProcAddress ("glMultiTexParameterIivEXT");
    s_deviceConfig.m_glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) glewGetProcAddress ("glMultiTexParameterIuivEXT");
    s_deviceConfig.m_glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) glewGetProcAddress ("glGetMultiTexParameterIivEXT");
    s_deviceConfig.m_glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) glewGetProcAddress ("glGetMultiTexParameterIuivEXT");
    s_deviceConfig.m_glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) glewGetProcAddress ("glProgramUniform1uiEXT");
    s_deviceConfig.m_glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) glewGetProcAddress ("glProgramUniform2uiEXT");
    s_deviceConfig.m_glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) glewGetProcAddress ("glProgramUniform3uiEXT");
    s_deviceConfig.m_glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) glewGetProcAddress ("glProgramUniform4uiEXT");
    s_deviceConfig.m_glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) glewGetProcAddress ("glProgramUniform1uivEXT");
    s_deviceConfig.m_glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) glewGetProcAddress ("glProgramUniform2uivEXT");
    s_deviceConfig.m_glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) glewGetProcAddress ("glProgramUniform3uivEXT");
    s_deviceConfig.m_glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) glewGetProcAddress ("glProgramUniform4uivEXT");
    s_deviceConfig.m_glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameters4fvEXT");
    s_deviceConfig.m_glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameterI4iEXT");
    s_deviceConfig.m_glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameterI4ivEXT");
    s_deviceConfig.m_glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParametersI4ivEXT");
    s_deviceConfig.m_glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameterI4uiEXT");
    s_deviceConfig.m_glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameterI4uivEXT");
    s_deviceConfig.m_glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParametersI4uivEXT");
    s_deviceConfig.m_glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) glewGetProcAddress ("glGetNamedProgramLocalParameterIivEXT");
    s_deviceConfig.m_glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) glewGetProcAddress ("glGetNamedProgramLocalParameterIuivEXT");
    s_deviceConfig.m_glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC) glewGetProcAddress ("glEnableClientStateiEXT");
    s_deviceConfig.m_glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC) glewGetProcAddress ("glDisableClientStateiEXT");
    s_deviceConfig.m_glGetFloati_vEXT = (PFNGLGETFLOATI_VEXTPROC) glewGetProcAddress ("glGetFloati_vEXT");
    s_deviceConfig.m_glGetDoublei_vEXT = (PFNGLGETDOUBLEI_VEXTPROC) glewGetProcAddress ("glGetDoublei_vEXT");
    s_deviceConfig.m_glGetPointeri_vEXT = (PFNGLGETPOINTERI_VEXTPROC) glewGetProcAddress ("glGetPointeri_vEXT");
    s_deviceConfig.m_glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) glewGetProcAddress ("glNamedProgramStringEXT");
    s_deviceConfig.m_glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameter4dEXT");
    s_deviceConfig.m_glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameter4dvEXT");
    s_deviceConfig.m_glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameter4fEXT");
    s_deviceConfig.m_glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) glewGetProcAddress ("glNamedProgramLocalParameter4fvEXT");
    s_deviceConfig.m_glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) glewGetProcAddress ("glGetNamedProgramLocalParameterdvEXT");
    s_deviceConfig.m_glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) glewGetProcAddress ("glGetNamedProgramLocalParameterfvEXT");
    s_deviceConfig.m_glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC) glewGetProcAddress ("glGetNamedProgramivEXT");
    s_deviceConfig.m_glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) glewGetProcAddress ("glGetNamedProgramStringEXT");
    s_deviceConfig.m_glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) glewGetProcAddress ("glNamedRenderbufferStorageEXT");
    s_deviceConfig.m_glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) glewGetProcAddress ("glGetNamedRenderbufferParameterivEXT");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisampleEXT");
    s_deviceConfig.m_glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) glewGetProcAddress ("glNamedRenderbufferStorageMultisampleCoverageEXT");
    s_deviceConfig.m_glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) glewGetProcAddress ("glCheckNamedFramebufferStatusEXT");
    s_deviceConfig.m_glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) glewGetProcAddress ("glNamedFramebufferTexture1DEXT");
    s_deviceConfig.m_glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) glewGetProcAddress ("glNamedFramebufferTexture2DEXT");
    s_deviceConfig.m_glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) glewGetProcAddress ("glNamedFramebufferTexture3DEXT");
    s_deviceConfig.m_glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) glewGetProcAddress ("glNamedFramebufferRenderbufferEXT");
    s_deviceConfig.m_glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) glewGetProcAddress ("glGetNamedFramebufferAttachmentParameterivEXT");
    s_deviceConfig.m_glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) glewGetProcAddress ("glGenerateTextureMipmapEXT");
    s_deviceConfig.m_glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) glewGetProcAddress ("glGenerateMultiTexMipmapEXT");
    s_deviceConfig.m_glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) glewGetProcAddress ("glFramebufferDrawBufferEXT");
    s_deviceConfig.m_glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) glewGetProcAddress ("glFramebufferDrawBuffersEXT");
    s_deviceConfig.m_glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) glewGetProcAddress ("glFramebufferReadBufferEXT");
    s_deviceConfig.m_glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) glewGetProcAddress ("glGetFramebufferParameterivEXT");
    s_deviceConfig.m_glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) glewGetProcAddress ("glNamedCopyBufferSubDataEXT");
    s_deviceConfig.m_glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) glewGetProcAddress ("glNamedFramebufferTextureEXT");
    s_deviceConfig.m_glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) glewGetProcAddress ("glNamedFramebufferTextureLayerEXT");
    s_deviceConfig.m_glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) glewGetProcAddress ("glNamedFramebufferTextureFaceEXT");
    s_deviceConfig.m_glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC) glewGetProcAddress ("glTextureRenderbufferEXT");
    s_deviceConfig.m_glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC) glewGetProcAddress ("glMultiTexRenderbufferEXT");
    s_deviceConfig.m_glVertexArrayVertexOffsetEXT = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayVertexOffsetEXT");
    s_deviceConfig.m_glVertexArrayColorOffsetEXT = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) glewGetProcAddress ("glVertexArrayColorOffsetEXT");
    s_deviceConfig.m_glVertexArrayEdgeFlagOffsetEXT = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayEdgeFlagOffsetEXT");
    s_deviceConfig.m_glVertexArrayIndexOffsetEXT = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayIndexOffsetEXT");
    s_deviceConfig.m_glVertexArrayNormalOffsetEXT = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayNormalOffsetEXT");
    s_deviceConfig.m_glVertexArrayTexCoordOffsetEXT = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayTexCoordOffsetEXT");
    s_deviceConfig.m_glVertexArrayMultiTexCoordOffsetEXT = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayMultiTexCoordOffsetEXT");
    s_deviceConfig.m_glVertexArrayFogCoordOffsetEXT = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayFogCoordOffsetEXT");
    s_deviceConfig.m_glVertexArraySecondaryColorOffsetEXT = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) glewGetProcAddress ("glVertexArraySecondaryColorOffsetEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribOffsetEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribIOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribIOffsetEXT");
    s_deviceConfig.m_glEnableVertexArrayEXT = (PFNGLENABLEVERTEXARRAYEXTPROC) glewGetProcAddress ("glEnableVertexArrayEXT");
    s_deviceConfig.m_glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC) glewGetProcAddress ("glDisableVertexArrayEXT");
    s_deviceConfig.m_glEnableVertexArrayAttribEXT = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) glewGetProcAddress ("glEnableVertexArrayAttribEXT");
    s_deviceConfig.m_glDisableVertexArrayAttribEXT = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) glewGetProcAddress ("glDisableVertexArrayAttribEXT");
    s_deviceConfig.m_glGetVertexArrayIntegervEXT = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) glewGetProcAddress ("glGetVertexArrayIntegervEXT");
    s_deviceConfig.m_glGetVertexArrayPointervEXT = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) glewGetProcAddress ("glGetVertexArrayPointervEXT");
    s_deviceConfig.m_glGetVertexArrayIntegeri_vEXT = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) glewGetProcAddress ("glGetVertexArrayIntegeri_vEXT");
    s_deviceConfig.m_glGetVertexArrayPointeri_vEXT = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) glewGetProcAddress ("glGetVertexArrayPointeri_vEXT");
    s_deviceConfig.m_glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) glewGetProcAddress ("glMapNamedBufferRangeEXT");
    s_deviceConfig.m_glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) glewGetProcAddress ("glFlushMappedNamedBufferRangeEXT");
    s_deviceConfig.m_glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) glewGetProcAddress ("glNamedBufferStorageEXT");
    s_deviceConfig.m_glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) glewGetProcAddress ("glClearNamedBufferDataEXT");
    s_deviceConfig.m_glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) glewGetProcAddress ("glClearNamedBufferSubDataEXT");
    s_deviceConfig.m_glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) glewGetProcAddress ("glNamedFramebufferParameteriEXT");
    s_deviceConfig.m_glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) glewGetProcAddress ("glGetNamedFramebufferParameterivEXT");
    s_deviceConfig.m_glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC) glewGetProcAddress ("glProgramUniform1dEXT");
    s_deviceConfig.m_glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC) glewGetProcAddress ("glProgramUniform2dEXT");
    s_deviceConfig.m_glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC) glewGetProcAddress ("glProgramUniform3dEXT");
    s_deviceConfig.m_glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC) glewGetProcAddress ("glProgramUniform4dEXT");
    s_deviceConfig.m_glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC) glewGetProcAddress ("glProgramUniform1dvEXT");
    s_deviceConfig.m_glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC) glewGetProcAddress ("glProgramUniform2dvEXT");
    s_deviceConfig.m_glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC) glewGetProcAddress ("glProgramUniform3dvEXT");
    s_deviceConfig.m_glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC) glewGetProcAddress ("glProgramUniform4dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2x3dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix2x4dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3x2dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix3x4dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4x2dvEXT");
    s_deviceConfig.m_glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) glewGetProcAddress ("glProgramUniformMatrix4x3dvEXT");
    s_deviceConfig.m_glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC) glewGetProcAddress ("glTextureBufferRangeEXT");
    s_deviceConfig.m_glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) glewGetProcAddress ("glTextureStorage1DEXT");
    s_deviceConfig.m_glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) glewGetProcAddress ("glTextureStorage2DEXT");
    s_deviceConfig.m_glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) glewGetProcAddress ("glTextureStorage3DEXT");
    s_deviceConfig.m_glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) glewGetProcAddress ("glTextureStorage2DMultisampleEXT");
    s_deviceConfig.m_glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) glewGetProcAddress ("glTextureStorage3DMultisampleEXT");
    s_deviceConfig.m_glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) glewGetProcAddress ("glVertexArrayBindVertexBufferEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribFormatEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribIFormatEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribLFormatEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribBindingEXT");
    s_deviceConfig.m_glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) glewGetProcAddress ("glVertexArrayVertexBindingDivisorEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribLOffsetEXT");
    s_deviceConfig.m_glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) glewGetProcAddress ("glTexturePageCommitmentEXT");
    s_deviceConfig.m_glVertexArrayVertexAttribDivisorEXT = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) glewGetProcAddress ("glVertexArrayVertexAttribDivisorEXT");
  }

  // GL_EXT_draw_buffers2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_buffers2])
  {
    s_deviceConfig.m_glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC) glewGetProcAddress ("glColorMaskIndexedEXT");
    s_deviceConfig.m_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) glewGetProcAddress ("glGetBooleanIndexedvEXT");
    s_deviceConfig.m_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) glewGetProcAddress ("glGetIntegerIndexedvEXT");
    s_deviceConfig.m_glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) glewGetProcAddress ("glEnableIndexedEXT");
    s_deviceConfig.m_glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) glewGetProcAddress ("glDisableIndexedEXT");
    s_deviceConfig.m_glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) glewGetProcAddress ("glIsEnabledIndexedEXT");
  }

  // GL_EXT_draw_instanced
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_instanced])
  {
    s_deviceConfig.m_glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) glewGetProcAddress ("glDrawArraysInstancedEXT");
    s_deviceConfig.m_glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) glewGetProcAddress ("glDrawElementsInstancedEXT");
  }

  // GL_EXT_draw_range_elements
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_draw_range_elements])
  {
    s_deviceConfig.m_glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC) glewGetProcAddress ("glDrawRangeElementsEXT");
  }

  // GL_EXT_external_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_external_buffer])
  {
    s_deviceConfig.m_glBufferStorageExternalEXT = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC) glewGetProcAddress ("glBufferStorageExternalEXT");
    s_deviceConfig.m_glNamedBufferStorageExternalEXT = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) glewGetProcAddress ("glNamedBufferStorageExternalEXT");
  }

  // GL_EXT_fog_coord
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_fog_coord])
  {
    s_deviceConfig.m_glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC) glewGetProcAddress ("glFogCoordfEXT");
    s_deviceConfig.m_glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC) glewGetProcAddress ("glFogCoordfvEXT");
    s_deviceConfig.m_glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC) glewGetProcAddress ("glFogCoorddEXT");
    s_deviceConfig.m_glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC) glewGetProcAddress ("glFogCoorddvEXT");
    s_deviceConfig.m_glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC) glewGetProcAddress ("glFogCoordPointerEXT");
  }

  // GL_EXT_fragment_shading_rate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_fragment_shading_rate])
  {
    s_deviceConfig.m_glGetFragmentShadingRatesEXT = (PFNGLGETFRAGMENTSHADINGRATESEXTPROC) glewGetProcAddress ("glGetFragmentShadingRatesEXT");
    s_deviceConfig.m_glShadingRateEXT = (PFNGLSHADINGRATEEXTPROC) glewGetProcAddress ("glShadingRateEXT");
    s_deviceConfig.m_glShadingRateCombinerOpsEXT = (PFNGLSHADINGRATECOMBINEROPSEXTPROC) glewGetProcAddress ("glShadingRateCombinerOpsEXT");
    s_deviceConfig.m_glFramebufferShadingRateEXT = (PFNGLFRAMEBUFFERSHADINGRATEEXTPROC) glewGetProcAddress ("glFramebufferShadingRateEXT");
  }

  // GL_EXT_framebuffer_blit
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit])
  {
    s_deviceConfig.m_glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC) glewGetProcAddress ("glBlitFramebufferEXT");
  }

  // GL_EXT_framebuffer_blit_layers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_blit_layers])
  {
    s_deviceConfig.m_glBlitFramebufferLayersEXT = (PFNGLBLITFRAMEBUFFERLAYERSEXTPROC) glewGetProcAddress ("glBlitFramebufferLayersEXT");
    s_deviceConfig.m_glBlitFramebufferLayerEXT = (PFNGLBLITFRAMEBUFFERLAYEREXTPROC) glewGetProcAddress ("glBlitFramebufferLayerEXT");
  }

  // GL_EXT_framebuffer_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_multisample])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleEXT");
  }

  // GL_EXT_framebuffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_framebuffer_object])
  {
    s_deviceConfig.m_glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC) glewGetProcAddress ("glIsRenderbufferEXT");
    s_deviceConfig.m_glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC) glewGetProcAddress ("glBindRenderbufferEXT");
    s_deviceConfig.m_glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC) glewGetProcAddress ("glDeleteRenderbuffersEXT");
    s_deviceConfig.m_glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC) glewGetProcAddress ("glGenRenderbuffersEXT");
    s_deviceConfig.m_glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC) glewGetProcAddress ("glRenderbufferStorageEXT");
    s_deviceConfig.m_glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC) glewGetProcAddress ("glGetRenderbufferParameterivEXT");
    s_deviceConfig.m_glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC) glewGetProcAddress ("glIsFramebufferEXT");
    s_deviceConfig.m_glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC) glewGetProcAddress ("glBindFramebufferEXT");
    s_deviceConfig.m_glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC) glewGetProcAddress ("glDeleteFramebuffersEXT");
    s_deviceConfig.m_glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC) glewGetProcAddress ("glGenFramebuffersEXT");
    s_deviceConfig.m_glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC) glewGetProcAddress ("glCheckFramebufferStatusEXT");
    s_deviceConfig.m_glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC) glewGetProcAddress ("glFramebufferTexture1DEXT");
    s_deviceConfig.m_glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC) glewGetProcAddress ("glFramebufferTexture2DEXT");
    s_deviceConfig.m_glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC) glewGetProcAddress ("glFramebufferTexture3DEXT");
    s_deviceConfig.m_glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC) glewGetProcAddress ("glFramebufferRenderbufferEXT");
    s_deviceConfig.m_glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) glewGetProcAddress ("glGetFramebufferAttachmentParameterivEXT");
    s_deviceConfig.m_glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC) glewGetProcAddress ("glGenerateMipmapEXT");
  }

  // GL_EXT_geometry_shader4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_geometry_shader4])
  {
    s_deviceConfig.m_glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC) glewGetProcAddress ("glProgramParameteriEXT");
  }

  // GL_EXT_gpu_program_parameters
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_gpu_program_parameters])
  {
    s_deviceConfig.m_glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC) glewGetProcAddress ("glProgramEnvParameters4fvEXT");
    s_deviceConfig.m_glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC) glewGetProcAddress ("glProgramLocalParameters4fvEXT");
  }

  // GL_EXT_gpu_shader4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_gpu_shader4])
  {
    s_deviceConfig.m_glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC) glewGetProcAddress ("glGetUniformuivEXT");
    s_deviceConfig.m_glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC) glewGetProcAddress ("glBindFragDataLocationEXT");
    s_deviceConfig.m_glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC) glewGetProcAddress ("glGetFragDataLocationEXT");
    s_deviceConfig.m_glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC) glewGetProcAddress ("glUniform1uiEXT");
    s_deviceConfig.m_glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC) glewGetProcAddress ("glUniform2uiEXT");
    s_deviceConfig.m_glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC) glewGetProcAddress ("glUniform3uiEXT");
    s_deviceConfig.m_glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC) glewGetProcAddress ("glUniform4uiEXT");
    s_deviceConfig.m_glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC) glewGetProcAddress ("glUniform1uivEXT");
    s_deviceConfig.m_glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC) glewGetProcAddress ("glUniform2uivEXT");
    s_deviceConfig.m_glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC) glewGetProcAddress ("glUniform3uivEXT");
    s_deviceConfig.m_glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC) glewGetProcAddress ("glUniform4uivEXT");
    s_deviceConfig.m_glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC) glewGetProcAddress ("glVertexAttribI1iEXT");
    s_deviceConfig.m_glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC) glewGetProcAddress ("glVertexAttribI2iEXT");
    s_deviceConfig.m_glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC) glewGetProcAddress ("glVertexAttribI3iEXT");
    s_deviceConfig.m_glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC) glewGetProcAddress ("glVertexAttribI4iEXT");
    s_deviceConfig.m_glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC) glewGetProcAddress ("glVertexAttribI1uiEXT");
    s_deviceConfig.m_glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC) glewGetProcAddress ("glVertexAttribI2uiEXT");
    s_deviceConfig.m_glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC) glewGetProcAddress ("glVertexAttribI3uiEXT");
    s_deviceConfig.m_glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC) glewGetProcAddress ("glVertexAttribI4uiEXT");
    s_deviceConfig.m_glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC) glewGetProcAddress ("glVertexAttribI1ivEXT");
    s_deviceConfig.m_glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC) glewGetProcAddress ("glVertexAttribI2ivEXT");
    s_deviceConfig.m_glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC) glewGetProcAddress ("glVertexAttribI3ivEXT");
    s_deviceConfig.m_glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC) glewGetProcAddress ("glVertexAttribI4ivEXT");
    s_deviceConfig.m_glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC) glewGetProcAddress ("glVertexAttribI1uivEXT");
    s_deviceConfig.m_glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC) glewGetProcAddress ("glVertexAttribI2uivEXT");
    s_deviceConfig.m_glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC) glewGetProcAddress ("glVertexAttribI3uivEXT");
    s_deviceConfig.m_glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC) glewGetProcAddress ("glVertexAttribI4uivEXT");
    s_deviceConfig.m_glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC) glewGetProcAddress ("glVertexAttribI4bvEXT");
    s_deviceConfig.m_glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC) glewGetProcAddress ("glVertexAttribI4svEXT");
    s_deviceConfig.m_glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC) glewGetProcAddress ("glVertexAttribI4ubvEXT");
    s_deviceConfig.m_glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC) glewGetProcAddress ("glVertexAttribI4usvEXT");
    s_deviceConfig.m_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC) glewGetProcAddress ("glVertexAttribIPointerEXT");
    s_deviceConfig.m_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC) glewGetProcAddress ("glGetVertexAttribIivEXT");
    s_deviceConfig.m_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC) glewGetProcAddress ("glGetVertexAttribIuivEXT");
  }

  // GL_EXT_histogram
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_histogram])
  {
    s_deviceConfig.m_glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC) glewGetProcAddress ("glGetHistogramEXT");
    s_deviceConfig.m_glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC) glewGetProcAddress ("glGetHistogramParameterfvEXT");
    s_deviceConfig.m_glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC) glewGetProcAddress ("glGetHistogramParameterivEXT");
    s_deviceConfig.m_glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC) glewGetProcAddress ("glGetMinmaxEXT");
    s_deviceConfig.m_glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC) glewGetProcAddress ("glGetMinmaxParameterfvEXT");
    s_deviceConfig.m_glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC) glewGetProcAddress ("glGetMinmaxParameterivEXT");
    s_deviceConfig.m_glHistogramEXT = (PFNGLHISTOGRAMEXTPROC) glewGetProcAddress ("glHistogramEXT");
    s_deviceConfig.m_glMinmaxEXT = (PFNGLMINMAXEXTPROC) glewGetProcAddress ("glMinmaxEXT");
    s_deviceConfig.m_glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC) glewGetProcAddress ("glResetHistogramEXT");
    s_deviceConfig.m_glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC) glewGetProcAddress ("glResetMinmaxEXT");
  }

  // GL_EXT_index_func
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_index_func])
  {
    s_deviceConfig.m_glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC) glewGetProcAddress ("glIndexFuncEXT");
  }

  // GL_EXT_index_material
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_index_material])
  {
    s_deviceConfig.m_glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC) glewGetProcAddress ("glIndexMaterialEXT");
  }

  // GL_EXT_light_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_light_texture])
  {
    s_deviceConfig.m_glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC) glewGetProcAddress ("glApplyTextureEXT");
    s_deviceConfig.m_glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC) glewGetProcAddress ("glTextureLightEXT");
    s_deviceConfig.m_glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC) glewGetProcAddress ("glTextureMaterialEXT");
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
    s_deviceConfig.m_glTexStorageMem1DEXT = (PFNGLTEXSTORAGEMEM1DEXTPROC) glewGetProcAddress ("glTexStorageMem1DEXT");
    s_deviceConfig.m_glTextureStorageMem1DEXT = (PFNGLTEXTURESTORAGEMEM1DEXTPROC) glewGetProcAddress ("glTextureStorageMem1DEXT");
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

  // GL_EXT_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_multisample])
  {
    s_deviceConfig.m_glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC) glewGetProcAddress ("glSampleMaskEXT");
    s_deviceConfig.m_glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC) glewGetProcAddress ("glSamplePatternEXT");
  }

  // GL_EXT_paletted_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_paletted_texture])
  {
    s_deviceConfig.m_glColorTableEXT = (PFNGLCOLORTABLEEXTPROC) glewGetProcAddress ("glColorTableEXT");
    s_deviceConfig.m_glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC) glewGetProcAddress ("glGetColorTableEXT");
    s_deviceConfig.m_glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC) glewGetProcAddress ("glGetColorTableParameterivEXT");
    s_deviceConfig.m_glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC) glewGetProcAddress ("glGetColorTableParameterfvEXT");
  }

  // GL_EXT_pixel_transform
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_pixel_transform])
  {
    s_deviceConfig.m_glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC) glewGetProcAddress ("glPixelTransformParameteriEXT");
    s_deviceConfig.m_glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC) glewGetProcAddress ("glPixelTransformParameterfEXT");
    s_deviceConfig.m_glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC) glewGetProcAddress ("glPixelTransformParameterivEXT");
    s_deviceConfig.m_glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC) glewGetProcAddress ("glPixelTransformParameterfvEXT");
    s_deviceConfig.m_glGetPixelTransformParameterivEXT = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC) glewGetProcAddress ("glGetPixelTransformParameterivEXT");
    s_deviceConfig.m_glGetPixelTransformParameterfvEXT = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC) glewGetProcAddress ("glGetPixelTransformParameterfvEXT");
  }

  // GL_EXT_point_parameters
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_point_parameters])
  {
    s_deviceConfig.m_glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC) glewGetProcAddress ("glPointParameterfEXT");
    s_deviceConfig.m_glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC) glewGetProcAddress ("glPointParameterfvEXT");
  }

  // GL_EXT_polygon_offset
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset])
  {
    s_deviceConfig.m_glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC) glewGetProcAddress ("glPolygonOffsetEXT");
  }

  // GL_EXT_polygon_offset_clamp
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_polygon_offset_clamp])
  {
    s_deviceConfig.m_glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) glewGetProcAddress ("glPolygonOffsetClampEXT");
  }

  // GL_EXT_provoking_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_provoking_vertex])
  {
    s_deviceConfig.m_glProvokingVertexEXT = (PFNGLPROVOKINGVERTEXEXTPROC) glewGetProcAddress ("glProvokingVertexEXT");
  }

  // GL_EXT_raster_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_raster_multisample])
  {
    s_deviceConfig.m_glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) glewGetProcAddress ("glRasterSamplesEXT");
  }

  // GL_EXT_semaphore
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_semaphore])
  {
    s_deviceConfig.m_glGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) glewGetProcAddress ("glGetUnsignedBytevEXT");
    s_deviceConfig.m_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) glewGetProcAddress ("glGetUnsignedBytei_vEXT");
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

  // GL_EXT_secondary_color
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_secondary_color])
  {
    s_deviceConfig.m_glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC) glewGetProcAddress ("glSecondaryColor3bEXT");
    s_deviceConfig.m_glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC) glewGetProcAddress ("glSecondaryColor3bvEXT");
    s_deviceConfig.m_glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC) glewGetProcAddress ("glSecondaryColor3dEXT");
    s_deviceConfig.m_glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC) glewGetProcAddress ("glSecondaryColor3dvEXT");
    s_deviceConfig.m_glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC) glewGetProcAddress ("glSecondaryColor3fEXT");
    s_deviceConfig.m_glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC) glewGetProcAddress ("glSecondaryColor3fvEXT");
    s_deviceConfig.m_glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC) glewGetProcAddress ("glSecondaryColor3iEXT");
    s_deviceConfig.m_glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC) glewGetProcAddress ("glSecondaryColor3ivEXT");
    s_deviceConfig.m_glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC) glewGetProcAddress ("glSecondaryColor3sEXT");
    s_deviceConfig.m_glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC) glewGetProcAddress ("glSecondaryColor3svEXT");
    s_deviceConfig.m_glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC) glewGetProcAddress ("glSecondaryColor3ubEXT");
    s_deviceConfig.m_glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC) glewGetProcAddress ("glSecondaryColor3ubvEXT");
    s_deviceConfig.m_glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC) glewGetProcAddress ("glSecondaryColor3uiEXT");
    s_deviceConfig.m_glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC) glewGetProcAddress ("glSecondaryColor3uivEXT");
    s_deviceConfig.m_glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC) glewGetProcAddress ("glSecondaryColor3usEXT");
    s_deviceConfig.m_glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC) glewGetProcAddress ("glSecondaryColor3usvEXT");
    s_deviceConfig.m_glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC) glewGetProcAddress ("glSecondaryColorPointerEXT");
  }

  // GL_EXT_separate_shader_objects
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_separate_shader_objects])
  {
    s_deviceConfig.m_glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC) glewGetProcAddress ("glUseShaderProgramEXT");
    s_deviceConfig.m_glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC) glewGetProcAddress ("glActiveProgramEXT");
    s_deviceConfig.m_glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC) glewGetProcAddress ("glCreateShaderProgramEXT");
  }

  // GL_EXT_shader_framebuffer_fetch_non_coherent
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_framebuffer_fetch_non_coherent])
  {
    s_deviceConfig.m_glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) glewGetProcAddress ("glFramebufferFetchBarrierEXT");
  }

  // GL_EXT_shader_image_load_store
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_shader_image_load_store])
  {
    s_deviceConfig.m_glBindImageTextureEXT = (PFNGLBINDIMAGETEXTUREEXTPROC) glewGetProcAddress ("glBindImageTextureEXT");
    s_deviceConfig.m_glMemoryBarrierEXT = (PFNGLMEMORYBARRIEREXTPROC) glewGetProcAddress ("glMemoryBarrierEXT");
  }

  // GL_EXT_stencil_clear_tag
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_stencil_clear_tag])
  {
    s_deviceConfig.m_glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC) glewGetProcAddress ("glStencilClearTagEXT");
  }

  // GL_EXT_stencil_two_side
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_stencil_two_side])
  {
    s_deviceConfig.m_glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC) glewGetProcAddress ("glActiveStencilFaceEXT");
  }

  // GL_EXT_subtexture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_subtexture])
  {
    s_deviceConfig.m_glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC) glewGetProcAddress ("glTexSubImage1DEXT");
    s_deviceConfig.m_glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC) glewGetProcAddress ("glTexSubImage2DEXT");
  }

  // GL_EXT_texture3D
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture3D])
  {
    s_deviceConfig.m_glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC) glewGetProcAddress ("glTexImage3DEXT");
    s_deviceConfig.m_glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC) glewGetProcAddress ("glTexSubImage3DEXT");
  }

  // GL_EXT_texture_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_array])
  {
    s_deviceConfig.m_glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) glewGetProcAddress ("glFramebufferTextureLayerEXT");
  }

  // GL_EXT_texture_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_buffer_object])
  {
    s_deviceConfig.m_glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC) glewGetProcAddress ("glTexBufferEXT");
  }

  // GL_EXT_texture_integer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_integer])
  {
    s_deviceConfig.m_glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC) glewGetProcAddress ("glTexParameterIivEXT");
    s_deviceConfig.m_glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC) glewGetProcAddress ("glTexParameterIuivEXT");
    s_deviceConfig.m_glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC) glewGetProcAddress ("glGetTexParameterIivEXT");
    s_deviceConfig.m_glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC) glewGetProcAddress ("glGetTexParameterIuivEXT");
    s_deviceConfig.m_glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC) glewGetProcAddress ("glClearColorIiEXT");
    s_deviceConfig.m_glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC) glewGetProcAddress ("glClearColorIuiEXT");
  }

  // GL_EXT_texture_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_object])
  {
    s_deviceConfig.m_glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC) glewGetProcAddress ("glAreTexturesResidentEXT");
    s_deviceConfig.m_glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC) glewGetProcAddress ("glBindTextureEXT");
    s_deviceConfig.m_glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC) glewGetProcAddress ("glDeleteTexturesEXT");
    s_deviceConfig.m_glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC) glewGetProcAddress ("glGenTexturesEXT");
    s_deviceConfig.m_glIsTextureEXT = (PFNGLISTEXTUREEXTPROC) glewGetProcAddress ("glIsTextureEXT");
    s_deviceConfig.m_glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC) glewGetProcAddress ("glPrioritizeTexturesEXT");
  }

  // GL_EXT_texture_perturb_normal
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_texture_perturb_normal])
  {
    s_deviceConfig.m_glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC) glewGetProcAddress ("glTextureNormalEXT");
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

  // GL_NV_timeline_semaphore
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_timeline_semaphore])
  {
    s_deviceConfig.m_glCreateSemaphoresNV = (PFNGLCREATESEMAPHORESNVPROC) glewGetProcAddress ("glCreateSemaphoresNV");
    s_deviceConfig.m_glSemaphoreParameterivNV = (PFNGLSEMAPHOREPARAMETERIVNVPROC) glewGetProcAddress ("glSemaphoreParameterivNV");
    s_deviceConfig.m_glGetSemaphoreParameterivNV = (PFNGLGETSEMAPHOREPARAMETERIVNVPROC) glewGetProcAddress ("glGetSemaphoreParameterivNV");
  }

  // GL_EXT_timer_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_timer_query])
  {
    s_deviceConfig.m_glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC) glewGetProcAddress ("glGetQueryObjecti64vEXT");
    s_deviceConfig.m_glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC) glewGetProcAddress ("glGetQueryObjectui64vEXT");
  }

  // GL_EXT_transform_feedback
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_transform_feedback])
  {
    s_deviceConfig.m_glBeginTransformFeedbackEXT = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC) glewGetProcAddress ("glBeginTransformFeedbackEXT");
    s_deviceConfig.m_glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC) glewGetProcAddress ("glEndTransformFeedbackEXT");
    s_deviceConfig.m_glBindBufferRangeEXT = (PFNGLBINDBUFFERRANGEEXTPROC) glewGetProcAddress ("glBindBufferRangeEXT");
    s_deviceConfig.m_glBindBufferOffsetEXT = (PFNGLBINDBUFFEROFFSETEXTPROC) glewGetProcAddress ("glBindBufferOffsetEXT");
    s_deviceConfig.m_glBindBufferBaseEXT = (PFNGLBINDBUFFERBASEEXTPROC) glewGetProcAddress ("glBindBufferBaseEXT");
    s_deviceConfig.m_glTransformFeedbackVaryingsEXT = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC) glewGetProcAddress ("glTransformFeedbackVaryingsEXT");
    s_deviceConfig.m_glGetTransformFeedbackVaryingEXT = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC) glewGetProcAddress ("glGetTransformFeedbackVaryingEXT");
  }

  // GL_EXT_vertex_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_array])
  {
    s_deviceConfig.m_glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC) glewGetProcAddress ("glArrayElementEXT");
    s_deviceConfig.m_glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC) glewGetProcAddress ("glColorPointerEXT");
    s_deviceConfig.m_glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC) glewGetProcAddress ("glDrawArraysEXT");
    s_deviceConfig.m_glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC) glewGetProcAddress ("glEdgeFlagPointerEXT");
    s_deviceConfig.m_glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC) glewGetProcAddress ("glGetPointervEXT");
    s_deviceConfig.m_glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC) glewGetProcAddress ("glIndexPointerEXT");
    s_deviceConfig.m_glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC) glewGetProcAddress ("glNormalPointerEXT");
    s_deviceConfig.m_glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC) glewGetProcAddress ("glTexCoordPointerEXT");
    s_deviceConfig.m_glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC) glewGetProcAddress ("glVertexPointerEXT");
  }

  // GL_EXT_vertex_attrib_64bit
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_attrib_64bit])
  {
    s_deviceConfig.m_glVertexAttribL1dEXT = (PFNGLVERTEXATTRIBL1DEXTPROC) glewGetProcAddress ("glVertexAttribL1dEXT");
    s_deviceConfig.m_glVertexAttribL2dEXT = (PFNGLVERTEXATTRIBL2DEXTPROC) glewGetProcAddress ("glVertexAttribL2dEXT");
    s_deviceConfig.m_glVertexAttribL3dEXT = (PFNGLVERTEXATTRIBL3DEXTPROC) glewGetProcAddress ("glVertexAttribL3dEXT");
    s_deviceConfig.m_glVertexAttribL4dEXT = (PFNGLVERTEXATTRIBL4DEXTPROC) glewGetProcAddress ("glVertexAttribL4dEXT");
    s_deviceConfig.m_glVertexAttribL1dvEXT = (PFNGLVERTEXATTRIBL1DVEXTPROC) glewGetProcAddress ("glVertexAttribL1dvEXT");
    s_deviceConfig.m_glVertexAttribL2dvEXT = (PFNGLVERTEXATTRIBL2DVEXTPROC) glewGetProcAddress ("glVertexAttribL2dvEXT");
    s_deviceConfig.m_glVertexAttribL3dvEXT = (PFNGLVERTEXATTRIBL3DVEXTPROC) glewGetProcAddress ("glVertexAttribL3dvEXT");
    s_deviceConfig.m_glVertexAttribL4dvEXT = (PFNGLVERTEXATTRIBL4DVEXTPROC) glewGetProcAddress ("glVertexAttribL4dvEXT");
    s_deviceConfig.m_glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC) glewGetProcAddress ("glVertexAttribLPointerEXT");
    s_deviceConfig.m_glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC) glewGetProcAddress ("glGetVertexAttribLdvEXT");
  }

  // GL_EXT_vertex_shader
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_shader])
  {
    s_deviceConfig.m_glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC) glewGetProcAddress ("glBeginVertexShaderEXT");
    s_deviceConfig.m_glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC) glewGetProcAddress ("glEndVertexShaderEXT");
    s_deviceConfig.m_glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC) glewGetProcAddress ("glBindVertexShaderEXT");
    s_deviceConfig.m_glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC) glewGetProcAddress ("glGenVertexShadersEXT");
    s_deviceConfig.m_glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC) glewGetProcAddress ("glDeleteVertexShaderEXT");
    s_deviceConfig.m_glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC) glewGetProcAddress ("glShaderOp1EXT");
    s_deviceConfig.m_glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC) glewGetProcAddress ("glShaderOp2EXT");
    s_deviceConfig.m_glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC) glewGetProcAddress ("glShaderOp3EXT");
    s_deviceConfig.m_glSwizzleEXT = (PFNGLSWIZZLEEXTPROC) glewGetProcAddress ("glSwizzleEXT");
    s_deviceConfig.m_glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC) glewGetProcAddress ("glWriteMaskEXT");
    s_deviceConfig.m_glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC) glewGetProcAddress ("glInsertComponentEXT");
    s_deviceConfig.m_glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC) glewGetProcAddress ("glExtractComponentEXT");
    s_deviceConfig.m_glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC) glewGetProcAddress ("glGenSymbolsEXT");
    s_deviceConfig.m_glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC) glewGetProcAddress ("glSetInvariantEXT");
    s_deviceConfig.m_glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC) glewGetProcAddress ("glSetLocalConstantEXT");
    s_deviceConfig.m_glVariantbvEXT = (PFNGLVARIANTBVEXTPROC) glewGetProcAddress ("glVariantbvEXT");
    s_deviceConfig.m_glVariantsvEXT = (PFNGLVARIANTSVEXTPROC) glewGetProcAddress ("glVariantsvEXT");
    s_deviceConfig.m_glVariantivEXT = (PFNGLVARIANTIVEXTPROC) glewGetProcAddress ("glVariantivEXT");
    s_deviceConfig.m_glVariantfvEXT = (PFNGLVARIANTFVEXTPROC) glewGetProcAddress ("glVariantfvEXT");
    s_deviceConfig.m_glVariantdvEXT = (PFNGLVARIANTDVEXTPROC) glewGetProcAddress ("glVariantdvEXT");
    s_deviceConfig.m_glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC) glewGetProcAddress ("glVariantubvEXT");
    s_deviceConfig.m_glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC) glewGetProcAddress ("glVariantusvEXT");
    s_deviceConfig.m_glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC) glewGetProcAddress ("glVariantuivEXT");
    s_deviceConfig.m_glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC) glewGetProcAddress ("glVariantPointerEXT");
    s_deviceConfig.m_glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC) glewGetProcAddress ("glEnableVariantClientStateEXT");
    s_deviceConfig.m_glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC) glewGetProcAddress ("glDisableVariantClientStateEXT");
    s_deviceConfig.m_glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC) glewGetProcAddress ("glBindLightParameterEXT");
    s_deviceConfig.m_glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC) glewGetProcAddress ("glBindMaterialParameterEXT");
    s_deviceConfig.m_glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC) glewGetProcAddress ("glBindTexGenParameterEXT");
    s_deviceConfig.m_glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC) glewGetProcAddress ("glBindTextureUnitParameterEXT");
    s_deviceConfig.m_glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC) glewGetProcAddress ("glBindParameterEXT");
    s_deviceConfig.m_glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC) glewGetProcAddress ("glIsVariantEnabledEXT");
    s_deviceConfig.m_glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC) glewGetProcAddress ("glGetVariantBooleanvEXT");
    s_deviceConfig.m_glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC) glewGetProcAddress ("glGetVariantIntegervEXT");
    s_deviceConfig.m_glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC) glewGetProcAddress ("glGetVariantFloatvEXT");
    s_deviceConfig.m_glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC) glewGetProcAddress ("glGetVariantPointervEXT");
    s_deviceConfig.m_glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC) glewGetProcAddress ("glGetInvariantBooleanvEXT");
    s_deviceConfig.m_glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC) glewGetProcAddress ("glGetInvariantIntegervEXT");
    s_deviceConfig.m_glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC) glewGetProcAddress ("glGetInvariantFloatvEXT");
    s_deviceConfig.m_glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC) glewGetProcAddress ("glGetLocalConstantBooleanvEXT");
    s_deviceConfig.m_glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC) glewGetProcAddress ("glGetLocalConstantIntegervEXT");
    s_deviceConfig.m_glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC) glewGetProcAddress ("glGetLocalConstantFloatvEXT");
  }

  // GL_EXT_vertex_weighting
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_vertex_weighting])
  {
    s_deviceConfig.m_glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC) glewGetProcAddress ("glVertexWeightfEXT");
    s_deviceConfig.m_glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC) glewGetProcAddress ("glVertexWeightfvEXT");
    s_deviceConfig.m_glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC) glewGetProcAddress ("glVertexWeightPointerEXT");
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

  // GL_EXT_x11_sync_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_EXT_x11_sync_object])
  {
    s_deviceConfig.m_glImportSyncEXT = (PFNGLIMPORTSYNCEXTPROC) glewGetProcAddress ("glImportSyncEXT");
  }

  // GL_GREMEDY_frame_terminator
  if (s_deviceConfig.m_featureSupported [GLEW_GL_GREMEDY_frame_terminator])
  {
    s_deviceConfig.m_glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC) glewGetProcAddress ("glFrameTerminatorGREMEDY");
  }

  // GL_GREMEDY_string_marker
  if (s_deviceConfig.m_featureSupported [GLEW_GL_GREMEDY_string_marker])
  {
    s_deviceConfig.m_glStringMarkerGREMEDY = (PFNGLSTRINGMARKERGREMEDYPROC) glewGetProcAddress ("glStringMarkerGREMEDY");
  }

  // GL_HP_image_transform
  if (s_deviceConfig.m_featureSupported [GLEW_GL_HP_image_transform])
  {
    s_deviceConfig.m_glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC) glewGetProcAddress ("glImageTransformParameteriHP");
    s_deviceConfig.m_glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC) glewGetProcAddress ("glImageTransformParameterfHP");
    s_deviceConfig.m_glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC) glewGetProcAddress ("glImageTransformParameterivHP");
    s_deviceConfig.m_glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC) glewGetProcAddress ("glImageTransformParameterfvHP");
    s_deviceConfig.m_glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC) glewGetProcAddress ("glGetImageTransformParameterivHP");
    s_deviceConfig.m_glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC) glewGetProcAddress ("glGetImageTransformParameterfvHP");
  }

  // GL_IBM_multimode_draw_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_IBM_multimode_draw_arrays])
  {
    s_deviceConfig.m_glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC) glewGetProcAddress ("glMultiModeDrawArraysIBM");
    s_deviceConfig.m_glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC) glewGetProcAddress ("glMultiModeDrawElementsIBM");
  }

  // GL_IBM_static_data
  if (s_deviceConfig.m_featureSupported [GLEW_GL_IBM_static_data])
  {
    s_deviceConfig.m_glFlushStaticDataIBM = (PFNGLFLUSHSTATICDATAIBMPROC) glewGetProcAddress ("glFlushStaticDataIBM");
  }

  // GL_IBM_vertex_array_lists
  if (s_deviceConfig.m_featureSupported [GLEW_GL_IBM_vertex_array_lists])
  {
    s_deviceConfig.m_glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC) glewGetProcAddress ("glColorPointerListIBM");
    s_deviceConfig.m_glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC) glewGetProcAddress ("glSecondaryColorPointerListIBM");
    s_deviceConfig.m_glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC) glewGetProcAddress ("glEdgeFlagPointerListIBM");
    s_deviceConfig.m_glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC) glewGetProcAddress ("glFogCoordPointerListIBM");
    s_deviceConfig.m_glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC) glewGetProcAddress ("glIndexPointerListIBM");
    s_deviceConfig.m_glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC) glewGetProcAddress ("glNormalPointerListIBM");
    s_deviceConfig.m_glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC) glewGetProcAddress ("glTexCoordPointerListIBM");
    s_deviceConfig.m_glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC) glewGetProcAddress ("glVertexPointerListIBM");
  }

  // GL_INGR_blend_func_separate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_INGR_blend_func_separate])
  {
    s_deviceConfig.m_glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC) glewGetProcAddress ("glBlendFuncSeparateINGR");
  }

  // GL_INTEL_framebuffer_CMAA
  if (s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_framebuffer_CMAA])
  {
    s_deviceConfig.m_glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) glewGetProcAddress ("glApplyFramebufferAttachmentCMAAINTEL");
  }

  // GL_INTEL_map_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_map_texture])
  {
    s_deviceConfig.m_glSyncTextureINTEL = (PFNGLSYNCTEXTUREINTELPROC) glewGetProcAddress ("glSyncTextureINTEL");
    s_deviceConfig.m_glUnmapTexture2DINTEL = (PFNGLUNMAPTEXTURE2DINTELPROC) glewGetProcAddress ("glUnmapTexture2DINTEL");
    s_deviceConfig.m_glMapTexture2DINTEL = (PFNGLMAPTEXTURE2DINTELPROC) glewGetProcAddress ("glMapTexture2DINTEL");
  }

  // GL_INTEL_parallel_arrays
  if (s_deviceConfig.m_featureSupported [GLEW_GL_INTEL_parallel_arrays])
  {
    s_deviceConfig.m_glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC) glewGetProcAddress ("glVertexPointervINTEL");
    s_deviceConfig.m_glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC) glewGetProcAddress ("glNormalPointervINTEL");
    s_deviceConfig.m_glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC) glewGetProcAddress ("glColorPointervINTEL");
    s_deviceConfig.m_glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC) glewGetProcAddress ("glTexCoordPointervINTEL");
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
  }

  // GL_KHR_robustness
  if (s_deviceConfig.m_featureSupported [GLEW_GL_KHR_robustness])
  {
    s_deviceConfig.m_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) glewGetProcAddress ("glGetGraphicsResetStatus");
    s_deviceConfig.m_glReadnPixels = (PFNGLREADNPIXELSPROC) glewGetProcAddress ("glReadnPixels");
    s_deviceConfig.m_glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) glewGetProcAddress ("glGetnUniformfv");
    s_deviceConfig.m_glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) glewGetProcAddress ("glGetnUniformiv");
    s_deviceConfig.m_glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) glewGetProcAddress ("glGetnUniformuiv");
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

  // GL_MESA_map_buffer_client_pointer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_MESA_map_buffer_client_pointer])
  {
    s_deviceConfig.m_glAddClientPointerRangeMESA = (PFNGLADDCLIENTPOINTERRANGEMESAPROC) glewGetProcAddress ("glAddClientPointerRangeMESA");
    s_deviceConfig.m_glReleaseClientPointerRangeMESA = (PFNGLRELEASECLIENTPOINTERRANGEMESAPROC) glewGetProcAddress ("glReleaseClientPointerRangeMESA");
  }

  // GL_MESA_resize_buffers
  if (s_deviceConfig.m_featureSupported [GLEW_GL_MESA_resize_buffers])
  {
    s_deviceConfig.m_glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC) glewGetProcAddress ("glResizeBuffersMESA");
  }

  // GL_MESA_window_pos
  if (s_deviceConfig.m_featureSupported [GLEW_GL_MESA_window_pos])
  {
    s_deviceConfig.m_glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC) glewGetProcAddress ("glWindowPos2dMESA");
    s_deviceConfig.m_glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC) glewGetProcAddress ("glWindowPos2dvMESA");
    s_deviceConfig.m_glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC) glewGetProcAddress ("glWindowPos2fMESA");
    s_deviceConfig.m_glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC) glewGetProcAddress ("glWindowPos2fvMESA");
    s_deviceConfig.m_glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC) glewGetProcAddress ("glWindowPos2iMESA");
    s_deviceConfig.m_glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC) glewGetProcAddress ("glWindowPos2ivMESA");
    s_deviceConfig.m_glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC) glewGetProcAddress ("glWindowPos2sMESA");
    s_deviceConfig.m_glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC) glewGetProcAddress ("glWindowPos2svMESA");
    s_deviceConfig.m_glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC) glewGetProcAddress ("glWindowPos3dMESA");
    s_deviceConfig.m_glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC) glewGetProcAddress ("glWindowPos3dvMESA");
    s_deviceConfig.m_glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC) glewGetProcAddress ("glWindowPos3fMESA");
    s_deviceConfig.m_glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC) glewGetProcAddress ("glWindowPos3fvMESA");
    s_deviceConfig.m_glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC) glewGetProcAddress ("glWindowPos3iMESA");
    s_deviceConfig.m_glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC) glewGetProcAddress ("glWindowPos3ivMESA");
    s_deviceConfig.m_glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC) glewGetProcAddress ("glWindowPos3sMESA");
    s_deviceConfig.m_glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC) glewGetProcAddress ("glWindowPos3svMESA");
    s_deviceConfig.m_glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC) glewGetProcAddress ("glWindowPos4dMESA");
    s_deviceConfig.m_glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC) glewGetProcAddress ("glWindowPos4dvMESA");
    s_deviceConfig.m_glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC) glewGetProcAddress ("glWindowPos4fMESA");
    s_deviceConfig.m_glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC) glewGetProcAddress ("glWindowPos4fvMESA");
    s_deviceConfig.m_glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC) glewGetProcAddress ("glWindowPos4iMESA");
    s_deviceConfig.m_glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC) glewGetProcAddress ("glWindowPos4ivMESA");
    s_deviceConfig.m_glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC) glewGetProcAddress ("glWindowPos4sMESA");
    s_deviceConfig.m_glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC) glewGetProcAddress ("glWindowPos4svMESA");
  }

  // GL_NVX_conditional_render
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NVX_conditional_render])
  {
    s_deviceConfig.m_glBeginConditionalRenderNVX = (PFNGLBEGINCONDITIONALRENDERNVXPROC) glewGetProcAddress ("glBeginConditionalRenderNVX");
    s_deviceConfig.m_glEndConditionalRenderNVX = (PFNGLENDCONDITIONALRENDERNVXPROC) glewGetProcAddress ("glEndConditionalRenderNVX");
  }

  // GL_NVX_linked_gpu_multicast
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NVX_linked_gpu_multicast])
  {
    s_deviceConfig.m_glLGPUNamedBufferSubDataNVX = (PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC) glewGetProcAddress ("glLGPUNamedBufferSubDataNVX");
    s_deviceConfig.m_glLGPUCopyImageSubDataNVX = (PFNGLLGPUCOPYIMAGESUBDATANVXPROC) glewGetProcAddress ("glLGPUCopyImageSubDataNVX");
    s_deviceConfig.m_glLGPUInterlockNVX = (PFNGLLGPUINTERLOCKNVXPROC) glewGetProcAddress ("glLGPUInterlockNVX");
  }

  // GL_NV_alpha_to_coverage_dither_control
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_alpha_to_coverage_dither_control])
  {
    s_deviceConfig.m_glAlphaToCoverageDitherControlNV = (PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC) glewGetProcAddress ("glAlphaToCoverageDitherControlNV");
  }

  // GL_NV_bindless_multi_draw_indirect
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_multi_draw_indirect])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirectBindlessNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) glewGetProcAddress ("glMultiDrawArraysIndirectBindlessNV");
    s_deviceConfig.m_glMultiDrawElementsIndirectBindlessNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) glewGetProcAddress ("glMultiDrawElementsIndirectBindlessNV");
  }

  // GL_NV_bindless_multi_draw_indirect_count
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_bindless_multi_draw_indirect_count])
  {
    s_deviceConfig.m_glMultiDrawArraysIndirectBindlessCountNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) glewGetProcAddress ("glMultiDrawArraysIndirectBindlessCountNV");
    s_deviceConfig.m_glMultiDrawElementsIndirectBindlessCountNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) glewGetProcAddress ("glMultiDrawElementsIndirectBindlessCountNV");
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

  // GL_NV_command_list
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_command_list])
  {
    s_deviceConfig.m_glCreateStatesNV = (PFNGLCREATESTATESNVPROC) glewGetProcAddress ("glCreateStatesNV");
    s_deviceConfig.m_glDeleteStatesNV = (PFNGLDELETESTATESNVPROC) glewGetProcAddress ("glDeleteStatesNV");
    s_deviceConfig.m_glIsStateNV = (PFNGLISSTATENVPROC) glewGetProcAddress ("glIsStateNV");
    s_deviceConfig.m_glStateCaptureNV = (PFNGLSTATECAPTURENVPROC) glewGetProcAddress ("glStateCaptureNV");
    s_deviceConfig.m_glGetCommandHeaderNV = (PFNGLGETCOMMANDHEADERNVPROC) glewGetProcAddress ("glGetCommandHeaderNV");
    s_deviceConfig.m_glGetStageIndexNV = (PFNGLGETSTAGEINDEXNVPROC) glewGetProcAddress ("glGetStageIndexNV");
    s_deviceConfig.m_glDrawCommandsNV = (PFNGLDRAWCOMMANDSNVPROC) glewGetProcAddress ("glDrawCommandsNV");
    s_deviceConfig.m_glDrawCommandsAddressNV = (PFNGLDRAWCOMMANDSADDRESSNVPROC) glewGetProcAddress ("glDrawCommandsAddressNV");
    s_deviceConfig.m_glDrawCommandsStatesNV = (PFNGLDRAWCOMMANDSSTATESNVPROC) glewGetProcAddress ("glDrawCommandsStatesNV");
    s_deviceConfig.m_glDrawCommandsStatesAddressNV = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) glewGetProcAddress ("glDrawCommandsStatesAddressNV");
    s_deviceConfig.m_glCreateCommandListsNV = (PFNGLCREATECOMMANDLISTSNVPROC) glewGetProcAddress ("glCreateCommandListsNV");
    s_deviceConfig.m_glDeleteCommandListsNV = (PFNGLDELETECOMMANDLISTSNVPROC) glewGetProcAddress ("glDeleteCommandListsNV");
    s_deviceConfig.m_glIsCommandListNV = (PFNGLISCOMMANDLISTNVPROC) glewGetProcAddress ("glIsCommandListNV");
    s_deviceConfig.m_glListDrawCommandsStatesClientNV = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) glewGetProcAddress ("glListDrawCommandsStatesClientNV");
    s_deviceConfig.m_glCommandListSegmentsNV = (PFNGLCOMMANDLISTSEGMENTSNVPROC) glewGetProcAddress ("glCommandListSegmentsNV");
    s_deviceConfig.m_glCompileCommandListNV = (PFNGLCOMPILECOMMANDLISTNVPROC) glewGetProcAddress ("glCompileCommandListNV");
    s_deviceConfig.m_glCallCommandListNV = (PFNGLCALLCOMMANDLISTNVPROC) glewGetProcAddress ("glCallCommandListNV");
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

  // GL_NV_conservative_raster_dilate
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_dilate])
  {
    s_deviceConfig.m_glConservativeRasterParameterfNV = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) glewGetProcAddress ("glConservativeRasterParameterfNV");
  }

  // GL_NV_conservative_raster_pre_snap_triangles
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_conservative_raster_pre_snap_triangles])
  {
    s_deviceConfig.m_glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) glewGetProcAddress ("glConservativeRasterParameteriNV");
  }

  // GL_NV_copy_image
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_copy_image])
  {
    s_deviceConfig.m_glCopyImageSubDataNV = (PFNGLCOPYIMAGESUBDATANVPROC) glewGetProcAddress ("glCopyImageSubDataNV");
  }

  // GL_NV_depth_buffer_float
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_depth_buffer_float])
  {
    s_deviceConfig.m_glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC) glewGetProcAddress ("glDepthRangedNV");
    s_deviceConfig.m_glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC) glewGetProcAddress ("glClearDepthdNV");
    s_deviceConfig.m_glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC) glewGetProcAddress ("glDepthBoundsdNV");
  }

  // GL_NV_draw_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_draw_texture])
  {
    s_deviceConfig.m_glDrawTextureNV = (PFNGLDRAWTEXTURENVPROC) glewGetProcAddress ("glDrawTextureNV");
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

  // GL_NV_evaluators
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_evaluators])
  {
    s_deviceConfig.m_glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC) glewGetProcAddress ("glMapControlPointsNV");
    s_deviceConfig.m_glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC) glewGetProcAddress ("glMapParameterivNV");
    s_deviceConfig.m_glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC) glewGetProcAddress ("glMapParameterfvNV");
    s_deviceConfig.m_glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC) glewGetProcAddress ("glGetMapControlPointsNV");
    s_deviceConfig.m_glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC) glewGetProcAddress ("glGetMapParameterivNV");
    s_deviceConfig.m_glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC) glewGetProcAddress ("glGetMapParameterfvNV");
    s_deviceConfig.m_glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC) glewGetProcAddress ("glGetMapAttribParameterivNV");
    s_deviceConfig.m_glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC) glewGetProcAddress ("glGetMapAttribParameterfvNV");
    s_deviceConfig.m_glEvalMapsNV = (PFNGLEVALMAPSNVPROC) glewGetProcAddress ("glEvalMapsNV");
  }

  // GL_NV_explicit_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_explicit_multisample])
  {
    s_deviceConfig.m_glGetMultisamplefvNV = (PFNGLGETMULTISAMPLEFVNVPROC) glewGetProcAddress ("glGetMultisamplefvNV");
    s_deviceConfig.m_glSampleMaskIndexedNV = (PFNGLSAMPLEMASKINDEXEDNVPROC) glewGetProcAddress ("glSampleMaskIndexedNV");
    s_deviceConfig.m_glTexRenderbufferNV = (PFNGLTEXRENDERBUFFERNVPROC) glewGetProcAddress ("glTexRenderbufferNV");
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

  // GL_NV_fragment_program
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_fragment_program])
  {
    s_deviceConfig.m_glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC) glewGetProcAddress ("glProgramNamedParameter4fNV");
    s_deviceConfig.m_glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC) glewGetProcAddress ("glProgramNamedParameter4fvNV");
    s_deviceConfig.m_glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC) glewGetProcAddress ("glProgramNamedParameter4dNV");
    s_deviceConfig.m_glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC) glewGetProcAddress ("glProgramNamedParameter4dvNV");
    s_deviceConfig.m_glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC) glewGetProcAddress ("glGetProgramNamedParameterfvNV");
    s_deviceConfig.m_glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC) glewGetProcAddress ("glGetProgramNamedParameterdvNV");
  }

  // GL_NV_framebuffer_mixed_samples
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_mixed_samples])
  {
    s_deviceConfig.m_glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) glewGetProcAddress ("glRasterSamplesEXT");
    s_deviceConfig.m_glCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC) glewGetProcAddress ("glCoverageModulationTableNV");
    s_deviceConfig.m_glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) glewGetProcAddress ("glGetCoverageModulationTableNV");
    s_deviceConfig.m_glCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC) glewGetProcAddress ("glCoverageModulationNV");
  }

  // GL_NV_framebuffer_multisample_coverage
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_framebuffer_multisample_coverage])
  {
    s_deviceConfig.m_glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) glewGetProcAddress ("glRenderbufferStorageMultisampleCoverageNV");
  }

  // GL_NV_geometry_program4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_geometry_program4])
  {
    s_deviceConfig.m_glProgramVertexLimitNV = (PFNGLPROGRAMVERTEXLIMITNVPROC) glewGetProcAddress ("glProgramVertexLimitNV");
    s_deviceConfig.m_glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC) glewGetProcAddress ("glFramebufferTextureEXT");
    s_deviceConfig.m_glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) glewGetProcAddress ("glFramebufferTextureLayerEXT");
    s_deviceConfig.m_glFramebufferTextureFaceEXT = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC) glewGetProcAddress ("glFramebufferTextureFaceEXT");
  }

  // GL_NV_gpu_program4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_program4])
  {
    s_deviceConfig.m_glProgramLocalParameterI4iNV = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC) glewGetProcAddress ("glProgramLocalParameterI4iNV");
    s_deviceConfig.m_glProgramLocalParameterI4ivNV = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC) glewGetProcAddress ("glProgramLocalParameterI4ivNV");
    s_deviceConfig.m_glProgramLocalParametersI4ivNV = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC) glewGetProcAddress ("glProgramLocalParametersI4ivNV");
    s_deviceConfig.m_glProgramLocalParameterI4uiNV = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC) glewGetProcAddress ("glProgramLocalParameterI4uiNV");
    s_deviceConfig.m_glProgramLocalParameterI4uivNV = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC) glewGetProcAddress ("glProgramLocalParameterI4uivNV");
    s_deviceConfig.m_glProgramLocalParametersI4uivNV = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC) glewGetProcAddress ("glProgramLocalParametersI4uivNV");
    s_deviceConfig.m_glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC) glewGetProcAddress ("glProgramEnvParameterI4iNV");
    s_deviceConfig.m_glProgramEnvParameterI4ivNV = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC) glewGetProcAddress ("glProgramEnvParameterI4ivNV");
    s_deviceConfig.m_glProgramEnvParametersI4ivNV = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC) glewGetProcAddress ("glProgramEnvParametersI4ivNV");
    s_deviceConfig.m_glProgramEnvParameterI4uiNV = (PFNGLPROGRAMENVPARAMETERI4UINVPROC) glewGetProcAddress ("glProgramEnvParameterI4uiNV");
    s_deviceConfig.m_glProgramEnvParameterI4uivNV = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC) glewGetProcAddress ("glProgramEnvParameterI4uivNV");
    s_deviceConfig.m_glProgramEnvParametersI4uivNV = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC) glewGetProcAddress ("glProgramEnvParametersI4uivNV");
    s_deviceConfig.m_glGetProgramLocalParameterIivNV = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC) glewGetProcAddress ("glGetProgramLocalParameterIivNV");
    s_deviceConfig.m_glGetProgramLocalParameterIuivNV = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC) glewGetProcAddress ("glGetProgramLocalParameterIuivNV");
    s_deviceConfig.m_glGetProgramEnvParameterIivNV = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC) glewGetProcAddress ("glGetProgramEnvParameterIivNV");
    s_deviceConfig.m_glGetProgramEnvParameterIuivNV = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC) glewGetProcAddress ("glGetProgramEnvParameterIuivNV");
  }

  // GL_NV_gpu_program5
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_program5])
  {
    s_deviceConfig.m_glProgramSubroutineParametersuivNV = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC) glewGetProcAddress ("glProgramSubroutineParametersuivNV");
    s_deviceConfig.m_glGetProgramSubroutineParameteruivNV = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC) glewGetProcAddress ("glGetProgramSubroutineParameteruivNV");
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

  // GL_NV_half_float
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_half_float])
  {
    s_deviceConfig.m_glVertex2hNV = (PFNGLVERTEX2HNVPROC) glewGetProcAddress ("glVertex2hNV");
    s_deviceConfig.m_glVertex2hvNV = (PFNGLVERTEX2HVNVPROC) glewGetProcAddress ("glVertex2hvNV");
    s_deviceConfig.m_glVertex3hNV = (PFNGLVERTEX3HNVPROC) glewGetProcAddress ("glVertex3hNV");
    s_deviceConfig.m_glVertex3hvNV = (PFNGLVERTEX3HVNVPROC) glewGetProcAddress ("glVertex3hvNV");
    s_deviceConfig.m_glVertex4hNV = (PFNGLVERTEX4HNVPROC) glewGetProcAddress ("glVertex4hNV");
    s_deviceConfig.m_glVertex4hvNV = (PFNGLVERTEX4HVNVPROC) glewGetProcAddress ("glVertex4hvNV");
    s_deviceConfig.m_glNormal3hNV = (PFNGLNORMAL3HNVPROC) glewGetProcAddress ("glNormal3hNV");
    s_deviceConfig.m_glNormal3hvNV = (PFNGLNORMAL3HVNVPROC) glewGetProcAddress ("glNormal3hvNV");
    s_deviceConfig.m_glColor3hNV = (PFNGLCOLOR3HNVPROC) glewGetProcAddress ("glColor3hNV");
    s_deviceConfig.m_glColor3hvNV = (PFNGLCOLOR3HVNVPROC) glewGetProcAddress ("glColor3hvNV");
    s_deviceConfig.m_glColor4hNV = (PFNGLCOLOR4HNVPROC) glewGetProcAddress ("glColor4hNV");
    s_deviceConfig.m_glColor4hvNV = (PFNGLCOLOR4HVNVPROC) glewGetProcAddress ("glColor4hvNV");
    s_deviceConfig.m_glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC) glewGetProcAddress ("glTexCoord1hNV");
    s_deviceConfig.m_glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC) glewGetProcAddress ("glTexCoord1hvNV");
    s_deviceConfig.m_glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC) glewGetProcAddress ("glTexCoord2hNV");
    s_deviceConfig.m_glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC) glewGetProcAddress ("glTexCoord2hvNV");
    s_deviceConfig.m_glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC) glewGetProcAddress ("glTexCoord3hNV");
    s_deviceConfig.m_glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC) glewGetProcAddress ("glTexCoord3hvNV");
    s_deviceConfig.m_glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC) glewGetProcAddress ("glTexCoord4hNV");
    s_deviceConfig.m_glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC) glewGetProcAddress ("glTexCoord4hvNV");
    s_deviceConfig.m_glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC) glewGetProcAddress ("glMultiTexCoord1hNV");
    s_deviceConfig.m_glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC) glewGetProcAddress ("glMultiTexCoord1hvNV");
    s_deviceConfig.m_glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC) glewGetProcAddress ("glMultiTexCoord2hNV");
    s_deviceConfig.m_glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC) glewGetProcAddress ("glMultiTexCoord2hvNV");
    s_deviceConfig.m_glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC) glewGetProcAddress ("glMultiTexCoord3hNV");
    s_deviceConfig.m_glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC) glewGetProcAddress ("glMultiTexCoord3hvNV");
    s_deviceConfig.m_glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC) glewGetProcAddress ("glMultiTexCoord4hNV");
    s_deviceConfig.m_glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC) glewGetProcAddress ("glMultiTexCoord4hvNV");
    s_deviceConfig.m_glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC) glewGetProcAddress ("glVertexAttrib1hNV");
    s_deviceConfig.m_glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC) glewGetProcAddress ("glVertexAttrib1hvNV");
    s_deviceConfig.m_glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC) glewGetProcAddress ("glVertexAttrib2hNV");
    s_deviceConfig.m_glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC) glewGetProcAddress ("glVertexAttrib2hvNV");
    s_deviceConfig.m_glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC) glewGetProcAddress ("glVertexAttrib3hNV");
    s_deviceConfig.m_glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC) glewGetProcAddress ("glVertexAttrib3hvNV");
    s_deviceConfig.m_glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC) glewGetProcAddress ("glVertexAttrib4hNV");
    s_deviceConfig.m_glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC) glewGetProcAddress ("glVertexAttrib4hvNV");
    s_deviceConfig.m_glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC) glewGetProcAddress ("glVertexAttribs1hvNV");
    s_deviceConfig.m_glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC) glewGetProcAddress ("glVertexAttribs2hvNV");
    s_deviceConfig.m_glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC) glewGetProcAddress ("glVertexAttribs3hvNV");
    s_deviceConfig.m_glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC) glewGetProcAddress ("glVertexAttribs4hvNV");
    s_deviceConfig.m_glFogCoordhNV = (PFNGLFOGCOORDHNVPROC) glewGetProcAddress ("glFogCoordhNV");
    s_deviceConfig.m_glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC) glewGetProcAddress ("glFogCoordhvNV");
    s_deviceConfig.m_glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC) glewGetProcAddress ("glSecondaryColor3hNV");
    s_deviceConfig.m_glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC) glewGetProcAddress ("glSecondaryColor3hvNV");
    s_deviceConfig.m_glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC) glewGetProcAddress ("glVertexWeighthNV");
    s_deviceConfig.m_glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC) glewGetProcAddress ("glVertexWeighthvNV");
  }

  // GL_NV_internalformat_sample_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_internalformat_sample_query])
  {
    s_deviceConfig.m_glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) glewGetProcAddress ("glGetInternalformatSampleivNV");
  }

  // GL_NV_gpu_multicast
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_gpu_multicast])
  {
    s_deviceConfig.m_glRenderGpuMaskNV = (PFNGLRENDERGPUMASKNVPROC) glewGetProcAddress ("glRenderGpuMaskNV");
    s_deviceConfig.m_glMulticastBufferSubDataNV = (PFNGLMULTICASTBUFFERSUBDATANVPROC) glewGetProcAddress ("glMulticastBufferSubDataNV");
    s_deviceConfig.m_glMulticastCopyBufferSubDataNV = (PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC) glewGetProcAddress ("glMulticastCopyBufferSubDataNV");
    s_deviceConfig.m_glMulticastCopyImageSubDataNV = (PFNGLMULTICASTCOPYIMAGESUBDATANVPROC) glewGetProcAddress ("glMulticastCopyImageSubDataNV");
    s_deviceConfig.m_glMulticastBlitFramebufferNV = (PFNGLMULTICASTBLITFRAMEBUFFERNVPROC) glewGetProcAddress ("glMulticastBlitFramebufferNV");
    s_deviceConfig.m_glMulticastFramebufferSampleLocationsfvNV = (PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) glewGetProcAddress ("glMulticastFramebufferSampleLocationsfvNV");
    s_deviceConfig.m_glMulticastBarrierNV = (PFNGLMULTICASTBARRIERNVPROC) glewGetProcAddress ("glMulticastBarrierNV");
    s_deviceConfig.m_glMulticastWaitSyncNV = (PFNGLMULTICASTWAITSYNCNVPROC) glewGetProcAddress ("glMulticastWaitSyncNV");
    s_deviceConfig.m_glMulticastGetQueryObjectivNV = (PFNGLMULTICASTGETQUERYOBJECTIVNVPROC) glewGetProcAddress ("glMulticastGetQueryObjectivNV");
    s_deviceConfig.m_glMulticastGetQueryObjectuivNV = (PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC) glewGetProcAddress ("glMulticastGetQueryObjectuivNV");
    s_deviceConfig.m_glMulticastGetQueryObjecti64vNV = (PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC) glewGetProcAddress ("glMulticastGetQueryObjecti64vNV");
    s_deviceConfig.m_glMulticastGetQueryObjectui64vNV = (PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC) glewGetProcAddress ("glMulticastGetQueryObjectui64vNV");
  }

  // GL_NVX_gpu_multicast2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NVX_gpu_multicast2])
  {
    s_deviceConfig.m_glUploadGpuMaskNVX = (PFNGLUPLOADGPUMASKNVXPROC) glewGetProcAddress ("glUploadGpuMaskNVX");
    s_deviceConfig.m_glMulticastViewportArrayvNVX = (PFNGLMULTICASTVIEWPORTARRAYVNVXPROC) glewGetProcAddress ("glMulticastViewportArrayvNVX");
    s_deviceConfig.m_glMulticastViewportPositionWScaleNVX = (PFNGLMULTICASTVIEWPORTPOSITIONWSCALENVXPROC) glewGetProcAddress ("glMulticastViewportPositionWScaleNVX");
    s_deviceConfig.m_glMulticastScissorArrayvNVX = (PFNGLMULTICASTSCISSORARRAYVNVXPROC) glewGetProcAddress ("glMulticastScissorArrayvNVX");
    s_deviceConfig.m_glAsyncCopyBufferSubDataNVX = (PFNGLASYNCCOPYBUFFERSUBDATANVXPROC) glewGetProcAddress ("glAsyncCopyBufferSubDataNVX");
    s_deviceConfig.m_glAsyncCopyImageSubDataNVX = (PFNGLASYNCCOPYIMAGESUBDATANVXPROC) glewGetProcAddress ("glAsyncCopyImageSubDataNVX");
  }

  // GL_NVX_progress_fence
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NVX_progress_fence])
  {
    s_deviceConfig.m_glCreateProgressFenceNVX = (PFNGLCREATEPROGRESSFENCENVXPROC) glewGetProcAddress ("glCreateProgressFenceNVX");
    s_deviceConfig.m_glSignalSemaphoreui64NVX = (PFNGLSIGNALSEMAPHOREUI64NVXPROC) glewGetProcAddress ("glSignalSemaphoreui64NVX");
    s_deviceConfig.m_glWaitSemaphoreui64NVX = (PFNGLWAITSEMAPHOREUI64NVXPROC) glewGetProcAddress ("glWaitSemaphoreui64NVX");
    s_deviceConfig.m_glClientWaitSemaphoreui64NVX = (PFNGLCLIENTWAITSEMAPHOREUI64NVXPROC) glewGetProcAddress ("glClientWaitSemaphoreui64NVX");
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

  // GL_NV_occlusion_query
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_occlusion_query])
  {
    s_deviceConfig.m_glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC) glewGetProcAddress ("glGenOcclusionQueriesNV");
    s_deviceConfig.m_glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC) glewGetProcAddress ("glDeleteOcclusionQueriesNV");
    s_deviceConfig.m_glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC) glewGetProcAddress ("glIsOcclusionQueryNV");
    s_deviceConfig.m_glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC) glewGetProcAddress ("glBeginOcclusionQueryNV");
    s_deviceConfig.m_glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC) glewGetProcAddress ("glEndOcclusionQueryNV");
    s_deviceConfig.m_glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC) glewGetProcAddress ("glGetOcclusionQueryivNV");
    s_deviceConfig.m_glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC) glewGetProcAddress ("glGetOcclusionQueryuivNV");
  }

  // GL_NV_parameter_buffer_object
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_parameter_buffer_object])
  {
    s_deviceConfig.m_glProgramBufferParametersfvNV = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC) glewGetProcAddress ("glProgramBufferParametersfvNV");
    s_deviceConfig.m_glProgramBufferParametersIivNV = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC) glewGetProcAddress ("glProgramBufferParametersIivNV");
    s_deviceConfig.m_glProgramBufferParametersIuivNV = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC) glewGetProcAddress ("glProgramBufferParametersIuivNV");
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
    s_deviceConfig.m_glPathColorGenNV = (PFNGLPATHCOLORGENNVPROC) glewGetProcAddress ("glPathColorGenNV");
    s_deviceConfig.m_glPathTexGenNV = (PFNGLPATHTEXGENNVPROC) glewGetProcAddress ("glPathTexGenNV");
    s_deviceConfig.m_glPathFogGenNV = (PFNGLPATHFOGGENNVPROC) glewGetProcAddress ("glPathFogGenNV");
    s_deviceConfig.m_glGetPathColorGenivNV = (PFNGLGETPATHCOLORGENIVNVPROC) glewGetProcAddress ("glGetPathColorGenivNV");
    s_deviceConfig.m_glGetPathColorGenfvNV = (PFNGLGETPATHCOLORGENFVNVPROC) glewGetProcAddress ("glGetPathColorGenfvNV");
    s_deviceConfig.m_glGetPathTexGenivNV = (PFNGLGETPATHTEXGENIVNVPROC) glewGetProcAddress ("glGetPathTexGenivNV");
    s_deviceConfig.m_glGetPathTexGenfvNV = (PFNGLGETPATHTEXGENFVNVPROC) glewGetProcAddress ("glGetPathTexGenfvNV");
    s_deviceConfig.m_glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) glewGetProcAddress ("glMatrixFrustumEXT");
    s_deviceConfig.m_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) glewGetProcAddress ("glMatrixLoadIdentityEXT");
    s_deviceConfig.m_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) glewGetProcAddress ("glMatrixLoadTransposefEXT");
    s_deviceConfig.m_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) glewGetProcAddress ("glMatrixLoadTransposedEXT");
    s_deviceConfig.m_glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) glewGetProcAddress ("glMatrixLoadfEXT");
    s_deviceConfig.m_glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) glewGetProcAddress ("glMatrixLoaddEXT");
    s_deviceConfig.m_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) glewGetProcAddress ("glMatrixMultTransposefEXT");
    s_deviceConfig.m_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) glewGetProcAddress ("glMatrixMultTransposedEXT");
    s_deviceConfig.m_glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) glewGetProcAddress ("glMatrixMultfEXT");
    s_deviceConfig.m_glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) glewGetProcAddress ("glMatrixMultdEXT");
    s_deviceConfig.m_glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) glewGetProcAddress ("glMatrixOrthoEXT");
    s_deviceConfig.m_glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) glewGetProcAddress ("glMatrixPopEXT");
    s_deviceConfig.m_glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) glewGetProcAddress ("glMatrixPushEXT");
    s_deviceConfig.m_glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) glewGetProcAddress ("glMatrixRotatefEXT");
    s_deviceConfig.m_glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) glewGetProcAddress ("glMatrixRotatedEXT");
    s_deviceConfig.m_glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) glewGetProcAddress ("glMatrixScalefEXT");
    s_deviceConfig.m_glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) glewGetProcAddress ("glMatrixScaledEXT");
    s_deviceConfig.m_glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) glewGetProcAddress ("glMatrixTranslatefEXT");
    s_deviceConfig.m_glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) glewGetProcAddress ("glMatrixTranslatedEXT");
  }

  // GL_NV_pixel_data_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_pixel_data_range])
  {
    s_deviceConfig.m_glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC) glewGetProcAddress ("glPixelDataRangeNV");
    s_deviceConfig.m_glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC) glewGetProcAddress ("glFlushPixelDataRangeNV");
  }

  // GL_NV_point_sprite
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_point_sprite])
  {
    s_deviceConfig.m_glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC) glewGetProcAddress ("glPointParameteriNV");
    s_deviceConfig.m_glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC) glewGetProcAddress ("glPointParameterivNV");
  }

  // GL_NV_present_video
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_present_video])
  {
    s_deviceConfig.m_glPresentFrameKeyedNV = (PFNGLPRESENTFRAMEKEYEDNVPROC) glewGetProcAddress ("glPresentFrameKeyedNV");
    s_deviceConfig.m_glPresentFrameDualFillNV = (PFNGLPRESENTFRAMEDUALFILLNVPROC) glewGetProcAddress ("glPresentFrameDualFillNV");
    s_deviceConfig.m_glGetVideoivNV = (PFNGLGETVIDEOIVNVPROC) glewGetProcAddress ("glGetVideoivNV");
    s_deviceConfig.m_glGetVideouivNV = (PFNGLGETVIDEOUIVNVPROC) glewGetProcAddress ("glGetVideouivNV");
    s_deviceConfig.m_glGetVideoi64vNV = (PFNGLGETVIDEOI64VNVPROC) glewGetProcAddress ("glGetVideoi64vNV");
    s_deviceConfig.m_glGetVideoui64vNV = (PFNGLGETVIDEOUI64VNVPROC) glewGetProcAddress ("glGetVideoui64vNV");
  }

  // GL_NV_primitive_restart
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_primitive_restart])
  {
    s_deviceConfig.m_glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC) glewGetProcAddress ("glPrimitiveRestartNV");
    s_deviceConfig.m_glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC) glewGetProcAddress ("glPrimitiveRestartIndexNV");
  }

  // GL_NV_query_resource
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_query_resource])
  {
    s_deviceConfig.m_glQueryResourceNV = (PFNGLQUERYRESOURCENVPROC) glewGetProcAddress ("glQueryResourceNV");
  }

  // GL_NV_query_resource_tag
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_query_resource_tag])
  {
    s_deviceConfig.m_glGenQueryResourceTagNV = (PFNGLGENQUERYRESOURCETAGNVPROC) glewGetProcAddress ("glGenQueryResourceTagNV");
    s_deviceConfig.m_glDeleteQueryResourceTagNV = (PFNGLDELETEQUERYRESOURCETAGNVPROC) glewGetProcAddress ("glDeleteQueryResourceTagNV");
    s_deviceConfig.m_glQueryResourceTagNV = (PFNGLQUERYRESOURCETAGNVPROC) glewGetProcAddress ("glQueryResourceTagNV");
  }

  // GL_NV_register_combiners
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_register_combiners])
  {
    s_deviceConfig.m_glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC) glewGetProcAddress ("glCombinerParameterfvNV");
    s_deviceConfig.m_glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC) glewGetProcAddress ("glCombinerParameterfNV");
    s_deviceConfig.m_glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC) glewGetProcAddress ("glCombinerParameterivNV");
    s_deviceConfig.m_glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC) glewGetProcAddress ("glCombinerParameteriNV");
    s_deviceConfig.m_glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC) glewGetProcAddress ("glCombinerInputNV");
    s_deviceConfig.m_glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC) glewGetProcAddress ("glCombinerOutputNV");
    s_deviceConfig.m_glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC) glewGetProcAddress ("glFinalCombinerInputNV");
    s_deviceConfig.m_glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC) glewGetProcAddress ("glGetCombinerInputParameterfvNV");
    s_deviceConfig.m_glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC) glewGetProcAddress ("glGetCombinerInputParameterivNV");
    s_deviceConfig.m_glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC) glewGetProcAddress ("glGetCombinerOutputParameterfvNV");
    s_deviceConfig.m_glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC) glewGetProcAddress ("glGetCombinerOutputParameterivNV");
    s_deviceConfig.m_glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC) glewGetProcAddress ("glGetFinalCombinerInputParameterfvNV");
    s_deviceConfig.m_glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC) glewGetProcAddress ("glGetFinalCombinerInputParameterivNV");
  }

  // GL_NV_register_combiners2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_register_combiners2])
  {
    s_deviceConfig.m_glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC) glewGetProcAddress ("glCombinerStageParameterfvNV");
    s_deviceConfig.m_glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC) glewGetProcAddress ("glGetCombinerStageParameterfvNV");
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

  // GL_NV_shader_buffer_load
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_shader_buffer_load])
  {
    s_deviceConfig.m_glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC) glewGetProcAddress ("glMakeBufferResidentNV");
    s_deviceConfig.m_glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) glewGetProcAddress ("glMakeBufferNonResidentNV");
    s_deviceConfig.m_glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC) glewGetProcAddress ("glIsBufferResidentNV");
    s_deviceConfig.m_glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) glewGetProcAddress ("glMakeNamedBufferResidentNV");
    s_deviceConfig.m_glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) glewGetProcAddress ("glMakeNamedBufferNonResidentNV");
    s_deviceConfig.m_glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) glewGetProcAddress ("glIsNamedBufferResidentNV");
    s_deviceConfig.m_glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) glewGetProcAddress ("glGetBufferParameterui64vNV");
    s_deviceConfig.m_glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) glewGetProcAddress ("glGetNamedBufferParameterui64vNV");
    s_deviceConfig.m_glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC) glewGetProcAddress ("glGetIntegerui64vNV");
    s_deviceConfig.m_glUniformui64NV = (PFNGLUNIFORMUI64NVPROC) glewGetProcAddress ("glUniformui64NV");
    s_deviceConfig.m_glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC) glewGetProcAddress ("glUniformui64vNV");
    s_deviceConfig.m_glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC) glewGetProcAddress ("glGetUniformui64vNV");
    s_deviceConfig.m_glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC) glewGetProcAddress ("glProgramUniformui64NV");
    s_deviceConfig.m_glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC) glewGetProcAddress ("glProgramUniformui64vNV");
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

  // GL_NV_texture_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_texture_multisample])
  {
    s_deviceConfig.m_glTexImage2DMultisampleCoverageNV = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC) glewGetProcAddress ("glTexImage2DMultisampleCoverageNV");
    s_deviceConfig.m_glTexImage3DMultisampleCoverageNV = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC) glewGetProcAddress ("glTexImage3DMultisampleCoverageNV");
    s_deviceConfig.m_glTextureImage2DMultisampleNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC) glewGetProcAddress ("glTextureImage2DMultisampleNV");
    s_deviceConfig.m_glTextureImage3DMultisampleNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC) glewGetProcAddress ("glTextureImage3DMultisampleNV");
    s_deviceConfig.m_glTextureImage2DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC) glewGetProcAddress ("glTextureImage2DMultisampleCoverageNV");
    s_deviceConfig.m_glTextureImage3DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC) glewGetProcAddress ("glTextureImage3DMultisampleCoverageNV");
  }

  // GL_NV_transform_feedback
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_transform_feedback])
  {
    s_deviceConfig.m_glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glBeginTransformFeedbackNV");
    s_deviceConfig.m_glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glEndTransformFeedbackNV");
    s_deviceConfig.m_glTransformFeedbackAttribsNV = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC) glewGetProcAddress ("glTransformFeedbackAttribsNV");
    s_deviceConfig.m_glBindBufferRangeNV = (PFNGLBINDBUFFERRANGENVPROC) glewGetProcAddress ("glBindBufferRangeNV");
    s_deviceConfig.m_glBindBufferOffsetNV = (PFNGLBINDBUFFEROFFSETNVPROC) glewGetProcAddress ("glBindBufferOffsetNV");
    s_deviceConfig.m_glBindBufferBaseNV = (PFNGLBINDBUFFERBASENVPROC) glewGetProcAddress ("glBindBufferBaseNV");
    s_deviceConfig.m_glTransformFeedbackVaryingsNV = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC) glewGetProcAddress ("glTransformFeedbackVaryingsNV");
    s_deviceConfig.m_glActiveVaryingNV = (PFNGLACTIVEVARYINGNVPROC) glewGetProcAddress ("glActiveVaryingNV");
    s_deviceConfig.m_glGetVaryingLocationNV = (PFNGLGETVARYINGLOCATIONNVPROC) glewGetProcAddress ("glGetVaryingLocationNV");
    s_deviceConfig.m_glGetActiveVaryingNV = (PFNGLGETACTIVEVARYINGNVPROC) glewGetProcAddress ("glGetActiveVaryingNV");
    s_deviceConfig.m_glGetTransformFeedbackVaryingNV = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC) glewGetProcAddress ("glGetTransformFeedbackVaryingNV");
    s_deviceConfig.m_glTransformFeedbackStreamAttribsNV = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC) glewGetProcAddress ("glTransformFeedbackStreamAttribsNV");
  }

  // GL_NV_transform_feedback2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_transform_feedback2])
  {
    s_deviceConfig.m_glBindTransformFeedbackNV = (PFNGLBINDTRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glBindTransformFeedbackNV");
    s_deviceConfig.m_glDeleteTransformFeedbacksNV = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC) glewGetProcAddress ("glDeleteTransformFeedbacksNV");
    s_deviceConfig.m_glGenTransformFeedbacksNV = (PFNGLGENTRANSFORMFEEDBACKSNVPROC) glewGetProcAddress ("glGenTransformFeedbacksNV");
    s_deviceConfig.m_glIsTransformFeedbackNV = (PFNGLISTRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glIsTransformFeedbackNV");
    s_deviceConfig.m_glPauseTransformFeedbackNV = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glPauseTransformFeedbackNV");
    s_deviceConfig.m_glResumeTransformFeedbackNV = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glResumeTransformFeedbackNV");
    s_deviceConfig.m_glDrawTransformFeedbackNV = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC) glewGetProcAddress ("glDrawTransformFeedbackNV");
  }

  // GL_NV_vdpau_interop
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vdpau_interop])
  {
    s_deviceConfig.m_glVDPAUInitNV = (PFNGLVDPAUINITNVPROC) glewGetProcAddress ("glVDPAUInitNV");
    s_deviceConfig.m_glVDPAUFiniNV = (PFNGLVDPAUFININVPROC) glewGetProcAddress ("glVDPAUFiniNV");
    s_deviceConfig.m_glVDPAURegisterVideoSurfaceNV = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC) glewGetProcAddress ("glVDPAURegisterVideoSurfaceNV");
    s_deviceConfig.m_glVDPAURegisterOutputSurfaceNV = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC) glewGetProcAddress ("glVDPAURegisterOutputSurfaceNV");
    s_deviceConfig.m_glVDPAUIsSurfaceNV = (PFNGLVDPAUISSURFACENVPROC) glewGetProcAddress ("glVDPAUIsSurfaceNV");
    s_deviceConfig.m_glVDPAUUnregisterSurfaceNV = (PFNGLVDPAUUNREGISTERSURFACENVPROC) glewGetProcAddress ("glVDPAUUnregisterSurfaceNV");
    s_deviceConfig.m_glVDPAUGetSurfaceivNV = (PFNGLVDPAUGETSURFACEIVNVPROC) glewGetProcAddress ("glVDPAUGetSurfaceivNV");
    s_deviceConfig.m_glVDPAUSurfaceAccessNV = (PFNGLVDPAUSURFACEACCESSNVPROC) glewGetProcAddress ("glVDPAUSurfaceAccessNV");
    s_deviceConfig.m_glVDPAUMapSurfacesNV = (PFNGLVDPAUMAPSURFACESNVPROC) glewGetProcAddress ("glVDPAUMapSurfacesNV");
    s_deviceConfig.m_glVDPAUUnmapSurfacesNV = (PFNGLVDPAUUNMAPSURFACESNVPROC) glewGetProcAddress ("glVDPAUUnmapSurfacesNV");
  }

  // GL_NV_vdpau_interop2
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vdpau_interop2])
  {
    s_deviceConfig.m_glVDPAURegisterVideoSurfaceWithPictureStructureNV = (PFNGLVDPAUREGISTERVIDEOSURFACEWITHPICTURESTRUCTURENVPROC) glewGetProcAddress ("glVDPAURegisterVideoSurfaceWithPictureStructureNV");
  }

  // GL_NV_vertex_array_range
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_array_range])
  {
    s_deviceConfig.m_glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC) glewGetProcAddress ("glFlushVertexArrayRangeNV");
    s_deviceConfig.m_glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC) glewGetProcAddress ("glVertexArrayRangeNV");
  }

  // GL_NV_vertex_attrib_integer_64bit
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_attrib_integer_64bit])
  {
    s_deviceConfig.m_glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC) glewGetProcAddress ("glVertexAttribL1i64NV");
    s_deviceConfig.m_glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC) glewGetProcAddress ("glVertexAttribL2i64NV");
    s_deviceConfig.m_glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC) glewGetProcAddress ("glVertexAttribL3i64NV");
    s_deviceConfig.m_glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC) glewGetProcAddress ("glVertexAttribL4i64NV");
    s_deviceConfig.m_glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC) glewGetProcAddress ("glVertexAttribL1i64vNV");
    s_deviceConfig.m_glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC) glewGetProcAddress ("glVertexAttribL2i64vNV");
    s_deviceConfig.m_glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC) glewGetProcAddress ("glVertexAttribL3i64vNV");
    s_deviceConfig.m_glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC) glewGetProcAddress ("glVertexAttribL4i64vNV");
    s_deviceConfig.m_glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC) glewGetProcAddress ("glVertexAttribL1ui64NV");
    s_deviceConfig.m_glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC) glewGetProcAddress ("glVertexAttribL2ui64NV");
    s_deviceConfig.m_glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC) glewGetProcAddress ("glVertexAttribL3ui64NV");
    s_deviceConfig.m_glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC) glewGetProcAddress ("glVertexAttribL4ui64NV");
    s_deviceConfig.m_glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC) glewGetProcAddress ("glVertexAttribL1ui64vNV");
    s_deviceConfig.m_glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC) glewGetProcAddress ("glVertexAttribL2ui64vNV");
    s_deviceConfig.m_glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC) glewGetProcAddress ("glVertexAttribL3ui64vNV");
    s_deviceConfig.m_glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC) glewGetProcAddress ("glVertexAttribL4ui64vNV");
    s_deviceConfig.m_glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC) glewGetProcAddress ("glGetVertexAttribLi64vNV");
    s_deviceConfig.m_glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) glewGetProcAddress ("glGetVertexAttribLui64vNV");
    s_deviceConfig.m_glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC) glewGetProcAddress ("glVertexAttribLFormatNV");
  }

  // GL_NV_vertex_buffer_unified_memory
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_buffer_unified_memory])
  {
    s_deviceConfig.m_glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC) glewGetProcAddress ("glBufferAddressRangeNV");
    s_deviceConfig.m_glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC) glewGetProcAddress ("glVertexFormatNV");
    s_deviceConfig.m_glNormalFormatNV = (PFNGLNORMALFORMATNVPROC) glewGetProcAddress ("glNormalFormatNV");
    s_deviceConfig.m_glColorFormatNV = (PFNGLCOLORFORMATNVPROC) glewGetProcAddress ("glColorFormatNV");
    s_deviceConfig.m_glIndexFormatNV = (PFNGLINDEXFORMATNVPROC) glewGetProcAddress ("glIndexFormatNV");
    s_deviceConfig.m_glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC) glewGetProcAddress ("glTexCoordFormatNV");
    s_deviceConfig.m_glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC) glewGetProcAddress ("glEdgeFlagFormatNV");
    s_deviceConfig.m_glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC) glewGetProcAddress ("glSecondaryColorFormatNV");
    s_deviceConfig.m_glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC) glewGetProcAddress ("glFogCoordFormatNV");
    s_deviceConfig.m_glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC) glewGetProcAddress ("glVertexAttribFormatNV");
    s_deviceConfig.m_glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC) glewGetProcAddress ("glVertexAttribIFormatNV");
    s_deviceConfig.m_glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC) glewGetProcAddress ("glGetIntegerui64i_vNV");
  }

  // GL_NV_vertex_program
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program])
  {
    s_deviceConfig.m_glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC) glewGetProcAddress ("glAreProgramsResidentNV");
    s_deviceConfig.m_glBindProgramNV = (PFNGLBINDPROGRAMNVPROC) glewGetProcAddress ("glBindProgramNV");
    s_deviceConfig.m_glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC) glewGetProcAddress ("glDeleteProgramsNV");
    s_deviceConfig.m_glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC) glewGetProcAddress ("glExecuteProgramNV");
    s_deviceConfig.m_glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC) glewGetProcAddress ("glGenProgramsNV");
    s_deviceConfig.m_glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC) glewGetProcAddress ("glGetProgramParameterdvNV");
    s_deviceConfig.m_glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC) glewGetProcAddress ("glGetProgramParameterfvNV");
    s_deviceConfig.m_glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC) glewGetProcAddress ("glGetProgramivNV");
    s_deviceConfig.m_glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC) glewGetProcAddress ("glGetProgramStringNV");
    s_deviceConfig.m_glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC) glewGetProcAddress ("glGetTrackMatrixivNV");
    s_deviceConfig.m_glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC) glewGetProcAddress ("glGetVertexAttribdvNV");
    s_deviceConfig.m_glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC) glewGetProcAddress ("glGetVertexAttribfvNV");
    s_deviceConfig.m_glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC) glewGetProcAddress ("glGetVertexAttribivNV");
    s_deviceConfig.m_glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC) glewGetProcAddress ("glGetVertexAttribPointervNV");
    s_deviceConfig.m_glIsProgramNV = (PFNGLISPROGRAMNVPROC) glewGetProcAddress ("glIsProgramNV");
    s_deviceConfig.m_glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC) glewGetProcAddress ("glLoadProgramNV");
    s_deviceConfig.m_glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC) glewGetProcAddress ("glProgramParameter4dNV");
    s_deviceConfig.m_glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC) glewGetProcAddress ("glProgramParameter4dvNV");
    s_deviceConfig.m_glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC) glewGetProcAddress ("glProgramParameter4fNV");
    s_deviceConfig.m_glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC) glewGetProcAddress ("glProgramParameter4fvNV");
    s_deviceConfig.m_glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC) glewGetProcAddress ("glProgramParameters4dvNV");
    s_deviceConfig.m_glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC) glewGetProcAddress ("glProgramParameters4fvNV");
    s_deviceConfig.m_glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC) glewGetProcAddress ("glRequestResidentProgramsNV");
    s_deviceConfig.m_glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC) glewGetProcAddress ("glTrackMatrixNV");
    s_deviceConfig.m_glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC) glewGetProcAddress ("glVertexAttribPointerNV");
    s_deviceConfig.m_glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC) glewGetProcAddress ("glVertexAttrib1dNV");
    s_deviceConfig.m_glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC) glewGetProcAddress ("glVertexAttrib1dvNV");
    s_deviceConfig.m_glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC) glewGetProcAddress ("glVertexAttrib1fNV");
    s_deviceConfig.m_glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC) glewGetProcAddress ("glVertexAttrib1fvNV");
    s_deviceConfig.m_glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC) glewGetProcAddress ("glVertexAttrib1sNV");
    s_deviceConfig.m_glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC) glewGetProcAddress ("glVertexAttrib1svNV");
    s_deviceConfig.m_glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC) glewGetProcAddress ("glVertexAttrib2dNV");
    s_deviceConfig.m_glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC) glewGetProcAddress ("glVertexAttrib2dvNV");
    s_deviceConfig.m_glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC) glewGetProcAddress ("glVertexAttrib2fNV");
    s_deviceConfig.m_glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC) glewGetProcAddress ("glVertexAttrib2fvNV");
    s_deviceConfig.m_glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC) glewGetProcAddress ("glVertexAttrib2sNV");
    s_deviceConfig.m_glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC) glewGetProcAddress ("glVertexAttrib2svNV");
    s_deviceConfig.m_glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC) glewGetProcAddress ("glVertexAttrib3dNV");
    s_deviceConfig.m_glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC) glewGetProcAddress ("glVertexAttrib3dvNV");
    s_deviceConfig.m_glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC) glewGetProcAddress ("glVertexAttrib3fNV");
    s_deviceConfig.m_glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC) glewGetProcAddress ("glVertexAttrib3fvNV");
    s_deviceConfig.m_glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC) glewGetProcAddress ("glVertexAttrib3sNV");
    s_deviceConfig.m_glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC) glewGetProcAddress ("glVertexAttrib3svNV");
    s_deviceConfig.m_glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC) glewGetProcAddress ("glVertexAttrib4dNV");
    s_deviceConfig.m_glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC) glewGetProcAddress ("glVertexAttrib4dvNV");
    s_deviceConfig.m_glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC) glewGetProcAddress ("glVertexAttrib4fNV");
    s_deviceConfig.m_glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC) glewGetProcAddress ("glVertexAttrib4fvNV");
    s_deviceConfig.m_glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC) glewGetProcAddress ("glVertexAttrib4sNV");
    s_deviceConfig.m_glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC) glewGetProcAddress ("glVertexAttrib4svNV");
    s_deviceConfig.m_glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC) glewGetProcAddress ("glVertexAttrib4ubNV");
    s_deviceConfig.m_glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC) glewGetProcAddress ("glVertexAttrib4ubvNV");
    s_deviceConfig.m_glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC) glewGetProcAddress ("glVertexAttribs1dvNV");
    s_deviceConfig.m_glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC) glewGetProcAddress ("glVertexAttribs1fvNV");
    s_deviceConfig.m_glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC) glewGetProcAddress ("glVertexAttribs1svNV");
    s_deviceConfig.m_glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC) glewGetProcAddress ("glVertexAttribs2dvNV");
    s_deviceConfig.m_glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC) glewGetProcAddress ("glVertexAttribs2fvNV");
    s_deviceConfig.m_glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC) glewGetProcAddress ("glVertexAttribs2svNV");
    s_deviceConfig.m_glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC) glewGetProcAddress ("glVertexAttribs3dvNV");
    s_deviceConfig.m_glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC) glewGetProcAddress ("glVertexAttribs3fvNV");
    s_deviceConfig.m_glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC) glewGetProcAddress ("glVertexAttribs3svNV");
    s_deviceConfig.m_glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC) glewGetProcAddress ("glVertexAttribs4dvNV");
    s_deviceConfig.m_glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC) glewGetProcAddress ("glVertexAttribs4fvNV");
    s_deviceConfig.m_glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC) glewGetProcAddress ("glVertexAttribs4svNV");
    s_deviceConfig.m_glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC) glewGetProcAddress ("glVertexAttribs4ubvNV");
  }

  // GL_NV_vertex_program4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_vertex_program4])
  {
    s_deviceConfig.m_glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC) glewGetProcAddress ("glVertexAttribI1iEXT");
    s_deviceConfig.m_glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC) glewGetProcAddress ("glVertexAttribI2iEXT");
    s_deviceConfig.m_glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC) glewGetProcAddress ("glVertexAttribI3iEXT");
    s_deviceConfig.m_glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC) glewGetProcAddress ("glVertexAttribI4iEXT");
    s_deviceConfig.m_glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC) glewGetProcAddress ("glVertexAttribI1uiEXT");
    s_deviceConfig.m_glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC) glewGetProcAddress ("glVertexAttribI2uiEXT");
    s_deviceConfig.m_glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC) glewGetProcAddress ("glVertexAttribI3uiEXT");
    s_deviceConfig.m_glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC) glewGetProcAddress ("glVertexAttribI4uiEXT");
    s_deviceConfig.m_glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC) glewGetProcAddress ("glVertexAttribI1ivEXT");
    s_deviceConfig.m_glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC) glewGetProcAddress ("glVertexAttribI2ivEXT");
    s_deviceConfig.m_glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC) glewGetProcAddress ("glVertexAttribI3ivEXT");
    s_deviceConfig.m_glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC) glewGetProcAddress ("glVertexAttribI4ivEXT");
    s_deviceConfig.m_glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC) glewGetProcAddress ("glVertexAttribI1uivEXT");
    s_deviceConfig.m_glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC) glewGetProcAddress ("glVertexAttribI2uivEXT");
    s_deviceConfig.m_glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC) glewGetProcAddress ("glVertexAttribI3uivEXT");
    s_deviceConfig.m_glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC) glewGetProcAddress ("glVertexAttribI4uivEXT");
    s_deviceConfig.m_glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC) glewGetProcAddress ("glVertexAttribI4bvEXT");
    s_deviceConfig.m_glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC) glewGetProcAddress ("glVertexAttribI4svEXT");
    s_deviceConfig.m_glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC) glewGetProcAddress ("glVertexAttribI4ubvEXT");
    s_deviceConfig.m_glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC) glewGetProcAddress ("glVertexAttribI4usvEXT");
    s_deviceConfig.m_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC) glewGetProcAddress ("glVertexAttribIPointerEXT");
    s_deviceConfig.m_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC) glewGetProcAddress ("glGetVertexAttribIivEXT");
    s_deviceConfig.m_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC) glewGetProcAddress ("glGetVertexAttribIuivEXT");
  }

  // GL_NV_video_capture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_video_capture])
  {
    s_deviceConfig.m_glBeginVideoCaptureNV = (PFNGLBEGINVIDEOCAPTURENVPROC) glewGetProcAddress ("glBeginVideoCaptureNV");
    s_deviceConfig.m_glBindVideoCaptureStreamBufferNV = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC) glewGetProcAddress ("glBindVideoCaptureStreamBufferNV");
    s_deviceConfig.m_glBindVideoCaptureStreamTextureNV = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC) glewGetProcAddress ("glBindVideoCaptureStreamTextureNV");
    s_deviceConfig.m_glEndVideoCaptureNV = (PFNGLENDVIDEOCAPTURENVPROC) glewGetProcAddress ("glEndVideoCaptureNV");
    s_deviceConfig.m_glGetVideoCaptureivNV = (PFNGLGETVIDEOCAPTUREIVNVPROC) glewGetProcAddress ("glGetVideoCaptureivNV");
    s_deviceConfig.m_glGetVideoCaptureStreamivNV = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC) glewGetProcAddress ("glGetVideoCaptureStreamivNV");
    s_deviceConfig.m_glGetVideoCaptureStreamfvNV = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC) glewGetProcAddress ("glGetVideoCaptureStreamfvNV");
    s_deviceConfig.m_glGetVideoCaptureStreamdvNV = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC) glewGetProcAddress ("glGetVideoCaptureStreamdvNV");
    s_deviceConfig.m_glVideoCaptureNV = (PFNGLVIDEOCAPTURENVPROC) glewGetProcAddress ("glVideoCaptureNV");
    s_deviceConfig.m_glVideoCaptureStreamParameterivNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC) glewGetProcAddress ("glVideoCaptureStreamParameterivNV");
    s_deviceConfig.m_glVideoCaptureStreamParameterfvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC) glewGetProcAddress ("glVideoCaptureStreamParameterfvNV");
    s_deviceConfig.m_glVideoCaptureStreamParameterdvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC) glewGetProcAddress ("glVideoCaptureStreamParameterdvNV");
  }

  // GL_NV_viewport_swizzle
  if (s_deviceConfig.m_featureSupported [GLEW_GL_NV_viewport_swizzle])
  {
    s_deviceConfig.m_glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC) glewGetProcAddress ("glViewportSwizzleNV");
  }

  // GL_OES_byte_coordinates
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_byte_coordinates])
  {
    s_deviceConfig.m_glMultiTexCoord1bOES = (PFNGLMULTITEXCOORD1BOESPROC) glewGetProcAddress ("glMultiTexCoord1bOES");
    s_deviceConfig.m_glMultiTexCoord1bvOES = (PFNGLMULTITEXCOORD1BVOESPROC) glewGetProcAddress ("glMultiTexCoord1bvOES");
    s_deviceConfig.m_glMultiTexCoord2bOES = (PFNGLMULTITEXCOORD2BOESPROC) glewGetProcAddress ("glMultiTexCoord2bOES");
    s_deviceConfig.m_glMultiTexCoord2bvOES = (PFNGLMULTITEXCOORD2BVOESPROC) glewGetProcAddress ("glMultiTexCoord2bvOES");
    s_deviceConfig.m_glMultiTexCoord3bOES = (PFNGLMULTITEXCOORD3BOESPROC) glewGetProcAddress ("glMultiTexCoord3bOES");
    s_deviceConfig.m_glMultiTexCoord3bvOES = (PFNGLMULTITEXCOORD3BVOESPROC) glewGetProcAddress ("glMultiTexCoord3bvOES");
    s_deviceConfig.m_glMultiTexCoord4bOES = (PFNGLMULTITEXCOORD4BOESPROC) glewGetProcAddress ("glMultiTexCoord4bOES");
    s_deviceConfig.m_glMultiTexCoord4bvOES = (PFNGLMULTITEXCOORD4BVOESPROC) glewGetProcAddress ("glMultiTexCoord4bvOES");
    s_deviceConfig.m_glTexCoord1bOES = (PFNGLTEXCOORD1BOESPROC) glewGetProcAddress ("glTexCoord1bOES");
    s_deviceConfig.m_glTexCoord1bvOES = (PFNGLTEXCOORD1BVOESPROC) glewGetProcAddress ("glTexCoord1bvOES");
    s_deviceConfig.m_glTexCoord2bOES = (PFNGLTEXCOORD2BOESPROC) glewGetProcAddress ("glTexCoord2bOES");
    s_deviceConfig.m_glTexCoord2bvOES = (PFNGLTEXCOORD2BVOESPROC) glewGetProcAddress ("glTexCoord2bvOES");
    s_deviceConfig.m_glTexCoord3bOES = (PFNGLTEXCOORD3BOESPROC) glewGetProcAddress ("glTexCoord3bOES");
    s_deviceConfig.m_glTexCoord3bvOES = (PFNGLTEXCOORD3BVOESPROC) glewGetProcAddress ("glTexCoord3bvOES");
    s_deviceConfig.m_glTexCoord4bOES = (PFNGLTEXCOORD4BOESPROC) glewGetProcAddress ("glTexCoord4bOES");
    s_deviceConfig.m_glTexCoord4bvOES = (PFNGLTEXCOORD4BVOESPROC) glewGetProcAddress ("glTexCoord4bvOES");
    s_deviceConfig.m_glVertex2bOES = (PFNGLVERTEX2BOESPROC) glewGetProcAddress ("glVertex2bOES");
    s_deviceConfig.m_glVertex2bvOES = (PFNGLVERTEX2BVOESPROC) glewGetProcAddress ("glVertex2bvOES");
    s_deviceConfig.m_glVertex3bOES = (PFNGLVERTEX3BOESPROC) glewGetProcAddress ("glVertex3bOES");
    s_deviceConfig.m_glVertex3bvOES = (PFNGLVERTEX3BVOESPROC) glewGetProcAddress ("glVertex3bvOES");
    s_deviceConfig.m_glVertex4bOES = (PFNGLVERTEX4BOESPROC) glewGetProcAddress ("glVertex4bOES");
    s_deviceConfig.m_glVertex4bvOES = (PFNGLVERTEX4BVOESPROC) glewGetProcAddress ("glVertex4bvOES");
  }

  // GL_OES_fixed_point
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_fixed_point])
  {
    s_deviceConfig.m_glAlphaFuncxOES = (PFNGLALPHAFUNCXOESPROC) glewGetProcAddress ("glAlphaFuncxOES");
    s_deviceConfig.m_glClearColorxOES = (PFNGLCLEARCOLORXOESPROC) glewGetProcAddress ("glClearColorxOES");
    s_deviceConfig.m_glClearDepthxOES = (PFNGLCLEARDEPTHXOESPROC) glewGetProcAddress ("glClearDepthxOES");
    s_deviceConfig.m_glClipPlanexOES = (PFNGLCLIPPLANEXOESPROC) glewGetProcAddress ("glClipPlanexOES");
    s_deviceConfig.m_glColor4xOES = (PFNGLCOLOR4XOESPROC) glewGetProcAddress ("glColor4xOES");
    s_deviceConfig.m_glDepthRangexOES = (PFNGLDEPTHRANGEXOESPROC) glewGetProcAddress ("glDepthRangexOES");
    s_deviceConfig.m_glFogxOES = (PFNGLFOGXOESPROC) glewGetProcAddress ("glFogxOES");
    s_deviceConfig.m_glFogxvOES = (PFNGLFOGXVOESPROC) glewGetProcAddress ("glFogxvOES");
    s_deviceConfig.m_glFrustumxOES = (PFNGLFRUSTUMXOESPROC) glewGetProcAddress ("glFrustumxOES");
    s_deviceConfig.m_glGetClipPlanexOES = (PFNGLGETCLIPPLANEXOESPROC) glewGetProcAddress ("glGetClipPlanexOES");
    s_deviceConfig.m_glGetFixedvOES = (PFNGLGETFIXEDVOESPROC) glewGetProcAddress ("glGetFixedvOES");
    s_deviceConfig.m_glGetTexEnvxvOES = (PFNGLGETTEXENVXVOESPROC) glewGetProcAddress ("glGetTexEnvxvOES");
    s_deviceConfig.m_glGetTexParameterxvOES = (PFNGLGETTEXPARAMETERXVOESPROC) glewGetProcAddress ("glGetTexParameterxvOES");
    s_deviceConfig.m_glLightModelxOES = (PFNGLLIGHTMODELXOESPROC) glewGetProcAddress ("glLightModelxOES");
    s_deviceConfig.m_glLightModelxvOES = (PFNGLLIGHTMODELXVOESPROC) glewGetProcAddress ("glLightModelxvOES");
    s_deviceConfig.m_glLightxOES = (PFNGLLIGHTXOESPROC) glewGetProcAddress ("glLightxOES");
    s_deviceConfig.m_glLightxvOES = (PFNGLLIGHTXVOESPROC) glewGetProcAddress ("glLightxvOES");
    s_deviceConfig.m_glLineWidthxOES = (PFNGLLINEWIDTHXOESPROC) glewGetProcAddress ("glLineWidthxOES");
    s_deviceConfig.m_glLoadMatrixxOES = (PFNGLLOADMATRIXXOESPROC) glewGetProcAddress ("glLoadMatrixxOES");
    s_deviceConfig.m_glMaterialxOES = (PFNGLMATERIALXOESPROC) glewGetProcAddress ("glMaterialxOES");
    s_deviceConfig.m_glMaterialxvOES = (PFNGLMATERIALXVOESPROC) glewGetProcAddress ("glMaterialxvOES");
    s_deviceConfig.m_glMultMatrixxOES = (PFNGLMULTMATRIXXOESPROC) glewGetProcAddress ("glMultMatrixxOES");
    s_deviceConfig.m_glMultiTexCoord4xOES = (PFNGLMULTITEXCOORD4XOESPROC) glewGetProcAddress ("glMultiTexCoord4xOES");
    s_deviceConfig.m_glNormal3xOES = (PFNGLNORMAL3XOESPROC) glewGetProcAddress ("glNormal3xOES");
    s_deviceConfig.m_glOrthoxOES = (PFNGLORTHOXOESPROC) glewGetProcAddress ("glOrthoxOES");
    s_deviceConfig.m_glPointParameterxvOES = (PFNGLPOINTPARAMETERXVOESPROC) glewGetProcAddress ("glPointParameterxvOES");
    s_deviceConfig.m_glPointSizexOES = (PFNGLPOINTSIZEXOESPROC) glewGetProcAddress ("glPointSizexOES");
    s_deviceConfig.m_glPolygonOffsetxOES = (PFNGLPOLYGONOFFSETXOESPROC) glewGetProcAddress ("glPolygonOffsetxOES");
    s_deviceConfig.m_glRotatexOES = (PFNGLROTATEXOESPROC) glewGetProcAddress ("glRotatexOES");
    s_deviceConfig.m_glScalexOES = (PFNGLSCALEXOESPROC) glewGetProcAddress ("glScalexOES");
    s_deviceConfig.m_glTexEnvxOES = (PFNGLTEXENVXOESPROC) glewGetProcAddress ("glTexEnvxOES");
    s_deviceConfig.m_glTexEnvxvOES = (PFNGLTEXENVXVOESPROC) glewGetProcAddress ("glTexEnvxvOES");
    s_deviceConfig.m_glTexParameterxOES = (PFNGLTEXPARAMETERXOESPROC) glewGetProcAddress ("glTexParameterxOES");
    s_deviceConfig.m_glTexParameterxvOES = (PFNGLTEXPARAMETERXVOESPROC) glewGetProcAddress ("glTexParameterxvOES");
    s_deviceConfig.m_glTranslatexOES = (PFNGLTRANSLATEXOESPROC) glewGetProcAddress ("glTranslatexOES");
    s_deviceConfig.m_glAccumxOES = (PFNGLACCUMXOESPROC) glewGetProcAddress ("glAccumxOES");
    s_deviceConfig.m_glBitmapxOES = (PFNGLBITMAPXOESPROC) glewGetProcAddress ("glBitmapxOES");
    s_deviceConfig.m_glBlendColorxOES = (PFNGLBLENDCOLORXOESPROC) glewGetProcAddress ("glBlendColorxOES");
    s_deviceConfig.m_glClearAccumxOES = (PFNGLCLEARACCUMXOESPROC) glewGetProcAddress ("glClearAccumxOES");
    s_deviceConfig.m_glColor3xOES = (PFNGLCOLOR3XOESPROC) glewGetProcAddress ("glColor3xOES");
    s_deviceConfig.m_glColor3xvOES = (PFNGLCOLOR3XVOESPROC) glewGetProcAddress ("glColor3xvOES");
    s_deviceConfig.m_glColor4xvOES = (PFNGLCOLOR4XVOESPROC) glewGetProcAddress ("glColor4xvOES");
    s_deviceConfig.m_glConvolutionParameterxOES = (PFNGLCONVOLUTIONPARAMETERXOESPROC) glewGetProcAddress ("glConvolutionParameterxOES");
    s_deviceConfig.m_glConvolutionParameterxvOES = (PFNGLCONVOLUTIONPARAMETERXVOESPROC) glewGetProcAddress ("glConvolutionParameterxvOES");
    s_deviceConfig.m_glEvalCoord1xOES = (PFNGLEVALCOORD1XOESPROC) glewGetProcAddress ("glEvalCoord1xOES");
    s_deviceConfig.m_glEvalCoord1xvOES = (PFNGLEVALCOORD1XVOESPROC) glewGetProcAddress ("glEvalCoord1xvOES");
    s_deviceConfig.m_glEvalCoord2xOES = (PFNGLEVALCOORD2XOESPROC) glewGetProcAddress ("glEvalCoord2xOES");
    s_deviceConfig.m_glEvalCoord2xvOES = (PFNGLEVALCOORD2XVOESPROC) glewGetProcAddress ("glEvalCoord2xvOES");
    s_deviceConfig.m_glFeedbackBufferxOES = (PFNGLFEEDBACKBUFFERXOESPROC) glewGetProcAddress ("glFeedbackBufferxOES");
    s_deviceConfig.m_glGetConvolutionParameterxvOES = (PFNGLGETCONVOLUTIONPARAMETERXVOESPROC) glewGetProcAddress ("glGetConvolutionParameterxvOES");
    s_deviceConfig.m_glGetHistogramParameterxvOES = (PFNGLGETHISTOGRAMPARAMETERXVOESPROC) glewGetProcAddress ("glGetHistogramParameterxvOES");
    s_deviceConfig.m_glGetLightxOES = (PFNGLGETLIGHTXOESPROC) glewGetProcAddress ("glGetLightxOES");
    s_deviceConfig.m_glGetMapxvOES = (PFNGLGETMAPXVOESPROC) glewGetProcAddress ("glGetMapxvOES");
    s_deviceConfig.m_glGetMaterialxOES = (PFNGLGETMATERIALXOESPROC) glewGetProcAddress ("glGetMaterialxOES");
    s_deviceConfig.m_glGetPixelMapxv = (PFNGLGETPIXELMAPXVPROC) glewGetProcAddress ("glGetPixelMapxv");
    s_deviceConfig.m_glGetTexGenxvOES = (PFNGLGETTEXGENXVOESPROC) glewGetProcAddress ("glGetTexGenxvOES");
    s_deviceConfig.m_glGetTexLevelParameterxvOES = (PFNGLGETTEXLEVELPARAMETERXVOESPROC) glewGetProcAddress ("glGetTexLevelParameterxvOES");
    s_deviceConfig.m_glIndexxOES = (PFNGLINDEXXOESPROC) glewGetProcAddress ("glIndexxOES");
    s_deviceConfig.m_glIndexxvOES = (PFNGLINDEXXVOESPROC) glewGetProcAddress ("glIndexxvOES");
    s_deviceConfig.m_glLoadTransposeMatrixxOES = (PFNGLLOADTRANSPOSEMATRIXXOESPROC) glewGetProcAddress ("glLoadTransposeMatrixxOES");
    s_deviceConfig.m_glMap1xOES = (PFNGLMAP1XOESPROC) glewGetProcAddress ("glMap1xOES");
    s_deviceConfig.m_glMap2xOES = (PFNGLMAP2XOESPROC) glewGetProcAddress ("glMap2xOES");
    s_deviceConfig.m_glMapGrid1xOES = (PFNGLMAPGRID1XOESPROC) glewGetProcAddress ("glMapGrid1xOES");
    s_deviceConfig.m_glMapGrid2xOES = (PFNGLMAPGRID2XOESPROC) glewGetProcAddress ("glMapGrid2xOES");
    s_deviceConfig.m_glMultTransposeMatrixxOES = (PFNGLMULTTRANSPOSEMATRIXXOESPROC) glewGetProcAddress ("glMultTransposeMatrixxOES");
    s_deviceConfig.m_glMultiTexCoord1xOES = (PFNGLMULTITEXCOORD1XOESPROC) glewGetProcAddress ("glMultiTexCoord1xOES");
    s_deviceConfig.m_glMultiTexCoord1xvOES = (PFNGLMULTITEXCOORD1XVOESPROC) glewGetProcAddress ("glMultiTexCoord1xvOES");
    s_deviceConfig.m_glMultiTexCoord2xOES = (PFNGLMULTITEXCOORD2XOESPROC) glewGetProcAddress ("glMultiTexCoord2xOES");
    s_deviceConfig.m_glMultiTexCoord2xvOES = (PFNGLMULTITEXCOORD2XVOESPROC) glewGetProcAddress ("glMultiTexCoord2xvOES");
    s_deviceConfig.m_glMultiTexCoord3xOES = (PFNGLMULTITEXCOORD3XOESPROC) glewGetProcAddress ("glMultiTexCoord3xOES");
    s_deviceConfig.m_glMultiTexCoord3xvOES = (PFNGLMULTITEXCOORD3XVOESPROC) glewGetProcAddress ("glMultiTexCoord3xvOES");
    s_deviceConfig.m_glMultiTexCoord4xvOES = (PFNGLMULTITEXCOORD4XVOESPROC) glewGetProcAddress ("glMultiTexCoord4xvOES");
    s_deviceConfig.m_glNormal3xvOES = (PFNGLNORMAL3XVOESPROC) glewGetProcAddress ("glNormal3xvOES");
    s_deviceConfig.m_glPassThroughxOES = (PFNGLPASSTHROUGHXOESPROC) glewGetProcAddress ("glPassThroughxOES");
    s_deviceConfig.m_glPixelMapx = (PFNGLPIXELMAPXPROC) glewGetProcAddress ("glPixelMapx");
    s_deviceConfig.m_glPixelStorex = (PFNGLPIXELSTOREXPROC) glewGetProcAddress ("glPixelStorex");
    s_deviceConfig.m_glPixelTransferxOES = (PFNGLPIXELTRANSFERXOESPROC) glewGetProcAddress ("glPixelTransferxOES");
    s_deviceConfig.m_glPixelZoomxOES = (PFNGLPIXELZOOMXOESPROC) glewGetProcAddress ("glPixelZoomxOES");
    s_deviceConfig.m_glPrioritizeTexturesxOES = (PFNGLPRIORITIZETEXTURESXOESPROC) glewGetProcAddress ("glPrioritizeTexturesxOES");
    s_deviceConfig.m_glRasterPos2xOES = (PFNGLRASTERPOS2XOESPROC) glewGetProcAddress ("glRasterPos2xOES");
    s_deviceConfig.m_glRasterPos2xvOES = (PFNGLRASTERPOS2XVOESPROC) glewGetProcAddress ("glRasterPos2xvOES");
    s_deviceConfig.m_glRasterPos3xOES = (PFNGLRASTERPOS3XOESPROC) glewGetProcAddress ("glRasterPos3xOES");
    s_deviceConfig.m_glRasterPos3xvOES = (PFNGLRASTERPOS3XVOESPROC) glewGetProcAddress ("glRasterPos3xvOES");
    s_deviceConfig.m_glRasterPos4xOES = (PFNGLRASTERPOS4XOESPROC) glewGetProcAddress ("glRasterPos4xOES");
    s_deviceConfig.m_glRasterPos4xvOES = (PFNGLRASTERPOS4XVOESPROC) glewGetProcAddress ("glRasterPos4xvOES");
    s_deviceConfig.m_glRectxOES = (PFNGLRECTXOESPROC) glewGetProcAddress ("glRectxOES");
    s_deviceConfig.m_glRectxvOES = (PFNGLRECTXVOESPROC) glewGetProcAddress ("glRectxvOES");
    s_deviceConfig.m_glTexCoord1xOES = (PFNGLTEXCOORD1XOESPROC) glewGetProcAddress ("glTexCoord1xOES");
    s_deviceConfig.m_glTexCoord1xvOES = (PFNGLTEXCOORD1XVOESPROC) glewGetProcAddress ("glTexCoord1xvOES");
    s_deviceConfig.m_glTexCoord2xOES = (PFNGLTEXCOORD2XOESPROC) glewGetProcAddress ("glTexCoord2xOES");
    s_deviceConfig.m_glTexCoord2xvOES = (PFNGLTEXCOORD2XVOESPROC) glewGetProcAddress ("glTexCoord2xvOES");
    s_deviceConfig.m_glTexCoord3xOES = (PFNGLTEXCOORD3XOESPROC) glewGetProcAddress ("glTexCoord3xOES");
    s_deviceConfig.m_glTexCoord3xvOES = (PFNGLTEXCOORD3XVOESPROC) glewGetProcAddress ("glTexCoord3xvOES");
    s_deviceConfig.m_glTexCoord4xOES = (PFNGLTEXCOORD4XOESPROC) glewGetProcAddress ("glTexCoord4xOES");
    s_deviceConfig.m_glTexCoord4xvOES = (PFNGLTEXCOORD4XVOESPROC) glewGetProcAddress ("glTexCoord4xvOES");
    s_deviceConfig.m_glTexGenxOES = (PFNGLTEXGENXOESPROC) glewGetProcAddress ("glTexGenxOES");
    s_deviceConfig.m_glTexGenxvOES = (PFNGLTEXGENXVOESPROC) glewGetProcAddress ("glTexGenxvOES");
    s_deviceConfig.m_glVertex2xOES = (PFNGLVERTEX2XOESPROC) glewGetProcAddress ("glVertex2xOES");
    s_deviceConfig.m_glVertex2xvOES = (PFNGLVERTEX2XVOESPROC) glewGetProcAddress ("glVertex2xvOES");
    s_deviceConfig.m_glVertex3xOES = (PFNGLVERTEX3XOESPROC) glewGetProcAddress ("glVertex3xOES");
    s_deviceConfig.m_glVertex3xvOES = (PFNGLVERTEX3XVOESPROC) glewGetProcAddress ("glVertex3xvOES");
    s_deviceConfig.m_glVertex4xOES = (PFNGLVERTEX4XOESPROC) glewGetProcAddress ("glVertex4xOES");
    s_deviceConfig.m_glVertex4xvOES = (PFNGLVERTEX4XVOESPROC) glewGetProcAddress ("glVertex4xvOES");
  }

  // GL_OES_query_matrix
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_query_matrix])
  {
    s_deviceConfig.m_glQueryMatrixxOES = (PFNGLQUERYMATRIXXOESPROC) glewGetProcAddress ("glQueryMatrixxOES");
  }

  // GL_OES_single_precision
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OES_single_precision])
  {
    s_deviceConfig.m_glClearDepthfOES = (PFNGLCLEARDEPTHFOESPROC) glewGetProcAddress ("glClearDepthfOES");
    s_deviceConfig.m_glClipPlanefOES = (PFNGLCLIPPLANEFOESPROC) glewGetProcAddress ("glClipPlanefOES");
    s_deviceConfig.m_glDepthRangefOES = (PFNGLDEPTHRANGEFOESPROC) glewGetProcAddress ("glDepthRangefOES");
    s_deviceConfig.m_glFrustumfOES = (PFNGLFRUSTUMFOESPROC) glewGetProcAddress ("glFrustumfOES");
    s_deviceConfig.m_glGetClipPlanefOES = (PFNGLGETCLIPPLANEFOESPROC) glewGetProcAddress ("glGetClipPlanefOES");
    s_deviceConfig.m_glOrthofOES = (PFNGLORTHOFOESPROC) glewGetProcAddress ("glOrthofOES");
  }

  // GL_OVR_multiview
  if (s_deviceConfig.m_featureSupported [GLEW_GL_OVR_multiview])
  {
    s_deviceConfig.m_glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) glewGetProcAddress ("glFramebufferTextureMultiviewOVR");
    s_deviceConfig.m_glNamedFramebufferTextureMultiviewOVR = (PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) glewGetProcAddress ("glNamedFramebufferTextureMultiviewOVR");
  }

  // GL_PGI_misc_hints
  if (s_deviceConfig.m_featureSupported [GLEW_GL_PGI_misc_hints])
  {
    s_deviceConfig.m_glHintPGI = (PFNGLHINTPGIPROC) glewGetProcAddress ("glHintPGI");
  }

  // GL_SGIS_detail_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_detail_texture])
  {
    s_deviceConfig.m_glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC) glewGetProcAddress ("glDetailTexFuncSGIS");
    s_deviceConfig.m_glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC) glewGetProcAddress ("glGetDetailTexFuncSGIS");
  }

  // GL_SGIS_fog_function
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_fog_function])
  {
    s_deviceConfig.m_glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC) glewGetProcAddress ("glFogFuncSGIS");
    s_deviceConfig.m_glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC) glewGetProcAddress ("glGetFogFuncSGIS");
  }

  // GL_SGIS_multisample
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_multisample])
  {
    s_deviceConfig.m_glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC) glewGetProcAddress ("glSampleMaskSGIS");
    s_deviceConfig.m_glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC) glewGetProcAddress ("glSamplePatternSGIS");
  }

  // GL_SGIS_pixel_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_pixel_texture])
  {
    s_deviceConfig.m_glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC) glewGetProcAddress ("glPixelTexGenParameteriSGIS");
    s_deviceConfig.m_glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC) glewGetProcAddress ("glPixelTexGenParameterivSGIS");
    s_deviceConfig.m_glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC) glewGetProcAddress ("glPixelTexGenParameterfSGIS");
    s_deviceConfig.m_glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC) glewGetProcAddress ("glPixelTexGenParameterfvSGIS");
    s_deviceConfig.m_glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC) glewGetProcAddress ("glGetPixelTexGenParameterivSGIS");
    s_deviceConfig.m_glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC) glewGetProcAddress ("glGetPixelTexGenParameterfvSGIS");
  }

  // GL_SGIS_point_parameters
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_point_parameters])
  {
    s_deviceConfig.m_glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC) glewGetProcAddress ("glPointParameterfSGIS");
    s_deviceConfig.m_glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC) glewGetProcAddress ("glPointParameterfvSGIS");
  }

  // GL_SGIS_sharpen_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_sharpen_texture])
  {
    s_deviceConfig.m_glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC) glewGetProcAddress ("glSharpenTexFuncSGIS");
    s_deviceConfig.m_glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC) glewGetProcAddress ("glGetSharpenTexFuncSGIS");
  }

  // GL_SGIS_texture4D
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture4D])
  {
    s_deviceConfig.m_glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC) glewGetProcAddress ("glTexImage4DSGIS");
    s_deviceConfig.m_glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC) glewGetProcAddress ("glTexSubImage4DSGIS");
  }

  // GL_SGIS_texture_color_mask
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_color_mask])
  {
    s_deviceConfig.m_glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC) glewGetProcAddress ("glTextureColorMaskSGIS");
  }

  // GL_SGIS_texture_filter4
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIS_texture_filter4])
  {
    s_deviceConfig.m_glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC) glewGetProcAddress ("glGetTexFilterFuncSGIS");
    s_deviceConfig.m_glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC) glewGetProcAddress ("glTexFilterFuncSGIS");
  }

  // GL_SGIX_async
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_async])
  {
    s_deviceConfig.m_glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC) glewGetProcAddress ("glAsyncMarkerSGIX");
    s_deviceConfig.m_glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC) glewGetProcAddress ("glFinishAsyncSGIX");
    s_deviceConfig.m_glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC) glewGetProcAddress ("glPollAsyncSGIX");
    s_deviceConfig.m_glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC) glewGetProcAddress ("glGenAsyncMarkersSGIX");
    s_deviceConfig.m_glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC) glewGetProcAddress ("glDeleteAsyncMarkersSGIX");
    s_deviceConfig.m_glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC) glewGetProcAddress ("glIsAsyncMarkerSGIX");
  }

  // GL_SGIX_flush_raster
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_flush_raster])
  {
    s_deviceConfig.m_glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC) glewGetProcAddress ("glFlushRasterSGIX");
  }

  // GL_SGIX_fragment_lighting
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_fragment_lighting])
  {
    s_deviceConfig.m_glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC) glewGetProcAddress ("glFragmentColorMaterialSGIX");
    s_deviceConfig.m_glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC) glewGetProcAddress ("glFragmentLightfSGIX");
    s_deviceConfig.m_glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC) glewGetProcAddress ("glFragmentLightfvSGIX");
    s_deviceConfig.m_glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC) glewGetProcAddress ("glFragmentLightiSGIX");
    s_deviceConfig.m_glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC) glewGetProcAddress ("glFragmentLightivSGIX");
    s_deviceConfig.m_glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC) glewGetProcAddress ("glFragmentLightModelfSGIX");
    s_deviceConfig.m_glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC) glewGetProcAddress ("glFragmentLightModelfvSGIX");
    s_deviceConfig.m_glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC) glewGetProcAddress ("glFragmentLightModeliSGIX");
    s_deviceConfig.m_glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC) glewGetProcAddress ("glFragmentLightModelivSGIX");
    s_deviceConfig.m_glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC) glewGetProcAddress ("glFragmentMaterialfSGIX");
    s_deviceConfig.m_glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC) glewGetProcAddress ("glFragmentMaterialfvSGIX");
    s_deviceConfig.m_glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC) glewGetProcAddress ("glFragmentMaterialiSGIX");
    s_deviceConfig.m_glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC) glewGetProcAddress ("glFragmentMaterialivSGIX");
    s_deviceConfig.m_glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC) glewGetProcAddress ("glGetFragmentLightfvSGIX");
    s_deviceConfig.m_glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC) glewGetProcAddress ("glGetFragmentLightivSGIX");
    s_deviceConfig.m_glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC) glewGetProcAddress ("glGetFragmentMaterialfvSGIX");
    s_deviceConfig.m_glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC) glewGetProcAddress ("glGetFragmentMaterialivSGIX");
    s_deviceConfig.m_glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC) glewGetProcAddress ("glLightEnviSGIX");
  }

  // GL_SGIX_framezoom
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_framezoom])
  {
    s_deviceConfig.m_glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC) glewGetProcAddress ("glFrameZoomSGIX");
  }

  // GL_SGIX_igloo_interface
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_igloo_interface])
  {
    s_deviceConfig.m_glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC) glewGetProcAddress ("glIglooInterfaceSGIX");
  }

  // GL_SGIX_instruments
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_instruments])
  {
    s_deviceConfig.m_glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC) glewGetProcAddress ("glGetInstrumentsSGIX");
    s_deviceConfig.m_glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC) glewGetProcAddress ("glInstrumentsBufferSGIX");
    s_deviceConfig.m_glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC) glewGetProcAddress ("glPollInstrumentsSGIX");
    s_deviceConfig.m_glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC) glewGetProcAddress ("glReadInstrumentsSGIX");
    s_deviceConfig.m_glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC) glewGetProcAddress ("glStartInstrumentsSGIX");
    s_deviceConfig.m_glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC) glewGetProcAddress ("glStopInstrumentsSGIX");
  }

  // GL_SGIX_list_priority
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_list_priority])
  {
    s_deviceConfig.m_glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC) glewGetProcAddress ("glGetListParameterfvSGIX");
    s_deviceConfig.m_glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC) glewGetProcAddress ("glGetListParameterivSGIX");
    s_deviceConfig.m_glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC) glewGetProcAddress ("glListParameterfSGIX");
    s_deviceConfig.m_glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC) glewGetProcAddress ("glListParameterfvSGIX");
    s_deviceConfig.m_glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC) glewGetProcAddress ("glListParameteriSGIX");
    s_deviceConfig.m_glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC) glewGetProcAddress ("glListParameterivSGIX");
  }

  // GL_SGIX_pixel_texture
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_pixel_texture])
  {
    s_deviceConfig.m_glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC) glewGetProcAddress ("glPixelTexGenSGIX");
  }

  // GL_SGIX_polynomial_ffd
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_polynomial_ffd])
  {
    s_deviceConfig.m_glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC) glewGetProcAddress ("glDeformationMap3dSGIX");
    s_deviceConfig.m_glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC) glewGetProcAddress ("glDeformationMap3fSGIX");
    s_deviceConfig.m_glDeformSGIX = (PFNGLDEFORMSGIXPROC) glewGetProcAddress ("glDeformSGIX");
    s_deviceConfig.m_glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC) glewGetProcAddress ("glLoadIdentityDeformationMapSGIX");
  }

  // GL_SGIX_reference_plane
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_reference_plane])
  {
    s_deviceConfig.m_glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC) glewGetProcAddress ("glReferencePlaneSGIX");
  }

  // GL_SGIX_sprite
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_sprite])
  {
    s_deviceConfig.m_glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC) glewGetProcAddress ("glSpriteParameterfSGIX");
    s_deviceConfig.m_glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC) glewGetProcAddress ("glSpriteParameterfvSGIX");
    s_deviceConfig.m_glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC) glewGetProcAddress ("glSpriteParameteriSGIX");
    s_deviceConfig.m_glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC) glewGetProcAddress ("glSpriteParameterivSGIX");
  }

  // GL_SGIX_tag_sample_buffer
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGIX_tag_sample_buffer])
  {
    s_deviceConfig.m_glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC) glewGetProcAddress ("glTagSampleBufferSGIX");
  }

  // GL_SGI_color_table
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SGI_color_table])
  {
    s_deviceConfig.m_glColorTableSGI = (PFNGLCOLORTABLESGIPROC) glewGetProcAddress ("glColorTableSGI");
    s_deviceConfig.m_glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC) glewGetProcAddress ("glColorTableParameterfvSGI");
    s_deviceConfig.m_glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC) glewGetProcAddress ("glColorTableParameterivSGI");
    s_deviceConfig.m_glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC) glewGetProcAddress ("glCopyColorTableSGI");
    s_deviceConfig.m_glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC) glewGetProcAddress ("glGetColorTableSGI");
    s_deviceConfig.m_glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC) glewGetProcAddress ("glGetColorTableParameterfvSGI");
    s_deviceConfig.m_glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC) glewGetProcAddress ("glGetColorTableParameterivSGI");
  }

  // GL_SUNX_constant_data
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SUNX_constant_data])
  {
    s_deviceConfig.m_glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC) glewGetProcAddress ("glFinishTextureSUNX");
  }

  // GL_SUN_global_alpha
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SUN_global_alpha])
  {
    s_deviceConfig.m_glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC) glewGetProcAddress ("glGlobalAlphaFactorbSUN");
    s_deviceConfig.m_glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC) glewGetProcAddress ("glGlobalAlphaFactorsSUN");
    s_deviceConfig.m_glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC) glewGetProcAddress ("glGlobalAlphaFactoriSUN");
    s_deviceConfig.m_glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC) glewGetProcAddress ("glGlobalAlphaFactorfSUN");
    s_deviceConfig.m_glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC) glewGetProcAddress ("glGlobalAlphaFactordSUN");
    s_deviceConfig.m_glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC) glewGetProcAddress ("glGlobalAlphaFactorubSUN");
    s_deviceConfig.m_glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC) glewGetProcAddress ("glGlobalAlphaFactorusSUN");
    s_deviceConfig.m_glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC) glewGetProcAddress ("glGlobalAlphaFactoruiSUN");
  }

  // GL_SUN_mesh_array
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SUN_mesh_array])
  {
    s_deviceConfig.m_glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC) glewGetProcAddress ("glDrawMeshArraysSUN");
  }

  // GL_SUN_triangle_list
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SUN_triangle_list])
  {
    s_deviceConfig.m_glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC) glewGetProcAddress ("glReplacementCodeuiSUN");
    s_deviceConfig.m_glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC) glewGetProcAddress ("glReplacementCodeusSUN");
    s_deviceConfig.m_glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC) glewGetProcAddress ("glReplacementCodeubSUN");
    s_deviceConfig.m_glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC) glewGetProcAddress ("glReplacementCodeuivSUN");
    s_deviceConfig.m_glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC) glewGetProcAddress ("glReplacementCodeusvSUN");
    s_deviceConfig.m_glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC) glewGetProcAddress ("glReplacementCodeubvSUN");
    s_deviceConfig.m_glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC) glewGetProcAddress ("glReplacementCodePointerSUN");
  }

  // GL_SUN_vertex
  if (s_deviceConfig.m_featureSupported [GLEW_GL_SUN_vertex])
  {
    s_deviceConfig.m_glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC) glewGetProcAddress ("glColor4ubVertex2fSUN");
    s_deviceConfig.m_glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC) glewGetProcAddress ("glColor4ubVertex2fvSUN");
    s_deviceConfig.m_glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC) glewGetProcAddress ("glColor4ubVertex3fSUN");
    s_deviceConfig.m_glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC) glewGetProcAddress ("glColor4ubVertex3fvSUN");
    s_deviceConfig.m_glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC) glewGetProcAddress ("glColor3fVertex3fSUN");
    s_deviceConfig.m_glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC) glewGetProcAddress ("glColor3fVertex3fvSUN");
    s_deviceConfig.m_glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glNormal3fVertex3fSUN");
    s_deviceConfig.m_glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glNormal3fVertex3fvSUN");
    s_deviceConfig.m_glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glColor4fNormal3fVertex3fSUN");
    s_deviceConfig.m_glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glColor4fNormal3fVertex3fvSUN");
    s_deviceConfig.m_glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC) glewGetProcAddress ("glTexCoord2fVertex3fSUN");
    s_deviceConfig.m_glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC) glewGetProcAddress ("glTexCoord2fVertex3fvSUN");
    s_deviceConfig.m_glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC) glewGetProcAddress ("glTexCoord4fVertex4fSUN");
    s_deviceConfig.m_glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC) glewGetProcAddress ("glTexCoord4fVertex4fvSUN");
    s_deviceConfig.m_glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC) glewGetProcAddress ("glTexCoord2fColor4ubVertex3fSUN");
    s_deviceConfig.m_glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC) glewGetProcAddress ("glTexCoord2fColor4ubVertex3fvSUN");
    s_deviceConfig.m_glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC) glewGetProcAddress ("glTexCoord2fColor3fVertex3fSUN");
    s_deviceConfig.m_glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC) glewGetProcAddress ("glTexCoord2fColor3fVertex3fvSUN");
    s_deviceConfig.m_glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glTexCoord2fNormal3fVertex3fSUN");
    s_deviceConfig.m_glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glTexCoord2fNormal3fVertex3fvSUN");
    s_deviceConfig.m_glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glTexCoord2fColor4fNormal3fVertex3fSUN");
    s_deviceConfig.m_glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glTexCoord2fColor4fNormal3fVertex3fvSUN");
    s_deviceConfig.m_glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC) glewGetProcAddress ("glTexCoord4fColor4fNormal3fVertex4fSUN");
    s_deviceConfig.m_glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC) glewGetProcAddress ("glTexCoord4fColor4fNormal3fVertex4fvSUN");
    s_deviceConfig.m_glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiColor4ubVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiColor4ubVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiColor3fVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiColor3fVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiNormal3fVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiNormal3fVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiTexCoord2fVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiTexCoord2fVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
    s_deviceConfig.m_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) glewGetProcAddress ("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
    s_deviceConfig.m_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) glewGetProcAddress ("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
  }

  s_initialised = true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void glew::gl::Deinitialise ()
{
  s_initialised = false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
