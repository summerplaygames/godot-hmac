#include "VisualShaderNodeTransformConstant.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeTransformConstant *VisualShaderNodeTransformConstant::_new()
{
	return (VisualShaderNodeTransformConstant *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeTransformConstant")());
}
void VisualShaderNodeTransformConstant::set_constant(const Transform value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTransformConstant", "set_constant");
	}
	___godot_icall_void_Transform(mb, (const Object *) this, value);
}

Transform VisualShaderNodeTransformConstant::get_constant() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeTransformConstant", "get_constant");
	}
	return ___godot_icall_Transform(mb, (const Object *) this);
}

}