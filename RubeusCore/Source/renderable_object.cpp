/**
 * @file		Source\renderable_object.cpp.
 *
 * @brief	Implements the renderable object class
 */

#include <renderable_object.h>
#include "..\Include\renderable_object.h"

namespace Rubeus
{
	namespace GraphicComponents
	{
		RRenderableObject::RRenderableObject(RML::Vector3D position, RML::Vector2D size, RML::Vector4D color)
			:m_Position(position), m_Size(size), m_Color(color)
		{	
		}

		RRenderableObject::~RRenderableObject()
		{
		}

		void RRenderableObject::submit(RRendererComponent & renderer) const
		{
			renderer.submit(this);
		}

		RRenderableObject::RRenderableObject()
		{
		}
	}
}
