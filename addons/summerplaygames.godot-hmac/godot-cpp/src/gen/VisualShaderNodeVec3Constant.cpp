#include "VisualShaderNodeVec3Constant.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeVec3Constant *VisualShaderNodeVec3Constant::_new()
{
	return (VisualShaderNodeVec3Constant *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeVec3Constant")());
}
void VisualShaderNodeVec3Constant::set_constant(const Vector3 value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeVec3Constant", "set_constant");
	}
	___godot_icall_void_Vector3(mb, (const Object *) this, value);
}

Vector3 VisualShaderNodeVec3Constant::get_constant() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeVec3Constant", "get_constant");
	}
	return ___godot_icall_Vector3(mb, (const Object *) this);
}

}