#pragma once

#include <rubeus_maths_library.h>
#include <awerere_collider_object.h>

namespace Rubeus
{
	namespace Awerere
	{
<<<<<<< HEAD
<<<<<<< HEAD
		enum class EColliderType
=======
		enum EColliderType
>>>>>>> Add support for generalised collider class
=======
		enum class EColliderType
>>>>>>> Add simplified game-physics object creation
		{
			SPHERE,
			PLANE,
			BOX,
			NO_COLLIDER
		};

		class ACollider
		{
		protected:
			RML::Vector3D m_Position;
			RML::Vector2D m_Velocity;
			EColliderType m_Type;

		public:
<<<<<<< HEAD
<<<<<<< HEAD
			ACollider();
			ACollider(RML::Vector3D position, RML::Vector2D velocity);
			virtual ~ACollider();
=======
			ACollider(RML::Vector3D position, RML::Vector2D velocity);
>>>>>>> Add support for generalised collider class
=======
			ACollider();
			ACollider(RML::Vector3D position, RML::Vector2D velocity);
			virtual ~ACollider();
>>>>>>> Add simplified game-physics object creation

			inline RML::Vector3D getPosition() const { return m_Position; }
			inline RML::Vector2D getVelocity() const { return m_Velocity; }
			inline EColliderType getType() const { return m_Type; }

			inline void setPosition(const RML::Vector3D & position) { m_Position = position; }
			inline void setVelocity(const RML::Vector2D & velocity) { m_Velocity = velocity; }
		};
	}
}
