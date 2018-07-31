/**
 * @file		Source/audio_manager_component.cpp.
 *
 * @brief	Defines the Audio Manager
 */

#include <audio_manager_component.h>

namespace Rubeus
{
	namespace AudioComponents
	{
		inline bool RSymphony::validateSoundTrackID(ETrackName trackName)
		{
			if(trackName > (int) m_SoundTracks.size())
			{
				ERRORLOG("Wrong track ID used. Only " + std::to_string(m_SoundTracks.size()) + std::string(" sound tracks available"));
				return false;
			}

			return true;
		}

		inline bool RSymphony::validateMusicTrackID(ETrackName trackName)
		{
			if(trackName > (int) m_MusicTracks.size())
			{
				ERRORLOG("Wrong track ID used. Only " + std::to_string(m_SoundTracks.size()) + std::string(" music tracks available"));
				return false;
			}

			return true;
		}

		RSymphony::RSymphony()
		{
			SUCCESS("Audio manager initialised successfully");
		}

		RSymphony::~RSymphony()
		{
			size_t i = 0;
			while(i < m_MusicTracks.size())
				delete m_MusicTracks[i++];

			i = 0;
			while(i < m_SoundBuffers.size())
				delete m_SoundBuffers[i++];

			i = 0;
			while(i < m_SoundTracks.size())
				delete m_SoundTracks[i++];
		}

		void RSymphony::addSoundTrack(const int count)
		{
			int i = 0;
			while(i++ < count)
			{
				m_SoundBuffers.push_back(new sf::SoundBuffer());
				m_SoundTracks.push_back(new sf::Sound());
			}
		}

		void RSymphony::addMusicTrack(const int count)
		{
			m_MusicTracks.push_back(new sf::Music());
		}

		void RSymphony::loadTrack(ETrackType trackType, ETrackName trackName, std::string filePath, float volume, bool loopEnabled)
		{
			if(trackType == SOUND_TRACK)
			{
				if(validateSoundTrackID(trackName))
				{
					m_SoundBuffers[trackName]->loadFromFile(filePath);
					m_SoundTracks[trackName]->setBuffer(*m_SoundBuffers[trackName]);
					m_SoundTracks[trackName]->setVolume(volume);

					if(loopEnabled)
					{
						m_SoundTracks[trackName]->setLoop(true);
					}

<<<<<<< HEAD
					ASSERT("Loaded audio file: " + filePath + " to sound track #" + std::to_string(trackName));
=======
					ASSERT("Added sound track #" + std::to_string(trackName));
>>>>>>> Add sphere-plane collision detection
				}
			}

			else if(trackType == MUSIC_TRACK)
			{
				if(validateMusicTrackID(trackName))
				{
					m_MusicTracks[trackName]->openFromFile(filePath);

					if(loopEnabled)
					{
						m_MusicTracks[trackName]->setLoop(true);
					}

<<<<<<< HEAD
					ASSERT("Loaded audio file: " + filePath + " to music track #" + std::to_string(trackName));
=======
					ASSERT("Added music track #" + std::to_string(trackName));
>>>>>>> Add sphere-plane collision detection
				}
			}
		}

		void RSymphony::playTrack(ETrackType trackType, ETrackName trackName)
		{
			if(trackType == SOUND_TRACK)
			{
				if(validateSoundTrackID(trackName))
				{
					m_SoundTracks[trackName]->play();
				}
			}
			else if(trackType == MUSIC_TRACK)
			{
				if(validateMusicTrackID(trackName))
				{
					m_MusicTracks[trackName]->play();
				}
			}
		}

		void RSymphony::pauseTrack(ETrackType trackType, ETrackName trackName)
		{
			if(trackType == SOUND_TRACK)
			{
				if(validateSoundTrackID(trackName))
				{
					m_SoundTracks[trackName]->pause();
				}
			}
			else if(trackType == MUSIC_TRACK)
			{
				if(validateMusicTrackID(trackName))
				{
					m_MusicTracks[trackName]->pause();
				}
			}
		}

		void RSymphony::stopTrack(ETrackType trackType, ETrackName trackName)
		{
			if(trackType == SOUND_TRACK)
			{
				if(validateSoundTrackID(trackName))
				{
					m_SoundTracks[trackName]->stop();
				}
			}
			else if(trackType == MUSIC_TRACK)
			{
				if(validateMusicTrackID(trackName))
				{
					m_MusicTracks[trackName]->stop();
				}
			}
		}

		void RSymphony::stepDownMusicVolume(const float duration, const float floorVolume)
		{
			// To be continued
		}

		void RSymphony::setVolume(ETrackType trackType, ETrackName trackName, const float volume)
		{
			if(trackType == SOUND_TRACK)
			{
				if(validateSoundTrackID(trackName))
				{
					m_SoundTracks[trackName]->setVolume(volume);
				}

			}
			else if(trackType == MUSIC_TRACK)
			{
				if(validateMusicTrackID(trackName))
				{
					m_MusicTracks[trackName]->setVolume(volume);
				}
			}
		}

		void RSymphony::setPitch(ETrackType trackType, ETrackName trackName, const float pitch)
		{
			if(trackType == SOUND_TRACK)
			{
				if(validateSoundTrackID(trackName))
				{
					m_SoundTracks[trackName]->setPitch(pitch);
				}
			}
			else if(trackType == MUSIC_TRACK)
			{
				if(validateMusicTrackID(trackName))
				{
					m_MusicTracks[trackName]->setPitch(pitch);
				}
			}
		}

		void RSymphony::addToTick(void(*function)())
		{
			m_TickFunctions.push_back(function);
		}

		void RSymphony::tick()
		{
			for(size_t i = 0; i < m_TickFunctions.size(); i++)
			{
				m_TickFunctions[i]();
			}

			if(!m_AudioTasks.empty())
			{
				for(size_t i = 0; i < m_AudioTasks.size(); i++)
				{
					auto temp = m_AudioTasks[i];
					switch(temp->m_TrackToApplyTo)
					{
						case SOUND_TRACK:
						{
							/*switch(temp->m_EffectToApply)
							{
								default:
							}*/
						}
						break;

						case MUSIC_TRACK:
						{
							switch(temp->m_EffectToApply)
							{
								case fade_in:
								{
									if(m_MusicTracks[temp->m_TrackName]->getVolume() > 0)
									{
										auto bin = m_MusicTracks[temp->m_TrackName];
										bin->setVolume(bin->getVolume() - VOLUME_STEP);
									}
								}
								break;

								case fade_out:
									if(m_MusicTracks[temp->m_TrackName]->getVolume() <= MAX_VOLUME - VOLUME_STEP)
									{
										auto bin = m_MusicTracks[temp->m_TrackName];
										bin->setVolume(bin->getVolume() + VOLUME_STEP);
									}
									break;

								default:
									break;
							}
						}
						break;

						default:
							break;
					}
				}
			}
		}

		void RSymphony::onMessage(Message * msg)
		{
		}
	}
}
