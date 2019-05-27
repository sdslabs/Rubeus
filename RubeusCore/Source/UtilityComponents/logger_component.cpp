/**
 * @file		Source/logger_component.cpp.
 *
 * @brief	Implements the logger component functions
 */

#include <logger_component.h>

#include <math.h>

int toHex(int decimal)
{
	int hex = 0;

	for (int i = 0; decimal != 0; i++)
	{
		hex = hex + (int)((pow(10, i))*(decimal % 16));
		decimal /= 16;
	}

	return hex;
}

void GLClearError()
{
	while (glGetError() != GL_NO_ERROR)
		;
}

void DevILClearError()
{
	while (ilGetError() != IL_NO_ERROR)
		;
}

namespace Rubeus
{
	namespace UtilityComponents
	{
		std::ofstream * RLogger::LogFile = NULL;
		std::map<std::string, short> * RLogger::ForegroundColorMap;
		std::map<std::string, short> * RLogger::BackgroundColorMap;
		std::map<std::string, std::string> * RLogger::SeverityMap;

		void RLogger::Init()
		{
			ForegroundColorMap = new std::map<std::string, short>({
				{"black",   30},
				{"red",     31},
				{"green",   32},
				{"yellow",  33},
				{"blue",    34},
				{"magenta", 35},
				{"cyan",    36},
				{"white",   37}
			});
			BackgroundColorMap = new std::map<std::string, short>({
				{"black",   40},
				{"red",     41},
				{"green",   42},
				{"yellow",  43},
				{"blue",    44},
				{"magenta", 45},
				{"cyan",    46},
				{"white",   47}
			});
			SeverityMap = new std::map<std::string, std::string>({
				{"ERROR",   "red"},
				{"ASSERT",  "yellow"},
				{"SUCCESS", "green"}
			});

			LOG("Logger is initialised. Logs will be saved in game directory");
		}

		void RLogger::PrintLog(std::string logMessage)
		{
			std::cout << "Rubeus: " << logMessage << std::endl;
			if (LogFile)
			{
				*LogFile << "Rubeus: " << logMessage << std::endl;
			}
		}

		void RLogger::PrintExtendedLog(std::string logMessage, std::string file, int line)
		{
			std::cout << "RubeusLog:" << file << ":" << line << ":" << logMessage << "\n";
			if (LogFile)
			{
				*LogFile << "RubeusLog:" << file << ":" << line << ":" << logMessage << std::endl;
			}
		}

		void RLogger::PrintExtendedLog(std::string logMessage, std::string severity, std::string file, int line)
		{
			std::cout << "\033[1;" << (*ForegroundColorMap)[(*SeverityMap)[severity]] << "m" << "RubeusLog:" << file << ":" << line << ":" << logMessage << "\033[0m" << std::endl;
			if (LogFile)
			{
				*LogFile << "RubeusLog:" << file << ":" << line << ":" << logMessage << std::endl;
			}
		}

		void RLogger::CreateLogFile()
		{
			std::string filename = "";
#ifdef _WIN32
			filename += "windows";
#elif __APPLE__
			filename += "osx";
#else
			filename += "linux";
#endif
#ifdef _DEBUG
			filename += "_debug";
#else
			filename += "_release";
#endif
			time_t t = time(0);
			struct tm * now = localtime(&t);
			char buffer[80];
			strftime(buffer, 80, "_%Y%m%d_%H%M%S.log", now);

			int dirCreationStatus = std::experimental::filesystem::create_directory("Logs");
			int dirExistStatus = std::experimental::filesystem::exists("Logs");
			filename.append(buffer);

			if(dirExistStatus | dirCreationStatus)
			{
				filename.insert(0, "Logs/");
			}
			else
			{
				ERRORLOG("Log directory creation failed, logs in this session will be saved in same directory as executable");		
			}

			LogFile = new std::ofstream(filename, std::ios_base::out | std::ios_base::app);	

			if (!LogFile)
			{
				ERRORLOG("Log file creation failed, logs in this session will be lost");
			}
			else
			{
				std::cout << "Log file creation successfull" << std::endl;
			}
		}

		void RLogger::CloseLogFile()
		{
			LogFile->close();

			delete LogFile;
			delete SeverityMap;
			delete BackgroundColorMap;
			delete ForegroundColorMap;
		}
	}
} 
