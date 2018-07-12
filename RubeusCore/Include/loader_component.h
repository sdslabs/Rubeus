/**
 * @file		Source\loader_component.h.
 *
 * @brief	Declares the loader component class
 */

#pragma once

#include <string.h>
#include <string>
#include <cstdlib>

#include <logger_component.h>
#include <master_component.h>

// Short-hand for loading text files at path x
// See LoadTextFileStream() for more information
#define LoadFile(x) Rubeus::UtilityComponents::RLoaderComponent::LoadTextFileStream(x)

// Short-hand for loading image files in Windows at path x
// See LoadImageWindows() for more information
#define LoadWinImage(x) Rubeus::UtilityComponents::RLoaderComponent::LoadImageWindows(x)


namespace Rubeus
{
	namespace UtilityComponents
	{
		/**
		 * @class	RLoaderComponent
		 *
		 * @brief	A loader component. Useful for file I/O
		 */
		class RLoaderComponent : RMasterComponent
		{
		private:
		public:
			/**
			 * @fn	static std::string RLoaderComponent::LoadTextFileStream(const char * filePath);
			 *
			 * @brief	Loads text file to a string using streams
			 *
			 * @param	filePath	Full pathname of the file.
			 *
			 * @return	The text file stream.
			 */
			static std::string LoadTextFileStream(const char * filePath);

			/**
			 * @fn	static auto RLoaderComponent::LoadImageWindows(std::string path);
			 *
			 * @brief	Loads image for Windows platform
			 *
			 * @param	path	Full pathname of the file.
			 *
			 * @return	The image file.
			 */
			static auto LoadImageWindows(std::string path);

		protected:
		};
	}
}
