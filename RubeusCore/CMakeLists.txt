# CMakeList.txt : CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

file(GLOB_RECURSE SOURCES
    Source/*.cpp
    Game/*.cpp
)

file(GLOB_RECURSE HEADERS
	../vendor/include/*.h
	../vendor/include/*.hpp
)

file(GLOB_RECURSE VENDOR_LIBRARIES
	../vendor/bin/Win/*.lib
)

# Remove this line if you want to remove Visual Leak Detection(VLD) reports in Debug mode.
# Keep this line if you want to have VLD reports to detect memory leaks
add_definitions(-DVLD)
add_definitions(-DGLEW_STATIC)

# This adds the source to this project's executable.
add_executable (RubeusCore "RubeusCore.cpp" "RubeusCore.h" ${SOURCES})

target_include_directories(RubeusCore PUBLIC
    ./Include
    ./Game
    ${OPENGL_INCLUDE_DIRS}
	../vendor/include/
)

if(WIN32)
    target_link_libraries(RubeusCore PUBLIC
        ${OPENGL_LIBRARIES}
		${VENDOR_LIBRARIES}
    )

	add_custom_command(TARGET RubeusCore POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "../vendor/libraries/Win/DLLs"
        $<TARGET_FILE_DIR:RubeusCore>)
endif(WIN32)

if(UNIX)
    add_library(vorbis STATIC IMPORTED)

    target_link_libraries(RubeusCore -lILU -lIL -lILUT -ldl sfml-audio sfml-network sfml-graphics sfml-window sfml-system ${OPENGL_LIBRARIES} GLEW glfw openal ${IL_LIBRARIES} ${ILU_LIBRARIES} -lstdc++)
endif(UNIX)

# TODO: Add tests and install targets if needed.
