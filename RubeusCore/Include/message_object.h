#pragma once

#include <string>

namespace Rubeus
{
	class RMasterComponent;

	struct RMessage
	{
		RMessage(RMasterComponent * sender, RMasterComponent * receiver, std::string type, void * data = NULL);
		~RMessage();
		RMasterComponent * m_Sender;
		RMasterComponent * m_Receiver;

		std::string m_Type;
		void * m_Data;
	};

	typedef RMessage RAsyncMessage;
	typedef RMessage RSyncMessage;
}
