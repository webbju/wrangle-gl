////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLES_H__
#define __GLEW_GLES_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined (_WIN32)
#define GL_APICALL WINGDIAPI
#define GL_APIENTRY WINAPI
#define GL_APIENTRYP WINAPI*
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <wrangle.h>

#include <GLES3/gl32.h>

#include <GLES2/gl2ext.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// iOS/OSX frameworks use a slightly different style of header guard.
#ifndef __gl_es20_h_
#define __gl_es20_h_
#endif
#ifndef __gl_es20ext_h_
#define __gl_es20ext_h_
#endif
#ifndef __gl_es30_h_
#define __gl_es30_h_
#endif
#ifndef __gl_es30ext_h_
#define __gl_es30ext_h_
#endif
#ifndef __gl_es31_h_
#define __gl_es31_h_
#endif
#ifndef __gl_es31ext_h_
#define __gl_es31ext_h_
#endif
#ifndef __gl_es32_h_
#define __gl_es32_h_
#endif
#ifndef __gl_es32ext_h_
#define __gl_es32ext_h_
#endif

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

enum GLEW_GLES_FeatureSet
{
  GLEW_GL_ES_VERSION_2_0,
  GLEW_GL_ES_VERSION_3_0,
  GLEW_GL_ES_VERSION_3_1,
  GLEW_GL_ES_VERSION_3_2,
  GLEW_GL_AMD_compressed_3DC_texture,
  GLEW_GL_AMD_compressed_ATC_texture,
  GLEW_GL_AMD_framebuffer_multisample_advanced,
  GLEW_GL_AMD_performance_monitor,
  GLEW_GL_AMD_program_binary_Z400,
  GLEW_GL_ANDROID_extension_pack_es31a,
  GLEW_GL_ANGLE_depth_texture,
  GLEW_GL_ANGLE_framebuffer_blit,
  GLEW_GL_ANGLE_framebuffer_multisample,
  GLEW_GL_ANGLE_instanced_arrays,
  GLEW_GL_ANGLE_pack_reverse_row_order,
  GLEW_GL_ANGLE_program_binary,
  GLEW_GL_ANGLE_texture_compression_dxt3,
  GLEW_GL_ANGLE_texture_compression_dxt5,
  GLEW_GL_ANGLE_texture_usage,
  GLEW_GL_ANGLE_translated_shader_source,
  GLEW_GL_APPLE_clip_distance,
  GLEW_GL_APPLE_color_buffer_packed_float,
  GLEW_GL_APPLE_copy_texture_levels,
  GLEW_GL_APPLE_framebuffer_multisample,
  GLEW_GL_APPLE_rgb_422,
  GLEW_GL_APPLE_sync,
  GLEW_GL_APPLE_texture_format_BGRA8888,
  GLEW_GL_APPLE_texture_max_level,
  GLEW_GL_APPLE_texture_packed_float,
  GLEW_GL_ARM_mali_program_binary,
  GLEW_GL_ARM_mali_shader_binary,
  GLEW_GL_ARM_rgba8,
  GLEW_GL_ARM_shader_framebuffer_fetch,
  GLEW_GL_ARM_shader_framebuffer_fetch_depth_stencil,
  GLEW_GL_ARM_texture_unnormalized_coordinates,
  GLEW_GL_DMP_program_binary,
  GLEW_GL_DMP_shader_binary,
  GLEW_GL_EXT_EGL_image_array,
  GLEW_GL_EXT_EGL_image_storage,
  GLEW_GL_EXT_YUV_target,
  GLEW_GL_EXT_base_instance,
  GLEW_GL_EXT_blend_func_extended,
  GLEW_GL_EXT_blend_minmax,
  GLEW_GL_EXT_buffer_storage,
  GLEW_GL_EXT_clear_texture,
  GLEW_GL_EXT_clip_control,
  GLEW_GL_EXT_clip_cull_distance,
  GLEW_GL_EXT_color_buffer_float,
  GLEW_GL_EXT_color_buffer_half_float,
  GLEW_GL_EXT_conservative_depth,
  GLEW_GL_EXT_copy_image,
  GLEW_GL_EXT_debug_label,
  GLEW_GL_EXT_debug_marker,
  GLEW_GL_EXT_depth_clamp,
  GLEW_GL_EXT_discard_framebuffer,
  GLEW_GL_EXT_disjoint_timer_query,
  GLEW_GL_EXT_draw_buffers,
  GLEW_GL_EXT_draw_buffers_indexed,
  GLEW_GL_EXT_draw_elements_base_vertex,
  GLEW_GL_EXT_draw_instanced,
  GLEW_GL_EXT_draw_transform_feedback,
  GLEW_GL_EXT_external_buffer,
  GLEW_GL_EXT_float_blend,
  GLEW_GL_EXT_geometry_point_size,
  GLEW_GL_EXT_geometry_shader,
  GLEW_GL_EXT_gpu_shader5,
  GLEW_GL_EXT_instanced_arrays,
  GLEW_GL_EXT_map_buffer_range,
  GLEW_GL_EXT_memory_object,
  GLEW_GL_EXT_memory_object_fd,
  GLEW_GL_EXT_memory_object_win32,
  GLEW_GL_EXT_multi_draw_arrays,
  GLEW_GL_EXT_multi_draw_indirect,
  GLEW_GL_EXT_multisampled_compatibility,
  GLEW_GL_EXT_multisampled_render_to_texture,
  GLEW_GL_EXT_multisampled_render_to_texture2,
  GLEW_GL_EXT_multiview_draw_buffers,
  GLEW_GL_EXT_multiview_tessellation_geometry_shader,
  GLEW_GL_EXT_multiview_texture_multisample,
  GLEW_GL_EXT_multiview_timer_query,
  GLEW_GL_EXT_occlusion_query_boolean,
  GLEW_GL_EXT_polygon_offset_clamp,
  GLEW_GL_EXT_post_depth_coverage,
  GLEW_GL_EXT_primitive_bounding_box,
  GLEW_GL_EXT_protected_textures,
  GLEW_GL_EXT_pvrtc_sRGB,
  GLEW_GL_EXT_raster_multisample,
  GLEW_GL_EXT_read_format_bgra,
  GLEW_GL_EXT_render_snorm,
  GLEW_GL_EXT_robustness,
  GLEW_GL_EXT_semaphore,
  GLEW_GL_EXT_semaphore_fd,
  GLEW_GL_EXT_semaphore_win32,
  GLEW_GL_EXT_sRGB,
  GLEW_GL_EXT_sRGB_write_control,
  GLEW_GL_EXT_separate_shader_objects,
  GLEW_GL_EXT_shader_framebuffer_fetch,
  GLEW_GL_EXT_shader_framebuffer_fetch_non_coherent,
  GLEW_GL_EXT_shader_group_vote,
  GLEW_GL_EXT_shader_implicit_conversions,
  GLEW_GL_EXT_shader_integer_mix,
  GLEW_GL_EXT_shader_io_blocks,
  GLEW_GL_EXT_shader_non_constant_global_initializers,
  GLEW_GL_EXT_shader_pixel_local_storage,
  GLEW_GL_EXT_shader_pixel_local_storage2,
  GLEW_GL_EXT_shader_texture_lod,
  GLEW_GL_EXT_shadow_samplers,
  GLEW_GL_EXT_sparse_texture,
  GLEW_GL_EXT_sparse_texture2,
  GLEW_GL_EXT_tessellation_point_size,
  GLEW_GL_EXT_tessellation_shader,
  GLEW_GL_EXT_texture_border_clamp,
  GLEW_GL_EXT_texture_buffer,
  GLEW_GL_EXT_texture_compression_astc_decode_mode,
  GLEW_GL_EXT_texture_compression_bptc,
  GLEW_GL_EXT_texture_compression_dxt1,
  GLEW_GL_EXT_texture_compression_rgtc,
  GLEW_GL_EXT_texture_compression_s3tc,
  GLEW_GL_EXT_texture_compression_s3tc_srgb,
  GLEW_GL_EXT_texture_cube_map_array,
  GLEW_GL_EXT_texture_filter_anisotropic,
  GLEW_GL_EXT_texture_filter_minmax,
  GLEW_GL_EXT_texture_format_BGRA8888,
  GLEW_GL_EXT_texture_format_sRGB_override,
  GLEW_GL_EXT_texture_mirror_clamp_to_edge,
  GLEW_GL_EXT_texture_norm16,
  GLEW_GL_EXT_texture_query_lod,
  GLEW_GL_EXT_texture_rg,
  GLEW_GL_EXT_texture_sRGB_R8,
  GLEW_GL_EXT_texture_sRGB_RG8,
  GLEW_GL_EXT_texture_sRGB_decode,
  GLEW_GL_EXT_texture_storage,
  GLEW_GL_EXT_texture_type_2_10_10_10_REV,
  GLEW_GL_EXT_texture_view,
  GLEW_GL_NV_timeline_semaphore,
  GLEW_GL_EXT_unpack_subimage,
  GLEW_GL_EXT_win32_keyed_mutex,
  GLEW_GL_EXT_window_rectangles,
  GLEW_GL_FJ_shader_binary_GCCSO,
  GLEW_GL_IMG_bindless_texture,
  GLEW_GL_IMG_framebuffer_downsample,
  GLEW_GL_IMG_multisampled_render_to_texture,
  GLEW_GL_IMG_program_binary,
  GLEW_GL_IMG_read_format,
  GLEW_GL_IMG_shader_binary,
  GLEW_GL_IMG_texture_compression_pvrtc,
  GLEW_GL_IMG_texture_compression_pvrtc2,
  GLEW_GL_IMG_texture_filter_cubic,
  GLEW_GL_INTEL_conservative_rasterization,
  GLEW_GL_INTEL_framebuffer_CMAA,
  GLEW_GL_INTEL_blackhole_render,
  GLEW_GL_INTEL_performance_query,
  GLEW_GL_KHR_blend_equation_advanced,
  GLEW_GL_KHR_blend_equation_advanced_coherent,
  GLEW_GL_KHR_context_flush_control,
  GLEW_GL_KHR_debug,
  GLEW_GL_KHR_no_error,
  GLEW_GL_KHR_robust_buffer_access_behavior,
  GLEW_GL_KHR_robustness,
  GLEW_GL_KHR_shader_subgroup,
  GLEW_GL_KHR_texture_compression_astc_hdr,
  GLEW_GL_KHR_texture_compression_astc_ldr,
  GLEW_GL_KHR_texture_compression_astc_sliced_3d,
  GLEW_GL_KHR_parallel_shader_compile,
  GLEW_GL_MESA_framebuffer_flip_x,
  GLEW_GL_MESA_framebuffer_flip_y,
  GLEW_GL_MESA_framebuffer_swap_xy,
  GLEW_GL_MESA_program_binary_formats,
  GLEW_GL_MESA_shader_integer_functions,
  GLEW_GL_NVX_blend_equation_advanced_multi_draw_buffers,
  GLEW_GL_NV_bindless_texture,
  GLEW_GL_NV_blend_equation_advanced,
  GLEW_GL_NV_blend_equation_advanced_coherent,
  GLEW_GL_NV_blend_minmax_factor,
  GLEW_GL_NV_clip_space_w_scaling,
  GLEW_GL_NV_compute_shader_derivatives,
  GLEW_GL_NV_conditional_render,
  GLEW_GL_NV_conservative_raster,
  GLEW_GL_NV_conservative_raster_pre_snap,
  GLEW_GL_NV_conservative_raster_pre_snap_triangles,
  GLEW_GL_NV_copy_buffer,
  GLEW_GL_NV_coverage_sample,
  GLEW_GL_NV_depth_nonlinear,
  GLEW_GL_NV_draw_buffers,
  GLEW_GL_NV_draw_instanced,
  GLEW_GL_NV_draw_vulkan_image,
  GLEW_GL_NV_explicit_attrib_location,
  GLEW_GL_NV_fbo_color_attachments,
  GLEW_GL_NV_fence,
  GLEW_GL_NV_fill_rectangle,
  GLEW_GL_NV_fragment_coverage_to_color,
  GLEW_GL_NV_fragment_shader_barycentric,
  GLEW_GL_NV_fragment_shader_interlock,
  GLEW_GL_NV_framebuffer_blit,
  GLEW_GL_NV_framebuffer_mixed_samples,
  GLEW_GL_NV_framebuffer_multisample,
  GLEW_GL_NV_generate_mipmap_sRGB,
  GLEW_GL_NV_geometry_shader_passthrough,
  GLEW_GL_NV_gpu_shader5,
  GLEW_GL_NV_image_formats,
  GLEW_GL_NV_instanced_arrays,
  GLEW_GL_NV_internalformat_sample_query,
  GLEW_GL_NV_memory_attachment,
  GLEW_GL_NV_memory_object_sparse,
  GLEW_GL_NV_mesh_shader,
  GLEW_GL_NV_non_square_matrices,
  GLEW_GL_NV_path_rendering,
  GLEW_GL_NV_path_rendering_shared_edge,
  GLEW_GL_NV_pixel_buffer_object,
  GLEW_GL_NV_polygon_mode,
  GLEW_GL_NV_primitive_shading_rate,
  GLEW_GL_NV_read_buffer,
  GLEW_GL_NV_read_buffer_front,
  GLEW_GL_NV_read_depth,
  GLEW_GL_NV_read_depth_stencil,
  GLEW_GL_NV_read_stencil,
  GLEW_GL_NV_representative_fragment_test,
  GLEW_GL_NV_sRGB_formats,
  GLEW_GL_NV_sample_locations,
  GLEW_GL_NV_sample_mask_override_coverage,
  GLEW_GL_NV_scissor_exclusive,
  GLEW_GL_NV_shader_atomic_fp16_vector,
  GLEW_GL_NV_shader_noperspective_interpolation,
  GLEW_GL_NV_shader_subgroup_partitioned,
  GLEW_GL_NV_shader_texture_footprint,
  GLEW_GL_NV_shading_rate_image,
  GLEW_GL_NV_shadow_samplers_array,
  GLEW_GL_NV_shadow_samplers_cube,
  GLEW_GL_NV_stereo_view_rendering,
  GLEW_GL_NV_texture_border_clamp,
  GLEW_GL_NV_texture_compression_s3tc_update,
  GLEW_GL_NV_texture_npot_2D_mipmap,
  GLEW_GL_NV_viewport_array,
  GLEW_GL_NV_viewport_array2,
  GLEW_GL_NV_viewport_swizzle,
  GLEW_GL_OES_EGL_image,
  GLEW_GL_OES_EGL_image_external,
  GLEW_GL_OES_EGL_image_external_essl3,
  GLEW_GL_OES_compressed_ETC1_RGB8_sub_texture,
  GLEW_GL_OES_compressed_ETC1_RGB8_texture,
  GLEW_GL_OES_compressed_paletted_texture,
  GLEW_GL_OES_copy_image,
  GLEW_GL_OES_depth24,
  GLEW_GL_OES_depth32,
  GLEW_GL_OES_depth_texture,
  GLEW_GL_OES_draw_buffers_indexed,
  GLEW_GL_OES_draw_elements_base_vertex,
  GLEW_GL_OES_element_index_uint,
  GLEW_GL_OES_fbo_render_mipmap,
  GLEW_GL_OES_fragment_precision_high,
  GLEW_GL_OES_geometry_point_size,
  GLEW_GL_OES_geometry_shader,
  GLEW_GL_OES_get_program_binary,
  GLEW_GL_OES_gpu_shader5,
  GLEW_GL_OES_mapbuffer,
  GLEW_GL_OES_packed_depth_stencil,
  GLEW_GL_OES_primitive_bounding_box,
  GLEW_GL_OES_required_internalformat,
  GLEW_GL_OES_rgb8_rgba8,
  GLEW_GL_OES_sample_shading,
  GLEW_GL_OES_sample_variables,
  GLEW_GL_OES_shader_image_atomic,
  GLEW_GL_OES_shader_io_blocks,
  GLEW_GL_OES_shader_multisample_interpolation,
  GLEW_GL_OES_standard_derivatives,
  GLEW_GL_OES_stencil1,
  GLEW_GL_OES_stencil4,
  GLEW_GL_OES_surfaceless_context,
  GLEW_GL_OES_tessellation_point_size,
  GLEW_GL_OES_tessellation_shader,
  GLEW_GL_OES_texture_3D,
  GLEW_GL_OES_texture_border_clamp,
  GLEW_GL_OES_texture_buffer,
  GLEW_GL_OES_texture_compression_astc,
  GLEW_GL_OES_texture_cube_map_array,
  GLEW_GL_OES_texture_float,
  GLEW_GL_OES_texture_float_linear,
  GLEW_GL_OES_texture_half_float,
  GLEW_GL_OES_texture_half_float_linear,
  GLEW_GL_OES_texture_npot,
  GLEW_GL_OES_texture_stencil8,
  GLEW_GL_OES_texture_storage_multisample_2d_array,
  GLEW_GL_OES_texture_view,
  GLEW_GL_OES_vertex_array_object,
  GLEW_GL_OES_vertex_half_float,
  GLEW_GL_OES_vertex_type_10_10_10_2,
  GLEW_GL_OES_viewport_array,
  GLEW_GL_OVR_multiview,
  GLEW_GL_OVR_multiview2,
  GLEW_GL_OVR_multiview_multisampled_render_to_texture,
  GLEW_GL_QCOM_alpha_test,
  GLEW_GL_QCOM_binning_control,
  GLEW_GL_QCOM_driver_control,
  GLEW_GL_QCOM_extended_get,
  GLEW_GL_QCOM_extended_get2,
  GLEW_GL_QCOM_framebuffer_foveated,
  GLEW_GL_QCOM_motion_estimation,
  GLEW_GL_QCOM_frame_extrapolation,
  GLEW_GL_QCOM_texture_foveated,
  GLEW_GL_QCOM_texture_foveated2,
  GLEW_GL_QCOM_texture_foveated_subsampled_layout,
  GLEW_GL_QCOM_perfmon_global_mode,
  GLEW_GL_QCOM_shader_framebuffer_fetch_noncoherent,
  GLEW_GL_QCOM_shader_framebuffer_fetch_rate,
  GLEW_GL_QCOM_shading_rate,
  GLEW_GL_QCOM_tiled_rendering,
  GLEW_GL_QCOM_writeonly_rendering,
  GLEW_GL_QCOM_YUV_texture_gather,
  GLEW_GL_VIV_shader_binary,
  GLEW_GL_EXT_texture_shadow_lod,
  GLEW_GLES_FeatureSetCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glActiveTexture (GLenum texture);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glAttachShader (GLuint program, GLuint shader);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBindAttribLocation (GLuint program, GLuint index, const GLchar * name);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBindBuffer (GLenum target, GLuint buffer);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBindFramebuffer (GLenum target, GLuint framebuffer);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBindRenderbuffer (GLenum target, GLuint renderbuffer);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBindTexture (GLenum target, GLuint texture);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBlendEquation (GLenum mode);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBlendFunc (GLenum sfactor, GLenum dfactor);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBufferData (GLenum target, GLsizeiptr size, const void * data, GLenum usage);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
GLEW_EXTERN_C GL_APICALL GLenum GL_APIENTRY glCheckFramebufferStatus (GLenum target);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glClear (GLbitfield mask);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glClearDepthf (GLfloat d);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glClearStencil (GLint s);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glCompileShader (GLuint shader);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_EXTERN_C GL_APICALL GLuint GL_APIENTRY glCreateProgram ();
GLEW_EXTERN_C GL_APICALL GLuint GL_APIENTRY glCreateShader (GLenum type);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glCullFace (GLenum mode);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDeleteBuffers (GLsizei n, const GLuint * buffers);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDeleteProgram (GLuint program);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDeleteShader (GLuint shader);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDeleteTextures (GLsizei n, const GLuint * textures);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDepthFunc (GLenum func);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDepthMask (GLboolean flag);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDepthRangef (GLfloat n, GLfloat f);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDetachShader (GLuint program, GLuint shader);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDisable (GLenum cap);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDisableVertexAttribArray (GLuint index);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDrawArrays (GLenum mode, GLint first, GLsizei count);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glDrawElements (GLenum mode, GLsizei count, GLenum type, const void * indices);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glEnable (GLenum cap);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glEnableVertexAttribArray (GLuint index);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glFinish ();
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glFlush ();
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glFrontFace (GLenum mode);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGenBuffers (GLsizei n, GLuint * buffers);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGenerateMipmap (GLenum target);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGenFramebuffers (GLsizei n, GLuint * framebuffers);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGenRenderbuffers (GLsizei n, GLuint * renderbuffers);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGenTextures (GLsizei n, GLuint * textures);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
GLEW_EXTERN_C GL_APICALL GLint GL_APIENTRY glGetAttribLocation (GLuint program, const GLchar * name);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetBooleanv (GLenum pname, GLboolean * data);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetBufferParameteriv (GLenum target, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL GLenum GL_APIENTRY glGetError ();
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetFloatv (GLenum pname, GLfloat * data);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetIntegerv (GLenum pname, GLint * data);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetProgramiv (GLuint program, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetShaderiv (GLuint shader, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
GLEW_EXTERN_C GL_APICALL const GLubyte * GL_APIENTRY glGetString (GLenum name);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetTexParameterfv (GLenum target, GLenum pname, GLfloat * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetTexParameteriv (GLenum target, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetUniformfv (GLuint program, GLint location, GLfloat * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetUniformiv (GLuint program, GLint location, GLint * params);
GLEW_EXTERN_C GL_APICALL GLint GL_APIENTRY glGetUniformLocation (GLuint program, const GLchar * name);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetVertexAttribiv (GLuint index, GLenum pname, GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glGetVertexAttribPointerv (GLuint index, GLenum pname, void ** pointer);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glHint (GLenum target, GLenum mode);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsBuffer (GLuint buffer);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsEnabled (GLenum cap);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsFramebuffer (GLuint framebuffer);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsProgram (GLuint program);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsRenderbuffer (GLuint renderbuffer);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsShader (GLuint shader);
GLEW_EXTERN_C GL_APICALL GLboolean GL_APIENTRY glIsTexture (GLuint texture);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glLineWidth (GLfloat width);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glLinkProgram (GLuint program);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glPixelStorei (GLenum pname, GLint param);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glPolygonOffset (GLfloat factor, GLfloat units);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glReleaseShaderCompiler ();
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glSampleCoverage (GLfloat value, GLboolean invert);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glShaderSource (GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glStencilFunc (GLenum func, GLint ref, GLuint mask);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glStencilMask (GLuint mask);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glStencilMaskSeparate (GLenum face, GLuint mask);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glTexParameterf (GLenum target, GLenum pname, GLfloat param);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glTexParameterfv (GLenum target, GLenum pname, const GLfloat * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glTexParameteri (GLenum target, GLenum pname, GLint param);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glTexParameteriv (GLenum target, GLenum pname, const GLint * params);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform1f (GLint location, GLfloat v0);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform1fv (GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform1i (GLint location, GLint v0);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform1iv (GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform2f (GLint location, GLfloat v0, GLfloat v1);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform2fv (GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform2i (GLint location, GLint v0, GLint v1);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform2iv (GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform3fv (GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform3iv (GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform4fv (GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniform4iv (GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glUseProgram (GLuint program);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glValidateProgram (GLuint program);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib1f (GLuint index, GLfloat x);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib1fv (GLuint index, const GLfloat * v);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib2fv (GLuint index, const GLfloat * v);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib3fv (GLuint index, const GLfloat * v);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttrib4fv (GLuint index, const GLfloat * v);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
GLEW_EXTERN_C GL_APICALL void GL_APIENTRY glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLREADBUFFERPROC) /* glReadBuffer */ (GLenum src);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSPROC) /* glDrawRangeElements */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DPROC) /* glTexImage3D */ (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DPROC) /* glTexSubImage3D */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DPROC) /* glCopyTexSubImage3D */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DPROC) /* glCompressedTexImage3D */ (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) /* glCompressedTexSubImage3D */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLGENQUERIESPROC) /* glGenQueries */ (GLsizei n, GLuint * ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESPROC) /* glDeleteQueries */ (GLsizei n, const GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYPROC) /* glIsQuery */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYPROC) /* glBeginQuery */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYPROC) /* glEndQuery */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVPROC) /* glGetQueryiv */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVPROC) /* glGetQueryObjectuiv */ (GLuint id, GLenum pname, GLuint * params);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFERPROC) /* glUnmapBuffer */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVPROC) /* glGetBufferPointerv */ (GLenum target, GLenum pname, void ** params);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSPROC) /* glDrawBuffers */ (GLsizei n, const GLenum * bufs);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X3FVPROC) /* glUniformMatrix2x3fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X2FVPROC) /* glUniformMatrix3x2fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X4FVPROC) /* glUniformMatrix2x4fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X2FVPROC) /* glUniformMatrix4x2fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X4FVPROC) /* glUniformMatrix3x4fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X3FVPROC) /* glUniformMatrix4x3fv */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERPROC) /* glBlitFramebuffer */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) /* glRenderbufferStorageMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) /* glFramebufferTextureLayer */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void * (GL_APIENTRYP PFNGLMAPBUFFERRANGEPROC) /* glMapBufferRange */ (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) /* glFlushMappedBufferRange */ (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYPROC) /* glBindVertexArray */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) /* glDeleteVertexArrays */ (GLsizei n, const GLuint * arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSPROC) /* glGenVertexArrays */ (GLsizei n, GLuint * arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYPROC) /* glIsVertexArray */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLGETINTEGERI_VPROC) /* glGetIntegeri_v */ (GLenum target, GLuint index, GLint * data);
typedef void (GL_APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKPROC) /* glBeginTransformFeedback */ (GLenum primitiveMode);
typedef void (GL_APIENTRYP PFNGLENDTRANSFORMFEEDBACKPROC) /* glEndTransformFeedback */ ();
typedef void (GL_APIENTRYP PFNGLBINDBUFFERRANGEPROC) /* glBindBufferRange */ (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLBINDBUFFERBASEPROC) /* glBindBufferBase */ (GLenum target, GLuint index, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSPROC) /* glTransformFeedbackVaryings */ (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
typedef void (GL_APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) /* glGetTransformFeedbackVarying */ (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBIPOINTERPROC) /* glVertexAttribIPointer */ (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (GL_APIENTRYP PFNGLGETVERTEXATTRIBIIVPROC) /* glGetVertexAttribIiv */ (GLuint index, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETVERTEXATTRIBIUIVPROC) /* glGetVertexAttribIuiv */ (GLuint index, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4IPROC) /* glVertexAttribI4i */ (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4UIPROC) /* glVertexAttribI4ui */ (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4IVPROC) /* glVertexAttribI4iv */ (GLuint index, const GLint * v);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBI4UIVPROC) /* glVertexAttribI4uiv */ (GLuint index, const GLuint * v);
typedef void (GL_APIENTRYP PFNGLGETUNIFORMUIVPROC) /* glGetUniformuiv */ (GLuint program, GLint location, GLuint * params);
typedef GLint (GL_APIENTRYP PFNGLGETFRAGDATALOCATIONPROC) /* glGetFragDataLocation */ (GLuint program, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UIPROC) /* glUniform1ui */ (GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UIPROC) /* glUniform2ui */ (GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UIPROC) /* glUniform3ui */ (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UIPROC) /* glUniform4ui */ (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UIVPROC) /* glUniform1uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UIVPROC) /* glUniform2uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UIVPROC) /* glUniform3uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UIVPROC) /* glUniform4uiv */ (GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERIVPROC) /* glClearBufferiv */ (GLenum buffer, GLint drawbuffer, const GLint * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERUIVPROC) /* glClearBufferuiv */ (GLenum buffer, GLint drawbuffer, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERFVPROC) /* glClearBufferfv */ (GLenum buffer, GLint drawbuffer, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLCLEARBUFFERFIPROC) /* glClearBufferfi */ (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte * (GL_APIENTRYP PFNGLGETSTRINGIPROC) /* glGetStringi */ (GLenum name, GLuint index);
typedef void (GL_APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) /* glCopyBufferSubData */ (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLGETUNIFORMINDICESPROC) /* glGetUniformIndices */ (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
typedef void (GL_APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) /* glGetActiveUniformsiv */ (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
typedef GLuint (GL_APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) /* glGetUniformBlockIndex */ (GLuint program, const GLchar * uniformBlockName);
typedef void (GL_APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) /* glGetActiveUniformBlockiv */ (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) /* glGetActiveUniformBlockName */ (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
typedef void (GL_APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) /* glUniformBlockBinding */ (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDPROC) /* glDrawArraysInstanced */ (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDPROC) /* glDrawElementsInstanced */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCPROC) /* glFenceSync */ (GLenum condition, GLbitfield flags);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCPROC) /* glIsSync */ (GLsync sync);
typedef void (GL_APIENTRYP PFNGLDELETESYNCPROC) /* glDeleteSync */ (GLsync sync);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCPROC) /* glClientWaitSync */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLWAITSYNCPROC) /* glWaitSync */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VPROC) /* glGetInteger64v */ (GLenum pname, GLint64 * data);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVPROC) /* glGetSynciv */ (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64I_VPROC) /* glGetInteger64i_v */ (GLenum target, GLuint index, GLint64 * data);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPARAMETERI64VPROC) /* glGetBufferParameteri64v */ (GLenum target, GLenum pname, GLint64 * params);
typedef void (GL_APIENTRYP PFNGLGENSAMPLERSPROC) /* glGenSamplers */ (GLsizei count, GLuint * samplers);
typedef void (GL_APIENTRYP PFNGLDELETESAMPLERSPROC) /* glDeleteSamplers */ (GLsizei count, const GLuint * samplers);
typedef GLboolean (GL_APIENTRYP PFNGLISSAMPLERPROC) /* glIsSampler */ (GLuint sampler);
typedef void (GL_APIENTRYP PFNGLBINDSAMPLERPROC) /* glBindSampler */ (GLuint unit, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIPROC) /* glSamplerParameteri */ (GLuint sampler, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) /* glSamplerParameteriv */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERFPROC) /* glSamplerParameterf */ (GLuint sampler, GLenum pname, GLfloat param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) /* glSamplerParameterfv */ (GLuint sampler, GLenum pname, const GLfloat * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) /* glGetSamplerParameteriv */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) /* glGetSamplerParameterfv */ (GLuint sampler, GLenum pname, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORPROC) /* glVertexAttribDivisor */ (GLuint index, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) /* glBindTransformFeedback */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) /* glDeleteTransformFeedbacks */ (GLsizei n, const GLuint * ids);
typedef void (GL_APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) /* glGenTransformFeedbacks */ (GLsizei n, GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) /* glIsTransformFeedback */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) /* glPauseTransformFeedback */ ();
typedef void (GL_APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) /* glResumeTransformFeedback */ ();
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYPROC) /* glGetProgramBinary */ (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYPROC) /* glProgramBinary */ (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
typedef void (GL_APIENTRYP PFNGLPROGRAMPARAMETERIPROC) /* glProgramParameteri */ (GLuint program, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLINVALIDATEFRAMEBUFFERPROC) /* glInvalidateFramebuffer */ (GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (GL_APIENTRYP PFNGLINVALIDATESUBFRAMEBUFFERPROC) /* glInvalidateSubFramebuffer */ (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DPROC) /* glTexStorage2D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DPROC) /* glTexStorage3D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLGETINTERNALFORMATIVPROC) /* glGetInternalformativ */ (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params);
typedef void (GL_APIENTRYP PFNGLDISPATCHCOMPUTEPROC) /* glDispatchCompute */ (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (GL_APIENTRYP PFNGLDISPATCHCOMPUTEINDIRECTPROC) /* glDispatchComputeIndirect */ (GLintptr indirect);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) /* glDrawArraysIndirect */ (GLenum mode, const void * indirect);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) /* glDrawElementsIndirect */ (GLenum mode, GLenum type, const void * indirect);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPARAMETERIPROC) /* glFramebufferParameteri */ (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVPROC) /* glGetFramebufferParameteriv */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMINTERFACEIVPROC) /* glGetProgramInterfaceiv */ (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
typedef GLuint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEINDEXPROC) /* glGetProgramResourceIndex */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCENAMEPROC) /* glGetProgramResourceName */ (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEIVPROC) /* glGetProgramResourceiv */ (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params);
typedef GLint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONPROC) /* glGetProgramResourceLocation */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) /* glUseProgramStages */ (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GL_APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) /* glActiveShaderProgram */ (GLuint pipeline, GLuint program);
typedef GLuint (GL_APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) /* glCreateShaderProgramv */ (GLenum type, GLsizei count, const GLchar *const* strings);
typedef void (GL_APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) /* glBindProgramPipeline */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) /* glDeleteProgramPipelines */ (GLsizei n, const GLuint * pipelines);
typedef void (GL_APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) /* glGenProgramPipelines */ (GLsizei n, GLuint * pipelines);
typedef GLboolean (GL_APIENTRYP PFNGLISPROGRAMPIPELINEPROC) /* glIsProgramPipeline */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) /* glGetProgramPipelineiv */ (GLuint pipeline, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) /* glProgramUniform1i */ (GLuint program, GLint location, GLint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) /* glProgramUniform2i */ (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) /* glProgramUniform3i */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) /* glProgramUniform4i */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) /* glProgramUniform1ui */ (GLuint program, GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) /* glProgramUniform2ui */ (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) /* glProgramUniform3ui */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) /* glProgramUniform4ui */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) /* glProgramUniform1f */ (GLuint program, GLint location, GLfloat v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) /* glProgramUniform2f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) /* glProgramUniform3f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) /* glProgramUniform4f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) /* glProgramUniform1iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) /* glProgramUniform2iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) /* glProgramUniform3iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) /* glProgramUniform4iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) /* glProgramUniform1uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) /* glProgramUniform2uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) /* glProgramUniform3uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) /* glProgramUniform4uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) /* glProgramUniform1fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) /* glProgramUniform2fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) /* glProgramUniform3fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) /* glProgramUniform4fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) /* glProgramUniformMatrix2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) /* glProgramUniformMatrix3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) /* glProgramUniformMatrix4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) /* glProgramUniformMatrix2x3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) /* glProgramUniformMatrix3x2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) /* glProgramUniformMatrix2x4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) /* glProgramUniformMatrix4x2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) /* glProgramUniformMatrix3x4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) /* glProgramUniformMatrix4x3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) /* glValidateProgramPipeline */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) /* glGetProgramPipelineInfoLog */ (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GL_APIENTRYP PFNGLBINDIMAGETEXTUREPROC) /* glBindImageTexture */ (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (GL_APIENTRYP PFNGLGETBOOLEANI_VPROC) /* glGetBooleani_v */ (GLenum target, GLuint index, GLboolean * data);
typedef void (GL_APIENTRYP PFNGLMEMORYBARRIERPROC) /* glMemoryBarrier */ (GLbitfield barriers);
typedef void (GL_APIENTRYP PFNGLMEMORYBARRIERBYREGIONPROC) /* glMemoryBarrierByRegion */ (GLbitfield barriers);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DMULTISAMPLEPROC) /* glTexStorage2DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLGETMULTISAMPLEFVPROC) /* glGetMultisamplefv */ (GLenum pname, GLuint index, GLfloat * val);
typedef void (GL_APIENTRYP PFNGLSAMPLEMASKIPROC) /* glSampleMaski */ (GLuint maskNumber, GLbitfield mask);
typedef void (GL_APIENTRYP PFNGLGETTEXLEVELPARAMETERIVPROC) /* glGetTexLevelParameteriv */ (GLenum target, GLint level, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXLEVELPARAMETERFVPROC) /* glGetTexLevelParameterfv */ (GLenum target, GLint level, GLenum pname, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLBINDVERTEXBUFFERPROC) /* glBindVertexBuffer */ (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBFORMATPROC) /* glVertexAttribFormat */ (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBIFORMATPROC) /* glVertexAttribIFormat */ (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBBINDINGPROC) /* glVertexAttribBinding */ (GLuint attribindex, GLuint bindingindex);
typedef void (GL_APIENTRYP PFNGLVERTEXBINDINGDIVISORPROC) /* glVertexBindingDivisor */ (GLuint bindingindex, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERPROC) /* glBlendBarrier */ ();
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAPROC) /* glCopyImageSubData */ (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECONTROLPROC) /* glDebugMessageControl */ (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGEINSERTPROC) /* glDebugMessageInsert */ (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECALLBACKPROC) /* glDebugMessageCallback */ (GLDEBUGPROC callback, const void * userParam);
typedef GLuint (GL_APIENTRYP PFNGLGETDEBUGMESSAGELOGPROC) /* glGetDebugMessageLog */ (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef void (GL_APIENTRYP PFNGLPUSHDEBUGGROUPPROC) /* glPushDebugGroup */ (GLenum source, GLuint id, GLsizei length, const GLchar * message);
typedef void (GL_APIENTRYP PFNGLPOPDEBUGGROUPPROC) /* glPopDebugGroup */ ();
typedef void (GL_APIENTRYP PFNGLOBJECTLABELPROC) /* glObjectLabel */ (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELPROC) /* glGetObjectLabel */ (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLOBJECTPTRLABELPROC) /* glObjectPtrLabel */ (const void * ptr, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTPTRLABELPROC) /* glGetObjectPtrLabel */ (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETPOINTERVPROC) /* glGetPointerv */ (GLenum pname, void ** params);
typedef void (GL_APIENTRYP PFNGLENABLEIPROC) /* glEnablei */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIPROC) /* glDisablei */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIPROC) /* glBlendEquationi */ (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIPROC) /* glBlendEquationSeparatei */ (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIPROC) /* glBlendFunci */ (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIPROC) /* glBlendFuncSeparatei */ (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIPROC) /* glColorMaski */ (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIPROC) /* glIsEnabledi */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXPROC) /* glDrawElementsBaseVertex */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) /* glDrawRangeElementsBaseVertex */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) /* glDrawElementsInstancedBaseVertex */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREPROC) /* glFramebufferTexture */ (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXPROC) /* glPrimitiveBoundingBox */ (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSPROC) /* glGetGraphicsResetStatus */ ();
typedef void (GL_APIENTRYP PFNGLREADNPIXELSPROC) /* glReadnPixels */ (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVPROC) /* glGetnUniformfv */ (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVPROC) /* glGetnUniformiv */ (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMUIVPROC) /* glGetnUniformuiv */ (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
typedef void (GL_APIENTRYP PFNGLMINSAMPLESHADINGPROC) /* glMinSampleShading */ (GLfloat value);
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIPROC) /* glPatchParameteri */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVPROC) /* glTexParameterIiv */ (GLenum target, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVPROC) /* glTexParameterIuiv */ (GLenum target, GLenum pname, const GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVPROC) /* glGetTexParameterIiv */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVPROC) /* glGetTexParameterIuiv */ (GLenum target, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVPROC) /* glSamplerParameterIiv */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVPROC) /* glSamplerParameterIuiv */ (GLuint sampler, GLenum pname, const GLuint * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVPROC) /* glGetSamplerParameterIiv */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVPROC) /* glGetSamplerParameterIuiv */ (GLuint sampler, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERPROC) /* glTexBuffer */ (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEPROC) /* glTexBufferRange */ (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEPROC) /* glTexStorage3DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) /* glRenderbufferStorageMultisampleAdvancedAMD */ (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) /* glNamedRenderbufferStorageMultisampleAdvancedAMD */ (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) /* glGetPerfMonitorGroupsAMD */ (GLint * numGroups, GLsizei groupsSize, GLuint * groups);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) /* glGetPerfMonitorCountersAMD */ (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) /* glGetPerfMonitorGroupStringAMD */ (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) /* glGetPerfMonitorCounterStringAMD */ (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) /* glGetPerfMonitorCounterInfoAMD */ (GLuint group, GLuint counter, GLenum pname, void * data);
typedef void (GL_APIENTRYP PFNGLGENPERFMONITORSAMDPROC) /* glGenPerfMonitorsAMD */ (GLsizei n, GLuint * monitors);
typedef void (GL_APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) /* glDeletePerfMonitorsAMD */ (GLsizei n, GLuint * monitors);
typedef void (GL_APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) /* glSelectPerfMonitorCountersAMD */ (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList);
typedef void (GL_APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) /* glBeginPerfMonitorAMD */ (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLENDPERFMONITORAMDPROC) /* glEndPerfMonitorAMD */ (GLuint monitor);
typedef void (GL_APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) /* glGetPerfMonitorCounterDataAMD */ (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERANGLEPROC) /* glBlitFramebufferANGLE */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC) /* glRenderbufferStorageMultisampleANGLE */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDANGLEPROC) /* glDrawArraysInstancedANGLE */ (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDANGLEPROC) /* glDrawElementsInstancedANGLE */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORANGLEPROC) /* glVertexAttribDivisorANGLE */ (GLuint index, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC) /* glGetTranslatedShaderSourceANGLE */ (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
typedef void (GL_APIENTRYP PFNGLCOPYTEXTURELEVELSAPPLEPROC) /* glCopyTextureLevelsAPPLE */ (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC) /* glRenderbufferStorageMultisampleAPPLE */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC) /* glResolveMultisampleFramebufferAPPLE */ ();
typedef GLsync (GL_APIENTRYP PFNGLFENCESYNCAPPLEPROC) /* glFenceSyncAPPLE */ (GLenum condition, GLbitfield flags);
typedef GLboolean (GL_APIENTRYP PFNGLISSYNCAPPLEPROC) /* glIsSyncAPPLE */ (GLsync sync);
typedef void (GL_APIENTRYP PFNGLDELETESYNCAPPLEPROC) /* glDeleteSyncAPPLE */ (GLsync sync);
typedef GLenum (GL_APIENTRYP PFNGLCLIENTWAITSYNCAPPLEPROC) /* glClientWaitSyncAPPLE */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLWAITSYNCAPPLEPROC) /* glWaitSyncAPPLE */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VAPPLEPROC) /* glGetInteger64vAPPLE */ (GLenum pname, GLint64 * params);
typedef void (GL_APIENTRYP PFNGLGETSYNCIVAPPLEPROC) /* glGetSyncivAPPLE */ (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) /* glEGLImageTargetTexStorageEXT */ (GLenum target, GLeglImageOES image, const GLint* attrib_list);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) /* glEGLImageTargetTextureStorageEXT */ (GLuint texture, GLeglImageOES image, const GLint* attrib_list);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) /* glDrawArraysInstancedBaseInstanceEXT */ (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) /* glDrawElementsInstancedBaseInstanceEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) /* glDrawElementsInstancedBaseVertexBaseInstanceEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) /* glBindFragDataLocationIndexedEXT */ (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLBINDFRAGDATALOCATIONEXTPROC) /* glBindFragDataLocationEXT */ (GLuint program, GLuint color, const GLchar * name);
typedef GLint (GL_APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) /* glGetProgramResourceLocationIndexEXT */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef GLint (GL_APIENTRYP PFNGLGETFRAGDATAINDEXEXTPROC) /* glGetFragDataIndexEXT */ (GLuint program, const GLchar * name);
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTPROC) /* glBufferStorageEXT */ (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
typedef void (GL_APIENTRYP PFNGLCLEARTEXIMAGEEXTPROC) /* glClearTexImageEXT */ (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
typedef void (GL_APIENTRYP PFNGLCLEARTEXSUBIMAGEEXTPROC) /* glClearTexSubImageEXT */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
typedef void (GL_APIENTRYP PFNGLCLIPCONTROLEXTPROC) /* glClipControlEXT */ (GLenum origin, GLenum depth);
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAEXTPROC) /* glCopyImageSubDataEXT */ (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRYP PFNGLLABELOBJECTEXTPROC) /* glLabelObjectEXT */ (GLenum type, GLuint object, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELEXTPROC) /* glGetObjectLabelEXT */ (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) /* glInsertEventMarkerEXT */ (GLsizei length, const GLchar * marker);
typedef void (GL_APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) /* glPushGroupMarkerEXT */ (GLsizei length, const GLchar * marker);
typedef void (GL_APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) /* glPopGroupMarkerEXT */ ();
typedef void (GL_APIENTRYP PFNGLDISCARDFRAMEBUFFEREXTPROC) /* glDiscardFramebufferEXT */ (GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (GL_APIENTRYP PFNGLGENQUERIESEXTPROC) /* glGenQueriesEXT */ (GLsizei n, GLuint * ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESEXTPROC) /* glDeleteQueriesEXT */ (GLsizei n, const GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYEXTPROC) /* glIsQueryEXT */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYEXTPROC) /* glBeginQueryEXT */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYEXTPROC) /* glEndQueryEXT */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLQUERYCOUNTEREXTPROC) /* glQueryCounterEXT */ (GLuint id, GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVEXTPROC) /* glGetQueryivEXT */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTIVEXTPROC) /* glGetQueryObjectivEXT */ (GLuint id, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVEXTPROC) /* glGetQueryObjectuivEXT */ (GLuint id, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTI64VEXTPROC) /* glGetQueryObjecti64vEXT */ (GLuint id, GLenum pname, GLint64 * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUI64VEXTPROC) /* glGetQueryObjectui64vEXT */ (GLuint id, GLenum pname, GLuint64 * params);
typedef void (GL_APIENTRYP PFNGLGETINTEGER64VEXTPROC) /* glGetInteger64vEXT */ (GLenum pname, GLint64 * data);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSEXTPROC) /* glDrawBuffersEXT */ (GLsizei n, const GLenum * bufs);
typedef void (GL_APIENTRYP PFNGLENABLEIEXTPROC) /* glEnableiEXT */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIEXTPROC) /* glDisableiEXT */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIEXTPROC) /* glBlendEquationiEXT */ (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIEXTPROC) /* glBlendEquationSeparateiEXT */ (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIEXTPROC) /* glBlendFunciEXT */ (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIEXTPROC) /* glBlendFuncSeparateiEXT */ (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIEXTPROC) /* glColorMaskiEXT */ (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIEXTPROC) /* glIsEnablediEXT */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXEXTPROC) /* glDrawElementsBaseVertexEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) /* glDrawRangeElementsBaseVertexEXT */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) /* glDrawElementsInstancedBaseVertexEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) /* glMultiDrawElementsBaseVertexEXT */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) /* glDrawArraysInstancedEXT */ (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) /* glDrawElementsInstancedEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKEXTPROC) /* glDrawTransformFeedbackEXT */ (GLenum mode, GLuint id);
typedef void (GL_APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC) /* glDrawTransformFeedbackInstancedEXT */ (GLenum mode, GLuint id, GLsizei instancecount);
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEEXTERNALEXTPROC) /* glBufferStorageExternalEXT */ (GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) /* glNamedBufferStorageExternalEXT */ (GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREEXTPROC) /* glFramebufferTextureEXT */ (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) /* glDrawArraysInstancedEXT */ (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) /* glDrawElementsInstancedEXT */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISOREXTPROC) /* glVertexAttribDivisorEXT */ (GLuint index, GLuint divisor);
typedef void * (GL_APIENTRYP PFNGLMAPBUFFERRANGEEXTPROC) /* glMapBufferRangeEXT */ (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC) /* glFlushMappedBufferRangeEXT */ (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GL_APIENTRYP PFNGLGETUNSIGNEDBYTEVEXTPROC) /* glGetUnsignedBytevEXT */ (GLenum pname, GLubyte * data);
typedef void (GL_APIENTRYP PFNGLGETUNSIGNEDBYTEI_VEXTPROC) /* glGetUnsignedBytei_vEXT */ (GLenum target, GLuint index, GLubyte * data);
typedef void (GL_APIENTRYP PFNGLDELETEMEMORYOBJECTSEXTPROC) /* glDeleteMemoryObjectsEXT */ (GLsizei n, const GLuint * memoryObjects);
typedef GLboolean (GL_APIENTRYP PFNGLISMEMORYOBJECTEXTPROC) /* glIsMemoryObjectEXT */ (GLuint memoryObject);
typedef void (GL_APIENTRYP PFNGLCREATEMEMORYOBJECTSEXTPROC) /* glCreateMemoryObjectsEXT */ (GLsizei n, GLuint * memoryObjects);
typedef void (GL_APIENTRYP PFNGLMEMORYOBJECTPARAMETERIVEXTPROC) /* glMemoryObjectParameterivEXT */ (GLuint memoryObject, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC) /* glGetMemoryObjectParameterivEXT */ (GLuint memoryObject, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM2DEXTPROC) /* glTexStorageMem2DEXT */ (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC) /* glTexStorageMem2DMultisampleEXT */ (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM3DEXTPROC) /* glTexStorageMem3DEXT */ (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC) /* glTexStorageMem3DMultisampleEXT */ (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLBUFFERSTORAGEMEMEXTPROC) /* glBufferStorageMemEXT */ (GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM2DEXTPROC) /* glTextureStorageMem2DEXT */ (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC) /* glTextureStorageMem2DMultisampleEXT */ (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM3DEXTPROC) /* glTextureStorageMem3DEXT */ (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC) /* glTextureStorageMem3DMultisampleEXT */ (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC) /* glNamedBufferStorageMemEXT */ (GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLIMPORTMEMORYFDEXTPROC) /* glImportMemoryFdEXT */ (GLuint memory, GLuint64 size, GLenum handleType, GLint fd);
typedef void (GL_APIENTRYP PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC) /* glImportMemoryWin32HandleEXT */ (GLuint memory, GLuint64 size, GLenum handleType, void * handle);
typedef void (GL_APIENTRYP PFNGLIMPORTMEMORYWIN32NAMEEXTPROC) /* glImportMemoryWin32NameEXT */ (GLuint memory, GLuint64 size, GLenum handleType, const void * name);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSEXTPROC) /* glMultiDrawArraysEXT */ (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSEXTPROC) /* glMultiDrawElementsEXT */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC) /* glMultiDrawArraysIndirectEXT */ (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC) /* glMultiDrawElementsIndirectEXT */ (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) /* glRenderbufferStorageMultisampleEXT */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) /* glFramebufferTexture2DMultisampleEXT */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
typedef void (GL_APIENTRYP PFNGLREADBUFFERINDEXEDEXTPROC) /* glReadBufferIndexedEXT */ (GLenum src, GLint index);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSINDEXEDEXTPROC) /* glDrawBuffersIndexedEXT */ (GLint n, const GLenum * location, const GLint * indices);
typedef void (GL_APIENTRYP PFNGLGETINTEGERI_VEXTPROC) /* glGetIntegeri_vEXT */ (GLenum target, GLuint index, GLint * data);
typedef void (GL_APIENTRYP PFNGLGENQUERIESEXTPROC) /* glGenQueriesEXT */ (GLsizei n, GLuint * ids);
typedef void (GL_APIENTRYP PFNGLDELETEQUERIESEXTPROC) /* glDeleteQueriesEXT */ (GLsizei n, const GLuint * ids);
typedef GLboolean (GL_APIENTRYP PFNGLISQUERYEXTPROC) /* glIsQueryEXT */ (GLuint id);
typedef void (GL_APIENTRYP PFNGLBEGINQUERYEXTPROC) /* glBeginQueryEXT */ (GLenum target, GLuint id);
typedef void (GL_APIENTRYP PFNGLENDQUERYEXTPROC) /* glEndQueryEXT */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETQUERYIVEXTPROC) /* glGetQueryivEXT */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETQUERYOBJECTUIVEXTPROC) /* glGetQueryObjectuivEXT */ (GLuint id, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLPOLYGONOFFSETCLAMPEXTPROC) /* glPolygonOffsetClampEXT */ (GLfloat factor, GLfloat units, GLfloat clamp);
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXEXTPROC) /* glPrimitiveBoundingBoxEXT */ (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) /* glRasterSamplesEXT */ (GLuint samples, GLboolean fixedsamplelocations);
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSEXTPROC) /* glGetGraphicsResetStatusEXT */ ();
typedef void (GL_APIENTRYP PFNGLREADNPIXELSEXTPROC) /* glReadnPixelsEXT */ (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVEXTPROC) /* glGetnUniformfvEXT */ (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVEXTPROC) /* glGetnUniformivEXT */ (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETUNSIGNEDBYTEVEXTPROC) /* glGetUnsignedBytevEXT */ (GLenum pname, GLubyte * data);
typedef void (GL_APIENTRYP PFNGLGETUNSIGNEDBYTEI_VEXTPROC) /* glGetUnsignedBytei_vEXT */ (GLenum target, GLuint index, GLubyte * data);
typedef void (GL_APIENTRYP PFNGLGENSEMAPHORESEXTPROC) /* glGenSemaphoresEXT */ (GLsizei n, GLuint * semaphores);
typedef void (GL_APIENTRYP PFNGLDELETESEMAPHORESEXTPROC) /* glDeleteSemaphoresEXT */ (GLsizei n, const GLuint * semaphores);
typedef GLboolean (GL_APIENTRYP PFNGLISSEMAPHOREEXTPROC) /* glIsSemaphoreEXT */ (GLuint semaphore);
typedef void (GL_APIENTRYP PFNGLSEMAPHOREPARAMETERUI64VEXTPROC) /* glSemaphoreParameterui64vEXT */ (GLuint semaphore, GLenum pname, const GLuint64 * params);
typedef void (GL_APIENTRYP PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC) /* glGetSemaphoreParameterui64vEXT */ (GLuint semaphore, GLenum pname, GLuint64 * params);
typedef void (GL_APIENTRYP PFNGLWAITSEMAPHOREEXTPROC) /* glWaitSemaphoreEXT */ (GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * srcLayouts);
typedef void (GL_APIENTRYP PFNGLSIGNALSEMAPHOREEXTPROC) /* glSignalSemaphoreEXT */ (GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts);
typedef void (GL_APIENTRYP PFNGLIMPORTSEMAPHOREFDEXTPROC) /* glImportSemaphoreFdEXT */ (GLuint semaphore, GLenum handleType, GLint fd);
typedef void (GL_APIENTRYP PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC) /* glImportSemaphoreWin32HandleEXT */ (GLuint semaphore, GLenum handleType, void * handle);
typedef void (GL_APIENTRYP PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC) /* glImportSemaphoreWin32NameEXT */ (GLuint semaphore, GLenum handleType, const void * name);
typedef void (GL_APIENTRYP PFNGLACTIVESHADERPROGRAMEXTPROC) /* glActiveShaderProgramEXT */ (GLuint pipeline, GLuint program);
typedef void (GL_APIENTRYP PFNGLBINDPROGRAMPIPELINEEXTPROC) /* glBindProgramPipelineEXT */ (GLuint pipeline);
typedef GLuint (GL_APIENTRYP PFNGLCREATESHADERPROGRAMVEXTPROC) /* glCreateShaderProgramvEXT */ (GLenum type, GLsizei count, const GLchar ** strings);
typedef void (GL_APIENTRYP PFNGLDELETEPROGRAMPIPELINESEXTPROC) /* glDeleteProgramPipelinesEXT */ (GLsizei n, const GLuint * pipelines);
typedef void (GL_APIENTRYP PFNGLGENPROGRAMPIPELINESEXTPROC) /* glGenProgramPipelinesEXT */ (GLsizei n, GLuint * pipelines);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC) /* glGetProgramPipelineInfoLogEXT */ (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMPIPELINEIVEXTPROC) /* glGetProgramPipelineivEXT */ (GLuint pipeline, GLenum pname, GLint * params);
typedef GLboolean (GL_APIENTRYP PFNGLISPROGRAMPIPELINEEXTPROC) /* glIsProgramPipelineEXT */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLPROGRAMPARAMETERIEXTPROC) /* glProgramParameteriEXT */ (GLuint program, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) /* glProgramUniform1fEXT */ (GLuint program, GLint location, GLfloat v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) /* glProgramUniform1fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) /* glProgramUniform1iEXT */ (GLuint program, GLint location, GLint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) /* glProgramUniform1ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) /* glProgramUniform2fEXT */ (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) /* glProgramUniform2fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) /* glProgramUniform2iEXT */ (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) /* glProgramUniform2ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) /* glProgramUniform3fEXT */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) /* glProgramUniform3fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) /* glProgramUniform3iEXT */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) /* glProgramUniform3ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) /* glProgramUniform4fEXT */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) /* glProgramUniform4fvEXT */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) /* glProgramUniform4iEXT */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) /* glProgramUniform4ivEXT */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) /* glProgramUniformMatrix2fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) /* glProgramUniformMatrix3fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) /* glProgramUniformMatrix4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUSEPROGRAMSTAGESEXTPROC) /* glUseProgramStagesEXT */ (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GL_APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEEXTPROC) /* glValidateProgramPipelineEXT */ (GLuint pipeline);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) /* glProgramUniform1uiEXT */ (GLuint program, GLint location, GLuint v0);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) /* glProgramUniform2uiEXT */ (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) /* glProgramUniform3uiEXT */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) /* glProgramUniform4uiEXT */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) /* glProgramUniform1uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) /* glProgramUniform2uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) /* glProgramUniform3uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) /* glProgramUniform4uivEXT */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) /* glProgramUniformMatrix2x3fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) /* glProgramUniformMatrix3x2fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) /* glProgramUniformMatrix2x4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) /* glProgramUniformMatrix4x2fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) /* glProgramUniformMatrix3x4fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) /* glProgramUniformMatrix4x3fvEXT */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) /* glFramebufferFetchBarrierEXT */ ();
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) /* glFramebufferPixelLocalStorageSizeEXT */ (GLuint target, GLsizei size);
typedef GLsizei (GL_APIENTRYP PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) /* glGetFramebufferPixelLocalStorageSizeEXT */ (GLuint target);
typedef void (GL_APIENTRYP PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC) /* glClearPixelLocalStorageuiEXT */ (GLsizei offset, GLsizei n, const GLuint * values);
typedef void (GL_APIENTRYP PFNGLTEXPAGECOMMITMENTEXTPROC) /* glTexPageCommitmentEXT */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIEXTPROC) /* glPatchParameteriEXT */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVEXTPROC) /* glTexParameterIivEXT */ (GLenum target, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVEXTPROC) /* glTexParameterIuivEXT */ (GLenum target, GLenum pname, const GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVEXTPROC) /* glGetTexParameterIivEXT */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVEXTPROC) /* glGetTexParameterIuivEXT */ (GLenum target, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVEXTPROC) /* glSamplerParameterIivEXT */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVEXTPROC) /* glSamplerParameterIuivEXT */ (GLuint sampler, GLenum pname, const GLuint * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVEXTPROC) /* glGetSamplerParameterIivEXT */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVEXTPROC) /* glGetSamplerParameterIuivEXT */ (GLuint sampler, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLTEXBUFFEREXTPROC) /* glTexBufferEXT */ (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEEXTPROC) /* glTexBufferRangeEXT */ (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE1DEXTPROC) /* glTexStorage1DEXT */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE2DEXTPROC) /* glTexStorage2DEXT */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DEXTPROC) /* glTexStorage3DEXT */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) /* glTextureStorage1DEXT */ (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) /* glTextureStorage2DEXT */ (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) /* glTextureStorage3DEXT */ (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWEXTPROC) /* glTextureViewEXT */ (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GL_APIENTRYP PFNGLCREATESEMAPHORESNVPROC) /* glCreateSemaphoresNV */ (GLsizei n, GLuint * semaphores);
typedef void (GL_APIENTRYP PFNGLSEMAPHOREPARAMETERIVNVPROC) /* glSemaphoreParameterivNV */ (GLuint semaphore, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSEMAPHOREPARAMETERIVNVPROC) /* glGetSemaphoreParameterivNV */ (GLuint semaphore, GLenum pname, GLint * params);
typedef GLboolean (GL_APIENTRYP PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC) /* glAcquireKeyedMutexWin32EXT */ (GLuint memory, GLuint64 key, GLuint timeout);
typedef GLboolean (GL_APIENTRYP PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC) /* glReleaseKeyedMutexWin32EXT */ (GLuint memory, GLuint64 key);
typedef void (GL_APIENTRYP PFNGLWINDOWRECTANGLESEXTPROC) /* glWindowRectanglesEXT */ (GLenum mode, GLsizei count, const GLint * box);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTUREHANDLEIMGPROC) /* glGetTextureHandleIMG */ (GLuint texture);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTURESAMPLERHANDLEIMGPROC) /* glGetTextureSamplerHandleIMG */ (GLuint texture, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64IMGPROC) /* glUniformHandleui64IMG */ (GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64VIMGPROC) /* glUniformHandleui64vIMG */ (GLint location, GLsizei count, const GLuint64 * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC) /* glProgramUniformHandleui64IMG */ (GLuint program, GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC) /* glProgramUniformHandleui64vIMG */ (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC) /* glFramebufferTexture2DDownsampleIMG */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint xscale, GLint yscale);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC) /* glFramebufferTextureLayerDownsampleIMG */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint xscale, GLint yscale);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC) /* glRenderbufferStorageMultisampleIMG */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC) /* glFramebufferTexture2DMultisampleIMG */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
typedef void (GL_APIENTRYP PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) /* glApplyFramebufferAttachmentCMAAINTEL */ ();
typedef void (GL_APIENTRYP PFNGLBEGINPERFQUERYINTELPROC) /* glBeginPerfQueryINTEL */ (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLCREATEPERFQUERYINTELPROC) /* glCreatePerfQueryINTEL */ (GLuint queryId, GLuint * queryHandle);
typedef void (GL_APIENTRYP PFNGLDELETEPERFQUERYINTELPROC) /* glDeletePerfQueryINTEL */ (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLENDPERFQUERYINTELPROC) /* glEndPerfQueryINTEL */ (GLuint queryHandle);
typedef void (GL_APIENTRYP PFNGLGETFIRSTPERFQUERYIDINTELPROC) /* glGetFirstPerfQueryIdINTEL */ (GLuint * queryId);
typedef void (GL_APIENTRYP PFNGLGETNEXTPERFQUERYIDINTELPROC) /* glGetNextPerfQueryIdINTEL */ (GLuint queryId, GLuint * nextQueryId);
typedef void (GL_APIENTRYP PFNGLGETPERFCOUNTERINFOINTELPROC) /* glGetPerfCounterInfoINTEL */ (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYDATAINTELPROC) /* glGetPerfQueryDataINTEL */ (GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYIDBYNAMEINTELPROC) /* glGetPerfQueryIdByNameINTEL */ (GLchar * queryName, GLuint * queryId);
typedef void (GL_APIENTRYP PFNGLGETPERFQUERYINFOINTELPROC) /* glGetPerfQueryInfoINTEL */ (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERKHRPROC) /* glBlendBarrierKHR */ ();
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECONTROLKHRPROC) /* glDebugMessageControlKHR */ (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGEINSERTKHRPROC) /* glDebugMessageInsertKHR */ (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (GL_APIENTRYP PFNGLDEBUGMESSAGECALLBACKKHRPROC) /* glDebugMessageCallbackKHR */ (GLDEBUGPROCKHR callback, const void * userParam);
typedef GLuint (GL_APIENTRYP PFNGLGETDEBUGMESSAGELOGKHRPROC) /* glGetDebugMessageLogKHR */ (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef void (GL_APIENTRYP PFNGLPUSHDEBUGGROUPKHRPROC) /* glPushDebugGroupKHR */ (GLenum source, GLuint id, GLsizei length, const GLchar * message);
typedef void (GL_APIENTRYP PFNGLPOPDEBUGGROUPKHRPROC) /* glPopDebugGroupKHR */ ();
typedef void (GL_APIENTRYP PFNGLOBJECTLABELKHRPROC) /* glObjectLabelKHR */ (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTLABELKHRPROC) /* glGetObjectLabelKHR */ (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLOBJECTPTRLABELKHRPROC) /* glObjectPtrLabelKHR */ (const void * ptr, GLsizei length, const GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETOBJECTPTRLABELKHRPROC) /* glGetObjectPtrLabelKHR */ (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
typedef void (GL_APIENTRYP PFNGLGETPOINTERVKHRPROC) /* glGetPointervKHR */ (GLenum pname, void ** params);
typedef GLenum (GL_APIENTRYP PFNGLGETGRAPHICSRESETSTATUSKHRPROC) /* glGetGraphicsResetStatusKHR */ ();
typedef void (GL_APIENTRYP PFNGLREADNPIXELSKHRPROC) /* glReadnPixelsKHR */ (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMFVKHRPROC) /* glGetnUniformfvKHR */ (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMIVKHRPROC) /* glGetnUniformivKHR */ (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETNUNIFORMUIVKHRPROC) /* glGetnUniformuivKHR */ (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
typedef void (GL_APIENTRYP PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) /* glMaxShaderCompilerThreadsKHR */ (GLuint count);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERPARAMETERIMESAPROC) /* glFramebufferParameteriMESA */ (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) /* glGetFramebufferParameterivMESA */ (GLenum target, GLenum pname, GLint * params);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTUREHANDLENVPROC) /* glGetTextureHandleNV */ (GLuint texture);
typedef GLuint64 (GL_APIENTRYP PFNGLGETTEXTURESAMPLERHANDLENVPROC) /* glGetTextureSamplerHandleNV */ (GLuint texture, GLuint sampler);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) /* glMakeTextureHandleResidentNV */ (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) /* glMakeTextureHandleNonResidentNV */ (GLuint64 handle);
typedef GLuint64 (GL_APIENTRYP PFNGLGETIMAGEHANDLENVPROC) /* glGetImageHandleNV */ (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) /* glMakeImageHandleResidentNV */ (GLuint64 handle, GLenum access);
typedef void (GL_APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) /* glMakeImageHandleNonResidentNV */ (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64NVPROC) /* glUniformHandleui64NV */ (GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLUNIFORMHANDLEUI64VNVPROC) /* glUniformHandleui64vNV */ (GLint location, GLsizei count, const GLuint64 * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) /* glProgramUniformHandleui64NV */ (GLuint program, GLint location, GLuint64 value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) /* glProgramUniformHandleui64vNV */ (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
typedef GLboolean (GL_APIENTRYP PFNGLISTEXTUREHANDLERESIDENTNVPROC) /* glIsTextureHandleResidentNV */ (GLuint64 handle);
typedef GLboolean (GL_APIENTRYP PFNGLISIMAGEHANDLERESIDENTNVPROC) /* glIsImageHandleResidentNV */ (GLuint64 handle);
typedef void (GL_APIENTRYP PFNGLBLENDPARAMETERINVPROC) /* glBlendParameteriNV */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLBLENDBARRIERNVPROC) /* glBlendBarrierNV */ ();
typedef void (GL_APIENTRYP PFNGLVIEWPORTPOSITIONWSCALENVPROC) /* glViewportPositionWScaleNV */ (GLuint index, GLfloat xcoeff, GLfloat ycoeff);
typedef void (GL_APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) /* glBeginConditionalRenderNV */ (GLuint id, GLenum mode);
typedef void (GL_APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) /* glEndConditionalRenderNV */ ();
typedef void (GL_APIENTRYP PFNGLSUBPIXELPRECISIONBIASNVPROC) /* glSubpixelPrecisionBiasNV */ (GLuint xbits, GLuint ybits);
typedef void (GL_APIENTRYP PFNGLCONSERVATIVERASTERPARAMETERINVPROC) /* glConservativeRasterParameteriNV */ (GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLCOPYBUFFERSUBDATANVPROC) /* glCopyBufferSubDataNV */ (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMASKNVPROC) /* glCoverageMaskNV */ (GLboolean mask);
typedef void (GL_APIENTRYP PFNGLCOVERAGEOPERATIONNVPROC) /* glCoverageOperationNV */ (GLenum operation);
typedef void (GL_APIENTRYP PFNGLDRAWBUFFERSNVPROC) /* glDrawBuffersNV */ (GLsizei n, const GLenum * bufs);
typedef void (GL_APIENTRYP PFNGLDRAWARRAYSINSTANCEDNVPROC) /* glDrawArraysInstancedNV */ (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDNVPROC) /* glDrawElementsInstancedNV */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
typedef void (GL_APIENTRYP PFNGLDRAWVKIMAGENVPROC) /* glDrawVkImageNV */ (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
typedef GLVULKANPROCNV (GL_APIENTRYP PFNGLGETVKPROCADDRNVPROC) /* glGetVkProcAddrNV */ (const GLchar * name);
typedef void (GL_APIENTRYP PFNGLWAITVKSEMAPHORENVPROC) /* glWaitVkSemaphoreNV */ (GLuint64 vkSemaphore);
typedef void (GL_APIENTRYP PFNGLSIGNALVKSEMAPHORENVPROC) /* glSignalVkSemaphoreNV */ (GLuint64 vkSemaphore);
typedef void (GL_APIENTRYP PFNGLSIGNALVKFENCENVPROC) /* glSignalVkFenceNV */ (GLuint64 vkFence);
typedef void (GL_APIENTRYP PFNGLDELETEFENCESNVPROC) /* glDeleteFencesNV */ (GLsizei n, const GLuint * fences);
typedef void (GL_APIENTRYP PFNGLGENFENCESNVPROC) /* glGenFencesNV */ (GLsizei n, GLuint * fences);
typedef GLboolean (GL_APIENTRYP PFNGLISFENCENVPROC) /* glIsFenceNV */ (GLuint fence);
typedef GLboolean (GL_APIENTRYP PFNGLTESTFENCENVPROC) /* glTestFenceNV */ (GLuint fence);
typedef void (GL_APIENTRYP PFNGLGETFENCEIVNVPROC) /* glGetFenceivNV */ (GLuint fence, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLFINISHFENCENVPROC) /* glFinishFenceNV */ (GLuint fence);
typedef void (GL_APIENTRYP PFNGLSETFENCENVPROC) /* glSetFenceNV */ (GLuint fence, GLenum condition);
typedef void (GL_APIENTRYP PFNGLFRAGMENTCOVERAGECOLORNVPROC) /* glFragmentCoverageColorNV */ (GLuint color);
typedef void (GL_APIENTRYP PFNGLBLITFRAMEBUFFERNVPROC) /* glBlitFramebufferNV */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GL_APIENTRYP PFNGLRASTERSAMPLESEXTPROC) /* glRasterSamplesEXT */ (GLuint samples, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONTABLENVPROC) /* glCoverageModulationTableNV */ (GLsizei n, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLGETCOVERAGEMODULATIONTABLENVPROC) /* glGetCoverageModulationTableNV */ (GLsizei bufSize, GLfloat * v);
typedef void (GL_APIENTRYP PFNGLCOVERAGEMODULATIONNVPROC) /* glCoverageModulationNV */ (GLenum components);
typedef void (GL_APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC) /* glRenderbufferStorageMultisampleNV */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLUNIFORM1I64NVPROC) /* glUniform1i64NV */ (GLint location, GLint64EXT x);
typedef void (GL_APIENTRYP PFNGLUNIFORM2I64NVPROC) /* glUniform2i64NV */ (GLint location, GLint64EXT x, GLint64EXT y);
typedef void (GL_APIENTRYP PFNGLUNIFORM3I64NVPROC) /* glUniform3i64NV */ (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GL_APIENTRYP PFNGLUNIFORM4I64NVPROC) /* glUniform4i64NV */ (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GL_APIENTRYP PFNGLUNIFORM1I64VNVPROC) /* glUniform1i64vNV */ (GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM2I64VNVPROC) /* glUniform2i64vNV */ (GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM3I64VNVPROC) /* glUniform3i64vNV */ (GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM4I64VNVPROC) /* glUniform4i64vNV */ (GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UI64NVPROC) /* glUniform1ui64NV */ (GLint location, GLuint64EXT x);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UI64NVPROC) /* glUniform2ui64NV */ (GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UI64NVPROC) /* glUniform3ui64NV */ (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UI64NVPROC) /* glUniform4ui64NV */ (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GL_APIENTRYP PFNGLUNIFORM1UI64VNVPROC) /* glUniform1ui64vNV */ (GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM2UI64VNVPROC) /* glUniform2ui64vNV */ (GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM3UI64VNVPROC) /* glUniform3ui64vNV */ (GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLUNIFORM4UI64VNVPROC) /* glUniform4ui64vNV */ (GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLGETUNIFORMI64VNVPROC) /* glGetUniformi64vNV */ (GLuint program, GLint location, GLint64EXT * params);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1I64NVPROC) /* glProgramUniform1i64NV */ (GLuint program, GLint location, GLint64EXT x);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2I64NVPROC) /* glProgramUniform2i64NV */ (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3I64NVPROC) /* glProgramUniform3i64NV */ (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4I64NVPROC) /* glProgramUniform4i64NV */ (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1I64VNVPROC) /* glProgramUniform1i64vNV */ (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2I64VNVPROC) /* glProgramUniform2i64vNV */ (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3I64VNVPROC) /* glProgramUniform3i64vNV */ (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4I64VNVPROC) /* glProgramUniform4i64vNV */ (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UI64NVPROC) /* glProgramUniform1ui64NV */ (GLuint program, GLint location, GLuint64EXT x);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UI64NVPROC) /* glProgramUniform2ui64NV */ (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UI64NVPROC) /* glProgramUniform3ui64NV */ (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UI64NVPROC) /* glProgramUniform4ui64NV */ (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM1UI64VNVPROC) /* glProgramUniform1ui64vNV */ (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM2UI64VNVPROC) /* glProgramUniform2ui64vNV */ (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM3UI64VNVPROC) /* glProgramUniform3ui64vNV */ (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLPROGRAMUNIFORM4UI64VNVPROC) /* glProgramUniform4ui64vNV */ (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
typedef void (GL_APIENTRYP PFNGLVERTEXATTRIBDIVISORNVPROC) /* glVertexAttribDivisorNV */ (GLuint index, GLuint divisor);
typedef void (GL_APIENTRYP PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) /* glGetInternalformatSampleivNV */ (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) /* glGetMemoryObjectDetachedResourcesuivNV */ (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params);
typedef void (GL_APIENTRYP PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) /* glResetMemoryObjectParameterNV */ (GLuint memory, GLenum pname);
typedef void (GL_APIENTRYP PFNGLTEXATTACHMEMORYNVPROC) /* glTexAttachMemoryNV */ (GLenum target, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLBUFFERATTACHMEMORYNVPROC) /* glBufferAttachMemoryNV */ (GLenum target, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLTEXTUREATTACHMEMORYNVPROC) /* glTextureAttachMemoryNV */ (GLuint texture, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) /* glNamedBufferAttachMemoryNV */ (GLuint buffer, GLuint memory, GLuint64 offset);
typedef void (GL_APIENTRYP PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) /* glBufferPageCommitmentMemNV */ (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLTEXPAGECOMMITMENTMEMNVPROC) /* glTexPageCommitmentMemNV */ (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) /* glNamedBufferPageCommitmentMemNV */ (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) /* glTexturePageCommitmentMemNV */ (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
typedef void (GL_APIENTRYP PFNGLDRAWMESHTASKSNVPROC) /* glDrawMeshTasksNV */ (GLuint first, GLuint count);
typedef void (GL_APIENTRYP PFNGLDRAWMESHTASKSINDIRECTNVPROC) /* glDrawMeshTasksIndirectNV */ (GLintptr indirect);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) /* glMultiDrawMeshTasksIndirectNV */ (GLintptr indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) /* glMultiDrawMeshTasksIndirectCountNV */ (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X3FVNVPROC) /* glUniformMatrix2x3fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X2FVNVPROC) /* glUniformMatrix3x2fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX2X4FVNVPROC) /* glUniformMatrix2x4fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X2FVNVPROC) /* glUniformMatrix4x2fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX3X4FVNVPROC) /* glUniformMatrix3x4fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLUNIFORMMATRIX4X3FVNVPROC) /* glUniformMatrix4x3fvNV */ (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef GLuint (GL_APIENTRYP PFNGLGENPATHSNVPROC) /* glGenPathsNV */ (GLsizei range);
typedef void (GL_APIENTRYP PFNGLDELETEPATHSNVPROC) /* glDeletePathsNV */ (GLuint path, GLsizei range);
typedef GLboolean (GL_APIENTRYP PFNGLISPATHNVPROC) /* glIsPathNV */ (GLuint path);
typedef void (GL_APIENTRYP PFNGLPATHCOMMANDSNVPROC) /* glPathCommandsNV */ (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHCOORDSNVPROC) /* glPathCoordsNV */ (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOMMANDSNVPROC) /* glPathSubCommandsNV */ (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHSUBCOORDSNVPROC) /* glPathSubCoordsNV */ (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords);
typedef void (GL_APIENTRYP PFNGLPATHSTRINGNVPROC) /* glPathStringNV */ (GLuint path, GLenum format, GLsizei length, const void * pathString);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHSNVPROC) /* glPathGlyphsNV */ (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLPATHGLYPHRANGENVPROC) /* glPathGlyphRangeNV */ (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLWEIGHTPATHSNVPROC) /* glWeightPathsNV */ (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights);
typedef void (GL_APIENTRYP PFNGLCOPYPATHNVPROC) /* glCopyPathNV */ (GLuint resultPath, GLuint srcPath);
typedef void (GL_APIENTRYP PFNGLINTERPOLATEPATHSNVPROC) /* glInterpolatePathsNV */ (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
typedef void (GL_APIENTRYP PFNGLTRANSFORMPATHNVPROC) /* glTransformPathNV */ (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERIVNVPROC) /* glPathParameterivNV */ (GLuint path, GLenum pname, const GLint * value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERINVPROC) /* glPathParameteriNV */ (GLuint path, GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFVNVPROC) /* glPathParameterfvNV */ (GLuint path, GLenum pname, const GLfloat * value);
typedef void (GL_APIENTRYP PFNGLPATHPARAMETERFNVPROC) /* glPathParameterfNV */ (GLuint path, GLenum pname, GLfloat value);
typedef void (GL_APIENTRYP PFNGLPATHDASHARRAYNVPROC) /* glPathDashArrayNV */ (GLuint path, GLsizei dashCount, const GLfloat * dashArray);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILFUNCNVPROC) /* glPathStencilFuncNV */ (GLenum func, GLint ref, GLuint mask);
typedef void (GL_APIENTRYP PFNGLPATHSTENCILDEPTHOFFSETNVPROC) /* glPathStencilDepthOffsetNV */ (GLfloat factor, GLfloat units);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHNVPROC) /* glStencilFillPathNV */ (GLuint path, GLenum fillMode, GLuint mask);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHNVPROC) /* glStencilStrokePathNV */ (GLuint path, GLint reference, GLuint mask);
typedef void (GL_APIENTRYP PFNGLSTENCILFILLPATHINSTANCEDNVPROC) /* glStencilFillPathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) /* glStencilStrokePathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLPATHCOVERDEPTHFUNCNVPROC) /* glPathCoverDepthFuncNV */ (GLenum func);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHNVPROC) /* glCoverFillPathNV */ (GLuint path, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHNVPROC) /* glCoverStrokePathNV */ (GLuint path, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLCOVERFILLPATHINSTANCEDNVPROC) /* glCoverFillPathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) /* glCoverStrokePathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERIVNVPROC) /* glGetPathParameterivNV */ (GLuint path, GLenum pname, GLint * value);
typedef void (GL_APIENTRYP PFNGLGETPATHPARAMETERFVNVPROC) /* glGetPathParameterfvNV */ (GLuint path, GLenum pname, GLfloat * value);
typedef void (GL_APIENTRYP PFNGLGETPATHCOMMANDSNVPROC) /* glGetPathCommandsNV */ (GLuint path, GLubyte * commands);
typedef void (GL_APIENTRYP PFNGLGETPATHCOORDSNVPROC) /* glGetPathCoordsNV */ (GLuint path, GLfloat * coords);
typedef void (GL_APIENTRYP PFNGLGETPATHDASHARRAYNVPROC) /* glGetPathDashArrayNV */ (GLuint path, GLfloat * dashArray);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICSNVPROC) /* glGetPathMetricsNV */ (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics);
typedef void (GL_APIENTRYP PFNGLGETPATHMETRICRANGENVPROC) /* glGetPathMetricRangeNV */ (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics);
typedef void (GL_APIENTRYP PFNGLGETPATHSPACINGNVPROC) /* glGetPathSpacingNV */ (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINFILLPATHNVPROC) /* glIsPointInFillPathNV */ (GLuint path, GLuint mask, GLfloat x, GLfloat y);
typedef GLboolean (GL_APIENTRYP PFNGLISPOINTINSTROKEPATHNVPROC) /* glIsPointInStrokePathNV */ (GLuint path, GLfloat x, GLfloat y);
typedef GLfloat (GL_APIENTRYP PFNGLGETPATHLENGTHNVPROC) /* glGetPathLengthNV */ (GLuint path, GLsizei startSegment, GLsizei numSegments);
typedef GLboolean (GL_APIENTRYP PFNGLPOINTALONGPATHNVPROC) /* glPointAlongPathNV */ (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X2FNVPROC) /* glMatrixLoad3x2fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOAD3X3FNVPROC) /* glMatrixLoad3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) /* glMatrixLoadTranspose3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X2FNVPROC) /* glMatrixMult3x2fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULT3X3FNVPROC) /* glMatrixMult3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) /* glMatrixMultTranspose3x3fNV */ (GLenum matrixMode, const GLfloat * m);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHNVPROC) /* glStencilThenCoverFillPathNV */ (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) /* glStencilThenCoverStrokePathNV */ (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) /* glStencilThenCoverFillPathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef void (GL_APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) /* glStencilThenCoverStrokePathInstancedNV */ (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXRANGENVPROC) /* glPathGlyphIndexRangeNV */ (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount);
typedef GLenum (GL_APIENTRYP PFNGLPATHGLYPHINDEXARRAYNVPROC) /* glPathGlyphIndexArrayNV */ (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef GLenum (GL_APIENTRYP PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) /* glPathMemoryGlyphIndexArrayNV */ (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GL_APIENTRYP PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) /* glProgramPathFragmentInputGenNV */ (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMRESOURCEFVNVPROC) /* glGetProgramResourcefvNV */ (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params);
typedef void (GL_APIENTRYP PFNGLPOLYGONMODENVPROC) /* glPolygonModeNV */ (GLenum face, GLenum mode);
typedef void (GL_APIENTRYP PFNGLREADBUFFERNVPROC) /* glReadBufferNV */ (GLenum mode);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) /* glFramebufferSampleLocationsfvNV */ (GLenum target, GLuint start, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) /* glNamedFramebufferSampleLocationsfvNV */ (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLRESOLVEDEPTHVALUESNVPROC) /* glResolveDepthValuesNV */ ();
typedef void (GL_APIENTRYP PFNGLSCISSOREXCLUSIVENVPROC) /* glScissorExclusiveNV */ (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) /* glScissorExclusiveArrayvNV */ (GLuint first, GLsizei count, const GLint * v);
typedef void (GL_APIENTRYP PFNGLBINDSHADINGRATEIMAGENVPROC) /* glBindShadingRateImageNV */ (GLuint texture);
typedef void (GL_APIENTRYP PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) /* glGetShadingRateImagePaletteNV */ (GLuint viewport, GLuint entry, GLenum * rate);
typedef void (GL_APIENTRYP PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) /* glGetShadingRateSampleLocationivNV */ (GLenum rate, GLuint samples, GLuint index, GLint * location);
typedef void (GL_APIENTRYP PFNGLSHADINGRATEIMAGEBARRIERNVPROC) /* glShadingRateImageBarrierNV */ (GLboolean synchronize);
typedef void (GL_APIENTRYP PFNGLSHADINGRATEIMAGEPALETTENVPROC) /* glShadingRateImagePaletteNV */ (GLuint viewport, GLuint first, GLsizei count, const GLenum * rates);
typedef void (GL_APIENTRYP PFNGLSHADINGRATESAMPLEORDERNVPROC) /* glShadingRateSampleOrderNV */ (GLenum order);
typedef void (GL_APIENTRYP PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) /* glShadingRateSampleOrderCustomNV */ (GLenum rate, GLuint samples, const GLint * locations);
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVNVPROC) /* glViewportArrayvNV */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFNVPROC) /* glViewportIndexedfNV */ (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVNVPROC) /* glViewportIndexedfvNV */ (GLuint index, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVNVPROC) /* glScissorArrayvNV */ (GLuint first, GLsizei count, const GLint * v);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDNVPROC) /* glScissorIndexedNV */ (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVNVPROC) /* glScissorIndexedvNV */ (GLuint index, const GLint * v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVNVPROC) /* glDepthRangeArrayfvNV */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFNVPROC) /* glDepthRangeIndexedfNV */ (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VNVPROC) /* glGetFloati_vNV */ (GLenum target, GLuint index, GLfloat * data);
typedef void (GL_APIENTRYP PFNGLENABLEINVPROC) /* glEnableiNV */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEINVPROC) /* glDisableiNV */ (GLenum target, GLuint index);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDINVPROC) /* glIsEnablediNV */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLVIEWPORTSWIZZLENVPROC) /* glViewportSwizzleNV */ (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETTEXTURE2DOESPROC) /* glEGLImageTargetTexture2DOES */ (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) /* glEGLImageTargetRenderbufferStorageOES */ (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRYP PFNGLCOPYIMAGESUBDATAOESPROC) /* glCopyImageSubDataOES */ (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRYP PFNGLENABLEIOESPROC) /* glEnableiOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIOESPROC) /* glDisableiOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONIOESPROC) /* glBlendEquationiOES */ (GLuint buf, GLenum mode);
typedef void (GL_APIENTRYP PFNGLBLENDEQUATIONSEPARATEIOESPROC) /* glBlendEquationSeparateiOES */ (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCIOESPROC) /* glBlendFunciOES */ (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRYP PFNGLBLENDFUNCSEPARATEIOESPROC) /* glBlendFuncSeparateiOES */ (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRYP PFNGLCOLORMASKIOESPROC) /* glColorMaskiOES */ (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIOESPROC) /* glIsEnablediOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXOESPROC) /* glDrawElementsBaseVertexOES */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) /* glDrawRangeElementsBaseVertexOES */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) /* glDrawElementsInstancedBaseVertexOES */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) /* glMultiDrawElementsBaseVertexEXT */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREOESPROC) /* glFramebufferTextureOES */ (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRYP PFNGLGETPROGRAMBINARYOESPROC) /* glGetProgramBinaryOES */ (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef void (GL_APIENTRYP PFNGLPROGRAMBINARYOESPROC) /* glProgramBinaryOES */ (GLuint program, GLenum binaryFormat, const void * binary, GLint length);
typedef void * (GL_APIENTRYP PFNGLMAPBUFFEROESPROC) /* glMapBufferOES */ (GLenum target, GLenum access);
typedef GLboolean (GL_APIENTRYP PFNGLUNMAPBUFFEROESPROC) /* glUnmapBufferOES */ (GLenum target);
typedef void (GL_APIENTRYP PFNGLGETBUFFERPOINTERVOESPROC) /* glGetBufferPointervOES */ (GLenum target, GLenum pname, void ** params);
typedef void (GL_APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXOESPROC) /* glPrimitiveBoundingBoxOES */ (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GL_APIENTRYP PFNGLMINSAMPLESHADINGOESPROC) /* glMinSampleShadingOES */ (GLfloat value);
typedef void (GL_APIENTRYP PFNGLPATCHPARAMETERIOESPROC) /* glPatchParameteriOES */ (GLenum pname, GLint value);
typedef void (GL_APIENTRYP PFNGLTEXIMAGE3DOESPROC) /* glTexImage3DOES */ (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLTEXSUBIMAGE3DOESPROC) /* glTexSubImage3DOES */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (GL_APIENTRYP PFNGLCOPYTEXSUBIMAGE3DOESPROC) /* glCopyTexSubImage3DOES */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DOESPROC) /* glCompressedTexImage3DOES */ (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) /* glCompressedTexSubImage3DOES */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DOESPROC) /* glFramebufferTexture3DOES */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIIVOESPROC) /* glTexParameterIivOES */ (GLenum target, GLenum pname, const GLint * params);
typedef void (GL_APIENTRYP PFNGLTEXPARAMETERIUIVOESPROC) /* glTexParameterIuivOES */ (GLenum target, GLenum pname, const GLuint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIIVOESPROC) /* glGetTexParameterIivOES */ (GLenum target, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETTEXPARAMETERIUIVOESPROC) /* glGetTexParameterIuivOES */ (GLenum target, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIIVOESPROC) /* glSamplerParameterIivOES */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (GL_APIENTRYP PFNGLSAMPLERPARAMETERIUIVOESPROC) /* glSamplerParameterIuivOES */ (GLuint sampler, GLenum pname, const GLuint * param);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIIVOESPROC) /* glGetSamplerParameterIivOES */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVOESPROC) /* glGetSamplerParameterIuivOES */ (GLuint sampler, GLenum pname, GLuint * params);
typedef void (GL_APIENTRYP PFNGLTEXBUFFEROESPROC) /* glTexBufferOES */ (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRYP PFNGLTEXBUFFERRANGEOESPROC) /* glTexBufferRangeOES */ (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC) /* glTexStorage3DMultisampleOES */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRYP PFNGLTEXTUREVIEWOESPROC) /* glTextureViewOES */ (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GL_APIENTRYP PFNGLBINDVERTEXARRAYOESPROC) /* glBindVertexArrayOES */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLDELETEVERTEXARRAYSOESPROC) /* glDeleteVertexArraysOES */ (GLsizei n, const GLuint * arrays);
typedef void (GL_APIENTRYP PFNGLGENVERTEXARRAYSOESPROC) /* glGenVertexArraysOES */ (GLsizei n, GLuint * arrays);
typedef GLboolean (GL_APIENTRYP PFNGLISVERTEXARRAYOESPROC) /* glIsVertexArrayOES */ (GLuint array);
typedef void (GL_APIENTRYP PFNGLVIEWPORTARRAYVOESPROC) /* glViewportArrayvOES */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFOESPROC) /* glViewportIndexedfOES */ (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRYP PFNGLVIEWPORTINDEXEDFVOESPROC) /* glViewportIndexedfvOES */ (GLuint index, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLSCISSORARRAYVOESPROC) /* glScissorArrayvOES */ (GLuint first, GLsizei count, const GLint * v);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDOESPROC) /* glScissorIndexedOES */ (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRYP PFNGLSCISSORINDEXEDVOESPROC) /* glScissorIndexedvOES */ (GLuint index, const GLint * v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEARRAYFVOESPROC) /* glDepthRangeArrayfvOES */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (GL_APIENTRYP PFNGLDEPTHRANGEINDEXEDFOESPROC) /* glDepthRangeIndexedfOES */ (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRYP PFNGLGETFLOATI_VOESPROC) /* glGetFloati_vOES */ (GLenum target, GLuint index, GLfloat * data);
typedef void (GL_APIENTRYP PFNGLENABLEIOESPROC) /* glEnableiOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLDISABLEIOESPROC) /* glDisableiOES */ (GLenum target, GLuint index);
typedef GLboolean (GL_APIENTRYP PFNGLISENABLEDIOESPROC) /* glIsEnablediOES */ (GLenum target, GLuint index);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) /* glFramebufferTextureMultiviewOVR */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC) /* glFramebufferTextureMultisampleMultiviewOVR */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews);
typedef void (GL_APIENTRYP PFNGLALPHAFUNCQCOMPROC) /* glAlphaFuncQCOM */ (GLenum func, GLclampf ref);
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSQCOMPROC) /* glGetDriverControlsQCOM */ (GLint * num, GLsizei size, GLuint * driverControls);
typedef void (GL_APIENTRYP PFNGLGETDRIVERCONTROLSTRINGQCOMPROC) /* glGetDriverControlStringQCOM */ (GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString);
typedef void (GL_APIENTRYP PFNGLENABLEDRIVERCONTROLQCOMPROC) /* glEnableDriverControlQCOM */ (GLuint driverControl);
typedef void (GL_APIENTRYP PFNGLDISABLEDRIVERCONTROLQCOMPROC) /* glDisableDriverControlQCOM */ (GLuint driverControl);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXTURESQCOMPROC) /* glExtGetTexturesQCOM */ (GLuint * textures, GLint maxTextures, GLint * numTextures);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERSQCOMPROC) /* glExtGetBuffersQCOM */ (GLuint * buffers, GLint maxBuffers, GLint * numBuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETRENDERBUFFERSQCOMPROC) /* glExtGetRenderbuffersQCOM */ (GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETFRAMEBUFFERSQCOMPROC) /* glExtGetFramebuffersQCOM */ (GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC) /* glExtGetTexLevelParameterivQCOM */ (GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params);
typedef void (GL_APIENTRYP PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC) /* glExtTexObjectStateOverrideiQCOM */ (GLenum target, GLenum pname, GLint param);
typedef void (GL_APIENTRYP PFNGLEXTGETTEXSUBIMAGEQCOMPROC) /* glExtGetTexSubImageQCOM */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels);
typedef void (GL_APIENTRYP PFNGLEXTGETBUFFERPOINTERVQCOMPROC) /* glExtGetBufferPointervQCOM */ (GLenum target, void ** params);
typedef void (GL_APIENTRYP PFNGLEXTGETSHADERSQCOMPROC) /* glExtGetShadersQCOM */ (GLuint * shaders, GLint maxShaders, GLint * numShaders);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMSQCOMPROC) /* glExtGetProgramsQCOM */ (GLuint * programs, GLint maxPrograms, GLint * numPrograms);
typedef GLboolean (GL_APIENTRYP PFNGLEXTISPROGRAMBINARYQCOMPROC) /* glExtIsProgramBinaryQCOM */ (GLuint program);
typedef void (GL_APIENTRYP PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC) /* glExtGetProgramBinarySourceQCOM */ (GLuint program, GLenum shadertype, GLchar * source, GLint * length);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC) /* glFramebufferFoveationConfigQCOM */ (GLuint framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint * providedFeatures);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC) /* glFramebufferFoveationParametersQCOM */ (GLuint framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);
typedef void (GL_APIENTRYP PFNGLTEXESTIMATEMOTIONQCOMPROC) /* glTexEstimateMotionQCOM */ (GLuint ref, GLuint target, GLuint output);
typedef void (GL_APIENTRYP PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC) /* glTexEstimateMotionRegionsQCOM */ (GLuint ref, GLuint target, GLuint output, GLuint mask);
typedef void (GL_APIENTRYP PFNGLEXTRAPOLATETEX2DQCOMPROC) /* glExtrapolateTex2DQCOM */ (GLuint src1, GLuint src2, GLuint output, GLfloat scaleFactor);
typedef void (GL_APIENTRYP PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC) /* glTextureFoveationParametersQCOM */ (GLuint texture, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);
typedef void (GL_APIENTRYP PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC) /* glFramebufferFetchBarrierQCOM */ ();
typedef void (GL_APIENTRYP PFNGLSHADINGRATEQCOMPROC) /* glShadingRateQCOM */ (GLenum rate);
typedef void (GL_APIENTRYP PFNGLSTARTTILINGQCOMPROC) /* glStartTilingQCOM */ (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
typedef void (GL_APIENTRYP PFNGLENDTILINGQCOMPROC) /* glEndTilingQCOM */ (GLbitfield preserveMask);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  class gles
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceConfig
    {
    public:

      bool m_featureSupported [GLEW_GLES_FeatureSetCount];

      PFNGLREADBUFFERPROC m_glReadBuffer;
      PFNGLDRAWRANGEELEMENTSPROC m_glDrawRangeElements;
      PFNGLTEXIMAGE3DPROC m_glTexImage3D;
      PFNGLTEXSUBIMAGE3DPROC m_glTexSubImage3D;
      PFNGLCOPYTEXSUBIMAGE3DPROC m_glCopyTexSubImage3D;
      PFNGLCOMPRESSEDTEXIMAGE3DPROC m_glCompressedTexImage3D;
      PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC m_glCompressedTexSubImage3D;
      PFNGLGENQUERIESPROC m_glGenQueries;
      PFNGLDELETEQUERIESPROC m_glDeleteQueries;
      PFNGLISQUERYPROC m_glIsQuery;
      PFNGLBEGINQUERYPROC m_glBeginQuery;
      PFNGLENDQUERYPROC m_glEndQuery;
      PFNGLGETQUERYIVPROC m_glGetQueryiv;
      PFNGLGETQUERYOBJECTUIVPROC m_glGetQueryObjectuiv;
      PFNGLUNMAPBUFFERPROC m_glUnmapBuffer;
      PFNGLGETBUFFERPOINTERVPROC m_glGetBufferPointerv;
      PFNGLDRAWBUFFERSPROC m_glDrawBuffers;
      PFNGLUNIFORMMATRIX2X3FVPROC m_glUniformMatrix2x3fv;
      PFNGLUNIFORMMATRIX3X2FVPROC m_glUniformMatrix3x2fv;
      PFNGLUNIFORMMATRIX2X4FVPROC m_glUniformMatrix2x4fv;
      PFNGLUNIFORMMATRIX4X2FVPROC m_glUniformMatrix4x2fv;
      PFNGLUNIFORMMATRIX3X4FVPROC m_glUniformMatrix3x4fv;
      PFNGLUNIFORMMATRIX4X3FVPROC m_glUniformMatrix4x3fv;
      PFNGLBLITFRAMEBUFFERPROC m_glBlitFramebuffer;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC m_glRenderbufferStorageMultisample;
      PFNGLFRAMEBUFFERTEXTURELAYERPROC m_glFramebufferTextureLayer;
      PFNGLMAPBUFFERRANGEPROC m_glMapBufferRange;
      PFNGLFLUSHMAPPEDBUFFERRANGEPROC m_glFlushMappedBufferRange;
      PFNGLBINDVERTEXARRAYPROC m_glBindVertexArray;
      PFNGLDELETEVERTEXARRAYSPROC m_glDeleteVertexArrays;
      PFNGLGENVERTEXARRAYSPROC m_glGenVertexArrays;
      PFNGLISVERTEXARRAYPROC m_glIsVertexArray;
      PFNGLGETINTEGERI_VPROC m_glGetIntegeri_v;
      PFNGLBEGINTRANSFORMFEEDBACKPROC m_glBeginTransformFeedback;
      PFNGLENDTRANSFORMFEEDBACKPROC m_glEndTransformFeedback;
      PFNGLBINDBUFFERRANGEPROC m_glBindBufferRange;
      PFNGLBINDBUFFERBASEPROC m_glBindBufferBase;
      PFNGLTRANSFORMFEEDBACKVARYINGSPROC m_glTransformFeedbackVaryings;
      PFNGLGETTRANSFORMFEEDBACKVARYINGPROC m_glGetTransformFeedbackVarying;
      PFNGLVERTEXATTRIBIPOINTERPROC m_glVertexAttribIPointer;
      PFNGLGETVERTEXATTRIBIIVPROC m_glGetVertexAttribIiv;
      PFNGLGETVERTEXATTRIBIUIVPROC m_glGetVertexAttribIuiv;
      PFNGLVERTEXATTRIBI4IPROC m_glVertexAttribI4i;
      PFNGLVERTEXATTRIBI4UIPROC m_glVertexAttribI4ui;
      PFNGLVERTEXATTRIBI4IVPROC m_glVertexAttribI4iv;
      PFNGLVERTEXATTRIBI4UIVPROC m_glVertexAttribI4uiv;
      PFNGLGETUNIFORMUIVPROC m_glGetUniformuiv;
      PFNGLGETFRAGDATALOCATIONPROC m_glGetFragDataLocation;
      PFNGLUNIFORM1UIPROC m_glUniform1ui;
      PFNGLUNIFORM2UIPROC m_glUniform2ui;
      PFNGLUNIFORM3UIPROC m_glUniform3ui;
      PFNGLUNIFORM4UIPROC m_glUniform4ui;
      PFNGLUNIFORM1UIVPROC m_glUniform1uiv;
      PFNGLUNIFORM2UIVPROC m_glUniform2uiv;
      PFNGLUNIFORM3UIVPROC m_glUniform3uiv;
      PFNGLUNIFORM4UIVPROC m_glUniform4uiv;
      PFNGLCLEARBUFFERIVPROC m_glClearBufferiv;
      PFNGLCLEARBUFFERUIVPROC m_glClearBufferuiv;
      PFNGLCLEARBUFFERFVPROC m_glClearBufferfv;
      PFNGLCLEARBUFFERFIPROC m_glClearBufferfi;
      PFNGLGETSTRINGIPROC m_glGetStringi;
      PFNGLCOPYBUFFERSUBDATAPROC m_glCopyBufferSubData;
      PFNGLGETUNIFORMINDICESPROC m_glGetUniformIndices;
      PFNGLGETACTIVEUNIFORMSIVPROC m_glGetActiveUniformsiv;
      PFNGLGETUNIFORMBLOCKINDEXPROC m_glGetUniformBlockIndex;
      PFNGLGETACTIVEUNIFORMBLOCKIVPROC m_glGetActiveUniformBlockiv;
      PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC m_glGetActiveUniformBlockName;
      PFNGLUNIFORMBLOCKBINDINGPROC m_glUniformBlockBinding;
      PFNGLDRAWARRAYSINSTANCEDPROC m_glDrawArraysInstanced;
      PFNGLDRAWELEMENTSINSTANCEDPROC m_glDrawElementsInstanced;
      PFNGLFENCESYNCPROC m_glFenceSync;
      PFNGLISSYNCPROC m_glIsSync;
      PFNGLDELETESYNCPROC m_glDeleteSync;
      PFNGLCLIENTWAITSYNCPROC m_glClientWaitSync;
      PFNGLWAITSYNCPROC m_glWaitSync;
      PFNGLGETINTEGER64VPROC m_glGetInteger64v;
      PFNGLGETSYNCIVPROC m_glGetSynciv;
      PFNGLGETINTEGER64I_VPROC m_glGetInteger64i_v;
      PFNGLGETBUFFERPARAMETERI64VPROC m_glGetBufferParameteri64v;
      PFNGLGENSAMPLERSPROC m_glGenSamplers;
      PFNGLDELETESAMPLERSPROC m_glDeleteSamplers;
      PFNGLISSAMPLERPROC m_glIsSampler;
      PFNGLBINDSAMPLERPROC m_glBindSampler;
      PFNGLSAMPLERPARAMETERIPROC m_glSamplerParameteri;
      PFNGLSAMPLERPARAMETERIVPROC m_glSamplerParameteriv;
      PFNGLSAMPLERPARAMETERFPROC m_glSamplerParameterf;
      PFNGLSAMPLERPARAMETERFVPROC m_glSamplerParameterfv;
      PFNGLGETSAMPLERPARAMETERIVPROC m_glGetSamplerParameteriv;
      PFNGLGETSAMPLERPARAMETERFVPROC m_glGetSamplerParameterfv;
      PFNGLVERTEXATTRIBDIVISORPROC m_glVertexAttribDivisor;
      PFNGLBINDTRANSFORMFEEDBACKPROC m_glBindTransformFeedback;
      PFNGLDELETETRANSFORMFEEDBACKSPROC m_glDeleteTransformFeedbacks;
      PFNGLGENTRANSFORMFEEDBACKSPROC m_glGenTransformFeedbacks;
      PFNGLISTRANSFORMFEEDBACKPROC m_glIsTransformFeedback;
      PFNGLPAUSETRANSFORMFEEDBACKPROC m_glPauseTransformFeedback;
      PFNGLRESUMETRANSFORMFEEDBACKPROC m_glResumeTransformFeedback;
      PFNGLGETPROGRAMBINARYPROC m_glGetProgramBinary;
      PFNGLPROGRAMBINARYPROC m_glProgramBinary;
      PFNGLPROGRAMPARAMETERIPROC m_glProgramParameteri;
      PFNGLINVALIDATEFRAMEBUFFERPROC m_glInvalidateFramebuffer;
      PFNGLINVALIDATESUBFRAMEBUFFERPROC m_glInvalidateSubFramebuffer;
      PFNGLTEXSTORAGE2DPROC m_glTexStorage2D;
      PFNGLTEXSTORAGE3DPROC m_glTexStorage3D;
      PFNGLGETINTERNALFORMATIVPROC m_glGetInternalformativ;
      PFNGLDISPATCHCOMPUTEPROC m_glDispatchCompute;
      PFNGLDISPATCHCOMPUTEINDIRECTPROC m_glDispatchComputeIndirect;
      PFNGLDRAWARRAYSINDIRECTPROC m_glDrawArraysIndirect;
      PFNGLDRAWELEMENTSINDIRECTPROC m_glDrawElementsIndirect;
      PFNGLFRAMEBUFFERPARAMETERIPROC m_glFramebufferParameteri;
      PFNGLGETFRAMEBUFFERPARAMETERIVPROC m_glGetFramebufferParameteriv;
      PFNGLGETPROGRAMINTERFACEIVPROC m_glGetProgramInterfaceiv;
      PFNGLGETPROGRAMRESOURCEINDEXPROC m_glGetProgramResourceIndex;
      PFNGLGETPROGRAMRESOURCENAMEPROC m_glGetProgramResourceName;
      PFNGLGETPROGRAMRESOURCEIVPROC m_glGetProgramResourceiv;
      PFNGLGETPROGRAMRESOURCELOCATIONPROC m_glGetProgramResourceLocation;
      PFNGLUSEPROGRAMSTAGESPROC m_glUseProgramStages;
      PFNGLACTIVESHADERPROGRAMPROC m_glActiveShaderProgram;
      PFNGLCREATESHADERPROGRAMVPROC m_glCreateShaderProgramv;
      PFNGLBINDPROGRAMPIPELINEPROC m_glBindProgramPipeline;
      PFNGLDELETEPROGRAMPIPELINESPROC m_glDeleteProgramPipelines;
      PFNGLGENPROGRAMPIPELINESPROC m_glGenProgramPipelines;
      PFNGLISPROGRAMPIPELINEPROC m_glIsProgramPipeline;
      PFNGLGETPROGRAMPIPELINEIVPROC m_glGetProgramPipelineiv;
      PFNGLPROGRAMUNIFORM1IPROC m_glProgramUniform1i;
      PFNGLPROGRAMUNIFORM2IPROC m_glProgramUniform2i;
      PFNGLPROGRAMUNIFORM3IPROC m_glProgramUniform3i;
      PFNGLPROGRAMUNIFORM4IPROC m_glProgramUniform4i;
      PFNGLPROGRAMUNIFORM1UIPROC m_glProgramUniform1ui;
      PFNGLPROGRAMUNIFORM2UIPROC m_glProgramUniform2ui;
      PFNGLPROGRAMUNIFORM3UIPROC m_glProgramUniform3ui;
      PFNGLPROGRAMUNIFORM4UIPROC m_glProgramUniform4ui;
      PFNGLPROGRAMUNIFORM1FPROC m_glProgramUniform1f;
      PFNGLPROGRAMUNIFORM2FPROC m_glProgramUniform2f;
      PFNGLPROGRAMUNIFORM3FPROC m_glProgramUniform3f;
      PFNGLPROGRAMUNIFORM4FPROC m_glProgramUniform4f;
      PFNGLPROGRAMUNIFORM1IVPROC m_glProgramUniform1iv;
      PFNGLPROGRAMUNIFORM2IVPROC m_glProgramUniform2iv;
      PFNGLPROGRAMUNIFORM3IVPROC m_glProgramUniform3iv;
      PFNGLPROGRAMUNIFORM4IVPROC m_glProgramUniform4iv;
      PFNGLPROGRAMUNIFORM1UIVPROC m_glProgramUniform1uiv;
      PFNGLPROGRAMUNIFORM2UIVPROC m_glProgramUniform2uiv;
      PFNGLPROGRAMUNIFORM3UIVPROC m_glProgramUniform3uiv;
      PFNGLPROGRAMUNIFORM4UIVPROC m_glProgramUniform4uiv;
      PFNGLPROGRAMUNIFORM1FVPROC m_glProgramUniform1fv;
      PFNGLPROGRAMUNIFORM2FVPROC m_glProgramUniform2fv;
      PFNGLPROGRAMUNIFORM3FVPROC m_glProgramUniform3fv;
      PFNGLPROGRAMUNIFORM4FVPROC m_glProgramUniform4fv;
      PFNGLPROGRAMUNIFORMMATRIX2FVPROC m_glProgramUniformMatrix2fv;
      PFNGLPROGRAMUNIFORMMATRIX3FVPROC m_glProgramUniformMatrix3fv;
      PFNGLPROGRAMUNIFORMMATRIX4FVPROC m_glProgramUniformMatrix4fv;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC m_glProgramUniformMatrix2x3fv;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC m_glProgramUniformMatrix3x2fv;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC m_glProgramUniformMatrix2x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC m_glProgramUniformMatrix4x2fv;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC m_glProgramUniformMatrix3x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC m_glProgramUniformMatrix4x3fv;
      PFNGLVALIDATEPROGRAMPIPELINEPROC m_glValidateProgramPipeline;
      PFNGLGETPROGRAMPIPELINEINFOLOGPROC m_glGetProgramPipelineInfoLog;
      PFNGLBINDIMAGETEXTUREPROC m_glBindImageTexture;
      PFNGLGETBOOLEANI_VPROC m_glGetBooleani_v;
      PFNGLMEMORYBARRIERPROC m_glMemoryBarrier;
      PFNGLMEMORYBARRIERBYREGIONPROC m_glMemoryBarrierByRegion;
      PFNGLTEXSTORAGE2DMULTISAMPLEPROC m_glTexStorage2DMultisample;
      PFNGLGETMULTISAMPLEFVPROC m_glGetMultisamplefv;
      PFNGLSAMPLEMASKIPROC m_glSampleMaski;
      PFNGLGETTEXLEVELPARAMETERIVPROC m_glGetTexLevelParameteriv;
      PFNGLGETTEXLEVELPARAMETERFVPROC m_glGetTexLevelParameterfv;
      PFNGLBINDVERTEXBUFFERPROC m_glBindVertexBuffer;
      PFNGLVERTEXATTRIBFORMATPROC m_glVertexAttribFormat;
      PFNGLVERTEXATTRIBIFORMATPROC m_glVertexAttribIFormat;
      PFNGLVERTEXATTRIBBINDINGPROC m_glVertexAttribBinding;
      PFNGLVERTEXBINDINGDIVISORPROC m_glVertexBindingDivisor;
      PFNGLBLENDBARRIERPROC m_glBlendBarrier;
      PFNGLCOPYIMAGESUBDATAPROC m_glCopyImageSubData;
      PFNGLDEBUGMESSAGECONTROLPROC m_glDebugMessageControl;
      PFNGLDEBUGMESSAGEINSERTPROC m_glDebugMessageInsert;
      PFNGLDEBUGMESSAGECALLBACKPROC m_glDebugMessageCallback;
      PFNGLGETDEBUGMESSAGELOGPROC m_glGetDebugMessageLog;
      PFNGLPUSHDEBUGGROUPPROC m_glPushDebugGroup;
      PFNGLPOPDEBUGGROUPPROC m_glPopDebugGroup;
      PFNGLOBJECTLABELPROC m_glObjectLabel;
      PFNGLGETOBJECTLABELPROC m_glGetObjectLabel;
      PFNGLOBJECTPTRLABELPROC m_glObjectPtrLabel;
      PFNGLGETOBJECTPTRLABELPROC m_glGetObjectPtrLabel;
      PFNGLGETPOINTERVPROC m_glGetPointerv;
      PFNGLENABLEIPROC m_glEnablei;
      PFNGLDISABLEIPROC m_glDisablei;
      PFNGLBLENDEQUATIONIPROC m_glBlendEquationi;
      PFNGLBLENDEQUATIONSEPARATEIPROC m_glBlendEquationSeparatei;
      PFNGLBLENDFUNCIPROC m_glBlendFunci;
      PFNGLBLENDFUNCSEPARATEIPROC m_glBlendFuncSeparatei;
      PFNGLCOLORMASKIPROC m_glColorMaski;
      PFNGLISENABLEDIPROC m_glIsEnabledi;
      PFNGLDRAWELEMENTSBASEVERTEXPROC m_glDrawElementsBaseVertex;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC m_glDrawRangeElementsBaseVertex;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC m_glDrawElementsInstancedBaseVertex;
      PFNGLFRAMEBUFFERTEXTUREPROC m_glFramebufferTexture;
      PFNGLPRIMITIVEBOUNDINGBOXPROC m_glPrimitiveBoundingBox;
      PFNGLGETGRAPHICSRESETSTATUSPROC m_glGetGraphicsResetStatus;
      PFNGLREADNPIXELSPROC m_glReadnPixels;
      PFNGLGETNUNIFORMFVPROC m_glGetnUniformfv;
      PFNGLGETNUNIFORMIVPROC m_glGetnUniformiv;
      PFNGLGETNUNIFORMUIVPROC m_glGetnUniformuiv;
      PFNGLMINSAMPLESHADINGPROC m_glMinSampleShading;
      PFNGLPATCHPARAMETERIPROC m_glPatchParameteri;
      PFNGLTEXPARAMETERIIVPROC m_glTexParameterIiv;
      PFNGLTEXPARAMETERIUIVPROC m_glTexParameterIuiv;
      PFNGLGETTEXPARAMETERIIVPROC m_glGetTexParameterIiv;
      PFNGLGETTEXPARAMETERIUIVPROC m_glGetTexParameterIuiv;
      PFNGLSAMPLERPARAMETERIIVPROC m_glSamplerParameterIiv;
      PFNGLSAMPLERPARAMETERIUIVPROC m_glSamplerParameterIuiv;
      PFNGLGETSAMPLERPARAMETERIIVPROC m_glGetSamplerParameterIiv;
      PFNGLGETSAMPLERPARAMETERIUIVPROC m_glGetSamplerParameterIuiv;
      PFNGLTEXBUFFERPROC m_glTexBuffer;
      PFNGLTEXBUFFERRANGEPROC m_glTexBufferRange;
      PFNGLTEXSTORAGE3DMULTISAMPLEPROC m_glTexStorage3DMultisample;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC m_glRenderbufferStorageMultisampleAdvancedAMD;
      PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC m_glNamedRenderbufferStorageMultisampleAdvancedAMD;
      PFNGLGETPERFMONITORGROUPSAMDPROC m_glGetPerfMonitorGroupsAMD;
      PFNGLGETPERFMONITORCOUNTERSAMDPROC m_glGetPerfMonitorCountersAMD;
      PFNGLGETPERFMONITORGROUPSTRINGAMDPROC m_glGetPerfMonitorGroupStringAMD;
      PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC m_glGetPerfMonitorCounterStringAMD;
      PFNGLGETPERFMONITORCOUNTERINFOAMDPROC m_glGetPerfMonitorCounterInfoAMD;
      PFNGLGENPERFMONITORSAMDPROC m_glGenPerfMonitorsAMD;
      PFNGLDELETEPERFMONITORSAMDPROC m_glDeletePerfMonitorsAMD;
      PFNGLSELECTPERFMONITORCOUNTERSAMDPROC m_glSelectPerfMonitorCountersAMD;
      PFNGLBEGINPERFMONITORAMDPROC m_glBeginPerfMonitorAMD;
      PFNGLENDPERFMONITORAMDPROC m_glEndPerfMonitorAMD;
      PFNGLGETPERFMONITORCOUNTERDATAAMDPROC m_glGetPerfMonitorCounterDataAMD;
      PFNGLBLITFRAMEBUFFERANGLEPROC m_glBlitFramebufferANGLE;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC m_glRenderbufferStorageMultisampleANGLE;
      PFNGLDRAWARRAYSINSTANCEDANGLEPROC m_glDrawArraysInstancedANGLE;
      PFNGLDRAWELEMENTSINSTANCEDANGLEPROC m_glDrawElementsInstancedANGLE;
      PFNGLVERTEXATTRIBDIVISORANGLEPROC m_glVertexAttribDivisorANGLE;
      PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC m_glGetTranslatedShaderSourceANGLE;
      PFNGLCOPYTEXTURELEVELSAPPLEPROC m_glCopyTextureLevelsAPPLE;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC m_glRenderbufferStorageMultisampleAPPLE;
      PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC m_glResolveMultisampleFramebufferAPPLE;
      PFNGLFENCESYNCAPPLEPROC m_glFenceSyncAPPLE;
      PFNGLISSYNCAPPLEPROC m_glIsSyncAPPLE;
      PFNGLDELETESYNCAPPLEPROC m_glDeleteSyncAPPLE;
      PFNGLCLIENTWAITSYNCAPPLEPROC m_glClientWaitSyncAPPLE;
      PFNGLWAITSYNCAPPLEPROC m_glWaitSyncAPPLE;
      PFNGLGETINTEGER64VAPPLEPROC m_glGetInteger64vAPPLE;
      PFNGLGETSYNCIVAPPLEPROC m_glGetSyncivAPPLE;
      PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC m_glEGLImageTargetTexStorageEXT;
      PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC m_glEGLImageTargetTextureStorageEXT;
      PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC m_glDrawArraysInstancedBaseInstanceEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC m_glDrawElementsInstancedBaseInstanceEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC m_glDrawElementsInstancedBaseVertexBaseInstanceEXT;
      PFNGLBINDFRAGDATALOCATIONINDEXEDEXTPROC m_glBindFragDataLocationIndexedEXT;
      PFNGLBINDFRAGDATALOCATIONEXTPROC m_glBindFragDataLocationEXT;
      PFNGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC m_glGetProgramResourceLocationIndexEXT;
      PFNGLGETFRAGDATAINDEXEXTPROC m_glGetFragDataIndexEXT;
      PFNGLBUFFERSTORAGEEXTPROC m_glBufferStorageEXT;
      PFNGLCLEARTEXIMAGEEXTPROC m_glClearTexImageEXT;
      PFNGLCLEARTEXSUBIMAGEEXTPROC m_glClearTexSubImageEXT;
      PFNGLCLIPCONTROLEXTPROC m_glClipControlEXT;
      PFNGLCOPYIMAGESUBDATAEXTPROC m_glCopyImageSubDataEXT;
      PFNGLLABELOBJECTEXTPROC m_glLabelObjectEXT;
      PFNGLGETOBJECTLABELEXTPROC m_glGetObjectLabelEXT;
      PFNGLINSERTEVENTMARKEREXTPROC m_glInsertEventMarkerEXT;
      PFNGLPUSHGROUPMARKEREXTPROC m_glPushGroupMarkerEXT;
      PFNGLPOPGROUPMARKEREXTPROC m_glPopGroupMarkerEXT;
      PFNGLDISCARDFRAMEBUFFEREXTPROC m_glDiscardFramebufferEXT;
      PFNGLGENQUERIESEXTPROC m_glGenQueriesEXT;
      PFNGLDELETEQUERIESEXTPROC m_glDeleteQueriesEXT;
      PFNGLISQUERYEXTPROC m_glIsQueryEXT;
      PFNGLBEGINQUERYEXTPROC m_glBeginQueryEXT;
      PFNGLENDQUERYEXTPROC m_glEndQueryEXT;
      PFNGLQUERYCOUNTEREXTPROC m_glQueryCounterEXT;
      PFNGLGETQUERYIVEXTPROC m_glGetQueryivEXT;
      PFNGLGETQUERYOBJECTIVEXTPROC m_glGetQueryObjectivEXT;
      PFNGLGETQUERYOBJECTUIVEXTPROC m_glGetQueryObjectuivEXT;
      PFNGLGETQUERYOBJECTI64VEXTPROC m_glGetQueryObjecti64vEXT;
      PFNGLGETQUERYOBJECTUI64VEXTPROC m_glGetQueryObjectui64vEXT;
      PFNGLGETINTEGER64VEXTPROC m_glGetInteger64vEXT;
      PFNGLDRAWBUFFERSEXTPROC m_glDrawBuffersEXT;
      PFNGLENABLEIEXTPROC m_glEnableiEXT;
      PFNGLDISABLEIEXTPROC m_glDisableiEXT;
      PFNGLBLENDEQUATIONIEXTPROC m_glBlendEquationiEXT;
      PFNGLBLENDEQUATIONSEPARATEIEXTPROC m_glBlendEquationSeparateiEXT;
      PFNGLBLENDFUNCIEXTPROC m_glBlendFunciEXT;
      PFNGLBLENDFUNCSEPARATEIEXTPROC m_glBlendFuncSeparateiEXT;
      PFNGLCOLORMASKIEXTPROC m_glColorMaskiEXT;
      PFNGLISENABLEDIEXTPROC m_glIsEnablediEXT;
      PFNGLDRAWELEMENTSBASEVERTEXEXTPROC m_glDrawElementsBaseVertexEXT;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC m_glDrawRangeElementsBaseVertexEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC m_glDrawElementsInstancedBaseVertexEXT;
      PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC m_glMultiDrawElementsBaseVertexEXT;
      PFNGLDRAWARRAYSINSTANCEDEXTPROC m_glDrawArraysInstancedEXT;
      PFNGLDRAWELEMENTSINSTANCEDEXTPROC m_glDrawElementsInstancedEXT;
      PFNGLDRAWTRANSFORMFEEDBACKEXTPROC m_glDrawTransformFeedbackEXT;
      PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDEXTPROC m_glDrawTransformFeedbackInstancedEXT;
      PFNGLBUFFERSTORAGEEXTERNALEXTPROC m_glBufferStorageExternalEXT;
      PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC m_glNamedBufferStorageExternalEXT;
      PFNGLFRAMEBUFFERTEXTUREEXTPROC m_glFramebufferTextureEXT;
      PFNGLVERTEXATTRIBDIVISOREXTPROC m_glVertexAttribDivisorEXT;
      PFNGLMAPBUFFERRANGEEXTPROC m_glMapBufferRangeEXT;
      PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC m_glFlushMappedBufferRangeEXT;
      PFNGLGETUNSIGNEDBYTEVEXTPROC m_glGetUnsignedBytevEXT;
      PFNGLGETUNSIGNEDBYTEI_VEXTPROC m_glGetUnsignedBytei_vEXT;
      PFNGLDELETEMEMORYOBJECTSEXTPROC m_glDeleteMemoryObjectsEXT;
      PFNGLISMEMORYOBJECTEXTPROC m_glIsMemoryObjectEXT;
      PFNGLCREATEMEMORYOBJECTSEXTPROC m_glCreateMemoryObjectsEXT;
      PFNGLMEMORYOBJECTPARAMETERIVEXTPROC m_glMemoryObjectParameterivEXT;
      PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC m_glGetMemoryObjectParameterivEXT;
      PFNGLTEXSTORAGEMEM2DEXTPROC m_glTexStorageMem2DEXT;
      PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC m_glTexStorageMem2DMultisampleEXT;
      PFNGLTEXSTORAGEMEM3DEXTPROC m_glTexStorageMem3DEXT;
      PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC m_glTexStorageMem3DMultisampleEXT;
      PFNGLBUFFERSTORAGEMEMEXTPROC m_glBufferStorageMemEXT;
      PFNGLTEXTURESTORAGEMEM2DEXTPROC m_glTextureStorageMem2DEXT;
      PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC m_glTextureStorageMem2DMultisampleEXT;
      PFNGLTEXTURESTORAGEMEM3DEXTPROC m_glTextureStorageMem3DEXT;
      PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC m_glTextureStorageMem3DMultisampleEXT;
      PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC m_glNamedBufferStorageMemEXT;
      PFNGLIMPORTMEMORYFDEXTPROC m_glImportMemoryFdEXT;
      PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC m_glImportMemoryWin32HandleEXT;
      PFNGLIMPORTMEMORYWIN32NAMEEXTPROC m_glImportMemoryWin32NameEXT;
      PFNGLMULTIDRAWARRAYSEXTPROC m_glMultiDrawArraysEXT;
      PFNGLMULTIDRAWELEMENTSEXTPROC m_glMultiDrawElementsEXT;
      PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC m_glMultiDrawArraysIndirectEXT;
      PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC m_glMultiDrawElementsIndirectEXT;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC m_glRenderbufferStorageMultisampleEXT;
      PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC m_glFramebufferTexture2DMultisampleEXT;
      PFNGLREADBUFFERINDEXEDEXTPROC m_glReadBufferIndexedEXT;
      PFNGLDRAWBUFFERSINDEXEDEXTPROC m_glDrawBuffersIndexedEXT;
      PFNGLGETINTEGERI_VEXTPROC m_glGetIntegeri_vEXT;
      PFNGLPOLYGONOFFSETCLAMPEXTPROC m_glPolygonOffsetClampEXT;
      PFNGLPRIMITIVEBOUNDINGBOXEXTPROC m_glPrimitiveBoundingBoxEXT;
      PFNGLRASTERSAMPLESEXTPROC m_glRasterSamplesEXT;
      PFNGLGETGRAPHICSRESETSTATUSEXTPROC m_glGetGraphicsResetStatusEXT;
      PFNGLREADNPIXELSEXTPROC m_glReadnPixelsEXT;
      PFNGLGETNUNIFORMFVEXTPROC m_glGetnUniformfvEXT;
      PFNGLGETNUNIFORMIVEXTPROC m_glGetnUniformivEXT;
      PFNGLGENSEMAPHORESEXTPROC m_glGenSemaphoresEXT;
      PFNGLDELETESEMAPHORESEXTPROC m_glDeleteSemaphoresEXT;
      PFNGLISSEMAPHOREEXTPROC m_glIsSemaphoreEXT;
      PFNGLSEMAPHOREPARAMETERUI64VEXTPROC m_glSemaphoreParameterui64vEXT;
      PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC m_glGetSemaphoreParameterui64vEXT;
      PFNGLWAITSEMAPHOREEXTPROC m_glWaitSemaphoreEXT;
      PFNGLSIGNALSEMAPHOREEXTPROC m_glSignalSemaphoreEXT;
      PFNGLIMPORTSEMAPHOREFDEXTPROC m_glImportSemaphoreFdEXT;
      PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC m_glImportSemaphoreWin32HandleEXT;
      PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC m_glImportSemaphoreWin32NameEXT;
      PFNGLACTIVESHADERPROGRAMEXTPROC m_glActiveShaderProgramEXT;
      PFNGLBINDPROGRAMPIPELINEEXTPROC m_glBindProgramPipelineEXT;
      PFNGLCREATESHADERPROGRAMVEXTPROC m_glCreateShaderProgramvEXT;
      PFNGLDELETEPROGRAMPIPELINESEXTPROC m_glDeleteProgramPipelinesEXT;
      PFNGLGENPROGRAMPIPELINESEXTPROC m_glGenProgramPipelinesEXT;
      PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC m_glGetProgramPipelineInfoLogEXT;
      PFNGLGETPROGRAMPIPELINEIVEXTPROC m_glGetProgramPipelineivEXT;
      PFNGLISPROGRAMPIPELINEEXTPROC m_glIsProgramPipelineEXT;
      PFNGLPROGRAMPARAMETERIEXTPROC m_glProgramParameteriEXT;
      PFNGLPROGRAMUNIFORM1FEXTPROC m_glProgramUniform1fEXT;
      PFNGLPROGRAMUNIFORM1FVEXTPROC m_glProgramUniform1fvEXT;
      PFNGLPROGRAMUNIFORM1IEXTPROC m_glProgramUniform1iEXT;
      PFNGLPROGRAMUNIFORM1IVEXTPROC m_glProgramUniform1ivEXT;
      PFNGLPROGRAMUNIFORM2FEXTPROC m_glProgramUniform2fEXT;
      PFNGLPROGRAMUNIFORM2FVEXTPROC m_glProgramUniform2fvEXT;
      PFNGLPROGRAMUNIFORM2IEXTPROC m_glProgramUniform2iEXT;
      PFNGLPROGRAMUNIFORM2IVEXTPROC m_glProgramUniform2ivEXT;
      PFNGLPROGRAMUNIFORM3FEXTPROC m_glProgramUniform3fEXT;
      PFNGLPROGRAMUNIFORM3FVEXTPROC m_glProgramUniform3fvEXT;
      PFNGLPROGRAMUNIFORM3IEXTPROC m_glProgramUniform3iEXT;
      PFNGLPROGRAMUNIFORM3IVEXTPROC m_glProgramUniform3ivEXT;
      PFNGLPROGRAMUNIFORM4FEXTPROC m_glProgramUniform4fEXT;
      PFNGLPROGRAMUNIFORM4FVEXTPROC m_glProgramUniform4fvEXT;
      PFNGLPROGRAMUNIFORM4IEXTPROC m_glProgramUniform4iEXT;
      PFNGLPROGRAMUNIFORM4IVEXTPROC m_glProgramUniform4ivEXT;
      PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC m_glProgramUniformMatrix2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC m_glProgramUniformMatrix3fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC m_glProgramUniformMatrix4fvEXT;
      PFNGLUSEPROGRAMSTAGESEXTPROC m_glUseProgramStagesEXT;
      PFNGLVALIDATEPROGRAMPIPELINEEXTPROC m_glValidateProgramPipelineEXT;
      PFNGLPROGRAMUNIFORM1UIEXTPROC m_glProgramUniform1uiEXT;
      PFNGLPROGRAMUNIFORM2UIEXTPROC m_glProgramUniform2uiEXT;
      PFNGLPROGRAMUNIFORM3UIEXTPROC m_glProgramUniform3uiEXT;
      PFNGLPROGRAMUNIFORM4UIEXTPROC m_glProgramUniform4uiEXT;
      PFNGLPROGRAMUNIFORM1UIVEXTPROC m_glProgramUniform1uivEXT;
      PFNGLPROGRAMUNIFORM2UIVEXTPROC m_glProgramUniform2uivEXT;
      PFNGLPROGRAMUNIFORM3UIVEXTPROC m_glProgramUniform3uivEXT;
      PFNGLPROGRAMUNIFORM4UIVEXTPROC m_glProgramUniform4uivEXT;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC m_glProgramUniformMatrix2x3fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC m_glProgramUniformMatrix3x2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC m_glProgramUniformMatrix2x4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC m_glProgramUniformMatrix4x2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC m_glProgramUniformMatrix3x4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC m_glProgramUniformMatrix4x3fvEXT;
      PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC m_glFramebufferFetchBarrierEXT;
      PFNGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC m_glFramebufferPixelLocalStorageSizeEXT;
      PFNGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC m_glGetFramebufferPixelLocalStorageSizeEXT;
      PFNGLCLEARPIXELLOCALSTORAGEUIEXTPROC m_glClearPixelLocalStorageuiEXT;
      PFNGLTEXPAGECOMMITMENTEXTPROC m_glTexPageCommitmentEXT;
      PFNGLPATCHPARAMETERIEXTPROC m_glPatchParameteriEXT;
      PFNGLTEXPARAMETERIIVEXTPROC m_glTexParameterIivEXT;
      PFNGLTEXPARAMETERIUIVEXTPROC m_glTexParameterIuivEXT;
      PFNGLGETTEXPARAMETERIIVEXTPROC m_glGetTexParameterIivEXT;
      PFNGLGETTEXPARAMETERIUIVEXTPROC m_glGetTexParameterIuivEXT;
      PFNGLSAMPLERPARAMETERIIVEXTPROC m_glSamplerParameterIivEXT;
      PFNGLSAMPLERPARAMETERIUIVEXTPROC m_glSamplerParameterIuivEXT;
      PFNGLGETSAMPLERPARAMETERIIVEXTPROC m_glGetSamplerParameterIivEXT;
      PFNGLGETSAMPLERPARAMETERIUIVEXTPROC m_glGetSamplerParameterIuivEXT;
      PFNGLTEXBUFFEREXTPROC m_glTexBufferEXT;
      PFNGLTEXBUFFERRANGEEXTPROC m_glTexBufferRangeEXT;
      PFNGLTEXSTORAGE1DEXTPROC m_glTexStorage1DEXT;
      PFNGLTEXSTORAGE2DEXTPROC m_glTexStorage2DEXT;
      PFNGLTEXSTORAGE3DEXTPROC m_glTexStorage3DEXT;
      PFNGLTEXTURESTORAGE1DEXTPROC m_glTextureStorage1DEXT;
      PFNGLTEXTURESTORAGE2DEXTPROC m_glTextureStorage2DEXT;
      PFNGLTEXTURESTORAGE3DEXTPROC m_glTextureStorage3DEXT;
      PFNGLTEXTUREVIEWEXTPROC m_glTextureViewEXT;
      PFNGLCREATESEMAPHORESNVPROC m_glCreateSemaphoresNV;
      PFNGLSEMAPHOREPARAMETERIVNVPROC m_glSemaphoreParameterivNV;
      PFNGLGETSEMAPHOREPARAMETERIVNVPROC m_glGetSemaphoreParameterivNV;
      PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC m_glAcquireKeyedMutexWin32EXT;
      PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC m_glReleaseKeyedMutexWin32EXT;
      PFNGLWINDOWRECTANGLESEXTPROC m_glWindowRectanglesEXT;
      PFNGLGETTEXTUREHANDLEIMGPROC m_glGetTextureHandleIMG;
      PFNGLGETTEXTURESAMPLERHANDLEIMGPROC m_glGetTextureSamplerHandleIMG;
      PFNGLUNIFORMHANDLEUI64IMGPROC m_glUniformHandleui64IMG;
      PFNGLUNIFORMHANDLEUI64VIMGPROC m_glUniformHandleui64vIMG;
      PFNGLPROGRAMUNIFORMHANDLEUI64IMGPROC m_glProgramUniformHandleui64IMG;
      PFNGLPROGRAMUNIFORMHANDLEUI64VIMGPROC m_glProgramUniformHandleui64vIMG;
      PFNGLFRAMEBUFFERTEXTURE2DDOWNSAMPLEIMGPROC m_glFramebufferTexture2DDownsampleIMG;
      PFNGLFRAMEBUFFERTEXTURELAYERDOWNSAMPLEIMGPROC m_glFramebufferTextureLayerDownsampleIMG;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC m_glRenderbufferStorageMultisampleIMG;
      PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC m_glFramebufferTexture2DMultisampleIMG;
      PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC m_glApplyFramebufferAttachmentCMAAINTEL;
      PFNGLBEGINPERFQUERYINTELPROC m_glBeginPerfQueryINTEL;
      PFNGLCREATEPERFQUERYINTELPROC m_glCreatePerfQueryINTEL;
      PFNGLDELETEPERFQUERYINTELPROC m_glDeletePerfQueryINTEL;
      PFNGLENDPERFQUERYINTELPROC m_glEndPerfQueryINTEL;
      PFNGLGETFIRSTPERFQUERYIDINTELPROC m_glGetFirstPerfQueryIdINTEL;
      PFNGLGETNEXTPERFQUERYIDINTELPROC m_glGetNextPerfQueryIdINTEL;
      PFNGLGETPERFCOUNTERINFOINTELPROC m_glGetPerfCounterInfoINTEL;
      PFNGLGETPERFQUERYDATAINTELPROC m_glGetPerfQueryDataINTEL;
      PFNGLGETPERFQUERYIDBYNAMEINTELPROC m_glGetPerfQueryIdByNameINTEL;
      PFNGLGETPERFQUERYINFOINTELPROC m_glGetPerfQueryInfoINTEL;
      PFNGLBLENDBARRIERKHRPROC m_glBlendBarrierKHR;
      PFNGLDEBUGMESSAGECONTROLKHRPROC m_glDebugMessageControlKHR;
      PFNGLDEBUGMESSAGEINSERTKHRPROC m_glDebugMessageInsertKHR;
      PFNGLDEBUGMESSAGECALLBACKKHRPROC m_glDebugMessageCallbackKHR;
      PFNGLGETDEBUGMESSAGELOGKHRPROC m_glGetDebugMessageLogKHR;
      PFNGLPUSHDEBUGGROUPKHRPROC m_glPushDebugGroupKHR;
      PFNGLPOPDEBUGGROUPKHRPROC m_glPopDebugGroupKHR;
      PFNGLOBJECTLABELKHRPROC m_glObjectLabelKHR;
      PFNGLGETOBJECTLABELKHRPROC m_glGetObjectLabelKHR;
      PFNGLOBJECTPTRLABELKHRPROC m_glObjectPtrLabelKHR;
      PFNGLGETOBJECTPTRLABELKHRPROC m_glGetObjectPtrLabelKHR;
      PFNGLGETPOINTERVKHRPROC m_glGetPointervKHR;
      PFNGLGETGRAPHICSRESETSTATUSKHRPROC m_glGetGraphicsResetStatusKHR;
      PFNGLREADNPIXELSKHRPROC m_glReadnPixelsKHR;
      PFNGLGETNUNIFORMFVKHRPROC m_glGetnUniformfvKHR;
      PFNGLGETNUNIFORMIVKHRPROC m_glGetnUniformivKHR;
      PFNGLGETNUNIFORMUIVKHRPROC m_glGetnUniformuivKHR;
      PFNGLMAXSHADERCOMPILERTHREADSKHRPROC m_glMaxShaderCompilerThreadsKHR;
      PFNGLFRAMEBUFFERPARAMETERIMESAPROC m_glFramebufferParameteriMESA;
      PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC m_glGetFramebufferParameterivMESA;
      PFNGLGETTEXTUREHANDLENVPROC m_glGetTextureHandleNV;
      PFNGLGETTEXTURESAMPLERHANDLENVPROC m_glGetTextureSamplerHandleNV;
      PFNGLMAKETEXTUREHANDLERESIDENTNVPROC m_glMakeTextureHandleResidentNV;
      PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC m_glMakeTextureHandleNonResidentNV;
      PFNGLGETIMAGEHANDLENVPROC m_glGetImageHandleNV;
      PFNGLMAKEIMAGEHANDLERESIDENTNVPROC m_glMakeImageHandleResidentNV;
      PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC m_glMakeImageHandleNonResidentNV;
      PFNGLUNIFORMHANDLEUI64NVPROC m_glUniformHandleui64NV;
      PFNGLUNIFORMHANDLEUI64VNVPROC m_glUniformHandleui64vNV;
      PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC m_glProgramUniformHandleui64NV;
      PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC m_glProgramUniformHandleui64vNV;
      PFNGLISTEXTUREHANDLERESIDENTNVPROC m_glIsTextureHandleResidentNV;
      PFNGLISIMAGEHANDLERESIDENTNVPROC m_glIsImageHandleResidentNV;
      PFNGLBLENDPARAMETERINVPROC m_glBlendParameteriNV;
      PFNGLBLENDBARRIERNVPROC m_glBlendBarrierNV;
      PFNGLVIEWPORTPOSITIONWSCALENVPROC m_glViewportPositionWScaleNV;
      PFNGLBEGINCONDITIONALRENDERNVPROC m_glBeginConditionalRenderNV;
      PFNGLENDCONDITIONALRENDERNVPROC m_glEndConditionalRenderNV;
      PFNGLSUBPIXELPRECISIONBIASNVPROC m_glSubpixelPrecisionBiasNV;
      PFNGLCONSERVATIVERASTERPARAMETERINVPROC m_glConservativeRasterParameteriNV;
      PFNGLCOPYBUFFERSUBDATANVPROC m_glCopyBufferSubDataNV;
      PFNGLCOVERAGEMASKNVPROC m_glCoverageMaskNV;
      PFNGLCOVERAGEOPERATIONNVPROC m_glCoverageOperationNV;
      PFNGLDRAWBUFFERSNVPROC m_glDrawBuffersNV;
      PFNGLDRAWARRAYSINSTANCEDNVPROC m_glDrawArraysInstancedNV;
      PFNGLDRAWELEMENTSINSTANCEDNVPROC m_glDrawElementsInstancedNV;
      PFNGLDRAWVKIMAGENVPROC m_glDrawVkImageNV;
      PFNGLGETVKPROCADDRNVPROC m_glGetVkProcAddrNV;
      PFNGLWAITVKSEMAPHORENVPROC m_glWaitVkSemaphoreNV;
      PFNGLSIGNALVKSEMAPHORENVPROC m_glSignalVkSemaphoreNV;
      PFNGLSIGNALVKFENCENVPROC m_glSignalVkFenceNV;
      PFNGLDELETEFENCESNVPROC m_glDeleteFencesNV;
      PFNGLGENFENCESNVPROC m_glGenFencesNV;
      PFNGLISFENCENVPROC m_glIsFenceNV;
      PFNGLTESTFENCENVPROC m_glTestFenceNV;
      PFNGLGETFENCEIVNVPROC m_glGetFenceivNV;
      PFNGLFINISHFENCENVPROC m_glFinishFenceNV;
      PFNGLSETFENCENVPROC m_glSetFenceNV;
      PFNGLFRAGMENTCOVERAGECOLORNVPROC m_glFragmentCoverageColorNV;
      PFNGLBLITFRAMEBUFFERNVPROC m_glBlitFramebufferNV;
      PFNGLCOVERAGEMODULATIONTABLENVPROC m_glCoverageModulationTableNV;
      PFNGLGETCOVERAGEMODULATIONTABLENVPROC m_glGetCoverageModulationTableNV;
      PFNGLCOVERAGEMODULATIONNVPROC m_glCoverageModulationNV;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC m_glRenderbufferStorageMultisampleNV;
      PFNGLUNIFORM1I64NVPROC m_glUniform1i64NV;
      PFNGLUNIFORM2I64NVPROC m_glUniform2i64NV;
      PFNGLUNIFORM3I64NVPROC m_glUniform3i64NV;
      PFNGLUNIFORM4I64NVPROC m_glUniform4i64NV;
      PFNGLUNIFORM1I64VNVPROC m_glUniform1i64vNV;
      PFNGLUNIFORM2I64VNVPROC m_glUniform2i64vNV;
      PFNGLUNIFORM3I64VNVPROC m_glUniform3i64vNV;
      PFNGLUNIFORM4I64VNVPROC m_glUniform4i64vNV;
      PFNGLUNIFORM1UI64NVPROC m_glUniform1ui64NV;
      PFNGLUNIFORM2UI64NVPROC m_glUniform2ui64NV;
      PFNGLUNIFORM3UI64NVPROC m_glUniform3ui64NV;
      PFNGLUNIFORM4UI64NVPROC m_glUniform4ui64NV;
      PFNGLUNIFORM1UI64VNVPROC m_glUniform1ui64vNV;
      PFNGLUNIFORM2UI64VNVPROC m_glUniform2ui64vNV;
      PFNGLUNIFORM3UI64VNVPROC m_glUniform3ui64vNV;
      PFNGLUNIFORM4UI64VNVPROC m_glUniform4ui64vNV;
      PFNGLGETUNIFORMI64VNVPROC m_glGetUniformi64vNV;
      PFNGLPROGRAMUNIFORM1I64NVPROC m_glProgramUniform1i64NV;
      PFNGLPROGRAMUNIFORM2I64NVPROC m_glProgramUniform2i64NV;
      PFNGLPROGRAMUNIFORM3I64NVPROC m_glProgramUniform3i64NV;
      PFNGLPROGRAMUNIFORM4I64NVPROC m_glProgramUniform4i64NV;
      PFNGLPROGRAMUNIFORM1I64VNVPROC m_glProgramUniform1i64vNV;
      PFNGLPROGRAMUNIFORM2I64VNVPROC m_glProgramUniform2i64vNV;
      PFNGLPROGRAMUNIFORM3I64VNVPROC m_glProgramUniform3i64vNV;
      PFNGLPROGRAMUNIFORM4I64VNVPROC m_glProgramUniform4i64vNV;
      PFNGLPROGRAMUNIFORM1UI64NVPROC m_glProgramUniform1ui64NV;
      PFNGLPROGRAMUNIFORM2UI64NVPROC m_glProgramUniform2ui64NV;
      PFNGLPROGRAMUNIFORM3UI64NVPROC m_glProgramUniform3ui64NV;
      PFNGLPROGRAMUNIFORM4UI64NVPROC m_glProgramUniform4ui64NV;
      PFNGLPROGRAMUNIFORM1UI64VNVPROC m_glProgramUniform1ui64vNV;
      PFNGLPROGRAMUNIFORM2UI64VNVPROC m_glProgramUniform2ui64vNV;
      PFNGLPROGRAMUNIFORM3UI64VNVPROC m_glProgramUniform3ui64vNV;
      PFNGLPROGRAMUNIFORM4UI64VNVPROC m_glProgramUniform4ui64vNV;
      PFNGLVERTEXATTRIBDIVISORNVPROC m_glVertexAttribDivisorNV;
      PFNGLGETINTERNALFORMATSAMPLEIVNVPROC m_glGetInternalformatSampleivNV;
      PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC m_glGetMemoryObjectDetachedResourcesuivNV;
      PFNGLRESETMEMORYOBJECTPARAMETERNVPROC m_glResetMemoryObjectParameterNV;
      PFNGLTEXATTACHMEMORYNVPROC m_glTexAttachMemoryNV;
      PFNGLBUFFERATTACHMEMORYNVPROC m_glBufferAttachMemoryNV;
      PFNGLTEXTUREATTACHMEMORYNVPROC m_glTextureAttachMemoryNV;
      PFNGLNAMEDBUFFERATTACHMEMORYNVPROC m_glNamedBufferAttachMemoryNV;
      PFNGLBUFFERPAGECOMMITMENTMEMNVPROC m_glBufferPageCommitmentMemNV;
      PFNGLTEXPAGECOMMITMENTMEMNVPROC m_glTexPageCommitmentMemNV;
      PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC m_glNamedBufferPageCommitmentMemNV;
      PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC m_glTexturePageCommitmentMemNV;
      PFNGLDRAWMESHTASKSNVPROC m_glDrawMeshTasksNV;
      PFNGLDRAWMESHTASKSINDIRECTNVPROC m_glDrawMeshTasksIndirectNV;
      PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC m_glMultiDrawMeshTasksIndirectNV;
      PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC m_glMultiDrawMeshTasksIndirectCountNV;
      PFNGLUNIFORMMATRIX2X3FVNVPROC m_glUniformMatrix2x3fvNV;
      PFNGLUNIFORMMATRIX3X2FVNVPROC m_glUniformMatrix3x2fvNV;
      PFNGLUNIFORMMATRIX2X4FVNVPROC m_glUniformMatrix2x4fvNV;
      PFNGLUNIFORMMATRIX4X2FVNVPROC m_glUniformMatrix4x2fvNV;
      PFNGLUNIFORMMATRIX3X4FVNVPROC m_glUniformMatrix3x4fvNV;
      PFNGLUNIFORMMATRIX4X3FVNVPROC m_glUniformMatrix4x3fvNV;
      PFNGLGENPATHSNVPROC m_glGenPathsNV;
      PFNGLDELETEPATHSNVPROC m_glDeletePathsNV;
      PFNGLISPATHNVPROC m_glIsPathNV;
      PFNGLPATHCOMMANDSNVPROC m_glPathCommandsNV;
      PFNGLPATHCOORDSNVPROC m_glPathCoordsNV;
      PFNGLPATHSUBCOMMANDSNVPROC m_glPathSubCommandsNV;
      PFNGLPATHSUBCOORDSNVPROC m_glPathSubCoordsNV;
      PFNGLPATHSTRINGNVPROC m_glPathStringNV;
      PFNGLPATHGLYPHSNVPROC m_glPathGlyphsNV;
      PFNGLPATHGLYPHRANGENVPROC m_glPathGlyphRangeNV;
      PFNGLWEIGHTPATHSNVPROC m_glWeightPathsNV;
      PFNGLCOPYPATHNVPROC m_glCopyPathNV;
      PFNGLINTERPOLATEPATHSNVPROC m_glInterpolatePathsNV;
      PFNGLTRANSFORMPATHNVPROC m_glTransformPathNV;
      PFNGLPATHPARAMETERIVNVPROC m_glPathParameterivNV;
      PFNGLPATHPARAMETERINVPROC m_glPathParameteriNV;
      PFNGLPATHPARAMETERFVNVPROC m_glPathParameterfvNV;
      PFNGLPATHPARAMETERFNVPROC m_glPathParameterfNV;
      PFNGLPATHDASHARRAYNVPROC m_glPathDashArrayNV;
      PFNGLPATHSTENCILFUNCNVPROC m_glPathStencilFuncNV;
      PFNGLPATHSTENCILDEPTHOFFSETNVPROC m_glPathStencilDepthOffsetNV;
      PFNGLSTENCILFILLPATHNVPROC m_glStencilFillPathNV;
      PFNGLSTENCILSTROKEPATHNVPROC m_glStencilStrokePathNV;
      PFNGLSTENCILFILLPATHINSTANCEDNVPROC m_glStencilFillPathInstancedNV;
      PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC m_glStencilStrokePathInstancedNV;
      PFNGLPATHCOVERDEPTHFUNCNVPROC m_glPathCoverDepthFuncNV;
      PFNGLCOVERFILLPATHNVPROC m_glCoverFillPathNV;
      PFNGLCOVERSTROKEPATHNVPROC m_glCoverStrokePathNV;
      PFNGLCOVERFILLPATHINSTANCEDNVPROC m_glCoverFillPathInstancedNV;
      PFNGLCOVERSTROKEPATHINSTANCEDNVPROC m_glCoverStrokePathInstancedNV;
      PFNGLGETPATHPARAMETERIVNVPROC m_glGetPathParameterivNV;
      PFNGLGETPATHPARAMETERFVNVPROC m_glGetPathParameterfvNV;
      PFNGLGETPATHCOMMANDSNVPROC m_glGetPathCommandsNV;
      PFNGLGETPATHCOORDSNVPROC m_glGetPathCoordsNV;
      PFNGLGETPATHDASHARRAYNVPROC m_glGetPathDashArrayNV;
      PFNGLGETPATHMETRICSNVPROC m_glGetPathMetricsNV;
      PFNGLGETPATHMETRICRANGENVPROC m_glGetPathMetricRangeNV;
      PFNGLGETPATHSPACINGNVPROC m_glGetPathSpacingNV;
      PFNGLISPOINTINFILLPATHNVPROC m_glIsPointInFillPathNV;
      PFNGLISPOINTINSTROKEPATHNVPROC m_glIsPointInStrokePathNV;
      PFNGLGETPATHLENGTHNVPROC m_glGetPathLengthNV;
      PFNGLPOINTALONGPATHNVPROC m_glPointAlongPathNV;
      PFNGLMATRIXLOAD3X2FNVPROC m_glMatrixLoad3x2fNV;
      PFNGLMATRIXLOAD3X3FNVPROC m_glMatrixLoad3x3fNV;
      PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC m_glMatrixLoadTranspose3x3fNV;
      PFNGLMATRIXMULT3X2FNVPROC m_glMatrixMult3x2fNV;
      PFNGLMATRIXMULT3X3FNVPROC m_glMatrixMult3x3fNV;
      PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC m_glMatrixMultTranspose3x3fNV;
      PFNGLSTENCILTHENCOVERFILLPATHNVPROC m_glStencilThenCoverFillPathNV;
      PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC m_glStencilThenCoverStrokePathNV;
      PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC m_glStencilThenCoverFillPathInstancedNV;
      PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC m_glStencilThenCoverStrokePathInstancedNV;
      PFNGLPATHGLYPHINDEXRANGENVPROC m_glPathGlyphIndexRangeNV;
      PFNGLPATHGLYPHINDEXARRAYNVPROC m_glPathGlyphIndexArrayNV;
      PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC m_glPathMemoryGlyphIndexArrayNV;
      PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC m_glProgramPathFragmentInputGenNV;
      PFNGLGETPROGRAMRESOURCEFVNVPROC m_glGetProgramResourcefvNV;
      PFNGLPOLYGONMODENVPROC m_glPolygonModeNV;
      PFNGLREADBUFFERNVPROC m_glReadBufferNV;
      PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC m_glFramebufferSampleLocationsfvNV;
      PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC m_glNamedFramebufferSampleLocationsfvNV;
      PFNGLRESOLVEDEPTHVALUESNVPROC m_glResolveDepthValuesNV;
      PFNGLSCISSOREXCLUSIVENVPROC m_glScissorExclusiveNV;
      PFNGLSCISSOREXCLUSIVEARRAYVNVPROC m_glScissorExclusiveArrayvNV;
      PFNGLBINDSHADINGRATEIMAGENVPROC m_glBindShadingRateImageNV;
      PFNGLGETSHADINGRATEIMAGEPALETTENVPROC m_glGetShadingRateImagePaletteNV;
      PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC m_glGetShadingRateSampleLocationivNV;
      PFNGLSHADINGRATEIMAGEBARRIERNVPROC m_glShadingRateImageBarrierNV;
      PFNGLSHADINGRATEIMAGEPALETTENVPROC m_glShadingRateImagePaletteNV;
      PFNGLSHADINGRATESAMPLEORDERNVPROC m_glShadingRateSampleOrderNV;
      PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC m_glShadingRateSampleOrderCustomNV;
      PFNGLVIEWPORTARRAYVNVPROC m_glViewportArrayvNV;
      PFNGLVIEWPORTINDEXEDFNVPROC m_glViewportIndexedfNV;
      PFNGLVIEWPORTINDEXEDFVNVPROC m_glViewportIndexedfvNV;
      PFNGLSCISSORARRAYVNVPROC m_glScissorArrayvNV;
      PFNGLSCISSORINDEXEDNVPROC m_glScissorIndexedNV;
      PFNGLSCISSORINDEXEDVNVPROC m_glScissorIndexedvNV;
      PFNGLDEPTHRANGEARRAYFVNVPROC m_glDepthRangeArrayfvNV;
      PFNGLDEPTHRANGEINDEXEDFNVPROC m_glDepthRangeIndexedfNV;
      PFNGLGETFLOATI_VNVPROC m_glGetFloati_vNV;
      PFNGLENABLEINVPROC m_glEnableiNV;
      PFNGLDISABLEINVPROC m_glDisableiNV;
      PFNGLISENABLEDINVPROC m_glIsEnablediNV;
      PFNGLVIEWPORTSWIZZLENVPROC m_glViewportSwizzleNV;
      PFNGLEGLIMAGETARGETTEXTURE2DOESPROC m_glEGLImageTargetTexture2DOES;
      PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC m_glEGLImageTargetRenderbufferStorageOES;
      PFNGLCOPYIMAGESUBDATAOESPROC m_glCopyImageSubDataOES;
      PFNGLENABLEIOESPROC m_glEnableiOES;
      PFNGLDISABLEIOESPROC m_glDisableiOES;
      PFNGLBLENDEQUATIONIOESPROC m_glBlendEquationiOES;
      PFNGLBLENDEQUATIONSEPARATEIOESPROC m_glBlendEquationSeparateiOES;
      PFNGLBLENDFUNCIOESPROC m_glBlendFunciOES;
      PFNGLBLENDFUNCSEPARATEIOESPROC m_glBlendFuncSeparateiOES;
      PFNGLCOLORMASKIOESPROC m_glColorMaskiOES;
      PFNGLISENABLEDIOESPROC m_glIsEnablediOES;
      PFNGLDRAWELEMENTSBASEVERTEXOESPROC m_glDrawElementsBaseVertexOES;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC m_glDrawRangeElementsBaseVertexOES;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC m_glDrawElementsInstancedBaseVertexOES;
      PFNGLFRAMEBUFFERTEXTUREOESPROC m_glFramebufferTextureOES;
      PFNGLGETPROGRAMBINARYOESPROC m_glGetProgramBinaryOES;
      PFNGLPROGRAMBINARYOESPROC m_glProgramBinaryOES;
      PFNGLMAPBUFFEROESPROC m_glMapBufferOES;
      PFNGLUNMAPBUFFEROESPROC m_glUnmapBufferOES;
      PFNGLGETBUFFERPOINTERVOESPROC m_glGetBufferPointervOES;
      PFNGLPRIMITIVEBOUNDINGBOXOESPROC m_glPrimitiveBoundingBoxOES;
      PFNGLMINSAMPLESHADINGOESPROC m_glMinSampleShadingOES;
      PFNGLPATCHPARAMETERIOESPROC m_glPatchParameteriOES;
      PFNGLTEXIMAGE3DOESPROC m_glTexImage3DOES;
      PFNGLTEXSUBIMAGE3DOESPROC m_glTexSubImage3DOES;
      PFNGLCOPYTEXSUBIMAGE3DOESPROC m_glCopyTexSubImage3DOES;
      PFNGLCOMPRESSEDTEXIMAGE3DOESPROC m_glCompressedTexImage3DOES;
      PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC m_glCompressedTexSubImage3DOES;
      PFNGLFRAMEBUFFERTEXTURE3DOESPROC m_glFramebufferTexture3DOES;
      PFNGLTEXPARAMETERIIVOESPROC m_glTexParameterIivOES;
      PFNGLTEXPARAMETERIUIVOESPROC m_glTexParameterIuivOES;
      PFNGLGETTEXPARAMETERIIVOESPROC m_glGetTexParameterIivOES;
      PFNGLGETTEXPARAMETERIUIVOESPROC m_glGetTexParameterIuivOES;
      PFNGLSAMPLERPARAMETERIIVOESPROC m_glSamplerParameterIivOES;
      PFNGLSAMPLERPARAMETERIUIVOESPROC m_glSamplerParameterIuivOES;
      PFNGLGETSAMPLERPARAMETERIIVOESPROC m_glGetSamplerParameterIivOES;
      PFNGLGETSAMPLERPARAMETERIUIVOESPROC m_glGetSamplerParameterIuivOES;
      PFNGLTEXBUFFEROESPROC m_glTexBufferOES;
      PFNGLTEXBUFFERRANGEOESPROC m_glTexBufferRangeOES;
      PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC m_glTexStorage3DMultisampleOES;
      PFNGLTEXTUREVIEWOESPROC m_glTextureViewOES;
      PFNGLBINDVERTEXARRAYOESPROC m_glBindVertexArrayOES;
      PFNGLDELETEVERTEXARRAYSOESPROC m_glDeleteVertexArraysOES;
      PFNGLGENVERTEXARRAYSOESPROC m_glGenVertexArraysOES;
      PFNGLISVERTEXARRAYOESPROC m_glIsVertexArrayOES;
      PFNGLVIEWPORTARRAYVOESPROC m_glViewportArrayvOES;
      PFNGLVIEWPORTINDEXEDFOESPROC m_glViewportIndexedfOES;
      PFNGLVIEWPORTINDEXEDFVOESPROC m_glViewportIndexedfvOES;
      PFNGLSCISSORARRAYVOESPROC m_glScissorArrayvOES;
      PFNGLSCISSORINDEXEDOESPROC m_glScissorIndexedOES;
      PFNGLSCISSORINDEXEDVOESPROC m_glScissorIndexedvOES;
      PFNGLDEPTHRANGEARRAYFVOESPROC m_glDepthRangeArrayfvOES;
      PFNGLDEPTHRANGEINDEXEDFOESPROC m_glDepthRangeIndexedfOES;
      PFNGLGETFLOATI_VOESPROC m_glGetFloati_vOES;
      PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC m_glFramebufferTextureMultiviewOVR;
      PFNGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC m_glFramebufferTextureMultisampleMultiviewOVR;
      PFNGLALPHAFUNCQCOMPROC m_glAlphaFuncQCOM;
      PFNGLGETDRIVERCONTROLSQCOMPROC m_glGetDriverControlsQCOM;
      PFNGLGETDRIVERCONTROLSTRINGQCOMPROC m_glGetDriverControlStringQCOM;
      PFNGLENABLEDRIVERCONTROLQCOMPROC m_glEnableDriverControlQCOM;
      PFNGLDISABLEDRIVERCONTROLQCOMPROC m_glDisableDriverControlQCOM;
      PFNGLEXTGETTEXTURESQCOMPROC m_glExtGetTexturesQCOM;
      PFNGLEXTGETBUFFERSQCOMPROC m_glExtGetBuffersQCOM;
      PFNGLEXTGETRENDERBUFFERSQCOMPROC m_glExtGetRenderbuffersQCOM;
      PFNGLEXTGETFRAMEBUFFERSQCOMPROC m_glExtGetFramebuffersQCOM;
      PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC m_glExtGetTexLevelParameterivQCOM;
      PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC m_glExtTexObjectStateOverrideiQCOM;
      PFNGLEXTGETTEXSUBIMAGEQCOMPROC m_glExtGetTexSubImageQCOM;
      PFNGLEXTGETBUFFERPOINTERVQCOMPROC m_glExtGetBufferPointervQCOM;
      PFNGLEXTGETSHADERSQCOMPROC m_glExtGetShadersQCOM;
      PFNGLEXTGETPROGRAMSQCOMPROC m_glExtGetProgramsQCOM;
      PFNGLEXTISPROGRAMBINARYQCOMPROC m_glExtIsProgramBinaryQCOM;
      PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC m_glExtGetProgramBinarySourceQCOM;
      PFNGLFRAMEBUFFERFOVEATIONCONFIGQCOMPROC m_glFramebufferFoveationConfigQCOM;
      PFNGLFRAMEBUFFERFOVEATIONPARAMETERSQCOMPROC m_glFramebufferFoveationParametersQCOM;
      PFNGLTEXESTIMATEMOTIONQCOMPROC m_glTexEstimateMotionQCOM;
      PFNGLTEXESTIMATEMOTIONREGIONSQCOMPROC m_glTexEstimateMotionRegionsQCOM;
      PFNGLEXTRAPOLATETEX2DQCOMPROC m_glExtrapolateTex2DQCOM;
      PFNGLTEXTUREFOVEATIONPARAMETERSQCOMPROC m_glTextureFoveationParametersQCOM;
      PFNGLFRAMEBUFFERFETCHBARRIERQCOMPROC m_glFramebufferFetchBarrierQCOM;
      PFNGLSHADINGRATEQCOMPROC m_glShadingRateQCOM;
      PFNGLSTARTTILINGQCOMPROC m_glStartTilingQCOM;
      PFNGLENDTILINGQCOMPROC m_glEndTilingQCOM;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise ();

    static void Deinitialise ();

    static bool IsSupported (GLEW_GLES_FeatureSet feature)
    {
      GLEW_ASSERT (s_initialised);

      return s_deviceConfig.m_featureSupported [feature];
    }

    static void SetConfig (glew::gles::DeviceConfig &deviceConfig)
    {
      GLEW_ASSERT (s_initialised);

      s_deviceConfig = deviceConfig;
    }

    static glew::gles::DeviceConfig &GetConfig ()
    {
      GLEW_ASSERT (s_initialised);

      return s_deviceConfig;
    }

  protected:

    static bool s_initialised;

    static glew::gles::DeviceConfig s_deviceConfig;

  };

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  bool IsSupported (GLEW_GLES_FeatureSet feature);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_API void GLEW_APIENTRY _glew_gles_glReadBuffer (GLenum src);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenQueries (GLsizei n, GLuint * ids);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteQueries (GLsizei n, const GLuint * ids);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsQuery (GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glBeginQuery (GLenum target, GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndQuery (GLenum target);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryiv (GLenum target, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint * params);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glUnmapBuffer (GLenum target);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetBufferPointerv (GLenum target, GLenum pname, void ** params);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawBuffers (GLsizei n, const GLenum * bufs);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLEW_API void * GLEW_APIENTRY _glew_gles_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLEW_API void GLEW_APIENTRY _glew_gles_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindVertexArray (GLuint array);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteVertexArrays (GLsizei n, const GLuint * arrays);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenVertexArrays (GLsizei n, GLuint * arrays);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsVertexArray (GLuint array);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetIntegeri_v (GLenum target, GLuint index, GLint * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glBeginTransformFeedback (GLenum primitiveMode);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndTransformFeedback ();
GLEW_API void GLEW_APIENTRY _glew_gles_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
GLEW_API void GLEW_APIENTRY _glew_gles_glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetVertexAttribIiv (GLuint index, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribI4iv (GLuint index, const GLint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribI4uiv (GLuint index, const GLuint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetUniformuiv (GLuint program, GLint location, GLuint * params);
GLEW_API GLint GLEW_APIENTRY _glew_gles_glGetFragDataLocation (GLuint program, const GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform1ui (GLint location, GLuint v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform2ui (GLint location, GLuint v0, GLuint v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform1uiv (GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform2uiv (GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform3uiv (GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform4uiv (GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLEW_API const GLubyte * GLEW_APIENTRY _glew_gles_glGetStringi (GLenum name, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
GLEW_API GLsync GLEW_APIENTRY _glew_gles_glFenceSync (GLenum condition, GLbitfield flags);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsSync (GLsync sync);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteSync (GLsync sync);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLEW_API void GLEW_APIENTRY _glew_gles_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetInteger64v (GLenum pname, GLint64 * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSynciv (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetInteger64i_v (GLenum target, GLuint index, GLint64 * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenSamplers (GLsizei count, GLuint * samplers);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteSamplers (GLsizei count, const GLuint * samplers);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsSampler (GLuint sampler);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindSampler (GLuint unit, GLuint sampler);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribDivisor (GLuint index, GLuint divisor);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindTransformFeedback (GLenum target, GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenTransformFeedbacks (GLsizei n, GLuint * ids);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsTransformFeedback (GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glPauseTransformFeedback ();
GLEW_API void GLEW_APIENTRY _glew_gles_glResumeTransformFeedback ();
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramParameteri (GLuint program, GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments);
GLEW_API void GLEW_APIENTRY _glew_gles_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
GLEW_API void GLEW_APIENTRY _glew_gles_glDispatchComputeIndirect (GLintptr indirect);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawArraysIndirect (GLenum mode, const void * indirect);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params);
GLEW_API GLint GLEW_APIENTRY _glew_gles_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
GLEW_API void GLEW_APIENTRY _glew_gles_glActiveShaderProgram (GLuint pipeline, GLuint program);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindProgramPipeline (GLuint pipeline);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenProgramPipelines (GLsizei n, GLuint * pipelines);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsProgramPipeline (GLuint pipeline);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1i (GLuint program, GLint location, GLint v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glValidateProgramPipeline (GLuint pipeline);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetBooleani_v (GLenum target, GLuint index, GLboolean * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glMemoryBarrier (GLbitfield barriers);
GLEW_API void GLEW_APIENTRY _glew_gles_glMemoryBarrierByRegion (GLbitfield barriers);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val);
GLEW_API void GLEW_APIENTRY _glew_gles_glSampleMaski (GLuint maskNumber, GLbitfield mask);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendBarrier ();
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLEW_API void GLEW_APIENTRY _glew_gles_glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
GLEW_API void GLEW_APIENTRY _glew_gles_glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
GLEW_API void GLEW_APIENTRY _glew_gles_glDebugMessageCallback (GLDEBUGPROC callback, const void * userParam);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
GLEW_API void GLEW_APIENTRY _glew_gles_glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar * message);
GLEW_API void GLEW_APIENTRY _glew_gles_glPopDebugGroup ();
GLEW_API void GLEW_APIENTRY _glew_gles_glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glObjectPtrLabel (const void * ptr, GLsizei length, const GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetObjectPtrLabel (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPointerv (GLenum pname, void ** params);
GLEW_API void GLEW_APIENTRY _glew_gles_glEnablei (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDisablei (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendEquationi (GLuint buf, GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendFunci (GLuint buf, GLenum src, GLenum dst);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLEW_API void GLEW_APIENTRY _glew_gles_glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsEnabledi (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level);
GLEW_API void GLEW_APIENTRY _glew_gles_glPrimitiveBoundingBox (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glGetGraphicsResetStatus ();
GLEW_API void GLEW_APIENTRY _glew_gles_glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glMinSampleShading (GLfloat value);
GLEW_API void GLEW_APIENTRY _glew_gles_glPatchParameteri (GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexParameterIiv (GLenum target, GLenum pname, const GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexParameterIuiv (GLenum target, GLenum pname, const GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexParameterIiv (GLenum target, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisampleAdvancedAMD (GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glNamedRenderbufferStorageMultisampleAdvancedAMD (GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfMonitorGroupsAMD (GLint * numGroups, GLsizei groupsSize, GLuint * groups);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfMonitorCountersAMD (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenPerfMonitorsAMD (GLsizei n, GLuint * monitors);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeletePerfMonitorsAMD (GLsizei n, GLuint * monitors);
GLEW_API void GLEW_APIENTRY _glew_gles_glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList);
GLEW_API void GLEW_APIENTRY _glew_gles_glBeginPerfMonitorAMD (GLuint monitor);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndPerfMonitorAMD (GLuint monitor);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlitFramebufferANGLE (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawArraysInstancedANGLE (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedANGLE (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribDivisorANGLE (GLuint index, GLuint divisor);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTranslatedShaderSourceANGLE (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyTextureLevelsAPPLE (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glResolveMultisampleFramebufferAPPLE ();
GLEW_API GLsync GLEW_APIENTRY _glew_gles_glFenceSyncAPPLE (GLenum condition, GLbitfield flags);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsSyncAPPLE (GLsync sync);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteSyncAPPLE (GLsync sync);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glClientWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLEW_API void GLEW_APIENTRY _glew_gles_glWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetInteger64vAPPLE (GLenum pname, GLint64 * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values);
GLEW_API void GLEW_APIENTRY _glew_gles_glEGLImageTargetTexStorageEXT (GLenum target, GLeglImageOES image, const GLint* attrib_list);
GLEW_API void GLEW_APIENTRY _glew_gles_glEGLImageTargetTextureStorageEXT (GLuint texture, GLeglImageOES image, const GLint* attrib_list);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawArraysInstancedBaseInstanceEXT (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindFragDataLocationIndexedEXT (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar * name);
GLEW_API GLint GLEW_APIENTRY _glew_gles_glGetProgramResourceLocationIndexEXT (GLuint program, GLenum programInterface, const GLchar * name);
GLEW_API GLint GLEW_APIENTRY _glew_gles_glGetFragDataIndexEXT (GLuint program, const GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glBufferStorageEXT (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearTexImageEXT (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearTexSubImageEXT (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glClipControlEXT (GLenum origin, GLenum depth);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyImageSubDataEXT (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLEW_API void GLEW_APIENTRY _glew_gles_glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glInsertEventMarkerEXT (GLsizei length, const GLchar * marker);
GLEW_API void GLEW_APIENTRY _glew_gles_glPushGroupMarkerEXT (GLsizei length, const GLchar * marker);
GLEW_API void GLEW_APIENTRY _glew_gles_glPopGroupMarkerEXT ();
GLEW_API void GLEW_APIENTRY _glew_gles_glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum * attachments);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenQueriesEXT (GLsizei n, GLuint * ids);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteQueriesEXT (GLsizei n, const GLuint * ids);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsQueryEXT (GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glBeginQueryEXT (GLenum target, GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndQueryEXT (GLenum target);
GLEW_API void GLEW_APIENTRY _glew_gles_glQueryCounterEXT (GLuint id, GLenum target);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryivEXT (GLenum target, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryObjectivEXT (GLuint id, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryObjectuivEXT (GLuint id, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetInteger64vEXT (GLenum pname, GLint64 * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawBuffersEXT (GLsizei n, const GLenum * bufs);
GLEW_API void GLEW_APIENTRY _glew_gles_glEnableiEXT (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDisableiEXT (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendEquationiEXT (GLuint buf, GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendEquationSeparateiEXT (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendFunciEXT (GLuint buf, GLenum src, GLenum dst);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendFuncSeparateiEXT (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLEW_API void GLEW_APIENTRY _glew_gles_glColorMaskiEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsEnablediEXT (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawRangeElementsBaseVertexEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawElementsBaseVertexEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawTransformFeedbackEXT (GLenum mode, GLuint id);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawTransformFeedbackInstancedEXT (GLenum mode, GLuint id, GLsizei instancecount);
GLEW_API void GLEW_APIENTRY _glew_gles_glBufferStorageExternalEXT (GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
GLEW_API void GLEW_APIENTRY _glew_gles_glNamedBufferStorageExternalEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribDivisorEXT (GLuint index, GLuint divisor);
GLEW_API void * GLEW_APIENTRY _glew_gles_glMapBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLEW_API void GLEW_APIENTRY _glew_gles_glFlushMappedBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetUnsignedBytevEXT (GLenum pname, GLubyte * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetUnsignedBytei_vEXT (GLenum target, GLuint index, GLubyte * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteMemoryObjectsEXT (GLsizei n, const GLuint * memoryObjects);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsMemoryObjectEXT (GLuint memoryObject);
GLEW_API void GLEW_APIENTRY _glew_gles_glCreateMemoryObjectsEXT (GLsizei n, GLuint * memoryObjects);
GLEW_API void GLEW_APIENTRY _glew_gles_glMemoryObjectParameterivEXT (GLuint memoryObject, GLenum pname, const GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetMemoryObjectParameterivEXT (GLuint memoryObject, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorageMem2DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorageMem2DMultisampleEXT (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorageMem3DEXT (GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorageMem3DMultisampleEXT (GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glBufferStorageMemEXT (GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorageMem2DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorageMem2DMultisampleEXT (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorageMem3DEXT (GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorageMem3DMultisampleEXT (GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glNamedBufferStorageMemEXT (GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glImportMemoryFdEXT (GLuint memory, GLuint64 size, GLenum handleType, GLint fd);
GLEW_API void GLEW_APIENTRY _glew_gles_glImportMemoryWin32HandleEXT (GLuint memory, GLuint64 size, GLenum handleType, void * handle);
GLEW_API void GLEW_APIENTRY _glew_gles_glImportMemoryWin32NameEXT (GLuint memory, GLuint64 size, GLenum handleType, const void * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawArraysEXT (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawElementsEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawArraysIndirectEXT (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawElementsIndirectEXT (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTexture2DMultisampleEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
GLEW_API void GLEW_APIENTRY _glew_gles_glReadBufferIndexedEXT (GLenum src, GLint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawBuffersIndexedEXT (GLint n, const GLenum * location, const GLint * indices);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetIntegeri_vEXT (GLenum target, GLuint index, GLint * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glPolygonOffsetClampEXT (GLfloat factor, GLfloat units, GLfloat clamp);
GLEW_API void GLEW_APIENTRY _glew_gles_glPrimitiveBoundingBoxEXT (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
GLEW_API void GLEW_APIENTRY _glew_gles_glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glGetGraphicsResetStatusEXT ();
GLEW_API void GLEW_APIENTRY _glew_gles_glReadnPixelsEXT (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformfvEXT (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformivEXT (GLuint program, GLint location, GLsizei bufSize, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenSemaphoresEXT (GLsizei n, GLuint * semaphores);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteSemaphoresEXT (GLsizei n, const GLuint * semaphores);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsSemaphoreEXT (GLuint semaphore);
GLEW_API void GLEW_APIENTRY _glew_gles_glSemaphoreParameterui64vEXT (GLuint semaphore, GLenum pname, const GLuint64 * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSemaphoreParameterui64vEXT (GLuint semaphore, GLenum pname, GLuint64 * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glWaitSemaphoreEXT (GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * srcLayouts);
GLEW_API void GLEW_APIENTRY _glew_gles_glSignalSemaphoreEXT (GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts);
GLEW_API void GLEW_APIENTRY _glew_gles_glImportSemaphoreFdEXT (GLuint semaphore, GLenum handleType, GLint fd);
GLEW_API void GLEW_APIENTRY _glew_gles_glImportSemaphoreWin32HandleEXT (GLuint semaphore, GLenum handleType, void * handle);
GLEW_API void GLEW_APIENTRY _glew_gles_glImportSemaphoreWin32NameEXT (GLuint semaphore, GLenum handleType, const void * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glActiveShaderProgramEXT (GLuint pipeline, GLuint program);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindProgramPipelineEXT (GLuint pipeline);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glCreateShaderProgramvEXT (GLenum type, GLsizei count, const GLchar ** strings);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteProgramPipelinesEXT (GLsizei n, const GLuint * pipelines);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenProgramPipelinesEXT (GLsizei n, GLuint * pipelines);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramPipelineInfoLogEXT (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramPipelineivEXT (GLuint pipeline, GLenum pname, GLint * params);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsProgramPipelineEXT (GLuint pipeline);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramParameteriEXT (GLuint program, GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1iEXT (GLuint program, GLint location, GLint v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUseProgramStagesEXT (GLuint pipeline, GLbitfield stages, GLuint program);
GLEW_API void GLEW_APIENTRY _glew_gles_glValidateProgramPipelineEXT (GLuint pipeline);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferFetchBarrierEXT ();
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferPixelLocalStorageSizeEXT (GLuint target, GLsizei size);
GLEW_API GLsizei GLEW_APIENTRY _glew_gles_glGetFramebufferPixelLocalStorageSizeEXT (GLuint target);
GLEW_API void GLEW_APIENTRY _glew_gles_glClearPixelLocalStorageuiEXT (GLsizei offset, GLsizei n, const GLuint * values);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexPageCommitmentEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
GLEW_API void GLEW_APIENTRY _glew_gles_glPatchParameteriEXT (GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexParameterIivEXT (GLenum target, GLenum pname, const GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterIivEXT (GLuint sampler, GLenum pname, const GLint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterIuivEXT (GLuint sampler, GLenum pname, const GLuint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterIivEXT (GLuint sampler, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterIuivEXT (GLuint sampler, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexBufferRangeEXT (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureViewEXT (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
GLEW_API void GLEW_APIENTRY _glew_gles_glCreateSemaphoresNV (GLsizei n, GLuint * semaphores);
GLEW_API void GLEW_APIENTRY _glew_gles_glSemaphoreParameterivNV (GLuint semaphore, GLenum pname, const GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSemaphoreParameterivNV (GLuint semaphore, GLenum pname, GLint * params);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glAcquireKeyedMutexWin32EXT (GLuint memory, GLuint64 key, GLuint timeout);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glReleaseKeyedMutexWin32EXT (GLuint memory, GLuint64 key);
GLEW_API void GLEW_APIENTRY _glew_gles_glWindowRectanglesEXT (GLenum mode, GLsizei count, const GLint * box);
GLEW_API GLuint64 GLEW_APIENTRY _glew_gles_glGetTextureHandleIMG (GLuint texture);
GLEW_API GLuint64 GLEW_APIENTRY _glew_gles_glGetTextureSamplerHandleIMG (GLuint texture, GLuint sampler);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformHandleui64IMG (GLint location, GLuint64 value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformHandleui64vIMG (GLint location, GLsizei count, const GLuint64 * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformHandleui64IMG (GLuint program, GLint location, GLuint64 value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformHandleui64vIMG (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTexture2DDownsampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint xscale, GLint yscale);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTextureLayerDownsampleIMG (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint xscale, GLint yscale);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisampleIMG (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTexture2DMultisampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
GLEW_API void GLEW_APIENTRY _glew_gles_glApplyFramebufferAttachmentCMAAINTEL ();
GLEW_API void GLEW_APIENTRY _glew_gles_glBeginPerfQueryINTEL (GLuint queryHandle);
GLEW_API void GLEW_APIENTRY _glew_gles_glCreatePerfQueryINTEL (GLuint queryId, GLuint * queryHandle);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeletePerfQueryINTEL (GLuint queryHandle);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndPerfQueryINTEL (GLuint queryHandle);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetFirstPerfQueryIdINTEL (GLuint * queryId);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint * nextQueryId);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfQueryIdByNameINTEL (GLchar * queryName, GLuint * queryId);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendBarrierKHR ();
GLEW_API void GLEW_APIENTRY _glew_gles_glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
GLEW_API void GLEW_APIENTRY _glew_gles_glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
GLEW_API void GLEW_APIENTRY _glew_gles_glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void * userParam);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
GLEW_API void GLEW_APIENTRY _glew_gles_glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar * message);
GLEW_API void GLEW_APIENTRY _glew_gles_glPopDebugGroupKHR ();
GLEW_API void GLEW_APIENTRY _glew_gles_glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glObjectPtrLabelKHR (const void * ptr, GLsizei length, const GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetObjectPtrLabelKHR (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPointervKHR (GLenum pname, void ** params);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glGetGraphicsResetStatusKHR ();
GLEW_API void GLEW_APIENTRY _glew_gles_glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glMaxShaderCompilerThreadsKHR (GLuint count);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferParameteriMESA (GLenum target, GLenum pname, GLint param);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetFramebufferParameterivMESA (GLenum target, GLenum pname, GLint * params);
GLEW_API GLuint64 GLEW_APIENTRY _glew_gles_glGetTextureHandleNV (GLuint texture);
GLEW_API GLuint64 GLEW_APIENTRY _glew_gles_glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler);
GLEW_API void GLEW_APIENTRY _glew_gles_glMakeTextureHandleResidentNV (GLuint64 handle);
GLEW_API void GLEW_APIENTRY _glew_gles_glMakeTextureHandleNonResidentNV (GLuint64 handle);
GLEW_API GLuint64 GLEW_APIENTRY _glew_gles_glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
GLEW_API void GLEW_APIENTRY _glew_gles_glMakeImageHandleResidentNV (GLuint64 handle, GLenum access);
GLEW_API void GLEW_APIENTRY _glew_gles_glMakeImageHandleNonResidentNV (GLuint64 handle);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformHandleui64NV (GLint location, GLuint64 value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsTextureHandleResidentNV (GLuint64 handle);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsImageHandleResidentNV (GLuint64 handle);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendParameteriNV (GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendBarrierNV ();
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportPositionWScaleNV (GLuint index, GLfloat xcoeff, GLfloat ycoeff);
GLEW_API void GLEW_APIENTRY _glew_gles_glBeginConditionalRenderNV (GLuint id, GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndConditionalRenderNV ();
GLEW_API void GLEW_APIENTRY _glew_gles_glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits);
GLEW_API void GLEW_APIENTRY _glew_gles_glConservativeRasterParameteriNV (GLenum pname, GLint param);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyBufferSubDataNV (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverageMaskNV (GLboolean mask);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverageOperationNV (GLenum operation);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawBuffersNV (GLsizei n, const GLenum * bufs);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawArraysInstancedNV (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedNV (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawVkImageNV (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
GLEW_API GLVULKANPROCNV GLEW_APIENTRY _glew_gles_glGetVkProcAddrNV (const GLchar * name);
GLEW_API void GLEW_APIENTRY _glew_gles_glWaitVkSemaphoreNV (GLuint64 vkSemaphore);
GLEW_API void GLEW_APIENTRY _glew_gles_glSignalVkSemaphoreNV (GLuint64 vkSemaphore);
GLEW_API void GLEW_APIENTRY _glew_gles_glSignalVkFenceNV (GLuint64 vkFence);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteFencesNV (GLsizei n, const GLuint * fences);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenFencesNV (GLsizei n, GLuint * fences);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsFenceNV (GLuint fence);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glTestFenceNV (GLuint fence);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetFenceivNV (GLuint fence, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glFinishFenceNV (GLuint fence);
GLEW_API void GLEW_APIENTRY _glew_gles_glSetFenceNV (GLuint fence, GLenum condition);
GLEW_API void GLEW_APIENTRY _glew_gles_glFragmentCoverageColorNV (GLuint color);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlitFramebufferNV (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverageModulationTableNV (GLsizei n, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetCoverageModulationTableNV (GLsizei bufSize, GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverageModulationNV (GLenum components);
GLEW_API void GLEW_APIENTRY _glew_gles_glRenderbufferStorageMultisampleNV (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform1i64NV (GLint location, GLint64EXT x);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform2i64NV (GLint location, GLint64EXT x, GLint64EXT y);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform3i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform4i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform1i64vNV (GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform2i64vNV (GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform3i64vNV (GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform4i64vNV (GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform1ui64NV (GLint location, GLuint64EXT x);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform2ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform3ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform4ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform1ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform2ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform3ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniform4ui64vNV (GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetUniformi64vNV (GLuint program, GLint location, GLint64EXT * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1i64NV (GLuint program, GLint location, GLint64EXT x);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1ui64NV (GLuint program, GLint location, GLuint64EXT x);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform1ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform2ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform3ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramUniform4ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glVertexAttribDivisorNV (GLuint index, GLuint divisor);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetMemoryObjectDetachedResourcesuivNV (GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glResetMemoryObjectParameterNV (GLuint memory, GLenum pname);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glBufferAttachMemoryNV (GLenum target, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureAttachMemoryNV (GLuint texture, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glNamedBufferAttachMemoryNV (GLuint buffer, GLuint memory, GLuint64 offset);
GLEW_API void GLEW_APIENTRY _glew_gles_glBufferPageCommitmentMemNV (GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexPageCommitmentMemNV (GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
GLEW_API void GLEW_APIENTRY _glew_gles_glNamedBufferPageCommitmentMemNV (GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexturePageCommitmentMemNV (GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawMeshTasksNV (GLuint first, GLuint count);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawMeshTasksIndirectNV (GLintptr indirect);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawMeshTasksIndirectNV (GLintptr indirect, GLsizei drawcount, GLsizei stride);
GLEW_API void GLEW_APIENTRY _glew_gles_glMultiDrawMeshTasksIndirectCountNV (GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix2x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix3x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix2x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix4x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix3x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glUniformMatrix4x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_API GLuint GLEW_APIENTRY _glew_gles_glGenPathsNV (GLsizei range);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeletePathsNV (GLuint path, GLsizei range);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsPathNV (GLuint path);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathStringNV (GLuint path, GLenum format, GLsizei length, const void * pathString);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
GLEW_API void GLEW_APIENTRY _glew_gles_glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyPathNV (GLuint resultPath, GLuint srcPath);
GLEW_API void GLEW_APIENTRY _glew_gles_glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
GLEW_API void GLEW_APIENTRY _glew_gles_glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathParameterivNV (GLuint path, GLenum pname, const GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathParameteriNV (GLuint path, GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathParameterfNV (GLuint path, GLenum pname, GLfloat value);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat * dashArray);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues);
GLEW_API void GLEW_APIENTRY _glew_gles_glPathCoverDepthFuncNV (GLenum func);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverFillPathNV (GLuint path, GLenum coverMode);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverStrokePathNV (GLuint path, GLenum coverMode);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
GLEW_API void GLEW_APIENTRY _glew_gles_glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathParameterivNV (GLuint path, GLenum pname, GLint * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat * value);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathCommandsNV (GLuint path, GLubyte * commands);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathCoordsNV (GLuint path, GLfloat * coords);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathDashArrayNV (GLuint path, GLfloat * dashArray);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y);
GLEW_API GLfloat GLEW_APIENTRY _glew_gles_glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
GLEW_API void GLEW_APIENTRY _glew_gles_glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glPathGlyphIndexRangeNV (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint * baseAndCount);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
GLEW_API GLenum GLEW_APIENTRY _glew_gles_glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixFrustumEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoadIdentityEXT (GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoadTransposefEXT (GLenum mode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoadTransposedEXT (GLenum mode, const GLdouble * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoadfEXT (GLenum mode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixLoaddEXT (GLenum mode, const GLdouble * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMultTransposefEXT (GLenum mode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMultTransposedEXT (GLenum mode, const GLdouble * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMultfEXT (GLenum mode, const GLfloat * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixMultdEXT (GLenum mode, const GLdouble * m);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixOrthoEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixPopEXT (GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixPushEXT (GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixRotatefEXT (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixRotatedEXT (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixScalefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixScaledEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixTranslatefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
GLEW_API void GLEW_APIENTRY _glew_gles_glMatrixTranslatedEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
GLEW_API void GLEW_APIENTRY _glew_gles_glPolygonModeNV (GLenum face, GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glReadBufferNV (GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glResolveDepthValuesNV ();
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorExclusiveNV (GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorExclusiveArrayvNV (GLuint first, GLsizei count, const GLint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindShadingRateImageNV (GLuint texture);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetShadingRateImagePaletteNV (GLuint viewport, GLuint entry, GLenum * rate);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetShadingRateSampleLocationivNV (GLenum rate, GLuint samples, GLuint index, GLint * location);
GLEW_API void GLEW_APIENTRY _glew_gles_glShadingRateImageBarrierNV (GLboolean synchronize);
GLEW_API void GLEW_APIENTRY _glew_gles_glShadingRateImagePaletteNV (GLuint viewport, GLuint first, GLsizei count, const GLenum * rates);
GLEW_API void GLEW_APIENTRY _glew_gles_glShadingRateSampleOrderNV (GLenum order);
GLEW_API void GLEW_APIENTRY _glew_gles_glShadingRateSampleOrderCustomNV (GLenum rate, GLuint samples, const GLint * locations);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportArrayvNV (GLuint first, GLsizei count, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportIndexedfNV (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportIndexedfvNV (GLuint index, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorArrayvNV (GLuint first, GLsizei count, const GLint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorIndexedNV (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorIndexedvNV (GLuint index, const GLint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glDepthRangeArrayfvNV (GLuint first, GLsizei count, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glDepthRangeIndexedfNV (GLuint index, GLfloat n, GLfloat f);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetFloati_vNV (GLenum target, GLuint index, GLfloat * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glEnableiNV (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDisableiNV (GLenum target, GLuint index);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsEnablediNV (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportSwizzleNV (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
GLEW_API void GLEW_APIENTRY _glew_gles_glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image);
GLEW_API void GLEW_APIENTRY _glew_gles_glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyImageSubDataOES (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLEW_API void GLEW_APIENTRY _glew_gles_glEnableiOES (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDisableiOES (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendEquationiOES (GLuint buf, GLenum mode);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendEquationSeparateiOES (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendFunciOES (GLuint buf, GLenum src, GLenum dst);
GLEW_API void GLEW_APIENTRY _glew_gles_glBlendFuncSeparateiOES (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLEW_API void GLEW_APIENTRY _glew_gles_glColorMaskiOES (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsEnablediOES (GLenum target, GLuint index);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawRangeElementsBaseVertexOES (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glDrawElementsInstancedBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTextureOES (GLenum target, GLenum attachment, GLuint texture, GLint level);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
GLEW_API void GLEW_APIENTRY _glew_gles_glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void * binary, GLint length);
GLEW_API void * GLEW_APIENTRY _glew_gles_glMapBufferOES (GLenum target, GLenum access);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glUnmapBufferOES (GLenum target);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetBufferPointervOES (GLenum target, GLenum pname, void ** params);
GLEW_API void GLEW_APIENTRY _glew_gles_glPrimitiveBoundingBoxOES (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
GLEW_API void GLEW_APIENTRY _glew_gles_glMinSampleShadingOES (GLfloat value);
GLEW_API void GLEW_APIENTRY _glew_gles_glPatchParameteriOES (GLenum pname, GLint value);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
GLEW_API void GLEW_APIENTRY _glew_gles_glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexParameterIivOES (GLenum target, GLenum pname, const GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexParameterIuivOES (GLenum target, GLenum pname, const GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexParameterIivOES (GLenum target, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetTexParameterIuivOES (GLenum target, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterIivOES (GLuint sampler, GLenum pname, const GLint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glSamplerParameterIuivOES (GLuint sampler, GLenum pname, const GLuint * param);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterIivOES (GLuint sampler, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetSamplerParameterIuivOES (GLuint sampler, GLenum pname, GLuint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexBufferOES (GLenum target, GLenum internalformat, GLuint buffer);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexBufferRangeOES (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexStorage3DMultisampleOES (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureViewOES (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
GLEW_API void GLEW_APIENTRY _glew_gles_glBindVertexArrayOES (GLuint array);
GLEW_API void GLEW_APIENTRY _glew_gles_glDeleteVertexArraysOES (GLsizei n, const GLuint * arrays);
GLEW_API void GLEW_APIENTRY _glew_gles_glGenVertexArraysOES (GLsizei n, GLuint * arrays);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glIsVertexArrayOES (GLuint array);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportArrayvOES (GLuint first, GLsizei count, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportIndexedfOES (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
GLEW_API void GLEW_APIENTRY _glew_gles_glViewportIndexedfvOES (GLuint index, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorArrayvOES (GLuint first, GLsizei count, const GLint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorIndexedOES (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
GLEW_API void GLEW_APIENTRY _glew_gles_glScissorIndexedvOES (GLuint index, const GLint * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glDepthRangeArrayfvOES (GLuint first, GLsizei count, const GLfloat * v);
GLEW_API void GLEW_APIENTRY _glew_gles_glDepthRangeIndexedfOES (GLuint index, GLfloat n, GLfloat f);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetFloati_vOES (GLenum target, GLuint index, GLfloat * data);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferTextureMultisampleMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews);
GLEW_API void GLEW_APIENTRY _glew_gles_glAlphaFuncQCOM (GLenum func, GLclampf ref);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetDriverControlsQCOM (GLint * num, GLsizei size, GLuint * driverControls);
GLEW_API void GLEW_APIENTRY _glew_gles_glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString);
GLEW_API void GLEW_APIENTRY _glew_gles_glEnableDriverControlQCOM (GLuint driverControl);
GLEW_API void GLEW_APIENTRY _glew_gles_glDisableDriverControlQCOM (GLuint driverControl);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetTexturesQCOM (GLuint * textures, GLint maxTextures, GLint * numTextures);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetBuffersQCOM (GLuint * buffers, GLint maxBuffers, GLint * numBuffers);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetRenderbuffersQCOM (GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetFramebuffersQCOM (GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetBufferPointervQCOM (GLenum target, void ** params);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetShadersQCOM (GLuint * shaders, GLint maxShaders, GLint * numShaders);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetProgramsQCOM (GLuint * programs, GLint maxPrograms, GLint * numPrograms);
GLEW_API GLboolean GLEW_APIENTRY _glew_gles_glExtIsProgramBinaryQCOM (GLuint program);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, GLchar * source, GLint * length);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferFoveationConfigQCOM (GLuint framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint * providedFeatures);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferFoveationParametersQCOM (GLuint framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexEstimateMotionQCOM (GLuint ref, GLuint target, GLuint output);
GLEW_API void GLEW_APIENTRY _glew_gles_glTexEstimateMotionRegionsQCOM (GLuint ref, GLuint target, GLuint output, GLuint mask);
GLEW_API void GLEW_APIENTRY _glew_gles_glExtrapolateTex2DQCOM (GLuint src1, GLuint src2, GLuint output, GLfloat scaleFactor);
GLEW_API void GLEW_APIENTRY _glew_gles_glTextureFoveationParametersQCOM (GLuint texture, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea);
GLEW_API void GLEW_APIENTRY _glew_gles_glFramebufferFetchBarrierQCOM ();
GLEW_API void GLEW_APIENTRY _glew_gles_glShadingRateQCOM (GLenum rate);
GLEW_API void GLEW_APIENTRY _glew_gles_glStartTilingQCOM (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
GLEW_API void GLEW_APIENTRY _glew_gles_glEndTilingQCOM (GLbitfield preserveMask);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glReadBuffer _glew_gles_glReadBuffer
#define glDrawRangeElements _glew_gles_glDrawRangeElements
#define glTexImage3D _glew_gles_glTexImage3D
#define glTexSubImage3D _glew_gles_glTexSubImage3D
#define glCopyTexSubImage3D _glew_gles_glCopyTexSubImage3D
#define glCompressedTexImage3D _glew_gles_glCompressedTexImage3D
#define glCompressedTexSubImage3D _glew_gles_glCompressedTexSubImage3D
#define glGenQueries _glew_gles_glGenQueries
#define glDeleteQueries _glew_gles_glDeleteQueries
#define glIsQuery _glew_gles_glIsQuery
#define glBeginQuery _glew_gles_glBeginQuery
#define glEndQuery _glew_gles_glEndQuery
#define glGetQueryiv _glew_gles_glGetQueryiv
#define glGetQueryObjectuiv _glew_gles_glGetQueryObjectuiv
#define glUnmapBuffer _glew_gles_glUnmapBuffer
#define glGetBufferPointerv _glew_gles_glGetBufferPointerv
#define glDrawBuffers _glew_gles_glDrawBuffers
#define glUniformMatrix2x3fv _glew_gles_glUniformMatrix2x3fv
#define glUniformMatrix3x2fv _glew_gles_glUniformMatrix3x2fv
#define glUniformMatrix2x4fv _glew_gles_glUniformMatrix2x4fv
#define glUniformMatrix4x2fv _glew_gles_glUniformMatrix4x2fv
#define glUniformMatrix3x4fv _glew_gles_glUniformMatrix3x4fv
#define glUniformMatrix4x3fv _glew_gles_glUniformMatrix4x3fv
#define glBlitFramebuffer _glew_gles_glBlitFramebuffer
#define glRenderbufferStorageMultisample _glew_gles_glRenderbufferStorageMultisample
#define glFramebufferTextureLayer _glew_gles_glFramebufferTextureLayer
#define glMapBufferRange _glew_gles_glMapBufferRange
#define glFlushMappedBufferRange _glew_gles_glFlushMappedBufferRange
#define glBindVertexArray _glew_gles_glBindVertexArray
#define glDeleteVertexArrays _glew_gles_glDeleteVertexArrays
#define glGenVertexArrays _glew_gles_glGenVertexArrays
#define glIsVertexArray _glew_gles_glIsVertexArray
#define glGetIntegeri_v _glew_gles_glGetIntegeri_v
#define glBeginTransformFeedback _glew_gles_glBeginTransformFeedback
#define glEndTransformFeedback _glew_gles_glEndTransformFeedback
#define glBindBufferRange _glew_gles_glBindBufferRange
#define glBindBufferBase _glew_gles_glBindBufferBase
#define glTransformFeedbackVaryings _glew_gles_glTransformFeedbackVaryings
#define glGetTransformFeedbackVarying _glew_gles_glGetTransformFeedbackVarying
#define glVertexAttribIPointer _glew_gles_glVertexAttribIPointer
#define glGetVertexAttribIiv _glew_gles_glGetVertexAttribIiv
#define glGetVertexAttribIuiv _glew_gles_glGetVertexAttribIuiv
#define glVertexAttribI4i _glew_gles_glVertexAttribI4i
#define glVertexAttribI4ui _glew_gles_glVertexAttribI4ui
#define glVertexAttribI4iv _glew_gles_glVertexAttribI4iv
#define glVertexAttribI4uiv _glew_gles_glVertexAttribI4uiv
#define glGetUniformuiv _glew_gles_glGetUniformuiv
#define glGetFragDataLocation _glew_gles_glGetFragDataLocation
#define glUniform1ui _glew_gles_glUniform1ui
#define glUniform2ui _glew_gles_glUniform2ui
#define glUniform3ui _glew_gles_glUniform3ui
#define glUniform4ui _glew_gles_glUniform4ui
#define glUniform1uiv _glew_gles_glUniform1uiv
#define glUniform2uiv _glew_gles_glUniform2uiv
#define glUniform3uiv _glew_gles_glUniform3uiv
#define glUniform4uiv _glew_gles_glUniform4uiv
#define glClearBufferiv _glew_gles_glClearBufferiv
#define glClearBufferuiv _glew_gles_glClearBufferuiv
#define glClearBufferfv _glew_gles_glClearBufferfv
#define glClearBufferfi _glew_gles_glClearBufferfi
#define glGetStringi _glew_gles_glGetStringi
#define glCopyBufferSubData _glew_gles_glCopyBufferSubData
#define glGetUniformIndices _glew_gles_glGetUniformIndices
#define glGetActiveUniformsiv _glew_gles_glGetActiveUniformsiv
#define glGetUniformBlockIndex _glew_gles_glGetUniformBlockIndex
#define glGetActiveUniformBlockiv _glew_gles_glGetActiveUniformBlockiv
#define glGetActiveUniformBlockName _glew_gles_glGetActiveUniformBlockName
#define glUniformBlockBinding _glew_gles_glUniformBlockBinding
#define glDrawArraysInstanced _glew_gles_glDrawArraysInstanced
#define glDrawElementsInstanced _glew_gles_glDrawElementsInstanced
#define glFenceSync _glew_gles_glFenceSync
#define glIsSync _glew_gles_glIsSync
#define glDeleteSync _glew_gles_glDeleteSync
#define glClientWaitSync _glew_gles_glClientWaitSync
#define glWaitSync _glew_gles_glWaitSync
#define glGetInteger64v _glew_gles_glGetInteger64v
#define glGetSynciv _glew_gles_glGetSynciv
#define glGetInteger64i_v _glew_gles_glGetInteger64i_v
#define glGetBufferParameteri64v _glew_gles_glGetBufferParameteri64v
#define glGenSamplers _glew_gles_glGenSamplers
#define glDeleteSamplers _glew_gles_glDeleteSamplers
#define glIsSampler _glew_gles_glIsSampler
#define glBindSampler _glew_gles_glBindSampler
#define glSamplerParameteri _glew_gles_glSamplerParameteri
#define glSamplerParameteriv _glew_gles_glSamplerParameteriv
#define glSamplerParameterf _glew_gles_glSamplerParameterf
#define glSamplerParameterfv _glew_gles_glSamplerParameterfv
#define glGetSamplerParameteriv _glew_gles_glGetSamplerParameteriv
#define glGetSamplerParameterfv _glew_gles_glGetSamplerParameterfv
#define glVertexAttribDivisor _glew_gles_glVertexAttribDivisor
#define glBindTransformFeedback _glew_gles_glBindTransformFeedback
#define glDeleteTransformFeedbacks _glew_gles_glDeleteTransformFeedbacks
#define glGenTransformFeedbacks _glew_gles_glGenTransformFeedbacks
#define glIsTransformFeedback _glew_gles_glIsTransformFeedback
#define glPauseTransformFeedback _glew_gles_glPauseTransformFeedback
#define glResumeTransformFeedback _glew_gles_glResumeTransformFeedback
#define glGetProgramBinary _glew_gles_glGetProgramBinary
#define glProgramBinary _glew_gles_glProgramBinary
#define glProgramParameteri _glew_gles_glProgramParameteri
#define glInvalidateFramebuffer _glew_gles_glInvalidateFramebuffer
#define glInvalidateSubFramebuffer _glew_gles_glInvalidateSubFramebuffer
#define glTexStorage2D _glew_gles_glTexStorage2D
#define glTexStorage3D _glew_gles_glTexStorage3D
#define glGetInternalformativ _glew_gles_glGetInternalformativ
#define glDispatchCompute _glew_gles_glDispatchCompute
#define glDispatchComputeIndirect _glew_gles_glDispatchComputeIndirect
#define glDrawArraysIndirect _glew_gles_glDrawArraysIndirect
#define glDrawElementsIndirect _glew_gles_glDrawElementsIndirect
#define glFramebufferParameteri _glew_gles_glFramebufferParameteri
#define glGetFramebufferParameteriv _glew_gles_glGetFramebufferParameteriv
#define glGetProgramInterfaceiv _glew_gles_glGetProgramInterfaceiv
#define glGetProgramResourceIndex _glew_gles_glGetProgramResourceIndex
#define glGetProgramResourceName _glew_gles_glGetProgramResourceName
#define glGetProgramResourceiv _glew_gles_glGetProgramResourceiv
#define glGetProgramResourceLocation _glew_gles_glGetProgramResourceLocation
#define glUseProgramStages _glew_gles_glUseProgramStages
#define glActiveShaderProgram _glew_gles_glActiveShaderProgram
#define glCreateShaderProgramv _glew_gles_glCreateShaderProgramv
#define glBindProgramPipeline _glew_gles_glBindProgramPipeline
#define glDeleteProgramPipelines _glew_gles_glDeleteProgramPipelines
#define glGenProgramPipelines _glew_gles_glGenProgramPipelines
#define glIsProgramPipeline _glew_gles_glIsProgramPipeline
#define glGetProgramPipelineiv _glew_gles_glGetProgramPipelineiv
#define glProgramUniform1i _glew_gles_glProgramUniform1i
#define glProgramUniform2i _glew_gles_glProgramUniform2i
#define glProgramUniform3i _glew_gles_glProgramUniform3i
#define glProgramUniform4i _glew_gles_glProgramUniform4i
#define glProgramUniform1ui _glew_gles_glProgramUniform1ui
#define glProgramUniform2ui _glew_gles_glProgramUniform2ui
#define glProgramUniform3ui _glew_gles_glProgramUniform3ui
#define glProgramUniform4ui _glew_gles_glProgramUniform4ui
#define glProgramUniform1f _glew_gles_glProgramUniform1f
#define glProgramUniform2f _glew_gles_glProgramUniform2f
#define glProgramUniform3f _glew_gles_glProgramUniform3f
#define glProgramUniform4f _glew_gles_glProgramUniform4f
#define glProgramUniform1iv _glew_gles_glProgramUniform1iv
#define glProgramUniform2iv _glew_gles_glProgramUniform2iv
#define glProgramUniform3iv _glew_gles_glProgramUniform3iv
#define glProgramUniform4iv _glew_gles_glProgramUniform4iv
#define glProgramUniform1uiv _glew_gles_glProgramUniform1uiv
#define glProgramUniform2uiv _glew_gles_glProgramUniform2uiv
#define glProgramUniform3uiv _glew_gles_glProgramUniform3uiv
#define glProgramUniform4uiv _glew_gles_glProgramUniform4uiv
#define glProgramUniform1fv _glew_gles_glProgramUniform1fv
#define glProgramUniform2fv _glew_gles_glProgramUniform2fv
#define glProgramUniform3fv _glew_gles_glProgramUniform3fv
#define glProgramUniform4fv _glew_gles_glProgramUniform4fv
#define glProgramUniformMatrix2fv _glew_gles_glProgramUniformMatrix2fv
#define glProgramUniformMatrix3fv _glew_gles_glProgramUniformMatrix3fv
#define glProgramUniformMatrix4fv _glew_gles_glProgramUniformMatrix4fv
#define glProgramUniformMatrix2x3fv _glew_gles_glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix3x2fv _glew_gles_glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix2x4fv _glew_gles_glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix4x2fv _glew_gles_glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix3x4fv _glew_gles_glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix4x3fv _glew_gles_glProgramUniformMatrix4x3fv
#define glValidateProgramPipeline _glew_gles_glValidateProgramPipeline
#define glGetProgramPipelineInfoLog _glew_gles_glGetProgramPipelineInfoLog
#define glBindImageTexture _glew_gles_glBindImageTexture
#define glGetBooleani_v _glew_gles_glGetBooleani_v
#define glMemoryBarrier _glew_gles_glMemoryBarrier
#define glMemoryBarrierByRegion _glew_gles_glMemoryBarrierByRegion
#define glTexStorage2DMultisample _glew_gles_glTexStorage2DMultisample
#define glGetMultisamplefv _glew_gles_glGetMultisamplefv
#define glSampleMaski _glew_gles_glSampleMaski
#define glGetTexLevelParameteriv _glew_gles_glGetTexLevelParameteriv
#define glGetTexLevelParameterfv _glew_gles_glGetTexLevelParameterfv
#define glBindVertexBuffer _glew_gles_glBindVertexBuffer
#define glVertexAttribFormat _glew_gles_glVertexAttribFormat
#define glVertexAttribIFormat _glew_gles_glVertexAttribIFormat
#define glVertexAttribBinding _glew_gles_glVertexAttribBinding
#define glVertexBindingDivisor _glew_gles_glVertexBindingDivisor
#define glBlendBarrier _glew_gles_glBlendBarrier
#define glCopyImageSubData _glew_gles_glCopyImageSubData
#define glDebugMessageControl _glew_gles_glDebugMessageControl
#define glDebugMessageInsert _glew_gles_glDebugMessageInsert
#define glDebugMessageCallback _glew_gles_glDebugMessageCallback
#define glGetDebugMessageLog _glew_gles_glGetDebugMessageLog
#define glPushDebugGroup _glew_gles_glPushDebugGroup
#define glPopDebugGroup _glew_gles_glPopDebugGroup
#define glObjectLabel _glew_gles_glObjectLabel
#define glGetObjectLabel _glew_gles_glGetObjectLabel
#define glObjectPtrLabel _glew_gles_glObjectPtrLabel
#define glGetObjectPtrLabel _glew_gles_glGetObjectPtrLabel
#define glGetPointerv _glew_gles_glGetPointerv
#define glEnablei _glew_gles_glEnablei
#define glDisablei _glew_gles_glDisablei
#define glBlendEquationi _glew_gles_glBlendEquationi
#define glBlendEquationSeparatei _glew_gles_glBlendEquationSeparatei
#define glBlendFunci _glew_gles_glBlendFunci
#define glBlendFuncSeparatei _glew_gles_glBlendFuncSeparatei
#define glColorMaski _glew_gles_glColorMaski
#define glIsEnabledi _glew_gles_glIsEnabledi
#define glDrawElementsBaseVertex _glew_gles_glDrawElementsBaseVertex
#define glDrawRangeElementsBaseVertex _glew_gles_glDrawRangeElementsBaseVertex
#define glDrawElementsInstancedBaseVertex _glew_gles_glDrawElementsInstancedBaseVertex
#define glFramebufferTexture _glew_gles_glFramebufferTexture
#define glPrimitiveBoundingBox _glew_gles_glPrimitiveBoundingBox
#define glGetGraphicsResetStatus _glew_gles_glGetGraphicsResetStatus
#define glReadnPixels _glew_gles_glReadnPixels
#define glGetnUniformfv _glew_gles_glGetnUniformfv
#define glGetnUniformiv _glew_gles_glGetnUniformiv
#define glGetnUniformuiv _glew_gles_glGetnUniformuiv
#define glMinSampleShading _glew_gles_glMinSampleShading
#define glPatchParameteri _glew_gles_glPatchParameteri
#define glTexParameterIiv _glew_gles_glTexParameterIiv
#define glTexParameterIuiv _glew_gles_glTexParameterIuiv
#define glGetTexParameterIiv _glew_gles_glGetTexParameterIiv
#define glGetTexParameterIuiv _glew_gles_glGetTexParameterIuiv
#define glSamplerParameterIiv _glew_gles_glSamplerParameterIiv
#define glSamplerParameterIuiv _glew_gles_glSamplerParameterIuiv
#define glGetSamplerParameterIiv _glew_gles_glGetSamplerParameterIiv
#define glGetSamplerParameterIuiv _glew_gles_glGetSamplerParameterIuiv
#define glTexBuffer _glew_gles_glTexBuffer
#define glTexBufferRange _glew_gles_glTexBufferRange
#define glTexStorage3DMultisample _glew_gles_glTexStorage3DMultisample
#define glRenderbufferStorageMultisampleAdvancedAMD _glew_gles_glRenderbufferStorageMultisampleAdvancedAMD
#define glNamedRenderbufferStorageMultisampleAdvancedAMD _glew_gles_glNamedRenderbufferStorageMultisampleAdvancedAMD
#define glGetPerfMonitorGroupsAMD _glew_gles_glGetPerfMonitorGroupsAMD
#define glGetPerfMonitorCountersAMD _glew_gles_glGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD _glew_gles_glGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorCounterStringAMD _glew_gles_glGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCounterInfoAMD _glew_gles_glGetPerfMonitorCounterInfoAMD
#define glGenPerfMonitorsAMD _glew_gles_glGenPerfMonitorsAMD
#define glDeletePerfMonitorsAMD _glew_gles_glDeletePerfMonitorsAMD
#define glSelectPerfMonitorCountersAMD _glew_gles_glSelectPerfMonitorCountersAMD
#define glBeginPerfMonitorAMD _glew_gles_glBeginPerfMonitorAMD
#define glEndPerfMonitorAMD _glew_gles_glEndPerfMonitorAMD
#define glGetPerfMonitorCounterDataAMD _glew_gles_glGetPerfMonitorCounterDataAMD
#define glBlitFramebufferANGLE _glew_gles_glBlitFramebufferANGLE
#define glRenderbufferStorageMultisampleANGLE _glew_gles_glRenderbufferStorageMultisampleANGLE
#define glDrawArraysInstancedANGLE _glew_gles_glDrawArraysInstancedANGLE
#define glDrawElementsInstancedANGLE _glew_gles_glDrawElementsInstancedANGLE
#define glVertexAttribDivisorANGLE _glew_gles_glVertexAttribDivisorANGLE
#define glGetTranslatedShaderSourceANGLE _glew_gles_glGetTranslatedShaderSourceANGLE
#define glCopyTextureLevelsAPPLE _glew_gles_glCopyTextureLevelsAPPLE
#define glRenderbufferStorageMultisampleAPPLE _glew_gles_glRenderbufferStorageMultisampleAPPLE
#define glResolveMultisampleFramebufferAPPLE _glew_gles_glResolveMultisampleFramebufferAPPLE
#define glFenceSyncAPPLE _glew_gles_glFenceSyncAPPLE
#define glIsSyncAPPLE _glew_gles_glIsSyncAPPLE
#define glDeleteSyncAPPLE _glew_gles_glDeleteSyncAPPLE
#define glClientWaitSyncAPPLE _glew_gles_glClientWaitSyncAPPLE
#define glWaitSyncAPPLE _glew_gles_glWaitSyncAPPLE
#define glGetInteger64vAPPLE _glew_gles_glGetInteger64vAPPLE
#define glGetSyncivAPPLE _glew_gles_glGetSyncivAPPLE
#define glEGLImageTargetTexStorageEXT _glew_gles_glEGLImageTargetTexStorageEXT
#define glEGLImageTargetTextureStorageEXT _glew_gles_glEGLImageTargetTextureStorageEXT
#define glDrawArraysInstancedBaseInstanceEXT _glew_gles_glDrawArraysInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseInstanceEXT _glew_gles_glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT _glew_gles_glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glBindFragDataLocationIndexedEXT _glew_gles_glBindFragDataLocationIndexedEXT
#define glBindFragDataLocationEXT _glew_gles_glBindFragDataLocationEXT
#define glGetProgramResourceLocationIndexEXT _glew_gles_glGetProgramResourceLocationIndexEXT
#define glGetFragDataIndexEXT _glew_gles_glGetFragDataIndexEXT
#define glBufferStorageEXT _glew_gles_glBufferStorageEXT
#define glClearTexImageEXT _glew_gles_glClearTexImageEXT
#define glClearTexSubImageEXT _glew_gles_glClearTexSubImageEXT
#define glClipControlEXT _glew_gles_glClipControlEXT
#define glCopyImageSubDataEXT _glew_gles_glCopyImageSubDataEXT
#define glLabelObjectEXT _glew_gles_glLabelObjectEXT
#define glGetObjectLabelEXT _glew_gles_glGetObjectLabelEXT
#define glInsertEventMarkerEXT _glew_gles_glInsertEventMarkerEXT
#define glPushGroupMarkerEXT _glew_gles_glPushGroupMarkerEXT
#define glPopGroupMarkerEXT _glew_gles_glPopGroupMarkerEXT
#define glDiscardFramebufferEXT _glew_gles_glDiscardFramebufferEXT
#define glGenQueriesEXT _glew_gles_glGenQueriesEXT
#define glDeleteQueriesEXT _glew_gles_glDeleteQueriesEXT
#define glIsQueryEXT _glew_gles_glIsQueryEXT
#define glBeginQueryEXT _glew_gles_glBeginQueryEXT
#define glEndQueryEXT _glew_gles_glEndQueryEXT
#define glQueryCounterEXT _glew_gles_glQueryCounterEXT
#define glGetQueryivEXT _glew_gles_glGetQueryivEXT
#define glGetQueryObjectivEXT _glew_gles_glGetQueryObjectivEXT
#define glGetQueryObjectuivEXT _glew_gles_glGetQueryObjectuivEXT
#define glGetQueryObjecti64vEXT _glew_gles_glGetQueryObjecti64vEXT
#define glGetQueryObjectui64vEXT _glew_gles_glGetQueryObjectui64vEXT
#define glGetInteger64vEXT _glew_gles_glGetInteger64vEXT
#define glDrawBuffersEXT _glew_gles_glDrawBuffersEXT
#define glEnableiEXT _glew_gles_glEnableiEXT
#define glDisableiEXT _glew_gles_glDisableiEXT
#define glBlendEquationiEXT _glew_gles_glBlendEquationiEXT
#define glBlendEquationSeparateiEXT _glew_gles_glBlendEquationSeparateiEXT
#define glBlendFunciEXT _glew_gles_glBlendFunciEXT
#define glBlendFuncSeparateiEXT _glew_gles_glBlendFuncSeparateiEXT
#define glColorMaskiEXT _glew_gles_glColorMaskiEXT
#define glIsEnablediEXT _glew_gles_glIsEnablediEXT
#define glDrawElementsBaseVertexEXT _glew_gles_glDrawElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexEXT _glew_gles_glDrawRangeElementsBaseVertexEXT
#define glDrawElementsInstancedBaseVertexEXT _glew_gles_glDrawElementsInstancedBaseVertexEXT
#define glMultiDrawElementsBaseVertexEXT _glew_gles_glMultiDrawElementsBaseVertexEXT
#define glDrawArraysInstancedEXT _glew_gles_glDrawArraysInstancedEXT
#define glDrawElementsInstancedEXT _glew_gles_glDrawElementsInstancedEXT
#define glDrawTransformFeedbackEXT _glew_gles_glDrawTransformFeedbackEXT
#define glDrawTransformFeedbackInstancedEXT _glew_gles_glDrawTransformFeedbackInstancedEXT
#define glBufferStorageExternalEXT _glew_gles_glBufferStorageExternalEXT
#define glNamedBufferStorageExternalEXT _glew_gles_glNamedBufferStorageExternalEXT
#define glFramebufferTextureEXT _glew_gles_glFramebufferTextureEXT
#define glVertexAttribDivisorEXT _glew_gles_glVertexAttribDivisorEXT
#define glMapBufferRangeEXT _glew_gles_glMapBufferRangeEXT
#define glFlushMappedBufferRangeEXT _glew_gles_glFlushMappedBufferRangeEXT
#define glGetUnsignedBytevEXT _glew_gles_glGetUnsignedBytevEXT
#define glGetUnsignedBytei_vEXT _glew_gles_glGetUnsignedBytei_vEXT
#define glDeleteMemoryObjectsEXT _glew_gles_glDeleteMemoryObjectsEXT
#define glIsMemoryObjectEXT _glew_gles_glIsMemoryObjectEXT
#define glCreateMemoryObjectsEXT _glew_gles_glCreateMemoryObjectsEXT
#define glMemoryObjectParameterivEXT _glew_gles_glMemoryObjectParameterivEXT
#define glGetMemoryObjectParameterivEXT _glew_gles_glGetMemoryObjectParameterivEXT
#define glTexStorageMem2DEXT _glew_gles_glTexStorageMem2DEXT
#define glTexStorageMem2DMultisampleEXT _glew_gles_glTexStorageMem2DMultisampleEXT
#define glTexStorageMem3DEXT _glew_gles_glTexStorageMem3DEXT
#define glTexStorageMem3DMultisampleEXT _glew_gles_glTexStorageMem3DMultisampleEXT
#define glBufferStorageMemEXT _glew_gles_glBufferStorageMemEXT
#define glTextureStorageMem2DEXT _glew_gles_glTextureStorageMem2DEXT
#define glTextureStorageMem2DMultisampleEXT _glew_gles_glTextureStorageMem2DMultisampleEXT
#define glTextureStorageMem3DEXT _glew_gles_glTextureStorageMem3DEXT
#define glTextureStorageMem3DMultisampleEXT _glew_gles_glTextureStorageMem3DMultisampleEXT
#define glNamedBufferStorageMemEXT _glew_gles_glNamedBufferStorageMemEXT
#define glImportMemoryFdEXT _glew_gles_glImportMemoryFdEXT
#define glImportMemoryWin32HandleEXT _glew_gles_glImportMemoryWin32HandleEXT
#define glImportMemoryWin32NameEXT _glew_gles_glImportMemoryWin32NameEXT
#define glMultiDrawArraysEXT _glew_gles_glMultiDrawArraysEXT
#define glMultiDrawElementsEXT _glew_gles_glMultiDrawElementsEXT
#define glMultiDrawArraysIndirectEXT _glew_gles_glMultiDrawArraysIndirectEXT
#define glMultiDrawElementsIndirectEXT _glew_gles_glMultiDrawElementsIndirectEXT
#define glRenderbufferStorageMultisampleEXT _glew_gles_glRenderbufferStorageMultisampleEXT
#define glFramebufferTexture2DMultisampleEXT _glew_gles_glFramebufferTexture2DMultisampleEXT
#define glReadBufferIndexedEXT _glew_gles_glReadBufferIndexedEXT
#define glDrawBuffersIndexedEXT _glew_gles_glDrawBuffersIndexedEXT
#define glGetIntegeri_vEXT _glew_gles_glGetIntegeri_vEXT
#define glPolygonOffsetClampEXT _glew_gles_glPolygonOffsetClampEXT
#define glPrimitiveBoundingBoxEXT _glew_gles_glPrimitiveBoundingBoxEXT
#define glRasterSamplesEXT _glew_gles_glRasterSamplesEXT
#define glGetGraphicsResetStatusEXT _glew_gles_glGetGraphicsResetStatusEXT
#define glReadnPixelsEXT _glew_gles_glReadnPixelsEXT
#define glGetnUniformfvEXT _glew_gles_glGetnUniformfvEXT
#define glGetnUniformivEXT _glew_gles_glGetnUniformivEXT
#define glGenSemaphoresEXT _glew_gles_glGenSemaphoresEXT
#define glDeleteSemaphoresEXT _glew_gles_glDeleteSemaphoresEXT
#define glIsSemaphoreEXT _glew_gles_glIsSemaphoreEXT
#define glSemaphoreParameterui64vEXT _glew_gles_glSemaphoreParameterui64vEXT
#define glGetSemaphoreParameterui64vEXT _glew_gles_glGetSemaphoreParameterui64vEXT
#define glWaitSemaphoreEXT _glew_gles_glWaitSemaphoreEXT
#define glSignalSemaphoreEXT _glew_gles_glSignalSemaphoreEXT
#define glImportSemaphoreFdEXT _glew_gles_glImportSemaphoreFdEXT
#define glImportSemaphoreWin32HandleEXT _glew_gles_glImportSemaphoreWin32HandleEXT
#define glImportSemaphoreWin32NameEXT _glew_gles_glImportSemaphoreWin32NameEXT
#define glActiveShaderProgramEXT _glew_gles_glActiveShaderProgramEXT
#define glBindProgramPipelineEXT _glew_gles_glBindProgramPipelineEXT
#define glCreateShaderProgramvEXT _glew_gles_glCreateShaderProgramvEXT
#define glDeleteProgramPipelinesEXT _glew_gles_glDeleteProgramPipelinesEXT
#define glGenProgramPipelinesEXT _glew_gles_glGenProgramPipelinesEXT
#define glGetProgramPipelineInfoLogEXT _glew_gles_glGetProgramPipelineInfoLogEXT
#define glGetProgramPipelineivEXT _glew_gles_glGetProgramPipelineivEXT
#define glIsProgramPipelineEXT _glew_gles_glIsProgramPipelineEXT
#define glProgramParameteriEXT _glew_gles_glProgramParameteriEXT
#define glProgramUniform1fEXT _glew_gles_glProgramUniform1fEXT
#define glProgramUniform1fvEXT _glew_gles_glProgramUniform1fvEXT
#define glProgramUniform1iEXT _glew_gles_glProgramUniform1iEXT
#define glProgramUniform1ivEXT _glew_gles_glProgramUniform1ivEXT
#define glProgramUniform2fEXT _glew_gles_glProgramUniform2fEXT
#define glProgramUniform2fvEXT _glew_gles_glProgramUniform2fvEXT
#define glProgramUniform2iEXT _glew_gles_glProgramUniform2iEXT
#define glProgramUniform2ivEXT _glew_gles_glProgramUniform2ivEXT
#define glProgramUniform3fEXT _glew_gles_glProgramUniform3fEXT
#define glProgramUniform3fvEXT _glew_gles_glProgramUniform3fvEXT
#define glProgramUniform3iEXT _glew_gles_glProgramUniform3iEXT
#define glProgramUniform3ivEXT _glew_gles_glProgramUniform3ivEXT
#define glProgramUniform4fEXT _glew_gles_glProgramUniform4fEXT
#define glProgramUniform4fvEXT _glew_gles_glProgramUniform4fvEXT
#define glProgramUniform4iEXT _glew_gles_glProgramUniform4iEXT
#define glProgramUniform4ivEXT _glew_gles_glProgramUniform4ivEXT
#define glProgramUniformMatrix2fvEXT _glew_gles_glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix3fvEXT _glew_gles_glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix4fvEXT _glew_gles_glProgramUniformMatrix4fvEXT
#define glUseProgramStagesEXT _glew_gles_glUseProgramStagesEXT
#define glValidateProgramPipelineEXT _glew_gles_glValidateProgramPipelineEXT
#define glProgramUniform1uiEXT _glew_gles_glProgramUniform1uiEXT
#define glProgramUniform2uiEXT _glew_gles_glProgramUniform2uiEXT
#define glProgramUniform3uiEXT _glew_gles_glProgramUniform3uiEXT
#define glProgramUniform4uiEXT _glew_gles_glProgramUniform4uiEXT
#define glProgramUniform1uivEXT _glew_gles_glProgramUniform1uivEXT
#define glProgramUniform2uivEXT _glew_gles_glProgramUniform2uivEXT
#define glProgramUniform3uivEXT _glew_gles_glProgramUniform3uivEXT
#define glProgramUniform4uivEXT _glew_gles_glProgramUniform4uivEXT
#define glProgramUniformMatrix2x3fvEXT _glew_gles_glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix3x2fvEXT _glew_gles_glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix2x4fvEXT _glew_gles_glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix4x2fvEXT _glew_gles_glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix3x4fvEXT _glew_gles_glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4x3fvEXT _glew_gles_glProgramUniformMatrix4x3fvEXT
#define glFramebufferFetchBarrierEXT _glew_gles_glFramebufferFetchBarrierEXT
#define glFramebufferPixelLocalStorageSizeEXT _glew_gles_glFramebufferPixelLocalStorageSizeEXT
#define glGetFramebufferPixelLocalStorageSizeEXT _glew_gles_glGetFramebufferPixelLocalStorageSizeEXT
#define glClearPixelLocalStorageuiEXT _glew_gles_glClearPixelLocalStorageuiEXT
#define glTexPageCommitmentEXT _glew_gles_glTexPageCommitmentEXT
#define glPatchParameteriEXT _glew_gles_glPatchParameteriEXT
#define glTexParameterIivEXT _glew_gles_glTexParameterIivEXT
#define glTexParameterIuivEXT _glew_gles_glTexParameterIuivEXT
#define glGetTexParameterIivEXT _glew_gles_glGetTexParameterIivEXT
#define glGetTexParameterIuivEXT _glew_gles_glGetTexParameterIuivEXT
#define glSamplerParameterIivEXT _glew_gles_glSamplerParameterIivEXT
#define glSamplerParameterIuivEXT _glew_gles_glSamplerParameterIuivEXT
#define glGetSamplerParameterIivEXT _glew_gles_glGetSamplerParameterIivEXT
#define glGetSamplerParameterIuivEXT _glew_gles_glGetSamplerParameterIuivEXT
#define glTexBufferEXT _glew_gles_glTexBufferEXT
#define glTexBufferRangeEXT _glew_gles_glTexBufferRangeEXT
#define glTexStorage1DEXT _glew_gles_glTexStorage1DEXT
#define glTexStorage2DEXT _glew_gles_glTexStorage2DEXT
#define glTexStorage3DEXT _glew_gles_glTexStorage3DEXT
#define glTextureStorage1DEXT _glew_gles_glTextureStorage1DEXT
#define glTextureStorage2DEXT _glew_gles_glTextureStorage2DEXT
#define glTextureStorage3DEXT _glew_gles_glTextureStorage3DEXT
#define glTextureViewEXT _glew_gles_glTextureViewEXT
#define glCreateSemaphoresNV _glew_gles_glCreateSemaphoresNV
#define glSemaphoreParameterivNV _glew_gles_glSemaphoreParameterivNV
#define glGetSemaphoreParameterivNV _glew_gles_glGetSemaphoreParameterivNV
#define glAcquireKeyedMutexWin32EXT _glew_gles_glAcquireKeyedMutexWin32EXT
#define glReleaseKeyedMutexWin32EXT _glew_gles_glReleaseKeyedMutexWin32EXT
#define glWindowRectanglesEXT _glew_gles_glWindowRectanglesEXT
#define glGetTextureHandleIMG _glew_gles_glGetTextureHandleIMG
#define glGetTextureSamplerHandleIMG _glew_gles_glGetTextureSamplerHandleIMG
#define glUniformHandleui64IMG _glew_gles_glUniformHandleui64IMG
#define glUniformHandleui64vIMG _glew_gles_glUniformHandleui64vIMG
#define glProgramUniformHandleui64IMG _glew_gles_glProgramUniformHandleui64IMG
#define glProgramUniformHandleui64vIMG _glew_gles_glProgramUniformHandleui64vIMG
#define glFramebufferTexture2DDownsampleIMG _glew_gles_glFramebufferTexture2DDownsampleIMG
#define glFramebufferTextureLayerDownsampleIMG _glew_gles_glFramebufferTextureLayerDownsampleIMG
#define glRenderbufferStorageMultisampleIMG _glew_gles_glRenderbufferStorageMultisampleIMG
#define glFramebufferTexture2DMultisampleIMG _glew_gles_glFramebufferTexture2DMultisampleIMG
#define glApplyFramebufferAttachmentCMAAINTEL _glew_gles_glApplyFramebufferAttachmentCMAAINTEL
#define glBeginPerfQueryINTEL _glew_gles_glBeginPerfQueryINTEL
#define glCreatePerfQueryINTEL _glew_gles_glCreatePerfQueryINTEL
#define glDeletePerfQueryINTEL _glew_gles_glDeletePerfQueryINTEL
#define glEndPerfQueryINTEL _glew_gles_glEndPerfQueryINTEL
#define glGetFirstPerfQueryIdINTEL _glew_gles_glGetFirstPerfQueryIdINTEL
#define glGetNextPerfQueryIdINTEL _glew_gles_glGetNextPerfQueryIdINTEL
#define glGetPerfCounterInfoINTEL _glew_gles_glGetPerfCounterInfoINTEL
#define glGetPerfQueryDataINTEL _glew_gles_glGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL _glew_gles_glGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL _glew_gles_glGetPerfQueryInfoINTEL
#define glBlendBarrierKHR _glew_gles_glBlendBarrierKHR
#define glDebugMessageControlKHR _glew_gles_glDebugMessageControlKHR
#define glDebugMessageInsertKHR _glew_gles_glDebugMessageInsertKHR
#define glDebugMessageCallbackKHR _glew_gles_glDebugMessageCallbackKHR
#define glGetDebugMessageLogKHR _glew_gles_glGetDebugMessageLogKHR
#define glPushDebugGroupKHR _glew_gles_glPushDebugGroupKHR
#define glPopDebugGroupKHR _glew_gles_glPopDebugGroupKHR
#define glObjectLabelKHR _glew_gles_glObjectLabelKHR
#define glGetObjectLabelKHR _glew_gles_glGetObjectLabelKHR
#define glObjectPtrLabelKHR _glew_gles_glObjectPtrLabelKHR
#define glGetObjectPtrLabelKHR _glew_gles_glGetObjectPtrLabelKHR
#define glGetPointervKHR _glew_gles_glGetPointervKHR
#define glGetGraphicsResetStatusKHR _glew_gles_glGetGraphicsResetStatusKHR
#define glReadnPixelsKHR _glew_gles_glReadnPixelsKHR
#define glGetnUniformfvKHR _glew_gles_glGetnUniformfvKHR
#define glGetnUniformivKHR _glew_gles_glGetnUniformivKHR
#define glGetnUniformuivKHR _glew_gles_glGetnUniformuivKHR
#define glMaxShaderCompilerThreadsKHR _glew_gles_glMaxShaderCompilerThreadsKHR
#define glFramebufferParameteriMESA _glew_gles_glFramebufferParameteriMESA
#define glGetFramebufferParameterivMESA _glew_gles_glGetFramebufferParameterivMESA
#define glGetTextureHandleNV _glew_gles_glGetTextureHandleNV
#define glGetTextureSamplerHandleNV _glew_gles_glGetTextureSamplerHandleNV
#define glMakeTextureHandleResidentNV _glew_gles_glMakeTextureHandleResidentNV
#define glMakeTextureHandleNonResidentNV _glew_gles_glMakeTextureHandleNonResidentNV
#define glGetImageHandleNV _glew_gles_glGetImageHandleNV
#define glMakeImageHandleResidentNV _glew_gles_glMakeImageHandleResidentNV
#define glMakeImageHandleNonResidentNV _glew_gles_glMakeImageHandleNonResidentNV
#define glUniformHandleui64NV _glew_gles_glUniformHandleui64NV
#define glUniformHandleui64vNV _glew_gles_glUniformHandleui64vNV
#define glProgramUniformHandleui64NV _glew_gles_glProgramUniformHandleui64NV
#define glProgramUniformHandleui64vNV _glew_gles_glProgramUniformHandleui64vNV
#define glIsTextureHandleResidentNV _glew_gles_glIsTextureHandleResidentNV
#define glIsImageHandleResidentNV _glew_gles_glIsImageHandleResidentNV
#define glBlendParameteriNV _glew_gles_glBlendParameteriNV
#define glBlendBarrierNV _glew_gles_glBlendBarrierNV
#define glViewportPositionWScaleNV _glew_gles_glViewportPositionWScaleNV
#define glBeginConditionalRenderNV _glew_gles_glBeginConditionalRenderNV
#define glEndConditionalRenderNV _glew_gles_glEndConditionalRenderNV
#define glSubpixelPrecisionBiasNV _glew_gles_glSubpixelPrecisionBiasNV
#define glConservativeRasterParameteriNV _glew_gles_glConservativeRasterParameteriNV
#define glCopyBufferSubDataNV _glew_gles_glCopyBufferSubDataNV
#define glCoverageMaskNV _glew_gles_glCoverageMaskNV
#define glCoverageOperationNV _glew_gles_glCoverageOperationNV
#define glDrawBuffersNV _glew_gles_glDrawBuffersNV
#define glDrawArraysInstancedNV _glew_gles_glDrawArraysInstancedNV
#define glDrawElementsInstancedNV _glew_gles_glDrawElementsInstancedNV
#define glDrawVkImageNV _glew_gles_glDrawVkImageNV
#define glGetVkProcAddrNV _glew_gles_glGetVkProcAddrNV
#define glWaitVkSemaphoreNV _glew_gles_glWaitVkSemaphoreNV
#define glSignalVkSemaphoreNV _glew_gles_glSignalVkSemaphoreNV
#define glSignalVkFenceNV _glew_gles_glSignalVkFenceNV
#define glDeleteFencesNV _glew_gles_glDeleteFencesNV
#define glGenFencesNV _glew_gles_glGenFencesNV
#define glIsFenceNV _glew_gles_glIsFenceNV
#define glTestFenceNV _glew_gles_glTestFenceNV
#define glGetFenceivNV _glew_gles_glGetFenceivNV
#define glFinishFenceNV _glew_gles_glFinishFenceNV
#define glSetFenceNV _glew_gles_glSetFenceNV
#define glFragmentCoverageColorNV _glew_gles_glFragmentCoverageColorNV
#define glBlitFramebufferNV _glew_gles_glBlitFramebufferNV
#define glCoverageModulationTableNV _glew_gles_glCoverageModulationTableNV
#define glGetCoverageModulationTableNV _glew_gles_glGetCoverageModulationTableNV
#define glCoverageModulationNV _glew_gles_glCoverageModulationNV
#define glRenderbufferStorageMultisampleNV _glew_gles_glRenderbufferStorageMultisampleNV
#define glUniform1i64NV _glew_gles_glUniform1i64NV
#define glUniform2i64NV _glew_gles_glUniform2i64NV
#define glUniform3i64NV _glew_gles_glUniform3i64NV
#define glUniform4i64NV _glew_gles_glUniform4i64NV
#define glUniform1i64vNV _glew_gles_glUniform1i64vNV
#define glUniform2i64vNV _glew_gles_glUniform2i64vNV
#define glUniform3i64vNV _glew_gles_glUniform3i64vNV
#define glUniform4i64vNV _glew_gles_glUniform4i64vNV
#define glUniform1ui64NV _glew_gles_glUniform1ui64NV
#define glUniform2ui64NV _glew_gles_glUniform2ui64NV
#define glUniform3ui64NV _glew_gles_glUniform3ui64NV
#define glUniform4ui64NV _glew_gles_glUniform4ui64NV
#define glUniform1ui64vNV _glew_gles_glUniform1ui64vNV
#define glUniform2ui64vNV _glew_gles_glUniform2ui64vNV
#define glUniform3ui64vNV _glew_gles_glUniform3ui64vNV
#define glUniform4ui64vNV _glew_gles_glUniform4ui64vNV
#define glGetUniformi64vNV _glew_gles_glGetUniformi64vNV
#define glProgramUniform1i64NV _glew_gles_glProgramUniform1i64NV
#define glProgramUniform2i64NV _glew_gles_glProgramUniform2i64NV
#define glProgramUniform3i64NV _glew_gles_glProgramUniform3i64NV
#define glProgramUniform4i64NV _glew_gles_glProgramUniform4i64NV
#define glProgramUniform1i64vNV _glew_gles_glProgramUniform1i64vNV
#define glProgramUniform2i64vNV _glew_gles_glProgramUniform2i64vNV
#define glProgramUniform3i64vNV _glew_gles_glProgramUniform3i64vNV
#define glProgramUniform4i64vNV _glew_gles_glProgramUniform4i64vNV
#define glProgramUniform1ui64NV _glew_gles_glProgramUniform1ui64NV
#define glProgramUniform2ui64NV _glew_gles_glProgramUniform2ui64NV
#define glProgramUniform3ui64NV _glew_gles_glProgramUniform3ui64NV
#define glProgramUniform4ui64NV _glew_gles_glProgramUniform4ui64NV
#define glProgramUniform1ui64vNV _glew_gles_glProgramUniform1ui64vNV
#define glProgramUniform2ui64vNV _glew_gles_glProgramUniform2ui64vNV
#define glProgramUniform3ui64vNV _glew_gles_glProgramUniform3ui64vNV
#define glProgramUniform4ui64vNV _glew_gles_glProgramUniform4ui64vNV
#define glVertexAttribDivisorNV _glew_gles_glVertexAttribDivisorNV
#define glGetInternalformatSampleivNV _glew_gles_glGetInternalformatSampleivNV
#define glGetMemoryObjectDetachedResourcesuivNV _glew_gles_glGetMemoryObjectDetachedResourcesuivNV
#define glResetMemoryObjectParameterNV _glew_gles_glResetMemoryObjectParameterNV
#define glTexAttachMemoryNV _glew_gles_glTexAttachMemoryNV
#define glBufferAttachMemoryNV _glew_gles_glBufferAttachMemoryNV
#define glTextureAttachMemoryNV _glew_gles_glTextureAttachMemoryNV
#define glNamedBufferAttachMemoryNV _glew_gles_glNamedBufferAttachMemoryNV
#define glBufferPageCommitmentMemNV _glew_gles_glBufferPageCommitmentMemNV
#define glTexPageCommitmentMemNV _glew_gles_glTexPageCommitmentMemNV
#define glNamedBufferPageCommitmentMemNV _glew_gles_glNamedBufferPageCommitmentMemNV
#define glTexturePageCommitmentMemNV _glew_gles_glTexturePageCommitmentMemNV
#define glDrawMeshTasksNV _glew_gles_glDrawMeshTasksNV
#define glDrawMeshTasksIndirectNV _glew_gles_glDrawMeshTasksIndirectNV
#define glMultiDrawMeshTasksIndirectNV _glew_gles_glMultiDrawMeshTasksIndirectNV
#define glMultiDrawMeshTasksIndirectCountNV _glew_gles_glMultiDrawMeshTasksIndirectCountNV
#define glUniformMatrix2x3fvNV _glew_gles_glUniformMatrix2x3fvNV
#define glUniformMatrix3x2fvNV _glew_gles_glUniformMatrix3x2fvNV
#define glUniformMatrix2x4fvNV _glew_gles_glUniformMatrix2x4fvNV
#define glUniformMatrix4x2fvNV _glew_gles_glUniformMatrix4x2fvNV
#define glUniformMatrix3x4fvNV _glew_gles_glUniformMatrix3x4fvNV
#define glUniformMatrix4x3fvNV _glew_gles_glUniformMatrix4x3fvNV
#define glGenPathsNV _glew_gles_glGenPathsNV
#define glDeletePathsNV _glew_gles_glDeletePathsNV
#define glIsPathNV _glew_gles_glIsPathNV
#define glPathCommandsNV _glew_gles_glPathCommandsNV
#define glPathCoordsNV _glew_gles_glPathCoordsNV
#define glPathSubCommandsNV _glew_gles_glPathSubCommandsNV
#define glPathSubCoordsNV _glew_gles_glPathSubCoordsNV
#define glPathStringNV _glew_gles_glPathStringNV
#define glPathGlyphsNV _glew_gles_glPathGlyphsNV
#define glPathGlyphRangeNV _glew_gles_glPathGlyphRangeNV
#define glWeightPathsNV _glew_gles_glWeightPathsNV
#define glCopyPathNV _glew_gles_glCopyPathNV
#define glInterpolatePathsNV _glew_gles_glInterpolatePathsNV
#define glTransformPathNV _glew_gles_glTransformPathNV
#define glPathParameterivNV _glew_gles_glPathParameterivNV
#define glPathParameteriNV _glew_gles_glPathParameteriNV
#define glPathParameterfvNV _glew_gles_glPathParameterfvNV
#define glPathParameterfNV _glew_gles_glPathParameterfNV
#define glPathDashArrayNV _glew_gles_glPathDashArrayNV
#define glPathStencilFuncNV _glew_gles_glPathStencilFuncNV
#define glPathStencilDepthOffsetNV _glew_gles_glPathStencilDepthOffsetNV
#define glStencilFillPathNV _glew_gles_glStencilFillPathNV
#define glStencilStrokePathNV _glew_gles_glStencilStrokePathNV
#define glStencilFillPathInstancedNV _glew_gles_glStencilFillPathInstancedNV
#define glStencilStrokePathInstancedNV _glew_gles_glStencilStrokePathInstancedNV
#define glPathCoverDepthFuncNV _glew_gles_glPathCoverDepthFuncNV
#define glCoverFillPathNV _glew_gles_glCoverFillPathNV
#define glCoverStrokePathNV _glew_gles_glCoverStrokePathNV
#define glCoverFillPathInstancedNV _glew_gles_glCoverFillPathInstancedNV
#define glCoverStrokePathInstancedNV _glew_gles_glCoverStrokePathInstancedNV
#define glGetPathParameterivNV _glew_gles_glGetPathParameterivNV
#define glGetPathParameterfvNV _glew_gles_glGetPathParameterfvNV
#define glGetPathCommandsNV _glew_gles_glGetPathCommandsNV
#define glGetPathCoordsNV _glew_gles_glGetPathCoordsNV
#define glGetPathDashArrayNV _glew_gles_glGetPathDashArrayNV
#define glGetPathMetricsNV _glew_gles_glGetPathMetricsNV
#define glGetPathMetricRangeNV _glew_gles_glGetPathMetricRangeNV
#define glGetPathSpacingNV _glew_gles_glGetPathSpacingNV
#define glIsPointInFillPathNV _glew_gles_glIsPointInFillPathNV
#define glIsPointInStrokePathNV _glew_gles_glIsPointInStrokePathNV
#define glGetPathLengthNV _glew_gles_glGetPathLengthNV
#define glPointAlongPathNV _glew_gles_glPointAlongPathNV
#define glMatrixLoad3x2fNV _glew_gles_glMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV _glew_gles_glMatrixLoad3x3fNV
#define glMatrixLoadTranspose3x3fNV _glew_gles_glMatrixLoadTranspose3x3fNV
#define glMatrixMult3x2fNV _glew_gles_glMatrixMult3x2fNV
#define glMatrixMult3x3fNV _glew_gles_glMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV _glew_gles_glMatrixMultTranspose3x3fNV
#define glStencilThenCoverFillPathNV _glew_gles_glStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathNV _glew_gles_glStencilThenCoverStrokePathNV
#define glStencilThenCoverFillPathInstancedNV _glew_gles_glStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverStrokePathInstancedNV _glew_gles_glStencilThenCoverStrokePathInstancedNV
#define glPathGlyphIndexRangeNV _glew_gles_glPathGlyphIndexRangeNV
#define glPathGlyphIndexArrayNV _glew_gles_glPathGlyphIndexArrayNV
#define glPathMemoryGlyphIndexArrayNV _glew_gles_glPathMemoryGlyphIndexArrayNV
#define glProgramPathFragmentInputGenNV _glew_gles_glProgramPathFragmentInputGenNV
#define glGetProgramResourcefvNV _glew_gles_glGetProgramResourcefvNV
#define glMatrixFrustumEXT _glew_gles_glMatrixFrustumEXT
#define glMatrixLoadIdentityEXT _glew_gles_glMatrixLoadIdentityEXT
#define glMatrixLoadTransposefEXT _glew_gles_glMatrixLoadTransposefEXT
#define glMatrixLoadTransposedEXT _glew_gles_glMatrixLoadTransposedEXT
#define glMatrixLoadfEXT _glew_gles_glMatrixLoadfEXT
#define glMatrixLoaddEXT _glew_gles_glMatrixLoaddEXT
#define glMatrixMultTransposefEXT _glew_gles_glMatrixMultTransposefEXT
#define glMatrixMultTransposedEXT _glew_gles_glMatrixMultTransposedEXT
#define glMatrixMultfEXT _glew_gles_glMatrixMultfEXT
#define glMatrixMultdEXT _glew_gles_glMatrixMultdEXT
#define glMatrixOrthoEXT _glew_gles_glMatrixOrthoEXT
#define glMatrixPopEXT _glew_gles_glMatrixPopEXT
#define glMatrixPushEXT _glew_gles_glMatrixPushEXT
#define glMatrixRotatefEXT _glew_gles_glMatrixRotatefEXT
#define glMatrixRotatedEXT _glew_gles_glMatrixRotatedEXT
#define glMatrixScalefEXT _glew_gles_glMatrixScalefEXT
#define glMatrixScaledEXT _glew_gles_glMatrixScaledEXT
#define glMatrixTranslatefEXT _glew_gles_glMatrixTranslatefEXT
#define glMatrixTranslatedEXT _glew_gles_glMatrixTranslatedEXT
#define glPolygonModeNV _glew_gles_glPolygonModeNV
#define glReadBufferNV _glew_gles_glReadBufferNV
#define glFramebufferSampleLocationsfvNV _glew_gles_glFramebufferSampleLocationsfvNV
#define glNamedFramebufferSampleLocationsfvNV _glew_gles_glNamedFramebufferSampleLocationsfvNV
#define glResolveDepthValuesNV _glew_gles_glResolveDepthValuesNV
#define glScissorExclusiveNV _glew_gles_glScissorExclusiveNV
#define glScissorExclusiveArrayvNV _glew_gles_glScissorExclusiveArrayvNV
#define glBindShadingRateImageNV _glew_gles_glBindShadingRateImageNV
#define glGetShadingRateImagePaletteNV _glew_gles_glGetShadingRateImagePaletteNV
#define glGetShadingRateSampleLocationivNV _glew_gles_glGetShadingRateSampleLocationivNV
#define glShadingRateImageBarrierNV _glew_gles_glShadingRateImageBarrierNV
#define glShadingRateImagePaletteNV _glew_gles_glShadingRateImagePaletteNV
#define glShadingRateSampleOrderNV _glew_gles_glShadingRateSampleOrderNV
#define glShadingRateSampleOrderCustomNV _glew_gles_glShadingRateSampleOrderCustomNV
#define glViewportArrayvNV _glew_gles_glViewportArrayvNV
#define glViewportIndexedfNV _glew_gles_glViewportIndexedfNV
#define glViewportIndexedfvNV _glew_gles_glViewportIndexedfvNV
#define glScissorArrayvNV _glew_gles_glScissorArrayvNV
#define glScissorIndexedNV _glew_gles_glScissorIndexedNV
#define glScissorIndexedvNV _glew_gles_glScissorIndexedvNV
#define glDepthRangeArrayfvNV _glew_gles_glDepthRangeArrayfvNV
#define glDepthRangeIndexedfNV _glew_gles_glDepthRangeIndexedfNV
#define glGetFloati_vNV _glew_gles_glGetFloati_vNV
#define glEnableiNV _glew_gles_glEnableiNV
#define glDisableiNV _glew_gles_glDisableiNV
#define glIsEnablediNV _glew_gles_glIsEnablediNV
#define glViewportSwizzleNV _glew_gles_glViewportSwizzleNV
#define glEGLImageTargetTexture2DOES _glew_gles_glEGLImageTargetTexture2DOES
#define glEGLImageTargetRenderbufferStorageOES _glew_gles_glEGLImageTargetRenderbufferStorageOES
#define glCopyImageSubDataOES _glew_gles_glCopyImageSubDataOES
#define glEnableiOES _glew_gles_glEnableiOES
#define glDisableiOES _glew_gles_glDisableiOES
#define glBlendEquationiOES _glew_gles_glBlendEquationiOES
#define glBlendEquationSeparateiOES _glew_gles_glBlendEquationSeparateiOES
#define glBlendFunciOES _glew_gles_glBlendFunciOES
#define glBlendFuncSeparateiOES _glew_gles_glBlendFuncSeparateiOES
#define glColorMaskiOES _glew_gles_glColorMaskiOES
#define glIsEnablediOES _glew_gles_glIsEnablediOES
#define glDrawElementsBaseVertexOES _glew_gles_glDrawElementsBaseVertexOES
#define glDrawRangeElementsBaseVertexOES _glew_gles_glDrawRangeElementsBaseVertexOES
#define glDrawElementsInstancedBaseVertexOES _glew_gles_glDrawElementsInstancedBaseVertexOES
#define glFramebufferTextureOES _glew_gles_glFramebufferTextureOES
#define glGetProgramBinaryOES _glew_gles_glGetProgramBinaryOES
#define glProgramBinaryOES _glew_gles_glProgramBinaryOES
#define glMapBufferOES _glew_gles_glMapBufferOES
#define glUnmapBufferOES _glew_gles_glUnmapBufferOES
#define glGetBufferPointervOES _glew_gles_glGetBufferPointervOES
#define glPrimitiveBoundingBoxOES _glew_gles_glPrimitiveBoundingBoxOES
#define glMinSampleShadingOES _glew_gles_glMinSampleShadingOES
#define glPatchParameteriOES _glew_gles_glPatchParameteriOES
#define glTexImage3DOES _glew_gles_glTexImage3DOES
#define glTexSubImage3DOES _glew_gles_glTexSubImage3DOES
#define glCopyTexSubImage3DOES _glew_gles_glCopyTexSubImage3DOES
#define glCompressedTexImage3DOES _glew_gles_glCompressedTexImage3DOES
#define glCompressedTexSubImage3DOES _glew_gles_glCompressedTexSubImage3DOES
#define glFramebufferTexture3DOES _glew_gles_glFramebufferTexture3DOES
#define glTexParameterIivOES _glew_gles_glTexParameterIivOES
#define glTexParameterIuivOES _glew_gles_glTexParameterIuivOES
#define glGetTexParameterIivOES _glew_gles_glGetTexParameterIivOES
#define glGetTexParameterIuivOES _glew_gles_glGetTexParameterIuivOES
#define glSamplerParameterIivOES _glew_gles_glSamplerParameterIivOES
#define glSamplerParameterIuivOES _glew_gles_glSamplerParameterIuivOES
#define glGetSamplerParameterIivOES _glew_gles_glGetSamplerParameterIivOES
#define glGetSamplerParameterIuivOES _glew_gles_glGetSamplerParameterIuivOES
#define glTexBufferOES _glew_gles_glTexBufferOES
#define glTexBufferRangeOES _glew_gles_glTexBufferRangeOES
#define glTexStorage3DMultisampleOES _glew_gles_glTexStorage3DMultisampleOES
#define glTextureViewOES _glew_gles_glTextureViewOES
#define glBindVertexArrayOES _glew_gles_glBindVertexArrayOES
#define glDeleteVertexArraysOES _glew_gles_glDeleteVertexArraysOES
#define glGenVertexArraysOES _glew_gles_glGenVertexArraysOES
#define glIsVertexArrayOES _glew_gles_glIsVertexArrayOES
#define glViewportArrayvOES _glew_gles_glViewportArrayvOES
#define glViewportIndexedfOES _glew_gles_glViewportIndexedfOES
#define glViewportIndexedfvOES _glew_gles_glViewportIndexedfvOES
#define glScissorArrayvOES _glew_gles_glScissorArrayvOES
#define glScissorIndexedOES _glew_gles_glScissorIndexedOES
#define glScissorIndexedvOES _glew_gles_glScissorIndexedvOES
#define glDepthRangeArrayfvOES _glew_gles_glDepthRangeArrayfvOES
#define glDepthRangeIndexedfOES _glew_gles_glDepthRangeIndexedfOES
#define glGetFloati_vOES _glew_gles_glGetFloati_vOES
#define glFramebufferTextureMultiviewOVR _glew_gles_glFramebufferTextureMultiviewOVR
#define glFramebufferTextureMultisampleMultiviewOVR _glew_gles_glFramebufferTextureMultisampleMultiviewOVR
#define glAlphaFuncQCOM _glew_gles_glAlphaFuncQCOM
#define glGetDriverControlsQCOM _glew_gles_glGetDriverControlsQCOM
#define glGetDriverControlStringQCOM _glew_gles_glGetDriverControlStringQCOM
#define glEnableDriverControlQCOM _glew_gles_glEnableDriverControlQCOM
#define glDisableDriverControlQCOM _glew_gles_glDisableDriverControlQCOM
#define glExtGetTexturesQCOM _glew_gles_glExtGetTexturesQCOM
#define glExtGetBuffersQCOM _glew_gles_glExtGetBuffersQCOM
#define glExtGetRenderbuffersQCOM _glew_gles_glExtGetRenderbuffersQCOM
#define glExtGetFramebuffersQCOM _glew_gles_glExtGetFramebuffersQCOM
#define glExtGetTexLevelParameterivQCOM _glew_gles_glExtGetTexLevelParameterivQCOM
#define glExtTexObjectStateOverrideiQCOM _glew_gles_glExtTexObjectStateOverrideiQCOM
#define glExtGetTexSubImageQCOM _glew_gles_glExtGetTexSubImageQCOM
#define glExtGetBufferPointervQCOM _glew_gles_glExtGetBufferPointervQCOM
#define glExtGetShadersQCOM _glew_gles_glExtGetShadersQCOM
#define glExtGetProgramsQCOM _glew_gles_glExtGetProgramsQCOM
#define glExtIsProgramBinaryQCOM _glew_gles_glExtIsProgramBinaryQCOM
#define glExtGetProgramBinarySourceQCOM _glew_gles_glExtGetProgramBinarySourceQCOM
#define glFramebufferFoveationConfigQCOM _glew_gles_glFramebufferFoveationConfigQCOM
#define glFramebufferFoveationParametersQCOM _glew_gles_glFramebufferFoveationParametersQCOM
#define glTexEstimateMotionQCOM _glew_gles_glTexEstimateMotionQCOM
#define glTexEstimateMotionRegionsQCOM _glew_gles_glTexEstimateMotionRegionsQCOM
#define glExtrapolateTex2DQCOM _glew_gles_glExtrapolateTex2DQCOM
#define glTextureFoveationParametersQCOM _glew_gles_glTextureFoveationParametersQCOM
#define glFramebufferFetchBarrierQCOM _glew_gles_glFramebufferFetchBarrierQCOM
#define glShadingRateQCOM _glew_gles_glShadingRateQCOM
#define glStartTilingQCOM _glew_gles_glStartTilingQCOM
#define glEndTilingQCOM _glew_gles_glEndTilingQCOM

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

#endif // __GLEW_GLES_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
