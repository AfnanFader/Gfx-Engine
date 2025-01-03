#include "VK_Renderer.hpp"

namespace Renderer
{

inline std::vector<VkQueueFamilyProperties> VkGraphic::GetDeviceQueueFamilyProperties(VkPhysicalDevice device)
{
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, nullptr);
    std::vector<VkQueueFamilyProperties> familiesProperties(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, familiesProperties.data());

    return familiesProperties;
}

inline VkPhysicalDeviceProperties VkGraphic::GetPhysicalDeviceProperties(VkPhysicalDevice device)
{
    VkPhysicalDeviceProperties deviceProperties = {};
    vkGetPhysicalDeviceProperties(device, &deviceProperties);

    return deviceProperties;
}

} // namespace Renderer
