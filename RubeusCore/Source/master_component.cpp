/**
 * @file		Source\master_component.cpp.
 *
 * @brief	Implements the master class
 */

#pragma once

#include <master_component.h>

namespace Rubeus
{
		unsigned int RMasterComponent::componentsInitialised = 0;

		RMasterComponent::RMasterComponent()
		{
			componentsInitialised++;
			m_ComponentID = componentsInitialised;

			add();
		}

		RMasterComponent::~RMasterComponent()
		{
			remove();
		}

		void RMasterComponent::add()
		{
			m_ComponentMap[m_ComponentID] = this;
		}

		void RMasterComponent::remove()
		{
			m_ComponentMap.erase(m_ComponentID);

			componentsInitialised--;
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
