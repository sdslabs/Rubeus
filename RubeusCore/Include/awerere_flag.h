/**
 * @file		Include/awerere_flag.h.
 *
 * @brief	Declares the Collision flag class
 */

#pragma once

#include <string>

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @class	AFlag
		 *
		 * @brief	Collision flag used in grid based resolution.
		 */
		class AFlag : public std::string
		{
		public:

			/**
			 * @fn		AFlag()
			 *
			 * @brief	Constructor
			 */
			AFlag();

			/**
			 * @fn		AFlag(const std::string & string)
			 *
			 * @brief	string
			 *
			 * @param	string	Flag values.
			 */
			AFlag(const std::string & string);

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
			 * @warning	Verify length of flag
			 *
			 * @param	right	Right side of operator.
			 *
			 * @return	Result of OR operation.
			 */
			bool operator*(AFlag & right);
		};
	}
}
