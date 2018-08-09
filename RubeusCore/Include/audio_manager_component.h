/**
 * @file		Include/audio_manager_component.h
 *
 * @brief	Declares the Audio Manager class
 */

#pragma once

#include <vector>

#include <SFML/Audio.hpp>

#include <master_component.h>
#include <message_codes.h>

namespace Rubeus
{
	namespace AudioComponents
	{
#define MAX_VOLUME 100
#define VOLUME_STEP 2

		/**
		 * @class	ETrackName
		 *
		 * @brief	List of track names and track numbers.
		 */
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

		/**
         * @class	ETrackType
         *
         * @brief	List of track types available.
         */
		enum ETrackType
		{
			SOUND_TRACK = 0,
			MUSIC_TRACK = 1
		};

		/**
		 * @class	RAudioManager
		 *
		 * @brief	Manages audio loading, cueing and audio effects.
		 */
		class RAudioManager : public RMasterComponent
		{
		private:
			/** @brief	Array of SFML sound effect buffers */
			std::vector<sf::SoundBuffer *> m_SoundBuffers;

			/** @brief	Array of SFML sound tracks */
			std::vector<sf::Sound *> m_SoundTracks;

			/** @brief	Array of SFML music tracks */
			std::vector<sf::Music *> m_MusicTracks;

			/** @brief	Array of audio modification messages received */
			std::vector<Rubeus::AudioModifier *> m_AudioTasks;

			/** @brief	Array of functions to tick */
			std::vector<void(*)()> m_TickFunctions;

			/**
			 * @fn		bool validateSoundTrackID(ETrackName trackName);

			 *
			 * @brief	Validates the sound track ID
			 * @warning	Inline function
			 *
			 * @param	trackName	The track ID to check.
			 *
			 * @return	True if value is valid, else false.
			 */
			bool validateSoundTrackID(ETrackName trackName);

			/**
			 * @fn		bool validateMusicTrackID(ETrackName trackName);
			 *
			 * @brief	Validates the music track ID
			 * @warning	Inline function
			 *
			 * @param	trackName	The track ID to check.
			 *
			 * @return	True if value is valid, else false.
			 */
			bool validateMusicTrackID(ETrackName trackName);

		public:
			/**
			 * @fn		RAudioManager()
			 *
			 * @brief	Constructor
			 */
			RAudioManager();

			/**
			 * @fn		~RAudioManager()
			 *
			 * @brief	Destructor
			 */
			~RAudioManager();

			/**
			 * @fn		void addSoundTrack(const int count);
			 *
			 * @brief	Adds sound tracks to be used later to load sound effect files
			 * @warning	Keep track of how many tracks are actually needed
			 *
			 * @param	count	The number of tracks to be constructed.
			 */
			void addSoundTrack(const int count);

			/**
			 * @fn		void addMusicTrack(const int count);
			 *
			 * @brief	Adds music tracks to be used later to play music
			 * @warning	Keep track of how many tracks are actually needed
			 *
			 * @param	count	The number of tracks to be constructed.
			 */
			void addMusicTrack(const int count);

			/**
			 * @fn		void loadTrack(ETrackType trackType, ETrackName trackName, std::string filePath, float volume = 50, bool loop_enabled = false)
			 *
			 * @brief	Load an audio file to a music track
			 * @warning	Default volume is 50.0f (max volume is 100.0f)
			 *
			 * @param	trackType	Type of track. Use SOUND_TRACK or MUSIC_TRACK
			 * @param	trackName	Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the
			 *                        number of tracks added are less than 20.
			 * @param	filePath		Path to the sound file
			 * @param	volume		Volume to be set. Default is 50
			 * @param	loopEnabled	Whether the music should loop when it ends. Default is false.
			 */
			void loadTrack(ETrackType trackType, ETrackName trackName, std::string filePath, float volume = 50, bool loopEnabled = false);

			/**
			 * @fn		void playTrack(ETrackType trackType, ETrackName trackName);
			 *
			 * @brief	Play a track
			 * @warning	Do not use track IDs that are not yet added
			 *
			 * @param	trackType	Type of track. Use SOUND_TRACK or MUSIC_TRACK.
			 * @param	trackName	Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.
			 */
			void playTrack(ETrackType trackType, ETrackName trackName);

			/**
			 * @fn		void pauseTrack(ETrackType trackType, ETrackName trackName);
			 *
			 * @brief	Pause a track
			 * @warning	Do not use track IDs that are not yet added
			 *
			 * @param	trackType	Type of track. Use SOUND_TRACK or MUSIC_TRACK.
			 * @param	trackName	Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.
			 */
			void pauseTrack(ETrackType trackType, ETrackName trackName);


			/**
			 * @fn		void stopTrack(ETrackType trackType, ETrackName trackName);
			 *
			 * @brief	Stop a track
			 * @warning	Do not use track IDs that are not yet added
			 *
			 * @param	trackType	Type of track. Use SOUND_TRACK or MUSIC_TRACK.
			 * @param	trackName	Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.
			 */
			void stopTrack(ETrackType trackType, ETrackName trackName);

			/**
			 * @fn		void stepDownMusicVolume(const float duration, const float floorVolume = 0);
			 *
			 * @brief	Steps down the volume
			 * @warning	Used only for fade outs/fade ins
			 *
			 * @param	duration		Duration of fade effect.
			 * @param	floorVolume	Volume to stop the fade effect at.
			 */
			void stepDownMusicVolume(const float duration, const float floorVolume = 0);

			/**
			 * @fn		void setVolume(ETrackType trackType, ETrackName trackName, const float volume)
			 *
			 * @brief	Sets the volume for a track
			 * @warning	Volume ranges from 0.0f to 100.0f
			 *
			 * @param	trackType	Type of track. Use SOUND_TRACK or MUSIC_TRACK.
			 * @param	trackName	Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.
			 * @param	volume		The volume to set to.
			 */
			void setVolume(ETrackType trackType, ETrackName trackName, const float volume);

			/**
			 * @fn		void setPitch(ETrackType trackType, ETrackName trackName, const float pitch)
			 *
			 * @brief	Sets the pitch for a track
			 * @warning	Default pitch is 1. Changing pitch also affects the audio duration
			 *
			 * @param	trackType	Type of track. Use SOUND_TRACK or MUSIC_TRACK.
			 * @param	trackName	Name of track. Use Name (Track ID) of the track to load to. Allowed TRACK_0 upto TRACK_19, unless the number of tracks added are less than 20.
			 * @param	pitch		The pitch to set to.
			 */
			void setPitch(ETrackType trackType, ETrackName trackName, const float pitch);

			/**
			 * @fn		void addToTick(void (*)function())
			 *
			 * @brief	Adds a function to be ticked by the audio manager
			 * @warning	Type_a_warning_with_its_use
			 *
			 * @param	function	Function pointer to be woken up at tick.
			 */
			void addToTick(void(*function)());

			/**
			 * @fn		void tick()
			 *
			 * @brief	Ticks the tickable functions added to audio manager
			 */
			void tick();

		protected:

			/**
			 * @fn		void onMessage(Message * msg) override
			 *
			 * @brief	Message handler for audio manager
			 * @warning	To be used by the message system only
			 *
			 * @param	msg	Pointer to the message received.
			 */
			void onMessage(Rubeus::Message * msg) override;
		};
	}
}
