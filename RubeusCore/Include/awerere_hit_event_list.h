#pragma once

#include <deque>

#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		struct AHitEventList
		{
		private:
			std::deque<ACollideData> m_Data;

		public:
			AHitEventList();
			~AHitEventList();

			void push(const ACollideData & additive);
			void push(const bool & intersect, const bool & gap);
			const ACollideData & pop();
		};
	}
}
