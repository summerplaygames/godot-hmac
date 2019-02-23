#include "VisualShaderNodeColorConstant.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeColorConstant *VisualShaderNodeColorConstant::_new()
{
	return (VisualShaderNodeColorConstant *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeColorConstant")());
}
void VisualShaderNodeColorConstant::set_constant(const Color value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeColorConstant", "set_constant");
	}
	___godot_icall_void_Color(mb, (const Object *) this, value);
}

Color VisualShaderNodeColorConstant::get_constant() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeColorConstant", "get_constant");
	}
	return ___godot_icall_Color(mb, (const Object *) this);
}

}