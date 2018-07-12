/**
 * @file		Include\renderer_component.h.
 *
 * @brief	Declares the renderer component abstract class
 */

#pragma once

#include <GL/glew.h>
#include <rubeus_maths_library.h>

#include <renderable_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RRendererComponent
		 *
		 * @brief	A renderer component abstraction.
		 *
		 * @author	Twarit
		 * @date	14-06-2018
		 */
		class RRendererComponent : public RMasterComponent
		{
		public:

			/**
			 * @fn	virtual void RRendererComponent::submit(const RRenderableObject* renderable) = 0;
			 *
			 * @brief	Submits the given renderable object to render queue
			 *
			 * @author	Twarit
			 * @date	14-06-2018
			 *
			 * @param	renderable	The renderable.
			 */
			virtual void submit(const RRenderableObject * renderable) = 0;

			/**
			 * @fn	virtual void RRendererComponent::flush() = 0;
			 *
			 * @brief	Flushes the render objects' queue after displaying them
			 *
			 * @author	Twarit
			 * @date	14-06-2018
			 */
			virtual void flush() = 0;
		};
	}
}
