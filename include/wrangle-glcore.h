////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLCORE_H__
#define __GLEW_GLCORE_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <wrangle.h>

#if !defined (GL_GLEXT_PROTOTYPES)
#define GL_GLEXT_PROTOTYPES 1
#endif

#include <GL/glcorearb.h>

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

enum GLEW_GLCORE_FeatureSet
{
  GLEW_GL_ARB_ES2_compatibility,
  GLEW_GL_ARB_ES3_1_compatibility,
  GLEW_GL_ARB_ES3_compatibility,
  GLEW_GL_ARB_arrays_of_arrays,
  GLEW_GL_ARB_base_instance,
  GLEW_GL_ARB_bindless_texture,
  GLEW_GL_ARB_blend_func_extended,
  GLEW_GL_ARB_buffer_storage,
  GLEW_GL_ARB_cl_event,
  GLEW_GL_ARB_clear_buffer_object,
  GLEW_GL_ARB_clear_texture,
  GLEW_GL_ARB_clip_control,
  GLEW_GL_ARB_compressed_texture_pixel_storage,
  GLEW_GL_ARB_compute_shader,
  GLEW_GL_ARB_compute_variable_group_size,
  GLEW_GL_ARB_conditional_render_inverted,
  GLEW_GL_ARB_conservative_depth,
  GLEW_GL_ARB_copy_buffer,
  GLEW_GL_ARB_copy_image,
  GLEW_GL_ARB_cull_distance,
  GLEW_GL_ARB_debug_output,
  GLEW_GL_ARB_depth_buffer_float,
  GLEW_GL_ARB_depth_clamp,
  GLEW_GL_ARB_derivative_control,
  GLEW_GL_ARB_direct_state_access,
  GLEW_GL_ARB_draw_buffers_blend,
  GLEW_GL_ARB_draw_elements_base_vertex,
  GLEW_GL_ARB_draw_indirect,
  GLEW_GL_ARB_enhanced_layouts,
  GLEW_GL_ARB_explicit_attrib_location,
  GLEW_GL_ARB_explicit_uniform_location,
  GLEW_GL_ARB_fragment_coord_conventions,
  GLEW_GL_ARB_fragment_layer_viewport,
  GLEW_GL_ARB_framebuffer_no_attachments,
  GLEW_GL_ARB_framebuffer_object,
  GLEW_GL_ARB_framebuffer_sRGB,
  GLEW_GL_ARB_get_program_binary,
  GLEW_GL_ARB_get_texture_sub_image,
  GLEW_GL_ARB_gpu_shader5,
  GLEW_GL_ARB_gpu_shader_fp64,
  GLEW_GL_ARB_half_float_vertex,
  GLEW_GL_ARB_imaging,
  GLEW_GL_ARB_indirect_parameters,
  GLEW_GL_ARB_internalformat_query,
  GLEW_GL_ARB_internalformat_query2,
  GLEW_GL_ARB_invalidate_subdata,
  GLEW_GL_ARB_map_buffer_alignment,
  GLEW_GL_ARB_map_buffer_range,
  GLEW_GL_ARB_multi_bind,
  GLEW_GL_ARB_multi_draw_indirect,
  GLEW_GL_ARB_occlusion_query2,
  GLEW_GL_ARB_pipeline_statistics_query,
  GLEW_GL_ARB_program_interface_query,
  GLEW_GL_ARB_provoking_vertex,
  GLEW_GL_ARB_query_buffer_object,
  GLEW_GL_ARB_robust_buffer_access_behavior,
  GLEW_GL_ARB_robustness,
  GLEW_GL_ARB_robustness_isolation,
  GLEW_GL_ARB_sample_shading,
  GLEW_GL_ARB_sampler_objects,
  GLEW_GL_ARB_seamless_cube_map,
  GLEW_GL_ARB_seamless_cubemap_per_texture,
  GLEW_GL_ARB_separate_shader_objects,
  GLEW_GL_ARB_shader_atomic_counters,
  GLEW_GL_ARB_shader_bit_encoding,
  GLEW_GL_ARB_shader_draw_parameters,
  GLEW_GL_ARB_shader_group_vote,
  GLEW_GL_ARB_shader_image_load_store,
  GLEW_GL_ARB_shader_image_size,
  GLEW_GL_ARB_shader_precision,
  GLEW_GL_ARB_shader_stencil_export,
  GLEW_GL_ARB_shader_storage_buffer_object,
  GLEW_GL_ARB_shader_subroutine,
  GLEW_GL_ARB_shader_texture_image_samples,
  GLEW_GL_ARB_shading_language_420pack,
  GLEW_GL_ARB_shading_language_include,
  GLEW_GL_ARB_shading_language_packing,
  GLEW_GL_ARB_sparse_buffer,
  GLEW_GL_ARB_sparse_texture,
  GLEW_GL_ARB_stencil_texturing,
  GLEW_GL_ARB_sync,
  GLEW_GL_ARB_tessellation_shader,
  GLEW_GL_ARB_texture_barrier,
  GLEW_GL_ARB_texture_buffer_object_rgb32,
  GLEW_GL_ARB_texture_buffer_range,
  GLEW_GL_ARB_texture_compression_bptc,
  GLEW_GL_ARB_texture_compression_rgtc,
  GLEW_GL_ARB_texture_cube_map_array,
  GLEW_GL_ARB_texture_gather,
  GLEW_GL_ARB_texture_mirror_clamp_to_edge,
  GLEW_GL_ARB_texture_multisample,
  GLEW_GL_ARB_texture_query_levels,
  GLEW_GL_ARB_texture_query_lod,
  GLEW_GL_ARB_texture_rg,
  GLEW_GL_ARB_texture_rgb10_a2ui,
  GLEW_GL_ARB_texture_stencil8,
  GLEW_GL_ARB_texture_storage,
  GLEW_GL_ARB_texture_storage_multisample,
  GLEW_GL_ARB_texture_swizzle,
  GLEW_GL_ARB_texture_view,
  GLEW_GL_ARB_timer_query,
  GLEW_GL_ARB_transform_feedback2,
  GLEW_GL_ARB_transform_feedback3,
  GLEW_GL_ARB_transform_feedback_instanced,
  GLEW_GL_ARB_transform_feedback_overflow_query,
  GLEW_GL_ARB_uniform_buffer_object,
  GLEW_GL_ARB_vertex_array_bgra,
  GLEW_GL_ARB_vertex_array_object,
  GLEW_GL_ARB_vertex_attrib_64bit,
  GLEW_GL_ARB_vertex_attrib_binding,
  GLEW_GL_ARB_vertex_type_10f_11f_11f_rev,
  GLEW_GL_ARB_vertex_type_2_10_10_10_rev,
  GLEW_GL_ARB_viewport_array,
  GLEW_GL_KHR_context_flush_control,
  GLEW_GL_KHR_debug,
  GLEW_GL_KHR_no_error,
  GLEW_GL_KHR_robust_buffer_access_behavior,
  GLEW_GL_KHR_robustness,
  GLEW_GL_KHR_texture_compression_astc_hdr,
  GLEW_GL_KHR_texture_compression_astc_ldr,
  GLEW_GLCORE_FeatureSetCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef void (APIENTRYP PFNGLRELEASESHADERCOMPILERPROC) /* glReleaseShaderCompiler */ ();
typedef void (APIENTRYP PFNGLSHADERBINARYPROC) /* glShaderBinary */ (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
typedef void (APIENTRYP PFNGLGETSHADERPRECISIONFORMATPROC) /* glGetShaderPrecisionFormat */ (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
typedef void (APIENTRYP PFNGLDEPTHRANGEFPROC) /* glDepthRangef */ (GLfloat n, GLfloat f);
typedef void (APIENTRYP PFNGLCLEARDEPTHFPROC) /* glClearDepthf */ (GLfloat d);
typedef void (APIENTRYP PFNGLMEMORYBARRIERBYREGIONPROC) /* glMemoryBarrierByRegion */ (GLbitfield barriers);
typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) /* glDrawArraysInstancedBaseInstance */ (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) /* glDrawElementsInstancedBaseInstance */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) /* glDrawElementsInstancedBaseVertexBaseInstance */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef GLuint64 (APIENTRYP PFNGLGETTEXTUREHANDLEARBPROC) /* glGetTextureHandleARB */ (GLuint texture);
typedef GLuint64 (APIENTRYP PFNGLGETTEXTURESAMPLERHANDLEARBPROC) /* glGetTextureSamplerHandleARB */ (GLuint texture, GLuint sampler);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) /* glMakeTextureHandleResidentARB */ (GLuint64 handle);
typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) /* glMakeTextureHandleNonResidentARB */ (GLuint64 handle);
typedef GLuint64 (APIENTRYP PFNGLGETIMAGEHANDLEARBPROC) /* glGetImageHandleARB */ (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) /* glMakeImageHandleResidentARB */ (GLuint64 handle, GLenum access);
typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) /* glMakeImageHandleNonResidentARB */ (GLuint64 handle);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64ARBPROC) /* glUniformHandleui64ARB */ (GLint location, GLuint64 value);
typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64VARBPROC) /* glUniformHandleui64vARB */ (GLint location, GLsizei count, const GLuint64 * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) /* glProgramUniformHandleui64ARB */ (GLuint program, GLint location, GLuint64 value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) /* glProgramUniformHandleui64vARB */ (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
typedef GLboolean (APIENTRYP PFNGLISTEXTUREHANDLERESIDENTARBPROC) /* glIsTextureHandleResidentARB */ (GLuint64 handle);
typedef GLboolean (APIENTRYP PFNGLISIMAGEHANDLERESIDENTARBPROC) /* glIsImageHandleResidentARB */ (GLuint64 handle);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64ARBPROC) /* glVertexAttribL1ui64ARB */ (GLuint index, GLuint64EXT x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VARBPROC) /* glVertexAttribL1ui64vARB */ (GLuint index, const GLuint64EXT * v);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VARBPROC) /* glGetVertexAttribLui64vARB */ (GLuint index, GLenum pname, GLuint64EXT * params);
typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) /* glBindFragDataLocationIndexed */ (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
typedef GLint (APIENTRYP PFNGLGETFRAGDATAINDEXPROC) /* glGetFragDataIndex */ (GLuint program, const GLchar * name);
typedef void (APIENTRYP PFNGLBUFFERSTORAGEPROC) /* glBufferStorage */ (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
typedef GLsync (APIENTRYP PFNGLCREATESYNCFROMCLEVENTARBPROC) /* glCreateSyncFromCLeventARB */ (struct _cl_context * context, struct _cl_event * event, GLbitfield flags);
typedef void (APIENTRYP PFNGLCLEARBUFFERDATAPROC) /* glClearBufferData */ (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef void (APIENTRYP PFNGLCLEARBUFFERSUBDATAPROC) /* glClearBufferSubData */ (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
typedef void (APIENTRYP PFNGLCLEARTEXIMAGEPROC) /* glClearTexImage */ (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
typedef void (APIENTRYP PFNGLCLEARTEXSUBIMAGEPROC) /* glClearTexSubImage */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
typedef void (APIENTRYP PFNGLCLIPCONTROLPROC) /* glClipControl */ (GLenum origin, GLenum depth);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEPROC) /* glDispatchCompute */ (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEINDIRECTPROC) /* glDispatchComputeIndirect */ (GLintptr indirect);
typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) /* glDispatchComputeGroupSizeARB */ (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
typedef void (APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) /* glCopyBufferSubData */ (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLCOPYIMAGESUBDATAPROC) /* glCopyImageSubData */ (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLARBPROC) /* glDebugMessageControlARB */ (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTARBPROC) /* glDebugMessageInsertARB */ (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKARBPROC) /* glDebugMessageCallbackARB */ (GLDEBUGPROCARB callback, const void * userParam);
typedef GLuint (APIENTRYP PFNGLGETDEBUGMESSAGELOGARBPROC) /* glGetDebugMessageLogARB */ (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
typedef void (APIENTRYP PFNGLCREATETRANSFORMFEEDBACKSPROC) /* glCreateTransformFeedbacks */ (GLsizei n, GLuint * ids);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) /* glTransformFeedbackBufferBase */ (GLuint xfb, GLuint index, GLuint buffer);
typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) /* glTransformFeedbackBufferRange */ (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKIVPROC) /* glGetTransformFeedbackiv */ (GLuint xfb, GLenum pname, GLint * param);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI_VPROC) /* glGetTransformFeedbacki_v */ (GLuint xfb, GLenum pname, GLuint index, GLint * param);
typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI64_VPROC) /* glGetTransformFeedbacki64_v */ (GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
typedef void (APIENTRYP PFNGLCREATEBUFFERSPROC) /* glCreateBuffers */ (GLsizei n, GLuint * buffers);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSTORAGEPROC) /* glNamedBufferStorage */ (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAPROC) /* glNamedBufferData */ (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAPROC) /* glNamedBufferSubData */ (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
typedef void (APIENTRYP PFNGLCOPYNAMEDBUFFERSUBDATAPROC) /* glCopyNamedBufferSubData */ (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERDATAPROC) /* glClearNamedBufferData */ (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERSUBDATAPROC) /* glClearNamedBufferSubData */ (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
typedef void * (APIENTRYP PFNGLMAPNAMEDBUFFERPROC) /* glMapNamedBuffer */ (GLuint buffer, GLenum access);
typedef void * (APIENTRYP PFNGLMAPNAMEDBUFFERRANGEPROC) /* glMapNamedBufferRange */ (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLboolean (APIENTRYP PFNGLUNMAPNAMEDBUFFERPROC) /* glUnmapNamedBuffer */ (GLuint buffer);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) /* glFlushMappedNamedBufferRange */ (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVPROC) /* glGetNamedBufferParameteriv */ (GLuint buffer, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) /* glGetNamedBufferParameteri64v */ (GLuint buffer, GLenum pname, GLint64 * params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVPROC) /* glGetNamedBufferPointerv */ (GLuint buffer, GLenum pname, void ** params);
typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAPROC) /* glGetNamedBufferSubData */ (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
typedef void (APIENTRYP PFNGLCREATEFRAMEBUFFERSPROC) /* glCreateFramebuffers */ (GLsizei n, GLuint * framebuffers);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) /* glNamedFramebufferRenderbuffer */ (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) /* glNamedFramebufferParameteri */ (GLuint framebuffer, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) /* glNamedFramebufferTexture */ (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) /* glNamedFramebufferTextureLayer */ (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) /* glNamedFramebufferDrawBuffer */ (GLuint framebuffer, GLenum buf);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) /* glNamedFramebufferDrawBuffers */ (GLuint framebuffer, GLsizei n, const GLenum * bufs);
typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) /* glNamedFramebufferReadBuffer */ (GLuint framebuffer, GLenum src);
typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) /* glInvalidateNamedFramebufferData */ (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) /* glInvalidateNamedFramebufferSubData */ (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) /* glClearNamedFramebufferiv */ (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) /* glClearNamedFramebufferuiv */ (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) /* glClearNamedFramebufferfv */ (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) /* glClearNamedFramebufferfi */ (GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil);
typedef void (APIENTRYP PFNGLBLITNAMEDFRAMEBUFFERPROC) /* glBlitNamedFramebuffer */ (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) /* glCheckNamedFramebufferStatus */ (GLuint framebuffer, GLenum target);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) /* glGetNamedFramebufferParameteriv */ (GLuint framebuffer, GLenum pname, GLint * param);
typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) /* glGetNamedFramebufferAttachmentParameteriv */ (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLCREATERENDERBUFFERSPROC) /* glCreateRenderbuffers */ (GLsizei n, GLuint * renderbuffers);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEPROC) /* glNamedRenderbufferStorage */ (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) /* glNamedRenderbufferStorageMultisample */ (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) /* glGetNamedRenderbufferParameteriv */ (GLuint renderbuffer, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLCREATETEXTURESPROC) /* glCreateTextures */ (GLenum target, GLsizei n, GLuint * textures);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERPROC) /* glTextureBuffer */ (GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (APIENTRYP PFNGLTEXTUREBUFFERRANGEPROC) /* glTextureBufferRange */ (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE1DPROC) /* glTextureStorage1D */ (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DPROC) /* glTextureStorage2D */ (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DPROC) /* glTextureStorage3D */ (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) /* glTextureStorage2DMultisample */ (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) /* glTextureStorage3DMultisample */ (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DPROC) /* glTextureSubImage1D */ (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DPROC) /* glTextureSubImage2D */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DPROC) /* glTextureSubImage3D */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) /* glCompressedTextureSubImage1D */ (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) /* glCompressedTextureSubImage2D */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) /* glCompressedTextureSubImage3D */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DPROC) /* glCopyTextureSubImage1D */ (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DPROC) /* glCopyTextureSubImage2D */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DPROC) /* glCopyTextureSubImage3D */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFPROC) /* glTextureParameterf */ (GLuint texture, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVPROC) /* glTextureParameterfv */ (GLuint texture, GLenum pname, const GLfloat * param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIPROC) /* glTextureParameteri */ (GLuint texture, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVPROC) /* glTextureParameterIiv */ (GLuint texture, GLenum pname, const GLint * params);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVPROC) /* glTextureParameterIuiv */ (GLuint texture, GLenum pname, const GLuint * params);
typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVPROC) /* glTextureParameteriv */ (GLuint texture, GLenum pname, const GLint * param);
typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPPROC) /* glGenerateTextureMipmap */ (GLuint texture);
typedef void (APIENTRYP PFNGLBINDTEXTUREUNITPROC) /* glBindTextureUnit */ (GLuint unit, GLuint texture);
typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEPROC) /* glGetTextureImage */ (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) /* glGetCompressedTextureImage */ (GLuint texture, GLint level, GLsizei bufSize, void * pixels);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVPROC) /* glGetTextureLevelParameterfv */ (GLuint texture, GLint level, GLenum pname, GLfloat * params);
typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVPROC) /* glGetTextureLevelParameteriv */ (GLuint texture, GLint level, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVPROC) /* glGetTextureParameterfv */ (GLuint texture, GLenum pname, GLfloat * params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVPROC) /* glGetTextureParameterIiv */ (GLuint texture, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVPROC) /* glGetTextureParameterIuiv */ (GLuint texture, GLenum pname, GLuint * params);
typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVPROC) /* glGetTextureParameteriv */ (GLuint texture, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLCREATEVERTEXARRAYSPROC) /* glCreateVertexArrays */ (GLsizei n, GLuint * arrays);
typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYATTRIBPROC) /* glDisableVertexArrayAttrib */ (GLuint vaobj, GLuint index);
typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYATTRIBPROC) /* glEnableVertexArrayAttrib */ (GLuint vaobj, GLuint index);
typedef void (APIENTRYP PFNGLVERTEXARRAYELEMENTBUFFERPROC) /* glVertexArrayElementBuffer */ (GLuint vaobj, GLuint buffer);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERPROC) /* glVertexArrayVertexBuffer */ (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERSPROC) /* glVertexArrayVertexBuffers */ (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBBINDINGPROC) /* glVertexArrayAttribBinding */ (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBFORMATPROC) /* glVertexArrayAttribFormat */ (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBIFORMATPROC) /* glVertexArrayAttribIFormat */ (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBLFORMATPROC) /* glVertexArrayAttribLFormat */ (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXARRAYBINDINGDIVISORPROC) /* glVertexArrayBindingDivisor */ (GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYIVPROC) /* glGetVertexArrayiv */ (GLuint vaobj, GLenum pname, GLint * param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXEDIVPROC) /* glGetVertexArrayIndexediv */ (GLuint vaobj, GLuint index, GLenum pname, GLint * param);
typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXED64IVPROC) /* glGetVertexArrayIndexed64iv */ (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
typedef void (APIENTRYP PFNGLCREATESAMPLERSPROC) /* glCreateSamplers */ (GLsizei n, GLuint * samplers);
typedef void (APIENTRYP PFNGLCREATEPROGRAMPIPELINESPROC) /* glCreateProgramPipelines */ (GLsizei n, GLuint * pipelines);
typedef void (APIENTRYP PFNGLCREATEQUERIESPROC) /* glCreateQueries */ (GLenum target, GLsizei n, GLuint * ids);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTI64VPROC) /* glGetQueryBufferObjecti64v */ (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTIVPROC) /* glGetQueryBufferObjectiv */ (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUI64VPROC) /* glGetQueryBufferObjectui64v */ (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUIVPROC) /* glGetQueryBufferObjectuiv */ (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef void (APIENTRYP PFNGLBLENDEQUATIONIARBPROC) /* glBlendEquationiARB */ (GLuint buf, GLenum mode);
typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIARBPROC) /* glBlendEquationSeparateiARB */ (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRYP PFNGLBLENDFUNCIARBPROC) /* glBlendFunciARB */ (GLuint buf, GLenum src, GLenum dst);
typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIARBPROC) /* glBlendFuncSeparateiARB */ (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXPROC) /* glDrawElementsBaseVertex */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) /* glDrawRangeElementsBaseVertex */ (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) /* glDrawElementsInstancedBaseVertex */ (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) /* glMultiDrawElementsBaseVertex */ (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
typedef void (APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) /* glDrawArraysIndirect */ (GLenum mode, const void * indirect);
typedef void (APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) /* glDrawElementsIndirect */ (GLenum mode, GLenum type, const void * indirect);
typedef void (APIENTRYP PFNGLFRAMEBUFFERPARAMETERIPROC) /* glFramebufferParameteri */ (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVPROC) /* glGetFramebufferParameteriv */ (GLenum target, GLenum pname, GLint * params);
typedef GLboolean (APIENTRYP PFNGLISRENDERBUFFERPROC) /* glIsRenderbuffer */ (GLuint renderbuffer);
typedef void (APIENTRYP PFNGLBINDRENDERBUFFERPROC) /* glBindRenderbuffer */ (GLenum target, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSPROC) /* glDeleteRenderbuffers */ (GLsizei n, const GLuint * renderbuffers);
typedef void (APIENTRYP PFNGLGENRENDERBUFFERSPROC) /* glGenRenderbuffers */ (GLsizei n, GLuint * renderbuffers);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEPROC) /* glRenderbufferStorage */ (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVPROC) /* glGetRenderbufferParameteriv */ (GLenum target, GLenum pname, GLint * params);
typedef GLboolean (APIENTRYP PFNGLISFRAMEBUFFERPROC) /* glIsFramebuffer */ (GLuint framebuffer);
typedef void (APIENTRYP PFNGLBINDFRAMEBUFFERPROC) /* glBindFramebuffer */ (GLenum target, GLuint framebuffer);
typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSPROC) /* glDeleteFramebuffers */ (GLsizei n, const GLuint * framebuffers);
typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSPROC) /* glGenFramebuffers */ (GLsizei n, GLuint * framebuffers);
typedef GLenum (APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSPROC) /* glCheckFramebufferStatus */ (GLenum target);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DPROC) /* glFramebufferTexture1D */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DPROC) /* glFramebufferTexture2D */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DPROC) /* glFramebufferTexture3D */ (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFERPROC) /* glFramebufferRenderbuffer */ (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) /* glGetFramebufferAttachmentParameteriv */ (GLenum target, GLenum attachment, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGENERATEMIPMAPPROC) /* glGenerateMipmap */ (GLenum target);
typedef void (APIENTRYP PFNGLBLITFRAMEBUFFERPROC) /* glBlitFramebuffer */ (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) /* glRenderbufferStorageMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) /* glFramebufferTextureLayer */ (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRYP PFNGLGETPROGRAMBINARYPROC) /* glGetProgramBinary */ (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef void (APIENTRYP PFNGLPROGRAMBINARYPROC) /* glProgramBinary */ (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIPROC) /* glProgramParameteri */ (GLuint program, GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLGETTEXTURESUBIMAGEPROC) /* glGetTextureSubImage */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) /* glGetCompressedTextureSubImage */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
typedef void (APIENTRYP PFNGLUNIFORM1DPROC) /* glUniform1d */ (GLint location, GLdouble x);
typedef void (APIENTRYP PFNGLUNIFORM2DPROC) /* glUniform2d */ (GLint location, GLdouble x, GLdouble y);
typedef void (APIENTRYP PFNGLUNIFORM3DPROC) /* glUniform3d */ (GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLUNIFORM4DPROC) /* glUniform4d */ (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLUNIFORM1DVPROC) /* glUniform1dv */ (GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORM2DVPROC) /* glUniform2dv */ (GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORM3DVPROC) /* glUniform3dv */ (GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORM4DVPROC) /* glUniform4dv */ (GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2DVPROC) /* glUniformMatrix2dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3DVPROC) /* glUniformMatrix3dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4DVPROC) /* glUniformMatrix4dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3DVPROC) /* glUniformMatrix2x3dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4DVPROC) /* glUniformMatrix2x4dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2DVPROC) /* glUniformMatrix3x2dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4DVPROC) /* glUniformMatrix3x4dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2DVPROC) /* glUniformMatrix4x2dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3DVPROC) /* glUniformMatrix4x3dv */ (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLGETUNIFORMDVPROC) /* glGetUniformdv */ (GLuint program, GLint location, GLdouble * params);
typedef void (APIENTRYP PFNGLBLENDCOLORPROC) /* glBlendColor */ (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRYP PFNGLBLENDEQUATIONPROC) /* glBlendEquation */ (GLenum mode);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) /* glMultiDrawArraysIndirectCountARB */ (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) /* glMultiDrawElementsIndirectCountARB */ (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLGETINTERNALFORMATIVPROC) /* glGetInternalformativ */ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
typedef void (APIENTRYP PFNGLGETINTERNALFORMATI64VPROC) /* glGetInternalformati64v */ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
typedef void (APIENTRYP PFNGLINVALIDATETEXSUBIMAGEPROC) /* glInvalidateTexSubImage */ (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLINVALIDATETEXIMAGEPROC) /* glInvalidateTexImage */ (GLuint texture, GLint level);
typedef void (APIENTRYP PFNGLINVALIDATEBUFFERSUBDATAPROC) /* glInvalidateBufferSubData */ (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLINVALIDATEBUFFERDATAPROC) /* glInvalidateBufferData */ (GLuint buffer);
typedef void (APIENTRYP PFNGLINVALIDATEFRAMEBUFFERPROC) /* glInvalidateFramebuffer */ (GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef void (APIENTRYP PFNGLINVALIDATESUBFRAMEBUFFERPROC) /* glInvalidateSubFramebuffer */ (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void * (APIENTRYP PFNGLMAPBUFFERRANGEPROC) /* glMapBufferRange */ (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) /* glFlushMappedBufferRange */ (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRYP PFNGLBINDBUFFERSBASEPROC) /* glBindBuffersBase */ (GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
typedef void (APIENTRYP PFNGLBINDBUFFERSRANGEPROC) /* glBindBuffersRange */ (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
typedef void (APIENTRYP PFNGLBINDTEXTURESPROC) /* glBindTextures */ (GLuint first, GLsizei count, const GLuint * textures);
typedef void (APIENTRYP PFNGLBINDSAMPLERSPROC) /* glBindSamplers */ (GLuint first, GLsizei count, const GLuint * samplers);
typedef void (APIENTRYP PFNGLBINDIMAGETEXTURESPROC) /* glBindImageTextures */ (GLuint first, GLsizei count, const GLuint * textures);
typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERSPROC) /* glBindVertexBuffers */ (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTPROC) /* glMultiDrawArraysIndirect */ (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTPROC) /* glMultiDrawElementsIndirect */ (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef void (APIENTRYP PFNGLGETPROGRAMINTERFACEIVPROC) /* glGetProgramInterfaceiv */ (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
typedef GLuint (APIENTRYP PFNGLGETPROGRAMRESOURCEINDEXPROC) /* glGetProgramResourceIndex */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCENAMEPROC) /* glGetProgramResourceName */ (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCEIVPROC) /* glGetProgramResourceiv */ (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
typedef GLint (APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONPROC) /* glGetProgramResourceLocation */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef GLint (APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) /* glGetProgramResourceLocationIndex */ (GLuint program, GLenum programInterface, const GLchar * name);
typedef void (APIENTRYP PFNGLPROVOKINGVERTEXPROC) /* glProvokingVertex */ (GLenum mode);
typedef GLenum (APIENTRYP PFNGLGETGRAPHICSRESETSTATUSARBPROC) /* glGetGraphicsResetStatusARB */ ();
typedef void (APIENTRYP PFNGLGETNTEXIMAGEARBPROC) /* glGetnTexImageARB */ (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
typedef void (APIENTRYP PFNGLREADNPIXELSARBPROC) /* glReadnPixelsARB */ (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) /* glGetnCompressedTexImageARB */ (GLenum target, GLint lod, GLsizei bufSize, void * img);
typedef void (APIENTRYP PFNGLGETNUNIFORMFVARBPROC) /* glGetnUniformfvARB */ (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef void (APIENTRYP PFNGLGETNUNIFORMIVARBPROC) /* glGetnUniformivARB */ (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef void (APIENTRYP PFNGLGETNUNIFORMUIVARBPROC) /* glGetnUniformuivARB */ (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
typedef void (APIENTRYP PFNGLGETNUNIFORMDVARBPROC) /* glGetnUniformdvARB */ (GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
typedef void (APIENTRYP PFNGLMINSAMPLESHADINGARBPROC) /* glMinSampleShadingARB */ (GLfloat value);
typedef void (APIENTRYP PFNGLGENSAMPLERSPROC) /* glGenSamplers */ (GLsizei count, GLuint * samplers);
typedef void (APIENTRYP PFNGLDELETESAMPLERSPROC) /* glDeleteSamplers */ (GLsizei count, const GLuint * samplers);
typedef GLboolean (APIENTRYP PFNGLISSAMPLERPROC) /* glIsSampler */ (GLuint sampler);
typedef void (APIENTRYP PFNGLBINDSAMPLERPROC) /* glBindSampler */ (GLuint unit, GLuint sampler);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIPROC) /* glSamplerParameteri */ (GLuint sampler, GLenum pname, GLint param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) /* glSamplerParameteriv */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFPROC) /* glSamplerParameterf */ (GLuint sampler, GLenum pname, GLfloat param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) /* glSamplerParameterfv */ (GLuint sampler, GLenum pname, const GLfloat * param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIIVPROC) /* glSamplerParameterIiv */ (GLuint sampler, GLenum pname, const GLint * param);
typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIUIVPROC) /* glSamplerParameterIuiv */ (GLuint sampler, GLenum pname, const GLuint * param);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) /* glGetSamplerParameteriv */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIIVPROC) /* glGetSamplerParameterIiv */ (GLuint sampler, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) /* glGetSamplerParameterfv */ (GLuint sampler, GLenum pname, GLfloat * params);
typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVPROC) /* glGetSamplerParameterIuiv */ (GLuint sampler, GLenum pname, GLuint * params);
typedef void (APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) /* glUseProgramStages */ (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) /* glActiveShaderProgram */ (GLuint pipeline, GLuint program);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) /* glCreateShaderProgramv */ (GLenum type, GLsizei count, const GLchar *const* strings);
typedef void (APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) /* glBindProgramPipeline */ (GLuint pipeline);
typedef void (APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) /* glDeleteProgramPipelines */ (GLsizei n, const GLuint * pipelines);
typedef void (APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) /* glGenProgramPipelines */ (GLsizei n, GLuint * pipelines);
typedef GLboolean (APIENTRYP PFNGLISPROGRAMPIPELINEPROC) /* glIsProgramPipeline */ (GLuint pipeline);
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) /* glGetProgramPipelineiv */ (GLuint pipeline, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) /* glProgramUniform1i */ (GLuint program, GLint location, GLint v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) /* glProgramUniform1iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) /* glProgramUniform1f */ (GLuint program, GLint location, GLfloat v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) /* glProgramUniform1fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DPROC) /* glProgramUniform1d */ (GLuint program, GLint location, GLdouble v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVPROC) /* glProgramUniform1dv */ (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) /* glProgramUniform1ui */ (GLuint program, GLint location, GLuint v0);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) /* glProgramUniform1uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) /* glProgramUniform2i */ (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) /* glProgramUniform2iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) /* glProgramUniform2f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) /* glProgramUniform2fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DPROC) /* glProgramUniform2d */ (GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVPROC) /* glProgramUniform2dv */ (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) /* glProgramUniform2ui */ (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) /* glProgramUniform2uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) /* glProgramUniform3i */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) /* glProgramUniform3iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) /* glProgramUniform3f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) /* glProgramUniform3fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DPROC) /* glProgramUniform3d */ (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVPROC) /* glProgramUniform3dv */ (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) /* glProgramUniform3ui */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) /* glProgramUniform3uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) /* glProgramUniform4i */ (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) /* glProgramUniform4iv */ (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) /* glProgramUniform4f */ (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) /* glProgramUniform4fv */ (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DPROC) /* glProgramUniform4d */ (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVPROC) /* glProgramUniform4dv */ (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) /* glProgramUniform4ui */ (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) /* glProgramUniform4uiv */ (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) /* glProgramUniformMatrix2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) /* glProgramUniformMatrix3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) /* glProgramUniformMatrix4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVPROC) /* glProgramUniformMatrix2dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVPROC) /* glProgramUniformMatrix3dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVPROC) /* glProgramUniformMatrix4dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) /* glProgramUniformMatrix2x3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) /* glProgramUniformMatrix3x2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) /* glProgramUniformMatrix2x4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) /* glProgramUniformMatrix4x2fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) /* glProgramUniformMatrix3x4fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) /* glProgramUniformMatrix4x3fv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) /* glProgramUniformMatrix2x3dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) /* glProgramUniformMatrix3x2dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) /* glProgramUniformMatrix2x4dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) /* glProgramUniformMatrix4x2dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) /* glProgramUniformMatrix3x4dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) /* glProgramUniformMatrix4x3dv */ (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) /* glValidateProgramPipeline */ (GLuint pipeline);
typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) /* glGetProgramPipelineInfoLog */ (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
typedef void (APIENTRYP PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) /* glGetActiveAtomicCounterBufferiv */ (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLBINDIMAGETEXTUREPROC) /* glBindImageTexture */ (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (APIENTRYP PFNGLMEMORYBARRIERPROC) /* glMemoryBarrier */ (GLbitfield barriers);
typedef void (APIENTRYP PFNGLSHADERSTORAGEBLOCKBINDINGPROC) /* glShaderStorageBlockBinding */ (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
typedef GLint (APIENTRYP PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) /* glGetSubroutineUniformLocation */ (GLuint program, GLenum shadertype, const GLchar * name);
typedef GLuint (APIENTRYP PFNGLGETSUBROUTINEINDEXPROC) /* glGetSubroutineIndex */ (GLuint program, GLenum shadertype, const GLchar * name);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) /* glGetActiveSubroutineUniformiv */ (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) /* glGetActiveSubroutineUniformName */ (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINENAMEPROC) /* glGetActiveSubroutineName */ (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
typedef void (APIENTRYP PFNGLUNIFORMSUBROUTINESUIVPROC) /* glUniformSubroutinesuiv */ (GLenum shadertype, GLsizei count, const GLuint * indices);
typedef void (APIENTRYP PFNGLGETUNIFORMSUBROUTINEUIVPROC) /* glGetUniformSubroutineuiv */ (GLenum shadertype, GLint location, GLuint * params);
typedef void (APIENTRYP PFNGLGETPROGRAMSTAGEIVPROC) /* glGetProgramStageiv */ (GLuint program, GLenum shadertype, GLenum pname, GLint * values);
typedef void (APIENTRYP PFNGLNAMEDSTRINGARBPROC) /* glNamedStringARB */ (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string);
typedef void (APIENTRYP PFNGLDELETENAMEDSTRINGARBPROC) /* glDeleteNamedStringARB */ (GLint namelen, const GLchar * name);
typedef void (APIENTRYP PFNGLCOMPILESHADERINCLUDEARBPROC) /* glCompileShaderIncludeARB */ (GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length);
typedef GLboolean (APIENTRYP PFNGLISNAMEDSTRINGARBPROC) /* glIsNamedStringARB */ (GLint namelen, const GLchar * name);
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGARBPROC) /* glGetNamedStringARB */ (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string);
typedef void (APIENTRYP PFNGLGETNAMEDSTRINGIVARBPROC) /* glGetNamedStringivARB */ (GLint namelen, const GLchar * name, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLBUFFERPAGECOMMITMENTARBPROC) /* glBufferPageCommitmentARB */ (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) /* glNamedBufferPageCommitmentEXT */ (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) /* glNamedBufferPageCommitmentARB */ (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
typedef void (APIENTRYP PFNGLTEXPAGECOMMITMENTARBPROC) /* glTexPageCommitmentARB */ (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef GLsync (APIENTRYP PFNGLFENCESYNCPROC) /* glFenceSync */ (GLenum condition, GLbitfield flags);
typedef GLboolean (APIENTRYP PFNGLISSYNCPROC) /* glIsSync */ (GLsync sync);
typedef void (APIENTRYP PFNGLDELETESYNCPROC) /* glDeleteSync */ (GLsync sync);
typedef GLenum (APIENTRYP PFNGLCLIENTWAITSYNCPROC) /* glClientWaitSync */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (APIENTRYP PFNGLWAITSYNCPROC) /* glWaitSync */ (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (APIENTRYP PFNGLGETINTEGER64VPROC) /* glGetInteger64v */ (GLenum pname, GLint64 * data);
typedef void (APIENTRYP PFNGLGETSYNCIVPROC) /* glGetSynciv */ (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
typedef void (APIENTRYP PFNGLPATCHPARAMETERIPROC) /* glPatchParameteri */ (GLenum pname, GLint value);
typedef void (APIENTRYP PFNGLPATCHPARAMETERFVPROC) /* glPatchParameterfv */ (GLenum pname, const GLfloat * values);
typedef void (APIENTRYP PFNGLTEXTUREBARRIERPROC) /* glTextureBarrier */ ();
typedef void (APIENTRYP PFNGLTEXBUFFERRANGEPROC) /* glTexBufferRange */ (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLTEXIMAGE2DMULTISAMPLEPROC) /* glTexImage2DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXIMAGE3DMULTISAMPLEPROC) /* glTexImage3DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLGETMULTISAMPLEFVPROC) /* glGetMultisamplefv */ (GLenum pname, GLuint index, GLfloat * val);
typedef void (APIENTRYP PFNGLSAMPLEMASKIPROC) /* glSampleMaski */ (GLuint maskNumber, GLbitfield mask);
typedef void (APIENTRYP PFNGLTEXSTORAGE1DPROC) /* glTexStorage1D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (APIENTRYP PFNGLTEXSTORAGE2DPROC) /* glTexStorage2D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLTEXSTORAGE3DPROC) /* glTexStorage3D */ (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRYP PFNGLTEXSTORAGE2DMULTISAMPLEPROC) /* glTexStorage2DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEPROC) /* glTexStorage3DMultisample */ (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (APIENTRYP PFNGLTEXTUREVIEWPROC) /* glTextureView */ (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (APIENTRYP PFNGLQUERYCOUNTERPROC) /* glQueryCounter */ (GLuint id, GLenum target);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTI64VPROC) /* glGetQueryObjecti64v */ (GLuint id, GLenum pname, GLint64 * params);
typedef void (APIENTRYP PFNGLGETQUERYOBJECTUI64VPROC) /* glGetQueryObjectui64v */ (GLuint id, GLenum pname, GLuint64 * params);
typedef void (APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) /* glBindTransformFeedback */ (GLenum target, GLuint id);
typedef void (APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) /* glDeleteTransformFeedbacks */ (GLsizei n, const GLuint * ids);
typedef void (APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) /* glGenTransformFeedbacks */ (GLsizei n, GLuint * ids);
typedef GLboolean (APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) /* glIsTransformFeedback */ (GLuint id);
typedef void (APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) /* glPauseTransformFeedback */ ();
typedef void (APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) /* glResumeTransformFeedback */ ();
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKPROC) /* glDrawTransformFeedback */ (GLenum mode, GLuint id);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) /* glDrawTransformFeedbackStream */ (GLenum mode, GLuint id, GLuint stream);
typedef void (APIENTRYP PFNGLBEGINQUERYINDEXEDPROC) /* glBeginQueryIndexed */ (GLenum target, GLuint index, GLuint id);
typedef void (APIENTRYP PFNGLENDQUERYINDEXEDPROC) /* glEndQueryIndexed */ (GLenum target, GLuint index);
typedef void (APIENTRYP PFNGLGETQUERYINDEXEDIVPROC) /* glGetQueryIndexediv */ (GLenum target, GLuint index, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) /* glDrawTransformFeedbackInstanced */ (GLenum mode, GLuint id, GLsizei instancecount);
typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) /* glDrawTransformFeedbackStreamInstanced */ (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
typedef void (APIENTRYP PFNGLGETUNIFORMINDICESPROC) /* glGetUniformIndices */ (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) /* glGetActiveUniformsiv */ (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMNAMEPROC) /* glGetActiveUniformName */ (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
typedef GLuint (APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) /* glGetUniformBlockIndex */ (GLuint program, const GLchar * uniformBlockName);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) /* glGetActiveUniformBlockiv */ (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) /* glGetActiveUniformBlockName */ (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
typedef void (APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) /* glUniformBlockBinding */ (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (APIENTRYP PFNGLBINDBUFFERRANGEPROC) /* glBindBufferRange */ (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRYP PFNGLBINDBUFFERBASEPROC) /* glBindBufferBase */ (GLenum target, GLuint index, GLuint buffer);
typedef void (APIENTRYP PFNGLGETINTEGERI_VPROC) /* glGetIntegeri_v */ (GLenum target, GLuint index, GLint * data);
typedef void (APIENTRYP PFNGLBINDVERTEXARRAYPROC) /* glBindVertexArray */ (GLuint array);
typedef void (APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) /* glDeleteVertexArrays */ (GLsizei n, const GLuint * arrays);
typedef void (APIENTRYP PFNGLGENVERTEXARRAYSPROC) /* glGenVertexArrays */ (GLsizei n, GLuint * arrays);
typedef GLboolean (APIENTRYP PFNGLISVERTEXARRAYPROC) /* glIsVertexArray */ (GLuint array);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DPROC) /* glVertexAttribL1d */ (GLuint index, GLdouble x);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DPROC) /* glVertexAttribL2d */ (GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DPROC) /* glVertexAttribL3d */ (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DPROC) /* glVertexAttribL4d */ (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DVPROC) /* glVertexAttribL1dv */ (GLuint index, const GLdouble * v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DVPROC) /* glVertexAttribL2dv */ (GLuint index, const GLdouble * v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DVPROC) /* glVertexAttribL3dv */ (GLuint index, const GLdouble * v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DVPROC) /* glVertexAttribL4dv */ (GLuint index, const GLdouble * v);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLPOINTERPROC) /* glVertexAttribLPointer */ (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLDVPROC) /* glGetVertexAttribLdv */ (GLuint index, GLenum pname, GLdouble * params);
typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERPROC) /* glBindVertexBuffer */ (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATPROC) /* glVertexAttribFormat */ (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATPROC) /* glVertexAttribIFormat */ (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATPROC) /* glVertexAttribLFormat */ (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (APIENTRYP PFNGLVERTEXATTRIBBINDINGPROC) /* glVertexAttribBinding */ (GLuint attribindex, GLuint bindingindex);
typedef void (APIENTRYP PFNGLVERTEXBINDINGDIVISORPROC) /* glVertexBindingDivisor */ (GLuint bindingindex, GLuint divisor);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIPROC) /* glVertexAttribP1ui */ (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIVPROC) /* glVertexAttribP1uiv */ (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIPROC) /* glVertexAttribP2ui */ (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIVPROC) /* glVertexAttribP2uiv */ (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIPROC) /* glVertexAttribP3ui */ (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIVPROC) /* glVertexAttribP3uiv */ (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIPROC) /* glVertexAttribP4ui */ (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIVPROC) /* glVertexAttribP4uiv */ (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef void (APIENTRYP PFNGLVIEWPORTARRAYVPROC) /* glViewportArrayv */ (GLuint first, GLsizei count, const GLfloat * v);
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFPROC) /* glViewportIndexedf */ (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFVPROC) /* glViewportIndexedfv */ (GLuint index, const GLfloat * v);
typedef void (APIENTRYP PFNGLSCISSORARRAYVPROC) /* glScissorArrayv */ (GLuint first, GLsizei count, const GLint * v);
typedef void (APIENTRYP PFNGLSCISSORINDEXEDPROC) /* glScissorIndexed */ (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (APIENTRYP PFNGLSCISSORINDEXEDVPROC) /* glScissorIndexedv */ (GLuint index, const GLint * v);
typedef void (APIENTRYP PFNGLDEPTHRANGEARRAYVPROC) /* glDepthRangeArrayv */ (GLuint first, GLsizei count, const GLdouble * v);
typedef void (APIENTRYP PFNGLDEPTHRANGEINDEXEDPROC) /* glDepthRangeIndexed */ (GLuint index, GLdouble n, GLdouble f);
typedef void (APIENTRYP PFNGLGETFLOATI_VPROC) /* glGetFloati_v */ (GLenum target, GLuint index, GLfloat * data);
typedef void (APIENTRYP PFNGLGETDOUBLEI_VPROC) /* glGetDoublei_v */ (GLenum target, GLuint index, GLdouble * data);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  class glcore
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class DeviceConfig
    {
    public:

      bool m_featureSupported [GLEW_GLCORE_FeatureSetCount];

      PFNGLRELEASESHADERCOMPILERPROC m_glReleaseShaderCompiler;
      PFNGLSHADERBINARYPROC m_glShaderBinary;
      PFNGLGETSHADERPRECISIONFORMATPROC m_glGetShaderPrecisionFormat;
      PFNGLDEPTHRANGEFPROC m_glDepthRangef;
      PFNGLCLEARDEPTHFPROC m_glClearDepthf;
      PFNGLMEMORYBARRIERBYREGIONPROC m_glMemoryBarrierByRegion;
      PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC m_glDrawArraysInstancedBaseInstance;
      PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC m_glDrawElementsInstancedBaseInstance;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC m_glDrawElementsInstancedBaseVertexBaseInstance;
      PFNGLGETTEXTUREHANDLEARBPROC m_glGetTextureHandleARB;
      PFNGLGETTEXTURESAMPLERHANDLEARBPROC m_glGetTextureSamplerHandleARB;
      PFNGLMAKETEXTUREHANDLERESIDENTARBPROC m_glMakeTextureHandleResidentARB;
      PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC m_glMakeTextureHandleNonResidentARB;
      PFNGLGETIMAGEHANDLEARBPROC m_glGetImageHandleARB;
      PFNGLMAKEIMAGEHANDLERESIDENTARBPROC m_glMakeImageHandleResidentARB;
      PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC m_glMakeImageHandleNonResidentARB;
      PFNGLUNIFORMHANDLEUI64ARBPROC m_glUniformHandleui64ARB;
      PFNGLUNIFORMHANDLEUI64VARBPROC m_glUniformHandleui64vARB;
      PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC m_glProgramUniformHandleui64ARB;
      PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC m_glProgramUniformHandleui64vARB;
      PFNGLISTEXTUREHANDLERESIDENTARBPROC m_glIsTextureHandleResidentARB;
      PFNGLISIMAGEHANDLERESIDENTARBPROC m_glIsImageHandleResidentARB;
      PFNGLVERTEXATTRIBL1UI64ARBPROC m_glVertexAttribL1ui64ARB;
      PFNGLVERTEXATTRIBL1UI64VARBPROC m_glVertexAttribL1ui64vARB;
      PFNGLGETVERTEXATTRIBLUI64VARBPROC m_glGetVertexAttribLui64vARB;
      PFNGLBINDFRAGDATALOCATIONINDEXEDPROC m_glBindFragDataLocationIndexed;
      PFNGLGETFRAGDATAINDEXPROC m_glGetFragDataIndex;
      PFNGLBUFFERSTORAGEPROC m_glBufferStorage;
      PFNGLCREATESYNCFROMCLEVENTARBPROC m_glCreateSyncFromCLeventARB;
      PFNGLCLEARBUFFERDATAPROC m_glClearBufferData;
      PFNGLCLEARBUFFERSUBDATAPROC m_glClearBufferSubData;
      PFNGLCLEARTEXIMAGEPROC m_glClearTexImage;
      PFNGLCLEARTEXSUBIMAGEPROC m_glClearTexSubImage;
      PFNGLCLIPCONTROLPROC m_glClipControl;
      PFNGLDISPATCHCOMPUTEPROC m_glDispatchCompute;
      PFNGLDISPATCHCOMPUTEINDIRECTPROC m_glDispatchComputeIndirect;
      PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC m_glDispatchComputeGroupSizeARB;
      PFNGLCOPYBUFFERSUBDATAPROC m_glCopyBufferSubData;
      PFNGLCOPYIMAGESUBDATAPROC m_glCopyImageSubData;
      PFNGLDEBUGMESSAGECONTROLARBPROC m_glDebugMessageControlARB;
      PFNGLDEBUGMESSAGEINSERTARBPROC m_glDebugMessageInsertARB;
      PFNGLDEBUGMESSAGECALLBACKARBPROC m_glDebugMessageCallbackARB;
      PFNGLGETDEBUGMESSAGELOGARBPROC m_glGetDebugMessageLogARB;
      PFNGLCREATETRANSFORMFEEDBACKSPROC m_glCreateTransformFeedbacks;
      PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC m_glTransformFeedbackBufferBase;
      PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC m_glTransformFeedbackBufferRange;
      PFNGLGETTRANSFORMFEEDBACKIVPROC m_glGetTransformFeedbackiv;
      PFNGLGETTRANSFORMFEEDBACKI_VPROC m_glGetTransformFeedbacki_v;
      PFNGLGETTRANSFORMFEEDBACKI64_VPROC m_glGetTransformFeedbacki64_v;
      PFNGLCREATEBUFFERSPROC m_glCreateBuffers;
      PFNGLNAMEDBUFFERSTORAGEPROC m_glNamedBufferStorage;
      PFNGLNAMEDBUFFERDATAPROC m_glNamedBufferData;
      PFNGLNAMEDBUFFERSUBDATAPROC m_glNamedBufferSubData;
      PFNGLCOPYNAMEDBUFFERSUBDATAPROC m_glCopyNamedBufferSubData;
      PFNGLCLEARNAMEDBUFFERDATAPROC m_glClearNamedBufferData;
      PFNGLCLEARNAMEDBUFFERSUBDATAPROC m_glClearNamedBufferSubData;
      PFNGLMAPNAMEDBUFFERPROC m_glMapNamedBuffer;
      PFNGLMAPNAMEDBUFFERRANGEPROC m_glMapNamedBufferRange;
      PFNGLUNMAPNAMEDBUFFERPROC m_glUnmapNamedBuffer;
      PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC m_glFlushMappedNamedBufferRange;
      PFNGLGETNAMEDBUFFERPARAMETERIVPROC m_glGetNamedBufferParameteriv;
      PFNGLGETNAMEDBUFFERPARAMETERI64VPROC m_glGetNamedBufferParameteri64v;
      PFNGLGETNAMEDBUFFERPOINTERVPROC m_glGetNamedBufferPointerv;
      PFNGLGETNAMEDBUFFERSUBDATAPROC m_glGetNamedBufferSubData;
      PFNGLCREATEFRAMEBUFFERSPROC m_glCreateFramebuffers;
      PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC m_glNamedFramebufferRenderbuffer;
      PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC m_glNamedFramebufferParameteri;
      PFNGLNAMEDFRAMEBUFFERTEXTUREPROC m_glNamedFramebufferTexture;
      PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC m_glNamedFramebufferTextureLayer;
      PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC m_glNamedFramebufferDrawBuffer;
      PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC m_glNamedFramebufferDrawBuffers;
      PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC m_glNamedFramebufferReadBuffer;
      PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC m_glInvalidateNamedFramebufferData;
      PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC m_glInvalidateNamedFramebufferSubData;
      PFNGLCLEARNAMEDFRAMEBUFFERIVPROC m_glClearNamedFramebufferiv;
      PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC m_glClearNamedFramebufferuiv;
      PFNGLCLEARNAMEDFRAMEBUFFERFVPROC m_glClearNamedFramebufferfv;
      PFNGLCLEARNAMEDFRAMEBUFFERFIPROC m_glClearNamedFramebufferfi;
      PFNGLBLITNAMEDFRAMEBUFFERPROC m_glBlitNamedFramebuffer;
      PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC m_glCheckNamedFramebufferStatus;
      PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC m_glGetNamedFramebufferParameteriv;
      PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC m_glGetNamedFramebufferAttachmentParameteriv;
      PFNGLCREATERENDERBUFFERSPROC m_glCreateRenderbuffers;
      PFNGLNAMEDRENDERBUFFERSTORAGEPROC m_glNamedRenderbufferStorage;
      PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC m_glNamedRenderbufferStorageMultisample;
      PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC m_glGetNamedRenderbufferParameteriv;
      PFNGLCREATETEXTURESPROC m_glCreateTextures;
      PFNGLTEXTUREBUFFERPROC m_glTextureBuffer;
      PFNGLTEXTUREBUFFERRANGEPROC m_glTextureBufferRange;
      PFNGLTEXTURESTORAGE1DPROC m_glTextureStorage1D;
      PFNGLTEXTURESTORAGE2DPROC m_glTextureStorage2D;
      PFNGLTEXTURESTORAGE3DPROC m_glTextureStorage3D;
      PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC m_glTextureStorage2DMultisample;
      PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC m_glTextureStorage3DMultisample;
      PFNGLTEXTURESUBIMAGE1DPROC m_glTextureSubImage1D;
      PFNGLTEXTURESUBIMAGE2DPROC m_glTextureSubImage2D;
      PFNGLTEXTURESUBIMAGE3DPROC m_glTextureSubImage3D;
      PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC m_glCompressedTextureSubImage1D;
      PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC m_glCompressedTextureSubImage2D;
      PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC m_glCompressedTextureSubImage3D;
      PFNGLCOPYTEXTURESUBIMAGE1DPROC m_glCopyTextureSubImage1D;
      PFNGLCOPYTEXTURESUBIMAGE2DPROC m_glCopyTextureSubImage2D;
      PFNGLCOPYTEXTURESUBIMAGE3DPROC m_glCopyTextureSubImage3D;
      PFNGLTEXTUREPARAMETERFPROC m_glTextureParameterf;
      PFNGLTEXTUREPARAMETERFVPROC m_glTextureParameterfv;
      PFNGLTEXTUREPARAMETERIPROC m_glTextureParameteri;
      PFNGLTEXTUREPARAMETERIIVPROC m_glTextureParameterIiv;
      PFNGLTEXTUREPARAMETERIUIVPROC m_glTextureParameterIuiv;
      PFNGLTEXTUREPARAMETERIVPROC m_glTextureParameteriv;
      PFNGLGENERATETEXTUREMIPMAPPROC m_glGenerateTextureMipmap;
      PFNGLBINDTEXTUREUNITPROC m_glBindTextureUnit;
      PFNGLGETTEXTUREIMAGEPROC m_glGetTextureImage;
      PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC m_glGetCompressedTextureImage;
      PFNGLGETTEXTURELEVELPARAMETERFVPROC m_glGetTextureLevelParameterfv;
      PFNGLGETTEXTURELEVELPARAMETERIVPROC m_glGetTextureLevelParameteriv;
      PFNGLGETTEXTUREPARAMETERFVPROC m_glGetTextureParameterfv;
      PFNGLGETTEXTUREPARAMETERIIVPROC m_glGetTextureParameterIiv;
      PFNGLGETTEXTUREPARAMETERIUIVPROC m_glGetTextureParameterIuiv;
      PFNGLGETTEXTUREPARAMETERIVPROC m_glGetTextureParameteriv;
      PFNGLCREATEVERTEXARRAYSPROC m_glCreateVertexArrays;
      PFNGLDISABLEVERTEXARRAYATTRIBPROC m_glDisableVertexArrayAttrib;
      PFNGLENABLEVERTEXARRAYATTRIBPROC m_glEnableVertexArrayAttrib;
      PFNGLVERTEXARRAYELEMENTBUFFERPROC m_glVertexArrayElementBuffer;
      PFNGLVERTEXARRAYVERTEXBUFFERPROC m_glVertexArrayVertexBuffer;
      PFNGLVERTEXARRAYVERTEXBUFFERSPROC m_glVertexArrayVertexBuffers;
      PFNGLVERTEXARRAYATTRIBBINDINGPROC m_glVertexArrayAttribBinding;
      PFNGLVERTEXARRAYATTRIBFORMATPROC m_glVertexArrayAttribFormat;
      PFNGLVERTEXARRAYATTRIBIFORMATPROC m_glVertexArrayAttribIFormat;
      PFNGLVERTEXARRAYATTRIBLFORMATPROC m_glVertexArrayAttribLFormat;
      PFNGLVERTEXARRAYBINDINGDIVISORPROC m_glVertexArrayBindingDivisor;
      PFNGLGETVERTEXARRAYIVPROC m_glGetVertexArrayiv;
      PFNGLGETVERTEXARRAYINDEXEDIVPROC m_glGetVertexArrayIndexediv;
      PFNGLGETVERTEXARRAYINDEXED64IVPROC m_glGetVertexArrayIndexed64iv;
      PFNGLCREATESAMPLERSPROC m_glCreateSamplers;
      PFNGLCREATEPROGRAMPIPELINESPROC m_glCreateProgramPipelines;
      PFNGLCREATEQUERIESPROC m_glCreateQueries;
      PFNGLGETQUERYBUFFEROBJECTI64VPROC m_glGetQueryBufferObjecti64v;
      PFNGLGETQUERYBUFFEROBJECTIVPROC m_glGetQueryBufferObjectiv;
      PFNGLGETQUERYBUFFEROBJECTUI64VPROC m_glGetQueryBufferObjectui64v;
      PFNGLGETQUERYBUFFEROBJECTUIVPROC m_glGetQueryBufferObjectuiv;
      PFNGLBLENDEQUATIONIARBPROC m_glBlendEquationiARB;
      PFNGLBLENDEQUATIONSEPARATEIARBPROC m_glBlendEquationSeparateiARB;
      PFNGLBLENDFUNCIARBPROC m_glBlendFunciARB;
      PFNGLBLENDFUNCSEPARATEIARBPROC m_glBlendFuncSeparateiARB;
      PFNGLDRAWELEMENTSBASEVERTEXPROC m_glDrawElementsBaseVertex;
      PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC m_glDrawRangeElementsBaseVertex;
      PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC m_glDrawElementsInstancedBaseVertex;
      PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC m_glMultiDrawElementsBaseVertex;
      PFNGLDRAWARRAYSINDIRECTPROC m_glDrawArraysIndirect;
      PFNGLDRAWELEMENTSINDIRECTPROC m_glDrawElementsIndirect;
      PFNGLFRAMEBUFFERPARAMETERIPROC m_glFramebufferParameteri;
      PFNGLGETFRAMEBUFFERPARAMETERIVPROC m_glGetFramebufferParameteriv;
      PFNGLISRENDERBUFFERPROC m_glIsRenderbuffer;
      PFNGLBINDRENDERBUFFERPROC m_glBindRenderbuffer;
      PFNGLDELETERENDERBUFFERSPROC m_glDeleteRenderbuffers;
      PFNGLGENRENDERBUFFERSPROC m_glGenRenderbuffers;
      PFNGLRENDERBUFFERSTORAGEPROC m_glRenderbufferStorage;
      PFNGLGETRENDERBUFFERPARAMETERIVPROC m_glGetRenderbufferParameteriv;
      PFNGLISFRAMEBUFFERPROC m_glIsFramebuffer;
      PFNGLBINDFRAMEBUFFERPROC m_glBindFramebuffer;
      PFNGLDELETEFRAMEBUFFERSPROC m_glDeleteFramebuffers;
      PFNGLGENFRAMEBUFFERSPROC m_glGenFramebuffers;
      PFNGLCHECKFRAMEBUFFERSTATUSPROC m_glCheckFramebufferStatus;
      PFNGLFRAMEBUFFERTEXTURE1DPROC m_glFramebufferTexture1D;
      PFNGLFRAMEBUFFERTEXTURE2DPROC m_glFramebufferTexture2D;
      PFNGLFRAMEBUFFERTEXTURE3DPROC m_glFramebufferTexture3D;
      PFNGLFRAMEBUFFERRENDERBUFFERPROC m_glFramebufferRenderbuffer;
      PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC m_glGetFramebufferAttachmentParameteriv;
      PFNGLGENERATEMIPMAPPROC m_glGenerateMipmap;
      PFNGLBLITFRAMEBUFFERPROC m_glBlitFramebuffer;
      PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC m_glRenderbufferStorageMultisample;
      PFNGLFRAMEBUFFERTEXTURELAYERPROC m_glFramebufferTextureLayer;
      PFNGLGETPROGRAMBINARYPROC m_glGetProgramBinary;
      PFNGLPROGRAMBINARYPROC m_glProgramBinary;
      PFNGLPROGRAMPARAMETERIPROC m_glProgramParameteri;
      PFNGLGETTEXTURESUBIMAGEPROC m_glGetTextureSubImage;
      PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC m_glGetCompressedTextureSubImage;
      PFNGLUNIFORM1DPROC m_glUniform1d;
      PFNGLUNIFORM2DPROC m_glUniform2d;
      PFNGLUNIFORM3DPROC m_glUniform3d;
      PFNGLUNIFORM4DPROC m_glUniform4d;
      PFNGLUNIFORM1DVPROC m_glUniform1dv;
      PFNGLUNIFORM2DVPROC m_glUniform2dv;
      PFNGLUNIFORM3DVPROC m_glUniform3dv;
      PFNGLUNIFORM4DVPROC m_glUniform4dv;
      PFNGLUNIFORMMATRIX2DVPROC m_glUniformMatrix2dv;
      PFNGLUNIFORMMATRIX3DVPROC m_glUniformMatrix3dv;
      PFNGLUNIFORMMATRIX4DVPROC m_glUniformMatrix4dv;
      PFNGLUNIFORMMATRIX2X3DVPROC m_glUniformMatrix2x3dv;
      PFNGLUNIFORMMATRIX2X4DVPROC m_glUniformMatrix2x4dv;
      PFNGLUNIFORMMATRIX3X2DVPROC m_glUniformMatrix3x2dv;
      PFNGLUNIFORMMATRIX3X4DVPROC m_glUniformMatrix3x4dv;
      PFNGLUNIFORMMATRIX4X2DVPROC m_glUniformMatrix4x2dv;
      PFNGLUNIFORMMATRIX4X3DVPROC m_glUniformMatrix4x3dv;
      PFNGLGETUNIFORMDVPROC m_glGetUniformdv;
      PFNGLBLENDCOLORPROC m_glBlendColor;
      PFNGLBLENDEQUATIONPROC m_glBlendEquation;
      PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC m_glMultiDrawArraysIndirectCountARB;
      PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC m_glMultiDrawElementsIndirectCountARB;
      PFNGLGETINTERNALFORMATIVPROC m_glGetInternalformativ;
      PFNGLGETINTERNALFORMATI64VPROC m_glGetInternalformati64v;
      PFNGLINVALIDATETEXSUBIMAGEPROC m_glInvalidateTexSubImage;
      PFNGLINVALIDATETEXIMAGEPROC m_glInvalidateTexImage;
      PFNGLINVALIDATEBUFFERSUBDATAPROC m_glInvalidateBufferSubData;
      PFNGLINVALIDATEBUFFERDATAPROC m_glInvalidateBufferData;
      PFNGLINVALIDATEFRAMEBUFFERPROC m_glInvalidateFramebuffer;
      PFNGLINVALIDATESUBFRAMEBUFFERPROC m_glInvalidateSubFramebuffer;
      PFNGLMAPBUFFERRANGEPROC m_glMapBufferRange;
      PFNGLFLUSHMAPPEDBUFFERRANGEPROC m_glFlushMappedBufferRange;
      PFNGLBINDBUFFERSBASEPROC m_glBindBuffersBase;
      PFNGLBINDBUFFERSRANGEPROC m_glBindBuffersRange;
      PFNGLBINDTEXTURESPROC m_glBindTextures;
      PFNGLBINDSAMPLERSPROC m_glBindSamplers;
      PFNGLBINDIMAGETEXTURESPROC m_glBindImageTextures;
      PFNGLBINDVERTEXBUFFERSPROC m_glBindVertexBuffers;
      PFNGLMULTIDRAWARRAYSINDIRECTPROC m_glMultiDrawArraysIndirect;
      PFNGLMULTIDRAWELEMENTSINDIRECTPROC m_glMultiDrawElementsIndirect;
      PFNGLGETPROGRAMINTERFACEIVPROC m_glGetProgramInterfaceiv;
      PFNGLGETPROGRAMRESOURCEINDEXPROC m_glGetProgramResourceIndex;
      PFNGLGETPROGRAMRESOURCENAMEPROC m_glGetProgramResourceName;
      PFNGLGETPROGRAMRESOURCEIVPROC m_glGetProgramResourceiv;
      PFNGLGETPROGRAMRESOURCELOCATIONPROC m_glGetProgramResourceLocation;
      PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC m_glGetProgramResourceLocationIndex;
      PFNGLPROVOKINGVERTEXPROC m_glProvokingVertex;
      PFNGLGETGRAPHICSRESETSTATUSARBPROC m_glGetGraphicsResetStatusARB;
      PFNGLGETNTEXIMAGEARBPROC m_glGetnTexImageARB;
      PFNGLREADNPIXELSARBPROC m_glReadnPixelsARB;
      PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC m_glGetnCompressedTexImageARB;
      PFNGLGETNUNIFORMFVARBPROC m_glGetnUniformfvARB;
      PFNGLGETNUNIFORMIVARBPROC m_glGetnUniformivARB;
      PFNGLGETNUNIFORMUIVARBPROC m_glGetnUniformuivARB;
      PFNGLGETNUNIFORMDVARBPROC m_glGetnUniformdvARB;
      PFNGLMINSAMPLESHADINGARBPROC m_glMinSampleShadingARB;
      PFNGLGENSAMPLERSPROC m_glGenSamplers;
      PFNGLDELETESAMPLERSPROC m_glDeleteSamplers;
      PFNGLISSAMPLERPROC m_glIsSampler;
      PFNGLBINDSAMPLERPROC m_glBindSampler;
      PFNGLSAMPLERPARAMETERIPROC m_glSamplerParameteri;
      PFNGLSAMPLERPARAMETERIVPROC m_glSamplerParameteriv;
      PFNGLSAMPLERPARAMETERFPROC m_glSamplerParameterf;
      PFNGLSAMPLERPARAMETERFVPROC m_glSamplerParameterfv;
      PFNGLSAMPLERPARAMETERIIVPROC m_glSamplerParameterIiv;
      PFNGLSAMPLERPARAMETERIUIVPROC m_glSamplerParameterIuiv;
      PFNGLGETSAMPLERPARAMETERIVPROC m_glGetSamplerParameteriv;
      PFNGLGETSAMPLERPARAMETERIIVPROC m_glGetSamplerParameterIiv;
      PFNGLGETSAMPLERPARAMETERFVPROC m_glGetSamplerParameterfv;
      PFNGLGETSAMPLERPARAMETERIUIVPROC m_glGetSamplerParameterIuiv;
      PFNGLUSEPROGRAMSTAGESPROC m_glUseProgramStages;
      PFNGLACTIVESHADERPROGRAMPROC m_glActiveShaderProgram;
      PFNGLCREATESHADERPROGRAMVPROC m_glCreateShaderProgramv;
      PFNGLBINDPROGRAMPIPELINEPROC m_glBindProgramPipeline;
      PFNGLDELETEPROGRAMPIPELINESPROC m_glDeleteProgramPipelines;
      PFNGLGENPROGRAMPIPELINESPROC m_glGenProgramPipelines;
      PFNGLISPROGRAMPIPELINEPROC m_glIsProgramPipeline;
      PFNGLGETPROGRAMPIPELINEIVPROC m_glGetProgramPipelineiv;
      PFNGLPROGRAMUNIFORM1IPROC m_glProgramUniform1i;
      PFNGLPROGRAMUNIFORM1IVPROC m_glProgramUniform1iv;
      PFNGLPROGRAMUNIFORM1FPROC m_glProgramUniform1f;
      PFNGLPROGRAMUNIFORM1FVPROC m_glProgramUniform1fv;
      PFNGLPROGRAMUNIFORM1DPROC m_glProgramUniform1d;
      PFNGLPROGRAMUNIFORM1DVPROC m_glProgramUniform1dv;
      PFNGLPROGRAMUNIFORM1UIPROC m_glProgramUniform1ui;
      PFNGLPROGRAMUNIFORM1UIVPROC m_glProgramUniform1uiv;
      PFNGLPROGRAMUNIFORM2IPROC m_glProgramUniform2i;
      PFNGLPROGRAMUNIFORM2IVPROC m_glProgramUniform2iv;
      PFNGLPROGRAMUNIFORM2FPROC m_glProgramUniform2f;
      PFNGLPROGRAMUNIFORM2FVPROC m_glProgramUniform2fv;
      PFNGLPROGRAMUNIFORM2DPROC m_glProgramUniform2d;
      PFNGLPROGRAMUNIFORM2DVPROC m_glProgramUniform2dv;
      PFNGLPROGRAMUNIFORM2UIPROC m_glProgramUniform2ui;
      PFNGLPROGRAMUNIFORM2UIVPROC m_glProgramUniform2uiv;
      PFNGLPROGRAMUNIFORM3IPROC m_glProgramUniform3i;
      PFNGLPROGRAMUNIFORM3IVPROC m_glProgramUniform3iv;
      PFNGLPROGRAMUNIFORM3FPROC m_glProgramUniform3f;
      PFNGLPROGRAMUNIFORM3FVPROC m_glProgramUniform3fv;
      PFNGLPROGRAMUNIFORM3DPROC m_glProgramUniform3d;
      PFNGLPROGRAMUNIFORM3DVPROC m_glProgramUniform3dv;
      PFNGLPROGRAMUNIFORM3UIPROC m_glProgramUniform3ui;
      PFNGLPROGRAMUNIFORM3UIVPROC m_glProgramUniform3uiv;
      PFNGLPROGRAMUNIFORM4IPROC m_glProgramUniform4i;
      PFNGLPROGRAMUNIFORM4IVPROC m_glProgramUniform4iv;
      PFNGLPROGRAMUNIFORM4FPROC m_glProgramUniform4f;
      PFNGLPROGRAMUNIFORM4FVPROC m_glProgramUniform4fv;
      PFNGLPROGRAMUNIFORM4DPROC m_glProgramUniform4d;
      PFNGLPROGRAMUNIFORM4DVPROC m_glProgramUniform4dv;
      PFNGLPROGRAMUNIFORM4UIPROC m_glProgramUniform4ui;
      PFNGLPROGRAMUNIFORM4UIVPROC m_glProgramUniform4uiv;
      PFNGLPROGRAMUNIFORMMATRIX2FVPROC m_glProgramUniformMatrix2fv;
      PFNGLPROGRAMUNIFORMMATRIX3FVPROC m_glProgramUniformMatrix3fv;
      PFNGLPROGRAMUNIFORMMATRIX4FVPROC m_glProgramUniformMatrix4fv;
      PFNGLPROGRAMUNIFORMMATRIX2DVPROC m_glProgramUniformMatrix2dv;
      PFNGLPROGRAMUNIFORMMATRIX3DVPROC m_glProgramUniformMatrix3dv;
      PFNGLPROGRAMUNIFORMMATRIX4DVPROC m_glProgramUniformMatrix4dv;
      PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC m_glProgramUniformMatrix2x3fv;
      PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC m_glProgramUniformMatrix3x2fv;
      PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC m_glProgramUniformMatrix2x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC m_glProgramUniformMatrix4x2fv;
      PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC m_glProgramUniformMatrix3x4fv;
      PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC m_glProgramUniformMatrix4x3fv;
      PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC m_glProgramUniformMatrix2x3dv;
      PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC m_glProgramUniformMatrix3x2dv;
      PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC m_glProgramUniformMatrix2x4dv;
      PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC m_glProgramUniformMatrix4x2dv;
      PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC m_glProgramUniformMatrix3x4dv;
      PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC m_glProgramUniformMatrix4x3dv;
      PFNGLVALIDATEPROGRAMPIPELINEPROC m_glValidateProgramPipeline;
      PFNGLGETPROGRAMPIPELINEINFOLOGPROC m_glGetProgramPipelineInfoLog;
      PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC m_glGetActiveAtomicCounterBufferiv;
      PFNGLBINDIMAGETEXTUREPROC m_glBindImageTexture;
      PFNGLMEMORYBARRIERPROC m_glMemoryBarrier;
      PFNGLSHADERSTORAGEBLOCKBINDINGPROC m_glShaderStorageBlockBinding;
      PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC m_glGetSubroutineUniformLocation;
      PFNGLGETSUBROUTINEINDEXPROC m_glGetSubroutineIndex;
      PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC m_glGetActiveSubroutineUniformiv;
      PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC m_glGetActiveSubroutineUniformName;
      PFNGLGETACTIVESUBROUTINENAMEPROC m_glGetActiveSubroutineName;
      PFNGLUNIFORMSUBROUTINESUIVPROC m_glUniformSubroutinesuiv;
      PFNGLGETUNIFORMSUBROUTINEUIVPROC m_glGetUniformSubroutineuiv;
      PFNGLGETPROGRAMSTAGEIVPROC m_glGetProgramStageiv;
      PFNGLNAMEDSTRINGARBPROC m_glNamedStringARB;
      PFNGLDELETENAMEDSTRINGARBPROC m_glDeleteNamedStringARB;
      PFNGLCOMPILESHADERINCLUDEARBPROC m_glCompileShaderIncludeARB;
      PFNGLISNAMEDSTRINGARBPROC m_glIsNamedStringARB;
      PFNGLGETNAMEDSTRINGARBPROC m_glGetNamedStringARB;
      PFNGLGETNAMEDSTRINGIVARBPROC m_glGetNamedStringivARB;
      PFNGLBUFFERPAGECOMMITMENTARBPROC m_glBufferPageCommitmentARB;
      PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC m_glNamedBufferPageCommitmentEXT;
      PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC m_glNamedBufferPageCommitmentARB;
      PFNGLTEXPAGECOMMITMENTARBPROC m_glTexPageCommitmentARB;
      PFNGLFENCESYNCPROC m_glFenceSync;
      PFNGLISSYNCPROC m_glIsSync;
      PFNGLDELETESYNCPROC m_glDeleteSync;
      PFNGLCLIENTWAITSYNCPROC m_glClientWaitSync;
      PFNGLWAITSYNCPROC m_glWaitSync;
      PFNGLGETINTEGER64VPROC m_glGetInteger64v;
      PFNGLGETSYNCIVPROC m_glGetSynciv;
      PFNGLPATCHPARAMETERIPROC m_glPatchParameteri;
      PFNGLPATCHPARAMETERFVPROC m_glPatchParameterfv;
      PFNGLTEXTUREBARRIERPROC m_glTextureBarrier;
      PFNGLTEXBUFFERRANGEPROC m_glTexBufferRange;
      PFNGLTEXIMAGE2DMULTISAMPLEPROC m_glTexImage2DMultisample;
      PFNGLTEXIMAGE3DMULTISAMPLEPROC m_glTexImage3DMultisample;
      PFNGLGETMULTISAMPLEFVPROC m_glGetMultisamplefv;
      PFNGLSAMPLEMASKIPROC m_glSampleMaski;
      PFNGLTEXSTORAGE1DPROC m_glTexStorage1D;
      PFNGLTEXSTORAGE2DPROC m_glTexStorage2D;
      PFNGLTEXSTORAGE3DPROC m_glTexStorage3D;
      PFNGLTEXSTORAGE2DMULTISAMPLEPROC m_glTexStorage2DMultisample;
      PFNGLTEXSTORAGE3DMULTISAMPLEPROC m_glTexStorage3DMultisample;
      PFNGLTEXTUREVIEWPROC m_glTextureView;
      PFNGLQUERYCOUNTERPROC m_glQueryCounter;
      PFNGLGETQUERYOBJECTI64VPROC m_glGetQueryObjecti64v;
      PFNGLGETQUERYOBJECTUI64VPROC m_glGetQueryObjectui64v;
      PFNGLBINDTRANSFORMFEEDBACKPROC m_glBindTransformFeedback;
      PFNGLDELETETRANSFORMFEEDBACKSPROC m_glDeleteTransformFeedbacks;
      PFNGLGENTRANSFORMFEEDBACKSPROC m_glGenTransformFeedbacks;
      PFNGLISTRANSFORMFEEDBACKPROC m_glIsTransformFeedback;
      PFNGLPAUSETRANSFORMFEEDBACKPROC m_glPauseTransformFeedback;
      PFNGLRESUMETRANSFORMFEEDBACKPROC m_glResumeTransformFeedback;
      PFNGLDRAWTRANSFORMFEEDBACKPROC m_glDrawTransformFeedback;
      PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC m_glDrawTransformFeedbackStream;
      PFNGLBEGINQUERYINDEXEDPROC m_glBeginQueryIndexed;
      PFNGLENDQUERYINDEXEDPROC m_glEndQueryIndexed;
      PFNGLGETQUERYINDEXEDIVPROC m_glGetQueryIndexediv;
      PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC m_glDrawTransformFeedbackInstanced;
      PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC m_glDrawTransformFeedbackStreamInstanced;
      PFNGLGETUNIFORMINDICESPROC m_glGetUniformIndices;
      PFNGLGETACTIVEUNIFORMSIVPROC m_glGetActiveUniformsiv;
      PFNGLGETACTIVEUNIFORMNAMEPROC m_glGetActiveUniformName;
      PFNGLGETUNIFORMBLOCKINDEXPROC m_glGetUniformBlockIndex;
      PFNGLGETACTIVEUNIFORMBLOCKIVPROC m_glGetActiveUniformBlockiv;
      PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC m_glGetActiveUniformBlockName;
      PFNGLUNIFORMBLOCKBINDINGPROC m_glUniformBlockBinding;
      PFNGLBINDBUFFERRANGEPROC m_glBindBufferRange;
      PFNGLBINDBUFFERBASEPROC m_glBindBufferBase;
      PFNGLGETINTEGERI_VPROC m_glGetIntegeri_v;
      PFNGLBINDVERTEXARRAYPROC m_glBindVertexArray;
      PFNGLDELETEVERTEXARRAYSPROC m_glDeleteVertexArrays;
      PFNGLGENVERTEXARRAYSPROC m_glGenVertexArrays;
      PFNGLISVERTEXARRAYPROC m_glIsVertexArray;
      PFNGLVERTEXATTRIBL1DPROC m_glVertexAttribL1d;
      PFNGLVERTEXATTRIBL2DPROC m_glVertexAttribL2d;
      PFNGLVERTEXATTRIBL3DPROC m_glVertexAttribL3d;
      PFNGLVERTEXATTRIBL4DPROC m_glVertexAttribL4d;
      PFNGLVERTEXATTRIBL1DVPROC m_glVertexAttribL1dv;
      PFNGLVERTEXATTRIBL2DVPROC m_glVertexAttribL2dv;
      PFNGLVERTEXATTRIBL3DVPROC m_glVertexAttribL3dv;
      PFNGLVERTEXATTRIBL4DVPROC m_glVertexAttribL4dv;
      PFNGLVERTEXATTRIBLPOINTERPROC m_glVertexAttribLPointer;
      PFNGLGETVERTEXATTRIBLDVPROC m_glGetVertexAttribLdv;
      PFNGLBINDVERTEXBUFFERPROC m_glBindVertexBuffer;
      PFNGLVERTEXATTRIBFORMATPROC m_glVertexAttribFormat;
      PFNGLVERTEXATTRIBIFORMATPROC m_glVertexAttribIFormat;
      PFNGLVERTEXATTRIBLFORMATPROC m_glVertexAttribLFormat;
      PFNGLVERTEXATTRIBBINDINGPROC m_glVertexAttribBinding;
      PFNGLVERTEXBINDINGDIVISORPROC m_glVertexBindingDivisor;
      PFNGLVERTEXATTRIBP1UIPROC m_glVertexAttribP1ui;
      PFNGLVERTEXATTRIBP1UIVPROC m_glVertexAttribP1uiv;
      PFNGLVERTEXATTRIBP2UIPROC m_glVertexAttribP2ui;
      PFNGLVERTEXATTRIBP2UIVPROC m_glVertexAttribP2uiv;
      PFNGLVERTEXATTRIBP3UIPROC m_glVertexAttribP3ui;
      PFNGLVERTEXATTRIBP3UIVPROC m_glVertexAttribP3uiv;
      PFNGLVERTEXATTRIBP4UIPROC m_glVertexAttribP4ui;
      PFNGLVERTEXATTRIBP4UIVPROC m_glVertexAttribP4uiv;
      PFNGLVIEWPORTARRAYVPROC m_glViewportArrayv;
      PFNGLVIEWPORTINDEXEDFPROC m_glViewportIndexedf;
      PFNGLVIEWPORTINDEXEDFVPROC m_glViewportIndexedfv;
      PFNGLSCISSORARRAYVPROC m_glScissorArrayv;
      PFNGLSCISSORINDEXEDPROC m_glScissorIndexed;
      PFNGLSCISSORINDEXEDVPROC m_glScissorIndexedv;
      PFNGLDEPTHRANGEARRAYVPROC m_glDepthRangeArrayv;
      PFNGLDEPTHRANGEINDEXEDPROC m_glDepthRangeIndexed;
      PFNGLGETFLOATI_VPROC m_glGetFloati_v;
      PFNGLGETDOUBLEI_VPROC m_glGetDoublei_v;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise ();

    static void Deinitialise ();

    static bool IsSupported (GLEW_GLCORE_FeatureSet feature) { return s_deviceConfig.m_featureSupported [feature]; }

    static void SetConfig (glew::glcore::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::glcore::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static glew::glcore::DeviceConfig s_deviceConfig;

  };

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  bool IsSupported (GLEW_GLCORE_FeatureSet feature);

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_EXTERN_C void _glew_glcore_glReleaseShaderCompiler ();
GLEW_EXTERN_C void _glew_glcore_glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
GLEW_EXTERN_C void _glew_glcore_glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
GLEW_EXTERN_C void _glew_glcore_glDepthRangef (GLfloat n, GLfloat f);
GLEW_EXTERN_C void _glew_glcore_glClearDepthf (GLfloat d);
GLEW_EXTERN_C void _glew_glcore_glMemoryBarrierByRegion (GLbitfield barriers);
GLEW_EXTERN_C void _glew_glcore_glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
GLEW_EXTERN_C void _glew_glcore_glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
GLEW_EXTERN_C void _glew_glcore_glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
GLEW_EXTERN_C GLuint64 _glew_glcore_glGetTextureHandleARB (GLuint texture);
GLEW_EXTERN_C GLuint64 _glew_glcore_glGetTextureSamplerHandleARB (GLuint texture, GLuint sampler);
GLEW_EXTERN_C void _glew_glcore_glMakeTextureHandleResidentARB (GLuint64 handle);
GLEW_EXTERN_C void _glew_glcore_glMakeTextureHandleNonResidentARB (GLuint64 handle);
GLEW_EXTERN_C GLuint64 _glew_glcore_glGetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
GLEW_EXTERN_C void _glew_glcore_glMakeImageHandleResidentARB (GLuint64 handle, GLenum access);
GLEW_EXTERN_C void _glew_glcore_glMakeImageHandleNonResidentARB (GLuint64 handle);
GLEW_EXTERN_C void _glew_glcore_glUniformHandleui64ARB (GLint location, GLuint64 value);
GLEW_EXTERN_C void _glew_glcore_glUniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsTextureHandleResidentARB (GLuint64 handle);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsImageHandleResidentARB (GLuint64 handle);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT * v);
GLEW_EXTERN_C void _glew_glcore_glGetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT * params);
GLEW_EXTERN_C void _glew_glcore_glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
GLEW_EXTERN_C GLint _glew_glcore_glGetFragDataIndex (GLuint program, const GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glBufferStorage (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
GLEW_EXTERN_C GLsync _glew_glcore_glCreateSyncFromCLeventARB (struct _cl_context * context, struct _cl_event * event, GLbitfield flags);
GLEW_EXTERN_C void _glew_glcore_glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
GLEW_EXTERN_C void _glew_glcore_glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
GLEW_EXTERN_C void _glew_glcore_glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
GLEW_EXTERN_C void _glew_glcore_glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
GLEW_EXTERN_C void _glew_glcore_glClipControl (GLenum origin, GLenum depth);
GLEW_EXTERN_C void _glew_glcore_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
GLEW_EXTERN_C void _glew_glcore_glDispatchComputeIndirect (GLintptr indirect);
GLEW_EXTERN_C void _glew_glcore_glDispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
GLEW_EXTERN_C void _glew_glcore_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLEW_EXTERN_C void _glew_glcore_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLEW_EXTERN_C void _glew_glcore_glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
GLEW_EXTERN_C void _glew_glcore_glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
GLEW_EXTERN_C void _glew_glcore_glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const void * userParam);
GLEW_EXTERN_C GLuint _glew_glcore_glGetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
GLEW_EXTERN_C void _glew_glcore_glCreateTransformFeedbacks (GLsizei n, GLuint * ids);
GLEW_EXTERN_C void _glew_glcore_glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer);
GLEW_EXTERN_C void _glew_glcore_glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_EXTERN_C void _glew_glcore_glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint * param);
GLEW_EXTERN_C void _glew_glcore_glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint * param);
GLEW_EXTERN_C void _glew_glcore_glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
GLEW_EXTERN_C void _glew_glcore_glCreateBuffers (GLsizei n, GLuint * buffers);
GLEW_EXTERN_C void _glew_glcore_glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
GLEW_EXTERN_C void _glew_glcore_glNamedBufferData (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
GLEW_EXTERN_C void _glew_glcore_glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
GLEW_EXTERN_C void _glew_glcore_glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLEW_EXTERN_C void _glew_glcore_glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
GLEW_EXTERN_C void _glew_glcore_glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
GLEW_EXTERN_C void * _glew_glcore_glMapNamedBuffer (GLuint buffer, GLenum access);
GLEW_EXTERN_C void * _glew_glcore_glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLEW_EXTERN_C GLboolean _glew_glcore_glUnmapNamedBuffer (GLuint buffer);
GLEW_EXTERN_C void _glew_glcore_glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length);
GLEW_EXTERN_C void _glew_glcore_glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 * params);
GLEW_EXTERN_C void _glew_glcore_glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void ** params);
GLEW_EXTERN_C void _glew_glcore_glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
GLEW_EXTERN_C void _glew_glcore_glCreateFramebuffers (GLsizei n, GLuint * framebuffers);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum * bufs);
GLEW_EXTERN_C void _glew_glcore_glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src);
GLEW_EXTERN_C void _glew_glcore_glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
GLEW_EXTERN_C void _glew_glcore_glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
GLEW_EXTERN_C void _glew_glcore_glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil);
GLEW_EXTERN_C void _glew_glcore_glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_EXTERN_C GLenum _glew_glcore_glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target);
GLEW_EXTERN_C void _glew_glcore_glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint * param);
GLEW_EXTERN_C void _glew_glcore_glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glCreateRenderbuffers (GLsizei n, GLuint * renderbuffers);
GLEW_EXTERN_C void _glew_glcore_glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glCreateTextures (GLenum target, GLsizei n, GLuint * textures);
GLEW_EXTERN_C void _glew_glcore_glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer);
GLEW_EXTERN_C void _glew_glcore_glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_EXTERN_C void _glew_glcore_glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
GLEW_EXTERN_C void _glew_glcore_glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLEW_EXTERN_C void _glew_glcore_glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLEW_EXTERN_C void _glew_glcore_glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLEW_EXTERN_C void _glew_glcore_glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
GLEW_EXTERN_C void _glew_glcore_glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
GLEW_EXTERN_C void _glew_glcore_glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
GLEW_EXTERN_C void _glew_glcore_glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
GLEW_EXTERN_C void _glew_glcore_glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
GLEW_EXTERN_C void _glew_glcore_glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
GLEW_EXTERN_C void _glew_glcore_glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLEW_EXTERN_C void _glew_glcore_glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glTextureParameterf (GLuint texture, GLenum pname, GLfloat param);
GLEW_EXTERN_C void _glew_glcore_glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat * param);
GLEW_EXTERN_C void _glew_glcore_glTextureParameteri (GLuint texture, GLenum pname, GLint param);
GLEW_EXTERN_C void _glew_glcore_glTextureParameterIiv (GLuint texture, GLenum pname, const GLint * params);
GLEW_EXTERN_C void _glew_glcore_glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint * params);
GLEW_EXTERN_C void _glew_glcore_glTextureParameteriv (GLuint texture, GLenum pname, const GLint * param);
GLEW_EXTERN_C void _glew_glcore_glGenerateTextureMipmap (GLuint texture);
GLEW_EXTERN_C void _glew_glcore_glBindTextureUnit (GLuint unit, GLuint texture);
GLEW_EXTERN_C void _glew_glcore_glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
GLEW_EXTERN_C void _glew_glcore_glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void * pixels);
GLEW_EXTERN_C void _glew_glcore_glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat * params);
GLEW_EXTERN_C void _glew_glcore_glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat * params);
GLEW_EXTERN_C void _glew_glcore_glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint * params);
GLEW_EXTERN_C void _glew_glcore_glGetTextureParameteriv (GLuint texture, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glCreateVertexArrays (GLsizei n, GLuint * arrays);
GLEW_EXTERN_C void _glew_glcore_glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
GLEW_EXTERN_C void _glew_glcore_glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLEW_EXTERN_C void _glew_glcore_glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor);
GLEW_EXTERN_C void _glew_glcore_glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint * param);
GLEW_EXTERN_C void _glew_glcore_glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint * param);
GLEW_EXTERN_C void _glew_glcore_glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
GLEW_EXTERN_C void _glew_glcore_glCreateSamplers (GLsizei n, GLuint * samplers);
GLEW_EXTERN_C void _glew_glcore_glCreateProgramPipelines (GLsizei n, GLuint * pipelines);
GLEW_EXTERN_C void _glew_glcore_glCreateQueries (GLenum target, GLsizei n, GLuint * ids);
GLEW_EXTERN_C void _glew_glcore_glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLEW_EXTERN_C void _glew_glcore_glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLEW_EXTERN_C void _glew_glcore_glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLEW_EXTERN_C void _glew_glcore_glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLEW_EXTERN_C void _glew_glcore_glBlendEquationiARB (GLuint buf, GLenum mode);
GLEW_EXTERN_C void _glew_glcore_glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLEW_EXTERN_C void _glew_glcore_glBlendFunciARB (GLuint buf, GLenum src, GLenum dst);
GLEW_EXTERN_C void _glew_glcore_glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLEW_EXTERN_C void _glew_glcore_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_EXTERN_C void _glew_glcore_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
GLEW_EXTERN_C void _glew_glcore_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
GLEW_EXTERN_C void _glew_glcore_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
GLEW_EXTERN_C void _glew_glcore_glDrawArraysIndirect (GLenum mode, const void * indirect);
GLEW_EXTERN_C void _glew_glcore_glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect);
GLEW_EXTERN_C void _glew_glcore_glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
GLEW_EXTERN_C void _glew_glcore_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsRenderbuffer (GLuint renderbuffer);
GLEW_EXTERN_C void _glew_glcore_glBindRenderbuffer (GLenum target, GLuint renderbuffer);
GLEW_EXTERN_C void _glew_glcore_glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers);
GLEW_EXTERN_C void _glew_glcore_glGenRenderbuffers (GLsizei n, GLuint * renderbuffers);
GLEW_EXTERN_C void _glew_glcore_glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsFramebuffer (GLuint framebuffer);
GLEW_EXTERN_C void _glew_glcore_glBindFramebuffer (GLenum target, GLuint framebuffer);
GLEW_EXTERN_C void _glew_glcore_glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers);
GLEW_EXTERN_C void _glew_glcore_glGenFramebuffers (GLsizei n, GLuint * framebuffers);
GLEW_EXTERN_C GLenum _glew_glcore_glCheckFramebufferStatus (GLenum target);
GLEW_EXTERN_C void _glew_glcore_glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLEW_EXTERN_C void _glew_glcore_glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLEW_EXTERN_C void _glew_glcore_glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
GLEW_EXTERN_C void _glew_glcore_glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLEW_EXTERN_C void _glew_glcore_glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGenerateMipmap (GLenum target);
GLEW_EXTERN_C void _glew_glcore_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLEW_EXTERN_C void _glew_glcore_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLEW_EXTERN_C void _glew_glcore_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
GLEW_EXTERN_C void _glew_glcore_glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
GLEW_EXTERN_C void _glew_glcore_glProgramParameteri (GLuint program, GLenum pname, GLint value);
GLEW_EXTERN_C void _glew_glcore_glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
GLEW_EXTERN_C void _glew_glcore_glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
GLEW_EXTERN_C void _glew_glcore_glUniform1d (GLint location, GLdouble x);
GLEW_EXTERN_C void _glew_glcore_glUniform2d (GLint location, GLdouble x, GLdouble y);
GLEW_EXTERN_C void _glew_glcore_glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z);
GLEW_EXTERN_C void _glew_glcore_glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLEW_EXTERN_C void _glew_glcore_glUniform1dv (GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniform2dv (GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniform3dv (GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniform4dv (GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glGetUniformdv (GLuint program, GLint location, GLdouble * params);
GLEW_EXTERN_C void _glew_glcore_glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLEW_EXTERN_C void _glew_glcore_glBlendEquation (GLenum mode);
GLEW_EXTERN_C void _glew_glcore_glMultiDrawArraysIndirectCountARB (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLEW_EXTERN_C void _glew_glcore_glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLEW_EXTERN_C void _glew_glcore_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
GLEW_EXTERN_C void _glew_glcore_glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
GLEW_EXTERN_C void _glew_glcore_glInvalidateTexImage (GLuint texture, GLint level);
GLEW_EXTERN_C void _glew_glcore_glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length);
GLEW_EXTERN_C void _glew_glcore_glInvalidateBufferData (GLuint buffer);
GLEW_EXTERN_C void _glew_glcore_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments);
GLEW_EXTERN_C void _glew_glcore_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLEW_EXTERN_C void * _glew_glcore_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLEW_EXTERN_C void _glew_glcore_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
GLEW_EXTERN_C void _glew_glcore_glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
GLEW_EXTERN_C void _glew_glcore_glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
GLEW_EXTERN_C void _glew_glcore_glBindTextures (GLuint first, GLsizei count, const GLuint * textures);
GLEW_EXTERN_C void _glew_glcore_glBindSamplers (GLuint first, GLsizei count, const GLuint * samplers);
GLEW_EXTERN_C void _glew_glcore_glBindImageTextures (GLuint first, GLsizei count, const GLuint * textures);
GLEW_EXTERN_C void _glew_glcore_glBindVertexBuffers (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
GLEW_EXTERN_C void _glew_glcore_glMultiDrawArraysIndirect (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
GLEW_EXTERN_C void _glew_glcore_glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
GLEW_EXTERN_C void _glew_glcore_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
GLEW_EXTERN_C GLuint _glew_glcore_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
GLEW_EXTERN_C GLint _glew_glcore_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name);
GLEW_EXTERN_C GLint _glew_glcore_glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glProvokingVertex (GLenum mode);
GLEW_EXTERN_C GLenum _glew_glcore_glGetGraphicsResetStatusARB ();
GLEW_EXTERN_C void _glew_glcore_glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
GLEW_EXTERN_C void _glew_glcore_glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
GLEW_EXTERN_C void _glew_glcore_glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void * img);
GLEW_EXTERN_C void _glew_glcore_glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
GLEW_EXTERN_C void _glew_glcore_glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
GLEW_EXTERN_C void _glew_glcore_glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
GLEW_EXTERN_C void _glew_glcore_glMinSampleShadingARB (GLfloat value);
GLEW_EXTERN_C void _glew_glcore_glGenSamplers (GLsizei count, GLuint * samplers);
GLEW_EXTERN_C void _glew_glcore_glDeleteSamplers (GLsizei count, const GLuint * samplers);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsSampler (GLuint sampler);
GLEW_EXTERN_C void _glew_glcore_glBindSampler (GLuint unit, GLuint sampler);
GLEW_EXTERN_C void _glew_glcore_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
GLEW_EXTERN_C void _glew_glcore_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param);
GLEW_EXTERN_C void _glew_glcore_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
GLEW_EXTERN_C void _glew_glcore_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param);
GLEW_EXTERN_C void _glew_glcore_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param);
GLEW_EXTERN_C void _glew_glcore_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param);
GLEW_EXTERN_C void _glew_glcore_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params);
GLEW_EXTERN_C void _glew_glcore_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params);
GLEW_EXTERN_C void _glew_glcore_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
GLEW_EXTERN_C void _glew_glcore_glActiveShaderProgram (GLuint pipeline, GLuint program);
GLEW_EXTERN_C GLuint _glew_glcore_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings);
GLEW_EXTERN_C void _glew_glcore_glBindProgramPipeline (GLuint pipeline);
GLEW_EXTERN_C void _glew_glcore_glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines);
GLEW_EXTERN_C void _glew_glcore_glGenProgramPipelines (GLsizei n, GLuint * pipelines);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsProgramPipeline (GLuint pipeline);
GLEW_EXTERN_C void _glew_glcore_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1i (GLuint program, GLint location, GLint v0);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1d (GLuint program, GLint location, GLdouble v0);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLEW_EXTERN_C void _glew_glcore_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
GLEW_EXTERN_C void _glew_glcore_glValidateProgramPipeline (GLuint pipeline);
GLEW_EXTERN_C void _glew_glcore_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
GLEW_EXTERN_C void _glew_glcore_glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
GLEW_EXTERN_C void _glew_glcore_glMemoryBarrier (GLbitfield barriers);
GLEW_EXTERN_C void _glew_glcore_glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
GLEW_EXTERN_C GLint _glew_glcore_glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar * name);
GLEW_EXTERN_C GLuint _glew_glcore_glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
GLEW_EXTERN_C void _glew_glcore_glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint * indices);
GLEW_EXTERN_C void _glew_glcore_glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint * params);
GLEW_EXTERN_C void _glew_glcore_glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint * values);
GLEW_EXTERN_C void _glew_glcore_glNamedStringARB (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string);
GLEW_EXTERN_C void _glew_glcore_glDeleteNamedStringARB (GLint namelen, const GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsNamedStringARB (GLint namelen, const GLchar * name);
GLEW_EXTERN_C void _glew_glcore_glGetNamedStringARB (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string);
GLEW_EXTERN_C void _glew_glcore_glGetNamedStringivARB (GLint namelen, const GLchar * name, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glBufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
GLEW_EXTERN_C void _glew_glcore_glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
GLEW_EXTERN_C void _glew_glcore_glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
GLEW_EXTERN_C void _glew_glcore_glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
GLEW_EXTERN_C GLsync _glew_glcore_glFenceSync (GLenum condition, GLbitfield flags);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsSync (GLsync sync);
GLEW_EXTERN_C void _glew_glcore_glDeleteSync (GLsync sync);
GLEW_EXTERN_C GLenum _glew_glcore_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLEW_EXTERN_C void _glew_glcore_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLEW_EXTERN_C void _glew_glcore_glGetInteger64v (GLenum pname, GLint64 * data);
GLEW_EXTERN_C void _glew_glcore_glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
GLEW_EXTERN_C void _glew_glcore_glPatchParameteri (GLenum pname, GLint value);
GLEW_EXTERN_C void _glew_glcore_glPatchParameterfv (GLenum pname, const GLfloat * values);
GLEW_EXTERN_C void _glew_glcore_glTextureBarrier ();
GLEW_EXTERN_C void _glew_glcore_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_EXTERN_C void _glew_glcore_glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLEW_EXTERN_C void _glew_glcore_glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLEW_EXTERN_C void _glew_glcore_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val);
GLEW_EXTERN_C void _glew_glcore_glSampleMaski (GLuint maskNumber, GLbitfield mask);
GLEW_EXTERN_C void _glew_glcore_glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
GLEW_EXTERN_C void _glew_glcore_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLEW_EXTERN_C void _glew_glcore_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLEW_EXTERN_C void _glew_glcore_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLEW_EXTERN_C void _glew_glcore_glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
GLEW_EXTERN_C void _glew_glcore_glQueryCounter (GLuint id, GLenum target);
GLEW_EXTERN_C void _glew_glcore_glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 * params);
GLEW_EXTERN_C void _glew_glcore_glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 * params);
GLEW_EXTERN_C void _glew_glcore_glBindTransformFeedback (GLenum target, GLuint id);
GLEW_EXTERN_C void _glew_glcore_glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids);
GLEW_EXTERN_C void _glew_glcore_glGenTransformFeedbacks (GLsizei n, GLuint * ids);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsTransformFeedback (GLuint id);
GLEW_EXTERN_C void _glew_glcore_glPauseTransformFeedback ();
GLEW_EXTERN_C void _glew_glcore_glResumeTransformFeedback ();
GLEW_EXTERN_C void _glew_glcore_glDrawTransformFeedback (GLenum mode, GLuint id);
GLEW_EXTERN_C void _glew_glcore_glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream);
GLEW_EXTERN_C void _glew_glcore_glBeginQueryIndexed (GLenum target, GLuint index, GLuint id);
GLEW_EXTERN_C void _glew_glcore_glEndQueryIndexed (GLenum target, GLuint index);
GLEW_EXTERN_C void _glew_glcore_glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount);
GLEW_EXTERN_C void _glew_glcore_glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
GLEW_EXTERN_C void _glew_glcore_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
GLEW_EXTERN_C void _glew_glcore_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
GLEW_EXTERN_C GLuint _glew_glcore_glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName);
GLEW_EXTERN_C void _glew_glcore_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
GLEW_EXTERN_C void _glew_glcore_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
GLEW_EXTERN_C void _glew_glcore_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
GLEW_EXTERN_C void _glew_glcore_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLEW_EXTERN_C void _glew_glcore_glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
GLEW_EXTERN_C void _glew_glcore_glGetIntegeri_v (GLenum target, GLuint index, GLint * data);
GLEW_EXTERN_C void _glew_glcore_glBindVertexArray (GLuint array);
GLEW_EXTERN_C void _glew_glcore_glDeleteVertexArrays (GLsizei n, const GLuint * arrays);
GLEW_EXTERN_C void _glew_glcore_glGenVertexArrays (GLsizei n, GLuint * arrays);
GLEW_EXTERN_C GLboolean _glew_glcore_glIsVertexArray (GLuint array);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL1d (GLuint index, GLdouble x);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL1dv (GLuint index, const GLdouble * v);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL2dv (GLuint index, const GLdouble * v);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL3dv (GLuint index, const GLdouble * v);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribL4dv (GLuint index, const GLdouble * v);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
GLEW_EXTERN_C void _glew_glcore_glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble * params);
GLEW_EXTERN_C void _glew_glcore_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
GLEW_EXTERN_C void _glew_glcore_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLEW_EXTERN_C void _glew_glcore_glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
GLEW_EXTERN_C void _glew_glcore_glViewportArrayv (GLuint first, GLsizei count, const GLfloat * v);
GLEW_EXTERN_C void _glew_glcore_glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
GLEW_EXTERN_C void _glew_glcore_glViewportIndexedfv (GLuint index, const GLfloat * v);
GLEW_EXTERN_C void _glew_glcore_glScissorArrayv (GLuint first, GLsizei count, const GLint * v);
GLEW_EXTERN_C void _glew_glcore_glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
GLEW_EXTERN_C void _glew_glcore_glScissorIndexedv (GLuint index, const GLint * v);
GLEW_EXTERN_C void _glew_glcore_glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble * v);
GLEW_EXTERN_C void _glew_glcore_glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f);
GLEW_EXTERN_C void _glew_glcore_glGetFloati_v (GLenum target, GLuint index, GLfloat * data);
GLEW_EXTERN_C void _glew_glcore_glGetDoublei_v (GLenum target, GLuint index, GLdouble * data);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glReleaseShaderCompiler _glew_glcore_glReleaseShaderCompiler
#define glShaderBinary _glew_glcore_glShaderBinary
#define glGetShaderPrecisionFormat _glew_glcore_glGetShaderPrecisionFormat
#define glDepthRangef _glew_glcore_glDepthRangef
#define glClearDepthf _glew_glcore_glClearDepthf
#define glMemoryBarrierByRegion _glew_glcore_glMemoryBarrierByRegion
#define glDrawArraysInstancedBaseInstance _glew_glcore_glDrawArraysInstancedBaseInstance
#define glDrawElementsInstancedBaseInstance _glew_glcore_glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseVertexBaseInstance _glew_glcore_glDrawElementsInstancedBaseVertexBaseInstance
#define glGetTextureHandleARB _glew_glcore_glGetTextureHandleARB
#define glGetTextureSamplerHandleARB _glew_glcore_glGetTextureSamplerHandleARB
#define glMakeTextureHandleResidentARB _glew_glcore_glMakeTextureHandleResidentARB
#define glMakeTextureHandleNonResidentARB _glew_glcore_glMakeTextureHandleNonResidentARB
#define glGetImageHandleARB _glew_glcore_glGetImageHandleARB
#define glMakeImageHandleResidentARB _glew_glcore_glMakeImageHandleResidentARB
#define glMakeImageHandleNonResidentARB _glew_glcore_glMakeImageHandleNonResidentARB
#define glUniformHandleui64ARB _glew_glcore_glUniformHandleui64ARB
#define glUniformHandleui64vARB _glew_glcore_glUniformHandleui64vARB
#define glProgramUniformHandleui64ARB _glew_glcore_glProgramUniformHandleui64ARB
#define glProgramUniformHandleui64vARB _glew_glcore_glProgramUniformHandleui64vARB
#define glIsTextureHandleResidentARB _glew_glcore_glIsTextureHandleResidentARB
#define glIsImageHandleResidentARB _glew_glcore_glIsImageHandleResidentARB
#define glVertexAttribL1ui64ARB _glew_glcore_glVertexAttribL1ui64ARB
#define glVertexAttribL1ui64vARB _glew_glcore_glVertexAttribL1ui64vARB
#define glGetVertexAttribLui64vARB _glew_glcore_glGetVertexAttribLui64vARB
#define glBindFragDataLocationIndexed _glew_glcore_glBindFragDataLocationIndexed
#define glGetFragDataIndex _glew_glcore_glGetFragDataIndex
#define glBufferStorage _glew_glcore_glBufferStorage
#define glCreateSyncFromCLeventARB _glew_glcore_glCreateSyncFromCLeventARB
#define glClearBufferData _glew_glcore_glClearBufferData
#define glClearBufferSubData _glew_glcore_glClearBufferSubData
#define glClearTexImage _glew_glcore_glClearTexImage
#define glClearTexSubImage _glew_glcore_glClearTexSubImage
#define glClipControl _glew_glcore_glClipControl
#define glDispatchCompute _glew_glcore_glDispatchCompute
#define glDispatchComputeIndirect _glew_glcore_glDispatchComputeIndirect
#define glDispatchComputeGroupSizeARB _glew_glcore_glDispatchComputeGroupSizeARB
#define glCopyBufferSubData _glew_glcore_glCopyBufferSubData
#define glCopyImageSubData _glew_glcore_glCopyImageSubData
#define glDebugMessageControlARB _glew_glcore_glDebugMessageControlARB
#define glDebugMessageInsertARB _glew_glcore_glDebugMessageInsertARB
#define glDebugMessageCallbackARB _glew_glcore_glDebugMessageCallbackARB
#define glGetDebugMessageLogARB _glew_glcore_glGetDebugMessageLogARB
#define glCreateTransformFeedbacks _glew_glcore_glCreateTransformFeedbacks
#define glTransformFeedbackBufferBase _glew_glcore_glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange _glew_glcore_glTransformFeedbackBufferRange
#define glGetTransformFeedbackiv _glew_glcore_glGetTransformFeedbackiv
#define glGetTransformFeedbacki_v _glew_glcore_glGetTransformFeedbacki_v
#define glGetTransformFeedbacki64_v _glew_glcore_glGetTransformFeedbacki64_v
#define glCreateBuffers _glew_glcore_glCreateBuffers
#define glNamedBufferStorage _glew_glcore_glNamedBufferStorage
#define glNamedBufferData _glew_glcore_glNamedBufferData
#define glNamedBufferSubData _glew_glcore_glNamedBufferSubData
#define glCopyNamedBufferSubData _glew_glcore_glCopyNamedBufferSubData
#define glClearNamedBufferData _glew_glcore_glClearNamedBufferData
#define glClearNamedBufferSubData _glew_glcore_glClearNamedBufferSubData
#define glMapNamedBuffer _glew_glcore_glMapNamedBuffer
#define glMapNamedBufferRange _glew_glcore_glMapNamedBufferRange
#define glUnmapNamedBuffer _glew_glcore_glUnmapNamedBuffer
#define glFlushMappedNamedBufferRange _glew_glcore_glFlushMappedNamedBufferRange
#define glGetNamedBufferParameteriv _glew_glcore_glGetNamedBufferParameteriv
#define glGetNamedBufferParameteri64v _glew_glcore_glGetNamedBufferParameteri64v
#define glGetNamedBufferPointerv _glew_glcore_glGetNamedBufferPointerv
#define glGetNamedBufferSubData _glew_glcore_glGetNamedBufferSubData
#define glCreateFramebuffers _glew_glcore_glCreateFramebuffers
#define glNamedFramebufferRenderbuffer _glew_glcore_glNamedFramebufferRenderbuffer
#define glNamedFramebufferParameteri _glew_glcore_glNamedFramebufferParameteri
#define glNamedFramebufferTexture _glew_glcore_glNamedFramebufferTexture
#define glNamedFramebufferTextureLayer _glew_glcore_glNamedFramebufferTextureLayer
#define glNamedFramebufferDrawBuffer _glew_glcore_glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers _glew_glcore_glNamedFramebufferDrawBuffers
#define glNamedFramebufferReadBuffer _glew_glcore_glNamedFramebufferReadBuffer
#define glInvalidateNamedFramebufferData _glew_glcore_glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData _glew_glcore_glInvalidateNamedFramebufferSubData
#define glClearNamedFramebufferiv _glew_glcore_glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv _glew_glcore_glClearNamedFramebufferuiv
#define glClearNamedFramebufferfv _glew_glcore_glClearNamedFramebufferfv
#define glClearNamedFramebufferfi _glew_glcore_glClearNamedFramebufferfi
#define glBlitNamedFramebuffer _glew_glcore_glBlitNamedFramebuffer
#define glCheckNamedFramebufferStatus _glew_glcore_glCheckNamedFramebufferStatus
#define glGetNamedFramebufferParameteriv _glew_glcore_glGetNamedFramebufferParameteriv
#define glGetNamedFramebufferAttachmentParameteriv _glew_glcore_glGetNamedFramebufferAttachmentParameteriv
#define glCreateRenderbuffers _glew_glcore_glCreateRenderbuffers
#define glNamedRenderbufferStorage _glew_glcore_glNamedRenderbufferStorage
#define glNamedRenderbufferStorageMultisample _glew_glcore_glNamedRenderbufferStorageMultisample
#define glGetNamedRenderbufferParameteriv _glew_glcore_glGetNamedRenderbufferParameteriv
#define glCreateTextures _glew_glcore_glCreateTextures
#define glTextureBuffer _glew_glcore_glTextureBuffer
#define glTextureBufferRange _glew_glcore_glTextureBufferRange
#define glTextureStorage1D _glew_glcore_glTextureStorage1D
#define glTextureStorage2D _glew_glcore_glTextureStorage2D
#define glTextureStorage3D _glew_glcore_glTextureStorage3D
#define glTextureStorage2DMultisample _glew_glcore_glTextureStorage2DMultisample
#define glTextureStorage3DMultisample _glew_glcore_glTextureStorage3DMultisample
#define glTextureSubImage1D _glew_glcore_glTextureSubImage1D
#define glTextureSubImage2D _glew_glcore_glTextureSubImage2D
#define glTextureSubImage3D _glew_glcore_glTextureSubImage3D
#define glCompressedTextureSubImage1D _glew_glcore_glCompressedTextureSubImage1D
#define glCompressedTextureSubImage2D _glew_glcore_glCompressedTextureSubImage2D
#define glCompressedTextureSubImage3D _glew_glcore_glCompressedTextureSubImage3D
#define glCopyTextureSubImage1D _glew_glcore_glCopyTextureSubImage1D
#define glCopyTextureSubImage2D _glew_glcore_glCopyTextureSubImage2D
#define glCopyTextureSubImage3D _glew_glcore_glCopyTextureSubImage3D
#define glTextureParameterf _glew_glcore_glTextureParameterf
#define glTextureParameterfv _glew_glcore_glTextureParameterfv
#define glTextureParameteri _glew_glcore_glTextureParameteri
#define glTextureParameterIiv _glew_glcore_glTextureParameterIiv
#define glTextureParameterIuiv _glew_glcore_glTextureParameterIuiv
#define glTextureParameteriv _glew_glcore_glTextureParameteriv
#define glGenerateTextureMipmap _glew_glcore_glGenerateTextureMipmap
#define glBindTextureUnit _glew_glcore_glBindTextureUnit
#define glGetTextureImage _glew_glcore_glGetTextureImage
#define glGetCompressedTextureImage _glew_glcore_glGetCompressedTextureImage
#define glGetTextureLevelParameterfv _glew_glcore_glGetTextureLevelParameterfv
#define glGetTextureLevelParameteriv _glew_glcore_glGetTextureLevelParameteriv
#define glGetTextureParameterfv _glew_glcore_glGetTextureParameterfv
#define glGetTextureParameterIiv _glew_glcore_glGetTextureParameterIiv
#define glGetTextureParameterIuiv _glew_glcore_glGetTextureParameterIuiv
#define glGetTextureParameteriv _glew_glcore_glGetTextureParameteriv
#define glCreateVertexArrays _glew_glcore_glCreateVertexArrays
#define glDisableVertexArrayAttrib _glew_glcore_glDisableVertexArrayAttrib
#define glEnableVertexArrayAttrib _glew_glcore_glEnableVertexArrayAttrib
#define glVertexArrayElementBuffer _glew_glcore_glVertexArrayElementBuffer
#define glVertexArrayVertexBuffer _glew_glcore_glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers _glew_glcore_glVertexArrayVertexBuffers
#define glVertexArrayAttribBinding _glew_glcore_glVertexArrayAttribBinding
#define glVertexArrayAttribFormat _glew_glcore_glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat _glew_glcore_glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat _glew_glcore_glVertexArrayAttribLFormat
#define glVertexArrayBindingDivisor _glew_glcore_glVertexArrayBindingDivisor
#define glGetVertexArrayiv _glew_glcore_glGetVertexArrayiv
#define glGetVertexArrayIndexediv _glew_glcore_glGetVertexArrayIndexediv
#define glGetVertexArrayIndexed64iv _glew_glcore_glGetVertexArrayIndexed64iv
#define glCreateSamplers _glew_glcore_glCreateSamplers
#define glCreateProgramPipelines _glew_glcore_glCreateProgramPipelines
#define glCreateQueries _glew_glcore_glCreateQueries
#define glGetQueryBufferObjecti64v _glew_glcore_glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv _glew_glcore_glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v _glew_glcore_glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv _glew_glcore_glGetQueryBufferObjectuiv
#define glBlendEquationiARB _glew_glcore_glBlendEquationiARB
#define glBlendEquationSeparateiARB _glew_glcore_glBlendEquationSeparateiARB
#define glBlendFunciARB _glew_glcore_glBlendFunciARB
#define glBlendFuncSeparateiARB _glew_glcore_glBlendFuncSeparateiARB
#define glDrawElementsBaseVertex _glew_glcore_glDrawElementsBaseVertex
#define glDrawRangeElementsBaseVertex _glew_glcore_glDrawRangeElementsBaseVertex
#define glDrawElementsInstancedBaseVertex _glew_glcore_glDrawElementsInstancedBaseVertex
#define glMultiDrawElementsBaseVertex _glew_glcore_glMultiDrawElementsBaseVertex
#define glDrawArraysIndirect _glew_glcore_glDrawArraysIndirect
#define glDrawElementsIndirect _glew_glcore_glDrawElementsIndirect
#define glFramebufferParameteri _glew_glcore_glFramebufferParameteri
#define glGetFramebufferParameteriv _glew_glcore_glGetFramebufferParameteriv
#define glIsRenderbuffer _glew_glcore_glIsRenderbuffer
#define glBindRenderbuffer _glew_glcore_glBindRenderbuffer
#define glDeleteRenderbuffers _glew_glcore_glDeleteRenderbuffers
#define glGenRenderbuffers _glew_glcore_glGenRenderbuffers
#define glRenderbufferStorage _glew_glcore_glRenderbufferStorage
#define glGetRenderbufferParameteriv _glew_glcore_glGetRenderbufferParameteriv
#define glIsFramebuffer _glew_glcore_glIsFramebuffer
#define glBindFramebuffer _glew_glcore_glBindFramebuffer
#define glDeleteFramebuffers _glew_glcore_glDeleteFramebuffers
#define glGenFramebuffers _glew_glcore_glGenFramebuffers
#define glCheckFramebufferStatus _glew_glcore_glCheckFramebufferStatus
#define glFramebufferTexture1D _glew_glcore_glFramebufferTexture1D
#define glFramebufferTexture2D _glew_glcore_glFramebufferTexture2D
#define glFramebufferTexture3D _glew_glcore_glFramebufferTexture3D
#define glFramebufferRenderbuffer _glew_glcore_glFramebufferRenderbuffer
#define glGetFramebufferAttachmentParameteriv _glew_glcore_glGetFramebufferAttachmentParameteriv
#define glGenerateMipmap _glew_glcore_glGenerateMipmap
#define glBlitFramebuffer _glew_glcore_glBlitFramebuffer
#define glRenderbufferStorageMultisample _glew_glcore_glRenderbufferStorageMultisample
#define glFramebufferTextureLayer _glew_glcore_glFramebufferTextureLayer
#define glGetProgramBinary _glew_glcore_glGetProgramBinary
#define glProgramBinary _glew_glcore_glProgramBinary
#define glProgramParameteri _glew_glcore_glProgramParameteri
#define glGetTextureSubImage _glew_glcore_glGetTextureSubImage
#define glGetCompressedTextureSubImage _glew_glcore_glGetCompressedTextureSubImage
#define glUniform1d _glew_glcore_glUniform1d
#define glUniform2d _glew_glcore_glUniform2d
#define glUniform3d _glew_glcore_glUniform3d
#define glUniform4d _glew_glcore_glUniform4d
#define glUniform1dv _glew_glcore_glUniform1dv
#define glUniform2dv _glew_glcore_glUniform2dv
#define glUniform3dv _glew_glcore_glUniform3dv
#define glUniform4dv _glew_glcore_glUniform4dv
#define glUniformMatrix2dv _glew_glcore_glUniformMatrix2dv
#define glUniformMatrix3dv _glew_glcore_glUniformMatrix3dv
#define glUniformMatrix4dv _glew_glcore_glUniformMatrix4dv
#define glUniformMatrix2x3dv _glew_glcore_glUniformMatrix2x3dv
#define glUniformMatrix2x4dv _glew_glcore_glUniformMatrix2x4dv
#define glUniformMatrix3x2dv _glew_glcore_glUniformMatrix3x2dv
#define glUniformMatrix3x4dv _glew_glcore_glUniformMatrix3x4dv
#define glUniformMatrix4x2dv _glew_glcore_glUniformMatrix4x2dv
#define glUniformMatrix4x3dv _glew_glcore_glUniformMatrix4x3dv
#define glGetUniformdv _glew_glcore_glGetUniformdv
#define glBlendColor _glew_glcore_glBlendColor
#define glBlendEquation _glew_glcore_glBlendEquation
#define glMultiDrawArraysIndirectCountARB _glew_glcore_glMultiDrawArraysIndirectCountARB
#define glMultiDrawElementsIndirectCountARB _glew_glcore_glMultiDrawElementsIndirectCountARB
#define glGetInternalformativ _glew_glcore_glGetInternalformativ
#define glGetInternalformati64v _glew_glcore_glGetInternalformati64v
#define glInvalidateTexSubImage _glew_glcore_glInvalidateTexSubImage
#define glInvalidateTexImage _glew_glcore_glInvalidateTexImage
#define glInvalidateBufferSubData _glew_glcore_glInvalidateBufferSubData
#define glInvalidateBufferData _glew_glcore_glInvalidateBufferData
#define glInvalidateFramebuffer _glew_glcore_glInvalidateFramebuffer
#define glInvalidateSubFramebuffer _glew_glcore_glInvalidateSubFramebuffer
#define glMapBufferRange _glew_glcore_glMapBufferRange
#define glFlushMappedBufferRange _glew_glcore_glFlushMappedBufferRange
#define glBindBuffersBase _glew_glcore_glBindBuffersBase
#define glBindBuffersRange _glew_glcore_glBindBuffersRange
#define glBindTextures _glew_glcore_glBindTextures
#define glBindSamplers _glew_glcore_glBindSamplers
#define glBindImageTextures _glew_glcore_glBindImageTextures
#define glBindVertexBuffers _glew_glcore_glBindVertexBuffers
#define glMultiDrawArraysIndirect _glew_glcore_glMultiDrawArraysIndirect
#define glMultiDrawElementsIndirect _glew_glcore_glMultiDrawElementsIndirect
#define glGetProgramInterfaceiv _glew_glcore_glGetProgramInterfaceiv
#define glGetProgramResourceIndex _glew_glcore_glGetProgramResourceIndex
#define glGetProgramResourceName _glew_glcore_glGetProgramResourceName
#define glGetProgramResourceiv _glew_glcore_glGetProgramResourceiv
#define glGetProgramResourceLocation _glew_glcore_glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex _glew_glcore_glGetProgramResourceLocationIndex
#define glProvokingVertex _glew_glcore_glProvokingVertex
#define glGetGraphicsResetStatusARB _glew_glcore_glGetGraphicsResetStatusARB
#define glGetnTexImageARB _glew_glcore_glGetnTexImageARB
#define glReadnPixelsARB _glew_glcore_glReadnPixelsARB
#define glGetnCompressedTexImageARB _glew_glcore_glGetnCompressedTexImageARB
#define glGetnUniformfvARB _glew_glcore_glGetnUniformfvARB
#define glGetnUniformivARB _glew_glcore_glGetnUniformivARB
#define glGetnUniformuivARB _glew_glcore_glGetnUniformuivARB
#define glGetnUniformdvARB _glew_glcore_glGetnUniformdvARB
#define glMinSampleShadingARB _glew_glcore_glMinSampleShadingARB
#define glGenSamplers _glew_glcore_glGenSamplers
#define glDeleteSamplers _glew_glcore_glDeleteSamplers
#define glIsSampler _glew_glcore_glIsSampler
#define glBindSampler _glew_glcore_glBindSampler
#define glSamplerParameteri _glew_glcore_glSamplerParameteri
#define glSamplerParameteriv _glew_glcore_glSamplerParameteriv
#define glSamplerParameterf _glew_glcore_glSamplerParameterf
#define glSamplerParameterfv _glew_glcore_glSamplerParameterfv
#define glSamplerParameterIiv _glew_glcore_glSamplerParameterIiv
#define glSamplerParameterIuiv _glew_glcore_glSamplerParameterIuiv
#define glGetSamplerParameteriv _glew_glcore_glGetSamplerParameteriv
#define glGetSamplerParameterIiv _glew_glcore_glGetSamplerParameterIiv
#define glGetSamplerParameterfv _glew_glcore_glGetSamplerParameterfv
#define glGetSamplerParameterIuiv _glew_glcore_glGetSamplerParameterIuiv
#define glUseProgramStages _glew_glcore_glUseProgramStages
#define glActiveShaderProgram _glew_glcore_glActiveShaderProgram
#define glCreateShaderProgramv _glew_glcore_glCreateShaderProgramv
#define glBindProgramPipeline _glew_glcore_glBindProgramPipeline
#define glDeleteProgramPipelines _glew_glcore_glDeleteProgramPipelines
#define glGenProgramPipelines _glew_glcore_glGenProgramPipelines
#define glIsProgramPipeline _glew_glcore_glIsProgramPipeline
#define glGetProgramPipelineiv _glew_glcore_glGetProgramPipelineiv
#define glProgramUniform1i _glew_glcore_glProgramUniform1i
#define glProgramUniform1iv _glew_glcore_glProgramUniform1iv
#define glProgramUniform1f _glew_glcore_glProgramUniform1f
#define glProgramUniform1fv _glew_glcore_glProgramUniform1fv
#define glProgramUniform1d _glew_glcore_glProgramUniform1d
#define glProgramUniform1dv _glew_glcore_glProgramUniform1dv
#define glProgramUniform1ui _glew_glcore_glProgramUniform1ui
#define glProgramUniform1uiv _glew_glcore_glProgramUniform1uiv
#define glProgramUniform2i _glew_glcore_glProgramUniform2i
#define glProgramUniform2iv _glew_glcore_glProgramUniform2iv
#define glProgramUniform2f _glew_glcore_glProgramUniform2f
#define glProgramUniform2fv _glew_glcore_glProgramUniform2fv
#define glProgramUniform2d _glew_glcore_glProgramUniform2d
#define glProgramUniform2dv _glew_glcore_glProgramUniform2dv
#define glProgramUniform2ui _glew_glcore_glProgramUniform2ui
#define glProgramUniform2uiv _glew_glcore_glProgramUniform2uiv
#define glProgramUniform3i _glew_glcore_glProgramUniform3i
#define glProgramUniform3iv _glew_glcore_glProgramUniform3iv
#define glProgramUniform3f _glew_glcore_glProgramUniform3f
#define glProgramUniform3fv _glew_glcore_glProgramUniform3fv
#define glProgramUniform3d _glew_glcore_glProgramUniform3d
#define glProgramUniform3dv _glew_glcore_glProgramUniform3dv
#define glProgramUniform3ui _glew_glcore_glProgramUniform3ui
#define glProgramUniform3uiv _glew_glcore_glProgramUniform3uiv
#define glProgramUniform4i _glew_glcore_glProgramUniform4i
#define glProgramUniform4iv _glew_glcore_glProgramUniform4iv
#define glProgramUniform4f _glew_glcore_glProgramUniform4f
#define glProgramUniform4fv _glew_glcore_glProgramUniform4fv
#define glProgramUniform4d _glew_glcore_glProgramUniform4d
#define glProgramUniform4dv _glew_glcore_glProgramUniform4dv
#define glProgramUniform4ui _glew_glcore_glProgramUniform4ui
#define glProgramUniform4uiv _glew_glcore_glProgramUniform4uiv
#define glProgramUniformMatrix2fv _glew_glcore_glProgramUniformMatrix2fv
#define glProgramUniformMatrix3fv _glew_glcore_glProgramUniformMatrix3fv
#define glProgramUniformMatrix4fv _glew_glcore_glProgramUniformMatrix4fv
#define glProgramUniformMatrix2dv _glew_glcore_glProgramUniformMatrix2dv
#define glProgramUniformMatrix3dv _glew_glcore_glProgramUniformMatrix3dv
#define glProgramUniformMatrix4dv _glew_glcore_glProgramUniformMatrix4dv
#define glProgramUniformMatrix2x3fv _glew_glcore_glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix3x2fv _glew_glcore_glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix2x4fv _glew_glcore_glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix4x2fv _glew_glcore_glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix3x4fv _glew_glcore_glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix4x3fv _glew_glcore_glProgramUniformMatrix4x3fv
#define glProgramUniformMatrix2x3dv _glew_glcore_glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix3x2dv _glew_glcore_glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix2x4dv _glew_glcore_glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix4x2dv _glew_glcore_glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix3x4dv _glew_glcore_glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix4x3dv _glew_glcore_glProgramUniformMatrix4x3dv
#define glValidateProgramPipeline _glew_glcore_glValidateProgramPipeline
#define glGetProgramPipelineInfoLog _glew_glcore_glGetProgramPipelineInfoLog
#define glGetActiveAtomicCounterBufferiv _glew_glcore_glGetActiveAtomicCounterBufferiv
#define glBindImageTexture _glew_glcore_glBindImageTexture
#define glMemoryBarrier _glew_glcore_glMemoryBarrier
#define glShaderStorageBlockBinding _glew_glcore_glShaderStorageBlockBinding
#define glGetSubroutineUniformLocation _glew_glcore_glGetSubroutineUniformLocation
#define glGetSubroutineIndex _glew_glcore_glGetSubroutineIndex
#define glGetActiveSubroutineUniformiv _glew_glcore_glGetActiveSubroutineUniformiv
#define glGetActiveSubroutineUniformName _glew_glcore_glGetActiveSubroutineUniformName
#define glGetActiveSubroutineName _glew_glcore_glGetActiveSubroutineName
#define glUniformSubroutinesuiv _glew_glcore_glUniformSubroutinesuiv
#define glGetUniformSubroutineuiv _glew_glcore_glGetUniformSubroutineuiv
#define glGetProgramStageiv _glew_glcore_glGetProgramStageiv
#define glNamedStringARB _glew_glcore_glNamedStringARB
#define glDeleteNamedStringARB _glew_glcore_glDeleteNamedStringARB
#define glCompileShaderIncludeARB _glew_glcore_glCompileShaderIncludeARB
#define glIsNamedStringARB _glew_glcore_glIsNamedStringARB
#define glGetNamedStringARB _glew_glcore_glGetNamedStringARB
#define glGetNamedStringivARB _glew_glcore_glGetNamedStringivARB
#define glBufferPageCommitmentARB _glew_glcore_glBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT _glew_glcore_glNamedBufferPageCommitmentEXT
#define glNamedBufferPageCommitmentARB _glew_glcore_glNamedBufferPageCommitmentARB
#define glTexPageCommitmentARB _glew_glcore_glTexPageCommitmentARB
#define glFenceSync _glew_glcore_glFenceSync
#define glIsSync _glew_glcore_glIsSync
#define glDeleteSync _glew_glcore_glDeleteSync
#define glClientWaitSync _glew_glcore_glClientWaitSync
#define glWaitSync _glew_glcore_glWaitSync
#define glGetInteger64v _glew_glcore_glGetInteger64v
#define glGetSynciv _glew_glcore_glGetSynciv
#define glPatchParameteri _glew_glcore_glPatchParameteri
#define glPatchParameterfv _glew_glcore_glPatchParameterfv
#define glTextureBarrier _glew_glcore_glTextureBarrier
#define glTexBufferRange _glew_glcore_glTexBufferRange
#define glTexImage2DMultisample _glew_glcore_glTexImage2DMultisample
#define glTexImage3DMultisample _glew_glcore_glTexImage3DMultisample
#define glGetMultisamplefv _glew_glcore_glGetMultisamplefv
#define glSampleMaski _glew_glcore_glSampleMaski
#define glTexStorage1D _glew_glcore_glTexStorage1D
#define glTexStorage2D _glew_glcore_glTexStorage2D
#define glTexStorage3D _glew_glcore_glTexStorage3D
#define glTexStorage2DMultisample _glew_glcore_glTexStorage2DMultisample
#define glTexStorage3DMultisample _glew_glcore_glTexStorage3DMultisample
#define glTextureView _glew_glcore_glTextureView
#define glQueryCounter _glew_glcore_glQueryCounter
#define glGetQueryObjecti64v _glew_glcore_glGetQueryObjecti64v
#define glGetQueryObjectui64v _glew_glcore_glGetQueryObjectui64v
#define glBindTransformFeedback _glew_glcore_glBindTransformFeedback
#define glDeleteTransformFeedbacks _glew_glcore_glDeleteTransformFeedbacks
#define glGenTransformFeedbacks _glew_glcore_glGenTransformFeedbacks
#define glIsTransformFeedback _glew_glcore_glIsTransformFeedback
#define glPauseTransformFeedback _glew_glcore_glPauseTransformFeedback
#define glResumeTransformFeedback _glew_glcore_glResumeTransformFeedback
#define glDrawTransformFeedback _glew_glcore_glDrawTransformFeedback
#define glDrawTransformFeedbackStream _glew_glcore_glDrawTransformFeedbackStream
#define glBeginQueryIndexed _glew_glcore_glBeginQueryIndexed
#define glEndQueryIndexed _glew_glcore_glEndQueryIndexed
#define glGetQueryIndexediv _glew_glcore_glGetQueryIndexediv
#define glDrawTransformFeedbackInstanced _glew_glcore_glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackStreamInstanced _glew_glcore_glDrawTransformFeedbackStreamInstanced
#define glGetUniformIndices _glew_glcore_glGetUniformIndices
#define glGetActiveUniformsiv _glew_glcore_glGetActiveUniformsiv
#define glGetActiveUniformName _glew_glcore_glGetActiveUniformName
#define glGetUniformBlockIndex _glew_glcore_glGetUniformBlockIndex
#define glGetActiveUniformBlockiv _glew_glcore_glGetActiveUniformBlockiv
#define glGetActiveUniformBlockName _glew_glcore_glGetActiveUniformBlockName
#define glUniformBlockBinding _glew_glcore_glUniformBlockBinding
#define glBindBufferRange _glew_glcore_glBindBufferRange
#define glBindBufferBase _glew_glcore_glBindBufferBase
#define glGetIntegeri_v _glew_glcore_glGetIntegeri_v
#define glBindVertexArray _glew_glcore_glBindVertexArray
#define glDeleteVertexArrays _glew_glcore_glDeleteVertexArrays
#define glGenVertexArrays _glew_glcore_glGenVertexArrays
#define glIsVertexArray _glew_glcore_glIsVertexArray
#define glVertexAttribL1d _glew_glcore_glVertexAttribL1d
#define glVertexAttribL2d _glew_glcore_glVertexAttribL2d
#define glVertexAttribL3d _glew_glcore_glVertexAttribL3d
#define glVertexAttribL4d _glew_glcore_glVertexAttribL4d
#define glVertexAttribL1dv _glew_glcore_glVertexAttribL1dv
#define glVertexAttribL2dv _glew_glcore_glVertexAttribL2dv
#define glVertexAttribL3dv _glew_glcore_glVertexAttribL3dv
#define glVertexAttribL4dv _glew_glcore_glVertexAttribL4dv
#define glVertexAttribLPointer _glew_glcore_glVertexAttribLPointer
#define glGetVertexAttribLdv _glew_glcore_glGetVertexAttribLdv
#define glBindVertexBuffer _glew_glcore_glBindVertexBuffer
#define glVertexAttribFormat _glew_glcore_glVertexAttribFormat
#define glVertexAttribIFormat _glew_glcore_glVertexAttribIFormat
#define glVertexAttribLFormat _glew_glcore_glVertexAttribLFormat
#define glVertexAttribBinding _glew_glcore_glVertexAttribBinding
#define glVertexBindingDivisor _glew_glcore_glVertexBindingDivisor
#define glVertexAttribP1ui _glew_glcore_glVertexAttribP1ui
#define glVertexAttribP1uiv _glew_glcore_glVertexAttribP1uiv
#define glVertexAttribP2ui _glew_glcore_glVertexAttribP2ui
#define glVertexAttribP2uiv _glew_glcore_glVertexAttribP2uiv
#define glVertexAttribP3ui _glew_glcore_glVertexAttribP3ui
#define glVertexAttribP3uiv _glew_glcore_glVertexAttribP3uiv
#define glVertexAttribP4ui _glew_glcore_glVertexAttribP4ui
#define glVertexAttribP4uiv _glew_glcore_glVertexAttribP4uiv
#define glViewportArrayv _glew_glcore_glViewportArrayv
#define glViewportIndexedf _glew_glcore_glViewportIndexedf
#define glViewportIndexedfv _glew_glcore_glViewportIndexedfv
#define glScissorArrayv _glew_glcore_glScissorArrayv
#define glScissorIndexed _glew_glcore_glScissorIndexed
#define glScissorIndexedv _glew_glcore_glScissorIndexedv
#define glDepthRangeArrayv _glew_glcore_glDepthRangeArrayv
#define glDepthRangeIndexed _glew_glcore_glDepthRangeIndexed
#define glGetFloati_v _glew_glcore_glGetFloati_v
#define glGetDoublei_v _glew_glcore_glGetDoublei_v

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef __GNUC__
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600 
#pragma GCC diagnostic pop // push/pop not available before GCC 4.6
#endif
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLCORE_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
