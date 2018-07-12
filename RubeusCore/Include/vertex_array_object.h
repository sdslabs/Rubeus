/**
 * @file		Include\vertex_array_object.h.
 *
 * @brief	Declares the vertex array class
 */

#pragma once

#include <GL/glew.h>
#include <vector>

#include <buffer_object.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RVertexArray
		 *
		 * @brief	A vertex array class that handles vertex and index buffer bindings.
		 *
		 * @author	Twarit
		 * @date	13-06-2018
		 */
		class RVertexArray
		{
		private:
			/** @brief	Identifier for the array */
			GLuint m_ArrayID;

			/** @brief	The buffers */
			std::vector<RBuffer *> m_Buffers;

		public:

			/**
			 * @fn	RVertexArray::RVertexArray();
			 *
			 * @brief	Default constructor. Acquires a vertex array object ID from OpenGL
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			RVertexArray();

			/**
			 * @fn	RVertexArray::~RVertexArray();
			 *
			 * @brief	Destructor
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			~RVertexArray();

			/**
			 * @fn	void RVertexArray::addBuffer(RBuffer * buffer, GLuint index);
			 *
			 * @brief	Adds a buffer to the specified shader ID
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 *
			 * @param [in,out]	buffer	If non-null, the buffer.
			 * @param 		  	index 	The location specified in shader to add a buffer to.
			 */
			void addBuffer(RBuffer * buffer, GLuint index);

			/**
			 * @fn	void RVertexArray::bindVertexArray();
			 *
			 * @brief	Bind this vertex array
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			void bindVertexArray() const;

			/**
			 * @fn	void RVertexArray::unbindVertexArray();
			 *
			 * @brief	Unbind this vertex array
			 *
			 * @author	Twarit
			 * @date	13-06-2018
			 */
			void unbindVertexArray() const;

		protected:
		};
	}
}
