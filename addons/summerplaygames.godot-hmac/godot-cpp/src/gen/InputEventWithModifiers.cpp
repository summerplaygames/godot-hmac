#include "InputEventWithModifiers.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void InputEventWithModifiers::set_alt(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "set_alt");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool InputEventWithModifiers::get_alt() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "get_alt");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void InputEventWithModifiers::set_shift(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "set_shift");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool InputEventWithModifiers::get_shift() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "get_shift");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void InputEventWithModifiers::set_control(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "set_control");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool InputEventWithModifiers::get_control() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "get_control");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void InputEventWithModifiers::set_metakey(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "set_metakey");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool InputEventWithModifiers::get_metakey() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "get_metakey");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void InputEventWithModifiers::set_command(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "set_command");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool InputEventWithModifiers::get_command() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventWithModifiers", "get_command");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}