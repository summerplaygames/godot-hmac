#include "VehicleBody.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VehicleBody *VehicleBody::_new()
{
	return (VehicleBody *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VehicleBody")());
}
void VehicleBody::set_engine_force(const double engine_force) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VehicleBody", "set_engine_force");
	}
	___godot_icall_void_float(mb, (const Object *) this, engine_force);
}

double VehicleBody::get_engine_force() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VehicleBody", "get_engine_force");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void VehicleBody::set_brake(const double brake) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VehicleBody", "set_brake");
	}
	___godot_icall_void_float(mb, (const Object *) this, brake);
}

double VehicleBody::get_brake() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VehicleBody", "get_brake");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void VehicleBody::set_steering(const double steering) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VehicleBody", "set_steering");
	}
	___godot_icall_void_float(mb, (const Object *) this, steering);
}

double VehicleBody::get_steering() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VehicleBody", "get_steering");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}