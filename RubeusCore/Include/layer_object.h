/**
 * @file		Include/layer_object.h
 *
 * @brief	Declares the layer class
 */
#pragma once

#include <map>

#include <renderable_object.h>
#include <game_object.h>
#include <guerrilla_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RLayer
		 *
		 * @brief	A layer class. Manages layer renders and groups.
		 * @warning	Contains no remove group feature
		 */
		class RLayer
		{
		public:

			/**
			 * @fn		RLayer()
			 *
			 * @brief	Default constructor
			 */
			RLayer() = default;

			/**
			 * @fn		virtual ~RLayer()
			 *
			 * @brief	Destructor
			 * @warning	Virtual destructor
			 */
			virtual ~RLayer() = default;

			/**
			 * @fn		virtual RLayer & addGameObject(RGameObject * gameObject) = 0
			 *
			 * @brief	Adds a game object to this layer
			 * @warning	No removal capability.
			 *
			 * @param	gameObject	The game object to pass in.
			 *
			 * @return	Reference to this layer. Provides chaining group additions. E.g. layer.addGameObject(g1).addGameObject(g2);
			 */
			virtual RLayer & addGameObject(RGameObject * gameObject) = 0;

			/**
			 * @fn		virtual void draw() = 0
			 *
			 * @brief	Draw the complete layer
			 * @warning	Virtual function
			 */
			virtual void draw() = 0;
		};
	}
}
