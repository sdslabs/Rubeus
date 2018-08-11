#include <awerere_physics_material.h>

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
		struct PhysicsMaterial
		{
			float m_Mass;
			float m_CoefficientOfRestitution;
			float m_StaticFriction;
			float m_KineticFriction;
		};
>>>>>>> Add better game object API
=======
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
>>>>>>> Add physics material
	}
}
