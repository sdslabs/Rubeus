/**
 * @file		Source\rubeus_maths_library.cpp.
 *
 * @brief	Implements the RML (Rubeus Maths Library)
 */

#include <cstring>

#include <rubeus_maths_library.h>

namespace RML
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

	Vector2D & Vector2D::roundTo(const float & pivotX, const float & errorX, const float & pivotY, const float & errorY)
	{
		this->x = abs(x - pivotX) <= errorX ? pivotX : x;
		this->y = abs(y - pivotY) <= errorY ? pivotY : y;

		return *this;
	}

	float Vector2D::getLength(Vector2D & vector) const
	{
		return sqrt((vector.x * vector.x) + (vector.y * vector.y));
	}

	float Vector2D::getLength() const
	{
		return x * x + y * y;
	}

	Vector2D Vector2D::toUnitVector()
	{
		return this->multiplyFloat(1.0f / this->getLength());
	}

	Vector2D & Vector2D::add(const Vector2D & other)
	{
		x += other.x;
		y += other.y;

		return *this;
	}

	Vector2D Vector2D::subtract(const Vector2D & other)
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

	float Vector2D::multiplyDot(const Vector2D & other)
	{
		return x * other.x + y * other.y;
	}

	Vector2D & Vector2D::multiplyFloat(const float & other)
	{
		x *= other;
		y *= other;

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

	Vector2D Vector2D::operator-=(const Vector2D & other)
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

	Vector2D operator-(Vector2D left, const Vector2D &right)
	{
		return left.subtract(right);
	}

	Vector2D & operator*(Vector2D left, const Vector2D &right)
	{
		return left.multiply(right);
	}

	Vector2D & operator*(Vector2D left, const float & right)
	{
		return left.multiplyFloat(right);
	}

	float operator*(Vector2D & left, const Vector2D & right)
	{
		return left.multiplyDot(right);
	}

	Vector2D & operator/(Vector2D left, const Vector2D &right)
	{
		return left.divide(right);
	}

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

	float Vector3D::getLength(Vector3D & vector) const
	{
		return sqrt((vector.x * vector.x) + (vector.y * vector.y) + (vector.z * vector.z));
	}

	float Vector3D::getLength() const
	{
		return sqrt((x * x) + (y * y) + (z * z));
	}

	Vector2D Vector3D::getVector2D()
	{
		return Vector2D(x, y);
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

	float Vector3D::multiplyDot(const Vector3D & other)
	{
		x = this->x * other.x;
		y = this->y * other.y;
		z = this->z * other.z;

		return x + y + z;
	}

	Vector3D & Vector3D::multiplyCross(const Vector3D & other)
	{
		x = y * other.z - other.y * z;
		y = other.x * z - x * other.z;
		z = x * other.y - other.x * y;

		return *this;
	}

	Vector3D & Vector3D::multiplyFloat(const float & other)
	{
		x *= other;
		y *= other;
		z *= other;

		return *this;
	}

	Vector3D & Vector3D::divide(const Vector3D & other)
	{
		x /= other.x;
		y /= other.y;
		z /= other.z;

		return *this;
	}

	Vector3D Vector3D::maxVector(const Vector3D & other)
	{
		return Vector3D(
			other.x > this->x ? other.x : this->x,
			other.y > this->y ? other.y : this->y,
			other.z > this->z ? other.z : this->z
		);
	}

	float Vector3D::maxComponent()
	{
		if (x > y)
			if (x > z)
				return x;
			else
				return z;
		else
			if (y > z)
				return y;
			else
				return z;
	}

	float Vector3D::maxXYComponent()
	{
		if (x > y)
			return x;
		else
			return y;
	}

	Vector3D & Vector3D::toUnitVector()
	{
		float temp = getLength(*this);
		this->x /= temp;
		this->y /= temp;
		this->z /= temp;

		return *this;
	}

	Vector3D & Vector3D::abs()
	{
		this->x = std::abs(x);
		this->y = std::abs(y);
		this->z = std::abs(z);

		return *this;
	}

	bool Vector3D::operator==(const Vector3D & other)
	{
		return ((x == other.x) && (y == other.y) && (z == other.z));
	}

	bool Vector3D::operator==(const int other)
	{
		return (x == other) && (y == other) && (z == other);
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
		stream << "Vector3D: (" << vector.x << ", " << vector.y << ", " << vector.z << ")";
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

	Vector3D & operator*(Vector3D vector, const float & other)
	{
		return vector.multiplyFloat(other);
	}

	Vector3D & operator/(Vector3D vector, const float & other)
	{
		return vector.multiplyFloat(1.0f / other);
	}

	Vector3D & operator/(Vector3D left, const Vector3D &right)
	{
		return left.divide(right);
	}

	Vector4D::Vector4D(const float &x, const float & y, const float & z, const float & w)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}

	float Vector4D::getLength(Vector4D & vector) const
	{
		return sqrt((vector.x * vector.x) + (vector.y * vector.y) + (vector.z * vector.z) + (vector.w * vector.w));
	}

	Vector4D & Vector4D::toUnitVector()
	{
		float temp = getLength(*this);
		this->x /= temp;
		this->y /= temp;
		this->z /= temp;
		this->w /= temp;

		return *this;
	}

	Vector4D Vector4D::normaliseToRGBA()
	{
		*this = *this / Vector4D(255.0f, 255.0f, 255.0f, 255.0f);
		return *this;
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
		x /= (float)other.x;
		y /= (float)other.y;
		z /= (float)other.z;
		w /= (float)other.w;

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

	Matrix4::Matrix4()
	{
		memset((char*)elements, 0.0f, sizeof(elements));
	}

	Matrix4::Matrix4(float diagonal)
	{
		for (int i = 0; i < 16; i++)
		{
			if ((i % 5) == 0)
			{
				elements[i] = diagonal;
				continue;
			}

			elements[i] = 0.0f;
		}
	}

	Matrix4 Matrix4::identity()
	{
		return Matrix4(1.0f);
	}

	Vector3D Matrix4::multiply(const Vector3D & vector)
	{
		return Vector3D(
			(columns[0].x * vector.x) +
			(columns[1].x * vector.y) +
			(columns[2].x * vector.z) +
			(columns[3].x * 1),

			(columns[0].y * vector.x) +
			(columns[1].y * vector.y) +
			(columns[2].y * vector.z) +
			(columns[3].y * 1),

			(columns[0].z * vector.x) +
			(columns[1].z * vector.y) +
			(columns[2].z * vector.z) +
			(columns[3].z * 1)
		);
	}

	Matrix4 & Matrix4::multiply(const Matrix4 & other)
	{
		float result[16];

		for (int y = 0; y < 4; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				float sum = 0.0f;
				for (int e = 0; e < 4; e++)
				{
					sum += elements[x + e * 4] * other.elements[e + y * 4];
				}
				result[x + y * 4] = sum;
			}
		}

		memcpy(elements, result, 16 * 4);

		return *this;
	}

	Matrix4 & Matrix4::operator*=(const Matrix4 & other)
	{
		return multiply(other);
	}

	std::ostream& operator<<(std::ostream & stream, const Matrix4 & matrix)
	{
		stream << "C3: " << matrix.columns[3] << std::endl;
		stream << "C2: " << matrix.columns[2] << std::endl;
		stream << "C1: " << matrix.columns[1] << std::endl;
		stream << "C0: " << matrix.columns[0] << std::endl;

		return stream;
	}

	Matrix4 operator*(Matrix4 left, const Matrix4 & right)
	{
		return left.multiply(right);
	}

	Vector3D operator*(Matrix4 & matrix, const Vector3D & vector)
	{
		return matrix.multiply(vector);
	}

	Matrix4 Matrix4::orthographic(float left, float right, float bottom, float top, float near, float far)
	{
		Matrix4 result(1.0f);

		result.elements[0 + 0 * 4] = 2.0f / (right - left);

		result.elements[1 + 1 * 4] = 2.0f / (top - bottom);

		result.elements[2 + 2 * 4] = 2.0f / (near - far);

		result.elements[0 + 3 * 4] = (left + right) / (left - right);
		result.elements[1 + 3 * 4] = (bottom + top) / (bottom - top);
		result.elements[2 + 3 * 4] = (far + near) / (far - near);

		return result;
	}

	Matrix4 Matrix4::perspective(float fov, float aspectRatio, float near, float far)
	{
		Matrix4 result(1.0f);

		float q = 1.0f / tan(degreeToRadians(0.5f * fov));

		float a = q / aspectRatio;

		float b = (near + far) / (near - far);

		float c = (2.0f * near * far) / (near - far);

		result.elements[0 + 0 * 4] = a;
		result.elements[1 + 1 * 4] = q;
		result.elements[2 + 2 * 4] = b;
		result.elements[3 + 2 * 4] = -1.0f;
		result.elements[2 + 3 * 4] = c;

		return result;
	}

	Matrix4 Matrix4::translation(const Vector3D & translation)
	{
		Matrix4 result(1.0f);

		result.elements[0 + 3 * 4] = translation.x;
		result.elements[1 + 3 * 4] = translation.y;
		result.elements[2 + 3 * 4] = translation.z;

		return result;
	}

	Matrix4 Matrix4::rotation(float angle, const Vector3D & axis)
	{
		Matrix4 result(1.0f);

		float r = degreeToRadians(angle);
		float c = cos(r);
		float s = sin(r);
		float omc = 1.0f - c;

		float x = axis.x;
		float y = axis.y;
		float z = axis.z;

		result.elements[0 + 0 * 4] = x * omc + c;
		result.elements[1 + 0 * 4] = y * x * omc + z * s;
		result.elements[2 + 0 * 4] = x * z * omc - y * s;

		result.elements[0 + 1 * 4] = x * y * omc - z * s;
		result.elements[1 + 1 * 4] = y * omc + c;
		result.elements[2 + 1 * 4] = y * z * omc + x * s;

		result.elements[0 + 2 * 4] = x * z * omc + y * s;
		result.elements[1 + 2 * 4] = y * z * omc - x * s;
		result.elements[2 + 2 * 4] = z * omc + c;

		return result;
	}

	Matrix4 Matrix4::scale(const Vector3D scale)
	{
		Matrix4 result(1.0f);

		result.elements[0 + 0 * 4] = scale.x;
		result.elements[1 + 1 * 4] = scale.y;
		result.elements[2 + 2 * 4] = scale.z;

		return result;
	}
}
