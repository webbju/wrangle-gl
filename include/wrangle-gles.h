////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GLES3/gl3.h>

#include <GLES3/gl31.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct GLESCapabilities
{
  bool
    __GL_VERSION_ES_CM_1_0,
    __GL_ES_VERSION_2_0,
    __GL_ES_VERSION_3_0,
    __GL_ES_VERSION_3_1;

  bool
    __GL_AMD_compressed_3DC_texture,
    __GL_AMD_compressed_ATC_texture,
    __GL_AMD_performance_monitor,
    __GL_AMD_program_binary_Z400,
    __GL_ANDROID_extension_pack_es31a,
    __GL_ANGLE_depth_texture,
    __GL_ANGLE_framebuffer_blit,
    __GL_ANGLE_framebuffer_multisample,
    __GL_ANGLE_instanced_arrays,
    __GL_ANGLE_pack_reverse_row_order,
    __GL_ANGLE_program_binary,
    __GL_ANGLE_texture_compression_dxt3,
    __GL_ANGLE_texture_compression_dxt5,
    __GL_ANGLE_texture_usage,
    __GL_ANGLE_translated_shader_source,
    __GL_APPLE_clip_distance,
    __GL_APPLE_color_buffer_packed_float,
    __GL_APPLE_copy_texture_levels,
    __GL_APPLE_framebuffer_multisample,
    __GL_APPLE_rgb_422,
    __GL_APPLE_sync,
    __GL_APPLE_texture_2D_limited_npot,
    __GL_APPLE_texture_format_BGRA8888,
    __GL_APPLE_texture_max_level,
    __GL_APPLE_texture_packed_float,
    __GL_ARM_mali_program_binary,
    __GL_ARM_mali_shader_binary,
    __GL_ARM_rgba8,
    __GL_ARM_shader_framebuffer_fetch,
    __GL_ARM_shader_framebuffer_fetch_depth_stencil,
    __GL_DMP_program_binary,
    __GL_DMP_shader_binary,
    __GL_EXT_base_instance,
    __GL_EXT_blend_minmax,
    __GL_EXT_buffer_storage,
    __GL_EXT_color_buffer_half_float,
    __GL_EXT_copy_image,
    __GL_EXT_debug_label,
    __GL_EXT_debug_marker,
    __GL_EXT_discard_framebuffer,
    __GL_EXT_disjoint_timer_query,
    __GL_EXT_draw_buffers,
    __GL_EXT_draw_buffers_indexed,
    __GL_EXT_draw_elements_base_vertex,
    __GL_EXT_draw_instanced,
    __GL_EXT_float_blend,
    __GL_EXT_geometry_point_size,
    __GL_EXT_geometry_shader,
    __GL_EXT_gpu_shader5,
    __GL_EXT_instanced_arrays,
    __GL_EXT_map_buffer_range,
    __GL_EXT_multi_draw_arrays,
    __GL_EXT_multi_draw_indirect,
    __GL_EXT_multisampled_render_to_texture,
    __GL_EXT_multiview_draw_buffers,
    __GL_EXT_occlusion_query_boolean,
    __GL_EXT_post_depth_coverage,
    __GL_EXT_primitive_bounding_box,
    __GL_EXT_pvrtc_sRGB,
    __GL_EXT_raster_multisample,
    __GL_EXT_read_format_bgra,
    __GL_EXT_render_snorm,
    __GL_EXT_robustness,
    __GL_EXT_sRGB,
    __GL_EXT_sRGB_write_control,
    __GL_EXT_separate_shader_objects,
    __GL_EXT_shader_framebuffer_fetch,
    __GL_EXT_shader_implicit_conversions,
    __GL_EXT_shader_integer_mix,
    __GL_EXT_shader_io_blocks,
    __GL_EXT_shader_pixel_local_storage,
    __GL_EXT_shader_texture_lod,
    __GL_EXT_shadow_samplers,
    __GL_EXT_sparse_texture,
    __GL_EXT_tessellation_point_size,
    __GL_EXT_tessellation_shader,
    __GL_EXT_texture_border_clamp,
    __GL_EXT_texture_buffer,
    __GL_EXT_texture_compression_dxt1,
    __GL_EXT_texture_compression_s3tc,
    __GL_EXT_texture_cube_map_array,
    __GL_EXT_texture_filter_anisotropic,
    __GL_EXT_texture_filter_minmax,
    __GL_EXT_texture_format_BGRA8888,
    __GL_EXT_texture_lod_bias,
    __GL_EXT_texture_norm16,
    __GL_EXT_texture_rg,
    __GL_EXT_texture_sRGB_decode,
    __GL_EXT_texture_sRGB_R8,
    __GL_EXT_texture_sRGB_RG8,
    __GL_EXT_texture_storage,
    __GL_EXT_texture_type_2_10_10_10_REV,
    __GL_EXT_texture_view,
    __GL_EXT_unpack_subimage,
    __GL_EXT_YUV_target,
    __GL_FJ_shader_binary_GCCSO,
    __GL_IMG_multisampled_render_to_texture,
    __GL_IMG_program_binary,
    __GL_IMG_read_format,
    __GL_IMG_shader_binary,
    __GL_IMG_texture_compression_pvrtc,
    __GL_IMG_texture_compression_pvrtc2,
    __GL_IMG_texture_env_enhanced_fixed_function,
    __GL_IMG_user_clip_plane,
    __GL_INTEL_performance_query,
    __GL_KHR_blend_equation_advanced,
    __GL_KHR_blend_equation_advanced_coherent,
    __GL_KHR_context_flush_control,
    __GL_KHR_debug,
    __GL_KHR_no_error,
    __GL_KHR_robust_buffer_access_behavior,
    __GL_KHR_robustness,
    __GL_KHR_texture_compression_astc_hdr,
    __GL_KHR_texture_compression_astc_ldr,
    __GL_NV_bindless_texture,
    __GL_NV_blend_equation_advanced,
    __GL_NV_blend_equation_advanced_coherent,
    __GL_NV_conditional_render,
    __GL_NV_conservative_raster,
    __GL_NV_copy_buffer,
    __GL_NV_coverage_sample,
    __GL_NV_depth_nonlinear,
    __GL_NV_draw_buffers,
    __GL_NV_draw_instanced,
    __GL_NV_explicit_attrib_location,
    __GL_NV_fbo_color_attachments,
    __GL_NV_fence,
    __GL_NV_fill_rectangle,
    __GL_NV_fragment_coverage_to_color,
    __GL_NV_fragment_shader_interlock,
    __GL_NV_framebuffer_blit,
    __GL_NV_framebuffer_mixed_samples,
    __GL_NV_framebuffer_multisample,
    __GL_NV_generate_mipmap_sRGB,
    __GL_NV_geometry_shader_passthrough,
    __GL_NV_image_formats,
    __GL_NV_instanced_arrays,
    __GL_NV_internalformat_sample_query,
    __GL_NV_non_square_matrices,
    __GL_NV_path_rendering,
    __GL_NV_polygon_mode,
    __GL_NV_read_buffer,
    __GL_NV_read_buffer_front,
    __GL_NV_read_depth,
    __GL_NV_read_depth_stencil,
    __GL_NV_read_stencil,
    __GL_NV_path_rendering_shared_edge,
    __GL_NV_sRGB_formats,
    __GL_NV_sample_locations,
    __GL_NV_sample_mask_override_coverage,
    __GL_NV_shader_noperspective_interpolation,
    __GL_NV_shadow_samplers_array,
    __GL_NV_shadow_samplers_cube,
    __GL_NV_texture_border_clamp,
    __GL_NV_texture_compression_s3tc_update,
    __GL_NV_texture_npot_2D_mipmap,
    __GL_NV_viewport_array,
    __GL_NV_viewport_array2,
    __GL_OES_EGL_image,
    __GL_OES_EGL_image_external,
    __GL_OES_EGL_image_external_essl3,
    __GL_OES_blend_equation_separate,
    __GL_OES_blend_func_separate,
    __GL_OES_blend_subtract,
    __GL_OES_byte_coordinates,
    __GL_OES_compressed_ETC1_RGB8_sub_texture,
    __GL_OES_compressed_ETC1_RGB8_texture,
    __GL_OES_compressed_paletted_texture,
    __GL_OES_copy_image,
    __GL_OES_depth24,
    __GL_OES_depth32,
    __GL_OES_depth_texture,
    __GL_OES_draw_buffers_indexed,
    __GL_OES_draw_elements_base_vertex,
    __GL_OES_draw_texture,
    __GL_OES_element_index_uint,
    __GL_OES_extended_matrix_palette,
    __GL_OES_fbo_render_mipmap,
    __GL_OES_fixed_point,
    __GL_OES_fragment_precision_high,
    __GL_OES_framebuffer_object,
    __GL_OES_geometry_shader,
    __GL_OES_geometry_point_size,
    __GL_OES_get_program_binary,
    __GL_OES_gpu_shader5,
    __GL_OES_mapbuffer,
    __GL_OES_matrix_get,
    __GL_OES_matrix_palette,
    __GL_OES_packed_depth_stencil,
    __GL_OES_point_size_array,
    __GL_OES_point_sprite,
    __GL_OES_primitive_bounding_box,
    __GL_OES_query_matrix,
    __GL_OES_read_format,
    __GL_OES_required_internalformat,
    __GL_OES_rgb8_rgba8,
    __GL_OES_sample_shading,
    __GL_OES_sample_variables,
    __GL_OES_shader_image_atomic,
    __GL_OES_shader_io_blocks,
    __GL_OES_shader_multisample_interpolation,
    __GL_OES_single_precision,
    __GL_OES_standard_derivatives,
    __GL_OES_stencil1,
    __GL_OES_stencil4,
    __GL_OES_stencil8,
    __GL_OES_stencil_wrap,
    __GL_OES_surfaceless_context,
    __GL_OES_tessellation_shader,
    __GL_OES_tessellation_point_size,
    __GL_OES_texture_3D,
    __GL_OES_texture_border_clamp,
    __GL_OES_texture_buffer,
    __GL_OES_texture_compression_astc,
    __GL_OES_texture_cube_map,
    __GL_OES_texture_cube_map_array,
    __GL_OES_texture_env_crossbar,
    __GL_OES_texture_float,
    __GL_OES_texture_float_linear,
    __GL_OES_texture_half_float,
    __GL_OES_texture_half_float_linear,
    __GL_OES_texture_mirrored_repeat,
    __GL_OES_texture_npot,
    __GL_OES_texture_stencil8,
    __GL_OES_texture_storage_multisample_2d_array,
    __GL_OES_texture_view,
    __GL_OES_vertex_array_object,
    __GL_OES_vertex_half_float,
    __GL_OES_vertex_type_10_10_10_2,
    __GL_OVR_multiview,
    __GL_OVR_multiview2,
    __GL_QCOM_alpha_test,
    __GL_QCOM_binning_control,
    __GL_QCOM_driver_control,
    __GL_QCOM_extended_get,
    __GL_QCOM_extended_get2,
    __GL_QCOM_perfmon_global_mode,
    __GL_QCOM_tiled_rendering,
    __GL_QCOM_writeonly_rendering,
    __GL_VIV_shader_binary;

  // GL_VERSION_ES_CM_1_0
  PFNGLALPHAFUNCPROC
    glAlphaFunc;
  PFNGLCLEARCOLORPROC
    glClearColor;
  PFNGLCLEARDEPTHFPROC
    glClearDepthf;
  PFNGLCLIPPLANEFPROC
    glClipPlanef;
  PFNGLCOLOR4FPROC
    glColor4f;
  PFNGLDEPTHRANGEFPROC
    glDepthRangef;
  PFNGLFOGFPROC
    glFogf;
  PFNGLFOGFVPROC
    glFogfv;
  PFNGLFRUSTUMFPROC
    glFrustumf;
  PFNGLGETCLIPPLANEFPROC
    glGetClipPlanef;
  PFNGLGETFLOATVPROC
    glGetFloatv;
  PFNGLGETLIGHTFVPROC
    glGetLightfv;
  PFNGLGETMATERIALFVPROC
    glGetMaterialfv;
  PFNGLGETTEXENVFVPROC
    glGetTexEnvfv;
  PFNGLGETTEXPARAMETERFVPROC
    glGetTexParameterfv;
  PFNGLLIGHTMODELFPROC
    glLightModelf;
  PFNGLLIGHTMODELFVPROC
    glLightModelfv;
  PFNGLLIGHTFPROC
    glLightf;
  PFNGLLIGHTFVPROC
    glLightfv;
  PFNGLLINEWIDTHPROC
    glLineWidth;
  PFNGLLOADMATRIXFPROC
    glLoadMatrixf;
  PFNGLMATERIALFPROC
    glMaterialf;
  PFNGLMATERIALFVPROC
    glMaterialfv;
  PFNGLMULTMATRIXFPROC
    glMultMatrixf;
  PFNGLMULTITEXCOORD4FPROC
    glMultiTexCoord4f;
  PFNGLNORMAL3FPROC
    glNormal3f;
  PFNGLORTHOFPROC
    glOrthof;
  PFNGLPOINTPARAMETERFPROC
    glPointParameterf;
  PFNGLPOINTPARAMETERFVPROC
    glPointParameterfv;
  PFNGLPOINTSIZEPROC
    glPointSize;
  PFNGLPOLYGONOFFSETPROC
    glPolygonOffset;
  PFNGLROTATEFPROC
    glRotatef;
  PFNGLSCALEFPROC
    glScalef;
  PFNGLTEXENVFPROC
    glTexEnvf;
  PFNGLTEXENVFVPROC
    glTexEnvfv;
  PFNGLTEXPARAMETERFPROC
    glTexParameterf;
  PFNGLTEXPARAMETERFVPROC
    glTexParameterfv;
  PFNGLTRANSLATEFPROC
    glTranslatef;
  PFNGLACTIVETEXTUREPROC
    glActiveTexture;
  PFNGLALPHAFUNCXPROC
    glAlphaFuncx;
  PFNGLBINDBUFFERPROC
    glBindBuffer;
  PFNGLBINDTEXTUREPROC
    glBindTexture;
  PFNGLBLENDFUNCPROC
    glBlendFunc;
  PFNGLBUFFERDATAPROC
    glBufferData;
  PFNGLBUFFERSUBDATAPROC
    glBufferSubData;
  PFNGLCLEARPROC
    glClear;
  PFNGLCLEARCOLORXPROC
    glClearColorx;
  PFNGLCLEARDEPTHXPROC
    glClearDepthx;
  PFNGLCLEARSTENCILPROC
    glClearStencil;
  PFNGLCLIENTACTIVETEXTUREPROC
    glClientActiveTexture;
  PFNGLCLIPPLANEXPROC
    glClipPlanex;
  PFNGLCOLOR4UBPROC
    glColor4ub;
  PFNGLCOLOR4XPROC
    glColor4x;
  PFNGLCOLORMASKPROC
    glColorMask;
  PFNGLCOLORPOINTERPROC
    glColorPointer;
  PFNGLCOMPRESSEDTEXIMAGE2DPROC
    glCompressedTexImage2D;
  PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC
    glCompressedTexSubImage2D;
  PFNGLCOPYTEXIMAGE2DPROC
    glCopyTexImage2D;
  PFNGLCOPYTEXSUBIMAGE2DPROC
    glCopyTexSubImage2D;
  PFNGLCULLFACEPROC
    glCullFace;
  PFNGLDELETEBUFFERSPROC
    glDeleteBuffers;
  PFNGLDELETETEXTURESPROC
    glDeleteTextures;
  PFNGLDEPTHFUNCPROC
    glDepthFunc;
  PFNGLDEPTHMASKPROC
    glDepthMask;
  PFNGLDEPTHRANGEXPROC
    glDepthRangex;
  PFNGLDISABLEPROC
    glDisable;
  PFNGLDISABLECLIENTSTATEPROC
    glDisableClientState;
  PFNGLDRAWARRAYSPROC
    glDrawArrays;
  PFNGLDRAWELEMENTSPROC
    glDrawElements;
  PFNGLENABLEPROC
    glEnable;
  PFNGLENABLECLIENTSTATEPROC
    glEnableClientState;
  PFNGLFINISHPROC
    glFinish;
  PFNGLFLUSHPROC
    glFlush;
  PFNGLFOGXPROC
    glFogx;
  PFNGLFOGXVPROC
    glFogxv;
  PFNGLFRONTFACEPROC
    glFrontFace;
  PFNGLFRUSTUMXPROC
    glFrustumx;
  PFNGLGETBOOLEANVPROC
    glGetBooleanv;
  PFNGLGETBUFFERPARAMETERIVPROC
    glGetBufferParameteriv;
  PFNGLGETCLIPPLANEXPROC
    glGetClipPlanex;
  PFNGLGENBUFFERSPROC
    glGenBuffers;
  PFNGLGENTEXTURESPROC
    glGenTextures;
  PFNGLGETERRORPROC
    glGetError;
  PFNGLGETFIXEDVPROC
    glGetFixedv;
  PFNGLGETINTEGERVPROC
    glGetIntegerv;
  PFNGLGETLIGHTXVPROC
    glGetLightxv;
  PFNGLGETMATERIALXVPROC
    glGetMaterialxv;
  PFNGLGETPOINTERVPROC
    glGetPointerv;
  PFNGLGETSTRINGPROC
    glGetString;
  PFNGLGETTEXENVIVPROC
    glGetTexEnviv;
  PFNGLGETTEXENVXVPROC
    glGetTexEnvxv;
  PFNGLGETTEXPARAMETERIVPROC
    glGetTexParameteriv;
  PFNGLGETTEXPARAMETERXVPROC
    glGetTexParameterxv;
  PFNGLHINTPROC
    glHint;
  PFNGLISBUFFERPROC
    glIsBuffer;
  PFNGLISENABLEDPROC
    glIsEnabled;
  PFNGLISTEXTUREPROC
    glIsTexture;
  PFNGLLIGHTMODELXPROC
    glLightModelx;
  PFNGLLIGHTMODELXVPROC
    glLightModelxv;
  PFNGLLIGHTXPROC
    glLightx;
  PFNGLLIGHTXVPROC
    glLightxv;
  PFNGLLINEWIDTHXPROC
    glLineWidthx;
  PFNGLLOADIDENTITYPROC
    glLoadIdentity;
  PFNGLLOADMATRIXXPROC
    glLoadMatrixx;
  PFNGLLOGICOPPROC
    glLogicOp;
  PFNGLMATERIALXPROC
    glMaterialx;
  PFNGLMATERIALXVPROC
    glMaterialxv;
  PFNGLMATRIXMODEPROC
    glMatrixMode;
  PFNGLMULTMATRIXXPROC
    glMultMatrixx;
  PFNGLMULTITEXCOORD4XPROC
    glMultiTexCoord4x;
  PFNGLNORMAL3XPROC
    glNormal3x;
  PFNGLNORMALPOINTERPROC
    glNormalPointer;
  PFNGLORTHOXPROC
    glOrthox;
  PFNGLPIXELSTOREIPROC
    glPixelStorei;
  PFNGLPOINTPARAMETERXPROC
    glPointParameterx;
  PFNGLPOINTPARAMETERXVPROC
    glPointParameterxv;
  PFNGLPOINTSIZEXPROC
    glPointSizex;
  PFNGLPOLYGONOFFSETXPROC
    glPolygonOffsetx;
  PFNGLPOPMATRIXPROC
    glPopMatrix;
  PFNGLPUSHMATRIXPROC
    glPushMatrix;
  PFNGLREADPIXELSPROC
    glReadPixels;
  PFNGLROTATEXPROC
    glRotatex;
  PFNGLSAMPLECOVERAGEPROC
    glSampleCoverage;
  PFNGLSAMPLECOVERAGEXPROC
    glSampleCoveragex;
  PFNGLSCALEXPROC
    glScalex;
  PFNGLSCISSORPROC
    glScissor;
  PFNGLSHADEMODELPROC
    glShadeModel;
  PFNGLSTENCILFUNCPROC
    glStencilFunc;
  PFNGLSTENCILMASKPROC
    glStencilMask;
  PFNGLSTENCILOPPROC
    glStencilOp;
  PFNGLTEXCOORDPOINTERPROC
    glTexCoordPointer;
  PFNGLTEXENVIPROC
    glTexEnvi;
  PFNGLTEXENVXPROC
    glTexEnvx;
  PFNGLTEXENVIVPROC
    glTexEnviv;
  PFNGLTEXENVXVPROC
    glTexEnvxv;
  PFNGLTEXIMAGE2DPROC
    glTexImage2D;
  PFNGLTEXPARAMETERIPROC
    glTexParameteri;
  PFNGLTEXPARAMETERXPROC
    glTexParameterx;
  PFNGLTEXPARAMETERIVPROC
    glTexParameteriv;
  PFNGLTEXPARAMETERXVPROC
    glTexParameterxv;
  PFNGLTEXSUBIMAGE2DPROC
    glTexSubImage2D;
  PFNGLTRANSLATEXPROC
    glTranslatex;
  PFNGLVERTEXPOINTERPROC
    glVertexPointer;
  PFNGLVIEWPORTPROC
    glViewport;

  // GL_ES_VERSION_2_0
  PFNGLACTIVETEXTUREPROC
    glActiveTexture;
  PFNGLATTACHSHADERPROC
    glAttachShader;
  PFNGLBINDATTRIBLOCATIONPROC
    glBindAttribLocation;
  PFNGLBINDBUFFERPROC
    glBindBuffer;
  PFNGLBINDFRAMEBUFFERPROC
    glBindFramebuffer;
  PFNGLBINDRENDERBUFFERPROC
    glBindRenderbuffer;
  PFNGLBINDTEXTUREPROC
    glBindTexture;
  PFNGLBLENDCOLORPROC
    glBlendColor;
  PFNGLBLENDEQUATIONPROC
    glBlendEquation;
  PFNGLBLENDEQUATIONSEPARATEPROC
    glBlendEquationSeparate;
  PFNGLBLENDFUNCPROC
    glBlendFunc;
  PFNGLBLENDFUNCSEPARATEPROC
    glBlendFuncSeparate;
  PFNGLBUFFERDATAPROC
    glBufferData;
  PFNGLBUFFERSUBDATAPROC
    glBufferSubData;
  PFNGLCHECKFRAMEBUFFERSTATUSPROC
    glCheckFramebufferStatus;
  PFNGLCLEARPROC
    glClear;
  PFNGLCLEARCOLORPROC
    glClearColor;
  PFNGLCLEARDEPTHFPROC
    glClearDepthf;
  PFNGLCLEARSTENCILPROC
    glClearStencil;
  PFNGLCOLORMASKPROC
    glColorMask;
  PFNGLCOMPILESHADERPROC
    glCompileShader;
  PFNGLCOMPRESSEDTEXIMAGE2DPROC
    glCompressedTexImage2D;
  PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC
    glCompressedTexSubImage2D;
  PFNGLCOPYTEXIMAGE2DPROC
    glCopyTexImage2D;
  PFNGLCOPYTEXSUBIMAGE2DPROC
    glCopyTexSubImage2D;
  PFNGLCREATEPROGRAMPROC
    glCreateProgram;
  PFNGLCREATESHADERPROC
    glCreateShader;
  PFNGLCULLFACEPROC
    glCullFace;
  PFNGLDELETEBUFFERSPROC
    glDeleteBuffers;
  PFNGLDELETEFRAMEBUFFERSPROC
    glDeleteFramebuffers;
  PFNGLDELETEPROGRAMPROC
    glDeleteProgram;
  PFNGLDELETERENDERBUFFERSPROC
    glDeleteRenderbuffers;
  PFNGLDELETESHADERPROC
    glDeleteShader;
  PFNGLDELETETEXTURESPROC
    glDeleteTextures;
  PFNGLDEPTHFUNCPROC
    glDepthFunc;
  PFNGLDEPTHMASKPROC
    glDepthMask;
  PFNGLDEPTHRANGEFPROC
    glDepthRangef;
  PFNGLDETACHSHADERPROC
    glDetachShader;
  PFNGLDISABLEPROC
    glDisable;
  PFNGLDISABLEVERTEXATTRIBARRAYPROC
    glDisableVertexAttribArray;
  PFNGLDRAWARRAYSPROC
    glDrawArrays;
  PFNGLDRAWELEMENTSPROC
    glDrawElements;
  PFNGLENABLEPROC
    glEnable;
  PFNGLENABLEVERTEXATTRIBARRAYPROC
    glEnableVertexAttribArray;
  PFNGLFINISHPROC
    glFinish;
  PFNGLFLUSHPROC
    glFlush;
  PFNGLFRAMEBUFFERRENDERBUFFERPROC
    glFramebufferRenderbuffer;
  PFNGLFRAMEBUFFERTEXTURE2DPROC
    glFramebufferTexture2D;
  PFNGLFRONTFACEPROC
    glFrontFace;
  PFNGLGENBUFFERSPROC
    glGenBuffers;
  PFNGLGENERATEMIPMAPPROC
    glGenerateMipmap;
  PFNGLGENFRAMEBUFFERSPROC
    glGenFramebuffers;
  PFNGLGENRENDERBUFFERSPROC
    glGenRenderbuffers;
  PFNGLGENTEXTURESPROC
    glGenTextures;
  PFNGLGETACTIVEATTRIBPROC
    glGetActiveAttrib;
  PFNGLGETACTIVEUNIFORMPROC
    glGetActiveUniform;
  PFNGLGETATTACHEDSHADERSPROC
    glGetAttachedShaders;
  PFNGLGETATTRIBLOCATIONPROC
    glGetAttribLocation;
  PFNGLGETBOOLEANVPROC
    glGetBooleanv;
  PFNGLGETBUFFERPARAMETERIVPROC
    glGetBufferParameteriv;
  PFNGLGETERRORPROC
    glGetError;
  PFNGLGETFLOATVPROC
    glGetFloatv;
  PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC
    glGetFramebufferAttachmentParameteriv;
  PFNGLGETINTEGERVPROC
    glGetIntegerv;
  PFNGLGETPROGRAMIVPROC
    glGetProgramiv;
  PFNGLGETPROGRAMINFOLOGPROC
    glGetProgramInfoLog;
  PFNGLGETRENDERBUFFERPARAMETERIVPROC
    glGetRenderbufferParameteriv;
  PFNGLGETSHADERIVPROC
    glGetShaderiv;
  PFNGLGETSHADERINFOLOGPROC
    glGetShaderInfoLog;
  PFNGLGETSHADERPRECISIONFORMATPROC
    glGetShaderPrecisionFormat;
  PFNGLGETSHADERSOURCEPROC
    glGetShaderSource;
  PFNGLGETSTRINGPROC
    glGetString;
  PFNGLGETTEXPARAMETERFVPROC
    glGetTexParameterfv;
  PFNGLGETTEXPARAMETERIVPROC
    glGetTexParameteriv;
  PFNGLGETUNIFORMFVPROC
    glGetUniformfv;
  PFNGLGETUNIFORMIVPROC
    glGetUniformiv;
  PFNGLGETUNIFORMLOCATIONPROC
    glGetUniformLocation;
  PFNGLGETVERTEXATTRIBFVPROC
    glGetVertexAttribfv;
  PFNGLGETVERTEXATTRIBIVPROC
    glGetVertexAttribiv;
  PFNGLGETVERTEXATTRIBPOINTERVPROC
    glGetVertexAttribPointerv;
  PFNGLHINTPROC
    glHint;
  PFNGLISBUFFERPROC
    glIsBuffer;
  PFNGLISENABLEDPROC
    glIsEnabled;
  PFNGLISFRAMEBUFFERPROC
    glIsFramebuffer;
  PFNGLISPROGRAMPROC
    glIsProgram;
  PFNGLISRENDERBUFFERPROC
    glIsRenderbuffer;
  PFNGLISSHADERPROC
    glIsShader;
  PFNGLISTEXTUREPROC
    glIsTexture;
  PFNGLLINEWIDTHPROC
    glLineWidth;
  PFNGLLINKPROGRAMPROC
    glLinkProgram;
  PFNGLPIXELSTOREIPROC
    glPixelStorei;
  PFNGLPOLYGONOFFSETPROC
    glPolygonOffset;
  PFNGLREADPIXELSPROC
    glReadPixels;
  PFNGLRELEASESHADERCOMPILERPROC
    glReleaseShaderCompiler;
  PFNGLRENDERBUFFERSTORAGEPROC
    glRenderbufferStorage;
  PFNGLSAMPLECOVERAGEPROC
    glSampleCoverage;
  PFNGLSCISSORPROC
    glScissor;
  PFNGLSHADERBINARYPROC
    glShaderBinary;
  PFNGLSHADERSOURCEPROC
    glShaderSource;
  PFNGLSTENCILFUNCPROC
    glStencilFunc;
  PFNGLSTENCILFUNCSEPARATEPROC
    glStencilFuncSeparate;
  PFNGLSTENCILMASKPROC
    glStencilMask;
  PFNGLSTENCILMASKSEPARATEPROC
    glStencilMaskSeparate;
  PFNGLSTENCILOPPROC
    glStencilOp;
  PFNGLSTENCILOPSEPARATEPROC
    glStencilOpSeparate;
  PFNGLTEXIMAGE2DPROC
    glTexImage2D;
  PFNGLTEXPARAMETERFPROC
    glTexParameterf;
  PFNGLTEXPARAMETERFVPROC
    glTexParameterfv;
  PFNGLTEXPARAMETERIPROC
    glTexParameteri;
  PFNGLTEXPARAMETERIVPROC
    glTexParameteriv;
  PFNGLTEXSUBIMAGE2DPROC
    glTexSubImage2D;
  PFNGLUNIFORM1FPROC
    glUniform1f;
  PFNGLUNIFORM1FVPROC
    glUniform1fv;
  PFNGLUNIFORM1IPROC
    glUniform1i;
  PFNGLUNIFORM1IVPROC
    glUniform1iv;
  PFNGLUNIFORM2FPROC
    glUniform2f;
  PFNGLUNIFORM2FVPROC
    glUniform2fv;
  PFNGLUNIFORM2IPROC
    glUniform2i;
  PFNGLUNIFORM2IVPROC
    glUniform2iv;
  PFNGLUNIFORM3FPROC
    glUniform3f;
  PFNGLUNIFORM3FVPROC
    glUniform3fv;
  PFNGLUNIFORM3IPROC
    glUniform3i;
  PFNGLUNIFORM3IVPROC
    glUniform3iv;
  PFNGLUNIFORM4FPROC
    glUniform4f;
  PFNGLUNIFORM4FVPROC
    glUniform4fv;
  PFNGLUNIFORM4IPROC
    glUniform4i;
  PFNGLUNIFORM4IVPROC
    glUniform4iv;
  PFNGLUNIFORMMATRIX2FVPROC
    glUniformMatrix2fv;
  PFNGLUNIFORMMATRIX3FVPROC
    glUniformMatrix3fv;
  PFNGLUNIFORMMATRIX4FVPROC
    glUniformMatrix4fv;
  PFNGLUSEPROGRAMPROC
    glUseProgram;
  PFNGLVALIDATEPROGRAMPROC
    glValidateProgram;
  PFNGLVERTEXATTRIB1FPROC
    glVertexAttrib1f;
  PFNGLVERTEXATTRIB1FVPROC
    glVertexAttrib1fv;
  PFNGLVERTEXATTRIB2FPROC
    glVertexAttrib2f;
  PFNGLVERTEXATTRIB2FVPROC
    glVertexAttrib2fv;
  PFNGLVERTEXATTRIB3FPROC
    glVertexAttrib3f;
  PFNGLVERTEXATTRIB3FVPROC
    glVertexAttrib3fv;
  PFNGLVERTEXATTRIB4FPROC
    glVertexAttrib4f;
  PFNGLVERTEXATTRIB4FVPROC
    glVertexAttrib4fv;
  PFNGLVERTEXATTRIBPOINTERPROC
    glVertexAttribPointer;
  PFNGLVIEWPORTPROC
    glViewport;

  // GL_ES_VERSION_3_0
  PFNGLREADBUFFERPROC
    glReadBuffer;
  PFNGLDRAWRANGEELEMENTSPROC
    glDrawRangeElements;
  PFNGLTEXIMAGE3DPROC
    glTexImage3D;
  PFNGLTEXSUBIMAGE3DPROC
    glTexSubImage3D;
  PFNGLCOPYTEXSUBIMAGE3DPROC
    glCopyTexSubImage3D;
  PFNGLCOMPRESSEDTEXIMAGE3DPROC
    glCompressedTexImage3D;
  PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC
    glCompressedTexSubImage3D;
  PFNGLGENQUERIESPROC
    glGenQueries;
  PFNGLDELETEQUERIESPROC
    glDeleteQueries;
  PFNGLISQUERYPROC
    glIsQuery;
  PFNGLBEGINQUERYPROC
    glBeginQuery;
  PFNGLENDQUERYPROC
    glEndQuery;
  PFNGLGETQUERYIVPROC
    glGetQueryiv;
  PFNGLGETQUERYOBJECTUIVPROC
    glGetQueryObjectuiv;
  PFNGLUNMAPBUFFERPROC
    glUnmapBuffer;
  PFNGLGETBUFFERPOINTERVPROC
    glGetBufferPointerv;
  PFNGLDRAWBUFFERSPROC
    glDrawBuffers;
  PFNGLUNIFORMMATRIX2X3FVPROC
    glUniformMatrix2x3fv;
  PFNGLUNIFORMMATRIX3X2FVPROC
    glUniformMatrix3x2fv;
  PFNGLUNIFORMMATRIX2X4FVPROC
    glUniformMatrix2x4fv;
  PFNGLUNIFORMMATRIX4X2FVPROC
    glUniformMatrix4x2fv;
  PFNGLUNIFORMMATRIX3X4FVPROC
    glUniformMatrix3x4fv;
  PFNGLUNIFORMMATRIX4X3FVPROC
    glUniformMatrix4x3fv;
  PFNGLBLITFRAMEBUFFERPROC
    glBlitFramebuffer;
  PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC
    glRenderbufferStorageMultisample;
  PFNGLFRAMEBUFFERTEXTURELAYERPROC
    glFramebufferTextureLayer;
  PFNGLMAPBUFFERRANGEPROC
    glMapBufferRange;
  PFNGLFLUSHMAPPEDBUFFERRANGEPROC
    glFlushMappedBufferRange;
  PFNGLBINDVERTEXARRAYPROC
    glBindVertexArray;
  PFNGLDELETEVERTEXARRAYSPROC
    glDeleteVertexArrays;
  PFNGLGENVERTEXARRAYSPROC
    glGenVertexArrays;
  PFNGLISVERTEXARRAYPROC
    glIsVertexArray;
  PFNGLGETINTEGERI_VPROC
    glGetIntegeri_v;
  PFNGLBEGINTRANSFORMFEEDBACKPROC
    glBeginTransformFeedback;
  PFNGLENDTRANSFORMFEEDBACKPROC
    glEndTransformFeedback;
  PFNGLBINDBUFFERRANGEPROC
    glBindBufferRange;
  PFNGLBINDBUFFERBASEPROC
    glBindBufferBase;
  PFNGLTRANSFORMFEEDBACKVARYINGSPROC
    glTransformFeedbackVaryings;
  PFNGLGETTRANSFORMFEEDBACKVARYINGPROC
    glGetTransformFeedbackVarying;
  PFNGLVERTEXATTRIBIPOINTERPROC
    glVertexAttribIPointer;
  PFNGLGETVERTEXATTRIBIIVPROC
    glGetVertexAttribIiv;
  PFNGLGETVERTEXATTRIBIUIVPROC
    glGetVertexAttribIuiv;
  PFNGLVERTEXATTRIBI4IPROC
    glVertexAttribI4i;
  PFNGLVERTEXATTRIBI4UIPROC
    glVertexAttribI4ui;
  PFNGLVERTEXATTRIBI4IVPROC
    glVertexAttribI4iv;
  PFNGLVERTEXATTRIBI4UIVPROC
    glVertexAttribI4uiv;
  PFNGLGETUNIFORMUIVPROC
    glGetUniformuiv;
  PFNGLGETFRAGDATALOCATIONPROC
    glGetFragDataLocation;
  PFNGLUNIFORM1UIPROC
    glUniform1ui;
  PFNGLUNIFORM2UIPROC
    glUniform2ui;
  PFNGLUNIFORM3UIPROC
    glUniform3ui;
  PFNGLUNIFORM4UIPROC
    glUniform4ui;
  PFNGLUNIFORM1UIVPROC
    glUniform1uiv;
  PFNGLUNIFORM2UIVPROC
    glUniform2uiv;
  PFNGLUNIFORM3UIVPROC
    glUniform3uiv;
  PFNGLUNIFORM4UIVPROC
    glUniform4uiv;
  PFNGLCLEARBUFFERIVPROC
    glClearBufferiv;
  PFNGLCLEARBUFFERUIVPROC
    glClearBufferuiv;
  PFNGLCLEARBUFFERFVPROC
    glClearBufferfv;
  PFNGLCLEARBUFFERFIPROC
    glClearBufferfi;
  PFNGLGETSTRINGIPROC
    glGetStringi;
  PFNGLCOPYBUFFERSUBDATAPROC
    glCopyBufferSubData;
  PFNGLGETUNIFORMINDICESPROC
    glGetUniformIndices;
  PFNGLGETACTIVEUNIFORMSIVPROC
    glGetActiveUniformsiv;
  PFNGLGETUNIFORMBLOCKINDEXPROC
    glGetUniformBlockIndex;
  PFNGLGETACTIVEUNIFORMBLOCKIVPROC
    glGetActiveUniformBlockiv;
  PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC
    glGetActiveUniformBlockName;
  PFNGLUNIFORMBLOCKBINDINGPROC
    glUniformBlockBinding;
  PFNGLDRAWARRAYSINSTANCEDPROC
    glDrawArraysInstanced;
  PFNGLDRAWELEMENTSINSTANCEDPROC
    glDrawElementsInstanced;
  PFNGLFENCESYNCPROC
    glFenceSync;
  PFNGLISSYNCPROC
    glIsSync;
  PFNGLDELETESYNCPROC
    glDeleteSync;
  PFNGLCLIENTWAITSYNCPROC
    glClientWaitSync;
  PFNGLWAITSYNCPROC
    glWaitSync;
  PFNGLGETINTEGER64VPROC
    glGetInteger64v;
  PFNGLGETSYNCIVPROC
    glGetSynciv;
  PFNGLGETINTEGER64I_VPROC
    glGetInteger64i_v;
  PFNGLGETBUFFERPARAMETERI64VPROC
    glGetBufferParameteri64v;
  PFNGLGENSAMPLERSPROC
    glGenSamplers;
  PFNGLDELETESAMPLERSPROC
    glDeleteSamplers;
  PFNGLISSAMPLERPROC
    glIsSampler;
  PFNGLBINDSAMPLERPROC
    glBindSampler;
  PFNGLSAMPLERPARAMETERIPROC
    glSamplerParameteri;
  PFNGLSAMPLERPARAMETERIVPROC
    glSamplerParameteriv;
  PFNGLSAMPLERPARAMETERFPROC
    glSamplerParameterf;
  PFNGLSAMPLERPARAMETERFVPROC
    glSamplerParameterfv;
  PFNGLGETSAMPLERPARAMETERIVPROC
    glGetSamplerParameteriv;
  PFNGLGETSAMPLERPARAMETERFVPROC
    glGetSamplerParameterfv;
  PFNGLVERTEXATTRIBDIVISORPROC
    glVertexAttribDivisor;
  PFNGLBINDTRANSFORMFEEDBACKPROC
    glBindTransformFeedback;
  PFNGLDELETETRANSFORMFEEDBACKSPROC
    glDeleteTransformFeedbacks;
  PFNGLGENTRANSFORMFEEDBACKSPROC
    glGenTransformFeedbacks;
  PFNGLISTRANSFORMFEEDBACKPROC
    glIsTransformFeedback;
  PFNGLPAUSETRANSFORMFEEDBACKPROC
    glPauseTransformFeedback;
  PFNGLRESUMETRANSFORMFEEDBACKPROC
    glResumeTransformFeedback;
  PFNGLGETPROGRAMBINARYPROC
    glGetProgramBinary;
  PFNGLPROGRAMBINARYPROC
    glProgramBinary;
  PFNGLPROGRAMPARAMETERIPROC
    glProgramParameteri;
  PFNGLINVALIDATEFRAMEBUFFERPROC
    glInvalidateFramebuffer;
  PFNGLINVALIDATESUBFRAMEBUFFERPROC
    glInvalidateSubFramebuffer;
  PFNGLTEXSTORAGE2DPROC
    glTexStorage2D;
  PFNGLTEXSTORAGE3DPROC
    glTexStorage3D;
  PFNGLGETINTERNALFORMATIVPROC
    glGetInternalformativ;

  // GL_ES_VERSION_3_1
  PFNGLDISPATCHCOMPUTEPROC
    glDispatchCompute;
  PFNGLDISPATCHCOMPUTEINDIRECTPROC
    glDispatchComputeIndirect;
  PFNGLDRAWARRAYSINDIRECTPROC
    glDrawArraysIndirect;
  PFNGLDRAWELEMENTSINDIRECTPROC
    glDrawElementsIndirect;
  PFNGLFRAMEBUFFERPARAMETERIPROC
    glFramebufferParameteri;
  PFNGLGETFRAMEBUFFERPARAMETERIVPROC
    glGetFramebufferParameteriv;
  PFNGLGETPROGRAMINTERFACEIVPROC
    glGetProgramInterfaceiv;
  PFNGLGETPROGRAMRESOURCEINDEXPROC
    glGetProgramResourceIndex;
  PFNGLGETPROGRAMRESOURCENAMEPROC
    glGetProgramResourceName;
  PFNGLGETPROGRAMRESOURCEIVPROC
    glGetProgramResourceiv;
  PFNGLGETPROGRAMRESOURCELOCATIONPROC
    glGetProgramResourceLocation;
  PFNGLUSEPROGRAMSTAGESPROC
    glUseProgramStages;
  PFNGLACTIVESHADERPROGRAMPROC
    glActiveShaderProgram;
  PFNGLCREATESHADERPROGRAMVPROC
    glCreateShaderProgramv;
  PFNGLBINDPROGRAMPIPELINEPROC
    glBindProgramPipeline;
  PFNGLDELETEPROGRAMPIPELINESPROC
    glDeleteProgramPipelines;
  PFNGLGENPROGRAMPIPELINESPROC
    glGenProgramPipelines;
  PFNGLISPROGRAMPIPELINEPROC
    glIsProgramPipeline;
  PFNGLGETPROGRAMPIPELINEIVPROC
    glGetProgramPipelineiv;
  PFNGLPROGRAMUNIFORM1IPROC
    glProgramUniform1i;
  PFNGLPROGRAMUNIFORM2IPROC
    glProgramUniform2i;
  PFNGLPROGRAMUNIFORM3IPROC
    glProgramUniform3i;
  PFNGLPROGRAMUNIFORM4IPROC
    glProgramUniform4i;
  PFNGLPROGRAMUNIFORM1UIPROC
    glProgramUniform1ui;
  PFNGLPROGRAMUNIFORM2UIPROC
    glProgramUniform2ui;
  PFNGLPROGRAMUNIFORM3UIPROC
    glProgramUniform3ui;
  PFNGLPROGRAMUNIFORM4UIPROC
    glProgramUniform4ui;
  PFNGLPROGRAMUNIFORM1FPROC
    glProgramUniform1f;
  PFNGLPROGRAMUNIFORM2FPROC
    glProgramUniform2f;
  PFNGLPROGRAMUNIFORM3FPROC
    glProgramUniform3f;
  PFNGLPROGRAMUNIFORM4FPROC
    glProgramUniform4f;
  PFNGLPROGRAMUNIFORM1IVPROC
    glProgramUniform1iv;
  PFNGLPROGRAMUNIFORM2IVPROC
    glProgramUniform2iv;
  PFNGLPROGRAMUNIFORM3IVPROC
    glProgramUniform3iv;
  PFNGLPROGRAMUNIFORM4IVPROC
    glProgramUniform4iv;
  PFNGLPROGRAMUNIFORM1UIVPROC
    glProgramUniform1uiv;
  PFNGLPROGRAMUNIFORM2UIVPROC
    glProgramUniform2uiv;
  PFNGLPROGRAMUNIFORM3UIVPROC
    glProgramUniform3uiv;
  PFNGLPROGRAMUNIFORM4UIVPROC
    glProgramUniform4uiv;
  PFNGLPROGRAMUNIFORM1FVPROC
    glProgramUniform1fv;
  PFNGLPROGRAMUNIFORM2FVPROC
    glProgramUniform2fv;
  PFNGLPROGRAMUNIFORM3FVPROC
    glProgramUniform3fv;
  PFNGLPROGRAMUNIFORM4FVPROC
    glProgramUniform4fv;
  PFNGLPROGRAMUNIFORMMATRIX2FVPROC
    glProgramUniformMatrix2fv;
  PFNGLPROGRAMUNIFORMMATRIX3FVPROC
    glProgramUniformMatrix3fv;
  PFNGLPROGRAMUNIFORMMATRIX4FVPROC
    glProgramUniformMatrix4fv;
  PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC
    glProgramUniformMatrix2x3fv;
  PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC
    glProgramUniformMatrix3x2fv;
  PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC
    glProgramUniformMatrix2x4fv;
  PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC
    glProgramUniformMatrix4x2fv;
  PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC
    glProgramUniformMatrix3x4fv;
  PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC
    glProgramUniformMatrix4x3fv;
  PFNGLVALIDATEPROGRAMPIPELINEPROC
    glValidateProgramPipeline;
  PFNGLGETPROGRAMPIPELINEINFOLOGPROC
    glGetProgramPipelineInfoLog;
  PFNGLBINDIMAGETEXTUREPROC
    glBindImageTexture;
  PFNGLGETBOOLEANI_VPROC
    glGetBooleani_v;
  PFNGLMEMORYBARRIERPROC
    glMemoryBarrier;
  PFNGLMEMORYBARRIERBYREGIONPROC
    glMemoryBarrierByRegion;
  PFNGLTEXSTORAGE2DMULTISAMPLEPROC
    glTexStorage2DMultisample;
  PFNGLGETMULTISAMPLEFVPROC
    glGetMultisamplefv;
  PFNGLSAMPLEMASKIPROC
    glSampleMaski;
  PFNGLGETTEXLEVELPARAMETERIVPROC
    glGetTexLevelParameteriv;
  PFNGLGETTEXLEVELPARAMETERFVPROC
    glGetTexLevelParameterfv;
  PFNGLBINDVERTEXBUFFERPROC
    glBindVertexBuffer;
  PFNGLVERTEXATTRIBFORMATPROC
    glVertexAttribFormat;
  PFNGLVERTEXATTRIBIFORMATPROC
    glVertexAttribIFormat;
  PFNGLVERTEXATTRIBBINDINGPROC
    glVertexAttribBinding;
  PFNGLVERTEXBINDINGDIVISORPROC
    glVertexBindingDivisor;

  // GL_AMD_performance_monitor
  PFNGLGETPERFMONITORGROUPSAMDPROC
    glGetPerfMonitorGroupsAMD;
  PFNGLGETPERFMONITORCOUNTERSAMDPROC
    glGetPerfMonitorCountersAMD;
  PFNGLGETPERFMONITORGROUPSTRINGAMDPROC
    glGetPerfMonitorGroupStringAMD;
  PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC
    glGetPerfMonitorCounterStringAMD;
  PFNGLGETPERFMONITORCOUNTERINFOAMDPROC
    glGetPerfMonitorCounterInfoAMD;
  PFNGLGENPERFMONITORSAMDPROC
    glGenPerfMonitorsAMD;
  PFNGLDELETEPERFMONITORSAMDPROC
    glDeletePerfMonitorsAMD;
  PFNGLSELECTPERFMONITORCOUNTERSAMDPROC
    glSelectPerfMonitorCountersAMD;
  PFNGLBEGINPERFMONITORAMDPROC
    glBeginPerfMonitorAMD;
  PFNGLENDPERFMONITORAMDPROC
    glEndPerfMonitorAMD;
  PFNGLGETPERFMONITORCOUNTERDATAAMDPROC
    glGetPerfMonitorCounterDataAMD;

  // GL_ANGLE_framebuffer_blit
  PFNGLBLITFRAMEBUFFERANGLEPROC
    glBlitFramebufferANGLE;

  // GL_ANGLE_framebuffer_multisample
  PFNGLRENDERBUFFERSTORAGEMULTISAMPLEANGLEPROC
    glRenderbufferStorageMultisampleANGLE;

  // GL_ANGLE_instanced_arrays
  PFNGLDRAWARRAYSINSTANCEDANGLEPROC
    glDrawArraysInstancedANGLE;
  PFNGLDRAWELEMENTSINSTANCEDANGLEPROC
    glDrawElementsInstancedANGLE;
  PFNGLVERTEXATTRIBDIVISORANGLEPROC
    glVertexAttribDivisorANGLE;

  // GL_ANGLE_translated_shader_source
  PFNGLGETTRANSLATEDSHADERSOURCEANGLEPROC
    glGetTranslatedShaderSourceANGLE;

  // GL_APPLE_copy_texture_levels
  PFNGLCOPYTEXTURELEVELSAPPLEPROC
    glCopyTextureLevelsAPPLE;

  // GL_APPLE_framebuffer_multisample
  PFNGLRENDERBUFFERSTORAGEMULTISAMPLEAPPLEPROC
    glRenderbufferStorageMultisampleAPPLE;
  PFNGLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLEPROC
    glResolveMultisampleFramebufferAPPLE;

  // GL_APPLE_sync
  PFNGLFENCESYNCAPPLEPROC
    glFenceSyncAPPLE;
  PFNGLISSYNCAPPLEPROC
    glIsSyncAPPLE;
  PFNGLDELETESYNCAPPLEPROC
    glDeleteSyncAPPLE;
  PFNGLCLIENTWAITSYNCAPPLEPROC
    glClientWaitSyncAPPLE;
  PFNGLWAITSYNCAPPLEPROC
    glWaitSyncAPPLE;
  PFNGLGETINTEGER64VAPPLEPROC
    glGetInteger64vAPPLE;
  PFNGLGETSYNCIVAPPLEPROC
    glGetSyncivAPPLE;

  // GL_EXT_base_instance
  PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC
    glDrawArraysInstancedBaseInstanceEXT;
  PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC
    glDrawElementsInstancedBaseInstanceEXT;
  PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC
    glDrawElementsInstancedBaseVertexBaseInstanceEXT;

  // GL_EXT_blend_minmax
  PFNGLBLENDEQUATIONEXTPROC
    glBlendEquationEXT;

  // GL_EXT_buffer_storage
  PFNGLBUFFERSTORAGEEXTPROC
    glBufferStorageEXT;

  // GL_EXT_copy_image
  PFNGLCOPYIMAGESUBDATAEXTPROC
    glCopyImageSubDataEXT;

  // GL_EXT_debug_label
  PFNGLLABELOBJECTEXTPROC
    glLabelObjectEXT;
  PFNGLGETOBJECTLABELEXTPROC
    glGetObjectLabelEXT;

  // GL_EXT_debug_marker
  PFNGLINSERTEVENTMARKEREXTPROC
    glInsertEventMarkerEXT;
  PFNGLPUSHGROUPMARKEREXTPROC
    glPushGroupMarkerEXT;
  PFNGLPOPGROUPMARKEREXTPROC
    glPopGroupMarkerEXT;

  // GL_EXT_discard_framebuffer
  PFNGLDISCARDFRAMEBUFFEREXTPROC
    glDiscardFramebufferEXT;

  // GL_EXT_disjoint_timer_query
  PFNGLGENQUERIESEXTPROC
    glGenQueriesEXT;
  PFNGLDELETEQUERIESEXTPROC
    glDeleteQueriesEXT;
  PFNGLISQUERYEXTPROC
    glIsQueryEXT;
  PFNGLBEGINQUERYEXTPROC
    glBeginQueryEXT;
  PFNGLENDQUERYEXTPROC
    glEndQueryEXT;
  PFNGLQUERYCOUNTEREXTPROC
    glQueryCounterEXT;
  PFNGLGETQUERYIVEXTPROC
    glGetQueryivEXT;
  PFNGLGETQUERYOBJECTIVEXTPROC
    glGetQueryObjectivEXT;
  PFNGLGETQUERYOBJECTUIVEXTPROC
    glGetQueryObjectuivEXT;
  PFNGLGETQUERYOBJECTI64VEXTPROC
    glGetQueryObjecti64vEXT;
  PFNGLGETQUERYOBJECTUI64VEXTPROC
    glGetQueryObjectui64vEXT;

  // GL_EXT_draw_buffers
  PFNGLDRAWBUFFERSEXTPROC
    glDrawBuffersEXT;

  // GL_EXT_draw_buffers_indexed
  PFNGLENABLEIEXTPROC
    glEnableiEXT;
  PFNGLDISABLEIEXTPROC
    glDisableiEXT;
  PFNGLBLENDEQUATIONIEXTPROC
    glBlendEquationiEXT;
  PFNGLBLENDEQUATIONSEPARATEIEXTPROC
    glBlendEquationSeparateiEXT;
  PFNGLBLENDFUNCIEXTPROC
    glBlendFunciEXT;
  PFNGLBLENDFUNCSEPARATEIEXTPROC
    glBlendFuncSeparateiEXT;
  PFNGLCOLORMASKIEXTPROC
    glColorMaskiEXT;
  PFNGLISENABLEDIEXTPROC
    glIsEnablediEXT;

  // GL_EXT_draw_elements_base_vertex
  PFNGLDRAWELEMENTSBASEVERTEXEXTPROC
    glDrawElementsBaseVertexEXT;
  PFNGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC
    glDrawRangeElementsBaseVertexEXT;
  PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC
    glDrawElementsInstancedBaseVertexEXT;
  PFNGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC
    glMultiDrawElementsBaseVertexEXT;

  // GL_EXT_draw_instanced
  PFNGLDRAWARRAYSINSTANCEDEXTPROC
    glDrawArraysInstancedEXT;
  PFNGLDRAWELEMENTSINSTANCEDEXTPROC
    glDrawElementsInstancedEXT;

  // GL_EXT_geometry_shader
  PFNGLFRAMEBUFFERTEXTUREEXTPROC
    glFramebufferTextureEXT;

  // GL_EXT_instanced_arrays
  PFNGLDRAWARRAYSINSTANCEDEXTPROC
    glDrawArraysInstancedEXT;
  PFNGLDRAWELEMENTSINSTANCEDEXTPROC
    glDrawElementsInstancedEXT;
  PFNGLVERTEXATTRIBDIVISOREXTPROC
    glVertexAttribDivisorEXT;

  // GL_EXT_map_buffer_range
  PFNGLMAPBUFFERRANGEEXTPROC
    glMapBufferRangeEXT;
  PFNGLFLUSHMAPPEDBUFFERRANGEEXTPROC
    glFlushMappedBufferRangeEXT;

  // GL_EXT_multi_draw_arrays
  PFNGLMULTIDRAWARRAYSEXTPROC
    glMultiDrawArraysEXT;
  PFNGLMULTIDRAWELEMENTSEXTPROC
    glMultiDrawElementsEXT;

  // GL_EXT_multi_draw_indirect
  PFNGLMULTIDRAWARRAYSINDIRECTEXTPROC
    glMultiDrawArraysIndirectEXT;
  PFNGLMULTIDRAWELEMENTSINDIRECTEXTPROC
    glMultiDrawElementsIndirectEXT;

  // GL_EXT_multisampled_render_to_texture
  PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC
    glRenderbufferStorageMultisampleEXT;
  PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC
    glFramebufferTexture2DMultisampleEXT;

  // GL_EXT_multiview_draw_buffers
  PFNGLREADBUFFERINDEXEDEXTPROC
    glReadBufferIndexedEXT;
  PFNGLDRAWBUFFERSINDEXEDEXTPROC
    glDrawBuffersIndexedEXT;
  PFNGLGETINTEGERI_VEXTPROC
    glGetIntegeri_vEXT;

  // GL_EXT_occlusion_query_boolean
  PFNGLGENQUERIESEXTPROC
    glGenQueriesEXT;
  PFNGLDELETEQUERIESEXTPROC
    glDeleteQueriesEXT;
  PFNGLISQUERYEXTPROC
    glIsQueryEXT;
  PFNGLBEGINQUERYEXTPROC
    glBeginQueryEXT;
  PFNGLENDQUERYEXTPROC
    glEndQueryEXT;
  PFNGLGETQUERYIVEXTPROC
    glGetQueryivEXT;
  PFNGLGETQUERYOBJECTUIVEXTPROC
    glGetQueryObjectuivEXT;

  // GL_EXT_primitive_bounding_box
  PFNGLPRIMITIVEBOUNDINGBOXEXTPROC
    glPrimitiveBoundingBoxEXT;

  // GL_EXT_raster_multisample
  PFNGLRASTERSAMPLESEXTPROC
    glRasterSamplesEXT;

  // GL_EXT_robustness
  PFNGLGETGRAPHICSRESETSTATUSEXTPROC
    glGetGraphicsResetStatusEXT;
  PFNGLREADNPIXELSEXTPROC
    glReadnPixelsEXT;
  PFNGLGETNUNIFORMFVEXTPROC
    glGetnUniformfvEXT;
  PFNGLGETNUNIFORMIVEXTPROC
    glGetnUniformivEXT;

  // GL_EXT_separate_shader_objects
  PFNGLUSESHADERPROGRAMEXTPROC
    glUseShaderProgramEXT;
  PFNGLACTIVEPROGRAMEXTPROC
    glActiveProgramEXT;
  PFNGLCREATESHADERPROGRAMEXTPROC
    glCreateShaderProgramEXT;
  PFNGLACTIVESHADERPROGRAMEXTPROC
    glActiveShaderProgramEXT;
  PFNGLBINDPROGRAMPIPELINEEXTPROC
    glBindProgramPipelineEXT;
  PFNGLCREATESHADERPROGRAMVEXTPROC
    glCreateShaderProgramvEXT;
  PFNGLDELETEPROGRAMPIPELINESEXTPROC
    glDeleteProgramPipelinesEXT;
  PFNGLGENPROGRAMPIPELINESEXTPROC
    glGenProgramPipelinesEXT;
  PFNGLGETPROGRAMPIPELINEINFOLOGEXTPROC
    glGetProgramPipelineInfoLogEXT;
  PFNGLGETPROGRAMPIPELINEIVEXTPROC
    glGetProgramPipelineivEXT;
  PFNGLISPROGRAMPIPELINEEXTPROC
    glIsProgramPipelineEXT;
  PFNGLPROGRAMPARAMETERIEXTPROC
    glProgramParameteriEXT;
  PFNGLPROGRAMUNIFORM1FEXTPROC
    glProgramUniform1fEXT;
  PFNGLPROGRAMUNIFORM1FVEXTPROC
    glProgramUniform1fvEXT;
  PFNGLPROGRAMUNIFORM1IEXTPROC
    glProgramUniform1iEXT;
  PFNGLPROGRAMUNIFORM1IVEXTPROC
    glProgramUniform1ivEXT;
  PFNGLPROGRAMUNIFORM2FEXTPROC
    glProgramUniform2fEXT;
  PFNGLPROGRAMUNIFORM2FVEXTPROC
    glProgramUniform2fvEXT;
  PFNGLPROGRAMUNIFORM2IEXTPROC
    glProgramUniform2iEXT;
  PFNGLPROGRAMUNIFORM2IVEXTPROC
    glProgramUniform2ivEXT;
  PFNGLPROGRAMUNIFORM3FEXTPROC
    glProgramUniform3fEXT;
  PFNGLPROGRAMUNIFORM3FVEXTPROC
    glProgramUniform3fvEXT;
  PFNGLPROGRAMUNIFORM3IEXTPROC
    glProgramUniform3iEXT;
  PFNGLPROGRAMUNIFORM3IVEXTPROC
    glProgramUniform3ivEXT;
  PFNGLPROGRAMUNIFORM4FEXTPROC
    glProgramUniform4fEXT;
  PFNGLPROGRAMUNIFORM4FVEXTPROC
    glProgramUniform4fvEXT;
  PFNGLPROGRAMUNIFORM4IEXTPROC
    glProgramUniform4iEXT;
  PFNGLPROGRAMUNIFORM4IVEXTPROC
    glProgramUniform4ivEXT;
  PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC
    glProgramUniformMatrix2fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC
    glProgramUniformMatrix3fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC
    glProgramUniformMatrix4fvEXT;
  PFNGLUSEPROGRAMSTAGESEXTPROC
    glUseProgramStagesEXT;
  PFNGLVALIDATEPROGRAMPIPELINEEXTPROC
    glValidateProgramPipelineEXT;
  PFNGLPROGRAMUNIFORM1UIEXTPROC
    glProgramUniform1uiEXT;
  PFNGLPROGRAMUNIFORM2UIEXTPROC
    glProgramUniform2uiEXT;
  PFNGLPROGRAMUNIFORM3UIEXTPROC
    glProgramUniform3uiEXT;
  PFNGLPROGRAMUNIFORM4UIEXTPROC
    glProgramUniform4uiEXT;
  PFNGLPROGRAMUNIFORM1UIVEXTPROC
    glProgramUniform1uivEXT;
  PFNGLPROGRAMUNIFORM2UIVEXTPROC
    glProgramUniform2uivEXT;
  PFNGLPROGRAMUNIFORM3UIVEXTPROC
    glProgramUniform3uivEXT;
  PFNGLPROGRAMUNIFORM4UIVEXTPROC
    glProgramUniform4uivEXT;
  PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC
    glProgramUniformMatrix4fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC
    glProgramUniformMatrix2x3fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC
    glProgramUniformMatrix3x2fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC
    glProgramUniformMatrix2x4fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC
    glProgramUniformMatrix4x2fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC
    glProgramUniformMatrix3x4fvEXT;
  PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC
    glProgramUniformMatrix4x3fvEXT;

  // GL_EXT_sparse_texture
  PFNGLTEXPAGECOMMITMENTARBPROC
    glTexPageCommitmentARB;

  // GL_EXT_tessellation_shader
  PFNGLPATCHPARAMETERIEXTPROC
    glPatchParameteriEXT;

  // GL_EXT_texture_border_clamp
  PFNGLTEXPARAMETERIIVEXTPROC
    glTexParameterIivEXT;
  PFNGLTEXPARAMETERIUIVEXTPROC
    glTexParameterIuivEXT;
  PFNGLGETTEXPARAMETERIIVEXTPROC
    glGetTexParameterIivEXT;
  PFNGLGETTEXPARAMETERIUIVEXTPROC
    glGetTexParameterIuivEXT;
  PFNGLSAMPLERPARAMETERIIVEXTPROC
    glSamplerParameterIivEXT;
  PFNGLSAMPLERPARAMETERIUIVEXTPROC
    glSamplerParameterIuivEXT;
  PFNGLGETSAMPLERPARAMETERIIVEXTPROC
    glGetSamplerParameterIivEXT;
  PFNGLGETSAMPLERPARAMETERIUIVEXTPROC
    glGetSamplerParameterIuivEXT;

  // GL_EXT_texture_buffer
  PFNGLTEXBUFFEREXTPROC
    glTexBufferEXT;
  PFNGLTEXBUFFERRANGEEXTPROC
    glTexBufferRangeEXT;

  // GL_EXT_texture_filter_minmax
  PFNGLRASTERSAMPLESEXTPROC
    glRasterSamplesEXT;

  // GL_EXT_texture_storage
  PFNGLTEXSTORAGE1DEXTPROC
    glTexStorage1DEXT;
  PFNGLTEXSTORAGE2DEXTPROC
    glTexStorage2DEXT;
  PFNGLTEXSTORAGE3DEXTPROC
    glTexStorage3DEXT;
  PFNGLTEXTURESTORAGE1DEXTPROC
    glTextureStorage1DEXT;
  PFNGLTEXTURESTORAGE2DEXTPROC
    glTextureStorage2DEXT;
  PFNGLTEXTURESTORAGE3DEXTPROC
    glTextureStorage3DEXT;

  // GL_EXT_texture_view
  PFNGLTEXTUREVIEWEXTPROC
    glTextureViewEXT;

  // GL_IMG_multisampled_render_to_texture
  PFNGLRENDERBUFFERSTORAGEMULTISAMPLEIMGPROC
    glRenderbufferStorageMultisampleIMG;
  PFNGLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMGPROC
    glFramebufferTexture2DMultisampleIMG;

  // GL_IMG_user_clip_plane
  PFNGLCLIPPLANEFIMGPROC
    glClipPlanefIMG;
  PFNGLCLIPPLANEXIMGPROC
    glClipPlanexIMG;

  // GL_INTEL_performance_query
  PFNGLBEGINPERFQUERYINTELPROC
    glBeginPerfQueryINTEL;
  PFNGLCREATEPERFQUERYINTELPROC
    glCreatePerfQueryINTEL;
  PFNGLDELETEPERFQUERYINTELPROC
    glDeletePerfQueryINTEL;
  PFNGLENDPERFQUERYINTELPROC
    glEndPerfQueryINTEL;
  PFNGLGETFIRSTPERFQUERYIDINTELPROC
    glGetFirstPerfQueryIdINTEL;
  PFNGLGETNEXTPERFQUERYIDINTELPROC
    glGetNextPerfQueryIdINTEL;
  PFNGLGETPERFCOUNTERINFOINTELPROC
    glGetPerfCounterInfoINTEL;
  PFNGLGETPERFQUERYDATAINTELPROC
    glGetPerfQueryDataINTEL;
  PFNGLGETPERFQUERYIDBYNAMEINTELPROC
    glGetPerfQueryIdByNameINTEL;
  PFNGLGETPERFQUERYINFOINTELPROC
    glGetPerfQueryInfoINTEL;

  // GL_KHR_blend_equation_advanced
  PFNGLBLENDBARRIERKHRPROC
    glBlendBarrierKHR;

  // GL_KHR_debug
  PFNGLDEBUGMESSAGECONTROLPROC
    glDebugMessageControl;
  PFNGLDEBUGMESSAGEINSERTPROC
    glDebugMessageInsert;
  PFNGLDEBUGMESSAGECALLBACKPROC
    glDebugMessageCallback;
  PFNGLGETDEBUGMESSAGELOGPROC
    glGetDebugMessageLog;
  PFNGLPUSHDEBUGGROUPPROC
    glPushDebugGroup;
  PFNGLPOPDEBUGGROUPPROC
    glPopDebugGroup;
  PFNGLOBJECTLABELPROC
    glObjectLabel;
  PFNGLGETOBJECTLABELPROC
    glGetObjectLabel;
  PFNGLOBJECTPTRLABELPROC
    glObjectPtrLabel;
  PFNGLGETOBJECTPTRLABELPROC
    glGetObjectPtrLabel;
  PFNGLGETPOINTERVPROC
    glGetPointerv;
  PFNGLDEBUGMESSAGECONTROLKHRPROC
    glDebugMessageControlKHR;
  PFNGLDEBUGMESSAGEINSERTKHRPROC
    glDebugMessageInsertKHR;
  PFNGLDEBUGMESSAGECALLBACKKHRPROC
    glDebugMessageCallbackKHR;
  PFNGLGETDEBUGMESSAGELOGKHRPROC
    glGetDebugMessageLogKHR;
  PFNGLPUSHDEBUGGROUPKHRPROC
    glPushDebugGroupKHR;
  PFNGLPOPDEBUGGROUPKHRPROC
    glPopDebugGroupKHR;
  PFNGLOBJECTLABELKHRPROC
    glObjectLabelKHR;
  PFNGLGETOBJECTLABELKHRPROC
    glGetObjectLabelKHR;
  PFNGLOBJECTPTRLABELKHRPROC
    glObjectPtrLabelKHR;
  PFNGLGETOBJECTPTRLABELKHRPROC
    glGetObjectPtrLabelKHR;
  PFNGLGETPOINTERVKHRPROC
    glGetPointervKHR;

  // GL_KHR_robustness
  PFNGLGETGRAPHICSRESETSTATUSPROC
    glGetGraphicsResetStatus;
  PFNGLREADNPIXELSPROC
    glReadnPixels;
  PFNGLGETNUNIFORMFVPROC
    glGetnUniformfv;
  PFNGLGETNUNIFORMIVPROC
    glGetnUniformiv;
  PFNGLGETNUNIFORMUIVPROC
    glGetnUniformuiv;
  PFNGLGETGRAPHICSRESETSTATUSKHRPROC
    glGetGraphicsResetStatusKHR;
  PFNGLREADNPIXELSKHRPROC
    glReadnPixelsKHR;
  PFNGLGETNUNIFORMFVKHRPROC
    glGetnUniformfvKHR;
  PFNGLGETNUNIFORMIVKHRPROC
    glGetnUniformivKHR;
  PFNGLGETNUNIFORMUIVKHRPROC
    glGetnUniformuivKHR;

  // GL_NV_bindless_texture
  PFNGLGETTEXTUREHANDLENVPROC
    glGetTextureHandleNV;
  PFNGLGETTEXTURESAMPLERHANDLENVPROC
    glGetTextureSamplerHandleNV;
  PFNGLMAKETEXTUREHANDLERESIDENTNVPROC
    glMakeTextureHandleResidentNV;
  PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC
    glMakeTextureHandleNonResidentNV;
  PFNGLGETIMAGEHANDLENVPROC
    glGetImageHandleNV;
  PFNGLMAKEIMAGEHANDLERESIDENTNVPROC
    glMakeImageHandleResidentNV;
  PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC
    glMakeImageHandleNonResidentNV;
  PFNGLUNIFORMHANDLEUI64NVPROC
    glUniformHandleui64NV;
  PFNGLUNIFORMHANDLEUI64VNVPROC
    glUniformHandleui64vNV;
  PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC
    glProgramUniformHandleui64NV;
  PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC
    glProgramUniformHandleui64vNV;
  PFNGLISTEXTUREHANDLERESIDENTNVPROC
    glIsTextureHandleResidentNV;
  PFNGLISIMAGEHANDLERESIDENTNVPROC
    glIsImageHandleResidentNV;

  // GL_NV_blend_equation_advanced
  PFNGLBLENDPARAMETERINVPROC
    glBlendParameteriNV;
  PFNGLBLENDBARRIERNVPROC
    glBlendBarrierNV;

  // GL_NV_conditional_render
  PFNGLBEGINCONDITIONALRENDERNVPROC
    glBeginConditionalRenderNV;
  PFNGLENDCONDITIONALRENDERNVPROC
    glEndConditionalRenderNV;

  // GL_NV_conservative_raster
  PFNGLSUBPIXELPRECISIONBIASNVPROC
    glSubpixelPrecisionBiasNV;

  // GL_NV_copy_buffer
  PFNGLCOPYBUFFERSUBDATANVPROC
    glCopyBufferSubDataNV;

  // GL_NV_coverage_sample
  PFNGLCOVERAGEMASKNVPROC
    glCoverageMaskNV;
  PFNGLCOVERAGEOPERATIONNVPROC
    glCoverageOperationNV;

  // GL_NV_draw_buffers
  PFNGLDRAWBUFFERSNVPROC
    glDrawBuffersNV;

  // GL_NV_draw_instanced
  PFNGLDRAWARRAYSINSTANCEDNVPROC
    glDrawArraysInstancedNV;
  PFNGLDRAWELEMENTSINSTANCEDNVPROC
    glDrawElementsInstancedNV;

  // GL_NV_fence
  PFNGLDELETEFENCESNVPROC
    glDeleteFencesNV;
  PFNGLGENFENCESNVPROC
    glGenFencesNV;
  PFNGLISFENCENVPROC
    glIsFenceNV;
  PFNGLTESTFENCENVPROC
    glTestFenceNV;
  PFNGLGETFENCEIVNVPROC
    glGetFenceivNV;
  PFNGLFINISHFENCENVPROC
    glFinishFenceNV;
  PFNGLSETFENCENVPROC
    glSetFenceNV;

  // GL_NV_fragment_coverage_to_color
  PFNGLFRAGMENTCOVERAGECOLORNVPROC
    glFragmentCoverageColorNV;

  // GL_NV_framebuffer_blit
  PFNGLBLITFRAMEBUFFERNVPROC
    glBlitFramebufferNV;

  // GL_NV_framebuffer_mixed_samples
  PFNGLRASTERSAMPLESEXTPROC
    glRasterSamplesEXT;
  PFNGLCOVERAGEMODULATIONTABLENVPROC
    glCoverageModulationTableNV;
  PFNGLGETCOVERAGEMODULATIONTABLENVPROC
    glGetCoverageModulationTableNV;
  PFNGLCOVERAGEMODULATIONNVPROC
    glCoverageModulationNV;

  // GL_NV_framebuffer_multisample
  PFNGLRENDERBUFFERSTORAGEMULTISAMPLENVPROC
    glRenderbufferStorageMultisampleNV;

  // GL_NV_instanced_arrays
  PFNGLVERTEXATTRIBDIVISORNVPROC
    glVertexAttribDivisorNV;

  // GL_NV_internalformat_sample_query
  PFNGLGETINTERNALFORMATSAMPLEIVNVPROC
    glGetInternalformatSampleivNV;

  // GL_NV_non_square_matrices
  PFNGLUNIFORMMATRIX2X3FVNVPROC
    glUniformMatrix2x3fvNV;
  PFNGLUNIFORMMATRIX3X2FVNVPROC
    glUniformMatrix3x2fvNV;
  PFNGLUNIFORMMATRIX2X4FVNVPROC
    glUniformMatrix2x4fvNV;
  PFNGLUNIFORMMATRIX4X2FVNVPROC
    glUniformMatrix4x2fvNV;
  PFNGLUNIFORMMATRIX3X4FVNVPROC
    glUniformMatrix3x4fvNV;
  PFNGLUNIFORMMATRIX4X3FVNVPROC
    glUniformMatrix4x3fvNV;

  // GL_NV_path_rendering
  PFNGLGENPATHSNVPROC
    glGenPathsNV;
  PFNGLDELETEPATHSNVPROC
    glDeletePathsNV;
  PFNGLISPATHNVPROC
    glIsPathNV;
  PFNGLPATHCOMMANDSNVPROC
    glPathCommandsNV;
  PFNGLPATHCOORDSNVPROC
    glPathCoordsNV;
  PFNGLPATHSUBCOMMANDSNVPROC
    glPathSubCommandsNV;
  PFNGLPATHSUBCOORDSNVPROC
    glPathSubCoordsNV;
  PFNGLPATHSTRINGNVPROC
    glPathStringNV;
  PFNGLPATHGLYPHSNVPROC
    glPathGlyphsNV;
  PFNGLPATHGLYPHRANGENVPROC
    glPathGlyphRangeNV;
  PFNGLWEIGHTPATHSNVPROC
    glWeightPathsNV;
  PFNGLCOPYPATHNVPROC
    glCopyPathNV;
  PFNGLINTERPOLATEPATHSNVPROC
    glInterpolatePathsNV;
  PFNGLTRANSFORMPATHNVPROC
    glTransformPathNV;
  PFNGLPATHPARAMETERIVNVPROC
    glPathParameterivNV;
  PFNGLPATHPARAMETERINVPROC
    glPathParameteriNV;
  PFNGLPATHPARAMETERFVNVPROC
    glPathParameterfvNV;
  PFNGLPATHPARAMETERFNVPROC
    glPathParameterfNV;
  PFNGLPATHDASHARRAYNVPROC
    glPathDashArrayNV;
  PFNGLPATHSTENCILFUNCNVPROC
    glPathStencilFuncNV;
  PFNGLPATHSTENCILDEPTHOFFSETNVPROC
    glPathStencilDepthOffsetNV;
  PFNGLSTENCILFILLPATHNVPROC
    glStencilFillPathNV;
  PFNGLSTENCILSTROKEPATHNVPROC
    glStencilStrokePathNV;
  PFNGLSTENCILFILLPATHINSTANCEDNVPROC
    glStencilFillPathInstancedNV;
  PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC
    glStencilStrokePathInstancedNV;
  PFNGLPATHCOVERDEPTHFUNCNVPROC
    glPathCoverDepthFuncNV;
  PFNGLCOVERFILLPATHNVPROC
    glCoverFillPathNV;
  PFNGLCOVERSTROKEPATHNVPROC
    glCoverStrokePathNV;
  PFNGLCOVERFILLPATHINSTANCEDNVPROC
    glCoverFillPathInstancedNV;
  PFNGLCOVERSTROKEPATHINSTANCEDNVPROC
    glCoverStrokePathInstancedNV;
  PFNGLGETPATHPARAMETERIVNVPROC
    glGetPathParameterivNV;
  PFNGLGETPATHPARAMETERFVNVPROC
    glGetPathParameterfvNV;
  PFNGLGETPATHCOMMANDSNVPROC
    glGetPathCommandsNV;
  PFNGLGETPATHCOORDSNVPROC
    glGetPathCoordsNV;
  PFNGLGETPATHDASHARRAYNVPROC
    glGetPathDashArrayNV;
  PFNGLGETPATHMETRICSNVPROC
    glGetPathMetricsNV;
  PFNGLGETPATHMETRICRANGENVPROC
    glGetPathMetricRangeNV;
  PFNGLGETPATHSPACINGNVPROC
    glGetPathSpacingNV;
  PFNGLISPOINTINFILLPATHNVPROC
    glIsPointInFillPathNV;
  PFNGLISPOINTINSTROKEPATHNVPROC
    glIsPointInStrokePathNV;
  PFNGLGETPATHLENGTHNVPROC
    glGetPathLengthNV;
  PFNGLPOINTALONGPATHNVPROC
    glPointAlongPathNV;
  PFNGLMATRIXLOAD3X2FNVPROC
    glMatrixLoad3x2fNV;
  PFNGLMATRIXLOAD3X3FNVPROC
    glMatrixLoad3x3fNV;
  PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC
    glMatrixLoadTranspose3x3fNV;
  PFNGLMATRIXMULT3X2FNVPROC
    glMatrixMult3x2fNV;
  PFNGLMATRIXMULT3X3FNVPROC
    glMatrixMult3x3fNV;
  PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC
    glMatrixMultTranspose3x3fNV;
  PFNGLSTENCILTHENCOVERFILLPATHNVPROC
    glStencilThenCoverFillPathNV;
  PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC
    glStencilThenCoverStrokePathNV;
  PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC
    glStencilThenCoverFillPathInstancedNV;
  PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC
    glStencilThenCoverStrokePathInstancedNV;
  PFNGLPATHGLYPHINDEXRANGENVPROC
    glPathGlyphIndexRangeNV;
  PFNGLPATHGLYPHINDEXARRAYNVPROC
    glPathGlyphIndexArrayNV;
  PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC
    glPathMemoryGlyphIndexArrayNV;
  PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC
    glProgramPathFragmentInputGenNV;
  PFNGLGETPROGRAMRESOURCEFVNVPROC
    glGetProgramResourcefvNV;
  PFNGLPATHCOLORGENNVPROC
    glPathColorGenNV;
  PFNGLPATHTEXGENNVPROC
    glPathTexGenNV;
  PFNGLPATHFOGGENNVPROC
    glPathFogGenNV;
  PFNGLGETPATHCOLORGENIVNVPROC
    glGetPathColorGenivNV;
  PFNGLGETPATHCOLORGENFVNVPROC
    glGetPathColorGenfvNV;
  PFNGLGETPATHTEXGENIVNVPROC
    glGetPathTexGenivNV;
  PFNGLGETPATHTEXGENFVNVPROC
    glGetPathTexGenfvNV;

  // GL_NV_polygon_mode
  PFNGLPOLYGONMODENVPROC
    glPolygonModeNV;

  // GL_NV_read_buffer
  PFNGLREADBUFFERNVPROC
    glReadBufferNV;

  // GL_NV_sample_locations
  PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC
    glFramebufferSampleLocationsfvNV;
  PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC
    glNamedFramebufferSampleLocationsfvNV;
  PFNGLRESOLVEDEPTHVALUESNVPROC
    glResolveDepthValuesNV;

  // GL_NV_viewport_array
  PFNGLVIEWPORTARRAYVNVPROC
    glViewportArrayvNV;
  PFNGLVIEWPORTINDEXEDFNVPROC
    glViewportIndexedfNV;
  PFNGLVIEWPORTINDEXEDFVNVPROC
    glViewportIndexedfvNV;
  PFNGLSCISSORARRAYVNVPROC
    glScissorArrayvNV;
  PFNGLSCISSORINDEXEDNVPROC
    glScissorIndexedNV;
  PFNGLSCISSORINDEXEDVNVPROC
    glScissorIndexedvNV;
  PFNGLDEPTHRANGEARRAYFVNVPROC
    glDepthRangeArrayfvNV;
  PFNGLDEPTHRANGEINDEXEDFNVPROC
    glDepthRangeIndexedfNV;
  PFNGLGETFLOATI_VNVPROC
    glGetFloati_vNV;
  PFNGLENABLEINVPROC
    glEnableiNV;
  PFNGLDISABLEINVPROC
    glDisableiNV;
  PFNGLISENABLEDINVPROC
    glIsEnablediNV;

  // GL_OES_EGL_image
  PFNGLEGLIMAGETARGETTEXTURE2DOESPROC
    glEGLImageTargetTexture2DOES;
  PFNGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC
    glEGLImageTargetRenderbufferStorageOES;

  // GL_OES_blend_equation_separate
  PFNGLBLENDEQUATIONSEPARATEOESPROC
    glBlendEquationSeparateOES;

  // GL_OES_blend_func_separate
  PFNGLBLENDFUNCSEPARATEOESPROC
    glBlendFuncSeparateOES;

  // GL_OES_blend_subtract
  PFNGLBLENDEQUATIONOESPROC
    glBlendEquationOES;

  // GL_OES_byte_coordinates
  PFNGLMULTITEXCOORD1BOESPROC
    glMultiTexCoord1bOES;
  PFNGLMULTITEXCOORD1BVOESPROC
    glMultiTexCoord1bvOES;
  PFNGLMULTITEXCOORD2BOESPROC
    glMultiTexCoord2bOES;
  PFNGLMULTITEXCOORD2BVOESPROC
    glMultiTexCoord2bvOES;
  PFNGLMULTITEXCOORD3BOESPROC
    glMultiTexCoord3bOES;
  PFNGLMULTITEXCOORD3BVOESPROC
    glMultiTexCoord3bvOES;
  PFNGLMULTITEXCOORD4BOESPROC
    glMultiTexCoord4bOES;
  PFNGLMULTITEXCOORD4BVOESPROC
    glMultiTexCoord4bvOES;
  PFNGLTEXCOORD1BOESPROC
    glTexCoord1bOES;
  PFNGLTEXCOORD1BVOESPROC
    glTexCoord1bvOES;
  PFNGLTEXCOORD2BOESPROC
    glTexCoord2bOES;
  PFNGLTEXCOORD2BVOESPROC
    glTexCoord2bvOES;
  PFNGLTEXCOORD3BOESPROC
    glTexCoord3bOES;
  PFNGLTEXCOORD3BVOESPROC
    glTexCoord3bvOES;
  PFNGLTEXCOORD4BOESPROC
    glTexCoord4bOES;
  PFNGLTEXCOORD4BVOESPROC
    glTexCoord4bvOES;
  PFNGLVERTEX2BOESPROC
    glVertex2bOES;
  PFNGLVERTEX2BVOESPROC
    glVertex2bvOES;
  PFNGLVERTEX3BOESPROC
    glVertex3bOES;
  PFNGLVERTEX3BVOESPROC
    glVertex3bvOES;
  PFNGLVERTEX4BOESPROC
    glVertex4bOES;
  PFNGLVERTEX4BVOESPROC
    glVertex4bvOES;

  // GL_OES_copy_image
  PFNGLCOPYIMAGESUBDATAOESPROC
    glCopyImageSubDataOES;

  // GL_OES_draw_buffers_indexed
  PFNGLENABLEIOESPROC
    glEnableiOES;
  PFNGLDISABLEIOESPROC
    glDisableiOES;
  PFNGLBLENDEQUATIONIOESPROC
    glBlendEquationiOES;
  PFNGLBLENDEQUATIONSEPARATEIOESPROC
    glBlendEquationSeparateiOES;
  PFNGLBLENDFUNCIOESPROC
    glBlendFunciOES;
  PFNGLBLENDFUNCSEPARATEIOESPROC
    glBlendFuncSeparateiOES;
  PFNGLCOLORMASKIOESPROC
    glColorMaskiOES;
  PFNGLISENABLEDIOESPROC
    glIsEnablediOES;

  // GL_OES_draw_elements_base_vertex
  PFNGLDRAWELEMENTSBASEVERTEXOESPROC
    glDrawElementsBaseVertexOES;
  PFNGLDRAWRANGEELEMENTSBASEVERTEXOESPROC
    glDrawRangeElementsBaseVertexOES;
  PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC
    glDrawElementsInstancedBaseVertexOES;
  PFNGLMULTIDRAWELEMENTSBASEVERTEXOESPROC
    glMultiDrawElementsBaseVertexOES;

  // GL_OES_draw_texture
  PFNGLDRAWTEXSOESPROC
    glDrawTexsOES;
  PFNGLDRAWTEXIOESPROC
    glDrawTexiOES;
  PFNGLDRAWTEXXOESPROC
    glDrawTexxOES;
  PFNGLDRAWTEXSVOESPROC
    glDrawTexsvOES;
  PFNGLDRAWTEXIVOESPROC
    glDrawTexivOES;
  PFNGLDRAWTEXXVOESPROC
    glDrawTexxvOES;
  PFNGLDRAWTEXFOESPROC
    glDrawTexfOES;
  PFNGLDRAWTEXFVOESPROC
    glDrawTexfvOES;

  // GL_OES_fixed_point
  PFNGLALPHAFUNCXOESPROC
    glAlphaFuncxOES;
  PFNGLCLEARCOLORXOESPROC
    glClearColorxOES;
  PFNGLCLEARDEPTHXOESPROC
    glClearDepthxOES;
  PFNGLCLIPPLANEXOESPROC
    glClipPlanexOES;
  PFNGLCOLOR4XOESPROC
    glColor4xOES;
  PFNGLDEPTHRANGEXOESPROC
    glDepthRangexOES;
  PFNGLFOGXOESPROC
    glFogxOES;
  PFNGLFOGXVOESPROC
    glFogxvOES;
  PFNGLFRUSTUMXOESPROC
    glFrustumxOES;
  PFNGLGETCLIPPLANEXOESPROC
    glGetClipPlanexOES;
  PFNGLGETFIXEDVOESPROC
    glGetFixedvOES;
  PFNGLGETTEXENVXVOESPROC
    glGetTexEnvxvOES;
  PFNGLGETTEXPARAMETERXVOESPROC
    glGetTexParameterxvOES;
  PFNGLLIGHTMODELXOESPROC
    glLightModelxOES;
  PFNGLLIGHTMODELXVOESPROC
    glLightModelxvOES;
  PFNGLLIGHTXOESPROC
    glLightxOES;
  PFNGLLIGHTXVOESPROC
    glLightxvOES;
  PFNGLLINEWIDTHXOESPROC
    glLineWidthxOES;
  PFNGLLOADMATRIXXOESPROC
    glLoadMatrixxOES;
  PFNGLMATERIALXOESPROC
    glMaterialxOES;
  PFNGLMATERIALXVOESPROC
    glMaterialxvOES;
  PFNGLMULTMATRIXXOESPROC
    glMultMatrixxOES;
  PFNGLMULTITEXCOORD4XOESPROC
    glMultiTexCoord4xOES;
  PFNGLNORMAL3XOESPROC
    glNormal3xOES;
  PFNGLORTHOXOESPROC
    glOrthoxOES;
  PFNGLPOINTPARAMETERXVOESPROC
    glPointParameterxvOES;
  PFNGLPOINTSIZEXOESPROC
    glPointSizexOES;
  PFNGLPOLYGONOFFSETXOESPROC
    glPolygonOffsetxOES;
  PFNGLROTATEXOESPROC
    glRotatexOES;
  PFNGLSCALEXOESPROC
    glScalexOES;
  PFNGLTEXENVXOESPROC
    glTexEnvxOES;
  PFNGLTEXENVXVOESPROC
    glTexEnvxvOES;
  PFNGLTEXPARAMETERXOESPROC
    glTexParameterxOES;
  PFNGLTEXPARAMETERXVOESPROC
    glTexParameterxvOES;
  PFNGLTRANSLATEXOESPROC
    glTranslatexOES;
  PFNGLGETLIGHTXVOESPROC
    glGetLightxvOES;
  PFNGLGETMATERIALXVOESPROC
    glGetMaterialxvOES;
  PFNGLPOINTPARAMETERXOESPROC
    glPointParameterxOES;
  PFNGLSAMPLECOVERAGEXOESPROC
    glSampleCoveragexOES;
  PFNGLACCUMXOESPROC
    glAccumxOES;
  PFNGLBITMAPXOESPROC
    glBitmapxOES;
  PFNGLBLENDCOLORXOESPROC
    glBlendColorxOES;
  PFNGLCLEARACCUMXOESPROC
    glClearAccumxOES;
  PFNGLCOLOR3XOESPROC
    glColor3xOES;
  PFNGLCOLOR3XVOESPROC
    glColor3xvOES;
  PFNGLCOLOR4XVOESPROC
    glColor4xvOES;
  PFNGLCONVOLUTIONPARAMETERXOESPROC
    glConvolutionParameterxOES;
  PFNGLCONVOLUTIONPARAMETERXVOESPROC
    glConvolutionParameterxvOES;
  PFNGLEVALCOORD1XOESPROC
    glEvalCoord1xOES;
  PFNGLEVALCOORD1XVOESPROC
    glEvalCoord1xvOES;
  PFNGLEVALCOORD2XOESPROC
    glEvalCoord2xOES;
  PFNGLEVALCOORD2XVOESPROC
    glEvalCoord2xvOES;
  PFNGLFEEDBACKBUFFERXOESPROC
    glFeedbackBufferxOES;
  PFNGLGETCONVOLUTIONPARAMETERXVOESPROC
    glGetConvolutionParameterxvOES;
  PFNGLGETHISTOGRAMPARAMETERXVOESPROC
    glGetHistogramParameterxvOES;
  PFNGLGETLIGHTXOESPROC
    glGetLightxOES;
  PFNGLGETMAPXVOESPROC
    glGetMapxvOES;
  PFNGLGETMATERIALXOESPROC
    glGetMaterialxOES;
  PFNGLGETPIXELMAPXVPROC
    glGetPixelMapxv;
  PFNGLGETTEXGENXVOESPROC
    glGetTexGenxvOES;
  PFNGLGETTEXLEVELPARAMETERXVOESPROC
    glGetTexLevelParameterxvOES;
  PFNGLINDEXXOESPROC
    glIndexxOES;
  PFNGLINDEXXVOESPROC
    glIndexxvOES;
  PFNGLLOADTRANSPOSEMATRIXXOESPROC
    glLoadTransposeMatrixxOES;
  PFNGLMAP1XOESPROC
    glMap1xOES;
  PFNGLMAP2XOESPROC
    glMap2xOES;
  PFNGLMAPGRID1XOESPROC
    glMapGrid1xOES;
  PFNGLMAPGRID2XOESPROC
    glMapGrid2xOES;
  PFNGLMULTTRANSPOSEMATRIXXOESPROC
    glMultTransposeMatrixxOES;
  PFNGLMULTITEXCOORD1XOESPROC
    glMultiTexCoord1xOES;
  PFNGLMULTITEXCOORD1XVOESPROC
    glMultiTexCoord1xvOES;
  PFNGLMULTITEXCOORD2XOESPROC
    glMultiTexCoord2xOES;
  PFNGLMULTITEXCOORD2XVOESPROC
    glMultiTexCoord2xvOES;
  PFNGLMULTITEXCOORD3XOESPROC
    glMultiTexCoord3xOES;
  PFNGLMULTITEXCOORD3XVOESPROC
    glMultiTexCoord3xvOES;
  PFNGLMULTITEXCOORD4XVOESPROC
    glMultiTexCoord4xvOES;
  PFNGLNORMAL3XVOESPROC
    glNormal3xvOES;
  PFNGLPASSTHROUGHXOESPROC
    glPassThroughxOES;
  PFNGLPIXELMAPXPROC
    glPixelMapx;
  PFNGLPIXELSTOREXPROC
    glPixelStorex;
  PFNGLPIXELTRANSFERXOESPROC
    glPixelTransferxOES;
  PFNGLPIXELZOOMXOESPROC
    glPixelZoomxOES;
  PFNGLPRIORITIZETEXTURESXOESPROC
    glPrioritizeTexturesxOES;
  PFNGLRASTERPOS2XOESPROC
    glRasterPos2xOES;
  PFNGLRASTERPOS2XVOESPROC
    glRasterPos2xvOES;
  PFNGLRASTERPOS3XOESPROC
    glRasterPos3xOES;
  PFNGLRASTERPOS3XVOESPROC
    glRasterPos3xvOES;
  PFNGLRASTERPOS4XOESPROC
    glRasterPos4xOES;
  PFNGLRASTERPOS4XVOESPROC
    glRasterPos4xvOES;
  PFNGLRECTXOESPROC
    glRectxOES;
  PFNGLRECTXVOESPROC
    glRectxvOES;
  PFNGLTEXCOORD1XOESPROC
    glTexCoord1xOES;
  PFNGLTEXCOORD1XVOESPROC
    glTexCoord1xvOES;
  PFNGLTEXCOORD2XOESPROC
    glTexCoord2xOES;
  PFNGLTEXCOORD2XVOESPROC
    glTexCoord2xvOES;
  PFNGLTEXCOORD3XOESPROC
    glTexCoord3xOES;
  PFNGLTEXCOORD3XVOESPROC
    glTexCoord3xvOES;
  PFNGLTEXCOORD4XOESPROC
    glTexCoord4xOES;
  PFNGLTEXCOORD4XVOESPROC
    glTexCoord4xvOES;
  PFNGLTEXGENXOESPROC
    glTexGenxOES;
  PFNGLTEXGENXVOESPROC
    glTexGenxvOES;
  PFNGLVERTEX2XOESPROC
    glVertex2xOES;
  PFNGLVERTEX2XVOESPROC
    glVertex2xvOES;
  PFNGLVERTEX3XOESPROC
    glVertex3xOES;
  PFNGLVERTEX3XVOESPROC
    glVertex3xvOES;
  PFNGLVERTEX4XOESPROC
    glVertex4xOES;
  PFNGLVERTEX4XVOESPROC
    glVertex4xvOES;

  // GL_OES_framebuffer_object
  PFNGLISRENDERBUFFEROESPROC
    glIsRenderbufferOES;
  PFNGLBINDRENDERBUFFEROESPROC
    glBindRenderbufferOES;
  PFNGLDELETERENDERBUFFERSOESPROC
    glDeleteRenderbuffersOES;
  PFNGLGENRENDERBUFFERSOESPROC
    glGenRenderbuffersOES;
  PFNGLRENDERBUFFERSTORAGEOESPROC
    glRenderbufferStorageOES;
  PFNGLGETRENDERBUFFERPARAMETERIVOESPROC
    glGetRenderbufferParameterivOES;
  PFNGLISFRAMEBUFFEROESPROC
    glIsFramebufferOES;
  PFNGLBINDFRAMEBUFFEROESPROC
    glBindFramebufferOES;
  PFNGLDELETEFRAMEBUFFERSOESPROC
    glDeleteFramebuffersOES;
  PFNGLGENFRAMEBUFFERSOESPROC
    glGenFramebuffersOES;
  PFNGLCHECKFRAMEBUFFERSTATUSOESPROC
    glCheckFramebufferStatusOES;
  PFNGLFRAMEBUFFERRENDERBUFFEROESPROC
    glFramebufferRenderbufferOES;
  PFNGLFRAMEBUFFERTEXTURE2DOESPROC
    glFramebufferTexture2DOES;
  PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVOESPROC
    glGetFramebufferAttachmentParameterivOES;
  PFNGLGENERATEMIPMAPOESPROC
    glGenerateMipmapOES;

  // GL_OES_geometry_shader
  PFNGLFRAMEBUFFERTEXTUREOESPROC
    glFramebufferTextureOES;

  // GL_OES_get_program_binary
  PFNGLGETPROGRAMBINARYOESPROC
    glGetProgramBinaryOES;
  PFNGLPROGRAMBINARYOESPROC
    glProgramBinaryOES;

  // GL_OES_mapbuffer
  PFNGLMAPBUFFEROESPROC
    glMapBufferOES;
  PFNGLUNMAPBUFFEROESPROC
    glUnmapBufferOES;
  PFNGLGETBUFFERPOINTERVOESPROC
    glGetBufferPointervOES;

  // GL_OES_matrix_palette
  PFNGLCURRENTPALETTEMATRIXOESPROC
    glCurrentPaletteMatrixOES;
  PFNGLLOADPALETTEFROMMODELVIEWMATRIXOESPROC
    glLoadPaletteFromModelViewMatrixOES;
  PFNGLMATRIXINDEXPOINTEROESPROC
    glMatrixIndexPointerOES;
  PFNGLWEIGHTPOINTEROESPROC
    glWeightPointerOES;

  // GL_OES_point_size_array
  PFNGLPOINTSIZEPOINTEROESPROC
    glPointSizePointerOES;

  // GL_OES_primitive_bounding_box
  PFNGLPRIMITIVEBOUNDINGBOXOESPROC
    glPrimitiveBoundingBoxOES;

  // GL_OES_query_matrix
  PFNGLQUERYMATRIXXOESPROC
    glQueryMatrixxOES;

  // GL_OES_sample_shading
  PFNGLMINSAMPLESHADINGOESPROC
    glMinSampleShadingOES;

  // GL_OES_single_precision
  PFNGLCLEARDEPTHFOESPROC
    glClearDepthfOES;
  PFNGLCLIPPLANEFOESPROC
    glClipPlanefOES;
  PFNGLDEPTHRANGEFOESPROC
    glDepthRangefOES;
  PFNGLFRUSTUMFOESPROC
    glFrustumfOES;
  PFNGLGETCLIPPLANEFOESPROC
    glGetClipPlanefOES;
  PFNGLORTHOFOESPROC
    glOrthofOES;

  // GL_OES_tessellation_shader
  PFNGLPATCHPARAMETERIOESPROC
    glPatchParameteriOES;

  // GL_OES_texture_3D
  PFNGLTEXIMAGE3DOESPROC
    glTexImage3DOES;
  PFNGLTEXSUBIMAGE3DOESPROC
    glTexSubImage3DOES;
  PFNGLCOPYTEXSUBIMAGE3DOESPROC
    glCopyTexSubImage3DOES;
  PFNGLCOMPRESSEDTEXIMAGE3DOESPROC
    glCompressedTexImage3DOES;
  PFNGLCOMPRESSEDTEXSUBIMAGE3DOESPROC
    glCompressedTexSubImage3DOES;
  PFNGLFRAMEBUFFERTEXTURE3DOESPROC
    glFramebufferTexture3DOES;

  // GL_OES_texture_border_clamp
  PFNGLTEXPARAMETERIIVOESPROC
    glTexParameterIivOES;
  PFNGLTEXPARAMETERIUIVOESPROC
    glTexParameterIuivOES;
  PFNGLGETTEXPARAMETERIIVOESPROC
    glGetTexParameterIivOES;
  PFNGLGETTEXPARAMETERIUIVOESPROC
    glGetTexParameterIuivOES;
  PFNGLSAMPLERPARAMETERIIVOESPROC
    glSamplerParameterIivOES;
  PFNGLSAMPLERPARAMETERIUIVOESPROC
    glSamplerParameterIuivOES;
  PFNGLGETSAMPLERPARAMETERIIVOESPROC
    glGetSamplerParameterIivOES;
  PFNGLGETSAMPLERPARAMETERIUIVOESPROC
    glGetSamplerParameterIuivOES;

  // GL_OES_texture_buffer
  PFNGLTEXBUFFEROESPROC
    glTexBufferOES;
  PFNGLTEXBUFFERRANGEOESPROC
    glTexBufferRangeOES;

  // GL_OES_texture_cube_map
  PFNGLTEXGENFOESPROC
    glTexGenfOES;
  PFNGLTEXGENFVOESPROC
    glTexGenfvOES;
  PFNGLTEXGENIOESPROC
    glTexGeniOES;
  PFNGLTEXGENIVOESPROC
    glTexGenivOES;
  PFNGLTEXGENXOESPROC
    glTexGenxOES;
  PFNGLTEXGENXVOESPROC
    glTexGenxvOES;
  PFNGLGETTEXGENFVOESPROC
    glGetTexGenfvOES;
  PFNGLGETTEXGENIVOESPROC
    glGetTexGenivOES;
  PFNGLGETTEXGENXVOESPROC
    glGetTexGenxvOES;

  // GL_OES_texture_storage_multisample_2d_array
  PFNGLTEXSTORAGE3DMULTISAMPLEOESPROC
    glTexStorage3DMultisampleOES;

  // GL_OES_texture_view
  PFNGLTEXTUREVIEWOESPROC
    glTextureViewOES;

  // GL_OES_vertex_array_object
  PFNGLBINDVERTEXARRAYOESPROC
    glBindVertexArrayOES;
  PFNGLDELETEVERTEXARRAYSOESPROC
    glDeleteVertexArraysOES;
  PFNGLGENVERTEXARRAYSOESPROC
    glGenVertexArraysOES;
  PFNGLISVERTEXARRAYOESPROC
    glIsVertexArrayOES;

  // GL_OVR_multiview
  PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC
    glFramebufferTextureMultiviewOVR;

  // GL_QCOM_alpha_test
  PFNGLALPHAFUNCQCOMPROC
    glAlphaFuncQCOM;

  // GL_QCOM_driver_control
  PFNGLGETDRIVERCONTROLSQCOMPROC
    glGetDriverControlsQCOM;
  PFNGLGETDRIVERCONTROLSTRINGQCOMPROC
    glGetDriverControlStringQCOM;
  PFNGLENABLEDRIVERCONTROLQCOMPROC
    glEnableDriverControlQCOM;
  PFNGLDISABLEDRIVERCONTROLQCOMPROC
    glDisableDriverControlQCOM;

  // GL_QCOM_extended_get
  PFNGLEXTGETTEXTURESQCOMPROC
    glExtGetTexturesQCOM;
  PFNGLEXTGETBUFFERSQCOMPROC
    glExtGetBuffersQCOM;
  PFNGLEXTGETRENDERBUFFERSQCOMPROC
    glExtGetRenderbuffersQCOM;
  PFNGLEXTGETFRAMEBUFFERSQCOMPROC
    glExtGetFramebuffersQCOM;
  PFNGLEXTGETTEXLEVELPARAMETERIVQCOMPROC
    glExtGetTexLevelParameterivQCOM;
  PFNGLEXTTEXOBJECTSTATEOVERRIDEIQCOMPROC
    glExtTexObjectStateOverrideiQCOM;
  PFNGLEXTGETTEXSUBIMAGEQCOMPROC
    glExtGetTexSubImageQCOM;
  PFNGLEXTGETBUFFERPOINTERVQCOMPROC
    glExtGetBufferPointervQCOM;

  // GL_QCOM_extended_get2
  PFNGLEXTGETSHADERSQCOMPROC
    glExtGetShadersQCOM;
  PFNGLEXTGETPROGRAMSQCOMPROC
    glExtGetProgramsQCOM;
  PFNGLEXTISPROGRAMBINARYQCOMPROC
    glExtIsProgramBinaryQCOM;
  PFNGLEXTGETPROGRAMBINARYSOURCEQCOMPROC
    glExtGetProgramBinarySourceQCOM;

  // GL_QCOM_tiled_rendering
  PFNGLSTARTTILINGQCOMPROC
    glStartTilingQCOM;
  PFNGLENDTILINGQCOMPROC
    glEndTilingQCOM;
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLESBoolean gleswQueryCapabilities (GLESCapabilities *capabilities);

const GLESCapabilities *gleswGetCapabilities ();

GLESBoolean gleswSetCapabilities (const GLESCapabilities *capabilities);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glAccum __glAccum
#define glAccumxOES __glAccumxOES
#define glActiveProgramEXT __glActiveProgramEXT
#define glActiveShaderProgram __glActiveShaderProgram
#define glActiveShaderProgramEXT __glActiveShaderProgramEXT
#define glActiveStencilFaceEXT __glActiveStencilFaceEXT
#define glActiveTexture __glActiveTexture
#define glActiveTextureARB __glActiveTextureARB
#define glActiveVaryingNV __glActiveVaryingNV
#define glAlphaFragmentOp1ATI __glAlphaFragmentOp1ATI
#define glAlphaFragmentOp2ATI __glAlphaFragmentOp2ATI
#define glAlphaFragmentOp3ATI __glAlphaFragmentOp3ATI
#define glAlphaFunc __glAlphaFunc
#define glAlphaFuncQCOM __glAlphaFuncQCOM
#define glAlphaFuncx __glAlphaFuncx
#define glAlphaFuncxOES __glAlphaFuncxOES
#define glApplyTextureEXT __glApplyTextureEXT
#define glAreProgramsResidentNV __glAreProgramsResidentNV
#define glAreTexturesResident __glAreTexturesResident
#define glAreTexturesResidentEXT __glAreTexturesResidentEXT
#define glArrayElement __glArrayElement
#define glArrayElementEXT __glArrayElementEXT
#define glArrayObjectATI __glArrayObjectATI
#define glAsyncMarkerSGIX __glAsyncMarkerSGIX
#define glAttachObjectARB __glAttachObjectARB
#define glAttachShader __glAttachShader
#define glBegin __glBegin
#define glBeginConditionalRender __glBeginConditionalRender
#define glBeginConditionalRenderNV __glBeginConditionalRenderNV
#define glBeginConditionalRenderNVX __glBeginConditionalRenderNVX
#define glBeginFragmentShaderATI __glBeginFragmentShaderATI
#define glBeginOcclusionQueryNV __glBeginOcclusionQueryNV
#define glBeginPerfMonitorAMD __glBeginPerfMonitorAMD
#define glBeginPerfQueryINTEL __glBeginPerfQueryINTEL
#define glBeginQuery __glBeginQuery
#define glBeginQueryARB __glBeginQueryARB
#define glBeginQueryEXT __glBeginQueryEXT
#define glBeginQueryIndexed __glBeginQueryIndexed
#define glBeginTransformFeedback __glBeginTransformFeedback
#define glBeginTransformFeedbackEXT __glBeginTransformFeedbackEXT
#define glBeginTransformFeedbackNV __glBeginTransformFeedbackNV
#define glBeginVertexShaderEXT __glBeginVertexShaderEXT
#define glBeginVideoCaptureNV __glBeginVideoCaptureNV
#define glBindAttribLocation __glBindAttribLocation
#define glBindAttribLocationARB __glBindAttribLocationARB
#define glBindBuffer __glBindBuffer
#define glBindBufferARB __glBindBufferARB
#define glBindBufferBase __glBindBufferBase
#define glBindBufferBaseEXT __glBindBufferBaseEXT
#define glBindBufferBaseNV __glBindBufferBaseNV
#define glBindBufferOffsetEXT __glBindBufferOffsetEXT
#define glBindBufferOffsetNV __glBindBufferOffsetNV
#define glBindBufferRange __glBindBufferRange
#define glBindBufferRangeEXT __glBindBufferRangeEXT
#define glBindBufferRangeNV __glBindBufferRangeNV
#define glBindBuffersBase __glBindBuffersBase
#define glBindBuffersRange __glBindBuffersRange
#define glBindFragDataLocation __glBindFragDataLocation
#define glBindFragDataLocationEXT __glBindFragDataLocationEXT
#define glBindFragDataLocationIndexed __glBindFragDataLocationIndexed
#define glBindFragmentShaderATI __glBindFragmentShaderATI
#define glBindFramebuffer __glBindFramebuffer
#define glBindFramebufferEXT __glBindFramebufferEXT
#define glBindFramebufferOES __glBindFramebufferOES
#define glBindImageTexture __glBindImageTexture
#define glBindImageTextureEXT __glBindImageTextureEXT
#define glBindImageTextures __glBindImageTextures
#define glBindLightParameterEXT __glBindLightParameterEXT
#define glBindMaterialParameterEXT __glBindMaterialParameterEXT
#define glBindMultiTextureEXT __glBindMultiTextureEXT
#define glBindParameterEXT __glBindParameterEXT
#define glBindProgramARB __glBindProgramARB
#define glBindProgramNV __glBindProgramNV
#define glBindProgramPipeline __glBindProgramPipeline
#define glBindProgramPipelineEXT __glBindProgramPipelineEXT
#define glBindRenderbuffer __glBindRenderbuffer
#define glBindRenderbufferEXT __glBindRenderbufferEXT
#define glBindRenderbufferOES __glBindRenderbufferOES
#define glBindSampler __glBindSampler
#define glBindSamplers __glBindSamplers
#define glBindTexGenParameterEXT __glBindTexGenParameterEXT
#define glBindTexture __glBindTexture
#define glBindTextureEXT __glBindTextureEXT
#define glBindTextureUnit __glBindTextureUnit
#define glBindTextureUnitParameterEXT __glBindTextureUnitParameterEXT
#define glBindTextures __glBindTextures
#define glBindTransformFeedback __glBindTransformFeedback
#define glBindTransformFeedbackNV __glBindTransformFeedbackNV
#define glBindVertexArray __glBindVertexArray
#define glBindVertexArrayAPPLE __glBindVertexArrayAPPLE
#define glBindVertexArrayOES __glBindVertexArrayOES
#define glBindVertexBuffer __glBindVertexBuffer
#define glBindVertexBuffers __glBindVertexBuffers
#define glBindVertexShaderEXT __glBindVertexShaderEXT
#define glBindVideoCaptureStreamBufferNV __glBindVideoCaptureStreamBufferNV
#define glBindVideoCaptureStreamTextureNV __glBindVideoCaptureStreamTextureNV
#define glBinormal3bEXT __glBinormal3bEXT
#define glBinormal3bvEXT __glBinormal3bvEXT
#define glBinormal3dEXT __glBinormal3dEXT
#define glBinormal3dvEXT __glBinormal3dvEXT
#define glBinormal3fEXT __glBinormal3fEXT
#define glBinormal3fvEXT __glBinormal3fvEXT
#define glBinormal3iEXT __glBinormal3iEXT
#define glBinormal3ivEXT __glBinormal3ivEXT
#define glBinormal3sEXT __glBinormal3sEXT
#define glBinormal3svEXT __glBinormal3svEXT
#define glBinormalPointerEXT __glBinormalPointerEXT
#define glBitmap __glBitmap
#define glBitmapxOES __glBitmapxOES
#define glBlendBarrierKHR __glBlendBarrierKHR
#define glBlendBarrierNV __glBlendBarrierNV
#define glBlendColor __glBlendColor
#define glBlendColorEXT __glBlendColorEXT
#define glBlendColorxOES __glBlendColorxOES
#define glBlendEquation __glBlendEquation
#define glBlendEquationEXT __glBlendEquationEXT
#define glBlendEquationIndexedAMD __glBlendEquationIndexedAMD
#define glBlendEquationOES __glBlendEquationOES
#define glBlendEquationSeparate __glBlendEquationSeparate
#define glBlendEquationSeparateEXT __glBlendEquationSeparateEXT
#define glBlendEquationSeparateIndexedAMD __glBlendEquationSeparateIndexedAMD
#define glBlendEquationSeparateOES __glBlendEquationSeparateOES
#define glBlendEquationSeparatei __glBlendEquationSeparatei
#define glBlendEquationSeparateiARB __glBlendEquationSeparateiARB
#define glBlendEquationSeparateiEXT __glBlendEquationSeparateiEXT
#define glBlendEquationSeparateiOES __glBlendEquationSeparateiOES
#define glBlendEquationi __glBlendEquationi
#define glBlendEquationiARB __glBlendEquationiARB
#define glBlendEquationiEXT __glBlendEquationiEXT
#define glBlendEquationiOES __glBlendEquationiOES
#define glBlendFunc __glBlendFunc
#define glBlendFuncIndexedAMD __glBlendFuncIndexedAMD
#define glBlendFuncSeparate __glBlendFuncSeparate
#define glBlendFuncSeparateEXT __glBlendFuncSeparateEXT
#define glBlendFuncSeparateINGR __glBlendFuncSeparateINGR
#define glBlendFuncSeparateIndexedAMD __glBlendFuncSeparateIndexedAMD
#define glBlendFuncSeparateOES __glBlendFuncSeparateOES
#define glBlendFuncSeparatei __glBlendFuncSeparatei
#define glBlendFuncSeparateiARB __glBlendFuncSeparateiARB
#define glBlendFuncSeparateiEXT __glBlendFuncSeparateiEXT
#define glBlendFuncSeparateiOES __glBlendFuncSeparateiOES
#define glBlendFunci __glBlendFunci
#define glBlendFunciARB __glBlendFunciARB
#define glBlendFunciEXT __glBlendFunciEXT
#define glBlendFunciOES __glBlendFunciOES
#define glBlendParameteriNV __glBlendParameteriNV
#define glBlitFramebuffer __glBlitFramebuffer
#define glBlitFramebufferANGLE __glBlitFramebufferANGLE
#define glBlitFramebufferEXT __glBlitFramebufferEXT
#define glBlitFramebufferNV __glBlitFramebufferNV
#define glBlitNamedFramebuffer __glBlitNamedFramebuffer
#define glBufferAddressRangeNV __glBufferAddressRangeNV
#define glBufferData __glBufferData
#define glBufferDataARB __glBufferDataARB
#define glBufferPageCommitmentARB __glBufferPageCommitmentARB
#define glBufferParameteriAPPLE __glBufferParameteriAPPLE
#define glBufferStorage __glBufferStorage
#define glBufferStorageEXT __glBufferStorageEXT
#define glBufferSubData __glBufferSubData
#define glBufferSubDataARB __glBufferSubDataARB
#define glCallCommandListNV __glCallCommandListNV
#define glCallList __glCallList
#define glCallLists __glCallLists
#define glCheckFramebufferStatus __glCheckFramebufferStatus
#define glCheckFramebufferStatusEXT __glCheckFramebufferStatusEXT
#define glCheckFramebufferStatusOES __glCheckFramebufferStatusOES
#define glCheckNamedFramebufferStatus __glCheckNamedFramebufferStatus
#define glCheckNamedFramebufferStatusEXT __glCheckNamedFramebufferStatusEXT
#define glClampColor __glClampColor
#define glClampColorARB __glClampColorARB
#define glClear __glClear
#define glClearAccum __glClearAccum
#define glClearAccumxOES __glClearAccumxOES
#define glClearBufferData __glClearBufferData
#define glClearBufferSubData __glClearBufferSubData
#define glClearBufferfi __glClearBufferfi
#define glClearBufferfv __glClearBufferfv
#define glClearBufferiv __glClearBufferiv
#define glClearBufferuiv __glClearBufferuiv
#define glClearColor __glClearColor
#define glClearColorIiEXT __glClearColorIiEXT
#define glClearColorIuiEXT __glClearColorIuiEXT
#define glClearColorx __glClearColorx
#define glClearColorxOES __glClearColorxOES
#define glClearDepth __glClearDepth
#define glClearDepthdNV __glClearDepthdNV
#define glClearDepthf __glClearDepthf
#define glClearDepthfOES __glClearDepthfOES
#define glClearDepthx __glClearDepthx
#define glClearDepthxOES __glClearDepthxOES
#define glClearIndex __glClearIndex
#define glClearNamedBufferData __glClearNamedBufferData
#define glClearNamedBufferDataEXT __glClearNamedBufferDataEXT
#define glClearNamedBufferSubData __glClearNamedBufferSubData
#define glClearNamedBufferSubDataEXT __glClearNamedBufferSubDataEXT
#define glClearNamedFramebufferfi __glClearNamedFramebufferfi
#define glClearNamedFramebufferfv __glClearNamedFramebufferfv
#define glClearNamedFramebufferiv __glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv __glClearNamedFramebufferuiv
#define glClearStencil __glClearStencil
#define glClearTexImage __glClearTexImage
#define glClearTexSubImage __glClearTexSubImage
#define glClientActiveTexture __glClientActiveTexture
#define glClientActiveTextureARB __glClientActiveTextureARB
#define glClientActiveVertexStreamATI __glClientActiveVertexStreamATI
#define glClientAttribDefaultEXT __glClientAttribDefaultEXT
#define glClientWaitSync __glClientWaitSync
#define glClientWaitSyncAPPLE __glClientWaitSyncAPPLE
#define glClipControl __glClipControl
#define glClipPlane __glClipPlane
#define glClipPlanef __glClipPlanef
#define glClipPlanefIMG __glClipPlanefIMG
#define glClipPlanefOES __glClipPlanefOES
#define glClipPlanex __glClipPlanex
#define glClipPlanexIMG __glClipPlanexIMG
#define glClipPlanexOES __glClipPlanexOES
#define glColor3b __glColor3b
#define glColor3bv __glColor3bv
#define glColor3d __glColor3d
#define glColor3dv __glColor3dv
#define glColor3f __glColor3f
#define glColor3fVertex3fSUN __glColor3fVertex3fSUN
#define glColor3fVertex3fvSUN __glColor3fVertex3fvSUN
#define glColor3fv __glColor3fv
#define glColor3hNV __glColor3hNV
#define glColor3hvNV __glColor3hvNV
#define glColor3i __glColor3i
#define glColor3iv __glColor3iv
#define glColor3s __glColor3s
#define glColor3sv __glColor3sv
#define glColor3ub __glColor3ub
#define glColor3ubv __glColor3ubv
#define glColor3ui __glColor3ui
#define glColor3uiv __glColor3uiv
#define glColor3us __glColor3us
#define glColor3usv __glColor3usv
#define glColor3xOES __glColor3xOES
#define glColor3xvOES __glColor3xvOES
#define glColor4b __glColor4b
#define glColor4bv __glColor4bv
#define glColor4d __glColor4d
#define glColor4dv __glColor4dv
#define glColor4f __glColor4f
#define glColor4fNormal3fVertex3fSUN __glColor4fNormal3fVertex3fSUN
#define glColor4fNormal3fVertex3fvSUN __glColor4fNormal3fVertex3fvSUN
#define glColor4fv __glColor4fv
#define glColor4hNV __glColor4hNV
#define glColor4hvNV __glColor4hvNV
#define glColor4i __glColor4i
#define glColor4iv __glColor4iv
#define glColor4s __glColor4s
#define glColor4sv __glColor4sv
#define glColor4ub __glColor4ub
#define glColor4ubVertex2fSUN __glColor4ubVertex2fSUN
#define glColor4ubVertex2fvSUN __glColor4ubVertex2fvSUN
#define glColor4ubVertex3fSUN __glColor4ubVertex3fSUN
#define glColor4ubVertex3fvSUN __glColor4ubVertex3fvSUN
#define glColor4ubv __glColor4ubv
#define glColor4ui __glColor4ui
#define glColor4uiv __glColor4uiv
#define glColor4us __glColor4us
#define glColor4usv __glColor4usv
#define glColor4x __glColor4x
#define glColor4xOES __glColor4xOES
#define glColor4xvOES __glColor4xvOES
#define glColorFormatNV __glColorFormatNV
#define glColorFragmentOp1ATI __glColorFragmentOp1ATI
#define glColorFragmentOp2ATI __glColorFragmentOp2ATI
#define glColorFragmentOp3ATI __glColorFragmentOp3ATI
#define glColorMask __glColorMask
#define glColorMaskIndexedEXT __glColorMaskIndexedEXT
#define glColorMaski __glColorMaski
#define glColorMaskiEXT __glColorMaskiEXT
#define glColorMaskiOES __glColorMaskiOES
#define glColorMaterial __glColorMaterial
#define glColorP3ui __glColorP3ui
#define glColorP3uiv __glColorP3uiv
#define glColorP4ui __glColorP4ui
#define glColorP4uiv __glColorP4uiv
#define glColorPointer __glColorPointer
#define glColorPointerEXT __glColorPointerEXT
#define glColorPointerListIBM __glColorPointerListIBM
#define glColorPointervINTEL __glColorPointervINTEL
#define glColorSubTable __glColorSubTable
#define glColorSubTableEXT __glColorSubTableEXT
#define glColorTable __glColorTable
#define glColorTableEXT __glColorTableEXT
#define glColorTableParameterfv __glColorTableParameterfv
#define glColorTableParameterfvSGI __glColorTableParameterfvSGI
#define glColorTableParameteriv __glColorTableParameteriv
#define glColorTableParameterivSGI __glColorTableParameterivSGI
#define glColorTableSGI __glColorTableSGI
#define glCombinerInputNV __glCombinerInputNV
#define glCombinerOutputNV __glCombinerOutputNV
#define glCombinerParameterfNV __glCombinerParameterfNV
#define glCombinerParameterfvNV __glCombinerParameterfvNV
#define glCombinerParameteriNV __glCombinerParameteriNV
#define glCombinerParameterivNV __glCombinerParameterivNV
#define glCombinerStageParameterfvNV __glCombinerStageParameterfvNV
#define glCommandListSegmentsNV __glCommandListSegmentsNV
#define glCompileCommandListNV __glCompileCommandListNV
#define glCompileShader __glCompileShader
#define glCompileShaderARB __glCompileShaderARB
#define glCompileShaderIncludeARB __glCompileShaderIncludeARB
#define glCompressedMultiTexImage1DEXT __glCompressedMultiTexImage1DEXT
#define glCompressedMultiTexImage2DEXT __glCompressedMultiTexImage2DEXT
#define glCompressedMultiTexImage3DEXT __glCompressedMultiTexImage3DEXT
#define glCompressedMultiTexSubImage1DEXT __glCompressedMultiTexSubImage1DEXT
#define glCompressedMultiTexSubImage2DEXT __glCompressedMultiTexSubImage2DEXT
#define glCompressedMultiTexSubImage3DEXT __glCompressedMultiTexSubImage3DEXT
#define glCompressedTexImage1D __glCompressedTexImage1D
#define glCompressedTexImage1DARB __glCompressedTexImage1DARB
#define glCompressedTexImage2D __glCompressedTexImage2D
#define glCompressedTexImage2DARB __glCompressedTexImage2DARB
#define glCompressedTexImage3D __glCompressedTexImage3D
#define glCompressedTexImage3DARB __glCompressedTexImage3DARB
#define glCompressedTexImage3DOES __glCompressedTexImage3DOES
#define glCompressedTexSubImage1D __glCompressedTexSubImage1D
#define glCompressedTexSubImage1DARB __glCompressedTexSubImage1DARB
#define glCompressedTexSubImage2D __glCompressedTexSubImage2D
#define glCompressedTexSubImage2DARB __glCompressedTexSubImage2DARB
#define glCompressedTexSubImage3D __glCompressedTexSubImage3D
#define glCompressedTexSubImage3DARB __glCompressedTexSubImage3DARB
#define glCompressedTexSubImage3DOES __glCompressedTexSubImage3DOES
#define glCompressedTextureImage1DEXT __glCompressedTextureImage1DEXT
#define glCompressedTextureImage2DEXT __glCompressedTextureImage2DEXT
#define glCompressedTextureImage3DEXT __glCompressedTextureImage3DEXT
#define glCompressedTextureSubImage1D __glCompressedTextureSubImage1D
#define glCompressedTextureSubImage1DEXT __glCompressedTextureSubImage1DEXT
#define glCompressedTextureSubImage2D __glCompressedTextureSubImage2D
#define glCompressedTextureSubImage2DEXT __glCompressedTextureSubImage2DEXT
#define glCompressedTextureSubImage3D __glCompressedTextureSubImage3D
#define glCompressedTextureSubImage3DEXT __glCompressedTextureSubImage3DEXT
#define glConvolutionFilter1D __glConvolutionFilter1D
#define glConvolutionFilter1DEXT __glConvolutionFilter1DEXT
#define glConvolutionFilter2D __glConvolutionFilter2D
#define glConvolutionFilter2DEXT __glConvolutionFilter2DEXT
#define glConvolutionParameterf __glConvolutionParameterf
#define glConvolutionParameterfEXT __glConvolutionParameterfEXT
#define glConvolutionParameterfv __glConvolutionParameterfv
#define glConvolutionParameterfvEXT __glConvolutionParameterfvEXT
#define glConvolutionParameteri __glConvolutionParameteri
#define glConvolutionParameteriEXT __glConvolutionParameteriEXT
#define glConvolutionParameteriv __glConvolutionParameteriv
#define glConvolutionParameterivEXT __glConvolutionParameterivEXT
#define glConvolutionParameterxOES __glConvolutionParameterxOES
#define glConvolutionParameterxvOES __glConvolutionParameterxvOES
#define glCopyBufferSubData __glCopyBufferSubData
#define glCopyBufferSubDataNV __glCopyBufferSubDataNV
#define glCopyColorSubTable __glCopyColorSubTable
#define glCopyColorSubTableEXT __glCopyColorSubTableEXT
#define glCopyColorTable __glCopyColorTable
#define glCopyColorTableSGI __glCopyColorTableSGI
#define glCopyConvolutionFilter1D __glCopyConvolutionFilter1D
#define glCopyConvolutionFilter1DEXT __glCopyConvolutionFilter1DEXT
#define glCopyConvolutionFilter2D __glCopyConvolutionFilter2D
#define glCopyConvolutionFilter2DEXT __glCopyConvolutionFilter2DEXT
#define glCopyImageSubData __glCopyImageSubData
#define glCopyImageSubDataEXT __glCopyImageSubDataEXT
#define glCopyImageSubDataOES __glCopyImageSubDataOES
#define glCopyImageSubDataNV __glCopyImageSubDataNV
#define glCopyMultiTexImage1DEXT __glCopyMultiTexImage1DEXT
#define glCopyMultiTexImage2DEXT __glCopyMultiTexImage2DEXT
#define glCopyMultiTexSubImage1DEXT __glCopyMultiTexSubImage1DEXT
#define glCopyMultiTexSubImage2DEXT __glCopyMultiTexSubImage2DEXT
#define glCopyMultiTexSubImage3DEXT __glCopyMultiTexSubImage3DEXT
#define glCopyNamedBufferSubData __glCopyNamedBufferSubData
#define glCopyPathNV __glCopyPathNV
#define glCopyPixels __glCopyPixels
#define glCopyTexImage1D __glCopyTexImage1D
#define glCopyTexImage1DEXT __glCopyTexImage1DEXT
#define glCopyTexImage2D __glCopyTexImage2D
#define glCopyTexImage2DEXT __glCopyTexImage2DEXT
#define glCopyTexSubImage1D __glCopyTexSubImage1D
#define glCopyTexSubImage1DEXT __glCopyTexSubImage1DEXT
#define glCopyTexSubImage2D __glCopyTexSubImage2D
#define glCopyTexSubImage2DEXT __glCopyTexSubImage2DEXT
#define glCopyTexSubImage3D __glCopyTexSubImage3D
#define glCopyTexSubImage3DEXT __glCopyTexSubImage3DEXT
#define glCopyTexSubImage3DOES __glCopyTexSubImage3DOES
#define glCopyTextureImage1DEXT __glCopyTextureImage1DEXT
#define glCopyTextureImage2DEXT __glCopyTextureImage2DEXT
#define glCopyTextureLevelsAPPLE __glCopyTextureLevelsAPPLE
#define glCopyTextureSubImage1D __glCopyTextureSubImage1D
#define glCopyTextureSubImage1DEXT __glCopyTextureSubImage1DEXT
#define glCopyTextureSubImage2D __glCopyTextureSubImage2D
#define glCopyTextureSubImage2DEXT __glCopyTextureSubImage2DEXT
#define glCopyTextureSubImage3D __glCopyTextureSubImage3D
#define glCopyTextureSubImage3DEXT __glCopyTextureSubImage3DEXT
#define glCoverFillPathInstancedNV __glCoverFillPathInstancedNV
#define glCoverFillPathNV __glCoverFillPathNV
#define glCoverStrokePathInstancedNV __glCoverStrokePathInstancedNV
#define glCoverStrokePathNV __glCoverStrokePathNV
#define glCoverageMaskNV __glCoverageMaskNV
#define glCoverageOperationNV __glCoverageOperationNV
#define glCreateBuffers __glCreateBuffers
#define glCreateCommandListsNV __glCreateCommandListsNV
#define glCreateStatesNV __glCreateStatesNV
#define glCreateFramebuffers __glCreateFramebuffers
#define glCreatePerfQueryINTEL __glCreatePerfQueryINTEL
#define glCreateProgram __glCreateProgram
#define glCreateProgramObjectARB __glCreateProgramObjectARB
#define glCreateProgramPipelines __glCreateProgramPipelines
#define glCreateQueries __glCreateQueries
#define glCreateRenderbuffers __glCreateRenderbuffers
#define glCreateSamplers __glCreateSamplers
#define glCreateShader __glCreateShader
#define glCreateShaderObjectARB __glCreateShaderObjectARB
#define glCreateShaderProgramEXT __glCreateShaderProgramEXT
#define glCreateShaderProgramv __glCreateShaderProgramv
#define glCreateShaderProgramvEXT __glCreateShaderProgramvEXT
#define glCreateSyncFromCLeventARB __glCreateSyncFromCLeventARB
#define glCreateTextures __glCreateTextures
#define glCreateTransformFeedbacks __glCreateTransformFeedbacks
#define glCreateVertexArrays __glCreateVertexArrays
#define glCullFace __glCullFace
#define glCullParameterdvEXT __glCullParameterdvEXT
#define glCullParameterfvEXT __glCullParameterfvEXT
#define glCurrentPaletteMatrixARB __glCurrentPaletteMatrixARB
#define glCurrentPaletteMatrixOES __glCurrentPaletteMatrixOES
#define glDebugMessageCallback __glDebugMessageCallback
#define glDebugMessageCallbackAMD __glDebugMessageCallbackAMD
#define glDebugMessageCallbackARB __glDebugMessageCallbackARB
#define glDebugMessageCallbackKHR __glDebugMessageCallbackKHR
#define glDebugMessageControl __glDebugMessageControl
#define glDebugMessageControlARB __glDebugMessageControlARB
#define glDebugMessageControlKHR __glDebugMessageControlKHR
#define glDebugMessageEnableAMD __glDebugMessageEnableAMD
#define glDebugMessageInsert __glDebugMessageInsert
#define glDebugMessageInsertAMD __glDebugMessageInsertAMD
#define glDebugMessageInsertARB __glDebugMessageInsertARB
#define glDebugMessageInsertKHR __glDebugMessageInsertKHR
#define glDeformSGIX __glDeformSGIX
#define glDeformationMap3dSGIX __glDeformationMap3dSGIX
#define glDeformationMap3fSGIX __glDeformationMap3fSGIX
#define glDeleteAsyncMarkersSGIX __glDeleteAsyncMarkersSGIX
#define glDeleteBuffers __glDeleteBuffers
#define glDeleteBuffersARB __glDeleteBuffersARB
#define glDeleteCommandListsNV __glDeleteCommandListsNV
#define glDeleteStatesNV __glDeleteStatesNV
#define glDeleteFencesAPPLE __glDeleteFencesAPPLE
#define glDeleteFencesNV __glDeleteFencesNV
#define glDeleteFragmentShaderATI __glDeleteFragmentShaderATI
#define glDeleteFramebuffers __glDeleteFramebuffers
#define glDeleteFramebuffersEXT __glDeleteFramebuffersEXT
#define glDeleteFramebuffersOES __glDeleteFramebuffersOES
#define glDeleteLists __glDeleteLists
#define glDeleteNamedStringARB __glDeleteNamedStringARB
#define glDeleteNamesAMD __glDeleteNamesAMD
#define glDeleteObjectARB __glDeleteObjectARB
#define glDeleteOcclusionQueriesNV __glDeleteOcclusionQueriesNV
#define glDeletePathsNV __glDeletePathsNV
#define glDeletePerfMonitorsAMD __glDeletePerfMonitorsAMD
#define glDeletePerfQueryINTEL __glDeletePerfQueryINTEL
#define glDeleteProgram __glDeleteProgram
#define glDeleteProgramPipelines __glDeleteProgramPipelines
#define glDeleteProgramPipelinesEXT __glDeleteProgramPipelinesEXT
#define glDeleteProgramsARB __glDeleteProgramsARB
#define glDeleteProgramsNV __glDeleteProgramsNV
#define glDeleteQueries __glDeleteQueries
#define glDeleteQueriesARB __glDeleteQueriesARB
#define glDeleteQueriesEXT __glDeleteQueriesEXT
#define glDeleteRenderbuffers __glDeleteRenderbuffers
#define glDeleteRenderbuffersEXT __glDeleteRenderbuffersEXT
#define glDeleteRenderbuffersOES __glDeleteRenderbuffersOES
#define glDeleteSamplers __glDeleteSamplers
#define glDeleteShader __glDeleteShader
#define glDeleteSync __glDeleteSync
#define glDeleteSyncAPPLE __glDeleteSyncAPPLE
#define glDeleteTextures __glDeleteTextures
#define glDeleteTexturesEXT __glDeleteTexturesEXT
#define glDeleteTransformFeedbacks __glDeleteTransformFeedbacks
#define glDeleteTransformFeedbacksNV __glDeleteTransformFeedbacksNV
#define glDeleteVertexArrays __glDeleteVertexArrays
#define glDeleteVertexArraysAPPLE __glDeleteVertexArraysAPPLE
#define glDeleteVertexArraysOES __glDeleteVertexArraysOES
#define glDeleteVertexShaderEXT __glDeleteVertexShaderEXT
#define glDepthBoundsEXT __glDepthBoundsEXT
#define glDepthBoundsdNV __glDepthBoundsdNV
#define glDepthFunc __glDepthFunc
#define glDepthMask __glDepthMask
#define glDepthRange __glDepthRange
#define glDepthRangeArrayv __glDepthRangeArrayv
#define glDepthRangeArrayfvNV __glDepthRangeArrayfvNV
#define glDepthRangeIndexed __glDepthRangeIndexed
#define glDepthRangeIndexedfNV __glDepthRangeIndexedfNV
#define glDepthRangedNV __glDepthRangedNV
#define glDepthRangef __glDepthRangef
#define glDepthRangefOES __glDepthRangefOES
#define glDepthRangex __glDepthRangex
#define glDepthRangexOES __glDepthRangexOES
#define glDetachObjectARB __glDetachObjectARB
#define glDetachShader __glDetachShader
#define glDetailTexFuncSGIS __glDetailTexFuncSGIS
#define glDisable __glDisable
#define glDisableClientState __glDisableClientState
#define glDisableClientStateIndexedEXT __glDisableClientStateIndexedEXT
#define glDisableClientStateiEXT __glDisableClientStateiEXT
#define glDisableDriverControlQCOM __glDisableDriverControlQCOM
#define glDisableIndexedEXT __glDisableIndexedEXT
#define glDisableVariantClientStateEXT __glDisableVariantClientStateEXT
#define glDisableVertexArrayAttrib __glDisableVertexArrayAttrib
#define glDisableVertexArrayAttribEXT __glDisableVertexArrayAttribEXT
#define glDisableVertexArrayEXT __glDisableVertexArrayEXT
#define glDisableVertexAttribAPPLE __glDisableVertexAttribAPPLE
#define glDisableVertexAttribArray __glDisableVertexAttribArray
#define glDisableVertexAttribArrayARB __glDisableVertexAttribArrayARB
#define glDisablei __glDisablei
#define glDisableiEXT __glDisableiEXT
#define glDisableiNV __glDisableiNV
#define glDisableiOES __glDisableiOES
#define glDiscardFramebufferEXT __glDiscardFramebufferEXT
#define glDispatchCompute __glDispatchCompute
#define glDispatchComputeGroupSizeARB __glDispatchComputeGroupSizeARB
#define glDispatchComputeIndirect __glDispatchComputeIndirect
#define glDrawArrays __glDrawArrays
#define glDrawArraysEXT __glDrawArraysEXT
#define glDrawArraysIndirect __glDrawArraysIndirect
#define glDrawArraysInstanced __glDrawArraysInstanced
#define glDrawArraysInstancedANGLE __glDrawArraysInstancedANGLE
#define glDrawArraysInstancedARB __glDrawArraysInstancedARB
#define glDrawArraysInstancedBaseInstance __glDrawArraysInstancedBaseInstance
#define glDrawArraysInstancedBaseInstanceEXT __glDrawArraysInstancedBaseInstanceEXT
#define glDrawArraysInstancedEXT __glDrawArraysInstancedEXT
#define glDrawArraysInstancedNV __glDrawArraysInstancedNV
#define glDrawBuffer __glDrawBuffer
#define glDrawBuffers __glDrawBuffers
#define glDrawBuffersARB __glDrawBuffersARB
#define glDrawBuffersATI __glDrawBuffersATI
#define glDrawBuffersEXT __glDrawBuffersEXT
#define glDrawBuffersIndexedEXT __glDrawBuffersIndexedEXT
#define glDrawBuffersNV __glDrawBuffersNV
#define glDrawCommandsNV __glDrawCommandsNV
#define glDrawCommandsAddressNV __glDrawCommandsAddressNV
#define glDrawCommandsStatesNV __glDrawCommandsStatesNV
#define glDrawCommandsStatesAddressNV __glDrawCommandsStatesAddressNV
#define glDrawElementArrayAPPLE __glDrawElementArrayAPPLE
#define glDrawElementArrayATI __glDrawElementArrayATI
#define glDrawElements __glDrawElements
#define glDrawElementsBaseVertex __glDrawElementsBaseVertex
#define glDrawElementsBaseVertexEXT __glDrawElementsBaseVertexEXT
#define glDrawElementsBaseVertexOES __glDrawElementsBaseVertexOES
#define glDrawElementsIndirect __glDrawElementsIndirect
#define glDrawElementsInstanced __glDrawElementsInstanced
#define glDrawElementsInstancedANGLE __glDrawElementsInstancedANGLE
#define glDrawElementsInstancedARB __glDrawElementsInstancedARB
#define glDrawElementsInstancedBaseInstance __glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseInstanceEXT __glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseVertex __glDrawElementsInstancedBaseVertex
#define glDrawElementsInstancedBaseVertexEXT __glDrawElementsInstancedBaseVertexEXT
#define glDrawElementsInstancedBaseVertexOES __glDrawElementsInstancedBaseVertexOES
#define glDrawElementsInstancedBaseVertexBaseInstance __glDrawElementsInstancedBaseVertexBaseInstance
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT __glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glDrawElementsInstancedEXT __glDrawElementsInstancedEXT
#define glDrawElementsInstancedNV __glDrawElementsInstancedNV
#define glDrawMeshArraysSUN __glDrawMeshArraysSUN
#define glDrawPixels __glDrawPixels
#define glDrawRangeElementArrayAPPLE __glDrawRangeElementArrayAPPLE
#define glDrawRangeElementArrayATI __glDrawRangeElementArrayATI
#define glDrawRangeElements __glDrawRangeElements
#define glDrawRangeElementsBaseVertex __glDrawRangeElementsBaseVertex
#define glDrawRangeElementsBaseVertexEXT __glDrawRangeElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexOES __glDrawRangeElementsBaseVertexOES
#define glDrawRangeElementsEXT __glDrawRangeElementsEXT
#define glDrawTexfOES __glDrawTexfOES
#define glDrawTexfvOES __glDrawTexfvOES
#define glDrawTexiOES __glDrawTexiOES
#define glDrawTexivOES __glDrawTexivOES
#define glDrawTexsOES __glDrawTexsOES
#define glDrawTexsvOES __glDrawTexsvOES
#define glDrawTextureNV __glDrawTextureNV
#define glDrawTexxOES __glDrawTexxOES
#define glDrawTexxvOES __glDrawTexxvOES
#define glDrawTransformFeedback __glDrawTransformFeedback
#define glDrawTransformFeedbackInstanced __glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackNV __glDrawTransformFeedbackNV
#define glDrawTransformFeedbackStream __glDrawTransformFeedbackStream
#define glDrawTransformFeedbackStreamInstanced __glDrawTransformFeedbackStreamInstanced
#define glEGLImageTargetRenderbufferStorageOES __glEGLImageTargetRenderbufferStorageOES
#define glEGLImageTargetTexture2DOES __glEGLImageTargetTexture2DOES
#define glEdgeFlag __glEdgeFlag
#define glEdgeFlagFormatNV __glEdgeFlagFormatNV
#define glEdgeFlagPointer __glEdgeFlagPointer
#define glEdgeFlagPointerEXT __glEdgeFlagPointerEXT
#define glEdgeFlagPointerListIBM __glEdgeFlagPointerListIBM
#define glEdgeFlagv __glEdgeFlagv
#define glElementPointerAPPLE __glElementPointerAPPLE
#define glElementPointerATI __glElementPointerATI
#define glEnable __glEnable
#define glEnableClientState __glEnableClientState
#define glEnableClientStateIndexedEXT __glEnableClientStateIndexedEXT
#define glEnableClientStateiEXT __glEnableClientStateiEXT
#define glEnableDriverControlQCOM __glEnableDriverControlQCOM
#define glEnableIndexedEXT __glEnableIndexedEXT
#define glEnableVariantClientStateEXT __glEnableVariantClientStateEXT
#define glEnableVertexArrayAttrib __glEnableVertexArrayAttrib
#define glEnableVertexArrayAttribEXT __glEnableVertexArrayAttribEXT
#define glEnableVertexArrayEXT __glEnableVertexArrayEXT
#define glEnableVertexAttribAPPLE __glEnableVertexAttribAPPLE
#define glEnableVertexAttribArray __glEnableVertexAttribArray
#define glEnableVertexAttribArrayARB __glEnableVertexAttribArrayARB
#define glEnablei __glEnablei
#define glEnableiEXT __glEnableiEXT
#define glEnableiNV __glEnableiNV
#define glEnableiOES __glEnableiOES
#define glEnd __glEnd
#define glEndConditionalRender __glEndConditionalRender
#define glEndConditionalRenderNV __glEndConditionalRenderNV
#define glEndConditionalRenderNVX __glEndConditionalRenderNVX
#define glEndFragmentShaderATI __glEndFragmentShaderATI
#define glEndList __glEndList
#define glEndOcclusionQueryNV __glEndOcclusionQueryNV
#define glEndPerfMonitorAMD __glEndPerfMonitorAMD
#define glEndPerfQueryINTEL __glEndPerfQueryINTEL
#define glEndQuery __glEndQuery
#define glEndQueryARB __glEndQueryARB
#define glEndQueryEXT __glEndQueryEXT
#define glEndQueryIndexed __glEndQueryIndexed
#define glEndTilingQCOM __glEndTilingQCOM
#define glEndTransformFeedback __glEndTransformFeedback
#define glEndTransformFeedbackEXT __glEndTransformFeedbackEXT
#define glEndTransformFeedbackNV __glEndTransformFeedbackNV
#define glEndVertexShaderEXT __glEndVertexShaderEXT
#define glEndVideoCaptureNV __glEndVideoCaptureNV
#define glEvalCoord1d __glEvalCoord1d
#define glEvalCoord1dv __glEvalCoord1dv
#define glEvalCoord1f __glEvalCoord1f
#define glEvalCoord1fv __glEvalCoord1fv
#define glEvalCoord1xOES __glEvalCoord1xOES
#define glEvalCoord1xvOES __glEvalCoord1xvOES
#define glEvalCoord2d __glEvalCoord2d
#define glEvalCoord2dv __glEvalCoord2dv
#define glEvalCoord2f __glEvalCoord2f
#define glEvalCoord2fv __glEvalCoord2fv
#define glEvalCoord2xOES __glEvalCoord2xOES
#define glEvalCoord2xvOES __glEvalCoord2xvOES
#define glEvalMapsNV __glEvalMapsNV
#define glEvalMesh1 __glEvalMesh1
#define glEvalMesh2 __glEvalMesh2
#define glEvalPoint1 __glEvalPoint1
#define glEvalPoint2 __glEvalPoint2
#define glExecuteProgramNV __glExecuteProgramNV
#define glExtGetBufferPointervQCOM __glExtGetBufferPointervQCOM
#define glExtGetBuffersQCOM __glExtGetBuffersQCOM
#define glExtGetFramebuffersQCOM __glExtGetFramebuffersQCOM
#define glExtGetProgramBinarySourceQCOM __glExtGetProgramBinarySourceQCOM
#define glExtGetProgramsQCOM __glExtGetProgramsQCOM
#define glExtGetRenderbuffersQCOM __glExtGetRenderbuffersQCOM
#define glExtGetShadersQCOM __glExtGetShadersQCOM
#define glExtGetTexLevelParameterivQCOM __glExtGetTexLevelParameterivQCOM
#define glExtGetTexSubImageQCOM __glExtGetTexSubImageQCOM
#define glExtGetTexturesQCOM __glExtGetTexturesQCOM
#define glExtIsProgramBinaryQCOM __glExtIsProgramBinaryQCOM
#define glExtTexObjectStateOverrideiQCOM __glExtTexObjectStateOverrideiQCOM
#define glExtractComponentEXT __glExtractComponentEXT
#define glFeedbackBuffer __glFeedbackBuffer
#define glFeedbackBufferxOES __glFeedbackBufferxOES
#define glFenceSync __glFenceSync
#define glFenceSyncAPPLE __glFenceSyncAPPLE
#define glFinalCombinerInputNV __glFinalCombinerInputNV
#define glFinish __glFinish
#define glFinishAsyncSGIX __glFinishAsyncSGIX
#define glFinishFenceAPPLE __glFinishFenceAPPLE
#define glFinishFenceNV __glFinishFenceNV
#define glFinishObjectAPPLE __glFinishObjectAPPLE
#define glFinishTextureSUNX __glFinishTextureSUNX
#define glFlush __glFlush
#define glFlushMappedBufferRange __glFlushMappedBufferRange
#define glFlushMappedBufferRangeAPPLE __glFlushMappedBufferRangeAPPLE
#define glFlushMappedBufferRangeEXT __glFlushMappedBufferRangeEXT
#define glFlushMappedNamedBufferRange __glFlushMappedNamedBufferRange
#define glFlushMappedNamedBufferRangeEXT __glFlushMappedNamedBufferRangeEXT
#define glFlushPixelDataRangeNV __glFlushPixelDataRangeNV
#define glFlushRasterSGIX __glFlushRasterSGIX
#define glFlushStaticDataIBM __glFlushStaticDataIBM
#define glFlushVertexArrayRangeAPPLE __glFlushVertexArrayRangeAPPLE
#define glFlushVertexArrayRangeNV __glFlushVertexArrayRangeNV
#define glFogCoordFormatNV __glFogCoordFormatNV
#define glFogCoordPointer __glFogCoordPointer
#define glFogCoordPointerEXT __glFogCoordPointerEXT
#define glFogCoordPointerListIBM __glFogCoordPointerListIBM
#define glFogCoordd __glFogCoordd
#define glFogCoorddEXT __glFogCoorddEXT
#define glFogCoorddv __glFogCoorddv
#define glFogCoorddvEXT __glFogCoorddvEXT
#define glFogCoordf __glFogCoordf
#define glFogCoordfEXT __glFogCoordfEXT
#define glFogCoordfv __glFogCoordfv
#define glFogCoordfvEXT __glFogCoordfvEXT
#define glFogCoordhNV __glFogCoordhNV
#define glFogCoordhvNV __glFogCoordhvNV
#define glFogFuncSGIS __glFogFuncSGIS
#define glFogf __glFogf
#define glFogfv __glFogfv
#define glFogi __glFogi
#define glFogiv __glFogiv
#define glFogx __glFogx
#define glFogxOES __glFogxOES
#define glFogxv __glFogxv
#define glFogxvOES __glFogxvOES
#define glFragmentColorMaterialSGIX __glFragmentColorMaterialSGIX
#define glFragmentLightModelfSGIX __glFragmentLightModelfSGIX
#define glFragmentLightModelfvSGIX __glFragmentLightModelfvSGIX
#define glFragmentLightModeliSGIX __glFragmentLightModeliSGIX
#define glFragmentLightModelivSGIX __glFragmentLightModelivSGIX
#define glFragmentLightfSGIX __glFragmentLightfSGIX
#define glFragmentLightfvSGIX __glFragmentLightfvSGIX
#define glFragmentLightiSGIX __glFragmentLightiSGIX
#define glFragmentLightivSGIX __glFragmentLightivSGIX
#define glFragmentMaterialfSGIX __glFragmentMaterialfSGIX
#define glFragmentMaterialfvSGIX __glFragmentMaterialfvSGIX
#define glFragmentMaterialiSGIX __glFragmentMaterialiSGIX
#define glFragmentMaterialivSGIX __glFragmentMaterialivSGIX
#define glFrameTerminatorGREMEDY __glFrameTerminatorGREMEDY
#define glFrameZoomSGIX __glFrameZoomSGIX
#define glFramebufferDrawBufferEXT __glFramebufferDrawBufferEXT
#define glFramebufferDrawBuffersEXT __glFramebufferDrawBuffersEXT
#define glFramebufferParameteri __glFramebufferParameteri
#define glFramebufferReadBufferEXT __glFramebufferReadBufferEXT
#define glFramebufferRenderbuffer __glFramebufferRenderbuffer
#define glFramebufferRenderbufferEXT __glFramebufferRenderbufferEXT
#define glFramebufferRenderbufferOES __glFramebufferRenderbufferOES
#define glFramebufferTexture __glFramebufferTexture
#define glFramebufferTexture1D __glFramebufferTexture1D
#define glFramebufferTexture1DEXT __glFramebufferTexture1DEXT
#define glFramebufferTexture2D __glFramebufferTexture2D
#define glFramebufferTexture2DEXT __glFramebufferTexture2DEXT
#define glFramebufferTexture2DMultisampleEXT __glFramebufferTexture2DMultisampleEXT
#define glFramebufferTexture2DMultisampleIMG __glFramebufferTexture2DMultisampleIMG
#define glFramebufferTexture2DOES __glFramebufferTexture2DOES
#define glFramebufferTexture3D __glFramebufferTexture3D
#define glFramebufferTexture3DEXT __glFramebufferTexture3DEXT
#define glFramebufferTexture3DOES __glFramebufferTexture3DOES
#define glFramebufferTextureARB __glFramebufferTextureARB
#define glFramebufferTextureEXT __glFramebufferTextureEXT
#define glFramebufferTextureOES __glFramebufferTextureOES
#define glFramebufferTextureFaceARB __glFramebufferTextureFaceARB
#define glFramebufferTextureFaceEXT __glFramebufferTextureFaceEXT
#define glFramebufferTextureLayer __glFramebufferTextureLayer
#define glFramebufferTextureLayerARB __glFramebufferTextureLayerARB
#define glFramebufferTextureLayerEXT __glFramebufferTextureLayerEXT
#define glFramebufferTextureMultiviewOVR __glFramebufferTextureMultiviewOVR
#define glFreeObjectBufferATI __glFreeObjectBufferATI
#define glFrontFace __glFrontFace
#define glFrustum __glFrustum
#define glFrustumf __glFrustumf
#define glFrustumfOES __glFrustumfOES
#define glFrustumx __glFrustumx
#define glFrustumxOES __glFrustumxOES
#define glGenAsyncMarkersSGIX __glGenAsyncMarkersSGIX
#define glGenBuffers __glGenBuffers
#define glGenBuffersARB __glGenBuffersARB
#define glGenFencesAPPLE __glGenFencesAPPLE
#define glGenFencesNV __glGenFencesNV
#define glGenFragmentShadersATI __glGenFragmentShadersATI
#define glGenFramebuffers __glGenFramebuffers
#define glGenFramebuffersEXT __glGenFramebuffersEXT
#define glGenFramebuffersOES __glGenFramebuffersOES
#define glGenLists __glGenLists
#define glGenNamesAMD __glGenNamesAMD
#define glGenOcclusionQueriesNV __glGenOcclusionQueriesNV
#define glGenPathsNV __glGenPathsNV
#define glGenPerfMonitorsAMD __glGenPerfMonitorsAMD
#define glGenProgramPipelines __glGenProgramPipelines
#define glGenProgramPipelinesEXT __glGenProgramPipelinesEXT
#define glGenProgramsARB __glGenProgramsARB
#define glGenProgramsNV __glGenProgramsNV
#define glGenQueries __glGenQueries
#define glGenQueriesARB __glGenQueriesARB
#define glGenQueriesEXT __glGenQueriesEXT
#define glGenRenderbuffers __glGenRenderbuffers
#define glGenRenderbuffersEXT __glGenRenderbuffersEXT
#define glGenRenderbuffersOES __glGenRenderbuffersOES
#define glGenSamplers __glGenSamplers
#define glGenSymbolsEXT __glGenSymbolsEXT
#define glGenTextures __glGenTextures
#define glGenTexturesEXT __glGenTexturesEXT
#define glGenTransformFeedbacks __glGenTransformFeedbacks
#define glGenTransformFeedbacksNV __glGenTransformFeedbacksNV
#define glGenVertexArrays __glGenVertexArrays
#define glGenVertexArraysAPPLE __glGenVertexArraysAPPLE
#define glGenVertexArraysOES __glGenVertexArraysOES
#define glGenVertexShadersEXT __glGenVertexShadersEXT
#define glGenerateMipmap __glGenerateMipmap
#define glGenerateMipmapEXT __glGenerateMipmapEXT
#define glGenerateMipmapOES __glGenerateMipmapOES
#define glGenerateMultiTexMipmapEXT __glGenerateMultiTexMipmapEXT
#define glGenerateTextureMipmap __glGenerateTextureMipmap
#define glGenerateTextureMipmapEXT __glGenerateTextureMipmapEXT
#define glGetActiveAtomicCounterBufferiv __glGetActiveAtomicCounterBufferiv
#define glGetActiveAttrib __glGetActiveAttrib
#define glGetActiveAttribARB __glGetActiveAttribARB
#define glGetActiveSubroutineName __glGetActiveSubroutineName
#define glGetActiveSubroutineUniformName __glGetActiveSubroutineUniformName
#define glGetActiveSubroutineUniformiv __glGetActiveSubroutineUniformiv
#define glGetActiveUniform __glGetActiveUniform
#define glGetActiveUniformARB __glGetActiveUniformARB
#define glGetActiveUniformBlockName __glGetActiveUniformBlockName
#define glGetActiveUniformBlockiv __glGetActiveUniformBlockiv
#define glGetActiveUniformName __glGetActiveUniformName
#define glGetActiveUniformsiv __glGetActiveUniformsiv
#define glGetActiveVaryingNV __glGetActiveVaryingNV
#define glGetArrayObjectfvATI __glGetArrayObjectfvATI
#define glGetArrayObjectivATI __glGetArrayObjectivATI
#define glGetAttachedObjectsARB __glGetAttachedObjectsARB
#define glGetAttachedShaders __glGetAttachedShaders
#define glGetAttribLocation __glGetAttribLocation
#define glGetAttribLocationARB __glGetAttribLocationARB
#define glGetBooleanIndexedvEXT __glGetBooleanIndexedvEXT
#define glGetBooleani_v __glGetBooleani_v
#define glGetBooleanv __glGetBooleanv
#define glGetBufferParameteri64v __glGetBufferParameteri64v
#define glGetBufferParameteriv __glGetBufferParameteriv
#define glGetBufferParameterivARB __glGetBufferParameterivARB
#define glGetBufferParameterui64vNV __glGetBufferParameterui64vNV
#define glGetBufferPointerv __glGetBufferPointerv
#define glGetBufferPointervARB __glGetBufferPointervARB
#define glGetBufferPointervOES __glGetBufferPointervOES
#define glGetBufferSubData __glGetBufferSubData
#define glGetBufferSubDataARB __glGetBufferSubDataARB
#define glGetClipPlane __glGetClipPlane
#define glGetClipPlanef __glGetClipPlanef
#define glGetClipPlanefOES __glGetClipPlanefOES
#define glGetClipPlanex __glGetClipPlanex
#define glGetClipPlanexOES __glGetClipPlanexOES
#define glGetColorTable __glGetColorTable
#define glGetColorTableEXT __glGetColorTableEXT
#define glGetColorTableParameterfv __glGetColorTableParameterfv
#define glGetColorTableParameterfvEXT __glGetColorTableParameterfvEXT
#define glGetColorTableParameterfvSGI __glGetColorTableParameterfvSGI
#define glGetColorTableParameteriv __glGetColorTableParameteriv
#define glGetColorTableParameterivEXT __glGetColorTableParameterivEXT
#define glGetColorTableParameterivSGI __glGetColorTableParameterivSGI
#define glGetColorTableSGI __glGetColorTableSGI
#define glGetCombinerInputParameterfvNV __glGetCombinerInputParameterfvNV
#define glGetCombinerInputParameterivNV __glGetCombinerInputParameterivNV
#define glGetCombinerOutputParameterfvNV __glGetCombinerOutputParameterfvNV
#define glGetCombinerOutputParameterivNV __glGetCombinerOutputParameterivNV
#define glGetCombinerStageParameterfvNV __glGetCombinerStageParameterfvNV
#define glGetCommandHeaderNV __glGetCommandHeaderNV
#define glGetCompressedMultiTexImageEXT __glGetCompressedMultiTexImageEXT
#define glGetCompressedTexImage __glGetCompressedTexImage
#define glGetCompressedTexImageARB __glGetCompressedTexImageARB
#define glGetCompressedTextureImage __glGetCompressedTextureImage
#define glGetCompressedTextureImageEXT __glGetCompressedTextureImageEXT
#define glGetCompressedTextureSubImage __glGetCompressedTextureSubImage
#define glGetConvolutionFilter __glGetConvolutionFilter
#define glGetConvolutionFilterEXT __glGetConvolutionFilterEXT
#define glGetConvolutionParameterfv __glGetConvolutionParameterfv
#define glGetConvolutionParameterfvEXT __glGetConvolutionParameterfvEXT
#define glGetConvolutionParameteriv __glGetConvolutionParameteriv
#define glGetConvolutionParameterivEXT __glGetConvolutionParameterivEXT
#define glGetConvolutionParameterxvOES __glGetConvolutionParameterxvOES
#define glGetDebugMessageLog __glGetDebugMessageLog
#define glGetDebugMessageLogAMD __glGetDebugMessageLogAMD
#define glGetDebugMessageLogARB __glGetDebugMessageLogARB
#define glGetDebugMessageLogKHR __glGetDebugMessageLogKHR
#define glGetDetailTexFuncSGIS __glGetDetailTexFuncSGIS
#define glGetDoubleIndexedvEXT __glGetDoubleIndexedvEXT
#define glGetDoublei_v __glGetDoublei_v
#define glGetDoublei_vEXT __glGetDoublei_vEXT
#define glGetDoublev __glGetDoublev
#define glGetDriverControlStringQCOM __glGetDriverControlStringQCOM
#define glGetDriverControlsQCOM __glGetDriverControlsQCOM
#define glGetError __glGetError
#define glGetFenceivNV __glGetFenceivNV
#define glGetFinalCombinerInputParameterfvNV __glGetFinalCombinerInputParameterfvNV
#define glGetFinalCombinerInputParameterivNV __glGetFinalCombinerInputParameterivNV
#define glGetFirstPerfQueryIdINTEL __glGetFirstPerfQueryIdINTEL
#define glGetFixedv __glGetFixedv
#define glGetFixedvOES __glGetFixedvOES
#define glGetFloatIndexedvEXT __glGetFloatIndexedvEXT
#define glGetFloati_v __glGetFloati_v
#define glGetFloati_vNV __glGetFloati_vNV
#define glGetFloati_vEXT __glGetFloati_vEXT
#define glGetFloatv __glGetFloatv
#define glGetFogFuncSGIS __glGetFogFuncSGIS
#define glGetFragDataIndex __glGetFragDataIndex
#define glGetFragDataLocation __glGetFragDataLocation
#define glGetFragDataLocationEXT __glGetFragDataLocationEXT
#define glGetFragmentLightfvSGIX __glGetFragmentLightfvSGIX
#define glGetFragmentLightivSGIX __glGetFragmentLightivSGIX
#define glGetFragmentMaterialfvSGIX __glGetFragmentMaterialfvSGIX
#define glGetFragmentMaterialivSGIX __glGetFragmentMaterialivSGIX
#define glGetFramebufferAttachmentParameteriv __glGetFramebufferAttachmentParameteriv
#define glGetFramebufferAttachmentParameterivEXT __glGetFramebufferAttachmentParameterivEXT
#define glGetFramebufferAttachmentParameterivOES __glGetFramebufferAttachmentParameterivOES
#define glGetFramebufferParameteriv __glGetFramebufferParameteriv
#define glGetFramebufferParameterivEXT __glGetFramebufferParameterivEXT
#define glGetGraphicsResetStatus __glGetGraphicsResetStatus
#define glGetGraphicsResetStatusARB __glGetGraphicsResetStatusARB
#define glGetGraphicsResetStatusEXT __glGetGraphicsResetStatusEXT
#define glGetGraphicsResetStatusKHR __glGetGraphicsResetStatusKHR
#define glGetHandleARB __glGetHandleARB
#define glGetHistogram __glGetHistogram
#define glGetHistogramEXT __glGetHistogramEXT
#define glGetHistogramParameterfv __glGetHistogramParameterfv
#define glGetHistogramParameterfvEXT __glGetHistogramParameterfvEXT
#define glGetHistogramParameteriv __glGetHistogramParameteriv
#define glGetHistogramParameterivEXT __glGetHistogramParameterivEXT
#define glGetHistogramParameterxvOES __glGetHistogramParameterxvOES
#define glGetImageHandleARB __glGetImageHandleARB
#define glGetImageHandleNV __glGetImageHandleNV
#define glGetImageTransformParameterfvHP __glGetImageTransformParameterfvHP
#define glGetImageTransformParameterivHP __glGetImageTransformParameterivHP
#define glGetInfoLogARB __glGetInfoLogARB
#define glGetInstrumentsSGIX __glGetInstrumentsSGIX
#define glGetInteger64i_v __glGetInteger64i_v
#define glGetInteger64v __glGetInteger64v
#define glGetInteger64vAPPLE __glGetInteger64vAPPLE
#define glGetIntegerIndexedvEXT __glGetIntegerIndexedvEXT
#define glGetIntegeri_v __glGetIntegeri_v
#define glGetIntegeri_vEXT __glGetIntegeri_vEXT
#define glGetIntegerui64i_vNV __glGetIntegerui64i_vNV
#define glGetIntegerui64vNV __glGetIntegerui64vNV
#define glGetIntegerv __glGetIntegerv
#define glGetInternalformati64v __glGetInternalformati64v
#define glGetInternalformativ __glGetInternalformativ
#define glGetInternalformatSampleivNV __glGetInternalformatSampleivNV
#define glGetInvariantBooleanvEXT __glGetInvariantBooleanvEXT
#define glGetInvariantFloatvEXT __glGetInvariantFloatvEXT
#define glGetInvariantIntegervEXT __glGetInvariantIntegervEXT
#define glGetLightfv __glGetLightfv
#define glGetLightiv __glGetLightiv
#define glGetLightxOES __glGetLightxOES
#define glGetLightxv __glGetLightxv
#define glGetLightxvOES __glGetLightxvOES
#define glGetListParameterfvSGIX __glGetListParameterfvSGIX
#define glGetListParameterivSGIX __glGetListParameterivSGIX
#define glGetLocalConstantBooleanvEXT __glGetLocalConstantBooleanvEXT
#define glGetLocalConstantFloatvEXT __glGetLocalConstantFloatvEXT
#define glGetLocalConstantIntegervEXT __glGetLocalConstantIntegervEXT
#define glGetMapAttribParameterfvNV __glGetMapAttribParameterfvNV
#define glGetMapAttribParameterivNV __glGetMapAttribParameterivNV
#define glGetMapControlPointsNV __glGetMapControlPointsNV
#define glGetMapParameterfvNV __glGetMapParameterfvNV
#define glGetMapParameterivNV __glGetMapParameterivNV
#define glGetMapdv __glGetMapdv
#define glGetMapfv __glGetMapfv
#define glGetMapiv __glGetMapiv
#define glGetMapxvOES __glGetMapxvOES
#define glGetMaterialfv __glGetMaterialfv
#define glGetMaterialiv __glGetMaterialiv
#define glGetMaterialxOES __glGetMaterialxOES
#define glGetMaterialxv __glGetMaterialxv
#define glGetMaterialxvOES __glGetMaterialxvOES
#define glGetMinmax __glGetMinmax
#define glGetMinmaxEXT __glGetMinmaxEXT
#define glGetMinmaxParameterfv __glGetMinmaxParameterfv
#define glGetMinmaxParameterfvEXT __glGetMinmaxParameterfvEXT
#define glGetMinmaxParameteriv __glGetMinmaxParameteriv
#define glGetMinmaxParameterivEXT __glGetMinmaxParameterivEXT
#define glGetMultiTexEnvfvEXT __glGetMultiTexEnvfvEXT
#define glGetMultiTexEnvivEXT __glGetMultiTexEnvivEXT
#define glGetMultiTexGendvEXT __glGetMultiTexGendvEXT
#define glGetMultiTexGenfvEXT __glGetMultiTexGenfvEXT
#define glGetMultiTexGenivEXT __glGetMultiTexGenivEXT
#define glGetMultiTexImageEXT __glGetMultiTexImageEXT
#define glGetMultiTexLevelParameterfvEXT __glGetMultiTexLevelParameterfvEXT
#define glGetMultiTexLevelParameterivEXT __glGetMultiTexLevelParameterivEXT
#define glGetMultiTexParameterIivEXT __glGetMultiTexParameterIivEXT
#define glGetMultiTexParameterIuivEXT __glGetMultiTexParameterIuivEXT
#define glGetMultiTexParameterfvEXT __glGetMultiTexParameterfvEXT
#define glGetMultiTexParameterivEXT __glGetMultiTexParameterivEXT
#define glGetMultisamplefv __glGetMultisamplefv
#define glGetMultisamplefvNV __glGetMultisamplefvNV
#define glGetNamedBufferParameteri64v __glGetNamedBufferParameteri64v
#define glGetNamedBufferParameteriv __glGetNamedBufferParameteriv
#define glGetNamedBufferParameterivEXT __glGetNamedBufferParameterivEXT
#define glGetNamedBufferParameterui64vNV __glGetNamedBufferParameterui64vNV
#define glGetNamedBufferPointerv __glGetNamedBufferPointerv
#define glGetNamedBufferPointervEXT __glGetNamedBufferPointervEXT
#define glGetNamedBufferSubData __glGetNamedBufferSubData
#define glGetNamedBufferSubDataEXT __glGetNamedBufferSubDataEXT
#define glGetNamedFramebufferAttachmentParameteriv __glGetNamedFramebufferAttachmentParameteriv
#define glGetNamedFramebufferAttachmentParameterivEXT __glGetNamedFramebufferAttachmentParameterivEXT
#define glGetNamedFramebufferParameteriv __glGetNamedFramebufferParameteriv
#define glGetNamedFramebufferParameterivEXT __glGetNamedFramebufferParameterivEXT
#define glGetNamedProgramLocalParameterIivEXT __glGetNamedProgramLocalParameterIivEXT
#define glGetNamedProgramLocalParameterIuivEXT __glGetNamedProgramLocalParameterIuivEXT
#define glGetNamedProgramLocalParameterdvEXT __glGetNamedProgramLocalParameterdvEXT
#define glGetNamedProgramLocalParameterfvEXT __glGetNamedProgramLocalParameterfvEXT
#define glGetNamedProgramStringEXT __glGetNamedProgramStringEXT
#define glGetNamedProgramivEXT __glGetNamedProgramivEXT
#define glGetNamedRenderbufferParameteriv __glGetNamedRenderbufferParameteriv
#define glGetNamedRenderbufferParameterivEXT __glGetNamedRenderbufferParameterivEXT
#define glGetNamedStringARB __glGetNamedStringARB
#define glGetNamedStringivARB __glGetNamedStringivARB
#define glGetNextPerfQueryIdINTEL __glGetNextPerfQueryIdINTEL
#define glGetObjectBufferfvATI __glGetObjectBufferfvATI
#define glGetObjectBufferivATI __glGetObjectBufferivATI
#define glGetObjectLabel __glGetObjectLabel
#define glGetObjectLabelEXT __glGetObjectLabelEXT
#define glGetObjectLabelKHR __glGetObjectLabelKHR
#define glGetObjectParameterfvARB __glGetObjectParameterfvARB
#define glGetObjectParameterivAPPLE __glGetObjectParameterivAPPLE
#define glGetObjectParameterivARB __glGetObjectParameterivARB
#define glGetObjectPtrLabel __glGetObjectPtrLabel
#define glGetObjectPtrLabelKHR __glGetObjectPtrLabelKHR
#define glGetOcclusionQueryivNV __glGetOcclusionQueryivNV
#define glGetOcclusionQueryuivNV __glGetOcclusionQueryuivNV
#define glGetPathColorGenfvNV __glGetPathColorGenfvNV
#define glGetPathColorGenivNV __glGetPathColorGenivNV
#define glGetPathCommandsNV __glGetPathCommandsNV
#define glGetPathCoordsNV __glGetPathCoordsNV
#define glGetPathDashArrayNV __glGetPathDashArrayNV
#define glGetPathLengthNV __glGetPathLengthNV
#define glGetPathMetricRangeNV __glGetPathMetricRangeNV
#define glGetPathMetricsNV __glGetPathMetricsNV
#define glGetPathParameterfvNV __glGetPathParameterfvNV
#define glGetPathParameterivNV __glGetPathParameterivNV
#define glGetPathSpacingNV __glGetPathSpacingNV
#define glGetPathTexGenfvNV __glGetPathTexGenfvNV
#define glGetPathTexGenivNV __glGetPathTexGenivNV
#define glGetPerfCounterInfoINTEL __glGetPerfCounterInfoINTEL
#define glGetPerfMonitorCounterDataAMD __glGetPerfMonitorCounterDataAMD
#define glGetPerfMonitorCounterInfoAMD __glGetPerfMonitorCounterInfoAMD
#define glGetPerfMonitorCounterStringAMD __glGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCountersAMD __glGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD __glGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorGroupsAMD __glGetPerfMonitorGroupsAMD
#define glGetPerfQueryDataINTEL __glGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL __glGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL __glGetPerfQueryInfoINTEL
#define glGetPixelMapfv __glGetPixelMapfv
#define glGetPixelMapuiv __glGetPixelMapuiv
#define glGetPixelMapusv __glGetPixelMapusv
#define glGetPixelMapxv __glGetPixelMapxv
#define glGetPixelTexGenParameterfvSGIS __glGetPixelTexGenParameterfvSGIS
#define glGetPixelTexGenParameterivSGIS __glGetPixelTexGenParameterivSGIS
#define glGetPixelTransformParameterfvEXT __glGetPixelTransformParameterfvEXT
#define glGetPixelTransformParameterivEXT __glGetPixelTransformParameterivEXT
#define glGetPointerIndexedvEXT __glGetPointerIndexedvEXT
#define glGetPointeri_vEXT __glGetPointeri_vEXT
#define glGetPointerv __glGetPointerv
#define glGetPointervEXT __glGetPointervEXT
#define glGetPointervKHR __glGetPointervKHR
#define glGetPolygonStipple __glGetPolygonStipple
#define glGetProgramBinary __glGetProgramBinary
#define glGetProgramBinaryOES __glGetProgramBinaryOES
#define glGetProgramEnvParameterIivNV __glGetProgramEnvParameterIivNV
#define glGetProgramEnvParameterIuivNV __glGetProgramEnvParameterIuivNV
#define glGetProgramEnvParameterdvARB __glGetProgramEnvParameterdvARB
#define glGetProgramEnvParameterfvARB __glGetProgramEnvParameterfvARB
#define glGetProgramInfoLog __glGetProgramInfoLog
#define glGetProgramInterfaceiv __glGetProgramInterfaceiv
#define glGetProgramLocalParameterIivNV __glGetProgramLocalParameterIivNV
#define glGetProgramLocalParameterIuivNV __glGetProgramLocalParameterIuivNV
#define glGetProgramLocalParameterdvARB __glGetProgramLocalParameterdvARB
#define glGetProgramLocalParameterfvARB __glGetProgramLocalParameterfvARB
#define glGetProgramNamedParameterdvNV __glGetProgramNamedParameterdvNV
#define glGetProgramNamedParameterfvNV __glGetProgramNamedParameterfvNV
#define glGetProgramParameterdvNV __glGetProgramParameterdvNV
#define glGetProgramParameterfvNV __glGetProgramParameterfvNV
#define glGetProgramPipelineInfoLog __glGetProgramPipelineInfoLog
#define glGetProgramPipelineInfoLogEXT __glGetProgramPipelineInfoLogEXT
#define glGetProgramPipelineiv __glGetProgramPipelineiv
#define glGetProgramPipelineivEXT __glGetProgramPipelineivEXT
#define glGetProgramResourceIndex __glGetProgramResourceIndex
#define glGetProgramResourceLocation __glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex __glGetProgramResourceLocationIndex
#define glGetProgramResourceName __glGetProgramResourceName
#define glGetProgramResourcefvNV __glGetProgramResourcefvNV
#define glGetProgramResourceiv __glGetProgramResourceiv
#define glGetProgramStageiv __glGetProgramStageiv
#define glGetProgramStringARB __glGetProgramStringARB
#define glGetProgramStringNV __glGetProgramStringNV
#define glGetProgramSubroutineParameteruivNV __glGetProgramSubroutineParameteruivNV
#define glGetProgramiv __glGetProgramiv
#define glGetProgramivARB __glGetProgramivARB
#define glGetProgramivNV __glGetProgramivNV
#define glGetQueryBufferObjecti64v __glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv __glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v __glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv __glGetQueryBufferObjectuiv
#define glGetQueryIndexediv __glGetQueryIndexediv
#define glGetQueryObjecti64v __glGetQueryObjecti64v
#define glGetQueryObjecti64vEXT __glGetQueryObjecti64vEXT
#define glGetQueryObjectiv __glGetQueryObjectiv
#define glGetQueryObjectivARB __glGetQueryObjectivARB
#define glGetQueryObjectivEXT __glGetQueryObjectivEXT
#define glGetQueryObjectui64v __glGetQueryObjectui64v
#define glGetQueryObjectui64vEXT __glGetQueryObjectui64vEXT
#define glGetQueryObjectuiv __glGetQueryObjectuiv
#define glGetQueryObjectuivARB __glGetQueryObjectuivARB
#define glGetQueryObjectuivEXT __glGetQueryObjectuivEXT
#define glGetQueryiv __glGetQueryiv
#define glGetQueryivARB __glGetQueryivARB
#define glGetQueryivEXT __glGetQueryivEXT
#define glGetRenderbufferParameteriv __glGetRenderbufferParameteriv
#define glGetRenderbufferParameterivEXT __glGetRenderbufferParameterivEXT
#define glGetRenderbufferParameterivOES __glGetRenderbufferParameterivOES
#define glGetSamplerParameterIiv __glGetSamplerParameterIiv
#define glGetSamplerParameterIivEXT __glGetSamplerParameterIivEXT
#define glGetSamplerParameterIivOES __glGetSamplerParameterIivOES
#define glGetSamplerParameterIuiv __glGetSamplerParameterIuiv
#define glGetSamplerParameterIuivEXT __glGetSamplerParameterIuivEXT
#define glGetSamplerParameterIuivOES __glGetSamplerParameterIuivOES
#define glGetSamplerParameterfv __glGetSamplerParameterfv
#define glGetSamplerParameteriv __glGetSamplerParameteriv
#define glGetSeparableFilter __glGetSeparableFilter
#define glGetSeparableFilterEXT __glGetSeparableFilterEXT
#define glGetShaderInfoLog __glGetShaderInfoLog
#define glGetShaderPrecisionFormat __glGetShaderPrecisionFormat
#define glGetShaderSource __glGetShaderSource
#define glGetShaderSourceARB __glGetShaderSourceARB
#define glGetShaderiv __glGetShaderiv
#define glGetSharpenTexFuncSGIS __glGetSharpenTexFuncSGIS
#define glGetStageIndexNV __glGetStageIndexNV
#define glGetString __glGetString
#define glGetStringi __glGetStringi
#define glGetSubroutineIndex __glGetSubroutineIndex
#define glGetSubroutineUniformLocation __glGetSubroutineUniformLocation
#define glGetSynciv __glGetSynciv
#define glGetSyncivAPPLE __glGetSyncivAPPLE
#define glGetTexBumpParameterfvATI __glGetTexBumpParameterfvATI
#define glGetTexBumpParameterivATI __glGetTexBumpParameterivATI
#define glGetTexEnvfv __glGetTexEnvfv
#define glGetTexEnviv __glGetTexEnviv
#define glGetTexEnvxv __glGetTexEnvxv
#define glGetTexEnvxvOES __glGetTexEnvxvOES
#define glGetTexFilterFuncSGIS __glGetTexFilterFuncSGIS
#define glGetTexGendv __glGetTexGendv
#define glGetTexGenfv __glGetTexGenfv
#define glGetTexGenfvOES __glGetTexGenfvOES
#define glGetTexGeniv __glGetTexGeniv
#define glGetTexGenivOES __glGetTexGenivOES
#define glGetTexGenxvOES __glGetTexGenxvOES
#define glGetTexImage __glGetTexImage
#define glGetTexLevelParameterfv __glGetTexLevelParameterfv
#define glGetTexLevelParameteriv __glGetTexLevelParameteriv
#define glGetTexLevelParameterxvOES __glGetTexLevelParameterxvOES
#define glGetTexParameterIiv __glGetTexParameterIiv
#define glGetTexParameterIivEXT __glGetTexParameterIivEXT
#define glGetTexParameterIivOES __glGetTexParameterIivOES
#define glGetTexParameterIuiv __glGetTexParameterIuiv
#define glGetTexParameterIuivEXT __glGetTexParameterIuivEXT
#define glGetTexParameterIuivOES __glGetTexParameterIuivOES
#define glGetTexParameterPointervAPPLE __glGetTexParameterPointervAPPLE
#define glGetTexParameterfv __glGetTexParameterfv
#define glGetTexParameteriv __glGetTexParameteriv
#define glGetTexParameterxv __glGetTexParameterxv
#define glGetTexParameterxvOES __glGetTexParameterxvOES
#define glGetTextureHandleARB __glGetTextureHandleARB
#define glGetTextureHandleNV __glGetTextureHandleNV
#define glGetTextureImage __glGetTextureImage
#define glGetTextureImageEXT __glGetTextureImageEXT
#define glGetTextureLevelParameterfv __glGetTextureLevelParameterfv
#define glGetTextureLevelParameterfvEXT __glGetTextureLevelParameterfvEXT
#define glGetTextureLevelParameteriv __glGetTextureLevelParameteriv
#define glGetTextureLevelParameterivEXT __glGetTextureLevelParameterivEXT
#define glGetTextureParameterIiv __glGetTextureParameterIiv
#define glGetTextureParameterIivEXT __glGetTextureParameterIivEXT
#define glGetTextureParameterIuiv __glGetTextureParameterIuiv
#define glGetTextureParameterIuivEXT __glGetTextureParameterIuivEXT
#define glGetTextureParameterfv __glGetTextureParameterfv
#define glGetTextureParameterfvEXT __glGetTextureParameterfvEXT
#define glGetTextureParameteriv __glGetTextureParameteriv
#define glGetTextureParameterivEXT __glGetTextureParameterivEXT
#define glGetTextureSamplerHandleARB __glGetTextureSamplerHandleARB
#define glGetTextureSamplerHandleNV __glGetTextureSamplerHandleNV
#define glGetTextureSubImage __glGetTextureSubImage
#define glGetTrackMatrixivNV __glGetTrackMatrixivNV
#define glGetTransformFeedbackVarying __glGetTransformFeedbackVarying
#define glGetTransformFeedbackVaryingEXT __glGetTransformFeedbackVaryingEXT
#define glGetTransformFeedbackVaryingNV __glGetTransformFeedbackVaryingNV
#define glGetTransformFeedbacki64_v __glGetTransformFeedbacki64_v
#define glGetTransformFeedbacki_v __glGetTransformFeedbacki_v
#define glGetTransformFeedbackiv __glGetTransformFeedbackiv
#define glGetTranslatedShaderSourceANGLE __glGetTranslatedShaderSourceANGLE
#define glGetUniformBlockIndex __glGetUniformBlockIndex
#define glGetUniformBufferSizeEXT __glGetUniformBufferSizeEXT
#define glGetUniformIndices __glGetUniformIndices
#define glGetUniformLocation __glGetUniformLocation
#define glGetUniformLocationARB __glGetUniformLocationARB
#define glGetUniformOffsetEXT __glGetUniformOffsetEXT
#define glGetUniformSubroutineuiv __glGetUniformSubroutineuiv
#define glGetUniformdv __glGetUniformdv
#define glGetUniformfv __glGetUniformfv
#define glGetUniformfvARB __glGetUniformfvARB
#define glGetUniformi64vNV __glGetUniformi64vNV
#define glGetUniformiv __glGetUniformiv
#define glGetUniformivARB __glGetUniformivARB
#define glGetUniformui64vNV __glGetUniformui64vNV
#define glGetUniformuiv __glGetUniformuiv
#define glGetUniformuivEXT __glGetUniformuivEXT
#define glGetVariantArrayObjectfvATI __glGetVariantArrayObjectfvATI
#define glGetVariantArrayObjectivATI __glGetVariantArrayObjectivATI
#define glGetVariantBooleanvEXT __glGetVariantBooleanvEXT
#define glGetVariantFloatvEXT __glGetVariantFloatvEXT
#define glGetVariantIntegervEXT __glGetVariantIntegervEXT
#define glGetVariantPointervEXT __glGetVariantPointervEXT
#define glGetVaryingLocationNV __glGetVaryingLocationNV
#define glGetVertexArrayIndexed64iv __glGetVertexArrayIndexed64iv
#define glGetVertexArrayIndexediv __glGetVertexArrayIndexediv
#define glGetVertexArrayIntegeri_vEXT __glGetVertexArrayIntegeri_vEXT
#define glGetVertexArrayIntegervEXT __glGetVertexArrayIntegervEXT
#define glGetVertexArrayPointeri_vEXT __glGetVertexArrayPointeri_vEXT
#define glGetVertexArrayPointervEXT __glGetVertexArrayPointervEXT
#define glGetVertexArrayiv __glGetVertexArrayiv
#define glGetVertexAttribArrayObjectfvATI __glGetVertexAttribArrayObjectfvATI
#define glGetVertexAttribArrayObjectivATI __glGetVertexAttribArrayObjectivATI
#define glGetVertexAttribIiv __glGetVertexAttribIiv
#define glGetVertexAttribIivEXT __glGetVertexAttribIivEXT
#define glGetVertexAttribIuiv __glGetVertexAttribIuiv
#define glGetVertexAttribIuivEXT __glGetVertexAttribIuivEXT
#define glGetVertexAttribLdv __glGetVertexAttribLdv
#define glGetVertexAttribLdvEXT __glGetVertexAttribLdvEXT
#define glGetVertexAttribLi64vNV __glGetVertexAttribLi64vNV
#define glGetVertexAttribLui64vARB __glGetVertexAttribLui64vARB
#define glGetVertexAttribLui64vNV __glGetVertexAttribLui64vNV
#define glGetVertexAttribPointerv __glGetVertexAttribPointerv
#define glGetVertexAttribPointervARB __glGetVertexAttribPointervARB
#define glGetVertexAttribPointervNV __glGetVertexAttribPointervNV
#define glGetVertexAttribdv __glGetVertexAttribdv
#define glGetVertexAttribdvARB __glGetVertexAttribdvARB
#define glGetVertexAttribdvNV __glGetVertexAttribdvNV
#define glGetVertexAttribfv __glGetVertexAttribfv
#define glGetVertexAttribfvARB __glGetVertexAttribfvARB
#define glGetVertexAttribfvNV __glGetVertexAttribfvNV
#define glGetVertexAttribiv __glGetVertexAttribiv
#define glGetVertexAttribivARB __glGetVertexAttribivARB
#define glGetVertexAttribivNV __glGetVertexAttribivNV
#define glGetVideoCaptureStreamdvNV __glGetVideoCaptureStreamdvNV
#define glGetVideoCaptureStreamfvNV __glGetVideoCaptureStreamfvNV
#define glGetVideoCaptureStreamivNV __glGetVideoCaptureStreamivNV
#define glGetVideoCaptureivNV __glGetVideoCaptureivNV
#define glGetVideoi64vNV __glGetVideoi64vNV
#define glGetVideoivNV __glGetVideoivNV
#define glGetVideoui64vNV __glGetVideoui64vNV
#define glGetVideouivNV __glGetVideouivNV
#define glGetnColorTable __glGetnColorTable
#define glGetnColorTableARB __glGetnColorTableARB
#define glGetnCompressedTexImage __glGetnCompressedTexImage
#define glGetnCompressedTexImageARB __glGetnCompressedTexImageARB
#define glGetnConvolutionFilter __glGetnConvolutionFilter
#define glGetnConvolutionFilterARB __glGetnConvolutionFilterARB
#define glGetnHistogram __glGetnHistogram
#define glGetnHistogramARB __glGetnHistogramARB
#define glGetnMapdv __glGetnMapdv
#define glGetnMapdvARB __glGetnMapdvARB
#define glGetnMapfv __glGetnMapfv
#define glGetnMapfvARB __glGetnMapfvARB
#define glGetnMapiv __glGetnMapiv
#define glGetnMapivARB __glGetnMapivARB
#define glGetnMinmax __glGetnMinmax
#define glGetnMinmaxARB __glGetnMinmaxARB
#define glGetnPixelMapfv __glGetnPixelMapfv
#define glGetnPixelMapfvARB __glGetnPixelMapfvARB
#define glGetnPixelMapuiv __glGetnPixelMapuiv
#define glGetnPixelMapuivARB __glGetnPixelMapuivARB
#define glGetnPixelMapusv __glGetnPixelMapusv
#define glGetnPixelMapusvARB __glGetnPixelMapusvARB
#define glGetnPolygonStipple __glGetnPolygonStipple
#define glGetnPolygonStippleARB __glGetnPolygonStippleARB
#define glGetnSeparableFilter __glGetnSeparableFilter
#define glGetnSeparableFilterARB __glGetnSeparableFilterARB
#define glGetnTexImage __glGetnTexImage
#define glGetnTexImageARB __glGetnTexImageARB
#define glGetnUniformdv __glGetnUniformdv
#define glGetnUniformdvARB __glGetnUniformdvARB
#define glGetnUniformfv __glGetnUniformfv
#define glGetnUniformfvARB __glGetnUniformfvARB
#define glGetnUniformfvEXT __glGetnUniformfvEXT
#define glGetnUniformfvKHR __glGetnUniformfvKHR
#define glGetnUniformiv __glGetnUniformiv
#define glGetnUniformivARB __glGetnUniformivARB
#define glGetnUniformivEXT __glGetnUniformivEXT
#define glGetnUniformivKHR __glGetnUniformivKHR
#define glGetnUniformuiv __glGetnUniformuiv
#define glGetnUniformuivARB __glGetnUniformuivARB
#define glGetnUniformuivKHR __glGetnUniformuivKHR
#define glGlobalAlphaFactorbSUN __glGlobalAlphaFactorbSUN
#define glGlobalAlphaFactordSUN __glGlobalAlphaFactordSUN
#define glGlobalAlphaFactorfSUN __glGlobalAlphaFactorfSUN
#define glGlobalAlphaFactoriSUN __glGlobalAlphaFactoriSUN
#define glGlobalAlphaFactorsSUN __glGlobalAlphaFactorsSUN
#define glGlobalAlphaFactorubSUN __glGlobalAlphaFactorubSUN
#define glGlobalAlphaFactoruiSUN __glGlobalAlphaFactoruiSUN
#define glGlobalAlphaFactorusSUN __glGlobalAlphaFactorusSUN
#define glHint __glHint
#define glHintPGI __glHintPGI
#define glHistogram __glHistogram
#define glHistogramEXT __glHistogramEXT
#define glIglooInterfaceSGIX __glIglooInterfaceSGIX
#define glImageTransformParameterfHP __glImageTransformParameterfHP
#define glImageTransformParameterfvHP __glImageTransformParameterfvHP
#define glImageTransformParameteriHP __glImageTransformParameteriHP
#define glImageTransformParameterivHP __glImageTransformParameterivHP
#define glImportSyncEXT __glImportSyncEXT
#define glIndexFormatNV __glIndexFormatNV
#define glIndexFuncEXT __glIndexFuncEXT
#define glIndexMask __glIndexMask
#define glIndexMaterialEXT __glIndexMaterialEXT
#define glIndexPointer __glIndexPointer
#define glIndexPointerEXT __glIndexPointerEXT
#define glIndexPointerListIBM __glIndexPointerListIBM
#define glIndexd __glIndexd
#define glIndexdv __glIndexdv
#define glIndexf __glIndexf
#define glIndexfv __glIndexfv
#define glIndexi __glIndexi
#define glIndexiv __glIndexiv
#define glIndexs __glIndexs
#define glIndexsv __glIndexsv
#define glIndexub __glIndexub
#define glIndexubv __glIndexubv
#define glIndexxOES __glIndexxOES
#define glIndexxvOES __glIndexxvOES
#define glInitNames __glInitNames
#define glInsertComponentEXT __glInsertComponentEXT
#define glInsertEventMarkerEXT __glInsertEventMarkerEXT
#define glInstrumentsBufferSGIX __glInstrumentsBufferSGIX
#define glInterleavedArrays __glInterleavedArrays
#define glInterpolatePathsNV __glInterpolatePathsNV
#define glInvalidateBufferData __glInvalidateBufferData
#define glInvalidateBufferSubData __glInvalidateBufferSubData
#define glInvalidateFramebuffer __glInvalidateFramebuffer
#define glInvalidateNamedFramebufferData __glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData __glInvalidateNamedFramebufferSubData
#define glInvalidateSubFramebuffer __glInvalidateSubFramebuffer
#define glInvalidateTexImage __glInvalidateTexImage
#define glInvalidateTexSubImage __glInvalidateTexSubImage
#define glIsAsyncMarkerSGIX __glIsAsyncMarkerSGIX
#define glIsBuffer __glIsBuffer
#define glIsBufferARB __glIsBufferARB
#define glIsBufferResidentNV __glIsBufferResidentNV
#define glIsCommandListNV __glIsCommandListNV
#define glIsEnabled __glIsEnabled
#define glIsEnabledIndexedEXT __glIsEnabledIndexedEXT
#define glIsEnabledi __glIsEnabledi
#define glIsEnablediEXT __glIsEnablediEXT
#define glIsEnablediOES __glIsEnablediOES
#define glIsEnablediNV __glIsEnablediNV
#define glIsFenceAPPLE __glIsFenceAPPLE
#define glIsFenceNV __glIsFenceNV
#define glIsFramebuffer __glIsFramebuffer
#define glIsFramebufferEXT __glIsFramebufferEXT
#define glIsFramebufferOES __glIsFramebufferOES
#define glIsImageHandleResidentARB __glIsImageHandleResidentARB
#define glIsImageHandleResidentNV __glIsImageHandleResidentNV
#define glIsList __glIsList
#define glIsNameAMD __glIsNameAMD
#define glIsNamedBufferResidentNV __glIsNamedBufferResidentNV
#define glIsNamedStringARB __glIsNamedStringARB
#define glIsObjectBufferATI __glIsObjectBufferATI
#define glIsOcclusionQueryNV __glIsOcclusionQueryNV
#define glIsPathNV __glIsPathNV
#define glIsPointInFillPathNV __glIsPointInFillPathNV
#define glIsPointInStrokePathNV __glIsPointInStrokePathNV
#define glIsProgram __glIsProgram
#define glIsProgramARB __glIsProgramARB
#define glIsProgramNV __glIsProgramNV
#define glIsProgramPipeline __glIsProgramPipeline
#define glIsProgramPipelineEXT __glIsProgramPipelineEXT
#define glIsQuery __glIsQuery
#define glIsQueryARB __glIsQueryARB
#define glIsQueryEXT __glIsQueryEXT
#define glIsRenderbuffer __glIsRenderbuffer
#define glIsRenderbufferEXT __glIsRenderbufferEXT
#define glIsRenderbufferOES __glIsRenderbufferOES
#define glIsSampler __glIsSampler
#define glIsShader __glIsShader
#define glIsStateNV __glIsStateNV
#define glIsSync __glIsSync
#define glIsSyncAPPLE __glIsSyncAPPLE
#define glIsTexture __glIsTexture
#define glIsTextureEXT __glIsTextureEXT
#define glIsTextureHandleResidentARB __glIsTextureHandleResidentARB
#define glIsTextureHandleResidentNV __glIsTextureHandleResidentNV
#define glIsTransformFeedback __glIsTransformFeedback
#define glIsTransformFeedbackNV __glIsTransformFeedbackNV
#define glIsVariantEnabledEXT __glIsVariantEnabledEXT
#define glIsVertexArray __glIsVertexArray
#define glIsVertexArrayAPPLE __glIsVertexArrayAPPLE
#define glIsVertexArrayOES __glIsVertexArrayOES
#define glIsVertexAttribEnabledAPPLE __glIsVertexAttribEnabledAPPLE
#define glLabelObjectEXT __glLabelObjectEXT
#define glLightEnviSGIX __glLightEnviSGIX
#define glLightModelf __glLightModelf
#define glLightModelfv __glLightModelfv
#define glLightModeli __glLightModeli
#define glLightModeliv __glLightModeliv
#define glLightModelx __glLightModelx
#define glLightModelxOES __glLightModelxOES
#define glLightModelxv __glLightModelxv
#define glLightModelxvOES __glLightModelxvOES
#define glLightf __glLightf
#define glLightfv __glLightfv
#define glLighti __glLighti
#define glLightiv __glLightiv
#define glLightx __glLightx
#define glLightxOES __glLightxOES
#define glLightxv __glLightxv
#define glLightxvOES __glLightxvOES
#define glLineStipple __glLineStipple
#define glLineWidth __glLineWidth
#define glLineWidthx __glLineWidthx
#define glLineWidthxOES __glLineWidthxOES
#define glLinkProgram __glLinkProgram
#define glLinkProgramARB __glLinkProgramARB
#define glListBase __glListBase
#define glListDrawCommandsStatesClientNV __glListDrawCommandsStatesClientNV
#define glListParameterfSGIX __glListParameterfSGIX
#define glListParameterfvSGIX __glListParameterfvSGIX
#define glListParameteriSGIX __glListParameteriSGIX
#define glListParameterivSGIX __glListParameterivSGIX
#define glLoadIdentity __glLoadIdentity
#define glLoadIdentityDeformationMapSGIX __glLoadIdentityDeformationMapSGIX
#define glLoadMatrixd __glLoadMatrixd
#define glLoadMatrixf __glLoadMatrixf
#define glLoadMatrixx __glLoadMatrixx
#define glLoadMatrixxOES __glLoadMatrixxOES
#define glLoadName __glLoadName
#define glLoadPaletteFromModelViewMatrixOES __glLoadPaletteFromModelViewMatrixOES
#define glLoadProgramNV __glLoadProgramNV
#define glLoadTransposeMatrixd __glLoadTransposeMatrixd
#define glLoadTransposeMatrixdARB __glLoadTransposeMatrixdARB
#define glLoadTransposeMatrixf __glLoadTransposeMatrixf
#define glLoadTransposeMatrixfARB __glLoadTransposeMatrixfARB
#define glLoadTransposeMatrixxOES __glLoadTransposeMatrixxOES
#define glLockArraysEXT __glLockArraysEXT
#define glLogicOp __glLogicOp
#define glMakeBufferNonResidentNV __glMakeBufferNonResidentNV
#define glMakeBufferResidentNV __glMakeBufferResidentNV
#define glMakeImageHandleNonResidentARB __glMakeImageHandleNonResidentARB
#define glMakeImageHandleNonResidentNV __glMakeImageHandleNonResidentNV
#define glMakeImageHandleResidentARB __glMakeImageHandleResidentARB
#define glMakeImageHandleResidentNV __glMakeImageHandleResidentNV
#define glMakeNamedBufferNonResidentNV __glMakeNamedBufferNonResidentNV
#define glMakeNamedBufferResidentNV __glMakeNamedBufferResidentNV
#define glMakeTextureHandleNonResidentARB __glMakeTextureHandleNonResidentARB
#define glMakeTextureHandleNonResidentNV __glMakeTextureHandleNonResidentNV
#define glMakeTextureHandleResidentARB __glMakeTextureHandleResidentARB
#define glMakeTextureHandleResidentNV __glMakeTextureHandleResidentNV
#define glMap1d __glMap1d
#define glMap1f __glMap1f
#define glMap1xOES __glMap1xOES
#define glMap2d __glMap2d
#define glMap2f __glMap2f
#define glMap2xOES __glMap2xOES
#define glMapBuffer __glMapBuffer
#define glMapBufferARB __glMapBufferARB
#define glMapBufferOES __glMapBufferOES
#define glMapBufferRange __glMapBufferRange
#define glMapBufferRangeEXT __glMapBufferRangeEXT
#define glMapControlPointsNV __glMapControlPointsNV
#define glMapGrid1d __glMapGrid1d
#define glMapGrid1f __glMapGrid1f
#define glMapGrid1xOES __glMapGrid1xOES
#define glMapGrid2d __glMapGrid2d
#define glMapGrid2f __glMapGrid2f
#define glMapGrid2xOES __glMapGrid2xOES
#define glMapNamedBuffer __glMapNamedBuffer
#define glMapNamedBufferEXT __glMapNamedBufferEXT
#define glMapNamedBufferRange __glMapNamedBufferRange
#define glMapNamedBufferRangeEXT __glMapNamedBufferRangeEXT
#define glMapObjectBufferATI __glMapObjectBufferATI
#define glMapParameterfvNV __glMapParameterfvNV
#define glMapParameterivNV __glMapParameterivNV
#define glMapTexture2DINTEL __glMapTexture2DINTEL
#define glMapVertexAttrib1dAPPLE __glMapVertexAttrib1dAPPLE
#define glMapVertexAttrib1fAPPLE __glMapVertexAttrib1fAPPLE
#define glMapVertexAttrib2dAPPLE __glMapVertexAttrib2dAPPLE
#define glMapVertexAttrib2fAPPLE __glMapVertexAttrib2fAPPLE
#define glMaterialf __glMaterialf
#define glMaterialfv __glMaterialfv
#define glMateriali __glMateriali
#define glMaterialiv __glMaterialiv
#define glMaterialx __glMaterialx
#define glMaterialxOES __glMaterialxOES
#define glMaterialxv __glMaterialxv
#define glMaterialxvOES __glMaterialxvOES
#define glMatrixFrustumEXT __glMatrixFrustumEXT
#define glMatrixIndexPointerARB __glMatrixIndexPointerARB
#define glMatrixIndexPointerOES __glMatrixIndexPointerOES
#define glMatrixIndexubvARB __glMatrixIndexubvARB
#define glMatrixIndexuivARB __glMatrixIndexuivARB
#define glMatrixIndexusvARB __glMatrixIndexusvARB
#define glMatrixLoad3x2fNV __glMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV __glMatrixLoad3x3fNV
#define glMatrixLoadIdentityEXT __glMatrixLoadIdentityEXT
#define glMatrixLoadTranspose3x3fNV __glMatrixLoadTranspose3x3fNV
#define glMatrixLoadTransposedEXT __glMatrixLoadTransposedEXT
#define glMatrixLoadTransposefEXT __glMatrixLoadTransposefEXT
#define glMatrixLoaddEXT __glMatrixLoaddEXT
#define glMatrixLoadfEXT __glMatrixLoadfEXT
#define glMatrixMode __glMatrixMode
#define glMatrixMult3x2fNV __glMatrixMult3x2fNV
#define glMatrixMult3x3fNV __glMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV __glMatrixMultTranspose3x3fNV
#define glMatrixMultTransposedEXT __glMatrixMultTransposedEXT
#define glMatrixMultTransposefEXT __glMatrixMultTransposefEXT
#define glMatrixMultdEXT __glMatrixMultdEXT
#define glMatrixMultfEXT __glMatrixMultfEXT
#define glMatrixOrthoEXT __glMatrixOrthoEXT
#define glMatrixPopEXT __glMatrixPopEXT
#define glMatrixPushEXT __glMatrixPushEXT
#define glMatrixRotatedEXT __glMatrixRotatedEXT
#define glMatrixRotatefEXT __glMatrixRotatefEXT
#define glMatrixScaledEXT __glMatrixScaledEXT
#define glMatrixScalefEXT __glMatrixScalefEXT
#define glMatrixTranslatedEXT __glMatrixTranslatedEXT
#define glMatrixTranslatefEXT __glMatrixTranslatefEXT
#define glMemoryBarrier __glMemoryBarrier
#define glMemoryBarrierByRegion __glMemoryBarrierByRegion
#define glMemoryBarrierEXT __glMemoryBarrierEXT
#define glMinSampleShading __glMinSampleShading
#define glMinSampleShadingARB __glMinSampleShadingARB
#define glMinSampleShadingOES __glMinSampleShadingOES
#define glMinmax __glMinmax
#define glMinmaxEXT __glMinmaxEXT
#define glMultMatrixd __glMultMatrixd
#define glMultMatrixf __glMultMatrixf
#define glMultMatrixx __glMultMatrixx
#define glMultMatrixxOES __glMultMatrixxOES
#define glMultTransposeMatrixd __glMultTransposeMatrixd
#define glMultTransposeMatrixdARB __glMultTransposeMatrixdARB
#define glMultTransposeMatrixf __glMultTransposeMatrixf
#define glMultTransposeMatrixfARB __glMultTransposeMatrixfARB
#define glMultTransposeMatrixxOES __glMultTransposeMatrixxOES
#define glMultiDrawArrays __glMultiDrawArrays
#define glMultiDrawArraysEXT __glMultiDrawArraysEXT
#define glMultiDrawArraysIndirect __glMultiDrawArraysIndirect
#define glMultiDrawArraysIndirectAMD __glMultiDrawArraysIndirectAMD
#define glMultiDrawArraysIndirectEXT __glMultiDrawArraysIndirectEXT
#define glMultiDrawArraysIndirectBindlessCountNV __glMultiDrawArraysIndirectBindlessCountNV
#define glMultiDrawArraysIndirectBindlessNV __glMultiDrawArraysIndirectBindlessNV
#define glMultiDrawArraysIndirectCountARB __glMultiDrawArraysIndirectCountARB
#define glMultiDrawElementArrayAPPLE __glMultiDrawElementArrayAPPLE
#define glMultiDrawElements __glMultiDrawElements
#define glMultiDrawElementsBaseVertex __glMultiDrawElementsBaseVertex
#define glMultiDrawElementsBaseVertexEXT __glMultiDrawElementsBaseVertexEXT
#define glMultiDrawElementsBaseVertexOES __glMultiDrawElementsBaseVertexOES
#define glMultiDrawElementsEXT __glMultiDrawElementsEXT
#define glMultiDrawElementsIndirect __glMultiDrawElementsIndirect
#define glMultiDrawElementsIndirectEXT __glMultiDrawElementsIndirectEXT
#define glMultiDrawElementsIndirectAMD __glMultiDrawElementsIndirectAMD
#define glMultiDrawElementsIndirectBindlessCountNV __glMultiDrawElementsIndirectBindlessCountNV
#define glMultiDrawElementsIndirectBindlessNV __glMultiDrawElementsIndirectBindlessNV
#define glMultiDrawElementsIndirectCountARB __glMultiDrawElementsIndirectCountARB
#define glMultiDrawRangeElementArrayAPPLE __glMultiDrawRangeElementArrayAPPLE
#define glMultiModeDrawArraysIBM __glMultiModeDrawArraysIBM
#define glMultiModeDrawElementsIBM __glMultiModeDrawElementsIBM
#define glMultiTexBufferEXT __glMultiTexBufferEXT
#define glMultiTexCoord1bOES __glMultiTexCoord1bOES
#define glMultiTexCoord1bvOES __glMultiTexCoord1bvOES
#define glMultiTexCoord1d __glMultiTexCoord1d
#define glMultiTexCoord1dARB __glMultiTexCoord1dARB
#define glMultiTexCoord1dv __glMultiTexCoord1dv
#define glMultiTexCoord1dvARB __glMultiTexCoord1dvARB
#define glMultiTexCoord1f __glMultiTexCoord1f
#define glMultiTexCoord1fARB __glMultiTexCoord1fARB
#define glMultiTexCoord1fv __glMultiTexCoord1fv
#define glMultiTexCoord1fvARB __glMultiTexCoord1fvARB
#define glMultiTexCoord1hNV __glMultiTexCoord1hNV
#define glMultiTexCoord1hvNV __glMultiTexCoord1hvNV
#define glMultiTexCoord1i __glMultiTexCoord1i
#define glMultiTexCoord1iARB __glMultiTexCoord1iARB
#define glMultiTexCoord1iv __glMultiTexCoord1iv
#define glMultiTexCoord1ivARB __glMultiTexCoord1ivARB
#define glMultiTexCoord1s __glMultiTexCoord1s
#define glMultiTexCoord1sARB __glMultiTexCoord1sARB
#define glMultiTexCoord1sv __glMultiTexCoord1sv
#define glMultiTexCoord1svARB __glMultiTexCoord1svARB
#define glMultiTexCoord1xOES __glMultiTexCoord1xOES
#define glMultiTexCoord1xvOES __glMultiTexCoord1xvOES
#define glMultiTexCoord2bOES __glMultiTexCoord2bOES
#define glMultiTexCoord2bvOES __glMultiTexCoord2bvOES
#define glMultiTexCoord2d __glMultiTexCoord2d
#define glMultiTexCoord2dARB __glMultiTexCoord2dARB
#define glMultiTexCoord2dv __glMultiTexCoord2dv
#define glMultiTexCoord2dvARB __glMultiTexCoord2dvARB
#define glMultiTexCoord2f __glMultiTexCoord2f
#define glMultiTexCoord2fARB __glMultiTexCoord2fARB
#define glMultiTexCoord2fv __glMultiTexCoord2fv
#define glMultiTexCoord2fvARB __glMultiTexCoord2fvARB
#define glMultiTexCoord2hNV __glMultiTexCoord2hNV
#define glMultiTexCoord2hvNV __glMultiTexCoord2hvNV
#define glMultiTexCoord2i __glMultiTexCoord2i
#define glMultiTexCoord2iARB __glMultiTexCoord2iARB
#define glMultiTexCoord2iv __glMultiTexCoord2iv
#define glMultiTexCoord2ivARB __glMultiTexCoord2ivARB
#define glMultiTexCoord2s __glMultiTexCoord2s
#define glMultiTexCoord2sARB __glMultiTexCoord2sARB
#define glMultiTexCoord2sv __glMultiTexCoord2sv
#define glMultiTexCoord2svARB __glMultiTexCoord2svARB
#define glMultiTexCoord2xOES __glMultiTexCoord2xOES
#define glMultiTexCoord2xvOES __glMultiTexCoord2xvOES
#define glMultiTexCoord3bOES __glMultiTexCoord3bOES
#define glMultiTexCoord3bvOES __glMultiTexCoord3bvOES
#define glMultiTexCoord3d __glMultiTexCoord3d
#define glMultiTexCoord3dARB __glMultiTexCoord3dARB
#define glMultiTexCoord3dv __glMultiTexCoord3dv
#define glMultiTexCoord3dvARB __glMultiTexCoord3dvARB
#define glMultiTexCoord3f __glMultiTexCoord3f
#define glMultiTexCoord3fARB __glMultiTexCoord3fARB
#define glMultiTexCoord3fv __glMultiTexCoord3fv
#define glMultiTexCoord3fvARB __glMultiTexCoord3fvARB
#define glMultiTexCoord3hNV __glMultiTexCoord3hNV
#define glMultiTexCoord3hvNV __glMultiTexCoord3hvNV
#define glMultiTexCoord3i __glMultiTexCoord3i
#define glMultiTexCoord3iARB __glMultiTexCoord3iARB
#define glMultiTexCoord3iv __glMultiTexCoord3iv
#define glMultiTexCoord3ivARB __glMultiTexCoord3ivARB
#define glMultiTexCoord3s __glMultiTexCoord3s
#define glMultiTexCoord3sARB __glMultiTexCoord3sARB
#define glMultiTexCoord3sv __glMultiTexCoord3sv
#define glMultiTexCoord3svARB __glMultiTexCoord3svARB
#define glMultiTexCoord3xOES __glMultiTexCoord3xOES
#define glMultiTexCoord3xvOES __glMultiTexCoord3xvOES
#define glMultiTexCoord4bOES __glMultiTexCoord4bOES
#define glMultiTexCoord4bvOES __glMultiTexCoord4bvOES
#define glMultiTexCoord4d __glMultiTexCoord4d
#define glMultiTexCoord4dARB __glMultiTexCoord4dARB
#define glMultiTexCoord4dv __glMultiTexCoord4dv
#define glMultiTexCoord4dvARB __glMultiTexCoord4dvARB
#define glMultiTexCoord4f __glMultiTexCoord4f
#define glMultiTexCoord4fARB __glMultiTexCoord4fARB
#define glMultiTexCoord4fv __glMultiTexCoord4fv
#define glMultiTexCoord4fvARB __glMultiTexCoord4fvARB
#define glMultiTexCoord4hNV __glMultiTexCoord4hNV
#define glMultiTexCoord4hvNV __glMultiTexCoord4hvNV
#define glMultiTexCoord4i __glMultiTexCoord4i
#define glMultiTexCoord4iARB __glMultiTexCoord4iARB
#define glMultiTexCoord4iv __glMultiTexCoord4iv
#define glMultiTexCoord4ivARB __glMultiTexCoord4ivARB
#define glMultiTexCoord4s __glMultiTexCoord4s
#define glMultiTexCoord4sARB __glMultiTexCoord4sARB
#define glMultiTexCoord4sv __glMultiTexCoord4sv
#define glMultiTexCoord4svARB __glMultiTexCoord4svARB
#define glMultiTexCoord4x __glMultiTexCoord4x
#define glMultiTexCoord4xOES __glMultiTexCoord4xOES
#define glMultiTexCoord4xvOES __glMultiTexCoord4xvOES
#define glMultiTexCoordP1ui __glMultiTexCoordP1ui
#define glMultiTexCoordP1uiv __glMultiTexCoordP1uiv
#define glMultiTexCoordP2ui __glMultiTexCoordP2ui
#define glMultiTexCoordP2uiv __glMultiTexCoordP2uiv
#define glMultiTexCoordP3ui __glMultiTexCoordP3ui
#define glMultiTexCoordP3uiv __glMultiTexCoordP3uiv
#define glMultiTexCoordP4ui __glMultiTexCoordP4ui
#define glMultiTexCoordP4uiv __glMultiTexCoordP4uiv
#define glMultiTexCoordPointerEXT __glMultiTexCoordPointerEXT
#define glMultiTexEnvfEXT __glMultiTexEnvfEXT
#define glMultiTexEnvfvEXT __glMultiTexEnvfvEXT
#define glMultiTexEnviEXT __glMultiTexEnviEXT
#define glMultiTexEnvivEXT __glMultiTexEnvivEXT
#define glMultiTexGendEXT __glMultiTexGendEXT
#define glMultiTexGendvEXT __glMultiTexGendvEXT
#define glMultiTexGenfEXT __glMultiTexGenfEXT
#define glMultiTexGenfvEXT __glMultiTexGenfvEXT
#define glMultiTexGeniEXT __glMultiTexGeniEXT
#define glMultiTexGenivEXT __glMultiTexGenivEXT
#define glMultiTexImage1DEXT __glMultiTexImage1DEXT
#define glMultiTexImage2DEXT __glMultiTexImage2DEXT
#define glMultiTexImage3DEXT __glMultiTexImage3DEXT
#define glMultiTexParameterIivEXT __glMultiTexParameterIivEXT
#define glMultiTexParameterIuivEXT __glMultiTexParameterIuivEXT
#define glMultiTexParameterfEXT __glMultiTexParameterfEXT
#define glMultiTexParameterfvEXT __glMultiTexParameterfvEXT
#define glMultiTexParameteriEXT __glMultiTexParameteriEXT
#define glMultiTexParameterivEXT __glMultiTexParameterivEXT
#define glMultiTexRenderbufferEXT __glMultiTexRenderbufferEXT
#define glMultiTexSubImage1DEXT __glMultiTexSubImage1DEXT
#define glMultiTexSubImage2DEXT __glMultiTexSubImage2DEXT
#define glMultiTexSubImage3DEXT __glMultiTexSubImage3DEXT
#define glNamedBufferData __glNamedBufferData
#define glNamedBufferDataEXT __glNamedBufferDataEXT
#define glNamedBufferPageCommitmentARB __glNamedBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT __glNamedBufferPageCommitmentEXT
#define glNamedBufferStorage __glNamedBufferStorage
#define glNamedBufferStorageEXT __glNamedBufferStorageEXT
#define glNamedBufferSubData __glNamedBufferSubData
#define glNamedBufferSubDataEXT __glNamedBufferSubDataEXT
#define glNamedCopyBufferSubDataEXT __glNamedCopyBufferSubDataEXT
#define glNamedFramebufferDrawBuffer __glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers __glNamedFramebufferDrawBuffers
#define glNamedFramebufferParameteri __glNamedFramebufferParameteri
#define glNamedFramebufferParameteriEXT __glNamedFramebufferParameteriEXT
#define glNamedFramebufferReadBuffer __glNamedFramebufferReadBuffer
#define glNamedFramebufferRenderbuffer __glNamedFramebufferRenderbuffer
#define glNamedFramebufferRenderbufferEXT __glNamedFramebufferRenderbufferEXT
#define glNamedFramebufferTexture __glNamedFramebufferTexture
#define glNamedFramebufferTexture1DEXT __glNamedFramebufferTexture1DEXT
#define glNamedFramebufferTexture2DEXT __glNamedFramebufferTexture2DEXT
#define glNamedFramebufferTexture3DEXT __glNamedFramebufferTexture3DEXT
#define glNamedFramebufferTextureEXT __glNamedFramebufferTextureEXT
#define glNamedFramebufferTextureFaceEXT __glNamedFramebufferTextureFaceEXT
#define glNamedFramebufferTextureLayer __glNamedFramebufferTextureLayer
#define glNamedFramebufferTextureLayerEXT __glNamedFramebufferTextureLayerEXT
#define glNamedProgramLocalParameter4dEXT __glNamedProgramLocalParameter4dEXT
#define glNamedProgramLocalParameter4dvEXT __glNamedProgramLocalParameter4dvEXT
#define glNamedProgramLocalParameter4fEXT __glNamedProgramLocalParameter4fEXT
#define glNamedProgramLocalParameter4fvEXT __glNamedProgramLocalParameter4fvEXT
#define glNamedProgramLocalParameterI4iEXT __glNamedProgramLocalParameterI4iEXT
#define glNamedProgramLocalParameterI4ivEXT __glNamedProgramLocalParameterI4ivEXT
#define glNamedProgramLocalParameterI4uiEXT __glNamedProgramLocalParameterI4uiEXT
#define glNamedProgramLocalParameterI4uivEXT __glNamedProgramLocalParameterI4uivEXT
#define glNamedProgramLocalParameters4fvEXT __glNamedProgramLocalParameters4fvEXT
#define glNamedProgramLocalParametersI4ivEXT __glNamedProgramLocalParametersI4ivEXT
#define glNamedProgramLocalParametersI4uivEXT __glNamedProgramLocalParametersI4uivEXT
#define glNamedProgramStringEXT __glNamedProgramStringEXT
#define glNamedRenderbufferStorage __glNamedRenderbufferStorage
#define glNamedRenderbufferStorageEXT __glNamedRenderbufferStorageEXT
#define glNamedRenderbufferStorageMultisample __glNamedRenderbufferStorageMultisample
#define glNamedRenderbufferStorageMultisampleCoverageEXT __glNamedRenderbufferStorageMultisampleCoverageEXT
#define glNamedRenderbufferStorageMultisampleEXT __glNamedRenderbufferStorageMultisampleEXT
#define glNamedStringARB __glNamedStringARB
#define glNewList __glNewList
#define glNewObjectBufferATI __glNewObjectBufferATI
#define glNormal3b __glNormal3b
#define glNormal3bv __glNormal3bv
#define glNormal3d __glNormal3d
#define glNormal3dv __glNormal3dv
#define glNormal3f __glNormal3f
#define glNormal3fVertex3fSUN __glNormal3fVertex3fSUN
#define glNormal3fVertex3fvSUN __glNormal3fVertex3fvSUN
#define glNormal3fv __glNormal3fv
#define glNormal3hNV __glNormal3hNV
#define glNormal3hvNV __glNormal3hvNV
#define glNormal3i __glNormal3i
#define glNormal3iv __glNormal3iv
#define glNormal3s __glNormal3s
#define glNormal3sv __glNormal3sv
#define glNormal3x __glNormal3x
#define glNormal3xOES __glNormal3xOES
#define glNormal3xvOES __glNormal3xvOES
#define glNormalFormatNV __glNormalFormatNV
#define glNormalP3ui __glNormalP3ui
#define glNormalP3uiv __glNormalP3uiv
#define glNormalPointer __glNormalPointer
#define glNormalPointerEXT __glNormalPointerEXT
#define glNormalPointerListIBM __glNormalPointerListIBM
#define glNormalPointervINTEL __glNormalPointervINTEL
#define glNormalStream3bATI __glNormalStream3bATI
#define glNormalStream3bvATI __glNormalStream3bvATI
#define glNormalStream3dATI __glNormalStream3dATI
#define glNormalStream3dvATI __glNormalStream3dvATI
#define glNormalStream3fATI __glNormalStream3fATI
#define glNormalStream3fvATI __glNormalStream3fvATI
#define glNormalStream3iATI __glNormalStream3iATI
#define glNormalStream3ivATI __glNormalStream3ivATI
#define glNormalStream3sATI __glNormalStream3sATI
#define glNormalStream3svATI __glNormalStream3svATI
#define glObjectLabel __glObjectLabel
#define glObjectLabelKHR __glObjectLabelKHR
#define glObjectPtrLabel __glObjectPtrLabel
#define glObjectPtrLabelKHR __glObjectPtrLabelKHR
#define glObjectPurgeableAPPLE __glObjectPurgeableAPPLE
#define glObjectUnpurgeableAPPLE __glObjectUnpurgeableAPPLE
#define glOrtho __glOrtho
#define glOrthof __glOrthof
#define glOrthofOES __glOrthofOES
#define glOrthox __glOrthox
#define glOrthoxOES __glOrthoxOES
#define glPNTrianglesfATI __glPNTrianglesfATI
#define glPNTrianglesiATI __glPNTrianglesiATI
#define glPassTexCoordATI __glPassTexCoordATI
#define glPassThrough __glPassThrough
#define glPassThroughxOES __glPassThroughxOES
#define glPatchParameterfv __glPatchParameterfv
#define glPatchParameteri __glPatchParameteri
#define glPatchParameteriEXT __glPatchParameteriEXT
#define glPatchParameteriOES __glPatchParameteriOES
#define glPathColorGenNV __glPathColorGenNV
#define glPathCommandsNV __glPathCommandsNV
#define glPathCoordsNV __glPathCoordsNV
#define glPathCoverDepthFuncNV __glPathCoverDepthFuncNV
#define glPathDashArrayNV __glPathDashArrayNV
#define glPathFogGenNV __glPathFogGenNV
#define glPathGlyphIndexArrayNV __glPathGlyphIndexArrayNV
#define glPathGlyphIndexRangeNV __glPathGlyphIndexRangeNV
#define glPathGlyphRangeNV __glPathGlyphRangeNV
#define glPathGlyphsNV __glPathGlyphsNV
#define glPathMemoryGlyphIndexArrayNV __glPathMemoryGlyphIndexArrayNV
#define glPathParameterfNV __glPathParameterfNV
#define glPathParameterfvNV __glPathParameterfvNV
#define glPathParameteriNV __glPathParameteriNV
#define glPathParameterivNV __glPathParameterivNV
#define glPathStencilDepthOffsetNV __glPathStencilDepthOffsetNV
#define glPathStencilFuncNV __glPathStencilFuncNV
#define glPathStringNV __glPathStringNV
#define glPathSubCommandsNV __glPathSubCommandsNV
#define glPathSubCoordsNV __glPathSubCoordsNV
#define glPathTexGenNV __glPathTexGenNV
#define glPauseTransformFeedback __glPauseTransformFeedback
#define glPauseTransformFeedbackNV __glPauseTransformFeedbackNV
#define glPixelDataRangeNV __glPixelDataRangeNV
#define glPixelMapfv __glPixelMapfv
#define glPixelMapuiv __glPixelMapuiv
#define glPixelMapusv __glPixelMapusv
#define glPixelMapx __glPixelMapx
#define glPixelStoref __glPixelStoref
#define glPixelStorei __glPixelStorei
#define glPixelStorex __glPixelStorex
#define glPixelTexGenParameterfSGIS __glPixelTexGenParameterfSGIS
#define glPixelTexGenParameterfvSGIS __glPixelTexGenParameterfvSGIS
#define glPixelTexGenParameteriSGIS __glPixelTexGenParameteriSGIS
#define glPixelTexGenParameterivSGIS __glPixelTexGenParameterivSGIS
#define glPixelTexGenSGIX __glPixelTexGenSGIX
#define glPixelTransferf __glPixelTransferf
#define glPixelTransferi __glPixelTransferi
#define glPixelTransferxOES __glPixelTransferxOES
#define glPixelTransformParameterfEXT __glPixelTransformParameterfEXT
#define glPixelTransformParameterfvEXT __glPixelTransformParameterfvEXT
#define glPixelTransformParameteriEXT __glPixelTransformParameteriEXT
#define glPixelTransformParameterivEXT __glPixelTransformParameterivEXT
#define glPixelZoom __glPixelZoom
#define glPixelZoomxOES __glPixelZoomxOES
#define glPointAlongPathNV __glPointAlongPathNV
#define glPointParameterf __glPointParameterf
#define glPointParameterfARB __glPointParameterfARB
#define glPointParameterfEXT __glPointParameterfEXT
#define glPointParameterfSGIS __glPointParameterfSGIS
#define glPointParameterfv __glPointParameterfv
#define glPointParameterfvARB __glPointParameterfvARB
#define glPointParameterfvEXT __glPointParameterfvEXT
#define glPointParameterfvSGIS __glPointParameterfvSGIS
#define glPointParameteri __glPointParameteri
#define glPointParameteriNV __glPointParameteriNV
#define glPointParameteriv __glPointParameteriv
#define glPointParameterivNV __glPointParameterivNV
#define glPointParameterx __glPointParameterx
#define glPointParameterxOES __glPointParameterxOES
#define glPointParameterxv __glPointParameterxv
#define glPointParameterxvOES __glPointParameterxvOES
#define glPointSize __glPointSize
#define glPointSizePointerOES __glPointSizePointerOES
#define glPointSizex __glPointSizex
#define glPointSizexOES __glPointSizexOES
#define glPollAsyncSGIX __glPollAsyncSGIX
#define glPollInstrumentsSGIX __glPollInstrumentsSGIX
#define glPolygonMode __glPolygonMode
#define glPolygonModeNV __glPolygonModeNV
#define glPolygonOffset __glPolygonOffset
#define glPolygonOffsetEXT __glPolygonOffsetEXT
#define glPolygonOffsetx __glPolygonOffsetx
#define glPolygonOffsetxOES __glPolygonOffsetxOES
#define glPolygonOffsetClampEXT __glPolygonOffsetClampEXT
#define glPolygonStipple __glPolygonStipple
#define glPopAttrib __glPopAttrib
#define glPopClientAttrib __glPopClientAttrib
#define glPopDebugGroup __glPopDebugGroup
#define glPopDebugGroupKHR __glPopDebugGroupKHR
#define glPopGroupMarkerEXT __glPopGroupMarkerEXT
#define glPopMatrix __glPopMatrix
#define glPopName __glPopName
#define glPresentFrameDualFillNV __glPresentFrameDualFillNV
#define glPresentFrameKeyedNV __glPresentFrameKeyedNV
#define glPrimitiveBoundingBoxEXT __glPrimitiveBoundingBoxEXT
#define glPrimitiveBoundingBoxOES __glPrimitiveBoundingBoxOES
#define glPrimitiveRestartIndex __glPrimitiveRestartIndex
#define glPrimitiveRestartIndexNV __glPrimitiveRestartIndexNV
#define glPrimitiveRestartNV __glPrimitiveRestartNV
#define glPrioritizeTextures __glPrioritizeTextures
#define glPrioritizeTexturesEXT __glPrioritizeTexturesEXT
#define glPrioritizeTexturesxOES __glPrioritizeTexturesxOES
#define glProgramBinary __glProgramBinary
#define glProgramBinaryOES __glProgramBinaryOES
#define glProgramBufferParametersIivNV __glProgramBufferParametersIivNV
#define glProgramBufferParametersIuivNV __glProgramBufferParametersIuivNV
#define glProgramBufferParametersfvNV __glProgramBufferParametersfvNV
#define glProgramEnvParameter4dARB __glProgramEnvParameter4dARB
#define glProgramEnvParameter4dvARB __glProgramEnvParameter4dvARB
#define glProgramEnvParameter4fARB __glProgramEnvParameter4fARB
#define glProgramEnvParameter4fvARB __glProgramEnvParameter4fvARB
#define glProgramEnvParameterI4iNV __glProgramEnvParameterI4iNV
#define glProgramEnvParameterI4ivNV __glProgramEnvParameterI4ivNV
#define glProgramEnvParameterI4uiNV __glProgramEnvParameterI4uiNV
#define glProgramEnvParameterI4uivNV __glProgramEnvParameterI4uivNV
#define glProgramEnvParameters4fvEXT __glProgramEnvParameters4fvEXT
#define glProgramEnvParametersI4ivNV __glProgramEnvParametersI4ivNV
#define glProgramEnvParametersI4uivNV __glProgramEnvParametersI4uivNV
#define glProgramLocalParameter4dARB __glProgramLocalParameter4dARB
#define glProgramLocalParameter4dvARB __glProgramLocalParameter4dvARB
#define glProgramLocalParameter4fARB __glProgramLocalParameter4fARB
#define glProgramLocalParameter4fvARB __glProgramLocalParameter4fvARB
#define glProgramLocalParameterI4iNV __glProgramLocalParameterI4iNV
#define glProgramLocalParameterI4ivNV __glProgramLocalParameterI4ivNV
#define glProgramLocalParameterI4uiNV __glProgramLocalParameterI4uiNV
#define glProgramLocalParameterI4uivNV __glProgramLocalParameterI4uivNV
#define glProgramLocalParameters4fvEXT __glProgramLocalParameters4fvEXT
#define glProgramLocalParametersI4ivNV __glProgramLocalParametersI4ivNV
#define glProgramLocalParametersI4uivNV __glProgramLocalParametersI4uivNV
#define glProgramNamedParameter4dNV __glProgramNamedParameter4dNV
#define glProgramNamedParameter4dvNV __glProgramNamedParameter4dvNV
#define glProgramNamedParameter4fNV __glProgramNamedParameter4fNV
#define glProgramNamedParameter4fvNV __glProgramNamedParameter4fvNV
#define glProgramParameter4dNV __glProgramParameter4dNV
#define glProgramParameter4dvNV __glProgramParameter4dvNV
#define glProgramParameter4fNV __glProgramParameter4fNV
#define glProgramParameter4fvNV __glProgramParameter4fvNV
#define glProgramParameteri __glProgramParameteri
#define glProgramParameteriARB __glProgramParameteriARB
#define glProgramParameteriEXT __glProgramParameteriEXT
#define glProgramParameters4dvNV __glProgramParameters4dvNV
#define glProgramParameters4fvNV __glProgramParameters4fvNV
#define glProgramPathFragmentInputGenNV __glProgramPathFragmentInputGenNV
#define glProgramStringARB __glProgramStringARB
#define glProgramSubroutineParametersuivNV __glProgramSubroutineParametersuivNV
#define glProgramUniform1d __glProgramUniform1d
#define glProgramUniform1dEXT __glProgramUniform1dEXT
#define glProgramUniform1dv __glProgramUniform1dv
#define glProgramUniform1dvEXT __glProgramUniform1dvEXT
#define glProgramUniform1f __glProgramUniform1f
#define glProgramUniform1fEXT __glProgramUniform1fEXT
#define glProgramUniform1fv __glProgramUniform1fv
#define glProgramUniform1fvEXT __glProgramUniform1fvEXT
#define glProgramUniform1i __glProgramUniform1i
#define glProgramUniform1i64NV __glProgramUniform1i64NV
#define glProgramUniform1i64vNV __glProgramUniform1i64vNV
#define glProgramUniform1iEXT __glProgramUniform1iEXT
#define glProgramUniform1iv __glProgramUniform1iv
#define glProgramUniform1ivEXT __glProgramUniform1ivEXT
#define glProgramUniform1ui __glProgramUniform1ui
#define glProgramUniform1ui64NV __glProgramUniform1ui64NV
#define glProgramUniform1ui64vNV __glProgramUniform1ui64vNV
#define glProgramUniform1uiEXT __glProgramUniform1uiEXT
#define glProgramUniform1uiv __glProgramUniform1uiv
#define glProgramUniform1uivEXT __glProgramUniform1uivEXT
#define glProgramUniform2d __glProgramUniform2d
#define glProgramUniform2dEXT __glProgramUniform2dEXT
#define glProgramUniform2dv __glProgramUniform2dv
#define glProgramUniform2dvEXT __glProgramUniform2dvEXT
#define glProgramUniform2f __glProgramUniform2f
#define glProgramUniform2fEXT __glProgramUniform2fEXT
#define glProgramUniform2fv __glProgramUniform2fv
#define glProgramUniform2fvEXT __glProgramUniform2fvEXT
#define glProgramUniform2i __glProgramUniform2i
#define glProgramUniform2i64NV __glProgramUniform2i64NV
#define glProgramUniform2i64vNV __glProgramUniform2i64vNV
#define glProgramUniform2iEXT __glProgramUniform2iEXT
#define glProgramUniform2iv __glProgramUniform2iv
#define glProgramUniform2ivEXT __glProgramUniform2ivEXT
#define glProgramUniform2ui __glProgramUniform2ui
#define glProgramUniform2ui64NV __glProgramUniform2ui64NV
#define glProgramUniform2ui64vNV __glProgramUniform2ui64vNV
#define glProgramUniform2uiEXT __glProgramUniform2uiEXT
#define glProgramUniform2uiv __glProgramUniform2uiv
#define glProgramUniform2uivEXT __glProgramUniform2uivEXT
#define glProgramUniform3d __glProgramUniform3d
#define glProgramUniform3dEXT __glProgramUniform3dEXT
#define glProgramUniform3dv __glProgramUniform3dv
#define glProgramUniform3dvEXT __glProgramUniform3dvEXT
#define glProgramUniform3f __glProgramUniform3f
#define glProgramUniform3fEXT __glProgramUniform3fEXT
#define glProgramUniform3fv __glProgramUniform3fv
#define glProgramUniform3fvEXT __glProgramUniform3fvEXT
#define glProgramUniform3i __glProgramUniform3i
#define glProgramUniform3i64NV __glProgramUniform3i64NV
#define glProgramUniform3i64vNV __glProgramUniform3i64vNV
#define glProgramUniform3iEXT __glProgramUniform3iEXT
#define glProgramUniform3iv __glProgramUniform3iv
#define glProgramUniform3ivEXT __glProgramUniform3ivEXT
#define glProgramUniform3ui __glProgramUniform3ui
#define glProgramUniform3ui64NV __glProgramUniform3ui64NV
#define glProgramUniform3ui64vNV __glProgramUniform3ui64vNV
#define glProgramUniform3uiEXT __glProgramUniform3uiEXT
#define glProgramUniform3uiv __glProgramUniform3uiv
#define glProgramUniform3uivEXT __glProgramUniform3uivEXT
#define glProgramUniform4d __glProgramUniform4d
#define glProgramUniform4dEXT __glProgramUniform4dEXT
#define glProgramUniform4dv __glProgramUniform4dv
#define glProgramUniform4dvEXT __glProgramUniform4dvEXT
#define glProgramUniform4f __glProgramUniform4f
#define glProgramUniform4fEXT __glProgramUniform4fEXT
#define glProgramUniform4fv __glProgramUniform4fv
#define glProgramUniform4fvEXT __glProgramUniform4fvEXT
#define glProgramUniform4i __glProgramUniform4i
#define glProgramUniform4i64NV __glProgramUniform4i64NV
#define glProgramUniform4i64vNV __glProgramUniform4i64vNV
#define glProgramUniform4iEXT __glProgramUniform4iEXT
#define glProgramUniform4iv __glProgramUniform4iv
#define glProgramUniform4ivEXT __glProgramUniform4ivEXT
#define glProgramUniform4ui __glProgramUniform4ui
#define glProgramUniform4ui64NV __glProgramUniform4ui64NV
#define glProgramUniform4ui64vNV __glProgramUniform4ui64vNV
#define glProgramUniform4uiEXT __glProgramUniform4uiEXT
#define glProgramUniform4uiv __glProgramUniform4uiv
#define glProgramUniform4uivEXT __glProgramUniform4uivEXT
#define glProgramUniformHandleui64ARB __glProgramUniformHandleui64ARB
#define glProgramUniformHandleui64NV __glProgramUniformHandleui64NV
#define glProgramUniformHandleui64vARB __glProgramUniformHandleui64vARB
#define glProgramUniformHandleui64vNV __glProgramUniformHandleui64vNV
#define glProgramUniformMatrix2dv __glProgramUniformMatrix2dv
#define glProgramUniformMatrix2dvEXT __glProgramUniformMatrix2dvEXT
#define glProgramUniformMatrix2fv __glProgramUniformMatrix2fv
#define glProgramUniformMatrix2fvEXT __glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix2x3dv __glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix2x3dvEXT __glProgramUniformMatrix2x3dvEXT
#define glProgramUniformMatrix2x3fv __glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix2x3fvEXT __glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix2x4dv __glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix2x4dvEXT __glProgramUniformMatrix2x4dvEXT
#define glProgramUniformMatrix2x4fv __glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix2x4fvEXT __glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix3dv __glProgramUniformMatrix3dv
#define glProgramUniformMatrix3dvEXT __glProgramUniformMatrix3dvEXT
#define glProgramUniformMatrix3fv __glProgramUniformMatrix3fv
#define glProgramUniformMatrix3fvEXT __glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix3x2dv __glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix3x2dvEXT __glProgramUniformMatrix3x2dvEXT
#define glProgramUniformMatrix3x2fv __glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix3x2fvEXT __glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix3x4dv __glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix3x4dvEXT __glProgramUniformMatrix3x4dvEXT
#define glProgramUniformMatrix3x4fv __glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix3x4fvEXT __glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4dv __glProgramUniformMatrix4dv
#define glProgramUniformMatrix4dvEXT __glProgramUniformMatrix4dvEXT
#define glProgramUniformMatrix4fv __glProgramUniformMatrix4fv
#define glProgramUniformMatrix4fvEXT __glProgramUniformMatrix4fvEXT
#define glProgramUniformMatrix4x2dv __glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix4x2dvEXT __glProgramUniformMatrix4x2dvEXT
#define glProgramUniformMatrix4x2fv __glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix4x2fvEXT __glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix4x3dv __glProgramUniformMatrix4x3dv
#define glProgramUniformMatrix4x3dvEXT __glProgramUniformMatrix4x3dvEXT
#define glProgramUniformMatrix4x3fv __glProgramUniformMatrix4x3fv
#define glProgramUniformMatrix4x3fvEXT __glProgramUniformMatrix4x3fvEXT
#define glProgramUniformui64NV __glProgramUniformui64NV
#define glProgramUniformui64vNV __glProgramUniformui64vNV
#define glProgramVertexLimitNV __glProgramVertexLimitNV
#define glProvokingVertex __glProvokingVertex
#define glProvokingVertexEXT __glProvokingVertexEXT
#define glPushAttrib __glPushAttrib
#define glPushClientAttrib __glPushClientAttrib
#define glPushClientAttribDefaultEXT __glPushClientAttribDefaultEXT
#define glPushDebugGroup __glPushDebugGroup
#define glPushDebugGroupKHR __glPushDebugGroupKHR
#define glPushGroupMarkerEXT __glPushGroupMarkerEXT
#define glPushMatrix __glPushMatrix
#define glPushName __glPushName
#define glQueryCounter __glQueryCounter
#define glQueryCounterEXT __glQueryCounterEXT
#define glQueryMatrixxOES __glQueryMatrixxOES
#define glQueryObjectParameteruiAMD __glQueryObjectParameteruiAMD
#define glRasterPos2d __glRasterPos2d
#define glRasterPos2dv __glRasterPos2dv
#define glRasterPos2f __glRasterPos2f
#define glRasterPos2fv __glRasterPos2fv
#define glRasterPos2i __glRasterPos2i
#define glRasterPos2iv __glRasterPos2iv
#define glRasterPos2s __glRasterPos2s
#define glRasterPos2sv __glRasterPos2sv
#define glRasterPos2xOES __glRasterPos2xOES
#define glRasterPos2xvOES __glRasterPos2xvOES
#define glRasterPos3d __glRasterPos3d
#define glRasterPos3dv __glRasterPos3dv
#define glRasterPos3f __glRasterPos3f
#define glRasterPos3fv __glRasterPos3fv
#define glRasterPos3i __glRasterPos3i
#define glRasterPos3iv __glRasterPos3iv
#define glRasterPos3s __glRasterPos3s
#define glRasterPos3sv __glRasterPos3sv
#define glRasterPos3xOES __glRasterPos3xOES
#define glRasterPos3xvOES __glRasterPos3xvOES
#define glRasterPos4d __glRasterPos4d
#define glRasterPos4dv __glRasterPos4dv
#define glRasterPos4f __glRasterPos4f
#define glRasterPos4fv __glRasterPos4fv
#define glRasterPos4i __glRasterPos4i
#define glRasterPos4iv __glRasterPos4iv
#define glRasterPos4s __glRasterPos4s
#define glRasterPos4sv __glRasterPos4sv
#define glRasterPos4xOES __glRasterPos4xOES
#define glRasterPos4xvOES __glRasterPos4xvOES
#define glReadBuffer __glReadBuffer
#define glReadBufferIndexedEXT __glReadBufferIndexedEXT
#define glReadBufferNV __glReadBufferNV
#define glReadInstrumentsSGIX __glReadInstrumentsSGIX
#define glReadPixels __glReadPixels
#define glReadnPixels __glReadnPixels
#define glReadnPixelsARB __glReadnPixelsARB
#define glReadnPixelsEXT __glReadnPixelsEXT
#define glReadnPixelsKHR __glReadnPixelsKHR
#define glRectd __glRectd
#define glRectdv __glRectdv
#define glRectf __glRectf
#define glRectfv __glRectfv
#define glRecti __glRecti
#define glRectiv __glRectiv
#define glRects __glRects
#define glRectsv __glRectsv
#define glRectxOES __glRectxOES
#define glRectxvOES __glRectxvOES
#define glReferencePlaneSGIX __glReferencePlaneSGIX
#define glReleaseShaderCompiler __glReleaseShaderCompiler
#define glRenderMode __glRenderMode
#define glRenderbufferStorage __glRenderbufferStorage
#define glRenderbufferStorageEXT __glRenderbufferStorageEXT
#define glRenderbufferStorageMultisample __glRenderbufferStorageMultisample
#define glRenderbufferStorageMultisampleANGLE __glRenderbufferStorageMultisampleANGLE
#define glRenderbufferStorageMultisampleAPPLE __glRenderbufferStorageMultisampleAPPLE
#define glRenderbufferStorageMultisampleCoverageNV __glRenderbufferStorageMultisampleCoverageNV
#define glRenderbufferStorageMultisampleEXT __glRenderbufferStorageMultisampleEXT
#define glRenderbufferStorageMultisampleIMG __glRenderbufferStorageMultisampleIMG
#define glRenderbufferStorageMultisampleNV __glRenderbufferStorageMultisampleNV
#define glRenderbufferStorageOES __glRenderbufferStorageOES
#define glReplacementCodePointerSUN __glReplacementCodePointerSUN
#define glReplacementCodeubSUN __glReplacementCodeubSUN
#define glReplacementCodeubvSUN __glReplacementCodeubvSUN
#define glReplacementCodeuiColor3fVertex3fSUN __glReplacementCodeuiColor3fVertex3fSUN
#define glReplacementCodeuiColor3fVertex3fvSUN __glReplacementCodeuiColor3fVertex3fvSUN
#define glReplacementCodeuiColor4fNormal3fVertex3fSUN __glReplacementCodeuiColor4fNormal3fVertex3fSUN
#define glReplacementCodeuiColor4fNormal3fVertex3fvSUN __glReplacementCodeuiColor4fNormal3fVertex3fvSUN
#define glReplacementCodeuiColor4ubVertex3fSUN __glReplacementCodeuiColor4ubVertex3fSUN
#define glReplacementCodeuiColor4ubVertex3fvSUN __glReplacementCodeuiColor4ubVertex3fvSUN
#define glReplacementCodeuiNormal3fVertex3fSUN __glReplacementCodeuiNormal3fVertex3fSUN
#define glReplacementCodeuiNormal3fVertex3fvSUN __glReplacementCodeuiNormal3fVertex3fvSUN
#define glReplacementCodeuiSUN __glReplacementCodeuiSUN
#define glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN __glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
#define glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN __glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
#define glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN __glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
#define glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN __glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
#define glReplacementCodeuiTexCoord2fVertex3fSUN __glReplacementCodeuiTexCoord2fVertex3fSUN
#define glReplacementCodeuiTexCoord2fVertex3fvSUN __glReplacementCodeuiTexCoord2fVertex3fvSUN
#define glReplacementCodeuiVertex3fSUN __glReplacementCodeuiVertex3fSUN
#define glReplacementCodeuiVertex3fvSUN __glReplacementCodeuiVertex3fvSUN
#define glReplacementCodeuivSUN __glReplacementCodeuivSUN
#define glReplacementCodeusSUN __glReplacementCodeusSUN
#define glReplacementCodeusvSUN __glReplacementCodeusvSUN
#define glRequestResidentProgramsNV __glRequestResidentProgramsNV
#define glResetHistogram __glResetHistogram
#define glResetHistogramEXT __glResetHistogramEXT
#define glResetMinmax __glResetMinmax
#define glResetMinmaxEXT __glResetMinmaxEXT
#define glResizeBuffersMESA __glResizeBuffersMESA
#define glResolveMultisampleFramebufferAPPLE __glResolveMultisampleFramebufferAPPLE
#define glResumeTransformFeedback __glResumeTransformFeedback
#define glResumeTransformFeedbackNV __glResumeTransformFeedbackNV
#define glRotated __glRotated
#define glRotatef __glRotatef
#define glRotatex __glRotatex
#define glRotatexOES __glRotatexOES
#define glSampleCoverage __glSampleCoverage
#define glSampleCoverageARB __glSampleCoverageARB
#define glSampleCoveragex __glSampleCoveragex
#define glSampleCoveragexOES __glSampleCoveragexOES
#define glSampleMapATI __glSampleMapATI
#define glSampleMaskEXT __glSampleMaskEXT
#define glSampleMaskIndexedNV __glSampleMaskIndexedNV
#define glSampleMaskSGIS __glSampleMaskSGIS
#define glSampleMaski __glSampleMaski
#define glSamplePatternEXT __glSamplePatternEXT
#define glSamplePatternSGIS __glSamplePatternSGIS
#define glSamplerParameterIiv __glSamplerParameterIiv
#define glSamplerParameterIivEXT __glSamplerParameterIivEXT
#define glSamplerParameterIivOES __glSamplerParameterIivOES
#define glSamplerParameterIuiv __glSamplerParameterIuiv
#define glSamplerParameterIuivEXT __glSamplerParameterIuivEXT
#define glSamplerParameterIuivOES __glSamplerParameterIuivOES
#define glSamplerParameterf __glSamplerParameterf
#define glSamplerParameterfv __glSamplerParameterfv
#define glSamplerParameteri __glSamplerParameteri
#define glSamplerParameteriv __glSamplerParameteriv
#define glScaled __glScaled
#define glScalef __glScalef
#define glScalex __glScalex
#define glScalexOES __glScalexOES
#define glScissor __glScissor
#define glScissorArrayv __glScissorArrayv
#define glScissorArrayvNV __glScissorArrayvNV
#define glScissorIndexed __glScissorIndexed
#define glScissorIndexedNV __glScissorIndexedNV
#define glScissorIndexedv __glScissorIndexedv
#define glScissorIndexedvNV __glScissorIndexedvNV
#define glSecondaryColor3b __glSecondaryColor3b
#define glSecondaryColor3bEXT __glSecondaryColor3bEXT
#define glSecondaryColor3bv __glSecondaryColor3bv
#define glSecondaryColor3bvEXT __glSecondaryColor3bvEXT
#define glSecondaryColor3d __glSecondaryColor3d
#define glSecondaryColor3dEXT __glSecondaryColor3dEXT
#define glSecondaryColor3dv __glSecondaryColor3dv
#define glSecondaryColor3dvEXT __glSecondaryColor3dvEXT
#define glSecondaryColor3f __glSecondaryColor3f
#define glSecondaryColor3fEXT __glSecondaryColor3fEXT
#define glSecondaryColor3fv __glSecondaryColor3fv
#define glSecondaryColor3fvEXT __glSecondaryColor3fvEXT
#define glSecondaryColor3hNV __glSecondaryColor3hNV
#define glSecondaryColor3hvNV __glSecondaryColor3hvNV
#define glSecondaryColor3i __glSecondaryColor3i
#define glSecondaryColor3iEXT __glSecondaryColor3iEXT
#define glSecondaryColor3iv __glSecondaryColor3iv
#define glSecondaryColor3ivEXT __glSecondaryColor3ivEXT
#define glSecondaryColor3s __glSecondaryColor3s
#define glSecondaryColor3sEXT __glSecondaryColor3sEXT
#define glSecondaryColor3sv __glSecondaryColor3sv
#define glSecondaryColor3svEXT __glSecondaryColor3svEXT
#define glSecondaryColor3ub __glSecondaryColor3ub
#define glSecondaryColor3ubEXT __glSecondaryColor3ubEXT
#define glSecondaryColor3ubv __glSecondaryColor3ubv
#define glSecondaryColor3ubvEXT __glSecondaryColor3ubvEXT
#define glSecondaryColor3ui __glSecondaryColor3ui
#define glSecondaryColor3uiEXT __glSecondaryColor3uiEXT
#define glSecondaryColor3uiv __glSecondaryColor3uiv
#define glSecondaryColor3uivEXT __glSecondaryColor3uivEXT
#define glSecondaryColor3us __glSecondaryColor3us
#define glSecondaryColor3usEXT __glSecondaryColor3usEXT
#define glSecondaryColor3usv __glSecondaryColor3usv
#define glSecondaryColor3usvEXT __glSecondaryColor3usvEXT
#define glSecondaryColorFormatNV __glSecondaryColorFormatNV
#define glSecondaryColorP3ui __glSecondaryColorP3ui
#define glSecondaryColorP3uiv __glSecondaryColorP3uiv
#define glSecondaryColorPointer __glSecondaryColorPointer
#define glSecondaryColorPointerEXT __glSecondaryColorPointerEXT
#define glSecondaryColorPointerListIBM __glSecondaryColorPointerListIBM
#define glSelectBuffer __glSelectBuffer
#define glSelectPerfMonitorCountersAMD __glSelectPerfMonitorCountersAMD
#define glSeparableFilter2D __glSeparableFilter2D
#define glSeparableFilter2DEXT __glSeparableFilter2DEXT
#define glSetFenceAPPLE __glSetFenceAPPLE
#define glSetFenceNV __glSetFenceNV
#define glSetFragmentShaderConstantATI __glSetFragmentShaderConstantATI
#define glSetInvariantEXT __glSetInvariantEXT
#define glSetLocalConstantEXT __glSetLocalConstantEXT
#define glSetMultisamplefvAMD __glSetMultisamplefvAMD
#define glShadeModel __glShadeModel
#define glShaderBinary __glShaderBinary
#define glShaderOp1EXT __glShaderOp1EXT
#define glShaderOp2EXT __glShaderOp2EXT
#define glShaderOp3EXT __glShaderOp3EXT
#define glShaderSource __glShaderSource
#define glShaderSourceARB __glShaderSourceARB
#define glShaderStorageBlockBinding __glShaderStorageBlockBinding
#define glSharpenTexFuncSGIS __glSharpenTexFuncSGIS
#define glSpriteParameterfSGIX __glSpriteParameterfSGIX
#define glSpriteParameterfvSGIX __glSpriteParameterfvSGIX
#define glSpriteParameteriSGIX __glSpriteParameteriSGIX
#define glSpriteParameterivSGIX __glSpriteParameterivSGIX
#define glStartInstrumentsSGIX __glStartInstrumentsSGIX
#define glStartTilingQCOM __glStartTilingQCOM
#define glStateCaptureNV __glStateCaptureNV
#define glStencilClearTagEXT __glStencilClearTagEXT
#define glStencilFillPathInstancedNV __glStencilFillPathInstancedNV
#define glStencilFillPathNV __glStencilFillPathNV
#define glStencilFunc __glStencilFunc
#define glStencilFuncSeparate __glStencilFuncSeparate
#define glStencilFuncSeparateATI __glStencilFuncSeparateATI
#define glStencilMask __glStencilMask
#define glStencilMaskSeparate __glStencilMaskSeparate
#define glStencilOp __glStencilOp
#define glStencilOpSeparate __glStencilOpSeparate
#define glStencilOpSeparateATI __glStencilOpSeparateATI
#define glStencilOpValueAMD __glStencilOpValueAMD
#define glStencilStrokePathInstancedNV __glStencilStrokePathInstancedNV
#define glStencilStrokePathNV __glStencilStrokePathNV
#define glStencilThenCoverFillPathInstancedNV __glStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverFillPathNV __glStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathInstancedNV __glStencilThenCoverStrokePathInstancedNV
#define glStencilThenCoverStrokePathNV __glStencilThenCoverStrokePathNV
#define glStopInstrumentsSGIX __glStopInstrumentsSGIX
#define glStringMarkerGREMEDY __glStringMarkerGREMEDY
#define glSwizzleEXT __glSwizzleEXT
#define glSyncTextureINTEL __glSyncTextureINTEL
#define glTagSampleBufferSGIX __glTagSampleBufferSGIX
#define glTangent3bEXT __glTangent3bEXT
#define glTangent3bvEXT __glTangent3bvEXT
#define glTangent3dEXT __glTangent3dEXT
#define glTangent3dvEXT __glTangent3dvEXT
#define glTangent3fEXT __glTangent3fEXT
#define glTangent3fvEXT __glTangent3fvEXT
#define glTangent3iEXT __glTangent3iEXT
#define glTangent3ivEXT __glTangent3ivEXT
#define glTangent3sEXT __glTangent3sEXT
#define glTangent3svEXT __glTangent3svEXT
#define glTangentPointerEXT __glTangentPointerEXT
#define glTbufferMask3DFX __glTbufferMask3DFX
#define glTessellationFactorAMD __glTessellationFactorAMD
#define glTessellationModeAMD __glTessellationModeAMD
#define glTestFenceAPPLE __glTestFenceAPPLE
#define glTestFenceNV __glTestFenceNV
#define glTestObjectAPPLE __glTestObjectAPPLE
#define glTexBuffer __glTexBuffer
#define glTexBufferARB __glTexBufferARB
#define glTexBufferEXT __glTexBufferEXT
#define glTexBufferOES __glTexBufferOES
#define glTexBufferRange __glTexBufferRange
#define glTexBufferRangeEXT __glTexBufferRangeEXT
#define glTexBufferRangeOES __glTexBufferRangeOES
#define glTexBumpParameterfvATI __glTexBumpParameterfvATI
#define glTexBumpParameterivATI __glTexBumpParameterivATI
#define glTexCoord1bOES __glTexCoord1bOES
#define glTexCoord1bvOES __glTexCoord1bvOES
#define glTexCoord1d __glTexCoord1d
#define glTexCoord1dv __glTexCoord1dv
#define glTexCoord1f __glTexCoord1f
#define glTexCoord1fv __glTexCoord1fv
#define glTexCoord1hNV __glTexCoord1hNV
#define glTexCoord1hvNV __glTexCoord1hvNV
#define glTexCoord1i __glTexCoord1i
#define glTexCoord1iv __glTexCoord1iv
#define glTexCoord1s __glTexCoord1s
#define glTexCoord1sv __glTexCoord1sv
#define glTexCoord1xOES __glTexCoord1xOES
#define glTexCoord1xvOES __glTexCoord1xvOES
#define glTexCoord2bOES __glTexCoord2bOES
#define glTexCoord2bvOES __glTexCoord2bvOES
#define glTexCoord2d __glTexCoord2d
#define glTexCoord2dv __glTexCoord2dv
#define glTexCoord2f __glTexCoord2f
#define glTexCoord2fColor3fVertex3fSUN __glTexCoord2fColor3fVertex3fSUN
#define glTexCoord2fColor3fVertex3fvSUN __glTexCoord2fColor3fVertex3fvSUN
#define glTexCoord2fColor4fNormal3fVertex3fSUN __glTexCoord2fColor4fNormal3fVertex3fSUN
#define glTexCoord2fColor4fNormal3fVertex3fvSUN __glTexCoord2fColor4fNormal3fVertex3fvSUN
#define glTexCoord2fColor4ubVertex3fSUN __glTexCoord2fColor4ubVertex3fSUN
#define glTexCoord2fColor4ubVertex3fvSUN __glTexCoord2fColor4ubVertex3fvSUN
#define glTexCoord2fNormal3fVertex3fSUN __glTexCoord2fNormal3fVertex3fSUN
#define glTexCoord2fNormal3fVertex3fvSUN __glTexCoord2fNormal3fVertex3fvSUN
#define glTexCoord2fVertex3fSUN __glTexCoord2fVertex3fSUN
#define glTexCoord2fVertex3fvSUN __glTexCoord2fVertex3fvSUN
#define glTexCoord2fv __glTexCoord2fv
#define glTexCoord2hNV __glTexCoord2hNV
#define glTexCoord2hvNV __glTexCoord2hvNV
#define glTexCoord2i __glTexCoord2i
#define glTexCoord2iv __glTexCoord2iv
#define glTexCoord2s __glTexCoord2s
#define glTexCoord2sv __glTexCoord2sv
#define glTexCoord2xOES __glTexCoord2xOES
#define glTexCoord2xvOES __glTexCoord2xvOES
#define glTexCoord3bOES __glTexCoord3bOES
#define glTexCoord3bvOES __glTexCoord3bvOES
#define glTexCoord3d __glTexCoord3d
#define glTexCoord3dv __glTexCoord3dv
#define glTexCoord3f __glTexCoord3f
#define glTexCoord3fv __glTexCoord3fv
#define glTexCoord3hNV __glTexCoord3hNV
#define glTexCoord3hvNV __glTexCoord3hvNV
#define glTexCoord3i __glTexCoord3i
#define glTexCoord3iv __glTexCoord3iv
#define glTexCoord3s __glTexCoord3s
#define glTexCoord3sv __glTexCoord3sv
#define glTexCoord3xOES __glTexCoord3xOES
#define glTexCoord3xvOES __glTexCoord3xvOES
#define glTexCoord4bOES __glTexCoord4bOES
#define glTexCoord4bvOES __glTexCoord4bvOES
#define glTexCoord4d __glTexCoord4d
#define glTexCoord4dv __glTexCoord4dv
#define glTexCoord4f __glTexCoord4f
#define glTexCoord4fColor4fNormal3fVertex4fSUN __glTexCoord4fColor4fNormal3fVertex4fSUN
#define glTexCoord4fColor4fNormal3fVertex4fvSUN __glTexCoord4fColor4fNormal3fVertex4fvSUN
#define glTexCoord4fVertex4fSUN __glTexCoord4fVertex4fSUN
#define glTexCoord4fVertex4fvSUN __glTexCoord4fVertex4fvSUN
#define glTexCoord4fv __glTexCoord4fv
#define glTexCoord4hNV __glTexCoord4hNV
#define glTexCoord4hvNV __glTexCoord4hvNV
#define glTexCoord4i __glTexCoord4i
#define glTexCoord4iv __glTexCoord4iv
#define glTexCoord4s __glTexCoord4s
#define glTexCoord4sv __glTexCoord4sv
#define glTexCoord4xOES __glTexCoord4xOES
#define glTexCoord4xvOES __glTexCoord4xvOES
#define glTexCoordFormatNV __glTexCoordFormatNV
#define glTexCoordP1ui __glTexCoordP1ui
#define glTexCoordP1uiv __glTexCoordP1uiv
#define glTexCoordP2ui __glTexCoordP2ui
#define glTexCoordP2uiv __glTexCoordP2uiv
#define glTexCoordP3ui __glTexCoordP3ui
#define glTexCoordP3uiv __glTexCoordP3uiv
#define glTexCoordP4ui __glTexCoordP4ui
#define glTexCoordP4uiv __glTexCoordP4uiv
#define glTexCoordPointer __glTexCoordPointer
#define glTexCoordPointerEXT __glTexCoordPointerEXT
#define glTexCoordPointerListIBM __glTexCoordPointerListIBM
#define glTexCoordPointervINTEL __glTexCoordPointervINTEL
#define glTexEnvf __glTexEnvf
#define glTexEnvfv __glTexEnvfv
#define glTexEnvi __glTexEnvi
#define glTexEnviv __glTexEnviv
#define glTexEnvx __glTexEnvx
#define glTexEnvxOES __glTexEnvxOES
#define glTexEnvxv __glTexEnvxv
#define glTexEnvxvOES __glTexEnvxvOES
#define glTexFilterFuncSGIS __glTexFilterFuncSGIS
#define glTexGend __glTexGend
#define glTexGendv __glTexGendv
#define glTexGenf __glTexGenf
#define glTexGenfOES __glTexGenfOES
#define glTexGenfv __glTexGenfv
#define glTexGenfvOES __glTexGenfvOES
#define glTexGeni __glTexGeni
#define glTexGeniOES __glTexGeniOES
#define glTexGeniv __glTexGeniv
#define glTexGenivOES __glTexGenivOES
#define glTexGenxOES __glTexGenxOES
#define glTexGenxvOES __glTexGenxvOES
#define glTexImage1D __glTexImage1D
#define glTexImage2D __glTexImage2D
#define glTexImage2DMultisample __glTexImage2DMultisample
#define glTexImage2DMultisampleCoverageNV __glTexImage2DMultisampleCoverageNV
#define glTexImage3D __glTexImage3D
#define glTexImage3DEXT __glTexImage3DEXT
#define glTexImage3DMultisample __glTexImage3DMultisample
#define glTexImage3DMultisampleCoverageNV __glTexImage3DMultisampleCoverageNV
#define glTexImage3DOES __glTexImage3DOES
#define glTexImage4DSGIS __glTexImage4DSGIS
#define glTexPageCommitmentARB __glTexPageCommitmentARB
#define glTexPageCommitmentEXT __glTexPageCommitmentEXT
#define glTexParameterIiv __glTexParameterIiv
#define glTexParameterIivEXT __glTexParameterIivEXT
#define glTexParameterIivOES __glTexParameterIivOES
#define glTexParameterIuiv __glTexParameterIuiv
#define glTexParameterIuivEXT __glTexParameterIuivEXT
#define glTexParameterIuivOES __glTexParameterIuivOES
#define glTexParameterf __glTexParameterf
#define glTexParameterfv __glTexParameterfv
#define glTexParameteri __glTexParameteri
#define glTexParameteriv __glTexParameteriv
#define glTexParameterx __glTexParameterx
#define glTexParameterxOES __glTexParameterxOES
#define glTexParameterxv __glTexParameterxv
#define glTexParameterxvOES __glTexParameterxvOES
#define glTexRenderbufferNV __glTexRenderbufferNV
#define glTexStorage1D __glTexStorage1D
#define glTexStorage1DEXT __glTexStorage1DEXT
#define glTexStorage2D __glTexStorage2D
#define glTexStorage2DEXT __glTexStorage2DEXT
#define glTexStorage2DMultisample __glTexStorage2DMultisample
#define glTexStorage3D __glTexStorage3D
#define glTexStorage3DEXT __glTexStorage3DEXT
#define glTexStorage3DMultisample __glTexStorage3DMultisample
#define glTexStorage3DMultisampleOES __glTexStorage3DMultisampleOES
#define glTexStorageSparseAMD __glTexStorageSparseAMD
#define glTexSubImage1D __glTexSubImage1D
#define glTexSubImage1DEXT __glTexSubImage1DEXT
#define glTexSubImage2D __glTexSubImage2D
#define glTexSubImage2DEXT __glTexSubImage2DEXT
#define glTexSubImage3D __glTexSubImage3D
#define glTexSubImage3DEXT __glTexSubImage3DEXT
#define glTexSubImage3DOES __glTexSubImage3DOES
#define glTexSubImage4DSGIS __glTexSubImage4DSGIS
#define glTextureBarrier __glTextureBarrier
#define glTextureBarrierNV __glTextureBarrierNV
#define glTextureBuffer __glTextureBuffer
#define glTextureBufferEXT __glTextureBufferEXT
#define glTextureBufferRange __glTextureBufferRange
#define glTextureBufferRangeEXT __glTextureBufferRangeEXT
#define glTextureColorMaskSGIS __glTextureColorMaskSGIS
#define glTextureImage1DEXT __glTextureImage1DEXT
#define glTextureImage2DEXT __glTextureImage2DEXT
#define glTextureImage2DMultisampleCoverageNV __glTextureImage2DMultisampleCoverageNV
#define glTextureImage2DMultisampleNV __glTextureImage2DMultisampleNV
#define glTextureImage3DEXT __glTextureImage3DEXT
#define glTextureImage3DMultisampleCoverageNV __glTextureImage3DMultisampleCoverageNV
#define glTextureImage3DMultisampleNV __glTextureImage3DMultisampleNV
#define glTextureLightEXT __glTextureLightEXT
#define glTextureMaterialEXT __glTextureMaterialEXT
#define glTextureNormalEXT __glTextureNormalEXT
#define glTexturePageCommitmentEXT __glTexturePageCommitmentEXT
#define glTextureParameterIiv __glTextureParameterIiv
#define glTextureParameterIivEXT __glTextureParameterIivEXT
#define glTextureParameterIuiv __glTextureParameterIuiv
#define glTextureParameterIuivEXT __glTextureParameterIuivEXT
#define glTextureParameterf __glTextureParameterf
#define glTextureParameterfEXT __glTextureParameterfEXT
#define glTextureParameterfv __glTextureParameterfv
#define glTextureParameterfvEXT __glTextureParameterfvEXT
#define glTextureParameteri __glTextureParameteri
#define glTextureParameteriEXT __glTextureParameteriEXT
#define glTextureParameteriv __glTextureParameteriv
#define glTextureParameterivEXT __glTextureParameterivEXT
#define glTextureRangeAPPLE __glTextureRangeAPPLE
#define glTextureRenderbufferEXT __glTextureRenderbufferEXT
#define glTextureStorage1D __glTextureStorage1D
#define glTextureStorage1DEXT __glTextureStorage1DEXT
#define glTextureStorage2D __glTextureStorage2D
#define glTextureStorage2DEXT __glTextureStorage2DEXT
#define glTextureStorage2DMultisample __glTextureStorage2DMultisample
#define glTextureStorage2DMultisampleEXT __glTextureStorage2DMultisampleEXT
#define glTextureStorage3D __glTextureStorage3D
#define glTextureStorage3DEXT __glTextureStorage3DEXT
#define glTextureStorage3DMultisample __glTextureStorage3DMultisample
#define glTextureStorage3DMultisampleEXT __glTextureStorage3DMultisampleEXT
#define glTextureStorageSparseAMD __glTextureStorageSparseAMD
#define glTextureSubImage1D __glTextureSubImage1D
#define glTextureSubImage1DEXT __glTextureSubImage1DEXT
#define glTextureSubImage2D __glTextureSubImage2D
#define glTextureSubImage2DEXT __glTextureSubImage2DEXT
#define glTextureSubImage3D __glTextureSubImage3D
#define glTextureSubImage3DEXT __glTextureSubImage3DEXT
#define glTextureView __glTextureView
#define glTextureViewEXT __glTextureViewEXT
#define glTextureViewOES __glTextureViewOES
#define glTrackMatrixNV __glTrackMatrixNV
#define glTransformFeedbackAttribsNV __glTransformFeedbackAttribsNV
#define glTransformFeedbackBufferBase __glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange __glTransformFeedbackBufferRange
#define glTransformFeedbackStreamAttribsNV __glTransformFeedbackStreamAttribsNV
#define glTransformFeedbackVaryings __glTransformFeedbackVaryings
#define glTransformFeedbackVaryingsEXT __glTransformFeedbackVaryingsEXT
#define glTransformFeedbackVaryingsNV __glTransformFeedbackVaryingsNV
#define glTransformPathNV __glTransformPathNV
#define glTranslated __glTranslated
#define glTranslatef __glTranslatef
#define glTranslatex __glTranslatex
#define glTranslatexOES __glTranslatexOES
#define glUniform1d __glUniform1d
#define glUniform1dv __glUniform1dv
#define glUniform1f __glUniform1f
#define glUniform1fARB __glUniform1fARB
#define glUniform1fv __glUniform1fv
#define glUniform1fvARB __glUniform1fvARB
#define glUniform1i __glUniform1i
#define glUniform1i64NV __glUniform1i64NV
#define glUniform1i64vNV __glUniform1i64vNV
#define glUniform1iARB __glUniform1iARB
#define glUniform1iv __glUniform1iv
#define glUniform1ivARB __glUniform1ivARB
#define glUniform1ui __glUniform1ui
#define glUniform1ui64NV __glUniform1ui64NV
#define glUniform1ui64vNV __glUniform1ui64vNV
#define glUniform1uiEXT __glUniform1uiEXT
#define glUniform1uiv __glUniform1uiv
#define glUniform1uivEXT __glUniform1uivEXT
#define glUniform2d __glUniform2d
#define glUniform2dv __glUniform2dv
#define glUniform2f __glUniform2f
#define glUniform2fARB __glUniform2fARB
#define glUniform2fv __glUniform2fv
#define glUniform2fvARB __glUniform2fvARB
#define glUniform2i __glUniform2i
#define glUniform2i64NV __glUniform2i64NV
#define glUniform2i64vNV __glUniform2i64vNV
#define glUniform2iARB __glUniform2iARB
#define glUniform2iv __glUniform2iv
#define glUniform2ivARB __glUniform2ivARB
#define glUniform2ui __glUniform2ui
#define glUniform2ui64NV __glUniform2ui64NV
#define glUniform2ui64vNV __glUniform2ui64vNV
#define glUniform2uiEXT __glUniform2uiEXT
#define glUniform2uiv __glUniform2uiv
#define glUniform2uivEXT __glUniform2uivEXT
#define glUniform3d __glUniform3d
#define glUniform3dv __glUniform3dv
#define glUniform3f __glUniform3f
#define glUniform3fARB __glUniform3fARB
#define glUniform3fv __glUniform3fv
#define glUniform3fvARB __glUniform3fvARB
#define glUniform3i __glUniform3i
#define glUniform3i64NV __glUniform3i64NV
#define glUniform3i64vNV __glUniform3i64vNV
#define glUniform3iARB __glUniform3iARB
#define glUniform3iv __glUniform3iv
#define glUniform3ivARB __glUniform3ivARB
#define glUniform3ui __glUniform3ui
#define glUniform3ui64NV __glUniform3ui64NV
#define glUniform3ui64vNV __glUniform3ui64vNV
#define glUniform3uiEXT __glUniform3uiEXT
#define glUniform3uiv __glUniform3uiv
#define glUniform3uivEXT __glUniform3uivEXT
#define glUniform4d __glUniform4d
#define glUniform4dv __glUniform4dv
#define glUniform4f __glUniform4f
#define glUniform4fARB __glUniform4fARB
#define glUniform4fv __glUniform4fv
#define glUniform4fvARB __glUniform4fvARB
#define glUniform4i __glUniform4i
#define glUniform4i64NV __glUniform4i64NV
#define glUniform4i64vNV __glUniform4i64vNV
#define glUniform4iARB __glUniform4iARB
#define glUniform4iv __glUniform4iv
#define glUniform4ivARB __glUniform4ivARB
#define glUniform4ui __glUniform4ui
#define glUniform4ui64NV __glUniform4ui64NV
#define glUniform4ui64vNV __glUniform4ui64vNV
#define glUniform4uiEXT __glUniform4uiEXT
#define glUniform4uiv __glUniform4uiv
#define glUniform4uivEXT __glUniform4uivEXT
#define glUniformBlockBinding __glUniformBlockBinding
#define glUniformBufferEXT __glUniformBufferEXT
#define glUniformHandleui64ARB __glUniformHandleui64ARB
#define glUniformHandleui64NV __glUniformHandleui64NV
#define glUniformHandleui64vARB __glUniformHandleui64vARB
#define glUniformHandleui64vNV __glUniformHandleui64vNV
#define glUniformMatrix2dv __glUniformMatrix2dv
#define glUniformMatrix2fv __glUniformMatrix2fv
#define glUniformMatrix2fvARB __glUniformMatrix2fvARB
#define glUniformMatrix2x3dv __glUniformMatrix2x3dv
#define glUniformMatrix2x3fv __glUniformMatrix2x3fv
#define glUniformMatrix2x3fvNV __glUniformMatrix2x3fvNV
#define glUniformMatrix2x4dv __glUniformMatrix2x4dv
#define glUniformMatrix2x4fv __glUniformMatrix2x4fv
#define glUniformMatrix2x4fvNV __glUniformMatrix2x4fvNV
#define glUniformMatrix3dv __glUniformMatrix3dv
#define glUniformMatrix3fv __glUniformMatrix3fv
#define glUniformMatrix3fvARB __glUniformMatrix3fvARB
#define glUniformMatrix3x2dv __glUniformMatrix3x2dv
#define glUniformMatrix3x2fv __glUniformMatrix3x2fv
#define glUniformMatrix3x2fvNV __glUniformMatrix3x2fvNV
#define glUniformMatrix3x4dv __glUniformMatrix3x4dv
#define glUniformMatrix3x4fv __glUniformMatrix3x4fv
#define glUniformMatrix3x4fvNV __glUniformMatrix3x4fvNV
#define glUniformMatrix4dv __glUniformMatrix4dv
#define glUniformMatrix4fv __glUniformMatrix4fv
#define glUniformMatrix4fvARB __glUniformMatrix4fvARB
#define glUniformMatrix4x2dv __glUniformMatrix4x2dv
#define glUniformMatrix4x2fv __glUniformMatrix4x2fv
#define glUniformMatrix4x2fvNV __glUniformMatrix4x2fvNV
#define glUniformMatrix4x3dv __glUniformMatrix4x3dv
#define glUniformMatrix4x3fv __glUniformMatrix4x3fv
#define glUniformMatrix4x3fvNV __glUniformMatrix4x3fvNV
#define glUniformSubroutinesuiv __glUniformSubroutinesuiv
#define glUniformui64NV __glUniformui64NV
#define glUniformui64vNV __glUniformui64vNV
#define glUnlockArraysEXT __glUnlockArraysEXT
#define glUnmapBuffer __glUnmapBuffer
#define glUnmapBufferARB __glUnmapBufferARB
#define glUnmapBufferOES __glUnmapBufferOES
#define glUnmapNamedBuffer __glUnmapNamedBuffer
#define glUnmapNamedBufferEXT __glUnmapNamedBufferEXT
#define glUnmapObjectBufferATI __glUnmapObjectBufferATI
#define glUnmapTexture2DINTEL __glUnmapTexture2DINTEL
#define glUpdateObjectBufferATI __glUpdateObjectBufferATI
#define glUseProgram __glUseProgram
#define glUseProgramObjectARB __glUseProgramObjectARB
#define glUseProgramStages __glUseProgramStages
#define glUseProgramStagesEXT __glUseProgramStagesEXT
#define glUseShaderProgramEXT __glUseShaderProgramEXT
#define glVDPAUFiniNV __glVDPAUFiniNV
#define glVDPAUGetSurfaceivNV __glVDPAUGetSurfaceivNV
#define glVDPAUInitNV __glVDPAUInitNV
#define glVDPAUIsSurfaceNV __glVDPAUIsSurfaceNV
#define glVDPAUMapSurfacesNV __glVDPAUMapSurfacesNV
#define glVDPAURegisterOutputSurfaceNV __glVDPAURegisterOutputSurfaceNV
#define glVDPAURegisterVideoSurfaceNV __glVDPAURegisterVideoSurfaceNV
#define glVDPAUSurfaceAccessNV __glVDPAUSurfaceAccessNV
#define glVDPAUUnmapSurfacesNV __glVDPAUUnmapSurfacesNV
#define glVDPAUUnregisterSurfaceNV __glVDPAUUnregisterSurfaceNV
#define glValidateProgram __glValidateProgram
#define glValidateProgramARB __glValidateProgramARB
#define glValidateProgramPipeline __glValidateProgramPipeline
#define glValidateProgramPipelineEXT __glValidateProgramPipelineEXT
#define glVariantArrayObjectATI __glVariantArrayObjectATI
#define glVariantPointerEXT __glVariantPointerEXT
#define glVariantbvEXT __glVariantbvEXT
#define glVariantdvEXT __glVariantdvEXT
#define glVariantfvEXT __glVariantfvEXT
#define glVariantivEXT __glVariantivEXT
#define glVariantsvEXT __glVariantsvEXT
#define glVariantubvEXT __glVariantubvEXT
#define glVariantuivEXT __glVariantuivEXT
#define glVariantusvEXT __glVariantusvEXT
#define glVertex2bOES __glVertex2bOES
#define glVertex2bvOES __glVertex2bvOES
#define glVertex2d __glVertex2d
#define glVertex2dv __glVertex2dv
#define glVertex2f __glVertex2f
#define glVertex2fv __glVertex2fv
#define glVertex2hNV __glVertex2hNV
#define glVertex2hvNV __glVertex2hvNV
#define glVertex2i __glVertex2i
#define glVertex2iv __glVertex2iv
#define glVertex2s __glVertex2s
#define glVertex2sv __glVertex2sv
#define glVertex2xOES __glVertex2xOES
#define glVertex2xvOES __glVertex2xvOES
#define glVertex3bOES __glVertex3bOES
#define glVertex3bvOES __glVertex3bvOES
#define glVertex3d __glVertex3d
#define glVertex3dv __glVertex3dv
#define glVertex3f __glVertex3f
#define glVertex3fv __glVertex3fv
#define glVertex3hNV __glVertex3hNV
#define glVertex3hvNV __glVertex3hvNV
#define glVertex3i __glVertex3i
#define glVertex3iv __glVertex3iv
#define glVertex3s __glVertex3s
#define glVertex3sv __glVertex3sv
#define glVertex3xOES __glVertex3xOES
#define glVertex3xvOES __glVertex3xvOES
#define glVertex4bOES __glVertex4bOES
#define glVertex4bvOES __glVertex4bvOES
#define glVertex4d __glVertex4d
#define glVertex4dv __glVertex4dv
#define glVertex4f __glVertex4f
#define glVertex4fv __glVertex4fv
#define glVertex4hNV __glVertex4hNV
#define glVertex4hvNV __glVertex4hvNV
#define glVertex4i __glVertex4i
#define glVertex4iv __glVertex4iv
#define glVertex4s __glVertex4s
#define glVertex4sv __glVertex4sv
#define glVertex4xOES __glVertex4xOES
#define glVertex4xvOES __glVertex4xvOES
#define glVertexArrayAttribBinding __glVertexArrayAttribBinding
#define glVertexArrayAttribFormat __glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat __glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat __glVertexArrayAttribLFormat
#define glVertexArrayBindVertexBufferEXT __glVertexArrayBindVertexBufferEXT
#define glVertexArrayBindingDivisor __glVertexArrayBindingDivisor
#define glVertexArrayColorOffsetEXT __glVertexArrayColorOffsetEXT
#define glVertexArrayEdgeFlagOffsetEXT __glVertexArrayEdgeFlagOffsetEXT
#define glVertexArrayElementBuffer __glVertexArrayElementBuffer
#define glVertexArrayFogCoordOffsetEXT __glVertexArrayFogCoordOffsetEXT
#define glVertexArrayIndexOffsetEXT __glVertexArrayIndexOffsetEXT
#define glVertexArrayMultiTexCoordOffsetEXT __glVertexArrayMultiTexCoordOffsetEXT
#define glVertexArrayNormalOffsetEXT __glVertexArrayNormalOffsetEXT
#define glVertexArrayParameteriAPPLE __glVertexArrayParameteriAPPLE
#define glVertexArrayRangeAPPLE __glVertexArrayRangeAPPLE
#define glVertexArrayRangeNV __glVertexArrayRangeNV
#define glVertexArraySecondaryColorOffsetEXT __glVertexArraySecondaryColorOffsetEXT
#define glVertexArrayTexCoordOffsetEXT __glVertexArrayTexCoordOffsetEXT
#define glVertexArrayVertexAttribBindingEXT __glVertexArrayVertexAttribBindingEXT
#define glVertexArrayVertexAttribDivisorEXT __glVertexArrayVertexAttribDivisorEXT
#define glVertexArrayVertexAttribFormatEXT __glVertexArrayVertexAttribFormatEXT
#define glVertexArrayVertexAttribIFormatEXT __glVertexArrayVertexAttribIFormatEXT
#define glVertexArrayVertexAttribIOffsetEXT __glVertexArrayVertexAttribIOffsetEXT
#define glVertexArrayVertexAttribLFormatEXT __glVertexArrayVertexAttribLFormatEXT
#define glVertexArrayVertexAttribLOffsetEXT __glVertexArrayVertexAttribLOffsetEXT
#define glVertexArrayVertexAttribOffsetEXT __glVertexArrayVertexAttribOffsetEXT
#define glVertexArrayVertexBindingDivisorEXT __glVertexArrayVertexBindingDivisorEXT
#define glVertexArrayVertexBuffer __glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers __glVertexArrayVertexBuffers
#define glVertexArrayVertexOffsetEXT __glVertexArrayVertexOffsetEXT
#define glVertexAttrib1d __glVertexAttrib1d
#define glVertexAttrib1dARB __glVertexAttrib1dARB
#define glVertexAttrib1dNV __glVertexAttrib1dNV
#define glVertexAttrib1dv __glVertexAttrib1dv
#define glVertexAttrib1dvARB __glVertexAttrib1dvARB
#define glVertexAttrib1dvNV __glVertexAttrib1dvNV
#define glVertexAttrib1f __glVertexAttrib1f
#define glVertexAttrib1fARB __glVertexAttrib1fARB
#define glVertexAttrib1fNV __glVertexAttrib1fNV
#define glVertexAttrib1fv __glVertexAttrib1fv
#define glVertexAttrib1fvARB __glVertexAttrib1fvARB
#define glVertexAttrib1fvNV __glVertexAttrib1fvNV
#define glVertexAttrib1hNV __glVertexAttrib1hNV
#define glVertexAttrib1hvNV __glVertexAttrib1hvNV
#define glVertexAttrib1s __glVertexAttrib1s
#define glVertexAttrib1sARB __glVertexAttrib1sARB
#define glVertexAttrib1sNV __glVertexAttrib1sNV
#define glVertexAttrib1sv __glVertexAttrib1sv
#define glVertexAttrib1svARB __glVertexAttrib1svARB
#define glVertexAttrib1svNV __glVertexAttrib1svNV
#define glVertexAttrib2d __glVertexAttrib2d
#define glVertexAttrib2dARB __glVertexAttrib2dARB
#define glVertexAttrib2dNV __glVertexAttrib2dNV
#define glVertexAttrib2dv __glVertexAttrib2dv
#define glVertexAttrib2dvARB __glVertexAttrib2dvARB
#define glVertexAttrib2dvNV __glVertexAttrib2dvNV
#define glVertexAttrib2f __glVertexAttrib2f
#define glVertexAttrib2fARB __glVertexAttrib2fARB
#define glVertexAttrib2fNV __glVertexAttrib2fNV
#define glVertexAttrib2fv __glVertexAttrib2fv
#define glVertexAttrib2fvARB __glVertexAttrib2fvARB
#define glVertexAttrib2fvNV __glVertexAttrib2fvNV
#define glVertexAttrib2hNV __glVertexAttrib2hNV
#define glVertexAttrib2hvNV __glVertexAttrib2hvNV
#define glVertexAttrib2s __glVertexAttrib2s
#define glVertexAttrib2sARB __glVertexAttrib2sARB
#define glVertexAttrib2sNV __glVertexAttrib2sNV
#define glVertexAttrib2sv __glVertexAttrib2sv
#define glVertexAttrib2svARB __glVertexAttrib2svARB
#define glVertexAttrib2svNV __glVertexAttrib2svNV
#define glVertexAttrib3d __glVertexAttrib3d
#define glVertexAttrib3dARB __glVertexAttrib3dARB
#define glVertexAttrib3dNV __glVertexAttrib3dNV
#define glVertexAttrib3dv __glVertexAttrib3dv
#define glVertexAttrib3dvARB __glVertexAttrib3dvARB
#define glVertexAttrib3dvNV __glVertexAttrib3dvNV
#define glVertexAttrib3f __glVertexAttrib3f
#define glVertexAttrib3fARB __glVertexAttrib3fARB
#define glVertexAttrib3fNV __glVertexAttrib3fNV
#define glVertexAttrib3fv __glVertexAttrib3fv
#define glVertexAttrib3fvARB __glVertexAttrib3fvARB
#define glVertexAttrib3fvNV __glVertexAttrib3fvNV
#define glVertexAttrib3hNV __glVertexAttrib3hNV
#define glVertexAttrib3hvNV __glVertexAttrib3hvNV
#define glVertexAttrib3s __glVertexAttrib3s
#define glVertexAttrib3sARB __glVertexAttrib3sARB
#define glVertexAttrib3sNV __glVertexAttrib3sNV
#define glVertexAttrib3sv __glVertexAttrib3sv
#define glVertexAttrib3svARB __glVertexAttrib3svARB
#define glVertexAttrib3svNV __glVertexAttrib3svNV
#define glVertexAttrib4Nbv __glVertexAttrib4Nbv
#define glVertexAttrib4NbvARB __glVertexAttrib4NbvARB
#define glVertexAttrib4Niv __glVertexAttrib4Niv
#define glVertexAttrib4NivARB __glVertexAttrib4NivARB
#define glVertexAttrib4Nsv __glVertexAttrib4Nsv
#define glVertexAttrib4NsvARB __glVertexAttrib4NsvARB
#define glVertexAttrib4Nub __glVertexAttrib4Nub
#define glVertexAttrib4NubARB __glVertexAttrib4NubARB
#define glVertexAttrib4Nubv __glVertexAttrib4Nubv
#define glVertexAttrib4NubvARB __glVertexAttrib4NubvARB
#define glVertexAttrib4Nuiv __glVertexAttrib4Nuiv
#define glVertexAttrib4NuivARB __glVertexAttrib4NuivARB
#define glVertexAttrib4Nusv __glVertexAttrib4Nusv
#define glVertexAttrib4NusvARB __glVertexAttrib4NusvARB
#define glVertexAttrib4bv __glVertexAttrib4bv
#define glVertexAttrib4bvARB __glVertexAttrib4bvARB
#define glVertexAttrib4d __glVertexAttrib4d
#define glVertexAttrib4dARB __glVertexAttrib4dARB
#define glVertexAttrib4dNV __glVertexAttrib4dNV
#define glVertexAttrib4dv __glVertexAttrib4dv
#define glVertexAttrib4dvARB __glVertexAttrib4dvARB
#define glVertexAttrib4dvNV __glVertexAttrib4dvNV
#define glVertexAttrib4f __glVertexAttrib4f
#define glVertexAttrib4fARB __glVertexAttrib4fARB
#define glVertexAttrib4fNV __glVertexAttrib4fNV
#define glVertexAttrib4fv __glVertexAttrib4fv
#define glVertexAttrib4fvARB __glVertexAttrib4fvARB
#define glVertexAttrib4fvNV __glVertexAttrib4fvNV
#define glVertexAttrib4hNV __glVertexAttrib4hNV
#define glVertexAttrib4hvNV __glVertexAttrib4hvNV
#define glVertexAttrib4iv __glVertexAttrib4iv
#define glVertexAttrib4ivARB __glVertexAttrib4ivARB
#define glVertexAttrib4s __glVertexAttrib4s
#define glVertexAttrib4sARB __glVertexAttrib4sARB
#define glVertexAttrib4sNV __glVertexAttrib4sNV
#define glVertexAttrib4sv __glVertexAttrib4sv
#define glVertexAttrib4svARB __glVertexAttrib4svARB
#define glVertexAttrib4svNV __glVertexAttrib4svNV
#define glVertexAttrib4ubNV __glVertexAttrib4ubNV
#define glVertexAttrib4ubv __glVertexAttrib4ubv
#define glVertexAttrib4ubvARB __glVertexAttrib4ubvARB
#define glVertexAttrib4ubvNV __glVertexAttrib4ubvNV
#define glVertexAttrib4uiv __glVertexAttrib4uiv
#define glVertexAttrib4uivARB __glVertexAttrib4uivARB
#define glVertexAttrib4usv __glVertexAttrib4usv
#define glVertexAttrib4usvARB __glVertexAttrib4usvARB
#define glVertexAttribArrayObjectATI __glVertexAttribArrayObjectATI
#define glVertexAttribBinding __glVertexAttribBinding
#define glVertexAttribDivisor __glVertexAttribDivisor
#define glVertexAttribDivisorANGLE __glVertexAttribDivisorANGLE
#define glVertexAttribDivisorARB __glVertexAttribDivisorARB
#define glVertexAttribDivisorEXT __glVertexAttribDivisorEXT
#define glVertexAttribDivisorNV __glVertexAttribDivisorNV
#define glVertexAttribFormat __glVertexAttribFormat
#define glVertexAttribFormatNV __glVertexAttribFormatNV
#define glVertexAttribI1i __glVertexAttribI1i
#define glVertexAttribI1iEXT __glVertexAttribI1iEXT
#define glVertexAttribI1iv __glVertexAttribI1iv
#define glVertexAttribI1ivEXT __glVertexAttribI1ivEXT
#define glVertexAttribI1ui __glVertexAttribI1ui
#define glVertexAttribI1uiEXT __glVertexAttribI1uiEXT
#define glVertexAttribI1uiv __glVertexAttribI1uiv
#define glVertexAttribI1uivEXT __glVertexAttribI1uivEXT
#define glVertexAttribI2i __glVertexAttribI2i
#define glVertexAttribI2iEXT __glVertexAttribI2iEXT
#define glVertexAttribI2iv __glVertexAttribI2iv
#define glVertexAttribI2ivEXT __glVertexAttribI2ivEXT
#define glVertexAttribI2ui __glVertexAttribI2ui
#define glVertexAttribI2uiEXT __glVertexAttribI2uiEXT
#define glVertexAttribI2uiv __glVertexAttribI2uiv
#define glVertexAttribI2uivEXT __glVertexAttribI2uivEXT
#define glVertexAttribI3i __glVertexAttribI3i
#define glVertexAttribI3iEXT __glVertexAttribI3iEXT
#define glVertexAttribI3iv __glVertexAttribI3iv
#define glVertexAttribI3ivEXT __glVertexAttribI3ivEXT
#define glVertexAttribI3ui __glVertexAttribI3ui
#define glVertexAttribI3uiEXT __glVertexAttribI3uiEXT
#define glVertexAttribI3uiv __glVertexAttribI3uiv
#define glVertexAttribI3uivEXT __glVertexAttribI3uivEXT
#define glVertexAttribI4bv __glVertexAttribI4bv
#define glVertexAttribI4bvEXT __glVertexAttribI4bvEXT
#define glVertexAttribI4i __glVertexAttribI4i
#define glVertexAttribI4iEXT __glVertexAttribI4iEXT
#define glVertexAttribI4iv __glVertexAttribI4iv
#define glVertexAttribI4ivEXT __glVertexAttribI4ivEXT
#define glVertexAttribI4sv __glVertexAttribI4sv
#define glVertexAttribI4svEXT __glVertexAttribI4svEXT
#define glVertexAttribI4ubv __glVertexAttribI4ubv
#define glVertexAttribI4ubvEXT __glVertexAttribI4ubvEXT
#define glVertexAttribI4ui __glVertexAttribI4ui
#define glVertexAttribI4uiEXT __glVertexAttribI4uiEXT
#define glVertexAttribI4uiv __glVertexAttribI4uiv
#define glVertexAttribI4uivEXT __glVertexAttribI4uivEXT
#define glVertexAttribI4usv __glVertexAttribI4usv
#define glVertexAttribI4usvEXT __glVertexAttribI4usvEXT
#define glVertexAttribIFormat __glVertexAttribIFormat
#define glVertexAttribIFormatNV __glVertexAttribIFormatNV
#define glVertexAttribIPointer __glVertexAttribIPointer
#define glVertexAttribIPointerEXT __glVertexAttribIPointerEXT
#define glVertexAttribL1d __glVertexAttribL1d
#define glVertexAttribL1dEXT __glVertexAttribL1dEXT
#define glVertexAttribL1dv __glVertexAttribL1dv
#define glVertexAttribL1dvEXT __glVertexAttribL1dvEXT
#define glVertexAttribL1i64NV __glVertexAttribL1i64NV
#define glVertexAttribL1i64vNV __glVertexAttribL1i64vNV
#define glVertexAttribL1ui64ARB __glVertexAttribL1ui64ARB
#define glVertexAttribL1ui64NV __glVertexAttribL1ui64NV
#define glVertexAttribL1ui64vARB __glVertexAttribL1ui64vARB
#define glVertexAttribL1ui64vNV __glVertexAttribL1ui64vNV
#define glVertexAttribL2d __glVertexAttribL2d
#define glVertexAttribL2dEXT __glVertexAttribL2dEXT
#define glVertexAttribL2dv __glVertexAttribL2dv
#define glVertexAttribL2dvEXT __glVertexAttribL2dvEXT
#define glVertexAttribL2i64NV __glVertexAttribL2i64NV
#define glVertexAttribL2i64vNV __glVertexAttribL2i64vNV
#define glVertexAttribL2ui64NV __glVertexAttribL2ui64NV
#define glVertexAttribL2ui64vNV __glVertexAttribL2ui64vNV
#define glVertexAttribL3d __glVertexAttribL3d
#define glVertexAttribL3dEXT __glVertexAttribL3dEXT
#define glVertexAttribL3dv __glVertexAttribL3dv
#define glVertexAttribL3dvEXT __glVertexAttribL3dvEXT
#define glVertexAttribL3i64NV __glVertexAttribL3i64NV
#define glVertexAttribL3i64vNV __glVertexAttribL3i64vNV
#define glVertexAttribL3ui64NV __glVertexAttribL3ui64NV
#define glVertexAttribL3ui64vNV __glVertexAttribL3ui64vNV
#define glVertexAttribL4d __glVertexAttribL4d
#define glVertexAttribL4dEXT __glVertexAttribL4dEXT
#define glVertexAttribL4dv __glVertexAttribL4dv
#define glVertexAttribL4dvEXT __glVertexAttribL4dvEXT
#define glVertexAttribL4i64NV __glVertexAttribL4i64NV
#define glVertexAttribL4i64vNV __glVertexAttribL4i64vNV
#define glVertexAttribL4ui64NV __glVertexAttribL4ui64NV
#define glVertexAttribL4ui64vNV __glVertexAttribL4ui64vNV
#define glVertexAttribLFormat __glVertexAttribLFormat
#define glVertexAttribLFormatNV __glVertexAttribLFormatNV
#define glVertexAttribLPointer __glVertexAttribLPointer
#define glVertexAttribLPointerEXT __glVertexAttribLPointerEXT
#define glVertexAttribP1ui __glVertexAttribP1ui
#define glVertexAttribP1uiv __glVertexAttribP1uiv
#define glVertexAttribP2ui __glVertexAttribP2ui
#define glVertexAttribP2uiv __glVertexAttribP2uiv
#define glVertexAttribP3ui __glVertexAttribP3ui
#define glVertexAttribP3uiv __glVertexAttribP3uiv
#define glVertexAttribP4ui __glVertexAttribP4ui
#define glVertexAttribP4uiv __glVertexAttribP4uiv
#define glVertexAttribParameteriAMD __glVertexAttribParameteriAMD
#define glVertexAttribPointer __glVertexAttribPointer
#define glVertexAttribPointerARB __glVertexAttribPointerARB
#define glVertexAttribPointerNV __glVertexAttribPointerNV
#define glVertexAttribs1dvNV __glVertexAttribs1dvNV
#define glVertexAttribs1fvNV __glVertexAttribs1fvNV
#define glVertexAttribs1hvNV __glVertexAttribs1hvNV
#define glVertexAttribs1svNV __glVertexAttribs1svNV
#define glVertexAttribs2dvNV __glVertexAttribs2dvNV
#define glVertexAttribs2fvNV __glVertexAttribs2fvNV
#define glVertexAttribs2hvNV __glVertexAttribs2hvNV
#define glVertexAttribs2svNV __glVertexAttribs2svNV
#define glVertexAttribs3dvNV __glVertexAttribs3dvNV
#define glVertexAttribs3fvNV __glVertexAttribs3fvNV
#define glVertexAttribs3hvNV __glVertexAttribs3hvNV
#define glVertexAttribs3svNV __glVertexAttribs3svNV
#define glVertexAttribs4dvNV __glVertexAttribs4dvNV
#define glVertexAttribs4fvNV __glVertexAttribs4fvNV
#define glVertexAttribs4hvNV __glVertexAttribs4hvNV
#define glVertexAttribs4svNV __glVertexAttribs4svNV
#define glVertexAttribs4ubvNV __glVertexAttribs4ubvNV
#define glVertexBindingDivisor __glVertexBindingDivisor
#define glVertexBlendARB __glVertexBlendARB
#define glVertexBlendEnvfATI __glVertexBlendEnvfATI
#define glVertexBlendEnviATI __glVertexBlendEnviATI
#define glVertexFormatNV __glVertexFormatNV
#define glVertexP2ui __glVertexP2ui
#define glVertexP2uiv __glVertexP2uiv
#define glVertexP3ui __glVertexP3ui
#define glVertexP3uiv __glVertexP3uiv
#define glVertexP4ui __glVertexP4ui
#define glVertexP4uiv __glVertexP4uiv
#define glVertexPointer __glVertexPointer
#define glVertexPointerEXT __glVertexPointerEXT
#define glVertexPointerListIBM __glVertexPointerListIBM
#define glVertexPointervINTEL __glVertexPointervINTEL
#define glVertexStream1dATI __glVertexStream1dATI
#define glVertexStream1dvATI __glVertexStream1dvATI
#define glVertexStream1fATI __glVertexStream1fATI
#define glVertexStream1fvATI __glVertexStream1fvATI
#define glVertexStream1iATI __glVertexStream1iATI
#define glVertexStream1ivATI __glVertexStream1ivATI
#define glVertexStream1sATI __glVertexStream1sATI
#define glVertexStream1svATI __glVertexStream1svATI
#define glVertexStream2dATI __glVertexStream2dATI
#define glVertexStream2dvATI __glVertexStream2dvATI
#define glVertexStream2fATI __glVertexStream2fATI
#define glVertexStream2fvATI __glVertexStream2fvATI
#define glVertexStream2iATI __glVertexStream2iATI
#define glVertexStream2ivATI __glVertexStream2ivATI
#define glVertexStream2sATI __glVertexStream2sATI
#define glVertexStream2svATI __glVertexStream2svATI
#define glVertexStream3dATI __glVertexStream3dATI
#define glVertexStream3dvATI __glVertexStream3dvATI
#define glVertexStream3fATI __glVertexStream3fATI
#define glVertexStream3fvATI __glVertexStream3fvATI
#define glVertexStream3iATI __glVertexStream3iATI
#define glVertexStream3ivATI __glVertexStream3ivATI
#define glVertexStream3sATI __glVertexStream3sATI
#define glVertexStream3svATI __glVertexStream3svATI
#define glVertexStream4dATI __glVertexStream4dATI
#define glVertexStream4dvATI __glVertexStream4dvATI
#define glVertexStream4fATI __glVertexStream4fATI
#define glVertexStream4fvATI __glVertexStream4fvATI
#define glVertexStream4iATI __glVertexStream4iATI
#define glVertexStream4ivATI __glVertexStream4ivATI
#define glVertexStream4sATI __glVertexStream4sATI
#define glVertexStream4svATI __glVertexStream4svATI
#define glVertexWeightPointerEXT __glVertexWeightPointerEXT
#define glVertexWeightfEXT __glVertexWeightfEXT
#define glVertexWeightfvEXT __glVertexWeightfvEXT
#define glVertexWeighthNV __glVertexWeighthNV
#define glVertexWeighthvNV __glVertexWeighthvNV
#define glVideoCaptureNV __glVideoCaptureNV
#define glVideoCaptureStreamParameterdvNV __glVideoCaptureStreamParameterdvNV
#define glVideoCaptureStreamParameterfvNV __glVideoCaptureStreamParameterfvNV
#define glVideoCaptureStreamParameterivNV __glVideoCaptureStreamParameterivNV
#define glViewport __glViewport
#define glViewportArrayv __glViewportArrayv
#define glViewportArrayvNV __glViewportArrayvNV
#define glViewportIndexedf __glViewportIndexedf
#define glViewportIndexedfNV __glViewportIndexedfNV
#define glViewportIndexedfv __glViewportIndexedfv
#define glViewportIndexedfvNV __glViewportIndexedfvNV
#define glWaitSync __glWaitSync
#define glWaitSyncAPPLE __glWaitSyncAPPLE
#define glWeightPathsNV __glWeightPathsNV
#define glWeightPointerARB __glWeightPointerARB
#define glWeightPointerOES __glWeightPointerOES
#define glWeightbvARB __glWeightbvARB
#define glWeightdvARB __glWeightdvARB
#define glWeightfvARB __glWeightfvARB
#define glWeightivARB __glWeightivARB
#define glWeightsvARB __glWeightsvARB
#define glWeightubvARB __glWeightubvARB
#define glWeightuivARB __glWeightuivARB
#define glWeightusvARB __glWeightusvARB
#define glWindowPos2d __glWindowPos2d
#define glWindowPos2dARB __glWindowPos2dARB
#define glWindowPos2dMESA __glWindowPos2dMESA
#define glWindowPos2dv __glWindowPos2dv
#define glWindowPos2dvARB __glWindowPos2dvARB
#define glWindowPos2dvMESA __glWindowPos2dvMESA
#define glWindowPos2f __glWindowPos2f
#define glWindowPos2fARB __glWindowPos2fARB
#define glWindowPos2fMESA __glWindowPos2fMESA
#define glWindowPos2fv __glWindowPos2fv
#define glWindowPos2fvARB __glWindowPos2fvARB
#define glWindowPos2fvMESA __glWindowPos2fvMESA
#define glWindowPos2i __glWindowPos2i
#define glWindowPos2iARB __glWindowPos2iARB
#define glWindowPos2iMESA __glWindowPos2iMESA
#define glWindowPos2iv __glWindowPos2iv
#define glWindowPos2ivARB __glWindowPos2ivARB
#define glWindowPos2ivMESA __glWindowPos2ivMESA
#define glWindowPos2s __glWindowPos2s
#define glWindowPos2sARB __glWindowPos2sARB
#define glWindowPos2sMESA __glWindowPos2sMESA
#define glWindowPos2sv __glWindowPos2sv
#define glWindowPos2svARB __glWindowPos2svARB
#define glWindowPos2svMESA __glWindowPos2svMESA
#define glWindowPos3d __glWindowPos3d
#define glWindowPos3dARB __glWindowPos3dARB
#define glWindowPos3dMESA __glWindowPos3dMESA
#define glWindowPos3dv __glWindowPos3dv
#define glWindowPos3dvARB __glWindowPos3dvARB
#define glWindowPos3dvMESA __glWindowPos3dvMESA
#define glWindowPos3f __glWindowPos3f
#define glWindowPos3fARB __glWindowPos3fARB
#define glWindowPos3fMESA __glWindowPos3fMESA
#define glWindowPos3fv __glWindowPos3fv
#define glWindowPos3fvARB __glWindowPos3fvARB
#define glWindowPos3fvMESA __glWindowPos3fvMESA
#define glWindowPos3i __glWindowPos3i
#define glWindowPos3iARB __glWindowPos3iARB
#define glWindowPos3iMESA __glWindowPos3iMESA
#define glWindowPos3iv __glWindowPos3iv
#define glWindowPos3ivARB __glWindowPos3ivARB
#define glWindowPos3ivMESA __glWindowPos3ivMESA
#define glWindowPos3s __glWindowPos3s
#define glWindowPos3sARB __glWindowPos3sARB
#define glWindowPos3sMESA __glWindowPos3sMESA
#define glWindowPos3sv __glWindowPos3sv
#define glWindowPos3svARB __glWindowPos3svARB
#define glWindowPos3svMESA __glWindowPos3svMESA
#define glWindowPos4dMESA __glWindowPos4dMESA
#define glWindowPos4dvMESA __glWindowPos4dvMESA
#define glWindowPos4fMESA __glWindowPos4fMESA
#define glWindowPos4fvMESA __glWindowPos4fvMESA
#define glWindowPos4iMESA __glWindowPos4iMESA
#define glWindowPos4ivMESA __glWindowPos4ivMESA
#define glWindowPos4sMESA __glWindowPos4sMESA
#define glWindowPos4svMESA __glWindowPos4svMESA
#define glWriteMaskEXT __glWriteMaskEXT
#define glCoverageModulationNV __glCoverageModulationNV
#define glCoverageModulationTableNV __glCoverageModulationTableNV
#define glFragmentCoverageColorNV __glFragmentCoverageColorNV
#define glFramebufferSampleLocationsfvNV __glFramebufferSampleLocationsfvNV
#define glGetCoverageModulationTableNV __glGetCoverageModulationTableNV
#define glNamedFramebufferSampleLocationsfvNV __glNamedFramebufferSampleLocationsfvNV
#define glRasterSamplesEXT __glRasterSamplesEXT
#define glResolveDepthValuesNV __glResolveDepthValuesNV
#define glSubpixelPrecisionBiasNV __glSubpixelPrecisionBiasNV

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
