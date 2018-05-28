/**
 * @file	Source\lib_Math\vector4d.h.
 *
 * @brief	Declares the vector 4d struct
 */

#pragma once

#include <iostream>

namespace Rubeus
{
	namespace MathsLibrary
	{
		/**
		 * @struct	Vector4D
		 *
		 * @brief	A vector in 4d.
		 *
		 * @author	Twarit
		 * @date	27-05-2018
		 */
		struct Vector4D
		{
			/** @brief	The x coordinate */
			float x;

			/** @brief	The y coordinate */
			float y;

			/** @brief	The z coordinate */
			float z;

			/** @brief	The w coordinate */
			float w;

			/**
			 * @fn	Vector4D() = default;
			 *
			 * @brief	Default constructor
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 */
			Vector4D() = default;

			/**
			 * @fn	Vector4D(const float &x, const float &y, const float &z, const float &w);
			 *
			 * @brief	Constructor
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	x	The x coordinate.
			 * @param	y	The y coordinate.
			 * @param	z	The z coordinate.
			 * @param	w	The w coordinate.
			 */
			Vector4D(const float &x, const float &y, const float &z, const float &w);

			/**
			 * @fn	float getLength(Vector4D& vector) const;
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
			float getLength(Vector4D& vector) const;

			/**
			 * @fn	Vector4D& add(const Vector4D &other);
			 *
			 * @brief	Adds other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other to add.
			 *
			 * @return	A reference to a Vector4D.
			 */
			Vector4D& add(const Vector4D &other);

			/**
			 * @fn	Vector4D& subtract(const Vector4D &other);
			 *
			 * @brief	Subtracts the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector4D.
			 */
			Vector4D& subtract(const Vector4D &other);

			/**
			 * @fn	Vector4D& multiply(const Vector4D &other);
			 *
			 * @brief	Multiplies the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector4D.
			 */
			Vector4D& multiply(const Vector4D &other);

			/**
			 * @fn	Vector4D& divide(const Vector4D &other);
			 *
			 * @brief	Divides the given other.
			 * 			Returns [a/x , b/y , c/z , d/w] if [a , b , c , d] is divided by [x , y , z , w]
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector4D.
			 */
			Vector4D& divide(const Vector4D &other);

			/**
			 * @fn	std::ostream& operator<<(std::ostream& stream, const Vector4D& vector);
			 *
			 * @brief	Put to operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	stream	Reference to the stream to be put to.
			 * @param	vector	Vector4D to be put to stream object.
			 *			
			 * @return	Reference to the stream been put to.
			 */
			friend std::ostream& operator<<(std::ostream& stream, const Vector4D& vector);

			/**
			 * @fn	Vector4D& operator+(Vector4D left, const Vector4D &right);
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
			friend Vector4D& operator+(Vector4D left, const Vector4D &right);

			/**
			 * @fn	Vector4D& operator-(Vector4D left, const Vector4D &right);
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
			friend Vector4D& operator-(Vector4D left, const Vector4D &right);

			/**
			 * @fn	Vector4D& operator*(Vector4D left, const Vector4D &right);
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
			friend Vector4D& operator*(Vector4D left, const Vector4D &right);

			/**
			 * @fn	Vector4D& operator/(Vector4D left, const Vector4D &right);
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
			friend Vector4D& operator/(Vector4D left, const Vector4D &right);

			/**
			 * @fn	bool operator==(const Vector4D &other);
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
			bool operator==(const Vector4D &other);

			/**
			 * @fn	bool operator!=(const Vector4D &other);
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
			bool operator!=(const Vector4D &other);

			/**
			 * @fn	Vector4D& operator+=(const Vector4D &other);
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
			Vector4D& operator+=(const Vector4D &other);

			/**
			 * @fn	Vector4D& operator-=(const Vector4D &other);
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
			Vector4D& operator-=(const Vector4D &other);

			/**
			 * @fn	Vector4D& operator*=(const Vector4D &other);
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
			Vector4D& operator*=(const Vector4D &other);

			/**
			 * @fn	Vector4D& operator/=(const Vector4D &other);
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
			Vector4D& operator/=(const Vector4D &other);
		};
	}
}
