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

    class DeviceConfig
    {
    public:

      bool m_featureSupported [glew::glcore::FeatureSet::GLEW_GLCORE_FeatureSetCount];

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

    static void SetConfig (glew::glcore::DeviceConfig &deviceConfig) { s_deviceConfig = deviceConfig; }

    static glew::glcore::DeviceConfig &GetConfig () { return s_deviceConfig; }

  protected:

    static glew::glcore::DeviceConfig s_deviceConfig;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  public:

    static void glReleaseShaderCompiler ();
    static void glShaderBinary (GLsizei count, const GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
    static void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
    static void glDepthRangef (GLfloat n, GLfloat f);
    static void glClearDepthf (GLfloat d);
    static void glMemoryBarrierByRegion (GLbitfield barriers);
    static void glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
    static void glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
    static void glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
    static GLuint64 glGetTextureHandleARB (GLuint texture);
    static GLuint64 glGetTextureSamplerHandleARB (GLuint texture, GLuint sampler);
    static void glMakeTextureHandleResidentARB (GLuint64 handle);
    static void glMakeTextureHandleNonResidentARB (GLuint64 handle);
    static GLuint64 glGetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    static void glMakeImageHandleResidentARB (GLuint64 handle, GLenum access);
    static void glMakeImageHandleNonResidentARB (GLuint64 handle);
    static void glUniformHandleui64ARB (GLint location, GLuint64 value);
    static void glUniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 * value);
    static void glProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value);
    static void glProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 * values);
    static GLboolean glIsTextureHandleResidentARB (GLuint64 handle);
    static GLboolean glIsImageHandleResidentARB (GLuint64 handle);
    static void glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x);
    static void glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT * v);
    static void glGetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT * params);
    static void glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar * name);
    static GLint glGetFragDataIndex (GLuint program, const GLchar * name);
    static void glBufferStorage (GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
    static GLsync glCreateSyncFromCLeventARB (struct _cl_context * context, struct _cl_event * event, GLbitfield flags);
    static void glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
    static void glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
    static void glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
    static void glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
    static void glClipControl (GLenum origin, GLenum depth);
    static void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
    static void glDispatchComputeIndirect (GLintptr indirect);
    static void glDispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
    static void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    static void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    static void glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled);
    static void glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf);
    static void glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const void * userParam);
    static GLuint glGetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
    static void glCreateTransformFeedbacks (GLsizei n, GLuint * ids);
    static void glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer);
    static void glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint * param);
    static void glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint * param);
    static void glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
    static void glCreateBuffers (GLsizei n, GLuint * buffers);
    static void glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
    static void glNamedBufferData (GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
    static void glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
    static void glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    static void glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
    static void glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
    static void * glMapNamedBuffer (GLuint buffer, GLenum access);
    static void * glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
    static GLboolean glUnmapNamedBuffer (GLuint buffer);
    static void glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length);
    static void glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint * params);
    static void glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 * params);
    static void glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void ** params);
    static void glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
    static void glCreateFramebuffers (GLsizei n, GLuint * framebuffers);
    static void glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    static void glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param);
    static void glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
    static void glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
    static void glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf);
    static void glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum * bufs);
    static void glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src);
    static void glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
    static void glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    static void glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
    static void glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
    static void glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
    static void glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, const GLfloat depth, GLint stencil);
    static void glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static GLenum glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target);
    static void glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint * param);
    static void glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
    static void glCreateRenderbuffers (GLsizei n, GLuint * renderbuffers);
    static void glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
    static void glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint * params);
    static void glCreateTextures (GLenum target, GLsizei n, GLuint * textures);
    static void glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer);
    static void glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
    static void glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    static void glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    static void glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    static void glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    static void glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
    static void glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
    static void glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
    static void glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
    static void glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
    static void glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
    static void glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    static void glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    static void glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    static void glTextureParameterf (GLuint texture, GLenum pname, GLfloat param);
    static void glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat * param);
    static void glTextureParameteri (GLuint texture, GLenum pname, GLint param);
    static void glTextureParameterIiv (GLuint texture, GLenum pname, const GLint * params);
    static void glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint * params);
    static void glTextureParameteriv (GLuint texture, GLenum pname, const GLint * param);
    static void glGenerateTextureMipmap (GLuint texture);
    static void glBindTextureUnit (GLuint unit, GLuint texture);
    static void glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
    static void glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void * pixels);
    static void glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat * params);
    static void glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint * params);
    static void glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat * params);
    static void glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint * params);
    static void glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint * params);
    static void glGetTextureParameteriv (GLuint texture, GLenum pname, GLint * params);
    static void glCreateVertexArrays (GLsizei n, GLuint * arrays);
    static void glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
    static void glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
    static void glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
    static void glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    static void glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
    static void glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
    static void glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    static void glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    static void glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    static void glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor);
    static void glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint * param);
    static void glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint * param);
    static void glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
    static void glCreateSamplers (GLsizei n, GLuint * samplers);
    static void glCreateProgramPipelines (GLsizei n, GLuint * pipelines);
    static void glCreateQueries (GLenum target, GLsizei n, GLuint * ids);
    static void glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    static void glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    static void glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    static void glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    static void glBlendEquationiARB (GLuint buf, GLenum mode);
    static void glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    static void glBlendFunciARB (GLuint buf, GLenum src, GLenum dst);
    static void glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    static void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    static void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
    static void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
    static void glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex);
    static void glDrawArraysIndirect (GLenum mode, const void * indirect);
    static void glDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect);
    static void glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
    static void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint * params);
    static GLboolean glIsRenderbuffer (GLuint renderbuffer);
    static void glBindRenderbuffer (GLenum target, GLuint renderbuffer);
    static void glDeleteRenderbuffers (GLsizei n, const GLuint * renderbuffers);
    static void glGenRenderbuffers (GLsizei n, GLuint * renderbuffers);
    static void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
    static void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint * params);
    static GLboolean glIsFramebuffer (GLuint framebuffer);
    static void glBindFramebuffer (GLenum target, GLuint framebuffer);
    static void glDeleteFramebuffers (GLsizei n, const GLuint * framebuffers);
    static void glGenFramebuffers (GLsizei n, GLuint * framebuffers);
    static GLenum glCheckFramebufferStatus (GLenum target);
    static void glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    static void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    static void glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    static void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    static void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint * params);
    static void glGenerateMipmap (GLenum target);
    static void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    static void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    static void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    static void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
    static void glProgramBinary (GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
    static void glProgramParameteri (GLuint program, GLenum pname, GLint value);
    static void glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
    static void glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
    static void glUniform1d (GLint location, GLdouble x);
    static void glUniform2d (GLint location, GLdouble x, GLdouble y);
    static void glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z);
    static void glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    static void glUniform1dv (GLint location, GLsizei count, const GLdouble * value);
    static void glUniform2dv (GLint location, GLsizei count, const GLdouble * value);
    static void glUniform3dv (GLint location, GLsizei count, const GLdouble * value);
    static void glUniform4dv (GLint location, GLsizei count, const GLdouble * value);
    static void glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glGetUniformdv (GLuint program, GLint location, GLdouble * params);
    static void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    static void glBlendEquation (GLenum mode);
    static void glMultiDrawArraysIndirectCountARB (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
    static void glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
    static void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
    static void glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
    static void glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
    static void glInvalidateTexImage (GLuint texture, GLint level);
    static void glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length);
    static void glInvalidateBufferData (GLuint buffer);
    static void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments);
    static void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    static void * glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    static void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
    static void glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint * buffers);
    static void glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizeiptr * sizes);
    static void glBindTextures (GLuint first, GLsizei count, const GLuint * textures);
    static void glBindSamplers (GLuint first, GLsizei count, const GLuint * samplers);
    static void glBindImageTextures (GLuint first, GLsizei count, const GLuint * textures);
    static void glBindVertexBuffers (GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
    static void glMultiDrawArraysIndirect (GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
    static void glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
    static void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint * params);
    static GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar * name);
    static void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
    static void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
    static GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar * name);
    static GLint glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar * name);
    static void glProvokingVertex (GLenum mode);
    static GLenum glGetGraphicsResetStatusARB ();
    static void glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
    static void glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
    static void glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void * img);
    static void glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
    static void glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint * params);
    static void glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint * params);
    static void glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
    static void glMinSampleShadingARB (GLfloat value);
    static void glGenSamplers (GLsizei count, GLuint * samplers);
    static void glDeleteSamplers (GLsizei count, const GLuint * samplers);
    static GLboolean glIsSampler (GLuint sampler);
    static void glBindSampler (GLuint unit, GLuint sampler);
    static void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
    static void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint * param);
    static void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
    static void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat * param);
    static void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint * param);
    static void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint * param);
    static void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint * params);
    static void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint * params);
    static void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat * params);
    static void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint * params);
    static void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
    static void glActiveShaderProgram (GLuint pipeline, GLuint program);
    static GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const* strings);
    static void glBindProgramPipeline (GLuint pipeline);
    static void glDeleteProgramPipelines (GLsizei n, const GLuint * pipelines);
    static void glGenProgramPipelines (GLsizei n, GLuint * pipelines);
    static GLboolean glIsProgramPipeline (GLuint pipeline);
    static void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint * params);
    static void glProgramUniform1i (GLuint program, GLint location, GLint v0);
    static void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
    static void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform1d (GLuint program, GLint location, GLdouble v0);
    static void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    static void glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
    static void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
    static void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    static void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1);
    static void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    static void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
    static void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    static void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    static void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
    static void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    static void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    static void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    static void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint * value);
    static void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    static void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat * value);
    static void glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
    static void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble * value);
    static void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    static void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint * value);
    static void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value);
    static void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
    static void glValidateProgramPipeline (GLuint pipeline);
    static void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
    static void glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
    static void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
    static void glMemoryBarrier (GLbitfield barriers);
    static void glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
    static GLint glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar * name);
    static GLuint glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar * name);
    static void glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
    static void glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
    static void glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
    static void glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint * indices);
    static void glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint * params);
    static void glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint * values);
    static void glNamedStringARB (GLenum type, GLint namelen, const GLchar * name, GLint stringlen, const GLchar * string);
    static void glDeleteNamedStringARB (GLint namelen, const GLchar * name);
    static void glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar *const* path, const GLint * length);
    static GLboolean glIsNamedStringARB (GLint namelen, const GLchar * name);
    static void glGetNamedStringARB (GLint namelen, const GLchar * name, GLsizei bufSize, GLint * stringlen, GLchar * string);
    static void glGetNamedStringivARB (GLint namelen, const GLchar * name, GLenum pname, GLint * params);
    static void glBufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
    static void glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
    static void glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
    static void glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
    static GLsync glFenceSync (GLenum condition, GLbitfield flags);
    static GLboolean glIsSync (GLsync sync);
    static void glDeleteSync (GLsync sync);
    static GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    static void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
    static void glGetInteger64v (GLenum pname, GLint64 * data);
    static void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
    static void glPatchParameteri (GLenum pname, GLint value);
    static void glPatchParameterfv (GLenum pname, const GLfloat * values);
    static void glTextureBarrier ();
    static void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    static void glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    static void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat * val);
    static void glSampleMaski (GLuint maskNumber, GLbitfield mask);
    static void glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    static void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    static void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    static void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    static void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    static void glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
    static void glQueryCounter (GLuint id, GLenum target);
    static void glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 * params);
    static void glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 * params);
    static void glBindTransformFeedback (GLenum target, GLuint id);
    static void glDeleteTransformFeedbacks (GLsizei n, const GLuint * ids);
    static void glGenTransformFeedbacks (GLsizei n, GLuint * ids);
    static GLboolean glIsTransformFeedback (GLuint id);
    static void glPauseTransformFeedback ();
    static void glResumeTransformFeedback ();
    static void glDrawTransformFeedback (GLenum mode, GLuint id);
    static void glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream);
    static void glBeginQueryIndexed (GLenum target, GLuint index, GLuint id);
    static void glEndQueryIndexed (GLenum target, GLuint index);
    static void glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint * params);
    static void glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount);
    static void glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
    static void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices);
    static void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params);
    static void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
    static GLuint glGetUniformBlockIndex (GLuint program, const GLchar * uniformBlockName);
    static void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
    static void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
    static void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
    static void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    static void glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
    static void glGetIntegeri_v (GLenum target, GLuint index, GLint * data);
    static void glBindVertexArray (GLuint array);
    static void glDeleteVertexArrays (GLsizei n, const GLuint * arrays);
    static void glGenVertexArrays (GLsizei n, GLuint * arrays);
    static GLboolean glIsVertexArray (GLuint array);
    static void glVertexAttribL1d (GLuint index, GLdouble x);
    static void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
    static void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
    static void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    static void glVertexAttribL1dv (GLuint index, const GLdouble * v);
    static void glVertexAttribL2dv (GLuint index, const GLdouble * v);
    static void glVertexAttribL3dv (GLuint index, const GLdouble * v);
    static void glVertexAttribL4dv (GLuint index, const GLdouble * v);
    static void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
    static void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble * params);
    static void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    static void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    static void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    static void glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    static void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
    static void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
    static void glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    static void glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    static void glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    static void glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    static void glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    static void glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    static void glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    static void glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint * value);
    static void glViewportArrayv (GLuint first, GLsizei count, const GLfloat * v);
    static void glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
    static void glViewportIndexedfv (GLuint index, const GLfloat * v);
    static void glScissorArrayv (GLuint first, GLsizei count, const GLint * v);
    static void glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
    static void glScissorIndexedv (GLuint index, const GLint * v);
    static void glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble * v);
    static void glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f);
    static void glGetFloati_v (GLenum target, GLuint index, GLfloat * data);
    static void glGetDoublei_v (GLenum target, GLuint index, GLdouble * data);
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
