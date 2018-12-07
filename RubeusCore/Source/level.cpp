#include <level.h>

namespace Rubeus
{
	RLevel::RLevel()
		:
		m_World(new RWorld()),
		m_InputManager(new RInputManager())
	{
	}

	RLevel::~RLevel()
	{
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
