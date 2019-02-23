#include "CSGCylinder.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"


namespace godot {


CSGCylinder *CSGCylinder::_new()
{
	return (CSGCylinder *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CSGCylinder")());
}
void CSGCylinder::set_radius(const double radius) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "set_radius");
	}
	___godot_icall_void_float(mb, (const Object *) this, radius);
}

double CSGCylinder::get_radius() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "get_radius");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGCylinder::set_height(const double height) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "set_height");
	}
	___godot_icall_void_float(mb, (const Object *) this, height);
}

double CSGCylinder::get_height() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "get_height");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGCylinder::set_sides(const int64_t sides) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "set_sides");
	}
	___godot_icall_void_int(mb, (const Object *) this, sides);
}

int64_t CSGCylinder::get_sides() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "get_sides");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CSGCylinder::set_cone(const bool cone) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "set_cone");
	}
	___godot_icall_void_bool(mb, (const Object *) this, cone);
}

bool CSGCylinder::is_cone() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "is_cone");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGCylinder::set_material(const Ref<Material> material) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "set_material");
	}
	___godot_icall_void_Object(mb, (const Object *) this, material.ptr());
}

Ref<Material> CSGCylinder::get_material() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "get_material");
	}
	return Ref<Material>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CSGCylinder::set_smooth_faces(const bool smooth_faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "set_smooth_faces");
	}
	___godot_icall_void_bool(mb, (const Object *) this, smooth_faces);
}

bool CSGCylinder::get_smooth_faces() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGCylinder", "get_smooth_faces");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}