/**
 * @file		Source/message_object.cpp
 *
 * @brief	Implements the mesage object structure.
 */

#include <message_object.h>

namespace Rubeus
{
	Message::Message(RMasterComponent * receiver, EMessageCode type, var data)
		: m_Receiver(receiver), m_Type(type), m_Data(data)
	{
	}

	Message::~Message()
	{
	}
}
