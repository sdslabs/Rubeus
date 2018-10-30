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
			/** @brief	Lower left coordinates of the box collider */
			RML::Vector3D m_MinExtent;

			/** @brief	Upper right coordinates of the box collider */
			RML::Vector3D m_MaxExtent;

			/**
			 * @fn		RML::Vector3D calculateCenter(RML::Vector3D & ll, RML::Vector3D & ur)
			 *
			 * @brief	Calclates the collider center using min and max extents
			 * @warning
			 *
			 * @param	ll	Lower left point.
			 * @param	ur	Upper right point.
			 *
			 * @return	The center of the box.
			 */
			RML::Vector3D calculateCenter(const RML::Vector3D & ll, const RML::Vector3D & ur);

		public:
			/**
			 * @fn		ABoxCollider(RML::Vector3D & minExtent, RML::Vector3D & maxExtent)
			 *
			 * @brief	Contructor
			 *
			 * @param	minExtent	The lower left point of the box.
			 * @param	maxExtent	The upper right point of the box.
			 */
			ABoxCollider(const RML::Vector3D & minExtent, const RML::Vector3D & maxExtent);

			/**
			 * @fn		~ABoxCollider()
			 *
			 * @brief	Destructor
			 */
			~ABoxCollider();

			/**
			 * @fn		ACollideData tryIntersect(ABoxCollider & box) override
			 *
			 * @brief	Returns collision status between 2 different colliders
			 * @warning
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
			 * @warning
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
			 * @warning
			 *
			 * @param	sphere	The sphere collider to try a collision with.
			 *
			 * @return	Collide data, containing collision information.
			 */
			ACollideData tryIntersect(ASphereCollider & sphere) override;

			void update(const float & deltaTime) override;

			/**
			 * @fn		inline const RML::Vector3D getLowerLeftBound() const
			 *
			 * @brief	Returns the lower left corner of the box collider
			 *
			 * @return	The lower left corner's position.
			 */
			inline const RML::Vector3D getLowerLeftBound() const { return m_MinExtent; }

			/**
			 * @fn		inline const RML::Vector3D getUpperRightBound() const
			 *
			 * @brief	Returns the upper right corner of the box collider
			 *
			 * @return	The upper right corner's position.
			 */
			inline const RML::Vector3D getUpperRightBound() const { return m_MaxExtent; }

			/**
			 * @fn		inline const RML::Vector3D getUpperLeftBound() const
			 *
			 * @brief	Returns the upper left corner of the box collider
			 *
			 * @return	The upper left corner's position.
			 */
			inline RML::Vector3D getUpperLeftBound() const { return m_MaxExtent + RML::Vector3D(0, m_MaxExtent.y - m_MinExtent.y, 0); }

			/**
			 * @fn	inline const RML::Vector3D getLowerRightBound() const
			 *
			 * @brief	Returns the lower right corner of the box collider
			 *
			 * @return	The lower right corner's position.
			 */
			inline RML::Vector3D getLowerRightBound() const { return m_MaxExtent + RML::Vector3D(m_MaxExtent.x - m_MinExtent.x, 0, 0); }
		};
	}
}
