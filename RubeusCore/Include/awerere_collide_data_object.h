#pragma once

namespace Rubeus
{
	namespace Awerere
	{
		class ACollideData
		{
		private:
			const bool m_IsIntersect;
			const float m_Gap;

		public:
			ACollideData(const bool isIntersect, const float gap);
			~ACollideData();

			inline const bool & getIsIntersect() { return m_IsIntersect; }
			inline const float & getGap() { return m_Gap; }

		protected:
		};
	}
}
