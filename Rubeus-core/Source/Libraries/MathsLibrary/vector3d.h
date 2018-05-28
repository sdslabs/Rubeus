/**
 * @file	Source\lib_Math\vector3d.h.
 *
 * @brief	Declares the vector 3D struct
 */

#pragma once

#include <iostream>

namespace Rubeus
{
	namespace MathsLibrary
	{
		struct Vector3D
		{
			/** @brief	The x coordinate */
			float x;

			/** @brief	The y coordinate */
			float y;

			/** @brief	The z coordinate */
			float z;

			/**
			 * @fn	Vector3D();
			 *
			 * @brief	Default constructor
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 */
			Vector3D();

			/**
			 * @fn	Vector3D(const float &x, const float &y, const float &z);
			 *
			 * @brief	Constructor
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	x	The x coordinate.
			 * @param	y	The y coordinate.
			 * @param	z	The z coordinate.
			 */
			Vector3D(const float &x, const float &y, const float &z);

			/**
			 * @fn	float getLength(Vector3D& vector) const;
			 *
			 * @brief	Gets length of vector
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param [in,out]	vector	The vector.
			 *
			 * @return	The length.
			 */
			float getLength(Vector3D& vector) const;

			/**
			 * @fn	Vector3D& add(const Vector3D &other);
			 *
			 * @brief	Adds other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other to add.
			 *
			 * @return	A reference to a Vector3D.
			 */
			Vector3D& add(const Vector3D &other);

			/**
			 * @fn	Vector3D& subtract(const Vector3D &other);
			 *
			 * @brief	Subtracts the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector3D.
			 */
			Vector3D& subtract(const Vector3D &other);

			/**
			 * @fn	Vector3D& multiply(const Vector3D &other);
			 *
			 * @brief	Multiplies the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector3D.
			 */
			Vector3D& multiply(const Vector3D &other);

			/**
			 * @fn	Vector3D& divide(const Vector3D &other);
			 *
			 * @brief	Divides the given other.
			 * 			Returns [a/x , b/y , c/z] if [a , b , c] is divided by [x , y , z]
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector3D.
			 */
			Vector3D& divide(const Vector3D &other);

			/**
			 * @fn	std::ostream& operator<<(std::ostream& stream, const Vector3D& vector);
			 *
			 * @brief	Put to operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	stream	Reference to the stream to be put to.
			 * @param	vector	Vector3D to be put to stream object.
			 *			
			 * @return	Reference to the stream been put to.
			 */
			friend std::ostream& operator<<(std::ostream& stream, const Vector3D& vector);
			
			/**
			 * @fn	Vector3D& operator+(Vector3D left, const Vector3D &right);
			 *
			 * @brief	Addition operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	left	The left operand.
			 * @param	right	The right operand.
			 *
			 * @return	The result of the operation.
			 */
			friend Vector3D& operator+(Vector3D left, const Vector3D &right);
			
			/**
			 * @fn	Vector3D& operator-(Vector3D left, const Vector3D &right);
			 *
			 * @brief	Subtraction operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	left	The left operand.
			 * @param	right	The right operand.
			 *
			 * @return	The result of the operation.
			 */
			friend Vector3D& operator-(Vector3D left, const Vector3D &right);
			
			/**
			 * @fn	Vector3D& operator*(Vector3D left, const Vector3D &right);
			 *
			 * @brief	Multiplication operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	left	The left operand.
			 * @param	right	The right operand.
			 *
			 * @return	The result of the operation.
			 */
			friend Vector3D& operator*(Vector3D left, const Vector3D &right);
			
			/**
			 * @fn	Vector3D& operator/(Vector3D left, const Vector3D &right);
			 *
			 * @brief	Division operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	left	The left operand.
			 * @param	right	The right operand.
			 *
			 * @return	The result of the operation.
			 */
			friend Vector3D& operator/(Vector3D left, const Vector3D &right);

			/**
			 * @fn	bool operator==(const Vector3D &other);
			 *
			 * @brief	Equality operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	True if the parameters are considered equivalent.
			 */
			bool operator==(const Vector3D &other);

			/**
			 * @fn	bool operator!=(const Vector3D &other);
			 *
			 * @brief	Inequality operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	True if the parameters are not considered equivalent.
			 */
			bool operator!=(const Vector3D &other);

			/**
			 * @fn	Vector3D& operator+=(const Vector3D &other);
			 *
			 * @brief	Addition assignment operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	The result of the operation.
			 */
			Vector3D& operator+=(const Vector3D &other);

			/**
			 * @fn	Vector3D& operator-=(const Vector3D &other);
			 *
			 * @brief	Subtraction assignment operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	The result of the operation.
			 */
			Vector3D& operator-=(const Vector3D &other);

			/**
			 * @fn	Vector3D& operator*=(const Vector3D &other);
			 *
			 * @brief	Multiplication assignment operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	The result of the operation.
			 */
			Vector3D& operator*=(const Vector3D &other);

			/**
			 * @fn	Vector3D& operator/=(const Vector3D &other);
			 *
			 * @brief	Division assignment operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	The result of the operation.
			 */
			Vector3D& operator/=(const Vector3D &other);
		};
	}
}
