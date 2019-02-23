#include "CSGPolygon.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"


namespace godot {


CSGPolygon *CSGPolygon::_new()
{
	return (CSGPolygon *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CSGPolygon")());
}
void CSGPolygon::set_polygon(const PoolVector2Array polygon) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_polygon");
	}
	___godot_icall_void_PoolVector2Array(mb, (const Object *) this, polygon);
}

PoolVector2Array CSGPolygon::get_polygon() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_polygon");
	}
	return ___godot_icall_PoolVector2Array(mb, (const Object *) this);
}

void CSGPolygon::set_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

CSGPolygon::Mode CSGPolygon::get_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_mode");
	}
	return (CSGPolygon::Mode) ___godot_icall_int(mb, (const Object *) this);
}

void CSGPolygon::set_depth(const double depth) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_depth");
	}
	___godot_icall_void_float(mb, (const Object *) this, depth);
}

double CSGPolygon::get_depth() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_depth");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGPolygon::set_spin_degrees(const double degrees) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_spin_degrees");
	}
	___godot_icall_void_float(mb, (const Object *) this, degrees);
}

double CSGPolygon::get_spin_degrees() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_spin_degrees");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGPolygon::set_spin_sides(const int64_t spin_sides) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_spin_sides");
	}
	___godot_icall_void_int(mb, (const Object *) this, spin_sides);
}

int64_t CSGPolygon::get_spin_sides() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_spin_sides");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void CSGPolygon::set_path_node(const NodePath path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_path_node");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, path);
}

NodePath CSGPolygon::get_path_node() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_path_node");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

void CSGPolygon::set_path_interval(const double distance) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_path_interval");
	}
	___godot_icall_void_float(mb, (const Object *) this, distance);
}

double CSGPolygon::get_path_interval() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_path_interval");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGPolygon::set_path_rotation(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_path_rotation");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

CSGPolygon::PathRotation CSGPolygon::get_path_rotation() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_path_rotation");
	}
	return (CSGPolygon::PathRotation) ___godot_icall_int(mb, (const Object *) this);
}

void CSGPolygon::set_path_local(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_path_local");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool CSGPolygon::is_path_local() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "is_path_local");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGPolygon::set_path_continuous_u(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_path_continuous_u");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool CSGPolygon::is_path_continuous_u() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "is_path_continuous_u");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGPolygon::set_path_joined(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_path_joined");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool CSGPolygon::is_path_joined() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "is_path_joined");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGPolygon::set_material(const Ref<Material> material) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_material");
	}
	___godot_icall_void_Object(mb, (const Object *) this, material.ptr());
}

Ref<Material> CSGPolygon::get_material() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_material");
	}
	return Ref<Material>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CSGPolygon::set_smooth_faces(const bool smooth_faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "set_smooth_faces");
	}
	___godot_icall_void_bool(mb, (const Object *) this, smooth_faces);
}

bool CSGPolygon::get_smooth_faces() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "get_smooth_faces");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool CSGPolygon::_is_editable_3d_polygon() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "_is_editable_3d_polygon");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool CSGPolygon::_has_editable_3d_polygon_no_depth() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "_has_editable_3d_polygon_no_depth");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void CSGPolygon::_path_exited() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "_path_exited");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void CSGPolygon::_path_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPolygon", "_path_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}