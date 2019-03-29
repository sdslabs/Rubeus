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

Rubeus::UtilityComponents::RLogger::RLogger() {
	foregroundColorMap = {
		{"black", 30},
		{"red", 31},
		{"green", 32},
		{"yellow", 33},
		{"blue", 34},
		{"magenta", 35},
		{"cyan", 36},
		{"white", 37}
	};
	backgroundColorMap = {
		{"black", 40},
		{"red", 41},
		{"green", 42},
		{"yellow", 43},
		{"blue", 44},
		{"magenta", 45},
		{"cyan", 46},
		{"white", 47}
	};
	severityMap = {
		{"ERROR", "red"},
		{"ASSERT", "yellow"},
		{"SUCCESS", "green"}
	};
}
void Rubeus::UtilityComponents::RLogger::printLog(std::string logMessage) {
	std::cout << "Rubeus: " << logMessage << std::endl;
}
void Rubeus::UtilityComponents::RLogger::printExtendedLog(std::string logMessage, std::string file, std::string line) {
	std::cout << "RubeusLog:" << file << ":" << line << ":" << logMessage << "\n";
}
void Rubeus::UtilityComponents::RLogger::printExtendedLog(std::string logMessage, std::string severity, std::string file, std::string line) {
	std::cout << "\033[1;" << foregroundColorMap[ severityMap[severity] ] << "m" << "RubeusLog:" << file << ":" << line << ":" << logMessage << "\033[0m" << std::endl;
}
