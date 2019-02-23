#include "AnimationNodeStateMachine.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationNode.hpp"
#include "AnimationNodeStateMachineTransition.hpp"


namespace godot {


AnimationNodeStateMachine *AnimationNodeStateMachine::_new()
{
	return (AnimationNodeStateMachine *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeStateMachine")());
}
void AnimationNodeStateMachine::add_node(const String name, const Ref<AnimationNode> node, const Vector2 position) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "add_node");
	}
	___godot_icall_void_String_Object_Vector2(mb, (const Object *) this, name, node.ptr(), position);
}

Ref<AnimationNode> AnimationNodeStateMachine::get_node(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_node");
	}
	return Ref<AnimationNode>::__internal_constructor(___godot_icall_Object_String(mb, (const Object *) this, name));
}

void AnimationNodeStateMachine::remove_node(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "remove_node");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

void AnimationNodeStateMachine::rename_node(const String name, const String new_name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "rename_node");
	}
	___godot_icall_void_String_String(mb, (const Object *) this, name, new_name);
}

bool AnimationNodeStateMachine::has_node(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "has_node");
	}
	return ___godot_icall_bool_String(mb, (const Object *) this, name);
}

String AnimationNodeStateMachine::get_node_name(const Ref<AnimationNode> node) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_node_name");
	}
	return ___godot_icall_String_Object(mb, (const Object *) this, node.ptr());
}

void AnimationNodeStateMachine::set_node_position(const String name, const Vector2 position) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_node_position");
	}
	___godot_icall_void_String_Vector2(mb, (const Object *) this, name, position);
}

Vector2 AnimationNodeStateMachine::get_node_position(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_node_position");
	}
	return ___godot_icall_Vector2_String(mb, (const Object *) this, name);
}

bool AnimationNodeStateMachine::has_transition(const String from, const String to) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "has_transition");
	}
	return ___godot_icall_bool_String_String(mb, (const Object *) this, from, to);
}

void AnimationNodeStateMachine::add_transition(const String from, const String to, const Ref<AnimationNodeStateMachineTransition> transition) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "add_transition");
	}
	___godot_icall_void_String_String_Object(mb, (const Object *) this, from, to, transition.ptr());
}

Ref<AnimationNodeStateMachineTransition> AnimationNodeStateMachine::get_transition(const int64_t idx) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition");
	}
	return Ref<AnimationNodeStateMachineTransition>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, idx));
}

String AnimationNodeStateMachine::get_transition_from(const int64_t idx) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition_from");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, idx);
}

String AnimationNodeStateMachine::get_transition_to(const int64_t idx) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition_to");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, idx);
}

int64_t AnimationNodeStateMachine::get_transition_count() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_transition_count");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void AnimationNodeStateMachine::remove_transition_by_index(const int64_t idx) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "remove_transition_by_index");
	}
	___godot_icall_void_int(mb, (const Object *) this, idx);
}

void AnimationNodeStateMachine::remove_transition(const String from, const String to) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "remove_transition");
	}
	___godot_icall_void_String_String(mb, (const Object *) this, from, to);
}

void AnimationNodeStateMachine::set_start_node(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_start_node");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String AnimationNodeStateMachine::get_start_node() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_start_node");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void AnimationNodeStateMachine::set_end_node(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_end_node");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String AnimationNodeStateMachine::get_end_node() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_end_node");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void AnimationNodeStateMachine::set_graph_offset(const Vector2 name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "set_graph_offset");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, name);
}

Vector2 AnimationNodeStateMachine::get_graph_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "get_graph_offset");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void AnimationNodeStateMachine::_tree_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeStateMachine", "_tree_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}