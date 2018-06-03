# CMakeList.txt : CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

link_directories(Dependencies/)
link_directories(Source/)

file(GLOB_RECURSE SOURCES
    Source/*.cpp
)

set(_COMPILE_UNIT_TESTS_ ON CACHE BOOL "Compile unit tests") # Configurable by user 
set(OTHER_CONSTANT OFF) # Not configurable by user
configure_file(config.h.in config.h)

# Add source to this project's executable.
add_executable (RubeusCore "RubeusCore.cpp" "RubeusCore.h" ${SOURCES})

add_library(glew32s STATIC IMPORTED)
set_target_properties(glew32s PROPERTIES
    IMPORTED_LOCATION Dependencies/GLEW/lib/glew32.lib)

add_library(glfw STATIC IMPORTED)
set_target_properties(glfw PROPERTIES
    IMPORTED_LOCATION Dependencies/GLFW/lib-vc2015/glfw3.lib)

add_library(rml STATIC IMPORTED)
set_target_properties(rml PROPERTIES
    IMPORTED_LOCATION Dependencies/RML/lib/RMaths.lib)

target_include_directories(RubeusCore PUBLIC ./Dependencies/GLEW/include)
target_include_directories(RubeusCore PUBLIC ./Dependencies/GLFW/include)
target_include_directories(RubeusCore PUBLIC ./Dependencies/RML/include)
target_include_directories(RubeusCore PUBLIC ./Include)
target_include_directories(RubeusCore PUBLIC ./Source)
include_directories(${OPENGL_INCLUDE_DIRS})

target_link_libraries(RubeusCore PUBLIC glew32s glfw rml ${OPENGL_LIBRARIES})

set(HEADERFILES glew.h glfw3.h RMaths.h opengl32.lib)

# TODO: Add tests and install targets if needed.
