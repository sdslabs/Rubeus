/**
 * @file		Source\master_component.cpp.
 *
 * @brief	Implements the master class
 */

#pragma once

#include <master_component.h>

namespace Rubeus
{
	RMessageSystem RMasterComponent::m_MessageSystem;
	unsigned int RMasterComponent::componentsInitialised = 0;
	std::unordered_map<unsigned int, std::unique_ptr<Rubeus::RMasterComponent>> Rubeus::RMasterComponent::m_ComponentMap;

	RMasterComponent::RMasterComponent()
	{
		componentsInitialised++;
		m_ComponentID = componentsInitialised;

		add();
	}

	RMasterComponent::~RMasterComponent()
	{
	}

	void RMasterComponent::add()
	{
		m_ComponentMap[m_ComponentID] = std::make_unique<RMasterComponent>(*this);
	}

	unsigned int RMasterComponent::getComponentID() const
	{
		return m_ComponentID;
	}

	void RMasterComponent::onMessage(Message * msg)
	{
		ERRORLOG("Master component was messaged");
	}

	std::ostream & operator<<(std::ostream & stream, RMasterComponent & component)
	{
		stream << component.getName();
		return stream;
	}
}
