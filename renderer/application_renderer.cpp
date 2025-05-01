#include "vulkan_renderer.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

extern "C" { 
    int start();
}


int start(){
    SpawnWindow::VulkanRenderer voxel_window{};

    try{
        voxel_window.run();
    }catch(const std::exception &e){
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}