#include "SpringArm.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Shape.hpp"


namespace godot {


SpringArm *SpringArm::_new()
{
	return (SpringArm *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"SpringArm")());
}
double SpringArm::get_hit_length() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "get_hit_length");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SpringArm::set_length(const double length) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "set_length");
	}
	___godot_icall_void_float(mb, (const Object *) this, length);
}

double SpringArm::get_length() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "get_length");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void SpringArm::set_shape(const Ref<Shape> shape) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "set_shape");
	}
	___godot_icall_void_Object(mb, (const Object *) this, shape.ptr());
}

Ref<Shape> SpringArm::get_shape() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "get_shape");
	}
	return Ref<Shape>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void SpringArm::add_excluded_object(const RID RID) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "add_excluded_object");
	}
	___godot_icall_void_RID(mb, (const Object *) this, RID);
}

bool SpringArm::remove_excluded_object(const RID RID) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "remove_excluded_object");
	}
	return ___godot_icall_bool_RID(mb, (const Object *) this, RID);
}

void SpringArm::clear_excluded_objects() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "clear_excluded_objects");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void SpringArm::set_collision_mask(const int64_t mask) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "set_collision_mask");
	}
	___godot_icall_void_int(mb, (const Object *) this, mask);
}

int64_t SpringArm::get_collision_mask() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "get_collision_mask");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void SpringArm::set_margin(const double margin) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "set_margin");
	}
	___godot_icall_void_float(mb, (const Object *) this, margin);
}

double SpringArm::get_margin() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("SpringArm", "get_margin");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}