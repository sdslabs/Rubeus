#include <awerere_flag.h>

namespace Rubeus
{
	namespace Awerere
	{
		AFlag::AFlag()
			: std::string("")
		{
		}

		AFlag::AFlag(const std::string & string)
			: std::string(string)
		{
		}

		bool Rubeus::Awerere::AFlag::operator*(AFlag & other)
		{
			int accum = 0;

			for (int i = 0; i < this->size(); i++)
			{
				accum = accum + ((((*this)[i] == '1') ? 1 : 0) * (((other[i] == '1') ? 1 : 0)));
			}

			return accum;
		}
	}
}
