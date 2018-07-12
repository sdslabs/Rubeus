/**
 * @file		Include/message_codes.h.
 *
 * @brief	Contains all message codes for messaging
 */

#pragma once

#include <logger_component.h>

namespace Rubeus
{
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
		get_loaded_image
	};

	// Define any functions needed to be sent as message data below. Make sure to mark them as inline for performance.
	// Example:
	//
	// inline void dummyFunction()
	// {
	//   	LOG("Dummy function was called");
	// }
}
