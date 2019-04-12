/**
 * @file		Source/group_object.cpp.
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
		RGroup::RGroup(const RML::Matrix4 & transform, int count = 0, ...)
			: m_TransformationMatrix(transform)
		{
			va_list list;

			va_start(list, count);

			for (int arg = 0; arg < count; ++arg)
				this->add(va_arg(list, RGameObject *));

			va_end(list);
		}

		RGroup::~RGroup()
		{
		}

		void RGroup::submit(RRendererComponent & renderer) const
		{
			renderer.push(m_TransformationMatrix);

			for(auto child : m_Children)
			{
				if(child->m_Parent != NULL)
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

		RGroup & RGroup::add(RGameObject * gameObject)
		{
			m_Children.push_back(gameObject);

			return *this;
		}
	}
}
