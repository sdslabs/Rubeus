#include <engine.h>
#include <boost/any.hpp>

namespace Rubeus
{
	const REngine * Engine = new REngine();

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

	REngine::REngine()
		:
		m_LayerComposition(new GraphicComponents::RLayerComposition(
			"Shaders/basic.vert",
			"Shaders/basic.frag",
			"Shaders/basic.vert",
			"Shaders/basic.frag"
		)),
		m_Timer(new UtilityComponents::RTimer(10)),
		m_Loader(new UtilityComponents::RLoaderComponent())
	{
	}

	REngine::~REngine()
	{
		delete m_PhysicsEngine;
		delete m_Window;
		delete m_LayerComposition;
		delete m_Timer;
		delete m_Loader;
	}

	void REngine::load(RLevel & level)
	{
	}

	void REngine::run()
	{
	}

	void REngine::cleanUp()
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
