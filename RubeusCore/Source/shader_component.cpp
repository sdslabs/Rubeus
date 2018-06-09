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
			GLuint program = glCreateProgram();
			GLuint vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
			GLuint fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
			
			std::string v_save = LoadFile(m_VertPath);
			std::string f_save = LoadFile(m_FragPath);

			const char * vertSource = v_save.c_str();
			const char * fragSource = f_save.c_str();

			/* Compiling vertex shader */

			glShaderSource(vertexShaderID, 1, &vertSource, NULL);
			glCompileShader(vertexShaderID);

			GLint result;
			glGetShaderiv(vertexShaderID, GL_COMPILE_STATUS, &result);

			if(result == GL_FALSE)
			{
				GLint length;
				glGetShaderiv(vertexShaderID, GL_INFO_LOG_LENGTH, &length);
				std::vector<char> error(length);

				glGetShaderInfoLog(vertexShaderID, length, &length, &error[0]);
				LOG("Vertex shader compilation failed");
				LOG(&error[0]);

				glDeleteShader(vertexShaderID);

				return 0;
			}

			/* Compiling fragment shader */

			glShaderSource(fragmentShaderID, 1, &fragSource, NULL);
			glCompileShader(fragmentShaderID);

			glGetShaderiv(fragmentShaderID, GL_COMPILE_STATUS, &result);

			if(result == GL_FALSE)
			{
				GLint length;
				glGetShaderiv(vertexShaderID, GL_INFO_LOG_LENGTH, &length);
				std::vector<char> error(length);

				glGetShaderInfoLog(vertexShaderID, length, &length, &error[0]);
				LOG("Fragment shader compilation failed");
				LOG(&error[0]);

				glDeleteShader(fragmentShaderID);

				return 0;
			}

			glAttachShader(program, vertexShaderID);
			glAttachShader(program, fragmentShaderID);

			glLinkProgram(program);
			glValidateProgram(program);

			glDeleteShader(vertexShaderID);
			glDeleteShader(fragmentShaderID);

			LOG("Shaders added successfully");

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
			glDeleteProgram(m_ShaderID);
		}

		void RShaderComponent::setUniform1f(const GLchar * name, float value)
		{
			glUniform1f(getUniformLocation(name), value);
		}

		void RShaderComponent::setUniform1i(const GLchar * name, int value)
		{
			glUniform1i(getUniformLocation(name), value);
		}

		void RShaderComponent::setUniform2f(const GLchar * name, const RML::Vector2D & vector)
		{
			glUniform2f(getUniformLocation(name), vector.x, vector.y);
		}

		void RShaderComponent::setUniform3f(const GLchar * name, const RML::Vector3D & vector)
		{
			glUniform3f(getUniformLocation(name), vector.x, vector.y, vector.z);
		}

		void RShaderComponent::setUniform4f(const GLchar * name, const RML::Vector4D & vector)
		{
			glUniform4f(getUniformLocation(name), vector.x, vector.y, vector.z, vector.w);
		}

		void RShaderComponent::setUniformMat4(const GLchar * name, const RML::Matrix4 & matrix)
		{
			glUniformMatrix4fv(getUniformLocation(name), 1, GL_FALSE, matrix.elements);
		}

		void RShaderComponent::enableShader() const
		{
			glUseProgram(m_ShaderID);
		}

		void RShaderComponent::disableShader() const
		{
			glUseProgram(0);
		}
	}
}
