#include <simple_renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		void RSimpleRendererComponent::submit(const RRenderableObject * renderable)
		{
			// TODO: Add logs for adding names to renderable objects
			m_RenderQueue.push_back(renderable);
		}

		void RSimpleRendererComponent::flush()
		{
			while(!m_RenderQueue.empty())
			{
				const RRenderableObject* renderable = m_RenderQueue.front();
				renderable->getVAO()->bindVertexArray();
				renderable->getIBO()->bindIndexBuffer();

				renderable->getShader().setUniformMat4("model_matrix", RML::Matrix4::translation(renderable->getPosition()));
				glDrawElements(GL_TRIANGLES, renderable->getIBO()->getIndexCount(), GL_UNSIGNED_SHORT, 0);

				renderable->getIBO()->unbindIndexBuffer();
				renderable->getVAO()->unbindVertexArray();

				m_RenderQueue.pop_front();
			}
		}
	}
}
