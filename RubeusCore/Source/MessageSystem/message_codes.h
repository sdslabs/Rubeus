/**
 * @file		Include/message_codes.h.
 *
 * @brief	Contains all message codes for messaging
 */

#pragma once

#include <logger_component.h>
#include <message_object.h>
#include <map>

#include <any>
#include <functional>

typedef std::any var;

namespace Rubeus
{
	class RMasterComponent;

	struct SignalSignature
	{
		RMasterComponent * m_Receiver;
		std::function<void(var)> foo;

		SignalSignature(RMasterComponent * Receiver, std::function<void(var)> func);

		~SignalSignature();

	};

#define RegisterCommand(m_Receiver, m_FuncName, m_Function)                                                               \
SignalSignature* newcommand = new SignalSignature(m_Receiver, std::bind(&m_Function, m_Receiver, std::placeholders::_1)); \
MailBox.CommandsMap.insert(std::pair<std::string, Rubeus::SignalSignature*>{m_FuncName, newcommand});                     \

	class RMailingList
	{
	public:

		RMailingList();
		~RMailingList();
		
		std::map<std::string, SignalSignature*> CommandsMap;

		void sendSignal(std::string command, var data = NULL);
		void addEngineCommands();
	};

	extern RMailingList MailBox;


	/**
	 * @enum		EMessageCode
	 *
	 * @brief	Defines all message codes the game requires.
	 */
	enum EMessageCode
	{
		// Check if the system is ready for use(Only for debugging purposes)
		// Handled by : All systems ideally
		system_ok,

		// Change the window title to the string provided
		// Handled by: RWindowComponent
		change_window_title,

		// Load an image and receive a reply with the image data in the form of a byte array
		// Handled by: RLoaderComponent
		load_image,

		// Receive the reply to an earlier message sent with the command, `change_window_title`
		// Handled by: RWindowComponent
		get_loaded_image,

		// Modifies the music playing every frame according to AudioModifierCommand
		// Handled by: RSymphony
		modify_audio,

		// Loads the specified level name (level needs to be registered in REngine first)
		// Handled by: REngine
		load_level
	};

	// Define any functions needed to be sent as message data below. Make sure to mark them as inline for performance.
	// Example:
	//
	// inline void dummyFunction()
	// {
	//   	LOG("Dummy function was called");
	// }
}
