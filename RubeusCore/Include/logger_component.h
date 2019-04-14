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
#include <fstream>
#include <ctime>
#include <experimental/filesystem>

#include <GL/glew.h>
#include <IL/il.h>
#include <IL/ilu.h>

#include <game.h>

 // TODO: Remove logger before shipping

#ifndef LOGS

#define LOGS

#define USERLOG(x) std::cout << (x) << std::endl


namespace Rubeus
{
	namespace UtilityComponents
	{
		class RLogger
		{
		private:
			static std::ofstream* LogFile;
			static std::map<std::string, short> foregroundColorMap;
			static std::map<std::string, short> BackgroundColorMap;
			static std::map<std::string, std::string> SeverityMap;

		public:
			RLogger() = delete;

			static void Init();
			static void PrintLog(std::string logMessage);
			static void PrintExtendedLog(std::string logMessage, std::string file, int line);
			static void PrintExtendedLog(std::string logMessage, std::string severity, std::string file, int line);
			static void CreateLogFile();
			static void CloseLogFile();
		};
	}
}

#ifdef _DEBUG

// Prints to the console anything that is passed in
#define LOG(x) ::Rubeus::UtilityComponents::RLogger::PrintLog((x))

// Prints to console with file name and line number
// Use LOG() for shorter version
#define LOGEXTENDED(x) ::Rubeus::UtilityComponents::RLogger::PrintExtendedLog((x), __FILE__, __LINE__)

// Prints to console an error message that is passed in, in red
#define ERRORLOG(x) ::Rubeus::UtilityComponents::RLogger::PrintExtendedLog(std::string((x)), "ERROR", __FILE__, __LINE__)

// Prints to console an assertion that is passed in, in yellow
#define ASSERT(x) ::Rubeus::UtilityComponents::RLogger::PrintExtendedLog(std::string((x)), "ASSERT", __FILE__, __LINE__)

// Prints success message passed in, in green
#define SUCCESS(x) ::Rubeus::UtilityComponents::RLogger::PrintExtendedLog(std::string((x)), "SUCCESS", __FILE__, __LINE__)



#else
// In case the build configuration is not "Debug"

// Deprecated for non-debug builds
#define LOG(x) ::Rubeus::UtilityComponents::RLogger::PrintLog((x))

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
