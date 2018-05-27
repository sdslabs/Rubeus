/**
 * @file	Source\c_Master_Component\master.h.
 *
 * @brief	Declares the master class
 */

#pragma once

#include "../c_Logger/logger.h"

namespace Rubeus
{
	/**
	* @class	MasterComponent
	*
	* @brief	A master component.
	* 			Serves as parent class for all components
	*
	* @author	Twarit
	* @date	26-05-2018
	*/
	class RMasterComponent
	{
	private:
		/** @brief	The number of components initialised */
		static unsigned int componentsInitialised;

		/** @brief	Identifier for this component */
		unsigned int m_ComponentID;

	public:

		/**
		* @fn	MasterComponent::MasterComponent();
		*
		* @brief	Default constructor
		*
		* @author	Twarit
		* @date	26-05-2018
		*/
		RMasterComponent();

		/**
		* @fn	virtual MasterComponent::~MasterComponent();
		*
		* @brief	Destructor
		*
		* @author	Twarit
		* @date	26-05-2018
		*/
		virtual ~RMasterComponent();

		/**
		* @fn	unsigned int MasterComponent::getComponentID();
		*
		* @brief	Gets component identifier
		*
		* @author	Twarit
		* @date	26-05-2018
		*
		* @return	The component identifier.
		*/
		unsigned int getComponentID() const;

	protected:
	};
}