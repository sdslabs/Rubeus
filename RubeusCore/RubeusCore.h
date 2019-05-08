// RubeusCore.h : Include file for standard system include files,
// or project specific include files.

#pragma once

// Standard header files
#include <iostream>
#include <string>
#include <unordered_map>
#include <initializer_list>

// Rubeus Macros
#define REGISTERGAMECLASS(x)																									  \
public:x(																														  \
	std::string name,																											  \
	Rubeus::RLevel * levelName,																									  \
	Rubeus::GraphicComponents::RSprite & sprite,																				  \
	RML::Matrix4 transform,																										  \
	bool enablePhysics = false,																									  \
	Rubeus::Awerere::ACollider * collider = NULL,																				  \
	bool generatesHit = false,																									  \
	const Rubeus::Awerere::APhysicsMaterial & physicsMat = Rubeus::Awerere::APhysicsMaterial(),									  \
	int childCount = 0,																											  \
	std::initializer_list<RGameObject *> children = {})																			  \
	: RGameObject(name, levelName, sprite, transform, enablePhysics, collider, generatesHit, physicsMat, childCount, children) {} \
	   void begin() override;																									  \
	   void onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData& collisionData) override;		  \
	   void onMessage(Rubeus::Message* msg) override;																			  \
	   void tick() override;																									  \

#define REGISTERLEVELCLASS(x)                                      \
public:x(std::string name)                                         \
	: RLevel(name){}											   \
																   \
~x()													           \
{}																   \
																   \
void begin() override;											   \
void onEnd() override;											   \

// TODO: Reference additional headers your program requires here.

// Dynamic Program Analysis Tools
#ifdef _DEBUG
#ifdef VLD
#ifndef NO_VLD
#include <vld.h>
#endif
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
#include <main_layer.h>
#include <level.h>
#include <message_system.h>
#include <texture_object.h>
#include <audio_manager_component.h>
#include <game_object.h>
#include <game.h>
#include <world.h>

// Awerere specific includes
#include <awerere_collider_object.h>
#include <awerere_sphere_collider_object.h>
#include <awerere_box_collider_object.h>
#include <awerere_plane_collider_object.h>
#include <awerere_physics_object.h>
#include <awerere_physics_engine.h>
#include <awerere_collision_engine.h>
