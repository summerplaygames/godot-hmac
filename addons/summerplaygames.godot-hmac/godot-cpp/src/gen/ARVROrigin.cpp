#include "ARVROrigin.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ARVROrigin *ARVROrigin::_new()
{
	return (ARVROrigin *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ARVROrigin")());
}
void ARVROrigin::set_world_scale(const double world_scale) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ARVROrigin", "set_world_scale");
	}
	___godot_icall_void_float(mb, (const Object *) this, world_scale);
}

double ARVROrigin::get_world_scale() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ARVROrigin", "get_world_scale");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}