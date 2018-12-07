#pragma once

#include <window_component.h>
#include <input_manager.h>
#include <audio_manager_component.h>
#include <awerere_physics_engine.h>
#include <layer_composition_object.h>
#include <world.h>
#include <timer_component.h>
#include <level.h>

namespace Rubeus
{
	//  TODO These need to be in a class
	extern GraphicComponents::RWindowComponent * GameWindow;

	extern RInputManager inputManager;

	extern class REngine : public RMasterComponent
	{
	private:
		Awerere::APhysicsEngine * m_PhysicsEngine = NULL;
		GraphicComponents::RWindowComponent * m_Window = NULL;
		GraphicComponents::RLayerComposition * m_LayerComposition = NULL;
		UtilityComponents::RTimer * m_Timer = NULL;
		UtilityComponents::RLoaderComponent * m_Loader = NULL;

		RLevel * m_CurrentLevel;

	public:
		REngine();
		~REngine();

		void load(RLevel & level);

		inline UtilityComponents::RLoaderComponent * getResourceLoader() const { return m_Loader; }

		inline RLevel * getCurrentLevel() const { return m_CurrentLevel; }
		inline GraphicComponents::RWindowComponent * getCurrentWindow() const { return m_Window; }
		inline AudioComponents::RSymphony * getCurrentLevelAudioManager() const { return m_CurrentLevel->m_AudioManager; }
		inline RInputManager * getCurrentLevelInputManager() const { return m_CurrentLevel->m_InputManager; }

		void onMessage(Message * msg) override;
	};
}
