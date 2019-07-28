#include <message_codes.h>
#include <engine.h>
#include <iterator>

namespace Rubeus
{
	RMailingList MailBox;

	SignalSignature::SignalSignature(RMasterComponent * Receiver, std::function<void(var)> func)
		: m_Receiver(Receiver), foo(func)
	{
	}

	SignalSignature::~SignalSignature()
	{
	}

	RMailingList::RMailingList()
	{
	}

	RMailingList::~RMailingList()
	{
	}

	void RMailingList::sendSignal(std::string command, var data)
	{
		for (auto chec : MailBox.CommandsMap)
		{
			if (chec.first == command)
			{
				RMessageSystem::addMessage(chec.second->m_Receiver,command,data);
			}
			else
			{
				ERRORLOG("no such command exists"); 
			}
		}
	}

	void RMailingList::addEngineCommands()
	{
		SignalSignature* newcommand = new SignalSignature(Rubeus::RGame::getEngine()->getCurrentWindow(), std::bind(&GraphicComponents::RWindowComponent::change_window_title, Rubeus::RGame::getEngine()->getCurrentWindow(), std::placeholders::_1));
		MailBox.CommandsMap.insert(std::pair<std::string,Rubeus::SignalSignature*>{"changetitle", newcommand});
	}
}

