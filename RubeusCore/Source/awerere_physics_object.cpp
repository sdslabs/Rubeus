/**
 * @file		Source/awerere_physics_object.cpp.
 *
 * @brief	Defines the Physics object class
 */

#include <awerere_physics_object.h>

#include <logger_component.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>
#include <awerere_collider_object.h>
#include <awerere_plane_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
		APhysicsObject::APhysicsObject()
			: m_PhysicsMaterial(APhysicsMaterial()), m_Collider(NULL), m_EnablePhysics(false), m_Sprite(NULL)
		{
		}

		APhysicsObject::APhysicsObject(const APhysicsMaterial & material, const bool & enablePhysics, const EColliderType & type, ACollider * collider, GraphicComponents::RSprite * sprite)
			: m_PhysicsMaterial(material), m_Collider(collider), m_Sprite(sprite)
		{
			if (type == EColliderType::BOX
				|| type == EColliderType::PLANE
				|| type == EColliderType::SPHERE
				|| type == EColliderType::NO_COLLIDER)
			{
				m_Collider = collider;
				m_EnablePhysics = enablePhysics;

				if (collider != NULL)
				{
					m_Collider->setMaterial(material);
				}
			}
			else
			{
				LOG("Invalid Collider type. Use members of EColliderType");
			}
		}

		APhysicsObject::~APhysicsObject()
		{
			delete m_Collider;
		}
	}
}
