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
		int AFlag::BufferSize = 1;

		AFlag::AFlag(const int & bufferSize = BufferSize)
			: m_Data(new int[BufferSize])
		{
			BufferSize = bufferSize;
		}

		AFlag::~AFlag()
		{
			delete[] m_Data;
		}

		bool AFlag::operator*(AFlag & other)
		{
			int accum = 0;

			for (int i = 0; i < BufferSize; i++)
			{
				accum = accum + ((((*this)[i] == '1') ? 1 : 0) * (((other[i] == '1') ? 1 : 0)));
			}

			return accum;
		}
	}
}
