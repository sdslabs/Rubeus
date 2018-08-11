#include <awerere_physics_material.h>

namespace Rubeus
{
	namespace Awerere
	{
		APhysicsMaterial::APhysicsMaterial()
		{
			// makeMaterial();
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
