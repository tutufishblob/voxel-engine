#pragma once

#include "spawn_window.hpp"

namespace SpawnWindow{
class VulkanRenderer{

    public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

    void run();

    private:
        VoxelWindow voxel_window{WIDTH,HEIGHT,"Voxel Engine"};


};


}