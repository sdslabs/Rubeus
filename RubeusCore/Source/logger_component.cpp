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
std::map<std::string, short> ColorCoder::foregroundColorMap={
    {"black"     ,   30},
    {"red"       ,   31},
    {"green"     ,   32},
    {"yellow"    ,   33},
    {"blue"      ,   34},
    {"magenta"   ,   35},
    {"cyan"      ,   36},
    {"white"     ,   37}
};
std::map<std::string, short> ColorCoder::backgroundColorMap={
    {"black"     ,   40},
    {"red"       ,   41},
    {"green"     ,   42},
    {"yellow"    ,   43},
    {"blue"      ,   44},
    {"magenta"   ,   45},
    {"cyan"      ,   46},
    {"white"     ,   47}
};
std::map<std::string, std::string> ColorCoder::severityMap={
    {"ERROR"     ,   "red"},
    {"ASSERT"    ,   "yellow"},
    {"SUCCESS"   ,   "green"}
};