#pragma once

namespace Rubeus
{
	namespace Awerere
	{
#define DEFAULT_MASS       10.0f // kg
#define DEFAULT_GRAVITY     9.8f // m/s^2
#define DEFAULT_FRICTION    0.2f // [no units]
#define DEFAULT_RESTITUTION 0.8f // [no units]

		struct APhysicsMaterial
		{
			bool m_EnableCollision;

			float m_Mass;
			float m_Gravity;

			float m_CoefficientOfFriction;
			float m_CoefficientOfRestitution;

			APhysicsMaterial();
			~APhysicsMaterial();

			void makeMaterial(float mass, float gravity, float friction, float restitution);

			inline bool getCollision() { return m_EnableCollision; }
			inline void setCollision(bool override = false) { m_EnableCollision = override; }
		};
	}
}
