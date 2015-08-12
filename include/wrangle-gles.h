////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLES_H__
#define __GLEW_GLES_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GLES3/gl3.h>

#include <GLES3/gl31.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{
  class gles
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    enum FeatureSet
    {
      // Features
      GLEW_GL_VERSION_ES_CM_1_0,
      GLEW_GL_ES_VERSION_2_0,
      GLEW_GL_ES_VERSION_3_0,
      GLEW_GL_ES_VERSION_3_1,
      // Extensions
      GLEW_GL_AMD_compressed_3DC_texture,
      GLEW_GL_AMD_compressed_ATC_texture,
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
      GLEW_GL_APPLE_texture_2D_limited_npot,
      GLEW_GL_APPLE_texture_format_BGRA8888,
      GLEW_GL_APPLE_texture_max_level,
      GLEW_GL_APPLE_texture_packed_float,
      GLEW_GL_ARM_mali_program_binary,
      GLEW_GL_ARM_mali_shader_binary,
      GLEW_GL_ARM_rgba8,
      GLEW_GL_ARM_shader_framebuffer_fetch,
      GLEW_GL_ARM_shader_framebuffer_fetch_depth_stencil,
      GLEW_GL_DMP_program_binary,
      GLEW_GL_DMP_shader_binary,
      GLEW_GL_EXT_base_instance,
      GLEW_GL_EXT_blend_minmax,
      GLEW_GL_EXT_buffer_storage,
      GLEW_GL_EXT_color_buffer_half_float,
      GLEW_GL_EXT_copy_image,
      GLEW_GL_EXT_debug_label,
      GLEW_GL_EXT_debug_marker,
      GLEW_GL_EXT_discard_framebuffer,
      GLEW_GL_EXT_disjoint_timer_query,
      GLEW_GL_EXT_draw_buffers,
      GLEW_GL_EXT_draw_buffers_indexed,
      GLEW_GL_EXT_draw_elements_base_vertex,
      GLEW_GL_EXT_draw_instanced,
      GLEW_GL_EXT_float_blend,
      GLEW_GL_EXT_geometry_point_size,
      GLEW_GL_EXT_geometry_shader,
      GLEW_GL_EXT_gpu_shader5,
      GLEW_GL_EXT_instanced_arrays,
      GLEW_GL_EXT_map_buffer_range,
      GLEW_GL_EXT_multi_draw_arrays,
      GLEW_GL_EXT_multi_draw_indirect,
      GLEW_GL_EXT_multisampled_render_to_texture,
      GLEW_GL_EXT_multiview_draw_buffers,
      GLEW_GL_EXT_occlusion_query_boolean,
      GLEW_GL_EXT_post_depth_coverage,
      GLEW_GL_EXT_primitive_bounding_box,
      GLEW_GL_EXT_pvrtc_sRGB,
      GLEW_GL_EXT_raster_multisample,
      GLEW_GL_EXT_read_format_bgra,
      GLEW_GL_EXT_render_snorm,
      GLEW_GL_EXT_robustness,
      GLEW_GL_EXT_sRGB,
      GLEW_GL_EXT_sRGB_write_control,
      GLEW_GL_EXT_separate_shader_objects,
      GLEW_GL_EXT_shader_framebuffer_fetch,
      GLEW_GL_EXT_shader_implicit_conversions,
      GLEW_GL_EXT_shader_integer_mix,
      GLEW_GL_EXT_shader_io_blocks,
      GLEW_GL_EXT_shader_pixel_local_storage,
      GLEW_GL_EXT_shader_texture_lod,
      GLEW_GL_EXT_shadow_samplers,
      GLEW_GL_EXT_sparse_texture,
      GLEW_GL_EXT_tessellation_point_size,
      GLEW_GL_EXT_tessellation_shader,
      GLEW_GL_EXT_texture_border_clamp,
      GLEW_GL_EXT_texture_buffer,
      GLEW_GL_EXT_texture_compression_dxt1,
      GLEW_GL_EXT_texture_compression_s3tc,
      GLEW_GL_EXT_texture_cube_map_array,
      GLEW_GL_EXT_texture_filter_anisotropic,
      GLEW_GL_EXT_texture_filter_minmax,
      GLEW_GL_EXT_texture_format_BGRA8888,
      GLEW_GL_EXT_texture_lod_bias,
      GLEW_GL_EXT_texture_norm16,
      GLEW_GL_EXT_texture_rg,
      GLEW_GL_EXT_texture_sRGB_decode,
      GLEW_GL_EXT_texture_sRGB_R8,
      GLEW_GL_EXT_texture_sRGB_RG8,
      GLEW_GL_EXT_texture_storage,
      GLEW_GL_EXT_texture_type_2_10_10_10_REV,
      GLEW_GL_EXT_texture_view,
      GLEW_GL_EXT_unpack_subimage,
      GLEW_GL_EXT_YUV_target,
      GLEW_GL_FJ_shader_binary_GCCSO,
      GLEW_GL_IMG_multisampled_render_to_texture,
      GLEW_GL_IMG_program_binary,
      GLEW_GL_IMG_read_format,
      GLEW_GL_IMG_shader_binary,
      GLEW_GL_IMG_texture_compression_pvrtc,
      GLEW_GL_IMG_texture_compression_pvrtc2,
      GLEW_GL_IMG_texture_env_enhanced_fixed_function,
      GLEW_GL_IMG_user_clip_plane,
      GLEW_GL_INTEL_performance_query,
      GLEW_GL_KHR_blend_equation_advanced,
      GLEW_GL_KHR_blend_equation_advanced_coherent,
      GLEW_GL_KHR_context_flush_control,
      GLEW_GL_KHR_debug,
      GLEW_GL_KHR_no_error,
      GLEW_GL_KHR_robust_buffer_access_behavior,
      GLEW_GL_KHR_robustness,
      GLEW_GL_KHR_texture_compression_astc_hdr,
      GLEW_GL_KHR_texture_compression_astc_ldr,
      GLEW_GL_NV_bindless_texture,
      GLEW_GL_NV_blend_equation_advanced,
      GLEW_GL_NV_blend_equation_advanced_coherent,
      GLEW_GL_NV_conditional_render,
      GLEW_GL_NV_conservative_raster,
      GLEW_GL_NV_copy_buffer,
      GLEW_GL_NV_coverage_sample,
      GLEW_GL_NV_depth_nonlinear,
      GLEW_GL_NV_draw_buffers,
      GLEW_GL_NV_draw_instanced,
      GLEW_GL_NV_explicit_attrib_location,
      GLEW_GL_NV_fbo_color_attachments,
      GLEW_GL_NV_fence,
      GLEW_GL_NV_fill_rectangle,
      GLEW_GL_NV_fragment_coverage_to_color,
      GLEW_GL_NV_fragment_shader_interlock,
      GLEW_GL_NV_framebuffer_blit,
      GLEW_GL_NV_framebuffer_mixed_samples,
      GLEW_GL_NV_framebuffer_multisample,
      GLEW_GL_NV_generate_mipmap_sRGB,
      GLEW_GL_NV_geometry_shader_passthrough,
      GLEW_GL_NV_image_formats,
      GLEW_GL_NV_instanced_arrays,
      GLEW_GL_NV_internalformat_sample_query,
      GLEW_GL_NV_non_square_matrices,
      GLEW_GL_NV_path_rendering,
      GLEW_GL_NV_polygon_mode,
      GLEW_GL_NV_read_buffer,
      GLEW_GL_NV_read_buffer_front,
      GLEW_GL_NV_read_depth,
      GLEW_GL_NV_read_depth_stencil,
      GLEW_GL_NV_read_stencil,
      GLEW_GL_NV_path_rendering_shared_edge,
      GLEW_GL_NV_sRGB_formats,
      GLEW_GL_NV_sample_locations,
      GLEW_GL_NV_sample_mask_override_coverage,
      GLEW_GL_NV_shader_noperspective_interpolation,
      GLEW_GL_NV_shadow_samplers_array,
      GLEW_GL_NV_shadow_samplers_cube,
      GLEW_GL_NV_texture_border_clamp,
      GLEW_GL_NV_texture_compression_s3tc_update,
      GLEW_GL_NV_texture_npot_2D_mipmap,
      GLEW_GL_NV_viewport_array,
      GLEW_GL_NV_viewport_array2,
      GLEW_GL_OES_EGL_image,
      GLEW_GL_OES_EGL_image_external,
      GLEW_GL_OES_EGL_image_external_essl3,
      GLEW_GL_OES_blend_equation_separate,
      GLEW_GL_OES_blend_func_separate,
      GLEW_GL_OES_blend_subtract,
      GLEW_GL_OES_byte_coordinates,
      GLEW_GL_OES_compressed_ETC1_RGB8_sub_texture,
      GLEW_GL_OES_compressed_ETC1_RGB8_texture,
      GLEW_GL_OES_compressed_paletted_texture,
      GLEW_GL_OES_copy_image,
      GLEW_GL_OES_depth24,
      GLEW_GL_OES_depth32,
      GLEW_GL_OES_depth_texture,
      GLEW_GL_OES_draw_buffers_indexed,
      GLEW_GL_OES_draw_elements_base_vertex,
      GLEW_GL_OES_draw_texture,
      GLEW_GL_OES_element_index_uint,
      GLEW_GL_OES_extended_matrix_palette,
      GLEW_GL_OES_fbo_render_mipmap,
      GLEW_GL_OES_fixed_point,
      GLEW_GL_OES_fragment_precision_high,
      GLEW_GL_OES_framebuffer_object,
      GLEW_GL_OES_geometry_shader,
      GLEW_GL_OES_geometry_point_size,
      GLEW_GL_OES_get_program_binary,
      GLEW_GL_OES_gpu_shader5,
      GLEW_GL_OES_mapbuffer,
      GLEW_GL_OES_matrix_get,
      GLEW_GL_OES_matrix_palette,
      GLEW_GL_OES_packed_depth_stencil,
      GLEW_GL_OES_point_size_array,
      GLEW_GL_OES_point_sprite,
      GLEW_GL_OES_primitive_bounding_box,
      GLEW_GL_OES_query_matrix,
      GLEW_GL_OES_read_format,
      GLEW_GL_OES_required_internalformat,
      GLEW_GL_OES_rgb8_rgba8,
      GLEW_GL_OES_sample_shading,
      GLEW_GL_OES_sample_variables,
      GLEW_GL_OES_shader_image_atomic,
      GLEW_GL_OES_shader_io_blocks,
      GLEW_GL_OES_shader_multisample_interpolation,
      GLEW_GL_OES_single_precision,
      GLEW_GL_OES_standard_derivatives,
      GLEW_GL_OES_stencil1,
      GLEW_GL_OES_stencil4,
      GLEW_GL_OES_stencil8,
      GLEW_GL_OES_stencil_wrap,
      GLEW_GL_OES_surfaceless_context,
      GLEW_GL_OES_tessellation_shader,
      GLEW_GL_OES_tessellation_point_size,
      GLEW_GL_OES_texture_3D,
      GLEW_GL_OES_texture_border_clamp,
      GLEW_GL_OES_texture_buffer,
      GLEW_GL_OES_texture_compression_astc,
      GLEW_GL_OES_texture_cube_map,
      GLEW_GL_OES_texture_cube_map_array,
      GLEW_GL_OES_texture_env_crossbar,
      GLEW_GL_OES_texture_float,
      GLEW_GL_OES_texture_float_linear,
      GLEW_GL_OES_texture_half_float,
      GLEW_GL_OES_texture_half_float_linear,
      GLEW_GL_OES_texture_mirrored_repeat,
      GLEW_GL_OES_texture_npot,
      GLEW_GL_OES_texture_stencil8,
      GLEW_GL_OES_texture_storage_multisample_2d_array,
      GLEW_GL_OES_texture_view,
      GLEW_GL_OES_vertex_array_object,
      GLEW_GL_OES_vertex_half_float,
      GLEW_GL_OES_vertex_type_10_10_10_2,
      GLEW_GL_OVR_multiview,
      GLEW_GL_OVR_multiview2,
      GLEW_GL_QCOM_alpha_test,
      GLEW_GL_QCOM_binning_control,
      GLEW_GL_QCOM_driver_control,
      GLEW_GL_QCOM_extended_get,
      GLEW_GL_QCOM_extended_get2,
      GLEW_GL_QCOM_perfmon_global_mode,
      GLEW_GL_QCOM_tiled_rendering,
      GLEW_GL_QCOM_writeonly_rendering,
      GLEW_GL_VIV_shader_binary,
      GLEW_GL_FeatureSetCount
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::gles::FeatureSet::GLEW_GL_FeatureSetCount];

    public:

      bool IsSupported (glew::gles::FeatureSet feature);
      bool IsSupported (const char *feature);

      // GL_VERSION_ES_CM_1_0
      PFNGLALPHAFUNCPROC glAlphaFunc;
      PFNGLCLEARCOLORPROC glClearColor;
      PFNGLCLEARDEPTHFPROC glClearDepthf;
      PFNGLCLIPPLANEFPROC glClipPlanef;
      PFNGLCOLOR4FPROC glColor4f;
      PFNGLDEPTHRANGEFPROC glDepthRangef;
      PFNGLFOGFPROC glFogf;
      PFNGLFOGFVPROC glFogfv;
      PFNGLFRUSTUMFPROC glFrustumf;
      PFNGLGETCLIPPLANEFPROC glGetClipPlanef;
      PFNGLGETFLOATVPROC glGetFloatv;
      PFNGLGETLIGHTFVPROC glGetLightfv;
      PFNGLGETMATERIALFVPROC glGetMaterialfv;
      PFNGLGETTEXENVFVPROC glGetTexEnvfv;
      PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv;
      PFNGLLIGHTMODELFPROC glLightModelf;
      PFNGLLIGHTMODELFVPROC glLightModelfv;
      PFNGLLIGHTFPROC glLightf;
      PFNGLLIGHTFVPROC glLightfv;
      PFNGLLINEWIDTHPROC glLineWidth;
      PFNGLLOADMATRIXFPROC glLoadMatrixf;
      PFNGLMATERIALFPROC glMaterialf;
      PFNGLMATERIALFVPROC glMaterialfv;
      PFNGLMULTMATRIXFPROC glMultMatrixf;
      PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;
      PFNGLNORMAL3FPROC glNormal3f;
      PFNGLORTHOFPROC glOrthof;
      PFNGLPOINTPARAMETERFPROC glPointParameterf;
      PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
      PFNGLPOINTSIZEPROC glPointSize;
      PFNGLPOLYGONOFFSETPROC glPolygonOffset;
      PFNGLROTATEFPROC glRotatef;
      PFNGLSCALEFPROC glScalef;
      PFNGLTEXENVFPROC glTexEnvf;
      PFNGLTEXENVFVPROC glTexEnvfv;
      PFNGLTEXPARAMETERFPROC glTexParameterf;
      PFNGLTEXPARAMETERFVPROC glTexParameterfv;
      PFNGLTRANSLATEFPROC glTranslatef;
      PFNGLACTIVETEXTUREPROC glActiveTexture;
      PFNGLALPHAFUNCXPROC glAlphaFuncx;
      PFNGLBINDBUFFERPROC glBindBuffer;
      PFNGLBINDTEXTUREPROC glBindTexture;
      PFNGLBLENDFUNCPROC glBlendFunc;
      PFNGLBUFFERDATAPROC glBufferData;
      PFNGLBUFFERSUBDATAPROC glBufferSubData;
      PFNGLCLEARPROC glClear;
      PFNGLCLEARCOLORXPROC glClearColorx;
      PFNGLCLEARDEPTHXPROC glClearDepthx;
      PFNGLCLEARSTENCILPROC glClearStencil;
      PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
      PFNGLCLIPPLANEXPROC glClipPlanex;
      PFNGLCOLOR4UBPROC glColor4ub;
      PFNGLCOLOR4XPROC glColor4x;
      PFNGLCOLORMASKPROC glColorMask;
      PFNGLCOLORPOINTERPROC glColorPointer;
      PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
      PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
      PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D;
      PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D;
      PFNGLCULLFACEPROC glCullFace;
      PFNGLDELETEBUFFERSPROC glDeleteBuffers;
      PFNGLDELETETEXTURESPROC glDeleteTextures;
      PFNGLDEPTHFUNCPROC glDepthFunc;
      PFNGLDEPTHMASKPROC glDepthMask;
      PFNGLDEPTHRANGEXPROC glDepthRangex;
      PFNGLDISABLEPROC glDisable;
      PFNGLDISABLECLIENTSTATEPROC glDisableClientState;
      PFNGLDRAWARRAYSPROC glDrawArrays;
      PFNGLDRAWELEMENTSPROC glDrawElements;
      PFNGLENABLEPROC glEnable;
      PFNGLENABLECLIENTSTATEPROC glEnableClientState;
      PFNGLFINISHPROC glFinish;
      PFNGLFLUSHPROC glFlush;
      PFNGLFOGXPROC glFogx;
      PFNGLFOGXVPROC glFogxv;
      PFNGLFRONTFACEPROC glFrontFace;
      PFNGLFRUSTUMXPROC glFrustumx;
      PFNGLGETBOOLEANVPROC glGetBooleanv;
      PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
      PFNGLGETCLIPPLANEXPROC glGetClipPlanex;
      PFNGLGENBUFFERSPROC glGenBuffers;
      PFNGLGENTEXTURESPROC glGenTextures;
      PFNGLGETERRORPROC glGetError;
      PFNGLGETFIXEDVPROC glGetFixedv;
      PFNGLGETINTEGERVPROC glGetIntegerv;
      PFNGLGETLIGHTXVPROC glGetLightxv;
      PFNGLGETMATERIALXVPROC glGetMaterialxv;
      PFNGLGETPOINTERVPROC glGetPointerv;
      PFNGLGETSTRINGPROC glGetString;
      PFNGLGETTEXENVIVPROC glGetTexEnviv;
      PFNGLGETTEXENVXVPROC glGetTexEnvxv;
      PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv;
      PFNGLGETTEXPARAMETERXVPROC glGetTexParameterxv;
      PFNGLHINTPROC glHint;
      PFNGLISBUFFERPROC glIsBuffer;
      PFNGLISENABLEDPROC glIsEnabled;
      PFNGLISTEXTUREPROC glIsTexture;
      PFNGLLIGHTMODELXPROC glLightModelx;
      PFNGLLIGHTMODELXVPROC glLightModelxv;
      PFNGLLIGHTXPROC glLightx;
      PFNGLLIGHTXVPROC glLightxv;
      PFNGLLINEWIDTHXPROC glLineWidthx;
      PFNGLLOADIDENTITYPROC glLoadIdentity;
      PFNGLLOADMATRIXXPROC glLoadMatrixx;
      PFNGLLOGICOPPROC glLogicOp;
      PFNGLMATERIALXPROC glMaterialx;
      PFNGLMATERIALXVPROC glMaterialxv;
      PFNGLMATRIXMODEPROC glMatrixMode;
      PFNGLMULTMATRIXXPROC glMultMatrixx;
      PFNGLMULTITEXCOORD4XPROC glMultiTexCoord4x;
      PFNGLNORMAL3XPROC glNormal3x;
      PFNGLNORMALPOINTERPROC glNormalPointer;
      PFNGLORTHOXPROC glOrthox;
      PFNGLPIXELSTOREIPROC glPixelStorei;
      PFNGLPOINTPARAMETERXPROC glPointParameterx;
      PFNGLPOINTPARAMETERXVPROC glPointParameterxv;
      PFNGLPOINTSIZEXPROC glPointSizex;
      PFNGLPOLYGONOFFSETXPROC glPolygonOffsetx;
      PFNGLPOPMATRIXPROC glPopMatrix;
      PFNGLPUSHMATRIXPROC glPushMatrix;
      PFNGLREADPIXELSPROC glReadPixels;
      PFNGLROTATEXPROC glRotatex;
      PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
      PFNGLSAMPLECOVERAGEXPROC glSampleCoveragex;
      PFNGLSCALEXPROC glScalex;
      PFNGLSCISSORPROC glScissor;
      PFNGLSHADEMODELPROC glShadeModel;
      PFNGLSTENCILFUNCPROC glStencilFunc;
      PFNGLSTENCILMASKPROC glStencilMask;
      PFNGLSTENCILOPPROC glStencilOp;
      PFNGLTEXCOORDPOINTERPROC glTexCoordPointer;
      PFNGLTEXENVIPROC glTexEnvi;
      PFNGLTEXENVXPROC glTexEnvx;
      PFNGLTEXENVIVPROC glTexEnviv;
      PFNGLTEXENVXVPROC glTexEnvxv;
      PFNGLTEXIMAGE2DPROC glTexImage2D;
      PFNGLTEXPARAMETERIPROC glTexParameteri;
      PFNGLTEXPARAMETERXPROC glTexParameterx;
      PFNGLTEXPARAMETERIVPROC glTexParameteriv;
      PFNGLTEXPARAMETERXVPROC glTexParameterxv;
      PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D;
      PFNGLTRANSLATEXPROC glTranslatex;
      PFNGLVERTEXPOINTERPROC glVertexPointer;
      PFNGLVIEWPORTPROC glViewport;

      // GL_ES_VERSION_2_0
      PFNGLACTIVETEXTUREPROC glActiveTexture;
      PFNGLATTACHSHADERPROC glAttachShader;
      PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
      PFNGLBINDBUFFERPROC glBindBuffer;
      PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
      PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
      PFNGLBINDTEXTUREPROC glBindTexture;
      PFNGLBLENDCOLORPROC glBlendColor;
      PFNGLBLENDEQUATIONPROC glBlendEquation;
      PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
      PFNGLBLENDFUNCPROC glBlendFunc;
      PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
      PFNGLBUFFERDATAPROC glBufferData;
      PFNGLBUFFERSUBDATAPROC glBufferSubData;
      PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
      PFNGLCLEARPROC glClear;
      PFNGLCLEARCOLORPROC glClearColor;
      PFNGLCLEARDEPTHFPROC glClearDepthf;
      PFNGLCLEARSTENCILPROC glClearStencil;
      PFNGLCOLORMASKPROC glColorMask;
      PFNGLCOMPILESHADERPROC glCompileShader;
      PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
      PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
      PFNGLCOPYTEXIMAGE2DPROC glCopyTexImage2D;
      PFNGLCOPYTEXSUBIMAGE2DPROC glCopyTexSubImage2D;
      PFNGLCREATEPROGRAMPROC glCreateProgram;
      PFNGLCREATESHADERPROC glCreateShader;
      PFNGLCULLFACEPROC glCullFace;
      PFNGLDELETEBUFFERSPROC glDeleteBuffers;
      PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
      PFNGLDELETEPROGRAMPROC glDeleteProgram;
      PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
      PFNGLDELETESHADERPROC glDeleteShader;
      PFNGLDELETETEXTURESPROC glDeleteTextures;
      PFNGLDEPTHFUNCPROC glDepthFunc;
      PFNGLDEPTHMASKPROC glDepthMask;
      PFNGLDEPTHRANGEFPROC glDepthRangef;
      PFNGLDETACHSHADERPROC glDetachShader;
      PFNGLDISABLEPROC glDisable;
      PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
      PFNGLDRAWARRAYSPROC glDrawArrays;
      PFNGLDRAWELEMENTSPROC glDrawElements;
      PFNGLENABLEPROC glEnable;
      PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
      PFNGLFINISHPROC glFinish;
      PFNGLFLUSHPROC glFlush;
      PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
      PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
      PFNGLFRONTFACEPROC glFrontFace;
      PFNGLGENBUFFERSPROC glGenBuffers;
      PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
      PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
      PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
      PFNGLGENTEXTURESPROC glGenTextures;
      PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
      PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
      PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
      PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
      PFNGLGETBOOLEANVPROC glGetBooleanv;
      PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
      PFNGLGETERRORPROC glGetError;
      PFNGLGETFLOATVPROC glGetFloatv;
      PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
      PFNGLGETINTEGERVPROC glGetIntegerv;
      PFNGLGETPROGRAMIVPROC glGetProgramiv;
      PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
      PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
      PFNGLGETSHADERIVPROC glGetShaderiv;
      PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
      PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
      PFNGLGETSHADERSOURCEPROC glGetShaderSource;
      PFNGLGETSTRINGPROC glGetString;
      PFNGLGETTEXPARAMETERFVPROC glGetTexParameterfv;
      PFNGLGETTEXPARAMETERIVPROC glGetTexParameteriv;
      PFNGLGETUNIFORMFVPROC glGetUniformfv;
      PFNGLGETUNIFORMIVPROC glGetUniformiv;
      PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
      PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
      PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
      PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
      PFNGLHINTPROC glHint;
      PFNGLISBUFFERPROC glIsBuffer;
      PFNGLISENABLEDPROC glIsEnabled;
      PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
      PFNGLISPROGRAMPROC glIsProgram;
      PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
      PFNGLISSHADERPROC glIsShader;
      PFNGLISTEXTUREPROC glIsTexture;
      PFNGLLINEWIDTHPROC glLineWidth;
      PFNGLLINKPROGRAMPROC glLinkProgram;
      PFNGLPIXELSTOREIPROC glPixelStorei;
      PFNGLPOLYGONOFFSETPROC glPolygonOffset;
      PFNGLREADPIXELSPROC glReadPixels;
      PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
      PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
      PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
      PFNGLSCISSORPROC glScissor;
      PFNGLSHADERBINARYPROC glShaderBinary;
      PFNGLSHADERSOURCEPROC glShaderSource;
      PFNGLSTENCILFUNCPROC glStencilFunc;
      PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
      PFNGLSTENCILMASKPROC glStencilMask;
      PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
      PFNGLSTENCILOPPROC glStencilOp;
      PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
      PFNGLTEXIMAGE2DPROC glTexImage2D;
      PFNGLTEXPARAMETERFPROC glTexParameterf;
      PFNGLTEXPARAMETERFVPROC glTexParameterfv;
      PFNGLTEXPARAMETERIPROC glTexParameteri;
      PFNGLTEXPARAMETERIVPROC glTexParameteriv;
      PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D;
      PFNGLUNIFORM1FPROC glUniform1f;
      PFNGLUNIFORM1FVPROC glUniform1fv;
      PFNGLUNIFORM1IPROC glUniform1i;
      PFNGLUNIFORM1IVPROC glUniform1iv;
      PFNGLUNIFORM2FPROC glUniform2f;
      PFNGLUNIFORM2FVPROC glUniform2fv;
      PFNGLUNIFORM2IPROC glUniform2i;
      PFNGLUNIFORM2IVPROC glUniform2iv;
      PFNGLUNIFORM3FPROC glUniform3f;
      PFNGLUNIFORM3FVPROC glUniform3fv;
      PFNGLUNIFORM3IPROC glUniform3i;
      PFNGLUNIFORM3IVPROC glUniform3iv;
      PFNGLUNIFORM4FPROC glUniform4f;
      PFNGLUNIFORM4FVPROC glUniform4fv;
      PFNGLUNIFORM4IPROC glUniform4i;
      PFNGLUNIFORM4IVPROC glUniform4iv;
      PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
      PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
      PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
      PFNGLUSEPROGRAMPROC glUseProgram;
      PFNGLVALIDATEPROGRAMPROC glValidateProgram;
      PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
      PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
      PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
      PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
      PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
      PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
      PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
      PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
      PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
      PFNGLVIEWPORTPROC glViewport;

      // GL_ES_VERSION_3_0
      PFNGLREADBUFFERPROC glReadBuffer;
      PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
      PFNGLTEXIMAGE3DPROC glTexImage3D;
      PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
      PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
      PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
      PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
      PFNGLGENQUERIESPROC glGenQueries;
      PFNGLDELETEQUERIESPROC glDeleteQueries;
      PFNGLISQUERYPROC glIsQuery;
      PFNGLBEGINQUERYPROC glBeginQuery;
      PFNGLENDQUERYPROC glEndQuery;
      PFNGLGETQUERYIVPROC glGetQueryiv;
      PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
      PFNGLUNMAPBUFFERPROC glUnmapBuffer;
      PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
      PFNGLDRAWBUFFERSPROC glDrawBuffers;
      PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
      PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
      PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
      PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
      PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
      PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
      PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;
      PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;
      PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
      PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;
      PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
      PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
      PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
      PFNGLISVERTEXARRAYPROC glIsVertexArray;
      PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
      PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
      PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
      PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
      PFNGLBINDBUFFERBASEPROC glBindBufferBase;
      PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
      PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
      PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
      PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
      PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
      PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
      PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
      PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
      PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
      PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
      PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
      PFNGLUNIFORM1UIPROC glUniform1ui;
      PFNGLUNIFORM2UIPROC glUniform2ui;
      PFNGLUNIFORM3UIPROC glUniform3ui;
      PFNGLUNIFORM4UIPROC glUniform4ui;
      PFNGLUNIFORM1UIVPROC glUniform1uiv;
      PFNGLUNIFORM2UIVPROC glUniform2uiv;
      PFNGLUNIFORM3UIVPROC glUniform3uiv;
      PFNGLUNIFORM4UIVPROC glUniform4uiv;
      PFNGLCLEARBUFFERIVPROC glClearBufferiv;
      PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
      PFNGLCLEARBUFFERFVPROC glClearBufferfv;
      PFNGLCLEARBUFFERFIPROC glClearBufferfi;
      PFNGLGETSTRINGIPROC glGetStringi;
      PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;
      PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
      PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
      PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
      PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
      PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
      PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
      PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
      PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
      PFNGLFENCESYNCPROC glFenceSync;
      PFNGLISSYNCPROC glIsSync;
      PFNGLDELETESYNCPROC glDeleteSync;
      PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
      PFNGLWAITSYNCPROC glWaitSync;
      PFNGLGETINTEGER64VPROC glGetInteger64v;
      PFNGLGETSYNCIVPROC glGetSynciv;
      PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;
      PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
      PFNGLGENSAMPLERSPROC glGenSamplers;
      PFNGLDELETESAMPLERSPROC glDeleteSamplers;
      PFNGLISSAMPLERPROC glIsSampler;
      PFNGLBINDSAMPLERPROC glBindSampler;
      PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
      PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;
      PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
      PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
      PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
      PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
      PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
      PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
      PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
      PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
      PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
      PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
      PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
      PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
      PFNGLPROGRAMBINARYPROC glProgramBinary;
      PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;
      PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer;
      PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer;
      PFNGLTEXSTORAGE2DPROC glTexStorage2D;
      PFNGLTEXSTORAGE3DPROC glTexStorage3D;
      PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ;

      // GL_ES_VERSION_3_1
      PFNGLDISPATCHCOMPUTEPROC glDispatchCompute;
      PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect;
      PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
      PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;
      PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri;
      PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv;
      PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv;
      PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex;
      PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName;
      PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv;
      PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation;
      PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
      PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
      PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
      PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
      PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
      PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
      PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
      PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
      PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
      PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
      PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
      PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
      PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
      PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
      PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
      PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
      PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
      PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
      PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
      PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
      PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
      PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
      PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
      PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
      PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
      PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
      PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
      PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
      PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
      PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
      PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
      PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
      PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
      PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
      PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
      PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;
      PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;
      PFNGLBINDIMAGETEXTUREPROC glBindImageTexture;
      PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
      PFNGLMEMORYBARRIERPROC glMemoryBarrier;
      PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion;
      PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample;
      PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
      PFNGLSAMPLEMASKIPROC glSampleMaski;
      PFNGLGETTEXLEVELPARAMETERIVPROC glGetTexLevelParameteriv;
      PFNGLGETTEXLEVELPARAMETERFVPROC glGetTexLevelParameterfv;
      PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
      PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
      PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
      PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
      PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;

      // GL_AMD_performance_monitor
      PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD;
      PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD;
      PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD;
      PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
      PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD;
      PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD;
      PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD;
      PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD;
      PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD;
      PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD;
      PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD;

      // GL_ANGLE_framebuffer_blit
      PFNGLBLITFRAMEBUFFERANGLEPROC glBlitFramebufferANGLE;

      // GL_ANGLE_framebuffer_multisample
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC glRenderbufferStorageMultisampleANGLE;

      // GL_ANGLE_instanced_arrays
      PFNGLDRAWARRAYSINSTANCEDANGLEPROC glDrawArraysInstancedANGLE;
      PFNGLDRAWELEMENTSINSTANCEDANGLEPROC glDrawElementsInstancedANGLE;
      PFNGLVERTEXATTRIBDIVISORANGLEPROC glVertexAttribDivisorANGLE;

      // GL_ANGLE_translated_shader_source
      PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC glGetTranslatedShaderSourceANGLE;

      // GL_APPLE_copy_texture_levels
      PFNGLCOPYTEXTURELEVELSAPPLEPROC glCopyTextureLevelsAPPLE;

      // GL_APPLE_framebuffer_multisample
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC glRenderbufferStorageMultisampleAPPLE;
      PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC glResolveMultisampleFramebufferAPPLE;

      // GL_APPLE_sync
      PFNGLFENCESYNCAPPLEPROC glFenceSyncAPPLE;
      PFNGLISSYNCAPPLEPROC glIsSyncAPPLE;
      PFNGLDELETESYNCAPPLEPROC glDeleteSyncAPPLE;
      PFNGLCLIENTWAITSYNCAPPLEPROC glClientWaitSyncAPPLE;
      PFNGLWAITSYNCAPPLEPROC glWaitSyncAPPLE;
      PFNGLGETINTEGER64VAPPLEPROC glGetInteger64vAPPLE;
      PFNGLGETSYNCIVAPPLEPROC glGetSyncivAPPLE;

      // GL_EXT_base_instance
      PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC glDrawArraysInstancedBaseInstanceEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC glDrawElementsInstancedBaseInstanceEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC glDrawElementsInstancedBaseVertexBaseInstanceEXT;

      // GL_EXT_blend_minmax
      PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT;

      // GL_EXT_buffer_storage
      PFNGLBUFFERSTORAGEEXTPROC glBufferStorageEXT;

      // GL_EXT_copy_image
      PFNGLCOPYIMAGESUBDATAEXTPROC glCopyImageSubDataEXT;

      // GL_EXT_debug_label
      PFNGLLABELOBJECTEXTPROC glLabelObjectEXT;
      PFNGLGETOBJECTLABELEXTPROC glGetObjectLabelEXT;

      // GL_EXT_debug_marker
      PFNGLINSERTEVENTMARKEREXTPROC glInsertEventMarkerEXT;
      PFNGLPUSHGROUPMARKEREXTPROC glPushGroupMarkerEXT;
      PFNGLPOPGROUPMARKEREXTPROC glPopGroupMarkerEXT;

      // GL_EXT_discard_framebuffer
      PFNGLDISCARDFRAMEBUFFEREXTPROC glDiscardFramebufferEXT;

      // GL_EXT_disjoint_timer_query
      PFNGLGENQUERIESEXTPROC glGenQueriesEXT;
      PFNGLDELETEQUERIESEXTPROC glDeleteQueriesEXT;
      PFNGLISQUERYEXTPROC glIsQueryEXT;
      PFNGLBEGINQUERYEXTPROC glBeginQueryEXT;
      PFNGLENDQUERYEXTPROC glEndQueryEXT;
      PFNGLQUERYCOUNTEREXTPROC glQueryCounterEXT;
      PFNGLGETQUERYIVEXTPROC glGetQueryivEXT;
      PFNGLGETQUERYOBJECTIVEXTPROC glGetQueryObjectivEXT;
      PFNGLGETQUERYOBJECTUIVEXTPROC glGetQueryObjectuivEXT;
      PFNGLGETQUERYOBJECTI64VEXTPROC glGetQueryObjecti64vEXT;
      PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;

      // GL_EXT_draw_buffers
      PFNGLDRAWBUFFERSEXTPROC glDrawBuffersEXT;

      // GL_EXT_draw_buffers_indexed
      PFNGLENABLEIEXTPROC glEnableiEXT;
      PFNGLDISABLEIEXTPROC glDisableiEXT;
      PFNGLBLENDEQUATIONIEXTPROC glBlendEquationiEXT;
      PFNGLBLENDEQUATIONSEPARATEIEXTPROC glBlendEquationSeparateiEXT;
      PFNGLBLENDFUNCIEXTPROC glBlendFunciEXT;
      PFNGLBLENDFUNCSEPARATEIEXTPROC glBlendFuncSeparateiEXT;
      PFNGLCOLORMASKIEXTPROC glColorMaskiEXT;
      PFNGLISENABLEDIEXTPROC glIsEnablediEXT;

      // GL_EXT_draw_elements_base_vertex
      PFNGLDRAWELEMENTSBASEVERTEXEXTPROC glDrawElementsBaseVertexEXT;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC glDrawRangeElementsBaseVertexEXT;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC glDrawElementsInstancedBaseVertexEXT;
      PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC glMultiDrawElementsBaseVertexEXT;

      // GL_EXT_draw_instanced
      PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;
      PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;

      // GL_EXT_geometry_shader
      PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;

      // GL_EXT_instanced_arrays
      PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;
      PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;
      PFNGLVERTEXATTRIBDIVISOREXTPROC glVertexAttribDivisorEXT;

      // GL_EXT_map_buffer_range
      PFNGLMAPBUFFERRANGEEXTPROC glMapBufferRangeEXT;
      PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC glFlushMappedBufferRangeEXT;

      // GL_EXT_multi_draw_arrays
      PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;
      PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;

      // GL_EXT_multi_draw_indirect
      PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC glMultiDrawArraysIndirectEXT;
      PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC glMultiDrawElementsIndirectEXT;

      // GL_EXT_multisampled_render_to_texture
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glRenderbufferStorageMultisampleEXT;
      PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC glFramebufferTexture2DMultisampleEXT;

      // GL_EXT_multiview_draw_buffers
      PFNGLREADBUFFERINDEXEDEXTPROC glReadBufferIndexedEXT;
      PFNGLDRAWBUFFERSINDEXEDEXTPROC glDrawBuffersIndexedEXT;
      PFNGLGETINTEGERI_VEXTPROC glGetIntegeri_vEXT;

      // GL_EXT_occlusion_query_boolean
      PFNGLGENQUERIESEXTPROC glGenQueriesEXT;
      PFNGLDELETEQUERIESEXTPROC glDeleteQueriesEXT;
      PFNGLISQUERYEXTPROC glIsQueryEXT;
      PFNGLBEGINQUERYEXTPROC glBeginQueryEXT;
      PFNGLENDQUERYEXTPROC glEndQueryEXT;
      PFNGLGETQUERYIVEXTPROC glGetQueryivEXT;
      PFNGLGETQUERYOBJECTUIVEXTPROC glGetQueryObjectuivEXT;

      // GL_EXT_primitive_bounding_box
      PFNGLPRIMITIVEBOUNDINGBOXEXTPROC glPrimitiveBoundingBoxEXT;

      // GL_EXT_raster_multisample
      PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT;

      // GL_EXT_robustness
      PFNGLGETGRAPHICSRESETSTATUSEXTPROC glGetGraphicsResetStatusEXT;
      PFNGLREADNPIXELSEXTPROC glReadnPixelsEXT;
      PFNGLGETNUNIFORMFVEXTPROC glGetnUniformfvEXT;
      PFNGLGETNUNIFORMIVEXTPROC glGetnUniformivEXT;

      // GL_EXT_separate_shader_objects
      PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT;
      PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT;
      PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT;
      PFNGLACTIVESHADERPROGRAMEXTPROC glActiveShaderProgramEXT;
      PFNGLBINDPROGRAMPIPELINEEXTPROC glBindProgramPipelineEXT;
      PFNGLCREATESHADERPROGRAMVEXTPROC glCreateShaderProgramvEXT;
      PFNGLDELETEPROGRAMPIPELINESEXTPROC glDeleteProgramPipelinesEXT;
      PFNGLGENPROGRAMPIPELINESEXTPROC glGenProgramPipelinesEXT;
      PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC glGetProgramPipelineInfoLogEXT;
      PFNGLGETPROGRAMPIPELINEIVEXTPROC glGetProgramPipelineivEXT;
      PFNGLISPROGRAMPIPELINEEXTPROC glIsProgramPipelineEXT;
      PFNGLPROGRAMPARAMETERIEXTPROC glProgramParameteriEXT;
      PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT;
      PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT;
      PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT;
      PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT;
      PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT;
      PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT;
      PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT;
      PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT;
      PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT;
      PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT;
      PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT;
      PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT;
      PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT;
      PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT;
      PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT;
      PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT;
      PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;
      PFNGLUSEPROGRAMSTAGESEXTPROC glUseProgramStagesEXT;
      PFNGLVALIDATEPROGRAMPIPELINEEXTPROC glValidateProgramPipelineEXT;
      PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT;
      PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT;
      PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT;
      PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT;
      PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT;
      PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT;
      PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT;
      PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT;
      PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;

      // GL_EXT_sparse_texture
      PFNGLTEXPAGECOMMITMENTARBPROC glTexPageCommitmentARB;

      // GL_EXT_tessellation_shader
      PFNGLPATCHPARAMETERIEXTPROC glPatchParameteriEXT;

      // GL_EXT_texture_border_clamp
      PFNGLTEXPARAMETERIIVEXTPROC glTexParameterIivEXT;
      PFNGLTEXPARAMETERIUIVEXTPROC glTexParameterIuivEXT;
      PFNGLGETTEXPARAMETERIIVEXTPROC glGetTexParameterIivEXT;
      PFNGLGETTEXPARAMETERIUIVEXTPROC glGetTexParameterIuivEXT;
      PFNGLSAMPLERPARAMETERIIVEXTPROC glSamplerParameterIivEXT;
      PFNGLSAMPLERPARAMETERIUIVEXTPROC glSamplerParameterIuivEXT;
      PFNGLGETSAMPLERPARAMETERIIVEXTPROC glGetSamplerParameterIivEXT;
      PFNGLGETSAMPLERPARAMETERIUIVEXTPROC glGetSamplerParameterIuivEXT;

      // GL_EXT_texture_buffer
      PFNGLTEXBUFFEREXTPROC glTexBufferEXT;
      PFNGLTEXBUFFERRANGEEXTPROC glTexBufferRangeEXT;

      // GL_EXT_texture_filter_minmax
      PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT;

      // GL_EXT_texture_storage
      PFNGLTEXSTORAGE1DEXTPROC glTexStorage1DEXT;
      PFNGLTEXSTORAGE2DEXTPROC glTexStorage2DEXT;
      PFNGLTEXSTORAGE3DEXTPROC glTexStorage3DEXT;
      PFNGLTEXTURESTORAGE1DEXTPROC glTextureStorage1DEXT;
      PFNGLTEXTURESTORAGE2DEXTPROC glTextureStorage2DEXT;
      PFNGLTEXTURESTORAGE3DEXTPROC glTextureStorage3DEXT;

      // GL_EXT_texture_view
      PFNGLTEXTUREVIEWEXTPROC glTextureViewEXT;

      // GL_IMG_multisampled_render_to_texture
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC glRenderbufferStorageMultisampleIMG;
      PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC glFramebufferTexture2DMultisampleIMG;

      // GL_IMG_user_clip_plane
      PFNGLCLIPPLANEFIMGPROC glClipPlanefIMG;
      PFNGLCLIPPLANEXIMGPROC glClipPlanexIMG;

      // GL_INTEL_performance_query
      PFNGLBEGINPERFQUERYINTELPROC glBeginPerfQueryINTEL;
      PFNGLCREATEPERFQUERYINTELPROC glCreatePerfQueryINTEL;
      PFNGLDELETEPERFQUERYINTELPROC glDeletePerfQueryINTEL;
      PFNGLENDPERFQUERYINTELPROC glEndPerfQueryINTEL;
      PFNGLGETFIRSTPERFQUERYIDINTELPROC glGetFirstPerfQueryIdINTEL;
      PFNGLGETNEXTPERFQUERYIDINTELPROC glGetNextPerfQueryIdINTEL;
      PFNGLGETPERFCOUNTERINFOINTELPROC glGetPerfCounterInfoINTEL;
      PFNGLGETPERFQUERYDATAINTELPROC glGetPerfQueryDataINTEL;
      PFNGLGETPERFQUERYIDBYNAMEINTELPROC glGetPerfQueryIdByNameINTEL;
      PFNGLGETPERFQUERYINFOINTELPROC glGetPerfQueryInfoINTEL;

      // GL_KHR_blend_equation_advanced
      PFNGLBLENDBARRIERKHRPROC glBlendBarrierKHR;

      // GL_KHR_debug
      PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl;
      PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert;
      PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback;
      PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog;
      PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup;
      PFNGLPOPDEBUGGROUPPROC glPopDebugGroup;
      PFNGLOBJECTLABELPROC glObjectLabel;
      PFNGLGETOBJECTLABELPROC glGetObjectLabel;
      PFNGLOBJECTPTRLABELPROC glObjectPtrLabel;
      PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel;
      PFNGLGETPOINTERVPROC glGetPointerv;
      PFNGLDEBUGMESSAGECONTROLKHRPROC glDebugMessageControlKHR;
      PFNGLDEBUGMESSAGEINSERTKHRPROC glDebugMessageInsertKHR;
      PFNGLDEBUGMESSAGECALLBACKKHRPROC glDebugMessageCallbackKHR;
      PFNGLGETDEBUGMESSAGELOGKHRPROC glGetDebugMessageLogKHR;
      PFNGLPUSHDEBUGGROUPKHRPROC glPushDebugGroupKHR;
      PFNGLPOPDEBUGGROUPKHRPROC glPopDebugGroupKHR;
      PFNGLOBJECTLABELKHRPROC glObjectLabelKHR;
      PFNGLGETOBJECTLABELKHRPROC glGetObjectLabelKHR;
      PFNGLOBJECTPTRLABELKHRPROC glObjectPtrLabelKHR;
      PFNGLGETOBJECTPTRLABELKHRPROC glGetObjectPtrLabelKHR;
      PFNGLGETPOINTERVKHRPROC glGetPointervKHR;

      // GL_KHR_robustness
      PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus;
      PFNGLREADNPIXELSPROC glReadnPixels;
      PFNGLGETNUNIFORMFVPROC glGetnUniformfv;
      PFNGLGETNUNIFORMIVPROC glGetnUniformiv;
      PFNGLGETNUNIFORMUIVPROC glGetnUniformuiv;
      PFNGLGETGRAPHICSRESETSTATUSKHRPROC glGetGraphicsResetStatusKHR;
      PFNGLREADNPIXELSKHRPROC glReadnPixelsKHR;
      PFNGLGETNUNIFORMFVKHRPROC glGetnUniformfvKHR;
      PFNGLGETNUNIFORMIVKHRPROC glGetnUniformivKHR;
      PFNGLGETNUNIFORMUIVKHRPROC glGetnUniformuivKHR;

      // GL_NV_bindless_texture
      PFNGLGETTEXTUREHANDLENVPROC glGetTextureHandleNV;
      PFNGLGETTEXTURESAMPLERHANDLENVPROC glGetTextureSamplerHandleNV;
      PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glMakeTextureHandleResidentNV;
      PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glMakeTextureHandleNonResidentNV;
      PFNGLGETIMAGEHANDLENVPROC glGetImageHandleNV;
      PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glMakeImageHandleResidentNV;
      PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glMakeImageHandleNonResidentNV;
      PFNGLUNIFORMHANDLEUI64NVPROC glUniformHandleui64NV;
      PFNGLUNIFORMHANDLEUI64VNVPROC glUniformHandleui64vNV;
      PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glProgramUniformHandleui64NV;
      PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glProgramUniformHandleui64vNV;
      PFNGLISTEXTUREHANDLERESIDENTNVPROC glIsTextureHandleResidentNV;
      PFNGLISIMAGEHANDLERESIDENTNVPROC glIsImageHandleResidentNV;

      // GL_NV_blend_equation_advanced
      PFNGLBLENDPARAMETERINVPROC glBlendParameteriNV;
      PFNGLBLENDBARRIERNVPROC glBlendBarrierNV;

      // GL_NV_conditional_render
      PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
      PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV;

      // GL_NV_conservative_raster
      PFNGLSUBPIXELPRECISIONBIASNVPROC glSubpixelPrecisionBiasNV;

      // GL_NV_copy_buffer
      PFNGLCOPYBUFFERSUBDATANVPROC glCopyBufferSubDataNV;

      // GL_NV_coverage_sample
      PFNGLCOVERAGEMASKNVPROC glCoverageMaskNV;
      PFNGLCOVERAGEOPERATIONNVPROC glCoverageOperationNV;

      // GL_NV_draw_buffers
      PFNGLDRAWBUFFERSNVPROC glDrawBuffersNV;

      // GL_NV_draw_instanced
      PFNGLDRAWARRAYSINSTANCEDNVPROC glDrawArraysInstancedNV;
      PFNGLDRAWELEMENTSINSTANCEDNVPROC glDrawElementsInstancedNV;

      // GL_NV_fence
      PFNGLDELETEFENCESNVPROC glDeleteFencesNV;
      PFNGLGENFENCESNVPROC glGenFencesNV;
      PFNGLISFENCENVPROC glIsFenceNV;
      PFNGLTESTFENCENVPROC glTestFenceNV;
      PFNGLGETFENCEIVNVPROC glGetFenceivNV;
      PFNGLFINISHFENCENVPROC glFinishFenceNV;
      PFNGLSETFENCENVPROC glSetFenceNV;

      // GL_NV_fragment_coverage_to_color
      PFNGLFRAGMENTCOVERAGECOLORNVPROC glFragmentCoverageColorNV;

      // GL_NV_framebuffer_blit
      PFNGLBLITFRAMEBUFFERNVPROC glBlitFramebufferNV;

      // GL_NV_framebuffer_mixed_samples
      PFNGLRASTERSAMPLESEXTPROC glRasterSamplesEXT;
      PFNGLCOVERAGEMODULATIONTABLENVPROC glCoverageModulationTableNV;
      PFNGLGETCOVERAGEMODULATIONTABLENVPROC glGetCoverageModulationTableNV;
      PFNGLCOVERAGEMODULATIONNVPROC glCoverageModulationNV;

      // GL_NV_framebuffer_multisample
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC glRenderbufferStorageMultisampleNV;

      // GL_NV_instanced_arrays
      PFNGLVERTEXATTRIBDIVISORNVPROC glVertexAttribDivisorNV;

      // GL_NV_internalformat_sample_query
      PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glGetInternalformatSampleivNV;

      // GL_NV_non_square_matrices
      PFNGLUNIFORMMATRIX2X3FVNVPROC glUniformMatrix2x3fvNV;
      PFNGLUNIFORMMATRIX3X2FVNVPROC glUniformMatrix3x2fvNV;
      PFNGLUNIFORMMATRIX2X4FVNVPROC glUniformMatrix2x4fvNV;
      PFNGLUNIFORMMATRIX4X2FVNVPROC glUniformMatrix4x2fvNV;
      PFNGLUNIFORMMATRIX3X4FVNVPROC glUniformMatrix3x4fvNV;
      PFNGLUNIFORMMATRIX4X3FVNVPROC glUniformMatrix4x3fvNV;

      // GL_NV_path_rendering
      PFNGLGENPATHSNVPROC glGenPathsNV;
      PFNGLDELETEPATHSNVPROC glDeletePathsNV;
      PFNGLISPATHNVPROC glIsPathNV;
      PFNGLPATHCOMMANDSNVPROC glPathCommandsNV;
      PFNGLPATHCOORDSNVPROC glPathCoordsNV;
      PFNGLPATHSUBCOMMANDSNVPROC glPathSubCommandsNV;
      PFNGLPATHSUBCOORDSNVPROC glPathSubCoordsNV;
      PFNGLPATHSTRINGNVPROC glPathStringNV;
      PFNGLPATHGLYPHSNVPROC glPathGlyphsNV;
      PFNGLPATHGLYPHRANGENVPROC glPathGlyphRangeNV;
      PFNGLWEIGHTPATHSNVPROC glWeightPathsNV;
      PFNGLCOPYPATHNVPROC glCopyPathNV;
      PFNGLINTERPOLATEPATHSNVPROC glInterpolatePathsNV;
      PFNGLTRANSFORMPATHNVPROC glTransformPathNV;
      PFNGLPATHPARAMETERIVNVPROC glPathParameterivNV;
      PFNGLPATHPARAMETERINVPROC glPathParameteriNV;
      PFNGLPATHPARAMETERFVNVPROC glPathParameterfvNV;
      PFNGLPATHPARAMETERFNVPROC glPathParameterfNV;
      PFNGLPATHDASHARRAYNVPROC glPathDashArrayNV;
      PFNGLPATHSTENCILFUNCNVPROC glPathStencilFuncNV;
      PFNGLPATHSTENCILDEPTHOFFSETNVPROC glPathStencilDepthOffsetNV;
      PFNGLSTENCILFILLPATHNVPROC glStencilFillPathNV;
      PFNGLSTENCILSTROKEPATHNVPROC glStencilStrokePathNV;
      PFNGLSTENCILFILLPATHINSTANCEDNVPROC glStencilFillPathInstancedNV;
      PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glStencilStrokePathInstancedNV;
      PFNGLPATHCOVERDEPTHFUNCNVPROC glPathCoverDepthFuncNV;
      PFNGLCOVERFILLPATHNVPROC glCoverFillPathNV;
      PFNGLCOVERSTROKEPATHNVPROC glCoverStrokePathNV;
      PFNGLCOVERFILLPATHINSTANCEDNVPROC glCoverFillPathInstancedNV;
      PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glCoverStrokePathInstancedNV;
      PFNGLGETPATHPARAMETERIVNVPROC glGetPathParameterivNV;
      PFNGLGETPATHPARAMETERFVNVPROC glGetPathParameterfvNV;
      PFNGLGETPATHCOMMANDSNVPROC glGetPathCommandsNV;
      PFNGLGETPATHCOORDSNVPROC glGetPathCoordsNV;
      PFNGLGETPATHDASHARRAYNVPROC glGetPathDashArrayNV;
      PFNGLGETPATHMETRICSNVPROC glGetPathMetricsNV;
      PFNGLGETPATHMETRICRANGENVPROC glGetPathMetricRangeNV;
      PFNGLGETPATHSPACINGNVPROC glGetPathSpacingNV;
      PFNGLISPOINTINFILLPATHNVPROC glIsPointInFillPathNV;
      PFNGLISPOINTINSTROKEPATHNVPROC glIsPointInStrokePathNV;
      PFNGLGETPATHLENGTHNVPROC glGetPathLengthNV;
      PFNGLPOINTALONGPATHNVPROC glPointAlongPathNV;
      PFNGLMATRIXLOAD3X2FNVPROC glMatrixLoad3x2fNV;
      PFNGLMATRIXLOAD3X3FNVPROC glMatrixLoad3x3fNV;
      PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glMatrixLoadTranspose3x3fNV;
      PFNGLMATRIXMULT3X2FNVPROC glMatrixMult3x2fNV;
      PFNGLMATRIXMULT3X3FNVPROC glMatrixMult3x3fNV;
      PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glMatrixMultTranspose3x3fNV;
      PFNGLSTENCILTHENCOVERFILLPATHNVPROC glStencilThenCoverFillPathNV;
      PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glStencilThenCoverStrokePathNV;
      PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC glStencilThenCoverFillPathInstancedNV;
      PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glStencilThenCoverStrokePathInstancedNV;
      PFNGLPATHGLYPHINDEXRANGENVPROC glPathGlyphIndexRangeNV;
      PFNGLPATHGLYPHINDEXARRAYNVPROC glPathGlyphIndexArrayNV;
      PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glPathMemoryGlyphIndexArrayNV;
      PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glProgramPathFragmentInputGenNV;
      PFNGLGETPROGRAMRESOURCEFVNVPROC glGetProgramResourcefvNV;
      PFNGLPATHCOLORGENNVPROC glPathColorGenNV;
      PFNGLPATHTEXGENNVPROC glPathTexGenNV;
      PFNGLPATHFOGGENNVPROC glPathFogGenNV;
      PFNGLGETPATHCOLORGENIVNVPROC glGetPathColorGenivNV;
      PFNGLGETPATHCOLORGENFVNVPROC glGetPathColorGenfvNV;
      PFNGLGETPATHTEXGENIVNVPROC glGetPathTexGenivNV;
      PFNGLGETPATHTEXGENFVNVPROC glGetPathTexGenfvNV;

      // GL_NV_polygon_mode
      PFNGLPOLYGONMODENVPROC glPolygonModeNV;

      // GL_NV_read_buffer
      PFNGLREADBUFFERNVPROC glReadBufferNV;

      // GL_NV_sample_locations
      PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glFramebufferSampleLocationsfvNV;
      PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glNamedFramebufferSampleLocationsfvNV;
      PFNGLRESOLVEDEPTHVALUESNVPROC glResolveDepthValuesNV;

      // GL_NV_viewport_array
      PFNGLVIEWPORTARRAYVNVPROC glViewportArrayvNV;
      PFNGLVIEWPORTINDEXEDFNVPROC glViewportIndexedfNV;
      PFNGLVIEWPORTINDEXEDFVNVPROC glViewportIndexedfvNV;
      PFNGLSCISSORARRAYVNVPROC glScissorArrayvNV;
      PFNGLSCISSORINDEXEDNVPROC glScissorIndexedNV;
      PFNGLSCISSORINDEXEDVNVPROC glScissorIndexedvNV;
      PFNGLDEPTHRANGEARRAYFVNVPROC glDepthRangeArrayfvNV;
      PFNGLDEPTHRANGEINDEXEDFNVPROC glDepthRangeIndexedfNV;
      PFNGLGETFLOATI_VNVPROC glGetFloati_vNV;
      PFNGLENABLEINVPROC glEnableiNV;
      PFNGLDISABLEINVPROC glDisableiNV;
      PFNGLISENABLEDINVPROC glIsEnablediNV;

      // GL_OES_EGL_image
      PFNGLEGLIMAGETARGETTEXTURE2DOESPROC glEGLImageTargetTexture2DOES;
      PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC glEGLImageTargetRenderbufferStorageOES;

      // GL_OES_blend_equation_separate
      PFNGLBLENDEQUATIONSEPARATEOESPROC glBlendEquationSeparateOES;

      // GL_OES_blend_func_separate
      PFNGLBLENDFUNCSEPARATEOESPROC glBlendFuncSeparateOES;

      // GL_OES_blend_subtract
      PFNGLBLENDEQUATIONOESPROC glBlendEquationOES;

      // GL_OES_byte_coordinates
      PFNGLMULTITEXCOORD1BOESPROC glMultiTexCoord1bOES;
      PFNGLMULTITEXCOORD1BVOESPROC glMultiTexCoord1bvOES;
      PFNGLMULTITEXCOORD2BOESPROC glMultiTexCoord2bOES;
      PFNGLMULTITEXCOORD2BVOESPROC glMultiTexCoord2bvOES;
      PFNGLMULTITEXCOORD3BOESPROC glMultiTexCoord3bOES;
      PFNGLMULTITEXCOORD3BVOESPROC glMultiTexCoord3bvOES;
      PFNGLMULTITEXCOORD4BOESPROC glMultiTexCoord4bOES;
      PFNGLMULTITEXCOORD4BVOESPROC glMultiTexCoord4bvOES;
      PFNGLTEXCOORD1BOESPROC glTexCoord1bOES;
      PFNGLTEXCOORD1BVOESPROC glTexCoord1bvOES;
      PFNGLTEXCOORD2BOESPROC glTexCoord2bOES;
      PFNGLTEXCOORD2BVOESPROC glTexCoord2bvOES;
      PFNGLTEXCOORD3BOESPROC glTexCoord3bOES;
      PFNGLTEXCOORD3BVOESPROC glTexCoord3bvOES;
      PFNGLTEXCOORD4BOESPROC glTexCoord4bOES;
      PFNGLTEXCOORD4BVOESPROC glTexCoord4bvOES;
      PFNGLVERTEX2BOESPROC glVertex2bOES;
      PFNGLVERTEX2BVOESPROC glVertex2bvOES;
      PFNGLVERTEX3BOESPROC glVertex3bOES;
      PFNGLVERTEX3BVOESPROC glVertex3bvOES;
      PFNGLVERTEX4BOESPROC glVertex4bOES;
      PFNGLVERTEX4BVOESPROC glVertex4bvOES;

      // GL_OES_copy_image
      PFNGLCOPYIMAGESUBDATAOESPROC glCopyImageSubDataOES;

      // GL_OES_draw_buffers_indexed
      PFNGLENABLEIOESPROC glEnableiOES;
      PFNGLDISABLEIOESPROC glDisableiOES;
      PFNGLBLENDEQUATIONIOESPROC glBlendEquationiOES;
      PFNGLBLENDEQUATIONSEPARATEIOESPROC glBlendEquationSeparateiOES;
      PFNGLBLENDFUNCIOESPROC glBlendFunciOES;
      PFNGLBLENDFUNCSEPARATEIOESPROC glBlendFuncSeparateiOES;
      PFNGLCOLORMASKIOESPROC glColorMaskiOES;
      PFNGLISENABLEDIOESPROC glIsEnablediOES;

      // GL_OES_draw_elements_base_vertex
      PFNGLDRAWELEMENTSBASEVERTEXOESPROC glDrawElementsBaseVertexOES;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC glDrawRangeElementsBaseVertexOES;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC glDrawElementsInstancedBaseVertexOES;
      PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC glMultiDrawElementsBaseVertexOES;

      // GL_OES_draw_texture
      PFNGLDRAWTEXSOESPROC glDrawTexsOES;
      PFNGLDRAWTEXIOESPROC glDrawTexiOES;
      PFNGLDRAWTEXXOESPROC glDrawTexxOES;
      PFNGLDRAWTEXSVOESPROC glDrawTexsvOES;
      PFNGLDRAWTEXIVOESPROC glDrawTexivOES;
      PFNGLDRAWTEXXVOESPROC glDrawTexxvOES;
      PFNGLDRAWTEXFOESPROC glDrawTexfOES;
      PFNGLDRAWTEXFVOESPROC glDrawTexfvOES;

      // GL_OES_fixed_point
      PFNGLALPHAFUNCXOESPROC glAlphaFuncxOES;
      PFNGLCLEARCOLORXOESPROC glClearColorxOES;
      PFNGLCLEARDEPTHXOESPROC glClearDepthxOES;
      PFNGLCLIPPLANEXOESPROC glClipPlanexOES;
      PFNGLCOLOR4XOESPROC glColor4xOES;
      PFNGLDEPTHRANGEXOESPROC glDepthRangexOES;
      PFNGLFOGXOESPROC glFogxOES;
      PFNGLFOGXVOESPROC glFogxvOES;
      PFNGLFRUSTUMXOESPROC glFrustumxOES;
      PFNGLGETCLIPPLANEXOESPROC glGetClipPlanexOES;
      PFNGLGETFIXEDVOESPROC glGetFixedvOES;
      PFNGLGETTEXENVXVOESPROC glGetTexEnvxvOES;
      PFNGLGETTEXPARAMETERXVOESPROC glGetTexParameterxvOES;
      PFNGLLIGHTMODELXOESPROC glLightModelxOES;
      PFNGLLIGHTMODELXVOESPROC glLightModelxvOES;
      PFNGLLIGHTXOESPROC glLightxOES;
      PFNGLLIGHTXVOESPROC glLightxvOES;
      PFNGLLINEWIDTHXOESPROC glLineWidthxOES;
      PFNGLLOADMATRIXXOESPROC glLoadMatrixxOES;
      PFNGLMATERIALXOESPROC glMaterialxOES;
      PFNGLMATERIALXVOESPROC glMaterialxvOES;
      PFNGLMULTMATRIXXOESPROC glMultMatrixxOES;
      PFNGLMULTITEXCOORD4XOESPROC glMultiTexCoord4xOES;
      PFNGLNORMAL3XOESPROC glNormal3xOES;
      PFNGLORTHOXOESPROC glOrthoxOES;
      PFNGLPOINTPARAMETERXVOESPROC glPointParameterxvOES;
      PFNGLPOINTSIZEXOESPROC glPointSizexOES;
      PFNGLPOLYGONOFFSETXOESPROC glPolygonOffsetxOES;
      PFNGLROTATEXOESPROC glRotatexOES;
      PFNGLSCALEXOESPROC glScalexOES;
      PFNGLTEXENVXOESPROC glTexEnvxOES;
      PFNGLTEXENVXVOESPROC glTexEnvxvOES;
      PFNGLTEXPARAMETERXOESPROC glTexParameterxOES;
      PFNGLTEXPARAMETERXVOESPROC glTexParameterxvOES;
      PFNGLTRANSLATEXOESPROC glTranslatexOES;
      PFNGLGETLIGHTXVOESPROC glGetLightxvOES;
      PFNGLGETMATERIALXVOESPROC glGetMaterialxvOES;
      PFNGLPOINTPARAMETERXOESPROC glPointParameterxOES;
      PFNGLSAMPLECOVERAGEXOESPROC glSampleCoveragexOES;
      PFNGLACCUMXOESPROC glAccumxOES;
      PFNGLBITMAPXOESPROC glBitmapxOES;
      PFNGLBLENDCOLORXOESPROC glBlendColorxOES;
      PFNGLCLEARACCUMXOESPROC glClearAccumxOES;
      PFNGLCOLOR3XOESPROC glColor3xOES;
      PFNGLCOLOR3XVOESPROC glColor3xvOES;
      PFNGLCOLOR4XVOESPROC glColor4xvOES;
      PFNGLCONVOLUTIONPARAMETERXOESPROC glConvolutionParameterxOES;
      PFNGLCONVOLUTIONPARAMETERXVOESPROC glConvolutionParameterxvOES;
      PFNGLEVALCOORD1XOESPROC glEvalCoord1xOES;
      PFNGLEVALCOORD1XVOESPROC glEvalCoord1xvOES;
      PFNGLEVALCOORD2XOESPROC glEvalCoord2xOES;
      PFNGLEVALCOORD2XVOESPROC glEvalCoord2xvOES;
      PFNGLFEEDBACKBUFFERXOESPROC glFeedbackBufferxOES;
      PFNGLGETCONVOLUTIONPARAMETERXVOESPROC glGetConvolutionParameterxvOES;
      PFNGLGETHISTOGRAMPARAMETERXVOESPROC glGetHistogramParameterxvOES;
      PFNGLGETLIGHTXOESPROC glGetLightxOES;
      PFNGLGETMAPXVOESPROC glGetMapxvOES;
      PFNGLGETMATERIALXOESPROC glGetMaterialxOES;
      PFNGLGETPIXELMAPXVPROC glGetPixelMapxv;
      PFNGLGETTEXGENXVOESPROC glGetTexGenxvOES;
      PFNGLGETTEXLEVELPARAMETERXVOESPROC glGetTexLevelParameterxvOES;
      PFNGLINDEXXOESPROC glIndexxOES;
      PFNGLINDEXXVOESPROC glIndexxvOES;
      PFNGLLOADTRANSPOSEMATRIXXOESPROC glLoadTransposeMatrixxOES;
      PFNGLMAP1XOESPROC glMap1xOES;
      PFNGLMAP2XOESPROC glMap2xOES;
      PFNGLMAPGRID1XOESPROC glMapGrid1xOES;
      PFNGLMAPGRID2XOESPROC glMapGrid2xOES;
      PFNGLMULTTRANSPOSEMATRIXXOESPROC glMultTransposeMatrixxOES;
      PFNGLMULTITEXCOORD1XOESPROC glMultiTexCoord1xOES;
      PFNGLMULTITEXCOORD1XVOESPROC glMultiTexCoord1xvOES;
      PFNGLMULTITEXCOORD2XOESPROC glMultiTexCoord2xOES;
      PFNGLMULTITEXCOORD2XVOESPROC glMultiTexCoord2xvOES;
      PFNGLMULTITEXCOORD3XOESPROC glMultiTexCoord3xOES;
      PFNGLMULTITEXCOORD3XVOESPROC glMultiTexCoord3xvOES;
      PFNGLMULTITEXCOORD4XVOESPROC glMultiTexCoord4xvOES;
      PFNGLNORMAL3XVOESPROC glNormal3xvOES;
      PFNGLPASSTHROUGHXOESPROC glPassThroughxOES;
      PFNGLPIXELMAPXPROC glPixelMapx;
      PFNGLPIXELSTOREXPROC glPixelStorex;
      PFNGLPIXELTRANSFERXOESPROC glPixelTransferxOES;
      PFNGLPIXELZOOMXOESPROC glPixelZoomxOES;
      PFNGLPRIORITIZETEXTURESXOESPROC glPrioritizeTexturesxOES;
      PFNGLRASTERPOS2XOESPROC glRasterPos2xOES;
      PFNGLRASTERPOS2XVOESPROC glRasterPos2xvOES;
      PFNGLRASTERPOS3XOESPROC glRasterPos3xOES;
      PFNGLRASTERPOS3XVOESPROC glRasterPos3xvOES;
      PFNGLRASTERPOS4XOESPROC glRasterPos4xOES;
      PFNGLRASTERPOS4XVOESPROC glRasterPos4xvOES;
      PFNGLRECTXOESPROC glRectxOES;
      PFNGLRECTXVOESPROC glRectxvOES;
      PFNGLTEXCOORD1XOESPROC glTexCoord1xOES;
      PFNGLTEXCOORD1XVOESPROC glTexCoord1xvOES;
      PFNGLTEXCOORD2XOESPROC glTexCoord2xOES;
      PFNGLTEXCOORD2XVOESPROC glTexCoord2xvOES;
      PFNGLTEXCOORD3XOESPROC glTexCoord3xOES;
      PFNGLTEXCOORD3XVOESPROC glTexCoord3xvOES;
      PFNGLTEXCOORD4XOESPROC glTexCoord4xOES;
      PFNGLTEXCOORD4XVOESPROC glTexCoord4xvOES;
      PFNGLTEXGENXOESPROC glTexGenxOES;
      PFNGLTEXGENXVOESPROC glTexGenxvOES;
      PFNGLVERTEX2XOESPROC glVertex2xOES;
      PFNGLVERTEX2XVOESPROC glVertex2xvOES;
      PFNGLVERTEX3XOESPROC glVertex3xOES;
      PFNGLVERTEX3XVOESPROC glVertex3xvOES;
      PFNGLVERTEX4XOESPROC glVertex4xOES;
      PFNGLVERTEX4XVOESPROC glVertex4xvOES;

      // GL_OES_framebuffer_object
      PFNGLISRENDERBUFFEROESPROC glIsRenderbufferOES;
      PFNGLBINDRENDERBUFFEROESPROC glBindRenderbufferOES;
      PFNGLDELETERENDERBUFFERSOESPROC glDeleteRenderbuffersOES;
      PFNGLGENRENDERBUFFERSOESPROC glGenRenderbuffersOES;
      PFNGLRENDERBUFFERSTORAGEOESPROC glRenderbufferStorageOES;
      PFNGLGETRENDERBUFFERPARAMETERIVOESPROC glGetRenderbufferParameterivOES;
      PFNGLISFRAMEBUFFEROESPROC glIsFramebufferOES;
      PFNGLBINDFRAMEBUFFEROESPROC glBindFramebufferOES;
      PFNGLDELETEFRAMEBUFFERSOESPROC glDeleteFramebuffersOES;
      PFNGLGENFRAMEBUFFERSOESPROC glGenFramebuffersOES;
      PFNGLCHECKFRAMEBUFFERSTATUSOESPROC glCheckFramebufferStatusOES;
      PFNGLFRAMEBUFFERRENDERBUFFEROESPROC glFramebufferRenderbufferOES;
      PFNGLFRAMEBUFFERTEXTURE2DOESPROC glFramebufferTexture2DOES;
      PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC glGetFramebufferAttachmentParameterivOES;
      PFNGLGENERATEMIPMAPOESPROC glGenerateMipmapOES;

      // GL_OES_geometry_shader
      PFNGLFRAMEBUFFERTEXTUREOESPROC glFramebufferTextureOES;

      // GL_OES_get_program_binary
      PFNGLGETPROGRAMBINARYOESPROC glGetProgramBinaryOES;
      PFNGLPROGRAMBINARYOESPROC glProgramBinaryOES;

      // GL_OES_mapbuffer
      PFNGLMAPBUFFEROESPROC glMapBufferOES;
      PFNGLUNMAPBUFFEROESPROC glUnmapBufferOES;
      PFNGLGETBUFFERPOINTERVOESPROC glGetBufferPointervOES;

      // GL_OES_matrix_palette
      PFNGLCURRENTPALETTEMATRIXOESPROC glCurrentPaletteMatrixOES;
      PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC glLoadPaletteFromModelViewMatrixOES;
      PFNGLMATRIXINDEXPOINTEROESPROC glMatrixIndexPointerOES;
      PFNGLWEIGHTPOINTEROESPROC glWeightPointerOES;

      // GL_OES_point_size_array
      PFNGLPOINTSIZEPOINTEROESPROC glPointSizePointerOES;

      // GL_OES_primitive_bounding_box
      PFNGLPRIMITIVEBOUNDINGBOXOESPROC glPrimitiveBoundingBoxOES;

      // GL_OES_query_matrix
      PFNGLQUERYMATRIXXOESPROC glQueryMatrixxOES;

      // GL_OES_sample_shading
      PFNGLMINSAMPLESHADINGOESPROC glMinSampleShadingOES;

      // GL_OES_single_precision
      PFNGLCLEARDEPTHFOESPROC glClearDepthfOES;
      PFNGLCLIPPLANEFOESPROC glClipPlanefOES;
      PFNGLDEPTHRANGEFOESPROC glDepthRangefOES;
      PFNGLFRUSTUMFOESPROC glFrustumfOES;
      PFNGLGETCLIPPLANEFOESPROC glGetClipPlanefOES;
      PFNGLORTHOFOESPROC glOrthofOES;

      // GL_OES_tessellation_shader
      PFNGLPATCHPARAMETERIOESPROC glPatchParameteriOES;

      // GL_OES_texture_3D
      PFNGLTEXIMAGE3DOESPROC glTexImage3DOES;
      PFNGLTEXSUBIMAGE3DOESPROC glTexSubImage3DOES;
      PFNGLCOPYTEXSUBIMAGE3DOESPROC glCopyTexSubImage3DOES;
      PFNGLCOMPRESSEDTEXIMAGE3DOESPROC glCompressedTexImage3DOES;
      PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC glCompressedTexSubImage3DOES;
      PFNGLFRAMEBUFFERTEXTURE3DOESPROC glFramebufferTexture3DOES;

      // GL_OES_texture_border_clamp
      PFNGLTEXPARAMETERIIVOESPROC glTexParameterIivOES;
      PFNGLTEXPARAMETERIUIVOESPROC glTexParameterIuivOES;
      PFNGLGETTEXPARAMETERIIVOESPROC glGetTexParameterIivOES;
      PFNGLGETTEXPARAMETERIUIVOESPROC glGetTexParameterIuivOES;
      PFNGLSAMPLERPARAMETERIIVOESPROC glSamplerParameterIivOES;
      PFNGLSAMPLERPARAMETERIUIVOESPROC glSamplerParameterIuivOES;
      PFNGLGETSAMPLERPARAMETERIIVOESPROC glGetSamplerParameterIivOES;
      PFNGLGETSAMPLERPARAMETERIUIVOESPROC glGetSamplerParameterIuivOES;

      // GL_OES_texture_buffer
      PFNGLTEXBUFFEROESPROC glTexBufferOES;
      PFNGLTEXBUFFERRANGEOESPROC glTexBufferRangeOES;

      // GL_OES_texture_cube_map
      PFNGLTEXGENFOESPROC glTexGenfOES;
      PFNGLTEXGENFVOESPROC glTexGenfvOES;
      PFNGLTEXGENIOESPROC glTexGeniOES;
      PFNGLTEXGENIVOESPROC glTexGenivOES;
      PFNGLTEXGENXOESPROC glTexGenxOES;
      PFNGLTEXGENXVOESPROC glTexGenxvOES;
      PFNGLGETTEXGENFVOESPROC glGetTexGenfvOES;
      PFNGLGETTEXGENIVOESPROC glGetTexGenivOES;
      PFNGLGETTEXGENXVOESPROC glGetTexGenxvOES;

      // GL_OES_texture_storage_multisample_2d_array
      PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC glTexStorage3DMultisampleOES;

      // GL_OES_texture_view
      PFNGLTEXTUREVIEWOESPROC glTextureViewOES;

      // GL_OES_vertex_array_object
      PFNGLBINDVERTEXARRAYOESPROC glBindVertexArrayOES;
      PFNGLDELETEVERTEXARRAYSOESPROC glDeleteVertexArraysOES;
      PFNGLGENVERTEXARRAYSOESPROC glGenVertexArraysOES;
      PFNGLISVERTEXARRAYOESPROC glIsVertexArrayOES;

      // GL_OVR_multiview
      PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glFramebufferTextureMultiviewOVR;

      // GL_QCOM_alpha_test
      PFNGLALPHAFUNCQCOMPROC glAlphaFuncQCOM;

      // GL_QCOM_driver_control
      PFNGLGETDRIVERCONTROLSQCOMPROC glGetDriverControlsQCOM;
      PFNGLGETDRIVERCONTROLSTRINGQCOMPROC glGetDriverControlStringQCOM;
      PFNGLENABLEDRIVERCONTROLQCOMPROC glEnableDriverControlQCOM;
      PFNGLDISABLEDRIVERCONTROLQCOMPROC glDisableDriverControlQCOM;

      // GL_QCOM_extended_get
      PFNGLEXTGETTEXTURESQCOMPROC glExtGetTexturesQCOM;
      PFNGLEXTGETBUFFERSQCOMPROC glExtGetBuffersQCOM;
      PFNGLEXTGETRENDERBUFFERSQCOMPROC glExtGetRenderbuffersQCOM;
      PFNGLEXTGETFRAMEBUFFERSQCOMPROC glExtGetFramebuffersQCOM;
      PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC glExtGetTexLevelParameterivQCOM;
      PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC glExtTexObjectStateOverrideiQCOM;
      PFNGLEXTGETTEXSUBIMAGEQCOMPROC glExtGetTexSubImageQCOM;
      PFNGLEXTGETBUFFERPOINTERVQCOMPROC glExtGetBufferPointervQCOM;

      // GL_QCOM_extended_get2
      PFNGLEXTGETSHADERSQCOMPROC glExtGetShadersQCOM;
      PFNGLEXTGETPROGRAMSQCOMPROC glExtGetProgramsQCOM;
      PFNGLEXTISPROGRAMBINARYQCOMPROC glExtIsProgramBinaryQCOM;
      PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC glExtGetProgramBinarySourceQCOM;

      // GL_QCOM_tiled_rendering
      PFNGLSTARTTILINGQCOMPROC glStartTilingQCOM;
      PFNGLENDTILINGQCOMPROC glEndTilingQCOM;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (glew::gles::DeviceState *deviceState);

    static void Deinitialise ();

    static glew::gles::DeviceState *GetDeviceState ();

  protected:

    static glew::gles::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    // GL_VERSION_ES_CM_1_0
    void  glAlphaFunc (GLenum func, GLfloat ref);
    void  glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void  glClearDepthf (GLfloat d);
    void  glClipPlanef (GLenum p, const GLfloat * eqn);
    void  glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void  glDepthRangef (GLfloat n, GLfloat f);
    void  glFogf (GLenum pname, GLfloat param);
    void  glFogfv (GLenum pname, const GLfloat * params);
    void  glFrustumf (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
    void  glGetClipPlanef (GLenum plane, GLfloat * equation);
    void  glGetFloatv (GLenum pname, GLfloat * data);
    void  glGetLightfv (GLenum light, GLenum pname, GLfloat * params);
    void  glGetMaterialfv (GLenum face, GLenum pname, GLfloat * params);
    void  glGetTexEnvfv (GLenum target, GLenum pname, GLfloat * params);
    void  glGetTexParameterfv (GLenum target, GLenum pname, GLfloat * params);
    void  glLightModelf (GLenum pname, GLfloat param);
    void  glLightModelfv (GLenum pname, const GLfloat * params);
    void  glLightf (GLenum light, GLenum pname, GLfloat param);
    void  glLightfv (GLenum light, GLenum pname, const GLfloat * params);
    void  glLineWidth (GLfloat width);
    void  glLoadMatrixf (const GLfloat * m);
    void  glMaterialf (GLenum face, GLenum pname, GLfloat param);
    void  glMaterialfv (GLenum face, GLenum pname, const GLfloat * params);
    void  glMultMatrixf (const GLfloat * m);
    void  glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void  glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
    void  glOrthof (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
    void  glPointParameterf (GLenum pname, GLfloat param);
    void  glPointParameterfv (GLenum pname, const GLfloat * params);
    void  glPointSize (GLfloat size);
    void  glPolygonOffset (GLfloat factor, GLfloat units);
    void  glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
    void  glScalef (GLfloat x, GLfloat y, GLfloat z);
    void  glTexEnvf (GLenum target, GLenum pname, GLfloat param);
    void  glTexEnvfv (GLenum target, GLenum pname, const GLfloat * params);
    void  glTexParameterf (GLenum target, GLenum pname, GLfloat param);
    void  glTexParameterfv (GLenum target, GLenum pname, const GLfloat * params);
    void  glTranslatef (GLfloat x, GLfloat y, GLfloat z);
    void  glActiveTexture (GLenum texture);
    void  glAlphaFuncx (GLenum func, GLfixed ref);
    void  glBindBuffer (GLenum target, GLuint buffer);
    void  glBindTexture (GLenum target, GLuint texture);
    void  glBlendFunc (GLenum sfactor, GLenum dfactor);
    void  glBufferData (GLenum target, GLsizeiptr size, const void * data, GLenum usage);
    void  glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
    void  glClear (GLbitfield mask);
    void  glClearColorx (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
    void  glClearDepthx (GLfixed depth);
    void  glClearStencil (GLint s);
    void  glClientActiveTexture (GLenum texture);
    void  glClipPlanex (GLenum plane, const GLfixed * equation);
    void  glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
    void  glColor4x (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
    void  glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    void  glColorPointer (GLint size, GLenum type, GLsizei stride, const void * pointer);
    void  glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
    void  glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
    void  glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    void  glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void  glCullFace (GLenum mode);
    void  glDeleteBuffers (GLsizei n, const GLuint * buffers);
    void  glDeleteTextures (GLsizei n, const GLuint * textures);
    void  glDepthFunc (GLenum func);
    void  glDepthMask (GLboolean flag);
    void  glDepthRangex (GLfixed n, GLfixed f);
    void  glDisable (GLenum cap);
    void  glDisableClientState (GLenum array);
    void  glDrawArrays (GLenum mode, GLint first, GLsizei count);
    void  glDrawElements (GLenum mode, GLsizei count, GLenum type, const void * indices);
    void  glEnable (GLenum cap);
    void  glEnableClientState (GLenum array);
    void  glFinish ();
    void  glFlush ();
    void  glFogx (GLenum pname, GLfixed param);
    void  glFogxv (GLenum pname, const GLfixed * param);
    void  glFrontFace (GLenum mode);
    void  glFrustumx (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
    void  glGetBooleanv (GLenum pname, GLboolean * data);
    void  glGetBufferParameteriv (GLenum target, GLenum pname, GLint * params);
    void  glGetClipPlanex (GLenum plane, GLfixed * equation);
    void  glGenBuffers (GLsizei n, GLuint * buffers);
    void  glGenTextures (GLsizei n, GLuint * textures);
    GLenum glGetError ();
    void  glGetFixedv (GLenum pname, GLfixed * params);
    void  glGetIntegerv (GLenum pname, GLint * data);
    void  glGetLightxv (GLenum light, GLenum pname, GLfixed * params);
    void  glGetMaterialxv (GLenum face, GLenum pname, GLfixed * params);
    void  glGetPointerv (GLenum pname, void ** params);
    const GLubyte * glGetString (GLenum name);
    void  glGetTexEnviv (GLenum target, GLenum pname, GLint * params);
    void  glGetTexEnvxv (GLenum target, GLenum pname, GLfixed * params);
    void  glGetTexParameteriv (GLenum target, GLenum pname, GLint * params);
    void  glGetTexParameterxv (GLenum target, GLenum pname, GLfixed * params);
    void  glHint (GLenum target, GLenum mode);
    GLboolean glIsBuffer (GLuint buffer);
    GLboolean glIsEnabled (GLenum cap);
    GLboolean glIsTexture (GLuint texture);
    void  glLightModelx (GLenum pname, GLfixed param);
    void  glLightModelxv (GLenum pname, const GLfixed * param);
    void  glLightx (GLenum light, GLenum pname, GLfixed param);
    void  glLightxv (GLenum light, GLenum pname, const GLfixed * params);
    void  glLineWidthx (GLfixed width);
    void  glLoadIdentity ();
    void  glLoadMatrixx (const GLfixed * m);
    void  glLogicOp (GLenum opcode);
    void  glMaterialx (GLenum face, GLenum pname, GLfixed param);
    void  glMaterialxv (GLenum face, GLenum pname, const GLfixed * param);
    void  glMatrixMode (GLenum mode);
    void  glMultMatrixx (const GLfixed * m);
    void  glMultiTexCoord4x (GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
    void  glNormal3x (GLfixed nx, GLfixed ny, GLfixed nz);
    void  glNormalPointer (GLenum type, GLsizei stride, const void * pointer);
    void  glOrthox (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
    void  glPixelStorei (GLenum pname, GLint param);
    void  glPointParameterx (GLenum pname, GLfixed param);
    void  glPointParameterxv (GLenum pname, const GLfixed * params);
    void  glPointSizex (GLfixed size);
    void  glPolygonOffsetx (GLfixed factor, GLfixed units);
    void  glPopMatrix ();
    void  glPushMatrix ();
    void  glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
    void  glRotatex (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
    void  glSampleCoverage (GLfloat value, GLboolean invert);
    void  glSampleCoveragex (GLclampx value, GLboolean invert);
    void  glScalex (GLfixed x, GLfixed y, GLfixed z);
    void  glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
    void  glShadeModel (GLenum mode);
    void  glStencilFunc (GLenum func, GLint ref, GLuint mask);
    void  glStencilMask (GLuint mask);
    void  glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
    void  glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const void * pointer);
    void  glTexEnvi (GLenum target, GLenum pname, GLint param);
    void  glTexEnvx (GLenum target, GLenum pname, GLfixed param);
    void  glTexEnviv (GLenum target, GLenum pname, const GLint * params);
    void  glTexEnvxv (GLenum target, GLenum pname, const GLfixed * params);
    void  glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
    void  glTexParameteri (GLenum target, GLenum pname, GLint param);
    void  glTexParameterx (GLenum target, GLenum pname, GLfixed param);
    void  glTexParameteriv (GLenum target, GLenum pname, const GLint * params);
    void  glTexParameterxv (GLenum target, GLenum pname, const GLfixed * params);
    void  glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
    void  glTranslatex (GLfixed x, GLfixed y, GLfixed z);
    void  glVertexPointer (GLint size, GLenum type, GLsizei stride, const void * pointer);
    void  glViewport (GLint x, GLint y, GLsizei width, GLsizei height);

    // GL_ES_VERSION_2_0
    void  glActiveTexture (GLenum texture);
    void  glAttachShader (GLuint program, GLuint shader);
    void  glBindAttribLocation (GLuint program, GLuint index, const GLchar * name);
    void  glBindBuffer (GLenum target, GLuint buffer);
    void  glBindFramebuffer (GLenum target, GLuint framebuffer);
    void  glBindRenderbuffer (GLenum target, GLuint renderbuffer);
    void  glBindTexture (GLenum target, GLuint texture);
    void  glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void  glBlendEquation (GLenum mode);
    void  glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
    void  glBlendFunc (GLenum sfactor, GLenum dfactor);
    void  glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
    void  glBufferData (GLenum target, GLsizeiptr size, const void * data, GLenum usage);
    void  glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
    GLenum glCheckFramebufferStatus (GLenum target);
    void  glClear (GLbitfield mask);
    void  glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void  glClearDepthf (GLfloat d);
    void  glClearStencil (GLint s);
    void  glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    void  glCompileShader (GLuint shader);
    void  glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
    void  glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
    void  glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    void  glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLuint glCreateProgram ();
    GLuint glCreateShader (GLenum type);
    void  glCullFace (GLenum mode);
    void  glDeleteBuffers (GLsizei n, const GLuint * buffers);
    void  glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers);
    void  glDeleteProgram (GLuint program);
    void  glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers);
    void  glDeleteShader (GLuint shader);
    void  glDeleteTextures (GLsizei n, const GLuint * textures);
    void  glDepthFunc (GLenum func);
    void  glDepthMask (GLboolean flag);
    void  glDepthRangef (GLfloat n, GLfloat f);
    void  glDetachShader (GLuint program, GLuint shader);
    void  glDisable (GLenum cap);
    void  glDisableVertexAttribArray (GLuint index);
    void  glDrawArrays (GLenum mode, GLint first, GLsizei count);
    void  glDrawElements (GLenum mode, GLsizei count, GLenum type, const void * indices);
    void  glEnable (GLenum cap);
    void  glEnableVertexAttribArray (GLuint index);
    void  glFinish ();
    void  glFlush ();
    void  glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    void  glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    void  glFrontFace (GLenum mode);
    void  glGenBuffers (GLsizei n, GLuint * buffers);
    void  glGenerateMipmap (GLenum target);
    void  glGenFramebuffers (GLsizei n, GLuint * framebuffers);
    void  glGenRenderbuffers (GLsizei n, GLuint * renderbuffers);
    void  glGenTextures (GLsizei n, GLuint * textures);
    void  glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
    void  glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
    void  glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
    GLint glGetAttribLocation (GLuint program, const GLchar * name);
    void  glGetBooleanv (GLenum pname, GLboolean * data);
    void  glGetBufferParameteriv (GLenum target, GLenum pname, GLint * params);
    GLenum glGetError ();
    void  glGetFloatv (GLenum pname, GLfloat * data);
    void  glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params);
    void  glGetIntegerv (GLenum pname, GLint * data);
    void  glGetProgramiv (GLuint program, GLenum pname, GLint * params);
    void  glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    void  glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params);
    void  glGetShaderiv (GLuint shader, GLenum pname, GLint * params);
    void  glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    void  glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
    void  glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
    const GLubyte * glGetString (GLenum name);
    void  glGetTexParameterfv (GLenum target, GLenum pname, GLfloat * params);
    void  glGetTexParameteriv (GLenum target, GLenum pname, GLint * params);
    void  glGetUniformfv (GLuint program, GLint location, GLfloat * params);
    void  glGetUniformiv (GLuint program, GLint location, GLint * params);
    GLint glGetUniformLocation (GLuint program, const GLchar * name);
    void  glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat * params);
    void  glGetVertexAttribiv (GLuint index, GLenum pname, GLint * params);
    void  glGetVertexAttribPointerv (GLuint index, GLenum pname, void ** pointer);
    void  glHint (GLenum target, GLenum mode);
    GLboolean glIsBuffer (GLuint buffer);
    GLboolean glIsEnabled (GLenum cap);
    GLboolean glIsFramebuffer (GLuint framebuffer);
    GLboolean glIsProgram (GLuint program);
    GLboolean glIsRenderbuffer (GLuint renderbuffer);
    GLboolean glIsShader (GLuint shader);
    GLboolean glIsTexture (GLuint texture);
    void  glLineWidth (GLfloat width);
    void  glLinkProgram (GLuint program);
    void  glPixelStorei (GLenum pname, GLint param);
    void  glPolygonOffset (GLfloat factor, GLfloat units);
    void  glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
    void  glReleaseShaderCompiler ();
    void  glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
    void  glSampleCoverage (GLfloat value, GLboolean invert);
    void  glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
    void  glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
    void  glShaderSource (GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length);
    void  glStencilFunc (GLenum func, GLint ref, GLuint mask);
    void  glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
    void  glStencilMask (GLuint mask);
    void  glStencilMaskSeparate (GLenum face, GLuint mask);
    void  glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
    void  glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
    void  glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
    void  glTexParameterf (GLenum target, GLenum pname, GLfloat param);
    void  glTexParameterfv (GLenum target, GLenum pname, const GLfloat * params);
    void  glTexParameteri (GLenum target, GLenum pname, GLint param);
    void  glTexParameteriv (GLenum target, GLenum pname, const GLint * params);
    void  glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
    void  glUniform1f (GLint location, GLfloat v0);
    void  glUniform1fv (GLint location, GLsizei count, const GLfloat * value);
    void  glUniform1i (GLint location, GLint v0);
    void  glUniform1iv (GLint location, GLsizei count, const GLint * value);
    void  glUniform2f (GLint location, GLfloat v0, GLfloat v1);
    void  glUniform2fv (GLint location, GLsizei count, const GLfloat * value);
    void  glUniform2i (GLint location, GLint v0, GLint v1);
    void  glUniform2iv (GLint location, GLsizei count, const GLint * value);
    void  glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    void  glUniform3fv (GLint location, GLsizei count, const GLfloat * value);
    void  glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
    void  glUniform3iv (GLint location, GLsizei count, const GLint * value);
    void  glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    void  glUniform4fv (GLint location, GLsizei count, const GLfloat * value);
    void  glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    void  glUniform4iv (GLint location, GLsizei count, const GLint * value);
    void  glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUseProgram (GLuint program);
    void  glValidateProgram (GLuint program);
    void  glVertexAttrib1f (GLuint index, GLfloat x);
    void  glVertexAttrib1fv (GLuint index, const GLfloat * v);
    void  glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
    void  glVertexAttrib2fv (GLuint index, const GLfloat * v);
    void  glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
    void  glVertexAttrib3fv (GLuint index, const GLfloat * v);
    void  glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    void  glVertexAttrib4fv (GLuint index, const GLfloat * v);
    void  glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
    void  glViewport (GLint x, GLint y, GLsizei width, GLsizei height);

    // GL_ES_VERSION_3_0
    void  glReadBuffer (GLenum src);
    void  glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
    void  glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
    void  glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
    void  glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void  glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
    void  glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
    void  glGenQueries (GLsizei n, GLuint * ids);
    void  glDeleteQueries (GLsizei n, const GLuint * ids);
    GLboolean glIsQuery (GLuint id);
    void  glBeginQuery (GLenum target, GLuint id);
    void  glEndQuery (GLenum target);
    void  glGetQueryiv (GLenum target, GLenum pname, GLint * params);
    void  glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint * params);
    GLboolean glUnmapBuffer (GLenum target);
    void  glGetBufferPointerv (GLenum target, GLenum pname, void ** params);
    void  glDrawBuffers (GLsizei n, const GLenum * bufs);
    void  glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    void  glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    void  glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    void * glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    void  glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
    void  glBindVertexArray (GLuint array);
    void  glDeleteVertexArrays (GLsizei n, const GLuint * arrays);
    void  glGenVertexArrays (GLsizei n, GLuint * arrays);
    GLboolean glIsVertexArray (GLuint array);
    void  glGetIntegeri_v (GLenum target, GLuint index, GLint * data);
    void  glBeginTransformFeedback (GLenum primitiveMode);
    void  glEndTransformFeedback ();
    void  glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    void  glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
    void  glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode);
    void  glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
    void  glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
    void  glGetVertexAttribIiv (GLuint index, GLenum pname, GLint * params);
    void  glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint * params);
    void  glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w);
    void  glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    void  glVertexAttribI4iv (GLuint index, const GLint * v);
    void  glVertexAttribI4uiv (GLuint index, const GLuint * v);
    void  glGetUniformuiv (GLuint program, GLint location, GLuint * params);
    GLint glGetFragDataLocation (GLuint program, const GLchar * name);
    void  glUniform1ui (GLint location, GLuint v0);
    void  glUniform2ui (GLint location, GLuint v0, GLuint v1);
    void  glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2);
    void  glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    void  glUniform1uiv (GLint location, GLsizei count, const GLuint * value);
    void  glUniform2uiv (GLint location, GLsizei count, const GLuint * value);
    void  glUniform3uiv (GLint location, GLsizei count, const GLuint * value);
    void  glUniform4uiv (GLint location, GLsizei count, const GLuint * value);
    void  glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint * value);
    void  glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint * value);
    void  glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat * value);
    void  glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    const GLubyte * glGetStringi (GLenum name, GLuint index);
    void  glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    void  glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
    void  glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
    GLuint glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName);
    void  glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
    void  glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
    void  glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
    void  glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
    void  glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
    GLsync glFenceSync (GLenum condition, GLbitfield flags);
    GLboolean glIsSync (GLsync sync);
    void  glDeleteSync (GLsync sync);
    GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    void  glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    void  glGetInteger64v (GLenum pname, GLint64 * data);
    void  glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
    void  glGetInteger64i_v (GLenum target, GLuint index, GLint64 * data);
    void  glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 * params);
    void  glGenSamplers (GLsizei count, GLuint * samplers);
    void  glDeleteSamplers (GLsizei count, const GLuint * samplers);
    GLboolean glIsSampler (GLuint sampler);
    void  glBindSampler (GLuint unit, GLuint sampler);
    void  glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
    void  glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param);
    void  glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
    void  glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param);
    void  glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params);
    void  glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params);
    void  glVertexAttribDivisor (GLuint index, GLuint divisor);
    void  glBindTransformFeedback (GLenum target, GLuint id);
    void  glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids);
    void  glGenTransformFeedbacks (GLsizei n, GLuint * ids);
    GLboolean glIsTransformFeedback (GLuint id);
    void  glPauseTransformFeedback ();
    void  glResumeTransformFeedback ();
    void  glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
    void  glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
    void  glProgramParameteri (GLuint program, GLenum pname, GLint value);
    void  glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments);
    void  glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    void  glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    void  glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    void  glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);

    // GL_ES_VERSION_3_1
    void  glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
    void  glDispatchComputeIndirect (GLintptr indirect);
    void  glDrawArraysIndirect (GLenum mode, const void * indirect);
    void  glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect);
    void  glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
    void  glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params);
    void  glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
    GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name);
    void  glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
    void  glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
    GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name);
    void  glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
    void  glActiveShaderProgram (GLuint pipeline, GLuint program);
    GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings);
    void  glBindProgramPipeline (GLuint pipeline);
    void  glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines);
    void  glGenProgramPipelines (GLsizei n, GLuint * pipelines);
    GLboolean glIsProgramPipeline (GLuint pipeline);
    void  glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params);
    void  glProgramUniform1i (GLuint program, GLint location, GLint v0);
    void  glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
    void  glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    void  glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    void  glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
    void  glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
    void  glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    void  glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    void  glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
    void  glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    void  glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    void  glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    void  glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glValidateProgramPipeline (GLuint pipeline);
    void  glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    void  glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
    void  glGetBooleani_v (GLenum target, GLuint index, GLboolean * data);
    void  glMemoryBarrier (GLbitfield barriers);
    void  glMemoryBarrierByRegion (GLbitfield barriers);
    void  glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    void  glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val);
    void  glSampleMaski (GLuint maskNumber, GLbitfield mask);
    void  glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint * params);
    void  glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat * params);
    void  glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    void  glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    void  glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    void  glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
    void  glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);

    // GL_AMD_performance_monitor
    void  glGetPerfMonitorGroupsAMD (GLint * numGroups, GLsizei groupsSize, GLuint * groups);
    void  glGetPerfMonitorCountersAMD (GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters);
    void  glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString);
    void  glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString);
    void  glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void * data);
    void  glGenPerfMonitorsAMD (GLsizei n, GLuint * monitors);
    void  glDeletePerfMonitorsAMD (GLsizei n, GLuint * monitors);
    void  glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList);
    void  glBeginPerfMonitorAMD (GLuint monitor);
    void  glEndPerfMonitorAMD (GLuint monitor);
    void  glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten);

    // GL_ANGLE_framebuffer_blit
    void  glBlitFramebufferANGLE (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

    // GL_ANGLE_framebuffer_multisample
    void  glRenderbufferStorageMultisampleANGLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

    // GL_ANGLE_instanced_arrays
    void  glDrawArraysInstancedANGLE (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
    void  glDrawElementsInstancedANGLE (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
    void  glVertexAttribDivisorANGLE (GLuint index, GLuint divisor);

    // GL_ANGLE_translated_shader_source
    void  glGetTranslatedShaderSourceANGLE (GLuint shader, GLsizei bufsize, GLsizei * length, GLchar * source);

    // GL_APPLE_copy_texture_levels
    void  glCopyTextureLevelsAPPLE (GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);

    // GL_APPLE_framebuffer_multisample
    void  glRenderbufferStorageMultisampleAPPLE (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    void  glResolveMultisampleFramebufferAPPLE ();

    // GL_APPLE_sync
    GLsync glFenceSyncAPPLE (GLenum condition, GLbitfield flags);
    GLboolean glIsSyncAPPLE (GLsync sync);
    void  glDeleteSyncAPPLE (GLsync sync);
    GLenum glClientWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
    void  glWaitSyncAPPLE (GLsync sync, GLbitfield flags, GLuint64 timeout);
    void  glGetInteger64vAPPLE (GLenum pname, GLint64 * params);
    void  glGetSyncivAPPLE (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);

    // GL_EXT_base_instance
    void  glDrawArraysInstancedBaseInstanceEXT (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
    void  glDrawElementsInstancedBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
    void  glDrawElementsInstancedBaseVertexBaseInstanceEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

    // GL_EXT_blend_minmax
    void  glBlendEquationEXT (GLenum mode);

    // GL_EXT_buffer_storage
    void  glBufferStorageEXT (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);

    // GL_EXT_copy_image
    void  glCopyImageSubDataEXT (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

    // GL_EXT_debug_label
    void  glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar * label);
    void  glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label);

    // GL_EXT_debug_marker
    void  glInsertEventMarkerEXT (GLsizei length, const GLchar * marker);
    void  glPushGroupMarkerEXT (GLsizei length, const GLchar * marker);
    void  glPopGroupMarkerEXT ();

    // GL_EXT_discard_framebuffer
    void  glDiscardFramebufferEXT (GLenum target, GLsizei numAttachments, const GLenum * attachments);

    // GL_EXT_disjoint_timer_query
    void  glGenQueriesEXT (GLsizei n, GLuint * ids);
    void  glDeleteQueriesEXT (GLsizei n, const GLuint * ids);
    GLboolean glIsQueryEXT (GLuint id);
    void  glBeginQueryEXT (GLenum target, GLuint id);
    void  glEndQueryEXT (GLenum target);
    void  glQueryCounterEXT (GLuint id, GLenum target);
    void  glGetQueryivEXT (GLenum target, GLenum pname, GLint * params);
    void  glGetQueryObjectivEXT (GLuint id, GLenum pname, GLint * params);
    void  glGetQueryObjectuivEXT (GLuint id, GLenum pname, GLuint * params);
    void  glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 * params);
    void  glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 * params);

    // GL_EXT_draw_buffers
    void  glDrawBuffersEXT (GLsizei n, const GLenum * bufs);

    // GL_EXT_draw_buffers_indexed
    void  glEnableiEXT (GLenum target, GLuint index);
    void  glDisableiEXT (GLenum target, GLuint index);
    void  glBlendEquationiEXT (GLuint buf, GLenum mode);
    void  glBlendEquationSeparateiEXT (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    void  glBlendFunciEXT (GLuint buf, GLenum src, GLenum dst);
    void  glBlendFuncSeparateiEXT (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    void  glColorMaskiEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    GLboolean glIsEnablediEXT (GLenum target, GLuint index);

    // GL_EXT_draw_elements_base_vertex
    void  glDrawElementsBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    void  glDrawRangeElementsBaseVertexEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    void  glDrawElementsInstancedBaseVertexEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
    void  glMultiDrawElementsBaseVertexEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);

    // GL_EXT_draw_instanced
    void  glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
    void  glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);

    // GL_EXT_geometry_shader
    void  glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level);

    // GL_EXT_instanced_arrays
    void  glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
    void  glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);
    void  glVertexAttribDivisorEXT (GLuint index, GLuint divisor);

    // GL_EXT_map_buffer_range
    void * glMapBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    void  glFlushMappedBufferRangeEXT (GLenum target, GLintptr offset, GLsizeiptr length);

    // GL_EXT_multi_draw_arrays
    void  glMultiDrawArraysEXT (GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount);
    void  glMultiDrawElementsEXT (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount);

    // GL_EXT_multi_draw_indirect
    void  glMultiDrawArraysIndirectEXT (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
    void  glMultiDrawElementsIndirectEXT (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);

    // GL_EXT_multisampled_render_to_texture
    void  glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    void  glFramebufferTexture2DMultisampleEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

    // GL_EXT_multiview_draw_buffers
    void  glReadBufferIndexedEXT (GLenum src, GLint index);
    void  glDrawBuffersIndexedEXT (GLint n, const GLenum * location, const GLint * indices);
    void  glGetIntegeri_vEXT (GLenum target, GLuint index, GLint * data);

    // GL_EXT_occlusion_query_boolean
    void  glGenQueriesEXT (GLsizei n, GLuint * ids);
    void  glDeleteQueriesEXT (GLsizei n, const GLuint * ids);
    GLboolean glIsQueryEXT (GLuint id);
    void  glBeginQueryEXT (GLenum target, GLuint id);
    void  glEndQueryEXT (GLenum target);
    void  glGetQueryivEXT (GLenum target, GLenum pname, GLint * params);
    void  glGetQueryObjectuivEXT (GLuint id, GLenum pname, GLuint * params);

    // GL_EXT_primitive_bounding_box
    void  glPrimitiveBoundingBoxEXT (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

    // GL_EXT_raster_multisample
    void  glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations);

    // GL_EXT_robustness
    GLenum glGetGraphicsResetStatusEXT ();
    void  glReadnPixelsEXT (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    void  glGetnUniformfvEXT (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    void  glGetnUniformivEXT (GLuint program, GLint location, GLsizei bufSize, GLint * params);

    // GL_EXT_separate_shader_objects
    void  glUseShaderProgramEXT (GLenum type, GLuint program);
    void  glActiveProgramEXT (GLuint program);
    GLuint glCreateShaderProgramEXT (GLenum type, const GLchar * string);
    void  glActiveShaderProgramEXT (GLuint pipeline, GLuint program);
    void  glBindProgramPipelineEXT (GLuint pipeline);
    GLuint glCreateShaderProgramvEXT (GLenum type, GLsizei count, const GLchar ** strings);
    void  glDeleteProgramPipelinesEXT (GLsizei n, const GLuint * pipelines);
    void  glGenProgramPipelinesEXT (GLsizei n, GLuint * pipelines);
    void  glGetProgramPipelineInfoLogEXT (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    void  glGetProgramPipelineivEXT (GLuint pipeline, GLenum pname, GLint * params);
    GLboolean glIsProgramPipelineEXT (GLuint pipeline);
    void  glProgramParameteriEXT (GLuint program, GLenum pname, GLint value);
    void  glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0);
    void  glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform1iEXT (GLuint program, GLint location, GLint v0);
    void  glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    void  glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1);
    void  glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    void  glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    void  glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    void  glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void  glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    void  glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint * value);
    void  glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUseProgramStagesEXT (GLuint pipeline, GLbitfield stages, GLuint program);
    void  glValidateProgramPipelineEXT (GLuint pipeline);
    void  glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0);
    void  glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1);
    void  glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    void  glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    void  glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void  glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    // GL_EXT_sparse_texture
    void  glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);

    // GL_EXT_tessellation_shader
    void  glPatchParameteriEXT (GLenum pname, GLint value);

    // GL_EXT_texture_border_clamp
    void  glTexParameterIivEXT (GLenum target, GLenum pname, const GLint * params);
    void  glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint * params);
    void  glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint * params);
    void  glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint * params);
    void  glSamplerParameterIivEXT (GLuint sampler, GLenum pname, const GLint * param);
    void  glSamplerParameterIuivEXT (GLuint sampler, GLenum pname, const GLuint * param);
    void  glGetSamplerParameterIivEXT (GLuint sampler, GLenum pname, GLint * params);
    void  glGetSamplerParameterIuivEXT (GLuint sampler, GLenum pname, GLuint * params);

    // GL_EXT_texture_buffer
    void  glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer);
    void  glTexBufferRangeEXT (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

    // GL_EXT_texture_filter_minmax
    void  glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations);

    // GL_EXT_texture_storage
    void  glTexStorage1DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    void  glTexStorage2DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    void  glTexStorage3DEXT (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    void  glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    void  glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    void  glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

    // GL_EXT_texture_view
    void  glTextureViewEXT (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

    // GL_IMG_multisampled_render_to_texture
    void  glRenderbufferStorageMultisampleIMG (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    void  glFramebufferTexture2DMultisampleIMG (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

    // GL_IMG_user_clip_plane
    void  glClipPlanefIMG (GLenum p, const GLfloat * eqn);
    void  glClipPlanexIMG (GLenum p, const GLfixed * eqn);

    // GL_INTEL_performance_query
    void  glBeginPerfQueryINTEL (GLuint queryHandle);
    void  glCreatePerfQueryINTEL (GLuint queryId, GLuint * queryHandle);
    void  glDeletePerfQueryINTEL (GLuint queryHandle);
    void  glEndPerfQueryINTEL (GLuint queryHandle);
    void  glGetFirstPerfQueryIdINTEL (GLuint * queryId);
    void  glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint * nextQueryId);
    void  glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue);
    void  glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten);
    void  glGetPerfQueryIdByNameINTEL (GLchar * queryName, GLuint * queryId);
    void  glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask);

    // GL_KHR_blend_equation_advanced
    void  glBlendBarrierKHR ();

    // GL_KHR_debug
    void  glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    void  glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    void  glDebugMessageCallback (GLDEBUGPROC callback, const void * userParam);
    GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    void  glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar * message);
    void  glPopDebugGroup ();
    void  glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
    void  glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
    void  glObjectPtrLabel (const void * ptr, GLsizei length, const GLchar * label);
    void  glGetObjectPtrLabel (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
    void  glGetPointerv (GLenum pname, void ** params);
    void  glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    void  glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    void  glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void * userParam);
    GLuint glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    void  glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar * message);
    void  glPopDebugGroupKHR ();
    void  glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
    void  glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
    void  glObjectPtrLabelKHR (const void * ptr, GLsizei length, const GLchar * label);
    void  glGetObjectPtrLabelKHR (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
    void  glGetPointervKHR (GLenum pname, void ** params);

    // GL_KHR_robustness
    GLenum glGetGraphicsResetStatus ();
    void  glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    void  glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    void  glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    void  glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
    GLenum glGetGraphicsResetStatusKHR ();
    void  glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    void  glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    void  glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    void  glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint * params);

    // GL_NV_bindless_texture
    GLuint64 glGetTextureHandleNV (GLuint texture);
    GLuint64 glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler);
    void  glMakeTextureHandleResidentNV (GLuint64 handle);
    void  glMakeTextureHandleNonResidentNV (GLuint64 handle);
    GLuint64 glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    void  glMakeImageHandleResidentNV (GLuint64 handle, GLenum access);
    void  glMakeImageHandleNonResidentNV (GLuint64 handle);
    void  glUniformHandleui64NV (GLint location, GLuint64 value);
    void  glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 * value);
    void  glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value);
    void  glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
    GLboolean glIsTextureHandleResidentNV (GLuint64 handle);
    GLboolean glIsImageHandleResidentNV (GLuint64 handle);

    // GL_NV_blend_equation_advanced
    void  glBlendParameteriNV (GLenum pname, GLint value);
    void  glBlendBarrierNV ();

    // GL_NV_conditional_render
    void  glBeginConditionalRenderNV (GLuint id, GLenum mode);
    void  glEndConditionalRenderNV ();

    // GL_NV_conservative_raster
    void  glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits);

    // GL_NV_copy_buffer
    void  glCopyBufferSubDataNV (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

    // GL_NV_coverage_sample
    void  glCoverageMaskNV (GLboolean mask);
    void  glCoverageOperationNV (GLenum operation);

    // GL_NV_draw_buffers
    void  glDrawBuffersNV (GLsizei n, const GLenum * bufs);

    // GL_NV_draw_instanced
    void  glDrawArraysInstancedNV (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
    void  glDrawElementsInstancedNV (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount);

    // GL_NV_fence
    void  glDeleteFencesNV (GLsizei n, const GLuint * fences);
    void  glGenFencesNV (GLsizei n, GLuint * fences);
    GLboolean glIsFenceNV (GLuint fence);
    GLboolean glTestFenceNV (GLuint fence);
    void  glGetFenceivNV (GLuint fence, GLenum pname, GLint * params);
    void  glFinishFenceNV (GLuint fence);
    void  glSetFenceNV (GLuint fence, GLenum condition);

    // GL_NV_fragment_coverage_to_color
    void  glFragmentCoverageColorNV (GLuint color);

    // GL_NV_framebuffer_blit
    void  glBlitFramebufferNV (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

    // GL_NV_framebuffer_mixed_samples
    void  glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations);
    void  glCoverageModulationTableNV (GLsizei n, const GLfloat * v);
    void  glGetCoverageModulationTableNV (GLsizei bufsize, GLfloat * v);
    void  glCoverageModulationNV (GLenum components);

    // GL_NV_framebuffer_multisample
    void  glRenderbufferStorageMultisampleNV (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

    // GL_NV_instanced_arrays
    void  glVertexAttribDivisorNV (GLuint index, GLuint divisor);

    // GL_NV_internalformat_sample_query
    void  glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint * params);

    // GL_NV_non_square_matrices
    void  glUniformMatrix2x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix3x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix2x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix4x2fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix3x4fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void  glUniformMatrix4x3fvNV (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);

    // GL_NV_path_rendering
    GLuint glGenPathsNV (GLsizei range);
    void  glDeletePathsNV (GLuint path, GLsizei range);
    GLboolean glIsPathNV (GLuint path);
    void  glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
    void  glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void * coords);
    void  glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte * commands, GLsizei numCoords, GLenum coordType, const void * coords);
    void  glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void * coords);
    void  glPathStringNV (GLuint path, GLenum format, GLsizei length, const void * pathString);
    void  glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    void  glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    void  glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights);
    void  glCopyPathNV (GLuint resultPath, GLuint srcPath);
    void  glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
    void  glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat * transformValues);
    void  glPathParameterivNV (GLuint path, GLenum pname, const GLint * value);
    void  glPathParameteriNV (GLuint path, GLenum pname, GLint value);
    void  glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat * value);
    void  glPathParameterfNV (GLuint path, GLenum pname, GLfloat value);
    void  glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat * dashArray);
    void  glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask);
    void  glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units);
    void  glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask);
    void  glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask);
    void  glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues);
    void  glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues);
    void  glPathCoverDepthFuncNV (GLenum func);
    void  glCoverFillPathNV (GLuint path, GLenum coverMode);
    void  glCoverStrokePathNV (GLuint path, GLenum coverMode);
    void  glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    void  glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    void  glGetPathParameterivNV (GLuint path, GLenum pname, GLint * value);
    void  glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat * value);
    void  glGetPathCommandsNV (GLuint path, GLubyte * commands);
    void  glGetPathCoordsNV (GLuint path, GLfloat * coords);
    void  glGetPathDashArrayNV (GLuint path, GLfloat * dashArray);
    void  glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics);
    void  glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics);
    void  glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing);
    GLboolean glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y);
    GLboolean glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y);
    GLfloat glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments);
    GLboolean glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat * x, GLfloat * y, GLfloat * tangentX, GLfloat * tangentY);
    void  glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat * m);
    void  glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat * m);
    void  glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat * m);
    void  glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat * m);
    void  glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat * m);
    void  glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat * m);
    void  glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
    void  glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
    void  glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    void  glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues);
    GLenum glPathGlyphIndexRangeNV (GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
    GLenum glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    GLenum glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    void  glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat * coeffs);
    void  glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLfloat * params);
    void  glPathColorGenNV (GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat * coeffs);
    void  glPathTexGenNV (GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat * coeffs);
    void  glPathFogGenNV (GLenum genMode);
    void  glGetPathColorGenivNV (GLenum color, GLenum pname, GLint * value);
    void  glGetPathColorGenfvNV (GLenum color, GLenum pname, GLfloat * value);
    void  glGetPathTexGenivNV (GLenum texCoordSet, GLenum pname, GLint * value);
    void  glGetPathTexGenfvNV (GLenum texCoordSet, GLenum pname, GLfloat * value);

    // GL_NV_polygon_mode
    void  glPolygonModeNV (GLenum face, GLenum mode);

    // GL_NV_read_buffer
    void  glReadBufferNV (GLenum mode);

    // GL_NV_sample_locations
    void  glFramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat * v);
    void  glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v);
    void  glResolveDepthValuesNV ();

    // GL_NV_viewport_array
    void  glViewportArrayvNV (GLuint first, GLsizei count, const GLfloat * v);
    void  glViewportIndexedfNV (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
    void  glViewportIndexedfvNV (GLuint index, const GLfloat * v);
    void  glScissorArrayvNV (GLuint first, GLsizei count, const GLint * v);
    void  glScissorIndexedNV (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
    void  glScissorIndexedvNV (GLuint index, const GLint * v);
    void  glDepthRangeArrayfvNV (GLuint first, GLsizei count, const GLfloat * v);
    void  glDepthRangeIndexedfNV (GLuint index, GLfloat n, GLfloat f);
    void  glGetFloati_vNV (GLenum target, GLuint index, GLfloat * data);
    void  glEnableiNV (GLenum target, GLuint index);
    void  glDisableiNV (GLenum target, GLuint index);
    GLboolean glIsEnablediNV (GLenum target, GLuint index);

    // GL_OES_EGL_image
    void  glEGLImageTargetTexture2DOES (GLenum target, GLeglImageOES image);
    void  glEGLImageTargetRenderbufferStorageOES (GLenum target, GLeglImageOES image);

    // GL_OES_blend_equation_separate
    void  glBlendEquationSeparateOES (GLenum modeRGB, GLenum modeAlpha);

    // GL_OES_blend_func_separate
    void  glBlendFuncSeparateOES (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

    // GL_OES_blend_subtract
    void  glBlendEquationOES (GLenum mode);

    // GL_OES_byte_coordinates
    void  glMultiTexCoord1bOES (GLenum texture, GLbyte s);
    void  glMultiTexCoord1bvOES (GLenum texture, const GLbyte * coords);
    void  glMultiTexCoord2bOES (GLenum texture, GLbyte s, GLbyte t);
    void  glMultiTexCoord2bvOES (GLenum texture, const GLbyte * coords);
    void  glMultiTexCoord3bOES (GLenum texture, GLbyte s, GLbyte t, GLbyte r);
    void  glMultiTexCoord3bvOES (GLenum texture, const GLbyte * coords);
    void  glMultiTexCoord4bOES (GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q);
    void  glMultiTexCoord4bvOES (GLenum texture, const GLbyte * coords);
    void  glTexCoord1bOES (GLbyte s);
    void  glTexCoord1bvOES (const GLbyte * coords);
    void  glTexCoord2bOES (GLbyte s, GLbyte t);
    void  glTexCoord2bvOES (const GLbyte * coords);
    void  glTexCoord3bOES (GLbyte s, GLbyte t, GLbyte r);
    void  glTexCoord3bvOES (const GLbyte * coords);
    void  glTexCoord4bOES (GLbyte s, GLbyte t, GLbyte r, GLbyte q);
    void  glTexCoord4bvOES (const GLbyte * coords);
    void  glVertex2bOES (GLbyte x, GLbyte y);
    void  glVertex2bvOES (const GLbyte * coords);
    void  glVertex3bOES (GLbyte x, GLbyte y, GLbyte z);
    void  glVertex3bvOES (const GLbyte * coords);
    void  glVertex4bOES (GLbyte x, GLbyte y, GLbyte z, GLbyte w);
    void  glVertex4bvOES (const GLbyte * coords);

    // GL_OES_copy_image
    void  glCopyImageSubDataOES (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

    // GL_OES_draw_buffers_indexed
    void  glEnableiOES (GLenum target, GLuint index);
    void  glDisableiOES (GLenum target, GLuint index);
    void  glBlendEquationiOES (GLuint buf, GLenum mode);
    void  glBlendEquationSeparateiOES (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    void  glBlendFunciOES (GLuint buf, GLenum src, GLenum dst);
    void  glBlendFuncSeparateiOES (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    void  glColorMaskiOES (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    GLboolean glIsEnablediOES (GLenum target, GLuint index);

    // GL_OES_draw_elements_base_vertex
    void  glDrawElementsBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    void  glDrawRangeElementsBaseVertexOES (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    void  glDrawElementsInstancedBaseVertexOES (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
    void  glMultiDrawElementsBaseVertexOES (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount, const GLint * basevertex);

    // GL_OES_draw_texture
    void  glDrawTexsOES (GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
    void  glDrawTexiOES (GLint x, GLint y, GLint z, GLint width, GLint height);
    void  glDrawTexxOES (GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
    void  glDrawTexsvOES (const GLshort * coords);
    void  glDrawTexivOES (const GLint * coords);
    void  glDrawTexxvOES (const GLfixed * coords);
    void  glDrawTexfOES (GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
    void  glDrawTexfvOES (const GLfloat * coords);

    // GL_OES_fixed_point
    void  glAlphaFuncxOES (GLenum func, GLfixed ref);
    void  glClearColorxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
    void  glClearDepthxOES (GLfixed depth);
    void  glClipPlanexOES (GLenum plane, const GLfixed * equation);
    void  glColor4xOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
    void  glDepthRangexOES (GLfixed n, GLfixed f);
    void  glFogxOES (GLenum pname, GLfixed param);
    void  glFogxvOES (GLenum pname, const GLfixed * param);
    void  glFrustumxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
    void  glGetClipPlanexOES (GLenum plane, GLfixed * equation);
    void  glGetFixedvOES (GLenum pname, GLfixed * params);
    void  glGetTexEnvxvOES (GLenum target, GLenum pname, GLfixed * params);
    void  glGetTexParameterxvOES (GLenum target, GLenum pname, GLfixed * params);
    void  glLightModelxOES (GLenum pname, GLfixed param);
    void  glLightModelxvOES (GLenum pname, const GLfixed * param);
    void  glLightxOES (GLenum light, GLenum pname, GLfixed param);
    void  glLightxvOES (GLenum light, GLenum pname, const GLfixed * params);
    void  glLineWidthxOES (GLfixed width);
    void  glLoadMatrixxOES (const GLfixed * m);
    void  glMaterialxOES (GLenum face, GLenum pname, GLfixed param);
    void  glMaterialxvOES (GLenum face, GLenum pname, const GLfixed * param);
    void  glMultMatrixxOES (const GLfixed * m);
    void  glMultiTexCoord4xOES (GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
    void  glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz);
    void  glOrthoxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
    void  glPointParameterxvOES (GLenum pname, const GLfixed * params);
    void  glPointSizexOES (GLfixed size);
    void  glPolygonOffsetxOES (GLfixed factor, GLfixed units);
    void  glRotatexOES (GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
    void  glScalexOES (GLfixed x, GLfixed y, GLfixed z);
    void  glTexEnvxOES (GLenum target, GLenum pname, GLfixed param);
    void  glTexEnvxvOES (GLenum target, GLenum pname, const GLfixed * params);
    void  glTexParameterxOES (GLenum target, GLenum pname, GLfixed param);
    void  glTexParameterxvOES (GLenum target, GLenum pname, const GLfixed * params);
    void  glTranslatexOES (GLfixed x, GLfixed y, GLfixed z);
    void  glGetLightxvOES (GLenum light, GLenum pname, GLfixed * params);
    void  glGetMaterialxvOES (GLenum face, GLenum pname, GLfixed * params);
    void  glPointParameterxOES (GLenum pname, GLfixed param);
    void  glSampleCoveragexOES (GLclampx value, GLboolean invert);
    void  glAccumxOES (GLenum op, GLfixed value);
    void  glBitmapxOES (GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte * bitmap);
    void  glBlendColorxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
    void  glClearAccumxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
    void  glColor3xOES (GLfixed red, GLfixed green, GLfixed blue);
    void  glColor3xvOES (const GLfixed * components);
    void  glColor4xvOES (const GLfixed * components);
    void  glConvolutionParameterxOES (GLenum target, GLenum pname, GLfixed param);
    void  glConvolutionParameterxvOES (GLenum target, GLenum pname, const GLfixed * params);
    void  glEvalCoord1xOES (GLfixed u);
    void  glEvalCoord1xvOES (const GLfixed * coords);
    void  glEvalCoord2xOES (GLfixed u, GLfixed v);
    void  glEvalCoord2xvOES (const GLfixed * coords);
    void  glFeedbackBufferxOES (GLsizei n, GLenum type, const GLfixed * buffer);
    void  glGetConvolutionParameterxvOES (GLenum target, GLenum pname, GLfixed * params);
    void  glGetHistogramParameterxvOES (GLenum target, GLenum pname, GLfixed * params);
    void  glGetLightxOES (GLenum light, GLenum pname, GLfixed * params);
    void  glGetMapxvOES (GLenum target, GLenum query, GLfixed * v);
    void  glGetMaterialxOES (GLenum face, GLenum pname, GLfixed param);
    void  glGetPixelMapxv (GLenum map, GLint size, GLfixed * values);
    void  glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed * params);
    void  glGetTexLevelParameterxvOES (GLenum target, GLint level, GLenum pname, GLfixed * params);
    void  glIndexxOES (GLfixed component);
    void  glIndexxvOES (const GLfixed * component);
    void  glLoadTransposeMatrixxOES (const GLfixed * m);
    void  glMap1xOES (GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points);
    void  glMap2xOES (GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points);
    void  glMapGrid1xOES (GLint n, GLfixed u1, GLfixed u2);
    void  glMapGrid2xOES (GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2);
    void  glMultTransposeMatrixxOES (const GLfixed * m);
    void  glMultiTexCoord1xOES (GLenum texture, GLfixed s);
    void  glMultiTexCoord1xvOES (GLenum texture, const GLfixed * coords);
    void  glMultiTexCoord2xOES (GLenum texture, GLfixed s, GLfixed t);
    void  glMultiTexCoord2xvOES (GLenum texture, const GLfixed * coords);
    void  glMultiTexCoord3xOES (GLenum texture, GLfixed s, GLfixed t, GLfixed r);
    void  glMultiTexCoord3xvOES (GLenum texture, const GLfixed * coords);
    void  glMultiTexCoord4xvOES (GLenum texture, const GLfixed * coords);
    void  glNormal3xvOES (const GLfixed * coords);
    void  glPassThroughxOES (GLfixed token);
    void  glPixelMapx (GLenum map, GLint size, const GLfixed * values);
    void  glPixelStorex (GLenum pname, GLfixed param);
    void  glPixelTransferxOES (GLenum pname, GLfixed param);
    void  glPixelZoomxOES (GLfixed xfactor, GLfixed yfactor);
    void  glPrioritizeTexturesxOES (GLsizei n, const GLuint * textures, const GLfixed * priorities);
    void  glRasterPos2xOES (GLfixed x, GLfixed y);
    void  glRasterPos2xvOES (const GLfixed * coords);
    void  glRasterPos3xOES (GLfixed x, GLfixed y, GLfixed z);
    void  glRasterPos3xvOES (const GLfixed * coords);
    void  glRasterPos4xOES (GLfixed x, GLfixed y, GLfixed z, GLfixed w);
    void  glRasterPos4xvOES (const GLfixed * coords);
    void  glRectxOES (GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2);
    void  glRectxvOES (const GLfixed * v1, const GLfixed * v2);
    void  glTexCoord1xOES (GLfixed s);
    void  glTexCoord1xvOES (const GLfixed * coords);
    void  glTexCoord2xOES (GLfixed s, GLfixed t);
    void  glTexCoord2xvOES (const GLfixed * coords);
    void  glTexCoord3xOES (GLfixed s, GLfixed t, GLfixed r);
    void  glTexCoord3xvOES (const GLfixed * coords);
    void  glTexCoord4xOES (GLfixed s, GLfixed t, GLfixed r, GLfixed q);
    void  glTexCoord4xvOES (const GLfixed * coords);
    void  glTexGenxOES (GLenum coord, GLenum pname, GLfixed param);
    void  glTexGenxvOES (GLenum coord, GLenum pname, const GLfixed * params);
    void  glVertex2xOES (GLfixed x);
    void  glVertex2xvOES (const GLfixed * coords);
    void  glVertex3xOES (GLfixed x, GLfixed y);
    void  glVertex3xvOES (const GLfixed * coords);
    void  glVertex4xOES (GLfixed x, GLfixed y, GLfixed z);
    void  glVertex4xvOES (const GLfixed * coords);

    // GL_OES_framebuffer_object
    GLboolean glIsRenderbufferOES (GLuint renderbuffer);
    void  glBindRenderbufferOES (GLenum target, GLuint renderbuffer);
    void  glDeleteRenderbuffersOES (GLsizei n, const GLuint * renderbuffers);
    void  glGenRenderbuffersOES (GLsizei n, GLuint * renderbuffers);
    void  glRenderbufferStorageOES (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
    void  glGetRenderbufferParameterivOES (GLenum target, GLenum pname, GLint * params);
    GLboolean glIsFramebufferOES (GLuint framebuffer);
    void  glBindFramebufferOES (GLenum target, GLuint framebuffer);
    void  glDeleteFramebuffersOES (GLsizei n, const GLuint * framebuffers);
    void  glGenFramebuffersOES (GLsizei n, GLuint * framebuffers);
    GLenum glCheckFramebufferStatusOES (GLenum target);
    void  glFramebufferRenderbufferOES (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    void  glFramebufferTexture2DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    void  glGetFramebufferAttachmentParameterivOES (GLenum target, GLenum attachment, GLenum pname, GLint * params);
    void  glGenerateMipmapOES (GLenum target);

    // GL_OES_geometry_shader
    void  glFramebufferTextureOES (GLenum target, GLenum attachment, GLuint texture, GLint level);

    // GL_OES_get_program_binary
    void  glGetProgramBinaryOES (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
    void  glProgramBinaryOES (GLuint program, GLenum binaryFormat, const void * binary, GLint length);

    // GL_OES_mapbuffer
    void * glMapBufferOES (GLenum target, GLenum access);
    GLboolean glUnmapBufferOES (GLenum target);
    void  glGetBufferPointervOES (GLenum target, GLenum pname, void ** params);

    // GL_OES_matrix_palette
    void  glCurrentPaletteMatrixOES (GLuint matrixpaletteindex);
    void  glLoadPaletteFromModelViewMatrixOES ();
    void  glMatrixIndexPointerOES (GLint size, GLenum type, GLsizei stride, const void * pointer);
    void  glWeightPointerOES (GLint size, GLenum type, GLsizei stride, const void * pointer);

    // GL_OES_point_size_array
    void  glPointSizePointerOES (GLenum type, GLsizei stride, const void * pointer);

    // GL_OES_primitive_bounding_box
    void  glPrimitiveBoundingBoxOES (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

    // GL_OES_query_matrix
    GLbitfield glQueryMatrixxOES (GLfixed * mantissa, GLint * exponent);

    // GL_OES_sample_shading
    void  glMinSampleShadingOES (GLfloat value);

    // GL_OES_single_precision
    void  glClearDepthfOES (GLclampf depth);
    void  glClipPlanefOES (GLenum plane, const GLfloat * equation);
    void  glDepthRangefOES (GLclampf n, GLclampf f);
    void  glFrustumfOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
    void  glGetClipPlanefOES (GLenum plane, GLfloat * equation);
    void  glOrthofOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

    // GL_OES_tessellation_shader
    void  glPatchParameteriOES (GLenum pname, GLint value);

    // GL_OES_texture_3D
    void  glTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
    void  glTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
    void  glCopyTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void  glCompressedTexImage3DOES (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
    void  glCompressedTexSubImage3DOES (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
    void  glFramebufferTexture3DOES (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);

    // GL_OES_texture_border_clamp
    void  glTexParameterIivOES (GLenum target, GLenum pname, const GLint * params);
    void  glTexParameterIuivOES (GLenum target, GLenum pname, const GLuint * params);
    void  glGetTexParameterIivOES (GLenum target, GLenum pname, GLint * params);
    void  glGetTexParameterIuivOES (GLenum target, GLenum pname, GLuint * params);
    void  glSamplerParameterIivOES (GLuint sampler, GLenum pname, const GLint * param);
    void  glSamplerParameterIuivOES (GLuint sampler, GLenum pname, const GLuint * param);
    void  glGetSamplerParameterIivOES (GLuint sampler, GLenum pname, GLint * params);
    void  glGetSamplerParameterIuivOES (GLuint sampler, GLenum pname, GLuint * params);

    // GL_OES_texture_buffer
    void  glTexBufferOES (GLenum target, GLenum internalformat, GLuint buffer);
    void  glTexBufferRangeOES (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

    // GL_OES_texture_cube_map
    void  glTexGenfOES (GLenum coord, GLenum pname, GLfloat param);
    void  glTexGenfvOES (GLenum coord, GLenum pname, const GLfloat * params);
    void  glTexGeniOES (GLenum coord, GLenum pname, GLint param);
    void  glTexGenivOES (GLenum coord, GLenum pname, const GLint * params);
    void  glTexGenxOES (GLenum coord, GLenum pname, GLfixed param);
    void  glTexGenxvOES (GLenum coord, GLenum pname, const GLfixed * params);
    void  glGetTexGenfvOES (GLenum coord, GLenum pname, GLfloat * params);
    void  glGetTexGenivOES (GLenum coord, GLenum pname, GLint * params);
    void  glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed * params);

    // GL_OES_texture_storage_multisample_2d_array
    void  glTexStorage3DMultisampleOES (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

    // GL_OES_texture_view
    void  glTextureViewOES (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

    // GL_OES_vertex_array_object
    void  glBindVertexArrayOES (GLuint array);
    void  glDeleteVertexArraysOES (GLsizei n, const GLuint * arrays);
    void  glGenVertexArraysOES (GLsizei n, GLuint * arrays);
    GLboolean glIsVertexArrayOES (GLuint array);

    // GL_OVR_multiview
    void  glFramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);

    // GL_QCOM_alpha_test
    void  glAlphaFuncQCOM (GLenum func, GLclampf ref);

    // GL_QCOM_driver_control
    void  glGetDriverControlsQCOM (GLint * num, GLsizei size, GLuint * driverControls);
    void  glGetDriverControlStringQCOM (GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString);
    void  glEnableDriverControlQCOM (GLuint driverControl);
    void  glDisableDriverControlQCOM (GLuint driverControl);

    // GL_QCOM_extended_get
    void  glExtGetTexturesQCOM (GLuint * textures, GLint maxTextures, GLint * numTextures);
    void  glExtGetBuffersQCOM (GLuint * buffers, GLint maxBuffers, GLint * numBuffers);
    void  glExtGetRenderbuffersQCOM (GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers);
    void  glExtGetFramebuffersQCOM (GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers);
    void  glExtGetTexLevelParameterivQCOM (GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params);
    void  glExtTexObjectStateOverrideiQCOM (GLenum target, GLenum pname, GLint param);
    void  glExtGetTexSubImageQCOM (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels);
    void  glExtGetBufferPointervQCOM (GLenum target, void ** params);

    // GL_QCOM_extended_get2
    void  glExtGetShadersQCOM (GLuint * shaders, GLint maxShaders, GLint * numShaders);
    void  glExtGetProgramsQCOM (GLuint * programs, GLint maxPrograms, GLint * numPrograms);
    GLboolean glExtIsProgramBinaryQCOM (GLuint program);
    void  glExtGetProgramBinarySourceQCOM (GLuint program, GLenum shadertype, GLchar * source, GLint * length);

    // GL_QCOM_tiled_rendering
    void  glStartTilingQCOM (GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
    void  glEndTilingQCOM (GLbitfield preserveMask);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glAccum glew::gles::glAccum
#define glAccumxOES glew::gles::glAccumxOES
#define glActiveProgramEXT glew::gles::glActiveProgramEXT
#define glActiveShaderProgram glew::gles::glActiveShaderProgram
#define glActiveShaderProgramEXT glew::gles::glActiveShaderProgramEXT
#define glActiveStencilFaceEXT glew::gles::glActiveStencilFaceEXT
#define glActiveTexture glew::gles::glActiveTexture
#define glActiveTextureARB glew::gles::glActiveTextureARB
#define glActiveVaryingNV glew::gles::glActiveVaryingNV
#define glAlphaFragmentOp1ATI glew::gles::glAlphaFragmentOp1ATI
#define glAlphaFragmentOp2ATI glew::gles::glAlphaFragmentOp2ATI
#define glAlphaFragmentOp3ATI glew::gles::glAlphaFragmentOp3ATI
#define glAlphaFunc glew::gles::glAlphaFunc
#define glAlphaFuncQCOM glew::gles::glAlphaFuncQCOM
#define glAlphaFuncx glew::gles::glAlphaFuncx
#define glAlphaFuncxOES glew::gles::glAlphaFuncxOES
#define glApplyTextureEXT glew::gles::glApplyTextureEXT
#define glAreProgramsResidentNV glew::gles::glAreProgramsResidentNV
#define glAreTexturesResident glew::gles::glAreTexturesResident
#define glAreTexturesResidentEXT glew::gles::glAreTexturesResidentEXT
#define glArrayElement glew::gles::glArrayElement
#define glArrayElementEXT glew::gles::glArrayElementEXT
#define glArrayObjectATI glew::gles::glArrayObjectATI
#define glAsyncMarkerSGIX glew::gles::glAsyncMarkerSGIX
#define glAttachObjectARB glew::gles::glAttachObjectARB
#define glAttachShader glew::gles::glAttachShader
#define glBegin glew::gles::glBegin
#define glBeginConditionalRender glew::gles::glBeginConditionalRender
#define glBeginConditionalRenderNV glew::gles::glBeginConditionalRenderNV
#define glBeginConditionalRenderNVX glew::gles::glBeginConditionalRenderNVX
#define glBeginFragmentShaderATI glew::gles::glBeginFragmentShaderATI
#define glBeginOcclusionQueryNV glew::gles::glBeginOcclusionQueryNV
#define glBeginPerfMonitorAMD glew::gles::glBeginPerfMonitorAMD
#define glBeginPerfQueryINTEL glew::gles::glBeginPerfQueryINTEL
#define glBeginQuery glew::gles::glBeginQuery
#define glBeginQueryARB glew::gles::glBeginQueryARB
#define glBeginQueryEXT glew::gles::glBeginQueryEXT
#define glBeginQueryIndexed glew::gles::glBeginQueryIndexed
#define glBeginTransformFeedback glew::gles::glBeginTransformFeedback
#define glBeginTransformFeedbackEXT glew::gles::glBeginTransformFeedbackEXT
#define glBeginTransformFeedbackNV glew::gles::glBeginTransformFeedbackNV
#define glBeginVertexShaderEXT glew::gles::glBeginVertexShaderEXT
#define glBeginVideoCaptureNV glew::gles::glBeginVideoCaptureNV
#define glBindAttribLocation glew::gles::glBindAttribLocation
#define glBindAttribLocationARB glew::gles::glBindAttribLocationARB
#define glBindBuffer glew::gles::glBindBuffer
#define glBindBufferARB glew::gles::glBindBufferARB
#define glBindBufferBase glew::gles::glBindBufferBase
#define glBindBufferBaseEXT glew::gles::glBindBufferBaseEXT
#define glBindBufferBaseNV glew::gles::glBindBufferBaseNV
#define glBindBufferOffsetEXT glew::gles::glBindBufferOffsetEXT
#define glBindBufferOffsetNV glew::gles::glBindBufferOffsetNV
#define glBindBufferRange glew::gles::glBindBufferRange
#define glBindBufferRangeEXT glew::gles::glBindBufferRangeEXT
#define glBindBufferRangeNV glew::gles::glBindBufferRangeNV
#define glBindBuffersBase glew::gles::glBindBuffersBase
#define glBindBuffersRange glew::gles::glBindBuffersRange
#define glBindFragDataLocation glew::gles::glBindFragDataLocation
#define glBindFragDataLocationEXT glew::gles::glBindFragDataLocationEXT
#define glBindFragDataLocationIndexed glew::gles::glBindFragDataLocationIndexed
#define glBindFragmentShaderATI glew::gles::glBindFragmentShaderATI
#define glBindFramebuffer glew::gles::glBindFramebuffer
#define glBindFramebufferEXT glew::gles::glBindFramebufferEXT
#define glBindFramebufferOES glew::gles::glBindFramebufferOES
#define glBindImageTexture glew::gles::glBindImageTexture
#define glBindImageTextureEXT glew::gles::glBindImageTextureEXT
#define glBindImageTextures glew::gles::glBindImageTextures
#define glBindLightParameterEXT glew::gles::glBindLightParameterEXT
#define glBindMaterialParameterEXT glew::gles::glBindMaterialParameterEXT
#define glBindMultiTextureEXT glew::gles::glBindMultiTextureEXT
#define glBindParameterEXT glew::gles::glBindParameterEXT
#define glBindProgramARB glew::gles::glBindProgramARB
#define glBindProgramNV glew::gles::glBindProgramNV
#define glBindProgramPipeline glew::gles::glBindProgramPipeline
#define glBindProgramPipelineEXT glew::gles::glBindProgramPipelineEXT
#define glBindRenderbuffer glew::gles::glBindRenderbuffer
#define glBindRenderbufferEXT glew::gles::glBindRenderbufferEXT
#define glBindRenderbufferOES glew::gles::glBindRenderbufferOES
#define glBindSampler glew::gles::glBindSampler
#define glBindSamplers glew::gles::glBindSamplers
#define glBindTexGenParameterEXT glew::gles::glBindTexGenParameterEXT
#define glBindTexture glew::gles::glBindTexture
#define glBindTextureEXT glew::gles::glBindTextureEXT
#define glBindTextureUnit glew::gles::glBindTextureUnit
#define glBindTextureUnitParameterEXT glew::gles::glBindTextureUnitParameterEXT
#define glBindTextures glew::gles::glBindTextures
#define glBindTransformFeedback glew::gles::glBindTransformFeedback
#define glBindTransformFeedbackNV glew::gles::glBindTransformFeedbackNV
#define glBindVertexArray glew::gles::glBindVertexArray
#define glBindVertexArrayAPPLE glew::gles::glBindVertexArrayAPPLE
#define glBindVertexArrayOES glew::gles::glBindVertexArrayOES
#define glBindVertexBuffer glew::gles::glBindVertexBuffer
#define glBindVertexBuffers glew::gles::glBindVertexBuffers
#define glBindVertexShaderEXT glew::gles::glBindVertexShaderEXT
#define glBindVideoCaptureStreamBufferNV glew::gles::glBindVideoCaptureStreamBufferNV
#define glBindVideoCaptureStreamTextureNV glew::gles::glBindVideoCaptureStreamTextureNV
#define glBinormal3bEXT glew::gles::glBinormal3bEXT
#define glBinormal3bvEXT glew::gles::glBinormal3bvEXT
#define glBinormal3dEXT glew::gles::glBinormal3dEXT
#define glBinormal3dvEXT glew::gles::glBinormal3dvEXT
#define glBinormal3fEXT glew::gles::glBinormal3fEXT
#define glBinormal3fvEXT glew::gles::glBinormal3fvEXT
#define glBinormal3iEXT glew::gles::glBinormal3iEXT
#define glBinormal3ivEXT glew::gles::glBinormal3ivEXT
#define glBinormal3sEXT glew::gles::glBinormal3sEXT
#define glBinormal3svEXT glew::gles::glBinormal3svEXT
#define glBinormalPointerEXT glew::gles::glBinormalPointerEXT
#define glBitmap glew::gles::glBitmap
#define glBitmapxOES glew::gles::glBitmapxOES
#define glBlendBarrierKHR glew::gles::glBlendBarrierKHR
#define glBlendBarrierNV glew::gles::glBlendBarrierNV
#define glBlendColor glew::gles::glBlendColor
#define glBlendColorEXT glew::gles::glBlendColorEXT
#define glBlendColorxOES glew::gles::glBlendColorxOES
#define glBlendEquation glew::gles::glBlendEquation
#define glBlendEquationEXT glew::gles::glBlendEquationEXT
#define glBlendEquationIndexedAMD glew::gles::glBlendEquationIndexedAMD
#define glBlendEquationOES glew::gles::glBlendEquationOES
#define glBlendEquationSeparate glew::gles::glBlendEquationSeparate
#define glBlendEquationSeparateEXT glew::gles::glBlendEquationSeparateEXT
#define glBlendEquationSeparateIndexedAMD glew::gles::glBlendEquationSeparateIndexedAMD
#define glBlendEquationSeparateOES glew::gles::glBlendEquationSeparateOES
#define glBlendEquationSeparatei glew::gles::glBlendEquationSeparatei
#define glBlendEquationSeparateiARB glew::gles::glBlendEquationSeparateiARB
#define glBlendEquationSeparateiEXT glew::gles::glBlendEquationSeparateiEXT
#define glBlendEquationSeparateiOES glew::gles::glBlendEquationSeparateiOES
#define glBlendEquationi glew::gles::glBlendEquationi
#define glBlendEquationiARB glew::gles::glBlendEquationiARB
#define glBlendEquationiEXT glew::gles::glBlendEquationiEXT
#define glBlendEquationiOES glew::gles::glBlendEquationiOES
#define glBlendFunc glew::gles::glBlendFunc
#define glBlendFuncIndexedAMD glew::gles::glBlendFuncIndexedAMD
#define glBlendFuncSeparate glew::gles::glBlendFuncSeparate
#define glBlendFuncSeparateEXT glew::gles::glBlendFuncSeparateEXT
#define glBlendFuncSeparateINGR glew::gles::glBlendFuncSeparateINGR
#define glBlendFuncSeparateIndexedAMD glew::gles::glBlendFuncSeparateIndexedAMD
#define glBlendFuncSeparateOES glew::gles::glBlendFuncSeparateOES
#define glBlendFuncSeparatei glew::gles::glBlendFuncSeparatei
#define glBlendFuncSeparateiARB glew::gles::glBlendFuncSeparateiARB
#define glBlendFuncSeparateiEXT glew::gles::glBlendFuncSeparateiEXT
#define glBlendFuncSeparateiOES glew::gles::glBlendFuncSeparateiOES
#define glBlendFunci glew::gles::glBlendFunci
#define glBlendFunciARB glew::gles::glBlendFunciARB
#define glBlendFunciEXT glew::gles::glBlendFunciEXT
#define glBlendFunciOES glew::gles::glBlendFunciOES
#define glBlendParameteriNV glew::gles::glBlendParameteriNV
#define glBlitFramebuffer glew::gles::glBlitFramebuffer
#define glBlitFramebufferANGLE glew::gles::glBlitFramebufferANGLE
#define glBlitFramebufferEXT glew::gles::glBlitFramebufferEXT
#define glBlitFramebufferNV glew::gles::glBlitFramebufferNV
#define glBlitNamedFramebuffer glew::gles::glBlitNamedFramebuffer
#define glBufferAddressRangeNV glew::gles::glBufferAddressRangeNV
#define glBufferData glew::gles::glBufferData
#define glBufferDataARB glew::gles::glBufferDataARB
#define glBufferPageCommitmentARB glew::gles::glBufferPageCommitmentARB
#define glBufferParameteriAPPLE glew::gles::glBufferParameteriAPPLE
#define glBufferStorage glew::gles::glBufferStorage
#define glBufferStorageEXT glew::gles::glBufferStorageEXT
#define glBufferSubData glew::gles::glBufferSubData
#define glBufferSubDataARB glew::gles::glBufferSubDataARB
#define glCallCommandListNV glew::gles::glCallCommandListNV
#define glCallList glew::gles::glCallList
#define glCallLists glew::gles::glCallLists
#define glCheckFramebufferStatus glew::gles::glCheckFramebufferStatus
#define glCheckFramebufferStatusEXT glew::gles::glCheckFramebufferStatusEXT
#define glCheckFramebufferStatusOES glew::gles::glCheckFramebufferStatusOES
#define glCheckNamedFramebufferStatus glew::gles::glCheckNamedFramebufferStatus
#define glCheckNamedFramebufferStatusEXT glew::gles::glCheckNamedFramebufferStatusEXT
#define glClampColor glew::gles::glClampColor
#define glClampColorARB glew::gles::glClampColorARB
#define glClear glew::gles::glClear
#define glClearAccum glew::gles::glClearAccum
#define glClearAccumxOES glew::gles::glClearAccumxOES
#define glClearBufferData glew::gles::glClearBufferData
#define glClearBufferSubData glew::gles::glClearBufferSubData
#define glClearBufferfi glew::gles::glClearBufferfi
#define glClearBufferfv glew::gles::glClearBufferfv
#define glClearBufferiv glew::gles::glClearBufferiv
#define glClearBufferuiv glew::gles::glClearBufferuiv
#define glClearColor glew::gles::glClearColor
#define glClearColorIiEXT glew::gles::glClearColorIiEXT
#define glClearColorIuiEXT glew::gles::glClearColorIuiEXT
#define glClearColorx glew::gles::glClearColorx
#define glClearColorxOES glew::gles::glClearColorxOES
#define glClearDepth glew::gles::glClearDepth
#define glClearDepthdNV glew::gles::glClearDepthdNV
#define glClearDepthf glew::gles::glClearDepthf
#define glClearDepthfOES glew::gles::glClearDepthfOES
#define glClearDepthx glew::gles::glClearDepthx
#define glClearDepthxOES glew::gles::glClearDepthxOES
#define glClearIndex glew::gles::glClearIndex
#define glClearNamedBufferData glew::gles::glClearNamedBufferData
#define glClearNamedBufferDataEXT glew::gles::glClearNamedBufferDataEXT
#define glClearNamedBufferSubData glew::gles::glClearNamedBufferSubData
#define glClearNamedBufferSubDataEXT glew::gles::glClearNamedBufferSubDataEXT
#define glClearNamedFramebufferfi glew::gles::glClearNamedFramebufferfi
#define glClearNamedFramebufferfv glew::gles::glClearNamedFramebufferfv
#define glClearNamedFramebufferiv glew::gles::glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv glew::gles::glClearNamedFramebufferuiv
#define glClearStencil glew::gles::glClearStencil
#define glClearTexImage glew::gles::glClearTexImage
#define glClearTexSubImage glew::gles::glClearTexSubImage
#define glClientActiveTexture glew::gles::glClientActiveTexture
#define glClientActiveTextureARB glew::gles::glClientActiveTextureARB
#define glClientActiveVertexStreamATI glew::gles::glClientActiveVertexStreamATI
#define glClientAttribDefaultEXT glew::gles::glClientAttribDefaultEXT
#define glClientWaitSync glew::gles::glClientWaitSync
#define glClientWaitSyncAPPLE glew::gles::glClientWaitSyncAPPLE
#define glClipControl glew::gles::glClipControl
#define glClipPlane glew::gles::glClipPlane
#define glClipPlanef glew::gles::glClipPlanef
#define glClipPlanefIMG glew::gles::glClipPlanefIMG
#define glClipPlanefOES glew::gles::glClipPlanefOES
#define glClipPlanex glew::gles::glClipPlanex
#define glClipPlanexIMG glew::gles::glClipPlanexIMG
#define glClipPlanexOES glew::gles::glClipPlanexOES
#define glColor3b glew::gles::glColor3b
#define glColor3bv glew::gles::glColor3bv
#define glColor3d glew::gles::glColor3d
#define glColor3dv glew::gles::glColor3dv
#define glColor3f glew::gles::glColor3f
#define glColor3fVertex3fSUN glew::gles::glColor3fVertex3fSUN
#define glColor3fVertex3fvSUN glew::gles::glColor3fVertex3fvSUN
#define glColor3fv glew::gles::glColor3fv
#define glColor3hNV glew::gles::glColor3hNV
#define glColor3hvNV glew::gles::glColor3hvNV
#define glColor3i glew::gles::glColor3i
#define glColor3iv glew::gles::glColor3iv
#define glColor3s glew::gles::glColor3s
#define glColor3sv glew::gles::glColor3sv
#define glColor3ub glew::gles::glColor3ub
#define glColor3ubv glew::gles::glColor3ubv
#define glColor3ui glew::gles::glColor3ui
#define glColor3uiv glew::gles::glColor3uiv
#define glColor3us glew::gles::glColor3us
#define glColor3usv glew::gles::glColor3usv
#define glColor3xOES glew::gles::glColor3xOES
#define glColor3xvOES glew::gles::glColor3xvOES
#define glColor4b glew::gles::glColor4b
#define glColor4bv glew::gles::glColor4bv
#define glColor4d glew::gles::glColor4d
#define glColor4dv glew::gles::glColor4dv
#define glColor4f glew::gles::glColor4f
#define glColor4fNormal3fVertex3fSUN glew::gles::glColor4fNormal3fVertex3fSUN
#define glColor4fNormal3fVertex3fvSUN glew::gles::glColor4fNormal3fVertex3fvSUN
#define glColor4fv glew::gles::glColor4fv
#define glColor4hNV glew::gles::glColor4hNV
#define glColor4hvNV glew::gles::glColor4hvNV
#define glColor4i glew::gles::glColor4i
#define glColor4iv glew::gles::glColor4iv
#define glColor4s glew::gles::glColor4s
#define glColor4sv glew::gles::glColor4sv
#define glColor4ub glew::gles::glColor4ub
#define glColor4ubVertex2fSUN glew::gles::glColor4ubVertex2fSUN
#define glColor4ubVertex2fvSUN glew::gles::glColor4ubVertex2fvSUN
#define glColor4ubVertex3fSUN glew::gles::glColor4ubVertex3fSUN
#define glColor4ubVertex3fvSUN glew::gles::glColor4ubVertex3fvSUN
#define glColor4ubv glew::gles::glColor4ubv
#define glColor4ui glew::gles::glColor4ui
#define glColor4uiv glew::gles::glColor4uiv
#define glColor4us glew::gles::glColor4us
#define glColor4usv glew::gles::glColor4usv
#define glColor4x glew::gles::glColor4x
#define glColor4xOES glew::gles::glColor4xOES
#define glColor4xvOES glew::gles::glColor4xvOES
#define glColorFormatNV glew::gles::glColorFormatNV
#define glColorFragmentOp1ATI glew::gles::glColorFragmentOp1ATI
#define glColorFragmentOp2ATI glew::gles::glColorFragmentOp2ATI
#define glColorFragmentOp3ATI glew::gles::glColorFragmentOp3ATI
#define glColorMask glew::gles::glColorMask
#define glColorMaskIndexedEXT glew::gles::glColorMaskIndexedEXT
#define glColorMaski glew::gles::glColorMaski
#define glColorMaskiEXT glew::gles::glColorMaskiEXT
#define glColorMaskiOES glew::gles::glColorMaskiOES
#define glColorMaterial glew::gles::glColorMaterial
#define glColorP3ui glew::gles::glColorP3ui
#define glColorP3uiv glew::gles::glColorP3uiv
#define glColorP4ui glew::gles::glColorP4ui
#define glColorP4uiv glew::gles::glColorP4uiv
#define glColorPointer glew::gles::glColorPointer
#define glColorPointerEXT glew::gles::glColorPointerEXT
#define glColorPointerListIBM glew::gles::glColorPointerListIBM
#define glColorPointervINTEL glew::gles::glColorPointervINTEL
#define glColorSubTable glew::gles::glColorSubTable
#define glColorSubTableEXT glew::gles::glColorSubTableEXT
#define glColorTable glew::gles::glColorTable
#define glColorTableEXT glew::gles::glColorTableEXT
#define glColorTableParameterfv glew::gles::glColorTableParameterfv
#define glColorTableParameterfvSGI glew::gles::glColorTableParameterfvSGI
#define glColorTableParameteriv glew::gles::glColorTableParameteriv
#define glColorTableParameterivSGI glew::gles::glColorTableParameterivSGI
#define glColorTableSGI glew::gles::glColorTableSGI
#define glCombinerInputNV glew::gles::glCombinerInputNV
#define glCombinerOutputNV glew::gles::glCombinerOutputNV
#define glCombinerParameterfNV glew::gles::glCombinerParameterfNV
#define glCombinerParameterfvNV glew::gles::glCombinerParameterfvNV
#define glCombinerParameteriNV glew::gles::glCombinerParameteriNV
#define glCombinerParameterivNV glew::gles::glCombinerParameterivNV
#define glCombinerStageParameterfvNV glew::gles::glCombinerStageParameterfvNV
#define glCommandListSegmentsNV glew::gles::glCommandListSegmentsNV
#define glCompileCommandListNV glew::gles::glCompileCommandListNV
#define glCompileShader glew::gles::glCompileShader
#define glCompileShaderARB glew::gles::glCompileShaderARB
#define glCompileShaderIncludeARB glew::gles::glCompileShaderIncludeARB
#define glCompressedMultiTexImage1DEXT glew::gles::glCompressedMultiTexImage1DEXT
#define glCompressedMultiTexImage2DEXT glew::gles::glCompressedMultiTexImage2DEXT
#define glCompressedMultiTexImage3DEXT glew::gles::glCompressedMultiTexImage3DEXT
#define glCompressedMultiTexSubImage1DEXT glew::gles::glCompressedMultiTexSubImage1DEXT
#define glCompressedMultiTexSubImage2DEXT glew::gles::glCompressedMultiTexSubImage2DEXT
#define glCompressedMultiTexSubImage3DEXT glew::gles::glCompressedMultiTexSubImage3DEXT
#define glCompressedTexImage1D glew::gles::glCompressedTexImage1D
#define glCompressedTexImage1DARB glew::gles::glCompressedTexImage1DARB
#define glCompressedTexImage2D glew::gles::glCompressedTexImage2D
#define glCompressedTexImage2DARB glew::gles::glCompressedTexImage2DARB
#define glCompressedTexImage3D glew::gles::glCompressedTexImage3D
#define glCompressedTexImage3DARB glew::gles::glCompressedTexImage3DARB
#define glCompressedTexImage3DOES glew::gles::glCompressedTexImage3DOES
#define glCompressedTexSubImage1D glew::gles::glCompressedTexSubImage1D
#define glCompressedTexSubImage1DARB glew::gles::glCompressedTexSubImage1DARB
#define glCompressedTexSubImage2D glew::gles::glCompressedTexSubImage2D
#define glCompressedTexSubImage2DARB glew::gles::glCompressedTexSubImage2DARB
#define glCompressedTexSubImage3D glew::gles::glCompressedTexSubImage3D
#define glCompressedTexSubImage3DARB glew::gles::glCompressedTexSubImage3DARB
#define glCompressedTexSubImage3DOES glew::gles::glCompressedTexSubImage3DOES
#define glCompressedTextureImage1DEXT glew::gles::glCompressedTextureImage1DEXT
#define glCompressedTextureImage2DEXT glew::gles::glCompressedTextureImage2DEXT
#define glCompressedTextureImage3DEXT glew::gles::glCompressedTextureImage3DEXT
#define glCompressedTextureSubImage1D glew::gles::glCompressedTextureSubImage1D
#define glCompressedTextureSubImage1DEXT glew::gles::glCompressedTextureSubImage1DEXT
#define glCompressedTextureSubImage2D glew::gles::glCompressedTextureSubImage2D
#define glCompressedTextureSubImage2DEXT glew::gles::glCompressedTextureSubImage2DEXT
#define glCompressedTextureSubImage3D glew::gles::glCompressedTextureSubImage3D
#define glCompressedTextureSubImage3DEXT glew::gles::glCompressedTextureSubImage3DEXT
#define glConvolutionFilter1D glew::gles::glConvolutionFilter1D
#define glConvolutionFilter1DEXT glew::gles::glConvolutionFilter1DEXT
#define glConvolutionFilter2D glew::gles::glConvolutionFilter2D
#define glConvolutionFilter2DEXT glew::gles::glConvolutionFilter2DEXT
#define glConvolutionParameterf glew::gles::glConvolutionParameterf
#define glConvolutionParameterfEXT glew::gles::glConvolutionParameterfEXT
#define glConvolutionParameterfv glew::gles::glConvolutionParameterfv
#define glConvolutionParameterfvEXT glew::gles::glConvolutionParameterfvEXT
#define glConvolutionParameteri glew::gles::glConvolutionParameteri
#define glConvolutionParameteriEXT glew::gles::glConvolutionParameteriEXT
#define glConvolutionParameteriv glew::gles::glConvolutionParameteriv
#define glConvolutionParameterivEXT glew::gles::glConvolutionParameterivEXT
#define glConvolutionParameterxOES glew::gles::glConvolutionParameterxOES
#define glConvolutionParameterxvOES glew::gles::glConvolutionParameterxvOES
#define glCopyBufferSubData glew::gles::glCopyBufferSubData
#define glCopyBufferSubDataNV glew::gles::glCopyBufferSubDataNV
#define glCopyColorSubTable glew::gles::glCopyColorSubTable
#define glCopyColorSubTableEXT glew::gles::glCopyColorSubTableEXT
#define glCopyColorTable glew::gles::glCopyColorTable
#define glCopyColorTableSGI glew::gles::glCopyColorTableSGI
#define glCopyConvolutionFilter1D glew::gles::glCopyConvolutionFilter1D
#define glCopyConvolutionFilter1DEXT glew::gles::glCopyConvolutionFilter1DEXT
#define glCopyConvolutionFilter2D glew::gles::glCopyConvolutionFilter2D
#define glCopyConvolutionFilter2DEXT glew::gles::glCopyConvolutionFilter2DEXT
#define glCopyImageSubData glew::gles::glCopyImageSubData
#define glCopyImageSubDataEXT glew::gles::glCopyImageSubDataEXT
#define glCopyImageSubDataOES glew::gles::glCopyImageSubDataOES
#define glCopyImageSubDataNV glew::gles::glCopyImageSubDataNV
#define glCopyMultiTexImage1DEXT glew::gles::glCopyMultiTexImage1DEXT
#define glCopyMultiTexImage2DEXT glew::gles::glCopyMultiTexImage2DEXT
#define glCopyMultiTexSubImage1DEXT glew::gles::glCopyMultiTexSubImage1DEXT
#define glCopyMultiTexSubImage2DEXT glew::gles::glCopyMultiTexSubImage2DEXT
#define glCopyMultiTexSubImage3DEXT glew::gles::glCopyMultiTexSubImage3DEXT
#define glCopyNamedBufferSubData glew::gles::glCopyNamedBufferSubData
#define glCopyPathNV glew::gles::glCopyPathNV
#define glCopyPixels glew::gles::glCopyPixels
#define glCopyTexImage1D glew::gles::glCopyTexImage1D
#define glCopyTexImage1DEXT glew::gles::glCopyTexImage1DEXT
#define glCopyTexImage2D glew::gles::glCopyTexImage2D
#define glCopyTexImage2DEXT glew::gles::glCopyTexImage2DEXT
#define glCopyTexSubImage1D glew::gles::glCopyTexSubImage1D
#define glCopyTexSubImage1DEXT glew::gles::glCopyTexSubImage1DEXT
#define glCopyTexSubImage2D glew::gles::glCopyTexSubImage2D
#define glCopyTexSubImage2DEXT glew::gles::glCopyTexSubImage2DEXT
#define glCopyTexSubImage3D glew::gles::glCopyTexSubImage3D
#define glCopyTexSubImage3DEXT glew::gles::glCopyTexSubImage3DEXT
#define glCopyTexSubImage3DOES glew::gles::glCopyTexSubImage3DOES
#define glCopyTextureImage1DEXT glew::gles::glCopyTextureImage1DEXT
#define glCopyTextureImage2DEXT glew::gles::glCopyTextureImage2DEXT
#define glCopyTextureLevelsAPPLE glew::gles::glCopyTextureLevelsAPPLE
#define glCopyTextureSubImage1D glew::gles::glCopyTextureSubImage1D
#define glCopyTextureSubImage1DEXT glew::gles::glCopyTextureSubImage1DEXT
#define glCopyTextureSubImage2D glew::gles::glCopyTextureSubImage2D
#define glCopyTextureSubImage2DEXT glew::gles::glCopyTextureSubImage2DEXT
#define glCopyTextureSubImage3D glew::gles::glCopyTextureSubImage3D
#define glCopyTextureSubImage3DEXT glew::gles::glCopyTextureSubImage3DEXT
#define glCoverFillPathInstancedNV glew::gles::glCoverFillPathInstancedNV
#define glCoverFillPathNV glew::gles::glCoverFillPathNV
#define glCoverStrokePathInstancedNV glew::gles::glCoverStrokePathInstancedNV
#define glCoverStrokePathNV glew::gles::glCoverStrokePathNV
#define glCoverageMaskNV glew::gles::glCoverageMaskNV
#define glCoverageOperationNV glew::gles::glCoverageOperationNV
#define glCreateBuffers glew::gles::glCreateBuffers
#define glCreateCommandListsNV glew::gles::glCreateCommandListsNV
#define glCreateStatesNV glew::gles::glCreateStatesNV
#define glCreateFramebuffers glew::gles::glCreateFramebuffers
#define glCreatePerfQueryINTEL glew::gles::glCreatePerfQueryINTEL
#define glCreateProgram glew::gles::glCreateProgram
#define glCreateProgramObjectARB glew::gles::glCreateProgramObjectARB
#define glCreateProgramPipelines glew::gles::glCreateProgramPipelines
#define glCreateQueries glew::gles::glCreateQueries
#define glCreateRenderbuffers glew::gles::glCreateRenderbuffers
#define glCreateSamplers glew::gles::glCreateSamplers
#define glCreateShader glew::gles::glCreateShader
#define glCreateShaderObjectARB glew::gles::glCreateShaderObjectARB
#define glCreateShaderProgramEXT glew::gles::glCreateShaderProgramEXT
#define glCreateShaderProgramv glew::gles::glCreateShaderProgramv
#define glCreateShaderProgramvEXT glew::gles::glCreateShaderProgramvEXT
#define glCreateSyncFromCLeventARB glew::gles::glCreateSyncFromCLeventARB
#define glCreateTextures glew::gles::glCreateTextures
#define glCreateTransformFeedbacks glew::gles::glCreateTransformFeedbacks
#define glCreateVertexArrays glew::gles::glCreateVertexArrays
#define glCullFace glew::gles::glCullFace
#define glCullParameterdvEXT glew::gles::glCullParameterdvEXT
#define glCullParameterfvEXT glew::gles::glCullParameterfvEXT
#define glCurrentPaletteMatrixARB glew::gles::glCurrentPaletteMatrixARB
#define glCurrentPaletteMatrixOES glew::gles::glCurrentPaletteMatrixOES
#define glDebugMessageCallback glew::gles::glDebugMessageCallback
#define glDebugMessageCallbackAMD glew::gles::glDebugMessageCallbackAMD
#define glDebugMessageCallbackARB glew::gles::glDebugMessageCallbackARB
#define glDebugMessageCallbackKHR glew::gles::glDebugMessageCallbackKHR
#define glDebugMessageControl glew::gles::glDebugMessageControl
#define glDebugMessageControlARB glew::gles::glDebugMessageControlARB
#define glDebugMessageControlKHR glew::gles::glDebugMessageControlKHR
#define glDebugMessageEnableAMD glew::gles::glDebugMessageEnableAMD
#define glDebugMessageInsert glew::gles::glDebugMessageInsert
#define glDebugMessageInsertAMD glew::gles::glDebugMessageInsertAMD
#define glDebugMessageInsertARB glew::gles::glDebugMessageInsertARB
#define glDebugMessageInsertKHR glew::gles::glDebugMessageInsertKHR
#define glDeformSGIX glew::gles::glDeformSGIX
#define glDeformationMap3dSGIX glew::gles::glDeformationMap3dSGIX
#define glDeformationMap3fSGIX glew::gles::glDeformationMap3fSGIX
#define glDeleteAsyncMarkersSGIX glew::gles::glDeleteAsyncMarkersSGIX
#define glDeleteBuffers glew::gles::glDeleteBuffers
#define glDeleteBuffersARB glew::gles::glDeleteBuffersARB
#define glDeleteCommandListsNV glew::gles::glDeleteCommandListsNV
#define glDeleteStatesNV glew::gles::glDeleteStatesNV
#define glDeleteFencesAPPLE glew::gles::glDeleteFencesAPPLE
#define glDeleteFencesNV glew::gles::glDeleteFencesNV
#define glDeleteFragmentShaderATI glew::gles::glDeleteFragmentShaderATI
#define glDeleteFramebuffers glew::gles::glDeleteFramebuffers
#define glDeleteFramebuffersEXT glew::gles::glDeleteFramebuffersEXT
#define glDeleteFramebuffersOES glew::gles::glDeleteFramebuffersOES
#define glDeleteLists glew::gles::glDeleteLists
#define glDeleteNamedStringARB glew::gles::glDeleteNamedStringARB
#define glDeleteNamesAMD glew::gles::glDeleteNamesAMD
#define glDeleteObjectARB glew::gles::glDeleteObjectARB
#define glDeleteOcclusionQueriesNV glew::gles::glDeleteOcclusionQueriesNV
#define glDeletePathsNV glew::gles::glDeletePathsNV
#define glDeletePerfMonitorsAMD glew::gles::glDeletePerfMonitorsAMD
#define glDeletePerfQueryINTEL glew::gles::glDeletePerfQueryINTEL
#define glDeleteProgram glew::gles::glDeleteProgram
#define glDeleteProgramPipelines glew::gles::glDeleteProgramPipelines
#define glDeleteProgramPipelinesEXT glew::gles::glDeleteProgramPipelinesEXT
#define glDeleteProgramsARB glew::gles::glDeleteProgramsARB
#define glDeleteProgramsNV glew::gles::glDeleteProgramsNV
#define glDeleteQueries glew::gles::glDeleteQueries
#define glDeleteQueriesARB glew::gles::glDeleteQueriesARB
#define glDeleteQueriesEXT glew::gles::glDeleteQueriesEXT
#define glDeleteRenderbuffers glew::gles::glDeleteRenderbuffers
#define glDeleteRenderbuffersEXT glew::gles::glDeleteRenderbuffersEXT
#define glDeleteRenderbuffersOES glew::gles::glDeleteRenderbuffersOES
#define glDeleteSamplers glew::gles::glDeleteSamplers
#define glDeleteShader glew::gles::glDeleteShader
#define glDeleteSync glew::gles::glDeleteSync
#define glDeleteSyncAPPLE glew::gles::glDeleteSyncAPPLE
#define glDeleteTextures glew::gles::glDeleteTextures
#define glDeleteTexturesEXT glew::gles::glDeleteTexturesEXT
#define glDeleteTransformFeedbacks glew::gles::glDeleteTransformFeedbacks
#define glDeleteTransformFeedbacksNV glew::gles::glDeleteTransformFeedbacksNV
#define glDeleteVertexArrays glew::gles::glDeleteVertexArrays
#define glDeleteVertexArraysAPPLE glew::gles::glDeleteVertexArraysAPPLE
#define glDeleteVertexArraysOES glew::gles::glDeleteVertexArraysOES
#define glDeleteVertexShaderEXT glew::gles::glDeleteVertexShaderEXT
#define glDepthBoundsEXT glew::gles::glDepthBoundsEXT
#define glDepthBoundsdNV glew::gles::glDepthBoundsdNV
#define glDepthFunc glew::gles::glDepthFunc
#define glDepthMask glew::gles::glDepthMask
#define glDepthRange glew::gles::glDepthRange
#define glDepthRangeArrayv glew::gles::glDepthRangeArrayv
#define glDepthRangeArrayfvNV glew::gles::glDepthRangeArrayfvNV
#define glDepthRangeIndexed glew::gles::glDepthRangeIndexed
#define glDepthRangeIndexedfNV glew::gles::glDepthRangeIndexedfNV
#define glDepthRangedNV glew::gles::glDepthRangedNV
#define glDepthRangef glew::gles::glDepthRangef
#define glDepthRangefOES glew::gles::glDepthRangefOES
#define glDepthRangex glew::gles::glDepthRangex
#define glDepthRangexOES glew::gles::glDepthRangexOES
#define glDetachObjectARB glew::gles::glDetachObjectARB
#define glDetachShader glew::gles::glDetachShader
#define glDetailTexFuncSGIS glew::gles::glDetailTexFuncSGIS
#define glDisable glew::gles::glDisable
#define glDisableClientState glew::gles::glDisableClientState
#define glDisableClientStateIndexedEXT glew::gles::glDisableClientStateIndexedEXT
#define glDisableClientStateiEXT glew::gles::glDisableClientStateiEXT
#define glDisableDriverControlQCOM glew::gles::glDisableDriverControlQCOM
#define glDisableIndexedEXT glew::gles::glDisableIndexedEXT
#define glDisableVariantClientStateEXT glew::gles::glDisableVariantClientStateEXT
#define glDisableVertexArrayAttrib glew::gles::glDisableVertexArrayAttrib
#define glDisableVertexArrayAttribEXT glew::gles::glDisableVertexArrayAttribEXT
#define glDisableVertexArrayEXT glew::gles::glDisableVertexArrayEXT
#define glDisableVertexAttribAPPLE glew::gles::glDisableVertexAttribAPPLE
#define glDisableVertexAttribArray glew::gles::glDisableVertexAttribArray
#define glDisableVertexAttribArrayARB glew::gles::glDisableVertexAttribArrayARB
#define glDisablei glew::gles::glDisablei
#define glDisableiEXT glew::gles::glDisableiEXT
#define glDisableiNV glew::gles::glDisableiNV
#define glDisableiOES glew::gles::glDisableiOES
#define glDiscardFramebufferEXT glew::gles::glDiscardFramebufferEXT
#define glDispatchCompute glew::gles::glDispatchCompute
#define glDispatchComputeGroupSizeARB glew::gles::glDispatchComputeGroupSizeARB
#define glDispatchComputeIndirect glew::gles::glDispatchComputeIndirect
#define glDrawArrays glew::gles::glDrawArrays
#define glDrawArraysEXT glew::gles::glDrawArraysEXT
#define glDrawArraysIndirect glew::gles::glDrawArraysIndirect
#define glDrawArraysInstanced glew::gles::glDrawArraysInstanced
#define glDrawArraysInstancedANGLE glew::gles::glDrawArraysInstancedANGLE
#define glDrawArraysInstancedARB glew::gles::glDrawArraysInstancedARB
#define glDrawArraysInstancedBaseInstance glew::gles::glDrawArraysInstancedBaseInstance
#define glDrawArraysInstancedBaseInstanceEXT glew::gles::glDrawArraysInstancedBaseInstanceEXT
#define glDrawArraysInstancedEXT glew::gles::glDrawArraysInstancedEXT
#define glDrawArraysInstancedNV glew::gles::glDrawArraysInstancedNV
#define glDrawBuffer glew::gles::glDrawBuffer
#define glDrawBuffers glew::gles::glDrawBuffers
#define glDrawBuffersARB glew::gles::glDrawBuffersARB
#define glDrawBuffersATI glew::gles::glDrawBuffersATI
#define glDrawBuffersEXT glew::gles::glDrawBuffersEXT
#define glDrawBuffersIndexedEXT glew::gles::glDrawBuffersIndexedEXT
#define glDrawBuffersNV glew::gles::glDrawBuffersNV
#define glDrawCommandsNV glew::gles::glDrawCommandsNV
#define glDrawCommandsAddressNV glew::gles::glDrawCommandsAddressNV
#define glDrawCommandsStatesNV glew::gles::glDrawCommandsStatesNV
#define glDrawCommandsStatesAddressNV glew::gles::glDrawCommandsStatesAddressNV
#define glDrawElementArrayAPPLE glew::gles::glDrawElementArrayAPPLE
#define glDrawElementArrayATI glew::gles::glDrawElementArrayATI
#define glDrawElements glew::gles::glDrawElements
#define glDrawElementsBaseVertex glew::gles::glDrawElementsBaseVertex
#define glDrawElementsBaseVertexEXT glew::gles::glDrawElementsBaseVertexEXT
#define glDrawElementsBaseVertexOES glew::gles::glDrawElementsBaseVertexOES
#define glDrawElementsIndirect glew::gles::glDrawElementsIndirect
#define glDrawElementsInstanced glew::gles::glDrawElementsInstanced
#define glDrawElementsInstancedANGLE glew::gles::glDrawElementsInstancedANGLE
#define glDrawElementsInstancedARB glew::gles::glDrawElementsInstancedARB
#define glDrawElementsInstancedBaseInstance glew::gles::glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseInstanceEXT glew::gles::glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseVertex glew::gles::glDrawElementsInstancedBaseVertex
#define glDrawElementsInstancedBaseVertexEXT glew::gles::glDrawElementsInstancedBaseVertexEXT
#define glDrawElementsInstancedBaseVertexOES glew::gles::glDrawElementsInstancedBaseVertexOES
#define glDrawElementsInstancedBaseVertexBaseInstance glew::gles::glDrawElementsInstancedBaseVertexBaseInstance
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT glew::gles::glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glDrawElementsInstancedEXT glew::gles::glDrawElementsInstancedEXT
#define glDrawElementsInstancedNV glew::gles::glDrawElementsInstancedNV
#define glDrawMeshArraysSUN glew::gles::glDrawMeshArraysSUN
#define glDrawPixels glew::gles::glDrawPixels
#define glDrawRangeElementArrayAPPLE glew::gles::glDrawRangeElementArrayAPPLE
#define glDrawRangeElementArrayATI glew::gles::glDrawRangeElementArrayATI
#define glDrawRangeElements glew::gles::glDrawRangeElements
#define glDrawRangeElementsBaseVertex glew::gles::glDrawRangeElementsBaseVertex
#define glDrawRangeElementsBaseVertexEXT glew::gles::glDrawRangeElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexOES glew::gles::glDrawRangeElementsBaseVertexOES
#define glDrawRangeElementsEXT glew::gles::glDrawRangeElementsEXT
#define glDrawTexfOES glew::gles::glDrawTexfOES
#define glDrawTexfvOES glew::gles::glDrawTexfvOES
#define glDrawTexiOES glew::gles::glDrawTexiOES
#define glDrawTexivOES glew::gles::glDrawTexivOES
#define glDrawTexsOES glew::gles::glDrawTexsOES
#define glDrawTexsvOES glew::gles::glDrawTexsvOES
#define glDrawTextureNV glew::gles::glDrawTextureNV
#define glDrawTexxOES glew::gles::glDrawTexxOES
#define glDrawTexxvOES glew::gles::glDrawTexxvOES
#define glDrawTransformFeedback glew::gles::glDrawTransformFeedback
#define glDrawTransformFeedbackInstanced glew::gles::glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackNV glew::gles::glDrawTransformFeedbackNV
#define glDrawTransformFeedbackStream glew::gles::glDrawTransformFeedbackStream
#define glDrawTransformFeedbackStreamInstanced glew::gles::glDrawTransformFeedbackStreamInstanced
#define glEGLImageTargetRenderbufferStorageOES glew::gles::glEGLImageTargetRenderbufferStorageOES
#define glEGLImageTargetTexture2DOES glew::gles::glEGLImageTargetTexture2DOES
#define glEdgeFlag glew::gles::glEdgeFlag
#define glEdgeFlagFormatNV glew::gles::glEdgeFlagFormatNV
#define glEdgeFlagPointer glew::gles::glEdgeFlagPointer
#define glEdgeFlagPointerEXT glew::gles::glEdgeFlagPointerEXT
#define glEdgeFlagPointerListIBM glew::gles::glEdgeFlagPointerListIBM
#define glEdgeFlagv glew::gles::glEdgeFlagv
#define glElementPointerAPPLE glew::gles::glElementPointerAPPLE
#define glElementPointerATI glew::gles::glElementPointerATI
#define glEnable glew::gles::glEnable
#define glEnableClientState glew::gles::glEnableClientState
#define glEnableClientStateIndexedEXT glew::gles::glEnableClientStateIndexedEXT
#define glEnableClientStateiEXT glew::gles::glEnableClientStateiEXT
#define glEnableDriverControlQCOM glew::gles::glEnableDriverControlQCOM
#define glEnableIndexedEXT glew::gles::glEnableIndexedEXT
#define glEnableVariantClientStateEXT glew::gles::glEnableVariantClientStateEXT
#define glEnableVertexArrayAttrib glew::gles::glEnableVertexArrayAttrib
#define glEnableVertexArrayAttribEXT glew::gles::glEnableVertexArrayAttribEXT
#define glEnableVertexArrayEXT glew::gles::glEnableVertexArrayEXT
#define glEnableVertexAttribAPPLE glew::gles::glEnableVertexAttribAPPLE
#define glEnableVertexAttribArray glew::gles::glEnableVertexAttribArray
#define glEnableVertexAttribArrayARB glew::gles::glEnableVertexAttribArrayARB
#define glEnablei glew::gles::glEnablei
#define glEnableiEXT glew::gles::glEnableiEXT
#define glEnableiNV glew::gles::glEnableiNV
#define glEnableiOES glew::gles::glEnableiOES
#define glEnd glew::gles::glEnd
#define glEndConditionalRender glew::gles::glEndConditionalRender
#define glEndConditionalRenderNV glew::gles::glEndConditionalRenderNV
#define glEndConditionalRenderNVX glew::gles::glEndConditionalRenderNVX
#define glEndFragmentShaderATI glew::gles::glEndFragmentShaderATI
#define glEndList glew::gles::glEndList
#define glEndOcclusionQueryNV glew::gles::glEndOcclusionQueryNV
#define glEndPerfMonitorAMD glew::gles::glEndPerfMonitorAMD
#define glEndPerfQueryINTEL glew::gles::glEndPerfQueryINTEL
#define glEndQuery glew::gles::glEndQuery
#define glEndQueryARB glew::gles::glEndQueryARB
#define glEndQueryEXT glew::gles::glEndQueryEXT
#define glEndQueryIndexed glew::gles::glEndQueryIndexed
#define glEndTilingQCOM glew::gles::glEndTilingQCOM
#define glEndTransformFeedback glew::gles::glEndTransformFeedback
#define glEndTransformFeedbackEXT glew::gles::glEndTransformFeedbackEXT
#define glEndTransformFeedbackNV glew::gles::glEndTransformFeedbackNV
#define glEndVertexShaderEXT glew::gles::glEndVertexShaderEXT
#define glEndVideoCaptureNV glew::gles::glEndVideoCaptureNV
#define glEvalCoord1d glew::gles::glEvalCoord1d
#define glEvalCoord1dv glew::gles::glEvalCoord1dv
#define glEvalCoord1f glew::gles::glEvalCoord1f
#define glEvalCoord1fv glew::gles::glEvalCoord1fv
#define glEvalCoord1xOES glew::gles::glEvalCoord1xOES
#define glEvalCoord1xvOES glew::gles::glEvalCoord1xvOES
#define glEvalCoord2d glew::gles::glEvalCoord2d
#define glEvalCoord2dv glew::gles::glEvalCoord2dv
#define glEvalCoord2f glew::gles::glEvalCoord2f
#define glEvalCoord2fv glew::gles::glEvalCoord2fv
#define glEvalCoord2xOES glew::gles::glEvalCoord2xOES
#define glEvalCoord2xvOES glew::gles::glEvalCoord2xvOES
#define glEvalMapsNV glew::gles::glEvalMapsNV
#define glEvalMesh1 glew::gles::glEvalMesh1
#define glEvalMesh2 glew::gles::glEvalMesh2
#define glEvalPoint1 glew::gles::glEvalPoint1
#define glEvalPoint2 glew::gles::glEvalPoint2
#define glExecuteProgramNV glew::gles::glExecuteProgramNV
#define glExtGetBufferPointervQCOM glew::gles::glExtGetBufferPointervQCOM
#define glExtGetBuffersQCOM glew::gles::glExtGetBuffersQCOM
#define glExtGetFramebuffersQCOM glew::gles::glExtGetFramebuffersQCOM
#define glExtGetProgramBinarySourceQCOM glew::gles::glExtGetProgramBinarySourceQCOM
#define glExtGetProgramsQCOM glew::gles::glExtGetProgramsQCOM
#define glExtGetRenderbuffersQCOM glew::gles::glExtGetRenderbuffersQCOM
#define glExtGetShadersQCOM glew::gles::glExtGetShadersQCOM
#define glExtGetTexLevelParameterivQCOM glew::gles::glExtGetTexLevelParameterivQCOM
#define glExtGetTexSubImageQCOM glew::gles::glExtGetTexSubImageQCOM
#define glExtGetTexturesQCOM glew::gles::glExtGetTexturesQCOM
#define glExtIsProgramBinaryQCOM glew::gles::glExtIsProgramBinaryQCOM
#define glExtTexObjectStateOverrideiQCOM glew::gles::glExtTexObjectStateOverrideiQCOM
#define glExtractComponentEXT glew::gles::glExtractComponentEXT
#define glFeedbackBuffer glew::gles::glFeedbackBuffer
#define glFeedbackBufferxOES glew::gles::glFeedbackBufferxOES
#define glFenceSync glew::gles::glFenceSync
#define glFenceSyncAPPLE glew::gles::glFenceSyncAPPLE
#define glFinalCombinerInputNV glew::gles::glFinalCombinerInputNV
#define glFinish glew::gles::glFinish
#define glFinishAsyncSGIX glew::gles::glFinishAsyncSGIX
#define glFinishFenceAPPLE glew::gles::glFinishFenceAPPLE
#define glFinishFenceNV glew::gles::glFinishFenceNV
#define glFinishObjectAPPLE glew::gles::glFinishObjectAPPLE
#define glFinishTextureSUNX glew::gles::glFinishTextureSUNX
#define glFlush glew::gles::glFlush
#define glFlushMappedBufferRange glew::gles::glFlushMappedBufferRange
#define glFlushMappedBufferRangeAPPLE glew::gles::glFlushMappedBufferRangeAPPLE
#define glFlushMappedBufferRangeEXT glew::gles::glFlushMappedBufferRangeEXT
#define glFlushMappedNamedBufferRange glew::gles::glFlushMappedNamedBufferRange
#define glFlushMappedNamedBufferRangeEXT glew::gles::glFlushMappedNamedBufferRangeEXT
#define glFlushPixelDataRangeNV glew::gles::glFlushPixelDataRangeNV
#define glFlushRasterSGIX glew::gles::glFlushRasterSGIX
#define glFlushStaticDataIBM glew::gles::glFlushStaticDataIBM
#define glFlushVertexArrayRangeAPPLE glew::gles::glFlushVertexArrayRangeAPPLE
#define glFlushVertexArrayRangeNV glew::gles::glFlushVertexArrayRangeNV
#define glFogCoordFormatNV glew::gles::glFogCoordFormatNV
#define glFogCoordPointer glew::gles::glFogCoordPointer
#define glFogCoordPointerEXT glew::gles::glFogCoordPointerEXT
#define glFogCoordPointerListIBM glew::gles::glFogCoordPointerListIBM
#define glFogCoordd glew::gles::glFogCoordd
#define glFogCoorddEXT glew::gles::glFogCoorddEXT
#define glFogCoorddv glew::gles::glFogCoorddv
#define glFogCoorddvEXT glew::gles::glFogCoorddvEXT
#define glFogCoordf glew::gles::glFogCoordf
#define glFogCoordfEXT glew::gles::glFogCoordfEXT
#define glFogCoordfv glew::gles::glFogCoordfv
#define glFogCoordfvEXT glew::gles::glFogCoordfvEXT
#define glFogCoordhNV glew::gles::glFogCoordhNV
#define glFogCoordhvNV glew::gles::glFogCoordhvNV
#define glFogFuncSGIS glew::gles::glFogFuncSGIS
#define glFogf glew::gles::glFogf
#define glFogfv glew::gles::glFogfv
#define glFogi glew::gles::glFogi
#define glFogiv glew::gles::glFogiv
#define glFogx glew::gles::glFogx
#define glFogxOES glew::gles::glFogxOES
#define glFogxv glew::gles::glFogxv
#define glFogxvOES glew::gles::glFogxvOES
#define glFragmentColorMaterialSGIX glew::gles::glFragmentColorMaterialSGIX
#define glFragmentLightModelfSGIX glew::gles::glFragmentLightModelfSGIX
#define glFragmentLightModelfvSGIX glew::gles::glFragmentLightModelfvSGIX
#define glFragmentLightModeliSGIX glew::gles::glFragmentLightModeliSGIX
#define glFragmentLightModelivSGIX glew::gles::glFragmentLightModelivSGIX
#define glFragmentLightfSGIX glew::gles::glFragmentLightfSGIX
#define glFragmentLightfvSGIX glew::gles::glFragmentLightfvSGIX
#define glFragmentLightiSGIX glew::gles::glFragmentLightiSGIX
#define glFragmentLightivSGIX glew::gles::glFragmentLightivSGIX
#define glFragmentMaterialfSGIX glew::gles::glFragmentMaterialfSGIX
#define glFragmentMaterialfvSGIX glew::gles::glFragmentMaterialfvSGIX
#define glFragmentMaterialiSGIX glew::gles::glFragmentMaterialiSGIX
#define glFragmentMaterialivSGIX glew::gles::glFragmentMaterialivSGIX
#define glFrameTerminatorGREMEDY glew::gles::glFrameTerminatorGREMEDY
#define glFrameZoomSGIX glew::gles::glFrameZoomSGIX
#define glFramebufferDrawBufferEXT glew::gles::glFramebufferDrawBufferEXT
#define glFramebufferDrawBuffersEXT glew::gles::glFramebufferDrawBuffersEXT
#define glFramebufferParameteri glew::gles::glFramebufferParameteri
#define glFramebufferReadBufferEXT glew::gles::glFramebufferReadBufferEXT
#define glFramebufferRenderbuffer glew::gles::glFramebufferRenderbuffer
#define glFramebufferRenderbufferEXT glew::gles::glFramebufferRenderbufferEXT
#define glFramebufferRenderbufferOES glew::gles::glFramebufferRenderbufferOES
#define glFramebufferTexture glew::gles::glFramebufferTexture
#define glFramebufferTexture1D glew::gles::glFramebufferTexture1D
#define glFramebufferTexture1DEXT glew::gles::glFramebufferTexture1DEXT
#define glFramebufferTexture2D glew::gles::glFramebufferTexture2D
#define glFramebufferTexture2DEXT glew::gles::glFramebufferTexture2DEXT
#define glFramebufferTexture2DMultisampleEXT glew::gles::glFramebufferTexture2DMultisampleEXT
#define glFramebufferTexture2DMultisampleIMG glew::gles::glFramebufferTexture2DMultisampleIMG
#define glFramebufferTexture2DOES glew::gles::glFramebufferTexture2DOES
#define glFramebufferTexture3D glew::gles::glFramebufferTexture3D
#define glFramebufferTexture3DEXT glew::gles::glFramebufferTexture3DEXT
#define glFramebufferTexture3DOES glew::gles::glFramebufferTexture3DOES
#define glFramebufferTextureARB glew::gles::glFramebufferTextureARB
#define glFramebufferTextureEXT glew::gles::glFramebufferTextureEXT
#define glFramebufferTextureOES glew::gles::glFramebufferTextureOES
#define glFramebufferTextureFaceARB glew::gles::glFramebufferTextureFaceARB
#define glFramebufferTextureFaceEXT glew::gles::glFramebufferTextureFaceEXT
#define glFramebufferTextureLayer glew::gles::glFramebufferTextureLayer
#define glFramebufferTextureLayerARB glew::gles::glFramebufferTextureLayerARB
#define glFramebufferTextureLayerEXT glew::gles::glFramebufferTextureLayerEXT
#define glFramebufferTextureMultiviewOVR glew::gles::glFramebufferTextureMultiviewOVR
#define glFreeObjectBufferATI glew::gles::glFreeObjectBufferATI
#define glFrontFace glew::gles::glFrontFace
#define glFrustum glew::gles::glFrustum
#define glFrustumf glew::gles::glFrustumf
#define glFrustumfOES glew::gles::glFrustumfOES
#define glFrustumx glew::gles::glFrustumx
#define glFrustumxOES glew::gles::glFrustumxOES
#define glGenAsyncMarkersSGIX glew::gles::glGenAsyncMarkersSGIX
#define glGenBuffers glew::gles::glGenBuffers
#define glGenBuffersARB glew::gles::glGenBuffersARB
#define glGenFencesAPPLE glew::gles::glGenFencesAPPLE
#define glGenFencesNV glew::gles::glGenFencesNV
#define glGenFragmentShadersATI glew::gles::glGenFragmentShadersATI
#define glGenFramebuffers glew::gles::glGenFramebuffers
#define glGenFramebuffersEXT glew::gles::glGenFramebuffersEXT
#define glGenFramebuffersOES glew::gles::glGenFramebuffersOES
#define glGenLists glew::gles::glGenLists
#define glGenNamesAMD glew::gles::glGenNamesAMD
#define glGenOcclusionQueriesNV glew::gles::glGenOcclusionQueriesNV
#define glGenPathsNV glew::gles::glGenPathsNV
#define glGenPerfMonitorsAMD glew::gles::glGenPerfMonitorsAMD
#define glGenProgramPipelines glew::gles::glGenProgramPipelines
#define glGenProgramPipelinesEXT glew::gles::glGenProgramPipelinesEXT
#define glGenProgramsARB glew::gles::glGenProgramsARB
#define glGenProgramsNV glew::gles::glGenProgramsNV
#define glGenQueries glew::gles::glGenQueries
#define glGenQueriesARB glew::gles::glGenQueriesARB
#define glGenQueriesEXT glew::gles::glGenQueriesEXT
#define glGenRenderbuffers glew::gles::glGenRenderbuffers
#define glGenRenderbuffersEXT glew::gles::glGenRenderbuffersEXT
#define glGenRenderbuffersOES glew::gles::glGenRenderbuffersOES
#define glGenSamplers glew::gles::glGenSamplers
#define glGenSymbolsEXT glew::gles::glGenSymbolsEXT
#define glGenTextures glew::gles::glGenTextures
#define glGenTexturesEXT glew::gles::glGenTexturesEXT
#define glGenTransformFeedbacks glew::gles::glGenTransformFeedbacks
#define glGenTransformFeedbacksNV glew::gles::glGenTransformFeedbacksNV
#define glGenVertexArrays glew::gles::glGenVertexArrays
#define glGenVertexArraysAPPLE glew::gles::glGenVertexArraysAPPLE
#define glGenVertexArraysOES glew::gles::glGenVertexArraysOES
#define glGenVertexShadersEXT glew::gles::glGenVertexShadersEXT
#define glGenerateMipmap glew::gles::glGenerateMipmap
#define glGenerateMipmapEXT glew::gles::glGenerateMipmapEXT
#define glGenerateMipmapOES glew::gles::glGenerateMipmapOES
#define glGenerateMultiTexMipmapEXT glew::gles::glGenerateMultiTexMipmapEXT
#define glGenerateTextureMipmap glew::gles::glGenerateTextureMipmap
#define glGenerateTextureMipmapEXT glew::gles::glGenerateTextureMipmapEXT
#define glGetActiveAtomicCounterBufferiv glew::gles::glGetActiveAtomicCounterBufferiv
#define glGetActiveAttrib glew::gles::glGetActiveAttrib
#define glGetActiveAttribARB glew::gles::glGetActiveAttribARB
#define glGetActiveSubroutineName glew::gles::glGetActiveSubroutineName
#define glGetActiveSubroutineUniformName glew::gles::glGetActiveSubroutineUniformName
#define glGetActiveSubroutineUniformiv glew::gles::glGetActiveSubroutineUniformiv
#define glGetActiveUniform glew::gles::glGetActiveUniform
#define glGetActiveUniformARB glew::gles::glGetActiveUniformARB
#define glGetActiveUniformBlockName glew::gles::glGetActiveUniformBlockName
#define glGetActiveUniformBlockiv glew::gles::glGetActiveUniformBlockiv
#define glGetActiveUniformName glew::gles::glGetActiveUniformName
#define glGetActiveUniformsiv glew::gles::glGetActiveUniformsiv
#define glGetActiveVaryingNV glew::gles::glGetActiveVaryingNV
#define glGetArrayObjectfvATI glew::gles::glGetArrayObjectfvATI
#define glGetArrayObjectivATI glew::gles::glGetArrayObjectivATI
#define glGetAttachedObjectsARB glew::gles::glGetAttachedObjectsARB
#define glGetAttachedShaders glew::gles::glGetAttachedShaders
#define glGetAttribLocation glew::gles::glGetAttribLocation
#define glGetAttribLocationARB glew::gles::glGetAttribLocationARB
#define glGetBooleanIndexedvEXT glew::gles::glGetBooleanIndexedvEXT
#define glGetBooleani_v glew::gles::glGetBooleani_v
#define glGetBooleanv glew::gles::glGetBooleanv
#define glGetBufferParameteri64v glew::gles::glGetBufferParameteri64v
#define glGetBufferParameteriv glew::gles::glGetBufferParameteriv
#define glGetBufferParameterivARB glew::gles::glGetBufferParameterivARB
#define glGetBufferParameterui64vNV glew::gles::glGetBufferParameterui64vNV
#define glGetBufferPointerv glew::gles::glGetBufferPointerv
#define glGetBufferPointervARB glew::gles::glGetBufferPointervARB
#define glGetBufferPointervOES glew::gles::glGetBufferPointervOES
#define glGetBufferSubData glew::gles::glGetBufferSubData
#define glGetBufferSubDataARB glew::gles::glGetBufferSubDataARB
#define glGetClipPlane glew::gles::glGetClipPlane
#define glGetClipPlanef glew::gles::glGetClipPlanef
#define glGetClipPlanefOES glew::gles::glGetClipPlanefOES
#define glGetClipPlanex glew::gles::glGetClipPlanex
#define glGetClipPlanexOES glew::gles::glGetClipPlanexOES
#define glGetColorTable glew::gles::glGetColorTable
#define glGetColorTableEXT glew::gles::glGetColorTableEXT
#define glGetColorTableParameterfv glew::gles::glGetColorTableParameterfv
#define glGetColorTableParameterfvEXT glew::gles::glGetColorTableParameterfvEXT
#define glGetColorTableParameterfvSGI glew::gles::glGetColorTableParameterfvSGI
#define glGetColorTableParameteriv glew::gles::glGetColorTableParameteriv
#define glGetColorTableParameterivEXT glew::gles::glGetColorTableParameterivEXT
#define glGetColorTableParameterivSGI glew::gles::glGetColorTableParameterivSGI
#define glGetColorTableSGI glew::gles::glGetColorTableSGI
#define glGetCombinerInputParameterfvNV glew::gles::glGetCombinerInputParameterfvNV
#define glGetCombinerInputParameterivNV glew::gles::glGetCombinerInputParameterivNV
#define glGetCombinerOutputParameterfvNV glew::gles::glGetCombinerOutputParameterfvNV
#define glGetCombinerOutputParameterivNV glew::gles::glGetCombinerOutputParameterivNV
#define glGetCombinerStageParameterfvNV glew::gles::glGetCombinerStageParameterfvNV
#define glGetCommandHeaderNV glew::gles::glGetCommandHeaderNV
#define glGetCompressedMultiTexImageEXT glew::gles::glGetCompressedMultiTexImageEXT
#define glGetCompressedTexImage glew::gles::glGetCompressedTexImage
#define glGetCompressedTexImageARB glew::gles::glGetCompressedTexImageARB
#define glGetCompressedTextureImage glew::gles::glGetCompressedTextureImage
#define glGetCompressedTextureImageEXT glew::gles::glGetCompressedTextureImageEXT
#define glGetCompressedTextureSubImage glew::gles::glGetCompressedTextureSubImage
#define glGetConvolutionFilter glew::gles::glGetConvolutionFilter
#define glGetConvolutionFilterEXT glew::gles::glGetConvolutionFilterEXT
#define glGetConvolutionParameterfv glew::gles::glGetConvolutionParameterfv
#define glGetConvolutionParameterfvEXT glew::gles::glGetConvolutionParameterfvEXT
#define glGetConvolutionParameteriv glew::gles::glGetConvolutionParameteriv
#define glGetConvolutionParameterivEXT glew::gles::glGetConvolutionParameterivEXT
#define glGetConvolutionParameterxvOES glew::gles::glGetConvolutionParameterxvOES
#define glGetDebugMessageLog glew::gles::glGetDebugMessageLog
#define glGetDebugMessageLogAMD glew::gles::glGetDebugMessageLogAMD
#define glGetDebugMessageLogARB glew::gles::glGetDebugMessageLogARB
#define glGetDebugMessageLogKHR glew::gles::glGetDebugMessageLogKHR
#define glGetDetailTexFuncSGIS glew::gles::glGetDetailTexFuncSGIS
#define glGetDoubleIndexedvEXT glew::gles::glGetDoubleIndexedvEXT
#define glGetDoublei_v glew::gles::glGetDoublei_v
#define glGetDoublei_vEXT glew::gles::glGetDoublei_vEXT
#define glGetDoublev glew::gles::glGetDoublev
#define glGetDriverControlStringQCOM glew::gles::glGetDriverControlStringQCOM
#define glGetDriverControlsQCOM glew::gles::glGetDriverControlsQCOM
#define glGetError glew::gles::glGetError
#define glGetFenceivNV glew::gles::glGetFenceivNV
#define glGetFinalCombinerInputParameterfvNV glew::gles::glGetFinalCombinerInputParameterfvNV
#define glGetFinalCombinerInputParameterivNV glew::gles::glGetFinalCombinerInputParameterivNV
#define glGetFirstPerfQueryIdINTEL glew::gles::glGetFirstPerfQueryIdINTEL
#define glGetFixedv glew::gles::glGetFixedv
#define glGetFixedvOES glew::gles::glGetFixedvOES
#define glGetFloatIndexedvEXT glew::gles::glGetFloatIndexedvEXT
#define glGetFloati_v glew::gles::glGetFloati_v
#define glGetFloati_vNV glew::gles::glGetFloati_vNV
#define glGetFloati_vEXT glew::gles::glGetFloati_vEXT
#define glGetFloatv glew::gles::glGetFloatv
#define glGetFogFuncSGIS glew::gles::glGetFogFuncSGIS
#define glGetFragDataIndex glew::gles::glGetFragDataIndex
#define glGetFragDataLocation glew::gles::glGetFragDataLocation
#define glGetFragDataLocationEXT glew::gles::glGetFragDataLocationEXT
#define glGetFragmentLightfvSGIX glew::gles::glGetFragmentLightfvSGIX
#define glGetFragmentLightivSGIX glew::gles::glGetFragmentLightivSGIX
#define glGetFragmentMaterialfvSGIX glew::gles::glGetFragmentMaterialfvSGIX
#define glGetFragmentMaterialivSGIX glew::gles::glGetFragmentMaterialivSGIX
#define glGetFramebufferAttachmentParameteriv glew::gles::glGetFramebufferAttachmentParameteriv
#define glGetFramebufferAttachmentParameterivEXT glew::gles::glGetFramebufferAttachmentParameterivEXT
#define glGetFramebufferAttachmentParameterivOES glew::gles::glGetFramebufferAttachmentParameterivOES
#define glGetFramebufferParameteriv glew::gles::glGetFramebufferParameteriv
#define glGetFramebufferParameterivEXT glew::gles::glGetFramebufferParameterivEXT
#define glGetGraphicsResetStatus glew::gles::glGetGraphicsResetStatus
#define glGetGraphicsResetStatusARB glew::gles::glGetGraphicsResetStatusARB
#define glGetGraphicsResetStatusEXT glew::gles::glGetGraphicsResetStatusEXT
#define glGetGraphicsResetStatusKHR glew::gles::glGetGraphicsResetStatusKHR
#define glGetHandleARB glew::gles::glGetHandleARB
#define glGetHistogram glew::gles::glGetHistogram
#define glGetHistogramEXT glew::gles::glGetHistogramEXT
#define glGetHistogramParameterfv glew::gles::glGetHistogramParameterfv
#define glGetHistogramParameterfvEXT glew::gles::glGetHistogramParameterfvEXT
#define glGetHistogramParameteriv glew::gles::glGetHistogramParameteriv
#define glGetHistogramParameterivEXT glew::gles::glGetHistogramParameterivEXT
#define glGetHistogramParameterxvOES glew::gles::glGetHistogramParameterxvOES
#define glGetImageHandleARB glew::gles::glGetImageHandleARB
#define glGetImageHandleNV glew::gles::glGetImageHandleNV
#define glGetImageTransformParameterfvHP glew::gles::glGetImageTransformParameterfvHP
#define glGetImageTransformParameterivHP glew::gles::glGetImageTransformParameterivHP
#define glGetInfoLogARB glew::gles::glGetInfoLogARB
#define glGetInstrumentsSGIX glew::gles::glGetInstrumentsSGIX
#define glGetInteger64i_v glew::gles::glGetInteger64i_v
#define glGetInteger64v glew::gles::glGetInteger64v
#define glGetInteger64vAPPLE glew::gles::glGetInteger64vAPPLE
#define glGetIntegerIndexedvEXT glew::gles::glGetIntegerIndexedvEXT
#define glGetIntegeri_v glew::gles::glGetIntegeri_v
#define glGetIntegeri_vEXT glew::gles::glGetIntegeri_vEXT
#define glGetIntegerui64i_vNV glew::gles::glGetIntegerui64i_vNV
#define glGetIntegerui64vNV glew::gles::glGetIntegerui64vNV
#define glGetIntegerv glew::gles::glGetIntegerv
#define glGetInternalformati64v glew::gles::glGetInternalformati64v
#define glGetInternalformativ glew::gles::glGetInternalformativ
#define glGetInternalformatSampleivNV glew::gles::glGetInternalformatSampleivNV
#define glGetInvariantBooleanvEXT glew::gles::glGetInvariantBooleanvEXT
#define glGetInvariantFloatvEXT glew::gles::glGetInvariantFloatvEXT
#define glGetInvariantIntegervEXT glew::gles::glGetInvariantIntegervEXT
#define glGetLightfv glew::gles::glGetLightfv
#define glGetLightiv glew::gles::glGetLightiv
#define glGetLightxOES glew::gles::glGetLightxOES
#define glGetLightxv glew::gles::glGetLightxv
#define glGetLightxvOES glew::gles::glGetLightxvOES
#define glGetListParameterfvSGIX glew::gles::glGetListParameterfvSGIX
#define glGetListParameterivSGIX glew::gles::glGetListParameterivSGIX
#define glGetLocalConstantBooleanvEXT glew::gles::glGetLocalConstantBooleanvEXT
#define glGetLocalConstantFloatvEXT glew::gles::glGetLocalConstantFloatvEXT
#define glGetLocalConstantIntegervEXT glew::gles::glGetLocalConstantIntegervEXT
#define glGetMapAttribParameterfvNV glew::gles::glGetMapAttribParameterfvNV
#define glGetMapAttribParameterivNV glew::gles::glGetMapAttribParameterivNV
#define glGetMapControlPointsNV glew::gles::glGetMapControlPointsNV
#define glGetMapParameterfvNV glew::gles::glGetMapParameterfvNV
#define glGetMapParameterivNV glew::gles::glGetMapParameterivNV
#define glGetMapdv glew::gles::glGetMapdv
#define glGetMapfv glew::gles::glGetMapfv
#define glGetMapiv glew::gles::glGetMapiv
#define glGetMapxvOES glew::gles::glGetMapxvOES
#define glGetMaterialfv glew::gles::glGetMaterialfv
#define glGetMaterialiv glew::gles::glGetMaterialiv
#define glGetMaterialxOES glew::gles::glGetMaterialxOES
#define glGetMaterialxv glew::gles::glGetMaterialxv
#define glGetMaterialxvOES glew::gles::glGetMaterialxvOES
#define glGetMinmax glew::gles::glGetMinmax
#define glGetMinmaxEXT glew::gles::glGetMinmaxEXT
#define glGetMinmaxParameterfv glew::gles::glGetMinmaxParameterfv
#define glGetMinmaxParameterfvEXT glew::gles::glGetMinmaxParameterfvEXT
#define glGetMinmaxParameteriv glew::gles::glGetMinmaxParameteriv
#define glGetMinmaxParameterivEXT glew::gles::glGetMinmaxParameterivEXT
#define glGetMultiTexEnvfvEXT glew::gles::glGetMultiTexEnvfvEXT
#define glGetMultiTexEnvivEXT glew::gles::glGetMultiTexEnvivEXT
#define glGetMultiTexGendvEXT glew::gles::glGetMultiTexGendvEXT
#define glGetMultiTexGenfvEXT glew::gles::glGetMultiTexGenfvEXT
#define glGetMultiTexGenivEXT glew::gles::glGetMultiTexGenivEXT
#define glGetMultiTexImageEXT glew::gles::glGetMultiTexImageEXT
#define glGetMultiTexLevelParameterfvEXT glew::gles::glGetMultiTexLevelParameterfvEXT
#define glGetMultiTexLevelParameterivEXT glew::gles::glGetMultiTexLevelParameterivEXT
#define glGetMultiTexParameterIivEXT glew::gles::glGetMultiTexParameterIivEXT
#define glGetMultiTexParameterIuivEXT glew::gles::glGetMultiTexParameterIuivEXT
#define glGetMultiTexParameterfvEXT glew::gles::glGetMultiTexParameterfvEXT
#define glGetMultiTexParameterivEXT glew::gles::glGetMultiTexParameterivEXT
#define glGetMultisamplefv glew::gles::glGetMultisamplefv
#define glGetMultisamplefvNV glew::gles::glGetMultisamplefvNV
#define glGetNamedBufferParameteri64v glew::gles::glGetNamedBufferParameteri64v
#define glGetNamedBufferParameteriv glew::gles::glGetNamedBufferParameteriv
#define glGetNamedBufferParameterivEXT glew::gles::glGetNamedBufferParameterivEXT
#define glGetNamedBufferParameterui64vNV glew::gles::glGetNamedBufferParameterui64vNV
#define glGetNamedBufferPointerv glew::gles::glGetNamedBufferPointerv
#define glGetNamedBufferPointervEXT glew::gles::glGetNamedBufferPointervEXT
#define glGetNamedBufferSubData glew::gles::glGetNamedBufferSubData
#define glGetNamedBufferSubDataEXT glew::gles::glGetNamedBufferSubDataEXT
#define glGetNamedFramebufferAttachmentParameteriv glew::gles::glGetNamedFramebufferAttachmentParameteriv
#define glGetNamedFramebufferAttachmentParameterivEXT glew::gles::glGetNamedFramebufferAttachmentParameterivEXT
#define glGetNamedFramebufferParameteriv glew::gles::glGetNamedFramebufferParameteriv
#define glGetNamedFramebufferParameterivEXT glew::gles::glGetNamedFramebufferParameterivEXT
#define glGetNamedProgramLocalParameterIivEXT glew::gles::glGetNamedProgramLocalParameterIivEXT
#define glGetNamedProgramLocalParameterIuivEXT glew::gles::glGetNamedProgramLocalParameterIuivEXT
#define glGetNamedProgramLocalParameterdvEXT glew::gles::glGetNamedProgramLocalParameterdvEXT
#define glGetNamedProgramLocalParameterfvEXT glew::gles::glGetNamedProgramLocalParameterfvEXT
#define glGetNamedProgramStringEXT glew::gles::glGetNamedProgramStringEXT
#define glGetNamedProgramivEXT glew::gles::glGetNamedProgramivEXT
#define glGetNamedRenderbufferParameteriv glew::gles::glGetNamedRenderbufferParameteriv
#define glGetNamedRenderbufferParameterivEXT glew::gles::glGetNamedRenderbufferParameterivEXT
#define glGetNamedStringARB glew::gles::glGetNamedStringARB
#define glGetNamedStringivARB glew::gles::glGetNamedStringivARB
#define glGetNextPerfQueryIdINTEL glew::gles::glGetNextPerfQueryIdINTEL
#define glGetObjectBufferfvATI glew::gles::glGetObjectBufferfvATI
#define glGetObjectBufferivATI glew::gles::glGetObjectBufferivATI
#define glGetObjectLabel glew::gles::glGetObjectLabel
#define glGetObjectLabelEXT glew::gles::glGetObjectLabelEXT
#define glGetObjectLabelKHR glew::gles::glGetObjectLabelKHR
#define glGetObjectParameterfvARB glew::gles::glGetObjectParameterfvARB
#define glGetObjectParameterivAPPLE glew::gles::glGetObjectParameterivAPPLE
#define glGetObjectParameterivARB glew::gles::glGetObjectParameterivARB
#define glGetObjectPtrLabel glew::gles::glGetObjectPtrLabel
#define glGetObjectPtrLabelKHR glew::gles::glGetObjectPtrLabelKHR
#define glGetOcclusionQueryivNV glew::gles::glGetOcclusionQueryivNV
#define glGetOcclusionQueryuivNV glew::gles::glGetOcclusionQueryuivNV
#define glGetPathColorGenfvNV glew::gles::glGetPathColorGenfvNV
#define glGetPathColorGenivNV glew::gles::glGetPathColorGenivNV
#define glGetPathCommandsNV glew::gles::glGetPathCommandsNV
#define glGetPathCoordsNV glew::gles::glGetPathCoordsNV
#define glGetPathDashArrayNV glew::gles::glGetPathDashArrayNV
#define glGetPathLengthNV glew::gles::glGetPathLengthNV
#define glGetPathMetricRangeNV glew::gles::glGetPathMetricRangeNV
#define glGetPathMetricsNV glew::gles::glGetPathMetricsNV
#define glGetPathParameterfvNV glew::gles::glGetPathParameterfvNV
#define glGetPathParameterivNV glew::gles::glGetPathParameterivNV
#define glGetPathSpacingNV glew::gles::glGetPathSpacingNV
#define glGetPathTexGenfvNV glew::gles::glGetPathTexGenfvNV
#define glGetPathTexGenivNV glew::gles::glGetPathTexGenivNV
#define glGetPerfCounterInfoINTEL glew::gles::glGetPerfCounterInfoINTEL
#define glGetPerfMonitorCounterDataAMD glew::gles::glGetPerfMonitorCounterDataAMD
#define glGetPerfMonitorCounterInfoAMD glew::gles::glGetPerfMonitorCounterInfoAMD
#define glGetPerfMonitorCounterStringAMD glew::gles::glGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCountersAMD glew::gles::glGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD glew::gles::glGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorGroupsAMD glew::gles::glGetPerfMonitorGroupsAMD
#define glGetPerfQueryDataINTEL glew::gles::glGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL glew::gles::glGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL glew::gles::glGetPerfQueryInfoINTEL
#define glGetPixelMapfv glew::gles::glGetPixelMapfv
#define glGetPixelMapuiv glew::gles::glGetPixelMapuiv
#define glGetPixelMapusv glew::gles::glGetPixelMapusv
#define glGetPixelMapxv glew::gles::glGetPixelMapxv
#define glGetPixelTexGenParameterfvSGIS glew::gles::glGetPixelTexGenParameterfvSGIS
#define glGetPixelTexGenParameterivSGIS glew::gles::glGetPixelTexGenParameterivSGIS
#define glGetPixelTransformParameterfvEXT glew::gles::glGetPixelTransformParameterfvEXT
#define glGetPixelTransformParameterivEXT glew::gles::glGetPixelTransformParameterivEXT
#define glGetPointerIndexedvEXT glew::gles::glGetPointerIndexedvEXT
#define glGetPointeri_vEXT glew::gles::glGetPointeri_vEXT
#define glGetPointerv glew::gles::glGetPointerv
#define glGetPointervEXT glew::gles::glGetPointervEXT
#define glGetPointervKHR glew::gles::glGetPointervKHR
#define glGetPolygonStipple glew::gles::glGetPolygonStipple
#define glGetProgramBinary glew::gles::glGetProgramBinary
#define glGetProgramBinaryOES glew::gles::glGetProgramBinaryOES
#define glGetProgramEnvParameterIivNV glew::gles::glGetProgramEnvParameterIivNV
#define glGetProgramEnvParameterIuivNV glew::gles::glGetProgramEnvParameterIuivNV
#define glGetProgramEnvParameterdvARB glew::gles::glGetProgramEnvParameterdvARB
#define glGetProgramEnvParameterfvARB glew::gles::glGetProgramEnvParameterfvARB
#define glGetProgramInfoLog glew::gles::glGetProgramInfoLog
#define glGetProgramInterfaceiv glew::gles::glGetProgramInterfaceiv
#define glGetProgramLocalParameterIivNV glew::gles::glGetProgramLocalParameterIivNV
#define glGetProgramLocalParameterIuivNV glew::gles::glGetProgramLocalParameterIuivNV
#define glGetProgramLocalParameterdvARB glew::gles::glGetProgramLocalParameterdvARB
#define glGetProgramLocalParameterfvARB glew::gles::glGetProgramLocalParameterfvARB
#define glGetProgramNamedParameterdvNV glew::gles::glGetProgramNamedParameterdvNV
#define glGetProgramNamedParameterfvNV glew::gles::glGetProgramNamedParameterfvNV
#define glGetProgramParameterdvNV glew::gles::glGetProgramParameterdvNV
#define glGetProgramParameterfvNV glew::gles::glGetProgramParameterfvNV
#define glGetProgramPipelineInfoLog glew::gles::glGetProgramPipelineInfoLog
#define glGetProgramPipelineInfoLogEXT glew::gles::glGetProgramPipelineInfoLogEXT
#define glGetProgramPipelineiv glew::gles::glGetProgramPipelineiv
#define glGetProgramPipelineivEXT glew::gles::glGetProgramPipelineivEXT
#define glGetProgramResourceIndex glew::gles::glGetProgramResourceIndex
#define glGetProgramResourceLocation glew::gles::glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex glew::gles::glGetProgramResourceLocationIndex
#define glGetProgramResourceName glew::gles::glGetProgramResourceName
#define glGetProgramResourcefvNV glew::gles::glGetProgramResourcefvNV
#define glGetProgramResourceiv glew::gles::glGetProgramResourceiv
#define glGetProgramStageiv glew::gles::glGetProgramStageiv
#define glGetProgramStringARB glew::gles::glGetProgramStringARB
#define glGetProgramStringNV glew::gles::glGetProgramStringNV
#define glGetProgramSubroutineParameteruivNV glew::gles::glGetProgramSubroutineParameteruivNV
#define glGetProgramiv glew::gles::glGetProgramiv
#define glGetProgramivARB glew::gles::glGetProgramivARB
#define glGetProgramivNV glew::gles::glGetProgramivNV
#define glGetQueryBufferObjecti64v glew::gles::glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv glew::gles::glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v glew::gles::glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv glew::gles::glGetQueryBufferObjectuiv
#define glGetQueryIndexediv glew::gles::glGetQueryIndexediv
#define glGetQueryObjecti64v glew::gles::glGetQueryObjecti64v
#define glGetQueryObjecti64vEXT glew::gles::glGetQueryObjecti64vEXT
#define glGetQueryObjectiv glew::gles::glGetQueryObjectiv
#define glGetQueryObjectivARB glew::gles::glGetQueryObjectivARB
#define glGetQueryObjectivEXT glew::gles::glGetQueryObjectivEXT
#define glGetQueryObjectui64v glew::gles::glGetQueryObjectui64v
#define glGetQueryObjectui64vEXT glew::gles::glGetQueryObjectui64vEXT
#define glGetQueryObjectuiv glew::gles::glGetQueryObjectuiv
#define glGetQueryObjectuivARB glew::gles::glGetQueryObjectuivARB
#define glGetQueryObjectuivEXT glew::gles::glGetQueryObjectuivEXT
#define glGetQueryiv glew::gles::glGetQueryiv
#define glGetQueryivARB glew::gles::glGetQueryivARB
#define glGetQueryivEXT glew::gles::glGetQueryivEXT
#define glGetRenderbufferParameteriv glew::gles::glGetRenderbufferParameteriv
#define glGetRenderbufferParameterivEXT glew::gles::glGetRenderbufferParameterivEXT
#define glGetRenderbufferParameterivOES glew::gles::glGetRenderbufferParameterivOES
#define glGetSamplerParameterIiv glew::gles::glGetSamplerParameterIiv
#define glGetSamplerParameterIivEXT glew::gles::glGetSamplerParameterIivEXT
#define glGetSamplerParameterIivOES glew::gles::glGetSamplerParameterIivOES
#define glGetSamplerParameterIuiv glew::gles::glGetSamplerParameterIuiv
#define glGetSamplerParameterIuivEXT glew::gles::glGetSamplerParameterIuivEXT
#define glGetSamplerParameterIuivOES glew::gles::glGetSamplerParameterIuivOES
#define glGetSamplerParameterfv glew::gles::glGetSamplerParameterfv
#define glGetSamplerParameteriv glew::gles::glGetSamplerParameteriv
#define glGetSeparableFilter glew::gles::glGetSeparableFilter
#define glGetSeparableFilterEXT glew::gles::glGetSeparableFilterEXT
#define glGetShaderInfoLog glew::gles::glGetShaderInfoLog
#define glGetShaderPrecisionFormat glew::gles::glGetShaderPrecisionFormat
#define glGetShaderSource glew::gles::glGetShaderSource
#define glGetShaderSourceARB glew::gles::glGetShaderSourceARB
#define glGetShaderiv glew::gles::glGetShaderiv
#define glGetSharpenTexFuncSGIS glew::gles::glGetSharpenTexFuncSGIS
#define glGetStageIndexNV glew::gles::glGetStageIndexNV
#define glGetString glew::gles::glGetString
#define glGetStringi glew::gles::glGetStringi
#define glGetSubroutineIndex glew::gles::glGetSubroutineIndex
#define glGetSubroutineUniformLocation glew::gles::glGetSubroutineUniformLocation
#define glGetSynciv glew::gles::glGetSynciv
#define glGetSyncivAPPLE glew::gles::glGetSyncivAPPLE
#define glGetTexBumpParameterfvATI glew::gles::glGetTexBumpParameterfvATI
#define glGetTexBumpParameterivATI glew::gles::glGetTexBumpParameterivATI
#define glGetTexEnvfv glew::gles::glGetTexEnvfv
#define glGetTexEnviv glew::gles::glGetTexEnviv
#define glGetTexEnvxv glew::gles::glGetTexEnvxv
#define glGetTexEnvxvOES glew::gles::glGetTexEnvxvOES
#define glGetTexFilterFuncSGIS glew::gles::glGetTexFilterFuncSGIS
#define glGetTexGendv glew::gles::glGetTexGendv
#define glGetTexGenfv glew::gles::glGetTexGenfv
#define glGetTexGenfvOES glew::gles::glGetTexGenfvOES
#define glGetTexGeniv glew::gles::glGetTexGeniv
#define glGetTexGenivOES glew::gles::glGetTexGenivOES
#define glGetTexGenxvOES glew::gles::glGetTexGenxvOES
#define glGetTexImage glew::gles::glGetTexImage
#define glGetTexLevelParameterfv glew::gles::glGetTexLevelParameterfv
#define glGetTexLevelParameteriv glew::gles::glGetTexLevelParameteriv
#define glGetTexLevelParameterxvOES glew::gles::glGetTexLevelParameterxvOES
#define glGetTexParameterIiv glew::gles::glGetTexParameterIiv
#define glGetTexParameterIivEXT glew::gles::glGetTexParameterIivEXT
#define glGetTexParameterIivOES glew::gles::glGetTexParameterIivOES
#define glGetTexParameterIuiv glew::gles::glGetTexParameterIuiv
#define glGetTexParameterIuivEXT glew::gles::glGetTexParameterIuivEXT
#define glGetTexParameterIuivOES glew::gles::glGetTexParameterIuivOES
#define glGetTexParameterPointervAPPLE glew::gles::glGetTexParameterPointervAPPLE
#define glGetTexParameterfv glew::gles::glGetTexParameterfv
#define glGetTexParameteriv glew::gles::glGetTexParameteriv
#define glGetTexParameterxv glew::gles::glGetTexParameterxv
#define glGetTexParameterxvOES glew::gles::glGetTexParameterxvOES
#define glGetTextureHandleARB glew::gles::glGetTextureHandleARB
#define glGetTextureHandleNV glew::gles::glGetTextureHandleNV
#define glGetTextureImage glew::gles::glGetTextureImage
#define glGetTextureImageEXT glew::gles::glGetTextureImageEXT
#define glGetTextureLevelParameterfv glew::gles::glGetTextureLevelParameterfv
#define glGetTextureLevelParameterfvEXT glew::gles::glGetTextureLevelParameterfvEXT
#define glGetTextureLevelParameteriv glew::gles::glGetTextureLevelParameteriv
#define glGetTextureLevelParameterivEXT glew::gles::glGetTextureLevelParameterivEXT
#define glGetTextureParameterIiv glew::gles::glGetTextureParameterIiv
#define glGetTextureParameterIivEXT glew::gles::glGetTextureParameterIivEXT
#define glGetTextureParameterIuiv glew::gles::glGetTextureParameterIuiv
#define glGetTextureParameterIuivEXT glew::gles::glGetTextureParameterIuivEXT
#define glGetTextureParameterfv glew::gles::glGetTextureParameterfv
#define glGetTextureParameterfvEXT glew::gles::glGetTextureParameterfvEXT
#define glGetTextureParameteriv glew::gles::glGetTextureParameteriv
#define glGetTextureParameterivEXT glew::gles::glGetTextureParameterivEXT
#define glGetTextureSamplerHandleARB glew::gles::glGetTextureSamplerHandleARB
#define glGetTextureSamplerHandleNV glew::gles::glGetTextureSamplerHandleNV
#define glGetTextureSubImage glew::gles::glGetTextureSubImage
#define glGetTrackMatrixivNV glew::gles::glGetTrackMatrixivNV
#define glGetTransformFeedbackVarying glew::gles::glGetTransformFeedbackVarying
#define glGetTransformFeedbackVaryingEXT glew::gles::glGetTransformFeedbackVaryingEXT
#define glGetTransformFeedbackVaryingNV glew::gles::glGetTransformFeedbackVaryingNV
#define glGetTransformFeedbacki64_v glew::gles::glGetTransformFeedbacki64_v
#define glGetTransformFeedbacki_v glew::gles::glGetTransformFeedbacki_v
#define glGetTransformFeedbackiv glew::gles::glGetTransformFeedbackiv
#define glGetTranslatedShaderSourceANGLE glew::gles::glGetTranslatedShaderSourceANGLE
#define glGetUniformBlockIndex glew::gles::glGetUniformBlockIndex
#define glGetUniformBufferSizeEXT glew::gles::glGetUniformBufferSizeEXT
#define glGetUniformIndices glew::gles::glGetUniformIndices
#define glGetUniformLocation glew::gles::glGetUniformLocation
#define glGetUniformLocationARB glew::gles::glGetUniformLocationARB
#define glGetUniformOffsetEXT glew::gles::glGetUniformOffsetEXT
#define glGetUniformSubroutineuiv glew::gles::glGetUniformSubroutineuiv
#define glGetUniformdv glew::gles::glGetUniformdv
#define glGetUniformfv glew::gles::glGetUniformfv
#define glGetUniformfvARB glew::gles::glGetUniformfvARB
#define glGetUniformi64vNV glew::gles::glGetUniformi64vNV
#define glGetUniformiv glew::gles::glGetUniformiv
#define glGetUniformivARB glew::gles::glGetUniformivARB
#define glGetUniformui64vNV glew::gles::glGetUniformui64vNV
#define glGetUniformuiv glew::gles::glGetUniformuiv
#define glGetUniformuivEXT glew::gles::glGetUniformuivEXT
#define glGetVariantArrayObjectfvATI glew::gles::glGetVariantArrayObjectfvATI
#define glGetVariantArrayObjectivATI glew::gles::glGetVariantArrayObjectivATI
#define glGetVariantBooleanvEXT glew::gles::glGetVariantBooleanvEXT
#define glGetVariantFloatvEXT glew::gles::glGetVariantFloatvEXT
#define glGetVariantIntegervEXT glew::gles::glGetVariantIntegervEXT
#define glGetVariantPointervEXT glew::gles::glGetVariantPointervEXT
#define glGetVaryingLocationNV glew::gles::glGetVaryingLocationNV
#define glGetVertexArrayIndexed64iv glew::gles::glGetVertexArrayIndexed64iv
#define glGetVertexArrayIndexediv glew::gles::glGetVertexArrayIndexediv
#define glGetVertexArrayIntegeri_vEXT glew::gles::glGetVertexArrayIntegeri_vEXT
#define glGetVertexArrayIntegervEXT glew::gles::glGetVertexArrayIntegervEXT
#define glGetVertexArrayPointeri_vEXT glew::gles::glGetVertexArrayPointeri_vEXT
#define glGetVertexArrayPointervEXT glew::gles::glGetVertexArrayPointervEXT
#define glGetVertexArrayiv glew::gles::glGetVertexArrayiv
#define glGetVertexAttribArrayObjectfvATI glew::gles::glGetVertexAttribArrayObjectfvATI
#define glGetVertexAttribArrayObjectivATI glew::gles::glGetVertexAttribArrayObjectivATI
#define glGetVertexAttribIiv glew::gles::glGetVertexAttribIiv
#define glGetVertexAttribIivEXT glew::gles::glGetVertexAttribIivEXT
#define glGetVertexAttribIuiv glew::gles::glGetVertexAttribIuiv
#define glGetVertexAttribIuivEXT glew::gles::glGetVertexAttribIuivEXT
#define glGetVertexAttribLdv glew::gles::glGetVertexAttribLdv
#define glGetVertexAttribLdvEXT glew::gles::glGetVertexAttribLdvEXT
#define glGetVertexAttribLi64vNV glew::gles::glGetVertexAttribLi64vNV
#define glGetVertexAttribLui64vARB glew::gles::glGetVertexAttribLui64vARB
#define glGetVertexAttribLui64vNV glew::gles::glGetVertexAttribLui64vNV
#define glGetVertexAttribPointerv glew::gles::glGetVertexAttribPointerv
#define glGetVertexAttribPointervARB glew::gles::glGetVertexAttribPointervARB
#define glGetVertexAttribPointervNV glew::gles::glGetVertexAttribPointervNV
#define glGetVertexAttribdv glew::gles::glGetVertexAttribdv
#define glGetVertexAttribdvARB glew::gles::glGetVertexAttribdvARB
#define glGetVertexAttribdvNV glew::gles::glGetVertexAttribdvNV
#define glGetVertexAttribfv glew::gles::glGetVertexAttribfv
#define glGetVertexAttribfvARB glew::gles::glGetVertexAttribfvARB
#define glGetVertexAttribfvNV glew::gles::glGetVertexAttribfvNV
#define glGetVertexAttribiv glew::gles::glGetVertexAttribiv
#define glGetVertexAttribivARB glew::gles::glGetVertexAttribivARB
#define glGetVertexAttribivNV glew::gles::glGetVertexAttribivNV
#define glGetVideoCaptureStreamdvNV glew::gles::glGetVideoCaptureStreamdvNV
#define glGetVideoCaptureStreamfvNV glew::gles::glGetVideoCaptureStreamfvNV
#define glGetVideoCaptureStreamivNV glew::gles::glGetVideoCaptureStreamivNV
#define glGetVideoCaptureivNV glew::gles::glGetVideoCaptureivNV
#define glGetVideoi64vNV glew::gles::glGetVideoi64vNV
#define glGetVideoivNV glew::gles::glGetVideoivNV
#define glGetVideoui64vNV glew::gles::glGetVideoui64vNV
#define glGetVideouivNV glew::gles::glGetVideouivNV
#define glGetnColorTable glew::gles::glGetnColorTable
#define glGetnColorTableARB glew::gles::glGetnColorTableARB
#define glGetnCompressedTexImage glew::gles::glGetnCompressedTexImage
#define glGetnCompressedTexImageARB glew::gles::glGetnCompressedTexImageARB
#define glGetnConvolutionFilter glew::gles::glGetnConvolutionFilter
#define glGetnConvolutionFilterARB glew::gles::glGetnConvolutionFilterARB
#define glGetnHistogram glew::gles::glGetnHistogram
#define glGetnHistogramARB glew::gles::glGetnHistogramARB
#define glGetnMapdv glew::gles::glGetnMapdv
#define glGetnMapdvARB glew::gles::glGetnMapdvARB
#define glGetnMapfv glew::gles::glGetnMapfv
#define glGetnMapfvARB glew::gles::glGetnMapfvARB
#define glGetnMapiv glew::gles::glGetnMapiv
#define glGetnMapivARB glew::gles::glGetnMapivARB
#define glGetnMinmax glew::gles::glGetnMinmax
#define glGetnMinmaxARB glew::gles::glGetnMinmaxARB
#define glGetnPixelMapfv glew::gles::glGetnPixelMapfv
#define glGetnPixelMapfvARB glew::gles::glGetnPixelMapfvARB
#define glGetnPixelMapuiv glew::gles::glGetnPixelMapuiv
#define glGetnPixelMapuivARB glew::gles::glGetnPixelMapuivARB
#define glGetnPixelMapusv glew::gles::glGetnPixelMapusv
#define glGetnPixelMapusvARB glew::gles::glGetnPixelMapusvARB
#define glGetnPolygonStipple glew::gles::glGetnPolygonStipple
#define glGetnPolygonStippleARB glew::gles::glGetnPolygonStippleARB
#define glGetnSeparableFilter glew::gles::glGetnSeparableFilter
#define glGetnSeparableFilterARB glew::gles::glGetnSeparableFilterARB
#define glGetnTexImage glew::gles::glGetnTexImage
#define glGetnTexImageARB glew::gles::glGetnTexImageARB
#define glGetnUniformdv glew::gles::glGetnUniformdv
#define glGetnUniformdvARB glew::gles::glGetnUniformdvARB
#define glGetnUniformfv glew::gles::glGetnUniformfv
#define glGetnUniformfvARB glew::gles::glGetnUniformfvARB
#define glGetnUniformfvEXT glew::gles::glGetnUniformfvEXT
#define glGetnUniformfvKHR glew::gles::glGetnUniformfvKHR
#define glGetnUniformiv glew::gles::glGetnUniformiv
#define glGetnUniformivARB glew::gles::glGetnUniformivARB
#define glGetnUniformivEXT glew::gles::glGetnUniformivEXT
#define glGetnUniformivKHR glew::gles::glGetnUniformivKHR
#define glGetnUniformuiv glew::gles::glGetnUniformuiv
#define glGetnUniformuivARB glew::gles::glGetnUniformuivARB
#define glGetnUniformuivKHR glew::gles::glGetnUniformuivKHR
#define glGlobalAlphaFactorbSUN glew::gles::glGlobalAlphaFactorbSUN
#define glGlobalAlphaFactordSUN glew::gles::glGlobalAlphaFactordSUN
#define glGlobalAlphaFactorfSUN glew::gles::glGlobalAlphaFactorfSUN
#define glGlobalAlphaFactoriSUN glew::gles::glGlobalAlphaFactoriSUN
#define glGlobalAlphaFactorsSUN glew::gles::glGlobalAlphaFactorsSUN
#define glGlobalAlphaFactorubSUN glew::gles::glGlobalAlphaFactorubSUN
#define glGlobalAlphaFactoruiSUN glew::gles::glGlobalAlphaFactoruiSUN
#define glGlobalAlphaFactorusSUN glew::gles::glGlobalAlphaFactorusSUN
#define glHint glew::gles::glHint
#define glHintPGI glew::gles::glHintPGI
#define glHistogram glew::gles::glHistogram
#define glHistogramEXT glew::gles::glHistogramEXT
#define glIglooInterfaceSGIX glew::gles::glIglooInterfaceSGIX
#define glImageTransformParameterfHP glew::gles::glImageTransformParameterfHP
#define glImageTransformParameterfvHP glew::gles::glImageTransformParameterfvHP
#define glImageTransformParameteriHP glew::gles::glImageTransformParameteriHP
#define glImageTransformParameterivHP glew::gles::glImageTransformParameterivHP
#define glImportSyncEXT glew::gles::glImportSyncEXT
#define glIndexFormatNV glew::gles::glIndexFormatNV
#define glIndexFuncEXT glew::gles::glIndexFuncEXT
#define glIndexMask glew::gles::glIndexMask
#define glIndexMaterialEXT glew::gles::glIndexMaterialEXT
#define glIndexPointer glew::gles::glIndexPointer
#define glIndexPointerEXT glew::gles::glIndexPointerEXT
#define glIndexPointerListIBM glew::gles::glIndexPointerListIBM
#define glIndexd glew::gles::glIndexd
#define glIndexdv glew::gles::glIndexdv
#define glIndexf glew::gles::glIndexf
#define glIndexfv glew::gles::glIndexfv
#define glIndexi glew::gles::glIndexi
#define glIndexiv glew::gles::glIndexiv
#define glIndexs glew::gles::glIndexs
#define glIndexsv glew::gles::glIndexsv
#define glIndexub glew::gles::glIndexub
#define glIndexubv glew::gles::glIndexubv
#define glIndexxOES glew::gles::glIndexxOES
#define glIndexxvOES glew::gles::glIndexxvOES
#define glInitNames glew::gles::glInitNames
#define glInsertComponentEXT glew::gles::glInsertComponentEXT
#define glInsertEventMarkerEXT glew::gles::glInsertEventMarkerEXT
#define glInstrumentsBufferSGIX glew::gles::glInstrumentsBufferSGIX
#define glInterleavedArrays glew::gles::glInterleavedArrays
#define glInterpolatePathsNV glew::gles::glInterpolatePathsNV
#define glInvalidateBufferData glew::gles::glInvalidateBufferData
#define glInvalidateBufferSubData glew::gles::glInvalidateBufferSubData
#define glInvalidateFramebuffer glew::gles::glInvalidateFramebuffer
#define glInvalidateNamedFramebufferData glew::gles::glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData glew::gles::glInvalidateNamedFramebufferSubData
#define glInvalidateSubFramebuffer glew::gles::glInvalidateSubFramebuffer
#define glInvalidateTexImage glew::gles::glInvalidateTexImage
#define glInvalidateTexSubImage glew::gles::glInvalidateTexSubImage
#define glIsAsyncMarkerSGIX glew::gles::glIsAsyncMarkerSGIX
#define glIsBuffer glew::gles::glIsBuffer
#define glIsBufferARB glew::gles::glIsBufferARB
#define glIsBufferResidentNV glew::gles::glIsBufferResidentNV
#define glIsCommandListNV glew::gles::glIsCommandListNV
#define glIsEnabled glew::gles::glIsEnabled
#define glIsEnabledIndexedEXT glew::gles::glIsEnabledIndexedEXT
#define glIsEnabledi glew::gles::glIsEnabledi
#define glIsEnablediEXT glew::gles::glIsEnablediEXT
#define glIsEnablediOES glew::gles::glIsEnablediOES
#define glIsEnablediNV glew::gles::glIsEnablediNV
#define glIsFenceAPPLE glew::gles::glIsFenceAPPLE
#define glIsFenceNV glew::gles::glIsFenceNV
#define glIsFramebuffer glew::gles::glIsFramebuffer
#define glIsFramebufferEXT glew::gles::glIsFramebufferEXT
#define glIsFramebufferOES glew::gles::glIsFramebufferOES
#define glIsImageHandleResidentARB glew::gles::glIsImageHandleResidentARB
#define glIsImageHandleResidentNV glew::gles::glIsImageHandleResidentNV
#define glIsList glew::gles::glIsList
#define glIsNameAMD glew::gles::glIsNameAMD
#define glIsNamedBufferResidentNV glew::gles::glIsNamedBufferResidentNV
#define glIsNamedStringARB glew::gles::glIsNamedStringARB
#define glIsObjectBufferATI glew::gles::glIsObjectBufferATI
#define glIsOcclusionQueryNV glew::gles::glIsOcclusionQueryNV
#define glIsPathNV glew::gles::glIsPathNV
#define glIsPointInFillPathNV glew::gles::glIsPointInFillPathNV
#define glIsPointInStrokePathNV glew::gles::glIsPointInStrokePathNV
#define glIsProgram glew::gles::glIsProgram
#define glIsProgramARB glew::gles::glIsProgramARB
#define glIsProgramNV glew::gles::glIsProgramNV
#define glIsProgramPipeline glew::gles::glIsProgramPipeline
#define glIsProgramPipelineEXT glew::gles::glIsProgramPipelineEXT
#define glIsQuery glew::gles::glIsQuery
#define glIsQueryARB glew::gles::glIsQueryARB
#define glIsQueryEXT glew::gles::glIsQueryEXT
#define glIsRenderbuffer glew::gles::glIsRenderbuffer
#define glIsRenderbufferEXT glew::gles::glIsRenderbufferEXT
#define glIsRenderbufferOES glew::gles::glIsRenderbufferOES
#define glIsSampler glew::gles::glIsSampler
#define glIsShader glew::gles::glIsShader
#define glIsStateNV glew::gles::glIsStateNV
#define glIsSync glew::gles::glIsSync
#define glIsSyncAPPLE glew::gles::glIsSyncAPPLE
#define glIsTexture glew::gles::glIsTexture
#define glIsTextureEXT glew::gles::glIsTextureEXT
#define glIsTextureHandleResidentARB glew::gles::glIsTextureHandleResidentARB
#define glIsTextureHandleResidentNV glew::gles::glIsTextureHandleResidentNV
#define glIsTransformFeedback glew::gles::glIsTransformFeedback
#define glIsTransformFeedbackNV glew::gles::glIsTransformFeedbackNV
#define glIsVariantEnabledEXT glew::gles::glIsVariantEnabledEXT
#define glIsVertexArray glew::gles::glIsVertexArray
#define glIsVertexArrayAPPLE glew::gles::glIsVertexArrayAPPLE
#define glIsVertexArrayOES glew::gles::glIsVertexArrayOES
#define glIsVertexAttribEnabledAPPLE glew::gles::glIsVertexAttribEnabledAPPLE
#define glLabelObjectEXT glew::gles::glLabelObjectEXT
#define glLightEnviSGIX glew::gles::glLightEnviSGIX
#define glLightModelf glew::gles::glLightModelf
#define glLightModelfv glew::gles::glLightModelfv
#define glLightModeli glew::gles::glLightModeli
#define glLightModeliv glew::gles::glLightModeliv
#define glLightModelx glew::gles::glLightModelx
#define glLightModelxOES glew::gles::glLightModelxOES
#define glLightModelxv glew::gles::glLightModelxv
#define glLightModelxvOES glew::gles::glLightModelxvOES
#define glLightf glew::gles::glLightf
#define glLightfv glew::gles::glLightfv
#define glLighti glew::gles::glLighti
#define glLightiv glew::gles::glLightiv
#define glLightx glew::gles::glLightx
#define glLightxOES glew::gles::glLightxOES
#define glLightxv glew::gles::glLightxv
#define glLightxvOES glew::gles::glLightxvOES
#define glLineStipple glew::gles::glLineStipple
#define glLineWidth glew::gles::glLineWidth
#define glLineWidthx glew::gles::glLineWidthx
#define glLineWidthxOES glew::gles::glLineWidthxOES
#define glLinkProgram glew::gles::glLinkProgram
#define glLinkProgramARB glew::gles::glLinkProgramARB
#define glListBase glew::gles::glListBase
#define glListDrawCommandsStatesClientNV glew::gles::glListDrawCommandsStatesClientNV
#define glListParameterfSGIX glew::gles::glListParameterfSGIX
#define glListParameterfvSGIX glew::gles::glListParameterfvSGIX
#define glListParameteriSGIX glew::gles::glListParameteriSGIX
#define glListParameterivSGIX glew::gles::glListParameterivSGIX
#define glLoadIdentity glew::gles::glLoadIdentity
#define glLoadIdentityDeformationMapSGIX glew::gles::glLoadIdentityDeformationMapSGIX
#define glLoadMatrixd glew::gles::glLoadMatrixd
#define glLoadMatrixf glew::gles::glLoadMatrixf
#define glLoadMatrixx glew::gles::glLoadMatrixx
#define glLoadMatrixxOES glew::gles::glLoadMatrixxOES
#define glLoadName glew::gles::glLoadName
#define glLoadPaletteFromModelViewMatrixOES glew::gles::glLoadPaletteFromModelViewMatrixOES
#define glLoadProgramNV glew::gles::glLoadProgramNV
#define glLoadTransposeMatrixd glew::gles::glLoadTransposeMatrixd
#define glLoadTransposeMatrixdARB glew::gles::glLoadTransposeMatrixdARB
#define glLoadTransposeMatrixf glew::gles::glLoadTransposeMatrixf
#define glLoadTransposeMatrixfARB glew::gles::glLoadTransposeMatrixfARB
#define glLoadTransposeMatrixxOES glew::gles::glLoadTransposeMatrixxOES
#define glLockArraysEXT glew::gles::glLockArraysEXT
#define glLogicOp glew::gles::glLogicOp
#define glMakeBufferNonResidentNV glew::gles::glMakeBufferNonResidentNV
#define glMakeBufferResidentNV glew::gles::glMakeBufferResidentNV
#define glMakeImageHandleNonResidentARB glew::gles::glMakeImageHandleNonResidentARB
#define glMakeImageHandleNonResidentNV glew::gles::glMakeImageHandleNonResidentNV
#define glMakeImageHandleResidentARB glew::gles::glMakeImageHandleResidentARB
#define glMakeImageHandleResidentNV glew::gles::glMakeImageHandleResidentNV
#define glMakeNamedBufferNonResidentNV glew::gles::glMakeNamedBufferNonResidentNV
#define glMakeNamedBufferResidentNV glew::gles::glMakeNamedBufferResidentNV
#define glMakeTextureHandleNonResidentARB glew::gles::glMakeTextureHandleNonResidentARB
#define glMakeTextureHandleNonResidentNV glew::gles::glMakeTextureHandleNonResidentNV
#define glMakeTextureHandleResidentARB glew::gles::glMakeTextureHandleResidentARB
#define glMakeTextureHandleResidentNV glew::gles::glMakeTextureHandleResidentNV
#define glMap1d glew::gles::glMap1d
#define glMap1f glew::gles::glMap1f
#define glMap1xOES glew::gles::glMap1xOES
#define glMap2d glew::gles::glMap2d
#define glMap2f glew::gles::glMap2f
#define glMap2xOES glew::gles::glMap2xOES
#define glMapBuffer glew::gles::glMapBuffer
#define glMapBufferARB glew::gles::glMapBufferARB
#define glMapBufferOES glew::gles::glMapBufferOES
#define glMapBufferRange glew::gles::glMapBufferRange
#define glMapBufferRangeEXT glew::gles::glMapBufferRangeEXT
#define glMapControlPointsNV glew::gles::glMapControlPointsNV
#define glMapGrid1d glew::gles::glMapGrid1d
#define glMapGrid1f glew::gles::glMapGrid1f
#define glMapGrid1xOES glew::gles::glMapGrid1xOES
#define glMapGrid2d glew::gles::glMapGrid2d
#define glMapGrid2f glew::gles::glMapGrid2f
#define glMapGrid2xOES glew::gles::glMapGrid2xOES
#define glMapNamedBuffer glew::gles::glMapNamedBuffer
#define glMapNamedBufferEXT glew::gles::glMapNamedBufferEXT
#define glMapNamedBufferRange glew::gles::glMapNamedBufferRange
#define glMapNamedBufferRangeEXT glew::gles::glMapNamedBufferRangeEXT
#define glMapObjectBufferATI glew::gles::glMapObjectBufferATI
#define glMapParameterfvNV glew::gles::glMapParameterfvNV
#define glMapParameterivNV glew::gles::glMapParameterivNV
#define glMapTexture2DINTEL glew::gles::glMapTexture2DINTEL
#define glMapVertexAttrib1dAPPLE glew::gles::glMapVertexAttrib1dAPPLE
#define glMapVertexAttrib1fAPPLE glew::gles::glMapVertexAttrib1fAPPLE
#define glMapVertexAttrib2dAPPLE glew::gles::glMapVertexAttrib2dAPPLE
#define glMapVertexAttrib2fAPPLE glew::gles::glMapVertexAttrib2fAPPLE
#define glMaterialf glew::gles::glMaterialf
#define glMaterialfv glew::gles::glMaterialfv
#define glMateriali glew::gles::glMateriali
#define glMaterialiv glew::gles::glMaterialiv
#define glMaterialx glew::gles::glMaterialx
#define glMaterialxOES glew::gles::glMaterialxOES
#define glMaterialxv glew::gles::glMaterialxv
#define glMaterialxvOES glew::gles::glMaterialxvOES
#define glMatrixFrustumEXT glew::gles::glMatrixFrustumEXT
#define glMatrixIndexPointerARB glew::gles::glMatrixIndexPointerARB
#define glMatrixIndexPointerOES glew::gles::glMatrixIndexPointerOES
#define glMatrixIndexubvARB glew::gles::glMatrixIndexubvARB
#define glMatrixIndexuivARB glew::gles::glMatrixIndexuivARB
#define glMatrixIndexusvARB glew::gles::glMatrixIndexusvARB
#define glMatrixLoad3x2fNV glew::gles::glMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV glew::gles::glMatrixLoad3x3fNV
#define glMatrixLoadIdentityEXT glew::gles::glMatrixLoadIdentityEXT
#define glMatrixLoadTranspose3x3fNV glew::gles::glMatrixLoadTranspose3x3fNV
#define glMatrixLoadTransposedEXT glew::gles::glMatrixLoadTransposedEXT
#define glMatrixLoadTransposefEXT glew::gles::glMatrixLoadTransposefEXT
#define glMatrixLoaddEXT glew::gles::glMatrixLoaddEXT
#define glMatrixLoadfEXT glew::gles::glMatrixLoadfEXT
#define glMatrixMode glew::gles::glMatrixMode
#define glMatrixMult3x2fNV glew::gles::glMatrixMult3x2fNV
#define glMatrixMult3x3fNV glew::gles::glMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV glew::gles::glMatrixMultTranspose3x3fNV
#define glMatrixMultTransposedEXT glew::gles::glMatrixMultTransposedEXT
#define glMatrixMultTransposefEXT glew::gles::glMatrixMultTransposefEXT
#define glMatrixMultdEXT glew::gles::glMatrixMultdEXT
#define glMatrixMultfEXT glew::gles::glMatrixMultfEXT
#define glMatrixOrthoEXT glew::gles::glMatrixOrthoEXT
#define glMatrixPopEXT glew::gles::glMatrixPopEXT
#define glMatrixPushEXT glew::gles::glMatrixPushEXT
#define glMatrixRotatedEXT glew::gles::glMatrixRotatedEXT
#define glMatrixRotatefEXT glew::gles::glMatrixRotatefEXT
#define glMatrixScaledEXT glew::gles::glMatrixScaledEXT
#define glMatrixScalefEXT glew::gles::glMatrixScalefEXT
#define glMatrixTranslatedEXT glew::gles::glMatrixTranslatedEXT
#define glMatrixTranslatefEXT glew::gles::glMatrixTranslatefEXT
#define glMemoryBarrier glew::gles::glMemoryBarrier
#define glMemoryBarrierByRegion glew::gles::glMemoryBarrierByRegion
#define glMemoryBarrierEXT glew::gles::glMemoryBarrierEXT
#define glMinSampleShading glew::gles::glMinSampleShading
#define glMinSampleShadingARB glew::gles::glMinSampleShadingARB
#define glMinSampleShadingOES glew::gles::glMinSampleShadingOES
#define glMinmax glew::gles::glMinmax
#define glMinmaxEXT glew::gles::glMinmaxEXT
#define glMultMatrixd glew::gles::glMultMatrixd
#define glMultMatrixf glew::gles::glMultMatrixf
#define glMultMatrixx glew::gles::glMultMatrixx
#define glMultMatrixxOES glew::gles::glMultMatrixxOES
#define glMultTransposeMatrixd glew::gles::glMultTransposeMatrixd
#define glMultTransposeMatrixdARB glew::gles::glMultTransposeMatrixdARB
#define glMultTransposeMatrixf glew::gles::glMultTransposeMatrixf
#define glMultTransposeMatrixfARB glew::gles::glMultTransposeMatrixfARB
#define glMultTransposeMatrixxOES glew::gles::glMultTransposeMatrixxOES
#define glMultiDrawArrays glew::gles::glMultiDrawArrays
#define glMultiDrawArraysEXT glew::gles::glMultiDrawArraysEXT
#define glMultiDrawArraysIndirect glew::gles::glMultiDrawArraysIndirect
#define glMultiDrawArraysIndirectAMD glew::gles::glMultiDrawArraysIndirectAMD
#define glMultiDrawArraysIndirectEXT glew::gles::glMultiDrawArraysIndirectEXT
#define glMultiDrawArraysIndirectBindlessCountNV glew::gles::glMultiDrawArraysIndirectBindlessCountNV
#define glMultiDrawArraysIndirectBindlessNV glew::gles::glMultiDrawArraysIndirectBindlessNV
#define glMultiDrawArraysIndirectCountARB glew::gles::glMultiDrawArraysIndirectCountARB
#define glMultiDrawElementArrayAPPLE glew::gles::glMultiDrawElementArrayAPPLE
#define glMultiDrawElements glew::gles::glMultiDrawElements
#define glMultiDrawElementsBaseVertex glew::gles::glMultiDrawElementsBaseVertex
#define glMultiDrawElementsBaseVertexEXT glew::gles::glMultiDrawElementsBaseVertexEXT
#define glMultiDrawElementsBaseVertexOES glew::gles::glMultiDrawElementsBaseVertexOES
#define glMultiDrawElementsEXT glew::gles::glMultiDrawElementsEXT
#define glMultiDrawElementsIndirect glew::gles::glMultiDrawElementsIndirect
#define glMultiDrawElementsIndirectEXT glew::gles::glMultiDrawElementsIndirectEXT
#define glMultiDrawElementsIndirectAMD glew::gles::glMultiDrawElementsIndirectAMD
#define glMultiDrawElementsIndirectBindlessCountNV glew::gles::glMultiDrawElementsIndirectBindlessCountNV
#define glMultiDrawElementsIndirectBindlessNV glew::gles::glMultiDrawElementsIndirectBindlessNV
#define glMultiDrawElementsIndirectCountARB glew::gles::glMultiDrawElementsIndirectCountARB
#define glMultiDrawRangeElementArrayAPPLE glew::gles::glMultiDrawRangeElementArrayAPPLE
#define glMultiModeDrawArraysIBM glew::gles::glMultiModeDrawArraysIBM
#define glMultiModeDrawElementsIBM glew::gles::glMultiModeDrawElementsIBM
#define glMultiTexBufferEXT glew::gles::glMultiTexBufferEXT
#define glMultiTexCoord1bOES glew::gles::glMultiTexCoord1bOES
#define glMultiTexCoord1bvOES glew::gles::glMultiTexCoord1bvOES
#define glMultiTexCoord1d glew::gles::glMultiTexCoord1d
#define glMultiTexCoord1dARB glew::gles::glMultiTexCoord1dARB
#define glMultiTexCoord1dv glew::gles::glMultiTexCoord1dv
#define glMultiTexCoord1dvARB glew::gles::glMultiTexCoord1dvARB
#define glMultiTexCoord1f glew::gles::glMultiTexCoord1f
#define glMultiTexCoord1fARB glew::gles::glMultiTexCoord1fARB
#define glMultiTexCoord1fv glew::gles::glMultiTexCoord1fv
#define glMultiTexCoord1fvARB glew::gles::glMultiTexCoord1fvARB
#define glMultiTexCoord1hNV glew::gles::glMultiTexCoord1hNV
#define glMultiTexCoord1hvNV glew::gles::glMultiTexCoord1hvNV
#define glMultiTexCoord1i glew::gles::glMultiTexCoord1i
#define glMultiTexCoord1iARB glew::gles::glMultiTexCoord1iARB
#define glMultiTexCoord1iv glew::gles::glMultiTexCoord1iv
#define glMultiTexCoord1ivARB glew::gles::glMultiTexCoord1ivARB
#define glMultiTexCoord1s glew::gles::glMultiTexCoord1s
#define glMultiTexCoord1sARB glew::gles::glMultiTexCoord1sARB
#define glMultiTexCoord1sv glew::gles::glMultiTexCoord1sv
#define glMultiTexCoord1svARB glew::gles::glMultiTexCoord1svARB
#define glMultiTexCoord1xOES glew::gles::glMultiTexCoord1xOES
#define glMultiTexCoord1xvOES glew::gles::glMultiTexCoord1xvOES
#define glMultiTexCoord2bOES glew::gles::glMultiTexCoord2bOES
#define glMultiTexCoord2bvOES glew::gles::glMultiTexCoord2bvOES
#define glMultiTexCoord2d glew::gles::glMultiTexCoord2d
#define glMultiTexCoord2dARB glew::gles::glMultiTexCoord2dARB
#define glMultiTexCoord2dv glew::gles::glMultiTexCoord2dv
#define glMultiTexCoord2dvARB glew::gles::glMultiTexCoord2dvARB
#define glMultiTexCoord2f glew::gles::glMultiTexCoord2f
#define glMultiTexCoord2fARB glew::gles::glMultiTexCoord2fARB
#define glMultiTexCoord2fv glew::gles::glMultiTexCoord2fv
#define glMultiTexCoord2fvARB glew::gles::glMultiTexCoord2fvARB
#define glMultiTexCoord2hNV glew::gles::glMultiTexCoord2hNV
#define glMultiTexCoord2hvNV glew::gles::glMultiTexCoord2hvNV
#define glMultiTexCoord2i glew::gles::glMultiTexCoord2i
#define glMultiTexCoord2iARB glew::gles::glMultiTexCoord2iARB
#define glMultiTexCoord2iv glew::gles::glMultiTexCoord2iv
#define glMultiTexCoord2ivARB glew::gles::glMultiTexCoord2ivARB
#define glMultiTexCoord2s glew::gles::glMultiTexCoord2s
#define glMultiTexCoord2sARB glew::gles::glMultiTexCoord2sARB
#define glMultiTexCoord2sv glew::gles::glMultiTexCoord2sv
#define glMultiTexCoord2svARB glew::gles::glMultiTexCoord2svARB
#define glMultiTexCoord2xOES glew::gles::glMultiTexCoord2xOES
#define glMultiTexCoord2xvOES glew::gles::glMultiTexCoord2xvOES
#define glMultiTexCoord3bOES glew::gles::glMultiTexCoord3bOES
#define glMultiTexCoord3bvOES glew::gles::glMultiTexCoord3bvOES
#define glMultiTexCoord3d glew::gles::glMultiTexCoord3d
#define glMultiTexCoord3dARB glew::gles::glMultiTexCoord3dARB
#define glMultiTexCoord3dv glew::gles::glMultiTexCoord3dv
#define glMultiTexCoord3dvARB glew::gles::glMultiTexCoord3dvARB
#define glMultiTexCoord3f glew::gles::glMultiTexCoord3f
#define glMultiTexCoord3fARB glew::gles::glMultiTexCoord3fARB
#define glMultiTexCoord3fv glew::gles::glMultiTexCoord3fv
#define glMultiTexCoord3fvARB glew::gles::glMultiTexCoord3fvARB
#define glMultiTexCoord3hNV glew::gles::glMultiTexCoord3hNV
#define glMultiTexCoord3hvNV glew::gles::glMultiTexCoord3hvNV
#define glMultiTexCoord3i glew::gles::glMultiTexCoord3i
#define glMultiTexCoord3iARB glew::gles::glMultiTexCoord3iARB
#define glMultiTexCoord3iv glew::gles::glMultiTexCoord3iv
#define glMultiTexCoord3ivARB glew::gles::glMultiTexCoord3ivARB
#define glMultiTexCoord3s glew::gles::glMultiTexCoord3s
#define glMultiTexCoord3sARB glew::gles::glMultiTexCoord3sARB
#define glMultiTexCoord3sv glew::gles::glMultiTexCoord3sv
#define glMultiTexCoord3svARB glew::gles::glMultiTexCoord3svARB
#define glMultiTexCoord3xOES glew::gles::glMultiTexCoord3xOES
#define glMultiTexCoord3xvOES glew::gles::glMultiTexCoord3xvOES
#define glMultiTexCoord4bOES glew::gles::glMultiTexCoord4bOES
#define glMultiTexCoord4bvOES glew::gles::glMultiTexCoord4bvOES
#define glMultiTexCoord4d glew::gles::glMultiTexCoord4d
#define glMultiTexCoord4dARB glew::gles::glMultiTexCoord4dARB
#define glMultiTexCoord4dv glew::gles::glMultiTexCoord4dv
#define glMultiTexCoord4dvARB glew::gles::glMultiTexCoord4dvARB
#define glMultiTexCoord4f glew::gles::glMultiTexCoord4f
#define glMultiTexCoord4fARB glew::gles::glMultiTexCoord4fARB
#define glMultiTexCoord4fv glew::gles::glMultiTexCoord4fv
#define glMultiTexCoord4fvARB glew::gles::glMultiTexCoord4fvARB
#define glMultiTexCoord4hNV glew::gles::glMultiTexCoord4hNV
#define glMultiTexCoord4hvNV glew::gles::glMultiTexCoord4hvNV
#define glMultiTexCoord4i glew::gles::glMultiTexCoord4i
#define glMultiTexCoord4iARB glew::gles::glMultiTexCoord4iARB
#define glMultiTexCoord4iv glew::gles::glMultiTexCoord4iv
#define glMultiTexCoord4ivARB glew::gles::glMultiTexCoord4ivARB
#define glMultiTexCoord4s glew::gles::glMultiTexCoord4s
#define glMultiTexCoord4sARB glew::gles::glMultiTexCoord4sARB
#define glMultiTexCoord4sv glew::gles::glMultiTexCoord4sv
#define glMultiTexCoord4svARB glew::gles::glMultiTexCoord4svARB
#define glMultiTexCoord4x glew::gles::glMultiTexCoord4x
#define glMultiTexCoord4xOES glew::gles::glMultiTexCoord4xOES
#define glMultiTexCoord4xvOES glew::gles::glMultiTexCoord4xvOES
#define glMultiTexCoordP1ui glew::gles::glMultiTexCoordP1ui
#define glMultiTexCoordP1uiv glew::gles::glMultiTexCoordP1uiv
#define glMultiTexCoordP2ui glew::gles::glMultiTexCoordP2ui
#define glMultiTexCoordP2uiv glew::gles::glMultiTexCoordP2uiv
#define glMultiTexCoordP3ui glew::gles::glMultiTexCoordP3ui
#define glMultiTexCoordP3uiv glew::gles::glMultiTexCoordP3uiv
#define glMultiTexCoordP4ui glew::gles::glMultiTexCoordP4ui
#define glMultiTexCoordP4uiv glew::gles::glMultiTexCoordP4uiv
#define glMultiTexCoordPointerEXT glew::gles::glMultiTexCoordPointerEXT
#define glMultiTexEnvfEXT glew::gles::glMultiTexEnvfEXT
#define glMultiTexEnvfvEXT glew::gles::glMultiTexEnvfvEXT
#define glMultiTexEnviEXT glew::gles::glMultiTexEnviEXT
#define glMultiTexEnvivEXT glew::gles::glMultiTexEnvivEXT
#define glMultiTexGendEXT glew::gles::glMultiTexGendEXT
#define glMultiTexGendvEXT glew::gles::glMultiTexGendvEXT
#define glMultiTexGenfEXT glew::gles::glMultiTexGenfEXT
#define glMultiTexGenfvEXT glew::gles::glMultiTexGenfvEXT
#define glMultiTexGeniEXT glew::gles::glMultiTexGeniEXT
#define glMultiTexGenivEXT glew::gles::glMultiTexGenivEXT
#define glMultiTexImage1DEXT glew::gles::glMultiTexImage1DEXT
#define glMultiTexImage2DEXT glew::gles::glMultiTexImage2DEXT
#define glMultiTexImage3DEXT glew::gles::glMultiTexImage3DEXT
#define glMultiTexParameterIivEXT glew::gles::glMultiTexParameterIivEXT
#define glMultiTexParameterIuivEXT glew::gles::glMultiTexParameterIuivEXT
#define glMultiTexParameterfEXT glew::gles::glMultiTexParameterfEXT
#define glMultiTexParameterfvEXT glew::gles::glMultiTexParameterfvEXT
#define glMultiTexParameteriEXT glew::gles::glMultiTexParameteriEXT
#define glMultiTexParameterivEXT glew::gles::glMultiTexParameterivEXT
#define glMultiTexRenderbufferEXT glew::gles::glMultiTexRenderbufferEXT
#define glMultiTexSubImage1DEXT glew::gles::glMultiTexSubImage1DEXT
#define glMultiTexSubImage2DEXT glew::gles::glMultiTexSubImage2DEXT
#define glMultiTexSubImage3DEXT glew::gles::glMultiTexSubImage3DEXT
#define glNamedBufferData glew::gles::glNamedBufferData
#define glNamedBufferDataEXT glew::gles::glNamedBufferDataEXT
#define glNamedBufferPageCommitmentARB glew::gles::glNamedBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT glew::gles::glNamedBufferPageCommitmentEXT
#define glNamedBufferStorage glew::gles::glNamedBufferStorage
#define glNamedBufferStorageEXT glew::gles::glNamedBufferStorageEXT
#define glNamedBufferSubData glew::gles::glNamedBufferSubData
#define glNamedBufferSubDataEXT glew::gles::glNamedBufferSubDataEXT
#define glNamedCopyBufferSubDataEXT glew::gles::glNamedCopyBufferSubDataEXT
#define glNamedFramebufferDrawBuffer glew::gles::glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers glew::gles::glNamedFramebufferDrawBuffers
#define glNamedFramebufferParameteri glew::gles::glNamedFramebufferParameteri
#define glNamedFramebufferParameteriEXT glew::gles::glNamedFramebufferParameteriEXT
#define glNamedFramebufferReadBuffer glew::gles::glNamedFramebufferReadBuffer
#define glNamedFramebufferRenderbuffer glew::gles::glNamedFramebufferRenderbuffer
#define glNamedFramebufferRenderbufferEXT glew::gles::glNamedFramebufferRenderbufferEXT
#define glNamedFramebufferTexture glew::gles::glNamedFramebufferTexture
#define glNamedFramebufferTexture1DEXT glew::gles::glNamedFramebufferTexture1DEXT
#define glNamedFramebufferTexture2DEXT glew::gles::glNamedFramebufferTexture2DEXT
#define glNamedFramebufferTexture3DEXT glew::gles::glNamedFramebufferTexture3DEXT
#define glNamedFramebufferTextureEXT glew::gles::glNamedFramebufferTextureEXT
#define glNamedFramebufferTextureFaceEXT glew::gles::glNamedFramebufferTextureFaceEXT
#define glNamedFramebufferTextureLayer glew::gles::glNamedFramebufferTextureLayer
#define glNamedFramebufferTextureLayerEXT glew::gles::glNamedFramebufferTextureLayerEXT
#define glNamedProgramLocalParameter4dEXT glew::gles::glNamedProgramLocalParameter4dEXT
#define glNamedProgramLocalParameter4dvEXT glew::gles::glNamedProgramLocalParameter4dvEXT
#define glNamedProgramLocalParameter4fEXT glew::gles::glNamedProgramLocalParameter4fEXT
#define glNamedProgramLocalParameter4fvEXT glew::gles::glNamedProgramLocalParameter4fvEXT
#define glNamedProgramLocalParameterI4iEXT glew::gles::glNamedProgramLocalParameterI4iEXT
#define glNamedProgramLocalParameterI4ivEXT glew::gles::glNamedProgramLocalParameterI4ivEXT
#define glNamedProgramLocalParameterI4uiEXT glew::gles::glNamedProgramLocalParameterI4uiEXT
#define glNamedProgramLocalParameterI4uivEXT glew::gles::glNamedProgramLocalParameterI4uivEXT
#define glNamedProgramLocalParameters4fvEXT glew::gles::glNamedProgramLocalParameters4fvEXT
#define glNamedProgramLocalParametersI4ivEXT glew::gles::glNamedProgramLocalParametersI4ivEXT
#define glNamedProgramLocalParametersI4uivEXT glew::gles::glNamedProgramLocalParametersI4uivEXT
#define glNamedProgramStringEXT glew::gles::glNamedProgramStringEXT
#define glNamedRenderbufferStorage glew::gles::glNamedRenderbufferStorage
#define glNamedRenderbufferStorageEXT glew::gles::glNamedRenderbufferStorageEXT
#define glNamedRenderbufferStorageMultisample glew::gles::glNamedRenderbufferStorageMultisample
#define glNamedRenderbufferStorageMultisampleCoverageEXT glew::gles::glNamedRenderbufferStorageMultisampleCoverageEXT
#define glNamedRenderbufferStorageMultisampleEXT glew::gles::glNamedRenderbufferStorageMultisampleEXT
#define glNamedStringARB glew::gles::glNamedStringARB
#define glNewList glew::gles::glNewList
#define glNewObjectBufferATI glew::gles::glNewObjectBufferATI
#define glNormal3b glew::gles::glNormal3b
#define glNormal3bv glew::gles::glNormal3bv
#define glNormal3d glew::gles::glNormal3d
#define glNormal3dv glew::gles::glNormal3dv
#define glNormal3f glew::gles::glNormal3f
#define glNormal3fVertex3fSUN glew::gles::glNormal3fVertex3fSUN
#define glNormal3fVertex3fvSUN glew::gles::glNormal3fVertex3fvSUN
#define glNormal3fv glew::gles::glNormal3fv
#define glNormal3hNV glew::gles::glNormal3hNV
#define glNormal3hvNV glew::gles::glNormal3hvNV
#define glNormal3i glew::gles::glNormal3i
#define glNormal3iv glew::gles::glNormal3iv
#define glNormal3s glew::gles::glNormal3s
#define glNormal3sv glew::gles::glNormal3sv
#define glNormal3x glew::gles::glNormal3x
#define glNormal3xOES glew::gles::glNormal3xOES
#define glNormal3xvOES glew::gles::glNormal3xvOES
#define glNormalFormatNV glew::gles::glNormalFormatNV
#define glNormalP3ui glew::gles::glNormalP3ui
#define glNormalP3uiv glew::gles::glNormalP3uiv
#define glNormalPointer glew::gles::glNormalPointer
#define glNormalPointerEXT glew::gles::glNormalPointerEXT
#define glNormalPointerListIBM glew::gles::glNormalPointerListIBM
#define glNormalPointervINTEL glew::gles::glNormalPointervINTEL
#define glNormalStream3bATI glew::gles::glNormalStream3bATI
#define glNormalStream3bvATI glew::gles::glNormalStream3bvATI
#define glNormalStream3dATI glew::gles::glNormalStream3dATI
#define glNormalStream3dvATI glew::gles::glNormalStream3dvATI
#define glNormalStream3fATI glew::gles::glNormalStream3fATI
#define glNormalStream3fvATI glew::gles::glNormalStream3fvATI
#define glNormalStream3iATI glew::gles::glNormalStream3iATI
#define glNormalStream3ivATI glew::gles::glNormalStream3ivATI
#define glNormalStream3sATI glew::gles::glNormalStream3sATI
#define glNormalStream3svATI glew::gles::glNormalStream3svATI
#define glObjectLabel glew::gles::glObjectLabel
#define glObjectLabelKHR glew::gles::glObjectLabelKHR
#define glObjectPtrLabel glew::gles::glObjectPtrLabel
#define glObjectPtrLabelKHR glew::gles::glObjectPtrLabelKHR
#define glObjectPurgeableAPPLE glew::gles::glObjectPurgeableAPPLE
#define glObjectUnpurgeableAPPLE glew::gles::glObjectUnpurgeableAPPLE
#define glOrtho glew::gles::glOrtho
#define glOrthof glew::gles::glOrthof
#define glOrthofOES glew::gles::glOrthofOES
#define glOrthox glew::gles::glOrthox
#define glOrthoxOES glew::gles::glOrthoxOES
#define glPNTrianglesfATI glew::gles::glPNTrianglesfATI
#define glPNTrianglesiATI glew::gles::glPNTrianglesiATI
#define glPassTexCoordATI glew::gles::glPassTexCoordATI
#define glPassThrough glew::gles::glPassThrough
#define glPassThroughxOES glew::gles::glPassThroughxOES
#define glPatchParameterfv glew::gles::glPatchParameterfv
#define glPatchParameteri glew::gles::glPatchParameteri
#define glPatchParameteriEXT glew::gles::glPatchParameteriEXT
#define glPatchParameteriOES glew::gles::glPatchParameteriOES
#define glPathColorGenNV glew::gles::glPathColorGenNV
#define glPathCommandsNV glew::gles::glPathCommandsNV
#define glPathCoordsNV glew::gles::glPathCoordsNV
#define glPathCoverDepthFuncNV glew::gles::glPathCoverDepthFuncNV
#define glPathDashArrayNV glew::gles::glPathDashArrayNV
#define glPathFogGenNV glew::gles::glPathFogGenNV
#define glPathGlyphIndexArrayNV glew::gles::glPathGlyphIndexArrayNV
#define glPathGlyphIndexRangeNV glew::gles::glPathGlyphIndexRangeNV
#define glPathGlyphRangeNV glew::gles::glPathGlyphRangeNV
#define glPathGlyphsNV glew::gles::glPathGlyphsNV
#define glPathMemoryGlyphIndexArrayNV glew::gles::glPathMemoryGlyphIndexArrayNV
#define glPathParameterfNV glew::gles::glPathParameterfNV
#define glPathParameterfvNV glew::gles::glPathParameterfvNV
#define glPathParameteriNV glew::gles::glPathParameteriNV
#define glPathParameterivNV glew::gles::glPathParameterivNV
#define glPathStencilDepthOffsetNV glew::gles::glPathStencilDepthOffsetNV
#define glPathStencilFuncNV glew::gles::glPathStencilFuncNV
#define glPathStringNV glew::gles::glPathStringNV
#define glPathSubCommandsNV glew::gles::glPathSubCommandsNV
#define glPathSubCoordsNV glew::gles::glPathSubCoordsNV
#define glPathTexGenNV glew::gles::glPathTexGenNV
#define glPauseTransformFeedback glew::gles::glPauseTransformFeedback
#define glPauseTransformFeedbackNV glew::gles::glPauseTransformFeedbackNV
#define glPixelDataRangeNV glew::gles::glPixelDataRangeNV
#define glPixelMapfv glew::gles::glPixelMapfv
#define glPixelMapuiv glew::gles::glPixelMapuiv
#define glPixelMapusv glew::gles::glPixelMapusv
#define glPixelMapx glew::gles::glPixelMapx
#define glPixelStoref glew::gles::glPixelStoref
#define glPixelStorei glew::gles::glPixelStorei
#define glPixelStorex glew::gles::glPixelStorex
#define glPixelTexGenParameterfSGIS glew::gles::glPixelTexGenParameterfSGIS
#define glPixelTexGenParameterfvSGIS glew::gles::glPixelTexGenParameterfvSGIS
#define glPixelTexGenParameteriSGIS glew::gles::glPixelTexGenParameteriSGIS
#define glPixelTexGenParameterivSGIS glew::gles::glPixelTexGenParameterivSGIS
#define glPixelTexGenSGIX glew::gles::glPixelTexGenSGIX
#define glPixelTransferf glew::gles::glPixelTransferf
#define glPixelTransferi glew::gles::glPixelTransferi
#define glPixelTransferxOES glew::gles::glPixelTransferxOES
#define glPixelTransformParameterfEXT glew::gles::glPixelTransformParameterfEXT
#define glPixelTransformParameterfvEXT glew::gles::glPixelTransformParameterfvEXT
#define glPixelTransformParameteriEXT glew::gles::glPixelTransformParameteriEXT
#define glPixelTransformParameterivEXT glew::gles::glPixelTransformParameterivEXT
#define glPixelZoom glew::gles::glPixelZoom
#define glPixelZoomxOES glew::gles::glPixelZoomxOES
#define glPointAlongPathNV glew::gles::glPointAlongPathNV
#define glPointParameterf glew::gles::glPointParameterf
#define glPointParameterfARB glew::gles::glPointParameterfARB
#define glPointParameterfEXT glew::gles::glPointParameterfEXT
#define glPointParameterfSGIS glew::gles::glPointParameterfSGIS
#define glPointParameterfv glew::gles::glPointParameterfv
#define glPointParameterfvARB glew::gles::glPointParameterfvARB
#define glPointParameterfvEXT glew::gles::glPointParameterfvEXT
#define glPointParameterfvSGIS glew::gles::glPointParameterfvSGIS
#define glPointParameteri glew::gles::glPointParameteri
#define glPointParameteriNV glew::gles::glPointParameteriNV
#define glPointParameteriv glew::gles::glPointParameteriv
#define glPointParameterivNV glew::gles::glPointParameterivNV
#define glPointParameterx glew::gles::glPointParameterx
#define glPointParameterxOES glew::gles::glPointParameterxOES
#define glPointParameterxv glew::gles::glPointParameterxv
#define glPointParameterxvOES glew::gles::glPointParameterxvOES
#define glPointSize glew::gles::glPointSize
#define glPointSizePointerOES glew::gles::glPointSizePointerOES
#define glPointSizex glew::gles::glPointSizex
#define glPointSizexOES glew::gles::glPointSizexOES
#define glPollAsyncSGIX glew::gles::glPollAsyncSGIX
#define glPollInstrumentsSGIX glew::gles::glPollInstrumentsSGIX
#define glPolygonMode glew::gles::glPolygonMode
#define glPolygonModeNV glew::gles::glPolygonModeNV
#define glPolygonOffset glew::gles::glPolygonOffset
#define glPolygonOffsetEXT glew::gles::glPolygonOffsetEXT
#define glPolygonOffsetx glew::gles::glPolygonOffsetx
#define glPolygonOffsetxOES glew::gles::glPolygonOffsetxOES
#define glPolygonOffsetClampEXT glew::gles::glPolygonOffsetClampEXT
#define glPolygonStipple glew::gles::glPolygonStipple
#define glPopAttrib glew::gles::glPopAttrib
#define glPopClientAttrib glew::gles::glPopClientAttrib
#define glPopDebugGroup glew::gles::glPopDebugGroup
#define glPopDebugGroupKHR glew::gles::glPopDebugGroupKHR
#define glPopGroupMarkerEXT glew::gles::glPopGroupMarkerEXT
#define glPopMatrix glew::gles::glPopMatrix
#define glPopName glew::gles::glPopName
#define glPresentFrameDualFillNV glew::gles::glPresentFrameDualFillNV
#define glPresentFrameKeyedNV glew::gles::glPresentFrameKeyedNV
#define glPrimitiveBoundingBoxEXT glew::gles::glPrimitiveBoundingBoxEXT
#define glPrimitiveBoundingBoxOES glew::gles::glPrimitiveBoundingBoxOES
#define glPrimitiveRestartIndex glew::gles::glPrimitiveRestartIndex
#define glPrimitiveRestartIndexNV glew::gles::glPrimitiveRestartIndexNV
#define glPrimitiveRestartNV glew::gles::glPrimitiveRestartNV
#define glPrioritizeTextures glew::gles::glPrioritizeTextures
#define glPrioritizeTexturesEXT glew::gles::glPrioritizeTexturesEXT
#define glPrioritizeTexturesxOES glew::gles::glPrioritizeTexturesxOES
#define glProgramBinary glew::gles::glProgramBinary
#define glProgramBinaryOES glew::gles::glProgramBinaryOES
#define glProgramBufferParametersIivNV glew::gles::glProgramBufferParametersIivNV
#define glProgramBufferParametersIuivNV glew::gles::glProgramBufferParametersIuivNV
#define glProgramBufferParametersfvNV glew::gles::glProgramBufferParametersfvNV
#define glProgramEnvParameter4dARB glew::gles::glProgramEnvParameter4dARB
#define glProgramEnvParameter4dvARB glew::gles::glProgramEnvParameter4dvARB
#define glProgramEnvParameter4fARB glew::gles::glProgramEnvParameter4fARB
#define glProgramEnvParameter4fvARB glew::gles::glProgramEnvParameter4fvARB
#define glProgramEnvParameterI4iNV glew::gles::glProgramEnvParameterI4iNV
#define glProgramEnvParameterI4ivNV glew::gles::glProgramEnvParameterI4ivNV
#define glProgramEnvParameterI4uiNV glew::gles::glProgramEnvParameterI4uiNV
#define glProgramEnvParameterI4uivNV glew::gles::glProgramEnvParameterI4uivNV
#define glProgramEnvParameters4fvEXT glew::gles::glProgramEnvParameters4fvEXT
#define glProgramEnvParametersI4ivNV glew::gles::glProgramEnvParametersI4ivNV
#define glProgramEnvParametersI4uivNV glew::gles::glProgramEnvParametersI4uivNV
#define glProgramLocalParameter4dARB glew::gles::glProgramLocalParameter4dARB
#define glProgramLocalParameter4dvARB glew::gles::glProgramLocalParameter4dvARB
#define glProgramLocalParameter4fARB glew::gles::glProgramLocalParameter4fARB
#define glProgramLocalParameter4fvARB glew::gles::glProgramLocalParameter4fvARB
#define glProgramLocalParameterI4iNV glew::gles::glProgramLocalParameterI4iNV
#define glProgramLocalParameterI4ivNV glew::gles::glProgramLocalParameterI4ivNV
#define glProgramLocalParameterI4uiNV glew::gles::glProgramLocalParameterI4uiNV
#define glProgramLocalParameterI4uivNV glew::gles::glProgramLocalParameterI4uivNV
#define glProgramLocalParameters4fvEXT glew::gles::glProgramLocalParameters4fvEXT
#define glProgramLocalParametersI4ivNV glew::gles::glProgramLocalParametersI4ivNV
#define glProgramLocalParametersI4uivNV glew::gles::glProgramLocalParametersI4uivNV
#define glProgramNamedParameter4dNV glew::gles::glProgramNamedParameter4dNV
#define glProgramNamedParameter4dvNV glew::gles::glProgramNamedParameter4dvNV
#define glProgramNamedParameter4fNV glew::gles::glProgramNamedParameter4fNV
#define glProgramNamedParameter4fvNV glew::gles::glProgramNamedParameter4fvNV
#define glProgramParameter4dNV glew::gles::glProgramParameter4dNV
#define glProgramParameter4dvNV glew::gles::glProgramParameter4dvNV
#define glProgramParameter4fNV glew::gles::glProgramParameter4fNV
#define glProgramParameter4fvNV glew::gles::glProgramParameter4fvNV
#define glProgramParameteri glew::gles::glProgramParameteri
#define glProgramParameteriARB glew::gles::glProgramParameteriARB
#define glProgramParameteriEXT glew::gles::glProgramParameteriEXT
#define glProgramParameters4dvNV glew::gles::glProgramParameters4dvNV
#define glProgramParameters4fvNV glew::gles::glProgramParameters4fvNV
#define glProgramPathFragmentInputGenNV glew::gles::glProgramPathFragmentInputGenNV
#define glProgramStringARB glew::gles::glProgramStringARB
#define glProgramSubroutineParametersuivNV glew::gles::glProgramSubroutineParametersuivNV
#define glProgramUniform1d glew::gles::glProgramUniform1d
#define glProgramUniform1dEXT glew::gles::glProgramUniform1dEXT
#define glProgramUniform1dv glew::gles::glProgramUniform1dv
#define glProgramUniform1dvEXT glew::gles::glProgramUniform1dvEXT
#define glProgramUniform1f glew::gles::glProgramUniform1f
#define glProgramUniform1fEXT glew::gles::glProgramUniform1fEXT
#define glProgramUniform1fv glew::gles::glProgramUniform1fv
#define glProgramUniform1fvEXT glew::gles::glProgramUniform1fvEXT
#define glProgramUniform1i glew::gles::glProgramUniform1i
#define glProgramUniform1i64NV glew::gles::glProgramUniform1i64NV
#define glProgramUniform1i64vNV glew::gles::glProgramUniform1i64vNV
#define glProgramUniform1iEXT glew::gles::glProgramUniform1iEXT
#define glProgramUniform1iv glew::gles::glProgramUniform1iv
#define glProgramUniform1ivEXT glew::gles::glProgramUniform1ivEXT
#define glProgramUniform1ui glew::gles::glProgramUniform1ui
#define glProgramUniform1ui64NV glew::gles::glProgramUniform1ui64NV
#define glProgramUniform1ui64vNV glew::gles::glProgramUniform1ui64vNV
#define glProgramUniform1uiEXT glew::gles::glProgramUniform1uiEXT
#define glProgramUniform1uiv glew::gles::glProgramUniform1uiv
#define glProgramUniform1uivEXT glew::gles::glProgramUniform1uivEXT
#define glProgramUniform2d glew::gles::glProgramUniform2d
#define glProgramUniform2dEXT glew::gles::glProgramUniform2dEXT
#define glProgramUniform2dv glew::gles::glProgramUniform2dv
#define glProgramUniform2dvEXT glew::gles::glProgramUniform2dvEXT
#define glProgramUniform2f glew::gles::glProgramUniform2f
#define glProgramUniform2fEXT glew::gles::glProgramUniform2fEXT
#define glProgramUniform2fv glew::gles::glProgramUniform2fv
#define glProgramUniform2fvEXT glew::gles::glProgramUniform2fvEXT
#define glProgramUniform2i glew::gles::glProgramUniform2i
#define glProgramUniform2i64NV glew::gles::glProgramUniform2i64NV
#define glProgramUniform2i64vNV glew::gles::glProgramUniform2i64vNV
#define glProgramUniform2iEXT glew::gles::glProgramUniform2iEXT
#define glProgramUniform2iv glew::gles::glProgramUniform2iv
#define glProgramUniform2ivEXT glew::gles::glProgramUniform2ivEXT
#define glProgramUniform2ui glew::gles::glProgramUniform2ui
#define glProgramUniform2ui64NV glew::gles::glProgramUniform2ui64NV
#define glProgramUniform2ui64vNV glew::gles::glProgramUniform2ui64vNV
#define glProgramUniform2uiEXT glew::gles::glProgramUniform2uiEXT
#define glProgramUniform2uiv glew::gles::glProgramUniform2uiv
#define glProgramUniform2uivEXT glew::gles::glProgramUniform2uivEXT
#define glProgramUniform3d glew::gles::glProgramUniform3d
#define glProgramUniform3dEXT glew::gles::glProgramUniform3dEXT
#define glProgramUniform3dv glew::gles::glProgramUniform3dv
#define glProgramUniform3dvEXT glew::gles::glProgramUniform3dvEXT
#define glProgramUniform3f glew::gles::glProgramUniform3f
#define glProgramUniform3fEXT glew::gles::glProgramUniform3fEXT
#define glProgramUniform3fv glew::gles::glProgramUniform3fv
#define glProgramUniform3fvEXT glew::gles::glProgramUniform3fvEXT
#define glProgramUniform3i glew::gles::glProgramUniform3i
#define glProgramUniform3i64NV glew::gles::glProgramUniform3i64NV
#define glProgramUniform3i64vNV glew::gles::glProgramUniform3i64vNV
#define glProgramUniform3iEXT glew::gles::glProgramUniform3iEXT
#define glProgramUniform3iv glew::gles::glProgramUniform3iv
#define glProgramUniform3ivEXT glew::gles::glProgramUniform3ivEXT
#define glProgramUniform3ui glew::gles::glProgramUniform3ui
#define glProgramUniform3ui64NV glew::gles::glProgramUniform3ui64NV
#define glProgramUniform3ui64vNV glew::gles::glProgramUniform3ui64vNV
#define glProgramUniform3uiEXT glew::gles::glProgramUniform3uiEXT
#define glProgramUniform3uiv glew::gles::glProgramUniform3uiv
#define glProgramUniform3uivEXT glew::gles::glProgramUniform3uivEXT
#define glProgramUniform4d glew::gles::glProgramUniform4d
#define glProgramUniform4dEXT glew::gles::glProgramUniform4dEXT
#define glProgramUniform4dv glew::gles::glProgramUniform4dv
#define glProgramUniform4dvEXT glew::gles::glProgramUniform4dvEXT
#define glProgramUniform4f glew::gles::glProgramUniform4f
#define glProgramUniform4fEXT glew::gles::glProgramUniform4fEXT
#define glProgramUniform4fv glew::gles::glProgramUniform4fv
#define glProgramUniform4fvEXT glew::gles::glProgramUniform4fvEXT
#define glProgramUniform4i glew::gles::glProgramUniform4i
#define glProgramUniform4i64NV glew::gles::glProgramUniform4i64NV
#define glProgramUniform4i64vNV glew::gles::glProgramUniform4i64vNV
#define glProgramUniform4iEXT glew::gles::glProgramUniform4iEXT
#define glProgramUniform4iv glew::gles::glProgramUniform4iv
#define glProgramUniform4ivEXT glew::gles::glProgramUniform4ivEXT
#define glProgramUniform4ui glew::gles::glProgramUniform4ui
#define glProgramUniform4ui64NV glew::gles::glProgramUniform4ui64NV
#define glProgramUniform4ui64vNV glew::gles::glProgramUniform4ui64vNV
#define glProgramUniform4uiEXT glew::gles::glProgramUniform4uiEXT
#define glProgramUniform4uiv glew::gles::glProgramUniform4uiv
#define glProgramUniform4uivEXT glew::gles::glProgramUniform4uivEXT
#define glProgramUniformHandleui64ARB glew::gles::glProgramUniformHandleui64ARB
#define glProgramUniformHandleui64NV glew::gles::glProgramUniformHandleui64NV
#define glProgramUniformHandleui64vARB glew::gles::glProgramUniformHandleui64vARB
#define glProgramUniformHandleui64vNV glew::gles::glProgramUniformHandleui64vNV
#define glProgramUniformMatrix2dv glew::gles::glProgramUniformMatrix2dv
#define glProgramUniformMatrix2dvEXT glew::gles::glProgramUniformMatrix2dvEXT
#define glProgramUniformMatrix2fv glew::gles::glProgramUniformMatrix2fv
#define glProgramUniformMatrix2fvEXT glew::gles::glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix2x3dv glew::gles::glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix2x3dvEXT glew::gles::glProgramUniformMatrix2x3dvEXT
#define glProgramUniformMatrix2x3fv glew::gles::glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix2x3fvEXT glew::gles::glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix2x4dv glew::gles::glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix2x4dvEXT glew::gles::glProgramUniformMatrix2x4dvEXT
#define glProgramUniformMatrix2x4fv glew::gles::glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix2x4fvEXT glew::gles::glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix3dv glew::gles::glProgramUniformMatrix3dv
#define glProgramUniformMatrix3dvEXT glew::gles::glProgramUniformMatrix3dvEXT
#define glProgramUniformMatrix3fv glew::gles::glProgramUniformMatrix3fv
#define glProgramUniformMatrix3fvEXT glew::gles::glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix3x2dv glew::gles::glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix3x2dvEXT glew::gles::glProgramUniformMatrix3x2dvEXT
#define glProgramUniformMatrix3x2fv glew::gles::glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix3x2fvEXT glew::gles::glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix3x4dv glew::gles::glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix3x4dvEXT glew::gles::glProgramUniformMatrix3x4dvEXT
#define glProgramUniformMatrix3x4fv glew::gles::glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix3x4fvEXT glew::gles::glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4dv glew::gles::glProgramUniformMatrix4dv
#define glProgramUniformMatrix4dvEXT glew::gles::glProgramUniformMatrix4dvEXT
#define glProgramUniformMatrix4fv glew::gles::glProgramUniformMatrix4fv
#define glProgramUniformMatrix4fvEXT glew::gles::glProgramUniformMatrix4fvEXT
#define glProgramUniformMatrix4x2dv glew::gles::glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix4x2dvEXT glew::gles::glProgramUniformMatrix4x2dvEXT
#define glProgramUniformMatrix4x2fv glew::gles::glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix4x2fvEXT glew::gles::glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix4x3dv glew::gles::glProgramUniformMatrix4x3dv
#define glProgramUniformMatrix4x3dvEXT glew::gles::glProgramUniformMatrix4x3dvEXT
#define glProgramUniformMatrix4x3fv glew::gles::glProgramUniformMatrix4x3fv
#define glProgramUniformMatrix4x3fvEXT glew::gles::glProgramUniformMatrix4x3fvEXT
#define glProgramUniformui64NV glew::gles::glProgramUniformui64NV
#define glProgramUniformui64vNV glew::gles::glProgramUniformui64vNV
#define glProgramVertexLimitNV glew::gles::glProgramVertexLimitNV
#define glProvokingVertex glew::gles::glProvokingVertex
#define glProvokingVertexEXT glew::gles::glProvokingVertexEXT
#define glPushAttrib glew::gles::glPushAttrib
#define glPushClientAttrib glew::gles::glPushClientAttrib
#define glPushClientAttribDefaultEXT glew::gles::glPushClientAttribDefaultEXT
#define glPushDebugGroup glew::gles::glPushDebugGroup
#define glPushDebugGroupKHR glew::gles::glPushDebugGroupKHR
#define glPushGroupMarkerEXT glew::gles::glPushGroupMarkerEXT
#define glPushMatrix glew::gles::glPushMatrix
#define glPushName glew::gles::glPushName
#define glQueryCounter glew::gles::glQueryCounter
#define glQueryCounterEXT glew::gles::glQueryCounterEXT
#define glQueryMatrixxOES glew::gles::glQueryMatrixxOES
#define glQueryObjectParameteruiAMD glew::gles::glQueryObjectParameteruiAMD
#define glRasterPos2d glew::gles::glRasterPos2d
#define glRasterPos2dv glew::gles::glRasterPos2dv
#define glRasterPos2f glew::gles::glRasterPos2f
#define glRasterPos2fv glew::gles::glRasterPos2fv
#define glRasterPos2i glew::gles::glRasterPos2i
#define glRasterPos2iv glew::gles::glRasterPos2iv
#define glRasterPos2s glew::gles::glRasterPos2s
#define glRasterPos2sv glew::gles::glRasterPos2sv
#define glRasterPos2xOES glew::gles::glRasterPos2xOES
#define glRasterPos2xvOES glew::gles::glRasterPos2xvOES
#define glRasterPos3d glew::gles::glRasterPos3d
#define glRasterPos3dv glew::gles::glRasterPos3dv
#define glRasterPos3f glew::gles::glRasterPos3f
#define glRasterPos3fv glew::gles::glRasterPos3fv
#define glRasterPos3i glew::gles::glRasterPos3i
#define glRasterPos3iv glew::gles::glRasterPos3iv
#define glRasterPos3s glew::gles::glRasterPos3s
#define glRasterPos3sv glew::gles::glRasterPos3sv
#define glRasterPos3xOES glew::gles::glRasterPos3xOES
#define glRasterPos3xvOES glew::gles::glRasterPos3xvOES
#define glRasterPos4d glew::gles::glRasterPos4d
#define glRasterPos4dv glew::gles::glRasterPos4dv
#define glRasterPos4f glew::gles::glRasterPos4f
#define glRasterPos4fv glew::gles::glRasterPos4fv
#define glRasterPos4i glew::gles::glRasterPos4i
#define glRasterPos4iv glew::gles::glRasterPos4iv
#define glRasterPos4s glew::gles::glRasterPos4s
#define glRasterPos4sv glew::gles::glRasterPos4sv
#define glRasterPos4xOES glew::gles::glRasterPos4xOES
#define glRasterPos4xvOES glew::gles::glRasterPos4xvOES
#define glReadBuffer glew::gles::glReadBuffer
#define glReadBufferIndexedEXT glew::gles::glReadBufferIndexedEXT
#define glReadBufferNV glew::gles::glReadBufferNV
#define glReadInstrumentsSGIX glew::gles::glReadInstrumentsSGIX
#define glReadPixels glew::gles::glReadPixels
#define glReadnPixels glew::gles::glReadnPixels
#define glReadnPixelsARB glew::gles::glReadnPixelsARB
#define glReadnPixelsEXT glew::gles::glReadnPixelsEXT
#define glReadnPixelsKHR glew::gles::glReadnPixelsKHR
#define glRectd glew::gles::glRectd
#define glRectdv glew::gles::glRectdv
#define glRectf glew::gles::glRectf
#define glRectfv glew::gles::glRectfv
#define glRecti glew::gles::glRecti
#define glRectiv glew::gles::glRectiv
#define glRects glew::gles::glRects
#define glRectsv glew::gles::glRectsv
#define glRectxOES glew::gles::glRectxOES
#define glRectxvOES glew::gles::glRectxvOES
#define glReferencePlaneSGIX glew::gles::glReferencePlaneSGIX
#define glReleaseShaderCompiler glew::gles::glReleaseShaderCompiler
#define glRenderMode glew::gles::glRenderMode
#define glRenderbufferStorage glew::gles::glRenderbufferStorage
#define glRenderbufferStorageEXT glew::gles::glRenderbufferStorageEXT
#define glRenderbufferStorageMultisample glew::gles::glRenderbufferStorageMultisample
#define glRenderbufferStorageMultisampleANGLE glew::gles::glRenderbufferStorageMultisampleANGLE
#define glRenderbufferStorageMultisampleAPPLE glew::gles::glRenderbufferStorageMultisampleAPPLE
#define glRenderbufferStorageMultisampleCoverageNV glew::gles::glRenderbufferStorageMultisampleCoverageNV
#define glRenderbufferStorageMultisampleEXT glew::gles::glRenderbufferStorageMultisampleEXT
#define glRenderbufferStorageMultisampleIMG glew::gles::glRenderbufferStorageMultisampleIMG
#define glRenderbufferStorageMultisampleNV glew::gles::glRenderbufferStorageMultisampleNV
#define glRenderbufferStorageOES glew::gles::glRenderbufferStorageOES
#define glReplacementCodePointerSUN glew::gles::glReplacementCodePointerSUN
#define glReplacementCodeubSUN glew::gles::glReplacementCodeubSUN
#define glReplacementCodeubvSUN glew::gles::glReplacementCodeubvSUN
#define glReplacementCodeuiColor3fVertex3fSUN glew::gles::glReplacementCodeuiColor3fVertex3fSUN
#define glReplacementCodeuiColor3fVertex3fvSUN glew::gles::glReplacementCodeuiColor3fVertex3fvSUN
#define glReplacementCodeuiColor4fNormal3fVertex3fSUN glew::gles::glReplacementCodeuiColor4fNormal3fVertex3fSUN
#define glReplacementCodeuiColor4fNormal3fVertex3fvSUN glew::gles::glReplacementCodeuiColor4fNormal3fVertex3fvSUN
#define glReplacementCodeuiColor4ubVertex3fSUN glew::gles::glReplacementCodeuiColor4ubVertex3fSUN
#define glReplacementCodeuiColor4ubVertex3fvSUN glew::gles::glReplacementCodeuiColor4ubVertex3fvSUN
#define glReplacementCodeuiNormal3fVertex3fSUN glew::gles::glReplacementCodeuiNormal3fVertex3fSUN
#define glReplacementCodeuiNormal3fVertex3fvSUN glew::gles::glReplacementCodeuiNormal3fVertex3fvSUN
#define glReplacementCodeuiSUN glew::gles::glReplacementCodeuiSUN
#define glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN glew::gles::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
#define glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN glew::gles::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
#define glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN glew::gles::glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
#define glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN glew::gles::glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
#define glReplacementCodeuiTexCoord2fVertex3fSUN glew::gles::glReplacementCodeuiTexCoord2fVertex3fSUN
#define glReplacementCodeuiTexCoord2fVertex3fvSUN glew::gles::glReplacementCodeuiTexCoord2fVertex3fvSUN
#define glReplacementCodeuiVertex3fSUN glew::gles::glReplacementCodeuiVertex3fSUN
#define glReplacementCodeuiVertex3fvSUN glew::gles::glReplacementCodeuiVertex3fvSUN
#define glReplacementCodeuivSUN glew::gles::glReplacementCodeuivSUN
#define glReplacementCodeusSUN glew::gles::glReplacementCodeusSUN
#define glReplacementCodeusvSUN glew::gles::glReplacementCodeusvSUN
#define glRequestResidentProgramsNV glew::gles::glRequestResidentProgramsNV
#define glResetHistogram glew::gles::glResetHistogram
#define glResetHistogramEXT glew::gles::glResetHistogramEXT
#define glResetMinmax glew::gles::glResetMinmax
#define glResetMinmaxEXT glew::gles::glResetMinmaxEXT
#define glResizeBuffersMESA glew::gles::glResizeBuffersMESA
#define glResolveMultisampleFramebufferAPPLE glew::gles::glResolveMultisampleFramebufferAPPLE
#define glResumeTransformFeedback glew::gles::glResumeTransformFeedback
#define glResumeTransformFeedbackNV glew::gles::glResumeTransformFeedbackNV
#define glRotated glew::gles::glRotated
#define glRotatef glew::gles::glRotatef
#define glRotatex glew::gles::glRotatex
#define glRotatexOES glew::gles::glRotatexOES
#define glSampleCoverage glew::gles::glSampleCoverage
#define glSampleCoverageARB glew::gles::glSampleCoverageARB
#define glSampleCoveragex glew::gles::glSampleCoveragex
#define glSampleCoveragexOES glew::gles::glSampleCoveragexOES
#define glSampleMapATI glew::gles::glSampleMapATI
#define glSampleMaskEXT glew::gles::glSampleMaskEXT
#define glSampleMaskIndexedNV glew::gles::glSampleMaskIndexedNV
#define glSampleMaskSGIS glew::gles::glSampleMaskSGIS
#define glSampleMaski glew::gles::glSampleMaski
#define glSamplePatternEXT glew::gles::glSamplePatternEXT
#define glSamplePatternSGIS glew::gles::glSamplePatternSGIS
#define glSamplerParameterIiv glew::gles::glSamplerParameterIiv
#define glSamplerParameterIivEXT glew::gles::glSamplerParameterIivEXT
#define glSamplerParameterIivOES glew::gles::glSamplerParameterIivOES
#define glSamplerParameterIuiv glew::gles::glSamplerParameterIuiv
#define glSamplerParameterIuivEXT glew::gles::glSamplerParameterIuivEXT
#define glSamplerParameterIuivOES glew::gles::glSamplerParameterIuivOES
#define glSamplerParameterf glew::gles::glSamplerParameterf
#define glSamplerParameterfv glew::gles::glSamplerParameterfv
#define glSamplerParameteri glew::gles::glSamplerParameteri
#define glSamplerParameteriv glew::gles::glSamplerParameteriv
#define glScaled glew::gles::glScaled
#define glScalef glew::gles::glScalef
#define glScalex glew::gles::glScalex
#define glScalexOES glew::gles::glScalexOES
#define glScissor glew::gles::glScissor
#define glScissorArrayv glew::gles::glScissorArrayv
#define glScissorArrayvNV glew::gles::glScissorArrayvNV
#define glScissorIndexed glew::gles::glScissorIndexed
#define glScissorIndexedNV glew::gles::glScissorIndexedNV
#define glScissorIndexedv glew::gles::glScissorIndexedv
#define glScissorIndexedvNV glew::gles::glScissorIndexedvNV
#define glSecondaryColor3b glew::gles::glSecondaryColor3b
#define glSecondaryColor3bEXT glew::gles::glSecondaryColor3bEXT
#define glSecondaryColor3bv glew::gles::glSecondaryColor3bv
#define glSecondaryColor3bvEXT glew::gles::glSecondaryColor3bvEXT
#define glSecondaryColor3d glew::gles::glSecondaryColor3d
#define glSecondaryColor3dEXT glew::gles::glSecondaryColor3dEXT
#define glSecondaryColor3dv glew::gles::glSecondaryColor3dv
#define glSecondaryColor3dvEXT glew::gles::glSecondaryColor3dvEXT
#define glSecondaryColor3f glew::gles::glSecondaryColor3f
#define glSecondaryColor3fEXT glew::gles::glSecondaryColor3fEXT
#define glSecondaryColor3fv glew::gles::glSecondaryColor3fv
#define glSecondaryColor3fvEXT glew::gles::glSecondaryColor3fvEXT
#define glSecondaryColor3hNV glew::gles::glSecondaryColor3hNV
#define glSecondaryColor3hvNV glew::gles::glSecondaryColor3hvNV
#define glSecondaryColor3i glew::gles::glSecondaryColor3i
#define glSecondaryColor3iEXT glew::gles::glSecondaryColor3iEXT
#define glSecondaryColor3iv glew::gles::glSecondaryColor3iv
#define glSecondaryColor3ivEXT glew::gles::glSecondaryColor3ivEXT
#define glSecondaryColor3s glew::gles::glSecondaryColor3s
#define glSecondaryColor3sEXT glew::gles::glSecondaryColor3sEXT
#define glSecondaryColor3sv glew::gles::glSecondaryColor3sv
#define glSecondaryColor3svEXT glew::gles::glSecondaryColor3svEXT
#define glSecondaryColor3ub glew::gles::glSecondaryColor3ub
#define glSecondaryColor3ubEXT glew::gles::glSecondaryColor3ubEXT
#define glSecondaryColor3ubv glew::gles::glSecondaryColor3ubv
#define glSecondaryColor3ubvEXT glew::gles::glSecondaryColor3ubvEXT
#define glSecondaryColor3ui glew::gles::glSecondaryColor3ui
#define glSecondaryColor3uiEXT glew::gles::glSecondaryColor3uiEXT
#define glSecondaryColor3uiv glew::gles::glSecondaryColor3uiv
#define glSecondaryColor3uivEXT glew::gles::glSecondaryColor3uivEXT
#define glSecondaryColor3us glew::gles::glSecondaryColor3us
#define glSecondaryColor3usEXT glew::gles::glSecondaryColor3usEXT
#define glSecondaryColor3usv glew::gles::glSecondaryColor3usv
#define glSecondaryColor3usvEXT glew::gles::glSecondaryColor3usvEXT
#define glSecondaryColorFormatNV glew::gles::glSecondaryColorFormatNV
#define glSecondaryColorP3ui glew::gles::glSecondaryColorP3ui
#define glSecondaryColorP3uiv glew::gles::glSecondaryColorP3uiv
#define glSecondaryColorPointer glew::gles::glSecondaryColorPointer
#define glSecondaryColorPointerEXT glew::gles::glSecondaryColorPointerEXT
#define glSecondaryColorPointerListIBM glew::gles::glSecondaryColorPointerListIBM
#define glSelectBuffer glew::gles::glSelectBuffer
#define glSelectPerfMonitorCountersAMD glew::gles::glSelectPerfMonitorCountersAMD
#define glSeparableFilter2D glew::gles::glSeparableFilter2D
#define glSeparableFilter2DEXT glew::gles::glSeparableFilter2DEXT
#define glSetFenceAPPLE glew::gles::glSetFenceAPPLE
#define glSetFenceNV glew::gles::glSetFenceNV
#define glSetFragmentShaderConstantATI glew::gles::glSetFragmentShaderConstantATI
#define glSetInvariantEXT glew::gles::glSetInvariantEXT
#define glSetLocalConstantEXT glew::gles::glSetLocalConstantEXT
#define glSetMultisamplefvAMD glew::gles::glSetMultisamplefvAMD
#define glShadeModel glew::gles::glShadeModel
#define glShaderBinary glew::gles::glShaderBinary
#define glShaderOp1EXT glew::gles::glShaderOp1EXT
#define glShaderOp2EXT glew::gles::glShaderOp2EXT
#define glShaderOp3EXT glew::gles::glShaderOp3EXT
#define glShaderSource glew::gles::glShaderSource
#define glShaderSourceARB glew::gles::glShaderSourceARB
#define glShaderStorageBlockBinding glew::gles::glShaderStorageBlockBinding
#define glSharpenTexFuncSGIS glew::gles::glSharpenTexFuncSGIS
#define glSpriteParameterfSGIX glew::gles::glSpriteParameterfSGIX
#define glSpriteParameterfvSGIX glew::gles::glSpriteParameterfvSGIX
#define glSpriteParameteriSGIX glew::gles::glSpriteParameteriSGIX
#define glSpriteParameterivSGIX glew::gles::glSpriteParameterivSGIX
#define glStartInstrumentsSGIX glew::gles::glStartInstrumentsSGIX
#define glStartTilingQCOM glew::gles::glStartTilingQCOM
#define glStateCaptureNV glew::gles::glStateCaptureNV
#define glStencilClearTagEXT glew::gles::glStencilClearTagEXT
#define glStencilFillPathInstancedNV glew::gles::glStencilFillPathInstancedNV
#define glStencilFillPathNV glew::gles::glStencilFillPathNV
#define glStencilFunc glew::gles::glStencilFunc
#define glStencilFuncSeparate glew::gles::glStencilFuncSeparate
#define glStencilFuncSeparateATI glew::gles::glStencilFuncSeparateATI
#define glStencilMask glew::gles::glStencilMask
#define glStencilMaskSeparate glew::gles::glStencilMaskSeparate
#define glStencilOp glew::gles::glStencilOp
#define glStencilOpSeparate glew::gles::glStencilOpSeparate
#define glStencilOpSeparateATI glew::gles::glStencilOpSeparateATI
#define glStencilOpValueAMD glew::gles::glStencilOpValueAMD
#define glStencilStrokePathInstancedNV glew::gles::glStencilStrokePathInstancedNV
#define glStencilStrokePathNV glew::gles::glStencilStrokePathNV
#define glStencilThenCoverFillPathInstancedNV glew::gles::glStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverFillPathNV glew::gles::glStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathInstancedNV glew::gles::glStencilThenCoverStrokePathInstancedNV
#define glStencilThenCoverStrokePathNV glew::gles::glStencilThenCoverStrokePathNV
#define glStopInstrumentsSGIX glew::gles::glStopInstrumentsSGIX
#define glStringMarkerGREMEDY glew::gles::glStringMarkerGREMEDY
#define glSwizzleEXT glew::gles::glSwizzleEXT
#define glSyncTextureINTEL glew::gles::glSyncTextureINTEL
#define glTagSampleBufferSGIX glew::gles::glTagSampleBufferSGIX
#define glTangent3bEXT glew::gles::glTangent3bEXT
#define glTangent3bvEXT glew::gles::glTangent3bvEXT
#define glTangent3dEXT glew::gles::glTangent3dEXT
#define glTangent3dvEXT glew::gles::glTangent3dvEXT
#define glTangent3fEXT glew::gles::glTangent3fEXT
#define glTangent3fvEXT glew::gles::glTangent3fvEXT
#define glTangent3iEXT glew::gles::glTangent3iEXT
#define glTangent3ivEXT glew::gles::glTangent3ivEXT
#define glTangent3sEXT glew::gles::glTangent3sEXT
#define glTangent3svEXT glew::gles::glTangent3svEXT
#define glTangentPointerEXT glew::gles::glTangentPointerEXT
#define glTbufferMask3DFX glew::gles::glTbufferMask3DFX
#define glTessellationFactorAMD glew::gles::glTessellationFactorAMD
#define glTessellationModeAMD glew::gles::glTessellationModeAMD
#define glTestFenceAPPLE glew::gles::glTestFenceAPPLE
#define glTestFenceNV glew::gles::glTestFenceNV
#define glTestObjectAPPLE glew::gles::glTestObjectAPPLE
#define glTexBuffer glew::gles::glTexBuffer
#define glTexBufferARB glew::gles::glTexBufferARB
#define glTexBufferEXT glew::gles::glTexBufferEXT
#define glTexBufferOES glew::gles::glTexBufferOES
#define glTexBufferRange glew::gles::glTexBufferRange
#define glTexBufferRangeEXT glew::gles::glTexBufferRangeEXT
#define glTexBufferRangeOES glew::gles::glTexBufferRangeOES
#define glTexBumpParameterfvATI glew::gles::glTexBumpParameterfvATI
#define glTexBumpParameterivATI glew::gles::glTexBumpParameterivATI
#define glTexCoord1bOES glew::gles::glTexCoord1bOES
#define glTexCoord1bvOES glew::gles::glTexCoord1bvOES
#define glTexCoord1d glew::gles::glTexCoord1d
#define glTexCoord1dv glew::gles::glTexCoord1dv
#define glTexCoord1f glew::gles::glTexCoord1f
#define glTexCoord1fv glew::gles::glTexCoord1fv
#define glTexCoord1hNV glew::gles::glTexCoord1hNV
#define glTexCoord1hvNV glew::gles::glTexCoord1hvNV
#define glTexCoord1i glew::gles::glTexCoord1i
#define glTexCoord1iv glew::gles::glTexCoord1iv
#define glTexCoord1s glew::gles::glTexCoord1s
#define glTexCoord1sv glew::gles::glTexCoord1sv
#define glTexCoord1xOES glew::gles::glTexCoord1xOES
#define glTexCoord1xvOES glew::gles::glTexCoord1xvOES
#define glTexCoord2bOES glew::gles::glTexCoord2bOES
#define glTexCoord2bvOES glew::gles::glTexCoord2bvOES
#define glTexCoord2d glew::gles::glTexCoord2d
#define glTexCoord2dv glew::gles::glTexCoord2dv
#define glTexCoord2f glew::gles::glTexCoord2f
#define glTexCoord2fColor3fVertex3fSUN glew::gles::glTexCoord2fColor3fVertex3fSUN
#define glTexCoord2fColor3fVertex3fvSUN glew::gles::glTexCoord2fColor3fVertex3fvSUN
#define glTexCoord2fColor4fNormal3fVertex3fSUN glew::gles::glTexCoord2fColor4fNormal3fVertex3fSUN
#define glTexCoord2fColor4fNormal3fVertex3fvSUN glew::gles::glTexCoord2fColor4fNormal3fVertex3fvSUN
#define glTexCoord2fColor4ubVertex3fSUN glew::gles::glTexCoord2fColor4ubVertex3fSUN
#define glTexCoord2fColor4ubVertex3fvSUN glew::gles::glTexCoord2fColor4ubVertex3fvSUN
#define glTexCoord2fNormal3fVertex3fSUN glew::gles::glTexCoord2fNormal3fVertex3fSUN
#define glTexCoord2fNormal3fVertex3fvSUN glew::gles::glTexCoord2fNormal3fVertex3fvSUN
#define glTexCoord2fVertex3fSUN glew::gles::glTexCoord2fVertex3fSUN
#define glTexCoord2fVertex3fvSUN glew::gles::glTexCoord2fVertex3fvSUN
#define glTexCoord2fv glew::gles::glTexCoord2fv
#define glTexCoord2hNV glew::gles::glTexCoord2hNV
#define glTexCoord2hvNV glew::gles::glTexCoord2hvNV
#define glTexCoord2i glew::gles::glTexCoord2i
#define glTexCoord2iv glew::gles::glTexCoord2iv
#define glTexCoord2s glew::gles::glTexCoord2s
#define glTexCoord2sv glew::gles::glTexCoord2sv
#define glTexCoord2xOES glew::gles::glTexCoord2xOES
#define glTexCoord2xvOES glew::gles::glTexCoord2xvOES
#define glTexCoord3bOES glew::gles::glTexCoord3bOES
#define glTexCoord3bvOES glew::gles::glTexCoord3bvOES
#define glTexCoord3d glew::gles::glTexCoord3d
#define glTexCoord3dv glew::gles::glTexCoord3dv
#define glTexCoord3f glew::gles::glTexCoord3f
#define glTexCoord3fv glew::gles::glTexCoord3fv
#define glTexCoord3hNV glew::gles::glTexCoord3hNV
#define glTexCoord3hvNV glew::gles::glTexCoord3hvNV
#define glTexCoord3i glew::gles::glTexCoord3i
#define glTexCoord3iv glew::gles::glTexCoord3iv
#define glTexCoord3s glew::gles::glTexCoord3s
#define glTexCoord3sv glew::gles::glTexCoord3sv
#define glTexCoord3xOES glew::gles::glTexCoord3xOES
#define glTexCoord3xvOES glew::gles::glTexCoord3xvOES
#define glTexCoord4bOES glew::gles::glTexCoord4bOES
#define glTexCoord4bvOES glew::gles::glTexCoord4bvOES
#define glTexCoord4d glew::gles::glTexCoord4d
#define glTexCoord4dv glew::gles::glTexCoord4dv
#define glTexCoord4f glew::gles::glTexCoord4f
#define glTexCoord4fColor4fNormal3fVertex4fSUN glew::gles::glTexCoord4fColor4fNormal3fVertex4fSUN
#define glTexCoord4fColor4fNormal3fVertex4fvSUN glew::gles::glTexCoord4fColor4fNormal3fVertex4fvSUN
#define glTexCoord4fVertex4fSUN glew::gles::glTexCoord4fVertex4fSUN
#define glTexCoord4fVertex4fvSUN glew::gles::glTexCoord4fVertex4fvSUN
#define glTexCoord4fv glew::gles::glTexCoord4fv
#define glTexCoord4hNV glew::gles::glTexCoord4hNV
#define glTexCoord4hvNV glew::gles::glTexCoord4hvNV
#define glTexCoord4i glew::gles::glTexCoord4i
#define glTexCoord4iv glew::gles::glTexCoord4iv
#define glTexCoord4s glew::gles::glTexCoord4s
#define glTexCoord4sv glew::gles::glTexCoord4sv
#define glTexCoord4xOES glew::gles::glTexCoord4xOES
#define glTexCoord4xvOES glew::gles::glTexCoord4xvOES
#define glTexCoordFormatNV glew::gles::glTexCoordFormatNV
#define glTexCoordP1ui glew::gles::glTexCoordP1ui
#define glTexCoordP1uiv glew::gles::glTexCoordP1uiv
#define glTexCoordP2ui glew::gles::glTexCoordP2ui
#define glTexCoordP2uiv glew::gles::glTexCoordP2uiv
#define glTexCoordP3ui glew::gles::glTexCoordP3ui
#define glTexCoordP3uiv glew::gles::glTexCoordP3uiv
#define glTexCoordP4ui glew::gles::glTexCoordP4ui
#define glTexCoordP4uiv glew::gles::glTexCoordP4uiv
#define glTexCoordPointer glew::gles::glTexCoordPointer
#define glTexCoordPointerEXT glew::gles::glTexCoordPointerEXT
#define glTexCoordPointerListIBM glew::gles::glTexCoordPointerListIBM
#define glTexCoordPointervINTEL glew::gles::glTexCoordPointervINTEL
#define glTexEnvf glew::gles::glTexEnvf
#define glTexEnvfv glew::gles::glTexEnvfv
#define glTexEnvi glew::gles::glTexEnvi
#define glTexEnviv glew::gles::glTexEnviv
#define glTexEnvx glew::gles::glTexEnvx
#define glTexEnvxOES glew::gles::glTexEnvxOES
#define glTexEnvxv glew::gles::glTexEnvxv
#define glTexEnvxvOES glew::gles::glTexEnvxvOES
#define glTexFilterFuncSGIS glew::gles::glTexFilterFuncSGIS
#define glTexGend glew::gles::glTexGend
#define glTexGendv glew::gles::glTexGendv
#define glTexGenf glew::gles::glTexGenf
#define glTexGenfOES glew::gles::glTexGenfOES
#define glTexGenfv glew::gles::glTexGenfv
#define glTexGenfvOES glew::gles::glTexGenfvOES
#define glTexGeni glew::gles::glTexGeni
#define glTexGeniOES glew::gles::glTexGeniOES
#define glTexGeniv glew::gles::glTexGeniv
#define glTexGenivOES glew::gles::glTexGenivOES
#define glTexGenxOES glew::gles::glTexGenxOES
#define glTexGenxvOES glew::gles::glTexGenxvOES
#define glTexImage1D glew::gles::glTexImage1D
#define glTexImage2D glew::gles::glTexImage2D
#define glTexImage2DMultisample glew::gles::glTexImage2DMultisample
#define glTexImage2DMultisampleCoverageNV glew::gles::glTexImage2DMultisampleCoverageNV
#define glTexImage3D glew::gles::glTexImage3D
#define glTexImage3DEXT glew::gles::glTexImage3DEXT
#define glTexImage3DMultisample glew::gles::glTexImage3DMultisample
#define glTexImage3DMultisampleCoverageNV glew::gles::glTexImage3DMultisampleCoverageNV
#define glTexImage3DOES glew::gles::glTexImage3DOES
#define glTexImage4DSGIS glew::gles::glTexImage4DSGIS
#define glTexPageCommitmentARB glew::gles::glTexPageCommitmentARB
#define glTexPageCommitmentEXT glew::gles::glTexPageCommitmentEXT
#define glTexParameterIiv glew::gles::glTexParameterIiv
#define glTexParameterIivEXT glew::gles::glTexParameterIivEXT
#define glTexParameterIivOES glew::gles::glTexParameterIivOES
#define glTexParameterIuiv glew::gles::glTexParameterIuiv
#define glTexParameterIuivEXT glew::gles::glTexParameterIuivEXT
#define glTexParameterIuivOES glew::gles::glTexParameterIuivOES
#define glTexParameterf glew::gles::glTexParameterf
#define glTexParameterfv glew::gles::glTexParameterfv
#define glTexParameteri glew::gles::glTexParameteri
#define glTexParameteriv glew::gles::glTexParameteriv
#define glTexParameterx glew::gles::glTexParameterx
#define glTexParameterxOES glew::gles::glTexParameterxOES
#define glTexParameterxv glew::gles::glTexParameterxv
#define glTexParameterxvOES glew::gles::glTexParameterxvOES
#define glTexRenderbufferNV glew::gles::glTexRenderbufferNV
#define glTexStorage1D glew::gles::glTexStorage1D
#define glTexStorage1DEXT glew::gles::glTexStorage1DEXT
#define glTexStorage2D glew::gles::glTexStorage2D
#define glTexStorage2DEXT glew::gles::glTexStorage2DEXT
#define glTexStorage2DMultisample glew::gles::glTexStorage2DMultisample
#define glTexStorage3D glew::gles::glTexStorage3D
#define glTexStorage3DEXT glew::gles::glTexStorage3DEXT
#define glTexStorage3DMultisample glew::gles::glTexStorage3DMultisample
#define glTexStorage3DMultisampleOES glew::gles::glTexStorage3DMultisampleOES
#define glTexStorageSparseAMD glew::gles::glTexStorageSparseAMD
#define glTexSubImage1D glew::gles::glTexSubImage1D
#define glTexSubImage1DEXT glew::gles::glTexSubImage1DEXT
#define glTexSubImage2D glew::gles::glTexSubImage2D
#define glTexSubImage2DEXT glew::gles::glTexSubImage2DEXT
#define glTexSubImage3D glew::gles::glTexSubImage3D
#define glTexSubImage3DEXT glew::gles::glTexSubImage3DEXT
#define glTexSubImage3DOES glew::gles::glTexSubImage3DOES
#define glTexSubImage4DSGIS glew::gles::glTexSubImage4DSGIS
#define glTextureBarrier glew::gles::glTextureBarrier
#define glTextureBarrierNV glew::gles::glTextureBarrierNV
#define glTextureBuffer glew::gles::glTextureBuffer
#define glTextureBufferEXT glew::gles::glTextureBufferEXT
#define glTextureBufferRange glew::gles::glTextureBufferRange
#define glTextureBufferRangeEXT glew::gles::glTextureBufferRangeEXT
#define glTextureColorMaskSGIS glew::gles::glTextureColorMaskSGIS
#define glTextureImage1DEXT glew::gles::glTextureImage1DEXT
#define glTextureImage2DEXT glew::gles::glTextureImage2DEXT
#define glTextureImage2DMultisampleCoverageNV glew::gles::glTextureImage2DMultisampleCoverageNV
#define glTextureImage2DMultisampleNV glew::gles::glTextureImage2DMultisampleNV
#define glTextureImage3DEXT glew::gles::glTextureImage3DEXT
#define glTextureImage3DMultisampleCoverageNV glew::gles::glTextureImage3DMultisampleCoverageNV
#define glTextureImage3DMultisampleNV glew::gles::glTextureImage3DMultisampleNV
#define glTextureLightEXT glew::gles::glTextureLightEXT
#define glTextureMaterialEXT glew::gles::glTextureMaterialEXT
#define glTextureNormalEXT glew::gles::glTextureNormalEXT
#define glTexturePageCommitmentEXT glew::gles::glTexturePageCommitmentEXT
#define glTextureParameterIiv glew::gles::glTextureParameterIiv
#define glTextureParameterIivEXT glew::gles::glTextureParameterIivEXT
#define glTextureParameterIuiv glew::gles::glTextureParameterIuiv
#define glTextureParameterIuivEXT glew::gles::glTextureParameterIuivEXT
#define glTextureParameterf glew::gles::glTextureParameterf
#define glTextureParameterfEXT glew::gles::glTextureParameterfEXT
#define glTextureParameterfv glew::gles::glTextureParameterfv
#define glTextureParameterfvEXT glew::gles::glTextureParameterfvEXT
#define glTextureParameteri glew::gles::glTextureParameteri
#define glTextureParameteriEXT glew::gles::glTextureParameteriEXT
#define glTextureParameteriv glew::gles::glTextureParameteriv
#define glTextureParameterivEXT glew::gles::glTextureParameterivEXT
#define glTextureRangeAPPLE glew::gles::glTextureRangeAPPLE
#define glTextureRenderbufferEXT glew::gles::glTextureRenderbufferEXT
#define glTextureStorage1D glew::gles::glTextureStorage1D
#define glTextureStorage1DEXT glew::gles::glTextureStorage1DEXT
#define glTextureStorage2D glew::gles::glTextureStorage2D
#define glTextureStorage2DEXT glew::gles::glTextureStorage2DEXT
#define glTextureStorage2DMultisample glew::gles::glTextureStorage2DMultisample
#define glTextureStorage2DMultisampleEXT glew::gles::glTextureStorage2DMultisampleEXT
#define glTextureStorage3D glew::gles::glTextureStorage3D
#define glTextureStorage3DEXT glew::gles::glTextureStorage3DEXT
#define glTextureStorage3DMultisample glew::gles::glTextureStorage3DMultisample
#define glTextureStorage3DMultisampleEXT glew::gles::glTextureStorage3DMultisampleEXT
#define glTextureStorageSparseAMD glew::gles::glTextureStorageSparseAMD
#define glTextureSubImage1D glew::gles::glTextureSubImage1D
#define glTextureSubImage1DEXT glew::gles::glTextureSubImage1DEXT
#define glTextureSubImage2D glew::gles::glTextureSubImage2D
#define glTextureSubImage2DEXT glew::gles::glTextureSubImage2DEXT
#define glTextureSubImage3D glew::gles::glTextureSubImage3D
#define glTextureSubImage3DEXT glew::gles::glTextureSubImage3DEXT
#define glTextureView glew::gles::glTextureView
#define glTextureViewEXT glew::gles::glTextureViewEXT
#define glTextureViewOES glew::gles::glTextureViewOES
#define glTrackMatrixNV glew::gles::glTrackMatrixNV
#define glTransformFeedbackAttribsNV glew::gles::glTransformFeedbackAttribsNV
#define glTransformFeedbackBufferBase glew::gles::glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange glew::gles::glTransformFeedbackBufferRange
#define glTransformFeedbackStreamAttribsNV glew::gles::glTransformFeedbackStreamAttribsNV
#define glTransformFeedbackVaryings glew::gles::glTransformFeedbackVaryings
#define glTransformFeedbackVaryingsEXT glew::gles::glTransformFeedbackVaryingsEXT
#define glTransformFeedbackVaryingsNV glew::gles::glTransformFeedbackVaryingsNV
#define glTransformPathNV glew::gles::glTransformPathNV
#define glTranslated glew::gles::glTranslated
#define glTranslatef glew::gles::glTranslatef
#define glTranslatex glew::gles::glTranslatex
#define glTranslatexOES glew::gles::glTranslatexOES
#define glUniform1d glew::gles::glUniform1d
#define glUniform1dv glew::gles::glUniform1dv
#define glUniform1f glew::gles::glUniform1f
#define glUniform1fARB glew::gles::glUniform1fARB
#define glUniform1fv glew::gles::glUniform1fv
#define glUniform1fvARB glew::gles::glUniform1fvARB
#define glUniform1i glew::gles::glUniform1i
#define glUniform1i64NV glew::gles::glUniform1i64NV
#define glUniform1i64vNV glew::gles::glUniform1i64vNV
#define glUniform1iARB glew::gles::glUniform1iARB
#define glUniform1iv glew::gles::glUniform1iv
#define glUniform1ivARB glew::gles::glUniform1ivARB
#define glUniform1ui glew::gles::glUniform1ui
#define glUniform1ui64NV glew::gles::glUniform1ui64NV
#define glUniform1ui64vNV glew::gles::glUniform1ui64vNV
#define glUniform1uiEXT glew::gles::glUniform1uiEXT
#define glUniform1uiv glew::gles::glUniform1uiv
#define glUniform1uivEXT glew::gles::glUniform1uivEXT
#define glUniform2d glew::gles::glUniform2d
#define glUniform2dv glew::gles::glUniform2dv
#define glUniform2f glew::gles::glUniform2f
#define glUniform2fARB glew::gles::glUniform2fARB
#define glUniform2fv glew::gles::glUniform2fv
#define glUniform2fvARB glew::gles::glUniform2fvARB
#define glUniform2i glew::gles::glUniform2i
#define glUniform2i64NV glew::gles::glUniform2i64NV
#define glUniform2i64vNV glew::gles::glUniform2i64vNV
#define glUniform2iARB glew::gles::glUniform2iARB
#define glUniform2iv glew::gles::glUniform2iv
#define glUniform2ivARB glew::gles::glUniform2ivARB
#define glUniform2ui glew::gles::glUniform2ui
#define glUniform2ui64NV glew::gles::glUniform2ui64NV
#define glUniform2ui64vNV glew::gles::glUniform2ui64vNV
#define glUniform2uiEXT glew::gles::glUniform2uiEXT
#define glUniform2uiv glew::gles::glUniform2uiv
#define glUniform2uivEXT glew::gles::glUniform2uivEXT
#define glUniform3d glew::gles::glUniform3d
#define glUniform3dv glew::gles::glUniform3dv
#define glUniform3f glew::gles::glUniform3f
#define glUniform3fARB glew::gles::glUniform3fARB
#define glUniform3fv glew::gles::glUniform3fv
#define glUniform3fvARB glew::gles::glUniform3fvARB
#define glUniform3i glew::gles::glUniform3i
#define glUniform3i64NV glew::gles::glUniform3i64NV
#define glUniform3i64vNV glew::gles::glUniform3i64vNV
#define glUniform3iARB glew::gles::glUniform3iARB
#define glUniform3iv glew::gles::glUniform3iv
#define glUniform3ivARB glew::gles::glUniform3ivARB
#define glUniform3ui glew::gles::glUniform3ui
#define glUniform3ui64NV glew::gles::glUniform3ui64NV
#define glUniform3ui64vNV glew::gles::glUniform3ui64vNV
#define glUniform3uiEXT glew::gles::glUniform3uiEXT
#define glUniform3uiv glew::gles::glUniform3uiv
#define glUniform3uivEXT glew::gles::glUniform3uivEXT
#define glUniform4d glew::gles::glUniform4d
#define glUniform4dv glew::gles::glUniform4dv
#define glUniform4f glew::gles::glUniform4f
#define glUniform4fARB glew::gles::glUniform4fARB
#define glUniform4fv glew::gles::glUniform4fv
#define glUniform4fvARB glew::gles::glUniform4fvARB
#define glUniform4i glew::gles::glUniform4i
#define glUniform4i64NV glew::gles::glUniform4i64NV
#define glUniform4i64vNV glew::gles::glUniform4i64vNV
#define glUniform4iARB glew::gles::glUniform4iARB
#define glUniform4iv glew::gles::glUniform4iv
#define glUniform4ivARB glew::gles::glUniform4ivARB
#define glUniform4ui glew::gles::glUniform4ui
#define glUniform4ui64NV glew::gles::glUniform4ui64NV
#define glUniform4ui64vNV glew::gles::glUniform4ui64vNV
#define glUniform4uiEXT glew::gles::glUniform4uiEXT
#define glUniform4uiv glew::gles::glUniform4uiv
#define glUniform4uivEXT glew::gles::glUniform4uivEXT
#define glUniformBlockBinding glew::gles::glUniformBlockBinding
#define glUniformBufferEXT glew::gles::glUniformBufferEXT
#define glUniformHandleui64ARB glew::gles::glUniformHandleui64ARB
#define glUniformHandleui64NV glew::gles::glUniformHandleui64NV
#define glUniformHandleui64vARB glew::gles::glUniformHandleui64vARB
#define glUniformHandleui64vNV glew::gles::glUniformHandleui64vNV
#define glUniformMatrix2dv glew::gles::glUniformMatrix2dv
#define glUniformMatrix2fv glew::gles::glUniformMatrix2fv
#define glUniformMatrix2fvARB glew::gles::glUniformMatrix2fvARB
#define glUniformMatrix2x3dv glew::gles::glUniformMatrix2x3dv
#define glUniformMatrix2x3fv glew::gles::glUniformMatrix2x3fv
#define glUniformMatrix2x3fvNV glew::gles::glUniformMatrix2x3fvNV
#define glUniformMatrix2x4dv glew::gles::glUniformMatrix2x4dv
#define glUniformMatrix2x4fv glew::gles::glUniformMatrix2x4fv
#define glUniformMatrix2x4fvNV glew::gles::glUniformMatrix2x4fvNV
#define glUniformMatrix3dv glew::gles::glUniformMatrix3dv
#define glUniformMatrix3fv glew::gles::glUniformMatrix3fv
#define glUniformMatrix3fvARB glew::gles::glUniformMatrix3fvARB
#define glUniformMatrix3x2dv glew::gles::glUniformMatrix3x2dv
#define glUniformMatrix3x2fv glew::gles::glUniformMatrix3x2fv
#define glUniformMatrix3x2fvNV glew::gles::glUniformMatrix3x2fvNV
#define glUniformMatrix3x4dv glew::gles::glUniformMatrix3x4dv
#define glUniformMatrix3x4fv glew::gles::glUniformMatrix3x4fv
#define glUniformMatrix3x4fvNV glew::gles::glUniformMatrix3x4fvNV
#define glUniformMatrix4dv glew::gles::glUniformMatrix4dv
#define glUniformMatrix4fv glew::gles::glUniformMatrix4fv
#define glUniformMatrix4fvARB glew::gles::glUniformMatrix4fvARB
#define glUniformMatrix4x2dv glew::gles::glUniformMatrix4x2dv
#define glUniformMatrix4x2fv glew::gles::glUniformMatrix4x2fv
#define glUniformMatrix4x2fvNV glew::gles::glUniformMatrix4x2fvNV
#define glUniformMatrix4x3dv glew::gles::glUniformMatrix4x3dv
#define glUniformMatrix4x3fv glew::gles::glUniformMatrix4x3fv
#define glUniformMatrix4x3fvNV glew::gles::glUniformMatrix4x3fvNV
#define glUniformSubroutinesuiv glew::gles::glUniformSubroutinesuiv
#define glUniformui64NV glew::gles::glUniformui64NV
#define glUniformui64vNV glew::gles::glUniformui64vNV
#define glUnlockArraysEXT glew::gles::glUnlockArraysEXT
#define glUnmapBuffer glew::gles::glUnmapBuffer
#define glUnmapBufferARB glew::gles::glUnmapBufferARB
#define glUnmapBufferOES glew::gles::glUnmapBufferOES
#define glUnmapNamedBuffer glew::gles::glUnmapNamedBuffer
#define glUnmapNamedBufferEXT glew::gles::glUnmapNamedBufferEXT
#define glUnmapObjectBufferATI glew::gles::glUnmapObjectBufferATI
#define glUnmapTexture2DINTEL glew::gles::glUnmapTexture2DINTEL
#define glUpdateObjectBufferATI glew::gles::glUpdateObjectBufferATI
#define glUseProgram glew::gles::glUseProgram
#define glUseProgramObjectARB glew::gles::glUseProgramObjectARB
#define glUseProgramStages glew::gles::glUseProgramStages
#define glUseProgramStagesEXT glew::gles::glUseProgramStagesEXT
#define glUseShaderProgramEXT glew::gles::glUseShaderProgramEXT
#define glVDPAUFiniNV glew::gles::glVDPAUFiniNV
#define glVDPAUGetSurfaceivNV glew::gles::glVDPAUGetSurfaceivNV
#define glVDPAUInitNV glew::gles::glVDPAUInitNV
#define glVDPAUIsSurfaceNV glew::gles::glVDPAUIsSurfaceNV
#define glVDPAUMapSurfacesNV glew::gles::glVDPAUMapSurfacesNV
#define glVDPAURegisterOutputSurfaceNV glew::gles::glVDPAURegisterOutputSurfaceNV
#define glVDPAURegisterVideoSurfaceNV glew::gles::glVDPAURegisterVideoSurfaceNV
#define glVDPAUSurfaceAccessNV glew::gles::glVDPAUSurfaceAccessNV
#define glVDPAUUnmapSurfacesNV glew::gles::glVDPAUUnmapSurfacesNV
#define glVDPAUUnregisterSurfaceNV glew::gles::glVDPAUUnregisterSurfaceNV
#define glValidateProgram glew::gles::glValidateProgram
#define glValidateProgramARB glew::gles::glValidateProgramARB
#define glValidateProgramPipeline glew::gles::glValidateProgramPipeline
#define glValidateProgramPipelineEXT glew::gles::glValidateProgramPipelineEXT
#define glVariantArrayObjectATI glew::gles::glVariantArrayObjectATI
#define glVariantPointerEXT glew::gles::glVariantPointerEXT
#define glVariantbvEXT glew::gles::glVariantbvEXT
#define glVariantdvEXT glew::gles::glVariantdvEXT
#define glVariantfvEXT glew::gles::glVariantfvEXT
#define glVariantivEXT glew::gles::glVariantivEXT
#define glVariantsvEXT glew::gles::glVariantsvEXT
#define glVariantubvEXT glew::gles::glVariantubvEXT
#define glVariantuivEXT glew::gles::glVariantuivEXT
#define glVariantusvEXT glew::gles::glVariantusvEXT
#define glVertex2bOES glew::gles::glVertex2bOES
#define glVertex2bvOES glew::gles::glVertex2bvOES
#define glVertex2d glew::gles::glVertex2d
#define glVertex2dv glew::gles::glVertex2dv
#define glVertex2f glew::gles::glVertex2f
#define glVertex2fv glew::gles::glVertex2fv
#define glVertex2hNV glew::gles::glVertex2hNV
#define glVertex2hvNV glew::gles::glVertex2hvNV
#define glVertex2i glew::gles::glVertex2i
#define glVertex2iv glew::gles::glVertex2iv
#define glVertex2s glew::gles::glVertex2s
#define glVertex2sv glew::gles::glVertex2sv
#define glVertex2xOES glew::gles::glVertex2xOES
#define glVertex2xvOES glew::gles::glVertex2xvOES
#define glVertex3bOES glew::gles::glVertex3bOES
#define glVertex3bvOES glew::gles::glVertex3bvOES
#define glVertex3d glew::gles::glVertex3d
#define glVertex3dv glew::gles::glVertex3dv
#define glVertex3f glew::gles::glVertex3f
#define glVertex3fv glew::gles::glVertex3fv
#define glVertex3hNV glew::gles::glVertex3hNV
#define glVertex3hvNV glew::gles::glVertex3hvNV
#define glVertex3i glew::gles::glVertex3i
#define glVertex3iv glew::gles::glVertex3iv
#define glVertex3s glew::gles::glVertex3s
#define glVertex3sv glew::gles::glVertex3sv
#define glVertex3xOES glew::gles::glVertex3xOES
#define glVertex3xvOES glew::gles::glVertex3xvOES
#define glVertex4bOES glew::gles::glVertex4bOES
#define glVertex4bvOES glew::gles::glVertex4bvOES
#define glVertex4d glew::gles::glVertex4d
#define glVertex4dv glew::gles::glVertex4dv
#define glVertex4f glew::gles::glVertex4f
#define glVertex4fv glew::gles::glVertex4fv
#define glVertex4hNV glew::gles::glVertex4hNV
#define glVertex4hvNV glew::gles::glVertex4hvNV
#define glVertex4i glew::gles::glVertex4i
#define glVertex4iv glew::gles::glVertex4iv
#define glVertex4s glew::gles::glVertex4s
#define glVertex4sv glew::gles::glVertex4sv
#define glVertex4xOES glew::gles::glVertex4xOES
#define glVertex4xvOES glew::gles::glVertex4xvOES
#define glVertexArrayAttribBinding glew::gles::glVertexArrayAttribBinding
#define glVertexArrayAttribFormat glew::gles::glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat glew::gles::glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat glew::gles::glVertexArrayAttribLFormat
#define glVertexArrayBindVertexBufferEXT glew::gles::glVertexArrayBindVertexBufferEXT
#define glVertexArrayBindingDivisor glew::gles::glVertexArrayBindingDivisor
#define glVertexArrayColorOffsetEXT glew::gles::glVertexArrayColorOffsetEXT
#define glVertexArrayEdgeFlagOffsetEXT glew::gles::glVertexArrayEdgeFlagOffsetEXT
#define glVertexArrayElementBuffer glew::gles::glVertexArrayElementBuffer
#define glVertexArrayFogCoordOffsetEXT glew::gles::glVertexArrayFogCoordOffsetEXT
#define glVertexArrayIndexOffsetEXT glew::gles::glVertexArrayIndexOffsetEXT
#define glVertexArrayMultiTexCoordOffsetEXT glew::gles::glVertexArrayMultiTexCoordOffsetEXT
#define glVertexArrayNormalOffsetEXT glew::gles::glVertexArrayNormalOffsetEXT
#define glVertexArrayParameteriAPPLE glew::gles::glVertexArrayParameteriAPPLE
#define glVertexArrayRangeAPPLE glew::gles::glVertexArrayRangeAPPLE
#define glVertexArrayRangeNV glew::gles::glVertexArrayRangeNV
#define glVertexArraySecondaryColorOffsetEXT glew::gles::glVertexArraySecondaryColorOffsetEXT
#define glVertexArrayTexCoordOffsetEXT glew::gles::glVertexArrayTexCoordOffsetEXT
#define glVertexArrayVertexAttribBindingEXT glew::gles::glVertexArrayVertexAttribBindingEXT
#define glVertexArrayVertexAttribDivisorEXT glew::gles::glVertexArrayVertexAttribDivisorEXT
#define glVertexArrayVertexAttribFormatEXT glew::gles::glVertexArrayVertexAttribFormatEXT
#define glVertexArrayVertexAttribIFormatEXT glew::gles::glVertexArrayVertexAttribIFormatEXT
#define glVertexArrayVertexAttribIOffsetEXT glew::gles::glVertexArrayVertexAttribIOffsetEXT
#define glVertexArrayVertexAttribLFormatEXT glew::gles::glVertexArrayVertexAttribLFormatEXT
#define glVertexArrayVertexAttribLOffsetEXT glew::gles::glVertexArrayVertexAttribLOffsetEXT
#define glVertexArrayVertexAttribOffsetEXT glew::gles::glVertexArrayVertexAttribOffsetEXT
#define glVertexArrayVertexBindingDivisorEXT glew::gles::glVertexArrayVertexBindingDivisorEXT
#define glVertexArrayVertexBuffer glew::gles::glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers glew::gles::glVertexArrayVertexBuffers
#define glVertexArrayVertexOffsetEXT glew::gles::glVertexArrayVertexOffsetEXT
#define glVertexAttrib1d glew::gles::glVertexAttrib1d
#define glVertexAttrib1dARB glew::gles::glVertexAttrib1dARB
#define glVertexAttrib1dNV glew::gles::glVertexAttrib1dNV
#define glVertexAttrib1dv glew::gles::glVertexAttrib1dv
#define glVertexAttrib1dvARB glew::gles::glVertexAttrib1dvARB
#define glVertexAttrib1dvNV glew::gles::glVertexAttrib1dvNV
#define glVertexAttrib1f glew::gles::glVertexAttrib1f
#define glVertexAttrib1fARB glew::gles::glVertexAttrib1fARB
#define glVertexAttrib1fNV glew::gles::glVertexAttrib1fNV
#define glVertexAttrib1fv glew::gles::glVertexAttrib1fv
#define glVertexAttrib1fvARB glew::gles::glVertexAttrib1fvARB
#define glVertexAttrib1fvNV glew::gles::glVertexAttrib1fvNV
#define glVertexAttrib1hNV glew::gles::glVertexAttrib1hNV
#define glVertexAttrib1hvNV glew::gles::glVertexAttrib1hvNV
#define glVertexAttrib1s glew::gles::glVertexAttrib1s
#define glVertexAttrib1sARB glew::gles::glVertexAttrib1sARB
#define glVertexAttrib1sNV glew::gles::glVertexAttrib1sNV
#define glVertexAttrib1sv glew::gles::glVertexAttrib1sv
#define glVertexAttrib1svARB glew::gles::glVertexAttrib1svARB
#define glVertexAttrib1svNV glew::gles::glVertexAttrib1svNV
#define glVertexAttrib2d glew::gles::glVertexAttrib2d
#define glVertexAttrib2dARB glew::gles::glVertexAttrib2dARB
#define glVertexAttrib2dNV glew::gles::glVertexAttrib2dNV
#define glVertexAttrib2dv glew::gles::glVertexAttrib2dv
#define glVertexAttrib2dvARB glew::gles::glVertexAttrib2dvARB
#define glVertexAttrib2dvNV glew::gles::glVertexAttrib2dvNV
#define glVertexAttrib2f glew::gles::glVertexAttrib2f
#define glVertexAttrib2fARB glew::gles::glVertexAttrib2fARB
#define glVertexAttrib2fNV glew::gles::glVertexAttrib2fNV
#define glVertexAttrib2fv glew::gles::glVertexAttrib2fv
#define glVertexAttrib2fvARB glew::gles::glVertexAttrib2fvARB
#define glVertexAttrib2fvNV glew::gles::glVertexAttrib2fvNV
#define glVertexAttrib2hNV glew::gles::glVertexAttrib2hNV
#define glVertexAttrib2hvNV glew::gles::glVertexAttrib2hvNV
#define glVertexAttrib2s glew::gles::glVertexAttrib2s
#define glVertexAttrib2sARB glew::gles::glVertexAttrib2sARB
#define glVertexAttrib2sNV glew::gles::glVertexAttrib2sNV
#define glVertexAttrib2sv glew::gles::glVertexAttrib2sv
#define glVertexAttrib2svARB glew::gles::glVertexAttrib2svARB
#define glVertexAttrib2svNV glew::gles::glVertexAttrib2svNV
#define glVertexAttrib3d glew::gles::glVertexAttrib3d
#define glVertexAttrib3dARB glew::gles::glVertexAttrib3dARB
#define glVertexAttrib3dNV glew::gles::glVertexAttrib3dNV
#define glVertexAttrib3dv glew::gles::glVertexAttrib3dv
#define glVertexAttrib3dvARB glew::gles::glVertexAttrib3dvARB
#define glVertexAttrib3dvNV glew::gles::glVertexAttrib3dvNV
#define glVertexAttrib3f glew::gles::glVertexAttrib3f
#define glVertexAttrib3fARB glew::gles::glVertexAttrib3fARB
#define glVertexAttrib3fNV glew::gles::glVertexAttrib3fNV
#define glVertexAttrib3fv glew::gles::glVertexAttrib3fv
#define glVertexAttrib3fvARB glew::gles::glVertexAttrib3fvARB
#define glVertexAttrib3fvNV glew::gles::glVertexAttrib3fvNV
#define glVertexAttrib3hNV glew::gles::glVertexAttrib3hNV
#define glVertexAttrib3hvNV glew::gles::glVertexAttrib3hvNV
#define glVertexAttrib3s glew::gles::glVertexAttrib3s
#define glVertexAttrib3sARB glew::gles::glVertexAttrib3sARB
#define glVertexAttrib3sNV glew::gles::glVertexAttrib3sNV
#define glVertexAttrib3sv glew::gles::glVertexAttrib3sv
#define glVertexAttrib3svARB glew::gles::glVertexAttrib3svARB
#define glVertexAttrib3svNV glew::gles::glVertexAttrib3svNV
#define glVertexAttrib4Nbv glew::gles::glVertexAttrib4Nbv
#define glVertexAttrib4NbvARB glew::gles::glVertexAttrib4NbvARB
#define glVertexAttrib4Niv glew::gles::glVertexAttrib4Niv
#define glVertexAttrib4NivARB glew::gles::glVertexAttrib4NivARB
#define glVertexAttrib4Nsv glew::gles::glVertexAttrib4Nsv
#define glVertexAttrib4NsvARB glew::gles::glVertexAttrib4NsvARB
#define glVertexAttrib4Nub glew::gles::glVertexAttrib4Nub
#define glVertexAttrib4NubARB glew::gles::glVertexAttrib4NubARB
#define glVertexAttrib4Nubv glew::gles::glVertexAttrib4Nubv
#define glVertexAttrib4NubvARB glew::gles::glVertexAttrib4NubvARB
#define glVertexAttrib4Nuiv glew::gles::glVertexAttrib4Nuiv
#define glVertexAttrib4NuivARB glew::gles::glVertexAttrib4NuivARB
#define glVertexAttrib4Nusv glew::gles::glVertexAttrib4Nusv
#define glVertexAttrib4NusvARB glew::gles::glVertexAttrib4NusvARB
#define glVertexAttrib4bv glew::gles::glVertexAttrib4bv
#define glVertexAttrib4bvARB glew::gles::glVertexAttrib4bvARB
#define glVertexAttrib4d glew::gles::glVertexAttrib4d
#define glVertexAttrib4dARB glew::gles::glVertexAttrib4dARB
#define glVertexAttrib4dNV glew::gles::glVertexAttrib4dNV
#define glVertexAttrib4dv glew::gles::glVertexAttrib4dv
#define glVertexAttrib4dvARB glew::gles::glVertexAttrib4dvARB
#define glVertexAttrib4dvNV glew::gles::glVertexAttrib4dvNV
#define glVertexAttrib4f glew::gles::glVertexAttrib4f
#define glVertexAttrib4fARB glew::gles::glVertexAttrib4fARB
#define glVertexAttrib4fNV glew::gles::glVertexAttrib4fNV
#define glVertexAttrib4fv glew::gles::glVertexAttrib4fv
#define glVertexAttrib4fvARB glew::gles::glVertexAttrib4fvARB
#define glVertexAttrib4fvNV glew::gles::glVertexAttrib4fvNV
#define glVertexAttrib4hNV glew::gles::glVertexAttrib4hNV
#define glVertexAttrib4hvNV glew::gles::glVertexAttrib4hvNV
#define glVertexAttrib4iv glew::gles::glVertexAttrib4iv
#define glVertexAttrib4ivARB glew::gles::glVertexAttrib4ivARB
#define glVertexAttrib4s glew::gles::glVertexAttrib4s
#define glVertexAttrib4sARB glew::gles::glVertexAttrib4sARB
#define glVertexAttrib4sNV glew::gles::glVertexAttrib4sNV
#define glVertexAttrib4sv glew::gles::glVertexAttrib4sv
#define glVertexAttrib4svARB glew::gles::glVertexAttrib4svARB
#define glVertexAttrib4svNV glew::gles::glVertexAttrib4svNV
#define glVertexAttrib4ubNV glew::gles::glVertexAttrib4ubNV
#define glVertexAttrib4ubv glew::gles::glVertexAttrib4ubv
#define glVertexAttrib4ubvARB glew::gles::glVertexAttrib4ubvARB
#define glVertexAttrib4ubvNV glew::gles::glVertexAttrib4ubvNV
#define glVertexAttrib4uiv glew::gles::glVertexAttrib4uiv
#define glVertexAttrib4uivARB glew::gles::glVertexAttrib4uivARB
#define glVertexAttrib4usv glew::gles::glVertexAttrib4usv
#define glVertexAttrib4usvARB glew::gles::glVertexAttrib4usvARB
#define glVertexAttribArrayObjectATI glew::gles::glVertexAttribArrayObjectATI
#define glVertexAttribBinding glew::gles::glVertexAttribBinding
#define glVertexAttribDivisor glew::gles::glVertexAttribDivisor
#define glVertexAttribDivisorANGLE glew::gles::glVertexAttribDivisorANGLE
#define glVertexAttribDivisorARB glew::gles::glVertexAttribDivisorARB
#define glVertexAttribDivisorEXT glew::gles::glVertexAttribDivisorEXT
#define glVertexAttribDivisorNV glew::gles::glVertexAttribDivisorNV
#define glVertexAttribFormat glew::gles::glVertexAttribFormat
#define glVertexAttribFormatNV glew::gles::glVertexAttribFormatNV
#define glVertexAttribI1i glew::gles::glVertexAttribI1i
#define glVertexAttribI1iEXT glew::gles::glVertexAttribI1iEXT
#define glVertexAttribI1iv glew::gles::glVertexAttribI1iv
#define glVertexAttribI1ivEXT glew::gles::glVertexAttribI1ivEXT
#define glVertexAttribI1ui glew::gles::glVertexAttribI1ui
#define glVertexAttribI1uiEXT glew::gles::glVertexAttribI1uiEXT
#define glVertexAttribI1uiv glew::gles::glVertexAttribI1uiv
#define glVertexAttribI1uivEXT glew::gles::glVertexAttribI1uivEXT
#define glVertexAttribI2i glew::gles::glVertexAttribI2i
#define glVertexAttribI2iEXT glew::gles::glVertexAttribI2iEXT
#define glVertexAttribI2iv glew::gles::glVertexAttribI2iv
#define glVertexAttribI2ivEXT glew::gles::glVertexAttribI2ivEXT
#define glVertexAttribI2ui glew::gles::glVertexAttribI2ui
#define glVertexAttribI2uiEXT glew::gles::glVertexAttribI2uiEXT
#define glVertexAttribI2uiv glew::gles::glVertexAttribI2uiv
#define glVertexAttribI2uivEXT glew::gles::glVertexAttribI2uivEXT
#define glVertexAttribI3i glew::gles::glVertexAttribI3i
#define glVertexAttribI3iEXT glew::gles::glVertexAttribI3iEXT
#define glVertexAttribI3iv glew::gles::glVertexAttribI3iv
#define glVertexAttribI3ivEXT glew::gles::glVertexAttribI3ivEXT
#define glVertexAttribI3ui glew::gles::glVertexAttribI3ui
#define glVertexAttribI3uiEXT glew::gles::glVertexAttribI3uiEXT
#define glVertexAttribI3uiv glew::gles::glVertexAttribI3uiv
#define glVertexAttribI3uivEXT glew::gles::glVertexAttribI3uivEXT
#define glVertexAttribI4bv glew::gles::glVertexAttribI4bv
#define glVertexAttribI4bvEXT glew::gles::glVertexAttribI4bvEXT
#define glVertexAttribI4i glew::gles::glVertexAttribI4i
#define glVertexAttribI4iEXT glew::gles::glVertexAttribI4iEXT
#define glVertexAttribI4iv glew::gles::glVertexAttribI4iv
#define glVertexAttribI4ivEXT glew::gles::glVertexAttribI4ivEXT
#define glVertexAttribI4sv glew::gles::glVertexAttribI4sv
#define glVertexAttribI4svEXT glew::gles::glVertexAttribI4svEXT
#define glVertexAttribI4ubv glew::gles::glVertexAttribI4ubv
#define glVertexAttribI4ubvEXT glew::gles::glVertexAttribI4ubvEXT
#define glVertexAttribI4ui glew::gles::glVertexAttribI4ui
#define glVertexAttribI4uiEXT glew::gles::glVertexAttribI4uiEXT
#define glVertexAttribI4uiv glew::gles::glVertexAttribI4uiv
#define glVertexAttribI4uivEXT glew::gles::glVertexAttribI4uivEXT
#define glVertexAttribI4usv glew::gles::glVertexAttribI4usv
#define glVertexAttribI4usvEXT glew::gles::glVertexAttribI4usvEXT
#define glVertexAttribIFormat glew::gles::glVertexAttribIFormat
#define glVertexAttribIFormatNV glew::gles::glVertexAttribIFormatNV
#define glVertexAttribIPointer glew::gles::glVertexAttribIPointer
#define glVertexAttribIPointerEXT glew::gles::glVertexAttribIPointerEXT
#define glVertexAttribL1d glew::gles::glVertexAttribL1d
#define glVertexAttribL1dEXT glew::gles::glVertexAttribL1dEXT
#define glVertexAttribL1dv glew::gles::glVertexAttribL1dv
#define glVertexAttribL1dvEXT glew::gles::glVertexAttribL1dvEXT
#define glVertexAttribL1i64NV glew::gles::glVertexAttribL1i64NV
#define glVertexAttribL1i64vNV glew::gles::glVertexAttribL1i64vNV
#define glVertexAttribL1ui64ARB glew::gles::glVertexAttribL1ui64ARB
#define glVertexAttribL1ui64NV glew::gles::glVertexAttribL1ui64NV
#define glVertexAttribL1ui64vARB glew::gles::glVertexAttribL1ui64vARB
#define glVertexAttribL1ui64vNV glew::gles::glVertexAttribL1ui64vNV
#define glVertexAttribL2d glew::gles::glVertexAttribL2d
#define glVertexAttribL2dEXT glew::gles::glVertexAttribL2dEXT
#define glVertexAttribL2dv glew::gles::glVertexAttribL2dv
#define glVertexAttribL2dvEXT glew::gles::glVertexAttribL2dvEXT
#define glVertexAttribL2i64NV glew::gles::glVertexAttribL2i64NV
#define glVertexAttribL2i64vNV glew::gles::glVertexAttribL2i64vNV
#define glVertexAttribL2ui64NV glew::gles::glVertexAttribL2ui64NV
#define glVertexAttribL2ui64vNV glew::gles::glVertexAttribL2ui64vNV
#define glVertexAttribL3d glew::gles::glVertexAttribL3d
#define glVertexAttribL3dEXT glew::gles::glVertexAttribL3dEXT
#define glVertexAttribL3dv glew::gles::glVertexAttribL3dv
#define glVertexAttribL3dvEXT glew::gles::glVertexAttribL3dvEXT
#define glVertexAttribL3i64NV glew::gles::glVertexAttribL3i64NV
#define glVertexAttribL3i64vNV glew::gles::glVertexAttribL3i64vNV
#define glVertexAttribL3ui64NV glew::gles::glVertexAttribL3ui64NV
#define glVertexAttribL3ui64vNV glew::gles::glVertexAttribL3ui64vNV
#define glVertexAttribL4d glew::gles::glVertexAttribL4d
#define glVertexAttribL4dEXT glew::gles::glVertexAttribL4dEXT
#define glVertexAttribL4dv glew::gles::glVertexAttribL4dv
#define glVertexAttribL4dvEXT glew::gles::glVertexAttribL4dvEXT
#define glVertexAttribL4i64NV glew::gles::glVertexAttribL4i64NV
#define glVertexAttribL4i64vNV glew::gles::glVertexAttribL4i64vNV
#define glVertexAttribL4ui64NV glew::gles::glVertexAttribL4ui64NV
#define glVertexAttribL4ui64vNV glew::gles::glVertexAttribL4ui64vNV
#define glVertexAttribLFormat glew::gles::glVertexAttribLFormat
#define glVertexAttribLFormatNV glew::gles::glVertexAttribLFormatNV
#define glVertexAttribLPointer glew::gles::glVertexAttribLPointer
#define glVertexAttribLPointerEXT glew::gles::glVertexAttribLPointerEXT
#define glVertexAttribP1ui glew::gles::glVertexAttribP1ui
#define glVertexAttribP1uiv glew::gles::glVertexAttribP1uiv
#define glVertexAttribP2ui glew::gles::glVertexAttribP2ui
#define glVertexAttribP2uiv glew::gles::glVertexAttribP2uiv
#define glVertexAttribP3ui glew::gles::glVertexAttribP3ui
#define glVertexAttribP3uiv glew::gles::glVertexAttribP3uiv
#define glVertexAttribP4ui glew::gles::glVertexAttribP4ui
#define glVertexAttribP4uiv glew::gles::glVertexAttribP4uiv
#define glVertexAttribParameteriAMD glew::gles::glVertexAttribParameteriAMD
#define glVertexAttribPointer glew::gles::glVertexAttribPointer
#define glVertexAttribPointerARB glew::gles::glVertexAttribPointerARB
#define glVertexAttribPointerNV glew::gles::glVertexAttribPointerNV
#define glVertexAttribs1dvNV glew::gles::glVertexAttribs1dvNV
#define glVertexAttribs1fvNV glew::gles::glVertexAttribs1fvNV
#define glVertexAttribs1hvNV glew::gles::glVertexAttribs1hvNV
#define glVertexAttribs1svNV glew::gles::glVertexAttribs1svNV
#define glVertexAttribs2dvNV glew::gles::glVertexAttribs2dvNV
#define glVertexAttribs2fvNV glew::gles::glVertexAttribs2fvNV
#define glVertexAttribs2hvNV glew::gles::glVertexAttribs2hvNV
#define glVertexAttribs2svNV glew::gles::glVertexAttribs2svNV
#define glVertexAttribs3dvNV glew::gles::glVertexAttribs3dvNV
#define glVertexAttribs3fvNV glew::gles::glVertexAttribs3fvNV
#define glVertexAttribs3hvNV glew::gles::glVertexAttribs3hvNV
#define glVertexAttribs3svNV glew::gles::glVertexAttribs3svNV
#define glVertexAttribs4dvNV glew::gles::glVertexAttribs4dvNV
#define glVertexAttribs4fvNV glew::gles::glVertexAttribs4fvNV
#define glVertexAttribs4hvNV glew::gles::glVertexAttribs4hvNV
#define glVertexAttribs4svNV glew::gles::glVertexAttribs4svNV
#define glVertexAttribs4ubvNV glew::gles::glVertexAttribs4ubvNV
#define glVertexBindingDivisor glew::gles::glVertexBindingDivisor
#define glVertexBlendARB glew::gles::glVertexBlendARB
#define glVertexBlendEnvfATI glew::gles::glVertexBlendEnvfATI
#define glVertexBlendEnviATI glew::gles::glVertexBlendEnviATI
#define glVertexFormatNV glew::gles::glVertexFormatNV
#define glVertexP2ui glew::gles::glVertexP2ui
#define glVertexP2uiv glew::gles::glVertexP2uiv
#define glVertexP3ui glew::gles::glVertexP3ui
#define glVertexP3uiv glew::gles::glVertexP3uiv
#define glVertexP4ui glew::gles::glVertexP4ui
#define glVertexP4uiv glew::gles::glVertexP4uiv
#define glVertexPointer glew::gles::glVertexPointer
#define glVertexPointerEXT glew::gles::glVertexPointerEXT
#define glVertexPointerListIBM glew::gles::glVertexPointerListIBM
#define glVertexPointervINTEL glew::gles::glVertexPointervINTEL
#define glVertexStream1dATI glew::gles::glVertexStream1dATI
#define glVertexStream1dvATI glew::gles::glVertexStream1dvATI
#define glVertexStream1fATI glew::gles::glVertexStream1fATI
#define glVertexStream1fvATI glew::gles::glVertexStream1fvATI
#define glVertexStream1iATI glew::gles::glVertexStream1iATI
#define glVertexStream1ivATI glew::gles::glVertexStream1ivATI
#define glVertexStream1sATI glew::gles::glVertexStream1sATI
#define glVertexStream1svATI glew::gles::glVertexStream1svATI
#define glVertexStream2dATI glew::gles::glVertexStream2dATI
#define glVertexStream2dvATI glew::gles::glVertexStream2dvATI
#define glVertexStream2fATI glew::gles::glVertexStream2fATI
#define glVertexStream2fvATI glew::gles::glVertexStream2fvATI
#define glVertexStream2iATI glew::gles::glVertexStream2iATI
#define glVertexStream2ivATI glew::gles::glVertexStream2ivATI
#define glVertexStream2sATI glew::gles::glVertexStream2sATI
#define glVertexStream2svATI glew::gles::glVertexStream2svATI
#define glVertexStream3dATI glew::gles::glVertexStream3dATI
#define glVertexStream3dvATI glew::gles::glVertexStream3dvATI
#define glVertexStream3fATI glew::gles::glVertexStream3fATI
#define glVertexStream3fvATI glew::gles::glVertexStream3fvATI
#define glVertexStream3iATI glew::gles::glVertexStream3iATI
#define glVertexStream3ivATI glew::gles::glVertexStream3ivATI
#define glVertexStream3sATI glew::gles::glVertexStream3sATI
#define glVertexStream3svATI glew::gles::glVertexStream3svATI
#define glVertexStream4dATI glew::gles::glVertexStream4dATI
#define glVertexStream4dvATI glew::gles::glVertexStream4dvATI
#define glVertexStream4fATI glew::gles::glVertexStream4fATI
#define glVertexStream4fvATI glew::gles::glVertexStream4fvATI
#define glVertexStream4iATI glew::gles::glVertexStream4iATI
#define glVertexStream4ivATI glew::gles::glVertexStream4ivATI
#define glVertexStream4sATI glew::gles::glVertexStream4sATI
#define glVertexStream4svATI glew::gles::glVertexStream4svATI
#define glVertexWeightPointerEXT glew::gles::glVertexWeightPointerEXT
#define glVertexWeightfEXT glew::gles::glVertexWeightfEXT
#define glVertexWeightfvEXT glew::gles::glVertexWeightfvEXT
#define glVertexWeighthNV glew::gles::glVertexWeighthNV
#define glVertexWeighthvNV glew::gles::glVertexWeighthvNV
#define glVideoCaptureNV glew::gles::glVideoCaptureNV
#define glVideoCaptureStreamParameterdvNV glew::gles::glVideoCaptureStreamParameterdvNV
#define glVideoCaptureStreamParameterfvNV glew::gles::glVideoCaptureStreamParameterfvNV
#define glVideoCaptureStreamParameterivNV glew::gles::glVideoCaptureStreamParameterivNV
#define glViewport glew::gles::glViewport
#define glViewportArrayv glew::gles::glViewportArrayv
#define glViewportArrayvNV glew::gles::glViewportArrayvNV
#define glViewportIndexedf glew::gles::glViewportIndexedf
#define glViewportIndexedfNV glew::gles::glViewportIndexedfNV
#define glViewportIndexedfv glew::gles::glViewportIndexedfv
#define glViewportIndexedfvNV glew::gles::glViewportIndexedfvNV
#define glWaitSync glew::gles::glWaitSync
#define glWaitSyncAPPLE glew::gles::glWaitSyncAPPLE
#define glWeightPathsNV glew::gles::glWeightPathsNV
#define glWeightPointerARB glew::gles::glWeightPointerARB
#define glWeightPointerOES glew::gles::glWeightPointerOES
#define glWeightbvARB glew::gles::glWeightbvARB
#define glWeightdvARB glew::gles::glWeightdvARB
#define glWeightfvARB glew::gles::glWeightfvARB
#define glWeightivARB glew::gles::glWeightivARB
#define glWeightsvARB glew::gles::glWeightsvARB
#define glWeightubvARB glew::gles::glWeightubvARB
#define glWeightuivARB glew::gles::glWeightuivARB
#define glWeightusvARB glew::gles::glWeightusvARB
#define glWindowPos2d glew::gles::glWindowPos2d
#define glWindowPos2dARB glew::gles::glWindowPos2dARB
#define glWindowPos2dMESA glew::gles::glWindowPos2dMESA
#define glWindowPos2dv glew::gles::glWindowPos2dv
#define glWindowPos2dvARB glew::gles::glWindowPos2dvARB
#define glWindowPos2dvMESA glew::gles::glWindowPos2dvMESA
#define glWindowPos2f glew::gles::glWindowPos2f
#define glWindowPos2fARB glew::gles::glWindowPos2fARB
#define glWindowPos2fMESA glew::gles::glWindowPos2fMESA
#define glWindowPos2fv glew::gles::glWindowPos2fv
#define glWindowPos2fvARB glew::gles::glWindowPos2fvARB
#define glWindowPos2fvMESA glew::gles::glWindowPos2fvMESA
#define glWindowPos2i glew::gles::glWindowPos2i
#define glWindowPos2iARB glew::gles::glWindowPos2iARB
#define glWindowPos2iMESA glew::gles::glWindowPos2iMESA
#define glWindowPos2iv glew::gles::glWindowPos2iv
#define glWindowPos2ivARB glew::gles::glWindowPos2ivARB
#define glWindowPos2ivMESA glew::gles::glWindowPos2ivMESA
#define glWindowPos2s glew::gles::glWindowPos2s
#define glWindowPos2sARB glew::gles::glWindowPos2sARB
#define glWindowPos2sMESA glew::gles::glWindowPos2sMESA
#define glWindowPos2sv glew::gles::glWindowPos2sv
#define glWindowPos2svARB glew::gles::glWindowPos2svARB
#define glWindowPos2svMESA glew::gles::glWindowPos2svMESA
#define glWindowPos3d glew::gles::glWindowPos3d
#define glWindowPos3dARB glew::gles::glWindowPos3dARB
#define glWindowPos3dMESA glew::gles::glWindowPos3dMESA
#define glWindowPos3dv glew::gles::glWindowPos3dv
#define glWindowPos3dvARB glew::gles::glWindowPos3dvARB
#define glWindowPos3dvMESA glew::gles::glWindowPos3dvMESA
#define glWindowPos3f glew::gles::glWindowPos3f
#define glWindowPos3fARB glew::gles::glWindowPos3fARB
#define glWindowPos3fMESA glew::gles::glWindowPos3fMESA
#define glWindowPos3fv glew::gles::glWindowPos3fv
#define glWindowPos3fvARB glew::gles::glWindowPos3fvARB
#define glWindowPos3fvMESA glew::gles::glWindowPos3fvMESA
#define glWindowPos3i glew::gles::glWindowPos3i
#define glWindowPos3iARB glew::gles::glWindowPos3iARB
#define glWindowPos3iMESA glew::gles::glWindowPos3iMESA
#define glWindowPos3iv glew::gles::glWindowPos3iv
#define glWindowPos3ivARB glew::gles::glWindowPos3ivARB
#define glWindowPos3ivMESA glew::gles::glWindowPos3ivMESA
#define glWindowPos3s glew::gles::glWindowPos3s
#define glWindowPos3sARB glew::gles::glWindowPos3sARB
#define glWindowPos3sMESA glew::gles::glWindowPos3sMESA
#define glWindowPos3sv glew::gles::glWindowPos3sv
#define glWindowPos3svARB glew::gles::glWindowPos3svARB
#define glWindowPos3svMESA glew::gles::glWindowPos3svMESA
#define glWindowPos4dMESA glew::gles::glWindowPos4dMESA
#define glWindowPos4dvMESA glew::gles::glWindowPos4dvMESA
#define glWindowPos4fMESA glew::gles::glWindowPos4fMESA
#define glWindowPos4fvMESA glew::gles::glWindowPos4fvMESA
#define glWindowPos4iMESA glew::gles::glWindowPos4iMESA
#define glWindowPos4ivMESA glew::gles::glWindowPos4ivMESA
#define glWindowPos4sMESA glew::gles::glWindowPos4sMESA
#define glWindowPos4svMESA glew::gles::glWindowPos4svMESA
#define glWriteMaskEXT glew::gles::glWriteMaskEXT
#define glCoverageModulationNV glew::gles::glCoverageModulationNV
#define glCoverageModulationTableNV glew::gles::glCoverageModulationTableNV
#define glFragmentCoverageColorNV glew::gles::glFragmentCoverageColorNV
#define glFramebufferSampleLocationsfvNV glew::gles::glFramebufferSampleLocationsfvNV
#define glGetCoverageModulationTableNV glew::gles::glGetCoverageModulationTableNV
#define glNamedFramebufferSampleLocationsfvNV glew::gles::glNamedFramebufferSampleLocationsfvNV
#define glRasterSamplesEXT glew::gles::glRasterSamplesEXT
#define glResolveDepthValuesNV glew::gles::glResolveDepthValuesNV
#define glSubpixelPrecisionBiasNV glew::gles::glSubpixelPrecisionBiasNV

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLES_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
