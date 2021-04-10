////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#if defined(__GNUC__)
#if ((__GNUC__ * 10000) + (__GNUC_MINOR__ * 100) + __GNUC_PATCHLEVEL__) >= 40600
#pragma GCC diagnostic push // push/pop not available before GCC 4.6
#endif
#pragma GCC diagnostic ignored "-Wunused-function"
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define GLEW_USE_VULKAN 1

#include <wrangle.h>

#include <cstring>

#include <string>

#include <unordered_set>

#include <vulkan/vulkan.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum GLEW_VULKAN_FeatureSet
{
  GLEW_VK_VERSION_1_0,
  GLEW_VK_VERSION_1_1,
  GLEW_VK_VERSION_1_2,
  GLEW_VK_KHR_surface,
  GLEW_VK_KHR_swapchain,
  GLEW_VK_KHR_display,
  GLEW_VK_KHR_display_swapchain,
  GLEW_VK_KHR_xlib_surface,
  GLEW_VK_KHR_xcb_surface,
  GLEW_VK_KHR_wayland_surface,
  GLEW_VK_KHR_android_surface,
  GLEW_VK_KHR_win32_surface,
  GLEW_VK_EXT_debug_report,
  GLEW_VK_NV_glsl_shader,
  GLEW_VK_EXT_depth_range_unrestricted,
  GLEW_VK_KHR_sampler_mirror_clamp_to_edge,
  GLEW_VK_IMG_filter_cubic,
  GLEW_VK_AMD_rasterization_order,
  GLEW_VK_AMD_shader_trinary_minmax,
  GLEW_VK_AMD_shader_explicit_vertex_parameter,
  GLEW_VK_EXT_debug_marker,
  GLEW_VK_KHR_video_queue,
  GLEW_VK_KHR_video_decode_queue,
  GLEW_VK_KHR_video_encode_queue,
  GLEW_VK_AMD_gcn_shader,
  GLEW_VK_NV_dedicated_allocation,
  GLEW_VK_EXT_transform_feedback,
  GLEW_VK_NVX_image_view_handle,
  GLEW_VK_AMD_draw_indirect_count,
  GLEW_VK_AMD_negative_viewport_height,
  GLEW_VK_AMD_gpu_shader_half_float,
  GLEW_VK_AMD_shader_ballot,
  GLEW_VK_EXT_video_encode_h264,
  GLEW_VK_EXT_video_decode_h264,
  GLEW_VK_AMD_texture_gather_bias_lod,
  GLEW_VK_AMD_shader_info,
  GLEW_VK_AMD_shader_image_load_store_lod,
  GLEW_VK_GGP_stream_descriptor_surface,
  GLEW_VK_NV_corner_sampled_image,
  GLEW_VK_KHR_multiview,
  GLEW_VK_IMG_format_pvrtc,
  GLEW_VK_NV_external_memory_capabilities,
  GLEW_VK_NV_external_memory,
  GLEW_VK_NV_external_memory_win32,
  GLEW_VK_NV_win32_keyed_mutex,
  GLEW_VK_KHR_get_physical_device_properties2,
  GLEW_VK_KHR_device_group,
  GLEW_VK_EXT_validation_flags,
  GLEW_VK_NN_vi_surface,
  GLEW_VK_KHR_shader_draw_parameters,
  GLEW_VK_EXT_shader_subgroup_ballot,
  GLEW_VK_EXT_shader_subgroup_vote,
  GLEW_VK_EXT_texture_compression_astc_hdr,
  GLEW_VK_EXT_astc_decode_mode,
  GLEW_VK_KHR_maintenance1,
  GLEW_VK_KHR_device_group_creation,
  GLEW_VK_KHR_external_memory_capabilities,
  GLEW_VK_KHR_external_memory,
  GLEW_VK_KHR_external_memory_win32,
  GLEW_VK_KHR_external_memory_fd,
  GLEW_VK_KHR_win32_keyed_mutex,
  GLEW_VK_KHR_external_semaphore_capabilities,
  GLEW_VK_KHR_external_semaphore,
  GLEW_VK_KHR_external_semaphore_win32,
  GLEW_VK_KHR_external_semaphore_fd,
  GLEW_VK_KHR_push_descriptor,
  GLEW_VK_EXT_conditional_rendering,
  GLEW_VK_KHR_shader_float16_int8,
  GLEW_VK_KHR_16bit_storage,
  GLEW_VK_KHR_incremental_present,
  GLEW_VK_KHR_descriptor_update_template,
  GLEW_VK_NV_clip_space_w_scaling,
  GLEW_VK_EXT_direct_mode_display,
  GLEW_VK_EXT_acquire_xlib_display,
  GLEW_VK_EXT_display_surface_counter,
  GLEW_VK_EXT_display_control,
  GLEW_VK_GOOGLE_display_timing,
  GLEW_VK_NV_sample_mask_override_coverage,
  GLEW_VK_NV_geometry_shader_passthrough,
  GLEW_VK_NV_viewport_array2,
  GLEW_VK_NVX_multiview_per_view_attributes,
  GLEW_VK_NV_viewport_swizzle,
  GLEW_VK_EXT_discard_rectangles,
  GLEW_VK_EXT_conservative_rasterization,
  GLEW_VK_EXT_depth_clip_enable,
  GLEW_VK_EXT_swapchain_colorspace,
  GLEW_VK_EXT_hdr_metadata,
  GLEW_VK_KHR_imageless_framebuffer,
  GLEW_VK_KHR_create_renderpass2,
  GLEW_VK_KHR_shared_presentable_image,
  GLEW_VK_KHR_external_fence_capabilities,
  GLEW_VK_KHR_external_fence,
  GLEW_VK_KHR_external_fence_win32,
  GLEW_VK_KHR_external_fence_fd,
  GLEW_VK_KHR_performance_query,
  GLEW_VK_KHR_maintenance2,
  GLEW_VK_KHR_get_surface_capabilities2,
  GLEW_VK_KHR_variable_pointers,
  GLEW_VK_KHR_get_display_properties2,
  GLEW_VK_MVK_ios_surface,
  GLEW_VK_MVK_macos_surface,
  GLEW_VK_EXT_external_memory_dma_buf,
  GLEW_VK_EXT_queue_family_foreign,
  GLEW_VK_KHR_dedicated_allocation,
  GLEW_VK_EXT_debug_utils,
  GLEW_VK_ANDROID_external_memory_android_hardware_buffer,
  GLEW_VK_EXT_sampler_filter_minmax,
  GLEW_VK_KHR_storage_buffer_storage_class,
  GLEW_VK_AMD_gpu_shader_int16,
  GLEW_VK_AMD_mixed_attachment_samples,
  GLEW_VK_AMD_shader_fragment_mask,
  GLEW_VK_EXT_inline_uniform_block,
  GLEW_VK_EXT_shader_stencil_export,
  GLEW_VK_EXT_sample_locations,
  GLEW_VK_KHR_relaxed_block_layout,
  GLEW_VK_KHR_get_memory_requirements2,
  GLEW_VK_KHR_image_format_list,
  GLEW_VK_EXT_blend_operation_advanced,
  GLEW_VK_NV_fragment_coverage_to_color,
  GLEW_VK_KHR_acceleration_structure,
  GLEW_VK_KHR_ray_tracing_pipeline,
  GLEW_VK_KHR_ray_query,
  GLEW_VK_NV_framebuffer_mixed_samples,
  GLEW_VK_NV_fill_rectangle,
  GLEW_VK_NV_shader_sm_builtins,
  GLEW_VK_EXT_post_depth_coverage,
  GLEW_VK_KHR_sampler_ycbcr_conversion,
  GLEW_VK_KHR_bind_memory2,
  GLEW_VK_EXT_image_drm_format_modifier,
  GLEW_VK_EXT_validation_cache,
  GLEW_VK_EXT_descriptor_indexing,
  GLEW_VK_EXT_shader_viewport_index_layer,
  GLEW_VK_KHR_portability_subset,
  GLEW_VK_NV_shading_rate_image,
  GLEW_VK_NV_ray_tracing,
  GLEW_VK_NV_representative_fragment_test,
  GLEW_VK_KHR_maintenance3,
  GLEW_VK_KHR_draw_indirect_count,
  GLEW_VK_EXT_filter_cubic,
  GLEW_VK_QCOM_render_pass_shader_resolve,
  GLEW_VK_EXT_global_priority,
  GLEW_VK_KHR_shader_subgroup_extended_types,
  GLEW_VK_KHR_8bit_storage,
  GLEW_VK_EXT_external_memory_host,
  GLEW_VK_AMD_buffer_marker,
  GLEW_VK_KHR_shader_atomic_int64,
  GLEW_VK_KHR_shader_clock,
  GLEW_VK_AMD_pipeline_compiler_control,
  GLEW_VK_EXT_calibrated_timestamps,
  GLEW_VK_AMD_shader_core_properties,
  GLEW_VK_EXT_video_decode_h265,
  GLEW_VK_AMD_memory_overallocation_behavior,
  GLEW_VK_EXT_vertex_attribute_divisor,
  GLEW_VK_GGP_frame_token,
  GLEW_VK_EXT_pipeline_creation_feedback,
  GLEW_VK_KHR_driver_properties,
  GLEW_VK_KHR_shader_float_controls,
  GLEW_VK_NV_shader_subgroup_partitioned,
  GLEW_VK_KHR_depth_stencil_resolve,
  GLEW_VK_KHR_swapchain_mutable_format,
  GLEW_VK_NV_compute_shader_derivatives,
  GLEW_VK_NV_mesh_shader,
  GLEW_VK_NV_fragment_shader_barycentric,
  GLEW_VK_NV_shader_image_footprint,
  GLEW_VK_NV_scissor_exclusive,
  GLEW_VK_NV_device_diagnostic_checkpoints,
  GLEW_VK_KHR_timeline_semaphore,
  GLEW_VK_INTEL_shader_integer_functions2,
  GLEW_VK_INTEL_performance_query,
  GLEW_VK_KHR_vulkan_memory_model,
  GLEW_VK_EXT_pci_bus_info,
  GLEW_VK_AMD_display_native_hdr,
  GLEW_VK_FUCHSIA_imagepipe_surface,
  GLEW_VK_KHR_shader_terminate_invocation,
  GLEW_VK_EXT_metal_surface,
  GLEW_VK_EXT_fragment_density_map,
  GLEW_VK_EXT_scalar_block_layout,
  GLEW_VK_GOOGLE_hlsl_functionality1,
  GLEW_VK_GOOGLE_decorate_string,
  GLEW_VK_EXT_subgroup_size_control,
  GLEW_VK_KHR_fragment_shading_rate,
  GLEW_VK_AMD_shader_core_properties2,
  GLEW_VK_AMD_device_coherent_memory,
  GLEW_VK_EXT_shader_image_atomic_int64,
  GLEW_VK_KHR_spirv_1_4,
  GLEW_VK_EXT_memory_budget,
  GLEW_VK_EXT_memory_priority,
  GLEW_VK_KHR_surface_protected_capabilities,
  GLEW_VK_NV_dedicated_allocation_image_aliasing,
  GLEW_VK_KHR_separate_depth_stencil_layouts,
  GLEW_VK_EXT_buffer_device_address,
  GLEW_VK_EXT_tooling_info,
  GLEW_VK_EXT_separate_stencil_usage,
  GLEW_VK_EXT_validation_features,
  GLEW_VK_NV_cooperative_matrix,
  GLEW_VK_NV_coverage_reduction_mode,
  GLEW_VK_EXT_fragment_shader_interlock,
  GLEW_VK_EXT_ycbcr_image_arrays,
  GLEW_VK_KHR_uniform_buffer_standard_layout,
  GLEW_VK_EXT_full_screen_exclusive,
  GLEW_VK_EXT_headless_surface,
  GLEW_VK_KHR_buffer_device_address,
  GLEW_VK_EXT_line_rasterization,
  GLEW_VK_EXT_shader_atomic_float,
  GLEW_VK_EXT_host_query_reset,
  GLEW_VK_EXT_index_type_uint8,
  GLEW_VK_EXT_extended_dynamic_state,
  GLEW_VK_KHR_deferred_host_operations,
  GLEW_VK_KHR_pipeline_executable_properties,
  GLEW_VK_EXT_shader_demote_to_helper_invocation,
  GLEW_VK_NV_device_generated_commands,
  GLEW_VK_NV_inherited_viewport_scissor,
  GLEW_VK_EXT_texel_buffer_alignment,
  GLEW_VK_QCOM_render_pass_transform,
  GLEW_VK_EXT_device_memory_report,
  GLEW_VK_EXT_robustness2,
  GLEW_VK_EXT_custom_border_color,
  GLEW_VK_GOOGLE_user_type,
  GLEW_VK_KHR_pipeline_library,
  GLEW_VK_KHR_shader_non_semantic_info,
  GLEW_VK_EXT_private_data,
  GLEW_VK_EXT_pipeline_creation_cache_control,
  GLEW_VK_NV_device_diagnostics_config,
  GLEW_VK_QCOM_render_pass_store_ops,
  GLEW_VK_KHR_synchronization2,
  GLEW_VK_KHR_zero_initialize_workgroup_memory,
  GLEW_VK_NV_fragment_shading_rate_enums,
  GLEW_VK_EXT_ycbcr_2plane_444_formats,
  GLEW_VK_EXT_fragment_density_map2,
  GLEW_VK_QCOM_rotated_copy_commands,
  GLEW_VK_EXT_image_robustness,
  GLEW_VK_KHR_workgroup_memory_explicit_layout,
  GLEW_VK_KHR_copy_commands2,
  GLEW_VK_EXT_4444_formats,
  GLEW_VK_NV_acquire_winrt_display,
  GLEW_VK_EXT_directfb_surface,
  GLEW_VK_VALVE_mutable_descriptor_type,
  GLEW_VK_EXT_vertex_input_dynamic_state,
  GLEW_VK_FUCHSIA_external_memory,
  GLEW_VK_FUCHSIA_external_semaphore,
  GLEW_VK_QNX_screen_surface,
  GLEW_VK_EXT_color_write_enable,
  GLEW_VULKAN_FeatureSetCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum GLEW_VULKAN_ProcDelegate
{
  GLEW_VULKAN_vkEnumerateInstanceVersion,
  GLEW_VULKAN_vkBindBufferMemory2,
  GLEW_VULKAN_vkBindImageMemory2,
  GLEW_VULKAN_vkGetDeviceGroupPeerMemoryFeatures,
  GLEW_VULKAN_vkCmdSetDeviceMask,
  GLEW_VULKAN_vkCmdDispatchBase,
  GLEW_VULKAN_vkEnumeratePhysicalDeviceGroups,
  GLEW_VULKAN_vkGetImageMemoryRequirements2,
  GLEW_VULKAN_vkGetBufferMemoryRequirements2,
  GLEW_VULKAN_vkGetImageSparseMemoryRequirements2,
  GLEW_VULKAN_vkGetPhysicalDeviceFeatures2,
  GLEW_VULKAN_vkGetPhysicalDeviceProperties2,
  GLEW_VULKAN_vkGetPhysicalDeviceFormatProperties2,
  GLEW_VULKAN_vkGetPhysicalDeviceImageFormatProperties2,
  GLEW_VULKAN_vkGetPhysicalDeviceQueueFamilyProperties2,
  GLEW_VULKAN_vkGetPhysicalDeviceMemoryProperties2,
  GLEW_VULKAN_vkGetPhysicalDeviceSparseImageFormatProperties2,
  GLEW_VULKAN_vkTrimCommandPool,
  GLEW_VULKAN_vkGetDeviceQueue2,
  GLEW_VULKAN_vkCreateSamplerYcbcrConversion,
  GLEW_VULKAN_vkDestroySamplerYcbcrConversion,
  GLEW_VULKAN_vkCreateDescriptorUpdateTemplate,
  GLEW_VULKAN_vkDestroyDescriptorUpdateTemplate,
  GLEW_VULKAN_vkUpdateDescriptorSetWithTemplate,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalBufferProperties,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalFenceProperties,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalSemaphoreProperties,
  GLEW_VULKAN_vkGetDescriptorSetLayoutSupport,
  GLEW_VULKAN_vkCmdDrawIndirectCount,
  GLEW_VULKAN_vkCmdDrawIndexedIndirectCount,
  GLEW_VULKAN_vkCreateRenderPass2,
  GLEW_VULKAN_vkCmdBeginRenderPass2,
  GLEW_VULKAN_vkCmdNextSubpass2,
  GLEW_VULKAN_vkCmdEndRenderPass2,
  GLEW_VULKAN_vkResetQueryPool,
  GLEW_VULKAN_vkGetSemaphoreCounterValue,
  GLEW_VULKAN_vkWaitSemaphores,
  GLEW_VULKAN_vkSignalSemaphore,
  GLEW_VULKAN_vkGetBufferDeviceAddress,
  GLEW_VULKAN_vkGetBufferOpaqueCaptureAddress,
  GLEW_VULKAN_vkGetDeviceMemoryOpaqueCaptureAddress,
  GLEW_VULKAN_vkDestroySurfaceKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfaceSupportKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfaceFormatsKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfacePresentModesKHR,
  GLEW_VULKAN_vkCreateSwapchainKHR,
  GLEW_VULKAN_vkDestroySwapchainKHR,
  GLEW_VULKAN_vkGetSwapchainImagesKHR,
  GLEW_VULKAN_vkAcquireNextImageKHR,
  GLEW_VULKAN_vkQueuePresentKHR,
  GLEW_VULKAN_vkGetDeviceGroupPresentCapabilitiesKHR,
  GLEW_VULKAN_vkGetDeviceGroupSurfacePresentModesKHR,
  GLEW_VULKAN_vkGetPhysicalDevicePresentRectanglesKHR,
  GLEW_VULKAN_vkAcquireNextImage2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceDisplayPropertiesKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR,
  GLEW_VULKAN_vkGetDisplayPlaneSupportedDisplaysKHR,
  GLEW_VULKAN_vkGetDisplayModePropertiesKHR,
  GLEW_VULKAN_vkCreateDisplayModeKHR,
  GLEW_VULKAN_vkGetDisplayPlaneCapabilitiesKHR,
  GLEW_VULKAN_vkCreateDisplayPlaneSurfaceKHR,
  GLEW_VULKAN_vkCreateSharedSwapchainsKHR,
  GLEW_VULKAN_vkCreateDebugReportCallbackEXT,
  GLEW_VULKAN_vkDestroyDebugReportCallbackEXT,
  GLEW_VULKAN_vkDebugReportMessageEXT,
  GLEW_VULKAN_vkDebugMarkerSetObjectTagEXT,
  GLEW_VULKAN_vkDebugMarkerSetObjectNameEXT,
  GLEW_VULKAN_vkCmdDebugMarkerBeginEXT,
  GLEW_VULKAN_vkCmdDebugMarkerEndEXT,
  GLEW_VULKAN_vkCmdDebugMarkerInsertEXT,
  GLEW_VULKAN_vkCmdBindTransformFeedbackBuffersEXT,
  GLEW_VULKAN_vkCmdBeginTransformFeedbackEXT,
  GLEW_VULKAN_vkCmdEndTransformFeedbackEXT,
  GLEW_VULKAN_vkCmdBeginQueryIndexedEXT,
  GLEW_VULKAN_vkCmdEndQueryIndexedEXT,
  GLEW_VULKAN_vkCmdDrawIndirectByteCountEXT,
  GLEW_VULKAN_vkGetImageViewHandleNVX,
  GLEW_VULKAN_vkGetImageViewAddressNVX,
  GLEW_VULKAN_vkCmdDrawIndirectCountAMD,
  GLEW_VULKAN_vkCmdDrawIndexedIndirectCountAMD,
  GLEW_VULKAN_vkGetShaderInfoAMD,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV,
  GLEW_VULKAN_vkGetPhysicalDeviceFeatures2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceProperties2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceFormatProperties2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceImageFormatProperties2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceQueueFamilyProperties2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceMemoryProperties2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR,
  GLEW_VULKAN_vkGetDeviceGroupPeerMemoryFeaturesKHR,
  GLEW_VULKAN_vkCmdSetDeviceMaskKHR,
  GLEW_VULKAN_vkCmdDispatchBaseKHR,
  GLEW_VULKAN_vkTrimCommandPoolKHR,
  GLEW_VULKAN_vkEnumeratePhysicalDeviceGroupsKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalBufferPropertiesKHR,
  GLEW_VULKAN_vkGetMemoryFdKHR,
  GLEW_VULKAN_vkGetMemoryFdPropertiesKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR,
  GLEW_VULKAN_vkImportSemaphoreFdKHR,
  GLEW_VULKAN_vkGetSemaphoreFdKHR,
  GLEW_VULKAN_vkCmdPushDescriptorSetKHR,
  GLEW_VULKAN_vkCmdPushDescriptorSetWithTemplateKHR,
  GLEW_VULKAN_vkCmdBeginConditionalRenderingEXT,
  GLEW_VULKAN_vkCmdEndConditionalRenderingEXT,
  GLEW_VULKAN_vkCreateDescriptorUpdateTemplateKHR,
  GLEW_VULKAN_vkDestroyDescriptorUpdateTemplateKHR,
  GLEW_VULKAN_vkUpdateDescriptorSetWithTemplateKHR,
  GLEW_VULKAN_vkCmdSetViewportWScalingNV,
  GLEW_VULKAN_vkReleaseDisplayEXT,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfaceCapabilities2EXT,
  GLEW_VULKAN_vkDisplayPowerControlEXT,
  GLEW_VULKAN_vkRegisterDeviceEventEXT,
  GLEW_VULKAN_vkRegisterDisplayEventEXT,
  GLEW_VULKAN_vkGetSwapchainCounterEXT,
  GLEW_VULKAN_vkGetRefreshCycleDurationGOOGLE,
  GLEW_VULKAN_vkGetPastPresentationTimingGOOGLE,
  GLEW_VULKAN_vkCmdSetDiscardRectangleEXT,
  GLEW_VULKAN_vkSetHdrMetadataEXT,
  GLEW_VULKAN_vkCreateRenderPass2KHR,
  GLEW_VULKAN_vkCmdBeginRenderPass2KHR,
  GLEW_VULKAN_vkCmdNextSubpass2KHR,
  GLEW_VULKAN_vkCmdEndRenderPass2KHR,
  GLEW_VULKAN_vkGetSwapchainStatusKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceExternalFencePropertiesKHR,
  GLEW_VULKAN_vkImportFenceFdKHR,
  GLEW_VULKAN_vkGetFenceFdKHR,
  GLEW_VULKAN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR,
  GLEW_VULKAN_vkAcquireProfilingLockKHR,
  GLEW_VULKAN_vkReleaseProfilingLockKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfaceCapabilities2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfaceFormats2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceDisplayProperties2KHR,
  GLEW_VULKAN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR,
  GLEW_VULKAN_vkGetDisplayModeProperties2KHR,
  GLEW_VULKAN_vkGetDisplayPlaneCapabilities2KHR,
  GLEW_VULKAN_vkSetDebugUtilsObjectNameEXT,
  GLEW_VULKAN_vkSetDebugUtilsObjectTagEXT,
  GLEW_VULKAN_vkQueueBeginDebugUtilsLabelEXT,
  GLEW_VULKAN_vkQueueEndDebugUtilsLabelEXT,
  GLEW_VULKAN_vkQueueInsertDebugUtilsLabelEXT,
  GLEW_VULKAN_vkCmdBeginDebugUtilsLabelEXT,
  GLEW_VULKAN_vkCmdEndDebugUtilsLabelEXT,
  GLEW_VULKAN_vkCmdInsertDebugUtilsLabelEXT,
  GLEW_VULKAN_vkCreateDebugUtilsMessengerEXT,
  GLEW_VULKAN_vkDestroyDebugUtilsMessengerEXT,
  GLEW_VULKAN_vkSubmitDebugUtilsMessageEXT,
  GLEW_VULKAN_vkCmdSetSampleLocationsEXT,
  GLEW_VULKAN_vkGetPhysicalDeviceMultisamplePropertiesEXT,
  GLEW_VULKAN_vkGetImageMemoryRequirements2KHR,
  GLEW_VULKAN_vkGetBufferMemoryRequirements2KHR,
  GLEW_VULKAN_vkGetImageSparseMemoryRequirements2KHR,
  GLEW_VULKAN_vkCreateAccelerationStructureKHR,
  GLEW_VULKAN_vkDestroyAccelerationStructureKHR,
  GLEW_VULKAN_vkCmdBuildAccelerationStructuresKHR,
  GLEW_VULKAN_vkCmdBuildAccelerationStructuresIndirectKHR,
  GLEW_VULKAN_vkBuildAccelerationStructuresKHR,
  GLEW_VULKAN_vkCopyAccelerationStructureKHR,
  GLEW_VULKAN_vkCopyAccelerationStructureToMemoryKHR,
  GLEW_VULKAN_vkCopyMemoryToAccelerationStructureKHR,
  GLEW_VULKAN_vkWriteAccelerationStructuresPropertiesKHR,
  GLEW_VULKAN_vkCmdCopyAccelerationStructureKHR,
  GLEW_VULKAN_vkCmdCopyAccelerationStructureToMemoryKHR,
  GLEW_VULKAN_vkCmdCopyMemoryToAccelerationStructureKHR,
  GLEW_VULKAN_vkGetAccelerationStructureDeviceAddressKHR,
  GLEW_VULKAN_vkCmdWriteAccelerationStructuresPropertiesKHR,
  GLEW_VULKAN_vkGetDeviceAccelerationStructureCompatibilityKHR,
  GLEW_VULKAN_vkGetAccelerationStructureBuildSizesKHR,
  GLEW_VULKAN_vkCmdTraceRaysKHR,
  GLEW_VULKAN_vkCreateRayTracingPipelinesKHR,
  GLEW_VULKAN_vkGetRayTracingShaderGroupHandlesKHR,
  GLEW_VULKAN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR,
  GLEW_VULKAN_vkCmdTraceRaysIndirectKHR,
  GLEW_VULKAN_vkGetRayTracingShaderGroupStackSizeKHR,
  GLEW_VULKAN_vkCmdSetRayTracingPipelineStackSizeKHR,
  GLEW_VULKAN_vkCreateSamplerYcbcrConversionKHR,
  GLEW_VULKAN_vkDestroySamplerYcbcrConversionKHR,
  GLEW_VULKAN_vkBindBufferMemory2KHR,
  GLEW_VULKAN_vkBindImageMemory2KHR,
  GLEW_VULKAN_vkGetImageDrmFormatModifierPropertiesEXT,
  GLEW_VULKAN_vkCreateValidationCacheEXT,
  GLEW_VULKAN_vkDestroyValidationCacheEXT,
  GLEW_VULKAN_vkMergeValidationCachesEXT,
  GLEW_VULKAN_vkGetValidationCacheDataEXT,
  GLEW_VULKAN_vkCmdBindShadingRateImageNV,
  GLEW_VULKAN_vkCmdSetViewportShadingRatePaletteNV,
  GLEW_VULKAN_vkCmdSetCoarseSampleOrderNV,
  GLEW_VULKAN_vkCreateAccelerationStructureNV,
  GLEW_VULKAN_vkDestroyAccelerationStructureNV,
  GLEW_VULKAN_vkGetAccelerationStructureMemoryRequirementsNV,
  GLEW_VULKAN_vkBindAccelerationStructureMemoryNV,
  GLEW_VULKAN_vkCmdBuildAccelerationStructureNV,
  GLEW_VULKAN_vkCmdCopyAccelerationStructureNV,
  GLEW_VULKAN_vkCmdTraceRaysNV,
  GLEW_VULKAN_vkCreateRayTracingPipelinesNV,
  GLEW_VULKAN_vkGetRayTracingShaderGroupHandlesNV,
  GLEW_VULKAN_vkGetAccelerationStructureHandleNV,
  GLEW_VULKAN_vkCmdWriteAccelerationStructuresPropertiesNV,
  GLEW_VULKAN_vkCompileDeferredNV,
  GLEW_VULKAN_vkGetDescriptorSetLayoutSupportKHR,
  GLEW_VULKAN_vkCmdDrawIndirectCountKHR,
  GLEW_VULKAN_vkCmdDrawIndexedIndirectCountKHR,
  GLEW_VULKAN_vkGetMemoryHostPointerPropertiesEXT,
  GLEW_VULKAN_vkCmdWriteBufferMarkerAMD,
  GLEW_VULKAN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT,
  GLEW_VULKAN_vkGetCalibratedTimestampsEXT,
  GLEW_VULKAN_vkCmdDrawMeshTasksNV,
  GLEW_VULKAN_vkCmdDrawMeshTasksIndirectNV,
  GLEW_VULKAN_vkCmdDrawMeshTasksIndirectCountNV,
  GLEW_VULKAN_vkCmdSetExclusiveScissorNV,
  GLEW_VULKAN_vkCmdSetCheckpointNV,
  GLEW_VULKAN_vkGetQueueCheckpointDataNV,
  GLEW_VULKAN_vkGetSemaphoreCounterValueKHR,
  GLEW_VULKAN_vkWaitSemaphoresKHR,
  GLEW_VULKAN_vkSignalSemaphoreKHR,
  GLEW_VULKAN_vkInitializePerformanceApiINTEL,
  GLEW_VULKAN_vkUninitializePerformanceApiINTEL,
  GLEW_VULKAN_vkCmdSetPerformanceMarkerINTEL,
  GLEW_VULKAN_vkCmdSetPerformanceStreamMarkerINTEL,
  GLEW_VULKAN_vkCmdSetPerformanceOverrideINTEL,
  GLEW_VULKAN_vkAcquirePerformanceConfigurationINTEL,
  GLEW_VULKAN_vkReleasePerformanceConfigurationINTEL,
  GLEW_VULKAN_vkQueueSetPerformanceConfigurationINTEL,
  GLEW_VULKAN_vkGetPerformanceParameterINTEL,
  GLEW_VULKAN_vkSetLocalDimmingAMD,
  GLEW_VULKAN_vkGetPhysicalDeviceFragmentShadingRatesKHR,
  GLEW_VULKAN_vkCmdSetFragmentShadingRateKHR,
  GLEW_VULKAN_vkGetBufferDeviceAddressEXT,
  GLEW_VULKAN_vkGetPhysicalDeviceToolPropertiesEXT,
  GLEW_VULKAN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV,
  GLEW_VULKAN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV,
  GLEW_VULKAN_vkCreateHeadlessSurfaceEXT,
  GLEW_VULKAN_vkGetBufferDeviceAddressKHR,
  GLEW_VULKAN_vkGetBufferOpaqueCaptureAddressKHR,
  GLEW_VULKAN_vkGetDeviceMemoryOpaqueCaptureAddressKHR,
  GLEW_VULKAN_vkCmdSetLineStippleEXT,
  GLEW_VULKAN_vkResetQueryPoolEXT,
  GLEW_VULKAN_vkCmdSetCullModeEXT,
  GLEW_VULKAN_vkCmdSetFrontFaceEXT,
  GLEW_VULKAN_vkCmdSetPrimitiveTopologyEXT,
  GLEW_VULKAN_vkCmdSetViewportWithCountEXT,
  GLEW_VULKAN_vkCmdSetScissorWithCountEXT,
  GLEW_VULKAN_vkCmdBindVertexBuffers2EXT,
  GLEW_VULKAN_vkCmdSetDepthTestEnableEXT,
  GLEW_VULKAN_vkCmdSetDepthWriteEnableEXT,
  GLEW_VULKAN_vkCmdSetDepthCompareOpEXT,
  GLEW_VULKAN_vkCmdSetDepthBoundsTestEnableEXT,
  GLEW_VULKAN_vkCmdSetStencilTestEnableEXT,
  GLEW_VULKAN_vkCmdSetStencilOpEXT,
  GLEW_VULKAN_vkCreateDeferredOperationKHR,
  GLEW_VULKAN_vkDestroyDeferredOperationKHR,
  GLEW_VULKAN_vkGetDeferredOperationMaxConcurrencyKHR,
  GLEW_VULKAN_vkGetDeferredOperationResultKHR,
  GLEW_VULKAN_vkDeferredOperationJoinKHR,
  GLEW_VULKAN_vkGetPipelineExecutablePropertiesKHR,
  GLEW_VULKAN_vkGetPipelineExecutableStatisticsKHR,
  GLEW_VULKAN_vkGetPipelineExecutableInternalRepresentationsKHR,
  GLEW_VULKAN_vkGetGeneratedCommandsMemoryRequirementsNV,
  GLEW_VULKAN_vkCmdPreprocessGeneratedCommandsNV,
  GLEW_VULKAN_vkCmdExecuteGeneratedCommandsNV,
  GLEW_VULKAN_vkCmdBindPipelineShaderGroupNV,
  GLEW_VULKAN_vkCreateIndirectCommandsLayoutNV,
  GLEW_VULKAN_vkDestroyIndirectCommandsLayoutNV,
  GLEW_VULKAN_vkCreatePrivateDataSlotEXT,
  GLEW_VULKAN_vkDestroyPrivateDataSlotEXT,
  GLEW_VULKAN_vkSetPrivateDataEXT,
  GLEW_VULKAN_vkGetPrivateDataEXT,
  GLEW_VULKAN_vkCmdSetEvent2KHR,
  GLEW_VULKAN_vkCmdResetEvent2KHR,
  GLEW_VULKAN_vkCmdWaitEvents2KHR,
  GLEW_VULKAN_vkCmdPipelineBarrier2KHR,
  GLEW_VULKAN_vkCmdWriteTimestamp2KHR,
  GLEW_VULKAN_vkQueueSubmit2KHR,
  GLEW_VULKAN_vkCmdWriteBufferMarker2AMD,
  GLEW_VULKAN_vkGetQueueCheckpointData2NV,
  GLEW_VULKAN_vkCmdSetFragmentShadingRateEnumNV,
  GLEW_VULKAN_vkCmdCopyBuffer2KHR,
  GLEW_VULKAN_vkCmdCopyImage2KHR,
  GLEW_VULKAN_vkCmdCopyBufferToImage2KHR,
  GLEW_VULKAN_vkCmdCopyImageToBuffer2KHR,
  GLEW_VULKAN_vkCmdBlitImage2KHR,
  GLEW_VULKAN_vkCmdResolveImage2KHR,
  GLEW_VULKAN_vkCmdSetVertexInputEXT,
  GLEW_VULKAN_vkCmdSetColorWriteEnableEXT,
#if defined(VK_USE_PLATFORM_XLIB_KHR)
  GLEW_VULKAN_vkCreateXlibSurfaceKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceXlibPresentationSupportKHR,
#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
  GLEW_VULKAN_vkCreateXcbSurfaceKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceXcbPresentationSupportKHR,
#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
  GLEW_VULKAN_vkCreateWaylandSurfaceKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceWaylandPresentationSupportKHR,
#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  GLEW_VULKAN_vkCreateAndroidSurfaceKHR,
  GLEW_VULKAN_vkGetAndroidHardwareBufferPropertiesANDROID,
  GLEW_VULKAN_vkGetMemoryAndroidHardwareBufferANDROID,
#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEW_VULKAN_vkCreateWin32SurfaceKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceWin32PresentationSupportKHR,
  GLEW_VULKAN_vkGetMemoryWin32HandleNV,
  GLEW_VULKAN_vkGetMemoryWin32HandleKHR,
  GLEW_VULKAN_vkGetMemoryWin32HandlePropertiesKHR,
  GLEW_VULKAN_vkImportSemaphoreWin32HandleKHR,
  GLEW_VULKAN_vkGetSemaphoreWin32HandleKHR,
  GLEW_VULKAN_vkImportFenceWin32HandleKHR,
  GLEW_VULKAN_vkGetFenceWin32HandleKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceSurfacePresentModes2EXT,
  GLEW_VULKAN_vkAcquireFullScreenExclusiveModeEXT,
  GLEW_VULKAN_vkReleaseFullScreenExclusiveModeEXT,
  GLEW_VULKAN_vkGetDeviceGroupSurfacePresentModes2EXT,
  GLEW_VULKAN_vkAcquireWinrtDisplayNV,
  GLEW_VULKAN_vkGetWinrtDisplayNV,
#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEW_VULKAN_vkGetPhysicalDeviceVideoCapabilitiesKHR,
  GLEW_VULKAN_vkGetPhysicalDeviceVideoFormatPropertiesKHR,
  GLEW_VULKAN_vkCreateVideoSessionKHR,
  GLEW_VULKAN_vkDestroyVideoSessionKHR,
  GLEW_VULKAN_vkGetVideoSessionMemoryRequirementsKHR,
  GLEW_VULKAN_vkBindVideoSessionMemoryKHR,
  GLEW_VULKAN_vkCreateVideoSessionParametersKHR,
  GLEW_VULKAN_vkUpdateVideoSessionParametersKHR,
  GLEW_VULKAN_vkDestroyVideoSessionParametersKHR,
  GLEW_VULKAN_vkCmdBeginVideoCodingKHR,
  GLEW_VULKAN_vkCmdEndVideoCodingKHR,
  GLEW_VULKAN_vkCmdControlVideoCodingKHR,
  GLEW_VULKAN_vkCmdDecodeVideoKHR,
  GLEW_VULKAN_vkCmdEncodeVideoKHR,
#endif
#if defined(VK_USE_PLATFORM_GGP)
  GLEW_VULKAN_vkCreateStreamDescriptorSurfaceGGP,
#endif
#if defined(VK_USE_PLATFORM_VI_NN)
  GLEW_VULKAN_vkCreateViSurfaceNN,
#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
  GLEW_VULKAN_vkAcquireXlibDisplayEXT,
  GLEW_VULKAN_vkGetRandROutputDisplayEXT,
#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
  GLEW_VULKAN_vkCreateIOSSurfaceMVK,
#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
  GLEW_VULKAN_vkCreateMacOSSurfaceMVK,
#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  GLEW_VULKAN_vkCreateImagePipeSurfaceFUCHSIA,
  GLEW_VULKAN_vkGetMemoryZirconHandleFUCHSIA,
  GLEW_VULKAN_vkGetMemoryZirconHandlePropertiesFUCHSIA,
  GLEW_VULKAN_vkImportSemaphoreZirconHandleFUCHSIA,
  GLEW_VULKAN_vkGetSemaphoreZirconHandleFUCHSIA,
#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
  GLEW_VULKAN_vkCreateMetalSurfaceEXT,
#endif
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
  GLEW_VULKAN_vkCreateDirectFBSurfaceEXT,
  GLEW_VULKAN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT,
#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
  GLEW_VULKAN_vkCreateScreenSurfaceQNX,
  GLEW_VULKAN_vkGetPhysicalDeviceScreenPresentationSupportQNX,
#endif
  GLEW_VULKAN_ProcDelegateCount
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VKAPI_ATTR VkResult VKAPI_CALL vkCreateInstance (const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkInstance* pInstance);
VKAPI_ATTR void VKAPI_CALL vkDestroyInstance (VkInstance instance, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkEnumeratePhysicalDevices (VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices);
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFeatures (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures);
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceFormatProperties (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties* pFormatProperties);
VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceImageFormatProperties (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties* pImageFormatProperties);
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceProperties (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties* pProperties);
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceQueueFamilyProperties (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties* pQueueFamilyProperties);
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMemoryProperties (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties* pMemoryProperties);
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetInstanceProcAddr (VkInstance instance, const char* pName);
VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vkGetDeviceProcAddr (VkDevice device, const char* pName);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateDevice (VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDevice* pDevice);
VKAPI_ATTR void VKAPI_CALL vkDestroyDevice (VkDevice device, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceExtensionProperties (const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties);
VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceExtensionProperties (VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties);
VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateInstanceLayerProperties (uint32_t* pPropertyCount, VkLayerProperties* pProperties);
VKAPI_ATTR VkResult VKAPI_CALL vkEnumerateDeviceLayerProperties (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties);
VKAPI_ATTR void VKAPI_CALL vkGetDeviceQueue (VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue);
VKAPI_ATTR VkResult VKAPI_CALL vkQueueSubmit (VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence);
VKAPI_ATTR VkResult VKAPI_CALL vkQueueWaitIdle (VkQueue queue);
VKAPI_ATTR VkResult VKAPI_CALL vkDeviceWaitIdle (VkDevice device);
VKAPI_ATTR VkResult VKAPI_CALL vkAllocateMemory (VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory);
VKAPI_ATTR void VKAPI_CALL vkFreeMemory (VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkMapMemory (VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData);
VKAPI_ATTR void VKAPI_CALL vkUnmapMemory (VkDevice device, VkDeviceMemory memory);
VKAPI_ATTR VkResult VKAPI_CALL vkFlushMappedMemoryRanges (VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
VKAPI_ATTR VkResult VKAPI_CALL vkInvalidateMappedMemoryRanges (VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges);
VKAPI_ATTR void VKAPI_CALL vkGetDeviceMemoryCommitment (VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes);
VKAPI_ATTR VkResult VKAPI_CALL vkBindBufferMemory (VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset);
VKAPI_ATTR VkResult VKAPI_CALL vkBindImageMemory (VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset);
VKAPI_ATTR void VKAPI_CALL vkGetBufferMemoryRequirements (VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL vkGetImageMemoryRequirements (VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL vkGetImageSparseMemoryRequirements (VkDevice device, VkImage image, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements* pSparseMemoryRequirements);
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceSparseImageFormatProperties (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t* pPropertyCount, VkSparseImageFormatProperties* pProperties);
VKAPI_ATTR VkResult VKAPI_CALL vkQueueBindSparse (VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateFence (VkDevice device, const VkFenceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
VKAPI_ATTR void VKAPI_CALL vkDestroyFence (VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkResetFences (VkDevice device, uint32_t fenceCount, const VkFence* pFences);
VKAPI_ATTR VkResult VKAPI_CALL vkGetFenceStatus (VkDevice device, VkFence fence);
VKAPI_ATTR VkResult VKAPI_CALL vkWaitForFences (VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateSemaphore (VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore);
VKAPI_ATTR void VKAPI_CALL vkDestroySemaphore (VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateEvent (VkDevice device, const VkEventCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkEvent* pEvent);
VKAPI_ATTR void VKAPI_CALL vkDestroyEvent (VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkGetEventStatus (VkDevice device, VkEvent event);
VKAPI_ATTR VkResult VKAPI_CALL vkSetEvent (VkDevice device, VkEvent event);
VKAPI_ATTR VkResult VKAPI_CALL vkResetEvent (VkDevice device, VkEvent event);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateQueryPool (VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool);
VKAPI_ATTR void VKAPI_CALL vkDestroyQueryPool (VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkGetQueryPoolResults (VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateBuffer (VkDevice device, const VkBufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer);
VKAPI_ATTR void VKAPI_CALL vkDestroyBuffer (VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateBufferView (VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkBufferView* pView);
VKAPI_ATTR void VKAPI_CALL vkDestroyBufferView (VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateImage (VkDevice device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImage* pImage);
VKAPI_ATTR void VKAPI_CALL vkDestroyImage (VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR void VKAPI_CALL vkGetImageSubresourceLayout (VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateImageView (VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView);
VKAPI_ATTR void VKAPI_CALL vkDestroyImageView (VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateShaderModule (VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule);
VKAPI_ATTR void VKAPI_CALL vkDestroyShaderModule (VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineCache (VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache);
VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineCache (VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkGetPipelineCacheData (VkDevice device, VkPipelineCache pipelineCache, size_t* pDataSize, void* pData);
VKAPI_ATTR VkResult VKAPI_CALL vkMergePipelineCaches (VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateGraphicsPipelines (VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateComputePipelines (VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
VKAPI_ATTR void VKAPI_CALL vkDestroyPipeline (VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreatePipelineLayout (VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout);
VKAPI_ATTR void VKAPI_CALL vkDestroyPipelineLayout (VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateSampler (VkDevice device, const VkSamplerCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSampler* pSampler);
VKAPI_ATTR void VKAPI_CALL vkDestroySampler (VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorSetLayout (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorSetLayout* pSetLayout);
VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorSetLayout (VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateDescriptorPool (VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool);
VKAPI_ATTR void VKAPI_CALL vkDestroyDescriptorPool (VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkResetDescriptorPool (VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags);
VKAPI_ATTR VkResult VKAPI_CALL vkAllocateDescriptorSets (VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets);
VKAPI_ATTR VkResult VKAPI_CALL vkFreeDescriptorSets (VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets);
VKAPI_ATTR void VKAPI_CALL vkUpdateDescriptorSets (VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateFramebuffer (VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer);
VKAPI_ATTR void VKAPI_CALL vkDestroyFramebuffer (VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass (VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
VKAPI_ATTR void VKAPI_CALL vkDestroyRenderPass (VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR void VKAPI_CALL vkGetRenderAreaGranularity (VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity);
VKAPI_ATTR VkResult VKAPI_CALL vkCreateCommandPool (VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool);
VKAPI_ATTR void VKAPI_CALL vkDestroyCommandPool (VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator);
VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandPool (VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags);
VKAPI_ATTR VkResult VKAPI_CALL vkAllocateCommandBuffers (VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers);
VKAPI_ATTR void VKAPI_CALL vkFreeCommandBuffers (VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);
VKAPI_ATTR VkResult VKAPI_CALL vkBeginCommandBuffer (VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo);
VKAPI_ATTR VkResult VKAPI_CALL vkEndCommandBuffer (VkCommandBuffer commandBuffer);
VKAPI_ATTR VkResult VKAPI_CALL vkResetCommandBuffer (VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
VKAPI_ATTR void VKAPI_CALL vkCmdBindPipeline (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
VKAPI_ATTR void VKAPI_CALL vkCmdSetViewport (VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport* pViewports);
VKAPI_ATTR void VKAPI_CALL vkCmdSetScissor (VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D* pScissors);
VKAPI_ATTR void VKAPI_CALL vkCmdSetLineWidth (VkCommandBuffer commandBuffer, float lineWidth);
VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBias (VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
VKAPI_ATTR void VKAPI_CALL vkCmdSetBlendConstants (VkCommandBuffer commandBuffer, const float blendConstants[4]);
VKAPI_ATTR void VKAPI_CALL vkCmdSetDepthBounds (VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilCompareMask (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilWriteMask (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
VKAPI_ATTR void VKAPI_CALL vkCmdSetStencilReference (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
VKAPI_ATTR void VKAPI_CALL vkCmdBindDescriptorSets (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t* pDynamicOffsets);
VKAPI_ATTR void VKAPI_CALL vkCmdBindIndexBuffer (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
VKAPI_ATTR void VKAPI_CALL vkCmdBindVertexBuffers (VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets);
VKAPI_ATTR void VKAPI_CALL vkCmdDraw (VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexed (VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirect (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirect (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
VKAPI_ATTR void VKAPI_CALL vkCmdDispatch (VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
VKAPI_ATTR void VKAPI_CALL vkCmdDispatchIndirect (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
VKAPI_ATTR void VKAPI_CALL vkCmdCopyBuffer (VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy* pRegions);
VKAPI_ATTR void VKAPI_CALL vkCmdCopyImage (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy* pRegions);
VKAPI_ATTR void VKAPI_CALL vkCmdBlitImage (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit* pRegions, VkFilter filter);
VKAPI_ATTR void VKAPI_CALL vkCmdCopyBufferToImage (VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy* pRegions);
VKAPI_ATTR void VKAPI_CALL vkCmdCopyImageToBuffer (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy* pRegions);
VKAPI_ATTR void VKAPI_CALL vkCmdUpdateBuffer (VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void* pData);
VKAPI_ATTR void VKAPI_CALL vkCmdFillBuffer (VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
VKAPI_ATTR void VKAPI_CALL vkCmdClearColorImage (VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
VKAPI_ATTR void VKAPI_CALL vkCmdClearDepthStencilImage (VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange* pRanges);
VKAPI_ATTR void VKAPI_CALL vkCmdClearAttachments (VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment* pAttachments, uint32_t rectCount, const VkClearRect* pRects);
VKAPI_ATTR void VKAPI_CALL vkCmdResolveImage (VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve* pRegions);
VKAPI_ATTR void VKAPI_CALL vkCmdSetEvent (VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
VKAPI_ATTR void VKAPI_CALL vkCmdResetEvent (VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
VKAPI_ATTR void VKAPI_CALL vkCmdWaitEvents (VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
VKAPI_ATTR void VKAPI_CALL vkCmdPipelineBarrier (VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier* pImageMemoryBarriers);
VKAPI_ATTR void VKAPI_CALL vkCmdBeginQuery (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
VKAPI_ATTR void VKAPI_CALL vkCmdEndQuery (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
VKAPI_ATTR void VKAPI_CALL vkCmdResetQueryPool (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
VKAPI_ATTR void VKAPI_CALL vkCmdWriteTimestamp (VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
VKAPI_ATTR void VKAPI_CALL vkCmdCopyQueryPoolResults (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
VKAPI_ATTR void VKAPI_CALL vkCmdPushConstants (VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void* pValues);
VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkSubpassContents contents);
VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass (VkCommandBuffer commandBuffer, VkSubpassContents contents);
VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass (VkCommandBuffer commandBuffer);
VKAPI_ATTR void VKAPI_CALL vkCmdExecuteCommands (VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef VkResult (* PFNVKENUMERATEINSTANCEVERSIONPROC) /* vkEnumerateInstanceVersion */ (uint32_t* pApiVersion);
typedef VkResult (* PFNVKBINDBUFFERMEMORY2PROC) /* vkBindBufferMemory2 */ (VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
typedef VkResult (* PFNVKBINDIMAGEMEMORY2PROC) /* vkBindImageMemory2 */ (VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
typedef void (* PFNVKGETDEVICEGROUPPEERMEMORYFEATURESPROC) /* vkGetDeviceGroupPeerMemoryFeatures */ (VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
typedef void (* PFNVKCMDSETDEVICEMASKPROC) /* vkCmdSetDeviceMask */ (VkCommandBuffer commandBuffer, uint32_t deviceMask);
typedef void (* PFNVKCMDDISPATCHBASEPROC) /* vkCmdDispatchBase */ (VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
typedef VkResult (* PFNVKENUMERATEPHYSICALDEVICEGROUPSPROC) /* vkEnumeratePhysicalDeviceGroups */ (VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
typedef void (* PFNVKGETIMAGEMEMORYREQUIREMENTS2PROC) /* vkGetImageMemoryRequirements2 */ (VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (* PFNVKGETBUFFERMEMORYREQUIREMENTS2PROC) /* vkGetBufferMemoryRequirements2 */ (VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (* PFNVKGETIMAGESPARSEMEMORYREQUIREMENTS2PROC) /* vkGetImageSparseMemoryRequirements2 */ (VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
typedef void (* PFNVKGETPHYSICALDEVICEFEATURES2PROC) /* vkGetPhysicalDeviceFeatures2 */ (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
typedef void (* PFNVKGETPHYSICALDEVICEPROPERTIES2PROC) /* vkGetPhysicalDeviceProperties2 */ (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
typedef void (* PFNVKGETPHYSICALDEVICEFORMATPROPERTIES2PROC) /* vkGetPhysicalDeviceFormatProperties2 */ (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
typedef VkResult (* PFNVKGETPHYSICALDEVICEIMAGEFORMATPROPERTIES2PROC) /* vkGetPhysicalDeviceImageFormatProperties2 */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
typedef void (* PFNVKGETPHYSICALDEVICEQUEUEFAMILYPROPERTIES2PROC) /* vkGetPhysicalDeviceQueueFamilyProperties2 */ (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
typedef void (* PFNVKGETPHYSICALDEVICEMEMORYPROPERTIES2PROC) /* vkGetPhysicalDeviceMemoryProperties2 */ (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
typedef void (* PFNVKGETPHYSICALDEVICESPARSEIMAGEFORMATPROPERTIES2PROC) /* vkGetPhysicalDeviceSparseImageFormatProperties2 */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
typedef void (* PFNVKTRIMCOMMANDPOOLPROC) /* vkTrimCommandPool */ (VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
typedef void (* PFNVKGETDEVICEQUEUE2PROC) /* vkGetDeviceQueue2 */ (VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
typedef VkResult (* PFNVKCREATESAMPLERYCBCRCONVERSIONPROC) /* vkCreateSamplerYcbcrConversion */ (VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
typedef void (* PFNVKDESTROYSAMPLERYCBCRCONVERSIONPROC) /* vkDestroySamplerYcbcrConversion */ (VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKCREATEDESCRIPTORUPDATETEMPLATEPROC) /* vkCreateDescriptorUpdateTemplate */ (VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
typedef void (* PFNVKDESTROYDESCRIPTORUPDATETEMPLATEPROC) /* vkDestroyDescriptorUpdateTemplate */ (VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKUPDATEDESCRIPTORSETWITHTEMPLATEPROC) /* vkUpdateDescriptorSetWithTemplate */ (VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
typedef void (* PFNVKGETPHYSICALDEVICEEXTERNALBUFFERPROPERTIESPROC) /* vkGetPhysicalDeviceExternalBufferProperties */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
typedef void (* PFNVKGETPHYSICALDEVICEEXTERNALFENCEPROPERTIESPROC) /* vkGetPhysicalDeviceExternalFenceProperties */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
typedef void (* PFNVKGETPHYSICALDEVICEEXTERNALSEMAPHOREPROPERTIESPROC) /* vkGetPhysicalDeviceExternalSemaphoreProperties */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
typedef void (* PFNVKGETDESCRIPTORSETLAYOUTSUPPORTPROC) /* vkGetDescriptorSetLayoutSupport */ (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
typedef void (* PFNVKCMDDRAWINDIRECTCOUNTPROC) /* vkCmdDrawIndirectCount */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef void (* PFNVKCMDDRAWINDEXEDINDIRECTCOUNTPROC) /* vkCmdDrawIndexedIndirectCount */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef VkResult (* PFNVKCREATERENDERPASS2PROC) /* vkCreateRenderPass2 */ (VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
typedef void (* PFNVKCMDBEGINRENDERPASS2PROC) /* vkCmdBeginRenderPass2 */ (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo);
typedef void (* PFNVKCMDNEXTSUBPASS2PROC) /* vkCmdNextSubpass2 */ (VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo);
typedef void (* PFNVKCMDENDRENDERPASS2PROC) /* vkCmdEndRenderPass2 */ (VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
typedef void (* PFNVKRESETQUERYPOOLPROC) /* vkResetQueryPool */ (VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
typedef VkResult (* PFNVKGETSEMAPHORECOUNTERVALUEPROC) /* vkGetSemaphoreCounterValue */ (VkDevice device, VkSemaphore semaphore, uint64_t* pValue);
typedef VkResult (* PFNVKWAITSEMAPHORESPROC) /* vkWaitSemaphores */ (VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
typedef VkResult (* PFNVKSIGNALSEMAPHOREPROC) /* vkSignalSemaphore */ (VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
typedef VkDeviceAddress (* PFNVKGETBUFFERDEVICEADDRESSPROC) /* vkGetBufferDeviceAddress */ (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef uint64_t (* PFNVKGETBUFFEROPAQUECAPTUREADDRESSPROC) /* vkGetBufferOpaqueCaptureAddress */ (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef uint64_t (* PFNVKGETDEVICEMEMORYOPAQUECAPTUREADDRESSPROC) /* vkGetDeviceMemoryOpaqueCaptureAddress */ (VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
typedef void (* PFNVKDESTROYSURFACEKHRPROC) /* vkDestroySurfaceKHR */ (VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACESUPPORTKHRPROC) /* vkGetPhysicalDeviceSurfaceSupportKHR */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACECAPABILITIESKHRPROC) /* vkGetPhysicalDeviceSurfaceCapabilitiesKHR */ (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACEFORMATSKHRPROC) /* vkGetPhysicalDeviceSurfaceFormatsKHR */ (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACEPRESENTMODESKHRPROC) /* vkGetPhysicalDeviceSurfacePresentModesKHR */ (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
typedef VkResult (* PFNVKCREATESWAPCHAINKHRPROC) /* vkCreateSwapchainKHR */ (VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain);
typedef void (* PFNVKDESTROYSWAPCHAINKHRPROC) /* vkDestroySwapchainKHR */ (VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKGETSWAPCHAINIMAGESKHRPROC) /* vkGetSwapchainImagesKHR */ (VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages);
typedef VkResult (* PFNVKACQUIRENEXTIMAGEKHRPROC) /* vkAcquireNextImageKHR */ (VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex);
typedef VkResult (* PFNVKQUEUEPRESENTKHRPROC) /* vkQueuePresentKHR */ (VkQueue queue, const VkPresentInfoKHR* pPresentInfo);
typedef VkResult (* PFNVKGETDEVICEGROUPPRESENTCAPABILITIESKHRPROC) /* vkGetDeviceGroupPresentCapabilitiesKHR */ (VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities);
typedef VkResult (* PFNVKGETDEVICEGROUPSURFACEPRESENTMODESKHRPROC) /* vkGetDeviceGroupSurfacePresentModesKHR */ (VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes);
typedef VkResult (* PFNVKGETPHYSICALDEVICEPRESENTRECTANGLESKHRPROC) /* vkGetPhysicalDevicePresentRectanglesKHR */ (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects);
typedef VkResult (* PFNVKACQUIRENEXTIMAGE2KHRPROC) /* vkAcquireNextImage2KHR */ (VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
typedef VkResult (* PFNVKGETPHYSICALDEVICEDISPLAYPROPERTIESKHRPROC) /* vkGetPhysicalDeviceDisplayPropertiesKHR */ (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
typedef VkResult (* PFNVKGETPHYSICALDEVICEDISPLAYPLANEPROPERTIESKHRPROC) /* vkGetPhysicalDeviceDisplayPlanePropertiesKHR */ (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
typedef VkResult (* PFNVKGETDISPLAYPLANESUPPORTEDDISPLAYSKHRPROC) /* vkGetDisplayPlaneSupportedDisplaysKHR */ (VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays);
typedef VkResult (* PFNVKGETDISPLAYMODEPROPERTIESKHRPROC) /* vkGetDisplayModePropertiesKHR */ (VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
typedef VkResult (* PFNVKCREATEDISPLAYMODEKHRPROC) /* vkCreateDisplayModeKHR */ (VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
typedef VkResult (* PFNVKGETDISPLAYPLANECAPABILITIESKHRPROC) /* vkGetDisplayPlaneCapabilitiesKHR */ (VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
typedef VkResult (* PFNVKCREATEDISPLAYPLANESURFACEKHRPROC) /* vkCreateDisplayPlaneSurfaceKHR */ (VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkResult (* PFNVKCREATESHAREDSWAPCHAINSKHRPROC) /* vkCreateSharedSwapchainsKHR */ (VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);
typedef VkResult (* PFNVKCREATEDEBUGREPORTCALLBACKEXTPROC) /* vkCreateDebugReportCallbackEXT */ (VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
typedef void (* PFNVKDESTROYDEBUGREPORTCALLBACKEXTPROC) /* vkDestroyDebugReportCallbackEXT */ (VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKDEBUGREPORTMESSAGEEXTPROC) /* vkDebugReportMessageEXT */ (VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage);
typedef VkResult (* PFNVKDEBUGMARKERSETOBJECTTAGEXTPROC) /* vkDebugMarkerSetObjectTagEXT */ (VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
typedef VkResult (* PFNVKDEBUGMARKERSETOBJECTNAMEEXTPROC) /* vkDebugMarkerSetObjectNameEXT */ (VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
typedef void (* PFNVKCMDDEBUGMARKERBEGINEXTPROC) /* vkCmdDebugMarkerBeginEXT */ (VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
typedef void (* PFNVKCMDDEBUGMARKERENDEXTPROC) /* vkCmdDebugMarkerEndEXT */ (VkCommandBuffer commandBuffer);
typedef void (* PFNVKCMDDEBUGMARKERINSERTEXTPROC) /* vkCmdDebugMarkerInsertEXT */ (VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
typedef void (* PFNVKCMDBINDTRANSFORMFEEDBACKBUFFERSEXTPROC) /* vkCmdBindTransformFeedbackBuffersEXT */ (VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes);
typedef void (* PFNVKCMDBEGINTRANSFORMFEEDBACKEXTPROC) /* vkCmdBeginTransformFeedbackEXT */ (VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
typedef void (* PFNVKCMDENDTRANSFORMFEEDBACKEXTPROC) /* vkCmdEndTransformFeedbackEXT */ (VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
typedef void (* PFNVKCMDBEGINQUERYINDEXEDEXTPROC) /* vkCmdBeginQueryIndexedEXT */ (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index);
typedef void (* PFNVKCMDENDQUERYINDEXEDEXTPROC) /* vkCmdEndQueryIndexedEXT */ (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index);
typedef void (* PFNVKCMDDRAWINDIRECTBYTECOUNTEXTPROC) /* vkCmdDrawIndirectByteCountEXT */ (VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride);
typedef uint32_t (* PFNVKGETIMAGEVIEWHANDLENVXPROC) /* vkGetImageViewHandleNVX */ (VkDevice device, const VkImageViewHandleInfoNVX* pInfo);
typedef VkResult (* PFNVKGETIMAGEVIEWADDRESSNVXPROC) /* vkGetImageViewAddressNVX */ (VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);
typedef void (* PFNVKCMDDRAWINDIRECTCOUNTAMDPROC) /* vkCmdDrawIndirectCountAMD */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef void (* PFNVKCMDDRAWINDEXEDINDIRECTCOUNTAMDPROC) /* vkCmdDrawIndexedIndirectCountAMD */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef VkResult (* PFNVKGETSHADERINFOAMDPROC) /* vkGetShaderInfoAMD */ (VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo);
typedef VkResult (* PFNVKGETPHYSICALDEVICEEXTERNALIMAGEFORMATPROPERTIESNVPROC) /* vkGetPhysicalDeviceExternalImageFormatPropertiesNV */ (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);
typedef void (* PFNVKGETPHYSICALDEVICEFEATURES2KHRPROC) /* vkGetPhysicalDeviceFeatures2KHR */ (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
typedef void (* PFNVKGETPHYSICALDEVICEPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceProperties2KHR */ (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
typedef void (* PFNVKGETPHYSICALDEVICEFORMATPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceFormatProperties2KHR */ (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
typedef VkResult (* PFNVKGETPHYSICALDEVICEIMAGEFORMATPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceImageFormatProperties2KHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
typedef void (* PFNVKGETPHYSICALDEVICEQUEUEFAMILYPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceQueueFamilyProperties2KHR */ (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
typedef void (* PFNVKGETPHYSICALDEVICEMEMORYPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceMemoryProperties2KHR */ (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
typedef void (* PFNVKGETPHYSICALDEVICESPARSEIMAGEFORMATPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceSparseImageFormatProperties2KHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
typedef void (* PFNVKGETDEVICEGROUPPEERMEMORYFEATURESKHRPROC) /* vkGetDeviceGroupPeerMemoryFeaturesKHR */ (VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
typedef void (* PFNVKCMDSETDEVICEMASKKHRPROC) /* vkCmdSetDeviceMaskKHR */ (VkCommandBuffer commandBuffer, uint32_t deviceMask);
typedef void (* PFNVKCMDDISPATCHBASEKHRPROC) /* vkCmdDispatchBaseKHR */ (VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
typedef void (* PFNVKTRIMCOMMANDPOOLKHRPROC) /* vkTrimCommandPoolKHR */ (VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
typedef VkResult (* PFNVKENUMERATEPHYSICALDEVICEGROUPSKHRPROC) /* vkEnumeratePhysicalDeviceGroupsKHR */ (VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
typedef void (* PFNVKGETPHYSICALDEVICEEXTERNALBUFFERPROPERTIESKHRPROC) /* vkGetPhysicalDeviceExternalBufferPropertiesKHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
typedef VkResult (* PFNVKGETMEMORYFDKHRPROC) /* vkGetMemoryFdKHR */ (VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
typedef VkResult (* PFNVKGETMEMORYFDPROPERTIESKHRPROC) /* vkGetMemoryFdPropertiesKHR */ (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties);
typedef void (* PFNVKGETPHYSICALDEVICEEXTERNALSEMAPHOREPROPERTIESKHRPROC) /* vkGetPhysicalDeviceExternalSemaphorePropertiesKHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
typedef VkResult (* PFNVKIMPORTSEMAPHOREFDKHRPROC) /* vkImportSemaphoreFdKHR */ (VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
typedef VkResult (* PFNVKGETSEMAPHOREFDKHRPROC) /* vkGetSemaphoreFdKHR */ (VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);
typedef void (* PFNVKCMDPUSHDESCRIPTORSETKHRPROC) /* vkCmdPushDescriptorSetKHR */ (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);
typedef void (* PFNVKCMDPUSHDESCRIPTORSETWITHTEMPLATEKHRPROC) /* vkCmdPushDescriptorSetWithTemplateKHR */ (VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData);
typedef void (* PFNVKCMDBEGINCONDITIONALRENDERINGEXTPROC) /* vkCmdBeginConditionalRenderingEXT */ (VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);
typedef void (* PFNVKCMDENDCONDITIONALRENDERINGEXTPROC) /* vkCmdEndConditionalRenderingEXT */ (VkCommandBuffer commandBuffer);
typedef VkResult (* PFNVKCREATEDESCRIPTORUPDATETEMPLATEKHRPROC) /* vkCreateDescriptorUpdateTemplateKHR */ (VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
typedef void (* PFNVKDESTROYDESCRIPTORUPDATETEMPLATEKHRPROC) /* vkDestroyDescriptorUpdateTemplateKHR */ (VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKUPDATEDESCRIPTORSETWITHTEMPLATEKHRPROC) /* vkUpdateDescriptorSetWithTemplateKHR */ (VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
typedef void (* PFNVKCMDSETVIEWPORTWSCALINGNVPROC) /* vkCmdSetViewportWScalingNV */ (VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings);
typedef VkResult (* PFNVKRELEASEDISPLAYEXTPROC) /* vkReleaseDisplayEXT */ (VkPhysicalDevice physicalDevice, VkDisplayKHR display);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACECAPABILITIES2EXTPROC) /* vkGetPhysicalDeviceSurfaceCapabilities2EXT */ (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities);
typedef VkResult (* PFNVKDISPLAYPOWERCONTROLEXTPROC) /* vkDisplayPowerControlEXT */ (VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
typedef VkResult (* PFNVKREGISTERDEVICEEVENTEXTPROC) /* vkRegisterDeviceEventEXT */ (VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
typedef VkResult (* PFNVKREGISTERDISPLAYEVENTEXTPROC) /* vkRegisterDisplayEventEXT */ (VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
typedef VkResult (* PFNVKGETSWAPCHAINCOUNTEREXTPROC) /* vkGetSwapchainCounterEXT */ (VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue);
typedef VkResult (* PFNVKGETREFRESHCYCLEDURATIONGOOGLEPROC) /* vkGetRefreshCycleDurationGOOGLE */ (VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties);
typedef VkResult (* PFNVKGETPASTPRESENTATIONTIMINGGOOGLEPROC) /* vkGetPastPresentationTimingGOOGLE */ (VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings);
typedef void (* PFNVKCMDSETDISCARDRECTANGLEEXTPROC) /* vkCmdSetDiscardRectangleEXT */ (VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles);
typedef void (* PFNVKSETHDRMETADATAEXTPROC) /* vkSetHdrMetadataEXT */ (VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata);
typedef VkResult (* PFNVKCREATERENDERPASS2KHRPROC) /* vkCreateRenderPass2KHR */ (VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
typedef void (* PFNVKCMDBEGINRENDERPASS2KHRPROC) /* vkCmdBeginRenderPass2KHR */ (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo);
typedef void (* PFNVKCMDNEXTSUBPASS2KHRPROC) /* vkCmdNextSubpass2KHR */ (VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo);
typedef void (* PFNVKCMDENDRENDERPASS2KHRPROC) /* vkCmdEndRenderPass2KHR */ (VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
typedef VkResult (* PFNVKGETSWAPCHAINSTATUSKHRPROC) /* vkGetSwapchainStatusKHR */ (VkDevice device, VkSwapchainKHR swapchain);
typedef void (* PFNVKGETPHYSICALDEVICEEXTERNALFENCEPROPERTIESKHRPROC) /* vkGetPhysicalDeviceExternalFencePropertiesKHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
typedef VkResult (* PFNVKIMPORTFENCEFDKHRPROC) /* vkImportFenceFdKHR */ (VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo);
typedef VkResult (* PFNVKGETFENCEFDKHRPROC) /* vkGetFenceFdKHR */ (VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);
typedef VkResult (* PFNVKENUMERATEPHYSICALDEVICEQUEUEFAMILYPERFORMANCEQUERYCOUNTERSKHRPROC) /* vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
typedef void (* PFNVKGETPHYSICALDEVICEQUEUEFAMILYPERFORMANCEQUERYPASSESKHRPROC) /* vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR */ (VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses);
typedef VkResult (* PFNVKACQUIREPROFILINGLOCKKHRPROC) /* vkAcquireProfilingLockKHR */ (VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo);
typedef void (* PFNVKRELEASEPROFILINGLOCKKHRPROC) /* vkReleaseProfilingLockKHR */ (VkDevice device);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACECAPABILITIES2KHRPROC) /* vkGetPhysicalDeviceSurfaceCapabilities2KHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACEFORMATS2KHRPROC) /* vkGetPhysicalDeviceSurfaceFormats2KHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats);
typedef VkResult (* PFNVKGETPHYSICALDEVICEDISPLAYPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceDisplayProperties2KHR */ (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties);
typedef VkResult (* PFNVKGETPHYSICALDEVICEDISPLAYPLANEPROPERTIES2KHRPROC) /* vkGetPhysicalDeviceDisplayPlaneProperties2KHR */ (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties);
typedef VkResult (* PFNVKGETDISPLAYMODEPROPERTIES2KHRPROC) /* vkGetDisplayModeProperties2KHR */ (VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
typedef VkResult (* PFNVKGETDISPLAYPLANECAPABILITIES2KHRPROC) /* vkGetDisplayPlaneCapabilities2KHR */ (VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities);
typedef VkResult (* PFNVKSETDEBUGUTILSOBJECTNAMEEXTPROC) /* vkSetDebugUtilsObjectNameEXT */ (VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
typedef VkResult (* PFNVKSETDEBUGUTILSOBJECTTAGEXTPROC) /* vkSetDebugUtilsObjectTagEXT */ (VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
typedef void (* PFNVKQUEUEBEGINDEBUGUTILSLABELEXTPROC) /* vkQueueBeginDebugUtilsLabelEXT */ (VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef void (* PFNVKQUEUEENDDEBUGUTILSLABELEXTPROC) /* vkQueueEndDebugUtilsLabelEXT */ (VkQueue queue);
typedef void (* PFNVKQUEUEINSERTDEBUGUTILSLABELEXTPROC) /* vkQueueInsertDebugUtilsLabelEXT */ (VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef void (* PFNVKCMDBEGINDEBUGUTILSLABELEXTPROC) /* vkCmdBeginDebugUtilsLabelEXT */ (VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef void (* PFNVKCMDENDDEBUGUTILSLABELEXTPROC) /* vkCmdEndDebugUtilsLabelEXT */ (VkCommandBuffer commandBuffer);
typedef void (* PFNVKCMDINSERTDEBUGUTILSLABELEXTPROC) /* vkCmdInsertDebugUtilsLabelEXT */ (VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
typedef VkResult (* PFNVKCREATEDEBUGUTILSMESSENGEREXTPROC) /* vkCreateDebugUtilsMessengerEXT */ (VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
typedef void (* PFNVKDESTROYDEBUGUTILSMESSENGEREXTPROC) /* vkDestroyDebugUtilsMessengerEXT */ (VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKSUBMITDEBUGUTILSMESSAGEEXTPROC) /* vkSubmitDebugUtilsMessageEXT */ (VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
typedef void (* PFNVKCMDSETSAMPLELOCATIONSEXTPROC) /* vkCmdSetSampleLocationsEXT */ (VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
typedef void (* PFNVKGETPHYSICALDEVICEMULTISAMPLEPROPERTIESEXTPROC) /* vkGetPhysicalDeviceMultisamplePropertiesEXT */ (VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties);
typedef void (* PFNVKGETIMAGEMEMORYREQUIREMENTS2KHRPROC) /* vkGetImageMemoryRequirements2KHR */ (VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (* PFNVKGETBUFFERMEMORYREQUIREMENTS2KHRPROC) /* vkGetBufferMemoryRequirements2KHR */ (VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (* PFNVKGETIMAGESPARSEMEMORYREQUIREMENTS2KHRPROC) /* vkGetImageSparseMemoryRequirements2KHR */ (VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
typedef VkResult (* PFNVKCREATEACCELERATIONSTRUCTUREKHRPROC) /* vkCreateAccelerationStructureKHR */ (VkDevice device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureKHR* pAccelerationStructure);
typedef void (* PFNVKDESTROYACCELERATIONSTRUCTUREKHRPROC) /* vkDestroyAccelerationStructureKHR */ (VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKCMDBUILDACCELERATIONSTRUCTURESKHRPROC) /* vkCmdBuildAccelerationStructuresKHR */ (VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
typedef void (* PFNVKCMDBUILDACCELERATIONSTRUCTURESINDIRECTKHRPROC) /* vkCmdBuildAccelerationStructuresIndirectKHR */ (VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts);
typedef VkResult (* PFNVKBUILDACCELERATIONSTRUCTURESKHRPROC) /* vkBuildAccelerationStructuresKHR */ (VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
typedef VkResult (* PFNVKCOPYACCELERATIONSTRUCTUREKHRPROC) /* vkCopyAccelerationStructureKHR */ (VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo);
typedef VkResult (* PFNVKCOPYACCELERATIONSTRUCTURETOMEMORYKHRPROC) /* vkCopyAccelerationStructureToMemoryKHR */ (VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
typedef VkResult (* PFNVKCOPYMEMORYTOACCELERATIONSTRUCTUREKHRPROC) /* vkCopyMemoryToAccelerationStructureKHR */ (VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
typedef VkResult (* PFNVKWRITEACCELERATIONSTRUCTURESPROPERTIESKHRPROC) /* vkWriteAccelerationStructuresPropertiesKHR */ (VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, size_t dataSize, void* pData, size_t stride);
typedef void (* PFNVKCMDCOPYACCELERATIONSTRUCTUREKHRPROC) /* vkCmdCopyAccelerationStructureKHR */ (VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo);
typedef void (* PFNVKCMDCOPYACCELERATIONSTRUCTURETOMEMORYKHRPROC) /* vkCmdCopyAccelerationStructureToMemoryKHR */ (VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
typedef void (* PFNVKCMDCOPYMEMORYTOACCELERATIONSTRUCTUREKHRPROC) /* vkCmdCopyMemoryToAccelerationStructureKHR */ (VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
typedef VkDeviceAddress (* PFNVKGETACCELERATIONSTRUCTUREDEVICEADDRESSKHRPROC) /* vkGetAccelerationStructureDeviceAddressKHR */ (VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
typedef void (* PFNVKCMDWRITEACCELERATIONSTRUCTURESPROPERTIESKHRPROC) /* vkCmdWriteAccelerationStructuresPropertiesKHR */ (VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
typedef void (* PFNVKGETDEVICEACCELERATIONSTRUCTURECOMPATIBILITYKHRPROC) /* vkGetDeviceAccelerationStructureCompatibilityKHR */ (VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility);
typedef void (* PFNVKGETACCELERATIONSTRUCTUREBUILDSIZESKHRPROC) /* vkGetAccelerationStructureBuildSizesKHR */ (VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo, const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo);
typedef void (* PFNVKCMDTRACERAYSKHRPROC) /* vkCmdTraceRaysKHR */ (VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth);
typedef VkResult (* PFNVKCREATERAYTRACINGPIPELINESKHRPROC) /* vkCreateRayTracingPipelinesKHR */ (VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VkResult (* PFNVKGETRAYTRACINGSHADERGROUPHANDLESKHRPROC) /* vkGetRayTracingShaderGroupHandlesKHR */ (VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
typedef VkResult (* PFNVKGETRAYTRACINGCAPTUREREPLAYSHADERGROUPHANDLESKHRPROC) /* vkGetRayTracingCaptureReplayShaderGroupHandlesKHR */ (VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
typedef void (* PFNVKCMDTRACERAYSINDIRECTKHRPROC) /* vkCmdTraceRaysIndirectKHR */ (VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress);
typedef VkDeviceSize (* PFNVKGETRAYTRACINGSHADERGROUPSTACKSIZEKHRPROC) /* vkGetRayTracingShaderGroupStackSizeKHR */ (VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader);
typedef void (* PFNVKCMDSETRAYTRACINGPIPELINESTACKSIZEKHRPROC) /* vkCmdSetRayTracingPipelineStackSizeKHR */ (VkCommandBuffer commandBuffer, uint32_t pipelineStackSize);
typedef VkResult (* PFNVKCREATESAMPLERYCBCRCONVERSIONKHRPROC) /* vkCreateSamplerYcbcrConversionKHR */ (VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
typedef void (* PFNVKDESTROYSAMPLERYCBCRCONVERSIONKHRPROC) /* vkDestroySamplerYcbcrConversionKHR */ (VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKBINDBUFFERMEMORY2KHRPROC) /* vkBindBufferMemory2KHR */ (VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
typedef VkResult (* PFNVKBINDIMAGEMEMORY2KHRPROC) /* vkBindImageMemory2KHR */ (VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
typedef VkResult (* PFNVKGETIMAGEDRMFORMATMODIFIERPROPERTIESEXTPROC) /* vkGetImageDrmFormatModifierPropertiesEXT */ (VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties);
typedef VkResult (* PFNVKCREATEVALIDATIONCACHEEXTPROC) /* vkCreateValidationCacheEXT */ (VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache);
typedef void (* PFNVKDESTROYVALIDATIONCACHEEXTPROC) /* vkDestroyValidationCacheEXT */ (VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKMERGEVALIDATIONCACHESEXTPROC) /* vkMergeValidationCachesEXT */ (VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches);
typedef VkResult (* PFNVKGETVALIDATIONCACHEDATAEXTPROC) /* vkGetValidationCacheDataEXT */ (VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData);
typedef void (* PFNVKCMDBINDSHADINGRATEIMAGENVPROC) /* vkCmdBindShadingRateImageNV */ (VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
typedef void (* PFNVKCMDSETVIEWPORTSHADINGRATEPALETTENVPROC) /* vkCmdSetViewportShadingRatePaletteNV */ (VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes);
typedef void (* PFNVKCMDSETCOARSESAMPLEORDERNVPROC) /* vkCmdSetCoarseSampleOrderNV */ (VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders);
typedef VkResult (* PFNVKCREATEACCELERATIONSTRUCTURENVPROC) /* vkCreateAccelerationStructureNV */ (VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure);
typedef void (* PFNVKDESTROYACCELERATIONSTRUCTURENVPROC) /* vkDestroyAccelerationStructureNV */ (VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKGETACCELERATIONSTRUCTUREMEMORYREQUIREMENTSNVPROC) /* vkGetAccelerationStructureMemoryRequirementsNV */ (VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
typedef VkResult (* PFNVKBINDACCELERATIONSTRUCTUREMEMORYNVPROC) /* vkBindAccelerationStructureMemoryNV */ (VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
typedef void (* PFNVKCMDBUILDACCELERATIONSTRUCTURENVPROC) /* vkCmdBuildAccelerationStructureNV */ (VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset);
typedef void (* PFNVKCMDCOPYACCELERATIONSTRUCTURENVPROC) /* vkCmdCopyAccelerationStructureNV */ (VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode);
typedef void (* PFNVKCMDTRACERAYSNVPROC) /* vkCmdTraceRaysNV */ (VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth);
typedef VkResult (* PFNVKCREATERAYTRACINGPIPELINESNVPROC) /* vkCreateRayTracingPipelinesNV */ (VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
typedef VkResult (* PFNVKGETRAYTRACINGSHADERGROUPHANDLESNVPROC) /* vkGetRayTracingShaderGroupHandlesNV */ (VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
typedef VkResult (* PFNVKGETACCELERATIONSTRUCTUREHANDLENVPROC) /* vkGetAccelerationStructureHandleNV */ (VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData);
typedef void (* PFNVKCMDWRITEACCELERATIONSTRUCTURESPROPERTIESNVPROC) /* vkCmdWriteAccelerationStructuresPropertiesNV */ (VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
typedef VkResult (* PFNVKCOMPILEDEFERREDNVPROC) /* vkCompileDeferredNV */ (VkDevice device, VkPipeline pipeline, uint32_t shader);
typedef void (* PFNVKGETDESCRIPTORSETLAYOUTSUPPORTKHRPROC) /* vkGetDescriptorSetLayoutSupportKHR */ (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
typedef void (* PFNVKCMDDRAWINDIRECTCOUNTKHRPROC) /* vkCmdDrawIndirectCountKHR */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef void (* PFNVKCMDDRAWINDEXEDINDIRECTCOUNTKHRPROC) /* vkCmdDrawIndexedIndirectCountKHR */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef VkResult (* PFNVKGETMEMORYHOSTPOINTERPROPERTIESEXTPROC) /* vkGetMemoryHostPointerPropertiesEXT */ (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties);
typedef void (* PFNVKCMDWRITEBUFFERMARKERAMDPROC) /* vkCmdWriteBufferMarkerAMD */ (VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
typedef VkResult (* PFNVKGETPHYSICALDEVICECALIBRATEABLETIMEDOMAINSEXTPROC) /* vkGetPhysicalDeviceCalibrateableTimeDomainsEXT */ (VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains);
typedef VkResult (* PFNVKGETCALIBRATEDTIMESTAMPSEXTPROC) /* vkGetCalibratedTimestampsEXT */ (VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation);
typedef void (* PFNVKCMDDRAWMESHTASKSNVPROC) /* vkCmdDrawMeshTasksNV */ (VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask);
typedef void (* PFNVKCMDDRAWMESHTASKSINDIRECTNVPROC) /* vkCmdDrawMeshTasksIndirectNV */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
typedef void (* PFNVKCMDDRAWMESHTASKSINDIRECTCOUNTNVPROC) /* vkCmdDrawMeshTasksIndirectCountNV */ (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
typedef void (* PFNVKCMDSETEXCLUSIVESCISSORNVPROC) /* vkCmdSetExclusiveScissorNV */ (VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors);
typedef void (* PFNVKCMDSETCHECKPOINTNVPROC) /* vkCmdSetCheckpointNV */ (VkCommandBuffer commandBuffer, const void* pCheckpointMarker);
typedef void (* PFNVKGETQUEUECHECKPOINTDATANVPROC) /* vkGetQueueCheckpointDataNV */ (VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
typedef VkResult (* PFNVKGETSEMAPHORECOUNTERVALUEKHRPROC) /* vkGetSemaphoreCounterValueKHR */ (VkDevice device, VkSemaphore semaphore, uint64_t* pValue);
typedef VkResult (* PFNVKWAITSEMAPHORESKHRPROC) /* vkWaitSemaphoresKHR */ (VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
typedef VkResult (* PFNVKSIGNALSEMAPHOREKHRPROC) /* vkSignalSemaphoreKHR */ (VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
typedef VkResult (* PFNVKINITIALIZEPERFORMANCEAPIINTELPROC) /* vkInitializePerformanceApiINTEL */ (VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
typedef void (* PFNVKUNINITIALIZEPERFORMANCEAPIINTELPROC) /* vkUninitializePerformanceApiINTEL */ (VkDevice device);
typedef VkResult (* PFNVKCMDSETPERFORMANCEMARKERINTELPROC) /* vkCmdSetPerformanceMarkerINTEL */ (VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo);
typedef VkResult (* PFNVKCMDSETPERFORMANCESTREAMMARKERINTELPROC) /* vkCmdSetPerformanceStreamMarkerINTEL */ (VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo);
typedef VkResult (* PFNVKCMDSETPERFORMANCEOVERRIDEINTELPROC) /* vkCmdSetPerformanceOverrideINTEL */ (VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo);
typedef VkResult (* PFNVKACQUIREPERFORMANCECONFIGURATIONINTELPROC) /* vkAcquirePerformanceConfigurationINTEL */ (VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration);
typedef VkResult (* PFNVKRELEASEPERFORMANCECONFIGURATIONINTELPROC) /* vkReleasePerformanceConfigurationINTEL */ (VkDevice device, VkPerformanceConfigurationINTEL configuration);
typedef VkResult (* PFNVKQUEUESETPERFORMANCECONFIGURATIONINTELPROC) /* vkQueueSetPerformanceConfigurationINTEL */ (VkQueue queue, VkPerformanceConfigurationINTEL configuration);
typedef VkResult (* PFNVKGETPERFORMANCEPARAMETERINTELPROC) /* vkGetPerformanceParameterINTEL */ (VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue);
typedef void (* PFNVKSETLOCALDIMMINGAMDPROC) /* vkSetLocalDimmingAMD */ (VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);
typedef VkResult (* PFNVKGETPHYSICALDEVICEFRAGMENTSHADINGRATESKHRPROC) /* vkGetPhysicalDeviceFragmentShadingRatesKHR */ (VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
typedef void (* PFNVKCMDSETFRAGMENTSHADINGRATEKHRPROC) /* vkCmdSetFragmentShadingRateKHR */ (VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
typedef VkDeviceAddress (* PFNVKGETBUFFERDEVICEADDRESSEXTPROC) /* vkGetBufferDeviceAddressEXT */ (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef VkResult (* PFNVKGETPHYSICALDEVICETOOLPROPERTIESEXTPROC) /* vkGetPhysicalDeviceToolPropertiesEXT */ (VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties);
typedef VkResult (* PFNVKGETPHYSICALDEVICECOOPERATIVEMATRIXPROPERTIESNVPROC) /* vkGetPhysicalDeviceCooperativeMatrixPropertiesNV */ (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties);
typedef VkResult (* PFNVKGETPHYSICALDEVICESUPPORTEDFRAMEBUFFERMIXEDSAMPLESCOMBINATIONSNVPROC) /* vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV */ (VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations);
typedef VkResult (* PFNVKCREATEHEADLESSSURFACEEXTPROC) /* vkCreateHeadlessSurfaceEXT */ (VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkDeviceAddress (* PFNVKGETBUFFERDEVICEADDRESSKHRPROC) /* vkGetBufferDeviceAddressKHR */ (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef uint64_t (* PFNVKGETBUFFEROPAQUECAPTUREADDRESSKHRPROC) /* vkGetBufferOpaqueCaptureAddressKHR */ (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
typedef uint64_t (* PFNVKGETDEVICEMEMORYOPAQUECAPTUREADDRESSKHRPROC) /* vkGetDeviceMemoryOpaqueCaptureAddressKHR */ (VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
typedef void (* PFNVKCMDSETLINESTIPPLEEXTPROC) /* vkCmdSetLineStippleEXT */ (VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
typedef void (* PFNVKRESETQUERYPOOLEXTPROC) /* vkResetQueryPoolEXT */ (VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
typedef void (* PFNVKCMDSETCULLMODEEXTPROC) /* vkCmdSetCullModeEXT */ (VkCommandBuffer commandBuffer, VkCullModeFlags cullMode);
typedef void (* PFNVKCMDSETFRONTFACEEXTPROC) /* vkCmdSetFrontFaceEXT */ (VkCommandBuffer commandBuffer, VkFrontFace frontFace);
typedef void (* PFNVKCMDSETPRIMITIVETOPOLOGYEXTPROC) /* vkCmdSetPrimitiveTopologyEXT */ (VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology);
typedef void (* PFNVKCMDSETVIEWPORTWITHCOUNTEXTPROC) /* vkCmdSetViewportWithCountEXT */ (VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
typedef void (* PFNVKCMDSETSCISSORWITHCOUNTEXTPROC) /* vkCmdSetScissorWithCountEXT */ (VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
typedef void (* PFNVKCMDBINDVERTEXBUFFERS2EXTPROC) /* vkCmdBindVertexBuffers2EXT */ (VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides);
typedef void (* PFNVKCMDSETDEPTHTESTENABLEEXTPROC) /* vkCmdSetDepthTestEnableEXT */ (VkCommandBuffer commandBuffer, VkBool32 depthTestEnable);
typedef void (* PFNVKCMDSETDEPTHWRITEENABLEEXTPROC) /* vkCmdSetDepthWriteEnableEXT */ (VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable);
typedef void (* PFNVKCMDSETDEPTHCOMPAREOPEXTPROC) /* vkCmdSetDepthCompareOpEXT */ (VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp);
typedef void (* PFNVKCMDSETDEPTHBOUNDSTESTENABLEEXTPROC) /* vkCmdSetDepthBoundsTestEnableEXT */ (VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable);
typedef void (* PFNVKCMDSETSTENCILTESTENABLEEXTPROC) /* vkCmdSetStencilTestEnableEXT */ (VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable);
typedef void (* PFNVKCMDSETSTENCILOPEXTPROC) /* vkCmdSetStencilOpEXT */ (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);
typedef VkResult (* PFNVKCREATEDEFERREDOPERATIONKHRPROC) /* vkCreateDeferredOperationKHR */ (VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation);
typedef void (* PFNVKDESTROYDEFERREDOPERATIONKHRPROC) /* vkDestroyDeferredOperationKHR */ (VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
typedef uint32_t (* PFNVKGETDEFERREDOPERATIONMAXCONCURRENCYKHRPROC) /* vkGetDeferredOperationMaxConcurrencyKHR */ (VkDevice device, VkDeferredOperationKHR operation);
typedef VkResult (* PFNVKGETDEFERREDOPERATIONRESULTKHRPROC) /* vkGetDeferredOperationResultKHR */ (VkDevice device, VkDeferredOperationKHR operation);
typedef VkResult (* PFNVKDEFERREDOPERATIONJOINKHRPROC) /* vkDeferredOperationJoinKHR */ (VkDevice device, VkDeferredOperationKHR operation);
typedef VkResult (* PFNVKGETPIPELINEEXECUTABLEPROPERTIESKHRPROC) /* vkGetPipelineExecutablePropertiesKHR */ (VkDevice device, const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties);
typedef VkResult (* PFNVKGETPIPELINEEXECUTABLESTATISTICSKHRPROC) /* vkGetPipelineExecutableStatisticsKHR */ (VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics);
typedef VkResult (* PFNVKGETPIPELINEEXECUTABLEINTERNALREPRESENTATIONSKHRPROC) /* vkGetPipelineExecutableInternalRepresentationsKHR */ (VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
typedef void (* PFNVKGETGENERATEDCOMMANDSMEMORYREQUIREMENTSNVPROC) /* vkGetGeneratedCommandsMemoryRequirementsNV */ (VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements);
typedef void (* PFNVKCMDPREPROCESSGENERATEDCOMMANDSNVPROC) /* vkCmdPreprocessGeneratedCommandsNV */ (VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
typedef void (* PFNVKCMDEXECUTEGENERATEDCOMMANDSNVPROC) /* vkCmdExecuteGeneratedCommandsNV */ (VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
typedef void (* PFNVKCMDBINDPIPELINESHADERGROUPNVPROC) /* vkCmdBindPipelineShaderGroupNV */ (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex);
typedef VkResult (* PFNVKCREATEINDIRECTCOMMANDSLAYOUTNVPROC) /* vkCreateIndirectCommandsLayoutNV */ (VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout);
typedef void (* PFNVKDESTROYINDIRECTCOMMANDSLAYOUTNVPROC) /* vkDestroyIndirectCommandsLayoutNV */ (VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKCREATEPRIVATEDATASLOTEXTPROC) /* vkCreatePrivateDataSlotEXT */ (VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot);
typedef void (* PFNVKDESTROYPRIVATEDATASLOTEXTPROC) /* vkDestroyPrivateDataSlotEXT */ (VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKSETPRIVATEDATAEXTPROC) /* vkSetPrivateDataEXT */ (VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data);
typedef void (* PFNVKGETPRIVATEDATAEXTPROC) /* vkGetPrivateDataEXT */ (VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData);
typedef void (* PFNVKCMDSETEVENT2KHRPROC) /* vkCmdSetEvent2KHR */ (VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfoKHR* pDependencyInfo);
typedef void (* PFNVKCMDRESETEVENT2KHRPROC) /* vkCmdResetEvent2KHR */ (VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2KHR stageMask);
typedef void (* PFNVKCMDWAITEVENTS2KHRPROC) /* vkCmdWaitEvents2KHR */ (VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfoKHR* pDependencyInfos);
typedef void (* PFNVKCMDPIPELINEBARRIER2KHRPROC) /* vkCmdPipelineBarrier2KHR */ (VkCommandBuffer commandBuffer, const VkDependencyInfoKHR* pDependencyInfo);
typedef void (* PFNVKCMDWRITETIMESTAMP2KHRPROC) /* vkCmdWriteTimestamp2KHR */ (VkCommandBuffer commandBuffer, VkPipelineStageFlags2KHR stage, VkQueryPool queryPool, uint32_t query);
typedef VkResult (* PFNVKQUEUESUBMIT2KHRPROC) /* vkQueueSubmit2KHR */ (VkQueue queue, uint32_t submitCount, const VkSubmitInfo2KHR* pSubmits, VkFence fence);
typedef void (* PFNVKCMDWRITEBUFFERMARKER2AMDPROC) /* vkCmdWriteBufferMarker2AMD */ (VkCommandBuffer commandBuffer, VkPipelineStageFlags2KHR stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
typedef void (* PFNVKGETQUEUECHECKPOINTDATA2NVPROC) /* vkGetQueueCheckpointData2NV */ (VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);
typedef void (* PFNVKCMDSETFRAGMENTSHADINGRATEENUMNVPROC) /* vkCmdSetFragmentShadingRateEnumNV */ (VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
typedef void (* PFNVKCMDCOPYBUFFER2KHRPROC) /* vkCmdCopyBuffer2KHR */ (VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo);
typedef void (* PFNVKCMDCOPYIMAGE2KHRPROC) /* vkCmdCopyImage2KHR */ (VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo);
typedef void (* PFNVKCMDCOPYBUFFERTOIMAGE2KHRPROC) /* vkCmdCopyBufferToImage2KHR */ (VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo);
typedef void (* PFNVKCMDCOPYIMAGETOBUFFER2KHRPROC) /* vkCmdCopyImageToBuffer2KHR */ (VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo);
typedef void (* PFNVKCMDBLITIMAGE2KHRPROC) /* vkCmdBlitImage2KHR */ (VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo);
typedef void (* PFNVKCMDRESOLVEIMAGE2KHRPROC) /* vkCmdResolveImage2KHR */ (VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo);
typedef void (* PFNVKCMDSETVERTEXINPUTEXTPROC) /* vkCmdSetVertexInputEXT */ (VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
typedef void (* PFNVKCMDSETCOLORWRITEENABLEEXTPROC) /* vkCmdSetColorWriteEnableEXT */ (VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables);

#if defined(VK_USE_PLATFORM_XLIB_KHR)
typedef VkResult (* PFNVKCREATEXLIBSURFACEKHRPROC) /* vkCreateXlibSurfaceKHR */ (VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (* PFNVKGETPHYSICALDEVICEXLIBPRESENTATIONSUPPORTKHRPROC) /* vkGetPhysicalDeviceXlibPresentationSupportKHR */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID);
#endif

#if defined(VK_USE_PLATFORM_XCB_KHR)
typedef VkResult (* PFNVKCREATEXCBSURFACEKHRPROC) /* vkCreateXcbSurfaceKHR */ (VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (* PFNVKGETPHYSICALDEVICEXCBPRESENTATIONSUPPORTKHRPROC) /* vkGetPhysicalDeviceXcbPresentationSupportKHR */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id);
#endif

#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
typedef VkResult (* PFNVKCREATEWAYLANDSURFACEKHRPROC) /* vkCreateWaylandSurfaceKHR */ (VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (* PFNVKGETPHYSICALDEVICEWAYLANDPRESENTATIONSUPPORTKHRPROC) /* vkGetPhysicalDeviceWaylandPresentationSupportKHR */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);
#endif

#if defined(VK_USE_PLATFORM_ANDROID_KHR)
typedef VkResult (* PFNVKCREATEANDROIDSURFACEKHRPROC) /* vkCreateAndroidSurfaceKHR */ (VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkResult (* PFNVKGETANDROIDHARDWAREBUFFERPROPERTIESANDROIDPROC) /* vkGetAndroidHardwareBufferPropertiesANDROID */ (VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties);
typedef VkResult (* PFNVKGETMEMORYANDROIDHARDWAREBUFFERANDROIDPROC) /* vkGetMemoryAndroidHardwareBufferANDROID */ (VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer);
#endif

#if defined(VK_USE_PLATFORM_WIN32_KHR)
typedef VkResult (* PFNVKCREATEWIN32SURFACEKHRPROC) /* vkCreateWin32SurfaceKHR */ (VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (* PFNVKGETPHYSICALDEVICEWIN32PRESENTATIONSUPPORTKHRPROC) /* vkGetPhysicalDeviceWin32PresentationSupportKHR */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex);
typedef VkResult (* PFNVKGETMEMORYWIN32HANDLENVPROC) /* vkGetMemoryWin32HandleNV */ (VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle);
typedef VkResult (* PFNVKGETMEMORYWIN32HANDLEKHRPROC) /* vkGetMemoryWin32HandleKHR */ (VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
typedef VkResult (* PFNVKGETMEMORYWIN32HANDLEPROPERTIESKHRPROC) /* vkGetMemoryWin32HandlePropertiesKHR */ (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties);
typedef VkResult (* PFNVKIMPORTSEMAPHOREWIN32HANDLEKHRPROC) /* vkImportSemaphoreWin32HandleKHR */ (VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo);
typedef VkResult (* PFNVKGETSEMAPHOREWIN32HANDLEKHRPROC) /* vkGetSemaphoreWin32HandleKHR */ (VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
typedef VkResult (* PFNVKIMPORTFENCEWIN32HANDLEKHRPROC) /* vkImportFenceWin32HandleKHR */ (VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo);
typedef VkResult (* PFNVKGETFENCEWIN32HANDLEKHRPROC) /* vkGetFenceWin32HandleKHR */ (VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
typedef VkResult (* PFNVKGETPHYSICALDEVICESURFACEPRESENTMODES2EXTPROC) /* vkGetPhysicalDeviceSurfacePresentModes2EXT */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
typedef VkResult (* PFNVKACQUIREFULLSCREENEXCLUSIVEMODEEXTPROC) /* vkAcquireFullScreenExclusiveModeEXT */ (VkDevice device, VkSwapchainKHR swapchain);
typedef VkResult (* PFNVKRELEASEFULLSCREENEXCLUSIVEMODEEXTPROC) /* vkReleaseFullScreenExclusiveModeEXT */ (VkDevice device, VkSwapchainKHR swapchain);
typedef VkResult (* PFNVKGETDEVICEGROUPSURFACEPRESENTMODES2EXTPROC) /* vkGetDeviceGroupSurfacePresentModes2EXT */ (VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes);
typedef VkResult (* PFNVKACQUIREWINRTDISPLAYNVPROC) /* vkAcquireWinrtDisplayNV */ (VkPhysicalDevice physicalDevice, VkDisplayKHR display);
typedef VkResult (* PFNVKGETWINRTDISPLAYNVPROC) /* vkGetWinrtDisplayNV */ (VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay);
#endif

#if defined(VK_ENABLE_BETA_EXTENSIONS)
typedef VkResult (* PFNVKGETPHYSICALDEVICEVIDEOCAPABILITIESKHRPROC) /* vkGetPhysicalDeviceVideoCapabilitiesKHR */ (VkPhysicalDevice physicalDevice, const VkVideoProfileKHR* pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities);
typedef VkResult (* PFNVKGETPHYSICALDEVICEVIDEOFORMATPROPERTIESKHRPROC) /* vkGetPhysicalDeviceVideoFormatPropertiesKHR */ (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties);
typedef VkResult (* PFNVKCREATEVIDEOSESSIONKHRPROC) /* vkCreateVideoSessionKHR */ (VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession);
typedef void (* PFNVKDESTROYVIDEOSESSIONKHRPROC) /* vkDestroyVideoSessionKHR */ (VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator);
typedef VkResult (* PFNVKGETVIDEOSESSIONMEMORYREQUIREMENTSKHRPROC) /* vkGetVideoSessionMemoryRequirementsKHR */ (VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pVideoSessionMemoryRequirementsCount, VkVideoGetMemoryPropertiesKHR* pVideoSessionMemoryRequirements);
typedef VkResult (* PFNVKBINDVIDEOSESSIONMEMORYKHRPROC) /* vkBindVideoSessionMemoryKHR */ (VkDevice device, VkVideoSessionKHR videoSession, uint32_t videoSessionBindMemoryCount, const VkVideoBindMemoryKHR* pVideoSessionBindMemories);
typedef VkResult (* PFNVKCREATEVIDEOSESSIONPARAMETERSKHRPROC) /* vkCreateVideoSessionParametersKHR */ (VkDevice device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR* pVideoSessionParameters);
typedef VkResult (* PFNVKUPDATEVIDEOSESSIONPARAMETERSKHRPROC) /* vkUpdateVideoSessionParametersKHR */ (VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo);
typedef void (* PFNVKDESTROYVIDEOSESSIONPARAMETERSKHRPROC) /* vkDestroyVideoSessionParametersKHR */ (VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks* pAllocator);
typedef void (* PFNVKCMDBEGINVIDEOCODINGKHRPROC) /* vkCmdBeginVideoCodingKHR */ (VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo);
typedef void (* PFNVKCMDENDVIDEOCODINGKHRPROC) /* vkCmdEndVideoCodingKHR */ (VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo);
typedef void (* PFNVKCMDCONTROLVIDEOCODINGKHRPROC) /* vkCmdControlVideoCodingKHR */ (VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo);
typedef void (* PFNVKCMDDECODEVIDEOKHRPROC) /* vkCmdDecodeVideoKHR */ (VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pFrameInfo);
typedef void (* PFNVKCMDENCODEVIDEOKHRPROC) /* vkCmdEncodeVideoKHR */ (VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo);
#endif

#if defined(VK_USE_PLATFORM_GGP)
typedef VkResult (* PFNVKCREATESTREAMDESCRIPTORSURFACEGGPPROC) /* vkCreateStreamDescriptorSurfaceGGP */ (VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_VI_NN)
typedef VkResult (* PFNVKCREATEVISURFACENNPROC) /* vkCreateViSurfaceNN */ (VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
typedef VkResult (* PFNVKACQUIREXLIBDISPLAYEXTPROC) /* vkAcquireXlibDisplayEXT */ (VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display);
typedef VkResult (* PFNVKGETRANDROUTPUTDISPLAYEXTPROC) /* vkGetRandROutputDisplayEXT */ (VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay);
#endif

#if defined(VK_USE_PLATFORM_IOS_MVK)
typedef VkResult (* PFNVKCREATEIOSSURFACEMVKPROC) /* vkCreateIOSSurfaceMVK */ (VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_MACOS_MVK)
typedef VkResult (* PFNVKCREATEMACOSSURFACEMVKPROC) /* vkCreateMacOSSurfaceMVK */ (VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_FUCHSIA)
typedef VkResult (* PFNVKCREATEIMAGEPIPESURFACEFUCHSIAPROC) /* vkCreateImagePipeSurfaceFUCHSIA */ (VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkResult (* PFNVKGETMEMORYZIRCONHANDLEFUCHSIAPROC) /* vkGetMemoryZirconHandleFUCHSIA */ (VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle);
typedef VkResult (* PFNVKGETMEMORYZIRCONHANDLEPROPERTIESFUCHSIAPROC) /* vkGetMemoryZirconHandlePropertiesFUCHSIA */ (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties);
typedef VkResult (* PFNVKIMPORTSEMAPHOREZIRCONHANDLEFUCHSIAPROC) /* vkImportSemaphoreZirconHandleFUCHSIA */ (VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo);
typedef VkResult (* PFNVKGETSEMAPHOREZIRCONHANDLEFUCHSIAPROC) /* vkGetSemaphoreZirconHandleFUCHSIA */ (VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle);
#endif

#if defined(VK_USE_PLATFORM_METAL_EXT)
typedef VkResult (* PFNVKCREATEMETALSURFACEEXTPROC) /* vkCreateMetalSurfaceEXT */ (VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
typedef VkResult (* PFNVKCREATEDIRECTFBSURFACEEXTPROC) /* vkCreateDirectFBSurfaceEXT */ (VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (* PFNVKGETPHYSICALDEVICEDIRECTFBPRESENTATIONSUPPORTEXTPROC) /* vkGetPhysicalDeviceDirectFBPresentationSupportEXT */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb);
#endif

#if defined(VK_USE_PLATFORM_SCREEN_QNX)
typedef VkResult (* PFNVKCREATESCREENSURFACEQNXPROC) /* vkCreateScreenSurfaceQNX */ (VkInstance instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
typedef VkBool32 (* PFNVKGETPHYSICALDEVICESCREENPRESENTATIONSUPPORTQNXPROC) /* vkGetPhysicalDeviceScreenPresentationSupportQNX */ (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window);
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace glew {
  namespace vulkan {

    class Context {
    public:

      Context(std::unordered_set<std::string> &supportedExtensions, void* (*vulkanGetProcAddressFunc)(const char*)) {
        m_featureSupported[GLEW_VK_VERSION_1_1] = (supportedExtensions.find("VK_VERSION_1_1") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_VERSION_1_2] = (supportedExtensions.find("VK_VERSION_1_2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_surface] = (supportedExtensions.find("VK_KHR_surface") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_swapchain] = (supportedExtensions.find("VK_KHR_swapchain") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_display] = (supportedExtensions.find("VK_KHR_display") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_display_swapchain] = (supportedExtensions.find("VK_KHR_display_swapchain") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_debug_report] = (supportedExtensions.find("VK_EXT_debug_report") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_glsl_shader] = (supportedExtensions.find("VK_NV_glsl_shader") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_depth_range_unrestricted] = (supportedExtensions.find("VK_EXT_depth_range_unrestricted") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_sampler_mirror_clamp_to_edge] = (supportedExtensions.find("VK_KHR_sampler_mirror_clamp_to_edge") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_IMG_filter_cubic] = (supportedExtensions.find("VK_IMG_filter_cubic") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_rasterization_order] = (supportedExtensions.find("VK_AMD_rasterization_order") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_trinary_minmax] = (supportedExtensions.find("VK_AMD_shader_trinary_minmax") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_explicit_vertex_parameter] = (supportedExtensions.find("VK_AMD_shader_explicit_vertex_parameter") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_debug_marker] = (supportedExtensions.find("VK_EXT_debug_marker") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_gcn_shader] = (supportedExtensions.find("VK_AMD_gcn_shader") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_dedicated_allocation] = (supportedExtensions.find("VK_NV_dedicated_allocation") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_transform_feedback] = (supportedExtensions.find("VK_EXT_transform_feedback") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NVX_image_view_handle] = (supportedExtensions.find("VK_NVX_image_view_handle") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_draw_indirect_count] = (supportedExtensions.find("VK_AMD_draw_indirect_count") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_negative_viewport_height] = (supportedExtensions.find("VK_AMD_negative_viewport_height") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_gpu_shader_half_float] = (supportedExtensions.find("VK_AMD_gpu_shader_half_float") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_ballot] = (supportedExtensions.find("VK_AMD_shader_ballot") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_texture_gather_bias_lod] = (supportedExtensions.find("VK_AMD_texture_gather_bias_lod") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_info] = (supportedExtensions.find("VK_AMD_shader_info") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_image_load_store_lod] = (supportedExtensions.find("VK_AMD_shader_image_load_store_lod") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_corner_sampled_image] = (supportedExtensions.find("VK_NV_corner_sampled_image") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_multiview] = (supportedExtensions.find("VK_KHR_multiview") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_IMG_format_pvrtc] = (supportedExtensions.find("VK_IMG_format_pvrtc") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_external_memory_capabilities] = (supportedExtensions.find("VK_NV_external_memory_capabilities") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_external_memory] = (supportedExtensions.find("VK_NV_external_memory") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_get_physical_device_properties2] = (supportedExtensions.find("VK_KHR_get_physical_device_properties2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_device_group] = (supportedExtensions.find("VK_KHR_device_group") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_validation_flags] = (supportedExtensions.find("VK_EXT_validation_flags") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_draw_parameters] = (supportedExtensions.find("VK_KHR_shader_draw_parameters") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_subgroup_ballot] = (supportedExtensions.find("VK_EXT_shader_subgroup_ballot") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_subgroup_vote] = (supportedExtensions.find("VK_EXT_shader_subgroup_vote") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_texture_compression_astc_hdr] = (supportedExtensions.find("VK_EXT_texture_compression_astc_hdr") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_astc_decode_mode] = (supportedExtensions.find("VK_EXT_astc_decode_mode") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_maintenance1] = (supportedExtensions.find("VK_KHR_maintenance1") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_device_group_creation] = (supportedExtensions.find("VK_KHR_device_group_creation") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_memory_capabilities] = (supportedExtensions.find("VK_KHR_external_memory_capabilities") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_memory] = (supportedExtensions.find("VK_KHR_external_memory") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_memory_fd] = (supportedExtensions.find("VK_KHR_external_memory_fd") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_semaphore_capabilities] = (supportedExtensions.find("VK_KHR_external_semaphore_capabilities") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_semaphore] = (supportedExtensions.find("VK_KHR_external_semaphore") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_semaphore_fd] = (supportedExtensions.find("VK_KHR_external_semaphore_fd") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_push_descriptor] = (supportedExtensions.find("VK_KHR_push_descriptor") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_conditional_rendering] = (supportedExtensions.find("VK_EXT_conditional_rendering") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_float16_int8] = (supportedExtensions.find("VK_KHR_shader_float16_int8") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_16bit_storage] = (supportedExtensions.find("VK_KHR_16bit_storage") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_incremental_present] = (supportedExtensions.find("VK_KHR_incremental_present") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_descriptor_update_template] = (supportedExtensions.find("VK_KHR_descriptor_update_template") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_clip_space_w_scaling] = (supportedExtensions.find("VK_NV_clip_space_w_scaling") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_direct_mode_display] = (supportedExtensions.find("VK_EXT_direct_mode_display") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_display_surface_counter] = (supportedExtensions.find("VK_EXT_display_surface_counter") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_display_control] = (supportedExtensions.find("VK_EXT_display_control") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_GOOGLE_display_timing] = (supportedExtensions.find("VK_GOOGLE_display_timing") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_sample_mask_override_coverage] = (supportedExtensions.find("VK_NV_sample_mask_override_coverage") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_geometry_shader_passthrough] = (supportedExtensions.find("VK_NV_geometry_shader_passthrough") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_viewport_array2] = (supportedExtensions.find("VK_NV_viewport_array2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NVX_multiview_per_view_attributes] = (supportedExtensions.find("VK_NVX_multiview_per_view_attributes") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_viewport_swizzle] = (supportedExtensions.find("VK_NV_viewport_swizzle") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_discard_rectangles] = (supportedExtensions.find("VK_EXT_discard_rectangles") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_conservative_rasterization] = (supportedExtensions.find("VK_EXT_conservative_rasterization") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_depth_clip_enable] = (supportedExtensions.find("VK_EXT_depth_clip_enable") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_swapchain_colorspace] = (supportedExtensions.find("VK_EXT_swapchain_colorspace") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_hdr_metadata] = (supportedExtensions.find("VK_EXT_hdr_metadata") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_imageless_framebuffer] = (supportedExtensions.find("VK_KHR_imageless_framebuffer") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_create_renderpass2] = (supportedExtensions.find("VK_KHR_create_renderpass2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shared_presentable_image] = (supportedExtensions.find("VK_KHR_shared_presentable_image") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_fence_capabilities] = (supportedExtensions.find("VK_KHR_external_fence_capabilities") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_fence] = (supportedExtensions.find("VK_KHR_external_fence") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_fence_fd] = (supportedExtensions.find("VK_KHR_external_fence_fd") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_performance_query] = (supportedExtensions.find("VK_KHR_performance_query") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_maintenance2] = (supportedExtensions.find("VK_KHR_maintenance2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_get_surface_capabilities2] = (supportedExtensions.find("VK_KHR_get_surface_capabilities2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_variable_pointers] = (supportedExtensions.find("VK_KHR_variable_pointers") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_get_display_properties2] = (supportedExtensions.find("VK_KHR_get_display_properties2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_external_memory_dma_buf] = (supportedExtensions.find("VK_EXT_external_memory_dma_buf") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_queue_family_foreign] = (supportedExtensions.find("VK_EXT_queue_family_foreign") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_dedicated_allocation] = (supportedExtensions.find("VK_KHR_dedicated_allocation") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_debug_utils] = (supportedExtensions.find("VK_EXT_debug_utils") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_sampler_filter_minmax] = (supportedExtensions.find("VK_EXT_sampler_filter_minmax") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_storage_buffer_storage_class] = (supportedExtensions.find("VK_KHR_storage_buffer_storage_class") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_gpu_shader_int16] = (supportedExtensions.find("VK_AMD_gpu_shader_int16") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_mixed_attachment_samples] = (supportedExtensions.find("VK_AMD_mixed_attachment_samples") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_fragment_mask] = (supportedExtensions.find("VK_AMD_shader_fragment_mask") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_inline_uniform_block] = (supportedExtensions.find("VK_EXT_inline_uniform_block") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_stencil_export] = (supportedExtensions.find("VK_EXT_shader_stencil_export") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_sample_locations] = (supportedExtensions.find("VK_EXT_sample_locations") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_relaxed_block_layout] = (supportedExtensions.find("VK_KHR_relaxed_block_layout") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_get_memory_requirements2] = (supportedExtensions.find("VK_KHR_get_memory_requirements2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_image_format_list] = (supportedExtensions.find("VK_KHR_image_format_list") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_blend_operation_advanced] = (supportedExtensions.find("VK_EXT_blend_operation_advanced") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_fragment_coverage_to_color] = (supportedExtensions.find("VK_NV_fragment_coverage_to_color") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_acceleration_structure] = (supportedExtensions.find("VK_KHR_acceleration_structure") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_ray_tracing_pipeline] = (supportedExtensions.find("VK_KHR_ray_tracing_pipeline") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_ray_query] = (supportedExtensions.find("VK_KHR_ray_query") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_framebuffer_mixed_samples] = (supportedExtensions.find("VK_NV_framebuffer_mixed_samples") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_fill_rectangle] = (supportedExtensions.find("VK_NV_fill_rectangle") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_shader_sm_builtins] = (supportedExtensions.find("VK_NV_shader_sm_builtins") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_post_depth_coverage] = (supportedExtensions.find("VK_EXT_post_depth_coverage") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_sampler_ycbcr_conversion] = (supportedExtensions.find("VK_KHR_sampler_ycbcr_conversion") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_bind_memory2] = (supportedExtensions.find("VK_KHR_bind_memory2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_image_drm_format_modifier] = (supportedExtensions.find("VK_EXT_image_drm_format_modifier") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_validation_cache] = (supportedExtensions.find("VK_EXT_validation_cache") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_descriptor_indexing] = (supportedExtensions.find("VK_EXT_descriptor_indexing") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_viewport_index_layer] = (supportedExtensions.find("VK_EXT_shader_viewport_index_layer") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_shading_rate_image] = (supportedExtensions.find("VK_NV_shading_rate_image") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_ray_tracing] = (supportedExtensions.find("VK_NV_ray_tracing") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_representative_fragment_test] = (supportedExtensions.find("VK_NV_representative_fragment_test") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_maintenance3] = (supportedExtensions.find("VK_KHR_maintenance3") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_draw_indirect_count] = (supportedExtensions.find("VK_KHR_draw_indirect_count") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_filter_cubic] = (supportedExtensions.find("VK_EXT_filter_cubic") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_QCOM_render_pass_shader_resolve] = (supportedExtensions.find("VK_QCOM_render_pass_shader_resolve") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_global_priority] = (supportedExtensions.find("VK_EXT_global_priority") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_subgroup_extended_types] = (supportedExtensions.find("VK_KHR_shader_subgroup_extended_types") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_8bit_storage] = (supportedExtensions.find("VK_KHR_8bit_storage") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_external_memory_host] = (supportedExtensions.find("VK_EXT_external_memory_host") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_buffer_marker] = (supportedExtensions.find("VK_AMD_buffer_marker") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_atomic_int64] = (supportedExtensions.find("VK_KHR_shader_atomic_int64") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_clock] = (supportedExtensions.find("VK_KHR_shader_clock") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_pipeline_compiler_control] = (supportedExtensions.find("VK_AMD_pipeline_compiler_control") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_calibrated_timestamps] = (supportedExtensions.find("VK_EXT_calibrated_timestamps") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_core_properties] = (supportedExtensions.find("VK_AMD_shader_core_properties") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_memory_overallocation_behavior] = (supportedExtensions.find("VK_AMD_memory_overallocation_behavior") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_vertex_attribute_divisor] = (supportedExtensions.find("VK_EXT_vertex_attribute_divisor") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_pipeline_creation_feedback] = (supportedExtensions.find("VK_EXT_pipeline_creation_feedback") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_driver_properties] = (supportedExtensions.find("VK_KHR_driver_properties") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_float_controls] = (supportedExtensions.find("VK_KHR_shader_float_controls") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_shader_subgroup_partitioned] = (supportedExtensions.find("VK_NV_shader_subgroup_partitioned") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_depth_stencil_resolve] = (supportedExtensions.find("VK_KHR_depth_stencil_resolve") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_swapchain_mutable_format] = (supportedExtensions.find("VK_KHR_swapchain_mutable_format") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_compute_shader_derivatives] = (supportedExtensions.find("VK_NV_compute_shader_derivatives") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_mesh_shader] = (supportedExtensions.find("VK_NV_mesh_shader") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_fragment_shader_barycentric] = (supportedExtensions.find("VK_NV_fragment_shader_barycentric") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_shader_image_footprint] = (supportedExtensions.find("VK_NV_shader_image_footprint") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_scissor_exclusive] = (supportedExtensions.find("VK_NV_scissor_exclusive") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_device_diagnostic_checkpoints] = (supportedExtensions.find("VK_NV_device_diagnostic_checkpoints") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_timeline_semaphore] = (supportedExtensions.find("VK_KHR_timeline_semaphore") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_INTEL_shader_integer_functions2] = (supportedExtensions.find("VK_INTEL_shader_integer_functions2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_INTEL_performance_query] = (supportedExtensions.find("VK_INTEL_performance_query") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_vulkan_memory_model] = (supportedExtensions.find("VK_KHR_vulkan_memory_model") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_pci_bus_info] = (supportedExtensions.find("VK_EXT_pci_bus_info") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_display_native_hdr] = (supportedExtensions.find("VK_AMD_display_native_hdr") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_terminate_invocation] = (supportedExtensions.find("VK_KHR_shader_terminate_invocation") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_fragment_density_map] = (supportedExtensions.find("VK_EXT_fragment_density_map") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_scalar_block_layout] = (supportedExtensions.find("VK_EXT_scalar_block_layout") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_GOOGLE_hlsl_functionality1] = (supportedExtensions.find("VK_GOOGLE_hlsl_functionality1") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_GOOGLE_decorate_string] = (supportedExtensions.find("VK_GOOGLE_decorate_string") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_subgroup_size_control] = (supportedExtensions.find("VK_EXT_subgroup_size_control") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_fragment_shading_rate] = (supportedExtensions.find("VK_KHR_fragment_shading_rate") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_shader_core_properties2] = (supportedExtensions.find("VK_AMD_shader_core_properties2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_AMD_device_coherent_memory] = (supportedExtensions.find("VK_AMD_device_coherent_memory") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_image_atomic_int64] = (supportedExtensions.find("VK_EXT_shader_image_atomic_int64") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_spirv_1_4] = (supportedExtensions.find("VK_KHR_spirv_1_4") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_memory_budget] = (supportedExtensions.find("VK_EXT_memory_budget") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_memory_priority] = (supportedExtensions.find("VK_EXT_memory_priority") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_surface_protected_capabilities] = (supportedExtensions.find("VK_KHR_surface_protected_capabilities") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_dedicated_allocation_image_aliasing] = (supportedExtensions.find("VK_NV_dedicated_allocation_image_aliasing") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_separate_depth_stencil_layouts] = (supportedExtensions.find("VK_KHR_separate_depth_stencil_layouts") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_buffer_device_address] = (supportedExtensions.find("VK_EXT_buffer_device_address") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_tooling_info] = (supportedExtensions.find("VK_EXT_tooling_info") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_separate_stencil_usage] = (supportedExtensions.find("VK_EXT_separate_stencil_usage") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_validation_features] = (supportedExtensions.find("VK_EXT_validation_features") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_cooperative_matrix] = (supportedExtensions.find("VK_NV_cooperative_matrix") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_coverage_reduction_mode] = (supportedExtensions.find("VK_NV_coverage_reduction_mode") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_fragment_shader_interlock] = (supportedExtensions.find("VK_EXT_fragment_shader_interlock") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_ycbcr_image_arrays] = (supportedExtensions.find("VK_EXT_ycbcr_image_arrays") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_uniform_buffer_standard_layout] = (supportedExtensions.find("VK_KHR_uniform_buffer_standard_layout") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_headless_surface] = (supportedExtensions.find("VK_EXT_headless_surface") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_buffer_device_address] = (supportedExtensions.find("VK_KHR_buffer_device_address") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_line_rasterization] = (supportedExtensions.find("VK_EXT_line_rasterization") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_atomic_float] = (supportedExtensions.find("VK_EXT_shader_atomic_float") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_host_query_reset] = (supportedExtensions.find("VK_EXT_host_query_reset") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_index_type_uint8] = (supportedExtensions.find("VK_EXT_index_type_uint8") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_extended_dynamic_state] = (supportedExtensions.find("VK_EXT_extended_dynamic_state") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_deferred_host_operations] = (supportedExtensions.find("VK_KHR_deferred_host_operations") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_pipeline_executable_properties] = (supportedExtensions.find("VK_KHR_pipeline_executable_properties") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_shader_demote_to_helper_invocation] = (supportedExtensions.find("VK_EXT_shader_demote_to_helper_invocation") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_device_generated_commands] = (supportedExtensions.find("VK_NV_device_generated_commands") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_inherited_viewport_scissor] = (supportedExtensions.find("VK_NV_inherited_viewport_scissor") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_texel_buffer_alignment] = (supportedExtensions.find("VK_EXT_texel_buffer_alignment") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_QCOM_render_pass_transform] = (supportedExtensions.find("VK_QCOM_render_pass_transform") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_device_memory_report] = (supportedExtensions.find("VK_EXT_device_memory_report") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_robustness2] = (supportedExtensions.find("VK_EXT_robustness2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_custom_border_color] = (supportedExtensions.find("VK_EXT_custom_border_color") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_GOOGLE_user_type] = (supportedExtensions.find("VK_GOOGLE_user_type") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_pipeline_library] = (supportedExtensions.find("VK_KHR_pipeline_library") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_shader_non_semantic_info] = (supportedExtensions.find("VK_KHR_shader_non_semantic_info") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_private_data] = (supportedExtensions.find("VK_EXT_private_data") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_pipeline_creation_cache_control] = (supportedExtensions.find("VK_EXT_pipeline_creation_cache_control") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_device_diagnostics_config] = (supportedExtensions.find("VK_NV_device_diagnostics_config") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_QCOM_render_pass_store_ops] = (supportedExtensions.find("VK_QCOM_render_pass_store_ops") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_synchronization2] = (supportedExtensions.find("VK_KHR_synchronization2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_zero_initialize_workgroup_memory] = (supportedExtensions.find("VK_KHR_zero_initialize_workgroup_memory") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_fragment_shading_rate_enums] = (supportedExtensions.find("VK_NV_fragment_shading_rate_enums") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_ycbcr_2plane_444_formats] = (supportedExtensions.find("VK_EXT_ycbcr_2plane_444_formats") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_fragment_density_map2] = (supportedExtensions.find("VK_EXT_fragment_density_map2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_QCOM_rotated_copy_commands] = (supportedExtensions.find("VK_QCOM_rotated_copy_commands") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_image_robustness] = (supportedExtensions.find("VK_EXT_image_robustness") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_workgroup_memory_explicit_layout] = (supportedExtensions.find("VK_KHR_workgroup_memory_explicit_layout") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_copy_commands2] = (supportedExtensions.find("VK_KHR_copy_commands2") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_4444_formats] = (supportedExtensions.find("VK_EXT_4444_formats") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_VALVE_mutable_descriptor_type] = (supportedExtensions.find("VK_VALVE_mutable_descriptor_type") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_vertex_input_dynamic_state] = (supportedExtensions.find("VK_EXT_vertex_input_dynamic_state") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_color_write_enable] = (supportedExtensions.find("VK_EXT_color_write_enable") != supportedExtensions.end());

    #if defined(VK_USE_PLATFORM_XLIB_KHR)
        m_featureSupported[GLEW_VK_KHR_xlib_surface] = (supportedExtensions.find("VK_KHR_xlib_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_XCB_KHR)
        m_featureSupported[GLEW_VK_KHR_xcb_surface] = (supportedExtensions.find("VK_KHR_xcb_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_WAYLAND_KHR)
        m_featureSupported[GLEW_VK_KHR_wayland_surface] = (supportedExtensions.find("VK_KHR_wayland_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_ANDROID_KHR)
        m_featureSupported[GLEW_VK_KHR_android_surface] = (supportedExtensions.find("VK_KHR_android_surface") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_ANDROID_external_memory_android_hardware_buffer] = (supportedExtensions.find("VK_ANDROID_external_memory_android_hardware_buffer") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_WIN32_KHR)
        m_featureSupported[GLEW_VK_KHR_win32_surface] = (supportedExtensions.find("VK_KHR_win32_surface") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_external_memory_win32] = (supportedExtensions.find("VK_NV_external_memory_win32") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_win32_keyed_mutex] = (supportedExtensions.find("VK_NV_win32_keyed_mutex") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_memory_win32] = (supportedExtensions.find("VK_KHR_external_memory_win32") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_win32_keyed_mutex] = (supportedExtensions.find("VK_KHR_win32_keyed_mutex") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_semaphore_win32] = (supportedExtensions.find("VK_KHR_external_semaphore_win32") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_external_fence_win32] = (supportedExtensions.find("VK_KHR_external_fence_win32") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_full_screen_exclusive] = (supportedExtensions.find("VK_EXT_full_screen_exclusive") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_NV_acquire_winrt_display] = (supportedExtensions.find("VK_NV_acquire_winrt_display") != supportedExtensions.end());
    #endif

    #if defined(VK_ENABLE_BETA_EXTENSIONS)
        m_featureSupported[GLEW_VK_KHR_video_queue] = (supportedExtensions.find("VK_KHR_video_queue") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_video_decode_queue] = (supportedExtensions.find("VK_KHR_video_decode_queue") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_video_encode_queue] = (supportedExtensions.find("VK_KHR_video_encode_queue") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_video_encode_h264] = (supportedExtensions.find("VK_EXT_video_encode_h264") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_video_decode_h264] = (supportedExtensions.find("VK_EXT_video_decode_h264") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_KHR_portability_subset] = (supportedExtensions.find("VK_KHR_portability_subset") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_EXT_video_decode_h265] = (supportedExtensions.find("VK_EXT_video_decode_h265") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_GGP)
        m_featureSupported[GLEW_VK_GGP_stream_descriptor_surface] = (supportedExtensions.find("VK_GGP_stream_descriptor_surface") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_GGP_frame_token] = (supportedExtensions.find("VK_GGP_frame_token") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_VI_NN)
        m_featureSupported[GLEW_VK_NN_vi_surface] = (supportedExtensions.find("VK_NN_vi_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
        m_featureSupported[GLEW_VK_EXT_acquire_xlib_display] = (supportedExtensions.find("VK_EXT_acquire_xlib_display") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_IOS_MVK)
        m_featureSupported[GLEW_VK_MVK_ios_surface] = (supportedExtensions.find("VK_MVK_ios_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_MACOS_MVK)
        m_featureSupported[GLEW_VK_MVK_macos_surface] = (supportedExtensions.find("VK_MVK_macos_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_FUCHSIA)
        m_featureSupported[GLEW_VK_FUCHSIA_imagepipe_surface] = (supportedExtensions.find("VK_FUCHSIA_imagepipe_surface") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_FUCHSIA_external_memory] = (supportedExtensions.find("VK_FUCHSIA_external_memory") != supportedExtensions.end());
        m_featureSupported[GLEW_VK_FUCHSIA_external_semaphore] = (supportedExtensions.find("VK_FUCHSIA_external_semaphore") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_METAL_EXT)
        m_featureSupported[GLEW_VK_EXT_metal_surface] = (supportedExtensions.find("VK_EXT_metal_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
        m_featureSupported[GLEW_VK_EXT_directfb_surface] = (supportedExtensions.find("VK_EXT_directfb_surface") != supportedExtensions.end());
    #endif

    #if defined(VK_USE_PLATFORM_SCREEN_QNX)
        m_featureSupported[GLEW_VK_QNX_screen_surface] = (supportedExtensions.find("VK_QNX_screen_surface") != supportedExtensions.end());
    #endif


        // VK_VERSION_1_1
        if (m_featureSupported[GLEW_VK_VERSION_1_1]) {
          m_vkEnumerateInstanceVersion = (PFNVKENUMERATEINSTANCEVERSIONPROC) vulkanGetProcAddressFunc("vkEnumerateInstanceVersion");
          m_vkBindBufferMemory2 = (PFNVKBINDBUFFERMEMORY2PROC) vulkanGetProcAddressFunc("vkBindBufferMemory2");
          m_vkBindImageMemory2 = (PFNVKBINDIMAGEMEMORY2PROC) vulkanGetProcAddressFunc("vkBindImageMemory2");
          m_vkGetDeviceGroupPeerMemoryFeatures = (PFNVKGETDEVICEGROUPPEERMEMORYFEATURESPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupPeerMemoryFeatures");
          m_vkCmdSetDeviceMask = (PFNVKCMDSETDEVICEMASKPROC) vulkanGetProcAddressFunc("vkCmdSetDeviceMask");
          m_vkCmdDispatchBase = (PFNVKCMDDISPATCHBASEPROC) vulkanGetProcAddressFunc("vkCmdDispatchBase");
          m_vkEnumeratePhysicalDeviceGroups = (PFNVKENUMERATEPHYSICALDEVICEGROUPSPROC) vulkanGetProcAddressFunc("vkEnumeratePhysicalDeviceGroups");
          m_vkGetImageMemoryRequirements2 = (PFNVKGETIMAGEMEMORYREQUIREMENTS2PROC) vulkanGetProcAddressFunc("vkGetImageMemoryRequirements2");
          m_vkGetBufferMemoryRequirements2 = (PFNVKGETBUFFERMEMORYREQUIREMENTS2PROC) vulkanGetProcAddressFunc("vkGetBufferMemoryRequirements2");
          m_vkGetImageSparseMemoryRequirements2 = (PFNVKGETIMAGESPARSEMEMORYREQUIREMENTS2PROC) vulkanGetProcAddressFunc("vkGetImageSparseMemoryRequirements2");
          m_vkGetPhysicalDeviceFeatures2 = (PFNVKGETPHYSICALDEVICEFEATURES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceFeatures2");
          m_vkGetPhysicalDeviceProperties2 = (PFNVKGETPHYSICALDEVICEPROPERTIES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceProperties2");
          m_vkGetPhysicalDeviceFormatProperties2 = (PFNVKGETPHYSICALDEVICEFORMATPROPERTIES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceFormatProperties2");
          m_vkGetPhysicalDeviceImageFormatProperties2 = (PFNVKGETPHYSICALDEVICEIMAGEFORMATPROPERTIES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceImageFormatProperties2");
          m_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFNVKGETPHYSICALDEVICEQUEUEFAMILYPROPERTIES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceQueueFamilyProperties2");
          m_vkGetPhysicalDeviceMemoryProperties2 = (PFNVKGETPHYSICALDEVICEMEMORYPROPERTIES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceMemoryProperties2");
          m_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFNVKGETPHYSICALDEVICESPARSEIMAGEFORMATPROPERTIES2PROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSparseImageFormatProperties2");
          m_vkTrimCommandPool = (PFNVKTRIMCOMMANDPOOLPROC) vulkanGetProcAddressFunc("vkTrimCommandPool");
          m_vkGetDeviceQueue2 = (PFNVKGETDEVICEQUEUE2PROC) vulkanGetProcAddressFunc("vkGetDeviceQueue2");
          m_vkCreateSamplerYcbcrConversion = (PFNVKCREATESAMPLERYCBCRCONVERSIONPROC) vulkanGetProcAddressFunc("vkCreateSamplerYcbcrConversion");
          m_vkDestroySamplerYcbcrConversion = (PFNVKDESTROYSAMPLERYCBCRCONVERSIONPROC) vulkanGetProcAddressFunc("vkDestroySamplerYcbcrConversion");
          m_vkCreateDescriptorUpdateTemplate = (PFNVKCREATEDESCRIPTORUPDATETEMPLATEPROC) vulkanGetProcAddressFunc("vkCreateDescriptorUpdateTemplate");
          m_vkDestroyDescriptorUpdateTemplate = (PFNVKDESTROYDESCRIPTORUPDATETEMPLATEPROC) vulkanGetProcAddressFunc("vkDestroyDescriptorUpdateTemplate");
          m_vkUpdateDescriptorSetWithTemplate = (PFNVKUPDATEDESCRIPTORSETWITHTEMPLATEPROC) vulkanGetProcAddressFunc("vkUpdateDescriptorSetWithTemplate");
          m_vkGetPhysicalDeviceExternalBufferProperties = (PFNVKGETPHYSICALDEVICEEXTERNALBUFFERPROPERTIESPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalBufferProperties");
          m_vkGetPhysicalDeviceExternalFenceProperties = (PFNVKGETPHYSICALDEVICEEXTERNALFENCEPROPERTIESPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalFenceProperties");
          m_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFNVKGETPHYSICALDEVICEEXTERNALSEMAPHOREPROPERTIESPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalSemaphoreProperties");
          m_vkGetDescriptorSetLayoutSupport = (PFNVKGETDESCRIPTORSETLAYOUTSUPPORTPROC) vulkanGetProcAddressFunc("vkGetDescriptorSetLayoutSupport");
        }

        // VK_VERSION_1_2
        if (m_featureSupported[GLEW_VK_VERSION_1_2]) {
          m_vkCmdDrawIndirectCount = (PFNVKCMDDRAWINDIRECTCOUNTPROC) vulkanGetProcAddressFunc("vkCmdDrawIndirectCount");
          m_vkCmdDrawIndexedIndirectCount = (PFNVKCMDDRAWINDEXEDINDIRECTCOUNTPROC) vulkanGetProcAddressFunc("vkCmdDrawIndexedIndirectCount");
          m_vkCreateRenderPass2 = (PFNVKCREATERENDERPASS2PROC) vulkanGetProcAddressFunc("vkCreateRenderPass2");
          m_vkCmdBeginRenderPass2 = (PFNVKCMDBEGINRENDERPASS2PROC) vulkanGetProcAddressFunc("vkCmdBeginRenderPass2");
          m_vkCmdNextSubpass2 = (PFNVKCMDNEXTSUBPASS2PROC) vulkanGetProcAddressFunc("vkCmdNextSubpass2");
          m_vkCmdEndRenderPass2 = (PFNVKCMDENDRENDERPASS2PROC) vulkanGetProcAddressFunc("vkCmdEndRenderPass2");
          m_vkResetQueryPool = (PFNVKRESETQUERYPOOLPROC) vulkanGetProcAddressFunc("vkResetQueryPool");
          m_vkGetSemaphoreCounterValue = (PFNVKGETSEMAPHORECOUNTERVALUEPROC) vulkanGetProcAddressFunc("vkGetSemaphoreCounterValue");
          m_vkWaitSemaphores = (PFNVKWAITSEMAPHORESPROC) vulkanGetProcAddressFunc("vkWaitSemaphores");
          m_vkSignalSemaphore = (PFNVKSIGNALSEMAPHOREPROC) vulkanGetProcAddressFunc("vkSignalSemaphore");
          m_vkGetBufferDeviceAddress = (PFNVKGETBUFFERDEVICEADDRESSPROC) vulkanGetProcAddressFunc("vkGetBufferDeviceAddress");
          m_vkGetBufferOpaqueCaptureAddress = (PFNVKGETBUFFEROPAQUECAPTUREADDRESSPROC) vulkanGetProcAddressFunc("vkGetBufferOpaqueCaptureAddress");
          m_vkGetDeviceMemoryOpaqueCaptureAddress = (PFNVKGETDEVICEMEMORYOPAQUECAPTUREADDRESSPROC) vulkanGetProcAddressFunc("vkGetDeviceMemoryOpaqueCaptureAddress");
        }

        // VK_KHR_surface
        if (m_featureSupported[GLEW_VK_KHR_surface]) {
          m_vkDestroySurfaceKHR = (PFNVKDESTROYSURFACEKHRPROC) vulkanGetProcAddressFunc("vkDestroySurfaceKHR");
          m_vkGetPhysicalDeviceSurfaceSupportKHR = (PFNVKGETPHYSICALDEVICESURFACESUPPORTKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfaceSupportKHR");
          m_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFNVKGETPHYSICALDEVICESURFACECAPABILITIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
          m_vkGetPhysicalDeviceSurfaceFormatsKHR = (PFNVKGETPHYSICALDEVICESURFACEFORMATSKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfaceFormatsKHR");
          m_vkGetPhysicalDeviceSurfacePresentModesKHR = (PFNVKGETPHYSICALDEVICESURFACEPRESENTMODESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfacePresentModesKHR");
        }

        // VK_KHR_swapchain
        if (m_featureSupported[GLEW_VK_KHR_swapchain]) {
          m_vkCreateSwapchainKHR = (PFNVKCREATESWAPCHAINKHRPROC) vulkanGetProcAddressFunc("vkCreateSwapchainKHR");
          m_vkDestroySwapchainKHR = (PFNVKDESTROYSWAPCHAINKHRPROC) vulkanGetProcAddressFunc("vkDestroySwapchainKHR");
          m_vkGetSwapchainImagesKHR = (PFNVKGETSWAPCHAINIMAGESKHRPROC) vulkanGetProcAddressFunc("vkGetSwapchainImagesKHR");
          m_vkAcquireNextImageKHR = (PFNVKACQUIRENEXTIMAGEKHRPROC) vulkanGetProcAddressFunc("vkAcquireNextImageKHR");
          m_vkQueuePresentKHR = (PFNVKQUEUEPRESENTKHRPROC) vulkanGetProcAddressFunc("vkQueuePresentKHR");
          m_vkGetDeviceGroupPresentCapabilitiesKHR = (PFNVKGETDEVICEGROUPPRESENTCAPABILITIESKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupPresentCapabilitiesKHR");
          m_vkGetDeviceGroupSurfacePresentModesKHR = (PFNVKGETDEVICEGROUPSURFACEPRESENTMODESKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupSurfacePresentModesKHR");
          m_vkGetPhysicalDevicePresentRectanglesKHR = (PFNVKGETPHYSICALDEVICEPRESENTRECTANGLESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDevicePresentRectanglesKHR");
          m_vkAcquireNextImage2KHR = (PFNVKACQUIRENEXTIMAGE2KHRPROC) vulkanGetProcAddressFunc("vkAcquireNextImage2KHR");
        }

        // VK_KHR_display
        if (m_featureSupported[GLEW_VK_KHR_display]) {
          m_vkGetPhysicalDeviceDisplayPropertiesKHR = (PFNVKGETPHYSICALDEVICEDISPLAYPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceDisplayPropertiesKHR");
          m_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFNVKGETPHYSICALDEVICEDISPLAYPLANEPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
          m_vkGetDisplayPlaneSupportedDisplaysKHR = (PFNVKGETDISPLAYPLANESUPPORTEDDISPLAYSKHRPROC) vulkanGetProcAddressFunc("vkGetDisplayPlaneSupportedDisplaysKHR");
          m_vkGetDisplayModePropertiesKHR = (PFNVKGETDISPLAYMODEPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetDisplayModePropertiesKHR");
          m_vkCreateDisplayModeKHR = (PFNVKCREATEDISPLAYMODEKHRPROC) vulkanGetProcAddressFunc("vkCreateDisplayModeKHR");
          m_vkGetDisplayPlaneCapabilitiesKHR = (PFNVKGETDISPLAYPLANECAPABILITIESKHRPROC) vulkanGetProcAddressFunc("vkGetDisplayPlaneCapabilitiesKHR");
          m_vkCreateDisplayPlaneSurfaceKHR = (PFNVKCREATEDISPLAYPLANESURFACEKHRPROC) vulkanGetProcAddressFunc("vkCreateDisplayPlaneSurfaceKHR");
        }

        // VK_KHR_display_swapchain
        if (m_featureSupported[GLEW_VK_KHR_display_swapchain]) {
          m_vkCreateSharedSwapchainsKHR = (PFNVKCREATESHAREDSWAPCHAINSKHRPROC) vulkanGetProcAddressFunc("vkCreateSharedSwapchainsKHR");
        }

        // VK_EXT_debug_report
        if (m_featureSupported[GLEW_VK_EXT_debug_report]) {
          m_vkCreateDebugReportCallbackEXT = (PFNVKCREATEDEBUGREPORTCALLBACKEXTPROC) vulkanGetProcAddressFunc("vkCreateDebugReportCallbackEXT");
          m_vkDestroyDebugReportCallbackEXT = (PFNVKDESTROYDEBUGREPORTCALLBACKEXTPROC) vulkanGetProcAddressFunc("vkDestroyDebugReportCallbackEXT");
          m_vkDebugReportMessageEXT = (PFNVKDEBUGREPORTMESSAGEEXTPROC) vulkanGetProcAddressFunc("vkDebugReportMessageEXT");
        }

        // VK_EXT_debug_marker
        if (m_featureSupported[GLEW_VK_EXT_debug_marker]) {
          m_vkDebugMarkerSetObjectTagEXT = (PFNVKDEBUGMARKERSETOBJECTTAGEXTPROC) vulkanGetProcAddressFunc("vkDebugMarkerSetObjectTagEXT");
          m_vkDebugMarkerSetObjectNameEXT = (PFNVKDEBUGMARKERSETOBJECTNAMEEXTPROC) vulkanGetProcAddressFunc("vkDebugMarkerSetObjectNameEXT");
          m_vkCmdDebugMarkerBeginEXT = (PFNVKCMDDEBUGMARKERBEGINEXTPROC) vulkanGetProcAddressFunc("vkCmdDebugMarkerBeginEXT");
          m_vkCmdDebugMarkerEndEXT = (PFNVKCMDDEBUGMARKERENDEXTPROC) vulkanGetProcAddressFunc("vkCmdDebugMarkerEndEXT");
          m_vkCmdDebugMarkerInsertEXT = (PFNVKCMDDEBUGMARKERINSERTEXTPROC) vulkanGetProcAddressFunc("vkCmdDebugMarkerInsertEXT");
        }

        // VK_EXT_transform_feedback
        if (m_featureSupported[GLEW_VK_EXT_transform_feedback]) {
          m_vkCmdBindTransformFeedbackBuffersEXT = (PFNVKCMDBINDTRANSFORMFEEDBACKBUFFERSEXTPROC) vulkanGetProcAddressFunc("vkCmdBindTransformFeedbackBuffersEXT");
          m_vkCmdBeginTransformFeedbackEXT = (PFNVKCMDBEGINTRANSFORMFEEDBACKEXTPROC) vulkanGetProcAddressFunc("vkCmdBeginTransformFeedbackEXT");
          m_vkCmdEndTransformFeedbackEXT = (PFNVKCMDENDTRANSFORMFEEDBACKEXTPROC) vulkanGetProcAddressFunc("vkCmdEndTransformFeedbackEXT");
          m_vkCmdBeginQueryIndexedEXT = (PFNVKCMDBEGINQUERYINDEXEDEXTPROC) vulkanGetProcAddressFunc("vkCmdBeginQueryIndexedEXT");
          m_vkCmdEndQueryIndexedEXT = (PFNVKCMDENDQUERYINDEXEDEXTPROC) vulkanGetProcAddressFunc("vkCmdEndQueryIndexedEXT");
          m_vkCmdDrawIndirectByteCountEXT = (PFNVKCMDDRAWINDIRECTBYTECOUNTEXTPROC) vulkanGetProcAddressFunc("vkCmdDrawIndirectByteCountEXT");
        }

        // VK_NVX_image_view_handle
        if (m_featureSupported[GLEW_VK_NVX_image_view_handle]) {
          m_vkGetImageViewHandleNVX = (PFNVKGETIMAGEVIEWHANDLENVXPROC) vulkanGetProcAddressFunc("vkGetImageViewHandleNVX");
          m_vkGetImageViewAddressNVX = (PFNVKGETIMAGEVIEWADDRESSNVXPROC) vulkanGetProcAddressFunc("vkGetImageViewAddressNVX");
        }

        // VK_AMD_draw_indirect_count
        if (m_featureSupported[GLEW_VK_AMD_draw_indirect_count]) {
          m_vkCmdDrawIndirectCountAMD = (PFNVKCMDDRAWINDIRECTCOUNTAMDPROC) vulkanGetProcAddressFunc("vkCmdDrawIndirectCountAMD");
          m_vkCmdDrawIndexedIndirectCountAMD = (PFNVKCMDDRAWINDEXEDINDIRECTCOUNTAMDPROC) vulkanGetProcAddressFunc("vkCmdDrawIndexedIndirectCountAMD");
        }

        // VK_AMD_shader_info
        if (m_featureSupported[GLEW_VK_AMD_shader_info]) {
          m_vkGetShaderInfoAMD = (PFNVKGETSHADERINFOAMDPROC) vulkanGetProcAddressFunc("vkGetShaderInfoAMD");
        }

        // VK_NV_external_memory_capabilities
        if (m_featureSupported[GLEW_VK_NV_external_memory_capabilities]) {
          m_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFNVKGETPHYSICALDEVICEEXTERNALIMAGEFORMATPROPERTIESNVPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
        }

        // VK_KHR_get_physical_device_properties2
        if (m_featureSupported[GLEW_VK_KHR_get_physical_device_properties2]) {
          m_vkGetPhysicalDeviceFeatures2KHR = (PFNVKGETPHYSICALDEVICEFEATURES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceFeatures2KHR");
          m_vkGetPhysicalDeviceProperties2KHR = (PFNVKGETPHYSICALDEVICEPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceProperties2KHR");
          m_vkGetPhysicalDeviceFormatProperties2KHR = (PFNVKGETPHYSICALDEVICEFORMATPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceFormatProperties2KHR");
          m_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFNVKGETPHYSICALDEVICEIMAGEFORMATPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceImageFormatProperties2KHR");
          m_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFNVKGETPHYSICALDEVICEQUEUEFAMILYPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceQueueFamilyProperties2KHR");
          m_vkGetPhysicalDeviceMemoryProperties2KHR = (PFNVKGETPHYSICALDEVICEMEMORYPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceMemoryProperties2KHR");
          m_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFNVKGETPHYSICALDEVICESPARSEIMAGEFORMATPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
        }

        // VK_KHR_device_group
        if (m_featureSupported[GLEW_VK_KHR_device_group]) {
          m_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFNVKGETDEVICEGROUPPEERMEMORYFEATURESKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupPeerMemoryFeaturesKHR");
          m_vkCmdSetDeviceMaskKHR = (PFNVKCMDSETDEVICEMASKKHRPROC) vulkanGetProcAddressFunc("vkCmdSetDeviceMaskKHR");
          m_vkCmdDispatchBaseKHR = (PFNVKCMDDISPATCHBASEKHRPROC) vulkanGetProcAddressFunc("vkCmdDispatchBaseKHR");
          m_vkGetDeviceGroupPresentCapabilitiesKHR = (PFNVKGETDEVICEGROUPPRESENTCAPABILITIESKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupPresentCapabilitiesKHR");
          m_vkGetDeviceGroupSurfacePresentModesKHR = (PFNVKGETDEVICEGROUPSURFACEPRESENTMODESKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupSurfacePresentModesKHR");
          m_vkGetPhysicalDevicePresentRectanglesKHR = (PFNVKGETPHYSICALDEVICEPRESENTRECTANGLESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDevicePresentRectanglesKHR");
          m_vkAcquireNextImage2KHR = (PFNVKACQUIRENEXTIMAGE2KHRPROC) vulkanGetProcAddressFunc("vkAcquireNextImage2KHR");
        }

        // VK_KHR_maintenance1
        if (m_featureSupported[GLEW_VK_KHR_maintenance1]) {
          m_vkTrimCommandPoolKHR = (PFNVKTRIMCOMMANDPOOLKHRPROC) vulkanGetProcAddressFunc("vkTrimCommandPoolKHR");
        }

        // VK_KHR_device_group_creation
        if (m_featureSupported[GLEW_VK_KHR_device_group_creation]) {
          m_vkEnumeratePhysicalDeviceGroupsKHR = (PFNVKENUMERATEPHYSICALDEVICEGROUPSKHRPROC) vulkanGetProcAddressFunc("vkEnumeratePhysicalDeviceGroupsKHR");
        }

        // VK_KHR_external_memory_capabilities
        if (m_featureSupported[GLEW_VK_KHR_external_memory_capabilities]) {
          m_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFNVKGETPHYSICALDEVICEEXTERNALBUFFERPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalBufferPropertiesKHR");
        }

        // VK_KHR_external_memory_fd
        if (m_featureSupported[GLEW_VK_KHR_external_memory_fd]) {
          m_vkGetMemoryFdKHR = (PFNVKGETMEMORYFDKHRPROC) vulkanGetProcAddressFunc("vkGetMemoryFdKHR");
          m_vkGetMemoryFdPropertiesKHR = (PFNVKGETMEMORYFDPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetMemoryFdPropertiesKHR");
        }

        // VK_KHR_external_semaphore_capabilities
        if (m_featureSupported[GLEW_VK_KHR_external_semaphore_capabilities]) {
          m_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFNVKGETPHYSICALDEVICEEXTERNALSEMAPHOREPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
        }

        // VK_KHR_external_semaphore_fd
        if (m_featureSupported[GLEW_VK_KHR_external_semaphore_fd]) {
          m_vkImportSemaphoreFdKHR = (PFNVKIMPORTSEMAPHOREFDKHRPROC) vulkanGetProcAddressFunc("vkImportSemaphoreFdKHR");
          m_vkGetSemaphoreFdKHR = (PFNVKGETSEMAPHOREFDKHRPROC) vulkanGetProcAddressFunc("vkGetSemaphoreFdKHR");
        }

        // VK_KHR_push_descriptor
        if (m_featureSupported[GLEW_VK_KHR_push_descriptor]) {
          m_vkCmdPushDescriptorSetKHR = (PFNVKCMDPUSHDESCRIPTORSETKHRPROC) vulkanGetProcAddressFunc("vkCmdPushDescriptorSetKHR");
          m_vkCmdPushDescriptorSetWithTemplateKHR = (PFNVKCMDPUSHDESCRIPTORSETWITHTEMPLATEKHRPROC) vulkanGetProcAddressFunc("vkCmdPushDescriptorSetWithTemplateKHR");
        }

        // VK_EXT_conditional_rendering
        if (m_featureSupported[GLEW_VK_EXT_conditional_rendering]) {
          m_vkCmdBeginConditionalRenderingEXT = (PFNVKCMDBEGINCONDITIONALRENDERINGEXTPROC) vulkanGetProcAddressFunc("vkCmdBeginConditionalRenderingEXT");
          m_vkCmdEndConditionalRenderingEXT = (PFNVKCMDENDCONDITIONALRENDERINGEXTPROC) vulkanGetProcAddressFunc("vkCmdEndConditionalRenderingEXT");
        }

        // VK_KHR_descriptor_update_template
        if (m_featureSupported[GLEW_VK_KHR_descriptor_update_template]) {
          m_vkCreateDescriptorUpdateTemplateKHR = (PFNVKCREATEDESCRIPTORUPDATETEMPLATEKHRPROC) vulkanGetProcAddressFunc("vkCreateDescriptorUpdateTemplateKHR");
          m_vkDestroyDescriptorUpdateTemplateKHR = (PFNVKDESTROYDESCRIPTORUPDATETEMPLATEKHRPROC) vulkanGetProcAddressFunc("vkDestroyDescriptorUpdateTemplateKHR");
          m_vkUpdateDescriptorSetWithTemplateKHR = (PFNVKUPDATEDESCRIPTORSETWITHTEMPLATEKHRPROC) vulkanGetProcAddressFunc("vkUpdateDescriptorSetWithTemplateKHR");
          m_vkCmdPushDescriptorSetWithTemplateKHR = (PFNVKCMDPUSHDESCRIPTORSETWITHTEMPLATEKHRPROC) vulkanGetProcAddressFunc("vkCmdPushDescriptorSetWithTemplateKHR");
        }

        // VK_NV_clip_space_w_scaling
        if (m_featureSupported[GLEW_VK_NV_clip_space_w_scaling]) {
          m_vkCmdSetViewportWScalingNV = (PFNVKCMDSETVIEWPORTWSCALINGNVPROC) vulkanGetProcAddressFunc("vkCmdSetViewportWScalingNV");
        }

        // VK_EXT_direct_mode_display
        if (m_featureSupported[GLEW_VK_EXT_direct_mode_display]) {
          m_vkReleaseDisplayEXT = (PFNVKRELEASEDISPLAYEXTPROC) vulkanGetProcAddressFunc("vkReleaseDisplayEXT");
        }

        // VK_EXT_display_surface_counter
        if (m_featureSupported[GLEW_VK_EXT_display_surface_counter]) {
          m_vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFNVKGETPHYSICALDEVICESURFACECAPABILITIES2EXTPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfaceCapabilities2EXT");
        }

        // VK_EXT_display_control
        if (m_featureSupported[GLEW_VK_EXT_display_control]) {
          m_vkDisplayPowerControlEXT = (PFNVKDISPLAYPOWERCONTROLEXTPROC) vulkanGetProcAddressFunc("vkDisplayPowerControlEXT");
          m_vkRegisterDeviceEventEXT = (PFNVKREGISTERDEVICEEVENTEXTPROC) vulkanGetProcAddressFunc("vkRegisterDeviceEventEXT");
          m_vkRegisterDisplayEventEXT = (PFNVKREGISTERDISPLAYEVENTEXTPROC) vulkanGetProcAddressFunc("vkRegisterDisplayEventEXT");
          m_vkGetSwapchainCounterEXT = (PFNVKGETSWAPCHAINCOUNTEREXTPROC) vulkanGetProcAddressFunc("vkGetSwapchainCounterEXT");
        }

        // VK_GOOGLE_display_timing
        if (m_featureSupported[GLEW_VK_GOOGLE_display_timing]) {
          m_vkGetRefreshCycleDurationGOOGLE = (PFNVKGETREFRESHCYCLEDURATIONGOOGLEPROC) vulkanGetProcAddressFunc("vkGetRefreshCycleDurationGOOGLE");
          m_vkGetPastPresentationTimingGOOGLE = (PFNVKGETPASTPRESENTATIONTIMINGGOOGLEPROC) vulkanGetProcAddressFunc("vkGetPastPresentationTimingGOOGLE");
        }

        // VK_EXT_discard_rectangles
        if (m_featureSupported[GLEW_VK_EXT_discard_rectangles]) {
          m_vkCmdSetDiscardRectangleEXT = (PFNVKCMDSETDISCARDRECTANGLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetDiscardRectangleEXT");
        }

        // VK_EXT_hdr_metadata
        if (m_featureSupported[GLEW_VK_EXT_hdr_metadata]) {
          m_vkSetHdrMetadataEXT = (PFNVKSETHDRMETADATAEXTPROC) vulkanGetProcAddressFunc("vkSetHdrMetadataEXT");
        }

        // VK_KHR_create_renderpass2
        if (m_featureSupported[GLEW_VK_KHR_create_renderpass2]) {
          m_vkCreateRenderPass2KHR = (PFNVKCREATERENDERPASS2KHRPROC) vulkanGetProcAddressFunc("vkCreateRenderPass2KHR");
          m_vkCmdBeginRenderPass2KHR = (PFNVKCMDBEGINRENDERPASS2KHRPROC) vulkanGetProcAddressFunc("vkCmdBeginRenderPass2KHR");
          m_vkCmdNextSubpass2KHR = (PFNVKCMDNEXTSUBPASS2KHRPROC) vulkanGetProcAddressFunc("vkCmdNextSubpass2KHR");
          m_vkCmdEndRenderPass2KHR = (PFNVKCMDENDRENDERPASS2KHRPROC) vulkanGetProcAddressFunc("vkCmdEndRenderPass2KHR");
        }

        // VK_KHR_shared_presentable_image
        if (m_featureSupported[GLEW_VK_KHR_shared_presentable_image]) {
          m_vkGetSwapchainStatusKHR = (PFNVKGETSWAPCHAINSTATUSKHRPROC) vulkanGetProcAddressFunc("vkGetSwapchainStatusKHR");
        }

        // VK_KHR_external_fence_capabilities
        if (m_featureSupported[GLEW_VK_KHR_external_fence_capabilities]) {
          m_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFNVKGETPHYSICALDEVICEEXTERNALFENCEPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceExternalFencePropertiesKHR");
        }

        // VK_KHR_external_fence_fd
        if (m_featureSupported[GLEW_VK_KHR_external_fence_fd]) {
          m_vkImportFenceFdKHR = (PFNVKIMPORTFENCEFDKHRPROC) vulkanGetProcAddressFunc("vkImportFenceFdKHR");
          m_vkGetFenceFdKHR = (PFNVKGETFENCEFDKHRPROC) vulkanGetProcAddressFunc("vkGetFenceFdKHR");
        }

        // VK_KHR_performance_query
        if (m_featureSupported[GLEW_VK_KHR_performance_query]) {
          m_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFNVKENUMERATEPHYSICALDEVICEQUEUEFAMILYPERFORMANCEQUERYCOUNTERSKHRPROC) vulkanGetProcAddressFunc("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
          m_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFNVKGETPHYSICALDEVICEQUEUEFAMILYPERFORMANCEQUERYPASSESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
          m_vkAcquireProfilingLockKHR = (PFNVKACQUIREPROFILINGLOCKKHRPROC) vulkanGetProcAddressFunc("vkAcquireProfilingLockKHR");
          m_vkReleaseProfilingLockKHR = (PFNVKRELEASEPROFILINGLOCKKHRPROC) vulkanGetProcAddressFunc("vkReleaseProfilingLockKHR");
        }

        // VK_KHR_get_surface_capabilities2
        if (m_featureSupported[GLEW_VK_KHR_get_surface_capabilities2]) {
          m_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFNVKGETPHYSICALDEVICESURFACECAPABILITIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfaceCapabilities2KHR");
          m_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFNVKGETPHYSICALDEVICESURFACEFORMATS2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfaceFormats2KHR");
        }

        // VK_KHR_get_display_properties2
        if (m_featureSupported[GLEW_VK_KHR_get_display_properties2]) {
          m_vkGetPhysicalDeviceDisplayProperties2KHR = (PFNVKGETPHYSICALDEVICEDISPLAYPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceDisplayProperties2KHR");
          m_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFNVKGETPHYSICALDEVICEDISPLAYPLANEPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
          m_vkGetDisplayModeProperties2KHR = (PFNVKGETDISPLAYMODEPROPERTIES2KHRPROC) vulkanGetProcAddressFunc("vkGetDisplayModeProperties2KHR");
          m_vkGetDisplayPlaneCapabilities2KHR = (PFNVKGETDISPLAYPLANECAPABILITIES2KHRPROC) vulkanGetProcAddressFunc("vkGetDisplayPlaneCapabilities2KHR");
        }

        // VK_EXT_debug_utils
        if (m_featureSupported[GLEW_VK_EXT_debug_utils]) {
          m_vkSetDebugUtilsObjectNameEXT = (PFNVKSETDEBUGUTILSOBJECTNAMEEXTPROC) vulkanGetProcAddressFunc("vkSetDebugUtilsObjectNameEXT");
          m_vkSetDebugUtilsObjectTagEXT = (PFNVKSETDEBUGUTILSOBJECTTAGEXTPROC) vulkanGetProcAddressFunc("vkSetDebugUtilsObjectTagEXT");
          m_vkQueueBeginDebugUtilsLabelEXT = (PFNVKQUEUEBEGINDEBUGUTILSLABELEXTPROC) vulkanGetProcAddressFunc("vkQueueBeginDebugUtilsLabelEXT");
          m_vkQueueEndDebugUtilsLabelEXT = (PFNVKQUEUEENDDEBUGUTILSLABELEXTPROC) vulkanGetProcAddressFunc("vkQueueEndDebugUtilsLabelEXT");
          m_vkQueueInsertDebugUtilsLabelEXT = (PFNVKQUEUEINSERTDEBUGUTILSLABELEXTPROC) vulkanGetProcAddressFunc("vkQueueInsertDebugUtilsLabelEXT");
          m_vkCmdBeginDebugUtilsLabelEXT = (PFNVKCMDBEGINDEBUGUTILSLABELEXTPROC) vulkanGetProcAddressFunc("vkCmdBeginDebugUtilsLabelEXT");
          m_vkCmdEndDebugUtilsLabelEXT = (PFNVKCMDENDDEBUGUTILSLABELEXTPROC) vulkanGetProcAddressFunc("vkCmdEndDebugUtilsLabelEXT");
          m_vkCmdInsertDebugUtilsLabelEXT = (PFNVKCMDINSERTDEBUGUTILSLABELEXTPROC) vulkanGetProcAddressFunc("vkCmdInsertDebugUtilsLabelEXT");
          m_vkCreateDebugUtilsMessengerEXT = (PFNVKCREATEDEBUGUTILSMESSENGEREXTPROC) vulkanGetProcAddressFunc("vkCreateDebugUtilsMessengerEXT");
          m_vkDestroyDebugUtilsMessengerEXT = (PFNVKDESTROYDEBUGUTILSMESSENGEREXTPROC) vulkanGetProcAddressFunc("vkDestroyDebugUtilsMessengerEXT");
          m_vkSubmitDebugUtilsMessageEXT = (PFNVKSUBMITDEBUGUTILSMESSAGEEXTPROC) vulkanGetProcAddressFunc("vkSubmitDebugUtilsMessageEXT");
        }

        // VK_EXT_sample_locations
        if (m_featureSupported[GLEW_VK_EXT_sample_locations]) {
          m_vkCmdSetSampleLocationsEXT = (PFNVKCMDSETSAMPLELOCATIONSEXTPROC) vulkanGetProcAddressFunc("vkCmdSetSampleLocationsEXT");
          m_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFNVKGETPHYSICALDEVICEMULTISAMPLEPROPERTIESEXTPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceMultisamplePropertiesEXT");
        }

        // VK_KHR_get_memory_requirements2
        if (m_featureSupported[GLEW_VK_KHR_get_memory_requirements2]) {
          m_vkGetImageMemoryRequirements2KHR = (PFNVKGETIMAGEMEMORYREQUIREMENTS2KHRPROC) vulkanGetProcAddressFunc("vkGetImageMemoryRequirements2KHR");
          m_vkGetBufferMemoryRequirements2KHR = (PFNVKGETBUFFERMEMORYREQUIREMENTS2KHRPROC) vulkanGetProcAddressFunc("vkGetBufferMemoryRequirements2KHR");
          m_vkGetImageSparseMemoryRequirements2KHR = (PFNVKGETIMAGESPARSEMEMORYREQUIREMENTS2KHRPROC) vulkanGetProcAddressFunc("vkGetImageSparseMemoryRequirements2KHR");
        }

        // VK_KHR_acceleration_structure
        if (m_featureSupported[GLEW_VK_KHR_acceleration_structure]) {
          m_vkCreateAccelerationStructureKHR = (PFNVKCREATEACCELERATIONSTRUCTUREKHRPROC) vulkanGetProcAddressFunc("vkCreateAccelerationStructureKHR");
          m_vkDestroyAccelerationStructureKHR = (PFNVKDESTROYACCELERATIONSTRUCTUREKHRPROC) vulkanGetProcAddressFunc("vkDestroyAccelerationStructureKHR");
          m_vkCmdBuildAccelerationStructuresKHR = (PFNVKCMDBUILDACCELERATIONSTRUCTURESKHRPROC) vulkanGetProcAddressFunc("vkCmdBuildAccelerationStructuresKHR");
          m_vkCmdBuildAccelerationStructuresIndirectKHR = (PFNVKCMDBUILDACCELERATIONSTRUCTURESINDIRECTKHRPROC) vulkanGetProcAddressFunc("vkCmdBuildAccelerationStructuresIndirectKHR");
          m_vkBuildAccelerationStructuresKHR = (PFNVKBUILDACCELERATIONSTRUCTURESKHRPROC) vulkanGetProcAddressFunc("vkBuildAccelerationStructuresKHR");
          m_vkCopyAccelerationStructureKHR = (PFNVKCOPYACCELERATIONSTRUCTUREKHRPROC) vulkanGetProcAddressFunc("vkCopyAccelerationStructureKHR");
          m_vkCopyAccelerationStructureToMemoryKHR = (PFNVKCOPYACCELERATIONSTRUCTURETOMEMORYKHRPROC) vulkanGetProcAddressFunc("vkCopyAccelerationStructureToMemoryKHR");
          m_vkCopyMemoryToAccelerationStructureKHR = (PFNVKCOPYMEMORYTOACCELERATIONSTRUCTUREKHRPROC) vulkanGetProcAddressFunc("vkCopyMemoryToAccelerationStructureKHR");
          m_vkWriteAccelerationStructuresPropertiesKHR = (PFNVKWRITEACCELERATIONSTRUCTURESPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkWriteAccelerationStructuresPropertiesKHR");
          m_vkCmdCopyAccelerationStructureKHR = (PFNVKCMDCOPYACCELERATIONSTRUCTUREKHRPROC) vulkanGetProcAddressFunc("vkCmdCopyAccelerationStructureKHR");
          m_vkCmdCopyAccelerationStructureToMemoryKHR = (PFNVKCMDCOPYACCELERATIONSTRUCTURETOMEMORYKHRPROC) vulkanGetProcAddressFunc("vkCmdCopyAccelerationStructureToMemoryKHR");
          m_vkCmdCopyMemoryToAccelerationStructureKHR = (PFNVKCMDCOPYMEMORYTOACCELERATIONSTRUCTUREKHRPROC) vulkanGetProcAddressFunc("vkCmdCopyMemoryToAccelerationStructureKHR");
          m_vkGetAccelerationStructureDeviceAddressKHR = (PFNVKGETACCELERATIONSTRUCTUREDEVICEADDRESSKHRPROC) vulkanGetProcAddressFunc("vkGetAccelerationStructureDeviceAddressKHR");
          m_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFNVKCMDWRITEACCELERATIONSTRUCTURESPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkCmdWriteAccelerationStructuresPropertiesKHR");
          m_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFNVKGETDEVICEACCELERATIONSTRUCTURECOMPATIBILITYKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceAccelerationStructureCompatibilityKHR");
          m_vkGetAccelerationStructureBuildSizesKHR = (PFNVKGETACCELERATIONSTRUCTUREBUILDSIZESKHRPROC) vulkanGetProcAddressFunc("vkGetAccelerationStructureBuildSizesKHR");
        }

        // VK_KHR_ray_tracing_pipeline
        if (m_featureSupported[GLEW_VK_KHR_ray_tracing_pipeline]) {
          m_vkCmdTraceRaysKHR = (PFNVKCMDTRACERAYSKHRPROC) vulkanGetProcAddressFunc("vkCmdTraceRaysKHR");
          m_vkCreateRayTracingPipelinesKHR = (PFNVKCREATERAYTRACINGPIPELINESKHRPROC) vulkanGetProcAddressFunc("vkCreateRayTracingPipelinesKHR");
          m_vkGetRayTracingShaderGroupHandlesKHR = (PFNVKGETRAYTRACINGSHADERGROUPHANDLESKHRPROC) vulkanGetProcAddressFunc("vkGetRayTracingShaderGroupHandlesKHR");
          m_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFNVKGETRAYTRACINGCAPTUREREPLAYSHADERGROUPHANDLESKHRPROC) vulkanGetProcAddressFunc("vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
          m_vkCmdTraceRaysIndirectKHR = (PFNVKCMDTRACERAYSINDIRECTKHRPROC) vulkanGetProcAddressFunc("vkCmdTraceRaysIndirectKHR");
          m_vkGetRayTracingShaderGroupStackSizeKHR = (PFNVKGETRAYTRACINGSHADERGROUPSTACKSIZEKHRPROC) vulkanGetProcAddressFunc("vkGetRayTracingShaderGroupStackSizeKHR");
          m_vkCmdSetRayTracingPipelineStackSizeKHR = (PFNVKCMDSETRAYTRACINGPIPELINESTACKSIZEKHRPROC) vulkanGetProcAddressFunc("vkCmdSetRayTracingPipelineStackSizeKHR");
        }

        // VK_KHR_sampler_ycbcr_conversion
        if (m_featureSupported[GLEW_VK_KHR_sampler_ycbcr_conversion]) {
          m_vkCreateSamplerYcbcrConversionKHR = (PFNVKCREATESAMPLERYCBCRCONVERSIONKHRPROC) vulkanGetProcAddressFunc("vkCreateSamplerYcbcrConversionKHR");
          m_vkDestroySamplerYcbcrConversionKHR = (PFNVKDESTROYSAMPLERYCBCRCONVERSIONKHRPROC) vulkanGetProcAddressFunc("vkDestroySamplerYcbcrConversionKHR");
        }

        // VK_KHR_bind_memory2
        if (m_featureSupported[GLEW_VK_KHR_bind_memory2]) {
          m_vkBindBufferMemory2KHR = (PFNVKBINDBUFFERMEMORY2KHRPROC) vulkanGetProcAddressFunc("vkBindBufferMemory2KHR");
          m_vkBindImageMemory2KHR = (PFNVKBINDIMAGEMEMORY2KHRPROC) vulkanGetProcAddressFunc("vkBindImageMemory2KHR");
        }

        // VK_EXT_image_drm_format_modifier
        if (m_featureSupported[GLEW_VK_EXT_image_drm_format_modifier]) {
          m_vkGetImageDrmFormatModifierPropertiesEXT = (PFNVKGETIMAGEDRMFORMATMODIFIERPROPERTIESEXTPROC) vulkanGetProcAddressFunc("vkGetImageDrmFormatModifierPropertiesEXT");
        }

        // VK_EXT_validation_cache
        if (m_featureSupported[GLEW_VK_EXT_validation_cache]) {
          m_vkCreateValidationCacheEXT = (PFNVKCREATEVALIDATIONCACHEEXTPROC) vulkanGetProcAddressFunc("vkCreateValidationCacheEXT");
          m_vkDestroyValidationCacheEXT = (PFNVKDESTROYVALIDATIONCACHEEXTPROC) vulkanGetProcAddressFunc("vkDestroyValidationCacheEXT");
          m_vkMergeValidationCachesEXT = (PFNVKMERGEVALIDATIONCACHESEXTPROC) vulkanGetProcAddressFunc("vkMergeValidationCachesEXT");
          m_vkGetValidationCacheDataEXT = (PFNVKGETVALIDATIONCACHEDATAEXTPROC) vulkanGetProcAddressFunc("vkGetValidationCacheDataEXT");
        }

        // VK_NV_shading_rate_image
        if (m_featureSupported[GLEW_VK_NV_shading_rate_image]) {
          m_vkCmdBindShadingRateImageNV = (PFNVKCMDBINDSHADINGRATEIMAGENVPROC) vulkanGetProcAddressFunc("vkCmdBindShadingRateImageNV");
          m_vkCmdSetViewportShadingRatePaletteNV = (PFNVKCMDSETVIEWPORTSHADINGRATEPALETTENVPROC) vulkanGetProcAddressFunc("vkCmdSetViewportShadingRatePaletteNV");
          m_vkCmdSetCoarseSampleOrderNV = (PFNVKCMDSETCOARSESAMPLEORDERNVPROC) vulkanGetProcAddressFunc("vkCmdSetCoarseSampleOrderNV");
        }

        // VK_NV_ray_tracing
        if (m_featureSupported[GLEW_VK_NV_ray_tracing]) {
          m_vkCreateAccelerationStructureNV = (PFNVKCREATEACCELERATIONSTRUCTURENVPROC) vulkanGetProcAddressFunc("vkCreateAccelerationStructureNV");
          m_vkDestroyAccelerationStructureNV = (PFNVKDESTROYACCELERATIONSTRUCTURENVPROC) vulkanGetProcAddressFunc("vkDestroyAccelerationStructureNV");
          m_vkGetAccelerationStructureMemoryRequirementsNV = (PFNVKGETACCELERATIONSTRUCTUREMEMORYREQUIREMENTSNVPROC) vulkanGetProcAddressFunc("vkGetAccelerationStructureMemoryRequirementsNV");
          m_vkBindAccelerationStructureMemoryNV = (PFNVKBINDACCELERATIONSTRUCTUREMEMORYNVPROC) vulkanGetProcAddressFunc("vkBindAccelerationStructureMemoryNV");
          m_vkCmdBuildAccelerationStructureNV = (PFNVKCMDBUILDACCELERATIONSTRUCTURENVPROC) vulkanGetProcAddressFunc("vkCmdBuildAccelerationStructureNV");
          m_vkCmdCopyAccelerationStructureNV = (PFNVKCMDCOPYACCELERATIONSTRUCTURENVPROC) vulkanGetProcAddressFunc("vkCmdCopyAccelerationStructureNV");
          m_vkCmdTraceRaysNV = (PFNVKCMDTRACERAYSNVPROC) vulkanGetProcAddressFunc("vkCmdTraceRaysNV");
          m_vkCreateRayTracingPipelinesNV = (PFNVKCREATERAYTRACINGPIPELINESNVPROC) vulkanGetProcAddressFunc("vkCreateRayTracingPipelinesNV");
          m_vkGetRayTracingShaderGroupHandlesNV = (PFNVKGETRAYTRACINGSHADERGROUPHANDLESNVPROC) vulkanGetProcAddressFunc("vkGetRayTracingShaderGroupHandlesNV");
          m_vkGetAccelerationStructureHandleNV = (PFNVKGETACCELERATIONSTRUCTUREHANDLENVPROC) vulkanGetProcAddressFunc("vkGetAccelerationStructureHandleNV");
          m_vkCmdWriteAccelerationStructuresPropertiesNV = (PFNVKCMDWRITEACCELERATIONSTRUCTURESPROPERTIESNVPROC) vulkanGetProcAddressFunc("vkCmdWriteAccelerationStructuresPropertiesNV");
          m_vkCompileDeferredNV = (PFNVKCOMPILEDEFERREDNVPROC) vulkanGetProcAddressFunc("vkCompileDeferredNV");
        }

        // VK_KHR_maintenance3
        if (m_featureSupported[GLEW_VK_KHR_maintenance3]) {
          m_vkGetDescriptorSetLayoutSupportKHR = (PFNVKGETDESCRIPTORSETLAYOUTSUPPORTKHRPROC) vulkanGetProcAddressFunc("vkGetDescriptorSetLayoutSupportKHR");
        }

        // VK_KHR_draw_indirect_count
        if (m_featureSupported[GLEW_VK_KHR_draw_indirect_count]) {
          m_vkCmdDrawIndirectCountKHR = (PFNVKCMDDRAWINDIRECTCOUNTKHRPROC) vulkanGetProcAddressFunc("vkCmdDrawIndirectCountKHR");
          m_vkCmdDrawIndexedIndirectCountKHR = (PFNVKCMDDRAWINDEXEDINDIRECTCOUNTKHRPROC) vulkanGetProcAddressFunc("vkCmdDrawIndexedIndirectCountKHR");
        }

        // VK_EXT_external_memory_host
        if (m_featureSupported[GLEW_VK_EXT_external_memory_host]) {
          m_vkGetMemoryHostPointerPropertiesEXT = (PFNVKGETMEMORYHOSTPOINTERPROPERTIESEXTPROC) vulkanGetProcAddressFunc("vkGetMemoryHostPointerPropertiesEXT");
        }

        // VK_AMD_buffer_marker
        if (m_featureSupported[GLEW_VK_AMD_buffer_marker]) {
          m_vkCmdWriteBufferMarkerAMD = (PFNVKCMDWRITEBUFFERMARKERAMDPROC) vulkanGetProcAddressFunc("vkCmdWriteBufferMarkerAMD");
        }

        // VK_EXT_calibrated_timestamps
        if (m_featureSupported[GLEW_VK_EXT_calibrated_timestamps]) {
          m_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFNVKGETPHYSICALDEVICECALIBRATEABLETIMEDOMAINSEXTPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
          m_vkGetCalibratedTimestampsEXT = (PFNVKGETCALIBRATEDTIMESTAMPSEXTPROC) vulkanGetProcAddressFunc("vkGetCalibratedTimestampsEXT");
        }

        // VK_NV_mesh_shader
        if (m_featureSupported[GLEW_VK_NV_mesh_shader]) {
          m_vkCmdDrawMeshTasksNV = (PFNVKCMDDRAWMESHTASKSNVPROC) vulkanGetProcAddressFunc("vkCmdDrawMeshTasksNV");
          m_vkCmdDrawMeshTasksIndirectNV = (PFNVKCMDDRAWMESHTASKSINDIRECTNVPROC) vulkanGetProcAddressFunc("vkCmdDrawMeshTasksIndirectNV");
          m_vkCmdDrawMeshTasksIndirectCountNV = (PFNVKCMDDRAWMESHTASKSINDIRECTCOUNTNVPROC) vulkanGetProcAddressFunc("vkCmdDrawMeshTasksIndirectCountNV");
        }

        // VK_NV_scissor_exclusive
        if (m_featureSupported[GLEW_VK_NV_scissor_exclusive]) {
          m_vkCmdSetExclusiveScissorNV = (PFNVKCMDSETEXCLUSIVESCISSORNVPROC) vulkanGetProcAddressFunc("vkCmdSetExclusiveScissorNV");
        }

        // VK_NV_device_diagnostic_checkpoints
        if (m_featureSupported[GLEW_VK_NV_device_diagnostic_checkpoints]) {
          m_vkCmdSetCheckpointNV = (PFNVKCMDSETCHECKPOINTNVPROC) vulkanGetProcAddressFunc("vkCmdSetCheckpointNV");
          m_vkGetQueueCheckpointDataNV = (PFNVKGETQUEUECHECKPOINTDATANVPROC) vulkanGetProcAddressFunc("vkGetQueueCheckpointDataNV");
        }

        // VK_KHR_timeline_semaphore
        if (m_featureSupported[GLEW_VK_KHR_timeline_semaphore]) {
          m_vkGetSemaphoreCounterValueKHR = (PFNVKGETSEMAPHORECOUNTERVALUEKHRPROC) vulkanGetProcAddressFunc("vkGetSemaphoreCounterValueKHR");
          m_vkWaitSemaphoresKHR = (PFNVKWAITSEMAPHORESKHRPROC) vulkanGetProcAddressFunc("vkWaitSemaphoresKHR");
          m_vkSignalSemaphoreKHR = (PFNVKSIGNALSEMAPHOREKHRPROC) vulkanGetProcAddressFunc("vkSignalSemaphoreKHR");
        }

        // VK_INTEL_performance_query
        if (m_featureSupported[GLEW_VK_INTEL_performance_query]) {
          m_vkInitializePerformanceApiINTEL = (PFNVKINITIALIZEPERFORMANCEAPIINTELPROC) vulkanGetProcAddressFunc("vkInitializePerformanceApiINTEL");
          m_vkUninitializePerformanceApiINTEL = (PFNVKUNINITIALIZEPERFORMANCEAPIINTELPROC) vulkanGetProcAddressFunc("vkUninitializePerformanceApiINTEL");
          m_vkCmdSetPerformanceMarkerINTEL = (PFNVKCMDSETPERFORMANCEMARKERINTELPROC) vulkanGetProcAddressFunc("vkCmdSetPerformanceMarkerINTEL");
          m_vkCmdSetPerformanceStreamMarkerINTEL = (PFNVKCMDSETPERFORMANCESTREAMMARKERINTELPROC) vulkanGetProcAddressFunc("vkCmdSetPerformanceStreamMarkerINTEL");
          m_vkCmdSetPerformanceOverrideINTEL = (PFNVKCMDSETPERFORMANCEOVERRIDEINTELPROC) vulkanGetProcAddressFunc("vkCmdSetPerformanceOverrideINTEL");
          m_vkAcquirePerformanceConfigurationINTEL = (PFNVKACQUIREPERFORMANCECONFIGURATIONINTELPROC) vulkanGetProcAddressFunc("vkAcquirePerformanceConfigurationINTEL");
          m_vkReleasePerformanceConfigurationINTEL = (PFNVKRELEASEPERFORMANCECONFIGURATIONINTELPROC) vulkanGetProcAddressFunc("vkReleasePerformanceConfigurationINTEL");
          m_vkQueueSetPerformanceConfigurationINTEL = (PFNVKQUEUESETPERFORMANCECONFIGURATIONINTELPROC) vulkanGetProcAddressFunc("vkQueueSetPerformanceConfigurationINTEL");
          m_vkGetPerformanceParameterINTEL = (PFNVKGETPERFORMANCEPARAMETERINTELPROC) vulkanGetProcAddressFunc("vkGetPerformanceParameterINTEL");
        }

        // VK_AMD_display_native_hdr
        if (m_featureSupported[GLEW_VK_AMD_display_native_hdr]) {
          m_vkSetLocalDimmingAMD = (PFNVKSETLOCALDIMMINGAMDPROC) vulkanGetProcAddressFunc("vkSetLocalDimmingAMD");
        }

        // VK_KHR_fragment_shading_rate
        if (m_featureSupported[GLEW_VK_KHR_fragment_shading_rate]) {
          m_vkGetPhysicalDeviceFragmentShadingRatesKHR = (PFNVKGETPHYSICALDEVICEFRAGMENTSHADINGRATESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceFragmentShadingRatesKHR");
          m_vkCmdSetFragmentShadingRateKHR = (PFNVKCMDSETFRAGMENTSHADINGRATEKHRPROC) vulkanGetProcAddressFunc("vkCmdSetFragmentShadingRateKHR");
        }

        // VK_EXT_buffer_device_address
        if (m_featureSupported[GLEW_VK_EXT_buffer_device_address]) {
          m_vkGetBufferDeviceAddressEXT = (PFNVKGETBUFFERDEVICEADDRESSEXTPROC) vulkanGetProcAddressFunc("vkGetBufferDeviceAddressEXT");
        }

        // VK_EXT_tooling_info
        if (m_featureSupported[GLEW_VK_EXT_tooling_info]) {
          m_vkGetPhysicalDeviceToolPropertiesEXT = (PFNVKGETPHYSICALDEVICETOOLPROPERTIESEXTPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceToolPropertiesEXT");
        }

        // VK_NV_cooperative_matrix
        if (m_featureSupported[GLEW_VK_NV_cooperative_matrix]) {
          m_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFNVKGETPHYSICALDEVICECOOPERATIVEMATRIXPROPERTIESNVPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
        }

        // VK_NV_coverage_reduction_mode
        if (m_featureSupported[GLEW_VK_NV_coverage_reduction_mode]) {
          m_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFNVKGETPHYSICALDEVICESUPPORTEDFRAMEBUFFERMIXEDSAMPLESCOMBINATIONSNVPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
        }

        // VK_EXT_headless_surface
        if (m_featureSupported[GLEW_VK_EXT_headless_surface]) {
          m_vkCreateHeadlessSurfaceEXT = (PFNVKCREATEHEADLESSSURFACEEXTPROC) vulkanGetProcAddressFunc("vkCreateHeadlessSurfaceEXT");
        }

        // VK_KHR_buffer_device_address
        if (m_featureSupported[GLEW_VK_KHR_buffer_device_address]) {
          m_vkGetBufferDeviceAddressKHR = (PFNVKGETBUFFERDEVICEADDRESSKHRPROC) vulkanGetProcAddressFunc("vkGetBufferDeviceAddressKHR");
          m_vkGetBufferOpaqueCaptureAddressKHR = (PFNVKGETBUFFEROPAQUECAPTUREADDRESSKHRPROC) vulkanGetProcAddressFunc("vkGetBufferOpaqueCaptureAddressKHR");
          m_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFNVKGETDEVICEMEMORYOPAQUECAPTUREADDRESSKHRPROC) vulkanGetProcAddressFunc("vkGetDeviceMemoryOpaqueCaptureAddressKHR");
        }

        // VK_EXT_line_rasterization
        if (m_featureSupported[GLEW_VK_EXT_line_rasterization]) {
          m_vkCmdSetLineStippleEXT = (PFNVKCMDSETLINESTIPPLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetLineStippleEXT");
        }

        // VK_EXT_host_query_reset
        if (m_featureSupported[GLEW_VK_EXT_host_query_reset]) {
          m_vkResetQueryPoolEXT = (PFNVKRESETQUERYPOOLEXTPROC) vulkanGetProcAddressFunc("vkResetQueryPoolEXT");
        }

        // VK_EXT_extended_dynamic_state
        if (m_featureSupported[GLEW_VK_EXT_extended_dynamic_state]) {
          m_vkCmdSetCullModeEXT = (PFNVKCMDSETCULLMODEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetCullModeEXT");
          m_vkCmdSetFrontFaceEXT = (PFNVKCMDSETFRONTFACEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetFrontFaceEXT");
          m_vkCmdSetPrimitiveTopologyEXT = (PFNVKCMDSETPRIMITIVETOPOLOGYEXTPROC) vulkanGetProcAddressFunc("vkCmdSetPrimitiveTopologyEXT");
          m_vkCmdSetViewportWithCountEXT = (PFNVKCMDSETVIEWPORTWITHCOUNTEXTPROC) vulkanGetProcAddressFunc("vkCmdSetViewportWithCountEXT");
          m_vkCmdSetScissorWithCountEXT = (PFNVKCMDSETSCISSORWITHCOUNTEXTPROC) vulkanGetProcAddressFunc("vkCmdSetScissorWithCountEXT");
          m_vkCmdBindVertexBuffers2EXT = (PFNVKCMDBINDVERTEXBUFFERS2EXTPROC) vulkanGetProcAddressFunc("vkCmdBindVertexBuffers2EXT");
          m_vkCmdSetDepthTestEnableEXT = (PFNVKCMDSETDEPTHTESTENABLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetDepthTestEnableEXT");
          m_vkCmdSetDepthWriteEnableEXT = (PFNVKCMDSETDEPTHWRITEENABLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetDepthWriteEnableEXT");
          m_vkCmdSetDepthCompareOpEXT = (PFNVKCMDSETDEPTHCOMPAREOPEXTPROC) vulkanGetProcAddressFunc("vkCmdSetDepthCompareOpEXT");
          m_vkCmdSetDepthBoundsTestEnableEXT = (PFNVKCMDSETDEPTHBOUNDSTESTENABLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetDepthBoundsTestEnableEXT");
          m_vkCmdSetStencilTestEnableEXT = (PFNVKCMDSETSTENCILTESTENABLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetStencilTestEnableEXT");
          m_vkCmdSetStencilOpEXT = (PFNVKCMDSETSTENCILOPEXTPROC) vulkanGetProcAddressFunc("vkCmdSetStencilOpEXT");
        }

        // VK_KHR_deferred_host_operations
        if (m_featureSupported[GLEW_VK_KHR_deferred_host_operations]) {
          m_vkCreateDeferredOperationKHR = (PFNVKCREATEDEFERREDOPERATIONKHRPROC) vulkanGetProcAddressFunc("vkCreateDeferredOperationKHR");
          m_vkDestroyDeferredOperationKHR = (PFNVKDESTROYDEFERREDOPERATIONKHRPROC) vulkanGetProcAddressFunc("vkDestroyDeferredOperationKHR");
          m_vkGetDeferredOperationMaxConcurrencyKHR = (PFNVKGETDEFERREDOPERATIONMAXCONCURRENCYKHRPROC) vulkanGetProcAddressFunc("vkGetDeferredOperationMaxConcurrencyKHR");
          m_vkGetDeferredOperationResultKHR = (PFNVKGETDEFERREDOPERATIONRESULTKHRPROC) vulkanGetProcAddressFunc("vkGetDeferredOperationResultKHR");
          m_vkDeferredOperationJoinKHR = (PFNVKDEFERREDOPERATIONJOINKHRPROC) vulkanGetProcAddressFunc("vkDeferredOperationJoinKHR");
        }

        // VK_KHR_pipeline_executable_properties
        if (m_featureSupported[GLEW_VK_KHR_pipeline_executable_properties]) {
          m_vkGetPipelineExecutablePropertiesKHR = (PFNVKGETPIPELINEEXECUTABLEPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPipelineExecutablePropertiesKHR");
          m_vkGetPipelineExecutableStatisticsKHR = (PFNVKGETPIPELINEEXECUTABLESTATISTICSKHRPROC) vulkanGetProcAddressFunc("vkGetPipelineExecutableStatisticsKHR");
          m_vkGetPipelineExecutableInternalRepresentationsKHR = (PFNVKGETPIPELINEEXECUTABLEINTERNALREPRESENTATIONSKHRPROC) vulkanGetProcAddressFunc("vkGetPipelineExecutableInternalRepresentationsKHR");
        }

        // VK_NV_device_generated_commands
        if (m_featureSupported[GLEW_VK_NV_device_generated_commands]) {
          m_vkGetGeneratedCommandsMemoryRequirementsNV = (PFNVKGETGENERATEDCOMMANDSMEMORYREQUIREMENTSNVPROC) vulkanGetProcAddressFunc("vkGetGeneratedCommandsMemoryRequirementsNV");
          m_vkCmdPreprocessGeneratedCommandsNV = (PFNVKCMDPREPROCESSGENERATEDCOMMANDSNVPROC) vulkanGetProcAddressFunc("vkCmdPreprocessGeneratedCommandsNV");
          m_vkCmdExecuteGeneratedCommandsNV = (PFNVKCMDEXECUTEGENERATEDCOMMANDSNVPROC) vulkanGetProcAddressFunc("vkCmdExecuteGeneratedCommandsNV");
          m_vkCmdBindPipelineShaderGroupNV = (PFNVKCMDBINDPIPELINESHADERGROUPNVPROC) vulkanGetProcAddressFunc("vkCmdBindPipelineShaderGroupNV");
          m_vkCreateIndirectCommandsLayoutNV = (PFNVKCREATEINDIRECTCOMMANDSLAYOUTNVPROC) vulkanGetProcAddressFunc("vkCreateIndirectCommandsLayoutNV");
          m_vkDestroyIndirectCommandsLayoutNV = (PFNVKDESTROYINDIRECTCOMMANDSLAYOUTNVPROC) vulkanGetProcAddressFunc("vkDestroyIndirectCommandsLayoutNV");
        }

        // VK_EXT_private_data
        if (m_featureSupported[GLEW_VK_EXT_private_data]) {
          m_vkCreatePrivateDataSlotEXT = (PFNVKCREATEPRIVATEDATASLOTEXTPROC) vulkanGetProcAddressFunc("vkCreatePrivateDataSlotEXT");
          m_vkDestroyPrivateDataSlotEXT = (PFNVKDESTROYPRIVATEDATASLOTEXTPROC) vulkanGetProcAddressFunc("vkDestroyPrivateDataSlotEXT");
          m_vkSetPrivateDataEXT = (PFNVKSETPRIVATEDATAEXTPROC) vulkanGetProcAddressFunc("vkSetPrivateDataEXT");
          m_vkGetPrivateDataEXT = (PFNVKGETPRIVATEDATAEXTPROC) vulkanGetProcAddressFunc("vkGetPrivateDataEXT");
        }

        // VK_KHR_synchronization2
        if (m_featureSupported[GLEW_VK_KHR_synchronization2]) {
          m_vkCmdSetEvent2KHR = (PFNVKCMDSETEVENT2KHRPROC) vulkanGetProcAddressFunc("vkCmdSetEvent2KHR");
          m_vkCmdResetEvent2KHR = (PFNVKCMDRESETEVENT2KHRPROC) vulkanGetProcAddressFunc("vkCmdResetEvent2KHR");
          m_vkCmdWaitEvents2KHR = (PFNVKCMDWAITEVENTS2KHRPROC) vulkanGetProcAddressFunc("vkCmdWaitEvents2KHR");
          m_vkCmdPipelineBarrier2KHR = (PFNVKCMDPIPELINEBARRIER2KHRPROC) vulkanGetProcAddressFunc("vkCmdPipelineBarrier2KHR");
          m_vkCmdWriteTimestamp2KHR = (PFNVKCMDWRITETIMESTAMP2KHRPROC) vulkanGetProcAddressFunc("vkCmdWriteTimestamp2KHR");
          m_vkQueueSubmit2KHR = (PFNVKQUEUESUBMIT2KHRPROC) vulkanGetProcAddressFunc("vkQueueSubmit2KHR");
          m_vkCmdWriteBufferMarker2AMD = (PFNVKCMDWRITEBUFFERMARKER2AMDPROC) vulkanGetProcAddressFunc("vkCmdWriteBufferMarker2AMD");
          m_vkGetQueueCheckpointData2NV = (PFNVKGETQUEUECHECKPOINTDATA2NVPROC) vulkanGetProcAddressFunc("vkGetQueueCheckpointData2NV");
        }

        // VK_NV_fragment_shading_rate_enums
        if (m_featureSupported[GLEW_VK_NV_fragment_shading_rate_enums]) {
          m_vkCmdSetFragmentShadingRateEnumNV = (PFNVKCMDSETFRAGMENTSHADINGRATEENUMNVPROC) vulkanGetProcAddressFunc("vkCmdSetFragmentShadingRateEnumNV");
        }

        // VK_KHR_copy_commands2
        if (m_featureSupported[GLEW_VK_KHR_copy_commands2]) {
          m_vkCmdCopyBuffer2KHR = (PFNVKCMDCOPYBUFFER2KHRPROC) vulkanGetProcAddressFunc("vkCmdCopyBuffer2KHR");
          m_vkCmdCopyImage2KHR = (PFNVKCMDCOPYIMAGE2KHRPROC) vulkanGetProcAddressFunc("vkCmdCopyImage2KHR");
          m_vkCmdCopyBufferToImage2KHR = (PFNVKCMDCOPYBUFFERTOIMAGE2KHRPROC) vulkanGetProcAddressFunc("vkCmdCopyBufferToImage2KHR");
          m_vkCmdCopyImageToBuffer2KHR = (PFNVKCMDCOPYIMAGETOBUFFER2KHRPROC) vulkanGetProcAddressFunc("vkCmdCopyImageToBuffer2KHR");
          m_vkCmdBlitImage2KHR = (PFNVKCMDBLITIMAGE2KHRPROC) vulkanGetProcAddressFunc("vkCmdBlitImage2KHR");
          m_vkCmdResolveImage2KHR = (PFNVKCMDRESOLVEIMAGE2KHRPROC) vulkanGetProcAddressFunc("vkCmdResolveImage2KHR");
        }

        // VK_EXT_vertex_input_dynamic_state
        if (m_featureSupported[GLEW_VK_EXT_vertex_input_dynamic_state]) {
          m_vkCmdSetVertexInputEXT = (PFNVKCMDSETVERTEXINPUTEXTPROC) vulkanGetProcAddressFunc("vkCmdSetVertexInputEXT");
        }

        // VK_EXT_color_write_enable
        if (m_featureSupported[GLEW_VK_EXT_color_write_enable]) {
          m_vkCmdSetColorWriteEnableEXT = (PFNVKCMDSETCOLORWRITEENABLEEXTPROC) vulkanGetProcAddressFunc("vkCmdSetColorWriteEnableEXT");
        }

      #if defined(VK_USE_PLATFORM_XLIB_KHR)
        // VK_KHR_xlib_surface
        if (m_featureSupported[GLEW_VK_KHR_xlib_surface]) {
          m_vkCreateXlibSurfaceKHR = (PFNVKCREATEXLIBSURFACEKHRPROC) vulkanGetProcAddressFunc("vkCreateXlibSurfaceKHR");
          m_vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFNVKGETPHYSICALDEVICEXLIBPRESENTATIONSUPPORTKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceXlibPresentationSupportKHR");
        }
      #endif

      #if defined(VK_USE_PLATFORM_XCB_KHR)
        // VK_KHR_xcb_surface
        if (m_featureSupported[GLEW_VK_KHR_xcb_surface]) {
          m_vkCreateXcbSurfaceKHR = (PFNVKCREATEXCBSURFACEKHRPROC) vulkanGetProcAddressFunc("vkCreateXcbSurfaceKHR");
          m_vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFNVKGETPHYSICALDEVICEXCBPRESENTATIONSUPPORTKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceXcbPresentationSupportKHR");
        }
      #endif

      #if defined(VK_USE_PLATFORM_WAYLAND_KHR)
        // VK_KHR_wayland_surface
        if (m_featureSupported[GLEW_VK_KHR_wayland_surface]) {
          m_vkCreateWaylandSurfaceKHR = (PFNVKCREATEWAYLANDSURFACEKHRPROC) vulkanGetProcAddressFunc("vkCreateWaylandSurfaceKHR");
          m_vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFNVKGETPHYSICALDEVICEWAYLANDPRESENTATIONSUPPORTKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceWaylandPresentationSupportKHR");
        }
      #endif

      #if defined(VK_USE_PLATFORM_ANDROID_KHR)
        // VK_KHR_android_surface
        if (m_featureSupported[GLEW_VK_KHR_android_surface]) {
          m_vkCreateAndroidSurfaceKHR = (PFNVKCREATEANDROIDSURFACEKHRPROC) vulkanGetProcAddressFunc("vkCreateAndroidSurfaceKHR");
        }

        // VK_ANDROID_external_memory_android_hardware_buffer
        if (m_featureSupported[GLEW_VK_ANDROID_external_memory_android_hardware_buffer]) {
          m_vkGetAndroidHardwareBufferPropertiesANDROID = (PFNVKGETANDROIDHARDWAREBUFFERPROPERTIESANDROIDPROC) vulkanGetProcAddressFunc("vkGetAndroidHardwareBufferPropertiesANDROID");
          m_vkGetMemoryAndroidHardwareBufferANDROID = (PFNVKGETMEMORYANDROIDHARDWAREBUFFERANDROIDPROC) vulkanGetProcAddressFunc("vkGetMemoryAndroidHardwareBufferANDROID");
        }
      #endif

      #if defined(VK_USE_PLATFORM_WIN32_KHR)
        // VK_KHR_win32_surface
        if (m_featureSupported[GLEW_VK_KHR_win32_surface]) {
          m_vkCreateWin32SurfaceKHR = (PFNVKCREATEWIN32SURFACEKHRPROC) vulkanGetProcAddressFunc("vkCreateWin32SurfaceKHR");
          m_vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFNVKGETPHYSICALDEVICEWIN32PRESENTATIONSUPPORTKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceWin32PresentationSupportKHR");
        }

        // VK_NV_external_memory_win32
        if (m_featureSupported[GLEW_VK_NV_external_memory_win32]) {
          m_vkGetMemoryWin32HandleNV = (PFNVKGETMEMORYWIN32HANDLENVPROC) vulkanGetProcAddressFunc("vkGetMemoryWin32HandleNV");
        }

        // VK_KHR_external_memory_win32
        if (m_featureSupported[GLEW_VK_KHR_external_memory_win32]) {
          m_vkGetMemoryWin32HandleKHR = (PFNVKGETMEMORYWIN32HANDLEKHRPROC) vulkanGetProcAddressFunc("vkGetMemoryWin32HandleKHR");
          m_vkGetMemoryWin32HandlePropertiesKHR = (PFNVKGETMEMORYWIN32HANDLEPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetMemoryWin32HandlePropertiesKHR");
        }

        // VK_KHR_external_semaphore_win32
        if (m_featureSupported[GLEW_VK_KHR_external_semaphore_win32]) {
          m_vkImportSemaphoreWin32HandleKHR = (PFNVKIMPORTSEMAPHOREWIN32HANDLEKHRPROC) vulkanGetProcAddressFunc("vkImportSemaphoreWin32HandleKHR");
          m_vkGetSemaphoreWin32HandleKHR = (PFNVKGETSEMAPHOREWIN32HANDLEKHRPROC) vulkanGetProcAddressFunc("vkGetSemaphoreWin32HandleKHR");
        }

        // VK_KHR_external_fence_win32
        if (m_featureSupported[GLEW_VK_KHR_external_fence_win32]) {
          m_vkImportFenceWin32HandleKHR = (PFNVKIMPORTFENCEWIN32HANDLEKHRPROC) vulkanGetProcAddressFunc("vkImportFenceWin32HandleKHR");
          m_vkGetFenceWin32HandleKHR = (PFNVKGETFENCEWIN32HANDLEKHRPROC) vulkanGetProcAddressFunc("vkGetFenceWin32HandleKHR");
        }

        // VK_EXT_full_screen_exclusive
        if (m_featureSupported[GLEW_VK_EXT_full_screen_exclusive]) {
          m_vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFNVKGETPHYSICALDEVICESURFACEPRESENTMODES2EXTPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceSurfacePresentModes2EXT");
          m_vkAcquireFullScreenExclusiveModeEXT = (PFNVKACQUIREFULLSCREENEXCLUSIVEMODEEXTPROC) vulkanGetProcAddressFunc("vkAcquireFullScreenExclusiveModeEXT");
          m_vkReleaseFullScreenExclusiveModeEXT = (PFNVKRELEASEFULLSCREENEXCLUSIVEMODEEXTPROC) vulkanGetProcAddressFunc("vkReleaseFullScreenExclusiveModeEXT");
          m_vkGetDeviceGroupSurfacePresentModes2EXT = (PFNVKGETDEVICEGROUPSURFACEPRESENTMODES2EXTPROC) vulkanGetProcAddressFunc("vkGetDeviceGroupSurfacePresentModes2EXT");
        }

        // VK_NV_acquire_winrt_display
        if (m_featureSupported[GLEW_VK_NV_acquire_winrt_display]) {
          m_vkAcquireWinrtDisplayNV = (PFNVKACQUIREWINRTDISPLAYNVPROC) vulkanGetProcAddressFunc("vkAcquireWinrtDisplayNV");
          m_vkGetWinrtDisplayNV = (PFNVKGETWINRTDISPLAYNVPROC) vulkanGetProcAddressFunc("vkGetWinrtDisplayNV");
        }
      #endif

      #if defined(VK_ENABLE_BETA_EXTENSIONS)
        // VK_KHR_video_queue
        if (m_featureSupported[GLEW_VK_KHR_video_queue]) {
          m_vkGetPhysicalDeviceVideoCapabilitiesKHR = (PFNVKGETPHYSICALDEVICEVIDEOCAPABILITIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceVideoCapabilitiesKHR");
          m_vkGetPhysicalDeviceVideoFormatPropertiesKHR = (PFNVKGETPHYSICALDEVICEVIDEOFORMATPROPERTIESKHRPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceVideoFormatPropertiesKHR");
          m_vkCreateVideoSessionKHR = (PFNVKCREATEVIDEOSESSIONKHRPROC) vulkanGetProcAddressFunc("vkCreateVideoSessionKHR");
          m_vkDestroyVideoSessionKHR = (PFNVKDESTROYVIDEOSESSIONKHRPROC) vulkanGetProcAddressFunc("vkDestroyVideoSessionKHR");
          m_vkGetVideoSessionMemoryRequirementsKHR = (PFNVKGETVIDEOSESSIONMEMORYREQUIREMENTSKHRPROC) vulkanGetProcAddressFunc("vkGetVideoSessionMemoryRequirementsKHR");
          m_vkBindVideoSessionMemoryKHR = (PFNVKBINDVIDEOSESSIONMEMORYKHRPROC) vulkanGetProcAddressFunc("vkBindVideoSessionMemoryKHR");
          m_vkCreateVideoSessionParametersKHR = (PFNVKCREATEVIDEOSESSIONPARAMETERSKHRPROC) vulkanGetProcAddressFunc("vkCreateVideoSessionParametersKHR");
          m_vkUpdateVideoSessionParametersKHR = (PFNVKUPDATEVIDEOSESSIONPARAMETERSKHRPROC) vulkanGetProcAddressFunc("vkUpdateVideoSessionParametersKHR");
          m_vkDestroyVideoSessionParametersKHR = (PFNVKDESTROYVIDEOSESSIONPARAMETERSKHRPROC) vulkanGetProcAddressFunc("vkDestroyVideoSessionParametersKHR");
          m_vkCmdBeginVideoCodingKHR = (PFNVKCMDBEGINVIDEOCODINGKHRPROC) vulkanGetProcAddressFunc("vkCmdBeginVideoCodingKHR");
          m_vkCmdEndVideoCodingKHR = (PFNVKCMDENDVIDEOCODINGKHRPROC) vulkanGetProcAddressFunc("vkCmdEndVideoCodingKHR");
          m_vkCmdControlVideoCodingKHR = (PFNVKCMDCONTROLVIDEOCODINGKHRPROC) vulkanGetProcAddressFunc("vkCmdControlVideoCodingKHR");
        }

        // VK_KHR_video_decode_queue
        if (m_featureSupported[GLEW_VK_KHR_video_decode_queue]) {
          m_vkCmdDecodeVideoKHR = (PFNVKCMDDECODEVIDEOKHRPROC) vulkanGetProcAddressFunc("vkCmdDecodeVideoKHR");
        }

        // VK_KHR_video_encode_queue
        if (m_featureSupported[GLEW_VK_KHR_video_encode_queue]) {
          m_vkCmdEncodeVideoKHR = (PFNVKCMDENCODEVIDEOKHRPROC) vulkanGetProcAddressFunc("vkCmdEncodeVideoKHR");
        }
      #endif

      #if defined(VK_USE_PLATFORM_GGP)
        // VK_GGP_stream_descriptor_surface
        if (m_featureSupported[GLEW_VK_GGP_stream_descriptor_surface]) {
          m_vkCreateStreamDescriptorSurfaceGGP = (PFNVKCREATESTREAMDESCRIPTORSURFACEGGPPROC) vulkanGetProcAddressFunc("vkCreateStreamDescriptorSurfaceGGP");
        }
      #endif

      #if defined(VK_USE_PLATFORM_VI_NN)
        // VK_NN_vi_surface
        if (m_featureSupported[GLEW_VK_NN_vi_surface]) {
          m_vkCreateViSurfaceNN = (PFNVKCREATEVISURFACENNPROC) vulkanGetProcAddressFunc("vkCreateViSurfaceNN");
        }
      #endif

      #if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
        // VK_EXT_acquire_xlib_display
        if (m_featureSupported[GLEW_VK_EXT_acquire_xlib_display]) {
          m_vkAcquireXlibDisplayEXT = (PFNVKACQUIREXLIBDISPLAYEXTPROC) vulkanGetProcAddressFunc("vkAcquireXlibDisplayEXT");
          m_vkGetRandROutputDisplayEXT = (PFNVKGETRANDROUTPUTDISPLAYEXTPROC) vulkanGetProcAddressFunc("vkGetRandROutputDisplayEXT");
        }
      #endif

      #if defined(VK_USE_PLATFORM_IOS_MVK)
        // VK_MVK_ios_surface
        if (m_featureSupported[GLEW_VK_MVK_ios_surface]) {
          m_vkCreateIOSSurfaceMVK = (PFNVKCREATEIOSSURFACEMVKPROC) vulkanGetProcAddressFunc("vkCreateIOSSurfaceMVK");
        }
      #endif

      #if defined(VK_USE_PLATFORM_MACOS_MVK)
        // VK_MVK_macos_surface
        if (m_featureSupported[GLEW_VK_MVK_macos_surface]) {
          m_vkCreateMacOSSurfaceMVK = (PFNVKCREATEMACOSSURFACEMVKPROC) vulkanGetProcAddressFunc("vkCreateMacOSSurfaceMVK");
        }
      #endif

      #if defined(VK_USE_PLATFORM_FUCHSIA)
        // VK_FUCHSIA_imagepipe_surface
        if (m_featureSupported[GLEW_VK_FUCHSIA_imagepipe_surface]) {
          m_vkCreateImagePipeSurfaceFUCHSIA = (PFNVKCREATEIMAGEPIPESURFACEFUCHSIAPROC) vulkanGetProcAddressFunc("vkCreateImagePipeSurfaceFUCHSIA");
        }

        // VK_FUCHSIA_external_memory
        if (m_featureSupported[GLEW_VK_FUCHSIA_external_memory]) {
          m_vkGetMemoryZirconHandleFUCHSIA = (PFNVKGETMEMORYZIRCONHANDLEFUCHSIAPROC) vulkanGetProcAddressFunc("vkGetMemoryZirconHandleFUCHSIA");
          m_vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFNVKGETMEMORYZIRCONHANDLEPROPERTIESFUCHSIAPROC) vulkanGetProcAddressFunc("vkGetMemoryZirconHandlePropertiesFUCHSIA");
        }

        // VK_FUCHSIA_external_semaphore
        if (m_featureSupported[GLEW_VK_FUCHSIA_external_semaphore]) {
          m_vkImportSemaphoreZirconHandleFUCHSIA = (PFNVKIMPORTSEMAPHOREZIRCONHANDLEFUCHSIAPROC) vulkanGetProcAddressFunc("vkImportSemaphoreZirconHandleFUCHSIA");
          m_vkGetSemaphoreZirconHandleFUCHSIA = (PFNVKGETSEMAPHOREZIRCONHANDLEFUCHSIAPROC) vulkanGetProcAddressFunc("vkGetSemaphoreZirconHandleFUCHSIA");
        }
      #endif

      #if defined(VK_USE_PLATFORM_METAL_EXT)
        // VK_EXT_metal_surface
        if (m_featureSupported[GLEW_VK_EXT_metal_surface]) {
          m_vkCreateMetalSurfaceEXT = (PFNVKCREATEMETALSURFACEEXTPROC) vulkanGetProcAddressFunc("vkCreateMetalSurfaceEXT");
        }
      #endif

      #if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
        // VK_EXT_directfb_surface
        if (m_featureSupported[GLEW_VK_EXT_directfb_surface]) {
          m_vkCreateDirectFBSurfaceEXT = (PFNVKCREATEDIRECTFBSURFACEEXTPROC) vulkanGetProcAddressFunc("vkCreateDirectFBSurfaceEXT");
          m_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFNVKGETPHYSICALDEVICEDIRECTFBPRESENTATIONSUPPORTEXTPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
        }
      #endif

      #if defined(VK_USE_PLATFORM_SCREEN_QNX)
        // VK_QNX_screen_surface
        if (m_featureSupported[GLEW_VK_QNX_screen_surface]) {
          m_vkCreateScreenSurfaceQNX = (PFNVKCREATESCREENSURFACEQNXPROC) vulkanGetProcAddressFunc("vkCreateScreenSurfaceQNX");
          m_vkGetPhysicalDeviceScreenPresentationSupportQNX = (PFNVKGETPHYSICALDEVICESCREENPRESENTATIONSUPPORTQNXPROC) vulkanGetProcAddressFunc("vkGetPhysicalDeviceScreenPresentationSupportQNX");
        }
      #endif
      }

      bool IsSupported(GLEW_VULKAN_FeatureSet feature) const {
        return m_featureSupported[feature];
      }

      void SetSupported(GLEW_VULKAN_FeatureSet feature, bool supported) {
        m_featureSupported[feature] = supported;
      }

      bool m_featureSupported[GLEW_VULKAN_FeatureSetCount];

      PFNVKENUMERATEINSTANCEVERSIONPROC m_vkEnumerateInstanceVersion;
      PFNVKBINDBUFFERMEMORY2PROC m_vkBindBufferMemory2;
      PFNVKBINDIMAGEMEMORY2PROC m_vkBindImageMemory2;
      PFNVKGETDEVICEGROUPPEERMEMORYFEATURESPROC m_vkGetDeviceGroupPeerMemoryFeatures;
      PFNVKCMDSETDEVICEMASKPROC m_vkCmdSetDeviceMask;
      PFNVKCMDDISPATCHBASEPROC m_vkCmdDispatchBase;
      PFNVKENUMERATEPHYSICALDEVICEGROUPSPROC m_vkEnumeratePhysicalDeviceGroups;
      PFNVKGETIMAGEMEMORYREQUIREMENTS2PROC m_vkGetImageMemoryRequirements2;
      PFNVKGETBUFFERMEMORYREQUIREMENTS2PROC m_vkGetBufferMemoryRequirements2;
      PFNVKGETIMAGESPARSEMEMORYREQUIREMENTS2PROC m_vkGetImageSparseMemoryRequirements2;
      PFNVKGETPHYSICALDEVICEFEATURES2PROC m_vkGetPhysicalDeviceFeatures2;
      PFNVKGETPHYSICALDEVICEPROPERTIES2PROC m_vkGetPhysicalDeviceProperties2;
      PFNVKGETPHYSICALDEVICEFORMATPROPERTIES2PROC m_vkGetPhysicalDeviceFormatProperties2;
      PFNVKGETPHYSICALDEVICEIMAGEFORMATPROPERTIES2PROC m_vkGetPhysicalDeviceImageFormatProperties2;
      PFNVKGETPHYSICALDEVICEQUEUEFAMILYPROPERTIES2PROC m_vkGetPhysicalDeviceQueueFamilyProperties2;
      PFNVKGETPHYSICALDEVICEMEMORYPROPERTIES2PROC m_vkGetPhysicalDeviceMemoryProperties2;
      PFNVKGETPHYSICALDEVICESPARSEIMAGEFORMATPROPERTIES2PROC m_vkGetPhysicalDeviceSparseImageFormatProperties2;
      PFNVKTRIMCOMMANDPOOLPROC m_vkTrimCommandPool;
      PFNVKGETDEVICEQUEUE2PROC m_vkGetDeviceQueue2;
      PFNVKCREATESAMPLERYCBCRCONVERSIONPROC m_vkCreateSamplerYcbcrConversion;
      PFNVKDESTROYSAMPLERYCBCRCONVERSIONPROC m_vkDestroySamplerYcbcrConversion;
      PFNVKCREATEDESCRIPTORUPDATETEMPLATEPROC m_vkCreateDescriptorUpdateTemplate;
      PFNVKDESTROYDESCRIPTORUPDATETEMPLATEPROC m_vkDestroyDescriptorUpdateTemplate;
      PFNVKUPDATEDESCRIPTORSETWITHTEMPLATEPROC m_vkUpdateDescriptorSetWithTemplate;
      PFNVKGETPHYSICALDEVICEEXTERNALBUFFERPROPERTIESPROC m_vkGetPhysicalDeviceExternalBufferProperties;
      PFNVKGETPHYSICALDEVICEEXTERNALFENCEPROPERTIESPROC m_vkGetPhysicalDeviceExternalFenceProperties;
      PFNVKGETPHYSICALDEVICEEXTERNALSEMAPHOREPROPERTIESPROC m_vkGetPhysicalDeviceExternalSemaphoreProperties;
      PFNVKGETDESCRIPTORSETLAYOUTSUPPORTPROC m_vkGetDescriptorSetLayoutSupport;
      PFNVKCMDDRAWINDIRECTCOUNTPROC m_vkCmdDrawIndirectCount;
      PFNVKCMDDRAWINDEXEDINDIRECTCOUNTPROC m_vkCmdDrawIndexedIndirectCount;
      PFNVKCREATERENDERPASS2PROC m_vkCreateRenderPass2;
      PFNVKCMDBEGINRENDERPASS2PROC m_vkCmdBeginRenderPass2;
      PFNVKCMDNEXTSUBPASS2PROC m_vkCmdNextSubpass2;
      PFNVKCMDENDRENDERPASS2PROC m_vkCmdEndRenderPass2;
      PFNVKRESETQUERYPOOLPROC m_vkResetQueryPool;
      PFNVKGETSEMAPHORECOUNTERVALUEPROC m_vkGetSemaphoreCounterValue;
      PFNVKWAITSEMAPHORESPROC m_vkWaitSemaphores;
      PFNVKSIGNALSEMAPHOREPROC m_vkSignalSemaphore;
      PFNVKGETBUFFERDEVICEADDRESSPROC m_vkGetBufferDeviceAddress;
      PFNVKGETBUFFEROPAQUECAPTUREADDRESSPROC m_vkGetBufferOpaqueCaptureAddress;
      PFNVKGETDEVICEMEMORYOPAQUECAPTUREADDRESSPROC m_vkGetDeviceMemoryOpaqueCaptureAddress;
      PFNVKDESTROYSURFACEKHRPROC m_vkDestroySurfaceKHR;
      PFNVKGETPHYSICALDEVICESURFACESUPPORTKHRPROC m_vkGetPhysicalDeviceSurfaceSupportKHR;
      PFNVKGETPHYSICALDEVICESURFACECAPABILITIESKHRPROC m_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
      PFNVKGETPHYSICALDEVICESURFACEFORMATSKHRPROC m_vkGetPhysicalDeviceSurfaceFormatsKHR;
      PFNVKGETPHYSICALDEVICESURFACEPRESENTMODESKHRPROC m_vkGetPhysicalDeviceSurfacePresentModesKHR;
      PFNVKCREATESWAPCHAINKHRPROC m_vkCreateSwapchainKHR;
      PFNVKDESTROYSWAPCHAINKHRPROC m_vkDestroySwapchainKHR;
      PFNVKGETSWAPCHAINIMAGESKHRPROC m_vkGetSwapchainImagesKHR;
      PFNVKACQUIRENEXTIMAGEKHRPROC m_vkAcquireNextImageKHR;
      PFNVKQUEUEPRESENTKHRPROC m_vkQueuePresentKHR;
      PFNVKGETDEVICEGROUPPRESENTCAPABILITIESKHRPROC m_vkGetDeviceGroupPresentCapabilitiesKHR;
      PFNVKGETDEVICEGROUPSURFACEPRESENTMODESKHRPROC m_vkGetDeviceGroupSurfacePresentModesKHR;
      PFNVKGETPHYSICALDEVICEPRESENTRECTANGLESKHRPROC m_vkGetPhysicalDevicePresentRectanglesKHR;
      PFNVKACQUIRENEXTIMAGE2KHRPROC m_vkAcquireNextImage2KHR;
      PFNVKGETPHYSICALDEVICEDISPLAYPROPERTIESKHRPROC m_vkGetPhysicalDeviceDisplayPropertiesKHR;
      PFNVKGETPHYSICALDEVICEDISPLAYPLANEPROPERTIESKHRPROC m_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
      PFNVKGETDISPLAYPLANESUPPORTEDDISPLAYSKHRPROC m_vkGetDisplayPlaneSupportedDisplaysKHR;
      PFNVKGETDISPLAYMODEPROPERTIESKHRPROC m_vkGetDisplayModePropertiesKHR;
      PFNVKCREATEDISPLAYMODEKHRPROC m_vkCreateDisplayModeKHR;
      PFNVKGETDISPLAYPLANECAPABILITIESKHRPROC m_vkGetDisplayPlaneCapabilitiesKHR;
      PFNVKCREATEDISPLAYPLANESURFACEKHRPROC m_vkCreateDisplayPlaneSurfaceKHR;
      PFNVKCREATESHAREDSWAPCHAINSKHRPROC m_vkCreateSharedSwapchainsKHR;
      PFNVKCREATEDEBUGREPORTCALLBACKEXTPROC m_vkCreateDebugReportCallbackEXT;
      PFNVKDESTROYDEBUGREPORTCALLBACKEXTPROC m_vkDestroyDebugReportCallbackEXT;
      PFNVKDEBUGREPORTMESSAGEEXTPROC m_vkDebugReportMessageEXT;
      PFNVKDEBUGMARKERSETOBJECTTAGEXTPROC m_vkDebugMarkerSetObjectTagEXT;
      PFNVKDEBUGMARKERSETOBJECTNAMEEXTPROC m_vkDebugMarkerSetObjectNameEXT;
      PFNVKCMDDEBUGMARKERBEGINEXTPROC m_vkCmdDebugMarkerBeginEXT;
      PFNVKCMDDEBUGMARKERENDEXTPROC m_vkCmdDebugMarkerEndEXT;
      PFNVKCMDDEBUGMARKERINSERTEXTPROC m_vkCmdDebugMarkerInsertEXT;
      PFNVKCMDBINDTRANSFORMFEEDBACKBUFFERSEXTPROC m_vkCmdBindTransformFeedbackBuffersEXT;
      PFNVKCMDBEGINTRANSFORMFEEDBACKEXTPROC m_vkCmdBeginTransformFeedbackEXT;
      PFNVKCMDENDTRANSFORMFEEDBACKEXTPROC m_vkCmdEndTransformFeedbackEXT;
      PFNVKCMDBEGINQUERYINDEXEDEXTPROC m_vkCmdBeginQueryIndexedEXT;
      PFNVKCMDENDQUERYINDEXEDEXTPROC m_vkCmdEndQueryIndexedEXT;
      PFNVKCMDDRAWINDIRECTBYTECOUNTEXTPROC m_vkCmdDrawIndirectByteCountEXT;
      PFNVKGETIMAGEVIEWHANDLENVXPROC m_vkGetImageViewHandleNVX;
      PFNVKGETIMAGEVIEWADDRESSNVXPROC m_vkGetImageViewAddressNVX;
      PFNVKCMDDRAWINDIRECTCOUNTAMDPROC m_vkCmdDrawIndirectCountAMD;
      PFNVKCMDDRAWINDEXEDINDIRECTCOUNTAMDPROC m_vkCmdDrawIndexedIndirectCountAMD;
      PFNVKGETSHADERINFOAMDPROC m_vkGetShaderInfoAMD;
      PFNVKGETPHYSICALDEVICEEXTERNALIMAGEFORMATPROPERTIESNVPROC m_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
      PFNVKGETPHYSICALDEVICEFEATURES2KHRPROC m_vkGetPhysicalDeviceFeatures2KHR;
      PFNVKGETPHYSICALDEVICEPROPERTIES2KHRPROC m_vkGetPhysicalDeviceProperties2KHR;
      PFNVKGETPHYSICALDEVICEFORMATPROPERTIES2KHRPROC m_vkGetPhysicalDeviceFormatProperties2KHR;
      PFNVKGETPHYSICALDEVICEIMAGEFORMATPROPERTIES2KHRPROC m_vkGetPhysicalDeviceImageFormatProperties2KHR;
      PFNVKGETPHYSICALDEVICEQUEUEFAMILYPROPERTIES2KHRPROC m_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
      PFNVKGETPHYSICALDEVICEMEMORYPROPERTIES2KHRPROC m_vkGetPhysicalDeviceMemoryProperties2KHR;
      PFNVKGETPHYSICALDEVICESPARSEIMAGEFORMATPROPERTIES2KHRPROC m_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
      PFNVKGETDEVICEGROUPPEERMEMORYFEATURESKHRPROC m_vkGetDeviceGroupPeerMemoryFeaturesKHR;
      PFNVKCMDSETDEVICEMASKKHRPROC m_vkCmdSetDeviceMaskKHR;
      PFNVKCMDDISPATCHBASEKHRPROC m_vkCmdDispatchBaseKHR;
      PFNVKTRIMCOMMANDPOOLKHRPROC m_vkTrimCommandPoolKHR;
      PFNVKENUMERATEPHYSICALDEVICEGROUPSKHRPROC m_vkEnumeratePhysicalDeviceGroupsKHR;
      PFNVKGETPHYSICALDEVICEEXTERNALBUFFERPROPERTIESKHRPROC m_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
      PFNVKGETMEMORYFDKHRPROC m_vkGetMemoryFdKHR;
      PFNVKGETMEMORYFDPROPERTIESKHRPROC m_vkGetMemoryFdPropertiesKHR;
      PFNVKGETPHYSICALDEVICEEXTERNALSEMAPHOREPROPERTIESKHRPROC m_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
      PFNVKIMPORTSEMAPHOREFDKHRPROC m_vkImportSemaphoreFdKHR;
      PFNVKGETSEMAPHOREFDKHRPROC m_vkGetSemaphoreFdKHR;
      PFNVKCMDPUSHDESCRIPTORSETKHRPROC m_vkCmdPushDescriptorSetKHR;
      PFNVKCMDPUSHDESCRIPTORSETWITHTEMPLATEKHRPROC m_vkCmdPushDescriptorSetWithTemplateKHR;
      PFNVKCMDBEGINCONDITIONALRENDERINGEXTPROC m_vkCmdBeginConditionalRenderingEXT;
      PFNVKCMDENDCONDITIONALRENDERINGEXTPROC m_vkCmdEndConditionalRenderingEXT;
      PFNVKCREATEDESCRIPTORUPDATETEMPLATEKHRPROC m_vkCreateDescriptorUpdateTemplateKHR;
      PFNVKDESTROYDESCRIPTORUPDATETEMPLATEKHRPROC m_vkDestroyDescriptorUpdateTemplateKHR;
      PFNVKUPDATEDESCRIPTORSETWITHTEMPLATEKHRPROC m_vkUpdateDescriptorSetWithTemplateKHR;
      PFNVKCMDSETVIEWPORTWSCALINGNVPROC m_vkCmdSetViewportWScalingNV;
      PFNVKRELEASEDISPLAYEXTPROC m_vkReleaseDisplayEXT;
      PFNVKGETPHYSICALDEVICESURFACECAPABILITIES2EXTPROC m_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
      PFNVKDISPLAYPOWERCONTROLEXTPROC m_vkDisplayPowerControlEXT;
      PFNVKREGISTERDEVICEEVENTEXTPROC m_vkRegisterDeviceEventEXT;
      PFNVKREGISTERDISPLAYEVENTEXTPROC m_vkRegisterDisplayEventEXT;
      PFNVKGETSWAPCHAINCOUNTEREXTPROC m_vkGetSwapchainCounterEXT;
      PFNVKGETREFRESHCYCLEDURATIONGOOGLEPROC m_vkGetRefreshCycleDurationGOOGLE;
      PFNVKGETPASTPRESENTATIONTIMINGGOOGLEPROC m_vkGetPastPresentationTimingGOOGLE;
      PFNVKCMDSETDISCARDRECTANGLEEXTPROC m_vkCmdSetDiscardRectangleEXT;
      PFNVKSETHDRMETADATAEXTPROC m_vkSetHdrMetadataEXT;
      PFNVKCREATERENDERPASS2KHRPROC m_vkCreateRenderPass2KHR;
      PFNVKCMDBEGINRENDERPASS2KHRPROC m_vkCmdBeginRenderPass2KHR;
      PFNVKCMDNEXTSUBPASS2KHRPROC m_vkCmdNextSubpass2KHR;
      PFNVKCMDENDRENDERPASS2KHRPROC m_vkCmdEndRenderPass2KHR;
      PFNVKGETSWAPCHAINSTATUSKHRPROC m_vkGetSwapchainStatusKHR;
      PFNVKGETPHYSICALDEVICEEXTERNALFENCEPROPERTIESKHRPROC m_vkGetPhysicalDeviceExternalFencePropertiesKHR;
      PFNVKIMPORTFENCEFDKHRPROC m_vkImportFenceFdKHR;
      PFNVKGETFENCEFDKHRPROC m_vkGetFenceFdKHR;
      PFNVKENUMERATEPHYSICALDEVICEQUEUEFAMILYPERFORMANCEQUERYCOUNTERSKHRPROC m_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
      PFNVKGETPHYSICALDEVICEQUEUEFAMILYPERFORMANCEQUERYPASSESKHRPROC m_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
      PFNVKACQUIREPROFILINGLOCKKHRPROC m_vkAcquireProfilingLockKHR;
      PFNVKRELEASEPROFILINGLOCKKHRPROC m_vkReleaseProfilingLockKHR;
      PFNVKGETPHYSICALDEVICESURFACECAPABILITIES2KHRPROC m_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
      PFNVKGETPHYSICALDEVICESURFACEFORMATS2KHRPROC m_vkGetPhysicalDeviceSurfaceFormats2KHR;
      PFNVKGETPHYSICALDEVICEDISPLAYPROPERTIES2KHRPROC m_vkGetPhysicalDeviceDisplayProperties2KHR;
      PFNVKGETPHYSICALDEVICEDISPLAYPLANEPROPERTIES2KHRPROC m_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
      PFNVKGETDISPLAYMODEPROPERTIES2KHRPROC m_vkGetDisplayModeProperties2KHR;
      PFNVKGETDISPLAYPLANECAPABILITIES2KHRPROC m_vkGetDisplayPlaneCapabilities2KHR;
      PFNVKSETDEBUGUTILSOBJECTNAMEEXTPROC m_vkSetDebugUtilsObjectNameEXT;
      PFNVKSETDEBUGUTILSOBJECTTAGEXTPROC m_vkSetDebugUtilsObjectTagEXT;
      PFNVKQUEUEBEGINDEBUGUTILSLABELEXTPROC m_vkQueueBeginDebugUtilsLabelEXT;
      PFNVKQUEUEENDDEBUGUTILSLABELEXTPROC m_vkQueueEndDebugUtilsLabelEXT;
      PFNVKQUEUEINSERTDEBUGUTILSLABELEXTPROC m_vkQueueInsertDebugUtilsLabelEXT;
      PFNVKCMDBEGINDEBUGUTILSLABELEXTPROC m_vkCmdBeginDebugUtilsLabelEXT;
      PFNVKCMDENDDEBUGUTILSLABELEXTPROC m_vkCmdEndDebugUtilsLabelEXT;
      PFNVKCMDINSERTDEBUGUTILSLABELEXTPROC m_vkCmdInsertDebugUtilsLabelEXT;
      PFNVKCREATEDEBUGUTILSMESSENGEREXTPROC m_vkCreateDebugUtilsMessengerEXT;
      PFNVKDESTROYDEBUGUTILSMESSENGEREXTPROC m_vkDestroyDebugUtilsMessengerEXT;
      PFNVKSUBMITDEBUGUTILSMESSAGEEXTPROC m_vkSubmitDebugUtilsMessageEXT;
      PFNVKCMDSETSAMPLELOCATIONSEXTPROC m_vkCmdSetSampleLocationsEXT;
      PFNVKGETPHYSICALDEVICEMULTISAMPLEPROPERTIESEXTPROC m_vkGetPhysicalDeviceMultisamplePropertiesEXT;
      PFNVKGETIMAGEMEMORYREQUIREMENTS2KHRPROC m_vkGetImageMemoryRequirements2KHR;
      PFNVKGETBUFFERMEMORYREQUIREMENTS2KHRPROC m_vkGetBufferMemoryRequirements2KHR;
      PFNVKGETIMAGESPARSEMEMORYREQUIREMENTS2KHRPROC m_vkGetImageSparseMemoryRequirements2KHR;
      PFNVKCREATEACCELERATIONSTRUCTUREKHRPROC m_vkCreateAccelerationStructureKHR;
      PFNVKDESTROYACCELERATIONSTRUCTUREKHRPROC m_vkDestroyAccelerationStructureKHR;
      PFNVKCMDBUILDACCELERATIONSTRUCTURESKHRPROC m_vkCmdBuildAccelerationStructuresKHR;
      PFNVKCMDBUILDACCELERATIONSTRUCTURESINDIRECTKHRPROC m_vkCmdBuildAccelerationStructuresIndirectKHR;
      PFNVKBUILDACCELERATIONSTRUCTURESKHRPROC m_vkBuildAccelerationStructuresKHR;
      PFNVKCOPYACCELERATIONSTRUCTUREKHRPROC m_vkCopyAccelerationStructureKHR;
      PFNVKCOPYACCELERATIONSTRUCTURETOMEMORYKHRPROC m_vkCopyAccelerationStructureToMemoryKHR;
      PFNVKCOPYMEMORYTOACCELERATIONSTRUCTUREKHRPROC m_vkCopyMemoryToAccelerationStructureKHR;
      PFNVKWRITEACCELERATIONSTRUCTURESPROPERTIESKHRPROC m_vkWriteAccelerationStructuresPropertiesKHR;
      PFNVKCMDCOPYACCELERATIONSTRUCTUREKHRPROC m_vkCmdCopyAccelerationStructureKHR;
      PFNVKCMDCOPYACCELERATIONSTRUCTURETOMEMORYKHRPROC m_vkCmdCopyAccelerationStructureToMemoryKHR;
      PFNVKCMDCOPYMEMORYTOACCELERATIONSTRUCTUREKHRPROC m_vkCmdCopyMemoryToAccelerationStructureKHR;
      PFNVKGETACCELERATIONSTRUCTUREDEVICEADDRESSKHRPROC m_vkGetAccelerationStructureDeviceAddressKHR;
      PFNVKCMDWRITEACCELERATIONSTRUCTURESPROPERTIESKHRPROC m_vkCmdWriteAccelerationStructuresPropertiesKHR;
      PFNVKGETDEVICEACCELERATIONSTRUCTURECOMPATIBILITYKHRPROC m_vkGetDeviceAccelerationStructureCompatibilityKHR;
      PFNVKGETACCELERATIONSTRUCTUREBUILDSIZESKHRPROC m_vkGetAccelerationStructureBuildSizesKHR;
      PFNVKCMDTRACERAYSKHRPROC m_vkCmdTraceRaysKHR;
      PFNVKCREATERAYTRACINGPIPELINESKHRPROC m_vkCreateRayTracingPipelinesKHR;
      PFNVKGETRAYTRACINGSHADERGROUPHANDLESKHRPROC m_vkGetRayTracingShaderGroupHandlesKHR;
      PFNVKGETRAYTRACINGCAPTUREREPLAYSHADERGROUPHANDLESKHRPROC m_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
      PFNVKCMDTRACERAYSINDIRECTKHRPROC m_vkCmdTraceRaysIndirectKHR;
      PFNVKGETRAYTRACINGSHADERGROUPSTACKSIZEKHRPROC m_vkGetRayTracingShaderGroupStackSizeKHR;
      PFNVKCMDSETRAYTRACINGPIPELINESTACKSIZEKHRPROC m_vkCmdSetRayTracingPipelineStackSizeKHR;
      PFNVKCREATESAMPLERYCBCRCONVERSIONKHRPROC m_vkCreateSamplerYcbcrConversionKHR;
      PFNVKDESTROYSAMPLERYCBCRCONVERSIONKHRPROC m_vkDestroySamplerYcbcrConversionKHR;
      PFNVKBINDBUFFERMEMORY2KHRPROC m_vkBindBufferMemory2KHR;
      PFNVKBINDIMAGEMEMORY2KHRPROC m_vkBindImageMemory2KHR;
      PFNVKGETIMAGEDRMFORMATMODIFIERPROPERTIESEXTPROC m_vkGetImageDrmFormatModifierPropertiesEXT;
      PFNVKCREATEVALIDATIONCACHEEXTPROC m_vkCreateValidationCacheEXT;
      PFNVKDESTROYVALIDATIONCACHEEXTPROC m_vkDestroyValidationCacheEXT;
      PFNVKMERGEVALIDATIONCACHESEXTPROC m_vkMergeValidationCachesEXT;
      PFNVKGETVALIDATIONCACHEDATAEXTPROC m_vkGetValidationCacheDataEXT;
      PFNVKCMDBINDSHADINGRATEIMAGENVPROC m_vkCmdBindShadingRateImageNV;
      PFNVKCMDSETVIEWPORTSHADINGRATEPALETTENVPROC m_vkCmdSetViewportShadingRatePaletteNV;
      PFNVKCMDSETCOARSESAMPLEORDERNVPROC m_vkCmdSetCoarseSampleOrderNV;
      PFNVKCREATEACCELERATIONSTRUCTURENVPROC m_vkCreateAccelerationStructureNV;
      PFNVKDESTROYACCELERATIONSTRUCTURENVPROC m_vkDestroyAccelerationStructureNV;
      PFNVKGETACCELERATIONSTRUCTUREMEMORYREQUIREMENTSNVPROC m_vkGetAccelerationStructureMemoryRequirementsNV;
      PFNVKBINDACCELERATIONSTRUCTUREMEMORYNVPROC m_vkBindAccelerationStructureMemoryNV;
      PFNVKCMDBUILDACCELERATIONSTRUCTURENVPROC m_vkCmdBuildAccelerationStructureNV;
      PFNVKCMDCOPYACCELERATIONSTRUCTURENVPROC m_vkCmdCopyAccelerationStructureNV;
      PFNVKCMDTRACERAYSNVPROC m_vkCmdTraceRaysNV;
      PFNVKCREATERAYTRACINGPIPELINESNVPROC m_vkCreateRayTracingPipelinesNV;
      PFNVKGETRAYTRACINGSHADERGROUPHANDLESNVPROC m_vkGetRayTracingShaderGroupHandlesNV;
      PFNVKGETACCELERATIONSTRUCTUREHANDLENVPROC m_vkGetAccelerationStructureHandleNV;
      PFNVKCMDWRITEACCELERATIONSTRUCTURESPROPERTIESNVPROC m_vkCmdWriteAccelerationStructuresPropertiesNV;
      PFNVKCOMPILEDEFERREDNVPROC m_vkCompileDeferredNV;
      PFNVKGETDESCRIPTORSETLAYOUTSUPPORTKHRPROC m_vkGetDescriptorSetLayoutSupportKHR;
      PFNVKCMDDRAWINDIRECTCOUNTKHRPROC m_vkCmdDrawIndirectCountKHR;
      PFNVKCMDDRAWINDEXEDINDIRECTCOUNTKHRPROC m_vkCmdDrawIndexedIndirectCountKHR;
      PFNVKGETMEMORYHOSTPOINTERPROPERTIESEXTPROC m_vkGetMemoryHostPointerPropertiesEXT;
      PFNVKCMDWRITEBUFFERMARKERAMDPROC m_vkCmdWriteBufferMarkerAMD;
      PFNVKGETPHYSICALDEVICECALIBRATEABLETIMEDOMAINSEXTPROC m_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
      PFNVKGETCALIBRATEDTIMESTAMPSEXTPROC m_vkGetCalibratedTimestampsEXT;
      PFNVKCMDDRAWMESHTASKSNVPROC m_vkCmdDrawMeshTasksNV;
      PFNVKCMDDRAWMESHTASKSINDIRECTNVPROC m_vkCmdDrawMeshTasksIndirectNV;
      PFNVKCMDDRAWMESHTASKSINDIRECTCOUNTNVPROC m_vkCmdDrawMeshTasksIndirectCountNV;
      PFNVKCMDSETEXCLUSIVESCISSORNVPROC m_vkCmdSetExclusiveScissorNV;
      PFNVKCMDSETCHECKPOINTNVPROC m_vkCmdSetCheckpointNV;
      PFNVKGETQUEUECHECKPOINTDATANVPROC m_vkGetQueueCheckpointDataNV;
      PFNVKGETSEMAPHORECOUNTERVALUEKHRPROC m_vkGetSemaphoreCounterValueKHR;
      PFNVKWAITSEMAPHORESKHRPROC m_vkWaitSemaphoresKHR;
      PFNVKSIGNALSEMAPHOREKHRPROC m_vkSignalSemaphoreKHR;
      PFNVKINITIALIZEPERFORMANCEAPIINTELPROC m_vkInitializePerformanceApiINTEL;
      PFNVKUNINITIALIZEPERFORMANCEAPIINTELPROC m_vkUninitializePerformanceApiINTEL;
      PFNVKCMDSETPERFORMANCEMARKERINTELPROC m_vkCmdSetPerformanceMarkerINTEL;
      PFNVKCMDSETPERFORMANCESTREAMMARKERINTELPROC m_vkCmdSetPerformanceStreamMarkerINTEL;
      PFNVKCMDSETPERFORMANCEOVERRIDEINTELPROC m_vkCmdSetPerformanceOverrideINTEL;
      PFNVKACQUIREPERFORMANCECONFIGURATIONINTELPROC m_vkAcquirePerformanceConfigurationINTEL;
      PFNVKRELEASEPERFORMANCECONFIGURATIONINTELPROC m_vkReleasePerformanceConfigurationINTEL;
      PFNVKQUEUESETPERFORMANCECONFIGURATIONINTELPROC m_vkQueueSetPerformanceConfigurationINTEL;
      PFNVKGETPERFORMANCEPARAMETERINTELPROC m_vkGetPerformanceParameterINTEL;
      PFNVKSETLOCALDIMMINGAMDPROC m_vkSetLocalDimmingAMD;
      PFNVKGETPHYSICALDEVICEFRAGMENTSHADINGRATESKHRPROC m_vkGetPhysicalDeviceFragmentShadingRatesKHR;
      PFNVKCMDSETFRAGMENTSHADINGRATEKHRPROC m_vkCmdSetFragmentShadingRateKHR;
      PFNVKGETBUFFERDEVICEADDRESSEXTPROC m_vkGetBufferDeviceAddressEXT;
      PFNVKGETPHYSICALDEVICETOOLPROPERTIESEXTPROC m_vkGetPhysicalDeviceToolPropertiesEXT;
      PFNVKGETPHYSICALDEVICECOOPERATIVEMATRIXPROPERTIESNVPROC m_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
      PFNVKGETPHYSICALDEVICESUPPORTEDFRAMEBUFFERMIXEDSAMPLESCOMBINATIONSNVPROC m_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
      PFNVKCREATEHEADLESSSURFACEEXTPROC m_vkCreateHeadlessSurfaceEXT;
      PFNVKGETBUFFERDEVICEADDRESSKHRPROC m_vkGetBufferDeviceAddressKHR;
      PFNVKGETBUFFEROPAQUECAPTUREADDRESSKHRPROC m_vkGetBufferOpaqueCaptureAddressKHR;
      PFNVKGETDEVICEMEMORYOPAQUECAPTUREADDRESSKHRPROC m_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
      PFNVKCMDSETLINESTIPPLEEXTPROC m_vkCmdSetLineStippleEXT;
      PFNVKRESETQUERYPOOLEXTPROC m_vkResetQueryPoolEXT;
      PFNVKCMDSETCULLMODEEXTPROC m_vkCmdSetCullModeEXT;
      PFNVKCMDSETFRONTFACEEXTPROC m_vkCmdSetFrontFaceEXT;
      PFNVKCMDSETPRIMITIVETOPOLOGYEXTPROC m_vkCmdSetPrimitiveTopologyEXT;
      PFNVKCMDSETVIEWPORTWITHCOUNTEXTPROC m_vkCmdSetViewportWithCountEXT;
      PFNVKCMDSETSCISSORWITHCOUNTEXTPROC m_vkCmdSetScissorWithCountEXT;
      PFNVKCMDBINDVERTEXBUFFERS2EXTPROC m_vkCmdBindVertexBuffers2EXT;
      PFNVKCMDSETDEPTHTESTENABLEEXTPROC m_vkCmdSetDepthTestEnableEXT;
      PFNVKCMDSETDEPTHWRITEENABLEEXTPROC m_vkCmdSetDepthWriteEnableEXT;
      PFNVKCMDSETDEPTHCOMPAREOPEXTPROC m_vkCmdSetDepthCompareOpEXT;
      PFNVKCMDSETDEPTHBOUNDSTESTENABLEEXTPROC m_vkCmdSetDepthBoundsTestEnableEXT;
      PFNVKCMDSETSTENCILTESTENABLEEXTPROC m_vkCmdSetStencilTestEnableEXT;
      PFNVKCMDSETSTENCILOPEXTPROC m_vkCmdSetStencilOpEXT;
      PFNVKCREATEDEFERREDOPERATIONKHRPROC m_vkCreateDeferredOperationKHR;
      PFNVKDESTROYDEFERREDOPERATIONKHRPROC m_vkDestroyDeferredOperationKHR;
      PFNVKGETDEFERREDOPERATIONMAXCONCURRENCYKHRPROC m_vkGetDeferredOperationMaxConcurrencyKHR;
      PFNVKGETDEFERREDOPERATIONRESULTKHRPROC m_vkGetDeferredOperationResultKHR;
      PFNVKDEFERREDOPERATIONJOINKHRPROC m_vkDeferredOperationJoinKHR;
      PFNVKGETPIPELINEEXECUTABLEPROPERTIESKHRPROC m_vkGetPipelineExecutablePropertiesKHR;
      PFNVKGETPIPELINEEXECUTABLESTATISTICSKHRPROC m_vkGetPipelineExecutableStatisticsKHR;
      PFNVKGETPIPELINEEXECUTABLEINTERNALREPRESENTATIONSKHRPROC m_vkGetPipelineExecutableInternalRepresentationsKHR;
      PFNVKGETGENERATEDCOMMANDSMEMORYREQUIREMENTSNVPROC m_vkGetGeneratedCommandsMemoryRequirementsNV;
      PFNVKCMDPREPROCESSGENERATEDCOMMANDSNVPROC m_vkCmdPreprocessGeneratedCommandsNV;
      PFNVKCMDEXECUTEGENERATEDCOMMANDSNVPROC m_vkCmdExecuteGeneratedCommandsNV;
      PFNVKCMDBINDPIPELINESHADERGROUPNVPROC m_vkCmdBindPipelineShaderGroupNV;
      PFNVKCREATEINDIRECTCOMMANDSLAYOUTNVPROC m_vkCreateIndirectCommandsLayoutNV;
      PFNVKDESTROYINDIRECTCOMMANDSLAYOUTNVPROC m_vkDestroyIndirectCommandsLayoutNV;
      PFNVKCREATEPRIVATEDATASLOTEXTPROC m_vkCreatePrivateDataSlotEXT;
      PFNVKDESTROYPRIVATEDATASLOTEXTPROC m_vkDestroyPrivateDataSlotEXT;
      PFNVKSETPRIVATEDATAEXTPROC m_vkSetPrivateDataEXT;
      PFNVKGETPRIVATEDATAEXTPROC m_vkGetPrivateDataEXT;
      PFNVKCMDSETEVENT2KHRPROC m_vkCmdSetEvent2KHR;
      PFNVKCMDRESETEVENT2KHRPROC m_vkCmdResetEvent2KHR;
      PFNVKCMDWAITEVENTS2KHRPROC m_vkCmdWaitEvents2KHR;
      PFNVKCMDPIPELINEBARRIER2KHRPROC m_vkCmdPipelineBarrier2KHR;
      PFNVKCMDWRITETIMESTAMP2KHRPROC m_vkCmdWriteTimestamp2KHR;
      PFNVKQUEUESUBMIT2KHRPROC m_vkQueueSubmit2KHR;
      PFNVKCMDWRITEBUFFERMARKER2AMDPROC m_vkCmdWriteBufferMarker2AMD;
      PFNVKGETQUEUECHECKPOINTDATA2NVPROC m_vkGetQueueCheckpointData2NV;
      PFNVKCMDSETFRAGMENTSHADINGRATEENUMNVPROC m_vkCmdSetFragmentShadingRateEnumNV;
      PFNVKCMDCOPYBUFFER2KHRPROC m_vkCmdCopyBuffer2KHR;
      PFNVKCMDCOPYIMAGE2KHRPROC m_vkCmdCopyImage2KHR;
      PFNVKCMDCOPYBUFFERTOIMAGE2KHRPROC m_vkCmdCopyBufferToImage2KHR;
      PFNVKCMDCOPYIMAGETOBUFFER2KHRPROC m_vkCmdCopyImageToBuffer2KHR;
      PFNVKCMDBLITIMAGE2KHRPROC m_vkCmdBlitImage2KHR;
      PFNVKCMDRESOLVEIMAGE2KHRPROC m_vkCmdResolveImage2KHR;
      PFNVKCMDSETVERTEXINPUTEXTPROC m_vkCmdSetVertexInputEXT;
      PFNVKCMDSETCOLORWRITEENABLEEXTPROC m_vkCmdSetColorWriteEnableEXT;

    #if defined(VK_USE_PLATFORM_XLIB_KHR)
      PFNVKCREATEXLIBSURFACEKHRPROC m_vkCreateXlibSurfaceKHR;
      PFNVKGETPHYSICALDEVICEXLIBPRESENTATIONSUPPORTKHRPROC m_vkGetPhysicalDeviceXlibPresentationSupportKHR;
    #endif

    #if defined(VK_USE_PLATFORM_XCB_KHR)
      PFNVKCREATEXCBSURFACEKHRPROC m_vkCreateXcbSurfaceKHR;
      PFNVKGETPHYSICALDEVICEXCBPRESENTATIONSUPPORTKHRPROC m_vkGetPhysicalDeviceXcbPresentationSupportKHR;
    #endif

    #if defined(VK_USE_PLATFORM_WAYLAND_KHR)
      PFNVKCREATEWAYLANDSURFACEKHRPROC m_vkCreateWaylandSurfaceKHR;
      PFNVKGETPHYSICALDEVICEWAYLANDPRESENTATIONSUPPORTKHRPROC m_vkGetPhysicalDeviceWaylandPresentationSupportKHR;
    #endif

    #if defined(VK_USE_PLATFORM_ANDROID_KHR)
      PFNVKCREATEANDROIDSURFACEKHRPROC m_vkCreateAndroidSurfaceKHR;
      PFNVKGETANDROIDHARDWAREBUFFERPROPERTIESANDROIDPROC m_vkGetAndroidHardwareBufferPropertiesANDROID;
      PFNVKGETMEMORYANDROIDHARDWAREBUFFERANDROIDPROC m_vkGetMemoryAndroidHardwareBufferANDROID;
    #endif

    #if defined(VK_USE_PLATFORM_WIN32_KHR)
      PFNVKCREATEWIN32SURFACEKHRPROC m_vkCreateWin32SurfaceKHR;
      PFNVKGETPHYSICALDEVICEWIN32PRESENTATIONSUPPORTKHRPROC m_vkGetPhysicalDeviceWin32PresentationSupportKHR;
      PFNVKGETMEMORYWIN32HANDLENVPROC m_vkGetMemoryWin32HandleNV;
      PFNVKGETMEMORYWIN32HANDLEKHRPROC m_vkGetMemoryWin32HandleKHR;
      PFNVKGETMEMORYWIN32HANDLEPROPERTIESKHRPROC m_vkGetMemoryWin32HandlePropertiesKHR;
      PFNVKIMPORTSEMAPHOREWIN32HANDLEKHRPROC m_vkImportSemaphoreWin32HandleKHR;
      PFNVKGETSEMAPHOREWIN32HANDLEKHRPROC m_vkGetSemaphoreWin32HandleKHR;
      PFNVKIMPORTFENCEWIN32HANDLEKHRPROC m_vkImportFenceWin32HandleKHR;
      PFNVKGETFENCEWIN32HANDLEKHRPROC m_vkGetFenceWin32HandleKHR;
      PFNVKGETPHYSICALDEVICESURFACEPRESENTMODES2EXTPROC m_vkGetPhysicalDeviceSurfacePresentModes2EXT;
      PFNVKACQUIREFULLSCREENEXCLUSIVEMODEEXTPROC m_vkAcquireFullScreenExclusiveModeEXT;
      PFNVKRELEASEFULLSCREENEXCLUSIVEMODEEXTPROC m_vkReleaseFullScreenExclusiveModeEXT;
      PFNVKGETDEVICEGROUPSURFACEPRESENTMODES2EXTPROC m_vkGetDeviceGroupSurfacePresentModes2EXT;
      PFNVKACQUIREWINRTDISPLAYNVPROC m_vkAcquireWinrtDisplayNV;
      PFNVKGETWINRTDISPLAYNVPROC m_vkGetWinrtDisplayNV;
    #endif

    #if defined(VK_ENABLE_BETA_EXTENSIONS)
      PFNVKGETPHYSICALDEVICEVIDEOCAPABILITIESKHRPROC m_vkGetPhysicalDeviceVideoCapabilitiesKHR;
      PFNVKGETPHYSICALDEVICEVIDEOFORMATPROPERTIESKHRPROC m_vkGetPhysicalDeviceVideoFormatPropertiesKHR;
      PFNVKCREATEVIDEOSESSIONKHRPROC m_vkCreateVideoSessionKHR;
      PFNVKDESTROYVIDEOSESSIONKHRPROC m_vkDestroyVideoSessionKHR;
      PFNVKGETVIDEOSESSIONMEMORYREQUIREMENTSKHRPROC m_vkGetVideoSessionMemoryRequirementsKHR;
      PFNVKBINDVIDEOSESSIONMEMORYKHRPROC m_vkBindVideoSessionMemoryKHR;
      PFNVKCREATEVIDEOSESSIONPARAMETERSKHRPROC m_vkCreateVideoSessionParametersKHR;
      PFNVKUPDATEVIDEOSESSIONPARAMETERSKHRPROC m_vkUpdateVideoSessionParametersKHR;
      PFNVKDESTROYVIDEOSESSIONPARAMETERSKHRPROC m_vkDestroyVideoSessionParametersKHR;
      PFNVKCMDBEGINVIDEOCODINGKHRPROC m_vkCmdBeginVideoCodingKHR;
      PFNVKCMDENDVIDEOCODINGKHRPROC m_vkCmdEndVideoCodingKHR;
      PFNVKCMDCONTROLVIDEOCODINGKHRPROC m_vkCmdControlVideoCodingKHR;
      PFNVKCMDDECODEVIDEOKHRPROC m_vkCmdDecodeVideoKHR;
      PFNVKCMDENCODEVIDEOKHRPROC m_vkCmdEncodeVideoKHR;
    #endif

    #if defined(VK_USE_PLATFORM_GGP)
      PFNVKCREATESTREAMDESCRIPTORSURFACEGGPPROC m_vkCreateStreamDescriptorSurfaceGGP;
    #endif

    #if defined(VK_USE_PLATFORM_VI_NN)
      PFNVKCREATEVISURFACENNPROC m_vkCreateViSurfaceNN;
    #endif

    #if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
      PFNVKACQUIREXLIBDISPLAYEXTPROC m_vkAcquireXlibDisplayEXT;
      PFNVKGETRANDROUTPUTDISPLAYEXTPROC m_vkGetRandROutputDisplayEXT;
    #endif

    #if defined(VK_USE_PLATFORM_IOS_MVK)
      PFNVKCREATEIOSSURFACEMVKPROC m_vkCreateIOSSurfaceMVK;
    #endif

    #if defined(VK_USE_PLATFORM_MACOS_MVK)
      PFNVKCREATEMACOSSURFACEMVKPROC m_vkCreateMacOSSurfaceMVK;
    #endif

    #if defined(VK_USE_PLATFORM_FUCHSIA)
      PFNVKCREATEIMAGEPIPESURFACEFUCHSIAPROC m_vkCreateImagePipeSurfaceFUCHSIA;
      PFNVKGETMEMORYZIRCONHANDLEFUCHSIAPROC m_vkGetMemoryZirconHandleFUCHSIA;
      PFNVKGETMEMORYZIRCONHANDLEPROPERTIESFUCHSIAPROC m_vkGetMemoryZirconHandlePropertiesFUCHSIA;
      PFNVKIMPORTSEMAPHOREZIRCONHANDLEFUCHSIAPROC m_vkImportSemaphoreZirconHandleFUCHSIA;
      PFNVKGETSEMAPHOREZIRCONHANDLEFUCHSIAPROC m_vkGetSemaphoreZirconHandleFUCHSIA;
    #endif

    #if defined(VK_USE_PLATFORM_METAL_EXT)
      PFNVKCREATEMETALSURFACEEXTPROC m_vkCreateMetalSurfaceEXT;
    #endif

    #if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
      PFNVKCREATEDIRECTFBSURFACEEXTPROC m_vkCreateDirectFBSurfaceEXT;
      PFNVKGETPHYSICALDEVICEDIRECTFBPRESENTATIONSUPPORTEXTPROC m_vkGetPhysicalDeviceDirectFBPresentationSupportEXT;
    #endif

    #if defined(VK_USE_PLATFORM_SCREEN_QNX)
      PFNVKCREATESCREENSURFACEQNXPROC m_vkCreateScreenSurfaceQNX;
      PFNVKGETPHYSICALDEVICESCREENPRESENTATIONSUPPORTQNXPROC m_vkGetPhysicalDeviceScreenPresentationSupportQNX;
    #endif
    };

    static Context* s_vulkanContext = nullptr;

  }  // namespace vulkan
}  // namespace glew

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkEnumerateInstanceVersion (uint32_t* pApiVersion);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBindBufferMemory2 (VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBindImageMemory2 (VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetDeviceGroupPeerMemoryFeatures (VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDeviceMask (VkCommandBuffer commandBuffer, uint32_t deviceMask);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDispatchBase (VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkEnumeratePhysicalDeviceGroups (VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetImageMemoryRequirements2 (VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetBufferMemoryRequirements2 (VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetImageSparseMemoryRequirements2 (VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceFeatures2 (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceProperties2 (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceFormatProperties2 (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceImageFormatProperties2 (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceQueueFamilyProperties2 (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceMemoryProperties2 (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSparseImageFormatProperties2 (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkTrimCommandPool (VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetDeviceQueue2 (VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateSamplerYcbcrConversion (VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroySamplerYcbcrConversion (VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDescriptorUpdateTemplate (VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyDescriptorUpdateTemplate (VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkUpdateDescriptorSetWithTemplate (VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalBufferProperties (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalFenceProperties (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalSemaphoreProperties (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetDescriptorSetLayoutSupport (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndirectCount (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndexedIndirectCount (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateRenderPass2 (VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginRenderPass2 (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdNextSubpass2 (VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndRenderPass2 (VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkResetQueryPool (VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSemaphoreCounterValue (VkDevice device, VkSemaphore semaphore, uint64_t* pValue);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkWaitSemaphores (VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkSignalSemaphore (VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
GLEW_API VkDeviceAddress GLEW_APIENTRY _glew_vulkan_vkGetBufferDeviceAddress (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
GLEW_API uint64_t GLEW_APIENTRY _glew_vulkan_vkGetBufferOpaqueCaptureAddress (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
GLEW_API uint64_t GLEW_APIENTRY _glew_vulkan_vkGetDeviceMemoryOpaqueCaptureAddress (VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroySurfaceKHR (VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfaceSupportKHR (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilitiesKHR (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfaceFormatsKHR (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfacePresentModesKHR (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateSwapchainKHR (VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroySwapchainKHR (VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSwapchainImagesKHR (VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquireNextImageKHR (VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkQueuePresentKHR (VkQueue queue, const VkPresentInfoKHR* pPresentInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDeviceGroupPresentCapabilitiesKHR (VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDeviceGroupSurfacePresentModesKHR (VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDevicePresentRectanglesKHR (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquireNextImage2KHR (VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceDisplayPropertiesKHR (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceDisplayPlanePropertiesKHR (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDisplayPlaneSupportedDisplaysKHR (VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDisplayModePropertiesKHR (VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDisplayModeKHR (VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDisplayPlaneCapabilitiesKHR (VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDisplayPlaneSurfaceKHR (VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateSharedSwapchainsKHR (VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDebugReportCallbackEXT (VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyDebugReportCallbackEXT (VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDebugReportMessageEXT (VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkDebugMarkerSetObjectTagEXT (VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkDebugMarkerSetObjectNameEXT (VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDebugMarkerBeginEXT (VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDebugMarkerEndEXT (VkCommandBuffer commandBuffer);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDebugMarkerInsertEXT (VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBindTransformFeedbackBuffersEXT (VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginTransformFeedbackEXT (VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndTransformFeedbackEXT (VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginQueryIndexedEXT (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndQueryIndexedEXT (VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndirectByteCountEXT (VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride);
GLEW_API uint32_t GLEW_APIENTRY _glew_vulkan_vkGetImageViewHandleNVX (VkDevice device, const VkImageViewHandleInfoNVX* pInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetImageViewAddressNVX (VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndirectCountAMD (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndexedIndirectCountAMD (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetShaderInfoAMD (VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalImageFormatPropertiesNV (VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceFeatures2KHR (VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceProperties2KHR (VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceFormatProperties2KHR (VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceImageFormatProperties2KHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceQueueFamilyProperties2KHR (VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceMemoryProperties2KHR (VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSparseImageFormatProperties2KHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetDeviceGroupPeerMemoryFeaturesKHR (VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDeviceMaskKHR (VkCommandBuffer commandBuffer, uint32_t deviceMask);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDispatchBaseKHR (VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkTrimCommandPoolKHR (VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkEnumeratePhysicalDeviceGroupsKHR (VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalBufferPropertiesKHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryFdKHR (VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryFdPropertiesKHR (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkImportSemaphoreFdKHR (VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSemaphoreFdKHR (VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdPushDescriptorSetKHR (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdPushDescriptorSetWithTemplateKHR (VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginConditionalRenderingEXT (VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndConditionalRenderingEXT (VkCommandBuffer commandBuffer);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDescriptorUpdateTemplateKHR (VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyDescriptorUpdateTemplateKHR (VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkUpdateDescriptorSetWithTemplateKHR (VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetViewportWScalingNV (VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkReleaseDisplayEXT (VkPhysicalDevice physicalDevice, VkDisplayKHR display);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilities2EXT (VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkDisplayPowerControlEXT (VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkRegisterDeviceEventEXT (VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkRegisterDisplayEventEXT (VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSwapchainCounterEXT (VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetRefreshCycleDurationGOOGLE (VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPastPresentationTimingGOOGLE (VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDiscardRectangleEXT (VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkSetHdrMetadataEXT (VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateRenderPass2KHR (VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginRenderPass2KHR (VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdNextSubpass2KHR (VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndRenderPass2KHR (VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSwapchainStatusKHR (VkDevice device, VkSwapchainKHR swapchain);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceExternalFencePropertiesKHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkImportFenceFdKHR (VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetFenceFdKHR (VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR (VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquireProfilingLockKHR (VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkReleaseProfilingLockKHR (VkDevice device);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilities2KHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfaceFormats2KHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceDisplayProperties2KHR (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceDisplayPlaneProperties2KHR (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDisplayModeProperties2KHR (VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDisplayPlaneCapabilities2KHR (VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkSetDebugUtilsObjectNameEXT (VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkSetDebugUtilsObjectTagEXT (VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkQueueBeginDebugUtilsLabelEXT (VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkQueueEndDebugUtilsLabelEXT (VkQueue queue);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkQueueInsertDebugUtilsLabelEXT (VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginDebugUtilsLabelEXT (VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndDebugUtilsLabelEXT (VkCommandBuffer commandBuffer);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdInsertDebugUtilsLabelEXT (VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDebugUtilsMessengerEXT (VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyDebugUtilsMessengerEXT (VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkSubmitDebugUtilsMessageEXT (VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetSampleLocationsEXT (VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceMultisamplePropertiesEXT (VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetImageMemoryRequirements2KHR (VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetBufferMemoryRequirements2KHR (VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetImageSparseMemoryRequirements2KHR (VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateAccelerationStructureKHR (VkDevice device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureKHR* pAccelerationStructure);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyAccelerationStructureKHR (VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBuildAccelerationStructuresKHR (VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBuildAccelerationStructuresIndirectKHR (VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBuildAccelerationStructuresKHR (VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCopyAccelerationStructureKHR (VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCopyAccelerationStructureToMemoryKHR (VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCopyMemoryToAccelerationStructureKHR (VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkWriteAccelerationStructuresPropertiesKHR (VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, size_t dataSize, void* pData, size_t stride);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyAccelerationStructureKHR (VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyAccelerationStructureToMemoryKHR (VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyMemoryToAccelerationStructureKHR (VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo);
GLEW_API VkDeviceAddress GLEW_APIENTRY _glew_vulkan_vkGetAccelerationStructureDeviceAddressKHR (VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdWriteAccelerationStructuresPropertiesKHR (VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetDeviceAccelerationStructureCompatibilityKHR (VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetAccelerationStructureBuildSizesKHR (VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo, const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdTraceRaysKHR (VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateRayTracingPipelinesKHR (VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetRayTracingShaderGroupHandlesKHR (VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR (VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdTraceRaysIndirectKHR (VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress);
GLEW_API VkDeviceSize GLEW_APIENTRY _glew_vulkan_vkGetRayTracingShaderGroupStackSizeKHR (VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetRayTracingPipelineStackSizeKHR (VkCommandBuffer commandBuffer, uint32_t pipelineStackSize);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateSamplerYcbcrConversionKHR (VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroySamplerYcbcrConversionKHR (VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBindBufferMemory2KHR (VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBindImageMemory2KHR (VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetImageDrmFormatModifierPropertiesEXT (VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateValidationCacheEXT (VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyValidationCacheEXT (VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkMergeValidationCachesEXT (VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetValidationCacheDataEXT (VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBindShadingRateImageNV (VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetViewportShadingRatePaletteNV (VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetCoarseSampleOrderNV (VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateAccelerationStructureNV (VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyAccelerationStructureNV (VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetAccelerationStructureMemoryRequirementsNV (VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBindAccelerationStructureMemoryNV (VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBuildAccelerationStructureNV (VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyAccelerationStructureNV (VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdTraceRaysNV (VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateRayTracingPipelinesNV (VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetRayTracingShaderGroupHandlesNV (VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetAccelerationStructureHandleNV (VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdWriteAccelerationStructuresPropertiesNV (VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCompileDeferredNV (VkDevice device, VkPipeline pipeline, uint32_t shader);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetDescriptorSetLayoutSupportKHR (VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndirectCountKHR (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawIndexedIndirectCountKHR (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryHostPointerPropertiesEXT (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdWriteBufferMarkerAMD (VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT (VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetCalibratedTimestampsEXT (VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawMeshTasksNV (VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawMeshTasksIndirectNV (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDrawMeshTasksIndirectCountNV (VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetExclusiveScissorNV (VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetCheckpointNV (VkCommandBuffer commandBuffer, const void* pCheckpointMarker);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetQueueCheckpointDataNV (VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSemaphoreCounterValueKHR (VkDevice device, VkSemaphore semaphore, uint64_t* pValue);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkWaitSemaphoresKHR (VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkSignalSemaphoreKHR (VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkInitializePerformanceApiINTEL (VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkUninitializePerformanceApiINTEL (VkDevice device);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCmdSetPerformanceMarkerINTEL (VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCmdSetPerformanceStreamMarkerINTEL (VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCmdSetPerformanceOverrideINTEL (VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquirePerformanceConfigurationINTEL (VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkReleasePerformanceConfigurationINTEL (VkDevice device, VkPerformanceConfigurationINTEL configuration);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkQueueSetPerformanceConfigurationINTEL (VkQueue queue, VkPerformanceConfigurationINTEL configuration);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPerformanceParameterINTEL (VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkSetLocalDimmingAMD (VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceFragmentShadingRatesKHR (VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetFragmentShadingRateKHR (VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
GLEW_API VkDeviceAddress GLEW_APIENTRY _glew_vulkan_vkGetBufferDeviceAddressEXT (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceToolPropertiesEXT (VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV (VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV (VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateHeadlessSurfaceEXT (VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkDeviceAddress GLEW_APIENTRY _glew_vulkan_vkGetBufferDeviceAddressKHR (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
GLEW_API uint64_t GLEW_APIENTRY _glew_vulkan_vkGetBufferOpaqueCaptureAddressKHR (VkDevice device, const VkBufferDeviceAddressInfo* pInfo);
GLEW_API uint64_t GLEW_APIENTRY _glew_vulkan_vkGetDeviceMemoryOpaqueCaptureAddressKHR (VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetLineStippleEXT (VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkResetQueryPoolEXT (VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetCullModeEXT (VkCommandBuffer commandBuffer, VkCullModeFlags cullMode);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetFrontFaceEXT (VkCommandBuffer commandBuffer, VkFrontFace frontFace);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetPrimitiveTopologyEXT (VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetViewportWithCountEXT (VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetScissorWithCountEXT (VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBindVertexBuffers2EXT (VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDepthTestEnableEXT (VkCommandBuffer commandBuffer, VkBool32 depthTestEnable);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDepthWriteEnableEXT (VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDepthCompareOpEXT (VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetDepthBoundsTestEnableEXT (VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetStencilTestEnableEXT (VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetStencilOpEXT (VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDeferredOperationKHR (VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyDeferredOperationKHR (VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator);
GLEW_API uint32_t GLEW_APIENTRY _glew_vulkan_vkGetDeferredOperationMaxConcurrencyKHR (VkDevice device, VkDeferredOperationKHR operation);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDeferredOperationResultKHR (VkDevice device, VkDeferredOperationKHR operation);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkDeferredOperationJoinKHR (VkDevice device, VkDeferredOperationKHR operation);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPipelineExecutablePropertiesKHR (VkDevice device, const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPipelineExecutableStatisticsKHR (VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPipelineExecutableInternalRepresentationsKHR (VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetGeneratedCommandsMemoryRequirementsNV (VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdPreprocessGeneratedCommandsNV (VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdExecuteGeneratedCommandsNV (VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBindPipelineShaderGroupNV (VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateIndirectCommandsLayoutNV (VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyIndirectCommandsLayoutNV (VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreatePrivateDataSlotEXT (VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyPrivateDataSlotEXT (VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkSetPrivateDataEXT (VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetPrivateDataEXT (VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetEvent2KHR (VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfoKHR* pDependencyInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdResetEvent2KHR (VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2KHR stageMask);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdWaitEvents2KHR (VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfoKHR* pDependencyInfos);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdPipelineBarrier2KHR (VkCommandBuffer commandBuffer, const VkDependencyInfoKHR* pDependencyInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdWriteTimestamp2KHR (VkCommandBuffer commandBuffer, VkPipelineStageFlags2KHR stage, VkQueryPool queryPool, uint32_t query);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkQueueSubmit2KHR (VkQueue queue, uint32_t submitCount, const VkSubmitInfo2KHR* pSubmits, VkFence fence);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdWriteBufferMarker2AMD (VkCommandBuffer commandBuffer, VkPipelineStageFlags2KHR stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkGetQueueCheckpointData2NV (VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetFragmentShadingRateEnumNV (VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyBuffer2KHR (VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyImage2KHR (VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyBufferToImage2KHR (VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdCopyImageToBuffer2KHR (VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBlitImage2KHR (VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdResolveImage2KHR (VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetVertexInputEXT (VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdSetColorWriteEnableEXT (VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables);

#if defined(VK_USE_PLATFORM_XLIB_KHR)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateXlibSurfaceKHR (VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkBool32 GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceXlibPresentationSupportKHR (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID);
#endif

#if defined(VK_USE_PLATFORM_XCB_KHR)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateXcbSurfaceKHR (VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkBool32 GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceXcbPresentationSupportKHR (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id);
#endif

#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateWaylandSurfaceKHR (VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkBool32 GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceWaylandPresentationSupportKHR (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display);
#endif

#if defined(VK_USE_PLATFORM_ANDROID_KHR)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateAndroidSurfaceKHR (VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetAndroidHardwareBufferPropertiesANDROID (VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryAndroidHardwareBufferANDROID (VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer);
#endif

#if defined(VK_USE_PLATFORM_WIN32_KHR)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateWin32SurfaceKHR (VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkBool32 GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceWin32PresentationSupportKHR (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryWin32HandleNV (VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryWin32HandleKHR (VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryWin32HandlePropertiesKHR (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkImportSemaphoreWin32HandleKHR (VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSemaphoreWin32HandleKHR (VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkImportFenceWin32HandleKHR (VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetFenceWin32HandleKHR (VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceSurfacePresentModes2EXT (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquireFullScreenExclusiveModeEXT (VkDevice device, VkSwapchainKHR swapchain);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkReleaseFullScreenExclusiveModeEXT (VkDevice device, VkSwapchainKHR swapchain);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetDeviceGroupSurfacePresentModes2EXT (VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquireWinrtDisplayNV (VkPhysicalDevice physicalDevice, VkDisplayKHR display);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetWinrtDisplayNV (VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay);
#endif

#if defined(VK_ENABLE_BETA_EXTENSIONS)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceVideoCapabilitiesKHR (VkPhysicalDevice physicalDevice, const VkVideoProfileKHR* pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceVideoFormatPropertiesKHR (VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateVideoSessionKHR (VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyVideoSessionKHR (VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetVideoSessionMemoryRequirementsKHR (VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pVideoSessionMemoryRequirementsCount, VkVideoGetMemoryPropertiesKHR* pVideoSessionMemoryRequirements);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkBindVideoSessionMemoryKHR (VkDevice device, VkVideoSessionKHR videoSession, uint32_t videoSessionBindMemoryCount, const VkVideoBindMemoryKHR* pVideoSessionBindMemories);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateVideoSessionParametersKHR (VkDevice device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR* pVideoSessionParameters);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkUpdateVideoSessionParametersKHR (VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkDestroyVideoSessionParametersKHR (VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks* pAllocator);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdBeginVideoCodingKHR (VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEndVideoCodingKHR (VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdControlVideoCodingKHR (VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdDecodeVideoKHR (VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pFrameInfo);
GLEW_API void GLEW_APIENTRY _glew_vulkan_vkCmdEncodeVideoKHR (VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo);
#endif

#if defined(VK_USE_PLATFORM_GGP)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateStreamDescriptorSurfaceGGP (VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_VI_NN)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateViSurfaceNN (VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkAcquireXlibDisplayEXT (VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetRandROutputDisplayEXT (VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay);
#endif

#if defined(VK_USE_PLATFORM_IOS_MVK)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateIOSSurfaceMVK (VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_MACOS_MVK)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateMacOSSurfaceMVK (VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_FUCHSIA)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateImagePipeSurfaceFUCHSIA (VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryZirconHandleFUCHSIA (VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetMemoryZirconHandlePropertiesFUCHSIA (VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkImportSemaphoreZirconHandleFUCHSIA (VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo);
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkGetSemaphoreZirconHandleFUCHSIA (VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle);
#endif

#if defined(VK_USE_PLATFORM_METAL_EXT)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateMetalSurfaceEXT (VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
#endif

#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateDirectFBSurfaceEXT (VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkBool32 GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceDirectFBPresentationSupportEXT (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb);
#endif

#if defined(VK_USE_PLATFORM_SCREEN_QNX)
GLEW_API VkResult GLEW_APIENTRY _glew_vulkan_vkCreateScreenSurfaceQNX (VkInstance instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface);
GLEW_API VkBool32 GLEW_APIENTRY _glew_vulkan_vkGetPhysicalDeviceScreenPresentationSupportQNX (VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window);
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define vkEnumerateInstanceVersion _glew_vulkan_vkEnumerateInstanceVersion
#define vkBindBufferMemory2 _glew_vulkan_vkBindBufferMemory2
#define vkBindImageMemory2 _glew_vulkan_vkBindImageMemory2
#define vkGetDeviceGroupPeerMemoryFeatures _glew_vulkan_vkGetDeviceGroupPeerMemoryFeatures
#define vkCmdSetDeviceMask _glew_vulkan_vkCmdSetDeviceMask
#define vkCmdDispatchBase _glew_vulkan_vkCmdDispatchBase
#define vkEnumeratePhysicalDeviceGroups _glew_vulkan_vkEnumeratePhysicalDeviceGroups
#define vkGetImageMemoryRequirements2 _glew_vulkan_vkGetImageMemoryRequirements2
#define vkGetBufferMemoryRequirements2 _glew_vulkan_vkGetBufferMemoryRequirements2
#define vkGetImageSparseMemoryRequirements2 _glew_vulkan_vkGetImageSparseMemoryRequirements2
#define vkGetPhysicalDeviceFeatures2 _glew_vulkan_vkGetPhysicalDeviceFeatures2
#define vkGetPhysicalDeviceProperties2 _glew_vulkan_vkGetPhysicalDeviceProperties2
#define vkGetPhysicalDeviceFormatProperties2 _glew_vulkan_vkGetPhysicalDeviceFormatProperties2
#define vkGetPhysicalDeviceImageFormatProperties2 _glew_vulkan_vkGetPhysicalDeviceImageFormatProperties2
#define vkGetPhysicalDeviceQueueFamilyProperties2 _glew_vulkan_vkGetPhysicalDeviceQueueFamilyProperties2
#define vkGetPhysicalDeviceMemoryProperties2 _glew_vulkan_vkGetPhysicalDeviceMemoryProperties2
#define vkGetPhysicalDeviceSparseImageFormatProperties2 _glew_vulkan_vkGetPhysicalDeviceSparseImageFormatProperties2
#define vkTrimCommandPool _glew_vulkan_vkTrimCommandPool
#define vkGetDeviceQueue2 _glew_vulkan_vkGetDeviceQueue2
#define vkCreateSamplerYcbcrConversion _glew_vulkan_vkCreateSamplerYcbcrConversion
#define vkDestroySamplerYcbcrConversion _glew_vulkan_vkDestroySamplerYcbcrConversion
#define vkCreateDescriptorUpdateTemplate _glew_vulkan_vkCreateDescriptorUpdateTemplate
#define vkDestroyDescriptorUpdateTemplate _glew_vulkan_vkDestroyDescriptorUpdateTemplate
#define vkUpdateDescriptorSetWithTemplate _glew_vulkan_vkUpdateDescriptorSetWithTemplate
#define vkGetPhysicalDeviceExternalBufferProperties _glew_vulkan_vkGetPhysicalDeviceExternalBufferProperties
#define vkGetPhysicalDeviceExternalFenceProperties _glew_vulkan_vkGetPhysicalDeviceExternalFenceProperties
#define vkGetPhysicalDeviceExternalSemaphoreProperties _glew_vulkan_vkGetPhysicalDeviceExternalSemaphoreProperties
#define vkGetDescriptorSetLayoutSupport _glew_vulkan_vkGetDescriptorSetLayoutSupport
#define vkCmdDrawIndirectCount _glew_vulkan_vkCmdDrawIndirectCount
#define vkCmdDrawIndexedIndirectCount _glew_vulkan_vkCmdDrawIndexedIndirectCount
#define vkCreateRenderPass2 _glew_vulkan_vkCreateRenderPass2
#define vkCmdBeginRenderPass2 _glew_vulkan_vkCmdBeginRenderPass2
#define vkCmdNextSubpass2 _glew_vulkan_vkCmdNextSubpass2
#define vkCmdEndRenderPass2 _glew_vulkan_vkCmdEndRenderPass2
#define vkResetQueryPool _glew_vulkan_vkResetQueryPool
#define vkGetSemaphoreCounterValue _glew_vulkan_vkGetSemaphoreCounterValue
#define vkWaitSemaphores _glew_vulkan_vkWaitSemaphores
#define vkSignalSemaphore _glew_vulkan_vkSignalSemaphore
#define vkGetBufferDeviceAddress _glew_vulkan_vkGetBufferDeviceAddress
#define vkGetBufferOpaqueCaptureAddress _glew_vulkan_vkGetBufferOpaqueCaptureAddress
#define vkGetDeviceMemoryOpaqueCaptureAddress _glew_vulkan_vkGetDeviceMemoryOpaqueCaptureAddress
#define vkDestroySurfaceKHR _glew_vulkan_vkDestroySurfaceKHR
#define vkGetPhysicalDeviceSurfaceSupportKHR _glew_vulkan_vkGetPhysicalDeviceSurfaceSupportKHR
#define vkGetPhysicalDeviceSurfaceCapabilitiesKHR _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
#define vkGetPhysicalDeviceSurfaceFormatsKHR _glew_vulkan_vkGetPhysicalDeviceSurfaceFormatsKHR
#define vkGetPhysicalDeviceSurfacePresentModesKHR _glew_vulkan_vkGetPhysicalDeviceSurfacePresentModesKHR
#define vkCreateSwapchainKHR _glew_vulkan_vkCreateSwapchainKHR
#define vkDestroySwapchainKHR _glew_vulkan_vkDestroySwapchainKHR
#define vkGetSwapchainImagesKHR _glew_vulkan_vkGetSwapchainImagesKHR
#define vkAcquireNextImageKHR _glew_vulkan_vkAcquireNextImageKHR
#define vkQueuePresentKHR _glew_vulkan_vkQueuePresentKHR
#define vkGetDeviceGroupPresentCapabilitiesKHR _glew_vulkan_vkGetDeviceGroupPresentCapabilitiesKHR
#define vkGetDeviceGroupSurfacePresentModesKHR _glew_vulkan_vkGetDeviceGroupSurfacePresentModesKHR
#define vkGetPhysicalDevicePresentRectanglesKHR _glew_vulkan_vkGetPhysicalDevicePresentRectanglesKHR
#define vkAcquireNextImage2KHR _glew_vulkan_vkAcquireNextImage2KHR
#define vkGetPhysicalDeviceDisplayPropertiesKHR _glew_vulkan_vkGetPhysicalDeviceDisplayPropertiesKHR
#define vkGetPhysicalDeviceDisplayPlanePropertiesKHR _glew_vulkan_vkGetPhysicalDeviceDisplayPlanePropertiesKHR
#define vkGetDisplayPlaneSupportedDisplaysKHR _glew_vulkan_vkGetDisplayPlaneSupportedDisplaysKHR
#define vkGetDisplayModePropertiesKHR _glew_vulkan_vkGetDisplayModePropertiesKHR
#define vkCreateDisplayModeKHR _glew_vulkan_vkCreateDisplayModeKHR
#define vkGetDisplayPlaneCapabilitiesKHR _glew_vulkan_vkGetDisplayPlaneCapabilitiesKHR
#define vkCreateDisplayPlaneSurfaceKHR _glew_vulkan_vkCreateDisplayPlaneSurfaceKHR
#define vkCreateSharedSwapchainsKHR _glew_vulkan_vkCreateSharedSwapchainsKHR
#define vkCreateDebugReportCallbackEXT _glew_vulkan_vkCreateDebugReportCallbackEXT
#define vkDestroyDebugReportCallbackEXT _glew_vulkan_vkDestroyDebugReportCallbackEXT
#define vkDebugReportMessageEXT _glew_vulkan_vkDebugReportMessageEXT
#define vkDebugMarkerSetObjectTagEXT _glew_vulkan_vkDebugMarkerSetObjectTagEXT
#define vkDebugMarkerSetObjectNameEXT _glew_vulkan_vkDebugMarkerSetObjectNameEXT
#define vkCmdDebugMarkerBeginEXT _glew_vulkan_vkCmdDebugMarkerBeginEXT
#define vkCmdDebugMarkerEndEXT _glew_vulkan_vkCmdDebugMarkerEndEXT
#define vkCmdDebugMarkerInsertEXT _glew_vulkan_vkCmdDebugMarkerInsertEXT
#define vkCmdBindTransformFeedbackBuffersEXT _glew_vulkan_vkCmdBindTransformFeedbackBuffersEXT
#define vkCmdBeginTransformFeedbackEXT _glew_vulkan_vkCmdBeginTransformFeedbackEXT
#define vkCmdEndTransformFeedbackEXT _glew_vulkan_vkCmdEndTransformFeedbackEXT
#define vkCmdBeginQueryIndexedEXT _glew_vulkan_vkCmdBeginQueryIndexedEXT
#define vkCmdEndQueryIndexedEXT _glew_vulkan_vkCmdEndQueryIndexedEXT
#define vkCmdDrawIndirectByteCountEXT _glew_vulkan_vkCmdDrawIndirectByteCountEXT
#define vkGetImageViewHandleNVX _glew_vulkan_vkGetImageViewHandleNVX
#define vkGetImageViewAddressNVX _glew_vulkan_vkGetImageViewAddressNVX
#define vkCmdDrawIndirectCountAMD _glew_vulkan_vkCmdDrawIndirectCountAMD
#define vkCmdDrawIndexedIndirectCountAMD _glew_vulkan_vkCmdDrawIndexedIndirectCountAMD
#define vkGetShaderInfoAMD _glew_vulkan_vkGetShaderInfoAMD
#define vkGetPhysicalDeviceExternalImageFormatPropertiesNV _glew_vulkan_vkGetPhysicalDeviceExternalImageFormatPropertiesNV
#define vkGetPhysicalDeviceFeatures2KHR _glew_vulkan_vkGetPhysicalDeviceFeatures2KHR
#define vkGetPhysicalDeviceProperties2KHR _glew_vulkan_vkGetPhysicalDeviceProperties2KHR
#define vkGetPhysicalDeviceFormatProperties2KHR _glew_vulkan_vkGetPhysicalDeviceFormatProperties2KHR
#define vkGetPhysicalDeviceImageFormatProperties2KHR _glew_vulkan_vkGetPhysicalDeviceImageFormatProperties2KHR
#define vkGetPhysicalDeviceQueueFamilyProperties2KHR _glew_vulkan_vkGetPhysicalDeviceQueueFamilyProperties2KHR
#define vkGetPhysicalDeviceMemoryProperties2KHR _glew_vulkan_vkGetPhysicalDeviceMemoryProperties2KHR
#define vkGetPhysicalDeviceSparseImageFormatProperties2KHR _glew_vulkan_vkGetPhysicalDeviceSparseImageFormatProperties2KHR
#define vkGetDeviceGroupPeerMemoryFeaturesKHR _glew_vulkan_vkGetDeviceGroupPeerMemoryFeaturesKHR
#define vkCmdSetDeviceMaskKHR _glew_vulkan_vkCmdSetDeviceMaskKHR
#define vkCmdDispatchBaseKHR _glew_vulkan_vkCmdDispatchBaseKHR
#define vkTrimCommandPoolKHR _glew_vulkan_vkTrimCommandPoolKHR
#define vkEnumeratePhysicalDeviceGroupsKHR _glew_vulkan_vkEnumeratePhysicalDeviceGroupsKHR
#define vkGetPhysicalDeviceExternalBufferPropertiesKHR _glew_vulkan_vkGetPhysicalDeviceExternalBufferPropertiesKHR
#define vkGetMemoryFdKHR _glew_vulkan_vkGetMemoryFdKHR
#define vkGetMemoryFdPropertiesKHR _glew_vulkan_vkGetMemoryFdPropertiesKHR
#define vkGetPhysicalDeviceExternalSemaphorePropertiesKHR _glew_vulkan_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
#define vkImportSemaphoreFdKHR _glew_vulkan_vkImportSemaphoreFdKHR
#define vkGetSemaphoreFdKHR _glew_vulkan_vkGetSemaphoreFdKHR
#define vkCmdPushDescriptorSetKHR _glew_vulkan_vkCmdPushDescriptorSetKHR
#define vkCmdPushDescriptorSetWithTemplateKHR _glew_vulkan_vkCmdPushDescriptorSetWithTemplateKHR
#define vkCmdBeginConditionalRenderingEXT _glew_vulkan_vkCmdBeginConditionalRenderingEXT
#define vkCmdEndConditionalRenderingEXT _glew_vulkan_vkCmdEndConditionalRenderingEXT
#define vkCreateDescriptorUpdateTemplateKHR _glew_vulkan_vkCreateDescriptorUpdateTemplateKHR
#define vkDestroyDescriptorUpdateTemplateKHR _glew_vulkan_vkDestroyDescriptorUpdateTemplateKHR
#define vkUpdateDescriptorSetWithTemplateKHR _glew_vulkan_vkUpdateDescriptorSetWithTemplateKHR
#define vkCmdSetViewportWScalingNV _glew_vulkan_vkCmdSetViewportWScalingNV
#define vkReleaseDisplayEXT _glew_vulkan_vkReleaseDisplayEXT
#define vkGetPhysicalDeviceSurfaceCapabilities2EXT _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilities2EXT
#define vkDisplayPowerControlEXT _glew_vulkan_vkDisplayPowerControlEXT
#define vkRegisterDeviceEventEXT _glew_vulkan_vkRegisterDeviceEventEXT
#define vkRegisterDisplayEventEXT _glew_vulkan_vkRegisterDisplayEventEXT
#define vkGetSwapchainCounterEXT _glew_vulkan_vkGetSwapchainCounterEXT
#define vkGetRefreshCycleDurationGOOGLE _glew_vulkan_vkGetRefreshCycleDurationGOOGLE
#define vkGetPastPresentationTimingGOOGLE _glew_vulkan_vkGetPastPresentationTimingGOOGLE
#define vkCmdSetDiscardRectangleEXT _glew_vulkan_vkCmdSetDiscardRectangleEXT
#define vkSetHdrMetadataEXT _glew_vulkan_vkSetHdrMetadataEXT
#define vkCreateRenderPass2KHR _glew_vulkan_vkCreateRenderPass2KHR
#define vkCmdBeginRenderPass2KHR _glew_vulkan_vkCmdBeginRenderPass2KHR
#define vkCmdNextSubpass2KHR _glew_vulkan_vkCmdNextSubpass2KHR
#define vkCmdEndRenderPass2KHR _glew_vulkan_vkCmdEndRenderPass2KHR
#define vkGetSwapchainStatusKHR _glew_vulkan_vkGetSwapchainStatusKHR
#define vkGetPhysicalDeviceExternalFencePropertiesKHR _glew_vulkan_vkGetPhysicalDeviceExternalFencePropertiesKHR
#define vkImportFenceFdKHR _glew_vulkan_vkImportFenceFdKHR
#define vkGetFenceFdKHR _glew_vulkan_vkGetFenceFdKHR
#define vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR _glew_vulkan_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
#define vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR _glew_vulkan_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
#define vkAcquireProfilingLockKHR _glew_vulkan_vkAcquireProfilingLockKHR
#define vkReleaseProfilingLockKHR _glew_vulkan_vkReleaseProfilingLockKHR
#define vkGetPhysicalDeviceSurfaceCapabilities2KHR _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilities2KHR
#define vkGetPhysicalDeviceSurfaceFormats2KHR _glew_vulkan_vkGetPhysicalDeviceSurfaceFormats2KHR
#define vkGetPhysicalDeviceDisplayProperties2KHR _glew_vulkan_vkGetPhysicalDeviceDisplayProperties2KHR
#define vkGetPhysicalDeviceDisplayPlaneProperties2KHR _glew_vulkan_vkGetPhysicalDeviceDisplayPlaneProperties2KHR
#define vkGetDisplayModeProperties2KHR _glew_vulkan_vkGetDisplayModeProperties2KHR
#define vkGetDisplayPlaneCapabilities2KHR _glew_vulkan_vkGetDisplayPlaneCapabilities2KHR
#define vkSetDebugUtilsObjectNameEXT _glew_vulkan_vkSetDebugUtilsObjectNameEXT
#define vkSetDebugUtilsObjectTagEXT _glew_vulkan_vkSetDebugUtilsObjectTagEXT
#define vkQueueBeginDebugUtilsLabelEXT _glew_vulkan_vkQueueBeginDebugUtilsLabelEXT
#define vkQueueEndDebugUtilsLabelEXT _glew_vulkan_vkQueueEndDebugUtilsLabelEXT
#define vkQueueInsertDebugUtilsLabelEXT _glew_vulkan_vkQueueInsertDebugUtilsLabelEXT
#define vkCmdBeginDebugUtilsLabelEXT _glew_vulkan_vkCmdBeginDebugUtilsLabelEXT
#define vkCmdEndDebugUtilsLabelEXT _glew_vulkan_vkCmdEndDebugUtilsLabelEXT
#define vkCmdInsertDebugUtilsLabelEXT _glew_vulkan_vkCmdInsertDebugUtilsLabelEXT
#define vkCreateDebugUtilsMessengerEXT _glew_vulkan_vkCreateDebugUtilsMessengerEXT
#define vkDestroyDebugUtilsMessengerEXT _glew_vulkan_vkDestroyDebugUtilsMessengerEXT
#define vkSubmitDebugUtilsMessageEXT _glew_vulkan_vkSubmitDebugUtilsMessageEXT
#define vkCmdSetSampleLocationsEXT _glew_vulkan_vkCmdSetSampleLocationsEXT
#define vkGetPhysicalDeviceMultisamplePropertiesEXT _glew_vulkan_vkGetPhysicalDeviceMultisamplePropertiesEXT
#define vkGetImageMemoryRequirements2KHR _glew_vulkan_vkGetImageMemoryRequirements2KHR
#define vkGetBufferMemoryRequirements2KHR _glew_vulkan_vkGetBufferMemoryRequirements2KHR
#define vkGetImageSparseMemoryRequirements2KHR _glew_vulkan_vkGetImageSparseMemoryRequirements2KHR
#define vkCreateAccelerationStructureKHR _glew_vulkan_vkCreateAccelerationStructureKHR
#define vkDestroyAccelerationStructureKHR _glew_vulkan_vkDestroyAccelerationStructureKHR
#define vkCmdBuildAccelerationStructuresKHR _glew_vulkan_vkCmdBuildAccelerationStructuresKHR
#define vkCmdBuildAccelerationStructuresIndirectKHR _glew_vulkan_vkCmdBuildAccelerationStructuresIndirectKHR
#define vkBuildAccelerationStructuresKHR _glew_vulkan_vkBuildAccelerationStructuresKHR
#define vkCopyAccelerationStructureKHR _glew_vulkan_vkCopyAccelerationStructureKHR
#define vkCopyAccelerationStructureToMemoryKHR _glew_vulkan_vkCopyAccelerationStructureToMemoryKHR
#define vkCopyMemoryToAccelerationStructureKHR _glew_vulkan_vkCopyMemoryToAccelerationStructureKHR
#define vkWriteAccelerationStructuresPropertiesKHR _glew_vulkan_vkWriteAccelerationStructuresPropertiesKHR
#define vkCmdCopyAccelerationStructureKHR _glew_vulkan_vkCmdCopyAccelerationStructureKHR
#define vkCmdCopyAccelerationStructureToMemoryKHR _glew_vulkan_vkCmdCopyAccelerationStructureToMemoryKHR
#define vkCmdCopyMemoryToAccelerationStructureKHR _glew_vulkan_vkCmdCopyMemoryToAccelerationStructureKHR
#define vkGetAccelerationStructureDeviceAddressKHR _glew_vulkan_vkGetAccelerationStructureDeviceAddressKHR
#define vkCmdWriteAccelerationStructuresPropertiesKHR _glew_vulkan_vkCmdWriteAccelerationStructuresPropertiesKHR
#define vkGetDeviceAccelerationStructureCompatibilityKHR _glew_vulkan_vkGetDeviceAccelerationStructureCompatibilityKHR
#define vkGetAccelerationStructureBuildSizesKHR _glew_vulkan_vkGetAccelerationStructureBuildSizesKHR
#define vkCmdTraceRaysKHR _glew_vulkan_vkCmdTraceRaysKHR
#define vkCreateRayTracingPipelinesKHR _glew_vulkan_vkCreateRayTracingPipelinesKHR
#define vkGetRayTracingShaderGroupHandlesKHR _glew_vulkan_vkGetRayTracingShaderGroupHandlesKHR
#define vkGetRayTracingCaptureReplayShaderGroupHandlesKHR _glew_vulkan_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR
#define vkCmdTraceRaysIndirectKHR _glew_vulkan_vkCmdTraceRaysIndirectKHR
#define vkGetRayTracingShaderGroupStackSizeKHR _glew_vulkan_vkGetRayTracingShaderGroupStackSizeKHR
#define vkCmdSetRayTracingPipelineStackSizeKHR _glew_vulkan_vkCmdSetRayTracingPipelineStackSizeKHR
#define vkCreateSamplerYcbcrConversionKHR _glew_vulkan_vkCreateSamplerYcbcrConversionKHR
#define vkDestroySamplerYcbcrConversionKHR _glew_vulkan_vkDestroySamplerYcbcrConversionKHR
#define vkBindBufferMemory2KHR _glew_vulkan_vkBindBufferMemory2KHR
#define vkBindImageMemory2KHR _glew_vulkan_vkBindImageMemory2KHR
#define vkGetImageDrmFormatModifierPropertiesEXT _glew_vulkan_vkGetImageDrmFormatModifierPropertiesEXT
#define vkCreateValidationCacheEXT _glew_vulkan_vkCreateValidationCacheEXT
#define vkDestroyValidationCacheEXT _glew_vulkan_vkDestroyValidationCacheEXT
#define vkMergeValidationCachesEXT _glew_vulkan_vkMergeValidationCachesEXT
#define vkGetValidationCacheDataEXT _glew_vulkan_vkGetValidationCacheDataEXT
#define vkCmdBindShadingRateImageNV _glew_vulkan_vkCmdBindShadingRateImageNV
#define vkCmdSetViewportShadingRatePaletteNV _glew_vulkan_vkCmdSetViewportShadingRatePaletteNV
#define vkCmdSetCoarseSampleOrderNV _glew_vulkan_vkCmdSetCoarseSampleOrderNV
#define vkCreateAccelerationStructureNV _glew_vulkan_vkCreateAccelerationStructureNV
#define vkDestroyAccelerationStructureNV _glew_vulkan_vkDestroyAccelerationStructureNV
#define vkGetAccelerationStructureMemoryRequirementsNV _glew_vulkan_vkGetAccelerationStructureMemoryRequirementsNV
#define vkBindAccelerationStructureMemoryNV _glew_vulkan_vkBindAccelerationStructureMemoryNV
#define vkCmdBuildAccelerationStructureNV _glew_vulkan_vkCmdBuildAccelerationStructureNV
#define vkCmdCopyAccelerationStructureNV _glew_vulkan_vkCmdCopyAccelerationStructureNV
#define vkCmdTraceRaysNV _glew_vulkan_vkCmdTraceRaysNV
#define vkCreateRayTracingPipelinesNV _glew_vulkan_vkCreateRayTracingPipelinesNV
#define vkGetRayTracingShaderGroupHandlesNV _glew_vulkan_vkGetRayTracingShaderGroupHandlesNV
#define vkGetAccelerationStructureHandleNV _glew_vulkan_vkGetAccelerationStructureHandleNV
#define vkCmdWriteAccelerationStructuresPropertiesNV _glew_vulkan_vkCmdWriteAccelerationStructuresPropertiesNV
#define vkCompileDeferredNV _glew_vulkan_vkCompileDeferredNV
#define vkGetDescriptorSetLayoutSupportKHR _glew_vulkan_vkGetDescriptorSetLayoutSupportKHR
#define vkCmdDrawIndirectCountKHR _glew_vulkan_vkCmdDrawIndirectCountKHR
#define vkCmdDrawIndexedIndirectCountKHR _glew_vulkan_vkCmdDrawIndexedIndirectCountKHR
#define vkGetMemoryHostPointerPropertiesEXT _glew_vulkan_vkGetMemoryHostPointerPropertiesEXT
#define vkCmdWriteBufferMarkerAMD _glew_vulkan_vkCmdWriteBufferMarkerAMD
#define vkGetPhysicalDeviceCalibrateableTimeDomainsEXT _glew_vulkan_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
#define vkGetCalibratedTimestampsEXT _glew_vulkan_vkGetCalibratedTimestampsEXT
#define vkCmdDrawMeshTasksNV _glew_vulkan_vkCmdDrawMeshTasksNV
#define vkCmdDrawMeshTasksIndirectNV _glew_vulkan_vkCmdDrawMeshTasksIndirectNV
#define vkCmdDrawMeshTasksIndirectCountNV _glew_vulkan_vkCmdDrawMeshTasksIndirectCountNV
#define vkCmdSetExclusiveScissorNV _glew_vulkan_vkCmdSetExclusiveScissorNV
#define vkCmdSetCheckpointNV _glew_vulkan_vkCmdSetCheckpointNV
#define vkGetQueueCheckpointDataNV _glew_vulkan_vkGetQueueCheckpointDataNV
#define vkGetSemaphoreCounterValueKHR _glew_vulkan_vkGetSemaphoreCounterValueKHR
#define vkWaitSemaphoresKHR _glew_vulkan_vkWaitSemaphoresKHR
#define vkSignalSemaphoreKHR _glew_vulkan_vkSignalSemaphoreKHR
#define vkInitializePerformanceApiINTEL _glew_vulkan_vkInitializePerformanceApiINTEL
#define vkUninitializePerformanceApiINTEL _glew_vulkan_vkUninitializePerformanceApiINTEL
#define vkCmdSetPerformanceMarkerINTEL _glew_vulkan_vkCmdSetPerformanceMarkerINTEL
#define vkCmdSetPerformanceStreamMarkerINTEL _glew_vulkan_vkCmdSetPerformanceStreamMarkerINTEL
#define vkCmdSetPerformanceOverrideINTEL _glew_vulkan_vkCmdSetPerformanceOverrideINTEL
#define vkAcquirePerformanceConfigurationINTEL _glew_vulkan_vkAcquirePerformanceConfigurationINTEL
#define vkReleasePerformanceConfigurationINTEL _glew_vulkan_vkReleasePerformanceConfigurationINTEL
#define vkQueueSetPerformanceConfigurationINTEL _glew_vulkan_vkQueueSetPerformanceConfigurationINTEL
#define vkGetPerformanceParameterINTEL _glew_vulkan_vkGetPerformanceParameterINTEL
#define vkSetLocalDimmingAMD _glew_vulkan_vkSetLocalDimmingAMD
#define vkGetPhysicalDeviceFragmentShadingRatesKHR _glew_vulkan_vkGetPhysicalDeviceFragmentShadingRatesKHR
#define vkCmdSetFragmentShadingRateKHR _glew_vulkan_vkCmdSetFragmentShadingRateKHR
#define vkGetBufferDeviceAddressEXT _glew_vulkan_vkGetBufferDeviceAddressEXT
#define vkGetPhysicalDeviceToolPropertiesEXT _glew_vulkan_vkGetPhysicalDeviceToolPropertiesEXT
#define vkGetPhysicalDeviceCooperativeMatrixPropertiesNV _glew_vulkan_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
#define vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV _glew_vulkan_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
#define vkCreateHeadlessSurfaceEXT _glew_vulkan_vkCreateHeadlessSurfaceEXT
#define vkGetBufferDeviceAddressKHR _glew_vulkan_vkGetBufferDeviceAddressKHR
#define vkGetBufferOpaqueCaptureAddressKHR _glew_vulkan_vkGetBufferOpaqueCaptureAddressKHR
#define vkGetDeviceMemoryOpaqueCaptureAddressKHR _glew_vulkan_vkGetDeviceMemoryOpaqueCaptureAddressKHR
#define vkCmdSetLineStippleEXT _glew_vulkan_vkCmdSetLineStippleEXT
#define vkResetQueryPoolEXT _glew_vulkan_vkResetQueryPoolEXT
#define vkCmdSetCullModeEXT _glew_vulkan_vkCmdSetCullModeEXT
#define vkCmdSetFrontFaceEXT _glew_vulkan_vkCmdSetFrontFaceEXT
#define vkCmdSetPrimitiveTopologyEXT _glew_vulkan_vkCmdSetPrimitiveTopologyEXT
#define vkCmdSetViewportWithCountEXT _glew_vulkan_vkCmdSetViewportWithCountEXT
#define vkCmdSetScissorWithCountEXT _glew_vulkan_vkCmdSetScissorWithCountEXT
#define vkCmdBindVertexBuffers2EXT _glew_vulkan_vkCmdBindVertexBuffers2EXT
#define vkCmdSetDepthTestEnableEXT _glew_vulkan_vkCmdSetDepthTestEnableEXT
#define vkCmdSetDepthWriteEnableEXT _glew_vulkan_vkCmdSetDepthWriteEnableEXT
#define vkCmdSetDepthCompareOpEXT _glew_vulkan_vkCmdSetDepthCompareOpEXT
#define vkCmdSetDepthBoundsTestEnableEXT _glew_vulkan_vkCmdSetDepthBoundsTestEnableEXT
#define vkCmdSetStencilTestEnableEXT _glew_vulkan_vkCmdSetStencilTestEnableEXT
#define vkCmdSetStencilOpEXT _glew_vulkan_vkCmdSetStencilOpEXT
#define vkCreateDeferredOperationKHR _glew_vulkan_vkCreateDeferredOperationKHR
#define vkDestroyDeferredOperationKHR _glew_vulkan_vkDestroyDeferredOperationKHR
#define vkGetDeferredOperationMaxConcurrencyKHR _glew_vulkan_vkGetDeferredOperationMaxConcurrencyKHR
#define vkGetDeferredOperationResultKHR _glew_vulkan_vkGetDeferredOperationResultKHR
#define vkDeferredOperationJoinKHR _glew_vulkan_vkDeferredOperationJoinKHR
#define vkGetPipelineExecutablePropertiesKHR _glew_vulkan_vkGetPipelineExecutablePropertiesKHR
#define vkGetPipelineExecutableStatisticsKHR _glew_vulkan_vkGetPipelineExecutableStatisticsKHR
#define vkGetPipelineExecutableInternalRepresentationsKHR _glew_vulkan_vkGetPipelineExecutableInternalRepresentationsKHR
#define vkGetGeneratedCommandsMemoryRequirementsNV _glew_vulkan_vkGetGeneratedCommandsMemoryRequirementsNV
#define vkCmdPreprocessGeneratedCommandsNV _glew_vulkan_vkCmdPreprocessGeneratedCommandsNV
#define vkCmdExecuteGeneratedCommandsNV _glew_vulkan_vkCmdExecuteGeneratedCommandsNV
#define vkCmdBindPipelineShaderGroupNV _glew_vulkan_vkCmdBindPipelineShaderGroupNV
#define vkCreateIndirectCommandsLayoutNV _glew_vulkan_vkCreateIndirectCommandsLayoutNV
#define vkDestroyIndirectCommandsLayoutNV _glew_vulkan_vkDestroyIndirectCommandsLayoutNV
#define vkCreatePrivateDataSlotEXT _glew_vulkan_vkCreatePrivateDataSlotEXT
#define vkDestroyPrivateDataSlotEXT _glew_vulkan_vkDestroyPrivateDataSlotEXT
#define vkSetPrivateDataEXT _glew_vulkan_vkSetPrivateDataEXT
#define vkGetPrivateDataEXT _glew_vulkan_vkGetPrivateDataEXT
#define vkCmdSetEvent2KHR _glew_vulkan_vkCmdSetEvent2KHR
#define vkCmdResetEvent2KHR _glew_vulkan_vkCmdResetEvent2KHR
#define vkCmdWaitEvents2KHR _glew_vulkan_vkCmdWaitEvents2KHR
#define vkCmdPipelineBarrier2KHR _glew_vulkan_vkCmdPipelineBarrier2KHR
#define vkCmdWriteTimestamp2KHR _glew_vulkan_vkCmdWriteTimestamp2KHR
#define vkQueueSubmit2KHR _glew_vulkan_vkQueueSubmit2KHR
#define vkCmdWriteBufferMarker2AMD _glew_vulkan_vkCmdWriteBufferMarker2AMD
#define vkGetQueueCheckpointData2NV _glew_vulkan_vkGetQueueCheckpointData2NV
#define vkCmdSetFragmentShadingRateEnumNV _glew_vulkan_vkCmdSetFragmentShadingRateEnumNV
#define vkCmdCopyBuffer2KHR _glew_vulkan_vkCmdCopyBuffer2KHR
#define vkCmdCopyImage2KHR _glew_vulkan_vkCmdCopyImage2KHR
#define vkCmdCopyBufferToImage2KHR _glew_vulkan_vkCmdCopyBufferToImage2KHR
#define vkCmdCopyImageToBuffer2KHR _glew_vulkan_vkCmdCopyImageToBuffer2KHR
#define vkCmdBlitImage2KHR _glew_vulkan_vkCmdBlitImage2KHR
#define vkCmdResolveImage2KHR _glew_vulkan_vkCmdResolveImage2KHR
#define vkCmdSetVertexInputEXT _glew_vulkan_vkCmdSetVertexInputEXT
#define vkCmdSetColorWriteEnableEXT _glew_vulkan_vkCmdSetColorWriteEnableEXT

#if defined(VK_USE_PLATFORM_XLIB_KHR)
#define vkCreateXlibSurfaceKHR _glew_vulkan_vkCreateXlibSurfaceKHR
#define vkGetPhysicalDeviceXlibPresentationSupportKHR _glew_vulkan_vkGetPhysicalDeviceXlibPresentationSupportKHR
#endif

#if defined(VK_USE_PLATFORM_XCB_KHR)
#define vkCreateXcbSurfaceKHR _glew_vulkan_vkCreateXcbSurfaceKHR
#define vkGetPhysicalDeviceXcbPresentationSupportKHR _glew_vulkan_vkGetPhysicalDeviceXcbPresentationSupportKHR
#endif

#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
#define vkCreateWaylandSurfaceKHR _glew_vulkan_vkCreateWaylandSurfaceKHR
#define vkGetPhysicalDeviceWaylandPresentationSupportKHR _glew_vulkan_vkGetPhysicalDeviceWaylandPresentationSupportKHR
#endif

#if defined(VK_USE_PLATFORM_ANDROID_KHR)
#define vkCreateAndroidSurfaceKHR _glew_vulkan_vkCreateAndroidSurfaceKHR
#define vkGetAndroidHardwareBufferPropertiesANDROID _glew_vulkan_vkGetAndroidHardwareBufferPropertiesANDROID
#define vkGetMemoryAndroidHardwareBufferANDROID _glew_vulkan_vkGetMemoryAndroidHardwareBufferANDROID
#endif

#if defined(VK_USE_PLATFORM_WIN32_KHR)
#define vkCreateWin32SurfaceKHR _glew_vulkan_vkCreateWin32SurfaceKHR
#define vkGetPhysicalDeviceWin32PresentationSupportKHR _glew_vulkan_vkGetPhysicalDeviceWin32PresentationSupportKHR
#define vkGetMemoryWin32HandleNV _glew_vulkan_vkGetMemoryWin32HandleNV
#define vkGetMemoryWin32HandleKHR _glew_vulkan_vkGetMemoryWin32HandleKHR
#define vkGetMemoryWin32HandlePropertiesKHR _glew_vulkan_vkGetMemoryWin32HandlePropertiesKHR
#define vkImportSemaphoreWin32HandleKHR _glew_vulkan_vkImportSemaphoreWin32HandleKHR
#define vkGetSemaphoreWin32HandleKHR _glew_vulkan_vkGetSemaphoreWin32HandleKHR
#define vkImportFenceWin32HandleKHR _glew_vulkan_vkImportFenceWin32HandleKHR
#define vkGetFenceWin32HandleKHR _glew_vulkan_vkGetFenceWin32HandleKHR
#define vkGetPhysicalDeviceSurfacePresentModes2EXT _glew_vulkan_vkGetPhysicalDeviceSurfacePresentModes2EXT
#define vkAcquireFullScreenExclusiveModeEXT _glew_vulkan_vkAcquireFullScreenExclusiveModeEXT
#define vkReleaseFullScreenExclusiveModeEXT _glew_vulkan_vkReleaseFullScreenExclusiveModeEXT
#define vkGetDeviceGroupSurfacePresentModes2EXT _glew_vulkan_vkGetDeviceGroupSurfacePresentModes2EXT
#define vkAcquireWinrtDisplayNV _glew_vulkan_vkAcquireWinrtDisplayNV
#define vkGetWinrtDisplayNV _glew_vulkan_vkGetWinrtDisplayNV
#endif

#if defined(VK_ENABLE_BETA_EXTENSIONS)
#define vkGetPhysicalDeviceVideoCapabilitiesKHR _glew_vulkan_vkGetPhysicalDeviceVideoCapabilitiesKHR
#define vkGetPhysicalDeviceVideoFormatPropertiesKHR _glew_vulkan_vkGetPhysicalDeviceVideoFormatPropertiesKHR
#define vkCreateVideoSessionKHR _glew_vulkan_vkCreateVideoSessionKHR
#define vkDestroyVideoSessionKHR _glew_vulkan_vkDestroyVideoSessionKHR
#define vkGetVideoSessionMemoryRequirementsKHR _glew_vulkan_vkGetVideoSessionMemoryRequirementsKHR
#define vkBindVideoSessionMemoryKHR _glew_vulkan_vkBindVideoSessionMemoryKHR
#define vkCreateVideoSessionParametersKHR _glew_vulkan_vkCreateVideoSessionParametersKHR
#define vkUpdateVideoSessionParametersKHR _glew_vulkan_vkUpdateVideoSessionParametersKHR
#define vkDestroyVideoSessionParametersKHR _glew_vulkan_vkDestroyVideoSessionParametersKHR
#define vkCmdBeginVideoCodingKHR _glew_vulkan_vkCmdBeginVideoCodingKHR
#define vkCmdEndVideoCodingKHR _glew_vulkan_vkCmdEndVideoCodingKHR
#define vkCmdControlVideoCodingKHR _glew_vulkan_vkCmdControlVideoCodingKHR
#define vkCmdDecodeVideoKHR _glew_vulkan_vkCmdDecodeVideoKHR
#define vkCmdEncodeVideoKHR _glew_vulkan_vkCmdEncodeVideoKHR
#endif

#if defined(VK_USE_PLATFORM_GGP)
#define vkCreateStreamDescriptorSurfaceGGP _glew_vulkan_vkCreateStreamDescriptorSurfaceGGP
#endif

#if defined(VK_USE_PLATFORM_VI_NN)
#define vkCreateViSurfaceNN _glew_vulkan_vkCreateViSurfaceNN
#endif

#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
#define vkAcquireXlibDisplayEXT _glew_vulkan_vkAcquireXlibDisplayEXT
#define vkGetRandROutputDisplayEXT _glew_vulkan_vkGetRandROutputDisplayEXT
#endif

#if defined(VK_USE_PLATFORM_IOS_MVK)
#define vkCreateIOSSurfaceMVK _glew_vulkan_vkCreateIOSSurfaceMVK
#endif

#if defined(VK_USE_PLATFORM_MACOS_MVK)
#define vkCreateMacOSSurfaceMVK _glew_vulkan_vkCreateMacOSSurfaceMVK
#endif

#if defined(VK_USE_PLATFORM_FUCHSIA)
#define vkCreateImagePipeSurfaceFUCHSIA _glew_vulkan_vkCreateImagePipeSurfaceFUCHSIA
#define vkGetMemoryZirconHandleFUCHSIA _glew_vulkan_vkGetMemoryZirconHandleFUCHSIA
#define vkGetMemoryZirconHandlePropertiesFUCHSIA _glew_vulkan_vkGetMemoryZirconHandlePropertiesFUCHSIA
#define vkImportSemaphoreZirconHandleFUCHSIA _glew_vulkan_vkImportSemaphoreZirconHandleFUCHSIA
#define vkGetSemaphoreZirconHandleFUCHSIA _glew_vulkan_vkGetSemaphoreZirconHandleFUCHSIA
#endif

#if defined(VK_USE_PLATFORM_METAL_EXT)
#define vkCreateMetalSurfaceEXT _glew_vulkan_vkCreateMetalSurfaceEXT
#endif

#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
#define vkCreateDirectFBSurfaceEXT _glew_vulkan_vkCreateDirectFBSurfaceEXT
#define vkGetPhysicalDeviceDirectFBPresentationSupportEXT _glew_vulkan_vkGetPhysicalDeviceDirectFBPresentationSupportEXT
#endif

#if defined(VK_USE_PLATFORM_SCREEN_QNX)
#define vkCreateScreenSurfaceQNX _glew_vulkan_vkCreateScreenSurfaceQNX
#define vkGetPhysicalDeviceScreenPresentationSupportQNX _glew_vulkan_vkGetPhysicalDeviceScreenPresentationSupportQNX
#endif

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
