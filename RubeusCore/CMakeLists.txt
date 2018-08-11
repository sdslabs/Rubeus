# CMakeList.txt : CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

link_directories(Source/)

file(GLOB_RECURSE SOURCES
    Source/*.cpp
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
    MESSAGE(STATUS "Linking Windows libraries")
    target_link_libraries(RubeusCore ${OPENGL_LIBRARIES})

elseif(APPLE)
    MESSAGE(STATUS "Linking Apple libraries")
    target_link_libraries(RubeusCore ${OPENGL_LIBRARIES} -lGLEW FLAC OpenAL OpenGL Vorbis ${IL_LIBRARIES} ${ILU_LIBRARIES} glfw openal)

elseif(UNIX)
    MESSAGE(STATUS "Linking Unix libraries")
    add_library(vorbis STATIC IMPORTED)
    set_target_properties(vorbis PROPERTIES
        IMPORTED_LOCATION  ${Vorbis_LIB}
    )
    add_library(vorbisfile STATIC IMPORTED)
    set_target_properties(vorbisfile PROPERTIES
        IMPORTED_LOCATION  ${VorbisFile_LIB}
    )
    target_link_libraries(RubeusCore -ldl sfml-audio sfml-network sfml-graphics sfml-window sfml-system ${OPENGL_LIBRARIES} GLEW glfw openal ${IL_LIBRARIES} ${ILU_LIBRARIES} vorbis vorbisfile)

endif(WIN32)


# TODO: Add tests and install targets if needed.
