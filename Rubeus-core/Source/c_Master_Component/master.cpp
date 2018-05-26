/**
 * @file	Source\c_Master_Component\master.cpp.
 *
 * @brief	Implements the master class
 */

#pragma once

#include "master.h"

unsigned int RMasterComponent::componentsInitialised = 0;

RMasterComponent::RMasterComponent()
{
	componentsInitialised++;

	const int m_ComponentID = componentsInitialised;
}

RMasterComponent::~RMasterComponent()
{
}

unsigned int RMasterComponent::getComponentID() const
{
	return m_ComponentID;
}
