#pragma once

#include <vector>

#include <SFML/Audio.hpp>

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
			SOUND = 0,
			MUSIC = 1
		};

		class RSoundManager
		{
		private:
			std::vector<sf::SoundBuffer> m_SoundBuffers;
			std::vector<sf::Sound> m_SoundTracks;
			std::vector<sf::Music> m_MusicTracks;

		public:
			void addSoundTrack(const int count);
			void addMusicTrack(const int count);

			void loadSoundTrack(const char * filePath, bool loop_enabled = false);
			void loadMusicTrack(const char * filePath, bool loop_enabled = false);

			void playTrack(ETrackType trackType, ETrackName trackName);
			void stopTrack(ETrackType trackType, ETrackName trackName);

			void fadeOutMusic(ETrackName trackName, const float duration, const float floorVolume = 0);

			void setVolume(ETrackType trackType, ETrackName trackName, const float volume);
			void setPitch(ETrackType trackType, ETrackName trackName, const float pitch);

		protected:
		};
	}
}
