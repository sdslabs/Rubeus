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
			ilDeleteImages(1, &image);
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

		ILubyte * RLoaderComponent::loadImageFile(std::string path)
		{
			initImageLoader();

			ASSERT("Loading image: " + path);

			DevILCall(ilLoadImage(path.c_str()));

			// TODO: Complete this after Message Bus is done

			return ilGetData();		
		}

		void RLoaderComponent::initImageLoader()
		{
			DevILCall(ilGenImages(1, &image));
			DevILCall(ilBindImage(image));
		}
	}
}
