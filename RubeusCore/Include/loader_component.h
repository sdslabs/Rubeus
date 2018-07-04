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
#include <logger_component.h>

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
			/**
			 * @fn		void initImageLoader()
			 *
			 * @brief	Initialise OpenIL/DevIL library for image loading
			 */
			void initImageLoader();

		public:
			/**
			 * @fn	RLoaderComponent()
			 *		
			 * @brief	Default constructor.
			 */
			RLoaderComponent();

			/**
			 * @fn	std::string RLoaderComponent::LoadTextFileStream(const char * filePath)
			 *
			 * @brief	Loads text file to a string using streams
			 *
			 * @warning	Use only after initialising the image loader through initImageLoader()
			 *
			 * @param	filePath	Full pathname of the file.
			 *
			 * @return	The text file stream.
			 */
			std::string LoadTextFileStream(const char * filePath);

			/**
			 * @fn		ILubyte * LoadImageFile(std::string path, ILuint width, ILuint height, ILuint depth)
			 *
			 * @brief	Loads image
			 *
			 * @return	Pointer to the image data.
			 */
			static auto LoadImageWindows(std::string path);

		protected:
		};
	}
}
