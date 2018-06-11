/**
 * @file	Source\c_Logger\logger.h.
 *
 * @brief	Declares the logger macro
 */

#pragma once

#include <iostream>
#include <string.h>
#include <string>
#include <GL\glew.h>

// TODO: Remove logger before shipping

#ifdef _DEBUG

	// Prints to the console anything that is passed in
	#define LOG(x) std::cout << (x) << std::endl

	// Prints to console with file name and line number
	// Use LOG() for shorter version
	#define LOGEXTENDED(x) std::cout << "RubeusLogger: " << (x) << " <" << __FILE__ << ":" << __LINE__ << ">" << "\n"

	#ifdef WIN32
			#include <Windows.h>

			// Prints to console an error message that is passed in, in red
			#define ERROR(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);\
								LOGEXTENDED((x));\
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)

			// Prints to console an assertion that is passed in, in yellow
			#define ASSERT(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);\
								LOG((x));\
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)
			// Pass in OpenGL calls for debugging errors while executing OpenGL code
			#define GLCall(x) GLClearError();\
								x;\
								while(GLenum error = glGetError())\
								{\
								int z = toHex(error);\
								ERROR("OpenGL Error: 0x" + ((z < 1000)? "0" + std::to_string(z) : std::to_string(z)));\
								std::cin.get();\
								}

	#else
		// In case non Windows system is the build target

		// DO NOT USE
		#define ERROR(x) LOGEXTENDED("REMOVE ERROR STATEMENT")

		// DO NOT USE
		#define ASSERT(x) LOGEXTENDED("REMOVE ASSERTION STATEMENT")


	#endif


#else
	// In case the build configuration is not "Debug"

	// Deprecated for non-debug builds
	#define LOG(x)

	// Deprecated for non-debug builds
	#define LOGEXTENDED(x)

	//  Deprecated for non-debug builds
	#define ERROR(x)

	// Deprecated for non-debug builds
	#define ASSERT(x)

	// No error reporting in non-debug builds
	#define GLCall(x) (x)
#endif


/**
 * @fn	static int toHex(int decimal);
 *
 * @brief	Converts a decimal to a hexadecimal
 *
 * @author	Twarit
 * @date	12-06-2018
 *
 * @param	decimal	The decimal.
 *
 * @return	Decimal as an int.
 */
int toHex(int decimal);

/**
 * @fn	static void GLClearError();
 *
 * @brief	Clear all OpenGL error flags
 *
 * @author	Twarit
 * @date	12-06-2018
 */
void GLClearError();
