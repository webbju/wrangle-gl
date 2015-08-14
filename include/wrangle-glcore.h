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

// GL_ARB_ES2_compatibility
typedef  void  ( PFNGLRELEASESHADERCOMPILERPROC) ();
typedef  void  ( PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
typedef  void  ( PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
typedef  void  ( PFNGLDEPTHRANGEFPROC) (GLfloat n, GLfloat f);
typedef  void  ( PFNGLCLEARDEPTHFPROC) (GLfloat d);

// GL_ARB_ES3_1_compatibility
typedef  void  ( PFNGLMEMORYBARRIERBYREGIONPROC) (GLbitfield barriers);

// GL_ARB_base_instance
typedef  void  ( PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef  void  ( PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
typedef  void  ( PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

// GL_ARB_bindless_texture
typedef  GLuint64 ( PFNGLGETTEXTUREHANDLEARBPROC) (GLuint texture);
typedef  GLuint64 ( PFNGLGETTEXTURESAMPLERHANDLEARBPROC) (GLuint texture, GLuint sampler);
typedef  void  ( PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle);
typedef  void  ( PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) (GLuint64 handle);
typedef  GLuint64 ( PFNGLGETIMAGEHANDLEARBPROC) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef  void  ( PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle, GLenum access);
typedef  void  ( PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) (GLuint64 handle);
typedef  void  ( PFNGLUNIFORMHANDLEUI64ARBPROC) (GLint location, GLuint64 value);
typedef  void  ( PFNGLUNIFORMHANDLEUI64VARBPROC) (GLint location, GLsizei count, const GLuint64 * value);
typedef  void  ( PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) (GLuint program, GLint location, GLuint64 value);
typedef  void  ( PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
typedef  GLboolean ( PFNGLISTEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle);
typedef  GLboolean ( PFNGLISIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle);
typedef  void  ( PFNGLVERTEXATTRIBL1UI64ARBPROC) (GLuint index, GLuint64EXT x);
typedef  void  ( PFNGLVERTEXATTRIBL1UI64VARBPROC) (GLuint index, const GLuint64EXT * v);
typedef  void  ( PFNGLGETVERTEXATTRIBLUI64VARBPROC) (GLuint index, GLenum pname, GLuint64EXT * params);

// GL_ARB_blend_func_extended
typedef  void  ( PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
typedef  GLint ( PFNGLGETFRAGDATAINDEXPROC) (GLuint program, const GLchar * name);

// GL_ARB_buffer_storage
typedef  void  ( PFNGLBUFFERSTORAGEPROC) (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);

// GL_ARB_cl_event
typedef  GLsync ( PFNGLCREATESYNCFROMCLEVENTARBPROC) (struct _cl_context * context, struct _cl_event * event, GLbitfield flags);

// GL_ARB_clear_buffer_object
typedef  void  ( PFNGLCLEARBUFFERDATAPROC) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef  void  ( PFNGLCLEARBUFFERSUBDATAPROC) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);

// GL_ARB_clear_texture
typedef  void  ( PFNGLCLEARTEXIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
typedef  void  ( PFNGLCLEARTEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);

// GL_ARB_clip_control
typedef  void  ( PFNGLCLIPCONTROLPROC) (GLenum origin, GLenum depth);

// GL_ARB_compute_shader
typedef  void  ( PFNGLDISPATCHCOMPUTEPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef  void  ( PFNGLDISPATCHCOMPUTEINDIRECTPROC) (GLintptr indirect);

// GL_ARB_compute_variable_group_size
typedef  void  ( PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);

// GL_ARB_copy_buffer
typedef  void  ( PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

// GL_ARB_copy_image
typedef  void  ( PFNGLCOPYIMAGESUBDATAPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

// GL_ARB_debug_output
typedef  void  ( PFNGLDEBUGMESSAGECONTROLARBPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
typedef  void  ( PFNGLDEBUGMESSAGEINSERTARBPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
typedef  void  ( PFNGLDEBUGMESSAGECALLBACKARBPROC) (GLDEBUGPROCARB callback, const void * userParam);
typedef  GLuint ( PFNGLGETDEBUGMESSAGELOGARBPROC) (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATETRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint * ids);
typedef  void  ( PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) (GLuint xfb, GLuint index, GLuint buffer);
typedef  void  ( PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef  void  ( PFNGLGETTRANSFORMFEEDBACKIVPROC) (GLuint xfb, GLenum pname, GLint * param);
typedef  void  ( PFNGLGETTRANSFORMFEEDBACKI_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint * param);
typedef  void  ( PFNGLGETTRANSFORMFEEDBACKI64_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint64 * param);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATEBUFFERSPROC) (GLsizei n, GLuint * buffers);
typedef  void  ( PFNGLNAMEDBUFFERSTORAGEPROC) (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
typedef  void  ( PFNGLNAMEDBUFFERDATAPROC) (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
typedef  void  ( PFNGLNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
typedef  void  ( PFNGLCOPYNAMEDBUFFERSUBDATAPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef  void  ( PFNGLCLEARNAMEDBUFFERDATAPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
typedef  void  ( PFNGLCLEARNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
typedef  void * ( PFNGLMAPNAMEDBUFFERPROC) (GLuint buffer, GLenum access);
typedef  void * ( PFNGLMAPNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef  GLboolean ( PFNGLUNMAPNAMEDBUFFERPROC) (GLuint buffer);
typedef  void  ( PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef  void  ( PFNGLGETNAMEDBUFFERPARAMETERIVPROC) (GLuint buffer, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) (GLuint buffer, GLenum pname, GLint64 * params);
typedef  void  ( PFNGLGETNAMEDBUFFERPOINTERVPROC) (GLuint buffer, GLenum pname, void ** params);
typedef  void  ( PFNGLGETNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATEFRAMEBUFFERSPROC) (GLsizei n, GLuint * framebuffers);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) (GLuint framebuffer, GLenum pname, GLint param);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) (GLuint framebuffer, GLenum buf);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) (GLuint framebuffer, GLsizei n, const GLenum * bufs);
typedef  void  ( PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) (GLuint framebuffer, GLenum src);
typedef  void  ( PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
typedef  void  ( PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef  void  ( PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
typedef  void  ( PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
typedef  void  ( PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
typedef  void  ( PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) (GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil);
typedef  void  ( PFNGLBLITNAMEDFRAMEBUFFERPROC) (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef  GLenum ( PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) (GLuint framebuffer, GLenum target);
typedef  void  ( PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) (GLuint framebuffer, GLenum pname, GLint * param);
typedef  void  ( PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATERENDERBUFFERSPROC) (GLsizei n, GLuint * renderbuffers);
typedef  void  ( PFNGLNAMEDRENDERBUFFERSTORAGEPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef  void  ( PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef  void  ( PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) (GLuint renderbuffer, GLenum pname, GLint * params);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATETEXTURESPROC) (GLenum target, GLsizei n, GLuint * textures);
typedef  void  ( PFNGLTEXTUREBUFFERPROC) (GLuint texture, GLenum internalformat, GLuint buffer);
typedef  void  ( PFNGLTEXTUREBUFFERRANGEPROC) (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef  void  ( PFNGLTEXTURESTORAGE1DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef  void  ( PFNGLTEXTURESTORAGE2DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef  void  ( PFNGLTEXTURESTORAGE3DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef  void  ( PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef  void  ( PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef  void  ( PFNGLTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
typedef  void  ( PFNGLTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
typedef  void  ( PFNGLTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
typedef  void  ( PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
typedef  void  ( PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
typedef  void  ( PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
typedef  void  ( PFNGLCOPYTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef  void  ( PFNGLCOPYTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef  void  ( PFNGLCOPYTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef  void  ( PFNGLTEXTUREPARAMETERFPROC) (GLuint texture, GLenum pname, GLfloat param);
typedef  void  ( PFNGLTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, const GLfloat * param);
typedef  void  ( PFNGLTEXTUREPARAMETERIPROC) (GLuint texture, GLenum pname, GLint param);
typedef  void  ( PFNGLTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, const GLint * params);
typedef  void  ( PFNGLTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, const GLuint * params);
typedef  void  ( PFNGLTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, const GLint * param);
typedef  void  ( PFNGLGENERATETEXTUREMIPMAPPROC) (GLuint texture);
typedef  void  ( PFNGLBINDTEXTUREUNITPROC) (GLuint unit, GLuint texture);
typedef  void  ( PFNGLGETTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef  void  ( PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLsizei bufSize, void * pixels);
typedef  void  ( PFNGLGETTEXTURELEVELPARAMETERFVPROC) (GLuint texture, GLint level, GLenum pname, GLfloat * params);
typedef  void  ( PFNGLGETTEXTURELEVELPARAMETERIVPROC) (GLuint texture, GLint level, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, GLfloat * params);
typedef  void  ( PFNGLGETTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, GLuint * params);
typedef  void  ( PFNGLGETTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, GLint * params);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATEVERTEXARRAYSPROC) (GLsizei n, GLuint * arrays);
typedef  void  ( PFNGLDISABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
typedef  void  ( PFNGLENABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
typedef  void  ( PFNGLVERTEXARRAYELEMENTBUFFERPROC) (GLuint vaobj, GLuint buffer);
typedef  void  ( PFNGLVERTEXARRAYVERTEXBUFFERPROC) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef  void  ( PFNGLVERTEXARRAYVERTEXBUFFERSPROC) (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
typedef  void  ( PFNGLVERTEXARRAYATTRIBBINDINGPROC) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef  void  ( PFNGLVERTEXARRAYATTRIBFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef  void  ( PFNGLVERTEXARRAYATTRIBIFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef  void  ( PFNGLVERTEXARRAYATTRIBLFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef  void  ( PFNGLVERTEXARRAYBINDINGDIVISORPROC) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef  void  ( PFNGLGETVERTEXARRAYIVPROC) (GLuint vaobj, GLenum pname, GLint * param);
typedef  void  ( PFNGLGETVERTEXARRAYINDEXEDIVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint * param);
typedef  void  ( PFNGLGETVERTEXARRAYINDEXED64IVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATESAMPLERSPROC) (GLsizei n, GLuint * samplers);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATEPROGRAMPIPELINESPROC) (GLsizei n, GLuint * pipelines);

// GL_ARB_direct_state_access
typedef  void  ( PFNGLCREATEQUERIESPROC) (GLenum target, GLsizei n, GLuint * ids);
typedef  void  ( PFNGLGETQUERYBUFFEROBJECTI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef  void  ( PFNGLGETQUERYBUFFEROBJECTIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef  void  ( PFNGLGETQUERYBUFFEROBJECTUI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
typedef  void  ( PFNGLGETQUERYBUFFEROBJECTUIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);

// GL_ARB_draw_buffers_blend
typedef  void  ( PFNGLBLENDEQUATIONIARBPROC) (GLuint buf, GLenum mode);
typedef  void  ( PFNGLBLENDEQUATIONSEPARATEIARBPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef  void  ( PFNGLBLENDFUNCIARBPROC) (GLuint buf, GLenum src, GLenum dst);
typedef  void  ( PFNGLBLENDFUNCSEPARATEIARBPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

// GL_ARB_draw_elements_base_vertex
typedef  void  ( PFNGLDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef  void  ( PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
typedef  void  ( PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
typedef  void  ( PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);

// GL_ARB_draw_indirect
typedef  void  ( PFNGLDRAWARRAYSINDIRECTPROC) (GLenum mode, const void * indirect);
typedef  void  ( PFNGLDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void * indirect);

// GL_ARB_framebuffer_no_attachments
typedef  void  ( PFNGLFRAMEBUFFERPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef  void  ( PFNGLGETFRAMEBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint * params);

// GL_ARB_framebuffer_object
typedef  GLboolean ( PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef  void  ( PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef  void  ( PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint * renderbuffers);
typedef  void  ( PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint * renderbuffers);
typedef  void  ( PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef  void  ( PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint * params);
typedef  GLboolean ( PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef  void  ( PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef  void  ( PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint * framebuffers);
typedef  void  ( PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint * framebuffers);
typedef  GLenum ( PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef  void  ( PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef  void  ( PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef  void  ( PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef  void  ( PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef  void  ( PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint * params);
typedef  void  ( PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef  void  ( PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef  void  ( PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef  void  ( PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);

// GL_ARB_get_program_binary
typedef  void  ( PFNGLGETPROGRAMBINARYPROC) (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
typedef  void  ( PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
typedef  void  ( PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);

// GL_ARB_get_texture_sub_image
typedef  void  ( PFNGLGETTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
typedef  void  ( PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);

// GL_ARB_gpu_shader_fp64
typedef  void  ( PFNGLUNIFORM1DPROC) (GLint location, GLdouble x);
typedef  void  ( PFNGLUNIFORM2DPROC) (GLint location, GLdouble x, GLdouble y);
typedef  void  ( PFNGLUNIFORM3DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef  void  ( PFNGLUNIFORM4DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef  void  ( PFNGLUNIFORM1DVPROC) (GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLUNIFORM2DVPROC) (GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLUNIFORM3DVPROC) (GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLUNIFORM4DVPROC) (GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX2X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX2X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX3X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX3X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX4X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLUNIFORMMATRIX4X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLGETUNIFORMDVPROC) (GLuint program, GLint location, GLdouble * params);

// GL_ARB_imaging
typedef  void  ( PFNGLBLENDCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef  void  ( PFNGLBLENDEQUATIONPROC) (GLenum mode);

// GL_ARB_indirect_parameters
typedef  void  ( PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef  void  ( PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

// GL_ARB_internalformat_query
typedef  void  ( PFNGLGETINTERNALFORMATIVPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);

// GL_ARB_internalformat_query2
typedef  void  ( PFNGLGETINTERNALFORMATI64VPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);

// GL_ARB_invalidate_subdata
typedef  void  ( PFNGLINVALIDATETEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef  void  ( PFNGLINVALIDATETEXIMAGEPROC) (GLuint texture, GLint level);
typedef  void  ( PFNGLINVALIDATEBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef  void  ( PFNGLINVALIDATEBUFFERDATAPROC) (GLuint buffer);
typedef  void  ( PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum * attachments);
typedef  void  ( PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);

// GL_ARB_map_buffer_range
typedef  void * ( PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef  void  ( PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);

// GL_ARB_multi_bind
typedef  void  ( PFNGLBINDBUFFERSBASEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
typedef  void  ( PFNGLBINDBUFFERSRANGEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
typedef  void  ( PFNGLBINDTEXTURESPROC) (GLuint first, GLsizei count, const GLuint * textures);
typedef  void  ( PFNGLBINDSAMPLERSPROC) (GLuint first, GLsizei count, const GLuint * samplers);
typedef  void  ( PFNGLBINDIMAGETEXTURESPROC) (GLuint first, GLsizei count, const GLuint * textures);
typedef  void  ( PFNGLBINDVERTEXBUFFERSPROC) (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);

// GL_ARB_multi_draw_indirect
typedef  void  ( PFNGLMULTIDRAWARRAYSINDIRECTPROC) (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
typedef  void  ( PFNGLMULTIDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);

// GL_ARB_program_interface_query
typedef  void  ( PFNGLGETPROGRAMINTERFACEIVPROC) (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
typedef  GLuint ( PFNGLGETPROGRAMRESOURCEINDEXPROC) (GLuint program, GLenum programInterface, const GLchar * name);
typedef  void  ( PFNGLGETPROGRAMRESOURCENAMEPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
typedef  void  ( PFNGLGETPROGRAMRESOURCEIVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
typedef  GLint ( PFNGLGETPROGRAMRESOURCELOCATIONPROC) (GLuint program, GLenum programInterface, const GLchar * name);
typedef  GLint ( PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) (GLuint program, GLenum programInterface, const GLchar * name);

// GL_ARB_provoking_vertex
typedef  void  ( PFNGLPROVOKINGVERTEXPROC) (GLenum mode);

// GL_ARB_robustness
typedef  GLenum ( PFNGLGETGRAPHICSRESETSTATUSARBPROC) ();
typedef  void  ( PFNGLGETNTEXIMAGEARBPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
typedef  void  ( PFNGLREADNPIXELSARBPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
typedef  void  ( PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint lod, GLsizei bufSize, void * img);
typedef  void  ( PFNGLGETNUNIFORMFVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
typedef  void  ( PFNGLGETNUNIFORMIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLint * params);
typedef  void  ( PFNGLGETNUNIFORMUIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
typedef  void  ( PFNGLGETNUNIFORMDVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble * params);

// GL_ARB_sample_shading
typedef  void  ( PFNGLMINSAMPLESHADINGARBPROC) (GLfloat value);

// GL_ARB_sampler_objects
typedef  void  ( PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint * samplers);
typedef  void  ( PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint * samplers);
typedef  GLboolean ( PFNGLISSAMPLERPROC) (GLuint sampler);
typedef  void  ( PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
typedef  void  ( PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
typedef  void  ( PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint * param);
typedef  void  ( PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
typedef  void  ( PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat * param);
typedef  void  ( PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, const GLint * param);
typedef  void  ( PFNGLSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, const GLuint * param);
typedef  void  ( PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat * params);
typedef  void  ( PFNGLGETSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, GLuint * params);

// GL_ARB_separate_shader_objects
typedef  void  ( PFNGLUSEPROGRAMSTAGESPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef  void  ( PFNGLACTIVESHADERPROGRAMPROC) (GLuint pipeline, GLuint program);
typedef  GLuint ( PFNGLCREATESHADERPROGRAMVPROC) (GLenum type, GLsizei count, const GLchar *const* strings);
typedef  void  ( PFNGLBINDPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef  void  ( PFNGLDELETEPROGRAMPIPELINESPROC) (GLsizei n, const GLuint * pipelines);
typedef  void  ( PFNGLGENPROGRAMPIPELINESPROC) (GLsizei n, GLuint * pipelines);
typedef  GLboolean ( PFNGLISPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef  void  ( PFNGLGETPROGRAMPIPELINEIVPROC) (GLuint pipeline, GLenum pname, GLint * params);
typedef  void  ( PFNGLPROGRAMUNIFORM1IPROC) (GLuint program, GLint location, GLint v0);
typedef  void  ( PFNGLPROGRAMUNIFORM1IVPROC) (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM1FPROC) (GLuint program, GLint location, GLfloat v0);
typedef  void  ( PFNGLPROGRAMUNIFORM1FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORM1DPROC) (GLuint program, GLint location, GLdouble v0);
typedef  void  ( PFNGLPROGRAMUNIFORM1DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORM1UIPROC) (GLuint program, GLint location, GLuint v0);
typedef  void  ( PFNGLPROGRAMUNIFORM1UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM2IPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef  void  ( PFNGLPROGRAMUNIFORM2IVPROC) (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM2FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef  void  ( PFNGLPROGRAMUNIFORM2FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORM2DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef  void  ( PFNGLPROGRAMUNIFORM2DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORM2UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef  void  ( PFNGLPROGRAMUNIFORM2UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM3IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef  void  ( PFNGLPROGRAMUNIFORM3IVPROC) (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM3FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef  void  ( PFNGLPROGRAMUNIFORM3FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORM3DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef  void  ( PFNGLPROGRAMUNIFORM3DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORM3UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef  void  ( PFNGLPROGRAMUNIFORM3UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM4IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef  void  ( PFNGLPROGRAMUNIFORM4IVPROC) (GLuint program, GLint location, GLsizei count, const GLint * value);
typedef  void  ( PFNGLPROGRAMUNIFORM4FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef  void  ( PFNGLPROGRAMUNIFORM4FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORM4DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef  void  ( PFNGLPROGRAMUNIFORM4DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORM4UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef  void  ( PFNGLPROGRAMUNIFORM4UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
typedef  void  ( PFNGLVALIDATEPROGRAMPIPELINEPROC) (GLuint pipeline);
typedef  void  ( PFNGLGETPROGRAMPIPELINEINFOLOGPROC) (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);

// GL_ARB_shader_atomic_counters
typedef  void  ( PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);

// GL_ARB_shader_image_load_store
typedef  void  ( PFNGLBINDIMAGETEXTUREPROC) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef  void  ( PFNGLMEMORYBARRIERPROC) (GLbitfield barriers);

// GL_ARB_shader_storage_buffer_object
typedef  void  ( PFNGLSHADERSTORAGEBLOCKBINDINGPROC) (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);

// GL_ARB_shader_subroutine
typedef  GLint ( PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) (GLuint program, GLenum shadertype, const GLchar * name);
typedef  GLuint ( PFNGLGETSUBROUTINEINDEXPROC) (GLuint program, GLenum shadertype, const GLchar * name);
typedef  void  ( PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
typedef  void  ( PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
typedef  void  ( PFNGLGETACTIVESUBROUTINENAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
typedef  void  ( PFNGLUNIFORMSUBROUTINESUIVPROC) (GLenum shadertype, GLsizei count, const GLuint * indices);
typedef  void  ( PFNGLGETUNIFORMSUBROUTINEUIVPROC) (GLenum shadertype, GLint location, GLuint * params);
typedef  void  ( PFNGLGETPROGRAMSTAGEIVPROC) (GLuint program, GLenum shadertype, GLenum pname, GLint * values);

// GL_ARB_shading_language_include
typedef  void  ( PFNGLNAMEDSTRINGARBPROC) (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string);
typedef  void  ( PFNGLDELETENAMEDSTRINGARBPROC) (GLint namelen, const GLchar * name);
typedef  void  ( PFNGLCOMPILESHADERINCLUDEARBPROC) (GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length);
typedef  GLboolean ( PFNGLISNAMEDSTRINGARBPROC) (GLint namelen, const GLchar * name);
typedef  void  ( PFNGLGETNAMEDSTRINGARBPROC) (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string);
typedef  void  ( PFNGLGETNAMEDSTRINGIVARBPROC) (GLint namelen, const GLchar * name, GLenum pname, GLint * params);

// GL_ARB_sparse_buffer
typedef  void  ( PFNGLBUFFERPAGECOMMITMENTARBPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);

// GL_ARB_sparse_buffer
typedef  void  ( PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);

// GL_ARB_sparse_buffer
typedef  void  ( PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);

// GL_ARB_sparse_texture
typedef  void  ( PFNGLTEXPAGECOMMITMENTARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);

// GL_ARB_sync
typedef  GLsync ( PFNGLFENCESYNCPROC) (GLenum condition, GLbitfield flags);
typedef  GLboolean ( PFNGLISSYNCPROC) (GLsync sync);
typedef  void  ( PFNGLDELETESYNCPROC) (GLsync sync);
typedef  GLenum ( PFNGLCLIENTWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef  void  ( PFNGLWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef  void  ( PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64 * data);
typedef  void  ( PFNGLGETSYNCIVPROC) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);

// GL_ARB_tessellation_shader
typedef  void  ( PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
typedef  void  ( PFNGLPATCHPARAMETERFVPROC) (GLenum pname, const GLfloat * values);

// GL_ARB_texture_barrier
typedef  void  ( PFNGLTEXTUREBARRIERPROC) ();

// GL_ARB_texture_buffer_range
typedef  void  ( PFNGLTEXBUFFERRANGEPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

// GL_ARB_texture_multisample
typedef  void  ( PFNGLTEXIMAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef  void  ( PFNGLTEXIMAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef  void  ( PFNGLGETMULTISAMPLEFVPROC) (GLenum pname, GLuint index, GLfloat * val);
typedef  void  ( PFNGLSAMPLEMASKIPROC) (GLuint maskNumber, GLbitfield mask);

// GL_ARB_texture_storage
typedef  void  ( PFNGLTEXSTORAGE1DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef  void  ( PFNGLTEXSTORAGE2DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef  void  ( PFNGLTEXSTORAGE3DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

// GL_ARB_texture_storage_multisample
typedef  void  ( PFNGLTEXSTORAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef  void  ( PFNGLTEXSTORAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

// GL_ARB_texture_view
typedef  void  ( PFNGLTEXTUREVIEWPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

// GL_ARB_timer_query
typedef  void  ( PFNGLQUERYCOUNTERPROC) (GLuint id, GLenum target);
typedef  void  ( PFNGLGETQUERYOBJECTI64VPROC) (GLuint id, GLenum pname, GLint64 * params);
typedef  void  ( PFNGLGETQUERYOBJECTUI64VPROC) (GLuint id, GLenum pname, GLuint64 * params);

// GL_ARB_transform_feedback2
typedef  void  ( PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target, GLuint id);
typedef  void  ( PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n, const GLuint * ids);
typedef  void  ( PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint * ids);
typedef  GLboolean ( PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id);
typedef  void  ( PFNGLPAUSETRANSFORMFEEDBACKPROC) ();
typedef  void  ( PFNGLRESUMETRANSFORMFEEDBACKPROC) ();
typedef  void  ( PFNGLDRAWTRANSFORMFEEDBACKPROC) (GLenum mode, GLuint id);

// GL_ARB_transform_feedback3
typedef  void  ( PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) (GLenum mode, GLuint id, GLuint stream);
typedef  void  ( PFNGLBEGINQUERYINDEXEDPROC) (GLenum target, GLuint index, GLuint id);
typedef  void  ( PFNGLENDQUERYINDEXEDPROC) (GLenum target, GLuint index);
typedef  void  ( PFNGLGETQUERYINDEXEDIVPROC) (GLenum target, GLuint index, GLenum pname, GLint * params);

// GL_ARB_transform_feedback_instanced
typedef  void  ( PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) (GLenum mode, GLuint id, GLsizei instancecount);
typedef  void  ( PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);

// GL_ARB_uniform_buffer_object
typedef  void  ( PFNGLGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
typedef  void  ( PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETACTIVEUNIFORMNAMEPROC) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
typedef  GLuint ( PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar * uniformBlockName);
typedef  void  ( PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
typedef  void  ( PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
typedef  void  ( PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef  void  ( PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef  void  ( PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
typedef  void  ( PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint * data);

// GL_ARB_vertex_array_object
typedef  void  ( PFNGLBINDVERTEXARRAYPROC) (GLuint array);
typedef  void  ( PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint * arrays);
typedef  void  ( PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint * arrays);
typedef  GLboolean ( PFNGLISVERTEXARRAYPROC) (GLuint array);

// GL_ARB_vertex_attrib_64bit
typedef  void  ( PFNGLVERTEXATTRIBL1DPROC) (GLuint index, GLdouble x);
typedef  void  ( PFNGLVERTEXATTRIBL2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef  void  ( PFNGLVERTEXATTRIBL3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef  void  ( PFNGLVERTEXATTRIBL4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef  void  ( PFNGLVERTEXATTRIBL1DVPROC) (GLuint index, const GLdouble * v);
typedef  void  ( PFNGLVERTEXATTRIBL2DVPROC) (GLuint index, const GLdouble * v);
typedef  void  ( PFNGLVERTEXATTRIBL3DVPROC) (GLuint index, const GLdouble * v);
typedef  void  ( PFNGLVERTEXATTRIBL4DVPROC) (GLuint index, const GLdouble * v);
typedef  void  ( PFNGLVERTEXATTRIBLPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
typedef  void  ( PFNGLGETVERTEXATTRIBLDVPROC) (GLuint index, GLenum pname, GLdouble * params);

// GL_ARB_vertex_attrib_binding
typedef  void  ( PFNGLBINDVERTEXBUFFERPROC) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef  void  ( PFNGLVERTEXATTRIBFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef  void  ( PFNGLVERTEXATTRIBIFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef  void  ( PFNGLVERTEXATTRIBLFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef  void  ( PFNGLVERTEXATTRIBBINDINGPROC) (GLuint attribindex, GLuint bindingindex);
typedef  void  ( PFNGLVERTEXBINDINGDIVISORPROC) (GLuint bindingindex, GLuint divisor);

// GL_ARB_vertex_type_2_10_10_10_rev
typedef  void  ( PFNGLVERTEXATTRIBP1UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef  void  ( PFNGLVERTEXATTRIBP1UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef  void  ( PFNGLVERTEXATTRIBP2UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef  void  ( PFNGLVERTEXATTRIBP2UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef  void  ( PFNGLVERTEXATTRIBP3UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef  void  ( PFNGLVERTEXATTRIBP3UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
typedef  void  ( PFNGLVERTEXATTRIBP4UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef  void  ( PFNGLVERTEXATTRIBP4UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);

// GL_ARB_viewport_array
typedef  void  ( PFNGLVIEWPORTARRAYVPROC) (GLuint first, GLsizei count, const GLfloat * v);
typedef  void  ( PFNGLVIEWPORTINDEXEDFPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef  void  ( PFNGLVIEWPORTINDEXEDFVPROC) (GLuint index, const GLfloat * v);
typedef  void  ( PFNGLSCISSORARRAYVPROC) (GLuint first, GLsizei count, const GLint * v);
typedef  void  ( PFNGLSCISSORINDEXEDPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef  void  ( PFNGLSCISSORINDEXEDVPROC) (GLuint index, const GLint * v);
typedef  void  ( PFNGLDEPTHRANGEARRAYVPROC) (GLuint first, GLsizei count, const GLdouble * v);
typedef  void  ( PFNGLDEPTHRANGEINDEXEDPROC) (GLuint index, GLdouble n, GLdouble f);
typedef  void  ( PFNGLGETFLOATI_VPROC) (GLenum target, GLuint index, GLfloat * data);
typedef  void  ( PFNGLGETDOUBLEI_VPROC) (GLenum target, GLuint index, GLdouble * data);

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
  };
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define glReleaseShaderCompiler glew::glcore::glReleaseShaderCompiler
#define glShaderBinary glew::glcore::glShaderBinary
#define glGetShaderPrecisionFormat glew::glcore::glGetShaderPrecisionFormat
#define glDepthRangef glew::glcore::glDepthRangef
#define glClearDepthf glew::glcore::glClearDepthf
#define glMemoryBarrierByRegion glew::glcore::glMemoryBarrierByRegion
#define glDrawArraysInstancedBaseInstance glew::glcore::glDrawArraysInstancedBaseInstance
#define glDrawElementsInstancedBaseInstance glew::glcore::glDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseVertexBaseInstance glew::glcore::glDrawElementsInstancedBaseVertexBaseInstance
#define glGetTextureHandleARB glew::glcore::glGetTextureHandleARB
#define glGetTextureSamplerHandleARB glew::glcore::glGetTextureSamplerHandleARB
#define glMakeTextureHandleResidentARB glew::glcore::glMakeTextureHandleResidentARB
#define glMakeTextureHandleNonResidentARB glew::glcore::glMakeTextureHandleNonResidentARB
#define glGetImageHandleARB glew::glcore::glGetImageHandleARB
#define glMakeImageHandleResidentARB glew::glcore::glMakeImageHandleResidentARB
#define glMakeImageHandleNonResidentARB glew::glcore::glMakeImageHandleNonResidentARB
#define glUniformHandleui64ARB glew::glcore::glUniformHandleui64ARB
#define glUniformHandleui64vARB glew::glcore::glUniformHandleui64vARB
#define glProgramUniformHandleui64ARB glew::glcore::glProgramUniformHandleui64ARB
#define glProgramUniformHandleui64vARB glew::glcore::glProgramUniformHandleui64vARB
#define glIsTextureHandleResidentARB glew::glcore::glIsTextureHandleResidentARB
#define glIsImageHandleResidentARB glew::glcore::glIsImageHandleResidentARB
#define glVertexAttribL1ui64ARB glew::glcore::glVertexAttribL1ui64ARB
#define glVertexAttribL1ui64vARB glew::glcore::glVertexAttribL1ui64vARB
#define glGetVertexAttribLui64vARB glew::glcore::glGetVertexAttribLui64vARB
#define glBindFragDataLocationIndexed glew::glcore::glBindFragDataLocationIndexed
#define glGetFragDataIndex glew::glcore::glGetFragDataIndex
#define glBufferStorage glew::glcore::glBufferStorage
#define glCreateSyncFromCLeventARB glew::glcore::glCreateSyncFromCLeventARB
#define glClearBufferData glew::glcore::glClearBufferData
#define glClearBufferSubData glew::glcore::glClearBufferSubData
#define glClearTexImage glew::glcore::glClearTexImage
#define glClearTexSubImage glew::glcore::glClearTexSubImage
#define glClipControl glew::glcore::glClipControl
#define glDispatchCompute glew::glcore::glDispatchCompute
#define glDispatchComputeIndirect glew::glcore::glDispatchComputeIndirect
#define glDispatchComputeGroupSizeARB glew::glcore::glDispatchComputeGroupSizeARB
#define glCopyBufferSubData glew::glcore::glCopyBufferSubData
#define glCopyImageSubData glew::glcore::glCopyImageSubData
#define glDebugMessageControlARB glew::glcore::glDebugMessageControlARB
#define glDebugMessageInsertARB glew::glcore::glDebugMessageInsertARB
#define glDebugMessageCallbackARB glew::glcore::glDebugMessageCallbackARB
#define glGetDebugMessageLogARB glew::glcore::glGetDebugMessageLogARB
#define glCreateTransformFeedbacks glew::glcore::glCreateTransformFeedbacks
#define glTransformFeedbackBufferBase glew::glcore::glTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange glew::glcore::glTransformFeedbackBufferRange
#define glGetTransformFeedbackiv glew::glcore::glGetTransformFeedbackiv
#define glGetTransformFeedbacki_v glew::glcore::glGetTransformFeedbacki_v
#define glGetTransformFeedbacki64_v glew::glcore::glGetTransformFeedbacki64_v
#define glCreateBuffers glew::glcore::glCreateBuffers
#define glNamedBufferStorage glew::glcore::glNamedBufferStorage
#define glNamedBufferData glew::glcore::glNamedBufferData
#define glNamedBufferSubData glew::glcore::glNamedBufferSubData
#define glCopyNamedBufferSubData glew::glcore::glCopyNamedBufferSubData
#define glClearNamedBufferData glew::glcore::glClearNamedBufferData
#define glClearNamedBufferSubData glew::glcore::glClearNamedBufferSubData
#define glMapNamedBuffer glew::glcore::glMapNamedBuffer
#define glMapNamedBufferRange glew::glcore::glMapNamedBufferRange
#define glUnmapNamedBuffer glew::glcore::glUnmapNamedBuffer
#define glFlushMappedNamedBufferRange glew::glcore::glFlushMappedNamedBufferRange
#define glGetNamedBufferParameteriv glew::glcore::glGetNamedBufferParameteriv
#define glGetNamedBufferParameteri64v glew::glcore::glGetNamedBufferParameteri64v
#define glGetNamedBufferPointerv glew::glcore::glGetNamedBufferPointerv
#define glGetNamedBufferSubData glew::glcore::glGetNamedBufferSubData
#define glCreateFramebuffers glew::glcore::glCreateFramebuffers
#define glNamedFramebufferRenderbuffer glew::glcore::glNamedFramebufferRenderbuffer
#define glNamedFramebufferParameteri glew::glcore::glNamedFramebufferParameteri
#define glNamedFramebufferTexture glew::glcore::glNamedFramebufferTexture
#define glNamedFramebufferTextureLayer glew::glcore::glNamedFramebufferTextureLayer
#define glNamedFramebufferDrawBuffer glew::glcore::glNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers glew::glcore::glNamedFramebufferDrawBuffers
#define glNamedFramebufferReadBuffer glew::glcore::glNamedFramebufferReadBuffer
#define glInvalidateNamedFramebufferData glew::glcore::glInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData glew::glcore::glInvalidateNamedFramebufferSubData
#define glClearNamedFramebufferiv glew::glcore::glClearNamedFramebufferiv
#define glClearNamedFramebufferuiv glew::glcore::glClearNamedFramebufferuiv
#define glClearNamedFramebufferfv glew::glcore::glClearNamedFramebufferfv
#define glClearNamedFramebufferfi glew::glcore::glClearNamedFramebufferfi
#define glBlitNamedFramebuffer glew::glcore::glBlitNamedFramebuffer
#define glCheckNamedFramebufferStatus glew::glcore::glCheckNamedFramebufferStatus
#define glGetNamedFramebufferParameteriv glew::glcore::glGetNamedFramebufferParameteriv
#define glGetNamedFramebufferAttachmentParameteriv glew::glcore::glGetNamedFramebufferAttachmentParameteriv
#define glCreateRenderbuffers glew::glcore::glCreateRenderbuffers
#define glNamedRenderbufferStorage glew::glcore::glNamedRenderbufferStorage
#define glNamedRenderbufferStorageMultisample glew::glcore::glNamedRenderbufferStorageMultisample
#define glGetNamedRenderbufferParameteriv glew::glcore::glGetNamedRenderbufferParameteriv
#define glCreateTextures glew::glcore::glCreateTextures
#define glTextureBuffer glew::glcore::glTextureBuffer
#define glTextureBufferRange glew::glcore::glTextureBufferRange
#define glTextureStorage1D glew::glcore::glTextureStorage1D
#define glTextureStorage2D glew::glcore::glTextureStorage2D
#define glTextureStorage3D glew::glcore::glTextureStorage3D
#define glTextureStorage2DMultisample glew::glcore::glTextureStorage2DMultisample
#define glTextureStorage3DMultisample glew::glcore::glTextureStorage3DMultisample
#define glTextureSubImage1D glew::glcore::glTextureSubImage1D
#define glTextureSubImage2D glew::glcore::glTextureSubImage2D
#define glTextureSubImage3D glew::glcore::glTextureSubImage3D
#define glCompressedTextureSubImage1D glew::glcore::glCompressedTextureSubImage1D
#define glCompressedTextureSubImage2D glew::glcore::glCompressedTextureSubImage2D
#define glCompressedTextureSubImage3D glew::glcore::glCompressedTextureSubImage3D
#define glCopyTextureSubImage1D glew::glcore::glCopyTextureSubImage1D
#define glCopyTextureSubImage2D glew::glcore::glCopyTextureSubImage2D
#define glCopyTextureSubImage3D glew::glcore::glCopyTextureSubImage3D
#define glTextureParameterf glew::glcore::glTextureParameterf
#define glTextureParameterfv glew::glcore::glTextureParameterfv
#define glTextureParameteri glew::glcore::glTextureParameteri
#define glTextureParameterIiv glew::glcore::glTextureParameterIiv
#define glTextureParameterIuiv glew::glcore::glTextureParameterIuiv
#define glTextureParameteriv glew::glcore::glTextureParameteriv
#define glGenerateTextureMipmap glew::glcore::glGenerateTextureMipmap
#define glBindTextureUnit glew::glcore::glBindTextureUnit
#define glGetTextureImage glew::glcore::glGetTextureImage
#define glGetCompressedTextureImage glew::glcore::glGetCompressedTextureImage
#define glGetTextureLevelParameterfv glew::glcore::glGetTextureLevelParameterfv
#define glGetTextureLevelParameteriv glew::glcore::glGetTextureLevelParameteriv
#define glGetTextureParameterfv glew::glcore::glGetTextureParameterfv
#define glGetTextureParameterIiv glew::glcore::glGetTextureParameterIiv
#define glGetTextureParameterIuiv glew::glcore::glGetTextureParameterIuiv
#define glGetTextureParameteriv glew::glcore::glGetTextureParameteriv
#define glCreateVertexArrays glew::glcore::glCreateVertexArrays
#define glDisableVertexArrayAttrib glew::glcore::glDisableVertexArrayAttrib
#define glEnableVertexArrayAttrib glew::glcore::glEnableVertexArrayAttrib
#define glVertexArrayElementBuffer glew::glcore::glVertexArrayElementBuffer
#define glVertexArrayVertexBuffer glew::glcore::glVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers glew::glcore::glVertexArrayVertexBuffers
#define glVertexArrayAttribBinding glew::glcore::glVertexArrayAttribBinding
#define glVertexArrayAttribFormat glew::glcore::glVertexArrayAttribFormat
#define glVertexArrayAttribIFormat glew::glcore::glVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat glew::glcore::glVertexArrayAttribLFormat
#define glVertexArrayBindingDivisor glew::glcore::glVertexArrayBindingDivisor
#define glGetVertexArrayiv glew::glcore::glGetVertexArrayiv
#define glGetVertexArrayIndexediv glew::glcore::glGetVertexArrayIndexediv
#define glGetVertexArrayIndexed64iv glew::glcore::glGetVertexArrayIndexed64iv
#define glCreateSamplers glew::glcore::glCreateSamplers
#define glCreateProgramPipelines glew::glcore::glCreateProgramPipelines
#define glCreateQueries glew::glcore::glCreateQueries
#define glGetQueryBufferObjecti64v glew::glcore::glGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv glew::glcore::glGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v glew::glcore::glGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv glew::glcore::glGetQueryBufferObjectuiv
#define glBlendEquationiARB glew::glcore::glBlendEquationiARB
#define glBlendEquationSeparateiARB glew::glcore::glBlendEquationSeparateiARB
#define glBlendFunciARB glew::glcore::glBlendFunciARB
#define glBlendFuncSeparateiARB glew::glcore::glBlendFuncSeparateiARB
#define glDrawElementsBaseVertex glew::glcore::glDrawElementsBaseVertex
#define glDrawRangeElementsBaseVertex glew::glcore::glDrawRangeElementsBaseVertex
#define glDrawElementsInstancedBaseVertex glew::glcore::glDrawElementsInstancedBaseVertex
#define glMultiDrawElementsBaseVertex glew::glcore::glMultiDrawElementsBaseVertex
#define glDrawArraysIndirect glew::glcore::glDrawArraysIndirect
#define glDrawElementsIndirect glew::glcore::glDrawElementsIndirect
#define glFramebufferParameteri glew::glcore::glFramebufferParameteri
#define glGetFramebufferParameteriv glew::glcore::glGetFramebufferParameteriv
#define glIsRenderbuffer glew::glcore::glIsRenderbuffer
#define glBindRenderbuffer glew::glcore::glBindRenderbuffer
#define glDeleteRenderbuffers glew::glcore::glDeleteRenderbuffers
#define glGenRenderbuffers glew::glcore::glGenRenderbuffers
#define glRenderbufferStorage glew::glcore::glRenderbufferStorage
#define glGetRenderbufferParameteriv glew::glcore::glGetRenderbufferParameteriv
#define glIsFramebuffer glew::glcore::glIsFramebuffer
#define glBindFramebuffer glew::glcore::glBindFramebuffer
#define glDeleteFramebuffers glew::glcore::glDeleteFramebuffers
#define glGenFramebuffers glew::glcore::glGenFramebuffers
#define glCheckFramebufferStatus glew::glcore::glCheckFramebufferStatus
#define glFramebufferTexture1D glew::glcore::glFramebufferTexture1D
#define glFramebufferTexture2D glew::glcore::glFramebufferTexture2D
#define glFramebufferTexture3D glew::glcore::glFramebufferTexture3D
#define glFramebufferRenderbuffer glew::glcore::glFramebufferRenderbuffer
#define glGetFramebufferAttachmentParameteriv glew::glcore::glGetFramebufferAttachmentParameteriv
#define glGenerateMipmap glew::glcore::glGenerateMipmap
#define glBlitFramebuffer glew::glcore::glBlitFramebuffer
#define glRenderbufferStorageMultisample glew::glcore::glRenderbufferStorageMultisample
#define glFramebufferTextureLayer glew::glcore::glFramebufferTextureLayer
#define glGetProgramBinary glew::glcore::glGetProgramBinary
#define glProgramBinary glew::glcore::glProgramBinary
#define glProgramParameteri glew::glcore::glProgramParameteri
#define glGetTextureSubImage glew::glcore::glGetTextureSubImage
#define glGetCompressedTextureSubImage glew::glcore::glGetCompressedTextureSubImage
#define glUniform1d glew::glcore::glUniform1d
#define glUniform2d glew::glcore::glUniform2d
#define glUniform3d glew::glcore::glUniform3d
#define glUniform4d glew::glcore::glUniform4d
#define glUniform1dv glew::glcore::glUniform1dv
#define glUniform2dv glew::glcore::glUniform2dv
#define glUniform3dv glew::glcore::glUniform3dv
#define glUniform4dv glew::glcore::glUniform4dv
#define glUniformMatrix2dv glew::glcore::glUniformMatrix2dv
#define glUniformMatrix3dv glew::glcore::glUniformMatrix3dv
#define glUniformMatrix4dv glew::glcore::glUniformMatrix4dv
#define glUniformMatrix2x3dv glew::glcore::glUniformMatrix2x3dv
#define glUniformMatrix2x4dv glew::glcore::glUniformMatrix2x4dv
#define glUniformMatrix3x2dv glew::glcore::glUniformMatrix3x2dv
#define glUniformMatrix3x4dv glew::glcore::glUniformMatrix3x4dv
#define glUniformMatrix4x2dv glew::glcore::glUniformMatrix4x2dv
#define glUniformMatrix4x3dv glew::glcore::glUniformMatrix4x3dv
#define glGetUniformdv glew::glcore::glGetUniformdv
#define glBlendColor glew::glcore::glBlendColor
#define glBlendEquation glew::glcore::glBlendEquation
#define glMultiDrawArraysIndirectCountARB glew::glcore::glMultiDrawArraysIndirectCountARB
#define glMultiDrawElementsIndirectCountARB glew::glcore::glMultiDrawElementsIndirectCountARB
#define glGetInternalformativ glew::glcore::glGetInternalformativ
#define glGetInternalformati64v glew::glcore::glGetInternalformati64v
#define glInvalidateTexSubImage glew::glcore::glInvalidateTexSubImage
#define glInvalidateTexImage glew::glcore::glInvalidateTexImage
#define glInvalidateBufferSubData glew::glcore::glInvalidateBufferSubData
#define glInvalidateBufferData glew::glcore::glInvalidateBufferData
#define glInvalidateFramebuffer glew::glcore::glInvalidateFramebuffer
#define glInvalidateSubFramebuffer glew::glcore::glInvalidateSubFramebuffer
#define glMapBufferRange glew::glcore::glMapBufferRange
#define glFlushMappedBufferRange glew::glcore::glFlushMappedBufferRange
#define glBindBuffersBase glew::glcore::glBindBuffersBase
#define glBindBuffersRange glew::glcore::glBindBuffersRange
#define glBindTextures glew::glcore::glBindTextures
#define glBindSamplers glew::glcore::glBindSamplers
#define glBindImageTextures glew::glcore::glBindImageTextures
#define glBindVertexBuffers glew::glcore::glBindVertexBuffers
#define glMultiDrawArraysIndirect glew::glcore::glMultiDrawArraysIndirect
#define glMultiDrawElementsIndirect glew::glcore::glMultiDrawElementsIndirect
#define glGetProgramInterfaceiv glew::glcore::glGetProgramInterfaceiv
#define glGetProgramResourceIndex glew::glcore::glGetProgramResourceIndex
#define glGetProgramResourceName glew::glcore::glGetProgramResourceName
#define glGetProgramResourceiv glew::glcore::glGetProgramResourceiv
#define glGetProgramResourceLocation glew::glcore::glGetProgramResourceLocation
#define glGetProgramResourceLocationIndex glew::glcore::glGetProgramResourceLocationIndex
#define glProvokingVertex glew::glcore::glProvokingVertex
#define glGetGraphicsResetStatusARB glew::glcore::glGetGraphicsResetStatusARB
#define glGetnTexImageARB glew::glcore::glGetnTexImageARB
#define glReadnPixelsARB glew::glcore::glReadnPixelsARB
#define glGetnCompressedTexImageARB glew::glcore::glGetnCompressedTexImageARB
#define glGetnUniformfvARB glew::glcore::glGetnUniformfvARB
#define glGetnUniformivARB glew::glcore::glGetnUniformivARB
#define glGetnUniformuivARB glew::glcore::glGetnUniformuivARB
#define glGetnUniformdvARB glew::glcore::glGetnUniformdvARB
#define glMinSampleShadingARB glew::glcore::glMinSampleShadingARB
#define glGenSamplers glew::glcore::glGenSamplers
#define glDeleteSamplers glew::glcore::glDeleteSamplers
#define glIsSampler glew::glcore::glIsSampler
#define glBindSampler glew::glcore::glBindSampler
#define glSamplerParameteri glew::glcore::glSamplerParameteri
#define glSamplerParameteriv glew::glcore::glSamplerParameteriv
#define glSamplerParameterf glew::glcore::glSamplerParameterf
#define glSamplerParameterfv glew::glcore::glSamplerParameterfv
#define glSamplerParameterIiv glew::glcore::glSamplerParameterIiv
#define glSamplerParameterIuiv glew::glcore::glSamplerParameterIuiv
#define glGetSamplerParameteriv glew::glcore::glGetSamplerParameteriv
#define glGetSamplerParameterIiv glew::glcore::glGetSamplerParameterIiv
#define glGetSamplerParameterfv glew::glcore::glGetSamplerParameterfv
#define glGetSamplerParameterIuiv glew::glcore::glGetSamplerParameterIuiv
#define glUseProgramStages glew::glcore::glUseProgramStages
#define glActiveShaderProgram glew::glcore::glActiveShaderProgram
#define glCreateShaderProgramv glew::glcore::glCreateShaderProgramv
#define glBindProgramPipeline glew::glcore::glBindProgramPipeline
#define glDeleteProgramPipelines glew::glcore::glDeleteProgramPipelines
#define glGenProgramPipelines glew::glcore::glGenProgramPipelines
#define glIsProgramPipeline glew::glcore::glIsProgramPipeline
#define glGetProgramPipelineiv glew::glcore::glGetProgramPipelineiv
#define glProgramUniform1i glew::glcore::glProgramUniform1i
#define glProgramUniform1iv glew::glcore::glProgramUniform1iv
#define glProgramUniform1f glew::glcore::glProgramUniform1f
#define glProgramUniform1fv glew::glcore::glProgramUniform1fv
#define glProgramUniform1d glew::glcore::glProgramUniform1d
#define glProgramUniform1dv glew::glcore::glProgramUniform1dv
#define glProgramUniform1ui glew::glcore::glProgramUniform1ui
#define glProgramUniform1uiv glew::glcore::glProgramUniform1uiv
#define glProgramUniform2i glew::glcore::glProgramUniform2i
#define glProgramUniform2iv glew::glcore::glProgramUniform2iv
#define glProgramUniform2f glew::glcore::glProgramUniform2f
#define glProgramUniform2fv glew::glcore::glProgramUniform2fv
#define glProgramUniform2d glew::glcore::glProgramUniform2d
#define glProgramUniform2dv glew::glcore::glProgramUniform2dv
#define glProgramUniform2ui glew::glcore::glProgramUniform2ui
#define glProgramUniform2uiv glew::glcore::glProgramUniform2uiv
#define glProgramUniform3i glew::glcore::glProgramUniform3i
#define glProgramUniform3iv glew::glcore::glProgramUniform3iv
#define glProgramUniform3f glew::glcore::glProgramUniform3f
#define glProgramUniform3fv glew::glcore::glProgramUniform3fv
#define glProgramUniform3d glew::glcore::glProgramUniform3d
#define glProgramUniform3dv glew::glcore::glProgramUniform3dv
#define glProgramUniform3ui glew::glcore::glProgramUniform3ui
#define glProgramUniform3uiv glew::glcore::glProgramUniform3uiv
#define glProgramUniform4i glew::glcore::glProgramUniform4i
#define glProgramUniform4iv glew::glcore::glProgramUniform4iv
#define glProgramUniform4f glew::glcore::glProgramUniform4f
#define glProgramUniform4fv glew::glcore::glProgramUniform4fv
#define glProgramUniform4d glew::glcore::glProgramUniform4d
#define glProgramUniform4dv glew::glcore::glProgramUniform4dv
#define glProgramUniform4ui glew::glcore::glProgramUniform4ui
#define glProgramUniform4uiv glew::glcore::glProgramUniform4uiv
#define glProgramUniformMatrix2fv glew::glcore::glProgramUniformMatrix2fv
#define glProgramUniformMatrix3fv glew::glcore::glProgramUniformMatrix3fv
#define glProgramUniformMatrix4fv glew::glcore::glProgramUniformMatrix4fv
#define glProgramUniformMatrix2dv glew::glcore::glProgramUniformMatrix2dv
#define glProgramUniformMatrix3dv glew::glcore::glProgramUniformMatrix3dv
#define glProgramUniformMatrix4dv glew::glcore::glProgramUniformMatrix4dv
#define glProgramUniformMatrix2x3fv glew::glcore::glProgramUniformMatrix2x3fv
#define glProgramUniformMatrix3x2fv glew::glcore::glProgramUniformMatrix3x2fv
#define glProgramUniformMatrix2x4fv glew::glcore::glProgramUniformMatrix2x4fv
#define glProgramUniformMatrix4x2fv glew::glcore::glProgramUniformMatrix4x2fv
#define glProgramUniformMatrix3x4fv glew::glcore::glProgramUniformMatrix3x4fv
#define glProgramUniformMatrix4x3fv glew::glcore::glProgramUniformMatrix4x3fv
#define glProgramUniformMatrix2x3dv glew::glcore::glProgramUniformMatrix2x3dv
#define glProgramUniformMatrix3x2dv glew::glcore::glProgramUniformMatrix3x2dv
#define glProgramUniformMatrix2x4dv glew::glcore::glProgramUniformMatrix2x4dv
#define glProgramUniformMatrix4x2dv glew::glcore::glProgramUniformMatrix4x2dv
#define glProgramUniformMatrix3x4dv glew::glcore::glProgramUniformMatrix3x4dv
#define glProgramUniformMatrix4x3dv glew::glcore::glProgramUniformMatrix4x3dv
#define glValidateProgramPipeline glew::glcore::glValidateProgramPipeline
#define glGetProgramPipelineInfoLog glew::glcore::glGetProgramPipelineInfoLog
#define glGetActiveAtomicCounterBufferiv glew::glcore::glGetActiveAtomicCounterBufferiv
#define glBindImageTexture glew::glcore::glBindImageTexture
#define glMemoryBarrier glew::glcore::glMemoryBarrier
#define glShaderStorageBlockBinding glew::glcore::glShaderStorageBlockBinding
#define glGetSubroutineUniformLocation glew::glcore::glGetSubroutineUniformLocation
#define glGetSubroutineIndex glew::glcore::glGetSubroutineIndex
#define glGetActiveSubroutineUniformiv glew::glcore::glGetActiveSubroutineUniformiv
#define glGetActiveSubroutineUniformName glew::glcore::glGetActiveSubroutineUniformName
#define glGetActiveSubroutineName glew::glcore::glGetActiveSubroutineName
#define glUniformSubroutinesuiv glew::glcore::glUniformSubroutinesuiv
#define glGetUniformSubroutineuiv glew::glcore::glGetUniformSubroutineuiv
#define glGetProgramStageiv glew::glcore::glGetProgramStageiv
#define glNamedStringARB glew::glcore::glNamedStringARB
#define glDeleteNamedStringARB glew::glcore::glDeleteNamedStringARB
#define glCompileShaderIncludeARB glew::glcore::glCompileShaderIncludeARB
#define glIsNamedStringARB glew::glcore::glIsNamedStringARB
#define glGetNamedStringARB glew::glcore::glGetNamedStringARB
#define glGetNamedStringivARB glew::glcore::glGetNamedStringivARB
#define glBufferPageCommitmentARB glew::glcore::glBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT glew::glcore::glNamedBufferPageCommitmentEXT
#define glNamedBufferPageCommitmentARB glew::glcore::glNamedBufferPageCommitmentARB
#define glTexPageCommitmentARB glew::glcore::glTexPageCommitmentARB
#define glFenceSync glew::glcore::glFenceSync
#define glIsSync glew::glcore::glIsSync
#define glDeleteSync glew::glcore::glDeleteSync
#define glClientWaitSync glew::glcore::glClientWaitSync
#define glWaitSync glew::glcore::glWaitSync
#define glGetInteger64v glew::glcore::glGetInteger64v
#define glGetSynciv glew::glcore::glGetSynciv
#define glPatchParameteri glew::glcore::glPatchParameteri
#define glPatchParameterfv glew::glcore::glPatchParameterfv
#define glTextureBarrier glew::glcore::glTextureBarrier
#define glTexBufferRange glew::glcore::glTexBufferRange
#define glTexImage2DMultisample glew::glcore::glTexImage2DMultisample
#define glTexImage3DMultisample glew::glcore::glTexImage3DMultisample
#define glGetMultisamplefv glew::glcore::glGetMultisamplefv
#define glSampleMaski glew::glcore::glSampleMaski
#define glTexStorage1D glew::glcore::glTexStorage1D
#define glTexStorage2D glew::glcore::glTexStorage2D
#define glTexStorage3D glew::glcore::glTexStorage3D
#define glTexStorage2DMultisample glew::glcore::glTexStorage2DMultisample
#define glTexStorage3DMultisample glew::glcore::glTexStorage3DMultisample
#define glTextureView glew::glcore::glTextureView
#define glQueryCounter glew::glcore::glQueryCounter
#define glGetQueryObjecti64v glew::glcore::glGetQueryObjecti64v
#define glGetQueryObjectui64v glew::glcore::glGetQueryObjectui64v
#define glBindTransformFeedback glew::glcore::glBindTransformFeedback
#define glDeleteTransformFeedbacks glew::glcore::glDeleteTransformFeedbacks
#define glGenTransformFeedbacks glew::glcore::glGenTransformFeedbacks
#define glIsTransformFeedback glew::glcore::glIsTransformFeedback
#define glPauseTransformFeedback glew::glcore::glPauseTransformFeedback
#define glResumeTransformFeedback glew::glcore::glResumeTransformFeedback
#define glDrawTransformFeedback glew::glcore::glDrawTransformFeedback
#define glDrawTransformFeedbackStream glew::glcore::glDrawTransformFeedbackStream
#define glBeginQueryIndexed glew::glcore::glBeginQueryIndexed
#define glEndQueryIndexed glew::glcore::glEndQueryIndexed
#define glGetQueryIndexediv glew::glcore::glGetQueryIndexediv
#define glDrawTransformFeedbackInstanced glew::glcore::glDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackStreamInstanced glew::glcore::glDrawTransformFeedbackStreamInstanced
#define glGetUniformIndices glew::glcore::glGetUniformIndices
#define glGetActiveUniformsiv glew::glcore::glGetActiveUniformsiv
#define glGetActiveUniformName glew::glcore::glGetActiveUniformName
#define glGetUniformBlockIndex glew::glcore::glGetUniformBlockIndex
#define glGetActiveUniformBlockiv glew::glcore::glGetActiveUniformBlockiv
#define glGetActiveUniformBlockName glew::glcore::glGetActiveUniformBlockName
#define glUniformBlockBinding glew::glcore::glUniformBlockBinding
#define glBindBufferRange glew::glcore::glBindBufferRange
#define glBindBufferBase glew::glcore::glBindBufferBase
#define glGetIntegeri_v glew::glcore::glGetIntegeri_v
#define glBindVertexArray glew::glcore::glBindVertexArray
#define glDeleteVertexArrays glew::glcore::glDeleteVertexArrays
#define glGenVertexArrays glew::glcore::glGenVertexArrays
#define glIsVertexArray glew::glcore::glIsVertexArray
#define glVertexAttribL1d glew::glcore::glVertexAttribL1d
#define glVertexAttribL2d glew::glcore::glVertexAttribL2d
#define glVertexAttribL3d glew::glcore::glVertexAttribL3d
#define glVertexAttribL4d glew::glcore::glVertexAttribL4d
#define glVertexAttribL1dv glew::glcore::glVertexAttribL1dv
#define glVertexAttribL2dv glew::glcore::glVertexAttribL2dv
#define glVertexAttribL3dv glew::glcore::glVertexAttribL3dv
#define glVertexAttribL4dv glew::glcore::glVertexAttribL4dv
#define glVertexAttribLPointer glew::glcore::glVertexAttribLPointer
#define glGetVertexAttribLdv glew::glcore::glGetVertexAttribLdv
#define glBindVertexBuffer glew::glcore::glBindVertexBuffer
#define glVertexAttribFormat glew::glcore::glVertexAttribFormat
#define glVertexAttribIFormat glew::glcore::glVertexAttribIFormat
#define glVertexAttribLFormat glew::glcore::glVertexAttribLFormat
#define glVertexAttribBinding glew::glcore::glVertexAttribBinding
#define glVertexBindingDivisor glew::glcore::glVertexBindingDivisor
#define glVertexAttribP1ui glew::glcore::glVertexAttribP1ui
#define glVertexAttribP1uiv glew::glcore::glVertexAttribP1uiv
#define glVertexAttribP2ui glew::glcore::glVertexAttribP2ui
#define glVertexAttribP2uiv glew::glcore::glVertexAttribP2uiv
#define glVertexAttribP3ui glew::glcore::glVertexAttribP3ui
#define glVertexAttribP3uiv glew::glcore::glVertexAttribP3uiv
#define glVertexAttribP4ui glew::glcore::glVertexAttribP4ui
#define glVertexAttribP4uiv glew::glcore::glVertexAttribP4uiv
#define glViewportArrayv glew::glcore::glViewportArrayv
#define glViewportIndexedf glew::glcore::glViewportIndexedf
#define glViewportIndexedfv glew::glcore::glViewportIndexedfv
#define glScissorArrayv glew::glcore::glScissorArrayv
#define glScissorIndexed glew::glcore::glScissorIndexed
#define glScissorIndexedv glew::glcore::glScissorIndexedv
#define glDepthRangeArrayv glew::glcore::glDepthRangeArrayv
#define glDepthRangeIndexed glew::glcore::glDepthRangeIndexed
#define glGetFloati_v glew::glcore::glGetFloati_v
#define glGetDoublei_v glew::glcore::glGetDoublei_v

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // __GLEW_GLCORE_H__

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
