#include <level.h>

#include <engine.h>

namespace Rubeus
{
	std::unordered_map<std::string, RLevel *> RLevel::InstantiatedLevels;

	RLevel::RLevel(std::string name)
		:
		m_World(new RWorld()),
		m_InputManager(new RInputManager(*Engine->getCurrentWindow())),
		m_AudioManager(new AudioComponents::RSymphony()),
		m_Name(name)
	{
		InstantiatedLevels.insert(std::pair<std::string, RLevel *>(name, this));
	}

	RLevel::~RLevel()
	{
		delete m_World;
		delete m_InputManager;
		delete m_AudioManager;
	}

	void RLevel::begin()
	{
	}

	void RLevel::run()
	{
	}

	void RLevel::cleanUp()
	{
		for (auto & item : m_World->getActiveObjects())
		{
			delete item;
		}
	}

	void RLevel::onEnd()
	{
	}

	void RLevel::addGameObject(RGameObject * gameObject)
	{
		m_World->add(*gameObject);
	}
}
