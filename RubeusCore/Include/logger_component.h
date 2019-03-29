/**
 * @file		Source/logger_component.h.
 *
 * @brief	Declares the logger macro
 */

#pragma once

#include <iostream>
#include <string.h>
#include <string>
#include <map>
#include <GL/glew.h>
#include <IL/il.h>
#include <IL/ilu.h>

 // TODO: Remove logger before shipping

#ifndef LOGS

#define LOGS

#define USERLOG(x) std::cout << (x) << std::endl


namespace Rubeus {
	namespace UtilityComponents {
		class RLogger {
			std::map<std::string, short> foregroundColorMap;
			std::map<std::string, short> backgroundColorMap;
			std::map<std::string, std::string> severityMap;
		public:
			void printLog(std::string logMessage);
			void printExtendedLog(std::string logMessage, std::string file, std::string line);
			void printExtendedLog(std::string logMessage, std::string severity, std::string file, std::string line);
		};
	}
}


#ifdef _DEBUG

// Prints to the console anything that is passed in
#define LOG(x) std::cout << "Rubeus: " << (x) << std::endl

// Prints to console with file name and line number
// Use LOG() for shorter version
//#define LOGEXTENDED(x) std::cout << "RubeusLog:" << __FILE__ << ":" << __LINE__ << ":" << (x) << "\n"
#define LOGEXTENDED(x) Rubeus::RGame::getEngine()->getLogger()->printExtendedLog((x), __FILE__, __LINE__)


/*#ifdef WIN32

#include <Windows.h>
#undef APIENTRY
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

#else */
	// In case non Windows system is the build target

	// DO NOT USE
#define ERRORLOG(x) Rubeus::RGame::getEngine()->getLogger()->printExtendedLog((x), "ERROR", __FILE__, __LINE__)

// DO NOT USE
#define ASSERT(x) Rubeus::RGame::getEngine()->getLogger()->printExtendedLog((x), "ASSERT", __FILE__, __LINE__)

// DO NOT USE
#define SUCCESS(x) Rubeus::RGame::getEngine()->getLogger()->printExtendedLog((x), "SUCCESS", __FILE__, __LINE__)

#endif

#else
// In case the build configuration is not "Debug"

// Deprecated for non-debug builds
#define LOG(x) std::cout << x << std::endl;

// Deprecated for non-debug builds
#define LOGEXTENDED(x) LOG(x)

// Deprecated for non-debug builds
#define ERRORLOG(x) LOG(x)

// Deprecated for non-debug builds
#define ASSERT(x) LOG(x)

// Deprecated for non-debug builds
#define SUCCESS(x) LOG(x)
#endif

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
