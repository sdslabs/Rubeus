#include <awerere_physics_material.h>

namespace Rubeus
{
	namespace Awerere
	{
		APhysicsMaterial::APhysicsMaterial()
		{
			makeMaterial(DEFAULT_MASS,
						 DEFAULT_GRAVITY,
						 DEFAULT_FRICTION,
						 DEFAULT_RESTITUTION);
		}

		APhysicsMaterial::~APhysicsMaterial()
		{
		}

		void APhysicsMaterial::makeMaterial(float mass, float gravity, float friction, float restitution)
		{
			m_Mass = mass;
			m_Gravity = gravity;
			m_CoefficientOfFriction = friction;
			m_CoefficientOfRestitution = restitution;
		}
	}
}
