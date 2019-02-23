#include "VisualShaderNodeVectorFunc.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeVectorFunc *VisualShaderNodeVectorFunc::_new()
{
	return (VisualShaderNodeVectorFunc *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeVectorFunc")());
}
void VisualShaderNodeVectorFunc::set_function(const int64_t func) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeVectorFunc", "set_function");
	}
	___godot_icall_void_int(mb, (const Object *) this, func);
}

VisualShaderNodeVectorFunc::Function VisualShaderNodeVectorFunc::get_function() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeVectorFunc", "get_function");
	}
	return (VisualShaderNodeVectorFunc::Function) ___godot_icall_int(mb, (const Object *) this);
}

}