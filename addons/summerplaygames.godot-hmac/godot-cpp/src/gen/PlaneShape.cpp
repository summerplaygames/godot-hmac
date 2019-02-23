#include "PlaneShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


PlaneShape *PlaneShape::_new()
{
	return (PlaneShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PlaneShape")());
}
void PlaneShape::set_plane(const Plane plane) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PlaneShape", "set_plane");
	}
	___godot_icall_void_Plane(mb, (const Object *) this, plane);
}

Plane PlaneShape::get_plane() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PlaneShape", "get_plane");
	}
	return ___godot_icall_Plane(mb, (const Object *) this);
}

}