#include "InputEventMouseButton.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


InputEventMouseButton *InputEventMouseButton::_new()
{
	return (InputEventMouseButton *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"InputEventMouseButton")());
}
void InputEventMouseButton::set_factor(const double factor) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "set_factor");
	}
	___godot_icall_void_float(mb, (const Object *) this, factor);
}

double InputEventMouseButton::get_factor() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "get_factor");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void InputEventMouseButton::set_button_index(const int64_t button_index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "set_button_index");
	}
	___godot_icall_void_int(mb, (const Object *) this, button_index);
}

int64_t InputEventMouseButton::get_button_index() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "get_button_index");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void InputEventMouseButton::set_pressed(const bool pressed) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "set_pressed");
	}
	___godot_icall_void_bool(mb, (const Object *) this, pressed);
}

void InputEventMouseButton::set_doubleclick(const bool doubleclick) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "set_doubleclick");
	}
	___godot_icall_void_bool(mb, (const Object *) this, doubleclick);
}

bool InputEventMouseButton::is_doubleclick() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMouseButton", "is_doubleclick");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}