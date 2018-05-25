/**
 * @file	Source\c_Logger\logger.h.
 *
 * @brief	Declares the logger class
 */

#pragma once

#include <iostream>
#include <string.h>

// TODO: Remove logger before shipping
#define DEBUGBUILD 1

#if DEBUGBUILD

	// Prints to the console anything that is passed in
	#define LOG(x) std::cout << "RubeusLogger: " << x << " <" << __FILE__ << ":" << __LINE__ << ">" << std::endl
//	is this too wordy?
#else

	// Deprecated for non-debug builds
	#define LOG(x)

#endif