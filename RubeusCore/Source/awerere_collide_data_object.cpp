/**
 * @file		Source/awerere_collide_data_object.cpp.
 *
 * @brief	Defines the Collide data class
 */

#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		ACollideData::ACollideData(const bool isIntersect, const float gap)
			: m_IsIntersect(isIntersect), m_Gap(gap)
		{
		}

		ACollideData::~ACollideData()
		{
		}
	}
}
