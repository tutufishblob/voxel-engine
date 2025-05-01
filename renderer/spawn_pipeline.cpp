#include "spawn_pipeline.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace SpawnWindow{

    VoxelPipeline::VoxelPipeline(const std::string& vert_filepath, const std::string& frag_filepath){
        createGraphicsPipeline(vert_filepath,frag_filepath);
    }

    std::vector<char> VoxelPipeline::readFile(const std::string& filepath){

        std::ifstream file{filepath,std::ios::ate | std::ios::binary}; //ate jumps to the end immediately, binary reads in as a binary to avoid unwanted transformations

        if(!file.is_open()){
            throw std::runtime_error("failed to open fiel: " + filepath);
        }

        size_t file_size = static_cast<size_t>(file.tellg());

        std::vector<char> buffer(file_size);

        file.seekg(0);
        file.read(buffer.data(),file_size);

        file.close();

        return buffer;
    }

    void VoxelPipeline::createGraphicsPipeline(const std::string& vert_filepath, const std::string& frag_filepath){
        auto vert_code = readFile(vert_filepath);
        auto frag_code = readFile(frag_filepath);

        std::cout << "vertex shader code size: " << vert_code.size() << '\n';
        std::cout << "fragment shader code size: " << frag_code.size() << '\n';
    }


}