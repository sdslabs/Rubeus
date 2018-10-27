/**
 * @file		Source/entity_object.cpp.
 *
 * @brief	Defines the Entity class
 */

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

	inline std::string REntity::getName()
	{
		return typeid(*this).name();
	}
}
