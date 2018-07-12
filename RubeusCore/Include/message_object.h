/**
 * @file	Include/message_object.h
 *
 * @brief	Declares the message object and message commands
 */

#pragma once

#include <string>

namespace Rubeus
{
	class RMasterComponent;

	/**
	 * @enum		EMessageCode
	 *
	 * @brief	Defines all message codes the game requires.
	 */
	enum EMessageCode
	{
		system_ok,
		change_window_title
	};

	/**
	 * @struct	Message
	 *
	 * @brief	Declares the message objects that systems use to communicate.
	 */
	struct Message
	{
		/** @brief	The sender's address */
		RMasterComponent * m_Sender;

		/** @brief	The receiver's address */
		RMasterComponent * m_Receiver;

		/** @brief	The type of this message */
		EMessageCode m_Type;

		/** @brief	The data to be sent with this message */
		void * m_Data;

		/**
		 * @fn		Message(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, void * data = NULL)
		 *
		 * @brief	Constructor
		 * @warning	
		 *
		 * @param	sender	The sender's address.
		 * @param	receiver	The receiver's address.
		 * @param	type		The type of message.
		 * @param	data		The data to be transmitted.
		 */
		Message(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, void * data = NULL);

		/**
		 * @fn	~Message()
		 *
		 * @brief	Destructor
		 */
		~Message();
	};

	typedef Message RAsyncMessage;
	typedef Message RSyncMessage;
}
