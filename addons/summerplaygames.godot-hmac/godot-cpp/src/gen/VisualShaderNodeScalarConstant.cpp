#include "VisualShaderNodeScalarConstant.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeScalarConstant *VisualShaderNodeScalarConstant::_new()
{
	return (VisualShaderNodeScalarConstant *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeScalarConstant")());
}
void VisualShaderNodeScalarConstant::set_constant(const double value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeScalarConstant", "set_constant");
	}
	___godot_icall_void_float(mb, (const Object *) this, value);
}

double VisualShaderNodeScalarConstant::get_constant() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeScalarConstant", "get_constant");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}