/**
 * @file		Source/awerere_hit_event_list.cpp.
 *
 * @brief	Defines the Hit Event List Class used by Collision Engine
 */

#include <awerere_hit_event_list.h>

namespace Rubeus
{
	namespace Awerere
	{
		AHitEventList::AHitEventList()
		{
		}

		AHitEventList::~AHitEventList()
		{
		}

		void AHitEventList::push(const ACollideData & additive)
		{
			m_Data.push_back(additive);
		}

		void AHitEventList::push(const bool & intersect, const bool & gap)
		{
			m_Data.push_back(ACollideData(intersect, gap));
		}

		const ACollideData & AHitEventList::pop()
		{
			const ACollideData & temp = m_Data.front();
			m_Data.pop_front();

			return temp;
		}
	}
}
