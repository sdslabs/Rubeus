/**
 * @file		Source/message_object.cpp
 *
 * @brief	Implements the mesage object structure.
 */

#include <message_object.h>

namespace Rubeus
{
	Message::Message(RMasterComponent * receiver, std::string command, var data)
		: m_Receiver(receiver), m_Command(command), m_Data(data)
	{
	}

	Message::~Message()
	{
	}

}
