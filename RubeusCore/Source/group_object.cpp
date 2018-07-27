/**
 * @file		Source\group_object.cpp.
 *
 * @brief	Implements the group object structure
 */

#include <group_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RGroup::RGroup(const RML::Matrix4 & transform)
			: m_TransformationMatrix(transform)
		{
		}

		RGroup::~RGroup()
		{
		}

		void RGroup::submit(RRendererComponent & renderer) const
		{
			renderer.push(m_TransformationMatrix);

			for(const RRenderableObject * child : m_Renderables)
			{
				child->submit(renderer);
			}

			renderer.pop();
		}

		RGroup & RGroup::add(RRenderableObject * renderable)
		{
			m_Renderables.push_back(renderable);

			return *this;
		}

		RGroup & RGroup::add(RGameObject * gameObject)
		{
			m_Renderables.push_back(gameObject->m_Sprite);

			return *this;
		}
	}
}
