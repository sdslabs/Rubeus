# CMakeList.txt:CMake project for RubeusCore, include source and define
# project specific logic here.

cmake_minimum_required (VERSION 3.8)

file(GLOB_RECURSE RUBEUS_SOURCES
    Source/*.cpp
    Game/*.cpp
)

file(GLOB_RECURSE HEADERS
    Source/**
	../vendor/include/*.h
	../vendor/include/*.hpp
)

file(GLOB_RECURSE VENDOR_WIN_LIBRARIES
	../vendor/libraries/Win/*.lib
)

file(GLOB_RECURSE VENDOR_LINUX_LIBRARIES
	../vendor/libraries/Linux/*.a
)

add_definitions(-DGLEW_STATIC)
add_definitions(-DGLFW_DLL)

# This adds the source to this project's executable.
add_executable (RubeusCore "RubeusCore.cpp" "RubeusCore.h" ${RUBEUS_SOURCES} ${HEADERS})

target_include_directories(RubeusCore PUBLIC
    ./Game
    ./Source/Architecture
    ./Source/AudioComponents
    ./Source/Awerere
    ./Source/GraphicComponents
    ./Source/InputManager
    ./Source/MessageSystem
    ./Source/RML
    ./Source/UtilityComponents
    ${OPENGL_INCLUDE_DIRS}
    ../vendor/include/
)

if(WIN32)
    # Remove this line if you want to remove Visual Leak Detection(VLD) reports in Debug mode.
    # Keep this line if you want to have VLD reports to detect memory leaks  
	#add_definitions(-DVLD) 

    target_link_libraries(RubeusCore PUBLIC
        ${OPENGL_LIBRARIES}
		${VENDOR_WIN_LIBRARIES}
        -lstdc++fs
    )

	add_custom_command(TARGET RubeusCore POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "../vendor/libraries/Win/DLLs"
        $<TARGET_FILE_DIR:RubeusCore>)

	Message(STATUS "DLLs have been written to target build directory")
endif(WIN32)

if(UNIX)
    target_link_libraries(RubeusCore PUBLIC
        ${OPENGL_LIBRARIES}
        -lGLEW
        ${SFML_LIBRARIES}
        ${GLFW_LIBRARIES}
        ${IL_LIBRARIES}
        ${ILU_LIBRARIES}
        ${VENDOR_LINUX_LIBRARIES}
        -lstdc++fs
    )
endif(UNIX)

# TODO: Add tests and install targets if needed.
