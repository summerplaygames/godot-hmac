#ifndef GODOT_CPP_ANIMATIONNODESTATEMACHINE_HPP
#define GODOT_CPP_ANIMATIONNODESTATEMACHINE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationRootNode.hpp"
namespace godot {

class AnimationNode;
class AnimationNodeStateMachineTransition;

class AnimationNodeStateMachine : public AnimationRootNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeStateMachine"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeStateMachine *_new();

	// methods
	void add_node(const String name, const Ref<AnimationNode> node, const Vector2 position = Vector2(0, 0));
	Ref<AnimationNode> get_node(const String name) const;
	void remove_node(const String name);
	void rename_node(const String name, const String new_name);
	bool has_node(const String name) const;
	String get_node_name(const Ref<AnimationNode> node) const;
	void set_node_position(const String name, const Vector2 position);
	Vector2 get_node_position(const String name) const;
	bool has_transition(const String from, const String to) const;
	void add_transition(const String from, const String to, const Ref<AnimationNodeStateMachineTransition> transition);
	Ref<AnimationNodeStateMachineTransition> get_transition(const int64_t idx) const;
	String get_transition_from(const int64_t idx) const;
	String get_transition_to(const int64_t idx) const;
	int64_t get_transition_count() const;
	void remove_transition_by_index(const int64_t idx);
	void remove_transition(const String from, const String to);
	void set_start_node(const String name);
	String get_start_node() const;
	void set_end_node(const String name);
	String get_end_node() const;
	void set_graph_offset(const Vector2 name);
	Vector2 get_graph_offset() const;
	void _tree_changed();

};

}

#endif