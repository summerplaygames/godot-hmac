#include "AnimationNodeBlend3.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeBlend3 *AnimationNodeBlend3::_new()
{
	return (AnimationNodeBlend3 *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeBlend3")());
}
void AnimationNodeBlend3::set_use_sync(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlend3", "set_use_sync");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool AnimationNodeBlend3::is_using_sync() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlend3", "is_using_sync");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}