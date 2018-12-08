#pragma once

#include <unordered_map>

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
	class REngine : public RMasterComponent
	{
	private:
		Awerere::APhysicsEngine * m_PhysicsEngine = NULL;
		GraphicComponents::RWindowComponent * m_Window = NULL;
		GraphicComponents::RLayerComposition * m_LayerComposition = NULL;
		UtilityComponents::RTimer * m_Timer = NULL;
		UtilityComponents::RLoaderComponent * m_Loader = NULL;

		std::unordered_map<std::string, RLevel *> m_Levels;
		RLevel * m_CurrentLevel = NULL;

		friend class RLevel;

	public:
		REngine();
		~REngine();

		void load(RLevel & level);
		void run();
		void cleanUp();

		inline UtilityComponents::RLoaderComponent * getResourceLoader() const { return m_Loader; }
		inline RLevel * getCurrentLevel() const { return m_CurrentLevel; }
		inline std::unordered_map<std::string, RLevel *> & getAllLevels() { return m_Levels; }
		inline GraphicComponents::RWindowComponent * getCurrentWindow() const { return m_Window; }
		inline AudioComponents::RSymphony * getCurrentLevelAudioManager() const { return m_CurrentLevel->m_AudioManager; }
		inline RInputManager * getCurrentLevelInputManager() const { return m_CurrentLevel->m_InputManager; }
		inline RWorld * getWorld() const { return m_CurrentLevel->m_World; }

		void onMessage(Message * msg) override;
	};

	extern const REngine * Engine;
}
