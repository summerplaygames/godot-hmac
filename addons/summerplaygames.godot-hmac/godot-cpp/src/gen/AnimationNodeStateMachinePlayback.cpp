#include "AnimationNodeStateMachinePlayback.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeStateMachinePlayback *AnimationNodeStateMachinePlayback::_new()
{
	return (AnimationNodeStateMachinePlayback *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeStateMachinePlayback")());
}
void AnimationNodeStateMachinePlayback::travel(const String to_node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "travel");
	}
	___godot_icall_void_String(mb, (const Object *) this, to_node);
}

void AnimationNodeStateMachinePlayback::start(const String node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "start");
	}
	___godot_icall_void_String(mb, (const Object *) this, node);
}

void AnimationNodeStateMachinePlayback::stop() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "stop");
	}
	___godot_icall_void(mb, (const Object *) this);
}

bool AnimationNodeStateMachinePlayback::is_playing() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "is_playing");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

String AnimationNodeStateMachinePlayback::get_current_node() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_current_node");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

PoolStringArray AnimationNodeStateMachinePlayback::get_travel_path() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachinePlayback", "get_travel_path");
	}
	return ___godot_icall_PoolStringArray(mb, (const Object *) this);
}

}