/**
 * @file		Include/keys.h.
 *
 * @brief	Defines the input keys enumerations used by Input Manager
 */

#pragma once

namespace Rubeus
{
	/**
	 * @enum		EMouseButtons
	 *
	 * @brief	Mouse buttons supported
	 */
	enum class EMouseButtons
	{
		__MOUSE_BUTTON_1 = 0,
		__MOUSE_BUTTON_2 = 1,
		__MOUSE_BUTTON_3 = 2,
		__MOUSE_BUTTON_4 = 3,
		__MOUSE_BUTTON_5 = 4,
		__MOUSE_BUTTON_6 = 5,
		__MOUSE_BUTTON_7 = 6,
		__MOUSE_BUTTON_8 = 7,
		__MOUSE_BUTTON_LAST = __MOUSE_BUTTON_8,
		__MOUSE_BUTTON_LEFT = __MOUSE_BUTTON_1,
		__MOUSE_BUTTON_RIGHT = __MOUSE_BUTTON_2,
		__MOUSE_BUTTON_MIDDLE = __MOUSE_BUTTON_3
	};

	/**
	 * @enum		EKeyboardKeys
	 *
	 * @brief	Keyboard keys supported
	 */
	enum class EKeyboardKeys
	{
		__UNKNOWN = -1,
		__SPACE = 32,
		__APOSTROPHE = 39  /* ' */,
		__COMMA = 44  /* , */,
		__MINUS = 45  /* - */,
		__PERIOD = 46  /* . */,
		__SLASH = 47  /* / */,
		__0 = 48,
		__1 = 49,
		__2 = 50,
		__3 = 51,
		__4 = 52,
		__5 = 53,
		__6 = 54,
		__7 = 55,
		__8 = 56,
		__9 = 57,
		__SEMICOLON = 59  /* ; */,
		__EQUAL = 61  /* = */,
		__A = 65,
		__B = 66,
		__C = 67,
		__D = 68,
		__E = 69,
		__F = 70,
		__G = 71,
		__H = 72,
		__I = 73,
		__J = 74,
		__K = 75,
		__L = 76,
		__M = 77,
		__N = 78,
		__O = 79,
		__P = 80,
		__Q = 81,
		__R = 82,
		__S = 83,
		__T = 84,
		__U = 85,
		__V = 86,
		__W = 87,
		__X = 88,
		__Y = 89,
		__Z = 90,
		__LEFT_BRACKET = 91  /* [ */,
		__BACKSLASH = 92  /* \ */,
		__RIGHT_BRACKET = 93  /* ] */,
		__GRAVE_ACCENT = 96  /* ` */,
		__WORLD_1 = 161 /* non-US #1 */,
		__WORLD_2 = 162 /* non-US #2 */,

		/* Function keys */
		__ESCAPE = 256,
		__ENTER = 257,
		__TAB = 258,
		__BACKSPACE = 259,
		__INSERT = 260,
		__DELETE = 261,
		__RIGHT = 262,
		__LEFT = 263,
		__DOWN = 264,
		__UP = 265,
		__PAGE_UP = 266,
		__PAGE_DOWN = 267,
		__HOME = 268,
		__END = 269,
		__CAPS_LOCK = 280,
		__SCROLL_LOCK = 281,
		__NUM_LOCK = 282,
		__PRINT_SCREEN = 283,
		__PAUSE = 284,
		__F1 = 290,
		__F2 = 291,
		__F3 = 292,
		__F4 = 293,
		__F5 = 294,
		__F6 = 295,
		__F7 = 296,
		__F8 = 297,
		__F9 = 298,
		__F10 = 299,
		__F11 = 300,
		__F12 = 301,
		__F13 = 302,
		__F14 = 303,
		__F15 = 304,
		__F16 = 305,
		__F17 = 306,
		__F18 = 307,
		__F19 = 308,
		__F20 = 309,
		__F21 = 310,
		__F22 = 311,
		__F23 = 312,
		__F24 = 313,
		__F25 = 314,
		__KP_0 = 320,
		__KP_1 = 321,
		__KP_2 = 322,
		__KP_3 = 323,
		__KP_4 = 324,
		__KP_5 = 325,
		__KP_6 = 326,
		__KP_7 = 327,
		__KP_8 = 328,
		__KP_9 = 329,
		__KP_DECIMAL = 330,
		__KP_DIVIDE = 331,
		__KP_MULTIPLY = 332,
		__KP_SUBTRACT = 333,
		__KP_ADD = 334,
		__KP_ENTER = 335,
		__KP_EQUAL = 336,
		__LEFT_SHIFT = 340,
		__LEFT_CONTROL = 341,
		__LEFT_ALT = 342,
		__LEFT_SUPER = 343,
		__RIGHT_SHIFT = 344,
		__RIGHT_CONTROL = 345,
		__RIGHT_ALT = 346,
		__RIGHT_SUPER = 347,
		__MENU = 348,

		/* Management Keys, DO NOT USE */
		__DEACTIVATED = 0,
		__ACTIVATED = 1
	};
}
