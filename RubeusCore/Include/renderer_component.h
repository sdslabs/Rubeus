/**
 * @file		Include\renderer_component.h.
 *
 * @brief	Declares the renderer component abstract class
 */

#pragma once

#include <GL/glew.h>

#include <rubeus_maths_library.h>
#include <master_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		class RRenderableObject;

		/**
		 * @class	RRendererComponent
		 *
		 * @brief	A renderer component abstraction.
		 */
		class RRendererComponent : public RMasterComponent
		{
		public:

			/**
			 * @fn		virtual void RRendererComponent::submit(const RRenderableObject* renderable) = 0;
			 *
			 * @brief	Submits the given renderable object to render queue
			 *
			 * @param	renderable	The renderable.
			 */
			virtual void submit(const RRenderableObject * renderable) = 0;

			/**
			 * @fn		virtual void RRendererComponent::flush() = 0;
			 *
			 * @brief	Flushes the render objects' queue after displaying them
			 */
			virtual void flush() = 0;

			/**
			 * @fn		virtual void push(const RML::Matrix4 & matrix)
			 *
			 * @brief	Push a tranform into the tranformation stack
			 *
			 * @param	matrix	The Matrix4 object to push in.
			 */
			virtual void push(const RML::Matrix4 & matrix) { }

			/**
			 * @fn		virtual void pushOverride(const RML::Matrix4 & matrix)
			 *
			 * @brief	Push a tranform into the tranformation stack, while disrespecting already
			 *			present matrices/
			 *
			 * @param	matrix	The Matrix4 object to push in.
			 */
			virtual void pushOverride(RML::Matrix4 & matrix) { }

			/**
			 * @fn		virtual void pop()
			 *
			 * @brief	Pop and return a tranform from the tranformation stack
			 */
			virtual void pop() { }
		};
	}
}
