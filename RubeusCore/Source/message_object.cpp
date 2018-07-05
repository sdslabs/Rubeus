#include <message_object.h>

namespace Rubeus
{
	RMessage::RMessage(RMasterComponent * sender, RMasterComponent * receiver, std::string type, void * data)
		: m_Sender(sender), m_Receiver(receiver), m_Type(type), m_Data(data)
	{
	}

	RMessage::~RMessage()
	{
	}
}
