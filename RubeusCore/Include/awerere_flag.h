#pragma once

#include <string>

namespace Rubeus
{
	namespace Awerere
	{
		class AFlag : public std::string
		{
		public:
			AFlag();
			AFlag(const std::string & string);

			bool operator*(AFlag & right);
		};
	}
}
