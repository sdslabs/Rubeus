#pragma once

#include <rubeus_maths_library.h>
#include <vector>

namespace Rubeus
{
	namespace Awerere
	{
		// TODO: Remove when ACollider class gets implemented
		class ACollider;

		class ARigidBody
		{
			float m_Mass;

			RML::Vector2D m_GlobalCentroid;
			RML::Vector2D m_LocalCentroid;

			RML::Vector3D m_Position;
			RML::Vector3D m_Orientation;
			RML::Vector3D m_LinearVelocity;
			RML::Vector3D m_AngularVelocity;

			RML::Vector3D m_ForceAccumulator;
			RML::Vector3D m_TorqueAccumulator;

			std::vector<ACollider> m_Colliders;

			void updateGlobalCentroidFromPosition();
			void updatePositionFromGlobalCentroid();

			void updateOrientation();

			void addCollider(ACollider & collider);

			const RML::Vector3D localToGlobal(const RML::Vector3D & vector) const;
			const RML::Vector3D globalToLocal(const RML::Vector3D & vector) const;

			void applyForce(const RML::Vector3D & force, const RML::Vector3D & at);
		};
	}
}
