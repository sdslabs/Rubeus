#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_glfw.h>
#include <ImGui/imgui_impl_opengl3.h>
#include <experimental/filesystem>
#include <array>
#include <map>
#include <functional>
class ProjectManager {
	GLFWwindow* window;

	std::map<std::string, std::string> GameFiles;

	std::array< std::function<void(void)>, 3> viewFunctions;
	//void (ProjectManager::* viewFunctions[2])();
	bool ProjectWindow = true;
	int CurrentView;
	char RootPath[1024];
	std::string GamePath;
	std::vector<std::experimental::filesystem::path> ProjectList;
	std::experimental::filesystem::path CurrentProject;
	std::vector<std::experimental::filesystem::path> CurrentProjectEngineFiles;
	bool show_demo_window = true;
	bool show_another_window = false;
public:
	ProjectManager() :CurrentView(1)
	{
		//ImGuiStyle& style = ImGui::GetStyle();


		memset(RootPath, 0, sizeof(RootPath));

		//REMOVE THIS
		strcpy(RootPath, "D:/Rubeus");

		GameFiles.insert({ "UserInitH", R"V0G0N("#pragma once
			// Include Game levels here as
			// #include "game_name/engine_files/level.level_name.h"
		)V0G0N" });

		GameFiles.insert({ "UserInitCpp", R"V0G0N("#include "user_init.h"
#include "../RubeusCore.h"
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
// );
		)V0G0N" });

		GameFiles.insert({ "LevelH", R"V0G0N("#pragma once
#include "../RubeusCore.h"
class %s : public Rubeus::RLevel
{
protected:
// User defined members
// Don't look down
public:
%s(std::string name)
: RLevel(name)
{
}
~%s()
{
}
void begin() override;
void onEnd() override;
};
		)V0G0N" });

		GameFiles.insert({ "LevelCpp", R"V0G0N("#include "%s.h"
void %s::begin()
{
}
void %s::onEnd()
{
}
		)V0G0N" });

		GameFiles.insert({ "ObjectH", R"V0G0N("#pragma once
#include "../RubeusCore.h"
class %s : public Rubeus::RGameObject
{
// User members
// Do not look below
public:
%s(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Rubeus::Awerere::EColliderType & type = Rubeus::Awerere::EColliderType::NO_COLLIDER, Rubeus::Awerere::ACollider * collider = NULL, bool generatesHit = false, const Rubeus::Awerere::APhysicsMaterial & physicsMat = Rubeus::Awerere::APhysicsMaterial())
: RGameObject(name, levelName, x, y, deltaX, deltaY, imageFilePath, enablePhysics, type, collider, generatesHit, physicsMat)
{
}
// TODO: Add default paramters
%s(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics = false, const Rubeus::Awerere::APhysicsMaterial & material = Rubeus::Awerere::APhysicsMaterial(), const Rubeus::Awerere::EColliderType & type = Rubeus::Awerere::EColliderType::NO_COLLIDER, Rubeus::Awerere::ACollider * collider = NULL, bool generatesHit = false)
: RGameObject(name, levelName, x, y, deltaX, deltaY, r, g, b, enablePhysics, material, type, collider, generatesHit)
{
}
void begin() override;
void onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData) override;
void onMessage(Rubeus::Message * msg) override;
void tick() override;
};
		)V0G0N" });

		GameFiles.insert({ "ObjectCpp", R"V0G0N("#include "%s.h"
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
}
		)V0G0N" });

		viewFunctions = { { std::bind(&ProjectManager::landingPage, this), std::bind(&ProjectManager::allProjectsPage, this), std::bind(&ProjectManager::currentProjectPage, this) } };
		showWindow();
	}
	~ProjectManager()
	{
		glfwTerminate();
	}
	void initImGuiStyle()
	{
		ImGuiStyle& style = ImGui::GetStyle();
		style.WindowPadding = ImVec2(20, 20);
		style.WindowRounding = 0.0f;
		style.WindowBorderSize = 0.0f;
		style.WindowMinSize = ImVec2(100, 200);
		style.WindowTitleAlign = ImVec2(0.2f, 0.5f);
	}

	int showWindow()
	{
		if (!glfwInit())
			return -1;

		/* Create a windowed mode window and its OpenGL context */
		window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
		if (!window)
		{
			glfwTerminate();
			return -1;
		}

		/* Make the window's context current */
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
		bool show_demo_window = true;
		bool show_another_window = false;
		bool show_test_window = true;
		bool show_project_window = false;
		ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
		initImGuiStyle();

		/* Loop until the user closes the window */
		while (!glfwWindowShouldClose(window))
		{



			/* Render here */
			glClear(GL_COLOR_BUFFER_BIT);

			ImGui_ImplOpenGL3_NewFrame();
			ImGui_ImplGlfw_NewFrame();
			ImGui::NewFrame();

			if (show_demo_window)
				ImGui::ShowDemoWindow(&show_demo_window);

			// 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
			{
				static float f = 0.0f;
				static int counter = 0;

				ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.

				ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
				ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
				ImGui::Checkbox("Another Window", &show_another_window);

				ImGui::SliderFloat("float", &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
				ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

				if (ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
					counter++;
				ImGui::SameLine();
				ImGui::Text("counter = %d", counter);

				ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
				ImGui::End();
			}

			// 3. Show another simple window.
			if (show_another_window)
			{
				ImGui::Begin("Another Window", &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
				ImGui::Text("Hello from another window!");
				if (ImGui::Button("Close Me"))
					show_another_window = false;
				ImGui::End();
			}
			if (ProjectWindow)
			{
				ImGui::Begin("Rubeus Project Manager", &ProjectWindow);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
				viewFunctions[CurrentView]();
				ImGui::End();
			}

			ImGui::Render();
			ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

			/* Swap front and back buffers */
			glfwSwapBuffers(window);

			/* Poll for and process events */
			glfwPollEvents();

		}

	}
	void landingPage() {
		ImGui::Text("Enter path of root directory of Rubeus");
		ImGui::InputText("##source", RootPath, IM_ARRAYSIZE(RootPath));
		if (ImGui::Button("OK"))
			if (std::experimental::filesystem::exists(RootPath))
				CurrentView = 1;
		ImGui::Text("exists- %d", std::experimental::filesystem::exists(RootPath));
	}
	void updateProjectList() {
		ProjectList.clear();
		for (const auto & entry : std::experimental::filesystem::directory_iterator(GamePath))
			ProjectList.push_back(entry.path());
	}
	void allProjectsPage()
	{
		if (GamePath.empty())
		{
			GamePath = std::string(RootPath) + std::string("/RubeusCore/Game");
			updateProjectList();
		}
		ImGui::Dummy(ImVec2(0.0f, 15.0f));
		ImGui::SameLine(20.0f);
		ImGui::Text("Your projects-");
		ImGui::Dummy(ImVec2(0.0f, 40.0f));

		ImGuiWindowFlags window_flags = ImGuiWindowFlags_HorizontalScrollbar;
		ImGui::Separator();
		ImGui::BeginChild("Child1", ImVec2(ImGui::GetWindowContentRegionWidth(), 260), false, window_flags);


		ImVec2 button_sz(160, 80);
		ImGuiStyle& style = ImGui::GetStyle();
		float window_visible_x2 = ImGui::GetWindowPos().x + ImGui::GetWindowContentRegionMax().x;

		for (unsigned i = 0; i < ProjectList.size(); i++)
		{
			ImGui::PushID(i);
			if (ImGui::Button(ProjectList[i].filename().u8string().c_str(), button_sz))
			{
				CurrentProject = ProjectList[i];
				CurrentView = 2;
			}
			if (ImGui::BeginPopupContextItem())
			{
				if (ImGui::Button("Delete")) {
					std::experimental::filesystem::remove_all(ProjectList[i]);
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
		if (ImGui::Button("New Project", ImVec2(160, 80)))
			ImGui::OpenPopup("New Project");

		if (ImGui::BeginPopupModal("New Project", NULL, ImGuiWindowFlags_AlwaysAutoResize))
		{
			static char NewProjectName[1024];
			static char ErrorMsg[100];
			ImGui::Text("Enter Name of Project-");
			ImGui::InputText("##source", NewProjectName, IM_ARRAYSIZE(NewProjectName));
			ImGui::Separator();

			//static int dummy_i = 0;
			//ImGui::Combo("Combo", &dummy_i, "Delete\0Delete harder\0");

			static bool dont_ask_me_next_time = false;
			ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
			ImGui::Checkbox("Don't ask me next time", &dont_ask_me_next_time);
			ImGui::PopStyleVar();

			if (ErrorMsg[0] != 0) {
				ImGui::Text(ErrorMsg);
			}

			if (ImGui::Button("Create", ImVec2(120, 0))) {
				std::experimental::filesystem::path NewProjectPath = GamePath + std::string("/") + std::string(NewProjectName);
				if(std::experimental::filesystem::create_directory(NewProjectPath)) {
					updateProjectList();
					ImGui::CloseCurrentPopup();
				}
				else {
					strcpy(ErrorMsg, "ERROR: This name is already used in a project");
				}
			}
			ImGui::SetItemDefaultFocus();
			ImGui::SameLine();
			if (ImGui::Button("Cancel", ImVec2(120, 0))) { ImGui::CloseCurrentPopup(); }
			ImGui::EndPopup();
		}
	}
	void currentProjectPage() {
		if(CurrentProjectEngineFiles.empty())
			for (const auto& dirEntry : std::experimental::filesystem::directory_iterator(std::experimental::filesystem::path(CurrentProject / "engine_files")))
				if(dirEntry.path().extension() == std::experimental::filesystem::path(".cpp"))
		
	}
};

int main(void)
{
	ProjectManager PM;
	return 0;
}
