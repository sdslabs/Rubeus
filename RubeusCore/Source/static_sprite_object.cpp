/**
 * @file		Source\static_sprite_object.cpp.
 *
 * @brief	Implements the static sprite class
 */

#include <static_sprite_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		RStaticSprite::RStaticSprite(float x, float y, float width, float height, RML::Vector4D & color, RShaderComponent & shader)
			: RRenderableObject(new RML::Vector3D(x, y, 0), new RML::Vector2D(width, height), new RML::Vector4D(color)), m_Shader(shader)
		{
			m_VertexArray = new RVertexArray();

			GLfloat vertices[] =
			{
				0, 0, 0,
				0, height, 0,
				width, height, 0,
				width, 0, 0
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
		RStaticSprite::~RStaticSprite()
		{
			delete m_VertexArray;
			delete m_IndexBuffer;
		}
	}
}
