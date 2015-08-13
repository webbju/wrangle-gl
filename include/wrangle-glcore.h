////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __GLEW_GLCORE_H__
#define __GLEW_GLCORE_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <GL/glcorearb.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew
{
  class glcore
  {
  public:

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    enum FeatureSet
    {

      // Extensions
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

    class DeviceState
    {
    private:

      bool m_featureSupported [glew::glcore::FeatureSet::GLEW_GLCORE_FeatureSetCount];

    public:

      bool IsSupported (glew::glcore::FeatureSet feature);

      bool IsSupported (const char *feature);

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
      PFNGLCOLORTABLEPROC m_glColorTable;
      PFNGLCOLORTABLEPARAMETERFVPROC m_glColorTableParameterfv;
      PFNGLCOLORTABLEPARAMETERIVPROC m_glColorTableParameteriv;
      PFNGLCOPYCOLORTABLEPROC m_glCopyColorTable;
      PFNGLGETCOLORTABLEPROC m_glGetColorTable;
      PFNGLGETCOLORTABLEPARAMETERFVPROC m_glGetColorTableParameterfv;
      PFNGLGETCOLORTABLEPARAMETERIVPROC m_glGetColorTableParameteriv;
      PFNGLCOLORSUBTABLEPROC m_glColorSubTable;
      PFNGLCOPYCOLORSUBTABLEPROC m_glCopyColorSubTable;
      PFNGLCONVOLUTIONFILTER1DPROC m_glConvolutionFilter1D;
      PFNGLCONVOLUTIONFILTER2DPROC m_glConvolutionFilter2D;
      PFNGLCONVOLUTIONPARAMETERFPROC m_glConvolutionParameterf;
      PFNGLCONVOLUTIONPARAMETERFVPROC m_glConvolutionParameterfv;
      PFNGLCONVOLUTIONPARAMETERIPROC m_glConvolutionParameteri;
      PFNGLCONVOLUTIONPARAMETERIVPROC m_glConvolutionParameteriv;
      PFNGLCOPYCONVOLUTIONFILTER1DPROC m_glCopyConvolutionFilter1D;
      PFNGLCOPYCONVOLUTIONFILTER2DPROC m_glCopyConvolutionFilter2D;
      PFNGLGETCONVOLUTIONFILTERPROC m_glGetConvolutionFilter;
      PFNGLGETCONVOLUTIONPARAMETERFVPROC m_glGetConvolutionParameterfv;
      PFNGLGETCONVOLUTIONPARAMETERIVPROC m_glGetConvolutionParameteriv;
      PFNGLGETSEPARABLEFILTERPROC m_glGetSeparableFilter;
      PFNGLSEPARABLEFILTER2DPROC m_glSeparableFilter2D;
      PFNGLGETHISTOGRAMPROC m_glGetHistogram;
      PFNGLGETHISTOGRAMPARAMETERFVPROC m_glGetHistogramParameterfv;
      PFNGLGETHISTOGRAMPARAMETERIVPROC m_glGetHistogramParameteriv;
      PFNGLGETMINMAXPROC m_glGetMinmax;
      PFNGLGETMINMAXPARAMETERFVPROC m_glGetMinmaxParameterfv;
      PFNGLGETMINMAXPARAMETERIVPROC m_glGetMinmaxParameteriv;
      PFNGLHISTOGRAMPROC m_glHistogram;
      PFNGLMINMAXPROC m_glMinmax;
      PFNGLRESETHISTOGRAMPROC m_glResetHistogram;
      PFNGLRESETMINMAXPROC m_glResetMinmax;
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
      PFNGLGETNMAPDVARBPROC m_glGetnMapdvARB;
      PFNGLGETNMAPFVARBPROC m_glGetnMapfvARB;
      PFNGLGETNMAPIVARBPROC m_glGetnMapivARB;
      PFNGLGETNPIXELMAPFVARBPROC m_glGetnPixelMapfvARB;
      PFNGLGETNPIXELMAPUIVARBPROC m_glGetnPixelMapuivARB;
      PFNGLGETNPIXELMAPUSVARBPROC m_glGetnPixelMapusvARB;
      PFNGLGETNPOLYGONSTIPPLEARBPROC m_glGetnPolygonStippleARB;
      PFNGLGETNCOLORTABLEARBPROC m_glGetnColorTableARB;
      PFNGLGETNCONVOLUTIONFILTERARBPROC m_glGetnConvolutionFilterARB;
      PFNGLGETNSEPARABLEFILTERARBPROC m_glGetnSeparableFilterARB;
      PFNGLGETNHISTOGRAMARBPROC m_glGetnHistogramARB;
      PFNGLGETNMINMAXARBPROC m_glGetnMinmaxARB;
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
      PFNGLVERTEXP2UIPROC m_glVertexP2ui;
      PFNGLVERTEXP2UIVPROC m_glVertexP2uiv;
      PFNGLVERTEXP3UIPROC m_glVertexP3ui;
      PFNGLVERTEXP3UIVPROC m_glVertexP3uiv;
      PFNGLVERTEXP4UIPROC m_glVertexP4ui;
      PFNGLVERTEXP4UIVPROC m_glVertexP4uiv;
      PFNGLTEXCOORDP1UIPROC m_glTexCoordP1ui;
      PFNGLTEXCOORDP1UIVPROC m_glTexCoordP1uiv;
      PFNGLTEXCOORDP2UIPROC m_glTexCoordP2ui;
      PFNGLTEXCOORDP2UIVPROC m_glTexCoordP2uiv;
      PFNGLTEXCOORDP3UIPROC m_glTexCoordP3ui;
      PFNGLTEXCOORDP3UIVPROC m_glTexCoordP3uiv;
      PFNGLTEXCOORDP4UIPROC m_glTexCoordP4ui;
      PFNGLTEXCOORDP4UIVPROC m_glTexCoordP4uiv;
      PFNGLMULTITEXCOORDP1UIPROC m_glMultiTexCoordP1ui;
      PFNGLMULTITEXCOORDP1UIVPROC m_glMultiTexCoordP1uiv;
      PFNGLMULTITEXCOORDP2UIPROC m_glMultiTexCoordP2ui;
      PFNGLMULTITEXCOORDP2UIVPROC m_glMultiTexCoordP2uiv;
      PFNGLMULTITEXCOORDP3UIPROC m_glMultiTexCoordP3ui;
      PFNGLMULTITEXCOORDP3UIVPROC m_glMultiTexCoordP3uiv;
      PFNGLMULTITEXCOORDP4UIPROC m_glMultiTexCoordP4ui;
      PFNGLMULTITEXCOORDP4UIVPROC m_glMultiTexCoordP4uiv;
      PFNGLNORMALP3UIPROC m_glNormalP3ui;
      PFNGLNORMALP3UIVPROC m_glNormalP3uiv;
      PFNGLCOLORP3UIPROC m_glColorP3ui;
      PFNGLCOLORP3UIVPROC m_glColorP3uiv;
      PFNGLCOLORP4UIPROC m_glColorP4ui;
      PFNGLCOLORP4UIVPROC m_glColorP4uiv;
      PFNGLSECONDARYCOLORP3UIPROC m_glSecondaryColorP3ui;
      PFNGLSECONDARYCOLORP3UIVPROC m_glSecondaryColorP3uiv;
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
      PFNGLGETGRAPHICSRESETSTATUSPROC m_glGetGraphicsResetStatus;
      PFNGLREADNPIXELSPROC m_glReadnPixels;
      PFNGLGETNUNIFORMFVPROC m_glGetnUniformfv;
      PFNGLGETNUNIFORMIVPROC m_glGetnUniformiv;
      PFNGLGETNUNIFORMUIVPROC m_glGetnUniformuiv;
      PFNGLGETGRAPHICSRESETSTATUSKHRPROC m_glGetGraphicsResetStatusKHR;
      PFNGLREADNPIXELSKHRPROC m_glReadnPixelsKHR;
      PFNGLGETNUNIFORMFVKHRPROC m_glGetnUniformfvKHR;
      PFNGLGETNUNIFORMIVKHRPROC m_glGetnUniformivKHR;
      PFNGLGETNUNIFORMUIVKHRPROC m_glGetnUniformuivKHR;
    };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void Initialise (glew::glcore::DeviceState *deviceState);

    static void Deinitialise ();

    static const glew::glcore::DeviceState *GetDeviceState () { return s_deviceState; }

  protected:

    static glew::glcore::DeviceState *s_deviceState;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    void glReleaseShaderCompiler ();
    void glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
    void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
    void glDepthRangef (GLfloat n, GLfloat f);
    void glClearDepthf (GLfloat d);
    void glMemoryBarrierByRegion (GLbitfield barriers);
    void glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
    void glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
    void glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
    GLuint64 glGetTextureHandleARB (GLuint texture);
    GLuint64 glGetTextureSamplerHandleARB (GLuint texture, GLuint sampler);
    void glMakeTextureHandleResidentARB (GLuint64 handle);
    void glMakeTextureHandleNonResidentARB (GLuint64 handle);
    GLuint64 glGetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    void glMakeImageHandleResidentARB (GLuint64 handle, GLenum access);
    void glMakeImageHandleNonResidentARB (GLuint64 handle);
    void glUniformHandleui64ARB (GLint location, GLuint64 value);
    void glUniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 * value);
    void glProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value);
    void glProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
    GLboolean glIsTextureHandleResidentARB (GLuint64 handle);
    GLboolean glIsImageHandleResidentARB (GLuint64 handle);
    void glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x);
    void glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT * v);
    void glGetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT * params);
    void glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
    GLint glGetFragDataIndex (GLuint program, const GLchar * name);
    void glBufferStorage (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
    GLsync glCreateSyncFromCLeventARB (struct _cl_context * context, struct _cl_event * event, GLbitfield flags);
    void glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
    void glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
    void glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
    void glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
    void glClipControl (GLenum origin, GLenum depth);
    void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
    void glDispatchComputeIndirect (GLintptr indirect);
    void glDispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
    void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    void glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    void glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    void glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const void * userParam);
    GLuint glGetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    void glCreateTransformFeedbacks (GLsizei n, GLuint * ids);
    void glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer);
    void glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    void glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint * param);
    void glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint * param);
    void glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
    void glCreateBuffers (GLsizei n, GLuint * buffers);
    void glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
    void glNamedBufferData (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
    void glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
    void glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    void glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
    void glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
    void * glMapNamedBuffer (GLuint buffer, GLenum access);
    void * glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
    GLboolean glUnmapNamedBuffer (GLuint buffer);
    void glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length);
    void glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint * params);
    void glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 * params);
    void glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void ** params);
    void glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
    void glCreateFramebuffers (GLsizei n, GLuint * framebuffers);
    void glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    void glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param);
    void glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
    void glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
    void glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf);
    void glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum * bufs);
    void glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src);
    void glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
    void glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    void glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
    void glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
    void glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
    void glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil);
    void glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    GLenum glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target);
    void glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint * param);
    void glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
    void glCreateRenderbuffers (GLsizei n, GLuint * renderbuffers);
    void glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
    void glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    void glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint * params);
    void glCreateTextures (GLenum target, GLsizei n, GLuint * textures);
    void glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer);
    void glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    void glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
    void glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    void glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    void glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    void glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    void glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
    void glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
    void glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
    void glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
    void glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
    void glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
    void glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    void glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void glTextureParameterf (GLuint texture, GLenum pname, GLfloat param);
    void glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat * param);
    void glTextureParameteri (GLuint texture, GLenum pname, GLint param);
    void glTextureParameterIiv (GLuint texture, GLenum pname, const GLint * params);
    void glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint * params);
    void glTextureParameteriv (GLuint texture, GLenum pname, const GLint * param);
    void glGenerateTextureMipmap (GLuint texture);
    void glBindTextureUnit (GLuint unit, GLuint texture);
    void glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
    void glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void * pixels);
    void glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat * params);
    void glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint * params);
    void glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat * params);
    void glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint * params);
    void glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint * params);
    void glGetTextureParameteriv (GLuint texture, GLenum pname, GLint * params);
    void glCreateVertexArrays (GLsizei n, GLuint * arrays);
    void glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
    void glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
    void glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
    void glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    void glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
    void glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
    void glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    void glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    void glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    void glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor);
    void glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint * param);
    void glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint * param);
    void glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
    void glCreateSamplers (GLsizei n, GLuint * samplers);
    void glCreateProgramPipelines (GLsizei n, GLuint * pipelines);
    void glCreateQueries (GLenum target, GLsizei n, GLuint * ids);
    void glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    void glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    void glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    void glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    void glBlendEquationiARB (GLuint buf, GLenum mode);
    void glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    void glBlendFunciARB (GLuint buf, GLenum src, GLenum dst);
    void glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
    void glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
    void glDrawArraysIndirect (GLenum mode, const void * indirect);
    void glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect);
    void glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
    void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params);
    GLboolean glIsRenderbuffer (GLuint renderbuffer);
    void glBindRenderbuffer (GLenum target, GLuint renderbuffer);
    void glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers);
    void glGenRenderbuffers (GLsizei n, GLuint * renderbuffers);
    void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
    void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params);
    GLboolean glIsFramebuffer (GLuint framebuffer);
    void glBindFramebuffer (GLenum target, GLuint framebuffer);
    void glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers);
    void glGenFramebuffers (GLsizei n, GLuint * framebuffers);
    GLenum glCheckFramebufferStatus (GLenum target);
    void glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    void glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params);
    void glGenerateMipmap (GLenum target);
    void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
    void glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
    void glProgramParameteri (GLuint program, GLenum pname, GLint value);
    void glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
    void glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
    void glUniform1d (GLint location, GLdouble x);
    void glUniform2d (GLint location, GLdouble x, GLdouble y);
    void glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z);
    void glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void glUniform1dv (GLint location, GLsizei count, const GLdouble * value);
    void glUniform2dv (GLint location, GLsizei count, const GLdouble * value);
    void glUniform3dv (GLint location, GLsizei count, const GLdouble * value);
    void glUniform4dv (GLint location, GLsizei count, const GLdouble * value);
    void glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glGetUniformdv (GLuint program, GLint location, GLdouble * params);
    void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void glBlendEquation (GLenum mode);
    void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * table);
    void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat * params);
    void glColorTableParameteriv (GLenum target, GLenum pname, const GLint * params);
    void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
    void glGetColorTable (GLenum target, GLenum format, GLenum type, void * table);
    void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat * params);
    void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint * params);
    void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void * data);
    void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
    void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void * image);
    void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * image);
    void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params);
    void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat * params);
    void glConvolutionParameteri (GLenum target, GLenum pname, GLint params);
    void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint * params);
    void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
    void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
    void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, void * image);
    void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat * params);
    void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint * params);
    void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, void * row, void * column, void * span);
    void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * row, const void * column);
    void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
    void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat * params);
    void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint * params);
    void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
    void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat * params);
    void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint * params);
    void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
    void glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
    void glResetHistogram (GLenum target);
    void glResetMinmax (GLenum target);
    void glMultiDrawArraysIndirectCountARB (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
    void glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
    void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
    void glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
    void glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
    void glInvalidateTexImage (GLuint texture, GLint level);
    void glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length);
    void glInvalidateBufferData (GLuint buffer);
    void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments);
    void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    void * glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
    void glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
    void glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
    void glBindTextures (GLuint first, GLsizei count, const GLuint * textures);
    void glBindSamplers (GLuint first, GLsizei count, const GLuint * samplers);
    void glBindImageTextures (GLuint first, GLsizei count, const GLuint * textures);
    void glBindVertexBuffers (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
    void glMultiDrawArraysIndirect (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
    void glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
    void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
    GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name);
    void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
    void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
    GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name);
    GLint glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar * name);
    void glProvokingVertex (GLenum mode);
    GLenum glGetGraphicsResetStatusARB ();
    void glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
    void glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    void glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void * img);
    void glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    void glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    void glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
    void glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
    void glGetnMapdvARB (GLenum target, GLenum query, GLsizei bufSize, GLdouble * v);
    void glGetnMapfvARB (GLenum target, GLenum query, GLsizei bufSize, GLfloat * v);
    void glGetnMapivARB (GLenum target, GLenum query, GLsizei bufSize, GLint * v);
    void glGetnPixelMapfvARB (GLenum map, GLsizei bufSize, GLfloat * values);
    void glGetnPixelMapuivARB (GLenum map, GLsizei bufSize, GLuint * values);
    void glGetnPixelMapusvARB (GLenum map, GLsizei bufSize, GLushort * values);
    void glGetnPolygonStippleARB (GLsizei bufSize, GLubyte * pattern);
    void glGetnColorTableARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
    void glGetnConvolutionFilterARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
    void glGetnSeparableFilterARB (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
    void glGetnHistogramARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
    void glGetnMinmaxARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
    void glMinSampleShadingARB (GLfloat value);
    void glGenSamplers (GLsizei count, GLuint * samplers);
    void glDeleteSamplers (GLsizei count, const GLuint * samplers);
    GLboolean glIsSampler (GLuint sampler);
    void glBindSampler (GLuint unit, GLuint sampler);
    void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
    void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param);
    void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
    void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param);
    void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param);
    void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param);
    void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params);
    void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params);
    void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params);
    void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params);
    void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
    void glActiveShaderProgram (GLuint pipeline, GLuint program);
    GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings);
    void glBindProgramPipeline (GLuint pipeline);
    void glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines);
    void glGenProgramPipelines (GLsizei n, GLuint * pipelines);
    GLboolean glIsProgramPipeline (GLuint pipeline);
    void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params);
    void glProgramUniform1i (GLuint program, GLint location, GLint v0);
    void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
    void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void glProgramUniform1d (GLuint program, GLint location, GLdouble v0);
    void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    void glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
    void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
    void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1);
    void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
    void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
    void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    void glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
    void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    void glValidateProgramPipeline (GLuint pipeline);
    void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    void glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
    void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
    void glMemoryBarrier (GLbitfield barriers);
    void glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
    GLint glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar * name);
    GLuint glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar * name);
    void glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
    void glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
    void glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
    void glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint * indices);
    void glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint * params);
    void glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint * values);
    void glNamedStringARB (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string);
    void glDeleteNamedStringARB (GLint namelen, const GLchar * name);
    void glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length);
    GLboolean glIsNamedStringARB (GLint namelen, const GLchar * name);
    void glGetNamedStringARB (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string);
    void glGetNamedStringivARB (GLint namelen, const GLchar * name, GLenum pname, GLint * params);
    void glBufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
    void glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
    void glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
    void glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
    GLsync glFenceSync (GLenum condition, GLbitfield flags);
    GLboolean glIsSync (GLsync sync);
    void glDeleteSync (GLsync sync);
    GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    void glGetInteger64v (GLenum pname, GLint64 * data);
    void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
    void glPatchParameteri (GLenum pname, GLint value);
    void glPatchParameterfv (GLenum pname, const GLfloat * values);
    void glTextureBarrier ();
    void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    void glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    void glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val);
    void glSampleMaski (GLuint maskNumber, GLbitfield mask);
    void glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    void glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
    void glQueryCounter (GLuint id, GLenum target);
    void glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 * params);
    void glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 * params);
    void glBindTransformFeedback (GLenum target, GLuint id);
    void glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids);
    void glGenTransformFeedbacks (GLsizei n, GLuint * ids);
    GLboolean glIsTransformFeedback (GLuint id);
    void glPauseTransformFeedback ();
    void glResumeTransformFeedback ();
    void glDrawTransformFeedback (GLenum mode, GLuint id);
    void glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream);
    void glBeginQueryIndexed (GLenum target, GLuint index, GLuint id);
    void glEndQueryIndexed (GLenum target, GLuint index);
    void glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint * params);
    void glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount);
    void glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
    void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
    void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
    void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
    GLuint glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName);
    void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
    void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
    void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
    void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    void glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
    void glGetIntegeri_v (GLenum target, GLuint index, GLint * data);
    void glBindVertexArray (GLuint array);
    void glDeleteVertexArrays (GLsizei n, const GLuint * arrays);
    void glGenVertexArrays (GLsizei n, GLuint * arrays);
    GLboolean glIsVertexArray (GLuint array);
    void glVertexAttribL1d (GLuint index, GLdouble x);
    void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
    void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
    void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void glVertexAttribL1dv (GLuint index, const GLdouble * v);
    void glVertexAttribL2dv (GLuint index, const GLdouble * v);
    void glVertexAttribL3dv (GLuint index, const GLdouble * v);
    void glVertexAttribL4dv (GLuint index, const GLdouble * v);
    void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
    void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble * params);
    void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    void glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
    void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
    void glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    void glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    void glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    void glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    void glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    void glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    void glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    void glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    void glVertexP2ui (GLenum type, GLuint value);
    void glVertexP2uiv (GLenum type, const GLuint * value);
    void glVertexP3ui (GLenum type, GLuint value);
    void glVertexP3uiv (GLenum type, const GLuint * value);
    void glVertexP4ui (GLenum type, GLuint value);
    void glVertexP4uiv (GLenum type, const GLuint * value);
    void glTexCoordP1ui (GLenum type, GLuint coords);
    void glTexCoordP1uiv (GLenum type, const GLuint * coords);
    void glTexCoordP2ui (GLenum type, GLuint coords);
    void glTexCoordP2uiv (GLenum type, const GLuint * coords);
    void glTexCoordP3ui (GLenum type, GLuint coords);
    void glTexCoordP3uiv (GLenum type, const GLuint * coords);
    void glTexCoordP4ui (GLenum type, GLuint coords);
    void glTexCoordP4uiv (GLenum type, const GLuint * coords);
    void glMultiTexCoordP1ui (GLenum texture, GLenum type, GLuint coords);
    void glMultiTexCoordP1uiv (GLenum texture, GLenum type, const GLuint * coords);
    void glMultiTexCoordP2ui (GLenum texture, GLenum type, GLuint coords);
    void glMultiTexCoordP2uiv (GLenum texture, GLenum type, const GLuint * coords);
    void glMultiTexCoordP3ui (GLenum texture, GLenum type, GLuint coords);
    void glMultiTexCoordP3uiv (GLenum texture, GLenum type, const GLuint * coords);
    void glMultiTexCoordP4ui (GLenum texture, GLenum type, GLuint coords);
    void glMultiTexCoordP4uiv (GLenum texture, GLenum type, const GLuint * coords);
    void glNormalP3ui (GLenum type, GLuint coords);
    void glNormalP3uiv (GLenum type, const GLuint * coords);
    void glColorP3ui (GLenum type, GLuint color);
    void glColorP3uiv (GLenum type, const GLuint * color);
    void glColorP4ui (GLenum type, GLuint color);
    void glColorP4uiv (GLenum type, const GLuint * color);
    void glSecondaryColorP3ui (GLenum type, GLuint color);
    void glSecondaryColorP3uiv (GLenum type, const GLuint * color);
    void glViewportArrayv (GLuint first, GLsizei count, const GLfloat * v);
    void glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
    void glViewportIndexedfv (GLuint index, const GLfloat * v);
    void glScissorArrayv (GLuint first, GLsizei count, const GLint * v);
    void glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
    void glScissorIndexedv (GLuint index, const GLint * v);
    void glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble * v);
    void glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f);
    void glGetFloati_v (GLenum target, GLuint index, GLfloat * data);
    void glGetDoublei_v (GLenum target, GLuint index, GLdouble * data);
    void glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    void glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    void glDebugMessageCallback (GLDEBUGPROC callback, const void * userParam);
    GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    void glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar * message);
    void glPopDebugGroup ();
    void glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
    void glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
    void glObjectPtrLabel (const void * ptr, GLsizei length, const GLchar * label);
    void glGetObjectPtrLabel (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
    void glGetPointerv (GLenum pname, void ** params);
    void glDebugMessageControlKHR (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    void glDebugMessageInsertKHR (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    void glDebugMessageCallbackKHR (GLDEBUGPROCKHR callback, const void * userParam);
    GLuint glGetDebugMessageLogKHR (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    void glPushDebugGroupKHR (GLenum source, GLuint id, GLsizei length, const GLchar * message);
    void glPopDebugGroupKHR ();
    void glObjectLabelKHR (GLenum identifier, GLuint name, GLsizei length, const GLchar * label);
    void glGetObjectLabelKHR (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
    void glObjectPtrLabelKHR (const void * ptr, GLsizei length, const GLchar * label);
    void glGetObjectPtrLabelKHR (const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
    void glGetPointervKHR (GLenum pname, void ** params);
    GLenum glGetGraphicsResetStatus ();
    void glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    void glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    void glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    void glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
    GLenum glGetGraphicsResetStatusKHR ();
    void glReadnPixelsKHR (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    void glGetnUniformfvKHR (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    void glGetnUniformivKHR (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    void glGetnUniformuivKHR (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glAccum glew::glcore::glAccum
#define glAccumxOES glew::glcore::glAccumxOES
#define glActiveProgramEXT glew::glcore::glActiveProgramEXT
#define glActiveShaderProgram glew::glcore::glActiveShaderProgram
#define glActiveShaderProgramEXT glew::glcore::glActiveShaderProgramEXT
#define glActiveStencilFaceEXT glew::glcore::glActiveStencilFaceEXT
#define glActiveTexture glew::glcore::glActiveTexture
#define glActiveTextureARB glew::glcore::glActiveTextureARB
#define glActiveVaryingNV glew::glcore::glActiveVaryingNV
#define glAlphaFragmentOp1ATI glew::glcore::glAlphaFragmentOp1ATI
#define glAlphaFragmentOp2ATI glew::glcore::glAlphaFragmentOp2ATI
#define glAlphaFragmentOp3ATI glew::glcore::glAlphaFragmentOp3ATI
#define glAlphaFunc glew::glcore::glAlphaFunc
#define glAlphaFuncQCOM glew::glcore::glAlphaFuncQCOM
#define glAlphaFuncx glew::glcore::glAlphaFuncx
#define glAlphaFuncxOES glew::glcore::glAlphaFuncxOES
#define glApplyTextureEXT glew::glcore::glApplyTextureEXT
#define glAreProgramsResidentNV glew::glcore::glAreProgramsResidentNV
#define glAreTexturesResident glew::glcore::glAreTexturesResident
#define glAreTexturesResidentEXT glew::glcore::glAreTexturesResidentEXT
#define glArrayElement glew::glcore::glArrayElement
#define glArrayElementEXT glew::glcore::glArrayElementEXT
#define glArrayObjectATI glew::glcore::glArrayObjectATI
#define glAsyncMarkerSGIX glew::glcore::glAsyncMarkerSGIX
#define glAttachObjectARB glew::glcore::glAttachObjectARB
#define glAttachShader glew::glcore::glAttachShader
#define glBegin glew::glcore::glBegin
#define glBeginConditionalRender glew::glcore::glBeginConditionalRender
#define glBeginConditionalRenderNV glew::glcore::glBeginConditionalRenderNV
#define glBeginConditionalRenderNVX glew::glcore::glBeginConditionalRenderNVX
#define glBeginFragmentShaderATI glew::glcore::glBeginFragmentShaderATI
#define glBeginOcclusionQueryNV glew::glcore::glBeginOcclusionQueryNV
#define glBeginPerfMonitorAMD glew::glcore::glBeginPerfMonitorAMD
#define glBeginPerfQueryINTEL glew::glcore::glBeginPerfQueryINTEL
#define glBeginQuery glew::glcore::glBeginQuery
#define glBeginQueryARB glew::glcore::glBeginQueryARB
#define glBeginQueryEXT glew::glcore::glBeginQueryEXT
#define glBeginQueryIndexed glew::glcore::glBeginQueryIndexed
#define glBeginTransformFeedback glew::glcore::glBeginTransformFeedback
#define glBeginTransformFeedbackEXT glew::glcore::glBeginTransformFeedbackEXT
#define glBeginTransformFeedbackNV glew::glcore::glBeginTransformFeedbackNV
#define glBeginVertexShaderEXT glew::glcore::glBeginVertexShaderEXT
#define glBeginVideoCaptureNV glew::glcore::glBeginVideoCaptureNV
#define glBindAttribLocation glew::glcore::glBindAttribLocation
#define glBindAttribLocationARB glew::glcore::glBindAttribLocationARB
#define glBindBuffer glew::glcore::glBindBuffer
#define glBindBufferARB glew::glcore::glBindBufferARB
#define glBindBufferBase glew::glcore::glBindBufferBase
#define glBindBufferBaseEXT glew::glcore::glBindBufferBaseEXT
#define glBindBufferBaseNV glew::glcore::glBindBufferBaseNV
#define glBindBufferOffsetEXT glew::glcore::glBindBufferOffsetEXT
#define glBindBufferOffsetNV glew::glcore::glBindBufferOffsetNV
#define glBindBufferRange glew::glcore::glBindBufferRange
#define glBindBufferRangeEXT glew::glcore::glBindBufferRangeEXT
#define glBindBufferRangeNV glew::glcore::glBindBufferRangeNV
#define glBindBuffersBase glew::glcore::glBindBuffersBase
#define glBindBuffersRange glew::glcore::glBindBuffersRange
#define glBindFragDataLocation glew::glcore::glBindFragDataLocation
#define glBindFragDataLocationEXT glew::glcore::glBindFragDataLocationEXT
#define glBindFragDataLocationIndexed glew::glcore::glBindFragDataLocationIndexed
#define glBindFragmentShaderATI glew::glcore::glBindFragmentShaderATI
#define glBindFramebuffer glew::glcore::glBindFramebuffer
#define glBindFramebufferEXT glew::glcore::glBindFramebufferEXT
#define glBindFramebufferOES glew::glcore::glBindFramebufferOES
#define glBindImageTexture glew::glcore::glBindImageTexture
#define glBindImageTextureEXT glew::glcore::glBindImageTextureEXT
#define glBindImageTextures glew::glcore::glBindImageTextures
#define glBindLightParameterEXT glew::glcore::glBindLightParameterEXT
#define glBindMaterialParameterEXT glew::glcore::glBindMaterialParameterEXT
#define glBindMultiTextureEXT glew::glcore::glBindMultiTextureEXT
#define glBindParameterEXT glew::glcore::glBindParameterEXT
#define glBindProgramARB glew::glcore::glBindProgramARB
#define glBindProgramNV glew::glcore::glBindProgramNV
#define glBindProgramPipeline glew::glcore::glBindProgramPipeline
#define glBindProgramPipelineEXT glew::glcore::glBindProgramPipelineEXT
#define glBindRenderbuffer glew::glcore::glBindRenderbuffer
#define glBindRenderbufferEXT glew::glcore::glBindRenderbufferEXT
#define glBindRenderbufferOES glew::glcore::glBindRenderbufferOES
#define glBindSampler glew::glcore::glBindSampler
#define glBindSamplers glew::glcore::glBindSamplers
#define glBindTexGenParameterEXT glew::glcore::glBindTexGenParameterEXT
#define glBindTexture glew::glcore::glBindTexture
#define glBindTextureEXT glew::glcore::glBindTextureEXT
#define glBindTextureUnit glew::glcore::glBindTextureUnit
#define glBindTextureUnitParameterEXT glew::glcore::glBindTextureUnitParameterEXT
#define glBindTextures glew::glcore::glBindTextures
#define glBindTransformFeedback glew::glcore::glBindTransformFeedback
#define glBindTransformFeedbackNV glew::glcore::glBindTransformFeedbackNV
#define glBindVertexArray glew::glcore::glBindVertexArray
#define glBindVertexArrayAPPLE glew::glcore::glBindVertexArrayAPPLE
#define glBindVertexArrayOES glew::glcore::glBindVertexArrayOES
#define glBindVertexBuffer glew::glcore::glBindVertexBuffer
#define glBindVertexBuffers glew::glcore::glBindVertexBuffers
#define glBindVertexShaderEXT glew::glcore::glBindVertexShaderEXT
#define glBindVideoCaptureStreamBufferNV glew::glcore::glBindVideoCaptureStreamBufferNV
#define glBindVideoCaptureStreamTextureNV glew::glcore::glBindVideoCaptureStreamTextureNV
#define glBinormal3bEXT glew::glcore::glBinormal3bEXT
#define glBinormal3bvEXT glew::glcore::glBinormal3bvEXT
#define glBinormal3dEXT glew::glcore::glBinormal3dEXT
#define glBinormal3dvEXT glew::glcore::glBinormal3dvEXT
#define glBinormal3fEXT glew::glcore::glBinormal3fEXT
#define glBinormal3fvEXT glew::glcore::glBinormal3fvEXT
#define glBinormal3iEXT glew::glcore::glBinormal3iEXT
#define glBinormal3ivEXT glew::glcore::glBinormal3ivEXT
#define glBinormal3sEXT glew::glcore::glBinormal3sEXT
#define glBinormal3svEXT glew::glcore::glBinormal3svEXT
#define glBinormalPointerEXT glew::glcore::glBinormalPointerEXT
#define glBitmap glew::glcore::glBitmap
#define glBitmapxOES glew::glcore::glBitmapxOES
#define glBlendBarrierKHR glew::glcore::glBlendBarrierKHR
#define glBlendBarrierNV glew::glcore::glBlendBarrierNV
#define glBlendColor glew::glcore::glBlendColor
#define glBlendColorEXT glew::glcore::glBlendColorEXT
#define glBlendColorxOES glew::glcore::glBlendColorxOES
#define glBlendEquation glew::glcore::glBlendEquation
#define glBlendEquationEXT glew::glcore::glBlendEquationEXT
#define glBlendEquationIndexedAMD glew::glcore::glBlendEquationIndexedAMD
#define glBlendEquationOES glew::glcore::glBlendEquationOES
#define glBlendEquationSeparate glew::glcore::glBlendEquationSeparate
#define glBlendEquationSeparateEXT glew::glcore::glBlendEquationSeparateEXT
#define glBlendEquationSeparateIndexedAMD glew::glcore::glBlendEquationSeparateIndexedAMD
#define glBlendEquationSeparateOES glew::glcore::glBlendEquationSeparateOES
#define glBlendEquationSeparatei glew::glcore::glBlendEquationSeparatei
#define glBlendEquationSeparateiARB glew::glcore::glBlendEquationSeparateiARB
#define glBlendEquationSeparateiEXT glew::glcore::glBlendEquationSeparateiEXT
#define glBlendEquationSeparateiOES glew::glcore::glBlendEquationSeparateiOES
#define glBlendEquationi glew::glcore::glBlendEquationi
#define glBlendEquationiARB glew::glcore::glBlendEquationiARB
#define glBlendEquationiEXT glew::glcore::glBlendEquationiEXT
#define glBlendEquationiOES glew::glcore::glBlendEquationiOES
#define glBlendFunc glew::glcore::glBlendFunc
#define glBlendFuncIndexedAMD glew::glcore::glBlendFuncIndexedAMD
#define glBlendFuncSeparate glew::glcore::glBlendFuncSeparate
#define glBlendFuncSeparateEXT glew::glcore::glBlendFuncSeparateEXT
#define glBlendFuncSeparateINGR glew::glcore::glBlendFuncSeparateINGR
#define glBlendFuncSeparateIndexedAMD glew::glcore::glBlendFuncSeparateIndexedAMD
#define glBlendFuncSeparateOES glew::glcore::glBlendFuncSeparateOES
#define glBlendFuncSeparatei glew::glcore::glBlendFuncSeparatei
#define glBlendFuncSeparateiARB glew::glcore::glBlendFuncSeparateiARB
#define glBlendFuncSeparateiEXT glew::glcore::glBlendFuncSeparateiEXT
#define glBlendFuncSeparateiOES glew::glcore::glBlendFuncSeparateiOES
#define glBlendFunci glew::glcore::glBlendFunci
#define glBlendFunciARB glew::glcore::glBlendFunciARB
#define glBlendFunciEXT glew::glcore::glBlendFunciEXT
#define glBlendFunciOES glew::glcore::glBlendFunciOES
#define glBlendParameteriNV glew::glcore::glBlendParameteriNV
#define glBlitFramebuffer glew::glcore::glBlitFramebuffer
#define glBlitFramebufferANGLE glew::glcore::glBlitFramebufferANGLE
#define glBlitFramebufferEXT glew::glcore::glBlitFramebufferEXT
#define glBlitFramebufferNV glew::glcore::glBlitFramebufferNV
#define glBlitNamedFramebuffer glew::glcore::glBlitNamedFramebuffer
#define glBufferAddressRangeNV glew::glcore::glBufferAddressRangeNV
#define glBufferData glew::glcore::glBufferData
#define glBufferDataARB glew::glcore::glBufferDataARB
#define glBufferPageCommitmentARB glew::glcore::glBufferPageCommitmentARB
#define glBufferParameteriAPPLE glew::glcore::glBufferParameteriAPPLE
#define glBufferStorage glew::glcore::glBufferStorage
#define glBufferStorageEXT glew::glcore::glBufferStorageEXT
#define glBufferSubData glew::glcore::glBufferSubData
#define glBufferSubDataARB glew::glcore::glBufferSubDataARB
#define glCallCommandListNV glew::glcore::glCallCommandListNV
#define glCallList glew::glcore::glCallList
#define glCallLists glew::glcore::glCallLists
#define glCheckFramebufferStatus glew::glcore::glCheckFramebufferStatus
#define glCheckFramebufferStatusEXT glew::glcore::glCheckFramebufferStatusEXT
#define glCheckFramebufferStatusOES glew::glcore::glCheckFramebufferStatusOES
#define glCheckNamedFramebufferStatus glew::glcore::glCheckNamedFramebufferStatus
#define glCheckNamedFramebufferStatusEXT glew::glcore::glCheckNamedFramebufferStatusEXT
#define glClampColor glew::glcore::glClampColor
#define glClampColorARB glew::glcore::glClampColorARB
#define glClear glew::glcore::glClear
#define glClearAccum glew::glcore::glClearAccum
#define glClearAccumxOES glew::glcore::glClearAccumxOES
#define glClearBufferData glew::glcore::glClearBufferData
#define glClearBufferSubData glew::glcore::glClearBufferSubData
#define glClearBufferfi glew::glcore::glClearBufferfi
#define glClearBufferfv glew::glcore::glClearBufferfv
#define glClearBufferiv glew::glcore::glClearBufferiv
#define glClearBufferuiv glew::glcore::glClearBufferuiv
#define glClearColor glew::glcore::glClearColor
#define glClearColorIiEXT glew::glcore::glClearColorIiEXT
#define glClearColorIuiEXT glew::glcore::glClearColorIuiEXT
#define glClearColorx glew::glcore::glClearColorx
#define glClearColorxOES glew::glcore::glClearColorxOES
#define glClearDepth glew::glcore::glClearDepth
#define glClearDepthdNV glew::glcore::glClearDepthdNV
#define glClearDepthf glew::glcore::glClearDepthf
#define glClearDepthfOES glew::glcore::glClearDepthfOES
#define glClearDepthx glew::glcore::glClearDepthx
#define glClearDepthxOES glew::glcore::glClearDepthxOES
#define glClearIndex glew::glcore::glClearIndex
#define glClearNamedBufferData glew::glcore::glClearNamedBufferData
#define glClearNamedBufferDataEXT glew::glcore::glClearNamedBufferDataEXT
#define glClearNamedBufferSubData glew::glcore::glClearNamedBufferSubData
#define glClearNamedBufferSubDataEXT glew::glcore::glClearNamedBufferSubDataEXT
#define glClearNamedFramebufferfi glew::glcore::glClearNamedFramebufferfi
#define glClearNamedFramebufferfv glew::glcore::glClearNamedFramebufferfv
#define glClearNamedFramebufferiv glew::glcore::glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv glew::glcore::glClearNamedFramebufferuiv
#define glClearStencil glew::glcore::glClearStencil
#define glClearTexImage glew::glcore::glClearTexImage
#define glClearTexSubImage glew::glcore::glClearTexSubImage
#define glClientActiveTexture glew::glcore::glClientActiveTexture
#define glClientActiveTextureARB glew::glcore::glClientActiveTextureARB
#define glClientActiveVertexStreamATI glew::glcore::glClientActiveVertexStreamATI
#define glClientAttribDefaultEXT glew::glcore::glClientAttribDefaultEXT
#define glClientWaitSync glew::glcore::glClientWaitSync
#define glClientWaitSyncAPPLE glew::glcore::glClientWaitSyncAPPLE
#define glClipControl glew::glcore::glClipControl
#define glClipPlane glew::glcore::glClipPlane
#define glClipPlanef glew::glcore::glClipPlanef
#define glClipPlanefIMG glew::glcore::glClipPlanefIMG
#define glClipPlanefOES glew::glcore::glClipPlanefOES
#define glClipPlanex glew::glcore::glClipPlanex
#define glClipPlanexIMG glew::glcore::glClipPlanexIMG
#define glClipPlanexOES glew::glcore::glClipPlanexOES
#define glColor3b glew::glcore::glColor3b
#define glColor3bv glew::glcore::glColor3bv
#define glColor3d glew::glcore::glColor3d
#define glColor3dv glew::glcore::glColor3dv
#define glColor3f glew::glcore::glColor3f
#define glColor3fVertex3fSUN glew::glcore::glColor3fVertex3fSUN
#define glColor3fVertex3fvSUN glew::glcore::glColor3fVertex3fvSUN
#define glColor3fv glew::glcore::glColor3fv
#define glColor3hNV glew::glcore::glColor3hNV
#define glColor3hvNV glew::glcore::glColor3hvNV
#define glColor3i glew::glcore::glColor3i
#define glColor3iv glew::glcore::glColor3iv
#define glColor3s glew::glcore::glColor3s
#define glColor3sv glew::glcore::glColor3sv
#define glColor3ub glew::glcore::glColor3ub
#define glColor3ubv glew::glcore::glColor3ubv
#define glColor3ui glew::glcore::glColor3ui
#define glColor3uiv glew::glcore::glColor3uiv
#define glColor3us glew::glcore::glColor3us
#define glColor3usv glew::glcore::glColor3usv
#define glColor3xOES glew::glcore::glColor3xOES
#define glColor3xvOES glew::glcore::glColor3xvOES
#define glColor4b glew::glcore::glColor4b
#define glColor4bv glew::glcore::glColor4bv
#define glColor4d glew::glcore::glColor4d
#define glColor4dv glew::glcore::glColor4dv
#define glColor4f glew::glcore::glColor4f
#define glColor4fNormal3fVertex3fSUN glew::glcore::glColor4fNormal3fVertex3fSUN
#define glColor4fNormal3fVertex3fvSUN glew::glcore::glColor4fNormal3fVertex3fvSUN
#define glColor4fv glew::glcore::glColor4fv
#define glColor4hNV glew::glcore::glColor4hNV
#define glColor4hvNV glew::glcore::glColor4hvNV
#define glColor4i glew::glcore::glColor4i
#define glColor4iv glew::glcore::glColor4iv
#define glColor4s glew::glcore::glColor4s
#define glColor4sv glew::glcore::glColor4sv
#define glColor4ub glew::glcore::glColor4ub
#define glColor4ubVertex2fSUN glew::glcore::glColor4ubVertex2fSUN
#define glColor4ubVertex2fvSUN glew::glcore::glColor4ubVertex2fvSUN
#define glColor4ubVertex3fSUN glew::glcore::glColor4ubVertex3fSUN
#define glColor4ubVertex3fvSUN glew::glcore::glColor4ubVertex3fvSUN
#define glColor4ubv glew::glcore::glColor4ubv
#define glColor4ui glew::glcore::glColor4ui
#define glColor4uiv glew::glcore::glColor4uiv
#define glColor4us glew::glcore::glColor4us
#define glColor4usv glew::glcore::glColor4usv
#define glColor4x glew::glcore::glColor4x
#define glColor4xOES glew::glcore::glColor4xOES
#define glColor4xvOES glew::glcore::glColor4xvOES
#define glColorFormatNV glew::glcore::glColorFormatNV
#define glColorFragmentOp1ATI glew::glcore::glColorFragmentOp1ATI
#define glColorFragmentOp2ATI glew::glcore::glColorFragmentOp2ATI
#define glColorFragmentOp3ATI glew::glcore::glColorFragmentOp3ATI
#define glColorMask glew::glcore::glColorMask
#define glColorMaskIndexedEXT glew::glcore::glColorMaskIndexedEXT
#define glColorMaski glew::glcore::glColorMaski
#define glColorMaskiEXT glew::glcore::glColorMaskiEXT
#define glColorMaskiOES glew::glcore::glColorMaskiOES
#define glColorMaterial glew::glcore::glColorMaterial
#define glColorP3ui glew::glcore::glColorP3ui
#define glColorP3uiv glew::glcore::glColorP3uiv
#define glColorP4ui glew::glcore::glColorP4ui
#define glColorP4uiv glew::glcore::glColorP4uiv
#define glColorPointer glew::glcore::glColorPointer
#define glColorPointerEXT glew::glcore::glColorPointerEXT
#define glColorPointerListIBM glew::glcore::glColorPointerListIBM
#define glColorPointervINTEL glew::glcore::glColorPointervINTEL
#define glColorSubTable glew::glcore::glColorSubTable
#define glColorSubTableEXT glew::glcore::glColorSubTableEXT
#define glColorTable glew::glcore::glColorTable
#define glColorTableEXT glew::glcore::glColorTableEXT
#define glColorTableParameterfv glew::glcore::glColorTableParameterfv
#define glColorTableParameterfvSGI glew::glcore::glColorTableParameterfvSGI
#define glColorTableParameteriv glew::glcore::glColorTableParameteriv
#define glColorTableParameterivSGI glew::glcore::glColorTableParameterivSGI
#define glColorTableSGI glew::glcore::glColorTableSGI
#define glCombinerInputNV glew::glcore::glCombinerInputNV
#define glCombinerOutputNV glew::glcore::glCombinerOutputNV
#define glCombinerParameterfNV glew::glcore::glCombinerParameterfNV
#define glCombinerParameterfvNV glew::glcore::glCombinerParameterfvNV
#define glCombinerParameteriNV glew::glcore::glCombinerParameteriNV
#define glCombinerParameterivNV glew::glcore::glCombinerParameterivNV
#define glCombinerStageParameterfvNV glew::glcore::glCombinerStageParameterfvNV
#define glCommandListSegmentsNV glew::glcore::glCommandListSegmentsNV
#define glCompileCommandListNV glew::glcore::glCompileCommandListNV
#define glCompileShader glew::glcore::glCompileShader
#define glCompileShaderARB glew::glcore::glCompileShaderARB
#define glCompileShaderIncludeARB glew::glcore::glCompileShaderIncludeARB
#define glCompressedMultiTexImage1DEXT glew::glcore::glCompressedMultiTexImage1DEXT
#define glCompressedMultiTexImage2DEXT glew::glcore::glCompressedMultiTexImage2DEXT
#define glCompressedMultiTexImage3DEXT glew::glcore::glCompressedMultiTexImage3DEXT
#define glCompressedMultiTexSubImage1DEXT glew::glcore::glCompressedMultiTexSubImage1DEXT
#define glCompressedMultiTexSubImage2DEXT glew::glcore::glCompressedMultiTexSubImage2DEXT
#define glCompressedMultiTexSubImage3DEXT glew::glcore::glCompressedMultiTexSubImage3DEXT
#define glCompressedTexImage1D glew::glcore::glCompressedTexImage1D
#define glCompressedTexImage1DARB glew::glcore::glCompressedTexImage1DARB
#define glCompressedTexImage2D glew::glcore::glCompressedTexImage2D
#define glCompressedTexImage2DARB glew::glcore::glCompressedTexImage2DARB
#define glCompressedTexImage3D glew::glcore::glCompressedTexImage3D
#define glCompressedTexImage3DARB glew::glcore::glCompressedTexImage3DARB
#define glCompressedTexImage3DOES glew::glcore::glCompressedTexImage3DOES
#define glCompressedTexSubImage1D glew::glcore::glCompressedTexSubImage1D
#define glCompressedTexSubImage1DARB glew::glcore::glCompressedTexSubImage1DARB
#define glCompressedTexSubImage2D glew::glcore::glCompressedTexSubImage2D
#define glCompressedTexSubImage2DARB glew::glcore::glCompressedTexSubImage2DARB
#define glCompressedTexSubImage3D glew::glcore::glCompressedTexSubImage3D
#define glCompressedTexSubImage3DARB glew::glcore::glCompressedTexSubImage3DARB
#define glCompressedTexSubImage3DOES glew::glcore::glCompressedTexSubImage3DOES
#define glCompressedTextureImage1DEXT glew::glcore::glCompressedTextureImage1DEXT
#define glCompressedTextureImage2DEXT glew::glcore::glCompressedTextureImage2DEXT
#define glCompressedTextureImage3DEXT glew::glcore::glCompressedTextureImage3DEXT
#define glCompressedTextureSubImage1D glew::glcore::glCompressedTextureSubImage1D
#define glCompressedTextureSubImage1DEXT glew::glcore::glCompressedTextureSubImage1DEXT
#define glCompressedTextureSubImage2D glew::glcore::glCompressedTextureSubImage2D
#define glCompressedTextureSubImage2DEXT glew::glcore::glCompressedTextureSubImage2DEXT
#define glCompressedTextureSubImage3D glew::glcore::glCompressedTextureSubImage3D
#define glCompressedTextureSubImage3DEXT glew::glcore::glCompressedTextureSubImage3DEXT
#define glConvolutionFilter1D glew::glcore::glConvolutionFilter1D
#define glConvolutionFilter1DEXT glew::glcore::glConvolutionFilter1DEXT
#define glConvolutionFilter2D glew::glcore::glConvolutionFilter2D
#define glConvolutionFilter2DEXT glew::glcore::glConvolutionFilter2DEXT
#define glConvolutionParameterf glew::glcore::glConvolutionParameterf
#define glConvolutionParameterfEXT glew::glcore::glConvolutionParameterfEXT
#define glConvolutionParameterfv glew::glcore::glConvolutionParameterfv
#define glConvolutionParameterfvEXT glew::glcore::glConvolutionParameterfvEXT
#define glConvolutionParameteri glew::glcore::glConvolutionParameteri
#define glConvolutionParameteriEXT glew::glcore::glConvolutionParameteriEXT
#define glConvolutionParameteriv glew::glcore::glConvolutionParameteriv
#define glConvolutionParameterivEXT glew::glcore::glConvolutionParameterivEXT
#define glConvolutionParameterxOES glew::glcore::glConvolutionParameterxOES
#define glConvolutionParameterxvOES glew::glcore::glConvolutionParameterxvOES
#define glCopyBufferSubData glew::glcore::glCopyBufferSubData
#define glCopyBufferSubDataNV glew::glcore::glCopyBufferSubDataNV
#define glCopyColorSubTable glew::glcore::glCopyColorSubTable
#define glCopyColorSubTableEXT glew::glcore::glCopyColorSubTableEXT
#define glCopyColorTable glew::glcore::glCopyColorTable
#define glCopyColorTableSGI glew::glcore::glCopyColorTableSGI
#define glCopyConvolutionFilter1D glew::glcore::glCopyConvolutionFilter1D
#define glCopyConvolutionFilter1DEXT glew::glcore::glCopyConvolutionFilter1DEXT
#define glCopyConvolutionFilter2D glew::glcore::glCopyConvolutionFilter2D
#define glCopyConvolutionFilter2DEXT glew::glcore::glCopyConvolutionFilter2DEXT
#define glCopyImageSubData glew::glcore::glCopyImageSubData
#define glCopyImageSubDataEXT glew::glcore::glCopyImageSubDataEXT
#define glCopyImageSubDataOES glew::glcore::glCopyImageSubDataOES
#define glCopyImageSubDataNV glew::glcore::glCopyImageSubDataNV
#define glCopyMultiTexImage1DEXT glew::glcore::glCopyMultiTexImage1DEXT
#define glCopyMultiTexImage2DEXT glew::glcore::glCopyMultiTexImage2DEXT
#define glCopyMultiTexSubImage1DEXT glew::glcore::glCopyMultiTexSubImage1DEXT
#define glCopyMultiTexSubImage2DEXT glew::glcore::glCopyMultiTexSubImage2DEXT
#define glCopyMultiTexSubImage3DEXT glew::glcore::glCopyMultiTexSubImage3DEXT
#define glCopyNamedBufferSubData glew::glcore::glCopyNamedBufferSubData
#define glCopyPathNV glew::glcore::glCopyPathNV
#define glCopyPixels glew::glcore::glCopyPixels
#define glCopyTexImage1D glew::glcore::glCopyTexImage1D
#define glCopyTexImage1DEXT glew::glcore::glCopyTexImage1DEXT
#define glCopyTexImage2D glew::glcore::glCopyTexImage2D
#define glCopyTexImage2DEXT glew::glcore::glCopyTexImage2DEXT
#define glCopyTexSubImage1D glew::glcore::glCopyTexSubImage1D
#define glCopyTexSubImage1DEXT glew::glcore::glCopyTexSubImage1DEXT
#define glCopyTexSubImage2D glew::glcore::glCopyTexSubImage2D
#define glCopyTexSubImage2DEXT glew::glcore::glCopyTexSubImage2DEXT
#define glCopyTexSubImage3D glew::glcore::glCopyTexSubImage3D
#define glCopyTexSubImage3DEXT glew::glcore::glCopyTexSubImage3DEXT
#define glCopyTexSubImage3DOES glew::glcore::glCopyTexSubImage3DOES
#define glCopyTextureImage1DEXT glew::glcore::glCopyTextureImage1DEXT
#define glCopyTextureImage2DEXT glew::glcore::glCopyTextureImage2DEXT
#define glCopyTextureLevelsAPPLE glew::glcore::glCopyTextureLevelsAPPLE
#define glCopyTextureSubImage1D glew::glcore::glCopyTextureSubImage1D
#define glCopyTextureSubImage1DEXT glew::glcore::glCopyTextureSubImage1DEXT
#define glCopyTextureSubImage2D glew::glcore::glCopyTextureSubImage2D
#define glCopyTextureSubImage2DEXT glew::glcore::glCopyTextureSubImage2DEXT
#define glCopyTextureSubImage3D glew::glcore::glCopyTextureSubImage3D
#define glCopyTextureSubImage3DEXT glew::glcore::glCopyTextureSubImage3DEXT
#define glCoverFillPathInstancedNV glew::glcore::glCoverFillPathInstancedNV
#define glCoverFillPathNV glew::glcore::glCoverFillPathNV
#define glCoverStrokePathInstancedNV glew::glcore::glCoverStrokePathInstancedNV
#define glCoverStrokePathNV glew::glcore::glCoverStrokePathNV
#define glCoverageMaskNV glew::glcore::glCoverageMaskNV
#define glCoverageOperationNV glew::glcore::glCoverageOperationNV
#define glCreateBuffers glew::glcore::glCreateBuffers
#define glCreateCommandListsNV glew::glcore::glCreateCommandListsNV
#define glCreateStatesNV glew::glcore::glCreateStatesNV
#define glCreateFramebuffers glew::glcore::glCreateFramebuffers
#define glCreatePerfQueryINTEL glew::glcore::glCreatePerfQueryINTEL
#define glCreateProgram glew::glcore::glCreateProgram
#define glCreateProgramObjectARB glew::glcore::glCreateProgramObjectARB
#define glCreateProgramPipelines glew::glcore::glCreateProgramPipelines
#define glCreateQueries glew::glcore::glCreateQueries
#define glCreateRenderbuffers glew::glcore::glCreateRenderbuffers
#define glCreateSamplers glew::glcore::glCreateSamplers
#define glCreateShader glew::glcore::glCreateShader
#define glCreateShaderObjectARB glew::glcore::glCreateShaderObjectARB
#define glCreateShaderProgramEXT glew::glcore::glCreateShaderProgramEXT
#define glCreateShaderProgramv glew::glcore::glCreateShaderProgramv
#define glCreateShaderProgramvEXT glew::glcore::glCreateShaderProgramvEXT
#define glCreateSyncFromCLeventARB glew::glcore::glCreateSyncFromCLeventARB
#define glCreateTextures glew::glcore::glCreateTextures
#define glCreateTransformFeedbacks glew::glcore::glCreateTransformFeedbacks
#define glCreateVertexArrays glew::glcore::glCreateVertexArrays
#define glCullFace glew::glcore::glCullFace
#define glCullParameterdvEXT glew::glcore::glCullParameterdvEXT
#define glCullParameterfvEXT glew::glcore::glCullParameterfvEXT
#define glCurrentPaletteMatrixARB glew::glcore::glCurrentPaletteMatrixARB
#define glCurrentPaletteMatrixOES glew::glcore::glCurrentPaletteMatrixOES
#define glDebugMessageCallback glew::glcore::glDebugMessageCallback
#define glDebugMessageCallbackAMD glew::glcore::glDebugMessageCallbackAMD
#define glDebugMessageCallbackARB glew::glcore::glDebugMessageCallbackARB
#define glDebugMessageCallbackKHR glew::glcore::glDebugMessageCallbackKHR
#define glDebugMessageControl glew::glcore::glDebugMessageControl
#define glDebugMessageControlARB glew::glcore::glDebugMessageControlARB
#define glDebugMessageControlKHR glew::glcore::glDebugMessageControlKHR
#define glDebugMessageEnableAMD glew::glcore::glDebugMessageEnableAMD
#define glDebugMessageInsert glew::glcore::glDebugMessageInsert
#define glDebugMessageInsertAMD glew::glcore::glDebugMessageInsertAMD
#define glDebugMessageInsertARB glew::glcore::glDebugMessageInsertARB
#define glDebugMessageInsertKHR glew::glcore::glDebugMessageInsertKHR
#define glDeformSGIX glew::glcore::glDeformSGIX
#define glDeformationMap3dSGIX glew::glcore::glDeformationMap3dSGIX
#define glDeformationMap3fSGIX glew::glcore::glDeformationMap3fSGIX
#define glDeleteAsyncMarkersSGIX glew::glcore::glDeleteAsyncMarkersSGIX
#define glDeleteBuffers glew::glcore::glDeleteBuffers
#define glDeleteBuffersARB glew::glcore::glDeleteBuffersARB
#define glDeleteCommandListsNV glew::glcore::glDeleteCommandListsNV
#define glDeleteStatesNV glew::glcore::glDeleteStatesNV
#define glDeleteFencesAPPLE glew::glcore::glDeleteFencesAPPLE
#define glDeleteFencesNV glew::glcore::glDeleteFencesNV
#define glDeleteFragmentShaderATI glew::glcore::glDeleteFragmentShaderATI
#define glDeleteFramebuffers glew::glcore::glDeleteFramebuffers
#define glDeleteFramebuffersEXT glew::glcore::glDeleteFramebuffersEXT
#define glDeleteFramebuffersOES glew::glcore::glDeleteFramebuffersOES
#define glDeleteLists glew::glcore::glDeleteLists
#define glDeleteNamedStringARB glew::glcore::glDeleteNamedStringARB
#define glDeleteNamesAMD glew::glcore::glDeleteNamesAMD
#define glDeleteObjectARB glew::glcore::glDeleteObjectARB
#define glDeleteOcclusionQueriesNV glew::glcore::glDeleteOcclusionQueriesNV
#define glDeletePathsNV glew::glcore::glDeletePathsNV
#define glDeletePerfMonitorsAMD glew::glcore::glDeletePerfMonitorsAMD
#define glDeletePerfQueryINTEL glew::glcore::glDeletePerfQueryINTEL
#define glDeleteProgram glew::glcore::glDeleteProgram
#define glDeleteProgramPipelines glew::glcore::glDeleteProgramPipelines
#define glDeleteProgramPipelinesEXT glew::glcore::glDeleteProgramPipelinesEXT
#define glDeleteProgramsARB glew::glcore::glDeleteProgramsARB
#define glDeleteProgramsNV glew::glcore::glDeleteProgramsNV
#define glDeleteQueries glew::glcore::glDeleteQueries
#define glDeleteQueriesARB glew::glcore::glDeleteQueriesARB
#define glDeleteQueriesEXT glew::glcore::glDeleteQueriesEXT
#define glDeleteRenderbuffers glew::glcore::glDeleteRenderbuffers
#define glDeleteRenderbuffersEXT glew::glcore::glDeleteRenderbuffersEXT
#define glDeleteRenderbuffersOES glew::glcore::glDeleteRenderbuffersOES
#define glDeleteSamplers glew::glcore::glDeleteSamplers
#define glDeleteShader glew::glcore::glDeleteShader
#define glDeleteSync glew::glcore::glDeleteSync
#define glDeleteSyncAPPLE glew::glcore::glDeleteSyncAPPLE
#define glDeleteTextures glew::glcore::glDeleteTextures
#define glDeleteTexturesEXT glew::glcore::glDeleteTexturesEXT
#define glDeleteTransformFeedbacks glew::glcore::glDeleteTransformFeedbacks
#define glDeleteTransformFeedbacksNV glew::glcore::glDeleteTransformFeedbacksNV
#define glDeleteVertexArrays glew::glcore::glDeleteVertexArrays
#define glDeleteVertexArraysAPPLE glew::glcore::glDeleteVertexArraysAPPLE
#define glDeleteVertexArraysOES glew::glcore::glDeleteVertexArraysOES
#define glDeleteVertexShaderEXT glew::glcore::glDeleteVertexShaderEXT
#define glDepthBoundsEXT glew::glcore::glDepthBoundsEXT
#define glDepthBoundsdNV glew::glcore::glDepthBoundsdNV
#define glDepthFunc glew::glcore::glDepthFunc
#define glDepthMask glew::glcore::glDepthMask
#define glDepthRange glew::glcore::glDepthRange
#define glDepthRangeArrayv glew::glcore::glDepthRangeArrayv
#define glDepthRangeArrayfvNV glew::glcore::glDepthRangeArrayfvNV
#define glDepthRangeIndexed glew::glcore::glDepthRangeIndexed
#define glDepthRangeIndexedfNV glew::glcore::glDepthRangeIndexedfNV
#define glDepthRangedNV glew::glcore::glDepthRangedNV
#define glDepthRangef glew::glcore::glDepthRangef
#define glDepthRangefOES glew::glcore::glDepthRangefOES
#define glDepthRangex glew::glcore::glDepthRangex
#define glDepthRangexOES glew::glcore::glDepthRangexOES
#define glDetachObjectARB glew::glcore::glDetachObjectARB
#define glDetachShader glew::glcore::glDetachShader
#define glDetailTexFuncSGIS glew::glcore::glDetailTexFuncSGIS
#define glDisable glew::glcore::glDisable
#define glDisableClientState glew::glcore::glDisableClientState
#define glDisableClientStateIndexedEXT glew::glcore::glDisableClientStateIndexedEXT
#define glDisableClientStateiEXT glew::glcore::glDisableClientStateiEXT
#define glDisableDriverControlQCOM glew::glcore::glDisableDriverControlQCOM
#define glDisableIndexedEXT glew::glcore::glDisableIndexedEXT
#define glDisableVariantClientStateEXT glew::glcore::glDisableVariantClientStateEXT
#define glDisableVertexArrayAttrib glew::glcore::glDisableVertexArrayAttrib
#define glDisableVertexArrayAttribEXT glew::glcore::glDisableVertexArrayAttribEXT
#define glDisableVertexArrayEXT glew::glcore::glDisableVertexArrayEXT
#define glDisableVertexAttribAPPLE glew::glcore::glDisableVertexAttribAPPLE
#define glDisableVertexAttribArray glew::glcore::glDisableVertexAttribArray
#define glDisableVertexAttribArrayARB glew::glcore::glDisableVertexAttribArrayARB
#define glDisablei glew::glcore::glDisablei
#define glDisableiEXT glew::glcore::glDisableiEXT
#define glDisableiNV glew::glcore::glDisableiNV
#define glDisableiOES glew::glcore::glDisableiOES
#define glDiscardFramebufferEXT glew::glcore::glDiscardFramebufferEXT
#define glDispatchCompute glew::glcore::glDispatchCompute
#define glDispatchComputeGroupSizeARB glew::glcore::glDispatchComputeGroupSizeARB
#define glDispatchComputeIndirect glew::glcore::glDispatchComputeIndirect
#define glDrawArrays glew::glcore::glDrawArrays
#define glDrawArraysEXT glew::glcore::glDrawArraysEXT
#define glDrawArraysIndirect glew::glcore::glDrawArraysIndirect
#define glDrawArraysInstanced glew::glcore::glDrawArraysInstanced
#define glDrawArraysInstancedANGLE glew::glcore::glDrawArraysInstancedANGLE
#define glDrawArraysInstancedARB glew::glcore::glDrawArraysInstancedARB
#define glDrawArraysInstancedBaseInstance glew::glcore::glDrawArraysInstancedBaseInstance
#define glDrawArraysInstancedBaseInstanceEXT glew::glcore::glDrawArraysInstancedBaseInstanceEXT
#define glDrawArraysInstancedEXT glew::glcore::glDrawArraysInstancedEXT
#define glDrawArraysInstancedNV glew::glcore::glDrawArraysInstancedNV
#define glDrawBuffer glew::glcore::glDrawBuffer
#define glDrawBuffers glew::glcore::glDrawBuffers
#define glDrawBuffersARB glew::glcore::glDrawBuffersARB
#define glDrawBuffersATI glew::glcore::glDrawBuffersATI
#define glDrawBuffersEXT glew::glcore::glDrawBuffersEXT
#define glDrawBuffersIndexedEXT glew::glcore::glDrawBuffersIndexedEXT
#define glDrawBuffersNV glew::glcore::glDrawBuffersNV
#define glDrawCommandsNV glew::glcore::glDrawCommandsNV
#define glDrawCommandsAddressNV glew::glcore::glDrawCommandsAddressNV
#define glDrawCommandsStatesNV glew::glcore::glDrawCommandsStatesNV
#define glDrawCommandsStatesAddressNV glew::glcore::glDrawCommandsStatesAddressNV
#define glDrawElementArrayAPPLE glew::glcore::glDrawElementArrayAPPLE
#define glDrawElementArrayATI glew::glcore::glDrawElementArrayATI
#define glDrawElements glew::glcore::glDrawElements
#define glDrawElementsBaseVertex glew::glcore::glDrawElementsBaseVertex
#define glDrawElementsBaseVertexEXT glew::glcore::glDrawElementsBaseVertexEXT
#define glDrawElementsBaseVertexOES glew::glcore::glDrawElementsBaseVertexOES
#define glDrawElementsIndirect glew::glcore::glDrawElementsIndirect
#define glDrawElementsInstanced glew::glcore::glDrawElementsInstanced
#define glDrawElementsInstancedANGLE glew::glcore::glDrawElementsInstancedANGLE
#define glDrawElementsInstancedARB glew::glcore::glDrawElementsInstancedARB
#define glDrawElementsInstancedBaseInstance glew::glcore::glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseInstanceEXT glew::glcore::glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseVertex glew::glcore::glDrawElementsInstancedBaseVertex
#define glDrawElementsInstancedBaseVertexEXT glew::glcore::glDrawElementsInstancedBaseVertexEXT
#define glDrawElementsInstancedBaseVertexOES glew::glcore::glDrawElementsInstancedBaseVertexOES
#define glDrawElementsInstancedBaseVertexBaseInstance glew::glcore::glDrawElementsInstancedBaseVertexBaseInstance
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT glew::glcore::glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glDrawElementsInstancedEXT glew::glcore::glDrawElementsInstancedEXT
#define glDrawElementsInstancedNV glew::glcore::glDrawElementsInstancedNV
#define glDrawMeshArraysSUN glew::glcore::glDrawMeshArraysSUN
#define glDrawPixels glew::glcore::glDrawPixels
#define glDrawRangeElementArrayAPPLE glew::glcore::glDrawRangeElementArrayAPPLE
#define glDrawRangeElementArrayATI glew::glcore::glDrawRangeElementArrayATI
#define glDrawRangeElements glew::glcore::glDrawRangeElements
#define glDrawRangeElementsBaseVertex glew::glcore::glDrawRangeElementsBaseVertex
#define glDrawRangeElementsBaseVertexEXT glew::glcore::glDrawRangeElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexOES glew::glcore::glDrawRangeElementsBaseVertexOES
#define glDrawRangeElementsEXT glew::glcore::glDrawRangeElementsEXT
#define glDrawTexfOES glew::glcore::glDrawTexfOES
#define glDrawTexfvOES glew::glcore::glDrawTexfvOES
#define glDrawTexiOES glew::glcore::glDrawTexiOES
#define glDrawTexivOES glew::glcore::glDrawTexivOES
#define glDrawTexsOES glew::glcore::glDrawTexsOES
#define glDrawTexsvOES glew::glcore::glDrawTexsvOES
#define glDrawTextureNV glew::glcore::glDrawTextureNV
#define glDrawTexxOES glew::glcore::glDrawTexxOES
#define glDrawTexxvOES glew::glcore::glDrawTexxvOES
#define glDrawTransformFeedback glew::glcore::glDrawTransformFeedback
#define glDrawTransformFeedbackInstanced glew::glcore::glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackNV glew::glcore::glDrawTransformFeedbackNV
#define glDrawTransformFeedbackStream glew::glcore::glDrawTransformFeedbackStream
#define glDrawTransformFeedbackStreamInstanced glew::glcore::glDrawTransformFeedbackStreamInstanced
#define glEGLImageTargetRenderbufferStorageOES glew::glcore::glEGLImageTargetRenderbufferStorageOES
#define glEGLImageTargetTexture2DOES glew::glcore::glEGLImageTargetTexture2DOES
#define glEdgeFlag glew::glcore::glEdgeFlag
#define glEdgeFlagFormatNV glew::glcore::glEdgeFlagFormatNV
#define glEdgeFlagPointer glew::glcore::glEdgeFlagPointer
#define glEdgeFlagPointerEXT glew::glcore::glEdgeFlagPointerEXT
#define glEdgeFlagPointerListIBM glew::glcore::glEdgeFlagPointerListIBM
#define glEdgeFlagv glew::glcore::glEdgeFlagv
#define glElementPointerAPPLE glew::glcore::glElementPointerAPPLE
#define glElementPointerATI glew::glcore::glElementPointerATI
#define glEnable glew::glcore::glEnable
#define glEnableClientState glew::glcore::glEnableClientState
#define glEnableClientStateIndexedEXT glew::glcore::glEnableClientStateIndexedEXT
#define glEnableClientStateiEXT glew::glcore::glEnableClientStateiEXT
#define glEnableDriverControlQCOM glew::glcore::glEnableDriverControlQCOM
#define glEnableIndexedEXT glew::glcore::glEnableIndexedEXT
#define glEnableVariantClientStateEXT glew::glcore::glEnableVariantClientStateEXT
#define glEnableVertexArrayAttrib glew::glcore::glEnableVertexArrayAttrib
#define glEnableVertexArrayAttribEXT glew::glcore::glEnableVertexArrayAttribEXT
#define glEnableVertexArrayEXT glew::glcore::glEnableVertexArrayEXT
#define glEnableVertexAttribAPPLE glew::glcore::glEnableVertexAttribAPPLE
#define glEnableVertexAttribArray glew::glcore::glEnableVertexAttribArray
#define glEnableVertexAttribArrayARB glew::glcore::glEnableVertexAttribArrayARB
#define glEnablei glew::glcore::glEnablei
#define glEnableiEXT glew::glcore::glEnableiEXT
#define glEnableiNV glew::glcore::glEnableiNV
#define glEnableiOES glew::glcore::glEnableiOES
#define glEnd glew::glcore::glEnd
#define glEndConditionalRender glew::glcore::glEndConditionalRender
#define glEndConditionalRenderNV glew::glcore::glEndConditionalRenderNV
#define glEndConditionalRenderNVX glew::glcore::glEndConditionalRenderNVX
#define glEndFragmentShaderATI glew::glcore::glEndFragmentShaderATI
#define glEndList glew::glcore::glEndList
#define glEndOcclusionQueryNV glew::glcore::glEndOcclusionQueryNV
#define glEndPerfMonitorAMD glew::glcore::glEndPerfMonitorAMD
#define glEndPerfQueryINTEL glew::glcore::glEndPerfQueryINTEL
#define glEndQuery glew::glcore::glEndQuery
#define glEndQueryARB glew::glcore::glEndQueryARB
#define glEndQueryEXT glew::glcore::glEndQueryEXT
#define glEndQueryIndexed glew::glcore::glEndQueryIndexed
#define glEndTilingQCOM glew::glcore::glEndTilingQCOM
#define glEndTransformFeedback glew::glcore::glEndTransformFeedback
#define glEndTransformFeedbackEXT glew::glcore::glEndTransformFeedbackEXT
#define glEndTransformFeedbackNV glew::glcore::glEndTransformFeedbackNV
#define glEndVertexShaderEXT glew::glcore::glEndVertexShaderEXT
#define glEndVideoCaptureNV glew::glcore::glEndVideoCaptureNV
#define glEvalCoord1d glew::glcore::glEvalCoord1d
#define glEvalCoord1dv glew::glcore::glEvalCoord1dv
#define glEvalCoord1f glew::glcore::glEvalCoord1f
#define glEvalCoord1fv glew::glcore::glEvalCoord1fv
#define glEvalCoord1xOES glew::glcore::glEvalCoord1xOES
#define glEvalCoord1xvOES glew::glcore::glEvalCoord1xvOES
#define glEvalCoord2d glew::glcore::glEvalCoord2d
#define glEvalCoord2dv glew::glcore::glEvalCoord2dv
#define glEvalCoord2f glew::glcore::glEvalCoord2f
#define glEvalCoord2fv glew::glcore::glEvalCoord2fv
#define glEvalCoord2xOES glew::glcore::glEvalCoord2xOES
#define glEvalCoord2xvOES glew::glcore::glEvalCoord2xvOES
#define glEvalMapsNV glew::glcore::glEvalMapsNV
#define glEvalMesh1 glew::glcore::glEvalMesh1
#define glEvalMesh2 glew::glcore::glEvalMesh2
#define glEvalPoint1 glew::glcore::glEvalPoint1
#define glEvalPoint2 glew::glcore::glEvalPoint2
#define glExecuteProgramNV glew::glcore::glExecuteProgramNV
#define glExtGetBufferPointervQCOM glew::glcore::glExtGetBufferPointervQCOM
#define glExtGetBuffersQCOM glew::glcore::glExtGetBuffersQCOM
#define glExtGetFramebuffersQCOM glew::glcore::glExtGetFramebuffersQCOM
#define glExtGetProgramBinarySourceQCOM glew::glcore::glExtGetProgramBinarySourceQCOM
#define glExtGetProgramsQCOM glew::glcore::glExtGetProgramsQCOM
#define glExtGetRenderbuffersQCOM glew::glcore::glExtGetRenderbuffersQCOM
#define glExtGetShadersQCOM glew::glcore::glExtGetShadersQCOM
#define glExtGetTexLevelParameterivQCOM glew::glcore::glExtGetTexLevelParameterivQCOM
#define glExtGetTexSubImageQCOM glew::glcore::glExtGetTexSubImageQCOM
#define glExtGetTexturesQCOM glew::glcore::glExtGetTexturesQCOM
#define glExtIsProgramBinaryQCOM glew::glcore::glExtIsProgramBinaryQCOM
#define glExtTexObjectStateOverrideiQCOM glew::glcore::glExtTexObjectStateOverrideiQCOM
#define glExtractComponentEXT glew::glcore::glExtractComponentEXT
#define glFeedbackBuffer glew::glcore::glFeedbackBuffer
#define glFeedbackBufferxOES glew::glcore::glFeedbackBufferxOES
#define glFenceSync glew::glcore::glFenceSync
#define glFenceSyncAPPLE glew::glcore::glFenceSyncAPPLE
#define glFinalCombinerInputNV glew::glcore::glFinalCombinerInputNV
#define glFinish glew::glcore::glFinish
#define glFinishAsyncSGIX glew::glcore::glFinishAsyncSGIX
#define glFinishFenceAPPLE glew::glcore::glFinishFenceAPPLE
#define glFinishFenceNV glew::glcore::glFinishFenceNV
#define glFinishObjectAPPLE glew::glcore::glFinishObjectAPPLE
#define glFinishTextureSUNX glew::glcore::glFinishTextureSUNX
#define glFlush glew::glcore::glFlush
#define glFlushMappedBufferRange glew::glcore::glFlushMappedBufferRange
#define glFlushMappedBufferRangeAPPLE glew::glcore::glFlushMappedBufferRangeAPPLE
#define glFlushMappedBufferRangeEXT glew::glcore::glFlushMappedBufferRangeEXT
#define glFlushMappedNamedBufferRange glew::glcore::glFlushMappedNamedBufferRange
#define glFlushMappedNamedBufferRangeEXT glew::glcore::glFlushMappedNamedBufferRangeEXT
#define glFlushPixelDataRangeNV glew::glcore::glFlushPixelDataRangeNV
#define glFlushRasterSGIX glew::glcore::glFlushRasterSGIX
#define glFlushStaticDataIBM glew::glcore::glFlushStaticDataIBM
#define glFlushVertexArrayRangeAPPLE glew::glcore::glFlushVertexArrayRangeAPPLE
#define glFlushVertexArrayRangeNV glew::glcore::glFlushVertexArrayRangeNV
#define glFogCoordFormatNV glew::glcore::glFogCoordFormatNV
#define glFogCoordPointer glew::glcore::glFogCoordPointer
#define glFogCoordPointerEXT glew::glcore::glFogCoordPointerEXT
#define glFogCoordPointerListIBM glew::glcore::glFogCoordPointerListIBM
#define glFogCoordd glew::glcore::glFogCoordd
#define glFogCoorddEXT glew::glcore::glFogCoorddEXT
#define glFogCoorddv glew::glcore::glFogCoorddv
#define glFogCoorddvEXT glew::glcore::glFogCoorddvEXT
#define glFogCoordf glew::glcore::glFogCoordf
#define glFogCoordfEXT glew::glcore::glFogCoordfEXT
#define glFogCoordfv glew::glcore::glFogCoordfv
#define glFogCoordfvEXT glew::glcore::glFogCoordfvEXT
#define glFogCoordhNV glew::glcore::glFogCoordhNV
#define glFogCoordhvNV glew::glcore::glFogCoordhvNV
#define glFogFuncSGIS glew::glcore::glFogFuncSGIS
#define glFogf glew::glcore::glFogf
#define glFogfv glew::glcore::glFogfv
#define glFogi glew::glcore::glFogi
#define glFogiv glew::glcore::glFogiv
#define glFogx glew::glcore::glFogx
#define glFogxOES glew::glcore::glFogxOES
#define glFogxv glew::glcore::glFogxv
#define glFogxvOES glew::glcore::glFogxvOES
#define glFragmentColorMaterialSGIX glew::glcore::glFragmentColorMaterialSGIX
#define glFragmentLightModelfSGIX glew::glcore::glFragmentLightModelfSGIX
#define glFragmentLightModelfvSGIX glew::glcore::glFragmentLightModelfvSGIX
#define glFragmentLightModeliSGIX glew::glcore::glFragmentLightModeliSGIX
#define glFragmentLightModelivSGIX glew::glcore::glFragmentLightModelivSGIX
#define glFragmentLightfSGIX glew::glcore::glFragmentLightfSGIX
#define glFragmentLightfvSGIX glew::glcore::glFragmentLightfvSGIX
#define glFragmentLightiSGIX glew::glcore::glFragmentLightiSGIX
#define glFragmentLightivSGIX glew::glcore::glFragmentLightivSGIX
#define glFragmentMaterialfSGIX glew::glcore::glFragmentMaterialfSGIX
#define glFragmentMaterialfvSGIX glew::glcore::glFragmentMaterialfvSGIX
#define glFragmentMaterialiSGIX glew::glcore::glFragmentMaterialiSGIX
#define glFragmentMaterialivSGIX glew::glcore::glFragmentMaterialivSGIX
#define glFrameTerminatorGREMEDY glew::glcore::glFrameTerminatorGREMEDY
#define glFrameZoomSGIX glew::glcore::glFrameZoomSGIX
#define glFramebufferDrawBufferEXT glew::glcore::glFramebufferDrawBufferEXT
#define glFramebufferDrawBuffersEXT glew::glcore::glFramebufferDrawBuffersEXT
#define glFramebufferParameteri glew::glcore::glFramebufferParameteri
#define glFramebufferReadBufferEXT glew::glcore::glFramebufferReadBufferEXT
#define glFramebufferRenderbuffer glew::glcore::glFramebufferRenderbuffer
#define glFramebufferRenderbufferEXT glew::glcore::glFramebufferRenderbufferEXT
#define glFramebufferRenderbufferOES glew::glcore::glFramebufferRenderbufferOES
#define glFramebufferTexture glew::glcore::glFramebufferTexture
#define glFramebufferTexture1D glew::glcore::glFramebufferTexture1D
#define glFramebufferTexture1DEXT glew::glcore::glFramebufferTexture1DEXT
#define glFramebufferTexture2D glew::glcore::glFramebufferTexture2D
#define glFramebufferTexture2DEXT glew::glcore::glFramebufferTexture2DEXT
#define glFramebufferTexture2DMultisampleEXT glew::glcore::glFramebufferTexture2DMultisampleEXT
#define glFramebufferTexture2DMultisampleIMG glew::glcore::glFramebufferTexture2DMultisampleIMG
#define glFramebufferTexture2DOES glew::glcore::glFramebufferTexture2DOES
#define glFramebufferTexture3D glew::glcore::glFramebufferTexture3D
#define glFramebufferTexture3DEXT glew::glcore::glFramebufferTexture3DEXT
#define glFramebufferTexture3DOES glew::glcore::glFramebufferTexture3DOES
#define glFramebufferTextureARB glew::glcore::glFramebufferTextureARB
#define glFramebufferTextureEXT glew::glcore::glFramebufferTextureEXT
#define glFramebufferTextureOES glew::glcore::glFramebufferTextureOES
#define glFramebufferTextureFaceARB glew::glcore::glFramebufferTextureFaceARB
#define glFramebufferTextureFaceEXT glew::glcore::glFramebufferTextureFaceEXT
#define glFramebufferTextureLayer glew::glcore::glFramebufferTextureLayer
#define glFramebufferTextureLayerARB glew::glcore::glFramebufferTextureLayerARB
#define glFramebufferTextureLayerEXT glew::glcore::glFramebufferTextureLayerEXT
#define glFramebufferTextureMultiviewOVR glew::glcore::glFramebufferTextureMultiviewOVR
#define glFreeObjectBufferATI glew::glcore::glFreeObjectBufferATI
#define glFrontFace glew::glcore::glFrontFace
#define glFrustum glew::glcore::glFrustum
#define glFrustumf glew::glcore::glFrustumf
#define glFrustumfOES glew::glcore::glFrustumfOES
#define glFrustumx glew::glcore::glFrustumx
#define glFrustumxOES glew::glcore::glFrustumxOES
#define glGenAsyncMarkersSGIX glew::glcore::glGenAsyncMarkersSGIX
#define glGenBuffers glew::glcore::glGenBuffers
#define glGenBuffersARB glew::glcore::glGenBuffersARB
#define glGenFencesAPPLE glew::glcore::glGenFencesAPPLE
#define glGenFencesNV glew::glcore::glGenFencesNV
#define glGenFragmentShadersATI glew::glcore::glGenFragmentShadersATI
#define glGenFramebuffers glew::glcore::glGenFramebuffers
#define glGenFramebuffersEXT glew::glcore::glGenFramebuffersEXT
#define glGenFramebuffersOES glew::glcore::glGenFramebuffersOES
#define glGenLists glew::glcore::glGenLists
#define glGenNamesAMD glew::glcore::glGenNamesAMD
#define glGenOcclusionQueriesNV glew::glcore::glGenOcclusionQueriesNV
#define glGenPathsNV glew::glcore::glGenPathsNV
#define glGenPerfMonitorsAMD glew::glcore::glGenPerfMonitorsAMD
#define glGenProgramPipelines glew::glcore::glGenProgramPipelines
#define glGenProgramPipelinesEXT glew::glcore::glGenProgramPipelinesEXT
#define glGenProgramsARB glew::glcore::glGenProgramsARB
#define glGenProgramsNV glew::glcore::glGenProgramsNV
#define glGenQueries glew::glcore::glGenQueries
#define glGenQueriesARB glew::glcore::glGenQueriesARB
#define glGenQueriesEXT glew::glcore::glGenQueriesEXT
#define glGenRenderbuffers glew::glcore::glGenRenderbuffers
#define glGenRenderbuffersEXT glew::glcore::glGenRenderbuffersEXT
#define glGenRenderbuffersOES glew::glcore::glGenRenderbuffersOES
#define glGenSamplers glew::glcore::glGenSamplers
#define glGenSymbolsEXT glew::glcore::glGenSymbolsEXT
#define glGenTextures glew::glcore::glGenTextures
#define glGenTexturesEXT glew::glcore::glGenTexturesEXT
#define glGenTransformFeedbacks glew::glcore::glGenTransformFeedbacks
#define glGenTransformFeedbacksNV glew::glcore::glGenTransformFeedbacksNV
#define glGenVertexArrays glew::glcore::glGenVertexArrays
#define glGenVertexArraysAPPLE glew::glcore::glGenVertexArraysAPPLE
#define glGenVertexArraysOES glew::glcore::glGenVertexArraysOES
#define glGenVertexShadersEXT glew::glcore::glGenVertexShadersEXT
#define glGenerateMipmap glew::glcore::glGenerateMipmap
#define glGenerateMipmapEXT glew::glcore::glGenerateMipmapEXT
#define glGenerateMipmapOES glew::glcore::glGenerateMipmapOES
#define glGenerateMultiTexMipmapEXT glew::glcore::glGenerateMultiTexMipmapEXT
#define glGenerateTextureMipmap glew::glcore::glGenerateTextureMipmap
#define glGenerateTextureMipmapEXT glew::glcore::glGenerateTextureMipmapEXT
#define glGetActiveAtomicCounterBufferiv glew::glcore::glGetActiveAtomicCounterBufferiv
#define glGetActiveAttrib glew::glcore::glGetActiveAttrib
#define glGetActiveAttribARB glew::glcore::glGetActiveAttribARB
#define glGetActiveSubroutineName glew::glcore::glGetActiveSubroutineName
#define glGetActiveSubroutineUniformName glew::glcore::glGetActiveSubroutineUniformName
#define glGetActiveSubroutineUniformiv glew::glcore::glGetActiveSubroutineUniformiv
#define glGetActiveUniform glew::glcore::glGetActiveUniform
#define glGetActiveUniformARB glew::glcore::glGetActiveUniformARB
#define glGetActiveUniformBlockName glew::glcore::glGetActiveUniformBlockName
#define glGetActiveUniformBlockiv glew::glcore::glGetActiveUniformBlockiv
#define glGetActiveUniformName glew::glcore::glGetActiveUniformName
#define glGetActiveUniformsiv glew::glcore::glGetActiveUniformsiv
#define glGetActiveVaryingNV glew::glcore::glGetActiveVaryingNV
#define glGetArrayObjectfvATI glew::glcore::glGetArrayObjectfvATI
#define glGetArrayObjectivATI glew::glcore::glGetArrayObjectivATI
#define glGetAttachedObjectsARB glew::glcore::glGetAttachedObjectsARB
#define glGetAttachedShaders glew::glcore::glGetAttachedShaders
#define glGetAttribLocation glew::glcore::glGetAttribLocation
#define glGetAttribLocationARB glew::glcore::glGetAttribLocationARB
#define glGetBooleanIndexedvEXT glew::glcore::glGetBooleanIndexedvEXT
#define glGetBooleani_v glew::glcore::glGetBooleani_v
#define glGetBooleanv glew::glcore::glGetBooleanv
#define glGetBufferParameteri64v glew::glcore::glGetBufferParameteri64v
#define glGetBufferParameteriv glew::glcore::glGetBufferParameteriv
#define glGetBufferParameterivARB glew::glcore::glGetBufferParameterivARB
#define glGetBufferParameterui64vNV glew::glcore::glGetBufferParameterui64vNV
#define glGetBufferPointerv glew::glcore::glGetBufferPointerv
#define glGetBufferPointervARB glew::glcore::glGetBufferPointervARB
#define glGetBufferPointervOES glew::glcore::glGetBufferPointervOES
#define glGetBufferSubData glew::glcore::glGetBufferSubData
#define glGetBufferSubDataARB glew::glcore::glGetBufferSubDataARB
#define glGetClipPlane glew::glcore::glGetClipPlane
#define glGetClipPlanef glew::glcore::glGetClipPlanef
#define glGetClipPlanefOES glew::glcore::glGetClipPlanefOES
#define glGetClipPlanex glew::glcore::glGetClipPlanex
#define glGetClipPlanexOES glew::glcore::glGetClipPlanexOES
#define glGetColorTable glew::glcore::glGetColorTable
#define glGetColorTableEXT glew::glcore::glGetColorTableEXT
#define glGetColorTableParameterfv glew::glcore::glGetColorTableParameterfv
#define glGetColorTableParameterfvEXT glew::glcore::glGetColorTableParameterfvEXT
#define glGetColorTableParameterfvSGI glew::glcore::glGetColorTableParameterfvSGI
#define glGetColorTableParameteriv glew::glcore::glGetColorTableParameteriv
#define glGetColorTableParameterivEXT glew::glcore::glGetColorTableParameterivEXT
#define glGetColorTableParameterivSGI glew::glcore::glGetColorTableParameterivSGI
#define glGetColorTableSGI glew::glcore::glGetColorTableSGI
#define glGetCombinerInputParameterfvNV glew::glcore::glGetCombinerInputParameterfvNV
#define glGetCombinerInputParameterivNV glew::glcore::glGetCombinerInputParameterivNV
#define glGetCombinerOutputParameterfvNV glew::glcore::glGetCombinerOutputParameterfvNV
#define glGetCombinerOutputParameterivNV glew::glcore::glGetCombinerOutputParameterivNV
#define glGetCombinerStageParameterfvNV glew::glcore::glGetCombinerStageParameterfvNV
#define glGetCommandHeaderNV glew::glcore::glGetCommandHeaderNV
#define glGetCompressedMultiTexImageEXT glew::glcore::glGetCompressedMultiTexImageEXT
#define glGetCompressedTexImage glew::glcore::glGetCompressedTexImage
#define glGetCompressedTexImageARB glew::glcore::glGetCompressedTexImageARB
#define glGetCompressedTextureImage glew::glcore::glGetCompressedTextureImage
#define glGetCompressedTextureImageEXT glew::glcore::glGetCompressedTextureImageEXT
#define glGetCompressedTextureSubImage glew::glcore::glGetCompressedTextureSubImage
#define glGetConvolutionFilter glew::glcore::glGetConvolutionFilter
#define glGetConvolutionFilterEXT glew::glcore::glGetConvolutionFilterEXT
#define glGetConvolutionParameterfv glew::glcore::glGetConvolutionParameterfv
#define glGetConvolutionParameterfvEXT glew::glcore::glGetConvolutionParameterfvEXT
#define glGetConvolutionParameteriv glew::glcore::glGetConvolutionParameteriv
#define glGetConvolutionParameterivEXT glew::glcore::glGetConvolutionParameterivEXT
#define glGetConvolutionParameterxvOES glew::glcore::glGetConvolutionParameterxvOES
#define glGetDebugMessageLog glew::glcore::glGetDebugMessageLog
#define glGetDebugMessageLogAMD glew::glcore::glGetDebugMessageLogAMD
#define glGetDebugMessageLogARB glew::glcore::glGetDebugMessageLogARB
#define glGetDebugMessageLogKHR glew::glcore::glGetDebugMessageLogKHR
#define glGetDetailTexFuncSGIS glew::glcore::glGetDetailTexFuncSGIS
#define glGetDoubleIndexedvEXT glew::glcore::glGetDoubleIndexedvEXT
#define glGetDoublei_v glew::glcore::glGetDoublei_v
#define glGetDoublei_vEXT glew::glcore::glGetDoublei_vEXT
#define glGetDoublev glew::glcore::glGetDoublev
#define glGetDriverControlStringQCOM glew::glcore::glGetDriverControlStringQCOM
#define glGetDriverControlsQCOM glew::glcore::glGetDriverControlsQCOM
#define glGetError glew::glcore::glGetError
#define glGetFenceivNV glew::glcore::glGetFenceivNV
#define glGetFinalCombinerInputParameterfvNV glew::glcore::glGetFinalCombinerInputParameterfvNV
#define glGetFinalCombinerInputParameterivNV glew::glcore::glGetFinalCombinerInputParameterivNV
#define glGetFirstPerfQueryIdINTEL glew::glcore::glGetFirstPerfQueryIdINTEL
#define glGetFixedv glew::glcore::glGetFixedv
#define glGetFixedvOES glew::glcore::glGetFixedvOES
#define glGetFloatIndexedvEXT glew::glcore::glGetFloatIndexedvEXT
#define glGetFloati_v glew::glcore::glGetFloati_v
#define glGetFloati_vNV glew::glcore::glGetFloati_vNV
#define glGetFloati_vEXT glew::glcore::glGetFloati_vEXT
#define glGetFloatv glew::glcore::glGetFloatv
#define glGetFogFuncSGIS glew::glcore::glGetFogFuncSGIS
#define glGetFragDataIndex glew::glcore::glGetFragDataIndex
#define glGetFragDataLocation glew::glcore::glGetFragDataLocation
#define glGetFragDataLocationEXT glew::glcore::glGetFragDataLocationEXT
#define glGetFragmentLightfvSGIX glew::glcore::glGetFragmentLightfvSGIX
#define glGetFragmentLightivSGIX glew::glcore::glGetFragmentLightivSGIX
#define glGetFragmentMaterialfvSGIX glew::glcore::glGetFragmentMaterialfvSGIX
#define glGetFragmentMaterialivSGIX glew::glcore::glGetFragmentMaterialivSGIX
#define glGetFramebufferAttachmentParameteriv glew::glcore::glGetFramebufferAttachmentParameteriv
#define glGetFramebufferAttachmentParameterivEXT glew::glcore::glGetFramebufferAttachmentParameterivEXT
#define glGetFramebufferAttachmentParameterivOES glew::glcore::glGetFramebufferAttachmentParameterivOES
#define glGetFramebufferParameteriv glew::glcore::glGetFramebufferParameteriv
#define glGetFramebufferParameterivEXT glew::glcore::glGetFramebufferParameterivEXT
#define glGetGraphicsResetStatus glew::glcore::glGetGraphicsResetStatus
#define glGetGraphicsResetStatusARB glew::glcore::glGetGraphicsResetStatusARB
#define glGetGraphicsResetStatusEXT glew::glcore::glGetGraphicsResetStatusEXT
#define glGetGraphicsResetStatusKHR glew::glcore::glGetGraphicsResetStatusKHR
#define glGetHandleARB glew::glcore::glGetHandleARB
#define glGetHistogram glew::glcore::glGetHistogram
#define glGetHistogramEXT glew::glcore::glGetHistogramEXT
#define glGetHistogramParameterfv glew::glcore::glGetHistogramParameterfv
#define glGetHistogramParameterfvEXT glew::glcore::glGetHistogramParameterfvEXT
#define glGetHistogramParameteriv glew::glcore::glGetHistogramParameteriv
#define glGetHistogramParameterivEXT glew::glcore::glGetHistogramParameterivEXT
#define glGetHistogramParameterxvOES glew::glcore::glGetHistogramParameterxvOES
#define glGetImageHandleARB glew::glcore::glGetImageHandleARB
#define glGetImageHandleNV glew::glcore::glGetImageHandleNV
#define glGetImageTransformParameterfvHP glew::glcore::glGetImageTransformParameterfvHP
#define glGetImageTransformParameterivHP glew::glcore::glGetImageTransformParameterivHP
#define glGetInfoLogARB glew::glcore::glGetInfoLogARB
#define glGetInstrumentsSGIX glew::glcore::glGetInstrumentsSGIX
#define glGetInteger64i_v glew::glcore::glGetInteger64i_v
#define glGetInteger64v glew::glcore::glGetInteger64v
#define glGetInteger64vAPPLE glew::glcore::glGetInteger64vAPPLE
#define glGetIntegerIndexedvEXT glew::glcore::glGetIntegerIndexedvEXT
#define glGetIntegeri_v glew::glcore::glGetIntegeri_v
#define glGetIntegeri_vEXT glew::glcore::glGetIntegeri_vEXT
#define glGetIntegerui64i_vNV glew::glcore::glGetIntegerui64i_vNV
#define glGetIntegerui64vNV glew::glcore::glGetIntegerui64vNV
#define glGetIntegerv glew::glcore::glGetIntegerv
#define glGetInternalformati64v glew::glcore::glGetInternalformati64v
#define glGetInternalformativ glew::glcore::glGetInternalformativ
#define glGetInternalformatSampleivNV glew::glcore::glGetInternalformatSampleivNV
#define glGetInvariantBooleanvEXT glew::glcore::glGetInvariantBooleanvEXT
#define glGetInvariantFloatvEXT glew::glcore::glGetInvariantFloatvEXT
#define glGetInvariantIntegervEXT glew::glcore::glGetInvariantIntegervEXT
#define glGetLightfv glew::glcore::glGetLightfv
#define glGetLightiv glew::glcore::glGetLightiv
#define glGetLightxOES glew::glcore::glGetLightxOES
#define glGetLightxv glew::glcore::glGetLightxv
#define glGetLightxvOES glew::glcore::glGetLightxvOES
#define glGetListParameterfvSGIX glew::glcore::glGetListParameterfvSGIX
#define glGetListParameterivSGIX glew::glcore::glGetListParameterivSGIX
#define glGetLocalConstantBooleanvEXT glew::glcore::glGetLocalConstantBooleanvEXT
#define glGetLocalConstantFloatvEXT glew::glcore::glGetLocalConstantFloatvEXT
#define glGetLocalConstantIntegervEXT glew::glcore::glGetLocalConstantIntegervEXT
#define glGetMapAttribParameterfvNV glew::glcore::glGetMapAttribParameterfvNV
#define glGetMapAttribParameterivNV glew::glcore::glGetMapAttribParameterivNV
#define glGetMapControlPointsNV glew::glcore::glGetMapControlPointsNV
#define glGetMapParameterfvNV glew::glcore::glGetMapParameterfvNV
#define glGetMapParameterivNV glew::glcore::glGetMapParameterivNV
#define glGetMapdv glew::glcore::glGetMapdv
#define glGetMapfv glew::glcore::glGetMapfv
#define glGetMapiv glew::glcore::glGetMapiv
#define glGetMapxvOES glew::glcore::glGetMapxvOES
#define glGetMaterialfv glew::glcore::glGetMaterialfv
#define glGetMaterialiv glew::glcore::glGetMaterialiv
#define glGetMaterialxOES glew::glcore::glGetMaterialxOES
#define glGetMaterialxv glew::glcore::glGetMaterialxv
#define glGetMaterialxvOES glew::glcore::glGetMaterialxvOES
#define glGetMinmax glew::glcore::glGetMinmax
#define glGetMinmaxEXT glew::glcore::glGetMinmaxEXT
#define glGetMinmaxParameterfv glew::glcore::glGetMinmaxParameterfv
#define glGetMinmaxParameterfvEXT glew::glcore::glGetMinmaxParameterfvEXT
#define glGetMinmaxParameteriv glew::glcore::glGetMinmaxParameteriv
#define glGetMinmaxParameterivEXT glew::glcore::glGetMinmaxParameterivEXT
#define glGetMultiTexEnvfvEXT glew::glcore::glGetMultiTexEnvfvEXT
#define glGetMultiTexEnvivEXT glew::glcore::glGetMultiTexEnvivEXT
#define glGetMultiTexGendvEXT glew::glcore::glGetMultiTexGendvEXT
#define glGetMultiTexGenfvEXT glew::glcore::glGetMultiTexGenfvEXT
#define glGetMultiTexGenivEXT glew::glcore::glGetMultiTexGenivEXT
#define glGetMultiTexImageEXT glew::glcore::glGetMultiTexImageEXT
#define glGetMultiTexLevelParameterfvEXT glew::glcore::glGetMultiTexLevelParameterfvEXT
#define glGetMultiTexLevelParameterivEXT glew::glcore::glGetMultiTexLevelParameterivEXT
#define glGetMultiTexParameterIivEXT glew::glcore::glGetMultiTexParameterIivEXT
#define glGetMultiTexParameterIuivEXT glew::glcore::glGetMultiTexParameterIuivEXT
#define glGetMultiTexParameterfvEXT glew::glcore::glGetMultiTexParameterfvEXT
#define glGetMultiTexParameterivEXT glew::glcore::glGetMultiTexParameterivEXT
#define glGetMultisamplefv glew::glcore::glGetMultisamplefv
#define glGetMultisamplefvNV glew::glcore::glGetMultisamplefvNV
#define glGetNamedBufferParameteri64v glew::glcore::glGetNamedBufferParameteri64v
#define glGetNamedBufferParameteriv glew::glcore::glGetNamedBufferParameteriv
#define glGetNamedBufferParameterivEXT glew::glcore::glGetNamedBufferParameterivEXT
#define glGetNamedBufferParameterui64vNV glew::glcore::glGetNamedBufferParameterui64vNV
#define glGetNamedBufferPointerv glew::glcore::glGetNamedBufferPointerv
#define glGetNamedBufferPointervEXT glew::glcore::glGetNamedBufferPointervEXT
#define glGetNamedBufferSubData glew::glcore::glGetNamedBufferSubData
#define glGetNamedBufferSubDataEXT glew::glcore::glGetNamedBufferSubDataEXT
#define glGetNamedFramebufferAttachmentParameteriv glew::glcore::glGetNamedFramebufferAttachmentParameteriv
#define glGetNamedFramebufferAttachmentParameterivEXT glew::glcore::glGetNamedFramebufferAttachmentParameterivEXT
#define glGetNamedFramebufferParameteriv glew::glcore::glGetNamedFramebufferParameteriv
#define glGetNamedFramebufferParameterivEXT glew::glcore::glGetNamedFramebufferParameterivEXT
#define glGetNamedProgramLocalParameterIivEXT glew::glcore::glGetNamedProgramLocalParameterIivEXT
#define glGetNamedProgramLocalParameterIuivEXT glew::glcore::glGetNamedProgramLocalParameterIuivEXT
#define glGetNamedProgramLocalParameterdvEXT glew::glcore::glGetNamedProgramLocalParameterdvEXT
#define glGetNamedProgramLocalParameterfvEXT glew::glcore::glGetNamedProgramLocalParameterfvEXT
#define glGetNamedProgramStringEXT glew::glcore::glGetNamedProgramStringEXT
#define glGetNamedProgramivEXT glew::glcore::glGetNamedProgramivEXT
#define glGetNamedRenderbufferParameteriv glew::glcore::glGetNamedRenderbufferParameteriv
#define glGetNamedRenderbufferParameterivEXT glew::glcore::glGetNamedRenderbufferParameterivEXT
#define glGetNamedStringARB glew::glcore::glGetNamedStringARB
#define glGetNamedStringivARB glew::glcore::glGetNamedStringivARB
#define glGetNextPerfQueryIdINTEL glew::glcore::glGetNextPerfQueryIdINTEL
#define glGetObjectBufferfvATI glew::glcore::glGetObjectBufferfvATI
#define glGetObjectBufferivATI glew::glcore::glGetObjectBufferivATI
#define glGetObjectLabel glew::glcore::glGetObjectLabel
#define glGetObjectLabelEXT glew::glcore::glGetObjectLabelEXT
#define glGetObjectLabelKHR glew::glcore::glGetObjectLabelKHR
#define glGetObjectParameterfvARB glew::glcore::glGetObjectParameterfvARB
#define glGetObjectParameterivAPPLE glew::glcore::glGetObjectParameterivAPPLE
#define glGetObjectParameterivARB glew::glcore::glGetObjectParameterivARB
#define glGetObjectPtrLabel glew::glcore::glGetObjectPtrLabel
#define glGetObjectPtrLabelKHR glew::glcore::glGetObjectPtrLabelKHR
#define glGetOcclusionQueryivNV glew::glcore::glGetOcclusionQueryivNV
#define glGetOcclusionQueryuivNV glew::glcore::glGetOcclusionQueryuivNV
#define glGetPathColorGenfvNV glew::glcore::glGetPathColorGenfvNV
#define glGetPathColorGenivNV glew::glcore::glGetPathColorGenivNV
#define glGetPathCommandsNV glew::glcore::glGetPathCommandsNV
#define glGetPathCoordsNV glew::glcore::glGetPathCoordsNV
#define glGetPathDashArrayNV glew::glcore::glGetPathDashArrayNV
#define glGetPathLengthNV glew::glcore::glGetPathLengthNV
#define glGetPathMetricRangeNV glew::glcore::glGetPathMetricRangeNV
#define glGetPathMetricsNV glew::glcore::glGetPathMetricsNV
#define glGetPathParameterfvNV glew::glcore::glGetPathParameterfvNV
#define glGetPathParameterivNV glew::glcore::glGetPathParameterivNV
#define glGetPathSpacingNV glew::glcore::glGetPathSpacingNV
#define glGetPathTexGenfvNV glew::glcore::glGetPathTexGenfvNV
#define glGetPathTexGenivNV glew::glcore::glGetPathTexGenivNV
#define glGetPerfCounterInfoINTEL glew::glcore::glGetPerfCounterInfoINTEL
#define glGetPerfMonitorCounterDataAMD glew::glcore::glGetPerfMonitorCounterDataAMD
#define glGetPerfMonitorCounterInfoAMD glew::glcore::glGetPerfMonitorCounterInfoAMD
#define glGetPerfMonitorCounterStringAMD glew::glcore::glGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCountersAMD glew::glcore::glGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD glew::glcore::glGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorGroupsAMD glew::glcore::glGetPerfMonitorGroupsAMD
#define glGetPerfQueryDataINTEL glew::glcore::glGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL glew::glcore::glGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL glew::glcore::glGetPerfQueryInfoINTEL
#define glGetPixelMapfv glew::glcore::glGetPixelMapfv
#define glGetPixelMapuiv glew::glcore::glGetPixelMapuiv
#define glGetPixelMapusv glew::glcore::glGetPixelMapusv
#define glGetPixelMapxv glew::glcore::glGetPixelMapxv
#define glGetPixelTexGenParameterfvSGIS glew::glcore::glGetPixelTexGenParameterfvSGIS
#define glGetPixelTexGenParameterivSGIS glew::glcore::glGetPixelTexGenParameterivSGIS
#define glGetPixelTransformParameterfvEXT glew::glcore::glGetPixelTransformParameterfvEXT
#define glGetPixelTransformParameterivEXT glew::glcore::glGetPixelTransformParameterivEXT
#define glGetPointerIndexedvEXT glew::glcore::glGetPointerIndexedvEXT
#define glGetPointeri_vEXT glew::glcore::glGetPointeri_vEXT
#define glGetPointerv glew::glcore::glGetPointerv
#define glGetPointervEXT glew::glcore::glGetPointervEXT
#define glGetPointervKHR glew::glcore::glGetPointervKHR
#define glGetPolygonStipple glew::glcore::glGetPolygonStipple
#define glGetProgramBinary glew::glcore::glGetProgramBinary
#define glGetProgramBinaryOES glew::glcore::glGetProgramBinaryOES
#define glGetProgramEnvParameterIivNV glew::glcore::glGetProgramEnvParameterIivNV
#define glGetProgramEnvParameterIuivNV glew::glcore::glGetProgramEnvParameterIuivNV
#define glGetProgramEnvParameterdvARB glew::glcore::glGetProgramEnvParameterdvARB
#define glGetProgramEnvParameterfvARB glew::glcore::glGetProgramEnvParameterfvARB
#define glGetProgramInfoLog glew::glcore::glGetProgramInfoLog
#define glGetProgramInterfaceiv glew::glcore::glGetProgramInterfaceiv
#define glGetProgramLocalParameterIivNV glew::glcore::glGetProgramLocalParameterIivNV
#define glGetProgramLocalParameterIuivNV glew::glcore::glGetProgramLocalParameterIuivNV
#define glGetProgramLocalParameterdvARB glew::glcore::glGetProgramLocalParameterdvARB
#define glGetProgramLocalParameterfvARB glew::glcore::glGetProgramLocalParameterfvARB
#define glGetProgramNamedParameterdvNV glew::glcore::glGetProgramNamedParameterdvNV
#define glGetProgramNamedParameterfvNV glew::glcore::glGetProgramNamedParameterfvNV
#define glGetProgramParameterdvNV glew::glcore::glGetProgramParameterdvNV
#define glGetProgramParameterfvNV glew::glcore::glGetProgramParameterfvNV
#define glGetProgramPipelineInfoLog glew::glcore::glGetProgramPipelineInfoLog
#define glGetProgramPipelineInfoLogEXT glew::glcore::glGetProgramPipelineInfoLogEXT
#define glGetProgramPipelineiv glew::glcore::glGetProgramPipelineiv
#define glGetProgramPipelineivEXT glew::glcore::glGetProgramPipelineivEXT
#define glGetProgramResourceIndex glew::glcore::glGetProgramResourceIndex
#define glGetProgramResourceLocation glew::glcore::glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex glew::glcore::glGetProgramResourceLocationIndex
#define glGetProgramResourceName glew::glcore::glGetProgramResourceName
#define glGetProgramResourcefvNV glew::glcore::glGetProgramResourcefvNV
#define glGetProgramResourceiv glew::glcore::glGetProgramResourceiv
#define glGetProgramStageiv glew::glcore::glGetProgramStageiv
#define glGetProgramStringARB glew::glcore::glGetProgramStringARB
#define glGetProgramStringNV glew::glcore::glGetProgramStringNV
#define glGetProgramSubroutineParameteruivNV glew::glcore::glGetProgramSubroutineParameteruivNV
#define glGetProgramiv glew::glcore::glGetProgramiv
#define glGetProgramivARB glew::glcore::glGetProgramivARB
#define glGetProgramivNV glew::glcore::glGetProgramivNV
#define glGetQueryBufferObjecti64v glew::glcore::glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv glew::glcore::glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v glew::glcore::glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv glew::glcore::glGetQueryBufferObjectuiv
#define glGetQueryIndexediv glew::glcore::glGetQueryIndexediv
#define glGetQueryObjecti64v glew::glcore::glGetQueryObjecti64v
#define glGetQueryObjecti64vEXT glew::glcore::glGetQueryObjecti64vEXT
#define glGetQueryObjectiv glew::glcore::glGetQueryObjectiv
#define glGetQueryObjectivARB glew::glcore::glGetQueryObjectivARB
#define glGetQueryObjectivEXT glew::glcore::glGetQueryObjectivEXT
#define glGetQueryObjectui64v glew::glcore::glGetQueryObjectui64v
#define glGetQueryObjectui64vEXT glew::glcore::glGetQueryObjectui64vEXT
#define glGetQueryObjectuiv glew::glcore::glGetQueryObjectuiv
#define glGetQueryObjectuivARB glew::glcore::glGetQueryObjectuivARB
#define glGetQueryObjectuivEXT glew::glcore::glGetQueryObjectuivEXT
#define glGetQueryiv glew::glcore::glGetQueryiv
#define glGetQueryivARB glew::glcore::glGetQueryivARB
#define glGetQueryivEXT glew::glcore::glGetQueryivEXT
#define glGetRenderbufferParameteriv glew::glcore::glGetRenderbufferParameteriv
#define glGetRenderbufferParameterivEXT glew::glcore::glGetRenderbufferParameterivEXT
#define glGetRenderbufferParameterivOES glew::glcore::glGetRenderbufferParameterivOES
#define glGetSamplerParameterIiv glew::glcore::glGetSamplerParameterIiv
#define glGetSamplerParameterIivEXT glew::glcore::glGetSamplerParameterIivEXT
#define glGetSamplerParameterIivOES glew::glcore::glGetSamplerParameterIivOES
#define glGetSamplerParameterIuiv glew::glcore::glGetSamplerParameterIuiv
#define glGetSamplerParameterIuivEXT glew::glcore::glGetSamplerParameterIuivEXT
#define glGetSamplerParameterIuivOES glew::glcore::glGetSamplerParameterIuivOES
#define glGetSamplerParameterfv glew::glcore::glGetSamplerParameterfv
#define glGetSamplerParameteriv glew::glcore::glGetSamplerParameteriv
#define glGetSeparableFilter glew::glcore::glGetSeparableFilter
#define glGetSeparableFilterEXT glew::glcore::glGetSeparableFilterEXT
#define glGetShaderInfoLog glew::glcore::glGetShaderInfoLog
#define glGetShaderPrecisionFormat glew::glcore::glGetShaderPrecisionFormat
#define glGetShaderSource glew::glcore::glGetShaderSource
#define glGetShaderSourceARB glew::glcore::glGetShaderSourceARB
#define glGetShaderiv glew::glcore::glGetShaderiv
#define glGetSharpenTexFuncSGIS glew::glcore::glGetSharpenTexFuncSGIS
#define glGetStageIndexNV glew::glcore::glGetStageIndexNV
#define glGetString glew::glcore::glGetString
#define glGetStringi glew::glcore::glGetStringi
#define glGetSubroutineIndex glew::glcore::glGetSubroutineIndex
#define glGetSubroutineUniformLocation glew::glcore::glGetSubroutineUniformLocation
#define glGetSynciv glew::glcore::glGetSynciv
#define glGetSyncivAPPLE glew::glcore::glGetSyncivAPPLE
#define glGetTexBumpParameterfvATI glew::glcore::glGetTexBumpParameterfvATI
#define glGetTexBumpParameterivATI glew::glcore::glGetTexBumpParameterivATI
#define glGetTexEnvfv glew::glcore::glGetTexEnvfv
#define glGetTexEnviv glew::glcore::glGetTexEnviv
#define glGetTexEnvxv glew::glcore::glGetTexEnvxv
#define glGetTexEnvxvOES glew::glcore::glGetTexEnvxvOES
#define glGetTexFilterFuncSGIS glew::glcore::glGetTexFilterFuncSGIS
#define glGetTexGendv glew::glcore::glGetTexGendv
#define glGetTexGenfv glew::glcore::glGetTexGenfv
#define glGetTexGenfvOES glew::glcore::glGetTexGenfvOES
#define glGetTexGeniv glew::glcore::glGetTexGeniv
#define glGetTexGenivOES glew::glcore::glGetTexGenivOES
#define glGetTexGenxvOES glew::glcore::glGetTexGenxvOES
#define glGetTexImage glew::glcore::glGetTexImage
#define glGetTexLevelParameterfv glew::glcore::glGetTexLevelParameterfv
#define glGetTexLevelParameteriv glew::glcore::glGetTexLevelParameteriv
#define glGetTexLevelParameterxvOES glew::glcore::glGetTexLevelParameterxvOES
#define glGetTexParameterIiv glew::glcore::glGetTexParameterIiv
#define glGetTexParameterIivEXT glew::glcore::glGetTexParameterIivEXT
#define glGetTexParameterIivOES glew::glcore::glGetTexParameterIivOES
#define glGetTexParameterIuiv glew::glcore::glGetTexParameterIuiv
#define glGetTexParameterIuivEXT glew::glcore::glGetTexParameterIuivEXT
#define glGetTexParameterIuivOES glew::glcore::glGetTexParameterIuivOES
#define glGetTexParameterPointervAPPLE glew::glcore::glGetTexParameterPointervAPPLE
#define glGetTexParameterfv glew::glcore::glGetTexParameterfv
#define glGetTexParameteriv glew::glcore::glGetTexParameteriv
#define glGetTexParameterxv glew::glcore::glGetTexParameterxv
#define glGetTexParameterxvOES glew::glcore::glGetTexParameterxvOES
#define glGetTextureHandleARB glew::glcore::glGetTextureHandleARB
#define glGetTextureHandleNV glew::glcore::glGetTextureHandleNV
#define glGetTextureImage glew::glcore::glGetTextureImage
#define glGetTextureImageEXT glew::glcore::glGetTextureImageEXT
#define glGetTextureLevelParameterfv glew::glcore::glGetTextureLevelParameterfv
#define glGetTextureLevelParameterfvEXT glew::glcore::glGetTextureLevelParameterfvEXT
#define glGetTextureLevelParameteriv glew::glcore::glGetTextureLevelParameteriv
#define glGetTextureLevelParameterivEXT glew::glcore::glGetTextureLevelParameterivEXT
#define glGetTextureParameterIiv glew::glcore::glGetTextureParameterIiv
#define glGetTextureParameterIivEXT glew::glcore::glGetTextureParameterIivEXT
#define glGetTextureParameterIuiv glew::glcore::glGetTextureParameterIuiv
#define glGetTextureParameterIuivEXT glew::glcore::glGetTextureParameterIuivEXT
#define glGetTextureParameterfv glew::glcore::glGetTextureParameterfv
#define glGetTextureParameterfvEXT glew::glcore::glGetTextureParameterfvEXT
#define glGetTextureParameteriv glew::glcore::glGetTextureParameteriv
#define glGetTextureParameterivEXT glew::glcore::glGetTextureParameterivEXT
#define glGetTextureSamplerHandleARB glew::glcore::glGetTextureSamplerHandleARB
#define glGetTextureSamplerHandleNV glew::glcore::glGetTextureSamplerHandleNV
#define glGetTextureSubImage glew::glcore::glGetTextureSubImage
#define glGetTrackMatrixivNV glew::glcore::glGetTrackMatrixivNV
#define glGetTransformFeedbackVarying glew::glcore::glGetTransformFeedbackVarying
#define glGetTransformFeedbackVaryingEXT glew::glcore::glGetTransformFeedbackVaryingEXT
#define glGetTransformFeedbackVaryingNV glew::glcore::glGetTransformFeedbackVaryingNV
#define glGetTransformFeedbacki64_v glew::glcore::glGetTransformFeedbacki64_v
#define glGetTransformFeedbacki_v glew::glcore::glGetTransformFeedbacki_v
#define glGetTransformFeedbackiv glew::glcore::glGetTransformFeedbackiv
#define glGetTranslatedShaderSourceANGLE glew::glcore::glGetTranslatedShaderSourceANGLE
#define glGetUniformBlockIndex glew::glcore::glGetUniformBlockIndex
#define glGetUniformBufferSizeEXT glew::glcore::glGetUniformBufferSizeEXT
#define glGetUniformIndices glew::glcore::glGetUniformIndices
#define glGetUniformLocation glew::glcore::glGetUniformLocation
#define glGetUniformLocationARB glew::glcore::glGetUniformLocationARB
#define glGetUniformOffsetEXT glew::glcore::glGetUniformOffsetEXT
#define glGetUniformSubroutineuiv glew::glcore::glGetUniformSubroutineuiv
#define glGetUniformdv glew::glcore::glGetUniformdv
#define glGetUniformfv glew::glcore::glGetUniformfv
#define glGetUniformfvARB glew::glcore::glGetUniformfvARB
#define glGetUniformi64vNV glew::glcore::glGetUniformi64vNV
#define glGetUniformiv glew::glcore::glGetUniformiv
#define glGetUniformivARB glew::glcore::glGetUniformivARB
#define glGetUniformui64vNV glew::glcore::glGetUniformui64vNV
#define glGetUniformuiv glew::glcore::glGetUniformuiv
#define glGetUniformuivEXT glew::glcore::glGetUniformuivEXT
#define glGetVariantArrayObjectfvATI glew::glcore::glGetVariantArrayObjectfvATI
#define glGetVariantArrayObjectivATI glew::glcore::glGetVariantArrayObjectivATI
#define glGetVariantBooleanvEXT glew::glcore::glGetVariantBooleanvEXT
#define glGetVariantFloatvEXT glew::glcore::glGetVariantFloatvEXT
#define glGetVariantIntegervEXT glew::glcore::glGetVariantIntegervEXT
#define glGetVariantPointervEXT glew::glcore::glGetVariantPointervEXT
#define glGetVaryingLocationNV glew::glcore::glGetVaryingLocationNV
#define glGetVertexArrayIndexed64iv glew::glcore::glGetVertexArrayIndexed64iv
#define glGetVertexArrayIndexediv glew::glcore::glGetVertexArrayIndexediv
#define glGetVertexArrayIntegeri_vEXT glew::glcore::glGetVertexArrayIntegeri_vEXT
#define glGetVertexArrayIntegervEXT glew::glcore::glGetVertexArrayIntegervEXT
#define glGetVertexArrayPointeri_vEXT glew::glcore::glGetVertexArrayPointeri_vEXT
#define glGetVertexArrayPointervEXT glew::glcore::glGetVertexArrayPointervEXT
#define glGetVertexArrayiv glew::glcore::glGetVertexArrayiv
#define glGetVertexAttribArrayObjectfvATI glew::glcore::glGetVertexAttribArrayObjectfvATI
#define glGetVertexAttribArrayObjectivATI glew::glcore::glGetVertexAttribArrayObjectivATI
#define glGetVertexAttribIiv glew::glcore::glGetVertexAttribIiv
#define glGetVertexAttribIivEXT glew::glcore::glGetVertexAttribIivEXT
#define glGetVertexAttribIuiv glew::glcore::glGetVertexAttribIuiv
#define glGetVertexAttribIuivEXT glew::glcore::glGetVertexAttribIuivEXT
#define glGetVertexAttribLdv glew::glcore::glGetVertexAttribLdv
#define glGetVertexAttribLdvEXT glew::glcore::glGetVertexAttribLdvEXT
#define glGetVertexAttribLi64vNV glew::glcore::glGetVertexAttribLi64vNV
#define glGetVertexAttribLui64vARB glew::glcore::glGetVertexAttribLui64vARB
#define glGetVertexAttribLui64vNV glew::glcore::glGetVertexAttribLui64vNV
#define glGetVertexAttribPointerv glew::glcore::glGetVertexAttribPointerv
#define glGetVertexAttribPointervARB glew::glcore::glGetVertexAttribPointervARB
#define glGetVertexAttribPointervNV glew::glcore::glGetVertexAttribPointervNV
#define glGetVertexAttribdv glew::glcore::glGetVertexAttribdv
#define glGetVertexAttribdvARB glew::glcore::glGetVertexAttribdvARB
#define glGetVertexAttribdvNV glew::glcore::glGetVertexAttribdvNV
#define glGetVertexAttribfv glew::glcore::glGetVertexAttribfv
#define glGetVertexAttribfvARB glew::glcore::glGetVertexAttribfvARB
#define glGetVertexAttribfvNV glew::glcore::glGetVertexAttribfvNV
#define glGetVertexAttribiv glew::glcore::glGetVertexAttribiv
#define glGetVertexAttribivARB glew::glcore::glGetVertexAttribivARB
#define glGetVertexAttribivNV glew::glcore::glGetVertexAttribivNV
#define glGetVideoCaptureStreamdvNV glew::glcore::glGetVideoCaptureStreamdvNV
#define glGetVideoCaptureStreamfvNV glew::glcore::glGetVideoCaptureStreamfvNV
#define glGetVideoCaptureStreamivNV glew::glcore::glGetVideoCaptureStreamivNV
#define glGetVideoCaptureivNV glew::glcore::glGetVideoCaptureivNV
#define glGetVideoi64vNV glew::glcore::glGetVideoi64vNV
#define glGetVideoivNV glew::glcore::glGetVideoivNV
#define glGetVideoui64vNV glew::glcore::glGetVideoui64vNV
#define glGetVideouivNV glew::glcore::glGetVideouivNV
#define glGetnColorTable glew::glcore::glGetnColorTable
#define glGetnColorTableARB glew::glcore::glGetnColorTableARB
#define glGetnCompressedTexImage glew::glcore::glGetnCompressedTexImage
#define glGetnCompressedTexImageARB glew::glcore::glGetnCompressedTexImageARB
#define glGetnConvolutionFilter glew::glcore::glGetnConvolutionFilter
#define glGetnConvolutionFilterARB glew::glcore::glGetnConvolutionFilterARB
#define glGetnHistogram glew::glcore::glGetnHistogram
#define glGetnHistogramARB glew::glcore::glGetnHistogramARB
#define glGetnMapdv glew::glcore::glGetnMapdv
#define glGetnMapdvARB glew::glcore::glGetnMapdvARB
#define glGetnMapfv glew::glcore::glGetnMapfv
#define glGetnMapfvARB glew::glcore::glGetnMapfvARB
#define glGetnMapiv glew::glcore::glGetnMapiv
#define glGetnMapivARB glew::glcore::glGetnMapivARB
#define glGetnMinmax glew::glcore::glGetnMinmax
#define glGetnMinmaxARB glew::glcore::glGetnMinmaxARB
#define glGetnPixelMapfv glew::glcore::glGetnPixelMapfv
#define glGetnPixelMapfvARB glew::glcore::glGetnPixelMapfvARB
#define glGetnPixelMapuiv glew::glcore::glGetnPixelMapuiv
#define glGetnPixelMapuivARB glew::glcore::glGetnPixelMapuivARB
#define glGetnPixelMapusv glew::glcore::glGetnPixelMapusv
#define glGetnPixelMapusvARB glew::glcore::glGetnPixelMapusvARB
#define glGetnPolygonStipple glew::glcore::glGetnPolygonStipple
#define glGetnPolygonStippleARB glew::glcore::glGetnPolygonStippleARB
#define glGetnSeparableFilter glew::glcore::glGetnSeparableFilter
#define glGetnSeparableFilterARB glew::glcore::glGetnSeparableFilterARB
#define glGetnTexImage glew::glcore::glGetnTexImage
#define glGetnTexImageARB glew::glcore::glGetnTexImageARB
#define glGetnUniformdv glew::glcore::glGetnUniformdv
#define glGetnUniformdvARB glew::glcore::glGetnUniformdvARB
#define glGetnUniformfv glew::glcore::glGetnUniformfv
#define glGetnUniformfvARB glew::glcore::glGetnUniformfvARB
#define glGetnUniformfvEXT glew::glcore::glGetnUniformfvEXT
#define glGetnUniformfvKHR glew::glcore::glGetnUniformfvKHR
#define glGetnUniformiv glew::glcore::glGetnUniformiv
#define glGetnUniformivARB glew::glcore::glGetnUniformivARB
#define glGetnUniformivEXT glew::glcore::glGetnUniformivEXT
#define glGetnUniformivKHR glew::glcore::glGetnUniformivKHR
#define glGetnUniformuiv glew::glcore::glGetnUniformuiv
#define glGetnUniformuivARB glew::glcore::glGetnUniformuivARB
#define glGetnUniformuivKHR glew::glcore::glGetnUniformuivKHR
#define glGlobalAlphaFactorbSUN glew::glcore::glGlobalAlphaFactorbSUN
#define glGlobalAlphaFactordSUN glew::glcore::glGlobalAlphaFactordSUN
#define glGlobalAlphaFactorfSUN glew::glcore::glGlobalAlphaFactorfSUN
#define glGlobalAlphaFactoriSUN glew::glcore::glGlobalAlphaFactoriSUN
#define glGlobalAlphaFactorsSUN glew::glcore::glGlobalAlphaFactorsSUN
#define glGlobalAlphaFactorubSUN glew::glcore::glGlobalAlphaFactorubSUN
#define glGlobalAlphaFactoruiSUN glew::glcore::glGlobalAlphaFactoruiSUN
#define glGlobalAlphaFactorusSUN glew::glcore::glGlobalAlphaFactorusSUN
#define glHint glew::glcore::glHint
#define glHintPGI glew::glcore::glHintPGI
#define glHistogram glew::glcore::glHistogram
#define glHistogramEXT glew::glcore::glHistogramEXT
#define glIglooInterfaceSGIX glew::glcore::glIglooInterfaceSGIX
#define glImageTransformParameterfHP glew::glcore::glImageTransformParameterfHP
#define glImageTransformParameterfvHP glew::glcore::glImageTransformParameterfvHP
#define glImageTransformParameteriHP glew::glcore::glImageTransformParameteriHP
#define glImageTransformParameterivHP glew::glcore::glImageTransformParameterivHP
#define glImportSyncEXT glew::glcore::glImportSyncEXT
#define glIndexFormatNV glew::glcore::glIndexFormatNV
#define glIndexFuncEXT glew::glcore::glIndexFuncEXT
#define glIndexMask glew::glcore::glIndexMask
#define glIndexMaterialEXT glew::glcore::glIndexMaterialEXT
#define glIndexPointer glew::glcore::glIndexPointer
#define glIndexPointerEXT glew::glcore::glIndexPointerEXT
#define glIndexPointerListIBM glew::glcore::glIndexPointerListIBM
#define glIndexd glew::glcore::glIndexd
#define glIndexdv glew::glcore::glIndexdv
#define glIndexf glew::glcore::glIndexf
#define glIndexfv glew::glcore::glIndexfv
#define glIndexi glew::glcore::glIndexi
#define glIndexiv glew::glcore::glIndexiv
#define glIndexs glew::glcore::glIndexs
#define glIndexsv glew::glcore::glIndexsv
#define glIndexub glew::glcore::glIndexub
#define glIndexubv glew::glcore::glIndexubv
#define glIndexxOES glew::glcore::glIndexxOES
#define glIndexxvOES glew::glcore::glIndexxvOES
#define glInitNames glew::glcore::glInitNames
#define glInsertComponentEXT glew::glcore::glInsertComponentEXT
#define glInsertEventMarkerEXT glew::glcore::glInsertEventMarkerEXT
#define glInstrumentsBufferSGIX glew::glcore::glInstrumentsBufferSGIX
#define glInterleavedArrays glew::glcore::glInterleavedArrays
#define glInterpolatePathsNV glew::glcore::glInterpolatePathsNV
#define glInvalidateBufferData glew::glcore::glInvalidateBufferData
#define glInvalidateBufferSubData glew::glcore::glInvalidateBufferSubData
#define glInvalidateFramebuffer glew::glcore::glInvalidateFramebuffer
#define glInvalidateNamedFramebufferData glew::glcore::glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData glew::glcore::glInvalidateNamedFramebufferSubData
#define glInvalidateSubFramebuffer glew::glcore::glInvalidateSubFramebuffer
#define glInvalidateTexImage glew::glcore::glInvalidateTexImage
#define glInvalidateTexSubImage glew::glcore::glInvalidateTexSubImage
#define glIsAsyncMarkerSGIX glew::glcore::glIsAsyncMarkerSGIX
#define glIsBuffer glew::glcore::glIsBuffer
#define glIsBufferARB glew::glcore::glIsBufferARB
#define glIsBufferResidentNV glew::glcore::glIsBufferResidentNV
#define glIsCommandListNV glew::glcore::glIsCommandListNV
#define glIsEnabled glew::glcore::glIsEnabled
#define glIsEnabledIndexedEXT glew::glcore::glIsEnabledIndexedEXT
#define glIsEnabledi glew::glcore::glIsEnabledi
#define glIsEnablediEXT glew::glcore::glIsEnablediEXT
#define glIsEnablediOES glew::glcore::glIsEnablediOES
#define glIsEnablediNV glew::glcore::glIsEnablediNV
#define glIsFenceAPPLE glew::glcore::glIsFenceAPPLE
#define glIsFenceNV glew::glcore::glIsFenceNV
#define glIsFramebuffer glew::glcore::glIsFramebuffer
#define glIsFramebufferEXT glew::glcore::glIsFramebufferEXT
#define glIsFramebufferOES glew::glcore::glIsFramebufferOES
#define glIsImageHandleResidentARB glew::glcore::glIsImageHandleResidentARB
#define glIsImageHandleResidentNV glew::glcore::glIsImageHandleResidentNV
#define glIsList glew::glcore::glIsList
#define glIsNameAMD glew::glcore::glIsNameAMD
#define glIsNamedBufferResidentNV glew::glcore::glIsNamedBufferResidentNV
#define glIsNamedStringARB glew::glcore::glIsNamedStringARB
#define glIsObjectBufferATI glew::glcore::glIsObjectBufferATI
#define glIsOcclusionQueryNV glew::glcore::glIsOcclusionQueryNV
#define glIsPathNV glew::glcore::glIsPathNV
#define glIsPointInFillPathNV glew::glcore::glIsPointInFillPathNV
#define glIsPointInStrokePathNV glew::glcore::glIsPointInStrokePathNV
#define glIsProgram glew::glcore::glIsProgram
#define glIsProgramARB glew::glcore::glIsProgramARB
#define glIsProgramNV glew::glcore::glIsProgramNV
#define glIsProgramPipeline glew::glcore::glIsProgramPipeline
#define glIsProgramPipelineEXT glew::glcore::glIsProgramPipelineEXT
#define glIsQuery glew::glcore::glIsQuery
#define glIsQueryARB glew::glcore::glIsQueryARB
#define glIsQueryEXT glew::glcore::glIsQueryEXT
#define glIsRenderbuffer glew::glcore::glIsRenderbuffer
#define glIsRenderbufferEXT glew::glcore::glIsRenderbufferEXT
#define glIsRenderbufferOES glew::glcore::glIsRenderbufferOES
#define glIsSampler glew::glcore::glIsSampler
#define glIsShader glew::glcore::glIsShader
#define glIsStateNV glew::glcore::glIsStateNV
#define glIsSync glew::glcore::glIsSync
#define glIsSyncAPPLE glew::glcore::glIsSyncAPPLE
#define glIsTexture glew::glcore::glIsTexture
#define glIsTextureEXT glew::glcore::glIsTextureEXT
#define glIsTextureHandleResidentARB glew::glcore::glIsTextureHandleResidentARB
#define glIsTextureHandleResidentNV glew::glcore::glIsTextureHandleResidentNV
#define glIsTransformFeedback glew::glcore::glIsTransformFeedback
#define glIsTransformFeedbackNV glew::glcore::glIsTransformFeedbackNV
#define glIsVariantEnabledEXT glew::glcore::glIsVariantEnabledEXT
#define glIsVertexArray glew::glcore::glIsVertexArray
#define glIsVertexArrayAPPLE glew::glcore::glIsVertexArrayAPPLE
#define glIsVertexArrayOES glew::glcore::glIsVertexArrayOES
#define glIsVertexAttribEnabledAPPLE glew::glcore::glIsVertexAttribEnabledAPPLE
#define glLabelObjectEXT glew::glcore::glLabelObjectEXT
#define glLightEnviSGIX glew::glcore::glLightEnviSGIX
#define glLightModelf glew::glcore::glLightModelf
#define glLightModelfv glew::glcore::glLightModelfv
#define glLightModeli glew::glcore::glLightModeli
#define glLightModeliv glew::glcore::glLightModeliv
#define glLightModelx glew::glcore::glLightModelx
#define glLightModelxOES glew::glcore::glLightModelxOES
#define glLightModelxv glew::glcore::glLightModelxv
#define glLightModelxvOES glew::glcore::glLightModelxvOES
#define glLightf glew::glcore::glLightf
#define glLightfv glew::glcore::glLightfv
#define glLighti glew::glcore::glLighti
#define glLightiv glew::glcore::glLightiv
#define glLightx glew::glcore::glLightx
#define glLightxOES glew::glcore::glLightxOES
#define glLightxv glew::glcore::glLightxv
#define glLightxvOES glew::glcore::glLightxvOES
#define glLineStipple glew::glcore::glLineStipple
#define glLineWidth glew::glcore::glLineWidth
#define glLineWidthx glew::glcore::glLineWidthx
#define glLineWidthxOES glew::glcore::glLineWidthxOES
#define glLinkProgram glew::glcore::glLinkProgram
#define glLinkProgramARB glew::glcore::glLinkProgramARB
#define glListBase glew::glcore::glListBase
#define glListDrawCommandsStatesClientNV glew::glcore::glListDrawCommandsStatesClientNV
#define glListParameterfSGIX glew::glcore::glListParameterfSGIX
#define glListParameterfvSGIX glew::glcore::glListParameterfvSGIX
#define glListParameteriSGIX glew::glcore::glListParameteriSGIX
#define glListParameterivSGIX glew::glcore::glListParameterivSGIX
#define glLoadIdentity glew::glcore::glLoadIdentity
#define glLoadIdentityDeformationMapSGIX glew::glcore::glLoadIdentityDeformationMapSGIX
#define glLoadMatrixd glew::glcore::glLoadMatrixd
#define glLoadMatrixf glew::glcore::glLoadMatrixf
#define glLoadMatrixx glew::glcore::glLoadMatrixx
#define glLoadMatrixxOES glew::glcore::glLoadMatrixxOES
#define glLoadName glew::glcore::glLoadName
#define glLoadPaletteFromModelViewMatrixOES glew::glcore::glLoadPaletteFromModelViewMatrixOES
#define glLoadProgramNV glew::glcore::glLoadProgramNV
#define glLoadTransposeMatrixd glew::glcore::glLoadTransposeMatrixd
#define glLoadTransposeMatrixdARB glew::glcore::glLoadTransposeMatrixdARB
#define glLoadTransposeMatrixf glew::glcore::glLoadTransposeMatrixf
#define glLoadTransposeMatrixfARB glew::glcore::glLoadTransposeMatrixfARB
#define glLoadTransposeMatrixxOES glew::glcore::glLoadTransposeMatrixxOES
#define glLockArraysEXT glew::glcore::glLockArraysEXT
#define glLogicOp glew::glcore::glLogicOp
#define glMakeBufferNonResidentNV glew::glcore::glMakeBufferNonResidentNV
#define glMakeBufferResidentNV glew::glcore::glMakeBufferResidentNV
#define glMakeImageHandleNonResidentARB glew::glcore::glMakeImageHandleNonResidentARB
#define glMakeImageHandleNonResidentNV glew::glcore::glMakeImageHandleNonResidentNV
#define glMakeImageHandleResidentARB glew::glcore::glMakeImageHandleResidentARB
#define glMakeImageHandleResidentNV glew::glcore::glMakeImageHandleResidentNV
#define glMakeNamedBufferNonResidentNV glew::glcore::glMakeNamedBufferNonResidentNV
#define glMakeNamedBufferResidentNV glew::glcore::glMakeNamedBufferResidentNV
#define glMakeTextureHandleNonResidentARB glew::glcore::glMakeTextureHandleNonResidentARB
#define glMakeTextureHandleNonResidentNV glew::glcore::glMakeTextureHandleNonResidentNV
#define glMakeTextureHandleResidentARB glew::glcore::glMakeTextureHandleResidentARB
#define glMakeTextureHandleResidentNV glew::glcore::glMakeTextureHandleResidentNV
#define glMap1d glew::glcore::glMap1d
#define glMap1f glew::glcore::glMap1f
#define glMap1xOES glew::glcore::glMap1xOES
#define glMap2d glew::glcore::glMap2d
#define glMap2f glew::glcore::glMap2f
#define glMap2xOES glew::glcore::glMap2xOES
#define glMapBuffer glew::glcore::glMapBuffer
#define glMapBufferARB glew::glcore::glMapBufferARB
#define glMapBufferOES glew::glcore::glMapBufferOES
#define glMapBufferRange glew::glcore::glMapBufferRange
#define glMapBufferRangeEXT glew::glcore::glMapBufferRangeEXT
#define glMapControlPointsNV glew::glcore::glMapControlPointsNV
#define glMapGrid1d glew::glcore::glMapGrid1d
#define glMapGrid1f glew::glcore::glMapGrid1f
#define glMapGrid1xOES glew::glcore::glMapGrid1xOES
#define glMapGrid2d glew::glcore::glMapGrid2d
#define glMapGrid2f glew::glcore::glMapGrid2f
#define glMapGrid2xOES glew::glcore::glMapGrid2xOES
#define glMapNamedBuffer glew::glcore::glMapNamedBuffer
#define glMapNamedBufferEXT glew::glcore::glMapNamedBufferEXT
#define glMapNamedBufferRange glew::glcore::glMapNamedBufferRange
#define glMapNamedBufferRangeEXT glew::glcore::glMapNamedBufferRangeEXT
#define glMapObjectBufferATI glew::glcore::glMapObjectBufferATI
#define glMapParameterfvNV glew::glcore::glMapParameterfvNV
#define glMapParameterivNV glew::glcore::glMapParameterivNV
#define glMapTexture2DINTEL glew::glcore::glMapTexture2DINTEL
#define glMapVertexAttrib1dAPPLE glew::glcore::glMapVertexAttrib1dAPPLE
#define glMapVertexAttrib1fAPPLE glew::glcore::glMapVertexAttrib1fAPPLE
#define glMapVertexAttrib2dAPPLE glew::glcore::glMapVertexAttrib2dAPPLE
#define glMapVertexAttrib2fAPPLE glew::glcore::glMapVertexAttrib2fAPPLE
#define glMaterialf glew::glcore::glMaterialf
#define glMaterialfv glew::glcore::glMaterialfv
#define glMateriali glew::glcore::glMateriali
#define glMaterialiv glew::glcore::glMaterialiv
#define glMaterialx glew::glcore::glMaterialx
#define glMaterialxOES glew::glcore::glMaterialxOES
#define glMaterialxv glew::glcore::glMaterialxv
#define glMaterialxvOES glew::glcore::glMaterialxvOES
#define glMatrixFrustumEXT glew::glcore::glMatrixFrustumEXT
#define glMatrixIndexPointerARB glew::glcore::glMatrixIndexPointerARB
#define glMatrixIndexPointerOES glew::glcore::glMatrixIndexPointerOES
#define glMatrixIndexubvARB glew::glcore::glMatrixIndexubvARB
#define glMatrixIndexuivARB glew::glcore::glMatrixIndexuivARB
#define glMatrixIndexusvARB glew::glcore::glMatrixIndexusvARB
#define glMatrixLoad3x2fNV glew::glcore::glMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV glew::glcore::glMatrixLoad3x3fNV
#define glMatrixLoadIdentityEXT glew::glcore::glMatrixLoadIdentityEXT
#define glMatrixLoadTranspose3x3fNV glew::glcore::glMatrixLoadTranspose3x3fNV
#define glMatrixLoadTransposedEXT glew::glcore::glMatrixLoadTransposedEXT
#define glMatrixLoadTransposefEXT glew::glcore::glMatrixLoadTransposefEXT
#define glMatrixLoaddEXT glew::glcore::glMatrixLoaddEXT
#define glMatrixLoadfEXT glew::glcore::glMatrixLoadfEXT
#define glMatrixMode glew::glcore::glMatrixMode
#define glMatrixMult3x2fNV glew::glcore::glMatrixMult3x2fNV
#define glMatrixMult3x3fNV glew::glcore::glMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV glew::glcore::glMatrixMultTranspose3x3fNV
#define glMatrixMultTransposedEXT glew::glcore::glMatrixMultTransposedEXT
#define glMatrixMultTransposefEXT glew::glcore::glMatrixMultTransposefEXT
#define glMatrixMultdEXT glew::glcore::glMatrixMultdEXT
#define glMatrixMultfEXT glew::glcore::glMatrixMultfEXT
#define glMatrixOrthoEXT glew::glcore::glMatrixOrthoEXT
#define glMatrixPopEXT glew::glcore::glMatrixPopEXT
#define glMatrixPushEXT glew::glcore::glMatrixPushEXT
#define glMatrixRotatedEXT glew::glcore::glMatrixRotatedEXT
#define glMatrixRotatefEXT glew::glcore::glMatrixRotatefEXT
#define glMatrixScaledEXT glew::glcore::glMatrixScaledEXT
#define glMatrixScalefEXT glew::glcore::glMatrixScalefEXT
#define glMatrixTranslatedEXT glew::glcore::glMatrixTranslatedEXT
#define glMatrixTranslatefEXT glew::glcore::glMatrixTranslatefEXT
#define glMemoryBarrier glew::glcore::glMemoryBarrier
#define glMemoryBarrierByRegion glew::glcore::glMemoryBarrierByRegion
#define glMemoryBarrierEXT glew::glcore::glMemoryBarrierEXT
#define glMinSampleShading glew::glcore::glMinSampleShading
#define glMinSampleShadingARB glew::glcore::glMinSampleShadingARB
#define glMinSampleShadingOES glew::glcore::glMinSampleShadingOES
#define glMinmax glew::glcore::glMinmax
#define glMinmaxEXT glew::glcore::glMinmaxEXT
#define glMultMatrixd glew::glcore::glMultMatrixd
#define glMultMatrixf glew::glcore::glMultMatrixf
#define glMultMatrixx glew::glcore::glMultMatrixx
#define glMultMatrixxOES glew::glcore::glMultMatrixxOES
#define glMultTransposeMatrixd glew::glcore::glMultTransposeMatrixd
#define glMultTransposeMatrixdARB glew::glcore::glMultTransposeMatrixdARB
#define glMultTransposeMatrixf glew::glcore::glMultTransposeMatrixf
#define glMultTransposeMatrixfARB glew::glcore::glMultTransposeMatrixfARB
#define glMultTransposeMatrixxOES glew::glcore::glMultTransposeMatrixxOES
#define glMultiDrawArrays glew::glcore::glMultiDrawArrays
#define glMultiDrawArraysEXT glew::glcore::glMultiDrawArraysEXT
#define glMultiDrawArraysIndirect glew::glcore::glMultiDrawArraysIndirect
#define glMultiDrawArraysIndirectAMD glew::glcore::glMultiDrawArraysIndirectAMD
#define glMultiDrawArraysIndirectEXT glew::glcore::glMultiDrawArraysIndirectEXT
#define glMultiDrawArraysIndirectBindlessCountNV glew::glcore::glMultiDrawArraysIndirectBindlessCountNV
#define glMultiDrawArraysIndirectBindlessNV glew::glcore::glMultiDrawArraysIndirectBindlessNV
#define glMultiDrawArraysIndirectCountARB glew::glcore::glMultiDrawArraysIndirectCountARB
#define glMultiDrawElementArrayAPPLE glew::glcore::glMultiDrawElementArrayAPPLE
#define glMultiDrawElements glew::glcore::glMultiDrawElements
#define glMultiDrawElementsBaseVertex glew::glcore::glMultiDrawElementsBaseVertex
#define glMultiDrawElementsBaseVertexEXT glew::glcore::glMultiDrawElementsBaseVertexEXT
#define glMultiDrawElementsBaseVertexOES glew::glcore::glMultiDrawElementsBaseVertexOES
#define glMultiDrawElementsEXT glew::glcore::glMultiDrawElementsEXT
#define glMultiDrawElementsIndirect glew::glcore::glMultiDrawElementsIndirect
#define glMultiDrawElementsIndirectEXT glew::glcore::glMultiDrawElementsIndirectEXT
#define glMultiDrawElementsIndirectAMD glew::glcore::glMultiDrawElementsIndirectAMD
#define glMultiDrawElementsIndirectBindlessCountNV glew::glcore::glMultiDrawElementsIndirectBindlessCountNV
#define glMultiDrawElementsIndirectBindlessNV glew::glcore::glMultiDrawElementsIndirectBindlessNV
#define glMultiDrawElementsIndirectCountARB glew::glcore::glMultiDrawElementsIndirectCountARB
#define glMultiDrawRangeElementArrayAPPLE glew::glcore::glMultiDrawRangeElementArrayAPPLE
#define glMultiModeDrawArraysIBM glew::glcore::glMultiModeDrawArraysIBM
#define glMultiModeDrawElementsIBM glew::glcore::glMultiModeDrawElementsIBM
#define glMultiTexBufferEXT glew::glcore::glMultiTexBufferEXT
#define glMultiTexCoord1bOES glew::glcore::glMultiTexCoord1bOES
#define glMultiTexCoord1bvOES glew::glcore::glMultiTexCoord1bvOES
#define glMultiTexCoord1d glew::glcore::glMultiTexCoord1d
#define glMultiTexCoord1dARB glew::glcore::glMultiTexCoord1dARB
#define glMultiTexCoord1dv glew::glcore::glMultiTexCoord1dv
#define glMultiTexCoord1dvARB glew::glcore::glMultiTexCoord1dvARB
#define glMultiTexCoord1f glew::glcore::glMultiTexCoord1f
#define glMultiTexCoord1fARB glew::glcore::glMultiTexCoord1fARB
#define glMultiTexCoord1fv glew::glcore::glMultiTexCoord1fv
#define glMultiTexCoord1fvARB glew::glcore::glMultiTexCoord1fvARB
#define glMultiTexCoord1hNV glew::glcore::glMultiTexCoord1hNV
#define glMultiTexCoord1hvNV glew::glcore::glMultiTexCoord1hvNV
#define glMultiTexCoord1i glew::glcore::glMultiTexCoord1i
#define glMultiTexCoord1iARB glew::glcore::glMultiTexCoord1iARB
#define glMultiTexCoord1iv glew::glcore::glMultiTexCoord1iv
#define glMultiTexCoord1ivARB glew::glcore::glMultiTexCoord1ivARB
#define glMultiTexCoord1s glew::glcore::glMultiTexCoord1s
#define glMultiTexCoord1sARB glew::glcore::glMultiTexCoord1sARB
#define glMultiTexCoord1sv glew::glcore::glMultiTexCoord1sv
#define glMultiTexCoord1svARB glew::glcore::glMultiTexCoord1svARB
#define glMultiTexCoord1xOES glew::glcore::glMultiTexCoord1xOES
#define glMultiTexCoord1xvOES glew::glcore::glMultiTexCoord1xvOES
#define glMultiTexCoord2bOES glew::glcore::glMultiTexCoord2bOES
#define glMultiTexCoord2bvOES glew::glcore::glMultiTexCoord2bvOES
#define glMultiTexCoord2d glew::glcore::glMultiTexCoord2d
#define glMultiTexCoord2dARB glew::glcore::glMultiTexCoord2dARB
#define glMultiTexCoord2dv glew::glcore::glMultiTexCoord2dv
#define glMultiTexCoord2dvARB glew::glcore::glMultiTexCoord2dvARB
#define glMultiTexCoord2f glew::glcore::glMultiTexCoord2f
#define glMultiTexCoord2fARB glew::glcore::glMultiTexCoord2fARB
#define glMultiTexCoord2fv glew::glcore::glMultiTexCoord2fv
#define glMultiTexCoord2fvARB glew::glcore::glMultiTexCoord2fvARB
#define glMultiTexCoord2hNV glew::glcore::glMultiTexCoord2hNV
#define glMultiTexCoord2hvNV glew::glcore::glMultiTexCoord2hvNV
#define glMultiTexCoord2i glew::glcore::glMultiTexCoord2i
#define glMultiTexCoord2iARB glew::glcore::glMultiTexCoord2iARB
#define glMultiTexCoord2iv glew::glcore::glMultiTexCoord2iv
#define glMultiTexCoord2ivARB glew::glcore::glMultiTexCoord2ivARB
#define glMultiTexCoord2s glew::glcore::glMultiTexCoord2s
#define glMultiTexCoord2sARB glew::glcore::glMultiTexCoord2sARB
#define glMultiTexCoord2sv glew::glcore::glMultiTexCoord2sv
#define glMultiTexCoord2svARB glew::glcore::glMultiTexCoord2svARB
#define glMultiTexCoord2xOES glew::glcore::glMultiTexCoord2xOES
#define glMultiTexCoord2xvOES glew::glcore::glMultiTexCoord2xvOES
#define glMultiTexCoord3bOES glew::glcore::glMultiTexCoord3bOES
#define glMultiTexCoord3bvOES glew::glcore::glMultiTexCoord3bvOES
#define glMultiTexCoord3d glew::glcore::glMultiTexCoord3d
#define glMultiTexCoord3dARB glew::glcore::glMultiTexCoord3dARB
#define glMultiTexCoord3dv glew::glcore::glMultiTexCoord3dv
#define glMultiTexCoord3dvARB glew::glcore::glMultiTexCoord3dvARB
#define glMultiTexCoord3f glew::glcore::glMultiTexCoord3f
#define glMultiTexCoord3fARB glew::glcore::glMultiTexCoord3fARB
#define glMultiTexCoord3fv glew::glcore::glMultiTexCoord3fv
#define glMultiTexCoord3fvARB glew::glcore::glMultiTexCoord3fvARB
#define glMultiTexCoord3hNV glew::glcore::glMultiTexCoord3hNV
#define glMultiTexCoord3hvNV glew::glcore::glMultiTexCoord3hvNV
#define glMultiTexCoord3i glew::glcore::glMultiTexCoord3i
#define glMultiTexCoord3iARB glew::glcore::glMultiTexCoord3iARB
#define glMultiTexCoord3iv glew::glcore::glMultiTexCoord3iv
#define glMultiTexCoord3ivARB glew::glcore::glMultiTexCoord3ivARB
#define glMultiTexCoord3s glew::glcore::glMultiTexCoord3s
#define glMultiTexCoord3sARB glew::glcore::glMultiTexCoord3sARB
#define glMultiTexCoord3sv glew::glcore::glMultiTexCoord3sv
#define glMultiTexCoord3svARB glew::glcore::glMultiTexCoord3svARB
#define glMultiTexCoord3xOES glew::glcore::glMultiTexCoord3xOES
#define glMultiTexCoord3xvOES glew::glcore::glMultiTexCoord3xvOES
#define glMultiTexCoord4bOES glew::glcore::glMultiTexCoord4bOES
#define glMultiTexCoord4bvOES glew::glcore::glMultiTexCoord4bvOES
#define glMultiTexCoord4d glew::glcore::glMultiTexCoord4d
#define glMultiTexCoord4dARB glew::glcore::glMultiTexCoord4dARB
#define glMultiTexCoord4dv glew::glcore::glMultiTexCoord4dv
#define glMultiTexCoord4dvARB glew::glcore::glMultiTexCoord4dvARB
#define glMultiTexCoord4f glew::glcore::glMultiTexCoord4f
#define glMultiTexCoord4fARB glew::glcore::glMultiTexCoord4fARB
#define glMultiTexCoord4fv glew::glcore::glMultiTexCoord4fv
#define glMultiTexCoord4fvARB glew::glcore::glMultiTexCoord4fvARB
#define glMultiTexCoord4hNV glew::glcore::glMultiTexCoord4hNV
#define glMultiTexCoord4hvNV glew::glcore::glMultiTexCoord4hvNV
#define glMultiTexCoord4i glew::glcore::glMultiTexCoord4i
#define glMultiTexCoord4iARB glew::glcore::glMultiTexCoord4iARB
#define glMultiTexCoord4iv glew::glcore::glMultiTexCoord4iv
#define glMultiTexCoord4ivARB glew::glcore::glMultiTexCoord4ivARB
#define glMultiTexCoord4s glew::glcore::glMultiTexCoord4s
#define glMultiTexCoord4sARB glew::glcore::glMultiTexCoord4sARB
#define glMultiTexCoord4sv glew::glcore::glMultiTexCoord4sv
#define glMultiTexCoord4svARB glew::glcore::glMultiTexCoord4svARB
#define glMultiTexCoord4x glew::glcore::glMultiTexCoord4x
#define glMultiTexCoord4xOES glew::glcore::glMultiTexCoord4xOES
#define glMultiTexCoord4xvOES glew::glcore::glMultiTexCoord4xvOES
#define glMultiTexCoordP1ui glew::glcore::glMultiTexCoordP1ui
#define glMultiTexCoordP1uiv glew::glcore::glMultiTexCoordP1uiv
#define glMultiTexCoordP2ui glew::glcore::glMultiTexCoordP2ui
#define glMultiTexCoordP2uiv glew::glcore::glMultiTexCoordP2uiv
#define glMultiTexCoordP3ui glew::glcore::glMultiTexCoordP3ui
#define glMultiTexCoordP3uiv glew::glcore::glMultiTexCoordP3uiv
#define glMultiTexCoordP4ui glew::glcore::glMultiTexCoordP4ui
#define glMultiTexCoordP4uiv glew::glcore::glMultiTexCoordP4uiv
#define glMultiTexCoordPointerEXT glew::glcore::glMultiTexCoordPointerEXT
#define glMultiTexEnvfEXT glew::glcore::glMultiTexEnvfEXT
#define glMultiTexEnvfvEXT glew::glcore::glMultiTexEnvfvEXT
#define glMultiTexEnviEXT glew::glcore::glMultiTexEnviEXT
#define glMultiTexEnvivEXT glew::glcore::glMultiTexEnvivEXT
#define glMultiTexGendEXT glew::glcore::glMultiTexGendEXT
#define glMultiTexGendvEXT glew::glcore::glMultiTexGendvEXT
#define glMultiTexGenfEXT glew::glcore::glMultiTexGenfEXT
#define glMultiTexGenfvEXT glew::glcore::glMultiTexGenfvEXT
#define glMultiTexGeniEXT glew::glcore::glMultiTexGeniEXT
#define glMultiTexGenivEXT glew::glcore::glMultiTexGenivEXT
#define glMultiTexImage1DEXT glew::glcore::glMultiTexImage1DEXT
#define glMultiTexImage2DEXT glew::glcore::glMultiTexImage2DEXT
#define glMultiTexImage3DEXT glew::glcore::glMultiTexImage3DEXT
#define glMultiTexParameterIivEXT glew::glcore::glMultiTexParameterIivEXT
#define glMultiTexParameterIuivEXT glew::glcore::glMultiTexParameterIuivEXT
#define glMultiTexParameterfEXT glew::glcore::glMultiTexParameterfEXT
#define glMultiTexParameterfvEXT glew::glcore::glMultiTexParameterfvEXT
#define glMultiTexParameteriEXT glew::glcore::glMultiTexParameteriEXT
#define glMultiTexParameterivEXT glew::glcore::glMultiTexParameterivEXT
#define glMultiTexRenderbufferEXT glew::glcore::glMultiTexRenderbufferEXT
#define glMultiTexSubImage1DEXT glew::glcore::glMultiTexSubImage1DEXT
#define glMultiTexSubImage2DEXT glew::glcore::glMultiTexSubImage2DEXT
#define glMultiTexSubImage3DEXT glew::glcore::glMultiTexSubImage3DEXT
#define glNamedBufferData glew::glcore::glNamedBufferData
#define glNamedBufferDataEXT glew::glcore::glNamedBufferDataEXT
#define glNamedBufferPageCommitmentARB glew::glcore::glNamedBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT glew::glcore::glNamedBufferPageCommitmentEXT
#define glNamedBufferStorage glew::glcore::glNamedBufferStorage
#define glNamedBufferStorageEXT glew::glcore::glNamedBufferStorageEXT
#define glNamedBufferSubData glew::glcore::glNamedBufferSubData
#define glNamedBufferSubDataEXT glew::glcore::glNamedBufferSubDataEXT
#define glNamedCopyBufferSubDataEXT glew::glcore::glNamedCopyBufferSubDataEXT
#define glNamedFramebufferDrawBuffer glew::glcore::glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers glew::glcore::glNamedFramebufferDrawBuffers
#define glNamedFramebufferParameteri glew::glcore::glNamedFramebufferParameteri
#define glNamedFramebufferParameteriEXT glew::glcore::glNamedFramebufferParameteriEXT
#define glNamedFramebufferReadBuffer glew::glcore::glNamedFramebufferReadBuffer
#define glNamedFramebufferRenderbuffer glew::glcore::glNamedFramebufferRenderbuffer
#define glNamedFramebufferRenderbufferEXT glew::glcore::glNamedFramebufferRenderbufferEXT
#define glNamedFramebufferTexture glew::glcore::glNamedFramebufferTexture
#define glNamedFramebufferTexture1DEXT glew::glcore::glNamedFramebufferTexture1DEXT
#define glNamedFramebufferTexture2DEXT glew::glcore::glNamedFramebufferTexture2DEXT
#define glNamedFramebufferTexture3DEXT glew::glcore::glNamedFramebufferTexture3DEXT
#define glNamedFramebufferTextureEXT glew::glcore::glNamedFramebufferTextureEXT
#define glNamedFramebufferTextureFaceEXT glew::glcore::glNamedFramebufferTextureFaceEXT
#define glNamedFramebufferTextureLayer glew::glcore::glNamedFramebufferTextureLayer
#define glNamedFramebufferTextureLayerEXT glew::glcore::glNamedFramebufferTextureLayerEXT
#define glNamedProgramLocalParameter4dEXT glew::glcore::glNamedProgramLocalParameter4dEXT
#define glNamedProgramLocalParameter4dvEXT glew::glcore::glNamedProgramLocalParameter4dvEXT
#define glNamedProgramLocalParameter4fEXT glew::glcore::glNamedProgramLocalParameter4fEXT
#define glNamedProgramLocalParameter4fvEXT glew::glcore::glNamedProgramLocalParameter4fvEXT
#define glNamedProgramLocalParameterI4iEXT glew::glcore::glNamedProgramLocalParameterI4iEXT
#define glNamedProgramLocalParameterI4ivEXT glew::glcore::glNamedProgramLocalParameterI4ivEXT
#define glNamedProgramLocalParameterI4uiEXT glew::glcore::glNamedProgramLocalParameterI4uiEXT
#define glNamedProgramLocalParameterI4uivEXT glew::glcore::glNamedProgramLocalParameterI4uivEXT
#define glNamedProgramLocalParameters4fvEXT glew::glcore::glNamedProgramLocalParameters4fvEXT
#define glNamedProgramLocalParametersI4ivEXT glew::glcore::glNamedProgramLocalParametersI4ivEXT
#define glNamedProgramLocalParametersI4uivEXT glew::glcore::glNamedProgramLocalParametersI4uivEXT
#define glNamedProgramStringEXT glew::glcore::glNamedProgramStringEXT
#define glNamedRenderbufferStorage glew::glcore::glNamedRenderbufferStorage
#define glNamedRenderbufferStorageEXT glew::glcore::glNamedRenderbufferStorageEXT
#define glNamedRenderbufferStorageMultisample glew::glcore::glNamedRenderbufferStorageMultisample
#define glNamedRenderbufferStorageMultisampleCoverageEXT glew::glcore::glNamedRenderbufferStorageMultisampleCoverageEXT
#define glNamedRenderbufferStorageMultisampleEXT glew::glcore::glNamedRenderbufferStorageMultisampleEXT
#define glNamedStringARB glew::glcore::glNamedStringARB
#define glNewList glew::glcore::glNewList
#define glNewObjectBufferATI glew::glcore::glNewObjectBufferATI
#define glNormal3b glew::glcore::glNormal3b
#define glNormal3bv glew::glcore::glNormal3bv
#define glNormal3d glew::glcore::glNormal3d
#define glNormal3dv glew::glcore::glNormal3dv
#define glNormal3f glew::glcore::glNormal3f
#define glNormal3fVertex3fSUN glew::glcore::glNormal3fVertex3fSUN
#define glNormal3fVertex3fvSUN glew::glcore::glNormal3fVertex3fvSUN
#define glNormal3fv glew::glcore::glNormal3fv
#define glNormal3hNV glew::glcore::glNormal3hNV
#define glNormal3hvNV glew::glcore::glNormal3hvNV
#define glNormal3i glew::glcore::glNormal3i
#define glNormal3iv glew::glcore::glNormal3iv
#define glNormal3s glew::glcore::glNormal3s
#define glNormal3sv glew::glcore::glNormal3sv
#define glNormal3x glew::glcore::glNormal3x
#define glNormal3xOES glew::glcore::glNormal3xOES
#define glNormal3xvOES glew::glcore::glNormal3xvOES
#define glNormalFormatNV glew::glcore::glNormalFormatNV
#define glNormalP3ui glew::glcore::glNormalP3ui
#define glNormalP3uiv glew::glcore::glNormalP3uiv
#define glNormalPointer glew::glcore::glNormalPointer
#define glNormalPointerEXT glew::glcore::glNormalPointerEXT
#define glNormalPointerListIBM glew::glcore::glNormalPointerListIBM
#define glNormalPointervINTEL glew::glcore::glNormalPointervINTEL
#define glNormalStream3bATI glew::glcore::glNormalStream3bATI
#define glNormalStream3bvATI glew::glcore::glNormalStream3bvATI
#define glNormalStream3dATI glew::glcore::glNormalStream3dATI
#define glNormalStream3dvATI glew::glcore::glNormalStream3dvATI
#define glNormalStream3fATI glew::glcore::glNormalStream3fATI
#define glNormalStream3fvATI glew::glcore::glNormalStream3fvATI
#define glNormalStream3iATI glew::glcore::glNormalStream3iATI
#define glNormalStream3ivATI glew::glcore::glNormalStream3ivATI
#define glNormalStream3sATI glew::glcore::glNormalStream3sATI
#define glNormalStream3svATI glew::glcore::glNormalStream3svATI
#define glObjectLabel glew::glcore::glObjectLabel
#define glObjectLabelKHR glew::glcore::glObjectLabelKHR
#define glObjectPtrLabel glew::glcore::glObjectPtrLabel
#define glObjectPtrLabelKHR glew::glcore::glObjectPtrLabelKHR
#define glObjectPurgeableAPPLE glew::glcore::glObjectPurgeableAPPLE
#define glObjectUnpurgeableAPPLE glew::glcore::glObjectUnpurgeableAPPLE
#define glOrtho glew::glcore::glOrtho
#define glOrthof glew::glcore::glOrthof
#define glOrthofOES glew::glcore::glOrthofOES
#define glOrthox glew::glcore::glOrthox
#define glOrthoxOES glew::glcore::glOrthoxOES
#define glPNTrianglesfATI glew::glcore::glPNTrianglesfATI
#define glPNTrianglesiATI glew::glcore::glPNTrianglesiATI
#define glPassTexCoordATI glew::glcore::glPassTexCoordATI
#define glPassThrough glew::glcore::glPassThrough
#define glPassThroughxOES glew::glcore::glPassThroughxOES
#define glPatchParameterfv glew::glcore::glPatchParameterfv
#define glPatchParameteri glew::glcore::glPatchParameteri
#define glPatchParameteriEXT glew::glcore::glPatchParameteriEXT
#define glPatchParameteriOES glew::glcore::glPatchParameteriOES
#define glPathColorGenNV glew::glcore::glPathColorGenNV
#define glPathCommandsNV glew::glcore::glPathCommandsNV
#define glPathCoordsNV glew::glcore::glPathCoordsNV
#define glPathCoverDepthFuncNV glew::glcore::glPathCoverDepthFuncNV
#define glPathDashArrayNV glew::glcore::glPathDashArrayNV
#define glPathFogGenNV glew::glcore::glPathFogGenNV
#define glPathGlyphIndexArrayNV glew::glcore::glPathGlyphIndexArrayNV
#define glPathGlyphIndexRangeNV glew::glcore::glPathGlyphIndexRangeNV
#define glPathGlyphRangeNV glew::glcore::glPathGlyphRangeNV
#define glPathGlyphsNV glew::glcore::glPathGlyphsNV
#define glPathMemoryGlyphIndexArrayNV glew::glcore::glPathMemoryGlyphIndexArrayNV
#define glPathParameterfNV glew::glcore::glPathParameterfNV
#define glPathParameterfvNV glew::glcore::glPathParameterfvNV
#define glPathParameteriNV glew::glcore::glPathParameteriNV
#define glPathParameterivNV glew::glcore::glPathParameterivNV
#define glPathStencilDepthOffsetNV glew::glcore::glPathStencilDepthOffsetNV
#define glPathStencilFuncNV glew::glcore::glPathStencilFuncNV
#define glPathStringNV glew::glcore::glPathStringNV
#define glPathSubCommandsNV glew::glcore::glPathSubCommandsNV
#define glPathSubCoordsNV glew::glcore::glPathSubCoordsNV
#define glPathTexGenNV glew::glcore::glPathTexGenNV
#define glPauseTransformFeedback glew::glcore::glPauseTransformFeedback
#define glPauseTransformFeedbackNV glew::glcore::glPauseTransformFeedbackNV
#define glPixelDataRangeNV glew::glcore::glPixelDataRangeNV
#define glPixelMapfv glew::glcore::glPixelMapfv
#define glPixelMapuiv glew::glcore::glPixelMapuiv
#define glPixelMapusv glew::glcore::glPixelMapusv
#define glPixelMapx glew::glcore::glPixelMapx
#define glPixelStoref glew::glcore::glPixelStoref
#define glPixelStorei glew::glcore::glPixelStorei
#define glPixelStorex glew::glcore::glPixelStorex
#define glPixelTexGenParameterfSGIS glew::glcore::glPixelTexGenParameterfSGIS
#define glPixelTexGenParameterfvSGIS glew::glcore::glPixelTexGenParameterfvSGIS
#define glPixelTexGenParameteriSGIS glew::glcore::glPixelTexGenParameteriSGIS
#define glPixelTexGenParameterivSGIS glew::glcore::glPixelTexGenParameterivSGIS
#define glPixelTexGenSGIX glew::glcore::glPixelTexGenSGIX
#define glPixelTransferf glew::glcore::glPixelTransferf
#define glPixelTransferi glew::glcore::glPixelTransferi
#define glPixelTransferxOES glew::glcore::glPixelTransferxOES
#define glPixelTransformParameterfEXT glew::glcore::glPixelTransformParameterfEXT
#define glPixelTransformParameterfvEXT glew::glcore::glPixelTransformParameterfvEXT
#define glPixelTransformParameteriEXT glew::glcore::glPixelTransformParameteriEXT
#define glPixelTransformParameterivEXT glew::glcore::glPixelTransformParameterivEXT
#define glPixelZoom glew::glcore::glPixelZoom
#define glPixelZoomxOES glew::glcore::glPixelZoomxOES
#define glPointAlongPathNV glew::glcore::glPointAlongPathNV
#define glPointParameterf glew::glcore::glPointParameterf
#define glPointParameterfARB glew::glcore::glPointParameterfARB
#define glPointParameterfEXT glew::glcore::glPointParameterfEXT
#define glPointParameterfSGIS glew::glcore::glPointParameterfSGIS
#define glPointParameterfv glew::glcore::glPointParameterfv
#define glPointParameterfvARB glew::glcore::glPointParameterfvARB
#define glPointParameterfvEXT glew::glcore::glPointParameterfvEXT
#define glPointParameterfvSGIS glew::glcore::glPointParameterfvSGIS
#define glPointParameteri glew::glcore::glPointParameteri
#define glPointParameteriNV glew::glcore::glPointParameteriNV
#define glPointParameteriv glew::glcore::glPointParameteriv
#define glPointParameterivNV glew::glcore::glPointParameterivNV
#define glPointParameterx glew::glcore::glPointParameterx
#define glPointParameterxOES glew::glcore::glPointParameterxOES
#define glPointParameterxv glew::glcore::glPointParameterxv
#define glPointParameterxvOES glew::glcore::glPointParameterxvOES
#define glPointSize glew::glcore::glPointSize
#define glPointSizePointerOES glew::glcore::glPointSizePointerOES
#define glPointSizex glew::glcore::glPointSizex
#define glPointSizexOES glew::glcore::glPointSizexOES
#define glPollAsyncSGIX glew::glcore::glPollAsyncSGIX
#define glPollInstrumentsSGIX glew::glcore::glPollInstrumentsSGIX
#define glPolygonMode glew::glcore::glPolygonMode
#define glPolygonModeNV glew::glcore::glPolygonModeNV
#define glPolygonOffset glew::glcore::glPolygonOffset
#define glPolygonOffsetEXT glew::glcore::glPolygonOffsetEXT
#define glPolygonOffsetx glew::glcore::glPolygonOffsetx
#define glPolygonOffsetxOES glew::glcore::glPolygonOffsetxOES
#define glPolygonOffsetClampEXT glew::glcore::glPolygonOffsetClampEXT
#define glPolygonStipple glew::glcore::glPolygonStipple
#define glPopAttrib glew::glcore::glPopAttrib
#define glPopClientAttrib glew::glcore::glPopClientAttrib
#define glPopDebugGroup glew::glcore::glPopDebugGroup
#define glPopDebugGroupKHR glew::glcore::glPopDebugGroupKHR
#define glPopGroupMarkerEXT glew::glcore::glPopGroupMarkerEXT
#define glPopMatrix glew::glcore::glPopMatrix
#define glPopName glew::glcore::glPopName
#define glPresentFrameDualFillNV glew::glcore::glPresentFrameDualFillNV
#define glPresentFrameKeyedNV glew::glcore::glPresentFrameKeyedNV
#define glPrimitiveBoundingBoxEXT glew::glcore::glPrimitiveBoundingBoxEXT
#define glPrimitiveBoundingBoxOES glew::glcore::glPrimitiveBoundingBoxOES
#define glPrimitiveRestartIndex glew::glcore::glPrimitiveRestartIndex
#define glPrimitiveRestartIndexNV glew::glcore::glPrimitiveRestartIndexNV
#define glPrimitiveRestartNV glew::glcore::glPrimitiveRestartNV
#define glPrioritizeTextures glew::glcore::glPrioritizeTextures
#define glPrioritizeTexturesEXT glew::glcore::glPrioritizeTexturesEXT
#define glPrioritizeTexturesxOES glew::glcore::glPrioritizeTexturesxOES
#define glProgramBinary glew::glcore::glProgramBinary
#define glProgramBinaryOES glew::glcore::glProgramBinaryOES
#define glProgramBufferParametersIivNV glew::glcore::glProgramBufferParametersIivNV
#define glProgramBufferParametersIuivNV glew::glcore::glProgramBufferParametersIuivNV
#define glProgramBufferParametersfvNV glew::glcore::glProgramBufferParametersfvNV
#define glProgramEnvParameter4dARB glew::glcore::glProgramEnvParameter4dARB
#define glProgramEnvParameter4dvARB glew::glcore::glProgramEnvParameter4dvARB
#define glProgramEnvParameter4fARB glew::glcore::glProgramEnvParameter4fARB
#define glProgramEnvParameter4fvARB glew::glcore::glProgramEnvParameter4fvARB
#define glProgramEnvParameterI4iNV glew::glcore::glProgramEnvParameterI4iNV
#define glProgramEnvParameterI4ivNV glew::glcore::glProgramEnvParameterI4ivNV
#define glProgramEnvParameterI4uiNV glew::glcore::glProgramEnvParameterI4uiNV
#define glProgramEnvParameterI4uivNV glew::glcore::glProgramEnvParameterI4uivNV
#define glProgramEnvParameters4fvEXT glew::glcore::glProgramEnvParameters4fvEXT
#define glProgramEnvParametersI4ivNV glew::glcore::glProgramEnvParametersI4ivNV
#define glProgramEnvParametersI4uivNV glew::glcore::glProgramEnvParametersI4uivNV
#define glProgramLocalParameter4dARB glew::glcore::glProgramLocalParameter4dARB
#define glProgramLocalParameter4dvARB glew::glcore::glProgramLocalParameter4dvARB
#define glProgramLocalParameter4fARB glew::glcore::glProgramLocalParameter4fARB
#define glProgramLocalParameter4fvARB glew::glcore::glProgramLocalParameter4fvARB
#define glProgramLocalParameterI4iNV glew::glcore::glProgramLocalParameterI4iNV
#define glProgramLocalParameterI4ivNV glew::glcore::glProgramLocalParameterI4ivNV
#define glProgramLocalParameterI4uiNV glew::glcore::glProgramLocalParameterI4uiNV
#define glProgramLocalParameterI4uivNV glew::glcore::glProgramLocalParameterI4uivNV
#define glProgramLocalParameters4fvEXT glew::glcore::glProgramLocalParameters4fvEXT
#define glProgramLocalParametersI4ivNV glew::glcore::glProgramLocalParametersI4ivNV
#define glProgramLocalParametersI4uivNV glew::glcore::glProgramLocalParametersI4uivNV
#define glProgramNamedParameter4dNV glew::glcore::glProgramNamedParameter4dNV
#define glProgramNamedParameter4dvNV glew::glcore::glProgramNamedParameter4dvNV
#define glProgramNamedParameter4fNV glew::glcore::glProgramNamedParameter4fNV
#define glProgramNamedParameter4fvNV glew::glcore::glProgramNamedParameter4fvNV
#define glProgramParameter4dNV glew::glcore::glProgramParameter4dNV
#define glProgramParameter4dvNV glew::glcore::glProgramParameter4dvNV
#define glProgramParameter4fNV glew::glcore::glProgramParameter4fNV
#define glProgramParameter4fvNV glew::glcore::glProgramParameter4fvNV
#define glProgramParameteri glew::glcore::glProgramParameteri
#define glProgramParameteriARB glew::glcore::glProgramParameteriARB
#define glProgramParameteriEXT glew::glcore::glProgramParameteriEXT
#define glProgramParameters4dvNV glew::glcore::glProgramParameters4dvNV
#define glProgramParameters4fvNV glew::glcore::glProgramParameters4fvNV
#define glProgramPathFragmentInputGenNV glew::glcore::glProgramPathFragmentInputGenNV
#define glProgramStringARB glew::glcore::glProgramStringARB
#define glProgramSubroutineParametersuivNV glew::glcore::glProgramSubroutineParametersuivNV
#define glProgramUniform1d glew::glcore::glProgramUniform1d
#define glProgramUniform1dEXT glew::glcore::glProgramUniform1dEXT
#define glProgramUniform1dv glew::glcore::glProgramUniform1dv
#define glProgramUniform1dvEXT glew::glcore::glProgramUniform1dvEXT
#define glProgramUniform1f glew::glcore::glProgramUniform1f
#define glProgramUniform1fEXT glew::glcore::glProgramUniform1fEXT
#define glProgramUniform1fv glew::glcore::glProgramUniform1fv
#define glProgramUniform1fvEXT glew::glcore::glProgramUniform1fvEXT
#define glProgramUniform1i glew::glcore::glProgramUniform1i
#define glProgramUniform1i64NV glew::glcore::glProgramUniform1i64NV
#define glProgramUniform1i64vNV glew::glcore::glProgramUniform1i64vNV
#define glProgramUniform1iEXT glew::glcore::glProgramUniform1iEXT
#define glProgramUniform1iv glew::glcore::glProgramUniform1iv
#define glProgramUniform1ivEXT glew::glcore::glProgramUniform1ivEXT
#define glProgramUniform1ui glew::glcore::glProgramUniform1ui
#define glProgramUniform1ui64NV glew::glcore::glProgramUniform1ui64NV
#define glProgramUniform1ui64vNV glew::glcore::glProgramUniform1ui64vNV
#define glProgramUniform1uiEXT glew::glcore::glProgramUniform1uiEXT
#define glProgramUniform1uiv glew::glcore::glProgramUniform1uiv
#define glProgramUniform1uivEXT glew::glcore::glProgramUniform1uivEXT
#define glProgramUniform2d glew::glcore::glProgramUniform2d
#define glProgramUniform2dEXT glew::glcore::glProgramUniform2dEXT
#define glProgramUniform2dv glew::glcore::glProgramUniform2dv
#define glProgramUniform2dvEXT glew::glcore::glProgramUniform2dvEXT
#define glProgramUniform2f glew::glcore::glProgramUniform2f
#define glProgramUniform2fEXT glew::glcore::glProgramUniform2fEXT
#define glProgramUniform2fv glew::glcore::glProgramUniform2fv
#define glProgramUniform2fvEXT glew::glcore::glProgramUniform2fvEXT
#define glProgramUniform2i glew::glcore::glProgramUniform2i
#define glProgramUniform2i64NV glew::glcore::glProgramUniform2i64NV
#define glProgramUniform2i64vNV glew::glcore::glProgramUniform2i64vNV
#define glProgramUniform2iEXT glew::glcore::glProgramUniform2iEXT
#define glProgramUniform2iv glew::glcore::glProgramUniform2iv
#define glProgramUniform2ivEXT glew::glcore::glProgramUniform2ivEXT
#define glProgramUniform2ui glew::glcore::glProgramUniform2ui
#define glProgramUniform2ui64NV glew::glcore::glProgramUniform2ui64NV
#define glProgramUniform2ui64vNV glew::glcore::glProgramUniform2ui64vNV
#define glProgramUniform2uiEXT glew::glcore::glProgramUniform2uiEXT
#define glProgramUniform2uiv glew::glcore::glProgramUniform2uiv
#define glProgramUniform2uivEXT glew::glcore::glProgramUniform2uivEXT
#define glProgramUniform3d glew::glcore::glProgramUniform3d
#define glProgramUniform3dEXT glew::glcore::glProgramUniform3dEXT
#define glProgramUniform3dv glew::glcore::glProgramUniform3dv
#define glProgramUniform3dvEXT glew::glcore::glProgramUniform3dvEXT
#define glProgramUniform3f glew::glcore::glProgramUniform3f
#define glProgramUniform3fEXT glew::glcore::glProgramUniform3fEXT
#define glProgramUniform3fv glew::glcore::glProgramUniform3fv
#define glProgramUniform3fvEXT glew::glcore::glProgramUniform3fvEXT
#define glProgramUniform3i glew::glcore::glProgramUniform3i
#define glProgramUniform3i64NV glew::glcore::glProgramUniform3i64NV
#define glProgramUniform3i64vNV glew::glcore::glProgramUniform3i64vNV
#define glProgramUniform3iEXT glew::glcore::glProgramUniform3iEXT
#define glProgramUniform3iv glew::glcore::glProgramUniform3iv
#define glProgramUniform3ivEXT glew::glcore::glProgramUniform3ivEXT
#define glProgramUniform3ui glew::glcore::glProgramUniform3ui
#define glProgramUniform3ui64NV glew::glcore::glProgramUniform3ui64NV
#define glProgramUniform3ui64vNV glew::glcore::glProgramUniform3ui64vNV
#define glProgramUniform3uiEXT glew::glcore::glProgramUniform3uiEXT
#define glProgramUniform3uiv glew::glcore::glProgramUniform3uiv
#define glProgramUniform3uivEXT glew::glcore::glProgramUniform3uivEXT
#define glProgramUniform4d glew::glcore::glProgramUniform4d
#define glProgramUniform4dEXT glew::glcore::glProgramUniform4dEXT
#define glProgramUniform4dv glew::glcore::glProgramUniform4dv
#define glProgramUniform4dvEXT glew::glcore::glProgramUniform4dvEXT
#define glProgramUniform4f glew::glcore::glProgramUniform4f
#define glProgramUniform4fEXT glew::glcore::glProgramUniform4fEXT
#define glProgramUniform4fv glew::glcore::glProgramUniform4fv
#define glProgramUniform4fvEXT glew::glcore::glProgramUniform4fvEXT
#define glProgramUniform4i glew::glcore::glProgramUniform4i
#define glProgramUniform4i64NV glew::glcore::glProgramUniform4i64NV
#define glProgramUniform4i64vNV glew::glcore::glProgramUniform4i64vNV
#define glProgramUniform4iEXT glew::glcore::glProgramUniform4iEXT
#define glProgramUniform4iv glew::glcore::glProgramUniform4iv
#define glProgramUniform4ivEXT glew::glcore::glProgramUniform4ivEXT
#define glProgramUniform4ui glew::glcore::glProgramUniform4ui
#define glProgramUniform4ui64NV glew::glcore::glProgramUniform4ui64NV
#define glProgramUniform4ui64vNV glew::glcore::glProgramUniform4ui64vNV
#define glProgramUniform4uiEXT glew::glcore::glProgramUniform4uiEXT
#define glProgramUniform4uiv glew::glcore::glProgramUniform4uiv
#define glProgramUniform4uivEXT glew::glcore::glProgramUniform4uivEXT
#define glProgramUniformHandleui64ARB glew::glcore::glProgramUniformHandleui64ARB
#define glProgramUniformHandleui64NV glew::glcore::glProgramUniformHandleui64NV
#define glProgramUniformHandleui64vARB glew::glcore::glProgramUniformHandleui64vARB
#define glProgramUniformHandleui64vNV glew::glcore::glProgramUniformHandleui64vNV
#define glProgramUniformMatrix2dv glew::glcore::glProgramUniformMatrix2dv
#define glProgramUniformMatrix2dvEXT glew::glcore::glProgramUniformMatrix2dvEXT
#define glProgramUniformMatrix2fv glew::glcore::glProgramUniformMatrix2fv
#define glProgramUniformMatrix2fvEXT glew::glcore::glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix2x3dv glew::glcore::glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix2x3dvEXT glew::glcore::glProgramUniformMatrix2x3dvEXT
#define glProgramUniformMatrix2x3fv glew::glcore::glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix2x3fvEXT glew::glcore::glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix2x4dv glew::glcore::glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix2x4dvEXT glew::glcore::glProgramUniformMatrix2x4dvEXT
#define glProgramUniformMatrix2x4fv glew::glcore::glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix2x4fvEXT glew::glcore::glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix3dv glew::glcore::glProgramUniformMatrix3dv
#define glProgramUniformMatrix3dvEXT glew::glcore::glProgramUniformMatrix3dvEXT
#define glProgramUniformMatrix3fv glew::glcore::glProgramUniformMatrix3fv
#define glProgramUniformMatrix3fvEXT glew::glcore::glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix3x2dv glew::glcore::glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix3x2dvEXT glew::glcore::glProgramUniformMatrix3x2dvEXT
#define glProgramUniformMatrix3x2fv glew::glcore::glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix3x2fvEXT glew::glcore::glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix3x4dv glew::glcore::glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix3x4dvEXT glew::glcore::glProgramUniformMatrix3x4dvEXT
#define glProgramUniformMatrix3x4fv glew::glcore::glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix3x4fvEXT glew::glcore::glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4dv glew::glcore::glProgramUniformMatrix4dv
#define glProgramUniformMatrix4dvEXT glew::glcore::glProgramUniformMatrix4dvEXT
#define glProgramUniformMatrix4fv glew::glcore::glProgramUniformMatrix4fv
#define glProgramUniformMatrix4fvEXT glew::glcore::glProgramUniformMatrix4fvEXT
#define glProgramUniformMatrix4x2dv glew::glcore::glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix4x2dvEXT glew::glcore::glProgramUniformMatrix4x2dvEXT
#define glProgramUniformMatrix4x2fv glew::glcore::glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix4x2fvEXT glew::glcore::glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix4x3dv glew::glcore::glProgramUniformMatrix4x3dv
#define glProgramUniformMatrix4x3dvEXT glew::glcore::glProgramUniformMatrix4x3dvEXT
#define glProgramUniformMatrix4x3fv glew::glcore::glProgramUniformMatrix4x3fv
#define glProgramUniformMatrix4x3fvEXT glew::glcore::glProgramUniformMatrix4x3fvEXT
#define glProgramUniformui64NV glew::glcore::glProgramUniformui64NV
#define glProgramUniformui64vNV glew::glcore::glProgramUniformui64vNV
#define glProgramVertexLimitNV glew::glcore::glProgramVertexLimitNV
#define glProvokingVertex glew::glcore::glProvokingVertex
#define glProvokingVertexEXT glew::glcore::glProvokingVertexEXT
#define glPushAttrib glew::glcore::glPushAttrib
#define glPushClientAttrib glew::glcore::glPushClientAttrib
#define glPushClientAttribDefaultEXT glew::glcore::glPushClientAttribDefaultEXT
#define glPushDebugGroup glew::glcore::glPushDebugGroup
#define glPushDebugGroupKHR glew::glcore::glPushDebugGroupKHR
#define glPushGroupMarkerEXT glew::glcore::glPushGroupMarkerEXT
#define glPushMatrix glew::glcore::glPushMatrix
#define glPushName glew::glcore::glPushName
#define glQueryCounter glew::glcore::glQueryCounter
#define glQueryCounterEXT glew::glcore::glQueryCounterEXT
#define glQueryMatrixxOES glew::glcore::glQueryMatrixxOES
#define glQueryObjectParameteruiAMD glew::glcore::glQueryObjectParameteruiAMD
#define glRasterPos2d glew::glcore::glRasterPos2d
#define glRasterPos2dv glew::glcore::glRasterPos2dv
#define glRasterPos2f glew::glcore::glRasterPos2f
#define glRasterPos2fv glew::glcore::glRasterPos2fv
#define glRasterPos2i glew::glcore::glRasterPos2i
#define glRasterPos2iv glew::glcore::glRasterPos2iv
#define glRasterPos2s glew::glcore::glRasterPos2s
#define glRasterPos2sv glew::glcore::glRasterPos2sv
#define glRasterPos2xOES glew::glcore::glRasterPos2xOES
#define glRasterPos2xvOES glew::glcore::glRasterPos2xvOES
#define glRasterPos3d glew::glcore::glRasterPos3d
#define glRasterPos3dv glew::glcore::glRasterPos3dv
#define glRasterPos3f glew::glcore::glRasterPos3f
#define glRasterPos3fv glew::glcore::glRasterPos3fv
#define glRasterPos3i glew::glcore::glRasterPos3i
#define glRasterPos3iv glew::glcore::glRasterPos3iv
#define glRasterPos3s glew::glcore::glRasterPos3s
#define glRasterPos3sv glew::glcore::glRasterPos3sv
#define glRasterPos3xOES glew::glcore::glRasterPos3xOES
#define glRasterPos3xvOES glew::glcore::glRasterPos3xvOES
#define glRasterPos4d glew::glcore::glRasterPos4d
#define glRasterPos4dv glew::glcore::glRasterPos4dv
#define glRasterPos4f glew::glcore::glRasterPos4f
#define glRasterPos4fv glew::glcore::glRasterPos4fv
#define glRasterPos4i glew::glcore::glRasterPos4i
#define glRasterPos4iv glew::glcore::glRasterPos4iv
#define glRasterPos4s glew::glcore::glRasterPos4s
#define glRasterPos4sv glew::glcore::glRasterPos4sv
#define glRasterPos4xOES glew::glcore::glRasterPos4xOES
#define glRasterPos4xvOES glew::glcore::glRasterPos4xvOES
#define glReadBuffer glew::glcore::glReadBuffer
#define glReadBufferIndexedEXT glew::glcore::glReadBufferIndexedEXT
#define glReadBufferNV glew::glcore::glReadBufferNV
#define glReadInstrumentsSGIX glew::glcore::glReadInstrumentsSGIX
#define glReadPixels glew::glcore::glReadPixels
#define glReadnPixels glew::glcore::glReadnPixels
#define glReadnPixelsARB glew::glcore::glReadnPixelsARB
#define glReadnPixelsEXT glew::glcore::glReadnPixelsEXT
#define glReadnPixelsKHR glew::glcore::glReadnPixelsKHR
#define glRectd glew::glcore::glRectd
#define glRectdv glew::glcore::glRectdv
#define glRectf glew::glcore::glRectf
#define glRectfv glew::glcore::glRectfv
#define glRecti glew::glcore::glRecti
#define glRectiv glew::glcore::glRectiv
#define glRects glew::glcore::glRects
#define glRectsv glew::glcore::glRectsv
#define glRectxOES glew::glcore::glRectxOES
#define glRectxvOES glew::glcore::glRectxvOES
#define glReferencePlaneSGIX glew::glcore::glReferencePlaneSGIX
#define glReleaseShaderCompiler glew::glcore::glReleaseShaderCompiler
#define glRenderMode glew::glcore::glRenderMode
#define glRenderbufferStorage glew::glcore::glRenderbufferStorage
#define glRenderbufferStorageEXT glew::glcore::glRenderbufferStorageEXT
#define glRenderbufferStorageMultisample glew::glcore::glRenderbufferStorageMultisample
#define glRenderbufferStorageMultisampleANGLE glew::glcore::glRenderbufferStorageMultisampleANGLE
#define glRenderbufferStorageMultisampleAPPLE glew::glcore::glRenderbufferStorageMultisampleAPPLE
#define glRenderbufferStorageMultisampleCoverageNV glew::glcore::glRenderbufferStorageMultisampleCoverageNV
#define glRenderbufferStorageMultisampleEXT glew::glcore::glRenderbufferStorageMultisampleEXT
#define glRenderbufferStorageMultisampleIMG glew::glcore::glRenderbufferStorageMultisampleIMG
#define glRenderbufferStorageMultisampleNV glew::glcore::glRenderbufferStorageMultisampleNV
#define glRenderbufferStorageOES glew::glcore::glRenderbufferStorageOES
#define glReplacementCodePointerSUN glew::glcore::glReplacementCodePointerSUN
#define glReplacementCodeubSUN glew::glcore::glReplacementCodeubSUN
#define glReplacementCodeubvSUN glew::glcore::glReplacementCodeubvSUN
#define glReplacementCodeuiColor3fVertex3fSUN glew::glcore::glReplacementCodeuiColor3fVertex3fSUN
#define glReplacementCodeuiColor3fVertex3fvSUN glew::glcore::glReplacementCodeuiColor3fVertex3fvSUN
#define glReplacementCodeuiColor4fNormal3fVertex3fSUN glew::glcore::glReplacementCodeuiColor4fNormal3fVertex3fSUN
#define glReplacementCodeuiColor4fNormal3fVertex3fvSUN glew::glcore::glReplacementCodeuiColor4fNormal3fVertex3fvSUN
#define glReplacementCodeuiColor4ubVertex3fSUN glew::glcore::glReplacementCodeuiColor4ubVertex3fSUN
#define glReplacementCodeuiColor4ubVertex3fvSUN glew::glcore::glReplacementCodeuiColor4ubVertex3fvSUN
#define glReplacementCodeuiNormal3fVertex3fSUN glew::glcore::glReplacementCodeuiNormal3fVertex3fSUN
#define glReplacementCodeuiNormal3fVertex3fvSUN glew::glcore::glReplacementCodeuiNormal3fVertex3fvSUN
#define glReplacementCodeuiSUN glew::glcore::glReplacementCodeuiSUN
#define glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN glew::glcore::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
#define glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN glew::glcore::glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
#define glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN glew::glcore::glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
#define glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN glew::glcore::glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
#define glReplacementCodeuiTexCoord2fVertex3fSUN glew::glcore::glReplacementCodeuiTexCoord2fVertex3fSUN
#define glReplacementCodeuiTexCoord2fVertex3fvSUN glew::glcore::glReplacementCodeuiTexCoord2fVertex3fvSUN
#define glReplacementCodeuiVertex3fSUN glew::glcore::glReplacementCodeuiVertex3fSUN
#define glReplacementCodeuiVertex3fvSUN glew::glcore::glReplacementCodeuiVertex3fvSUN
#define glReplacementCodeuivSUN glew::glcore::glReplacementCodeuivSUN
#define glReplacementCodeusSUN glew::glcore::glReplacementCodeusSUN
#define glReplacementCodeusvSUN glew::glcore::glReplacementCodeusvSUN
#define glRequestResidentProgramsNV glew::glcore::glRequestResidentProgramsNV
#define glResetHistogram glew::glcore::glResetHistogram
#define glResetHistogramEXT glew::glcore::glResetHistogramEXT
#define glResetMinmax glew::glcore::glResetMinmax
#define glResetMinmaxEXT glew::glcore::glResetMinmaxEXT
#define glResizeBuffersMESA glew::glcore::glResizeBuffersMESA
#define glResolveMultisampleFramebufferAPPLE glew::glcore::glResolveMultisampleFramebufferAPPLE
#define glResumeTransformFeedback glew::glcore::glResumeTransformFeedback
#define glResumeTransformFeedbackNV glew::glcore::glResumeTransformFeedbackNV
#define glRotated glew::glcore::glRotated
#define glRotatef glew::glcore::glRotatef
#define glRotatex glew::glcore::glRotatex
#define glRotatexOES glew::glcore::glRotatexOES
#define glSampleCoverage glew::glcore::glSampleCoverage
#define glSampleCoverageARB glew::glcore::glSampleCoverageARB
#define glSampleCoveragex glew::glcore::glSampleCoveragex
#define glSampleCoveragexOES glew::glcore::glSampleCoveragexOES
#define glSampleMapATI glew::glcore::glSampleMapATI
#define glSampleMaskEXT glew::glcore::glSampleMaskEXT
#define glSampleMaskIndexedNV glew::glcore::glSampleMaskIndexedNV
#define glSampleMaskSGIS glew::glcore::glSampleMaskSGIS
#define glSampleMaski glew::glcore::glSampleMaski
#define glSamplePatternEXT glew::glcore::glSamplePatternEXT
#define glSamplePatternSGIS glew::glcore::glSamplePatternSGIS
#define glSamplerParameterIiv glew::glcore::glSamplerParameterIiv
#define glSamplerParameterIivEXT glew::glcore::glSamplerParameterIivEXT
#define glSamplerParameterIivOES glew::glcore::glSamplerParameterIivOES
#define glSamplerParameterIuiv glew::glcore::glSamplerParameterIuiv
#define glSamplerParameterIuivEXT glew::glcore::glSamplerParameterIuivEXT
#define glSamplerParameterIuivOES glew::glcore::glSamplerParameterIuivOES
#define glSamplerParameterf glew::glcore::glSamplerParameterf
#define glSamplerParameterfv glew::glcore::glSamplerParameterfv
#define glSamplerParameteri glew::glcore::glSamplerParameteri
#define glSamplerParameteriv glew::glcore::glSamplerParameteriv
#define glScaled glew::glcore::glScaled
#define glScalef glew::glcore::glScalef
#define glScalex glew::glcore::glScalex
#define glScalexOES glew::glcore::glScalexOES
#define glScissor glew::glcore::glScissor
#define glScissorArrayv glew::glcore::glScissorArrayv
#define glScissorArrayvNV glew::glcore::glScissorArrayvNV
#define glScissorIndexed glew::glcore::glScissorIndexed
#define glScissorIndexedNV glew::glcore::glScissorIndexedNV
#define glScissorIndexedv glew::glcore::glScissorIndexedv
#define glScissorIndexedvNV glew::glcore::glScissorIndexedvNV
#define glSecondaryColor3b glew::glcore::glSecondaryColor3b
#define glSecondaryColor3bEXT glew::glcore::glSecondaryColor3bEXT
#define glSecondaryColor3bv glew::glcore::glSecondaryColor3bv
#define glSecondaryColor3bvEXT glew::glcore::glSecondaryColor3bvEXT
#define glSecondaryColor3d glew::glcore::glSecondaryColor3d
#define glSecondaryColor3dEXT glew::glcore::glSecondaryColor3dEXT
#define glSecondaryColor3dv glew::glcore::glSecondaryColor3dv
#define glSecondaryColor3dvEXT glew::glcore::glSecondaryColor3dvEXT
#define glSecondaryColor3f glew::glcore::glSecondaryColor3f
#define glSecondaryColor3fEXT glew::glcore::glSecondaryColor3fEXT
#define glSecondaryColor3fv glew::glcore::glSecondaryColor3fv
#define glSecondaryColor3fvEXT glew::glcore::glSecondaryColor3fvEXT
#define glSecondaryColor3hNV glew::glcore::glSecondaryColor3hNV
#define glSecondaryColor3hvNV glew::glcore::glSecondaryColor3hvNV
#define glSecondaryColor3i glew::glcore::glSecondaryColor3i
#define glSecondaryColor3iEXT glew::glcore::glSecondaryColor3iEXT
#define glSecondaryColor3iv glew::glcore::glSecondaryColor3iv
#define glSecondaryColor3ivEXT glew::glcore::glSecondaryColor3ivEXT
#define glSecondaryColor3s glew::glcore::glSecondaryColor3s
#define glSecondaryColor3sEXT glew::glcore::glSecondaryColor3sEXT
#define glSecondaryColor3sv glew::glcore::glSecondaryColor3sv
#define glSecondaryColor3svEXT glew::glcore::glSecondaryColor3svEXT
#define glSecondaryColor3ub glew::glcore::glSecondaryColor3ub
#define glSecondaryColor3ubEXT glew::glcore::glSecondaryColor3ubEXT
#define glSecondaryColor3ubv glew::glcore::glSecondaryColor3ubv
#define glSecondaryColor3ubvEXT glew::glcore::glSecondaryColor3ubvEXT
#define glSecondaryColor3ui glew::glcore::glSecondaryColor3ui
#define glSecondaryColor3uiEXT glew::glcore::glSecondaryColor3uiEXT
#define glSecondaryColor3uiv glew::glcore::glSecondaryColor3uiv
#define glSecondaryColor3uivEXT glew::glcore::glSecondaryColor3uivEXT
#define glSecondaryColor3us glew::glcore::glSecondaryColor3us
#define glSecondaryColor3usEXT glew::glcore::glSecondaryColor3usEXT
#define glSecondaryColor3usv glew::glcore::glSecondaryColor3usv
#define glSecondaryColor3usvEXT glew::glcore::glSecondaryColor3usvEXT
#define glSecondaryColorFormatNV glew::glcore::glSecondaryColorFormatNV
#define glSecondaryColorP3ui glew::glcore::glSecondaryColorP3ui
#define glSecondaryColorP3uiv glew::glcore::glSecondaryColorP3uiv
#define glSecondaryColorPointer glew::glcore::glSecondaryColorPointer
#define glSecondaryColorPointerEXT glew::glcore::glSecondaryColorPointerEXT
#define glSecondaryColorPointerListIBM glew::glcore::glSecondaryColorPointerListIBM
#define glSelectBuffer glew::glcore::glSelectBuffer
#define glSelectPerfMonitorCountersAMD glew::glcore::glSelectPerfMonitorCountersAMD
#define glSeparableFilter2D glew::glcore::glSeparableFilter2D
#define glSeparableFilter2DEXT glew::glcore::glSeparableFilter2DEXT
#define glSetFenceAPPLE glew::glcore::glSetFenceAPPLE
#define glSetFenceNV glew::glcore::glSetFenceNV
#define glSetFragmentShaderConstantATI glew::glcore::glSetFragmentShaderConstantATI
#define glSetInvariantEXT glew::glcore::glSetInvariantEXT
#define glSetLocalConstantEXT glew::glcore::glSetLocalConstantEXT
#define glSetMultisamplefvAMD glew::glcore::glSetMultisamplefvAMD
#define glShadeModel glew::glcore::glShadeModel
#define glShaderBinary glew::glcore::glShaderBinary
#define glShaderOp1EXT glew::glcore::glShaderOp1EXT
#define glShaderOp2EXT glew::glcore::glShaderOp2EXT
#define glShaderOp3EXT glew::glcore::glShaderOp3EXT
#define glShaderSource glew::glcore::glShaderSource
#define glShaderSourceARB glew::glcore::glShaderSourceARB
#define glShaderStorageBlockBinding glew::glcore::glShaderStorageBlockBinding
#define glSharpenTexFuncSGIS glew::glcore::glSharpenTexFuncSGIS
#define glSpriteParameterfSGIX glew::glcore::glSpriteParameterfSGIX
#define glSpriteParameterfvSGIX glew::glcore::glSpriteParameterfvSGIX
#define glSpriteParameteriSGIX glew::glcore::glSpriteParameteriSGIX
#define glSpriteParameterivSGIX glew::glcore::glSpriteParameterivSGIX
#define glStartInstrumentsSGIX glew::glcore::glStartInstrumentsSGIX
#define glStartTilingQCOM glew::glcore::glStartTilingQCOM
#define glStateCaptureNV glew::glcore::glStateCaptureNV
#define glStencilClearTagEXT glew::glcore::glStencilClearTagEXT
#define glStencilFillPathInstancedNV glew::glcore::glStencilFillPathInstancedNV
#define glStencilFillPathNV glew::glcore::glStencilFillPathNV
#define glStencilFunc glew::glcore::glStencilFunc
#define glStencilFuncSeparate glew::glcore::glStencilFuncSeparate
#define glStencilFuncSeparateATI glew::glcore::glStencilFuncSeparateATI
#define glStencilMask glew::glcore::glStencilMask
#define glStencilMaskSeparate glew::glcore::glStencilMaskSeparate
#define glStencilOp glew::glcore::glStencilOp
#define glStencilOpSeparate glew::glcore::glStencilOpSeparate
#define glStencilOpSeparateATI glew::glcore::glStencilOpSeparateATI
#define glStencilOpValueAMD glew::glcore::glStencilOpValueAMD
#define glStencilStrokePathInstancedNV glew::glcore::glStencilStrokePathInstancedNV
#define glStencilStrokePathNV glew::glcore::glStencilStrokePathNV
#define glStencilThenCoverFillPathInstancedNV glew::glcore::glStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverFillPathNV glew::glcore::glStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathInstancedNV glew::glcore::glStencilThenCoverStrokePathInstancedNV
#define glStencilThenCoverStrokePathNV glew::glcore::glStencilThenCoverStrokePathNV
#define glStopInstrumentsSGIX glew::glcore::glStopInstrumentsSGIX
#define glStringMarkerGREMEDY glew::glcore::glStringMarkerGREMEDY
#define glSwizzleEXT glew::glcore::glSwizzleEXT
#define glSyncTextureINTEL glew::glcore::glSyncTextureINTEL
#define glTagSampleBufferSGIX glew::glcore::glTagSampleBufferSGIX
#define glTangent3bEXT glew::glcore::glTangent3bEXT
#define glTangent3bvEXT glew::glcore::glTangent3bvEXT
#define glTangent3dEXT glew::glcore::glTangent3dEXT
#define glTangent3dvEXT glew::glcore::glTangent3dvEXT
#define glTangent3fEXT glew::glcore::glTangent3fEXT
#define glTangent3fvEXT glew::glcore::glTangent3fvEXT
#define glTangent3iEXT glew::glcore::glTangent3iEXT
#define glTangent3ivEXT glew::glcore::glTangent3ivEXT
#define glTangent3sEXT glew::glcore::glTangent3sEXT
#define glTangent3svEXT glew::glcore::glTangent3svEXT
#define glTangentPointerEXT glew::glcore::glTangentPointerEXT
#define glTbufferMask3DFX glew::glcore::glTbufferMask3DFX
#define glTessellationFactorAMD glew::glcore::glTessellationFactorAMD
#define glTessellationModeAMD glew::glcore::glTessellationModeAMD
#define glTestFenceAPPLE glew::glcore::glTestFenceAPPLE
#define glTestFenceNV glew::glcore::glTestFenceNV
#define glTestObjectAPPLE glew::glcore::glTestObjectAPPLE
#define glTexBuffer glew::glcore::glTexBuffer
#define glTexBufferARB glew::glcore::glTexBufferARB
#define glTexBufferEXT glew::glcore::glTexBufferEXT
#define glTexBufferOES glew::glcore::glTexBufferOES
#define glTexBufferRange glew::glcore::glTexBufferRange
#define glTexBufferRangeEXT glew::glcore::glTexBufferRangeEXT
#define glTexBufferRangeOES glew::glcore::glTexBufferRangeOES
#define glTexBumpParameterfvATI glew::glcore::glTexBumpParameterfvATI
#define glTexBumpParameterivATI glew::glcore::glTexBumpParameterivATI
#define glTexCoord1bOES glew::glcore::glTexCoord1bOES
#define glTexCoord1bvOES glew::glcore::glTexCoord1bvOES
#define glTexCoord1d glew::glcore::glTexCoord1d
#define glTexCoord1dv glew::glcore::glTexCoord1dv
#define glTexCoord1f glew::glcore::glTexCoord1f
#define glTexCoord1fv glew::glcore::glTexCoord1fv
#define glTexCoord1hNV glew::glcore::glTexCoord1hNV
#define glTexCoord1hvNV glew::glcore::glTexCoord1hvNV
#define glTexCoord1i glew::glcore::glTexCoord1i
#define glTexCoord1iv glew::glcore::glTexCoord1iv
#define glTexCoord1s glew::glcore::glTexCoord1s
#define glTexCoord1sv glew::glcore::glTexCoord1sv
#define glTexCoord1xOES glew::glcore::glTexCoord1xOES
#define glTexCoord1xvOES glew::glcore::glTexCoord1xvOES
#define glTexCoord2bOES glew::glcore::glTexCoord2bOES
#define glTexCoord2bvOES glew::glcore::glTexCoord2bvOES
#define glTexCoord2d glew::glcore::glTexCoord2d
#define glTexCoord2dv glew::glcore::glTexCoord2dv
#define glTexCoord2f glew::glcore::glTexCoord2f
#define glTexCoord2fColor3fVertex3fSUN glew::glcore::glTexCoord2fColor3fVertex3fSUN
#define glTexCoord2fColor3fVertex3fvSUN glew::glcore::glTexCoord2fColor3fVertex3fvSUN
#define glTexCoord2fColor4fNormal3fVertex3fSUN glew::glcore::glTexCoord2fColor4fNormal3fVertex3fSUN
#define glTexCoord2fColor4fNormal3fVertex3fvSUN glew::glcore::glTexCoord2fColor4fNormal3fVertex3fvSUN
#define glTexCoord2fColor4ubVertex3fSUN glew::glcore::glTexCoord2fColor4ubVertex3fSUN
#define glTexCoord2fColor4ubVertex3fvSUN glew::glcore::glTexCoord2fColor4ubVertex3fvSUN
#define glTexCoord2fNormal3fVertex3fSUN glew::glcore::glTexCoord2fNormal3fVertex3fSUN
#define glTexCoord2fNormal3fVertex3fvSUN glew::glcore::glTexCoord2fNormal3fVertex3fvSUN
#define glTexCoord2fVertex3fSUN glew::glcore::glTexCoord2fVertex3fSUN
#define glTexCoord2fVertex3fvSUN glew::glcore::glTexCoord2fVertex3fvSUN
#define glTexCoord2fv glew::glcore::glTexCoord2fv
#define glTexCoord2hNV glew::glcore::glTexCoord2hNV
#define glTexCoord2hvNV glew::glcore::glTexCoord2hvNV
#define glTexCoord2i glew::glcore::glTexCoord2i
#define glTexCoord2iv glew::glcore::glTexCoord2iv
#define glTexCoord2s glew::glcore::glTexCoord2s
#define glTexCoord2sv glew::glcore::glTexCoord2sv
#define glTexCoord2xOES glew::glcore::glTexCoord2xOES
#define glTexCoord2xvOES glew::glcore::glTexCoord2xvOES
#define glTexCoord3bOES glew::glcore::glTexCoord3bOES
#define glTexCoord3bvOES glew::glcore::glTexCoord3bvOES
#define glTexCoord3d glew::glcore::glTexCoord3d
#define glTexCoord3dv glew::glcore::glTexCoord3dv
#define glTexCoord3f glew::glcore::glTexCoord3f
#define glTexCoord3fv glew::glcore::glTexCoord3fv
#define glTexCoord3hNV glew::glcore::glTexCoord3hNV
#define glTexCoord3hvNV glew::glcore::glTexCoord3hvNV
#define glTexCoord3i glew::glcore::glTexCoord3i
#define glTexCoord3iv glew::glcore::glTexCoord3iv
#define glTexCoord3s glew::glcore::glTexCoord3s
#define glTexCoord3sv glew::glcore::glTexCoord3sv
#define glTexCoord3xOES glew::glcore::glTexCoord3xOES
#define glTexCoord3xvOES glew::glcore::glTexCoord3xvOES
#define glTexCoord4bOES glew::glcore::glTexCoord4bOES
#define glTexCoord4bvOES glew::glcore::glTexCoord4bvOES
#define glTexCoord4d glew::glcore::glTexCoord4d
#define glTexCoord4dv glew::glcore::glTexCoord4dv
#define glTexCoord4f glew::glcore::glTexCoord4f
#define glTexCoord4fColor4fNormal3fVertex4fSUN glew::glcore::glTexCoord4fColor4fNormal3fVertex4fSUN
#define glTexCoord4fColor4fNormal3fVertex4fvSUN glew::glcore::glTexCoord4fColor4fNormal3fVertex4fvSUN
#define glTexCoord4fVertex4fSUN glew::glcore::glTexCoord4fVertex4fSUN
#define glTexCoord4fVertex4fvSUN glew::glcore::glTexCoord4fVertex4fvSUN
#define glTexCoord4fv glew::glcore::glTexCoord4fv
#define glTexCoord4hNV glew::glcore::glTexCoord4hNV
#define glTexCoord4hvNV glew::glcore::glTexCoord4hvNV
#define glTexCoord4i glew::glcore::glTexCoord4i
#define glTexCoord4iv glew::glcore::glTexCoord4iv
#define glTexCoord4s glew::glcore::glTexCoord4s
#define glTexCoord4sv glew::glcore::glTexCoord4sv
#define glTexCoord4xOES glew::glcore::glTexCoord4xOES
#define glTexCoord4xvOES glew::glcore::glTexCoord4xvOES
#define glTexCoordFormatNV glew::glcore::glTexCoordFormatNV
#define glTexCoordP1ui glew::glcore::glTexCoordP1ui
#define glTexCoordP1uiv glew::glcore::glTexCoordP1uiv
#define glTexCoordP2ui glew::glcore::glTexCoordP2ui
#define glTexCoordP2uiv glew::glcore::glTexCoordP2uiv
#define glTexCoordP3ui glew::glcore::glTexCoordP3ui
#define glTexCoordP3uiv glew::glcore::glTexCoordP3uiv
#define glTexCoordP4ui glew::glcore::glTexCoordP4ui
#define glTexCoordP4uiv glew::glcore::glTexCoordP4uiv
#define glTexCoordPointer glew::glcore::glTexCoordPointer
#define glTexCoordPointerEXT glew::glcore::glTexCoordPointerEXT
#define glTexCoordPointerListIBM glew::glcore::glTexCoordPointerListIBM
#define glTexCoordPointervINTEL glew::glcore::glTexCoordPointervINTEL
#define glTexEnvf glew::glcore::glTexEnvf
#define glTexEnvfv glew::glcore::glTexEnvfv
#define glTexEnvi glew::glcore::glTexEnvi
#define glTexEnviv glew::glcore::glTexEnviv
#define glTexEnvx glew::glcore::glTexEnvx
#define glTexEnvxOES glew::glcore::glTexEnvxOES
#define glTexEnvxv glew::glcore::glTexEnvxv
#define glTexEnvxvOES glew::glcore::glTexEnvxvOES
#define glTexFilterFuncSGIS glew::glcore::glTexFilterFuncSGIS
#define glTexGend glew::glcore::glTexGend
#define glTexGendv glew::glcore::glTexGendv
#define glTexGenf glew::glcore::glTexGenf
#define glTexGenfOES glew::glcore::glTexGenfOES
#define glTexGenfv glew::glcore::glTexGenfv
#define glTexGenfvOES glew::glcore::glTexGenfvOES
#define glTexGeni glew::glcore::glTexGeni
#define glTexGeniOES glew::glcore::glTexGeniOES
#define glTexGeniv glew::glcore::glTexGeniv
#define glTexGenivOES glew::glcore::glTexGenivOES
#define glTexGenxOES glew::glcore::glTexGenxOES
#define glTexGenxvOES glew::glcore::glTexGenxvOES
#define glTexImage1D glew::glcore::glTexImage1D
#define glTexImage2D glew::glcore::glTexImage2D
#define glTexImage2DMultisample glew::glcore::glTexImage2DMultisample
#define glTexImage2DMultisampleCoverageNV glew::glcore::glTexImage2DMultisampleCoverageNV
#define glTexImage3D glew::glcore::glTexImage3D
#define glTexImage3DEXT glew::glcore::glTexImage3DEXT
#define glTexImage3DMultisample glew::glcore::glTexImage3DMultisample
#define glTexImage3DMultisampleCoverageNV glew::glcore::glTexImage3DMultisampleCoverageNV
#define glTexImage3DOES glew::glcore::glTexImage3DOES
#define glTexImage4DSGIS glew::glcore::glTexImage4DSGIS
#define glTexPageCommitmentARB glew::glcore::glTexPageCommitmentARB
#define glTexPageCommitmentEXT glew::glcore::glTexPageCommitmentEXT
#define glTexParameterIiv glew::glcore::glTexParameterIiv
#define glTexParameterIivEXT glew::glcore::glTexParameterIivEXT
#define glTexParameterIivOES glew::glcore::glTexParameterIivOES
#define glTexParameterIuiv glew::glcore::glTexParameterIuiv
#define glTexParameterIuivEXT glew::glcore::glTexParameterIuivEXT
#define glTexParameterIuivOES glew::glcore::glTexParameterIuivOES
#define glTexParameterf glew::glcore::glTexParameterf
#define glTexParameterfv glew::glcore::glTexParameterfv
#define glTexParameteri glew::glcore::glTexParameteri
#define glTexParameteriv glew::glcore::glTexParameteriv
#define glTexParameterx glew::glcore::glTexParameterx
#define glTexParameterxOES glew::glcore::glTexParameterxOES
#define glTexParameterxv glew::glcore::glTexParameterxv
#define glTexParameterxvOES glew::glcore::glTexParameterxvOES
#define glTexRenderbufferNV glew::glcore::glTexRenderbufferNV
#define glTexStorage1D glew::glcore::glTexStorage1D
#define glTexStorage1DEXT glew::glcore::glTexStorage1DEXT
#define glTexStorage2D glew::glcore::glTexStorage2D
#define glTexStorage2DEXT glew::glcore::glTexStorage2DEXT
#define glTexStorage2DMultisample glew::glcore::glTexStorage2DMultisample
#define glTexStorage3D glew::glcore::glTexStorage3D
#define glTexStorage3DEXT glew::glcore::glTexStorage3DEXT
#define glTexStorage3DMultisample glew::glcore::glTexStorage3DMultisample
#define glTexStorage3DMultisampleOES glew::glcore::glTexStorage3DMultisampleOES
#define glTexStorageSparseAMD glew::glcore::glTexStorageSparseAMD
#define glTexSubImage1D glew::glcore::glTexSubImage1D
#define glTexSubImage1DEXT glew::glcore::glTexSubImage1DEXT
#define glTexSubImage2D glew::glcore::glTexSubImage2D
#define glTexSubImage2DEXT glew::glcore::glTexSubImage2DEXT
#define glTexSubImage3D glew::glcore::glTexSubImage3D
#define glTexSubImage3DEXT glew::glcore::glTexSubImage3DEXT
#define glTexSubImage3DOES glew::glcore::glTexSubImage3DOES
#define glTexSubImage4DSGIS glew::glcore::glTexSubImage4DSGIS
#define glTextureBarrier glew::glcore::glTextureBarrier
#define glTextureBarrierNV glew::glcore::glTextureBarrierNV
#define glTextureBuffer glew::glcore::glTextureBuffer
#define glTextureBufferEXT glew::glcore::glTextureBufferEXT
#define glTextureBufferRange glew::glcore::glTextureBufferRange
#define glTextureBufferRangeEXT glew::glcore::glTextureBufferRangeEXT
#define glTextureColorMaskSGIS glew::glcore::glTextureColorMaskSGIS
#define glTextureImage1DEXT glew::glcore::glTextureImage1DEXT
#define glTextureImage2DEXT glew::glcore::glTextureImage2DEXT
#define glTextureImage2DMultisampleCoverageNV glew::glcore::glTextureImage2DMultisampleCoverageNV
#define glTextureImage2DMultisampleNV glew::glcore::glTextureImage2DMultisampleNV
#define glTextureImage3DEXT glew::glcore::glTextureImage3DEXT
#define glTextureImage3DMultisampleCoverageNV glew::glcore::glTextureImage3DMultisampleCoverageNV
#define glTextureImage3DMultisampleNV glew::glcore::glTextureImage3DMultisampleNV
#define glTextureLightEXT glew::glcore::glTextureLightEXT
#define glTextureMaterialEXT glew::glcore::glTextureMaterialEXT
#define glTextureNormalEXT glew::glcore::glTextureNormalEXT
#define glTexturePageCommitmentEXT glew::glcore::glTexturePageCommitmentEXT
#define glTextureParameterIiv glew::glcore::glTextureParameterIiv
#define glTextureParameterIivEXT glew::glcore::glTextureParameterIivEXT
#define glTextureParameterIuiv glew::glcore::glTextureParameterIuiv
#define glTextureParameterIuivEXT glew::glcore::glTextureParameterIuivEXT
#define glTextureParameterf glew::glcore::glTextureParameterf
#define glTextureParameterfEXT glew::glcore::glTextureParameterfEXT
#define glTextureParameterfv glew::glcore::glTextureParameterfv
#define glTextureParameterfvEXT glew::glcore::glTextureParameterfvEXT
#define glTextureParameteri glew::glcore::glTextureParameteri
#define glTextureParameteriEXT glew::glcore::glTextureParameteriEXT
#define glTextureParameteriv glew::glcore::glTextureParameteriv
#define glTextureParameterivEXT glew::glcore::glTextureParameterivEXT
#define glTextureRangeAPPLE glew::glcore::glTextureRangeAPPLE
#define glTextureRenderbufferEXT glew::glcore::glTextureRenderbufferEXT
#define glTextureStorage1D glew::glcore::glTextureStorage1D
#define glTextureStorage1DEXT glew::glcore::glTextureStorage1DEXT
#define glTextureStorage2D glew::glcore::glTextureStorage2D
#define glTextureStorage2DEXT glew::glcore::glTextureStorage2DEXT
#define glTextureStorage2DMultisample glew::glcore::glTextureStorage2DMultisample
#define glTextureStorage2DMultisampleEXT glew::glcore::glTextureStorage2DMultisampleEXT
#define glTextureStorage3D glew::glcore::glTextureStorage3D
#define glTextureStorage3DEXT glew::glcore::glTextureStorage3DEXT
#define glTextureStorage3DMultisample glew::glcore::glTextureStorage3DMultisample
#define glTextureStorage3DMultisampleEXT glew::glcore::glTextureStorage3DMultisampleEXT
#define glTextureStorageSparseAMD glew::glcore::glTextureStorageSparseAMD
#define glTextureSubImage1D glew::glcore::glTextureSubImage1D
#define glTextureSubImage1DEXT glew::glcore::glTextureSubImage1DEXT
#define glTextureSubImage2D glew::glcore::glTextureSubImage2D
#define glTextureSubImage2DEXT glew::glcore::glTextureSubImage2DEXT
#define glTextureSubImage3D glew::glcore::glTextureSubImage3D
#define glTextureSubImage3DEXT glew::glcore::glTextureSubImage3DEXT
#define glTextureView glew::glcore::glTextureView
#define glTextureViewEXT glew::glcore::glTextureViewEXT
#define glTextureViewOES glew::glcore::glTextureViewOES
#define glTrackMatrixNV glew::glcore::glTrackMatrixNV
#define glTransformFeedbackAttribsNV glew::glcore::glTransformFeedbackAttribsNV
#define glTransformFeedbackBufferBase glew::glcore::glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange glew::glcore::glTransformFeedbackBufferRange
#define glTransformFeedbackStreamAttribsNV glew::glcore::glTransformFeedbackStreamAttribsNV
#define glTransformFeedbackVaryings glew::glcore::glTransformFeedbackVaryings
#define glTransformFeedbackVaryingsEXT glew::glcore::glTransformFeedbackVaryingsEXT
#define glTransformFeedbackVaryingsNV glew::glcore::glTransformFeedbackVaryingsNV
#define glTransformPathNV glew::glcore::glTransformPathNV
#define glTranslated glew::glcore::glTranslated
#define glTranslatef glew::glcore::glTranslatef
#define glTranslatex glew::glcore::glTranslatex
#define glTranslatexOES glew::glcore::glTranslatexOES
#define glUniform1d glew::glcore::glUniform1d
#define glUniform1dv glew::glcore::glUniform1dv
#define glUniform1f glew::glcore::glUniform1f
#define glUniform1fARB glew::glcore::glUniform1fARB
#define glUniform1fv glew::glcore::glUniform1fv
#define glUniform1fvARB glew::glcore::glUniform1fvARB
#define glUniform1i glew::glcore::glUniform1i
#define glUniform1i64NV glew::glcore::glUniform1i64NV
#define glUniform1i64vNV glew::glcore::glUniform1i64vNV
#define glUniform1iARB glew::glcore::glUniform1iARB
#define glUniform1iv glew::glcore::glUniform1iv
#define glUniform1ivARB glew::glcore::glUniform1ivARB
#define glUniform1ui glew::glcore::glUniform1ui
#define glUniform1ui64NV glew::glcore::glUniform1ui64NV
#define glUniform1ui64vNV glew::glcore::glUniform1ui64vNV
#define glUniform1uiEXT glew::glcore::glUniform1uiEXT
#define glUniform1uiv glew::glcore::glUniform1uiv
#define glUniform1uivEXT glew::glcore::glUniform1uivEXT
#define glUniform2d glew::glcore::glUniform2d
#define glUniform2dv glew::glcore::glUniform2dv
#define glUniform2f glew::glcore::glUniform2f
#define glUniform2fARB glew::glcore::glUniform2fARB
#define glUniform2fv glew::glcore::glUniform2fv
#define glUniform2fvARB glew::glcore::glUniform2fvARB
#define glUniform2i glew::glcore::glUniform2i
#define glUniform2i64NV glew::glcore::glUniform2i64NV
#define glUniform2i64vNV glew::glcore::glUniform2i64vNV
#define glUniform2iARB glew::glcore::glUniform2iARB
#define glUniform2iv glew::glcore::glUniform2iv
#define glUniform2ivARB glew::glcore::glUniform2ivARB
#define glUniform2ui glew::glcore::glUniform2ui
#define glUniform2ui64NV glew::glcore::glUniform2ui64NV
#define glUniform2ui64vNV glew::glcore::glUniform2ui64vNV
#define glUniform2uiEXT glew::glcore::glUniform2uiEXT
#define glUniform2uiv glew::glcore::glUniform2uiv
#define glUniform2uivEXT glew::glcore::glUniform2uivEXT
#define glUniform3d glew::glcore::glUniform3d
#define glUniform3dv glew::glcore::glUniform3dv
#define glUniform3f glew::glcore::glUniform3f
#define glUniform3fARB glew::glcore::glUniform3fARB
#define glUniform3fv glew::glcore::glUniform3fv
#define glUniform3fvARB glew::glcore::glUniform3fvARB
#define glUniform3i glew::glcore::glUniform3i
#define glUniform3i64NV glew::glcore::glUniform3i64NV
#define glUniform3i64vNV glew::glcore::glUniform3i64vNV
#define glUniform3iARB glew::glcore::glUniform3iARB
#define glUniform3iv glew::glcore::glUniform3iv
#define glUniform3ivARB glew::glcore::glUniform3ivARB
#define glUniform3ui glew::glcore::glUniform3ui
#define glUniform3ui64NV glew::glcore::glUniform3ui64NV
#define glUniform3ui64vNV glew::glcore::glUniform3ui64vNV
#define glUniform3uiEXT glew::glcore::glUniform3uiEXT
#define glUniform3uiv glew::glcore::glUniform3uiv
#define glUniform3uivEXT glew::glcore::glUniform3uivEXT
#define glUniform4d glew::glcore::glUniform4d
#define glUniform4dv glew::glcore::glUniform4dv
#define glUniform4f glew::glcore::glUniform4f
#define glUniform4fARB glew::glcore::glUniform4fARB
#define glUniform4fv glew::glcore::glUniform4fv
#define glUniform4fvARB glew::glcore::glUniform4fvARB
#define glUniform4i glew::glcore::glUniform4i
#define glUniform4i64NV glew::glcore::glUniform4i64NV
#define glUniform4i64vNV glew::glcore::glUniform4i64vNV
#define glUniform4iARB glew::glcore::glUniform4iARB
#define glUniform4iv glew::glcore::glUniform4iv
#define glUniform4ivARB glew::glcore::glUniform4ivARB
#define glUniform4ui glew::glcore::glUniform4ui
#define glUniform4ui64NV glew::glcore::glUniform4ui64NV
#define glUniform4ui64vNV glew::glcore::glUniform4ui64vNV
#define glUniform4uiEXT glew::glcore::glUniform4uiEXT
#define glUniform4uiv glew::glcore::glUniform4uiv
#define glUniform4uivEXT glew::glcore::glUniform4uivEXT
#define glUniformBlockBinding glew::glcore::glUniformBlockBinding
#define glUniformBufferEXT glew::glcore::glUniformBufferEXT
#define glUniformHandleui64ARB glew::glcore::glUniformHandleui64ARB
#define glUniformHandleui64NV glew::glcore::glUniformHandleui64NV
#define glUniformHandleui64vARB glew::glcore::glUniformHandleui64vARB
#define glUniformHandleui64vNV glew::glcore::glUniformHandleui64vNV
#define glUniformMatrix2dv glew::glcore::glUniformMatrix2dv
#define glUniformMatrix2fv glew::glcore::glUniformMatrix2fv
#define glUniformMatrix2fvARB glew::glcore::glUniformMatrix2fvARB
#define glUniformMatrix2x3dv glew::glcore::glUniformMatrix2x3dv
#define glUniformMatrix2x3fv glew::glcore::glUniformMatrix2x3fv
#define glUniformMatrix2x3fvNV glew::glcore::glUniformMatrix2x3fvNV
#define glUniformMatrix2x4dv glew::glcore::glUniformMatrix2x4dv
#define glUniformMatrix2x4fv glew::glcore::glUniformMatrix2x4fv
#define glUniformMatrix2x4fvNV glew::glcore::glUniformMatrix2x4fvNV
#define glUniformMatrix3dv glew::glcore::glUniformMatrix3dv
#define glUniformMatrix3fv glew::glcore::glUniformMatrix3fv
#define glUniformMatrix3fvARB glew::glcore::glUniformMatrix3fvARB
#define glUniformMatrix3x2dv glew::glcore::glUniformMatrix3x2dv
#define glUniformMatrix3x2fv glew::glcore::glUniformMatrix3x2fv
#define glUniformMatrix3x2fvNV glew::glcore::glUniformMatrix3x2fvNV
#define glUniformMatrix3x4dv glew::glcore::glUniformMatrix3x4dv
#define glUniformMatrix3x4fv glew::glcore::glUniformMatrix3x4fv
#define glUniformMatrix3x4fvNV glew::glcore::glUniformMatrix3x4fvNV
#define glUniformMatrix4dv glew::glcore::glUniformMatrix4dv
#define glUniformMatrix4fv glew::glcore::glUniformMatrix4fv
#define glUniformMatrix4fvARB glew::glcore::glUniformMatrix4fvARB
#define glUniformMatrix4x2dv glew::glcore::glUniformMatrix4x2dv
#define glUniformMatrix4x2fv glew::glcore::glUniformMatrix4x2fv
#define glUniformMatrix4x2fvNV glew::glcore::glUniformMatrix4x2fvNV
#define glUniformMatrix4x3dv glew::glcore::glUniformMatrix4x3dv
#define glUniformMatrix4x3fv glew::glcore::glUniformMatrix4x3fv
#define glUniformMatrix4x3fvNV glew::glcore::glUniformMatrix4x3fvNV
#define glUniformSubroutinesuiv glew::glcore::glUniformSubroutinesuiv
#define glUniformui64NV glew::glcore::glUniformui64NV
#define glUniformui64vNV glew::glcore::glUniformui64vNV
#define glUnlockArraysEXT glew::glcore::glUnlockArraysEXT
#define glUnmapBuffer glew::glcore::glUnmapBuffer
#define glUnmapBufferARB glew::glcore::glUnmapBufferARB
#define glUnmapBufferOES glew::glcore::glUnmapBufferOES
#define glUnmapNamedBuffer glew::glcore::glUnmapNamedBuffer
#define glUnmapNamedBufferEXT glew::glcore::glUnmapNamedBufferEXT
#define glUnmapObjectBufferATI glew::glcore::glUnmapObjectBufferATI
#define glUnmapTexture2DINTEL glew::glcore::glUnmapTexture2DINTEL
#define glUpdateObjectBufferATI glew::glcore::glUpdateObjectBufferATI
#define glUseProgram glew::glcore::glUseProgram
#define glUseProgramObjectARB glew::glcore::glUseProgramObjectARB
#define glUseProgramStages glew::glcore::glUseProgramStages
#define glUseProgramStagesEXT glew::glcore::glUseProgramStagesEXT
#define glUseShaderProgramEXT glew::glcore::glUseShaderProgramEXT
#define glVDPAUFiniNV glew::glcore::glVDPAUFiniNV
#define glVDPAUGetSurfaceivNV glew::glcore::glVDPAUGetSurfaceivNV
#define glVDPAUInitNV glew::glcore::glVDPAUInitNV
#define glVDPAUIsSurfaceNV glew::glcore::glVDPAUIsSurfaceNV
#define glVDPAUMapSurfacesNV glew::glcore::glVDPAUMapSurfacesNV
#define glVDPAURegisterOutputSurfaceNV glew::glcore::glVDPAURegisterOutputSurfaceNV
#define glVDPAURegisterVideoSurfaceNV glew::glcore::glVDPAURegisterVideoSurfaceNV
#define glVDPAUSurfaceAccessNV glew::glcore::glVDPAUSurfaceAccessNV
#define glVDPAUUnmapSurfacesNV glew::glcore::glVDPAUUnmapSurfacesNV
#define glVDPAUUnregisterSurfaceNV glew::glcore::glVDPAUUnregisterSurfaceNV
#define glValidateProgram glew::glcore::glValidateProgram
#define glValidateProgramARB glew::glcore::glValidateProgramARB
#define glValidateProgramPipeline glew::glcore::glValidateProgramPipeline
#define glValidateProgramPipelineEXT glew::glcore::glValidateProgramPipelineEXT
#define glVariantArrayObjectATI glew::glcore::glVariantArrayObjectATI
#define glVariantPointerEXT glew::glcore::glVariantPointerEXT
#define glVariantbvEXT glew::glcore::glVariantbvEXT
#define glVariantdvEXT glew::glcore::glVariantdvEXT
#define glVariantfvEXT glew::glcore::glVariantfvEXT
#define glVariantivEXT glew::glcore::glVariantivEXT
#define glVariantsvEXT glew::glcore::glVariantsvEXT
#define glVariantubvEXT glew::glcore::glVariantubvEXT
#define glVariantuivEXT glew::glcore::glVariantuivEXT
#define glVariantusvEXT glew::glcore::glVariantusvEXT
#define glVertex2bOES glew::glcore::glVertex2bOES
#define glVertex2bvOES glew::glcore::glVertex2bvOES
#define glVertex2d glew::glcore::glVertex2d
#define glVertex2dv glew::glcore::glVertex2dv
#define glVertex2f glew::glcore::glVertex2f
#define glVertex2fv glew::glcore::glVertex2fv
#define glVertex2hNV glew::glcore::glVertex2hNV
#define glVertex2hvNV glew::glcore::glVertex2hvNV
#define glVertex2i glew::glcore::glVertex2i
#define glVertex2iv glew::glcore::glVertex2iv
#define glVertex2s glew::glcore::glVertex2s
#define glVertex2sv glew::glcore::glVertex2sv
#define glVertex2xOES glew::glcore::glVertex2xOES
#define glVertex2xvOES glew::glcore::glVertex2xvOES
#define glVertex3bOES glew::glcore::glVertex3bOES
#define glVertex3bvOES glew::glcore::glVertex3bvOES
#define glVertex3d glew::glcore::glVertex3d
#define glVertex3dv glew::glcore::glVertex3dv
#define glVertex3f glew::glcore::glVertex3f
#define glVertex3fv glew::glcore::glVertex3fv
#define glVertex3hNV glew::glcore::glVertex3hNV
#define glVertex3hvNV glew::glcore::glVertex3hvNV
#define glVertex3i glew::glcore::glVertex3i
#define glVertex3iv glew::glcore::glVertex3iv
#define glVertex3s glew::glcore::glVertex3s
#define glVertex3sv glew::glcore::glVertex3sv
#define glVertex3xOES glew::glcore::glVertex3xOES
#define glVertex3xvOES glew::glcore::glVertex3xvOES
#define glVertex4bOES glew::glcore::glVertex4bOES
#define glVertex4bvOES glew::glcore::glVertex4bvOES
#define glVertex4d glew::glcore::glVertex4d
#define glVertex4dv glew::glcore::glVertex4dv
#define glVertex4f glew::glcore::glVertex4f
#define glVertex4fv glew::glcore::glVertex4fv
#define glVertex4hNV glew::glcore::glVertex4hNV
#define glVertex4hvNV glew::glcore::glVertex4hvNV
#define glVertex4i glew::glcore::glVertex4i
#define glVertex4iv glew::glcore::glVertex4iv
#define glVertex4s glew::glcore::glVertex4s
#define glVertex4sv glew::glcore::glVertex4sv
#define glVertex4xOES glew::glcore::glVertex4xOES
#define glVertex4xvOES glew::glcore::glVertex4xvOES
#define glVertexArrayAttribBinding glew::glcore::glVertexArrayAttribBinding
#define glVertexArrayAttribFormat glew::glcore::glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat glew::glcore::glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat glew::glcore::glVertexArrayAttribLFormat
#define glVertexArrayBindVertexBufferEXT glew::glcore::glVertexArrayBindVertexBufferEXT
#define glVertexArrayBindingDivisor glew::glcore::glVertexArrayBindingDivisor
#define glVertexArrayColorOffsetEXT glew::glcore::glVertexArrayColorOffsetEXT
#define glVertexArrayEdgeFlagOffsetEXT glew::glcore::glVertexArrayEdgeFlagOffsetEXT
#define glVertexArrayElementBuffer glew::glcore::glVertexArrayElementBuffer
#define glVertexArrayFogCoordOffsetEXT glew::glcore::glVertexArrayFogCoordOffsetEXT
#define glVertexArrayIndexOffsetEXT glew::glcore::glVertexArrayIndexOffsetEXT
#define glVertexArrayMultiTexCoordOffsetEXT glew::glcore::glVertexArrayMultiTexCoordOffsetEXT
#define glVertexArrayNormalOffsetEXT glew::glcore::glVertexArrayNormalOffsetEXT
#define glVertexArrayParameteriAPPLE glew::glcore::glVertexArrayParameteriAPPLE
#define glVertexArrayRangeAPPLE glew::glcore::glVertexArrayRangeAPPLE
#define glVertexArrayRangeNV glew::glcore::glVertexArrayRangeNV
#define glVertexArraySecondaryColorOffsetEXT glew::glcore::glVertexArraySecondaryColorOffsetEXT
#define glVertexArrayTexCoordOffsetEXT glew::glcore::glVertexArrayTexCoordOffsetEXT
#define glVertexArrayVertexAttribBindingEXT glew::glcore::glVertexArrayVertexAttribBindingEXT
#define glVertexArrayVertexAttribDivisorEXT glew::glcore::glVertexArrayVertexAttribDivisorEXT
#define glVertexArrayVertexAttribFormatEXT glew::glcore::glVertexArrayVertexAttribFormatEXT
#define glVertexArrayVertexAttribIFormatEXT glew::glcore::glVertexArrayVertexAttribIFormatEXT
#define glVertexArrayVertexAttribIOffsetEXT glew::glcore::glVertexArrayVertexAttribIOffsetEXT
#define glVertexArrayVertexAttribLFormatEXT glew::glcore::glVertexArrayVertexAttribLFormatEXT
#define glVertexArrayVertexAttribLOffsetEXT glew::glcore::glVertexArrayVertexAttribLOffsetEXT
#define glVertexArrayVertexAttribOffsetEXT glew::glcore::glVertexArrayVertexAttribOffsetEXT
#define glVertexArrayVertexBindingDivisorEXT glew::glcore::glVertexArrayVertexBindingDivisorEXT
#define glVertexArrayVertexBuffer glew::glcore::glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers glew::glcore::glVertexArrayVertexBuffers
#define glVertexArrayVertexOffsetEXT glew::glcore::glVertexArrayVertexOffsetEXT
#define glVertexAttrib1d glew::glcore::glVertexAttrib1d
#define glVertexAttrib1dARB glew::glcore::glVertexAttrib1dARB
#define glVertexAttrib1dNV glew::glcore::glVertexAttrib1dNV
#define glVertexAttrib1dv glew::glcore::glVertexAttrib1dv
#define glVertexAttrib1dvARB glew::glcore::glVertexAttrib1dvARB
#define glVertexAttrib1dvNV glew::glcore::glVertexAttrib1dvNV
#define glVertexAttrib1f glew::glcore::glVertexAttrib1f
#define glVertexAttrib1fARB glew::glcore::glVertexAttrib1fARB
#define glVertexAttrib1fNV glew::glcore::glVertexAttrib1fNV
#define glVertexAttrib1fv glew::glcore::glVertexAttrib1fv
#define glVertexAttrib1fvARB glew::glcore::glVertexAttrib1fvARB
#define glVertexAttrib1fvNV glew::glcore::glVertexAttrib1fvNV
#define glVertexAttrib1hNV glew::glcore::glVertexAttrib1hNV
#define glVertexAttrib1hvNV glew::glcore::glVertexAttrib1hvNV
#define glVertexAttrib1s glew::glcore::glVertexAttrib1s
#define glVertexAttrib1sARB glew::glcore::glVertexAttrib1sARB
#define glVertexAttrib1sNV glew::glcore::glVertexAttrib1sNV
#define glVertexAttrib1sv glew::glcore::glVertexAttrib1sv
#define glVertexAttrib1svARB glew::glcore::glVertexAttrib1svARB
#define glVertexAttrib1svNV glew::glcore::glVertexAttrib1svNV
#define glVertexAttrib2d glew::glcore::glVertexAttrib2d
#define glVertexAttrib2dARB glew::glcore::glVertexAttrib2dARB
#define glVertexAttrib2dNV glew::glcore::glVertexAttrib2dNV
#define glVertexAttrib2dv glew::glcore::glVertexAttrib2dv
#define glVertexAttrib2dvARB glew::glcore::glVertexAttrib2dvARB
#define glVertexAttrib2dvNV glew::glcore::glVertexAttrib2dvNV
#define glVertexAttrib2f glew::glcore::glVertexAttrib2f
#define glVertexAttrib2fARB glew::glcore::glVertexAttrib2fARB
#define glVertexAttrib2fNV glew::glcore::glVertexAttrib2fNV
#define glVertexAttrib2fv glew::glcore::glVertexAttrib2fv
#define glVertexAttrib2fvARB glew::glcore::glVertexAttrib2fvARB
#define glVertexAttrib2fvNV glew::glcore::glVertexAttrib2fvNV
#define glVertexAttrib2hNV glew::glcore::glVertexAttrib2hNV
#define glVertexAttrib2hvNV glew::glcore::glVertexAttrib2hvNV
#define glVertexAttrib2s glew::glcore::glVertexAttrib2s
#define glVertexAttrib2sARB glew::glcore::glVertexAttrib2sARB
#define glVertexAttrib2sNV glew::glcore::glVertexAttrib2sNV
#define glVertexAttrib2sv glew::glcore::glVertexAttrib2sv
#define glVertexAttrib2svARB glew::glcore::glVertexAttrib2svARB
#define glVertexAttrib2svNV glew::glcore::glVertexAttrib2svNV
#define glVertexAttrib3d glew::glcore::glVertexAttrib3d
#define glVertexAttrib3dARB glew::glcore::glVertexAttrib3dARB
#define glVertexAttrib3dNV glew::glcore::glVertexAttrib3dNV
#define glVertexAttrib3dv glew::glcore::glVertexAttrib3dv
#define glVertexAttrib3dvARB glew::glcore::glVertexAttrib3dvARB
#define glVertexAttrib3dvNV glew::glcore::glVertexAttrib3dvNV
#define glVertexAttrib3f glew::glcore::glVertexAttrib3f
#define glVertexAttrib3fARB glew::glcore::glVertexAttrib3fARB
#define glVertexAttrib3fNV glew::glcore::glVertexAttrib3fNV
#define glVertexAttrib3fv glew::glcore::glVertexAttrib3fv
#define glVertexAttrib3fvARB glew::glcore::glVertexAttrib3fvARB
#define glVertexAttrib3fvNV glew::glcore::glVertexAttrib3fvNV
#define glVertexAttrib3hNV glew::glcore::glVertexAttrib3hNV
#define glVertexAttrib3hvNV glew::glcore::glVertexAttrib3hvNV
#define glVertexAttrib3s glew::glcore::glVertexAttrib3s
#define glVertexAttrib3sARB glew::glcore::glVertexAttrib3sARB
#define glVertexAttrib3sNV glew::glcore::glVertexAttrib3sNV
#define glVertexAttrib3sv glew::glcore::glVertexAttrib3sv
#define glVertexAttrib3svARB glew::glcore::glVertexAttrib3svARB
#define glVertexAttrib3svNV glew::glcore::glVertexAttrib3svNV
#define glVertexAttrib4Nbv glew::glcore::glVertexAttrib4Nbv
#define glVertexAttrib4NbvARB glew::glcore::glVertexAttrib4NbvARB
#define glVertexAttrib4Niv glew::glcore::glVertexAttrib4Niv
#define glVertexAttrib4NivARB glew::glcore::glVertexAttrib4NivARB
#define glVertexAttrib4Nsv glew::glcore::glVertexAttrib4Nsv
#define glVertexAttrib4NsvARB glew::glcore::glVertexAttrib4NsvARB
#define glVertexAttrib4Nub glew::glcore::glVertexAttrib4Nub
#define glVertexAttrib4NubARB glew::glcore::glVertexAttrib4NubARB
#define glVertexAttrib4Nubv glew::glcore::glVertexAttrib4Nubv
#define glVertexAttrib4NubvARB glew::glcore::glVertexAttrib4NubvARB
#define glVertexAttrib4Nuiv glew::glcore::glVertexAttrib4Nuiv
#define glVertexAttrib4NuivARB glew::glcore::glVertexAttrib4NuivARB
#define glVertexAttrib4Nusv glew::glcore::glVertexAttrib4Nusv
#define glVertexAttrib4NusvARB glew::glcore::glVertexAttrib4NusvARB
#define glVertexAttrib4bv glew::glcore::glVertexAttrib4bv
#define glVertexAttrib4bvARB glew::glcore::glVertexAttrib4bvARB
#define glVertexAttrib4d glew::glcore::glVertexAttrib4d
#define glVertexAttrib4dARB glew::glcore::glVertexAttrib4dARB
#define glVertexAttrib4dNV glew::glcore::glVertexAttrib4dNV
#define glVertexAttrib4dv glew::glcore::glVertexAttrib4dv
#define glVertexAttrib4dvARB glew::glcore::glVertexAttrib4dvARB
#define glVertexAttrib4dvNV glew::glcore::glVertexAttrib4dvNV
#define glVertexAttrib4f glew::glcore::glVertexAttrib4f
#define glVertexAttrib4fARB glew::glcore::glVertexAttrib4fARB
#define glVertexAttrib4fNV glew::glcore::glVertexAttrib4fNV
#define glVertexAttrib4fv glew::glcore::glVertexAttrib4fv
#define glVertexAttrib4fvARB glew::glcore::glVertexAttrib4fvARB
#define glVertexAttrib4fvNV glew::glcore::glVertexAttrib4fvNV
#define glVertexAttrib4hNV glew::glcore::glVertexAttrib4hNV
#define glVertexAttrib4hvNV glew::glcore::glVertexAttrib4hvNV
#define glVertexAttrib4iv glew::glcore::glVertexAttrib4iv
#define glVertexAttrib4ivARB glew::glcore::glVertexAttrib4ivARB
#define glVertexAttrib4s glew::glcore::glVertexAttrib4s
#define glVertexAttrib4sARB glew::glcore::glVertexAttrib4sARB
#define glVertexAttrib4sNV glew::glcore::glVertexAttrib4sNV
#define glVertexAttrib4sv glew::glcore::glVertexAttrib4sv
#define glVertexAttrib4svARB glew::glcore::glVertexAttrib4svARB
#define glVertexAttrib4svNV glew::glcore::glVertexAttrib4svNV
#define glVertexAttrib4ubNV glew::glcore::glVertexAttrib4ubNV
#define glVertexAttrib4ubv glew::glcore::glVertexAttrib4ubv
#define glVertexAttrib4ubvARB glew::glcore::glVertexAttrib4ubvARB
#define glVertexAttrib4ubvNV glew::glcore::glVertexAttrib4ubvNV
#define glVertexAttrib4uiv glew::glcore::glVertexAttrib4uiv
#define glVertexAttrib4uivARB glew::glcore::glVertexAttrib4uivARB
#define glVertexAttrib4usv glew::glcore::glVertexAttrib4usv
#define glVertexAttrib4usvARB glew::glcore::glVertexAttrib4usvARB
#define glVertexAttribArrayObjectATI glew::glcore::glVertexAttribArrayObjectATI
#define glVertexAttribBinding glew::glcore::glVertexAttribBinding
#define glVertexAttribDivisor glew::glcore::glVertexAttribDivisor
#define glVertexAttribDivisorANGLE glew::glcore::glVertexAttribDivisorANGLE
#define glVertexAttribDivisorARB glew::glcore::glVertexAttribDivisorARB
#define glVertexAttribDivisorEXT glew::glcore::glVertexAttribDivisorEXT
#define glVertexAttribDivisorNV glew::glcore::glVertexAttribDivisorNV
#define glVertexAttribFormat glew::glcore::glVertexAttribFormat
#define glVertexAttribFormatNV glew::glcore::glVertexAttribFormatNV
#define glVertexAttribI1i glew::glcore::glVertexAttribI1i
#define glVertexAttribI1iEXT glew::glcore::glVertexAttribI1iEXT
#define glVertexAttribI1iv glew::glcore::glVertexAttribI1iv
#define glVertexAttribI1ivEXT glew::glcore::glVertexAttribI1ivEXT
#define glVertexAttribI1ui glew::glcore::glVertexAttribI1ui
#define glVertexAttribI1uiEXT glew::glcore::glVertexAttribI1uiEXT
#define glVertexAttribI1uiv glew::glcore::glVertexAttribI1uiv
#define glVertexAttribI1uivEXT glew::glcore::glVertexAttribI1uivEXT
#define glVertexAttribI2i glew::glcore::glVertexAttribI2i
#define glVertexAttribI2iEXT glew::glcore::glVertexAttribI2iEXT
#define glVertexAttribI2iv glew::glcore::glVertexAttribI2iv
#define glVertexAttribI2ivEXT glew::glcore::glVertexAttribI2ivEXT
#define glVertexAttribI2ui glew::glcore::glVertexAttribI2ui
#define glVertexAttribI2uiEXT glew::glcore::glVertexAttribI2uiEXT
#define glVertexAttribI2uiv glew::glcore::glVertexAttribI2uiv
#define glVertexAttribI2uivEXT glew::glcore::glVertexAttribI2uivEXT
#define glVertexAttribI3i glew::glcore::glVertexAttribI3i
#define glVertexAttribI3iEXT glew::glcore::glVertexAttribI3iEXT
#define glVertexAttribI3iv glew::glcore::glVertexAttribI3iv
#define glVertexAttribI3ivEXT glew::glcore::glVertexAttribI3ivEXT
#define glVertexAttribI3ui glew::glcore::glVertexAttribI3ui
#define glVertexAttribI3uiEXT glew::glcore::glVertexAttribI3uiEXT
#define glVertexAttribI3uiv glew::glcore::glVertexAttribI3uiv
#define glVertexAttribI3uivEXT glew::glcore::glVertexAttribI3uivEXT
#define glVertexAttribI4bv glew::glcore::glVertexAttribI4bv
#define glVertexAttribI4bvEXT glew::glcore::glVertexAttribI4bvEXT
#define glVertexAttribI4i glew::glcore::glVertexAttribI4i
#define glVertexAttribI4iEXT glew::glcore::glVertexAttribI4iEXT
#define glVertexAttribI4iv glew::glcore::glVertexAttribI4iv
#define glVertexAttribI4ivEXT glew::glcore::glVertexAttribI4ivEXT
#define glVertexAttribI4sv glew::glcore::glVertexAttribI4sv
#define glVertexAttribI4svEXT glew::glcore::glVertexAttribI4svEXT
#define glVertexAttribI4ubv glew::glcore::glVertexAttribI4ubv
#define glVertexAttribI4ubvEXT glew::glcore::glVertexAttribI4ubvEXT
#define glVertexAttribI4ui glew::glcore::glVertexAttribI4ui
#define glVertexAttribI4uiEXT glew::glcore::glVertexAttribI4uiEXT
#define glVertexAttribI4uiv glew::glcore::glVertexAttribI4uiv
#define glVertexAttribI4uivEXT glew::glcore::glVertexAttribI4uivEXT
#define glVertexAttribI4usv glew::glcore::glVertexAttribI4usv
#define glVertexAttribI4usvEXT glew::glcore::glVertexAttribI4usvEXT
#define glVertexAttribIFormat glew::glcore::glVertexAttribIFormat
#define glVertexAttribIFormatNV glew::glcore::glVertexAttribIFormatNV
#define glVertexAttribIPointer glew::glcore::glVertexAttribIPointer
#define glVertexAttribIPointerEXT glew::glcore::glVertexAttribIPointerEXT
#define glVertexAttribL1d glew::glcore::glVertexAttribL1d
#define glVertexAttribL1dEXT glew::glcore::glVertexAttribL1dEXT
#define glVertexAttribL1dv glew::glcore::glVertexAttribL1dv
#define glVertexAttribL1dvEXT glew::glcore::glVertexAttribL1dvEXT
#define glVertexAttribL1i64NV glew::glcore::glVertexAttribL1i64NV
#define glVertexAttribL1i64vNV glew::glcore::glVertexAttribL1i64vNV
#define glVertexAttribL1ui64ARB glew::glcore::glVertexAttribL1ui64ARB
#define glVertexAttribL1ui64NV glew::glcore::glVertexAttribL1ui64NV
#define glVertexAttribL1ui64vARB glew::glcore::glVertexAttribL1ui64vARB
#define glVertexAttribL1ui64vNV glew::glcore::glVertexAttribL1ui64vNV
#define glVertexAttribL2d glew::glcore::glVertexAttribL2d
#define glVertexAttribL2dEXT glew::glcore::glVertexAttribL2dEXT
#define glVertexAttribL2dv glew::glcore::glVertexAttribL2dv
#define glVertexAttribL2dvEXT glew::glcore::glVertexAttribL2dvEXT
#define glVertexAttribL2i64NV glew::glcore::glVertexAttribL2i64NV
#define glVertexAttribL2i64vNV glew::glcore::glVertexAttribL2i64vNV
#define glVertexAttribL2ui64NV glew::glcore::glVertexAttribL2ui64NV
#define glVertexAttribL2ui64vNV glew::glcore::glVertexAttribL2ui64vNV
#define glVertexAttribL3d glew::glcore::glVertexAttribL3d
#define glVertexAttribL3dEXT glew::glcore::glVertexAttribL3dEXT
#define glVertexAttribL3dv glew::glcore::glVertexAttribL3dv
#define glVertexAttribL3dvEXT glew::glcore::glVertexAttribL3dvEXT
#define glVertexAttribL3i64NV glew::glcore::glVertexAttribL3i64NV
#define glVertexAttribL3i64vNV glew::glcore::glVertexAttribL3i64vNV
#define glVertexAttribL3ui64NV glew::glcore::glVertexAttribL3ui64NV
#define glVertexAttribL3ui64vNV glew::glcore::glVertexAttribL3ui64vNV
#define glVertexAttribL4d glew::glcore::glVertexAttribL4d
#define glVertexAttribL4dEXT glew::glcore::glVertexAttribL4dEXT
#define glVertexAttribL4dv glew::glcore::glVertexAttribL4dv
#define glVertexAttribL4dvEXT glew::glcore::glVertexAttribL4dvEXT
#define glVertexAttribL4i64NV glew::glcore::glVertexAttribL4i64NV
#define glVertexAttribL4i64vNV glew::glcore::glVertexAttribL4i64vNV
#define glVertexAttribL4ui64NV glew::glcore::glVertexAttribL4ui64NV
#define glVertexAttribL4ui64vNV glew::glcore::glVertexAttribL4ui64vNV
#define glVertexAttribLFormat glew::glcore::glVertexAttribLFormat
#define glVertexAttribLFormatNV glew::glcore::glVertexAttribLFormatNV
#define glVertexAttribLPointer glew::glcore::glVertexAttribLPointer
#define glVertexAttribLPointerEXT glew::glcore::glVertexAttribLPointerEXT
#define glVertexAttribP1ui glew::glcore::glVertexAttribP1ui
#define glVertexAttribP1uiv glew::glcore::glVertexAttribP1uiv
#define glVertexAttribP2ui glew::glcore::glVertexAttribP2ui
#define glVertexAttribP2uiv glew::glcore::glVertexAttribP2uiv
#define glVertexAttribP3ui glew::glcore::glVertexAttribP3ui
#define glVertexAttribP3uiv glew::glcore::glVertexAttribP3uiv
#define glVertexAttribP4ui glew::glcore::glVertexAttribP4ui
#define glVertexAttribP4uiv glew::glcore::glVertexAttribP4uiv
#define glVertexAttribParameteriAMD glew::glcore::glVertexAttribParameteriAMD
#define glVertexAttribPointer glew::glcore::glVertexAttribPointer
#define glVertexAttribPointerARB glew::glcore::glVertexAttribPointerARB
#define glVertexAttribPointerNV glew::glcore::glVertexAttribPointerNV
#define glVertexAttribs1dvNV glew::glcore::glVertexAttribs1dvNV
#define glVertexAttribs1fvNV glew::glcore::glVertexAttribs1fvNV
#define glVertexAttribs1hvNV glew::glcore::glVertexAttribs1hvNV
#define glVertexAttribs1svNV glew::glcore::glVertexAttribs1svNV
#define glVertexAttribs2dvNV glew::glcore::glVertexAttribs2dvNV
#define glVertexAttribs2fvNV glew::glcore::glVertexAttribs2fvNV
#define glVertexAttribs2hvNV glew::glcore::glVertexAttribs2hvNV
#define glVertexAttribs2svNV glew::glcore::glVertexAttribs2svNV
#define glVertexAttribs3dvNV glew::glcore::glVertexAttribs3dvNV
#define glVertexAttribs3fvNV glew::glcore::glVertexAttribs3fvNV
#define glVertexAttribs3hvNV glew::glcore::glVertexAttribs3hvNV
#define glVertexAttribs3svNV glew::glcore::glVertexAttribs3svNV
#define glVertexAttribs4dvNV glew::glcore::glVertexAttribs4dvNV
#define glVertexAttribs4fvNV glew::glcore::glVertexAttribs4fvNV
#define glVertexAttribs4hvNV glew::glcore::glVertexAttribs4hvNV
#define glVertexAttribs4svNV glew::glcore::glVertexAttribs4svNV
#define glVertexAttribs4ubvNV glew::glcore::glVertexAttribs4ubvNV
#define glVertexBindingDivisor glew::glcore::glVertexBindingDivisor
#define glVertexBlendARB glew::glcore::glVertexBlendARB
#define glVertexBlendEnvfATI glew::glcore::glVertexBlendEnvfATI
#define glVertexBlendEnviATI glew::glcore::glVertexBlendEnviATI
#define glVertexFormatNV glew::glcore::glVertexFormatNV
#define glVertexP2ui glew::glcore::glVertexP2ui
#define glVertexP2uiv glew::glcore::glVertexP2uiv
#define glVertexP3ui glew::glcore::glVertexP3ui
#define glVertexP3uiv glew::glcore::glVertexP3uiv
#define glVertexP4ui glew::glcore::glVertexP4ui
#define glVertexP4uiv glew::glcore::glVertexP4uiv
#define glVertexPointer glew::glcore::glVertexPointer
#define glVertexPointerEXT glew::glcore::glVertexPointerEXT
#define glVertexPointerListIBM glew::glcore::glVertexPointerListIBM
#define glVertexPointervINTEL glew::glcore::glVertexPointervINTEL
#define glVertexStream1dATI glew::glcore::glVertexStream1dATI
#define glVertexStream1dvATI glew::glcore::glVertexStream1dvATI
#define glVertexStream1fATI glew::glcore::glVertexStream1fATI
#define glVertexStream1fvATI glew::glcore::glVertexStream1fvATI
#define glVertexStream1iATI glew::glcore::glVertexStream1iATI
#define glVertexStream1ivATI glew::glcore::glVertexStream1ivATI
#define glVertexStream1sATI glew::glcore::glVertexStream1sATI
#define glVertexStream1svATI glew::glcore::glVertexStream1svATI
#define glVertexStream2dATI glew::glcore::glVertexStream2dATI
#define glVertexStream2dvATI glew::glcore::glVertexStream2dvATI
#define glVertexStream2fATI glew::glcore::glVertexStream2fATI
#define glVertexStream2fvATI glew::glcore::glVertexStream2fvATI
#define glVertexStream2iATI glew::glcore::glVertexStream2iATI
#define glVertexStream2ivATI glew::glcore::glVertexStream2ivATI
#define glVertexStream2sATI glew::glcore::glVertexStream2sATI
#define glVertexStream2svATI glew::glcore::glVertexStream2svATI
#define glVertexStream3dATI glew::glcore::glVertexStream3dATI
#define glVertexStream3dvATI glew::glcore::glVertexStream3dvATI
#define glVertexStream3fATI glew::glcore::glVertexStream3fATI
#define glVertexStream3fvATI glew::glcore::glVertexStream3fvATI
#define glVertexStream3iATI glew::glcore::glVertexStream3iATI
#define glVertexStream3ivATI glew::glcore::glVertexStream3ivATI
#define glVertexStream3sATI glew::glcore::glVertexStream3sATI
#define glVertexStream3svATI glew::glcore::glVertexStream3svATI
#define glVertexStream4dATI glew::glcore::glVertexStream4dATI
#define glVertexStream4dvATI glew::glcore::glVertexStream4dvATI
#define glVertexStream4fATI glew::glcore::glVertexStream4fATI
#define glVertexStream4fvATI glew::glcore::glVertexStream4fvATI
#define glVertexStream4iATI glew::glcore::glVertexStream4iATI
#define glVertexStream4ivATI glew::glcore::glVertexStream4ivATI
#define glVertexStream4sATI glew::glcore::glVertexStream4sATI
#define glVertexStream4svATI glew::glcore::glVertexStream4svATI
#define glVertexWeightPointerEXT glew::glcore::glVertexWeightPointerEXT
#define glVertexWeightfEXT glew::glcore::glVertexWeightfEXT
#define glVertexWeightfvEXT glew::glcore::glVertexWeightfvEXT
#define glVertexWeighthNV glew::glcore::glVertexWeighthNV
#define glVertexWeighthvNV glew::glcore::glVertexWeighthvNV
#define glVideoCaptureNV glew::glcore::glVideoCaptureNV
#define glVideoCaptureStreamParameterdvNV glew::glcore::glVideoCaptureStreamParameterdvNV
#define glVideoCaptureStreamParameterfvNV glew::glcore::glVideoCaptureStreamParameterfvNV
#define glVideoCaptureStreamParameterivNV glew::glcore::glVideoCaptureStreamParameterivNV
#define glViewport glew::glcore::glViewport
#define glViewportArrayv glew::glcore::glViewportArrayv
#define glViewportArrayvNV glew::glcore::glViewportArrayvNV
#define glViewportIndexedf glew::glcore::glViewportIndexedf
#define glViewportIndexedfNV glew::glcore::glViewportIndexedfNV
#define glViewportIndexedfv glew::glcore::glViewportIndexedfv
#define glViewportIndexedfvNV glew::glcore::glViewportIndexedfvNV
#define glWaitSync glew::glcore::glWaitSync
#define glWaitSyncAPPLE glew::glcore::glWaitSyncAPPLE
#define glWeightPathsNV glew::glcore::glWeightPathsNV
#define glWeightPointerARB glew::glcore::glWeightPointerARB
#define glWeightPointerOES glew::glcore::glWeightPointerOES
#define glWeightbvARB glew::glcore::glWeightbvARB
#define glWeightdvARB glew::glcore::glWeightdvARB
#define glWeightfvARB glew::glcore::glWeightfvARB
#define glWeightivARB glew::glcore::glWeightivARB
#define glWeightsvARB glew::glcore::glWeightsvARB
#define glWeightubvARB glew::glcore::glWeightubvARB
#define glWeightuivARB glew::glcore::glWeightuivARB
#define glWeightusvARB glew::glcore::glWeightusvARB
#define glWindowPos2d glew::glcore::glWindowPos2d
#define glWindowPos2dARB glew::glcore::glWindowPos2dARB
#define glWindowPos2dMESA glew::glcore::glWindowPos2dMESA
#define glWindowPos2dv glew::glcore::glWindowPos2dv
#define glWindowPos2dvARB glew::glcore::glWindowPos2dvARB
#define glWindowPos2dvMESA glew::glcore::glWindowPos2dvMESA
#define glWindowPos2f glew::glcore::glWindowPos2f
#define glWindowPos2fARB glew::glcore::glWindowPos2fARB
#define glWindowPos2fMESA glew::glcore::glWindowPos2fMESA
#define glWindowPos2fv glew::glcore::glWindowPos2fv
#define glWindowPos2fvARB glew::glcore::glWindowPos2fvARB
#define glWindowPos2fvMESA glew::glcore::glWindowPos2fvMESA
#define glWindowPos2i glew::glcore::glWindowPos2i
#define glWindowPos2iARB glew::glcore::glWindowPos2iARB
#define glWindowPos2iMESA glew::glcore::glWindowPos2iMESA
#define glWindowPos2iv glew::glcore::glWindowPos2iv
#define glWindowPos2ivARB glew::glcore::glWindowPos2ivARB
#define glWindowPos2ivMESA glew::glcore::glWindowPos2ivMESA
#define glWindowPos2s glew::glcore::glWindowPos2s
#define glWindowPos2sARB glew::glcore::glWindowPos2sARB
#define glWindowPos2sMESA glew::glcore::glWindowPos2sMESA
#define glWindowPos2sv glew::glcore::glWindowPos2sv
#define glWindowPos2svARB glew::glcore::glWindowPos2svARB
#define glWindowPos2svMESA glew::glcore::glWindowPos2svMESA
#define glWindowPos3d glew::glcore::glWindowPos3d
#define glWindowPos3dARB glew::glcore::glWindowPos3dARB
#define glWindowPos3dMESA glew::glcore::glWindowPos3dMESA
#define glWindowPos3dv glew::glcore::glWindowPos3dv
#define glWindowPos3dvARB glew::glcore::glWindowPos3dvARB
#define glWindowPos3dvMESA glew::glcore::glWindowPos3dvMESA
#define glWindowPos3f glew::glcore::glWindowPos3f
#define glWindowPos3fARB glew::glcore::glWindowPos3fARB
#define glWindowPos3fMESA glew::glcore::glWindowPos3fMESA
#define glWindowPos3fv glew::glcore::glWindowPos3fv
#define glWindowPos3fvARB glew::glcore::glWindowPos3fvARB
#define glWindowPos3fvMESA glew::glcore::glWindowPos3fvMESA
#define glWindowPos3i glew::glcore::glWindowPos3i
#define glWindowPos3iARB glew::glcore::glWindowPos3iARB
#define glWindowPos3iMESA glew::glcore::glWindowPos3iMESA
#define glWindowPos3iv glew::glcore::glWindowPos3iv
#define glWindowPos3ivARB glew::glcore::glWindowPos3ivARB
#define glWindowPos3ivMESA glew::glcore::glWindowPos3ivMESA
#define glWindowPos3s glew::glcore::glWindowPos3s
#define glWindowPos3sARB glew::glcore::glWindowPos3sARB
#define glWindowPos3sMESA glew::glcore::glWindowPos3sMESA
#define glWindowPos3sv glew::glcore::glWindowPos3sv
#define glWindowPos3svARB glew::glcore::glWindowPos3svARB
#define glWindowPos3svMESA glew::glcore::glWindowPos3svMESA
#define glWindowPos4dMESA glew::glcore::glWindowPos4dMESA
#define glWindowPos4dvMESA glew::glcore::glWindowPos4dvMESA
#define glWindowPos4fMESA glew::glcore::glWindowPos4fMESA
#define glWindowPos4fvMESA glew::glcore::glWindowPos4fvMESA
#define glWindowPos4iMESA glew::glcore::glWindowPos4iMESA
#define glWindowPos4ivMESA glew::glcore::glWindowPos4ivMESA
#define glWindowPos4sMESA glew::glcore::glWindowPos4sMESA
#define glWindowPos4svMESA glew::glcore::glWindowPos4svMESA
#define glWriteMaskEXT glew::glcore::glWriteMaskEXT
#define glCoverageModulationNV glew::glcore::glCoverageModulationNV
#define glCoverageModulationTableNV glew::glcore::glCoverageModulationTableNV
#define glFragmentCoverageColorNV glew::glcore::glFragmentCoverageColorNV
#define glFramebufferSampleLocationsfvNV glew::glcore::glFramebufferSampleLocationsfvNV
#define glGetCoverageModulationTableNV glew::glcore::glGetCoverageModulationTableNV
#define glNamedFramebufferSampleLocationsfvNV glew::glcore::glNamedFramebufferSampleLocationsfvNV
#define glRasterSamplesEXT glew::glcore::glRasterSamplesEXT
#define glResolveDepthValuesNV glew::glcore::glResolveDepthValuesNV
#define glSubpixelPrecisionBiasNV glew::glcore::glSubpixelPrecisionBiasNV

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLCORE_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
