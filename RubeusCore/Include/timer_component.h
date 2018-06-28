/**
 * @file		Include\timer_component.h.
 *
 * @brief	Declares the timer component class
 */

#pragma once

#include <chrono>

#include <master_component.h>
#include <logger_component.h>

namespace Rubeus
{
	namespace UtilityComponents
	{
		/**
		 * @class	RTimer
		 *
		 * @brief	A timer component.
		 * 			Allows marking timepoints at runtime.
		 * 			Allows frame counting
		 *
		 * @author	Twarit
		 * @date	20-06-2018
		 */
		class RTimer : public RMasterComponent
		{
		private:
			/** @brief	The steady clock */
			static std::chrono::steady_clock m_Clock;

			/** @brief	The time points array */
			std::chrono::time_point<std::chrono::steady_clock> * m_TimePoints;

			/** @brief	The number of frames calculated */
			long int m_Frames;

		public:

			/**
			 * @fn	RTimer::RTimer(int numberOfTimePoints);
			 *
			 * @brief	Constructor
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 *
			 * @param	numberOfTimePoints	Number of time points required.
			 */
			RTimer(int numberOfTimePoints);

			/**
			 * @fn	RTimer::~RTimer();
			 *
			 * @brief	Destructor
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			~RTimer();

			/**
			 * @fn	long long int RTimer::getRelativeTime(int sinceThisSlotIndex, int tillThisSlotIndex);
			 *
			 * @brief	Gets relative time between two timepoints, referred to by their indices
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 *
			 * @param	sinceThisSlotIndex	Zero-based index of the timepoint at this slot number, to
			 * 								calculate time duration from.
			 * @param	tillThisSlotIndex 	Zero-based index of the timepoint at this slot number, to
			 * 								calculate time duration till.
			 *
			 * @return	The relative time.
			 */
			long long int getRelativeTime(int sinceThisSlotIndex, int tillThisSlotIndex);

			/**
			 * @fn	void RTimer::addTimePoint(int index);
			 *
			 * @brief	Adds a time point at specified index
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 *
			 * @param	index	Zero-based index of the timepoint.
			 */
			void addTimePoint(int index);

			/**
			 * @fn	void RTimer::setFrameCounter();
			 *
			 * @brief	Sets the frame counter.
			 * 			Use just before game loop.
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			void setFrameCounter();

			/**
			 * @fn	void RTimer::evaluateFrames();
			 *
			 * @brief	Evaluate frames.
			 * 			Use at the end of game loop.
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			void evaluateFrames();
		};
	}
}
