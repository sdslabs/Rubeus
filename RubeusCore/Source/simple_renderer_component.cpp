/**
 * @file		Source/simple_renderer_component.cpp.
 *
 * @brief	Implements the simple renderer
 */

#include <simple_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		void RSimpleRendererComponent::submit(const RRenderableObject * renderable)
		{
			// TODO: Add logs for adding names to renderable objects
			m_RenderQueue.push_back((RStaticSprite *) renderable);
		}

		void RSimpleRendererComponent::flush()
		{
			while(!m_RenderQueue.empty())
			{
				const RStaticSprite * sprite = m_RenderQueue.front();
				sprite->getVAO()->bindVertexArray();
				sprite->getIBO()->bindIndexBuffer();

				sprite->getShader().setUniformMat4("model_matrix", RML::Matrix4::translation(sprite->getPosition()));
				GLCall(glDrawElements(GL_TRIANGLES, sprite->getIBO()->getIndexCount(), GL_UNSIGNED_SHORT, 0));

				sprite->getIBO()->unbindIndexBuffer();
				sprite->getVAO()->unbindVertexArray();

				m_RenderQueue.pop_front();
			}
		}
	}
}
