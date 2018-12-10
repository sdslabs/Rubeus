# CMakeList.txt : CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

link_directories(Source/)

file(GLOB_RECURSE SOURCES
    Source/*.cpp
    Game/*.cpp
    user_init.cpp
)

# Remove this line if you want to remove Visual Leak Detection(VLD) reports in Debug mode.
# Keep this line if you want to have VLD reports to detect memory leaks
add_definitions(-DVLD)

set(_COMPILE_UNIT_TESTS_ ON CACHE BOOL "Compile unit tests") # Configurable by user
set(OTHER_CONSTANT OFF) # Not configurable by user
configure_file(config.h.in config.h)

# Add source to this project's executable.
add_executable (RubeusCore "RubeusCore.cpp" "RubeusCore.h" ${SOURCES})

target_include_directories(RubeusCore PUBLIC ./Include)
include_directories(${OPENGL_INCLUDE_DIRS})

if(WIN32)
    target_link_libraries(RubeusCore ${OPENGL_LIBRARIES})
endif(WIN32)

if(UNIX)
    add_library(vorbis STATIC IMPORTED)

    target_link_libraries(RubeusCore -ldl sfml-audio sfml-network sfml-graphics sfml-window sfml-system ${OPENGL_LIBRARIES} GLEW glfw openal ${IL_LIBRARIES} ${ILU_LIBRARIES})
endif(UNIX)

# TODO: Add tests and install targets if needed.
