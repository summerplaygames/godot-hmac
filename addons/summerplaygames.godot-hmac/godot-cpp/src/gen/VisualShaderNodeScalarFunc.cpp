#include "VisualShaderNodeScalarFunc.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeScalarFunc *VisualShaderNodeScalarFunc::_new()
{
	return (VisualShaderNodeScalarFunc *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeScalarFunc")());
}
void VisualShaderNodeScalarFunc::set_function(const int64_t func) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeScalarFunc", "set_function");
	}
	___godot_icall_void_int(mb, (const Object *) this, func);
}

VisualShaderNodeScalarFunc::Function VisualShaderNodeScalarFunc::get_function() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeScalarFunc", "get_function");
	}
	return (VisualShaderNodeScalarFunc::Function) ___godot_icall_int(mb, (const Object *) this);
}

}