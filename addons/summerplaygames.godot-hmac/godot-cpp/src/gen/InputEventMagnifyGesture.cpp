#include "InputEventMagnifyGesture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


InputEventMagnifyGesture *InputEventMagnifyGesture::_new()
{
	return (InputEventMagnifyGesture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"InputEventMagnifyGesture")());
}
void InputEventMagnifyGesture::set_factor(const double factor) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMagnifyGesture", "set_factor");
	}
	___godot_icall_void_float(mb, (const Object *) this, factor);
}

double InputEventMagnifyGesture::get_factor() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("InputEventMagnifyGesture", "get_factor");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}