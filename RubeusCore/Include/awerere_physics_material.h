#pragma once

namespace Rubeus
{
	namespace Awerere
	{
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
