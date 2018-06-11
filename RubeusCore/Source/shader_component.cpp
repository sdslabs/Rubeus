/**
 * @file	Source\shader_component.cpp.
 *
 * @brief	Implements the shader component class
 */

#pragma once

#include <shader_component.h>

namespace Rubeus
{
	namespace GraphicComponents
	{
		GLuint RShaderComponent::loadShader()
		{
			GLCall(GLuint program = glCreateProgram());
			GLCall(GLuint vertexShaderID = glCreateShader(GL_VERTEX_SHADER));
			GLCall(GLuint fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER));
			
			std::string v_save = LoadFile(m_VertPath);
			std::string f_save = LoadFile(m_FragPath);

			const char * vertSource = v_save.c_str();
			const char * fragSource = f_save.c_str();

			/* Compiling vertex shader */

			GLCall(glShaderSource(vertexShaderID, 1, &vertSource, NULL));
			GLCall(glCompileShader(vertexShaderID));

			GLint result;
			GLCall(glGetShaderiv(vertexShaderID, GL_COMPILE_STATUS, &result));

			if(result == GL_FALSE)
			{
				GLint length;
				GLCall(glGetShaderiv(vertexShaderID, GL_INFO_LOG_LENGTH, &length));
				std::vector<char> error(length);

				GLCall(glGetShaderInfoLog(vertexShaderID, length, &length, &error[0]));
				LOG("Vertex shader compilation failed");
				ERROR(&error[0]);

				GLCall(glDeleteShader(vertexShaderID));

				return 0;
			}

			ASSERT("Vertex shader compilation successful");

			/* Compiling fragment shader */

			GLCall(glShaderSource(fragmentShaderID, 1, &fragSource, NULL));
			GLCall(glCompileShader(fragmentShaderID));

			GLCall(glGetShaderiv(fragmentShaderID, GL_COMPILE_STATUS, &result));

			if(result == GL_FALSE)
			{
				GLint length;
				GLCall(glGetShaderiv(fragmentShaderID, GL_INFO_LOG_LENGTH, &length));
				std::vector<char> error(length);

				GLCall(glGetShaderInfoLog(fragmentShaderID, length, &length, &error[0]));
				LOG("Fragment shader compilation failed");
				ERROR(&error[0]);

				GLCall(glDeleteShader(fragmentShaderID));

				return 0;
			}

			ASSERT("Fragment shader compilation successful");


			GLCall(glAttachShader(program, vertexShaderID));
			GLCall(glAttachShader(program, fragmentShaderID));

			GLCall(glLinkProgram(program));
			GLCall(glValidateProgram(program));

			GLCall(glDeleteShader(vertexShaderID));
			GLCall(glDeleteShader(fragmentShaderID));

			ASSERT("Shader addition successful");

			return program;
		}

		GLint RShaderComponent::getUniformLocation(const GLchar * name)
		{
			return glGetUniformLocation(m_ShaderID, name);
		}

		RShaderComponent::RShaderComponent(const char * vertPath, const char * fragPath)
			: m_VertPath(vertPath), m_FragPath(fragPath)
		{
			m_ShaderID = loadShader();
		}

		RShaderComponent::~RShaderComponent()
		{
			GLCall(glDeleteProgram(m_ShaderID));
		}

		void RShaderComponent::setUniform1f(const GLchar * name, float value)
		{
			GLCall(glUniform1f(getUniformLocation(name), value));
		}

		void RShaderComponent::setUniform1i(const GLchar * name, int value)
		{
			GLCall(glUniform1i(getUniformLocation(name), value));
		}

		void RShaderComponent::setUniform2f(const GLchar * name, const RML::Vector2D & vector)
		{
			GLCall(glUniform2f(getUniformLocation(name), vector.x, vector.y));
		}

		void RShaderComponent::setUniform3f(const GLchar * name, const RML::Vector3D & vector)
		{
			GLCall(glUniform3f(getUniformLocation(name), vector.x, vector.y, vector.z));
		}

		void RShaderComponent::setUniform4f(const GLchar * name, const RML::Vector4D & vector)
		{
			GLCall(glUniform4f(getUniformLocation(name), vector.x, vector.y, vector.z, vector.w));
		}

		void RShaderComponent::setUniformMat4(const GLchar * name, const RML::Matrix4 & matrix)
		{
			GLCall(glUniformMatrix4fv(getUniformLocation(name), 1, GL_FALSE, matrix.elements));
		}

		void RShaderComponent::enableShader() const
		{
			GLCall(glUseProgram(m_ShaderID));
		}

		void RShaderComponent::disableShader() const
		{
			GLCall(glUseProgram(0));
		}
	}
}
