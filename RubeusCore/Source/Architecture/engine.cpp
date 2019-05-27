/**
 * @file		Source/engine.cpp.
 *
 * @brief	Defines the Rubeus Engine class
 */

#include <engine.h>

#include <any>

#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_glfw.h>
#include <ImGui/imgui_impl_opengl3.h>
namespace Rubeus
{
	std::unordered_map<int, bool> RInputManager::KeyMap;
	std::unordered_map<int, bool> RInputManager::MouseButtonMap;
	RML::Vector2D RInputManager::MousePosition;
	RML::Vector2D RInputManager::MouseScroll;

	REngine::REngine()
	{
		m_Window = new GraphicComponents::RWindowComponent(
			"Hello World",
			1280,
			720,
			GraphicComponents::EWindowParameters::WINDOWED_MODE,
			GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
			1
		);

		i_Window = new GraphicComponents::RWindowComponent(
			"ImGui",
			1280,
			720,
			GraphicComponents::EWindowParameters::WINDOWED_MODE,
			GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
			1
		);
		
		m_GameScene = new GraphicComponents::RGameScene(
			"Shaders/basic.vert",
			"Shaders/basic.frag"
		);
		m_Timer = new UtilityComponents::RTimer(10);
		m_Loader = new UtilityComponents::RLoaderComponent();
	}

	REngine::~REngine()
	{
		delete m_PhysicsEngine;
		delete m_GameScene;
		delete m_Window;
		delete i_Window;
		delete m_Timer;
		delete m_Loader;
	}

	void REngine::load(RLevel & level)
	{
		static int callCount = 0;
		callCount++;

		if (m_StartupLevelName == "")
		{
			killAliveLevel();

			return;
		}

		// If this is not the first time a level is being loaded then previously
		// allocated level specific components need to be closed and restarted.
		if (callCount > 1)
		{
			delete m_GameScene;
			m_GameScene = new GraphicComponents::RGameScene(
				"Shaders/basic.vert",
				"Shaders/basic.frag"
			);

			delete m_PhysicsEngine;
			delete m_CurrentLevel;
		}

		for (auto & item : RGameObject::InstantiatedGameObjects)
		{
			if (item.first != "")
			{
				if (item.second->m_ParentLevel->m_Name == level.m_Name)
				{
					level.addGameObject(item.second);
					m_GameScene->add(item.second);
				}
				else
				{
					delete item.second;
				}
			}
		}

		m_CurrentLevel = &level;
		RGame::CurrentLevel = &level;
		m_PhysicsEngine = new Rubeus::Awerere::APhysicsEngine(*m_Window, *m_CurrentLevel->m_World, m_Window->getHeight() / 9.0f, m_Window->getHeight() / 16.0f);

		SUCCESS("Loaded : " + level.m_Name);
	}

	void REngine::run()
	{
		SUCCESS("Running level : " + m_CurrentLevel->m_Name);

		// Call `on level load` user-scripts
		m_CurrentLevel->begin();

		// Tick the entire world once with begin() scripts
		for (auto & item : getWorld()->getActiveObjects())
		{
			item->begin();
		}

		// TODO: Add Message system and send load level calls asynchronously

		m_Timer->setFrameCounter();

        float lastFrameEndTime = (float)glfwGetTime();

		ImGui::CreateContext();
		ImGui_ImplGlfw_InitForOpenGL(i_Window->m_Window, true);
		ImGui_ImplOpenGL3_Init("#version 130");
		ImGui::StyleColorsDark();
		bool show_demo_window = true;
		bool show_another_window = false;
		ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

		// Main game loop
		while (m_Window->closed() == false)
		{
            while(true)
            {
                if(glfwGetTime() - lastFrameEndTime >= 1.0f / 60.0f)
                break;
            }

			// Clear window buffer
			m_Window->clearWindow();
			i_Window->clearWindow();

			ImGui_ImplOpenGL3_NewFrame();
			ImGui_ImplGlfw_NewFrame();
			ImGui::NewFrame();

			// Tick the entire world once
			getWorld()->tick();

			// Update physics assuming 60FPS
			m_PhysicsEngine->update(1.0f / 60.0f);

			// Draw objects
			m_GameScene->draw();

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
			i_Window->updateWindow();

			// Evaluate and display the frame times
			m_Timer->evaluateFrames();

			// Startup level can be changed to "" by game logic to end the game
			if (m_StartupLevelName == "")
			{
				break;
			}

            lastFrameEndTime = (float)glfwGetTime();

			for (auto & item : m_CurrentLevel->getWorld()->getActiveObjects())
			{
				item->m_IsSubmitted = false;
			}
		}
		//ImGui_ImplOpenGL3_Shutdown();
		ImGui_ImplGlfw_Shutdown();
		ImGui::DestroyContext();

		m_StartupLevelName = "";
	}

	void REngine::killAliveLevel()
	{
		delete m_CurrentLevel;
	}

	void REngine::end()
	{
		m_StartupLevelName = "";
	}

	void REngine::onMessage(Message * msg)
	{
		switch (msg->m_Type)
		{
			case system_ok:
			{
				LOG("Running Engine checks...");
				if (m_PhysicsEngine == NULL ||
					m_Window == NULL ||
					m_GameScene == NULL ||
					m_Timer == NULL ||
					m_Loader == NULL)
				{
					ERRORLOG("Core systems not active");
				}
				else
				{
					SUCCESS("All systems initialised");
				}
			}
			break;

			case load_level:
			{
				LOG("Loading level: " + std::string(getCurrentLevel()->getName()));

				auto search = RLevel::InstantiatedLevels.find(std::any_cast<std::string>(msg->m_Data));

				if (search != RLevel::InstantiatedLevels.end())
				{
					this->load(*search->second);
				}
				else
				{
					ERRORLOG("Level " + search->first + "not Found");
				}
			}
			break;
		}
	}
}
