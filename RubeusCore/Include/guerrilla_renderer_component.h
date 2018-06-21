/**
 * @file	Include\guerrilla_renderer_component.h.
 *
 * @brief	Declares the guerrilla renderer component class
 */

#pragma once

#include <cstddef>

#include <renderer_component.h>
#include <index_buffer.h>

namespace Rubeus
{
	namespace GraphicComponents
	{

#define MAX_SPRITES 60000
#define VERTEX_SIZE sizeof(VertexData)
#define SPRITE_SIZE VERTEX_SIZE * 4
#define BUFFER_SIZE SPRITE_SIZE * MAX_SPRITES
#define INDICES_SIZE MAX_SPRITES * 6

#define SHADER_VERTEX_LOCATION 0
#define SHADER_COLOR_LOCATION 1

		/**
		 * @class	RGuerrillaRendererComponent
		 *
		 * @brief	A guerrilla renderer component. Made for increased performance.
		 * 			Default renderer. Use instead of simple renderer
		 *
		 * @author	Twarit
		 * @date	20-06-2018
		 */
		class RGuerrillaRendererComponent : public RRendererComponent
		{
		private:
			/** @brief	The Vertex Array object ID */
			unsigned int m_VAO;

			/** @brief	The Vertex Buffer object */
			GLuint m_VBO;

			/** @brief	The Index Buffer object */
			RIndexBuffer * m_IBO;

			/** @brief	Number of indices in the index buffer */
			GLsizei m_IndexCount;

			/** @brief	The vertex buffer */
			VertexData * m_Buffer;

			/**
			 * @fn	void RGuerrillaRendererComponent::init();
			 *
			 * @brief	Initializes vertex objects
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			void init();

		public:

			/**
			 * @fn	RGuerrillaRendererComponent::RGuerrillaRendererComponent();
			 *
			 * @brief	Default constructor
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			RGuerrillaRendererComponent();

			/**
			 * @fn	RGuerrillaRendererComponent::~RGuerrillaRendererComponent();
			 *
			 * @brief	Destructor
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			~RGuerrillaRendererComponent();

			/**
			 * @fn	void RGuerrillaRendererComponent::begin();
			 *
			 * @brief	Begins the rendering task
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			void begin();

			/**
			 * @fn	void RGuerrillaRendererComponent::submit(const RRenderableObject * renderable) override;
			 *
			 * @brief	Submits the given renderable object
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 *
			 * @param	renderable	The renderable.
			 */
			void submit(const RRenderableObject * renderable) override;

			/**
			 * @fn	void RGuerrillaRendererComponent::end();
			 *
			 * @brief	Ends the rendering task
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			void end();

			/**
			 * @fn	void RGuerrillaRendererComponent::flush() override;
			 *
			 * @brief	Flushes the render objects
			 *
			 * @author	Twarit
			 * @date	20-06-2018
			 */
			void flush() override;

		protected:
		};
	}
}
