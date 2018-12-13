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
			 * @fn		std::string RLoaderComponent::LoadTextFileStream(const char * filePath)
			 *
			 * @brief	Loads text file to a string using streams
			 *
			 * @warning	Use only after initialising the image loader through initImageLoader()
			 *
			 * @param	filePath	Full pathname of the file.
			 *
			 * @return	The text file stream.
			 */
			std::string loadTextFileStream(const char * filePath);

			/**
			 * @fn		static GraphicComponents::Image LoadImageFile(const char * path)
			 *
			 * @brief	Loads image
			 *
			 * @param	path		The image file path
			 *
			 * @return	Pointer to the image object.
			 */
			static GraphicComponents::Image loadImageFile(const char * path);

			/**
			 * @fn		static void deleteImage()
			 *
			 * @brief	Frees the image data
			 */
			static void deleteImage();

			/**
			 * @fn		void onMessage(Message * msg) override
			 *
			 * @brief	Handles the message received
			 * @warning	Use only with the message system
			 *
			 * @param	msg	Pointer to the message sent.
			 */
			void onMessage(Message * msg) override;

		protected:
		};
	}
}
