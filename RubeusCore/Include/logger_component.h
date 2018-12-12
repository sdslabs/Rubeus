/**
 * @file		Source\logger_component.h.
 *
 * @brief	Declares the logger macro
 */

#pragma once

#include <iostream>
#include <string.h>
#include <string>

#include <GL/glew.h>
#include <IL/il.h>
#include <IL/ilu.h>

 // TODO: Remove logger before shipping

#ifndef LOGS

#define LOGS

#define USERLOG(x) std::cout << (x) << std::endl

#ifdef _DEBUG

// Prints to the console anything that is passed in
#define LOG(x) std::cout << "Rubeus: " << (x) << std::endl

// Prints to console with file name and line number
// Use LOG() for shorter version
#define LOGEXTENDED(x) std::cout << "RubeusLog:" << __FILE__ << ":" << __LINE__ << ":" << (x) << "\n"

#ifdef WIN32

#include <Windows.h>
// Prints to console an error message that is passed in, in red
#define ERRORLOG(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);\
                    LOGEXTENDED((x));\
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)

// Prints to console an assertion that is passed in, in yellow
#define ASSERT(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);\
									LOG((x));\
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)

// Prints success message passed in, in green
#define SUCCESS(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);\
                   LOG((x));\
                   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)

// Pass in OpenGL calls for debugging errors while executing OpenGL code
#define GLCall(x) GLClearError();																									\
                  x;																												\
                  while(GLenum error = glGetError())																				\
                  {																													\
                      int z = toHex(error);																							\
                      ERRORLOG("OpenGL Error: 0x" + ((z < 0x1000)? "0" + std::to_string(z) : std::to_string(z)));					\
                      std::cin.get();																								\
                  }

// Pass in DevIL calls for checking for errors in image management
#define DevILCall(x) DevILClearError();																								\
                     x;																												\
                     while(ILenum error = ilGetError())																				\
                     {																												\
                         ERRORLOG(std::string("DevIL Error: ") + iluErrorString(error));											\
                         if(error == ILU_OUT_OF_MEMORY)																				\
                         {																											\
							 std::cin.get();																						\
						 }																											\
                     }
#else
	// In case non Windows system is the build target

	// DO NOT USE
#define ERRORLOG(x) LOGEXTENDED((x))

// DO NOT USE
#define ASSERT(x) LOGEXTENDED((x))

// DO NOT USE
#define SUCCESS(x) LOGEXTENDED((x))

#endif

#else
// In case the build configuration is not "Debug"

// Deprecated for non-debug builds
#define LOG(x) std::cout << x <<std::endl;

// Deprecated for non-debug builds
#define LOGEXTENDED(x)

// Deprecated for non-debug builds
#define ERRORLOG(x)

// Deprecated for non-debug builds
#define ASSERT(x)

// Deprecated for non-debug builds
#define SUCCESS(x)

// No error reporting in non-debug builds
#define GLCall(x) x

// No error reporting in non-debug builds
#define DevILCall(x) x
#endif
#endif

/**
 * @fn		static int toHex(int decimal);
 *
 * @brief	Converts a decimal to a hexadecimal
 *
 * @param	decimal	The decimal.
 *
 * @return	Decimal as an int.
 */
int toHex(int decimal);

/**
 * @fn		static void GLClearError();
 *
 * @brief	Clear all OpenGL error flags
 */
void GLClearError();

/**
 * @fn		void DevILClearError()
 *
 * @brief	Clears the DevIL error stack
 */
void DevILClearError();
