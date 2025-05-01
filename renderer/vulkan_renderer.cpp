#include "vulkan_renderer.hpp"

namespace SpawnWindow{
    void VulkanRenderer::run(){

        while(!voxel_window.shouldClose()){
            glfwPollEvents();
        }

    }
}