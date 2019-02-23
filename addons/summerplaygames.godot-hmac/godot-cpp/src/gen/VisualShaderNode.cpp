#include "VisualShaderNode.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void VisualShaderNode::set_output_port_for_preview(const int64_t port) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNode", "set_output_port_for_preview");
	}
	___godot_icall_void_int(mb, (const Object *) this, port);
}

int64_t VisualShaderNode::get_output_port_for_preview() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNode", "get_output_port_for_preview");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void VisualShaderNode::set_input_port_default_value(const int64_t port, const Variant value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNode", "set_input_port_default_value");
	}
	___godot_icall_void_int_Variant(mb, (const Object *) this, port, value);
}

Variant VisualShaderNode::get_input_port_default_value(const int64_t port) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNode", "get_input_port_default_value");
	}
	return ___godot_icall_Variant_int(mb, (const Object *) this, port);
}

void VisualShaderNode::_set_default_input_values(const Array values) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNode", "_set_default_input_values");
	}
	___godot_icall_void_Array(mb, (const Object *) this, values);
}

Array VisualShaderNode::_get_default_input_values() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNode", "_get_default_input_values");
	}
	return ___godot_icall_Array(mb, (const Object *) this);
}

}