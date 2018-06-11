/**
 * @file	Source\c_Logger\logger.h.
 *
 * @brief	Declares the logger macro
 */

#pragma once

#include <iostream>
#include <string.h>

#ifdef WIN32
#endif

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
		#define ASSERT(x) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);\
							LOG((x));\
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)

	#else

		// DO NOT USE
		#define ERROR(x) LOGEXTENDED("REMOVE ERROR STATEMENT")

		// DO NOT USE
		#define ASSERT(x) LOGEXTENDED("REMOVE ASSERTION STATEMENT")

	#endif


#else

	// Deprecated for non-debug builds
	#define LOG(x)

	// Deprecated for non-debug builds
	#define LOGEXTENDED(x)

	//  Deprecated for non-debug builds
	#define ERROR(x)

	// Deprecated for non-debug builds
	#define ASSERT(x)

#endif
