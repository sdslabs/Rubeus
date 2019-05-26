
#pragma once

#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_glfw.h>
#include <ImGui/imgui_impl_opengl3.h>


#include <window_component.h>
#include <timer_component.h>

namespace Rubeus
{
	class RProjectManager
	{
		/** @brief	The ref to the timer in use */
		UtilityComponents::RTimer * m_Timer = 0;

		/** @brief	The ref to Window in current use */
		GraphicComponents::RWindowComponent *m_Window = 0;

	public:
		RProjectManager();

		~RProjectManager();

		void run();
	};
}
