/**
 * @fn	Source/awerere_box_collider_object.cpp
 *
 * @brief	Defines the Box Collider class
 */

#include <awerere_box_collider_object.h>

#include <awerere_plane_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_collide_data_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		RML::Vector2D ABoxCollider::calculateCenter(const RML::Vector2D & ll, const RML::Vector2D & ur)
		{
			return RML::Vector2D(ll + ur) * 0.5f;
		}

		ABoxCollider::ABoxCollider(const RML::Vector2D & minExtent, const RML::Vector2D & maxExtent)
			: ACollider(minExtent, RML::Vector2D()), m_MinExtent(minExtent), m_MaxExtent(maxExtent)
		{
			m_Type = EColliderType::BOX;
		}

		ABoxCollider::~ABoxCollider()
		{
		}

		void ABoxCollider::selfUpdate(float deltaX, float deltaY)
		{
			m_MinExtent.x += deltaX;
			m_MinExtent.y += deltaY;

			m_MaxExtent.x += deltaX;
			m_MaxExtent.y += deltaY;
		}

		ACollideData ABoxCollider::tryIntersect(ABoxCollider & box)
		{
			// Don't touch this. Proceed to ignore this warning if you know what you are doing

			RML::Vector2D gap1 = box.getLowerLeftBound() - m_MaxExtent;
			RML::Vector2D gap2 = m_MinExtent - box.getUpperRightBound();

			RML::Vector2D maxGap = gap1.maxVector(gap2);
			float maxDistance = maxGap.maxXYComponent();
			float approximation = 1.0e-5f;

			RML::Vector2D normal(0.0f, 0.0f);
			RML::Vector2D boxSize(RML::Vector2D(box.m_MinExtent - box.m_MaxExtent).abs());

			if (maxDistance < 0.0f)
			{
				maxGap = maxGap.abs();
				if (m_MinExtent.x <= box.m_MinExtent.x &&
					box.m_MinExtent.x <= m_MaxExtent.x)
				{
					if (box.m_MaxExtent.x > m_MaxExtent.x)
					{
						if (maxGap.x >= maxGap.y)
						{
							normal.y = (m_MinExtent.y >= box.m_MinExtent.y) ? -1.0f : +1.0f;
						}
						else
						{
							normal.x = +1.0f;
						}
					}
					else
					{
						if (box.m_MaxExtent.y > m_MaxExtent.y)
						{
							normal.y = +1.0f;
						}
						else
						{
							normal.y = -1.0f;
						}
					}
				}
				else if (box.m_MaxExtent.x >= m_MaxExtent.x)
				{
					normal.y = box.m_MaxExtent.y >= m_MaxExtent.y ? +1.0f : -1.0f;
				}
				else
				{
					if (box.m_MaxExtent.y >= m_MaxExtent.y)
					{
						normal.y = 1.0f;
						return ACollideData(maxDistance < 0.0f, maxDistance, normal);
					}

					if (maxGap.x >= maxGap.y)
					{
						normal.y = box.m_MaxExtent.y >= m_MaxExtent.y ? +1.0f : -1.0f;
					}
					else
					{
						normal.x = -1.0f;
					}
				}
			}

			//if (abs(box.getPosition().y + boxSize.y / 2.0f - m_MinExtent.y) <= approximation)
			//{
			//	normal.y = -1.0f;
			//}
			//if (abs(box.getPosition().y - boxSize.y / 2.0f - m_MaxExtent.y) <= approximation)
			//{
			//	normal.y = 1.0f;
			//}
			//if (abs(box.getPosition().x + boxSize.x / 2.0f - m_MinExtent.x) <= approximation)
			//{
			//	normal.x = -1.0f;
			//}

			//if (maxDistance < 0.0f)
			//{
			//	LOG("HO!");
			//	normal = maxGap.getVector2D();
			//}

			return ACollideData(maxDistance < 0.0f, maxDistance, normal);
		}

		ACollideData ABoxCollider::tryIntersect(APlaneCollider & plane)
		{
			return plane.tryIntersect(*this);
		}

		ACollideData ABoxCollider::tryIntersect(ASphereCollider & sphere)
		{
			RML::Vector2D closestPoint;
			const RML::Vector2D & center = sphere.getCenter();

			// Find the closest x offset
			if (center.x <= m_MinExtent.x)
			{
				closestPoint.x = m_MinExtent.x;
			}
			else if (center.x >= m_MaxExtent.x)
			{
				closestPoint.x = m_MaxExtent.x;
			}
			else
			{
				closestPoint.x = center.x;
			}

			// Find closest y offset
			if (center.y <= m_MinExtent.y)
			{
				closestPoint.y = m_MinExtent.y;
			}
			else if (center.y >= m_MaxExtent.y)
			{
				closestPoint.y = m_MaxExtent.y;
			}
			else
			{
				closestPoint.y = center.y;
			}

			// Find distance of original sphere center from the closest point
			float penetrationDistance = RML::Vector2D(closestPoint - center).getLength();

			RML::Vector2D normal = RML::Vector2D(closestPoint - center);
			normal = normal.toUnitVector();

			return ACollideData(
				penetrationDistance < sphere.getRadius(),
				penetrationDistance - sphere.getRadius(),
				normal
			);
		}
	}
}
