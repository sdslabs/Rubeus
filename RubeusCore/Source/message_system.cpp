#include <message_system.h>
#include <master_component.h>

namespace Rubeus
{
	RMessageBus RMessageSystem::m_MessageBus;

	void RMessageSystem::evaluateMessages()
	{
		for(size_t i = 0; i < m_MessageBus.m_MessageQueue.size(); ++i)
		{
			auto temp = m_MessageBus.pop();
			temp->m_Receiver->onMessage();
			LOG(temp->m_Sender->getName() + " messaged " + temp->m_Receiver->getName());

			delete temp;
		}
	}

	void RMessageSystem::addMessage(RMessage * message)
	{
		m_MessageBus.post(message);
	}
}
