# CMakeList.txt:Top - level CMake project file, do global configuration
# and include sub - projects here.
#
cmake_minimum_required (VERSION 3.8)
set (CMAKE_CXX_STANDARD 17)

project ("RubeusCore")

if (AppVeyor)
    add_definitions(-DNO_VLD)
    Message(STATUS "AppVeyor build detected")
    Message(STATUS "VLD has been turned off")
endif(AppVeyor)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "./cmake_modules/")

if(${CMAKE_BUILD_TYPE} MATCHES "debug")
    Message(STATUS "Debug build activated")
    add_definitions(-D_DEBUG)
else()
    Message(STATUS "Custom build detected")
endif()

set(SFML_STATIC true)

if (WIN32)
	FIND_PACKAGE(OpenGL REQUIRED)
	MESSAGE(STATUS "Windows Platform detected")
endif (WIN32)

if (UNIX)
    set(OpenGL_GL_PREFERENCE "GLVND")
    FIND_PACKAGE(OpenGL REQUIRED)
    FIND_PACKAGE(GLEW REQUIRED)
    FIND_PACKAGE(PkgConfig REQUIRED)
    pkg_search_module(GLFW REQUIRED glfw3)
    FIND_PACKAGE(DevIL REQUIRED)
    FIND_PACKAGE(SFML COMPONENTS audio REQUIRED)
    MESSAGE(STATUS "Unix platform detected")
endif (UNIX)

# Include sub - projects.
add_subdirectory ("RubeusCore")
