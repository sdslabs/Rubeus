#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

namespace RML
{
	/**
		* @fn	inline float degreeToRadians(float degree)
		*
		* @brief	Converts degree to radians
		*
		* @author	Twarit
		* @date	28-05-2018
		*
		* @param	degree	The degree.
		*
		* @return	Radians in float.
		*/
	inline float degreeToRadians(float degree)
	{
		return degree * (M_PI / 180.0f);
	}

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
			* @brief	Divides each element of this vector one by one by the corresponding vector of the
			* 			other vector.
			* 			Returns [a/x , b/y] if [a , b] is divided by [x , y]
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

	/**
	 * @struct	Vector3D
	 *
	 * @brief	A vector 3d.
	 *
	 * @author	Twarit
	 * @date	29-05-2018
	 */
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

	/**
	 * @struct	Matrix4
	 *
	 * @brief	A matrix 4.
	 *
	 * @author	Twarit
	 * @date	29-05-2018
	 */
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
