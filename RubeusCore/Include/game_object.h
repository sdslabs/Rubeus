/**
 * @file		Include/game_object.h.
 *
 * @brief	Declares the Game object class
 */

#pragma once

#include <rubeus_maths_library.h>
#include <entity_object.h>
#include <sprite_object.h>
#include <texture_object.h>
#include <master_component.h>
#include <awerere_physics_object.h>
#include <awerere_physics_material.h>
#include <awerere_collider_object.h>
#include <awerere_collision_engine.h>

namespace Rubeus
{
	/**
	 * @class	RGameObject
	 *
	 * @brief	A game object. Main class responsible for player interactions.
	 */
	class RGameObject : public REntity, public RMasterComponent
	{
	public:
		/** @brief	Sprite used for the rendering process */
		GraphicComponents::RSprite * m_Sprite;

		/** @brief	Physics object that handles collisions/response */
		Awerere::APhysicsObject * m_PhysicsObject;

		/** @brief	Whether this gameobject ticks */
		bool m_ThisTicks;

		/** @brief	Whether this gameobject uses a texture */
		bool m_UsesTexture;

		/** @brief	Whether this gameobject is a group of other child gameobjects */
		bool m_IsGroup = false;

		/** @brief	Whether this gameobject obeys physics */
		bool m_HasPhysics = false;

		bool m_GeneratesHit = false;

		/**
		 * @fn		RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, Awerere::APhysicsObject * physicsObject = NULL, bool generatesHit = false, const Awerere::APhysicsMaterial & physicsMat = Awerere::APhysicsMaterial())
		 *
		 * @brief	Constructor. Uses images as textures.
		 * @warning	All pointers passed in will be owned by the game object.
					Heap objects will be deleted by the object automatically.
		 *
		 * @param	x				x coordinate of the lower left point.
		 * @param	y				y coordinate of the lower left point.
		 * @param	deltaX			Horizontal span of the object.
		 * @param	deltaX			Vertical span of the object.
		 * @param	imageFilePath		Path to the image to be used as texture.
		 * @param	enablePhysics		Whether the object obeys physics. Default is false.
		 * @param	physicsObject		Physics object to be used for collision detection. Default is NULL. Use only when
									physics has been enabled.
		 * @param	generatesHit		Whether the object generates hit events. Default is false.
		 * @param	physicsMat		Provide a physics material to be used to respond to hit events. Default is
		 */
		RGameObject(float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Awerere::EColliderType & type = Awerere::EColliderType::NO_COLLIDER, Awerere::ACollider * collider = NULL, bool generatesHit = false, const Awerere::APhysicsMaterial & physicsMat = Awerere::APhysicsMaterial());

		/**
		 * @fn		RGameObject(float x, float y, float deltaX, float deltaY, const float & r, const float & g, bool enablePhysics = false, Awerere::APhysicsObject * physicsObject = NULL)
		 *
		 * @brief	Constructor. Uses pure colors as textures.
		 * @warning	All pointers passed in will be owned by the game object.
					Heap objects will be deleted by this object.
		 *
		 * @param	x				x coordinate of the lower left point.
		 * @param	y				y coordinate of the lower left point.
		 * @param	deltaX			Horizontal span of the object.
		 * @param	deltaX			Vertical span of the object.
		 * @param	r				Red channel value.
		 * @param	g				Green channel value.
		 * @param	b				Blue channel value
		 * @param	enablePhysics		Whether the object obeys physics. Default is false.
		 * @param	physicsObject		Physics object to be used for collision detection. Default is NULL. Use only when
									physics has been enabled.
		 * @param	generatesHit		Whether the object generates hit events. Default is false.
		 */
		RGameObject(float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics = false, const Awerere::APhysicsMaterial & material = Awerere::APhysicsMaterial(), const Awerere::EColliderType & type = Awerere::EColliderType::NO_COLLIDER, Awerere::ACollider * collider = NULL, bool generatesHit = false);

		/**
		 * @fn		~RGameObject()
		 *
		 * @brief	Destructor
		 */
		~RGameObject();

		/**
		 * @fn		void tick() override
		 *
		 * @brief	Tick function.
		 * @warning	Runs once every frame
		 */
		void tick() override;

		void onHit(RGameObject * hammer, RGameObject * nail, Awerere::ACollideData & collisionData);

		/**
		 * @fn		inline void addToTickQueue()
		 *
		 * @brief	Set this object for tick by update function
		 */
		inline void addToTickQueue() { m_ThisTicks = true; }

		void onMessage(Message * msg) override;

		friend class ACollisionEngine;

	protected:
		/**
		 * @fn		RGameObject()
		 *
		 * @brief	Protected constructor. Only used to create groups
		 */
		RGameObject();
	};
}
