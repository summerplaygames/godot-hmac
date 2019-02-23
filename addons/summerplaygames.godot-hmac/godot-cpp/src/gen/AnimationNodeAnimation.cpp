#include "AnimationNodeAnimation.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeAnimation *AnimationNodeAnimation::_new()
{
	return (AnimationNodeAnimation *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeAnimation")());
}
void AnimationNodeAnimation::set_animation(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeAnimation", "set_animation");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String AnimationNodeAnimation::get_animation() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeAnimation", "get_animation");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}