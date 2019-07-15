
#pragma once

#include <fstream>
#include <iostream>
#include <cstdio>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_glfw.h>
#include <ImGui/imgui_impl_opengl3.h>
#include <experimental/filesystem>
#include <array>
#include <map>
#include <functional>
#include <utility>
#include <cstring>

namespace fs = std::experimental::filesystem;

class ProjectManager {
	GLFWwindow* window;

	std::map<std::string, std::string> GameFiles;

	std::array< std::function<void(void)>, 3> viewFunctions;
	bool ProjectWindow = true;
	int CurrentView;
	char RootPath[1024];
	std::string GamePath;
	std::vector<fs::path> ProjectList;
	fs::path CurrentProject;
	std::vector<std::pair<std::string, fs::path>> CurrentProjectObjects;
	std::vector<std::pair<std::string, fs::path>> CurrentProjectLevels;
	bool show_demo_window = true;
	bool show_another_window = false;
public:
	ProjectManager();
	~ProjectManager();
	void initImGuiStyle();
	int showWindow();
	void updateProjectList();
	void updateEngineFilesLists(std::string& Warning);
	void updateEngineFilesLists();
	void displayProjectFiles(std::vector<std::pair<std::string, fs::path>> &test, std::string childName);
	bool createFiles(std::string Type, std::string Name = "");
	void landingPage();
	void allProjectsPage();
	void currentProjectPage();
};
