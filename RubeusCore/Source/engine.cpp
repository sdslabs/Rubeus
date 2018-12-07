#include <engine.h>
#include <boost/any.hpp>

namespace Rubeus
{
	REngine * RubeusEngine = new REngine();

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

	REngine::REngine(std::vector<RLevel *> levels)
	{
	}

	REngine::~REngine()
	{

	}

	void REngine::load(RLevel & level)
	{
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
					m_LayerComposition == NULL ||
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

				auto search = m_Levels.find(boost::any_cast<std::string>(msg->m_Data));

				if (search != m_Levels.end())
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
