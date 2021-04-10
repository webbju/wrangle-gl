////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <wrangle-vulkan.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkEnumerateInstanceVersion(uint32_t* pApiVersion) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkEnumerateInstanceVersion) {
    prototypeCalled = true;
    result = vulkanContext->m_vkEnumerateInstanceVersion(pApiVersion);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBindBufferMemory2) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindBufferMemory2(device, bindInfoCount, pBindInfos);
  }
  if (!prototypeCalled && vulkanContext->m_vkBindBufferMemory2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBindImageMemory2) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindImageMemory2(device, bindInfoCount, pBindInfos);
  }
  if (!prototypeCalled && vulkanContext->m_vkBindImageMemory2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceGroupPeerMemoryFeatures) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceGroupPeerMemoryFeaturesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDeviceMask) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDeviceMask(commandBuffer, deviceMask);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDeviceMaskKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDispatchBase) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdDispatchBaseKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkEnumeratePhysicalDeviceGroups) {
    prototypeCalled = true;
    result = vulkanContext->m_vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkEnumeratePhysicalDeviceGroupsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetImageMemoryRequirements2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetImageMemoryRequirements2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetBufferMemoryRequirements2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetBufferMemoryRequirements2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetImageSparseMemoryRequirements2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetImageSparseMemoryRequirements2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFeatures2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFeatures2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceProperties2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceProperties2(physicalDevice, pProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFormatProperties2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFormatProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceImageFormatProperties2) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceImageFormatProperties2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceQueueFamilyProperties2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceQueueFamilyProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceMemoryProperties2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceMemoryProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSparseImageFormatProperties2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkTrimCommandPool) {
    prototypeCalled = true;
    vulkanContext->m_vkTrimCommandPool(device, commandPool, flags);
  }
  if (!prototypeCalled && vulkanContext->m_vkTrimCommandPoolKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkTrimCommandPoolKHR(device, commandPool, flags);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2* pQueueInfo, VkQueue* pQueue) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceQueue2) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDeviceQueue2(device, pQueueInfo, pQueue);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateSamplerYcbcrConversion) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
  }
  if (!prototypeCalled && vulkanContext->m_vkCreateSamplerYcbcrConversionKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroySamplerYcbcrConversion) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
  }
  if (!prototypeCalled && vulkanContext->m_vkDestroySamplerYcbcrConversionKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDescriptorUpdateTemplate) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
  }
  if (!prototypeCalled && vulkanContext->m_vkCreateDescriptorUpdateTemplateKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyDescriptorUpdateTemplate) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
  }
  if (!prototypeCalled && vulkanContext->m_vkDestroyDescriptorUpdateTemplateKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkUpdateDescriptorSetWithTemplate) {
    prototypeCalled = true;
    vulkanContext->m_vkUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
  }
  if (!prototypeCalled && vulkanContext->m_vkUpdateDescriptorSetWithTemplateKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkUpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalBufferProperties) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalBufferPropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalFenceProperties) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalFencePropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalSemaphoreProperties) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetDescriptorSetLayoutSupport) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetDescriptorSetLayoutSupportKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndirectCount) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndirectCountKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndirectCountAMD) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndexedIndirectCount) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndexedIndirectCountKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndexedIndirectCountAMD) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateRenderPass2) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
  }
  if (!prototypeCalled && vulkanContext->m_vkCreateRenderPass2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginRenderPass2) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginRenderPass2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdNextSubpass2) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdNextSubpass2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndRenderPass2) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkCmdEndRenderPass2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkResetQueryPool) {
    prototypeCalled = true;
    vulkanContext->m_vkResetQueryPool(device, queryPool, firstQuery, queryCount);
  }
  if (!prototypeCalled && vulkanContext->m_vkResetQueryPoolEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSemaphoreCounterValue) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSemaphoreCounterValue(device, semaphore, pValue);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetSemaphoreCounterValueKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSemaphoreCounterValueKHR(device, semaphore, pValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkWaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkWaitSemaphores) {
    prototypeCalled = true;
    result = vulkanContext->m_vkWaitSemaphores(device, pWaitInfo, timeout);
  }
  if (!prototypeCalled && vulkanContext->m_vkWaitSemaphoresKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkWaitSemaphoresKHR(device, pWaitInfo, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkSignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkSignalSemaphore) {
    prototypeCalled = true;
    result = vulkanContext->m_vkSignalSemaphore(device, pSignalInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkSignalSemaphoreKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkSignalSemaphoreKHR(device, pSignalInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkDeviceAddress _glew_vulkan_vkGetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkDeviceAddress result = ((VkDeviceAddress)0);
  if (!prototypeCalled && vulkanContext->m_vkGetBufferDeviceAddress) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferDeviceAddress(device, pInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetBufferDeviceAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferDeviceAddressKHR(device, pInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetBufferDeviceAddressEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferDeviceAddressEXT(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint64_t _glew_vulkan_vkGetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  uint64_t result = ((uint64_t)0);
  if (!prototypeCalled && vulkanContext->m_vkGetBufferOpaqueCaptureAddress) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferOpaqueCaptureAddress(device, pInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetBufferOpaqueCaptureAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferOpaqueCaptureAddressKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint64_t _glew_vulkan_vkGetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  uint64_t result = ((uint64_t)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceMemoryOpaqueCaptureAddress) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceMemoryOpaqueCaptureAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeviceMemoryOpaqueCaptureAddressKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroySurfaceKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroySurfaceKHR(instance, surface, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32* pSupported) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfaceSupportKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR* pSurfaceCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pSurfaceFormatCount, VkSurfaceFormatKHR* pSurfaceFormats) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfaceFormatsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfacePresentModesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateSwapchainKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroySwapchainKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroySwapchainKHR(device, swapchain, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount, VkImage* pSwapchainImages) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSwapchainImagesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquireNextImageKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkQueuePresentKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkQueuePresentKHR(queue, pPresentInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceGroupPresentCapabilitiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR* pModes) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceGroupSurfacePresentModesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t* pRectCount, VkRect2D* pRects) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDevicePresentRectanglesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquireNextImage2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPropertiesKHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceDisplayPropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlanePropertiesKHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceDisplayPlanePropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t* pDisplayCount, VkDisplayKHR* pDisplays) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDisplayPlaneSupportedDisplaysKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModePropertiesKHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDisplayModePropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDisplayModeKHR* pMode) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDisplayModeKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR* pCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDisplayPlaneCapabilitiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDisplayPlaneSurfaceKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchains) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateSharedSwapchainsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_XLIB_KHR)
VkResult _glew_vulkan_vkCreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateXlibSurfaceKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_XLIB_KHR)
VkBool32 _glew_vulkan_vkGetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display* dpy, VisualID visualID) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkBool32 result = ((VkBool32)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceXlibPresentationSupportKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_XCB_KHR)
VkResult _glew_vulkan_vkCreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateXcbSurfaceKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_XCB_KHR)
VkBool32 _glew_vulkan_vkGetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t* connection, xcb_visualid_t visual_id) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkBool32 result = ((VkBool32)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceXcbPresentationSupportKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
VkResult _glew_vulkan_vkCreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateWaylandSurfaceKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
VkBool32 _glew_vulkan_vkGetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display* display) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkBool32 result = ((VkBool32)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceWaylandPresentationSupportKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_ANDROID_KHR)
VkResult _glew_vulkan_vkCreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateAndroidSurfaceKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateWin32SurfaceKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkBool32 _glew_vulkan_vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkBool32 result = ((VkBool32)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceWin32PresentationSupportKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDebugReportCallbackEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyDebugReportCallbackEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDebugReportMessageEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkDebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkDebugMarkerSetObjectTagEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkDebugMarkerSetObjectTagEXT(device, pTagInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkDebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkDebugMarkerSetObjectNameEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkDebugMarkerSetObjectNameEXT(device, pNameInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDebugMarkerBeginEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDebugMarkerEndEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDebugMarkerEndEXT(commandBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT* pMarkerInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDebugMarkerInsertEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkGetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice, const VkVideoProfileKHR* pVideoProfile, VkVideoCapabilitiesKHR* pCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceVideoCapabilitiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkGetPhysicalDeviceVideoFormatPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo, uint32_t* pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR* pVideoFormatProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceVideoFormatPropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkCreateVideoSessionKHR(VkDevice device, const VkVideoSessionCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionKHR* pVideoSession) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateVideoSessionKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateVideoSessionKHR(device, pCreateInfo, pAllocator, pVideoSession);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkDestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyVideoSessionKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyVideoSessionKHR(device, videoSession, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkGetVideoSessionMemoryRequirementsKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t* pVideoSessionMemoryRequirementsCount, VkVideoGetMemoryPropertiesKHR* pVideoSessionMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetVideoSessionMemoryRequirementsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetVideoSessionMemoryRequirementsKHR(device, videoSession, pVideoSessionMemoryRequirementsCount, pVideoSessionMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkBindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t videoSessionBindMemoryCount, const VkVideoBindMemoryKHR* pVideoSessionBindMemories) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBindVideoSessionMemoryKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindVideoSessionMemoryKHR(device, videoSession, videoSessionBindMemoryCount, pVideoSessionBindMemories);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkCreateVideoSessionParametersKHR(VkDevice device, const VkVideoSessionParametersCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkVideoSessionParametersKHR* pVideoSessionParameters) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateVideoSessionParametersKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateVideoSessionParametersKHR(device, pCreateInfo, pAllocator, pVideoSessionParameters);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
VkResult _glew_vulkan_vkUpdateVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkUpdateVideoSessionParametersKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkUpdateVideoSessionParametersKHR(device, videoSessionParameters, pUpdateInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkDestroyVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyVideoSessionParametersKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyVideoSessionParametersKHR(device, videoSessionParameters, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkCmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR* pBeginInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginVideoCodingKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkCmdEndVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR* pEndCodingInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndVideoCodingKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkCmdControlVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR* pCodingControlInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdControlVideoCodingKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkCmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR* pFrameInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDecodeVideoKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDecodeVideoKHR(commandBuffer, pFrameInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_ENABLE_BETA_EXTENSIONS)
void _glew_vulkan_vkCmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR* pEncodeInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEncodeVideoKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBindTransformFeedbackBuffersEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginTransformFeedbackEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer* pCounterBuffers, const VkDeviceSize* pCounterBufferOffsets) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndTransformFeedbackEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginQueryIndexedEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndQueryIndexedEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndirectByteCountEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint32_t _glew_vulkan_vkGetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  uint32_t result = ((uint32_t)0);
  if (!prototypeCalled && vulkanContext->m_vkGetImageViewHandleNVX) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetImageViewHandleNVX(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetImageViewAddressNVX(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetImageViewAddressNVX) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetImageViewAddressNVX(device, imageView, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndirectCountAMD) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndexedIndirectCountAMD) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t* pInfoSize, void* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetShaderInfoAMD) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_GGP)
VkResult _glew_vulkan_vkCreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateStreamDescriptorSurfaceGGP) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalImageFormatPropertiesNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE* pHandle) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryWin32HandleNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2* pFeatures) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFeatures2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2* pFormatProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFormatProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo, VkImageFormatProperties2* pImageFormatProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceImageFormatProperties2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pQueueFamilyPropertyCount, VkQueueFamilyProperties2* pQueueFamilyProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceQueueFamilyProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2* pMemoryProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceMemoryProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo, uint32_t* pPropertyCount, VkSparseImageFormatProperties2* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags* pPeerMemoryFeatures) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceGroupPeerMemoryFeaturesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDeviceMaskKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDispatchBaseKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_VI_NN)
VkResult _glew_vulkan_vkCreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateViSurfaceNN) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkTrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkTrimCommandPoolKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkTrimCommandPoolKHR(device, commandPool, flags);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkEnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkEnumeratePhysicalDeviceGroupsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo, VkExternalBufferProperties* pExternalBufferProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalBufferPropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryWin32HandleKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryWin32HandlePropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR* pGetFdInfo, int* pFd) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryFdKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR* pMemoryFdProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryFdPropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo, VkExternalSemaphoreProperties* pExternalSemaphoreProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkImportSemaphoreWin32HandleKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSemaphoreWin32HandleKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkImportSemaphoreFdKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR* pGetFdInfo, int* pFd) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSemaphoreFdKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdPushDescriptorSetKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdPushDescriptorSetWithTemplateKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginConditionalRenderingEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndConditionalRenderingEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndConditionalRenderingEXT(commandBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDescriptorUpdateTemplateKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyDescriptorUpdateTemplateKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkUpdateDescriptorSetWithTemplateKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkUpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV* pViewportWScalings) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetViewportWScalingNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkReleaseDisplayEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkReleaseDisplayEXT(physicalDevice, display);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
VkResult _glew_vulkan_vkAcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquireXlibDisplayEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquireXlibDisplayEXT(physicalDevice, dpy, display);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
VkResult _glew_vulkan_vkGetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, RROutput rrOutput, VkDisplayKHR* pDisplay) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetRandROutputDisplayEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT* pSurfaceCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfaceCapabilities2EXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkDisplayPowerControlEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkRegisterDeviceEventEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkRegisterDisplayEventEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t* pCounterValue) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSwapchainCounterEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetRefreshCycleDurationGOOGLE) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pPresentationTimingCount, VkPastPresentationTimingGOOGLE* pPresentationTimings) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPastPresentationTimingGOOGLE) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D* pDiscardRectangles) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDiscardRectangleEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkSetHdrMetadataEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateRenderPass2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, const VkSubpassBeginInfo* pSubpassBeginInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginRenderPass2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo* pSubpassBeginInfo, const VkSubpassEndInfo* pSubpassEndInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdNextSubpass2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo* pSubpassEndInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndRenderPass2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSwapchainStatusKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSwapchainStatusKHR(device, swapchain);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo, VkExternalFenceProperties* pExternalFenceProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceExternalFencePropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkImportFenceWin32HandleKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo, HANDLE* pHandle) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetFenceWin32HandleKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkImportFenceFdKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkImportFenceFdKHR(device, pImportFenceFdInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR* pGetFdInfo, int* pFd) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetFenceFdKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetFenceFdKHR(device, pGetFdInfo, pFd);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t* pCounterCount, VkPerformanceCounterKHR* pCounters, VkPerformanceCounterDescriptionKHR* pCounterDescriptions) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo, uint32_t* pNumPasses) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkAcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquireProfilingLockKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquireProfilingLockKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkReleaseProfilingLockKHR(VkDevice device) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkReleaseProfilingLockKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkReleaseProfilingLockKHR(device);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkSurfaceCapabilities2KHR* pSurfaceCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfaceCapabilities2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pSurfaceFormatCount, VkSurfaceFormat2KHR* pSurfaceFormats) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfaceFormats2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayProperties2KHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceDisplayProperties2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkDisplayPlaneProperties2KHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceDisplayPlaneProperties2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t* pPropertyCount, VkDisplayModeProperties2KHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDisplayModeProperties2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR* pCapabilities) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDisplayPlaneCapabilities2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_IOS_MVK)
VkResult _glew_vulkan_vkCreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateIOSSurfaceMVK) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_MACOS_MVK)
VkResult _glew_vulkan_vkCreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateMacOSSurfaceMVK) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkSetDebugUtilsObjectNameEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkSetDebugUtilsObjectNameEXT(device, pNameInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkSetDebugUtilsObjectTagEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkSetDebugUtilsObjectTagEXT(device, pTagInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkQueueBeginDebugUtilsLabelEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkQueueEndDebugUtilsLabelEXT(VkQueue queue) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkQueueEndDebugUtilsLabelEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkQueueEndDebugUtilsLabelEXT(queue);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkQueueInsertDebugUtilsLabelEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBeginDebugUtilsLabelEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdEndDebugUtilsLabelEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdEndDebugUtilsLabelEXT(commandBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT* pLabelInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdInsertDebugUtilsLabelEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pMessenger) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDebugUtilsMessengerEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyDebugUtilsMessengerEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkSubmitDebugUtilsMessageEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_ANDROID_KHR)
VkResult _glew_vulkan_vkGetAndroidHardwareBufferPropertiesANDROID(VkDevice device, const struct AHardwareBuffer* buffer, VkAndroidHardwareBufferPropertiesANDROID* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetAndroidHardwareBufferPropertiesANDROID) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_ANDROID_KHR)
VkResult _glew_vulkan_vkGetMemoryAndroidHardwareBufferANDROID(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo, struct AHardwareBuffer** pBuffer) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryAndroidHardwareBufferANDROID) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT* pSampleLocationsInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetSampleLocationsEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT* pMultisampleProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceMultisamplePropertiesEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetImageMemoryRequirements2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetBufferMemoryRequirements2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetImageSparseMemoryRequirements2KHR(VkDevice device, const VkImageSparseMemoryRequirementsInfo2* pInfo, uint32_t* pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2* pSparseMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetImageSparseMemoryRequirements2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateAccelerationStructureKHR(VkDevice device, const VkAccelerationStructureCreateInfoKHR* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureKHR* pAccelerationStructure) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateAccelerationStructureKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyAccelerationStructureKHR(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyAccelerationStructureKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyAccelerationStructureKHR(device, accelerationStructure, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBuildAccelerationStructuresKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBuildAccelerationStructuresKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkDeviceAddress* pIndirectDeviceAddresses, const uint32_t* pIndirectStrides, const uint32_t* const* ppMaxPrimitiveCounts) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBuildAccelerationStructuresIndirectKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkBuildAccelerationStructuresKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR* pInfos, const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBuildAccelerationStructuresKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBuildAccelerationStructuresKHR(device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCopyAccelerationStructureKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCopyAccelerationStructureKHR(device, deferredOperation, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCopyAccelerationStructureToMemoryKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCopyAccelerationStructureToMemoryKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCopyAccelerationStructureToMemoryKHR(device, deferredOperation, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCopyMemoryToAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCopyMemoryToAccelerationStructureKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCopyMemoryToAccelerationStructureKHR(device, deferredOperation, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkWriteAccelerationStructuresPropertiesKHR(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, size_t dataSize, void* pData, size_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkWriteAccelerationStructuresPropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkWriteAccelerationStructuresPropertiesKHR(device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyAccelerationStructureKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyAccelerationStructureToMemoryKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyMemoryToAccelerationStructureKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkDeviceAddress _glew_vulkan_vkGetAccelerationStructureDeviceAddressKHR(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkDeviceAddress result = ((VkDeviceAddress)0);
  if (!prototypeCalled && vulkanContext->m_vkGetAccelerationStructureDeviceAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetAccelerationStructureDeviceAddressKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdWriteAccelerationStructuresPropertiesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionInfoKHR* pVersionInfo, VkAccelerationStructureCompatibilityKHR* pCompatibility) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceAccelerationStructureCompatibilityKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDeviceAccelerationStructureCompatibilityKHR(device, pVersionInfo, pCompatibility);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetAccelerationStructureBuildSizesKHR(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR* pBuildInfo, const uint32_t* pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR* pSizeInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetAccelerationStructureBuildSizesKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetAccelerationStructureBuildSizesKHR(device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdTraceRaysKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateRayTracingPipelinesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetRayTracingShaderGroupHandlesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
  }
  if (!prototypeCalled && vulkanContext->m_vkGetRayTracingShaderGroupHandlesNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdTraceRaysIndirectKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkDeviceSize _glew_vulkan_vkGetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkDeviceSize result = ((VkDeviceSize)0);
  if (!prototypeCalled && vulkanContext->m_vkGetRayTracingShaderGroupStackSizeKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRayTracingShaderGroupStackSizeKHR(device, pipeline, group, groupShader);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetRayTracingPipelineStackSizeKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSamplerYcbcrConversion* pYcbcrConversion) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateSamplerYcbcrConversionKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroySamplerYcbcrConversionKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkBindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBindBufferMemory2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkBindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBindImageMemory2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetImageDrmFormatModifierPropertiesEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkValidationCacheEXT* pValidationCache) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateValidationCacheEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyValidationCacheEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyValidationCacheEXT(device, validationCache, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkMergeValidationCachesEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t* pDataSize, void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetValidationCacheDataEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBindShadingRateImageNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV* pShadingRatePalettes) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetViewportShadingRatePaletteNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV* pCustomSampleOrders) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetCoarseSampleOrderNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkAccelerationStructureNV* pAccelerationStructure) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateAccelerationStructureNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyAccelerationStructureNV) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetAccelerationStructureMemoryRequirementsNV(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2KHR* pMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetAccelerationStructureMemoryRequirementsNV) {
    prototypeCalled = true;
    vulkanContext->m_vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkBindAccelerationStructureMemoryNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV* pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBuildAccelerationStructureNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyAccelerationStructureNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdTraceRaysNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV* pCreateInfos, const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateRayTracingPipelinesNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetRayTracingShaderGroupHandlesNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetAccelerationStructureHandleNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV* pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdWriteAccelerationStructuresPropertiesNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCompileDeferredNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCompileDeferredNV(device, pipeline, shader);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetDescriptorSetLayoutSupportKHR(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayoutSupport* pSupport) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetDescriptorSetLayoutSupportKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndirectCountKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawIndexedIndirectCountKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void* pHostPointer, VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryHostPointerPropertiesEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdWriteBufferMarkerAMD) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t* pTimeDomainCount, VkTimeDomainEXT* pTimeDomains) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoEXT* pTimestampInfos, uint64_t* pTimestamps, uint64_t* pMaxDeviation) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetCalibratedTimestampsEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawMeshTasksNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawMeshTasksIndirectNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdDrawMeshTasksIndirectCountNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D* pExclusiveScissors) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetExclusiveScissorNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void* pCheckpointMarker) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetCheckpointNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetQueueCheckpointDataNV(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointDataNV* pCheckpointData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetQueueCheckpointDataNV) {
    prototypeCalled = true;
    vulkanContext->m_vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t* pValue) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSemaphoreCounterValueKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSemaphoreCounterValueKHR(device, semaphore, pValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkWaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo* pWaitInfo, uint64_t timeout) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkWaitSemaphoresKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkWaitSemaphoresKHR(device, pWaitInfo, timeout);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkSignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo* pSignalInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkSignalSemaphoreKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkSignalSemaphoreKHR(device, pSignalInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkInitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkInitializePerformanceApiINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkInitializePerformanceApiINTEL(device, pInitializeInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkUninitializePerformanceApiINTEL(VkDevice device) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkUninitializePerformanceApiINTEL) {
    prototypeCalled = true;
    vulkanContext->m_vkUninitializePerformanceApiINTEL(device);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL* pMarkerInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCmdSetPerformanceMarkerINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCmdSetPerformanceStreamMarkerINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL* pOverrideInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCmdSetPerformanceOverrideINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkAcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquirePerformanceConfigurationINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkReleasePerformanceConfigurationINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkReleasePerformanceConfigurationINTEL(device, configuration);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkQueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkQueueSetPerformanceConfigurationINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkQueueSetPerformanceConfigurationINTEL(queue, configuration);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL* pValue) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPerformanceParameterINTEL) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPerformanceParameterINTEL(device, parameter, pValue);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkSetLocalDimmingAMD) {
    prototypeCalled = true;
    vulkanContext->m_vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_FUCHSIA)
VkResult _glew_vulkan_vkCreateImagePipeSurfaceFUCHSIA(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateImagePipeSurfaceFUCHSIA) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_METAL_EXT)
VkResult _glew_vulkan_vkCreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateMetalSurfaceEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t* pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceFragmentShadingRatesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D* pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetFragmentShadingRateKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkDeviceAddress _glew_vulkan_vkGetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkDeviceAddress result = ((VkDeviceAddress)0);
  if (!prototypeCalled && vulkanContext->m_vkGetBufferDeviceAddressEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferDeviceAddressEXT(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t* pToolCount, VkPhysicalDeviceToolPropertiesEXT* pToolProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceToolPropertiesEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceToolPropertiesEXT(physicalDevice, pToolCount, pToolProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkCooperativeMatrixPropertiesNV* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t* pCombinationCount, VkFramebufferMixedSamplesCombinationNV* pCombinations) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, uint32_t* pPresentModeCount, VkPresentModeKHR* pPresentModes) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceSurfacePresentModes2EXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquireFullScreenExclusiveModeEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquireFullScreenExclusiveModeEXT(device, swapchain);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkReleaseFullScreenExclusiveModeEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkReleaseFullScreenExclusiveModeEXT(device, swapchain);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR* pModes) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceGroupSurfacePresentModes2EXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateHeadlessSurfaceEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkDeviceAddress _glew_vulkan_vkGetBufferDeviceAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkDeviceAddress result = ((VkDeviceAddress)0);
  if (!prototypeCalled && vulkanContext->m_vkGetBufferDeviceAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferDeviceAddressKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint64_t _glew_vulkan_vkGetBufferOpaqueCaptureAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  uint64_t result = ((uint64_t)0);
  if (!prototypeCalled && vulkanContext->m_vkGetBufferOpaqueCaptureAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetBufferOpaqueCaptureAddressKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint64_t _glew_vulkan_vkGetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  uint64_t result = ((uint64_t)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeviceMemoryOpaqueCaptureAddressKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeviceMemoryOpaqueCaptureAddressKHR(device, pInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetLineStippleEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkResetQueryPoolEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetCullModeEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetCullModeEXT(commandBuffer, cullMode);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetFrontFaceEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetFrontFaceEXT(commandBuffer, frontFace);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetPrimitiveTopologyEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport* pViewports) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetViewportWithCountEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D* pScissors) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetScissorWithCountEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets, const VkDeviceSize* pSizes, const VkDeviceSize* pStrides) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBindVertexBuffers2EXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDepthTestEnableEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDepthWriteEnableEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDepthCompareOpEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetDepthBoundsTestEnableEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetStencilTestEnableEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetStencilOpEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks* pAllocator, VkDeferredOperationKHR* pDeferredOperation) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDeferredOperationKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDeferredOperationKHR(device, pAllocator, pDeferredOperation);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyDeferredOperationKHR) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyDeferredOperationKHR(device, operation, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint32_t _glew_vulkan_vkGetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  uint32_t result = ((uint32_t)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeferredOperationMaxConcurrencyKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeferredOperationMaxConcurrencyKHR(device, operation);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetDeferredOperationResultKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetDeferredOperationResultKHR(device, operation);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkDeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkDeferredOperationJoinKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkDeferredOperationJoinKHR(device, operation);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPipelineExecutablePropertiesKHR(VkDevice device, const VkPipelineInfoKHR* pPipelineInfo, uint32_t* pExecutableCount, VkPipelineExecutablePropertiesKHR* pProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPipelineExecutablePropertiesKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPipelineExecutableStatisticsKHR(VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pStatisticCount, VkPipelineExecutableStatisticKHR* pStatistics) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPipelineExecutableStatisticsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkGetPipelineExecutableInternalRepresentationsKHR(VkDevice device, const VkPipelineExecutableInfoKHR* pExecutableInfo, uint32_t* pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPipelineExecutableInternalRepresentationsKHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetGeneratedCommandsMemoryRequirementsNV(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo, VkMemoryRequirements2* pMemoryRequirements) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetGeneratedCommandsMemoryRequirementsNV) {
    prototypeCalled = true;
    vulkanContext->m_vkGetGeneratedCommandsMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdPreprocessGeneratedCommandsNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdExecuteGeneratedCommandsNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBindPipelineShaderGroupNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreateIndirectCommandsLayoutNV(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkIndirectCommandsLayoutNV* pIndirectCommandsLayout) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateIndirectCommandsLayoutNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyIndirectCommandsLayoutNV(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyIndirectCommandsLayoutNV) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyIndirectCommandsLayoutNV(device, indirectCommandsLayout, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkCreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkPrivateDataSlotEXT* pPrivateDataSlot) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreatePrivateDataSlotEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkDestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks* pAllocator) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkDestroyPrivateDataSlotEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkDestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkSetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkSetPrivateDataEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkSetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t* pData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetPrivateDataEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkGetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, pData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfoKHR* pDependencyInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetEvent2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2KHR stageMask) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdResetEvent2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdResetEvent2KHR(commandBuffer, event, stageMask);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent* pEvents, const VkDependencyInfoKHR* pDependencyInfos) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdWaitEvents2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer, const VkDependencyInfoKHR* pDependencyInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdPipelineBarrier2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2KHR stage, VkQueryPool queryPool, uint32_t query) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdWriteTimestamp2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

VkResult _glew_vulkan_vkQueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2KHR* pSubmits, VkFence fence) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkQueueSubmit2KHR) {
    prototypeCalled = true;
    result = vulkanContext->m_vkQueueSubmit2KHR(queue, submitCount, pSubmits, fence);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2KHR stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdWriteBufferMarker2AMD) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkGetQueueCheckpointData2NV(VkQueue queue, uint32_t* pCheckpointDataCount, VkCheckpointData2NV* pCheckpointData) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkGetQueueCheckpointData2NV) {
    prototypeCalled = true;
    vulkanContext->m_vkGetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetFragmentShadingRateEnumNV) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR* pCopyBufferInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyBuffer2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR* pCopyImageInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyImage2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR* pCopyBufferToImageInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyBufferToImage2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR* pCopyImageToBufferInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdCopyImageToBuffer2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR* pBlitImageInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdBlitImage2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR* pResolveImageInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdResolveImage2KHR) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkAcquireWinrtDisplayNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkAcquireWinrtDisplayNV(physicalDevice, display);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_WIN32_KHR)
VkResult _glew_vulkan_vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR* pDisplay) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetWinrtDisplayNV) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
VkResult _glew_vulkan_vkCreateDirectFBSurfaceEXT(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateDirectFBSurfaceEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
VkBool32 _glew_vulkan_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB* dfb) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkBool32 result = ((VkBool32)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceDirectFBPresentationSupportEXT) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetVertexInputEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_FUCHSIA)
VkResult _glew_vulkan_vkGetMemoryZirconHandleFUCHSIA(VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryZirconHandleFUCHSIA) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_FUCHSIA)
VkResult _glew_vulkan_vkGetMemoryZirconHandlePropertiesFUCHSIA(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetMemoryZirconHandlePropertiesFUCHSIA) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetMemoryZirconHandlePropertiesFUCHSIA(device, handleType, zirconHandle, pMemoryZirconHandleProperties);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_FUCHSIA)
VkResult _glew_vulkan_vkImportSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkImportSemaphoreZirconHandleFUCHSIA) {
    prototypeCalled = true;
    result = vulkanContext->m_vkImportSemaphoreZirconHandleFUCHSIA(device, pImportSemaphoreZirconHandleInfo);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_FUCHSIA)
VkResult _glew_vulkan_vkGetSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo, zx_handle_t* pZirconHandle) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkGetSemaphoreZirconHandleFUCHSIA) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetSemaphoreZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_SCREEN_QNX)
VkResult _glew_vulkan_vkCreateScreenSurfaceQNX(VkInstance instance, const VkScreenSurfaceCreateInfoQNX* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkResult result = ((VkResult)0);
  if (!prototypeCalled && vulkanContext->m_vkCreateScreenSurfaceQNX) {
    prototypeCalled = true;
    result = vulkanContext->m_vkCreateScreenSurfaceQNX(instance, pCreateInfo, pAllocator, pSurface);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if defined(VK_USE_PLATFORM_SCREEN_QNX)
VkBool32 _glew_vulkan_vkGetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window* window) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  VkBool32 result = ((VkBool32)0);
  if (!prototypeCalled && vulkanContext->m_vkGetPhysicalDeviceScreenPresentationSupportQNX) {
    prototypeCalled = true;
    result = vulkanContext->m_vkGetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
  }
  GLEW_ASSERT (prototypeCalled);
  return result;
}
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void _glew_vulkan_vkCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32* pColorWriteEnables) {
  bool prototypeCalled = false;
  const glew::vulkan::Context *vulkanContext = glew::vulkan::s_vulkanContext;
  if (!prototypeCalled && vulkanContext->m_vkCmdSetColorWriteEnableEXT) {
    prototypeCalled = true;
    vulkanContext->m_vkCmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
  }
  GLEW_ASSERT (prototypeCalled);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
