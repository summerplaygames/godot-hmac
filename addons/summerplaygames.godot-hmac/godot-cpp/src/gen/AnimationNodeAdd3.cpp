#include "AnimationNodeAdd3.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


AnimationNodeAdd3 *AnimationNodeAdd3::_new()
{
	return (AnimationNodeAdd3 *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeAdd3")());
}
void AnimationNodeAdd3::set_use_sync(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeAdd3", "set_use_sync");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool AnimationNodeAdd3::is_using_sync() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeAdd3", "is_using_sync");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}