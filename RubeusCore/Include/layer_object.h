/**
 * @file		Include/layer_object.h
 *
 * @brief	Declares the layer class	
 */
#pragma once

#include <map>

#include <renderable_object.h>
#include <group_object.h>
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
			 * @warning	
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
			 * @fn		virtual RLayer & addGroup(Group & group) = 0
			 *
			 * @brief	Adds a group object to this layer
			 * @warning	No removal capability.
			 *
			 * @param	group	The group object to pass in.
			 *
			 * @return	Reference to this layer. Provides chaining group additions. E.g. layer.addgroup(g1).addgroup(g2);
			 */
			virtual RLayer & addGroup(Group & group) = 0;

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
