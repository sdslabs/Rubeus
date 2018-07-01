/**
 * @file		Include\guerrilla_renderer_component.h.
 *
 * @brief	Declares the guerrilla renderer component class.
 */

#pragma once

#include <cstddef>

#include <renderer_component.h>
#include <renderable_object.h>
#include <index_buffer_object.h>

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

			/** @brief	Vector of transform matrices */
			std::vector<RML::Matrix4> m_TransformationStack;

			/** @brief	Cache for last element of trasnformation stack */
			RML::Matrix4 * m_TransformationBack;

			/**
			 * @fn		void RGuerrillaRendererComponent::init();
			 *
			 * @brief	Initializes vertex objects
			 */
			void init();

		public:

			/**
			 * @fn		RGuerrillaRendererComponent::RGuerrillaRendererComponent();
			 *
			 * @brief	Default constructor
			 */
			RGuerrillaRendererComponent();

			/**
			 * @fn		RGuerrillaRendererComponent::~RGuerrillaRendererComponent();
			 *
			 * @brief	Destructor
			 */
			~RGuerrillaRendererComponent();

			/**
			 * @fn		void RGuerrillaRendererComponent::begin();
			 *
			 * @brief	Begins the rendering task
			 */
			void begin();

			/**
			 * @fn		void RGuerrillaRendererComponent::submit(const RRenderableObject * renderable) override;
			 *
			 * @brief	Submits the given renderable object
			 *
			 * @param	renderable	The renderable.
			 */
			void submit(const RRenderableObject * renderable) override;

			/**
			 * @fn		void RGuerrillaRendererComponent::end();
			 *
			 * @brief	Ends the rendering task
			 */
			void end();

			/**
			 * @fn		void RGuerrillaRendererComponent::flush() override;
			 *
			 * @brief	Flushes the render objects
			 */
			void flush() override;

			/**
			 * @fn		void push(const RML::Matrix4 & matrix)
			 *
			 * @brief	Push matrix into render transformation matrix stack
			 *
			 * @param	matrix	The matrix to add.
			 */
			void push(const RML::Matrix4 & matrix);

			/**
			 * @fn		void pushOverride(const RML::Matrix4 & matrix)
			 *
			 * @brief	Push matrix into render transformation matrix stack
			 *
			 * @param	matrix	The matrix to add.
			 */
			void pushOverride(RML::Matrix4 matrix);

			/**
			 * @fn		void pop()
			 *
			 * @brief	Pop a matrix from the render stack
			 * @warning	Avoid excessive popping.
			 */
			void pop();

		protected:
		};
	}
}
