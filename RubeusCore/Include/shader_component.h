/**
 * @file	Include\shader_component.h.
 *
 * @brief	Declares the shader component class
 */

#pragma once

#include <vector>

#include <GL\glew.h>

#include <master_component.h>
#include <loader_component.h>
#include <rubeus_maths_library.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		/**
		 * @class	RShader
		 *
		 * @brief	A shader class. Allows shader code to be sent to OpenGL
		 */
		class RShaderComponent : public RMasterComponent
		{
		public:
			/** @brief	Identifier for the shader being added */
			GLuint m_ShaderID;

			/** @brief	Full pathname of the vertex shader code file */
			const char *m_VertPath;

			/** @brief	Full pathname of the fragment shader code file */
			const char *m_FragPath;

			/** @brief	The loader component for shader loading */
			UtilityComponents::RLoaderComponent * m_Loader;

			/**
			 * @fn	GLuint RShader::loadShader();
			 *
			 * @brief	Loads the shader.
			 *
			 * @return	The shader.
			 */
			GLuint loadShader();

			/**
			 * @fn	GLint RShader::getUniformLocation(const GLchar * name);
			 *
			 * @brief	(OpenGL abstraction) Returns an integer that represents the location of a specific
			 * 			uniform variable within a program object
			 * @warning	Do not confuse with hexadecimal memory location
			 *
			 * @param	name	The name.
			 *
			 * @return	The location of uniform variable.
			 */
			GLint getUniformLocation(const GLchar * name);

		public:

			/**
			 * @fn	RShader::RShader(const char * vertPath, const char * fragPath);
			 *
			 * @brief	Constructor
			 *
			 * @param	vertPath	Full pathname of the vertex shader file.
			 * @param	fragPath	Full pathname of the fragment shader file.
			 */
			RShaderComponent(const char * vertPath, const char * fragPath);

			/**
			 * @fn	RShader::~RShader();
			 *
			 * @brief	Destructor
			 */
			~RShaderComponent();

			/**
			 * @fn	void RShader::setUniform1f(const GLchar* name, float value);
			 *
			 * @brief	Sets uniform float value required in the shader code
			 *
			 * @param	name 	The name.
			 * @param	value	The value.
			 */
			void setUniform1f(const GLchar* name, float value);

			/**
			 * @fn	void RShader::setUniform1i(const GLchar* name, int value);
			 *
			 * @brief	Sets uniform int value required in the shader code
			 *
			 * @param	name 	The name.
			 * @param	value	The value.
			 */
			void setUniform1i(const GLchar* name, int value);

			/**
			 * @fn	void RShader::setUniform2f(const GLchar* name, const RML::Vector2D & vector);
			 *
			 * @brief	Sets uniform float Vector2D required in the shader code
			 *
			 * @param	name  	The name.
			 * @param	vector	The vector.
			 */
			void setUniform2f(const GLchar* name, const RML::Vector2D & vector);

			/**
			 * @fn	void RShader::setUniform3f(const GLchar* name, const RML::Vector3D & vector);
			 *
			 * @brief	Sets uniform float Vector3D required in the shader code
			 *
			 * @param	name  	The name.
			 * @param	vector	The vector.
			 */
			void setUniform3f(const GLchar* name, const RML::Vector3D & vector);

			/**
			 * @fn	void RShader::setUniform4f(const GLchar* name, const RML::Vector4D & vector);
			 *
			 * @brief	Sets uniform float Vector4D required in the shader code
			 *
			 * @param	name  	The name.
			 * @param	vector	The vector.
			 */
			void setUniform4f(const GLchar* name, const RML::Vector4D & vector);

			/**
			 * @fn	void RShader::setUniformMat4(const GLchar* name, const RML::Matrix4 & matrix);
			 *
			 * @brief	Sets uniform 4x4 matrix required in the shader code
			 *
			 * @param	name  	The name.
			 * @param	matrix	The matrix.
			 */
			void setUniformMat4(const GLchar* name, const RML::Matrix4 & matrix);

			/**
			 * @fn	void RShader::enableShader() const;
			 *
			 * @brief	Enables the associated shader
			 */
			void enableShader() const;

			/**
			 * @fn	void RShader::disableShader() const;
			 *
			 * @brief	Disables the associated shader
			 */
			void disableShader() const;

		protected:
		};
	}
}
