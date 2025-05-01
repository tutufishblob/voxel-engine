#pragma once

#include <string>
#include <vector>

namespace SpawnWindow
{
    class VoxelPipeline{
        public:
        VoxelPipeline(const std::string& vert_filepath, const std::string& frag_filepath);
        
        private:

            static std::vector<char> readFile(const std::string& filepath);

            void createGraphicsPipeline(const std::string& vert_filepath, const std::string& frag_filepath);
    };
} // namespace SpawnWindow
