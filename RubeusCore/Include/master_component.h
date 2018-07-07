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
#include <message_system.h>

#define GetVariableName(x) #x

namespace Rubeus
{
	/**
	* @class	MasterComponent
	*
	* @brief	A master component.
	* 			Serves as parent class for all components
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
		 */
		void add();

	public:
		/** @brief	The message system to send messages */
		static RMessageSystem m_MessageSystem;

		/** @brief	The number of components initialised */
		static unsigned int componentsInitialised;

		/** @brief	The component table */
		static std::unordered_map<unsigned int, RMasterComponent *> m_ComponentMap;

		/**
		* @fn	MasterComponent::MasterComponent();
		*
		* @brief	Default constructor
		*/
		RMasterComponent();

		/**
		* @fn	virtual MasterComponent::~MasterComponent();
		*
		* @brief	Destructor
		*/
		virtual ~RMasterComponent();

		/**
		 * @fn	void RMasterComponent::remove();
		 *
		 * @brief	Removes this component from component table
		 */
		void remove();

		/**
		* @fn	unsigned int MasterComponent::getComponentID();
		*
		* @brief	Gets component identifier
		*
		* @return	The component identifier.
		*/
		unsigned int getComponentID() const;

        /**
		 * @fn	inline std::string getName()
		 *
		 * @brief	Gets the fully qualified name of this component
		 *
		 * @return	The name.
		 */
		inline std::string getName() { return typeid(*this).name(); }

		/**
		 * @fn		friend std::ostream & operator<<(std::ostream & stream, RMasterComponent & component)
		 *
		 * @brief	Prints the name of this component
		 *
		 * @return	The name.
		 */
		friend std::ostream & operator<<(std::ostream & stream, RMasterComponent & component);

		/**
		 * @fn		virtual void onMessage(Message * msg)
		 *
		 * @brief	Handles message from messaging system
		 * @warning	Not intended to be used by the user, it may be overriden by child classes
		 *
		 * @param	msg	The message object received.
		 */
		virtual void onMessage(Message * msg);

		/**
		 * @fn		static void deleteComponents()
		 *
		 * @brief	Deletes the component map pointers
		 * @warning	Deletes all allocated components
		 */
		static void DeleteComponents();
	protected:
	};
}
