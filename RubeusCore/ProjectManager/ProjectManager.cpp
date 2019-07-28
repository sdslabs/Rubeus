#include "ProjectManager.h"

ProjectManager::ProjectManager() :CurrentView(0)
{
	//ImGuiStyle& style = ImGui::GetStyle();


	memset(RootPath, 0, sizeof(RootPath));

	GameFiles.insert({ "UserInitH", R"V0G0N("#pragma once
// Include Game levels here as
// #include "game_name/engine_files/level.level_name.h")V0G0N" });

	GameFiles.insert({ "UserInitCpp", R"V0G0N(#include "user_init.h"
#include "../../RubeusCore.h"
// Initialise levels here as
// SampleLevel * sample_level = new SampleLevel("sample_level");
// Add startup level as
// std::string startupLevel = "sample_level";
// Initialise game objects as
// SampleObject * sample_object = new SampleObject(
// 	   "sample_object",
// 	   "sample_level",
// 	   6.0f, 3.0f,
// 	   3.0f, 3.0f,
// 	   "Assets/debug.png",
// 	   false
// );)V0G0N" });

	GameFiles.insert({ "LevelH", R"V0G0N(#pragma once
#include "../../RubeusCore.h"
class %s : public Rubeus::RLevel
{
REGISTERLEVELCLASS(%s)
};)V0G0N" });

	GameFiles.insert({ "LevelCpp", R"V0G0N(#include "level.%s.h"
void %s::begin()
{
}
void %s::onEnd()
{
})V0G0N" });

	GameFiles.insert({ "ObjectH", R"V0G0N(#pragma once
#include "../../RubeusCore.h"
class %s : public Rubeus::RGameObject
{
REGISTEROBJECTCLASS(%s)
};)V0G0N" });

	GameFiles.insert({ "ObjectCpp", R"V0G0N(#include "object.%s.h"
void %s::begin()
{
}
void %s::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}
void %s::tick()
{
}
void %s::onMessage(Rubeus::Message * msg)
{
})V0G0N" });

	viewFunctions = { { std::bind(&ProjectManager::landingPage, this), std::bind(&ProjectManager::allProjectsPage, this), std::bind(&ProjectManager::selectedProjectPage, this) } };
}
ProjectManager::~ProjectManager()
{
	
}

//HELPER FUNCTIONS

void ProjectManager::updateProjectList()
{
	ProjectList.clear();
	for (const auto & entry : fs::directory_iterator(GamePath))
		ProjectList.push_back(entry.path());
}

void ProjectManager::updateProjectFilesLists(std::string& Warning)
{
	CurrentProjectLevels.clear();
	CurrentProjectObjects.clear();
	for (const auto& DirEntry : fs::directory_iterator(fs::path(CurrentProjectPath / "engine_files")))
		if (DirEntry.path().extension() == fs::path(".cpp"))
			if (fs::exists((DirEntry.path().parent_path() / DirEntry.path().stem()).string() + ".h"))
			{
				std::string DirEntryStemString = DirEntry.path().stem().string();
				if (DirEntryStemString.substr(0, 6) == "level.")
					CurrentProjectLevels.emplace_back(DirEntryStemString.substr(6, DirEntry.path().string().length() - 1), DirEntry.path());
				else if (DirEntryStemString.substr(0, 7) == "object.")
					CurrentProjectObjects.emplace_back(DirEntryStemString.substr(7, DirEntry.path().string().length() - 1), DirEntry.path());
			}
			else
				Warning += DirEntry.path().filename().string() + " ";
}
void ProjectManager::updateProjectFilesLists()
{
	CurrentProjectLevels.clear();
	CurrentProjectObjects.clear();
	for (const auto& DirEntry : fs::directory_iterator(fs::path(CurrentProjectPath / "engine_files")))
		if (DirEntry.path().extension() == fs::path(".cpp"))
			if (fs::exists((DirEntry.path().parent_path() / DirEntry.path().stem()).string() + ".h"))
			{
				std::string DirEntryStemString = DirEntry.path().stem().string();
				if (DirEntryStemString.substr(0, 6) == "level.")
					CurrentProjectLevels.emplace_back(DirEntryStemString.substr(6, DirEntry.path().string().length() - 1), DirEntry.path());
				else if (DirEntryStemString.substr(0, 7) == "object.")
					CurrentProjectObjects.emplace_back(DirEntryStemString.substr(7, DirEntry.path().string().length() - 1), DirEntry.path());
			}
}
void ProjectManager::displayProjectFiles(std::vector<std::pair<std::string, fs::path>> &ProjectComponent, std::string ChildName)
{
	ImGuiWindowFlags window_flags = ImGuiWindowFlags_HorizontalScrollbar;
	ImGui::BeginChild(ChildName.c_str(), ImVec2(ImGui::GetWindowContentRegionWidth(), 90), false, window_flags);

	ImVec2 button_sz(180, 80);
	ImGuiStyle& style = ImGui::GetStyle();
	float window_visible_x2 = ImGui::GetWindowPos().x + ImGui::GetWindowContentRegionMax().x;

	for (unsigned i = 0; i < ProjectComponent.size(); i++)
	{
		ImGui::PushID(i);
		if (ImGui::Button(ProjectComponent[i].first.c_str(), button_sz))
		{
			CurrentProjectPath = ProjectList[i];
			CurrentView = 2;
		}
		if (ImGui::BeginPopupContextItem())
		{
			if (ImGui::Button("Delete"))
			{
				fs::remove(ProjectComponent[i].second);
				fs::remove((ProjectComponent[i].second.parent_path() / ProjectComponent[i].second.stem()).string() + std::string(".h"));
				updateProjectFilesLists();
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}
		float last_button_x2 = ImGui::GetItemRectMax().x;
		float next_button_x2 = last_button_x2 + style.ItemSpacing.x + button_sz.x;
		if (i + 1 < ProjectComponent.size() && next_button_x2 < window_visible_x2)
			ImGui::SameLine();
		ImGui::PopID();
	}
	ImGui::EndChild();
}
bool ProjectManager::createFiles(std::string Type, std::string Name)
{
	std::transform(Name.begin(), Name.end(), Name.begin(), ::tolower);
	std::string Name_h, Name_cpp;
	std::string BasePath = CurrentProjectPath.string();
	if (Type == "Level")
	{
		Name_h = BasePath + "/engine_files/level." + Name + ".h";
		Name_cpp = BasePath + "/engine_files/level." + Name + ".cpp";
	}
	else if (Type == "Object")
	{
		Name_h = BasePath + "/engine_files/object." + Name + ".h";
		Name_cpp = BasePath + "/engine_files/object." + Name + ".cpp";
	}
	else if (Type == "UserInit")
	{
		Name_h = BasePath + "/user_init.h";
		Name_cpp = BasePath + "/user_init.cpp";
	}
	FILE* NewFileH = fopen(Name_h.c_str(), "w");
	if (NewFileH == NULL)
		return 1;
	FILE* NewFileCpp = fopen(Name_cpp.c_str(), "w");
	if (NewFileCpp == NULL)
	{
		fs::remove(fs::path(Name_h));
		return 1;
	}
	char NameCStr[1024];
	strcpy(NameCStr, Name.c_str());
	if (Type == "UserInit")
	{
		fprintf(NewFileH, GameFiles[Type + "H"].c_str());
		fprintf(NewFileCpp, GameFiles[Type + "Cpp"].c_str());
	}
	else if (Type == "Object")
	{
		fprintf(NewFileH, GameFiles[Type + "H"].c_str(), NameCStr, NameCStr, NameCStr);
		fprintf(NewFileCpp, GameFiles[Type + "Cpp"].c_str(), NameCStr, NameCStr, NameCStr, NameCStr, NameCStr);
	}
	else if (Type == "Level")
	{
		fprintf(NewFileH, GameFiles[Type + "H"].c_str(), NameCStr, NameCStr);
		fprintf(NewFileCpp, GameFiles[Type + "Cpp"].c_str(), NameCStr, NameCStr, NameCStr);
	}
	fclose(NewFileCpp);
	fclose(NewFileH);
	updateProjectFilesLists();
	return 0;
}

//VIEW FUNCTIONS WHICH ARE BEING STORED IN viewFunctions ARRAY

void ProjectManager::landingPage()
{
	static bool ErrorMsg = false;
	ImGui::Text("Enter path of root directory of Rubeus-");
	ImGui::Dummy(ImVec2(0, 30));
	ImGui::InputText("##source", RootPath, IM_ARRAYSIZE(RootPath));
	ImGui::Dummy(ImVec2(0, 20));
	if (ImGui::Button("OK"))
		if (fs::exists(fs::path(RootPath))) {
			int length = strlen(RootPath);
			if (RootPath[length - 1] == '/' || RootPath[length - 1] == '\\')
				RootPath[--length] = 0;
			if (RootPath[length - 1] == 's' && RootPath[length - 2] == 'u' && RootPath[length - 3] == 'e' && RootPath[length - 4] == 'b' && RootPath[length - 5] == 'u' && RootPath[length - 6] == 'R')
				CurrentView = 1;
			else
				ErrorMsg = true;
		}
		else
			ErrorMsg = true;
	if (ErrorMsg == true)
	{
		ImGui::Dummy(ImVec2(0, 10));
		ImGui::Text("ERROR: Incorrect Directory");
	}
}
void ProjectManager::allProjectsPage()
{
	if (GamePath.empty())
	{
		GamePath = std::string(RootPath) + std::string("/RubeusCore/Game");
		updateProjectList();
	}
	ImGui::Dummy(ImVec2(0.0f, 15.0f));
	ImGui::SameLine(20.0f);
	ImGui::Text("All projects-");
	ImGui::Dummy(ImVec2(0.0f, 20.0f));
	ImGui::Separator();
	ImGui::BeginChild("Child1", ImVec2(ImGui::GetWindowContentRegionWidth(), 220), false);


	ImVec2 button_sz(160, 80);
	ImGuiStyle& style = ImGui::GetStyle();
	float window_visible_x2 = ImGui::GetWindowPos().x + ImGui::GetWindowContentRegionMax().x;

	for (unsigned i = 0; i < ProjectList.size(); i++)
	{
		ImGui::PushID(i);
		if (ImGui::Button(ProjectList[i].filename().string().c_str(), button_sz))
		{
			CurrentProjectPath = ProjectList[i];
			CurrentView = 2;
		}
		if (ImGui::BeginPopupContextItem())
		{
			if (ImGui::Button("Delete"))
			{
				fs::remove_all(ProjectList[i]);
				updateProjectList();
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}
		float last_button_x2 = ImGui::GetItemRectMax().x;
		float next_button_x2 = last_button_x2 + style.ItemSpacing.x + button_sz.x;
		if (i + 1 < ProjectList.size() && next_button_x2 < window_visible_x2)
			ImGui::SameLine();
		ImGui::PopID();
	}
	ImGui::EndChild();
	ImGui::Separator();
	ImGui::Dummy(ImVec2(0.0f, 20.0f));
	if (ImGui::Button("New Project", ImVec2(160, 40)))
		ImGui::OpenPopup("New Project");

	if (ImGui::BeginPopupModal("New Project", NULL, ImGuiWindowFlags_AlwaysAutoResize))
	{
		static char NewProjectName[1024];
		static char ErrorMsg[100];
		ImGui::Text("Enter Name of Project-");
		ImGui::InputText("##source", NewProjectName, IM_ARRAYSIZE(NewProjectName));
		ImGui::Separator();

		if (ErrorMsg[0] != 0)
		{
			ImGui::Text(ErrorMsg);
		}

		if (ImGui::Button("Create", ImVec2(120, 0)))
		{
			CurrentProjectPath = GamePath + std::string("/") + std::string(NewProjectName);
			if (fs::create_directory(CurrentProjectPath))
			{
				updateProjectList();
				fs::create_directory(CurrentProjectPath / fs::path("engine_files"));
				createFiles("UserInit");
				memset(NewProjectName, 0, sizeof(NewProjectName));
				memset(ErrorMsg, 0, sizeof(ErrorMsg));
				ImGui::CloseCurrentPopup();
			}
			else
			{
				strcpy(ErrorMsg, "ERROR: project files creation failed, try changing project name");
			}
		}
		ImGui::SetItemDefaultFocus();
		ImGui::SameLine();
		if (ImGui::Button("Cancel", ImVec2(120, 0)))
		{
			ImGui::CloseCurrentPopup();
		}
		ImGui::EndPopup();
	}
	if (ImGui::Button("SIMPLE DEV MODE", ImVec2(160, 40)))
	{
		std::string Command = "cmake -D_DEV=1 ";
		Command.append(RootPath);
		system(Command.c_str());
	}
	ImGui::Text("SIMPLE DEV MODE uses last used Project and ping_pong if this is a first time use");
	ImGui::Text("Look at the command window after pressing it and ignore warning related\nto unused variables");

}
void ProjectManager::selectedProjectPage()
{
	//Not relevant outside this so though it was better to declare these here
	static bool NewObjectError;
	static bool NewLevelError;
	static std::string Warning;
	static bool EngineFilesScanned = false;
	static char NewObjectName[1024];
	static char NewLevelName[1024];
	if (EngineFilesScanned == false) {
		updateProjectFilesLists(Warning);
		EngineFilesScanned = true;
	}
	if (!Warning.empty()) {
		if (ImGui::BeginPopupModal("Warning", NULL, ImGuiWindowFlags_AlwaysAutoResize))
		{

			ImGui::Text("WARNING\n These files don't have corresponding .h files-");
			ImGui::Text(Warning.c_str());
			if (ImGui::Button("OK", ImVec2(120, 0)))
			{
				ImGui::CloseCurrentPopup();
			}
			ImGui::EndPopup();
		}
	}
	if (ImGui::Button("<-"))
	{
		CurrentView = 1;
		NewObjectError = 0;
		NewLevelError = 0;
		Warning = "";
		EngineFilesScanned = false;
		memset(NewObjectName, 0, sizeof(NewObjectName));
		memset(NewLevelName, 0, sizeof(NewLevelName));
	}
	ImGui::SameLine();
	ImGui::Text("Current Project- ");
	ImGui::SameLine();
	ImGui::Text(CurrentProjectPath.string().c_str());
	ImGui::Dummy(ImVec2(0.0f, 8.0f));
	ImGui::Text("Levels-");
	ImGui::Dummy(ImVec2(0.0f, 5.0f));
	ImGui::Separator();
	ImGui::Dummy(ImVec2(0.0f, 5.0f));
	displayProjectFiles(CurrentProjectLevels, "Child1");
	ImGui::Dummy(ImVec2(0.0f, 5.0f));
	ImGui::InputText("##source1", NewLevelName, IM_ARRAYSIZE(NewLevelName));
	ImGui::SameLine();
	if (ImGui::Button("Create New Level") && NewLevelName[0] != 0)
	{
		NewLevelError = createFiles("Level", NewLevelName);
		if (!NewLevelError)
			memset(NewLevelName, 0, sizeof(NewLevelName));
	}
	if (NewLevelError)
		ImGui::Text("ERROR: level files creation failed, try changing level name");
	ImGui::Dummy(ImVec2(0.0f, 8.0f));
	ImGui::Text("Objects-");
	ImGui::Dummy(ImVec2(0.0f, 3.0f));
	ImGui::Separator();
	ImGui::Dummy(ImVec2(0.0f, 3.0f));
	displayProjectFiles(CurrentProjectObjects, "Child2");
	ImGui::Dummy(ImVec2(0.0f, 3.0f));
	ImGui::InputText("##source2", NewObjectName, IM_ARRAYSIZE(NewObjectName));
	ImGui::SameLine();
	if (ImGui::Button("Create New Object") && NewObjectName[0] != 0)
	{
		NewObjectError = createFiles("Object", NewObjectName);
		if (!NewObjectError)
			memset(NewObjectName, 0, sizeof(NewObjectName));
	}
	if (NewObjectError)
		ImGui::Text("ERROR: Object files creation failed, try changing object name");
	ImGui::Dummy(ImVec2(0.0f, 5.0f));
	if (ImGui::Button("USE THIS PROJECT"))
	{
		std::string Command("cmake -D_PROJECT=" + CurrentProjectPath.stem().string() + " ");
		Command.append(RootPath);
		system(Command.c_str());
	}
	ImGui::SameLine();
	if (ImGui::Button("DEV MODE"))
	{
		std::string Command("cmake -D_DEV=1 -D_PROJECT=" + CurrentProjectPath.stem().string() + " ");
		Command.append(RootPath);
		system(Command.c_str());
	}
	ImGui::Text("Look at the command window after pressing above buttons and ignore warning related\nto unused variables");
}

bool ProjectManager::init()
{
	glfwSetErrorCallback([](int, const char* err_str){std::cout << "GLFW Error: " << err_str << std::endl;});
	if (!glfwInit())
		return false;

	window = glfwCreateWindow(640, 480, "Rubeus Project Manager", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return false;
	}

	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK)
	{
		std::cout << "GLEW initialisation failed";
		return false;
	}

	ImGui::CreateContext();
	ImGui_ImplGlfw_InitForOpenGL(window, true);
	ImGui_ImplOpenGL3_Init("#version 130");
	ImGui::StyleColorsDark();
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
	ImGuiStyle& style = ImGui::GetStyle();
	style.WindowPadding = ImVec2(20, 20);
	style.WindowRounding = 0.0f;
	style.WindowBorderSize = 0.0f;
	style.WindowMinSize = ImVec2(100, 200);
	style.WindowTitleAlign = ImVec2(0.2f, 0.5f);
}

void ProjectManager::run()
{
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
		ImGui::NewFrame();

		if (ProjectWindow)
		{
			static bool WindowLocationInit = false;
			ImGui::Begin("Rubeus Project Manager", &ProjectWindow, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoTitleBar);
			ImGui::SetWindowSize(ImVec2((float)640, (float)480));
			if (!WindowLocationInit)
			{
				ImGui::SetWindowPos(ImVec2(0, 0));
				WindowLocationInit = true;
			}
			viewFunctions[CurrentView]();
			ImGui::End();
		}

		ImGui::Render();
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

		glfwSwapBuffers(window);
		glfwPollEvents();

	}

}

void ProjectManager::end()
{
	glfwTerminate();
}
 

int main(void)
{
	ProjectManager PM;
	if (!PM.init())
		exit(1);
	PM.run();
	PM.end();
	return 0;
}
