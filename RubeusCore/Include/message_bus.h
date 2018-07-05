#pragma once

#include <vector>

#include <message_object.h>

namespace Rubeus
{
	class RMasterComponent;

	class RMessageBus
	{
	public:
		// Systems = Nodes for communication
		std::vector<RMasterComponent *> m_Systems;

		// Single message queue for all types of messages
		std::vector<RMessage *> m_MessageQueue;

		RMessageBus();
		~RMessageBus();

		void addSystem(RMasterComponent * system);
		void post(RMessage * message);

		RMessage * pop();
	};
}
