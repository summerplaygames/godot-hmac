#include "VisualShaderNodeInput.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeInput *VisualShaderNodeInput::_new()
{
	return (VisualShaderNodeInput *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeInput")());
}
void VisualShaderNodeInput::set_input_name(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeInput", "set_input_name");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String VisualShaderNodeInput::get_input_name() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeInput", "get_input_name");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}