#pragma once

#include <vector>

#include <message_object.h>
#include <message_bus.h>

namespace Rubeus
{
	class RMessageSystem
	{
	public:
		static RMessageBus m_MessageBus;

		void evaluateMessages();
		void addMessage(RMessage * message);
	};
}
