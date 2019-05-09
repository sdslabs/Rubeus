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
			: m_Data(new int[bufferSize]), m_Size(bufferSize)
		{
		}

		AFlag::~AFlag()
		{
			delete[] m_Data;
		}

		bool AFlag::operator*(AFlag & other)
		{
			int accum = 0;

			for (size_t i = 0; i < m_Size; i++)
			{
				accum = accum + (this->m_Data[i] * other.m_Data[i]);
			}

			return accum;
		}
	}
}
