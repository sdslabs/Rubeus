#pragma once

#include <chrono>

#include <master_component.h>
#include <logger_component.h>

namespace Rubeus
{
	namespace UtilityComponents
	{
		class RTimer : public RMasterComponent
		{
		private:
			static std::chrono::steady_clock m_Clock;
			std::chrono::time_point<std::chrono::steady_clock> * m_TimePoints;
			long int m_Frames;

		public:
			RTimer(int numberOfTimePoints);
			~RTimer();

			long long int getRelativeTime(int sinceThisSlotIndex, int tillThisSlotIndex);

			void addTimePoint(int index);

			void setFrameCounter();

			void evaluateFrames();
		};
	}
}
