#ifndef GODOT_CPP_ANIMATIONNODEBLENDTREE_HPP
#define GODOT_CPP_ANIMATIONNODEBLENDTREE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationRootNode.hpp"
namespace godot {

class AnimationNode;

class AnimationNodeBlendTree : public AnimationRootNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeBlendTree"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants
	const static int CONNECTION_OK = 0;
	const static int CONNECTION_ERROR_NO_INPUT = 1;
	const static int CONNECTION_ERROR_NO_INPUT_INDEX = 2;
	const static int CONNECTION_ERROR_NO_OUTPUT = 3;
	const static int CONNECTION_ERROR_SAME_NODE = 4;
	const static int CONNECTION_ERROR_CONNECTION_EXISTS = 5;


	static AnimationNodeBlendTree *_new();

	// methods
	void add_node(const String name, const Ref<AnimationNode> node, const Vector2 position = Vector2(0, 0));
	Ref<AnimationNode> get_node(const String name) const;
	void remove_node(const String name);
	void rename_node(const String name, const String new_name);
	bool has_node(const String name) const;
	void connect_node(const String input_node, const int64_t input_index, const String output_node);
	void disconnect_node(const String input_node, const int64_t input_index);
	void set_node_position(const String name, const Vector2 position);
	Vector2 get_node_position(const String name) const;
	void set_graph_offset(const Vector2 offset);
	Vector2 get_graph_offset() const;
	void _tree_changed();
	void _node_changed(const String node);

};

}

#endif