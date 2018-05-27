/**
 * @file	Source\lib_Math\vector4d.cpp.
 *
 * @brief	Implements the vector 4d struct
 */

#pragma once

#include "vector4d.h"

namespace Rubeus
{
	namespace MathsLibrary
	{
		Vector4D::Vector4D(const float &x, const float & y, const float & z, const float & w)
		{
			this->x = x;
			this->y = y;
			this->z = z;
			this->w = w;
		}

		Vector4D & Vector4D::add(const Vector4D & other)
		{
			x += other.x;
			y += other.y;
			z += other.z;
			w += other.w;

			return *this;
		}

		Vector4D & Vector4D::subtract(const Vector4D & other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;
			w -= other.w;

			return *this;
		}

		Vector4D & Vector4D::multiply(const Vector4D & other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;
			w *= other.w;

			return *this;
		}

		Vector4D & Vector4D::divide(const Vector4D & other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;
			w /= other.w;

			return *this;
		}

		bool Vector4D::operator==(const Vector4D & other)
		{
			return ((x == other.x) && (y == other.y) && (z == other.z) && (w == other.w));
		}

		bool Vector4D::operator!=(const Vector4D & other)
		{
			return !(*this == other);
		}

		Vector4D & Vector4D::operator+=(const Vector4D & other)
		{
			return add(other);
		}

		Vector4D & Vector4D::operator-=(const Vector4D & other)
		{
			return subtract(other);
		}

		Vector4D & Vector4D::operator*=(const Vector4D & other)
		{
			return multiply(other);
		}

		Vector4D & Vector4D::operator/=(const Vector4D & other)
		{
			return divide(other);
		}

		std::ostream& operator<<(std::ostream& stream, const Vector4D& vector)
		{
			stream << "Vector4D: (" << vector.x << ", " << vector.y << ", " << vector.z << ", " << vector.w << ")";
			return stream;
		}

		Vector4D & operator+(Vector4D left, const Vector4D &right)
		{
			return left.add(right);
		}

		Vector4D & operator-(Vector4D left, const Vector4D &right)
		{
			return left.subtract(right);
		}

		Vector4D & operator*(Vector4D left, const Vector4D &right)
		{
			return left.multiply(right);
		}

		Vector4D & operator/(Vector4D left, const Vector4D &right)
		{
			return left.divide(right);
		}

	}
}