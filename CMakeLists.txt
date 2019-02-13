# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
set (CMAKE_CXX_STANDARD 17)

project ("RubeusCore")

set(SFML_STATIC true)

if(WIN32)
	FIND_PACKAGE(OpenGL REQUIRED)
	MESSAGE(STATUS "Windows Platform detected")
endif (WIN32)

if(UNIX)
	FIND_PACKAGE(OpenGL REQUIRED)
	FIND_PACKAGE(glfw3 REQUIRED)
	FIND_PACKAGE(GLEW REQUIRED)
	FIND_PACKAGE(DevIL REQUIRED)
	FIND_PACKAGE(SFML 2.4 COMPONENTS audio graphics window system network REQUIRED)
	MESSAGE(STATUS "Unix platform detected")
endif (UNIX)

# Include sub-projects.
add_subdirectory ("RubeusCore")
