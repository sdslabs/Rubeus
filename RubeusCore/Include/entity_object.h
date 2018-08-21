/**
 * @file		Include/entity_object.h.
 *
 * @brief	Declares the Entity class
 */

#pragma once

namespace Rubeus
{
	class REntity
	{
	public:
		/** @brief	Number of entities initialised */
		static int entityCount;

		/** @brief	Unique Entity object ID */
		int m_EntityID;

		/**
		 * @fn		virtual void tick()
		 *
		 * @brief	Tick function.
		 * @warning	Invoked every frame
		 */
		virtual void tick();

		/**
		 * @fn		REntity()
		 *
		 * @brief	Constructor
		 */
		REntity();

		/**
		 * @fn		REntity()
		 *
		 * @brief	Destructor
		 */
		virtual ~REntity();

	protected:
	};
}
