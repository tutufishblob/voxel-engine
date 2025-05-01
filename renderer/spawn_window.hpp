#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace SpawnWindow{
    class VoxelWindow{

        public: 
            VoxelWindow(int w, int h, std::string name);
            ~VoxelWindow();

            bool shouldClose(){
                return glfwWindowShouldClose(window);
            }
        private:
            void initWindow();

            const int width;
            const int height;

            std::string window_name;
            
            GLFWwindow * window;
    };
}