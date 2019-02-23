#include "CylinderShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


CylinderShape *CylinderShape::_new()
{
	return (CylinderShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CylinderShape")());
}
void CylinderShape::set_radius(const double radius) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CylinderShape", "set_radius");
	}
	___godot_icall_void_float(mb, (const Object *) this, radius);
}

double CylinderShape::get_radius() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CylinderShape", "get_radius");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CylinderShape::set_height(const double height) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CylinderShape", "set_height");
	}
	___godot_icall_void_float(mb, (const Object *) this, height);
}

double CylinderShape::get_height() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CylinderShape", "get_height");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}