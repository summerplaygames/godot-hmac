#include "CSGSphere.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"


namespace godot {


CSGSphere *CSGSphere::_new()
{
	return (CSGSphere *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CSGSphere")());
}
void CSGSphere::set_radius(const double radius) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "set_radius");
	}
	___godot_icall_void_float(mb, (const Object *) this, radius);
}

double CSGSphere::get_radius() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "get_radius");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGSphere::set_radial_segments(const int64_t radial_segments) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "set_radial_segments");
	}
	___godot_icall_void_int(mb, (const Object *) this, radial_segments);
}

int64_t CSGSphere::get_radial_segments() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "get_radial_segments");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CSGSphere::set_rings(const int64_t rings) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "set_rings");
	}
	___godot_icall_void_int(mb, (const Object *) this, rings);
}

int64_t CSGSphere::get_rings() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "get_rings");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CSGSphere::set_smooth_faces(const bool smooth_faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "set_smooth_faces");
	}
	___godot_icall_void_bool(mb, (const Object *) this, smooth_faces);
}

bool CSGSphere::get_smooth_faces() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "get_smooth_faces");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGSphere::set_material(const Ref<Material> material) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "set_material");
	}
	___godot_icall_void_Object(mb, (const Object *) this, material.ptr());
}

Ref<Material> CSGSphere::get_material() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGSphere", "get_material");
	}
	return Ref<Material>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

}