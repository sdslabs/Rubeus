/**
 * @file		Source/awerere_collision_grid.cpp.
 *
 * @brief	Defines the Collision Flag class
 */

#include <awerere_flag.h>

namespace Rubeus
{
	namespace Awerere
	{

		AFlag::AFlag(const int & bufferSize)
		{
			for (int i = 0; i < bufferSize; i++)
			{
				m_Data.push_back(false);
			}
		}

		AFlag::~AFlag()
		{
		}

		bool AFlag::operator*(AFlag & other)
		{
			int accum = 0;

			for (int i = 0; i < m_Data.size(); i++)
			{
				accum = accum + (this->m_Data[i] * other.m_Data[i]);
			}

			return accum;
		}
	}
}
