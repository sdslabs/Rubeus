#include <project_manager.h>

namespace Rubeus
{
		RProjectManager::RProjectManager()
		{
			UtilityComponents::RLogger::Init();
			Rubeus::UtilityComponents::RLogger::CreateLogFile();
			m_Window = new GraphicComponents::RWindowComponent(
				"hehehehehe",
				1280,
				720,
				GraphicComponents::EWindowParameters::WINDOWED_MODE,
				GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
				1
			);
			m_Timer = new UtilityComponents::RTimer(10);
		}

		RProjectManager::~RProjectManager()
		{
			delete m_Window;
			delete m_Timer;
		}

		void RProjectManager::run() {
			SUCCESS("project window running");
			//SUCCESS("Running level : " + m_CurrentLevel->m_Name);

			m_Timer->setFrameCounter();

			float lastFrameEndTime = (float)glfwGetTime();

			ImGui::CreateContext();
			ImGui_ImplGlfw_InitForOpenGL(m_Window->m_GLFWWindow, true);
			ImGui_ImplOpenGL3_Init("#version 130");
			ImGui::StyleColorsDark();
			bool show_demo_window = true;
			bool show_another_window = false;
			ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

			// Main game loop
			while (m_Window->closed() == false)
			{
				while (true)
				{
					if (glfwGetTime() - lastFrameEndTime >= 1.0f / 60.0f)
						break;
				}

				// Clear window buffer
				m_Window->clearWindow();

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

				ImGui::Render();
				ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

				// Switch windows draw and display buffers
				m_Window->updateWindow();

				// Evaluate and display the frame times
				m_Timer->evaluateFrames();

				lastFrameEndTime = (float)glfwGetTime();

			}
			ImGui_ImplOpenGL3_Shutdown();
			ImGui_ImplGlfw_Shutdown();
			ImGui::DestroyContext();

		}
}
int main() {
	using namespace Rubeus;
	using namespace GraphicComponents;
	using namespace UtilityComponents;
	using namespace RML;
	using namespace Awerere;

	std::cout << "lol";
	RLogger::CreateLogFile();
	RLogger::Init();
	RProjectManager m_ProjectManager;
	m_ProjectManager.run();
}
