#include "PhysicsMaterial.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


PhysicsMaterial *PhysicsMaterial::_new()
{
	return (PhysicsMaterial *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"PhysicsMaterial")());
}
void PhysicsMaterial::set_friction(const double friction) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "set_friction");
	}
	___godot_icall_void_float(mb, (const Object *) this, friction);
}

double PhysicsMaterial::get_friction() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "get_friction");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void PhysicsMaterial::set_rough(const bool rough) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "set_rough");
	}
	___godot_icall_void_bool(mb, (const Object *) this, rough);
}

bool PhysicsMaterial::is_rough() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "is_rough");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void PhysicsMaterial::set_bounce(const double bounce) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "set_bounce");
	}
	___godot_icall_void_float(mb, (const Object *) this, bounce);
}

double PhysicsMaterial::get_bounce() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "get_bounce");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void PhysicsMaterial::set_absorbent(const bool absorbent) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "set_absorbent");
	}
	___godot_icall_void_bool(mb, (const Object *) this, absorbent);
}

bool PhysicsMaterial::is_absorbent() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PhysicsMaterial", "is_absorbent");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}