/**
 * @file		Include/message_object.h
 *
 * @brief	Declares the message object and message commands
 */

#pragma once

#include <string>

#include <boost/any.hpp>

#include <image_object.h>
#include <message_codes.h>
#include <audio_manager_component.h>

typedef boost::any var;

namespace Rubeus
{
	class RMasterComponent;
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
	 * @struct	Message
	 *
	 * @brief	Declares the message objects that systems use to communicate.
	 */
	struct Message
	{
		/** @brief	The sender's address */
		RMasterComponent * m_Sender;

		/** @brief	The receiver's address */
		RMasterComponent * m_Receiver;

		/** @brief	The type of this message */
		EMessageCode m_Type;

		/** @brief	The data union to be sent with this message */
		var m_Data;

		/**
		 * @fn		Message(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, var data = NULL)
		 *
		 * @brief	Constructor
		 *
		 * @param	sender	The sender's address.
		 * @param	receiver	The receiver's address.
		 * @param	type		The type of message.
		 * @param	data		The data to be transmitted.
		 */
		Message(RMasterComponent * sender, RMasterComponent * receiver, EMessageCode type, var data = NULL);

		/**
		 * @fn		~Message()
		 *
		 * @brief	Destructor
		 */
		~Message();
	};

	typedef Message RAsyncMessage;
	typedef Message RSyncMessage;

	/**
	 * @enum		EAudioEffect
	 *
	 * @brief	Defines audio commands allowed to send to the audio manager
	 */
	enum EAudioEffect
	{
		// Fade out the music track defined frame by frame
		fade_out,

		// Fade in the music track defined frame by frame
		fade_in
	};

	/**
	* @struct	AudioModifier
	*
	* @brief		Custom POD structure to be sent with messages as audio commands
	*/
	struct AudioModifier
	{
		/** @brief	Track type to use */
		ETrackType m_TrackToApplyTo;

		/** @brief	Track name (Track ID) to apply to */
		ETrackName m_TrackName;

		/** @brief	Effect to apply */
		EAudioEffect m_EffectToApply;
	};
}
