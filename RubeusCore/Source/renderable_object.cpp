/**
 * @file	Source\renderable_object.cpp.
 *
 * @brief	Implements the renderable object class
 */

#include <renderable_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RRenderableObject::RRenderableObject(RML::Vector3D position, RML::Vector2D size, RML::Vector4D color, RShaderComponent & shader)
			:m_Position(position), m_Size(size), m_Color(color), m_Shader(shader)
		{
			m_VertexArray = new RVertexArray();

			GLfloat vertices[] = 
			{
				0, 0, 0,
				0, size.y, 0,
				size.x, size.y, 0,
				size.x, 0, 0
			};

			GLfloat colors[] = 
			{
				color.x, color.y, color.z, color.w,
				color.x, color.y, color.z, color.w,
				color.x, color.y, color.z, color.w,
				color.x, color.y, color.z, color.w
			};

			GLushort indices[] =
			{
				0, 1, 2,
				2, 3, 0
			};

			m_VertexArray->addBuffer(new RBuffer(vertices, 4 * 3, 3), 0);
			m_VertexArray->addBuffer(new RBuffer(colors, 4 * 4, 4), 1);
			m_IndexBuffer = new RIndexBuffer(indices, 6);
		}

		RRenderableObject::~RRenderableObject()
		{
			delete m_VertexArray;
			delete m_IndexBuffer;
		}
	}
}
