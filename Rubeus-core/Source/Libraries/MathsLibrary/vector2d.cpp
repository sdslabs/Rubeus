/**
 * @file	Source\lib_Math\vector2d.cpp.
 *
 * @brief	Implements the vector 2D struct
 */

#pragma once

#include "vector2d.h"

namespace Rubeus
{
	namespace MathsLibrary
	{
		Vector2D::Vector2D()
		{
			x = 0.0f;
			y = 0.0f;
		}

		Vector2D::Vector2D(const float &x, const float & y)
		{
			this->x = x;
			this->y = y;
		}

		float Vector2D::getLength(Vector2D & vector) const
		{
			return sqrt((vector.x * vector.x) + (vector.y * vector.y));
		}

		Vector2D & Vector2D::add(const Vector2D & other)
		{
			x += other.x;
			y += other.y;

			return *this;
		}

		Vector2D & Vector2D::subtract(const Vector2D & other)
		{
			x -= other.x;
			y -= other.y;

			return *this;
		}

		Vector2D & Vector2D::multiply(const Vector2D & other)
		{
			x *= other.x;
			y *= other.y;

			return *this;
		}

		Vector2D & Vector2D::divide(const Vector2D & other)
		{
			x /= other.x;
			y /= other.y;

			return *this;
		}

		bool Vector2D::operator==(const Vector2D & other)
		{
			return ((x == other.x) && (y == other.y));
		}

		bool Vector2D::operator!=(const Vector2D & other)
		{
			return !(*this == other);
		}

		Vector2D & Vector2D::operator+=(const Vector2D & other)
		{
			return add(other);
		}

		Vector2D & Vector2D::operator-=(const Vector2D & other)
		{
			return subtract(other);
		}

		Vector2D & Vector2D::operator*=(const Vector2D & other)
		{
			return multiply(other);
		}

		Vector2D & Vector2D::operator/=(const Vector2D & other)
		{
			return divide(other);
		}

		std::ostream& operator<<(std::ostream& stream, const Vector2D& vector)
		{
			stream << "Vector2D: (" << vector.x << ", " << vector.y << ")";
			return stream;
		}

		Vector2D & operator+(Vector2D left, const Vector2D &right)
		{
			return left.add(right);
		}

		Vector2D & operator-(Vector2D left, const Vector2D &right)
		{
			return left.subtract(right);
		}

		Vector2D & operator*(Vector2D left, const Vector2D &right)
		{
			return left.multiply(right);
		}

		Vector2D & operator/(Vector2D left, const Vector2D &right)
		{
			return left.divide(right);
		}
	}
}
