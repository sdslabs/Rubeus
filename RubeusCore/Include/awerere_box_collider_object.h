/**
 * @file		Include/awerere_box_collider_object.h.
 *
 * @brief	Declares the box collider class, used by Awerere
 */
#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collide_data_object.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	/**
     * @namespace @Rubeus::Awerere
	 *
     * @brief   The Awerere Physics Engine namespace.
     *
     * @warning All Awerere classes start with capital 'A'. Structs are an exception
	 */
	namespace Awerere
	{
		class APlaneCollider;
		class ASphereCollider;

		/**
		 * @class	ABoxCollider
		 *
		 * @brief	A box collider attached to a Game object through a Physics object.
		 */
		class ABoxCollider : public ACollider
		{
		private:
			/**
			 * @fn		RML::Vector2D calculateCenter(RML::Vector2D & ll, RML::Vector2D & ur)
			 *
			 * @brief	Calclates the collider center using min and max extents
			 * @warning
			 *
			 * @param	ll	Lower left point.
			 * @param	ur	Upper right point.
			 *
			 * @return	The center of the box.
			 */
			RML::Vector2D calculateCenter(const RML::Vector2D & ll, const RML::Vector2D & ur);

		public:
			/** @brief	Lower left coordinates of the box collider */
			RML::Vector2D m_MinExtent;

			/** @brief	Upper right coordinates of the box collider */
			RML::Vector2D m_MaxExtent;

			/**
			 * @fn		ABoxCollider(const RML::Vector2D & minExtent, const RML::Vector2D & maxExtent)
			 *
			 * @brief	Contructor
			 *
			 * @param	minExtent	The lower left point of the box.
			 * @param	maxExtent	The upper right point of the box.
			 */
			ABoxCollider(const RML::Vector2D & minExtent, const RML::Vector2D & maxExtent);

			/**
			 * @fn		~ABoxCollider()
			 *
			 * @brief	Destructor
			 */
			~ABoxCollider();

			/**
			 * @fn		void selfUpdate(float deltaX, float deltaY) override
			 *
			 * @brief	Update the type specific paramaters of this collider
			 * @warning	Used only inside Awerere
			 *
			 * @param	deltaX	Change in X position.
			 * @param	deltaY	Change in Y position.
			 */
			void selfUpdate(float deltaX, float deltaY) override;

			/**
			 * @fn		ACollideData tryIntersect(ABoxCollider & box) override
			 *
			 * @brief	Returns collision status between 2 different colliders
			 *
			 * @param	box	The box collider to try a collision with.
			 *
			 * @return	Collide data, containing collision information.
			 */
			ACollideData tryIntersect(ABoxCollider & box) override;

			/**
			 * @fn		ACollideData tryIntersect(ABoxCollider & plane) override
			 *
			 * @brief	Returns collision status between 2 different colliders
			 *
			 * @param	plane	The plane collider to try a collision with.
			 *
			 * @return	Collide data, containing collision information.
			 */
			ACollideData tryIntersect(APlaneCollider & plane) override;

			/**
			 * @fn		ACollideData tryIntersect(ABoxCollider & sphere) override
			 *
			 * @brief	Returns collision status between 2 different colliders
			 *
			 * @param	sphere	The sphere collider to try a collision with.
			 *
			 * @return	Collide data, containing collision information.
			 */
			ACollideData tryIntersect(ASphereCollider & sphere) override;

			/**
			 * @fn		inline const RML::Vector2D getLowerLeftBound() const
			 *
			 * @brief	Returns the lower left corner of the box collider
			 *
			 * @return	The lower left corner's position.
			 */
			inline const RML::Vector2D getLowerLeftBound() const { return m_MinExtent; }

			/**
			 * @fn		inline const RML::Vector2D getUpperRightBound() const
			 *
			 * @brief	Returns the upper right corner of the box collider
			 *
			 * @return	The upper right corner's position.
			 */
			inline const RML::Vector2D getUpperRightBound() const { return m_MaxExtent; }

			/**
			 * @fn		inline const RML::Vector2D getUpperLeftBound() const
			 *
			 * @brief	Returns the upper left corner of the box collider
			 *
			 * @return	The upper left corner's position.
			 */
			inline RML::Vector2D getUpperLeftBound() const { return m_MinExtent + RML::Vector2D(0, m_MaxExtent.y - m_MinExtent.y); }

			/**
			 * @fn	inline const RML::Vector2D getLowerRightBound() const
			 *
			 * @brief	Returns the lower right corner of the box collider
			 *
			 * @return	The lower right corner's position.
			 */
			inline RML::Vector2D getLowerRightBound() const { return m_MaxExtent + RML::Vector2D(m_MaxExtent.x - m_MinExtent.x, 0); }
		};
	}
}
