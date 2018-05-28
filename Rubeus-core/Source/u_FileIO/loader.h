/**
 * @file	Source\u_fileIO\loader.h.
 *
 * @brief	Declares the loader class
 */

#pragma once

#include "../c_Master_Component/master.h"

namespace Rubeus
{
	namespace UtilityComponents
	{
		/**
		* @class	LoaderComponent
		*
		* @brief	A loader component.
		* 			Useful for file I/O
		*
		* @author	Twarit
		* @date	26-05-2018
		*/
		class RLoaderComponent : RMasterComponent
		{
		private:
		public:

			/**
			* @fn	auto LoaderComponent::LoadImageWindows(std::string path);
			*
			* @brief	Loads image for Windows platform
			*
			* @author	Twarit
			* @date	26-05-2018
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
