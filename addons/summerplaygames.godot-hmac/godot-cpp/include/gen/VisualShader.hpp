#ifndef GODOT_CPP_VISUALSHADER_HPP
#define GODOT_CPP_VISUALSHADER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Shader.hpp"
namespace godot {

class VisualShaderNode;

class VisualShader : public Shader {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShader"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Type {
		TYPE_VERTEX = 0,
		TYPE_FRAGMENT = 1,
		TYPE_LIGHT = 2,
		TYPE_MAX = 3,
	};

	// constants
	const static int NODE_ID_INVALID = -1;
	const static int NODE_ID_OUTPUT = 0;


	static VisualShader *_new();

	// methods
	void set_mode(const int64_t mode);
	void add_node(const int64_t type, const Ref<VisualShaderNode> node, const Vector2 position, const int64_t id);
	void set_node_position(const int64_t type, const int64_t id, const Vector2 position);
	Ref<VisualShaderNode> get_node(const int64_t type, const int64_t id) const;
	Vector2 get_node_position(const int64_t type, const int64_t id) const;
	PoolIntArray get_node_list(const int64_t type) const;
	int64_t get_valid_node_id(const int64_t type) const;
	void remove_node(const int64_t type, const int64_t id);
	bool is_node_connection(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
	bool can_connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port) const;
	Error connect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	void disconnect_nodes(const int64_t type, const int64_t from_node, const int64_t from_port, const int64_t to_node, const int64_t to_port);
	Array get_node_connections(const int64_t type) const;
	void set_graph_offset(const Vector2 offset);
	Vector2 get_graph_offset() const;
	void _queue_update();
	void _update_shader() const;
	void _input_type_changed(const int64_t arg0, const int64_t arg1);

};

}

#endif