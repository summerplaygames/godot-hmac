#include "VisualShader.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "VisualShaderNode.hpp"


namespace godot {


VisualShader *VisualShader::_new()
{
	return (VisualShader *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShader")());
}
void VisualShader::set_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "set_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

void VisualShader::add_node(const int64_t type, const Ref<VisualShaderNode> node, const Vector2 position, const int64_t id) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "add_node");
	}
	___godot_icall_void_int_Object_Vector2_int(mb, (const Object *) this, type, node.ptr(), position, id);
}

void VisualShader::set_node_position(const int64_t type, const int64_t id, const Vector2 position) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "set_node_position");
	}
	___godot_icall_void_int_int_Vector2(mb, (const Object *) this, type, id, position);
}

Ref<VisualShaderNode> VisualShader::get_node(const int64_t type, const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "get_node");
	}
	return Ref<VisualShaderNode>::__internal_constructor(___godot_icall_Object_int_int(mb, (const Object *) this, type, id));
}

Vector2 VisualShader::get_node_position(const int64_t type, const int64_t id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "get_node_position");
	}
	return ___godot_icall_Vector2_int_int(mb, (const Object *) this, type, id);
}

PoolIntArray VisualShader::get_node_list(const int64_t type) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "get_node_list");
	}
	return ___godot_icall_PoolIntArray_int(mb, (const Object *) this, type);
}

int64_t VisualShader::get_valid_node_id(const int64_t type) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "get_valid_node_id");
	}
	return ___godot_icall_int_int(mb, (const Object *) this, type);
}

void VisualShader::remove_node(const int64_t type, const int64_t id) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "remove_node");
	}
	___godot_icall_void_int_int(mb, (const Object *) this, type, id);
}

bool VisualShader::is_node_connection(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "is_node_connection");
	}
	return ___godot_icall_bool_int_int_int_int_int(mb, (const Object *) this, type, from_node, from_port, to_node, to_port);
}

bool VisualShader::can_connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "can_connect_nodes");
	}
	return ___godot_icall_bool_int_int_int_int_int(mb, (const Object *) this, type, from_node, from_port, to_node, to_port);
}

Error VisualShader::connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "connect_nodes");
	}
	return (Error) ___godot_icall_int_int_int_int_int_int(mb, (const Object *) this, type, from_node, from_port, to_node, to_port);
}

void VisualShader::disconnect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "disconnect_nodes");
	}
	___godot_icall_void_int_int_int_int_int(mb, (const Object *) this, type, from_node, from_port, to_node, to_port);
}

Array VisualShader::get_node_connections(const int64_t type) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "get_node_connections");
	}
	return ___godot_icall_Array_int(mb, (const Object *) this, type);
}

void VisualShader::set_graph_offset(const Vector2 offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "set_graph_offset");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, offset);
}

Vector2 VisualShader::get_graph_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "get_graph_offset");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void VisualShader::_queue_update() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "_queue_update");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void VisualShader::_update_shader() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "_update_shader");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void VisualShader::_input_type_changed(const int64_t arg0, const int64_t arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShader", "_input_type_changed");
	}
	___godot_icall_void_int_int(mb, (const Object *) this, arg0, arg1);
}

}