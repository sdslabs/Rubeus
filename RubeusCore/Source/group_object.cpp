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

			for(auto item : m_Renderables)
			{
				renderer.submit(&item);
			}

			renderer.pop();
		}

		RGroup & RGroup::addRenderable(RRenderableObject * renderable)
		{
			m_Renderables.push_back(*renderable);

			return *this;
		}
	}
}
