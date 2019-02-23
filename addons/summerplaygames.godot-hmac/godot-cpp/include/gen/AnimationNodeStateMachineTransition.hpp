#ifndef GODOT_CPP_ANIMATIONNODESTATEMACHINETRANSITION_HPP
#define GODOT_CPP_ANIMATIONNODESTATEMACHINETRANSITION_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "AnimationNodeStateMachineTransition.hpp"

#include "Resource.hpp"
namespace godot {


class AnimationNodeStateMachineTransition : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeStateMachineTransition"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum SwitchMode {
		SWITCH_MODE_IMMEDIATE = 0,
		SWITCH_MODE_SYNC = 1,
		SWITCH_MODE_AT_END = 2,
	};

	// constants


	static AnimationNodeStateMachineTransition *_new();

	// methods
	void set_switch_mode(const int64_t mode);
	AnimationNodeStateMachineTransition::SwitchMode get_switch_mode() const;
	void set_auto_advance(const bool auto_advance);
	bool has_auto_advance() const;
	void set_advance_condition(const String name);
	String get_advance_condition() const;
	void set_xfade_time(const double secs);
	double get_xfade_time() const;
	void set_disabled(const bool disabled);
	bool is_disabled() const;
	void set_priority(const int64_t priority);
	int64_t get_priority() const;

};

}

#endif