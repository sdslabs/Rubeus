/**
 * @file		Include/game_object.h.
 *
 * @brief	Declares the Game object class
 */

#pragma once

#include <cstdarg>

#include <rubeus_maths_library.h>
#include <entity_object.h>
#include <sprite_object.h>
#include <texture_object.h>
#include <renderer_component.h>
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
		RLevel * m_ContainingLevel;

		/** @brief	Sprite used for the rendering process */
		GraphicComponents::RSprite * m_Sprite;

		/** @brief	Physics object that handles collisions/response */
		Awerere::APhysicsObject * m_PhysicsObject;

		/** @brief	The transform used to place the children of this game object */
		RML::Matrix4 m_TransformationMatrix;

		/** @brief	Vector array of child objects. */
		std::vector<RGameObject *> m_Children;

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
		 * @fn		RGameObject(std::string name, RLevel * levelName, GraphicComponents::RSprite & sprite, RML::Matrix4 transform, bool enablePhysics = false, Awerere::ACollider * collider = NULL, bool generatesHit = false, const Awerere::APhysicsMaterial & physicsMat = Awerere::APhysicsMaterial(), int count = 0, ...)
		 *
		 * @brief	Constructor. Uses images as textures.
		 * @warning	All pointers passed in will be owned by the game object.
					Heap objects will be deleted by the object automatically.
		 *
		 * @param	name				Name of this game object.
		 * @param	levelName			Name of level that uses this object.
		 * @param	sprite				Sprite object that this object renders as on the screen.
		 * @param	transform			Transform matrix that positions this object.
		 * @param	enablePhysics		Whether this object reacts to physical elements.
		 * @param	generatesHit		Whether the object generates hit events. Default is false.
		 * @param	physicsMat			Provide a physics material to be used to respond to hit events. Defaults to DefaultPhysicsMat.
		 * @param	childCount			Number of child objects.
		 * @param	...					Pass by references of child objects.
		 */
		RGameObject(
			std::string name,
			RLevel * levelName,
			GraphicComponents::RSprite & sprite,
			RML::Matrix4 transform,
			bool enablePhysics = false,
			Awerere::ACollider * collider = NULL,
			bool generatesHit = false,
			const Awerere::APhysicsMaterial & physicsMat = Awerere::APhysicsMaterial(),
			int childCount = 0,
			...
		);

		/**
		 * @fn		~RGameObject()
		 *
		 * @brief	Destructor
		 */
		~RGameObject();

		void submit(GraphicComponents::RRendererComponent & renderer) const;

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
		 * @param	hammer				The hitting object.
		 * @param	nail				The object getting hit
		 * @param	collisionData		Details of the collision
		 */
		virtual void onHit(RGameObject * hammer, RGameObject * nail, const Awerere::ACollideData & collisionData);

		/**
		 * @fn		inline void enableTick()
		 *
		 * @brief	Set this object for tick by update function
		 */
		inline void enableTick() { m_ThisTicks = true; }

		/**
		 * @fn		RGameObject & add(RGameObject * gameObject)
		 *
		 * @brief	Adds a game object as the child of this object
		 * @warning	Do not manually delete passed in pointers. This object intends to take ownership of the passed in renderable object.
		 *
		 * @param	gameObject	The game object to be added to this group.
		 *
		 * @return	Reference to this group object. Allows chaining add() calls. E.g. object.add(r1).add(r2);
		 */
		RGameObject & add(RGameObject * gameObject);

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
