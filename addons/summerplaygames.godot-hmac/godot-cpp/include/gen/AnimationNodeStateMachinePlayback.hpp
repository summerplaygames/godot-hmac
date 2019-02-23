#ifndef GODOT_CPP_ANIMATIONNODESTATEMACHINEPLAYBACK_HPP
#define GODOT_CPP_ANIMATIONNODESTATEMACHINEPLAYBACK_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class AnimationNodeStateMachinePlayback : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeStateMachinePlayback"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeStateMachinePlayback *_new();

	// methods
	void travel(const String to_node);
	void start(const String node);
	void stop();
	bool is_playing() const;
	String get_current_node() const;
	PoolStringArray get_travel_path() const;

};

}

#endif