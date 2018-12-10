#include <engine.h>

#include <boost/any.hpp>

namespace Rubeus
{
	REngine * const Engine = new REngine();

	std::unordered_map<int, bool> RInputManager::KeyMap;
	std::unordered_map<int, bool> RInputManager::MouseButtonMap;
	RML::Vector2D RInputManager::MousePosition;
	RML::Vector2D RInputManager::MouseScroll;

	REngine::REngine()
		:
		m_LayerComposition(new GraphicComponents::RLayerComposition(
			"Shaders/basic.vert",
			"Shaders/basic.frag",
			"Shaders/basic.vert",
			"Shaders/basic.frag"
		)),
		m_Window(new GraphicComponents::RWindowComponent(
			"Hello World",
			1280,
			720,
			GraphicComponents::EWindowParameters::WINDOWED_MODE,
			GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
			1
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
		static int callCount = 0;
		callCount++;

		if (m_StartupLevelName == "")
		{
			cleanUp();

			return;
		}

		// If this is not the first time a level is being loaded then previously
		// allocated level specific components need to be closed and restarted.
		if (callCount > 1)
		{
			delete m_LayerComposition;
			m_LayerComposition = new GraphicComponents::RLayerComposition(
				"Shaders/basic.vert",
				"Shaders/basic.frag",
				"Shaders/basic.vert",
				"Shaders/basic.frag"
			);

			delete m_PhysicsEngine;
			delete m_CurrentLevel;
		}

		for (auto & item : RGameObject::InstantiatedGameObjects)
		{
			if (item.second->m_UsedByLevelName == level.m_Name)
			{
				level.addGameObject(item.second);
				m_LayerComposition->add(item.second);
			}
			else
			{
				delete item.second;
			}
		}

		m_CurrentLevel = &level;
		m_PhysicsEngine = new Rubeus::Awerere::APhysicsEngine(*m_Window, *m_CurrentLevel->m_World, m_Window->getHeight() / 9.0f, m_Window->getHeight() / 16.0f);

		SUCCESS("Loaded : " + level.m_Name);
	}

	void REngine::run()
	{
		LOG("Running level : " + m_CurrentLevel->m_Name);

		// Tick the entire world once with begin() scripts
		for (auto & item : getWorld()->getActiveObjects())
		{
			item->begin();
		}

		// TODO: Add Message system and send load level calls asynchronously

		m_Timer->setFrameCounter();

		// Main game loop
		while (m_Window->closed() == false)
		{
			// Clear window buffer
			m_Window->clearWindow();

			// Tick the entire world once
			getWorld()->tick();

			// Update physics assuming 60FPS
			m_PhysicsEngine->update(1.0f / 60.0f);

			// Draw objects
			m_LayerComposition->draw();

			// Switch windows draw and display buffers
			m_Window->updateWindow();

			// Evaluate and display the frame times
			m_Timer->evaluateFrames();

			// Startup level can be changed to "" by game logic to end the game
			if (m_StartupLevelName == "")
			{
				break;
			}
		}

		m_StartupLevelName = "";
	}

	void REngine::cleanUp()
	{
		m_CurrentLevel->cleanUp();
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

				auto search = RLevel::InstantiatedLevels.find(boost::any_cast<std::string>(msg->m_Data));

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
