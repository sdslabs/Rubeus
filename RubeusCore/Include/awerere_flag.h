/**
 * @file		Include/awerere_flag.h.
 *
 * @brief	Declares the Collision flag class
 */

#pragma once

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	AFlag
		 *
		 * @brief	Collision flag used in grid based resolution.
		 */
		class AFlag
		{
		private:
			static int BufferSize;
			int * m_Data;

		public:

			/**
			 * @fn		AFlag(const int & bufferSize = 1)
			 *
			 * @brief	Constructor.
			 * @warning	Set BufferSize by using AFlag::setBufferSize() to use inside Awerere.
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

			inline void setBufferSize(const int & bufferSize) { BufferSize = bufferSize; }
			inline const int getBufferSize() const { return BufferSize; }
		};
	}
}
