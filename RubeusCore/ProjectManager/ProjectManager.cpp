#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_glfw.h>
#include <ImGui/imgui_impl_opengl3.h>
#include <experimental/filesystem>
#include <array>
#include <functional>
class ProjectManager {
	GLFWwindow* window;

	std::array< std::function<void(void)>, 2> viewFunctions;
	//void (ProjectManager::* viewFunctions[2])();
	bool ProjectWindow = true;
	int CurrentView;
	char RootPath[1024];
	std::string GamePath;
	std::vector<std::string> GameList;
	bool show_demo_window = true;
	bool show_another_window = false;
public:
	ProjectManager() :CurrentView(0) {
		memset(RootPath, 0, sizeof(RootPath));
		viewFunctions = { {std::bind(&ProjectManager::landingPage, this), std::bind(&ProjectManager::projectsPage, this)} };
		showWindow();
	}
	~ProjectManager() {
		glfwTerminate();
	}
	int showWindow() {
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
	void projectsPage() {
		if (GamePath.empty())
		{
			GamePath = std::string(RootPath) + std::string("/RubeusCore/Game");
			for (const auto & entry : std::experimental::filesystem::directory_iterator(GamePath))
				GameList.push_back(entry.path().filename().u8string());
			std::cout << GameList[0];
		}

	}
};

int main(void)
{
	ProjectManager PM;
	return 0;
}
