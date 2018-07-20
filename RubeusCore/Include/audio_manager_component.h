#pragma once

#include <vector>

#include <SFML/Audio.hpp>

#include <master_component.h>

namespace Rubeus
{
	namespace AudioComponents
	{
		enum ETrackName
		{
			TRACK_0 = 0,
			TRACK_1 = 1,
			TRACK_2 = 2,
			TRACK_3 = 3,
			TRACK_4 = 4,
			TRACK_5 = 5,
			TRACK_6 = 6,
			TRACK_7 = 7,
			TRACK_8 = 8,
			TRACK_9 = 9,
			TRACK_10 = 10,
			TRACK_11 = 11,
			TRACK_12 = 12,
			TRACK_13 = 13,
			TRACK_14 = 14,
			TRACK_15 = 15,
			TRACK_16 = 16,
			TRACK_17 = 17,
			TRACK_18 = 18,
			TRACK_19 = 19
		};

		enum ETrackType
		{
			SOUND_TRACK = 0,
			MUSIC_TRACK = 1
		};

		class RAudioManager : public RMasterComponent
		{
		private:
			std::vector<sf::SoundBuffer *> m_SoundBuffers;
			std::vector<sf::Sound *> m_SoundTracks;
			std::vector<sf::Music *> m_MusicTracks;

		public:
			RAudioManager();
			~RAudioManager();

			void addSoundTrack(const int count);
			void addMusicTrack(const int count);

			void loadTrack(ETrackType trackType, ETrackName trackName, std::string filePath, bool loop_enabled = false);

			void playTrack(ETrackType trackType, ETrackName trackName);
			void pauseTrack(ETrackType trackType, ETrackName trackName);
			void stopTrack(ETrackType trackType, ETrackName trackName);

			void stepDownMusicVolume(const float duration, const float floorVolume = 0);

			void setVolume(ETrackType trackType, ETrackName trackName, const float volume);
			void setPitch(ETrackType trackType, ETrackName trackName, const float pitch);

		protected:
			void onMessage(Message * msg) override;
		};
	}
}
