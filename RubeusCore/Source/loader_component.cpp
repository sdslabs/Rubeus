/**
 * @file		Source\loader_component.cpp.
 *
 * @brief	Implements the loader component class
 */

#pragma once

#include <loader_component.h>

namespace Rubeus
{
	namespace UtilityComponents
	{
		RLoaderComponent::RLoaderComponent()
		{
			ilInit();
			iluInit();
		}

		RLoaderComponent::~RLoaderComponent()
		{
			ilDeleteImages(1, &m_ImageID);
		}

		std::string RLoaderComponent::loadTextFileStream(const char * filePath)
		{
			FILE* file = fopen(filePath, "rt");

			ASSERT("Attempting to read file: " + (std::string) filePath);

			if(!file)
			{
				ERRORLOG("File opening failed");
				perror(filePath);

				return "Invalid_Path";
			}

			fseek(file, 0, SEEK_END);
			unsigned long length = ftell(file);
			char* data = new char[length + 1];
			memset(data, 0, length + 1);
			fseek(file, 0, SEEK_SET);

			ASSERT("Reading file... " + (std::string) filePath);

			fread(data, 1, length, file);
			
			if(ferror(file))
			{
				ERRORLOG("Failed reading file");
				perror(filePath);
			}

			fclose(file);

			std::string result(data);
			delete[] data;

			SUCCESS("Read successful");
			return result;
		}

		GraphicComponents::Image RLoaderComponent::loadImageFile(const char * path)
		{
			initImageLoader();

			ASSERT("Loading image: " + std::string(path));

			DevILCall(ilLoadImage(path));

			return GraphicComponents::Image(
				ilGetData(),
				ilGetInteger(IL_IMAGE_HEIGHT),
				ilGetInteger(IL_IMAGE_WIDTH),
				ilGetInteger(IL_IMAGE_BITS_PER_PIXEL)
			);
		}

		void RLoaderComponent::onMessage(Message * msg)
		{
			switch(msg->m_Type)
			{
				case load_image:
				{
					GraphicComponents::Image temp = loadImageFile(boost::any_cast<const char *>(msg->m_Data));
					m_MessageSystem.addMessage(this, msg->m_Sender, get_loaded_image, temp);
				}
					break;
				default:
					LOG("Loader component received a misdirected message");
			}
		}

		inline void RLoaderComponent::initImageLoader()
		{
			DevILCall(ilGenImages(1, &m_ImageID));
			DevILCall(ilBindImage(m_ImageID));
		}
	}
}
