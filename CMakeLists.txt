# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
set (CMAKE_CXX_STANDARD 17)

project ("RubeusCore")

FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(glfw3 REQUIRED)
FIND_PACKAGE(GLEW REQUIRED)
FIND_PACKAGE(DevIL REQUIRED)
FIND_PACKAGE(SFML 2.5 CONFIG COMPONENTS SFML::audio REQUIRED)

# Include sub-projects.
add_subdirectory ("RubeusCore")
