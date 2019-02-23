#include "AnimationNodeStateMachineTransition.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeStateMachineTransition *AnimationNodeStateMachineTransition::_new()
{
	return (AnimationNodeStateMachineTransition *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeStateMachineTransition")());
}
void AnimationNodeStateMachineTransition::set_switch_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_switch_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

AnimationNodeStateMachineTransition::SwitchMode AnimationNodeStateMachineTransition::get_switch_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_switch_mode");
	}
	return (AnimationNodeStateMachineTransition::SwitchMode) ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeStateMachineTransition::set_auto_advance(const bool auto_advance) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_auto_advance");
	}
	___godot_icall_void_bool(mb, (const Object *) this, auto_advance);
}

bool AnimationNodeStateMachineTransition::has_auto_advance() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "has_auto_advance");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AnimationNodeStateMachineTransition::set_advance_condition(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_advance_condition");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String AnimationNodeStateMachineTransition::get_advance_condition() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_advance_condition");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void AnimationNodeStateMachineTransition::set_xfade_time(const double secs) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_xfade_time");
	}
	___godot_icall_void_float(mb, (const Object *) this, secs);
}

double AnimationNodeStateMachineTransition::get_xfade_time() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_xfade_time");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void AnimationNodeStateMachineTransition::set_disabled(const bool disabled) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_disabled");
	}
	___godot_icall_void_bool(mb, (const Object *) this, disabled);
}

bool AnimationNodeStateMachineTransition::is_disabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "is_disabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AnimationNodeStateMachineTransition::set_priority(const int64_t priority) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "set_priority");
	}
	___godot_icall_void_int(mb, (const Object *) this, priority);
}

int64_t AnimationNodeStateMachineTransition::get_priority() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachineTransition", "get_priority");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

}