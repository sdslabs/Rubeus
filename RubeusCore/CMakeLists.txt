# CMakeList.txt : CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

link_directories(Source/)

file(GLOB_RECURSE HEADERS
	../vendor/DevIL-repo/DevIL/include/*.h
	../vendor/DevIL-repo/DevIL/include/*.hpp
	../vendor/GLEW-repo/include/*.h
	../vendor/GLEW-repo/include/*.hpp
	../vendor/GLFW-repo/include/*.h
	../vendor/GLFW-repo/include/*.hpp
	../vendor/SFML-repo/include/*.h
	../vendor/SFML-repo/include/*.hpp
)

file(GLOB_RECURSE DevIL_SOURCES
	../vendor/DevIL-repo/DevIL/src-IL/src/*.cpp
	../vendor/DevIL-repo/DevIL/src-ILU/src/*.cpp
	../vendor/DevIL-repo/DevIL/src-ILUT/src/*.cpp
)

file(GLOB_RECURSE GLFW_SOURCES
	../vendor/GLFW-repo/src/*.c
)

file(GLOB_RECURSE SFML_SOURCES
	../vendor/SFML-repo/src/SFML/*.cpp
)

file(GLOB_RECURSE SOURCES
	Source/*.cpp
	Game/*.cpp
)

# Remove this line if you want to remove Visual Leak Detection(VLD) reports in Debug mode.
# Keep this line if you want to have VLD reports to detect memory leaks
add_definitions(-DVLD)

set(_COMPILE_UNIT_TESTS_ ON CACHE BOOL "Compile unit tests") # Configurable by user
set(OTHER_CONSTANT OFF) # Not configurable by user
configure_file(config.h.in config.h)

# Add source to this project's executable.
add_executable (
	RubeusCore 
	"RubeusCore.cpp" 
	"RubeusCore.h"
	${HEADERS}
	${SOURCES}
)

target_include_directories(RubeusCore PUBLIC
	# Dependencies
	../vendor/DevIL-repo/DevIL/include
	../vendor/GLEW-repo/include
	../vendor/GLFW-repo/include
	../vendor/SFML-repo/include

	# Rubeus Engine files
	./Include
	
	# Rubeus Game files
	./Game
)

include_directories(${OPENGL_INCLUDE_DIRS})

add_library(devil ${DevIL_SOURCES})
add_library(glfw ${GLFW_SOURCES})
add_library(sfml ${SFML_SOURCES})

if(WIN32)
	add_definitions(-D_GLFW_WIN32)
    target_link_libraries(RubeusCore ${OPENGL_LIBRARIES} devil glfw sfml)
endif(WIN32)

if(UNIX)
    add_library(vorbis STATIC IMPORTED)

    target_link_libraries(RubeusCore -lILU -lIL -lILUT -ldl sfml-audio sfml-network sfml-graphics sfml-window sfml-system ${OPENGL_LIBRARIES} GLEW glfw openal ${IL_LIBRARIES} ${ILU_LIBRARIES} -lstdc++)
endif(UNIX)

# TODO: Add tests and install targets if needed.
