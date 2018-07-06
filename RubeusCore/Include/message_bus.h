/**
 * @file	Include/message_bus.h
 *
 * @brief	Declares the message bus class
 */

#pragma once

#include <vector>

#include <message_object.h>

namespace Rubeus
{
	class RMasterComponent;

	class RMessageBus
	{
	public:
		/** @brief	Array of systems participating in message communication */
		std::vector<RMasterComponent *> m_Systems;

		/** @brief	Vector array of synchronous messages to be sent */
		std::vector<Message *> m_MessageQueue;

		/**
		 * @fn	RMessageBus()
		 *
		 * @brief	Constructor
		 */
		RMessageBus();

		/**
		 * @fn	~RMessageBus()
		 *
		 * @brief	Destructor
		 */
		~RMessageBus();

		/**
		 * @fn	void addSystem(RMasterComponent * system)
		 *
		 * @brief	Adds a system to receive commands via messages
		 * @warning	Message bus doesn't take responsibility of deleting the system pointers. Do not pass in statically declared variables.
		 *
		 * @param	system	A pointer to the system to be added.
		 */
		void addSystem(RMasterComponent * system);

		/**
		 * @fn	void post(Message * message)
		 *
		 * @brief	Post a message to be sent in the next frame
		 * @warning	Message system intends to take responsibility of passed in pointers, i.e. it deletes all message pointers on destruction.
		 *			Do not delete message pointers that are passed in.
		 *
		 * @param	message	The message pointer to be posted.
		 */
		void post(Message * message);

		/**
		 * @fn	Message * pop()
		 *
		 * @brief	Returns the last message on the message array after popping it.
		 * @warning	Do not use freely.
		 */
		Message * pop();
	};
}
