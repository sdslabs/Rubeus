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
		system_ok,
		change_window_title,
		load_image,
		get_loaded_image
	};

	// Define any functions needed to be sent as message data below. Make sure to mark them as inline for performance.

	void dummyFunction()
	{
		LOG("Dummy function was called");
	}
}
