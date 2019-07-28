/**
 * @file		ProjectManager/logger_component.h.
 *
 * @brief	Declares the ProjectManager class
 */
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

/**
 * @class	ProjectManager
 *
 * @brief	A single instantiated class to generate the ProjectManager GUI
 */
class ProjectManager
{
	/** @brief	The pointer to the window object */ 
	GLFWwindow* window;
	/** @brief	Map containing templates of all game files */
	std::map<std::string, std::string> GameFiles;
	/** @brief	Array of functions which contain code of the GUI to be disaplayed */
	std::array< std::function<void(void)>, 3> viewFunctions;
	/** @brief	Ref of this is used by ImGui to show status of sub-window  */
	bool ProjectWindow = true;
	/** @brief used to control ProjectManager::GameFiles */
	int CurrentView;
	/** @brief Stores the absolute path of Rubeus repo */
	char RootPath[1024];
	/** @brief Stores the absolute path of Game directory */
	std::string GamePath;
	/** @brief Stores the absolute paths of Projects in Game directory */
	std::vector<fs::path> ProjectList;
	/** @brief Stores the absolute path of Current Project directory */
	fs::path CurrentProjectPath;
	/** @brief Stores name and absolute path of Object */
	std::vector<std::pair<std::string, fs::path>> CurrentProjectObjects;
	/** @brief Stores name and absolute path of Level */
	std::vector<std::pair<std::string, fs::path>> CurrentProjectLevels;

	/**
	 * @fn		void updateProjectList();
	 *
	 * @brief	Helper Function to update List of projects in case of creation/deletion of project
	 */
	void updateProjectList();
	/**
	 * @fn		void updateProjectFilesLists(std::string& Warning);
	 *
	 * @brief	updates level/object files list on landing on a project's page and checks for the presence of .h file for each .cpp file
	 *
	 * @param	Warning Contains warning message in case of missing .h files for .cpp files
	 */
	void updateProjectFilesLists(std::string& Warning);
	/**
	 * @fn		void updateProjectFilesLists();
	 *
	 * @brief	updates level/object files list in case of creation/deletion of level/object
	 */
	void updateProjectFilesLists();
	/**
	 * @fn		void displayProjectFiles(std::vector<std::pair<std::string, fs::path>> &ProjectComponent, std::string childName);
	 *
	 * @brief	ImGui API calls for displaying levels/objects
	 *
	 * @param	ProjectComponent Vector of pairs consisting of name of object/level and absolute path of that object/level's .cpp file
	 */
	void displayProjectFiles(std::vector<std::pair<std::string, fs::path>> &ProjectComponent, std::string childName);
	/**
	 * @fn		void updateProjectFilesLists(std::string& Warning);
	 *
	 * @brief	updates level/object files list in case of creation/deletion of level/object and checks for the presence of .h file for each .cpp file
	 *
	 * @param	ProjectComponent Vector of pairs consisting of name of object/level and absolute path of that object/level's .cpp file
	 */
	bool createFiles(std::string Type, std::string Name = "");
	/**
	 * @fn		void landingPage();
	 *
	 * @brief	ImGui API calls for GUI of landing page, part of viewFunctions
	 */
	void landingPage();
	/**
	 * @fn		void allProjectsPage();
	 *
	 * @brief	ImGui API calls for GUI of All Projects page, part of viewFunctions
	 */
	void allProjectsPage();
	/**
	 * @fn		void selectedProjectPage();
	 *
	 * @brief	ImGui API calls for GUI of Selected Project page, part of viewFunctions
	 */
	void selectedProjectPage();
public:
	/**
	 * @fn		ProjectManager();
	 *
	 * @brief	Constructor for ProjectManager
	 */
	ProjectManager();
	/**
	 * @fn		~ProjectManager();
	 *
	 * @brief	Destructor for ProjectManager
	 */
	~ProjectManager();
	/**
	 * @fn		init();
	 *
	 * @brief	Initialises GLFW window and ImGui
	 */
	bool init();
	/**
	 * @fn		run();
	 *
	 * @brief	Runs the rendering loop and ImGui API calls take place here
	 */
	void run();
	/**
	 * @fn		end();
	 *
	 * @brief	Terminates the window
	 */
	void end();
};
