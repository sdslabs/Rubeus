#include <level.h>

#include <engine.h>

namespace Rubeus
{
	RLevel::RLevel(std::string name)
		:
		m_World(new RWorld()),
		m_InputManager(new RInputManager(*Engine->getCurrentWindow())),
		m_AudioManager(new AudioComponents::RSymphony()),
		m_Name(name)
	{
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
	}

	void RLevel::end()
	{
	}

	void RLevel::addGameObject(RGameObject * gameObject)
	{
		m_World->add(*gameObject);
	}
}
