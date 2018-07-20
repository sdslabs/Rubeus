/**
 * @file		Include/message_object.h
 *
 * @brief	Declares the message object and message commands
 */

#pragma once

#include <string>

#include <boost/any.hpp>

#include <image_object.h>
#include <message_codes.h>

typedef boost::any var;

namespace Rubeus
{
	class RMasterComponent;

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

		/** @brief	The data union to be sent with this message */
		var m_Data;

		/**
		 * @fn		Message(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, var data = NULL)
		 *
		 * @brief	Constructor
		 *
		 * @param	sender	The sender's address.
		 * @param	receiver	The receiver's address.
		 * @param	type		The type of message.
		 * @param	data		The data to be transmitted.
		 */
		Message(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, var data = NULL);

		/**
		 * @fn	~Message()
		 *
		 * @brief	Destructor
		 */
		~Message();
	};

	typedef Message RAsyncMessage;
	typedef Message RSyncMessage;

	enum AudioModifierCommand
	{
		// Fade out the music track defined frame by frame
		fade_out,
		fade_in
	};

	struct AudioModifier
	{

	};
}
