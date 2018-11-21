/**
 * @file		Source\timer_component.cpp.
 *
 * @brief	Implements the timer component class
 */

#include <timer_component.h>

namespace Rubeus
{
	namespace UtilityComponents
	{
#define ONESECONDINMILLISECONDS 1000000000

		std::chrono::steady_clock RTimer::m_Clock;

		RTimer::RTimer(int numberOfTimePoints)
		{
			m_TimePoints = new std::chrono::time_point<std::chrono::steady_clock>[numberOfTimePoints];
			m_TimePoints[0] = m_Clock.now();
		}

		RTimer::~RTimer()
		{
			delete[] m_TimePoints;
		}

		long long int RTimer::getRelativeTime(int sinceThisSlotIndex, int tillThisSlotIndex)
		{
			return (m_TimePoints[tillThisSlotIndex] - m_TimePoints[sinceThisSlotIndex]).count();
		}

		void RTimer::addTimePoint(int slotIndex)
		{
			m_TimePoints[slotIndex] = m_Clock.now();
		}

		void RTimer::setFrameCounter()
		{
			m_Frames = 0;
			addTimePoint(0);
		}

		void RTimer::evaluateFrames()
		{
			addTimePoint(1);

			if ((getRelativeTime(0, 1)) >= ONESECONDINMILLISECONDS)
			{
				LOG(std::to_string(++m_Frames) + " fps");
				addTimePoint(0);
				m_Frames = 0;
			}
			m_Frames++;
		}
	}
}
