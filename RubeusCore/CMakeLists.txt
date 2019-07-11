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

file(GLOB_RECURSE PM_HEADERS
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
add_definitions(-DIMGUI_IMPL_OPENGL_LOADER_GLEW)
# This adds the source to this project's executable.
add_executable (RubeusCore "RubeusCore.cpp" "RubeusCore.h" ${RUBEUS_SOURCES} ${HEADERS})

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ProjectManager/)
add_executable (ProjectManager "ProjectManager/ProjectManager.cpp" "ProjectManager/ProjectManager.h" ${PM_HEADERS})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ./)

include_directories(PUBLIC
    ${OPENGL_INCLUDE_DIRS}
    ../vendor/include/
	../vendor/source/
)

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


set(imgui_root ../vendor/source/ImGui)
add_library(imgui STATIC
    ${imgui_root}/imgui.h
    ${imgui_root}/imstb_rectpack.h 
    ${imgui_root}/imstb_textedit.h 
    ${imgui_root}/imstb_truetype.h
    ${imgui_root}/imgui_internal.h
    ${imgui_root}/imgui.cpp
    ${imgui_root}/imgui_demo.cpp
    ${imgui_root}/imgui_draw.cpp
    ${imgui_root}/imgui_widgets.cpp
    ${imgui_root}/imgui_impl_glfw.cpp
    ${imgui_root}/imgui_impl_glfw.h
	${imgui_root}/imgui_impl_opengl3.cpp
    ${imgui_root}/imgui_impl_opengl3.h
	../vendor/include/
)

if(WIN32)
    # Remove this line if you want to remove Visual Leak Detection(VLD) reports in Debug mode.
    # Keep this line if you want to have VLD reports to detect memory leaks  
	# add_definitions(-DVLD) 

    target_link_libraries(RubeusCore PUBLIC
        ${OPENGL_LIBRARIES}
		${VENDOR_WIN_LIBRARIES}
		imgui
    )
	target_link_libraries(ProjectManager PUBLIC
        ${OPENGL_LIBRARIES}
		${VENDOR_WIN_LIBRARIES}
		imgui
    )

	add_custom_command(TARGET RubeusCore POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "../vendor/libraries/Win/DLLs"
        $<TARGET_FILE_DIR:RubeusCore>)
	add_custom_command(TARGET ProjectManager POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "../vendor/libraries/Win/DLLs"
        $<TARGET_FILE_DIR:ProjectManager>)

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
    target_link_libraries(ProjectManager PUBLIC
        ${OPENGL_LIBRARIES}
        -lGLEW
        ${GLFW_LIBRARIES}
        ${VENDOR_LINUX_LIBRARIES}
        -lstdc++fs
		imgui
    )
endif(UNIX)

# TODO: Add tests and install targets if needed.
