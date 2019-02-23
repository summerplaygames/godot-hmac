#include "AnimationNodeTransition.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeTransition *AnimationNodeTransition::_new()
{
	return (AnimationNodeTransition *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeTransition")());
}
void AnimationNodeTransition::set_enabled_inputs(const int64_t amount) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "set_enabled_inputs");
	}
	___godot_icall_void_int(mb, (const Object *) this, amount);
}

int64_t AnimationNodeTransition::get_enabled_inputs() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "get_enabled_inputs");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeTransition::set_input_as_auto_advance(const int64_t input, const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "set_input_as_auto_advance");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, input, enable);
}

bool AnimationNodeTransition::is_input_set_as_auto_advance(const int64_t input) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "is_input_set_as_auto_advance");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, input);
}

void AnimationNodeTransition::set_input_caption(const int64_t input, const String caption) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "set_input_caption");
	}
	___godot_icall_void_int_String(mb, (const Object *) this, input, caption);
}

String AnimationNodeTransition::get_input_caption(const int64_t input) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "get_input_caption");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, input);
}

void AnimationNodeTransition::set_cross_fade_time(const double time) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "set_cross_fade_time");
	}
	___godot_icall_void_float(mb, (const Object *) this, time);
}

double AnimationNodeTransition::get_cross_fade_time() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeTransition", "get_cross_fade_time");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}