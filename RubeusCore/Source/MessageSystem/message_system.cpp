/**
 * @file		Source/message_system.cpp
 *
 * @brief	Implements the mesage system class.
 */

#include <message_system.h>
#include <master_component.h>

namespace Rubeus
{
	RMessageBus RMessageSystem::m_MessageBus;

	void RMessageSystem::evaluateMessages()
	{
		if(!m_MessageBus.m_MessageQueue.empty())
		{
			for(size_t i = 0; i < m_MessageBus.m_MessageQueue.size(); ++i)
			{
				auto temp = m_MessageBus.pop();

				temp->m_Receiver->onMessage(temp);
				LOG(temp->m_Sender->getName() + " messaged " + temp->m_Receiver->getName());

				delete temp;
			}
		}
	}

	void RMessageSystem::addMessage(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, var data)
	{
		Message * message = new Message(sender, receiver, type, data);
		m_MessageBus.post(message);
	}
}
