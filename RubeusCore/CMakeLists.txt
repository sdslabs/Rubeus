# CMakeList.txt : CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

link_directories(Dependencies/)
link_directories(Source/)

file(GLOB_RECURSE SOURCES
    Source/*.cpp
)

# Keep this in for letting GLEW initialise its function pointers
add_definitions(-DGLEW_STATIC)

# Remove this line if you want to remove Visual Leak Detection(VLD) reports in Debug mode.
# Keep this line if you want to have VLD reports to detect memory leaks
add_definitions(-DVLD)

set(_COMPILE_UNIT_TESTS_ ON CACHE BOOL "Compile unit tests") # Configurable by user
set(OTHER_CONSTANT OFF) # Not configurable by user
configure_file(config.h.in config.h)

# Add source to this project's executable.
add_executable (RubeusCore "RubeusCore.cpp" "RubeusCore.h" ${SOURCES})

add_library(glew32s STATIC IMPORTED)
set_target_properties(glew32s PROPERTIES
    IMPORTED_LOCATION Dependencies/GLEW/lib/glew32s.lib)

add_library(glfw STATIC IMPORTED)
set_target_properties(glfw PROPERTIES
    IMPORTED_LOCATION Dependencies/GLFW/lib-vc2015/glfw3.lib)

target_include_directories(RubeusCore PUBLIC ./Dependencies/GLEW/include)
target_include_directories(RubeusCore PUBLIC ./Dependencies/GLFW/include)
target_include_directories(RubeusCore PUBLIC ./Include)
include_directories(${OPENGL_INCLUDE_DIRS})

target_link_libraries(RubeusCore glew32s glfw ${OPENGL_LIBRARIES})

# TODO: Add tests and install targets if needed.
