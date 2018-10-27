/**
 * @file		Include/awerere_hit_event_list.h.
 *
 * @brief	Declares the Hit event list class
 */

#pragma once

#include <deque>

#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	AHitEventList
		 *
		 * @brief	List of generated Hit events by collision engine.
		 */
		struct AHitEventList
		{
		private:

			/** @brief	Queue of Hit events saved */
			std::deque<ACollideData> m_Data;

		public:

			/**
			 * @fn	AHitEventList()
			 *
			 * @brief	Constructor
			 */
			AHitEventList();

			/**
			 * @fn		AHitEventList()
			 *
			 * @brief	Destructor
			 */
			~AHitEventList();

			/**
			 * @fn		void push(const ACollideData & additive)
			 *
			 * @brief	Push a confirmed hit event to queue
			 *
			 * @param	additive	Collision data from hit.
			 */
			void push(const ACollideData & additive);

			/**
			 * @fn		void push(const bool & intersect, const bool & gap)
			 *
			 * @brief	Generate a hit event and add to queue
			 *
			 * @param	intersect	Has intersected.
			 * @param	gap			Amount of gap.
			 */
			void push(const bool & intersect, const bool & gap);

			/**
			 * @fn		const ACollideData & pop()
			 *
			 * @brief	Pop a hit event from the queue
			 *
			 * @return	Confirmed hit data.
			 */
			const ACollideData & pop();
		};
	}
}
