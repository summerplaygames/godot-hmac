#include "PhysicalBone.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


PhysicalBone *PhysicalBone::_new()
{
	return (PhysicalBone *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PhysicalBone")());
}
void PhysicalBone::_direct_state_changed(const Object *arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "_direct_state_changed");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0);
}

void PhysicalBone::set_joint_type(const int64_t joint_type) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_joint_type");
	}
	___godot_icall_void_int(mb, (const Object *) this, joint_type);
}

PhysicalBone::JointType PhysicalBone::get_joint_type() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_joint_type");
	}
	return (PhysicalBone::JointType) ___godot_icall_int(mb, (const Object *) this);
}

void PhysicalBone::set_joint_offset(const Transform offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_joint_offset");
	}
	___godot_icall_void_Transform(mb, (const Object *) this, offset);
}

Transform PhysicalBone::get_joint_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_joint_offset");
	}
	return ___godot_icall_Transform(mb, (const Object *) this);
}

void PhysicalBone::set_body_offset(const Transform offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_body_offset");
	}
	___godot_icall_void_Transform(mb, (const Object *) this, offset);
}

Transform PhysicalBone::get_body_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_body_offset");
	}
	return ___godot_icall_Transform(mb, (const Object *) this);
}

bool PhysicalBone::is_static_body() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "is_static_body");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool PhysicalBone::get_simulate_physics() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_simulate_physics");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool PhysicalBone::is_simulating_physics() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "is_simulating_physics");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

int64_t PhysicalBone::get_bone_id() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_bone_id");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void PhysicalBone::set_mass(const double mass) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_mass");
	}
	___godot_icall_void_float(mb, (const Object *) this, mass);
}

double PhysicalBone::get_mass() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_mass");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void PhysicalBone::set_weight(const double weight) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_weight");
	}
	___godot_icall_void_float(mb, (const Object *) this, weight);
}

double PhysicalBone::get_weight() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_weight");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void PhysicalBone::set_friction(const double friction) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_friction");
	}
	___godot_icall_void_float(mb, (const Object *) this, friction);
}

double PhysicalBone::get_friction() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_friction");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void PhysicalBone::set_bounce(const double bounce) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_bounce");
	}
	___godot_icall_void_float(mb, (const Object *) this, bounce);
}

double PhysicalBone::get_bounce() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_bounce");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void PhysicalBone::set_gravity_scale(const double gravity_scale) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "set_gravity_scale");
	}
	___godot_icall_void_float(mb, (const Object *) this, gravity_scale);
}

double PhysicalBone::get_gravity_scale() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicalBone", "get_gravity_scale");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}