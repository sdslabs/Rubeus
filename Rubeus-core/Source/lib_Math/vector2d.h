/**
 * @file	Source\lib_Math\vector2d.h.
 *
 * @brief	Declares the vector 2D struct
 */

#pragma once

#include<iostream>

namespace Rubeus
{
	namespace MathsLibrary
	{
		/**
		 * @struct	Vector2D
		 *
		 * @brief	A vector in 2D.
		 *
		 * @author	Twarit
		 * @date	27-05-2018
		 */
		struct Vector2D
		{
			/** @brief	The x coordinate */
			float x;

			/** @brief	The y coordinate */
			float y;

			/**
			 * @fn	Vector2D();
			 *
			 * @brief	Default constructor
			 * 			Initialises a Vector2D with (0,0)
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 */
			Vector2D();

			/**
			 * @fn	Vector2D(const float &x, const float &y);
			 *
			 * @brief	Constructor
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	x	The x coordinate.
			 * @param	y	The y coordinate.
			 */
			Vector2D(const float &x, const float &y);

			/**
			 * @fn	float getLength(Vector2D& vector) const;
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
			float getLength(Vector2D& vector) const;

			/**
			 * @fn	Vector2D& add(const Vector2D &other);
			 *
			 * @brief	Adds other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other to add.
			 *
			 * @return	A reference to a Vector2D.
			 */
			Vector2D& add(const Vector2D &other);

			/**
			 * @fn	Vector2D& subtract(const Vector2D &other);
			 *
			 * @brief	Subtracts the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector2D.
			 */
			Vector2D& subtract(const Vector2D &other);

			/**
			 * @fn	Vector2D& multiply(const Vector2D &other);
			 *
			 * @brief	Multiplies the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector2D.
			 */
			Vector2D& multiply(const Vector2D &other);

			/**
			 * @fn	Vector2D& divide(const Vector2D &other);
			 *
			 * @brief	Divides the given other
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	other	The other.
			 *
			 * @return	A reference to a Vector2D.
			 */
			Vector2D& divide(const Vector2D &other);

			/**
			 * @fn	std::ostream& operator<<(std::ostream& stream, const Vector2D& vector)
			 *
			 * @brief	Put to operator
			 *
			 * @author	Twarit
			 * @date	27-05-2018
			 *
			 * @param	stream	The output stream.
			 * @param	vector	The vector to be put to stream.
			 *
			 * @return	The result of the operation.
			 */
			friend std::ostream& operator<<(std::ostream& stream, const Vector2D& vector);

			/**
			 * @fn	Vector2D& operator+(Vector2D left, const Vector2D &right);
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
			friend Vector2D& operator+(Vector2D left, const Vector2D &right);

			/**
			 * @fn	Vector2D& operator-(Vector2D left, const Vector2D &right);
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
			friend Vector2D& operator-(Vector2D left, const Vector2D &right);

			/**
			 * @fn	Vector2D& operator*(Vector2D left, const Vector2D &right);
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
			friend Vector2D& operator*(Vector2D left, const Vector2D &right);

			/**
			 * @fn	Vector2D& operator/(Vector2D left, const Vector2D &right);
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
			friend Vector2D& operator/(Vector2D left, const Vector2D &right);

			/**
			 * @fn	bool operator==(const Vector2D &other);
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
			bool operator==(const Vector2D &other);

			/**
			 * @fn	bool operator!=(const Vector2D &other);
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
			bool operator!=(const Vector2D &other);

			/**
			 * @fn	Vector2D& operator+=(const Vector2D &other);
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
			Vector2D& operator+=(const Vector2D &other);

			/**
			 * @fn	Vector2D& operator-=(const Vector2D &other);
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
			Vector2D& operator-=(const Vector2D &other);

			/**
			 * @fn	Vector2D& operator*=(const Vector2D &other);
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
			Vector2D& operator*=(const Vector2D &other);

			/**
			 * @fn	Vector2D& operator/=(const Vector2D &other);
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
			Vector2D& operator/=(const Vector2D &other);
		};
	}
}
