#include "VisualShaderNodeVectorOp.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualShaderNodeVectorOp *VisualShaderNodeVectorOp::_new()
{
	return (VisualShaderNodeVectorOp *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeVectorOp")());
}
void VisualShaderNodeVectorOp::set_operator(const int64_t op) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeVectorOp", "set_operator");
	}
	___godot_icall_void_int(mb, (const Object *) this, op);
}

VisualShaderNodeVectorOp::Operator VisualShaderNodeVectorOp::get_operator() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeVectorOp", "get_operator");
	}
	return (VisualShaderNodeVectorOp::Operator) ___godot_icall_int(mb, (const Object *) this);
}

}