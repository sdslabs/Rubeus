/**
 * @file	Source\loader_component.cpp.
 *
 * @brief	Implements the loader component class
 */

#pragma once

#include <loader_component.h>

namespace Rubeus
{
	namespace UtilityComponents
	{
		std::string RLoaderComponent::LoadTextFileStream(const char * filePath)
		{
			FILE* file = fopen(filePath, "rt");

			fseek(file, 0, SEEK_END);
			unsigned long length = ftell(file);
			char* data = new char[length + 1];
			memset(data, 0, length + 1);
			fseek(file, 0, SEEK_SET);
			fread(data, 1, length, file);
			fclose(file);

			std::string result(data);
			delete[] data;

			return result;
		}
		auto RLoaderComponent::LoadImageWindows(std::string path)
		{
			// TODO: Write Windows specific image loader
		}
	}
}
