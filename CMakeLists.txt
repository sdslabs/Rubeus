# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
set (CMAKE_CXX_STANDARD 17)

project ("RubeusCore")

set(SFML_STATIC false)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "/usr/share/SFML/Modules/")

FIND_PACKAGE(OpenGL REQUIRED)
FIND_PACKAGE(glfw3 REQUIRED)
FIND_PACKAGE(GLEW REQUIRED)
FIND_PACKAGE(DevIL REQUIRED)
find_package(SFML 2.5 COMPONENTS audio graphics window system network REQUIRED)

# Include sub-projects.
add_subdirectory ("RubeusCore")
