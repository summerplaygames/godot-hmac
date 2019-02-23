#include "StyleBoxLine.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


StyleBoxLine *StyleBoxLine::_new()
{
	return (StyleBoxLine *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"StyleBoxLine")());
}
void StyleBoxLine::set_color(const Color color) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "set_color");
	}
	___godot_icall_void_Color(mb, (const Object *) this, color);
}

Color StyleBoxLine::get_color() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "get_color");
	}
	return ___godot_icall_Color(mb, (const Object *) this);
}

void StyleBoxLine::set_thickness(const int64_t thickness) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "set_thickness");
	}
	___godot_icall_void_int(mb, (const Object *) this, thickness);
}

int64_t StyleBoxLine::get_thickness() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "get_thickness");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void StyleBoxLine::set_grow_begin(const double offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "set_grow_begin");
	}
	___godot_icall_void_float(mb, (const Object *) this, offset);
}

double StyleBoxLine::get_grow_begin() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "get_grow_begin");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void StyleBoxLine::set_grow_end(const double offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "set_grow_end");
	}
	___godot_icall_void_float(mb, (const Object *) this, offset);
}

double StyleBoxLine::get_grow_end() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "get_grow_end");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void StyleBoxLine::set_vertical(const bool vertical) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "set_vertical");
	}
	___godot_icall_void_bool(mb, (const Object *) this, vertical);
}

bool StyleBoxLine::is_vertical() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("StyleBoxLine", "is_vertical");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}