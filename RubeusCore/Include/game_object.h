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
	private:

	public:
		/** @brief	The singular array that tracks all objects that were instantiated of this class */
		static std::unordered_map<std::string, RGameObject *> InstantiatedGameObjects;

		/** @brief	Name of this game object */
		std::string m_Name;

		/** @brief	The level context during which this object lives */
		std::string m_UsedByLevelName;

		/** @brief	Sprite used for the rendering process */
		GraphicComponents::RSprite * m_Sprite;

		/** @brief	Physics object that handles collisions/response */
		Awerere::APhysicsObject * m_PhysicsObject;

		GraphicComponents::RGroup * m_Parent = NULL;

		/** @brief	Whether this gameobject ticks */
		bool m_ThisTicks;

		/** @brief	Whether this gameobject uses a texture */
		bool m_UsesTexture;

		/** @brief	Whether this gameobject is a group of other child gameobjects */
		bool m_IsGroup = false;

		/** @brief	Whether this gameobject obeys physics and responds to collisions */
		bool m_HasPhysics = false;

		/** @brief	Whether this gameobject generates hit events */
		bool m_GeneratesHit = false;

		/**
		 * @fn		RGameObject(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Awerere::EColliderType & type = Awerere::EColliderType::NO_COLLIDER, Awerere::ACollider * collider = NULL, bool generatesHit = false, const Awerere::APhysicsMaterial & physicsMat = Awerere::APhysicsMaterial())
		 *
		 * @brief	Constructor. Uses images as textures.
		 * @warning	All pointers passed in will be owned by the game object.
					Heap objects will be deleted by the object automatically.
		 *
		 * @param	name				Name of this game object.
		 * @param	levelName		Name of level that uses this object.
		 * @param	x				x coordinate of the lower left point.
		 * @param	y				y coordinate of the lower left point.
		 * @param	deltaX			Horizontal span of the object.
		 * @param	deltaY			Vertical span of the object.
		 * @param	imageFilePath		Path to the image to be used as texture.
		 * @param	enablePhysics		Whether the object obeys physics. Default is false.
		 * @param	type				Collider type to be assigned to this gameobject. Defaults to NO_COLLIDER
		 * @param	collider			The collider object to be used. Defaults to NULL.
		 * @param	generatesHit		Whether the object generates hit events. Default is false.
		 * @param	physicsMat		Provide a physics material to be used to respond to hit events. Defaults to DefaultPhysicsMat.
		 */
		RGameObject(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, const char * imageFilePath, bool enablePhysics = false, const Awerere::EColliderType & type = Awerere::EColliderType::NO_COLLIDER, Awerere::ACollider * collider = NULL, bool generatesHit = false, const Awerere::APhysicsMaterial & physicsMat = Awerere::APhysicsMaterial());

		/**
		 * @fn		RGameObject(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics = false, const Awerere::APhysicsMaterial & material = Awerere::APhysicsMaterial(), const Awerere::EColliderType & type = Awerere::EColliderType::NO_COLLIDER, Awerere::ACollider * collider = NULL, bool generatesHit = false)
		 *
		 * @brief	Constructor. Uses pure colors as textures.
		 * @warning	All pointers passed in will be owned by the game object.
					Heap objects will be deleted by this object.
		 *
		 * @param	name				Name of this game object.
		 * @param	levelName		Name of level that uses this object.
		 * @param	x				x coordinate of the lower left point.
		 * @param	y				y coordinate of the lower left point.
		 * @param	deltaX			Horizontal span of the object.
		 * @param	deltaY			Vertical span of the object.
		 * @param	r				Red channel value.
		 * @param	g				Green channel value.
		 * @param	b				Blue channel value
		 * @param	enablePhysics		Whether the object obeys physics. Default is false.
		 * @param	material			Provide a physics material to be used to respond to hit events. Defaults to DefaultPhysicsMat.
		 * @param	type				Collider type to be assigned to this gameobject. Defaults to NO_COLLIDER.
		 * @param	collider			The collider object to be used. Defaults to NULL.
		 * @param	generatesHit		Whether the object generates hit events. Default is false.
		 */
		RGameObject(std::string name, std::string levelName, float x, float y, float deltaX, float deltaY, float & r, float & g, float & b, bool enablePhysics = false, const Awerere::APhysicsMaterial & material = Awerere::APhysicsMaterial(), const Awerere::EColliderType & type = Awerere::EColliderType::NO_COLLIDER, Awerere::ACollider * collider = NULL, bool generatesHit = false);

		/**
		 * @fn		~RGameObject()
		 *
		 * @brief	Destructor
		 */
		~RGameObject();

		/**
		 * @fn		virtual void begin()
		 *
		 * @brief	Called by the engine once before the level starts to run
		 *
		 */
		virtual void begin();

		/**
		 * @fn		virtual void tick() override
		 *
		 * @brief	Tick function.
		 * @warning	Runs once every frame
		 */
		virtual void tick() override;

		/**
		 * @fn		virtual void onHit(RGameObject * hammer, RGameObject * nail, const Awerere::ACollideData & collisionData)
		 *
		 * @brief	User defined function called whenever a hit event is generated
		 *
		 * @param	hammer			The hitting object.
		 * @param	nail				The object getting hit
		 * @param	collisionData		Details of the collision
		 */
		virtual void onHit(RGameObject * hammer, RGameObject * nail, const Awerere::ACollideData & collisionData);

		/**
		 * @fn		inline void addToTickQueue()
		 *
		 * @brief	Set this object for tick by update function
		 */
		inline void addToTickQueue() { m_ThisTicks = true; }

		/**
		 * @fn		virtual void onMessage(Message * msg)
		 *
		 * @brief	Handles message sent by Message system
		 * @warning	Async invokation only
		 *
		 * @param	msg	The message data.
		 */
		virtual void onMessage(Message * msg) override;

		friend class ACollisionEngine;
		friend class REngine;

	protected:

		/**
		 * @fn		RGameObject()
		 *
		 * @brief	Protected constructor. Only used to create groups
		 */
		RGameObject();
	};
}
