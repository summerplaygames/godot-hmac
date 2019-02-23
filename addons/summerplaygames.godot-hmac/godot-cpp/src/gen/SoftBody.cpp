#include "SoftBody.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


SoftBody *SoftBody::_new()
{
	return (SoftBody *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"SoftBody")());
}
void SoftBody::_draw_soft_mesh() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "_draw_soft_mesh");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void SoftBody::set_collision_mask(const int64_t collision_mask) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_collision_mask");
	}
	___godot_icall_void_int(mb, (const Object *) this, collision_mask);
}

int64_t SoftBody::get_collision_mask() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_collision_mask");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void SoftBody::set_collision_layer(const int64_t collision_layer) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_collision_layer");
	}
	___godot_icall_void_int(mb, (const Object *) this, collision_layer);
}

int64_t SoftBody::get_collision_layer() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_collision_layer");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void SoftBody::set_collision_mask_bit(const int64_t bit, const bool value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_collision_mask_bit");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, bit, value);
}

bool SoftBody::get_collision_mask_bit(const int64_t bit) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_collision_mask_bit");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, bit);
}

void SoftBody::set_collision_layer_bit(const int64_t bit, const bool value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_collision_layer_bit");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, bit, value);
}

bool SoftBody::get_collision_layer_bit(const int64_t bit) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_collision_layer_bit");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, bit);
}

void SoftBody::set_parent_collision_ignore(const NodePath parent_collision_ignore) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_parent_collision_ignore");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, parent_collision_ignore);
}

NodePath SoftBody::get_parent_collision_ignore() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_parent_collision_ignore");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

Array SoftBody::get_collision_exceptions() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_collision_exceptions");
	}
	return ___godot_icall_Array(mb, (const Object *) this);
}

void SoftBody::add_collision_exception_with(const Object *body) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "add_collision_exception_with");
	}
	___godot_icall_void_Object(mb, (const Object *) this, body);
}

void SoftBody::remove_collision_exception_with(const Object *body) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "remove_collision_exception_with");
	}
	___godot_icall_void_Object(mb, (const Object *) this, body);
}

void SoftBody::set_simulation_precision(const int64_t simulation_precision) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_simulation_precision");
	}
	___godot_icall_void_int(mb, (const Object *) this, simulation_precision);
}

int64_t SoftBody::get_simulation_precision() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_simulation_precision");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void SoftBody::set_total_mass(const double mass) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_total_mass");
	}
	___godot_icall_void_float(mb, (const Object *) this, mass);
}

double SoftBody::get_total_mass() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_total_mass");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_linear_stiffness(const double linear_stiffness) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_linear_stiffness");
	}
	___godot_icall_void_float(mb, (const Object *) this, linear_stiffness);
}

double SoftBody::get_linear_stiffness() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_linear_stiffness");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_areaAngular_stiffness(const double areaAngular_stiffness) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_areaAngular_stiffness");
	}
	___godot_icall_void_float(mb, (const Object *) this, areaAngular_stiffness);
}

double SoftBody::get_areaAngular_stiffness() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_areaAngular_stiffness");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_volume_stiffness(const double volume_stiffness) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_volume_stiffness");
	}
	___godot_icall_void_float(mb, (const Object *) this, volume_stiffness);
}

double SoftBody::get_volume_stiffness() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_volume_stiffness");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_pressure_coefficient(const double pressure_coefficient) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_pressure_coefficient");
	}
	___godot_icall_void_float(mb, (const Object *) this, pressure_coefficient);
}

double SoftBody::get_pressure_coefficient() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_pressure_coefficient");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_pose_matching_coefficient(const double pose_matching_coefficient) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_pose_matching_coefficient");
	}
	___godot_icall_void_float(mb, (const Object *) this, pose_matching_coefficient);
}

double SoftBody::get_pose_matching_coefficient() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_pose_matching_coefficient");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_damping_coefficient(const double damping_coefficient) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_damping_coefficient");
	}
	___godot_icall_void_float(mb, (const Object *) this, damping_coefficient);
}

double SoftBody::get_damping_coefficient() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_damping_coefficient");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_drag_coefficient(const double drag_coefficient) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_drag_coefficient");
	}
	___godot_icall_void_float(mb, (const Object *) this, drag_coefficient);
}

double SoftBody::get_drag_coefficient() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "get_drag_coefficient");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SoftBody::set_ray_pickable(const bool ray_pickable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "set_ray_pickable");
	}
	___godot_icall_void_bool(mb, (const Object *) this, ray_pickable);
}

bool SoftBody::is_ray_pickable() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SoftBody", "is_ray_pickable");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}