#include "OrientedPathFollow.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


OrientedPathFollow *OrientedPathFollow::_new()
{
	return (OrientedPathFollow *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"OrientedPathFollow")());
}
void OrientedPathFollow::set_offset(const double offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "set_offset");
	}
	___godot_icall_void_float(mb, (const Object *) this, offset);
}

double OrientedPathFollow::get_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "get_offset");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void OrientedPathFollow::set_h_offset(const double h_offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "set_h_offset");
	}
	___godot_icall_void_float(mb, (const Object *) this, h_offset);
}

double OrientedPathFollow::get_h_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "get_h_offset");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void OrientedPathFollow::set_v_offset(const double v_offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "set_v_offset");
	}
	___godot_icall_void_float(mb, (const Object *) this, v_offset);
}

double OrientedPathFollow::get_v_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "get_v_offset");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void OrientedPathFollow::set_unit_offset(const double unit_offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "set_unit_offset");
	}
	___godot_icall_void_float(mb, (const Object *) this, unit_offset);
}

double OrientedPathFollow::get_unit_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "get_unit_offset");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void OrientedPathFollow::set_cubic_interpolation(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "set_cubic_interpolation");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool OrientedPathFollow::get_cubic_interpolation() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "get_cubic_interpolation");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void OrientedPathFollow::set_loop(const bool loop) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "set_loop");
	}
	___godot_icall_void_bool(mb, (const Object *) this, loop);
}

bool OrientedPathFollow::has_loop() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OrientedPathFollow", "has_loop");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}