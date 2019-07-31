/**
 * @file		Include/message_system.h
 *
 * @brief	Declares the message system class
 */

#pragma once

#include <vector>

#include <message_object.h>
#include <message_bus.h>

namespace Rubeus
{
	/**
	 * @class	RMessageSystem
	 *
	 * @brief	A message system class that handles message posting and adding.
	 */
	class RMessageSystem
	{
	public:
		/** @brief	The message bus, common to all message systems */
		static RMessageBus m_MessageBus;
		

		/**
		 * @fn		void evaluateMessages()
		 *
		 * @brief	Pops messages from the message queue and sends them to their respective destinations.
		 * @warning	Use only once per frame
		 */
		void evaluateMessages();

		/**
		 * @fn		void addMessage(Message * message)
		 *
		 * @brief	Adds a message to the message queue
		 *
		 * @param	receiver	Pointer to the receiver.
		 * @param	command		Type of message command.
		 * @param	data		The data object to be sent. See 'var' typedef for transmittable data
		 */
		static void addMessage(RMasterComponent * receiver, std::string command, var data = NULL);
	};
}
