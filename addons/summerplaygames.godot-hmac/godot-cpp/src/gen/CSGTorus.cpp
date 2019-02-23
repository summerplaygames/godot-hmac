#include "CSGTorus.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"


namespace godot {


CSGTorus *CSGTorus::_new()
{
	return (CSGTorus *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CSGTorus")());
}
void CSGTorus::set_inner_radius(const double radius) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "set_inner_radius");
	}
	___godot_icall_void_float(mb, (const Object *) this, radius);
}

double CSGTorus::get_inner_radius() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "get_inner_radius");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGTorus::set_outer_radius(const double radius) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "set_outer_radius");
	}
	___godot_icall_void_float(mb, (const Object *) this, radius);
}

double CSGTorus::get_outer_radius() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "get_outer_radius");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGTorus::set_sides(const int64_t sides) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "set_sides");
	}
	___godot_icall_void_int(mb, (const Object *) this, sides);
}

int64_t CSGTorus::get_sides() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "get_sides");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CSGTorus::set_ring_sides(const int64_t sides) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "set_ring_sides");
	}
	___godot_icall_void_int(mb, (const Object *) this, sides);
}

int64_t CSGTorus::get_ring_sides() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "get_ring_sides");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CSGTorus::set_material(const Ref<Material> material) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "set_material");
	}
	___godot_icall_void_Object(mb, (const Object *) this, material.ptr());
}

Ref<Material> CSGTorus::get_material() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "get_material");
	}
	return Ref<Material>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CSGTorus::set_smooth_faces(const bool smooth_faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "set_smooth_faces");
	}
	___godot_icall_void_bool(mb, (const Object *) this, smooth_faces);
}

bool CSGTorus::get_smooth_faces() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGTorus", "get_smooth_faces");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}