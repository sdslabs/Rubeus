
file(GLOB_RECURSE PM_HEADERS
	../../vendor/include/*.h
	../../vendor/include/*.hpp
)
add_definitions(-DIMGUI_IMPL_OPENGL_LOADER_GLEW)
add_executable (ProjectManager "ProjectManager.cpp" "ProjectManager.h" ${PM_HEADERS})

set(imgui_root ../../vendor/source/ImGui)
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
	../../vendor/include/
)

if(WIN32)
	target_link_libraries(ProjectManager PUBLIC
        ${OPENGL_LIBRARIES}
		${VENDOR_WIN_LIBRARIES}
		imgui
    )
	add_custom_command(TARGET ProjectManager POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "../../vendor/libraries/Win/DLLs"
        $<TARGET_FILE_DIR:ProjectManager>)
endif(WIN32)
if(UNIX)
    target_link_libraries(ProjectManager PUBLIC
        ${OPENGL_LIBRARIES}
        -lGLEW
        ${GLFW_LIBRARIES}
        ${VENDOR_LINUX_LIBRARIES}
        -lstdc++fs
		imgui
    )
endif(UNIX)