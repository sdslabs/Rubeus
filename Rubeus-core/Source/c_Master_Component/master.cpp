/**
 * @file	Source\c_Master_Component\master.cpp.
 *
 * @brief	Implements the master class
 */

#pragma once

#include "master.h"

unsigned int MasterComponent::componentsInitialised = 0;

MasterComponent::MasterComponent()
{
	componentsInitialised++;

	const int m_ComponentID = componentsInitialised;
}

MasterComponent::~MasterComponent()
{
}

unsigned int MasterComponent::getComponentID()
{
	return m_ComponentID;
}
