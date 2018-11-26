/**
 * @file		Source/awerere_physics_material.cpp.
 *
 * @brief	Defines the Physics Material class
 */

#include <awerere_physics_material.h>

namespace Rubeus
{
	namespace Awerere
	{
		const APhysicsMaterial APhysicsMaterial::DefaultMaterial;

		APhysicsMaterial::APhysicsMaterial()
		{
			makeMaterial(DEFAULT_MASS,
						 RML::Vector2D(0.0f, DEFAULT_GRAVITY),
						 DEFAULT_FRICTION,
						 DEFAULT_RESTITUTION);
		}

		APhysicsMaterial::~APhysicsMaterial()
		{
		}

		void APhysicsMaterial::makeMaterial(const float & mass, RML::Vector2D & gravity, const float & friction, const float & restitution)
		{
			m_Mass = mass;
			m_Gravity = gravity;
			m_CoefficientOfFriction = friction;
			m_CoefficientOfRestitution = restitution;
		}
	}
}
