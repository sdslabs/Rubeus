/**
 * @file		Source/master_component.cpp.
 *
 * @brief	Implements the master class
 */

#include <master_component.h>

namespace Rubeus
{
	RMessageSystem RMasterComponent::m_MessageSystem;
	unsigned int RMasterComponent::componentsInitialised = 0;

	RMasterComponent::RMasterComponent()
	{
		componentsInitialised++;
		m_ComponentID = componentsInitialised;
	}

	RMasterComponent::~RMasterComponent()
	{
	}

	unsigned int RMasterComponent::getComponentID() const
	{
		return m_ComponentID;
	}

	std::ostream & operator<<(std::ostream & stream, RMasterComponent & component)
	{
		stream << component.getName();
		return stream;
	}
}
