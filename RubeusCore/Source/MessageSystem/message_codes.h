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

	/**
	 * @struct	SignalStructure
	 *
	 * @brief	Contains object and function name for commands.
	 */
	struct SignalSignature
	{
		RMasterComponent * m_Receiver;
		std::function<void(var)> function;

		SignalSignature(RMasterComponent * Receiver, std::function<void(var)> command_func);

		~SignalSignature();

	};

#define RegisterCommand(m_Receiver, m_FuncName, m_Function)                                                               \
SignalSignature* newcommand = new SignalSignature(m_Receiver, std::bind(&m_Function, m_Receiver, std::placeholders::_1)); \
MailBox.CommandsMap.insert(std::pair<std::string, Rubeus::SignalSignature*>{m_FuncName, newcommand});                     \

	/**
	 * @class	RMailingList
	 *
	 * @brief	A class that handles all the message commands.
	 */
	class RMailingList
	{
	public:

		RMailingList();
		~RMailingList();
		
		/**
	     * @map		CommandsMap
	     *
	     * @brief	Contains all the message commands.
	     */
		std::map<std::string, SignalSignature*> CommandsMap;

		/**
		 * @fn		void sendSignal(std::string command, var data = NULL)
		 *
		 * @brief	Runs a command
		 *
		 * @param	command		Name of message command.
		 * @param	data		The data that need to pass to corresponding function.
		 */
		void sendSignal(std::string command, var data = NULL);

		/**
		 * @fn		void addEngineCommands()
		 *
		 * @brief	Adds engine commands to CommandsMap
		 */
		void addEngineCommands();
	};

	extern RMailingList MailBox;
}
