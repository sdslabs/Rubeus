#include <engine.h>

namespace Rubeus
{
	GraphicComponents::RWindowComponent * GameWindow = new Rubeus::GraphicComponents::RWindowComponent("Hello World",
																									   1280, 720,
																									   Rubeus::GraphicComponents::EWindowParameters::WINDOWED_MODE,
																									   Rubeus::GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
																									   1);
	std::unordered_map<int, bool> RInputManager::KeyMap;
	std::unordered_map<int, bool> RInputManager::MouseButtonMap;
	RML::Vector2D RInputManager::MousePosition;
	RML::Vector2D RInputManager::MouseScroll;

	RInputManager inputManager(*GameWindow);


	void REngine::onMessage(Message * msg)
	{
		switch (msg->m_Type)
		{
			case system_ok:
			{
				LOG("Running Engine checks...");
				if (m_PhysicsEngine == NULL ||
					m_Window = NULL ||
					m_LayerComposition == NULL ||
					m_Timer == NULL ||
					m_Loader == NULL)
				{
					ERRORLOG("Core systems not active");
				}
				else
				{
					LOG("All systems running");
				}
			}
			break;
		}
	}

}
