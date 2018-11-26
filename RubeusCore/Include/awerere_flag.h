/**
 * @file		Include/awerere_flag.h.
 *
 * @brief	Declares the Collision flag class
 */

#pragma once

#include <vector>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	AFlag
		 *
		 * @brief	Array based collection of collision flag used in grid based resolution.
		 */
		class AFlag
		{
		private:

		public:
			std::vector<bool> m_Data;

			/**
			 * @fn		AFlag(const int & bufferSize = 1)
			 *
			 * @brief	Constructor.
			 * @warning	Set BufferSize by using AFlag::SetBufferSize() to use inside Awerere.
			 *
			 * @param	bufferSize	Flags buffer size. Default value is BufferSize.
									If BufferSize is not set before hand, then default is 1.
									Unusable by Awerere if BufferSize is not set.
			 */
			AFlag(const int & bufferSize = 1);

			/**
			 * @fn		~AFlag()
			 *
			 * @brief	Destructor
			 */
			~AFlag();

			/**
			 * @fn		bool operator*(AFlag & right)
			 *
			 * @brief	Operates multiplication on flag values
			 * @warning	Verify length of flag before sending in.
			 *
			 * @param	right	Right side of operator.
			 *
			 * @return	Result of OR operation.
			 */
			bool operator*(AFlag & right);

			/**
			 * @fn		inline const size_t & getLength() const
			 *
			 * @brief	Return the length of this flag
			 *
			 * @return	The length of this flag (not in bytes, but count).
			 */
			inline const size_t & getLength() const { return m_Data.size(); }
		};
	}
}
