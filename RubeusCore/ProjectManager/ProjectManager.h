
#pragma once

#include <ImGui/imgui.h>
#include <ImGui/imgui_impl_glfw.h>
#include <ImGui/imgui_impl_opengl3.h>


#include <window_component.h>
//#include <timer_component.h>

namespace Rubeus
{

	class SimpleWindowComponent : public GraphicComponents::RWindowComponent
	{
	public:

		SimpleWindowComponent() : GraphicComponents::RWindowComponent(
			"Project Manager",
			1280,
			720,
			GraphicComponents::EWindowParameters::WINDOWED_MODE,
			GraphicComponents::EWindowParameters::NON_RESIZABLE_WINDOW,
			1) {}

		void onMessage() = delete;
	};

	class RProjectManager
	{
		/** @brief	The ref to the timer in use */
		//UtilityComponents::RTimer * m_Timer = 0;

		/** @brief	The ref to Window in current use */
		SimpleWindowComponent *m_Window = 0;

	public:
		RProjectManager();

		~RProjectManager();

		void run();
	};
}
