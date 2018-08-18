#include <entity_object.h>

namespace Rubeus
{
	int REntity::entityCount = 0;

	void REntity::tick()
	{
	}

	REntity::REntity()
	{
		m_EntityID = ++entityCount;
	}

	REntity::~REntity()
	{
		entityCount--;
	}
}
