#pragma once

#include <vector>

#include <message_object.h>
#include <message_bus.h>

namespace Rubeus
{
	class RMessageSystem
	{
	private:

	public:
		void evaluateMessages();
		void addMessage(RMessage * message);

	protected:
		static RMessageBus m_MessageBus;
	};
}
