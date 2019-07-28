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
		if (!m_MessageBus.m_MessageQueue.empty())
		{
			for (size_t i = 0; i < m_MessageBus.m_MessageQueue.size(); ++i)
			{
				auto temp = m_MessageBus.pop();
				for (auto message : MailBox.CommandsMap)
				{
					if (message.first == temp->m_Command)
					{
						message.second->foo(temp->m_Data);
						LOG(temp->m_Receiver->getName() + " received message ");
						delete temp;
					}
				}
			}
		}
	}

	void RMessageSystem::addMessage(RMasterComponent * receiver, std::string command, var data)
	{
		Message * message = new Message(receiver, command, data); 
		m_MessageBus.post(message);
	}
}
