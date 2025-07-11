cmake_minimum_required(VERSION 3.28.3)
project(VulkanGameEngine)
set(CMAKE_CXX_STANDARD 17)
# Find Vulkan
find_package(Vulkan REQUIRED)
# Include directories
include_directories(${Vulkan_INCLUDE_DIRS})
# Source files
file(GLOB SOURCES "src/*.cpp")
# Create executable
add_executable(VulkanGameEngine ${SOURCES})
# Link Vulkan
target_link_libraries(VulkanGameEngine ${Vulkan_LIBRARIES})