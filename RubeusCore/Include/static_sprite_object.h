/**
 * @file		Include\static_sprite_object.h.
 *
 * @brief	Declares the static sprite class
 */

#pragma once

#include <renderable_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RStaticSprite
		 *
		 * @brief	A static sprite.
		 */
		class RStaticSprite : public RRenderableObject
		{
		private:
			/** @brief	Array of vertices */
			RVertexArray * m_VertexArray;

			/** @brief	Buffer for index data */
			RIndexBuffer * m_IndexBuffer;

			/** @brief	The shader */
			RShaderComponent& m_Shader;

		public:

			/**
			 * @fn		RStaticSprite::RStaticSprite(float x, float y, float width, float height, const RML::Vector4D & color, RShaderComponent & shader);
			 *
			 * @brief	Constructor
			 *
			 * @param 		  	x	  	The x offset.
			 * @param 		  	y	  	The y offset.
			 * @param 		  	width 	The width.
			 * @param 		  	height	The height.
			 * @param 		  	color 	The color.
			 * @param [in,out]	shader	The shader.
			 */
			RStaticSprite(float x, float y, float width, float height, const RML::Vector4D & color, RShaderComponent & shader);

			/**
			 * @fn		RStaticSprite::~RStaticSprite();
			 *
			 * @brief	Destructor
			 */
			~RStaticSprite();

			/**
			 * @fn		inline RVertexArray* RStaticSprite::getVAO() const
			 *
			 * @brief	Gets the vao
			 *
			 * @return	Null if it fails, else the vao.
			 */
			inline RVertexArray* getVAO() const { return m_VertexArray; }

			/**
			 * @fn		inline RIndexBuffer* RStaticSprite::getIBO() const
			 *
			 * @brief	Gets the ibo
			 *
			 * @return	Null if it fails, else the ibo.
			 */
			inline RIndexBuffer* getIBO() const { return m_IndexBuffer; }

			/**
			 * @fn		inline RShaderComponent& RStaticSprite::getShader() const
			 *
			 * @brief	Gets the shader
			 *
			 * @return	The shader.
			 */
			inline RShaderComponent& getShader() const { return m_Shader; }

		protected:
		};
	}
}
