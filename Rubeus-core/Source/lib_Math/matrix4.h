/**
 * @file	Source\lib_Math\matrix4.h.
 *
 * @brief	Declares the Matrix4 class
 */

#pragma once

#include "vector3d.h"
#include "vector4d.h"
#include "functions.h"

namespace Rubeus
{
	namespace MathsLibrary
	{

		struct Matrix4
		{
			/**
			 * @union	Unnamed
			 *
			 * @brief	An unnamed union. Used to refer to Matrix4 columns as an array of Vector4Ds
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 */
			union
			{
				/** @brief	The elements[4 * 4] */
				float elements[4 * 4];

				/** @brief	The columns[4] in forms of Vector4Ds */
				Vector4D columns[4];
			};

			/**
			 * @fn	Matrix4();
			 *
			 * @brief	Default constructor
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 */
			Matrix4();

			/**
			 * @fn	Matrix4(float diagonal);
			 *
			 * @brief	Constructor. Initialises Matrix4 with a diagonal matrix
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	diagonal	The diagonal.
			 */
			Matrix4(float diagonal);

			/**
			 * @fn	static Matrix4 identity();
			 *
			 * @brief	Gets an identity Matrix4
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @return	A Matrix4.
			 */
			static Matrix4 identity();

			/**
			 * @fn	Matrix4& multiply(const Matrix4& other);
			 *
			 * @brief	Multiplies the given other
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Matrix4.
			 */
			Matrix4& multiply(const Matrix4& other);

			/**
			 * @fn	std::ostream& operator<<(std::ostream& stream, const Matrix4& matrix)
			 *
			 * @brief	Put to operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	stream	The output stream.
			 * @param	matrix	The matrix to be put to stream.
			 *
			 * @return	The result of the operation.
			 */
			friend std::ostream& operator<<(std::ostream& stream, const Matrix4& matrix);

			/**
			 * @fn	friend Matrix4 operator+(Matrix4 left, const Matrix4& right);
			 *
			 * @brief	Addition operator
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	left 	The first value.
			 * @param	right	A value to add to it.
			 *
			 * @return	The result of the operation.
			 */
			friend Matrix4 operator+(Matrix4 left, const Matrix4& right);

			/**
			 * @fn	Matrix4& operator*=(const Matrix4 &other);
			 *
			 * @brief	Multiplication assignment operator
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	The result of the operation.
			 */
			Matrix4& operator*=(const Matrix4 &other);

			/**
			 * @fn	static Matrix4 orthographic(float left, float right, float bottom, float top, float near, float far);
			 *
			 * @brief	Returns an orthographic matrix.
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	left  	The left parameter.
			 * @param	right 	The right parameter.
			 * @param	bottom	The bottom parameter.
			 * @param	top   	The top parameter.
			 * @param	near  	The near parameter.
			 * @param	far   	The far parameter.
			 *
			 * @return	A Matrix4.
			 */
			static Matrix4 orthographic(float left, float right, float bottom, float top, float near, float far);

			/**
			 * @fn	static Matrix4 perspective(float fov, float aspectRatio, float near, float far);
			 *
			 * @brief	Returns a perspective matrix.
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	fov		   	The field of view.
			 * @param	aspectRatio	The aspect ratio.
			 * @param	near	   	The near parameter.
			 * @param	far		   	The far parameter.
			 *
			 * @return	A Matrix4.
			 */
			static Matrix4 perspective(float fov, float aspectRatio, float near, float far);

			/**
			 * @fn	static Matrix4 translation(const Vector3D& translation);
			 *
			 * @brief	Returns a translation matrix, which translates by amounts defined by the translation
			 * 			vector parameter
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	translation	The translation vector.
			 *
			 * @return	A Matrix4.
			 */
			static Matrix4 translation(const Vector3D& translation);

			/**
			 * @fn	static Matrix4 rotation(float angle, const Vector3D& axis);
			 *
			 * @brief	Returns a rotation matrix, which rotates by amount defined by angle parameter about
			 * 			the axis defined by the axis parameter
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	angle	The angle to be rotated by.
			 * @param	axis 	The axis to be rotated about.
			 *
			 * @return	A Matrix4.
			 */
			static Matrix4 rotation(float angle, const Vector3D& axis);

			/**
			 * @fn	static Matrix4 scale(const Vector3D scale);
			 *
			 * @brief	Returns a scaling matrix, that scales by amounts defined by scale parameter.
			 *
			 * @author	Twarit
			 * @date	28-05-2018
			 *
			 * @param	scale	The scale vector.
			 *
			 * @return	A Matrix4.
			 */
			static Matrix4 scale(const Vector3D scale);
		};
	}
}
