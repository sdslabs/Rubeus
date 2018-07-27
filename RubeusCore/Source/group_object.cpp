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

			for(auto child : m_Children)
			{
				if(child->m_IsGroup == false)
				{
					child->m_Sprite->submit(renderer);
				}
				else
				{
					for(auto groupChild : (dynamic_cast<RGroup *>(child))->m_Children)
					{
						groupChild->m_Sprite->submit(renderer);
					}
				}
			}

			renderer.pop();
		}

		RGroup & RGroup::add(RSprite * renderable)
		{
			m_Children.push_back(&RGameObject(*renderable));

			return *this;
		}

		RGroup & RGroup::add(RGameObject * gameObject)
		{
			m_Children.push_back(gameObject);

			return *this;
		}
	}
}
