/**
 * @file	Source\lib_Math\vector3d.cpp.
 *
 * @brief	Implements the vector 3D struct
 */

#pragma once

#include "vector3d.h"

namespace Rubeus
{
	namespace MathsLibrary
	{
		Vector3D::Vector3D()
		{
			x = 0.0f;
			y = 0.0f;
			z = 0.0f;
		}

		Vector3D::Vector3D(const float &x, const float &y, const float &z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

		Vector3D & Vector3D::add(const Vector3D & other)
		{
			x += other.x;
			y += other.y;
			z += other.z;

			return *this;
		}

		Vector3D & Vector3D::subtract(const Vector3D & other)
		{
			x -= other.x;
			y -= other.y;
			z -= other.z;

			return *this;
		}

		Vector3D & Vector3D::multiply(const Vector3D & other)
		{
			x *= other.x;
			y *= other.y;
			z *= other.z;

			return *this;
		}

		Vector3D & Vector3D::divide(const Vector3D & other)
		{
			x /= other.x;
			y /= other.y;
			z /= other.z;

			return *this;
		}

		bool Vector3D::operator==(const Vector3D & other)
		{
			return ((x == other.x) && (y == other.y) && (z == other.z));
		}

		bool Vector3D::operator!=(const Vector3D & other)
		{
			return !(*this == other);
		}

		Vector3D & Vector3D::operator+=(const Vector3D & other)
		{
			return add(other);
		}

		Vector3D & Vector3D::operator-=(const Vector3D & other)
		{
			return subtract(other);
		}

		Vector3D & Vector3D::operator*=(const Vector3D & other)
		{
			return multiply(other);
		}

		Vector3D & Vector3D::operator/=(const Vector3D & other)
		{
			return divide(other);
		}

		std::ostream& operator<<(std::ostream& stream, const Vector3D& vector)
		{
			stream << "Vector3D: (" << vector.x << ", " << vector.y << ", "<< vector.z << ")";
			return stream;
		}

		Vector3D & operator+(Vector3D left, const Vector3D &right)
		{
			return left.add(right);
		}

		Vector3D & operator-(Vector3D left, const Vector3D &right)
		{
			return left.subtract(right);
		}

		Vector3D & operator*(Vector3D left, const Vector3D &right)
		{
			return left.multiply(right);
		}

		Vector3D & operator/(Vector3D left, const Vector3D &right)
		{
			return left.divide(right);
		}

	}
}