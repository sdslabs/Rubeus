#include <message_codes.h>
#include <engine.h>
#include <iterator>

namespace Rubeus
{
	RMailingList MailBox;

	SignalSignature::SignalSignature(RMasterComponent * Receiver, std::function<void(var)> command_func)
		: m_Receiver(Receiver), function(command_func)
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
		// Change the window title to the string provided
		SignalSignature* titlecommand = new SignalSignature(RGame::getEngine()->getCurrentWindow(), std::bind(&GraphicComponents::RWindowComponent::change_window_title, RGame::getEngine()->getCurrentWindow(), std::placeholders::_1));
		MailBox.CommandsMap.insert(std::pair<std::string,Rubeus::SignalSignature*>{"change_window_title", titlecommand});

		// Receive the reply to an earlier message sent with the command, `change_window_title`
		SignalSignature* imagecommand = new SignalSignature(RGame::getEngine()->getCurrentWindow(), std::bind(&GraphicComponents::RWindowComponent::get_loaded_image, RGame::getEngine()->getCurrentWindow(), std::placeholders::_1));
		MailBox.CommandsMap.insert(std::pair<std::string, Rubeus::SignalSignature*>{"get_loaded_image", imagecommand});

		// Loads the specified level name(level needs to be registered in REngine first)
		SignalSignature* levelcommand = new SignalSignature(RGame::getEngine(), std::bind(&REngine::load_level, RGame::getEngine(), std::placeholders::_1));
		MailBox.CommandsMap.insert(std::pair<std::string, Rubeus::SignalSignature*>{"load_level", levelcommand});

		// Load an image and receive a reply with the image data in the form of a byte array
		SignalSignature* loadimagecommand = new SignalSignature(RGame::getEngine()->getResourceLoader(), std::bind(&UtilityComponents::RLoaderComponent::load_image, RGame::getEngine()->getResourceLoader(), std::placeholders::_1));
		MailBox.CommandsMap.insert(std::pair<std::string, Rubeus::SignalSignature*>{"load_image", loadimagecommand});

		// Checks if engine is ready for use
		SignalSignature* engine_check_command = new SignalSignature(RGame::getEngine(), std::bind(&REngine::engine_ok, RGame::getEngine(), std::placeholders::_1));
		MailBox.CommandsMap.insert(std::pair<std::string, Rubeus::SignalSignature*>{"engine_ok", engine_check_command});

		// Modifies the music playing every frame according to AudioModifierCommand
		// Handled by: RSymphony
		// modify_audio
	}
}

