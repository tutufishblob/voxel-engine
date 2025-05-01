#include "spawn_window.hpp"

namespace SpawnWindow{

    VoxelWindow::VoxelWindow(int w, int h, std::string name): width{w},height{h}, window_name{name}{
        initWindow();


    }

    VoxelWindow::~VoxelWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void VoxelWindow::initWindow(){
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);

        glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE);

        window = glfwCreateWindow(width,height,window_name.c_str(),nullptr,nullptr);
    }


}