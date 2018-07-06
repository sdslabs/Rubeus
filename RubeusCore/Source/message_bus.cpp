/**
 * @file		Source/message_bus.cpp
 *
 * @brief	Implements the mesage bus class.
 */

#include <message_bus.h>

namespace Rubeus
{
	RMessageBus::RMessageBus()
	{
	}

	RMessageBus::~RMessageBus()
	{
		for(size_t i = 0; i < m_MessageQueue.size(); ++i)
		{
			delete m_MessageQueue[i];
		}
	}

	void RMessageBus::post(Message * message)
	{
		m_MessageQueue.push_back(message);
	}

	Message * RMessageBus::pop()
	{
		auto temp = m_MessageQueue.back();
		m_MessageQueue.pop_back();

		return temp;
	}

	void RMessageBus::addSystem(RMasterComponent * system)
	{
		m_Systems.push_back(system);
	}
}
