/**
 * @file		Include\renderable_object.h.
 *
 * @brief	Declares the renderable object class
 */

#pragma once

#include <GL/glew.h>
#include <rubeus_maths_library.h>

#include <buffer_object.h>
#include <index_buffer_object.h>
#include <vertex_array_object.h>
#include <shader_component.h>
#include <renderer_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @struct	VertexData
		 *
		 * @brief	A structure holding vertex data to be sent to OpenGL.
		 */
		struct VertexData
		{
			/** @brief	The vertex position */
			RML::Vector3D vertex;

			/** @brief	The color of this vertex */
			RML::Vector4D color;
		};

		/**
		 * @class	RRenderableObject
		 *
		 * @brief	A renderable object.
		 * 			Allows specifying the position, size and color of the renderable object.
		 */
		class RRenderableObject
		{
		public:
			/** @brief	Identifier for the object */
			unsigned int m_ObjectID;

			/** @brief	The position of the sprite */
			RML::Vector3D m_Position;

			/** @brief	The size of the sprite */
			RML::Vector2D m_Size;
			
			/** @brief	The color of the sprite */
			RML::Vector4D m_Color;

			/**
			 * @fn	RRenderableObject::RRenderableObject(RML::Vector3D position, RML::Vector2D size, RML::Vector4D color);
			 *
			 * @brief	Constructor. Sets position, size, color of the sprite to be used for in the given
			 * 			shader
			 *
			 * @param 		  	position	The position.
			 * @param 		  	size		The size.
			 * @param 		  	color   	The color.
			 */
			RRenderableObject(RML::Vector3D position, RML::Vector2D size, RML::Vector4D color);

			/**
			 * @fn	virtual RRenderableObject::~RRenderableObject();
			 *
			 * @brief	Destructor.
			 */
			virtual ~RRenderableObject();

			virtual void submit(RRendererComponent & renderer) const;

			/**
			 * @fn	inline const RML::Vector3D& RRenderableObject::getPosition()
			 *
			 * @brief	Gets the position
			 *
			 * @return	The position.
			 */
			inline const RML::Vector3D& getPosition() const { return m_Position; }

			/**
			 * @fn	inline const RML::Vector2D& RRenderableObject::getSize()
			 *
			 * @brief	Gets the size
			 *
			 * @return	The size.
			 */
			inline const RML::Vector2D& getSize() const { return m_Size; }

			/**
			 * @fn	inline const RML::Vector4D& RRenderableObject::getColor()
			 *
			 * @brief	Gets the color
			 *
			 * @return	The color.
			 */
			inline const RML::Vector4D& getColor() const { return m_Color; }

		protected:
			RRenderableObject();
		};
	}
}
