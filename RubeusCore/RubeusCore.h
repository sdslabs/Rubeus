// RubeusCore.h : Include file for standard system include files,
// or project specific include files.

#pragma once

// Standard header files
#include <iostream>
#include <string>
#include <unordered_map>

// TODO: Reference additional headers your program requires here.

// Dynamic Program Analysis Tools
#ifdef _DEBUG
#ifdef VLD
#include <vld.h>
#endif
#endif

// Library specific defines
#define ILUT_USE_OPENGL

// Dependencies
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <rubeus_maths_library.h>

// Engine global objects
#include <engine.h>

// Rubeus specific includes
#include <logger_component.h>
#include <loader_component.h>
#include <input_manager.h>
#include <window_component.h>
#include <shader_component.h>
#include <master_component.h>
#include <simple_renderer_component.h>
#include <guerrilla_renderer_component.h>
#include <renderable_object.h>
#include <sprite_object.h>
#include <static_sprite_object.h>
#include <timer_component.h>
#include <ui_layer_object.h>
#include <message_system.h>
#include <texture_object.h>
#include <audio_manager_component.h>
#include <game_object.h>
#include <world.h>

// Awerere specific includes
#include <awerere_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>
#include <awerere_plane_collider_object.h>
#include <awerere_physics_object.h>
#include <awerere_physics_engine.h>
#include <awerere_collision_engine.h>
