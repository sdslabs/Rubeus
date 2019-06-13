/**
 * @file		Source/loader_component.h.
 *
 * @brief	Declares the loader component class
 */

#pragma once

#include <string.h>
#include <string>
#include <cstdlib>

#include <IL/il.h>
#include <IL/ilu.h>

#include <logger_component.h>
#include <master_component.h>
#include <logger_component.h>
#include <image_object.h>

namespace Rubeus
{
	/**
     * @namespace @Rubeus::UtilityComponents
	 *
     * @brief The Utility Components of Rubeus Engine namespace.
	 */
	namespace UtilityComponents
	{
		/**
		 * @class	RLoaderComponent
		 *
		 * @brief	A loader component. Useful for file I/O
		 */
		class RLoaderComponent : public RMasterComponent
		{
		private:
			/** @brief	The image name used by DevIL library */
			static ILuint m_ImageID;

			/**
			 * @fn		static void initImageLoader()
			 *
			 * @brief	Initialise OpenIL/DevIL library for image loading
			 */
			static void initImageLoader();

		public:
			/**
			 * @fn		RLoaderComponent()
			 *
			 * @brief	Default constructor.
			 */
			RLoaderComponent();

			/**
			 * @fn		~RLoaderComponent()
			 *
			 * @brief	Default destructor.
			 */
			~RLoaderComponent();

			/**
			 * @fn		std::string loadTextFileStream(const char * filePath)
			 *
			 * @brief	Loads text file to a string using streams
			 *
			 * @warning	Use only after initialising the image loader through initImageLoader()
			 *
			 * @param	filePath	Full pathname of the file.
			 *
			 * @return	The text file in a string.
			 */
			std::string loadTextFileStream(const char * filePath);

			/**
			 * @fn		static GraphicComponents::Image loadImageFile(const char * path)
			 *
			 * @brief	Loads image and returns it in the form of a Rubeus Image
			 *
			 * @param	path		The image file path
			 *
			 * @return	The image object.
			 */
			static GraphicComponents::Image loadImageFile(const char * path);

			/**
			 * @fn		static void deleteImage()
			 *
			 * @brief	Frees the loaded image data
			 */
			static void deleteImage();

			void load_image(var data = NULL);

		protected:
		};
	}
}
