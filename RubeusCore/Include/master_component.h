/**
 * @file		Source\master_component.h.
 *
 * @brief	Declares the master class
 */

#pragma once

#include <string>
#include <unordered_map>
#include <typeinfo>

#include <logger_component.h>

#define GetVariableName(x) #x

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
	protected:
		/** @brief	Identifier for this component */
		unsigned int m_ComponentID;

		/**
		 * @fn	void RMasterComponent::add();
		 *
		 * @brief	Adds this component to component table
		 *
		 * @author	Twarit
		 * @date	19-06-2018
		 */
		void add();

	public:
		/** @brief	The number of components initialised */
		static unsigned int componentsInitialised;

		/** @brief	The component table */
		static std::unordered_map<unsigned int, RMasterComponent *> m_ComponentMap;

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
		 * @fn	void RMasterComponent::remove();
		 *
		 * @brief	Removes this component from component table
		 *
		 * @author	Twarit
		 * @date	19-06-2018
		 */
		void remove();

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

        /**
		 * @fn	inline std::string getName()
		 *
		 * @brief	Gets the fully qualified name of this component
		 *
		 * @author	Twarit
		 * @date	19-06-2018
		 *
		 * @return	The name.
		 */
		inline std::string getName() { return typeid(*this).name(); }

		/**
		 * @fn		friend std::ostream & operator<<(std::ostream & stream, RMasterComponent & component)
		 *
		 * @brief	Prints the name of this component
		 *
		 * @author	Twarit
		 * @date	19-06-2018
		 *
		 * @return	The name.
		 */
		friend std::ostream & operator<<(std::ostream & stream, RMasterComponent & component);
	protected:
	};
}
