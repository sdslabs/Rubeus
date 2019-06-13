#include <message_codes.h>
#include <message_system.h>
#include <game.h>

namespace Rubeus
{

	SignalSignature::SignalSignature(RMasterComponent * Receiver, void * (func(var)))
		: m_Receiver(Receiver), foo(*func)
	{

	}

	SignalSignature::~SignalSignature()
	{
	}

	void RMailBox::sendSignal(std::string command, var data)
	{
		std::map<std::string, SignalSignature>::iterator check;
		check = CommandsMap.find(command);
		if(check != CommandsMap.end())
		{
			RMessageSystem::addMessage(check->second.m_Receiver,command,data);
		}
		else
		{
			ERRORLOG("no such command exists");
		}
	}

	void RMailBox::RegisterCommand(RMasterComponent * m_Receiver, std::string your_commamd_here, void * functoexecute(var))
	{
		SignalSignature * newcommand = new SignalSignature(m_Receiver, functoexecute);
		CommandsMap.insert(std::pair<std::string, SignalSignature>(your_commamd_here, *newcommand));
	}

	void RMailBox::addEngineCommands()
	{
		// an example of hardcoding engine commands

		SignalSignature * newcommand = new SignalSignature(Rubeus::RGame::getEngine()->getCurrentWindow(), change_window_title);
		CommandsMap.insert(std::pair<std::string, SignalSignature>("changetitle", *newcommand));
	}
}
