#pragma once

#include <string>

namespace Rubeus
{
	class RMasterComponent;

	enum EMessageCode
	{
		system_ok,
		change_window_title
	};

	struct RMessage
	{
		RMessage(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, void * data = NULL);
		~RMessage();
		RMasterComponent * m_Sender;
		RMasterComponent * m_Receiver;

		EMessageCode m_Type;
		void * m_Data;
	};

	typedef RMessage RAsyncMessage;
	typedef RMessage RSyncMessage;
}
