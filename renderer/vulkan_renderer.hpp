#pragma once

#include "spawn_window.hpp"
#include "spawn_pipeline.hpp"


namespace SpawnWindow{
class VulkanRenderer{

    public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

    void run();

    private:
        VoxelWindow voxel_window{WIDTH,HEIGHT,"Voxel Engine"};
        VoxelPipeline voxel_pipeline{"renderer/shaders/basic_shader.vert.spv","renderer/shaders/basic_shader.frag.spv"};

};


}