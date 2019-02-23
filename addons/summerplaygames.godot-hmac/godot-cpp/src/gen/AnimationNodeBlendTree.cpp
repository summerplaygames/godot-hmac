#include "AnimationNodeBlendTree.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationNode.hpp"


namespace godot {


AnimationNodeBlendTree *AnimationNodeBlendTree::_new()
{
	return (AnimationNodeBlendTree *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationNodeBlendTree")());
}
void AnimationNodeBlendTree::add_node(const String name, const Ref<AnimationNode> node, const Vector2 position) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "add_node");
	}
	___godot_icall_void_String_Object_Vector2(mb, (const Object *) this, name, node.ptr(), position);
}

Ref<AnimationNode> AnimationNodeBlendTree::get_node(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "get_node");
	}
	return Ref<AnimationNode>::__internal_constructor(___godot_icall_Object_String(mb, (const Object *) this, name));
}

void AnimationNodeBlendTree::remove_node(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "remove_node");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

void AnimationNodeBlendTree::rename_node(const String name, const String new_name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "rename_node");
	}
	___godot_icall_void_String_String(mb, (const Object *) this, name, new_name);
}

bool AnimationNodeBlendTree::has_node(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "has_node");
	}
	return ___godot_icall_bool_String(mb, (const Object *) this, name);
}

void AnimationNodeBlendTree::connect_node(const String input_node, const int64_t input_index, const String output_node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "connect_node");
	}
	___godot_icall_void_String_int_String(mb, (const Object *) this, input_node, input_index, output_node);
}

void AnimationNodeBlendTree::disconnect_node(const String input_node, const int64_t input_index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "disconnect_node");
	}
	___godot_icall_void_String_int(mb, (const Object *) this, input_node, input_index);
}

void AnimationNodeBlendTree::set_node_position(const String name, const Vector2 position) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "set_node_position");
	}
	___godot_icall_void_String_Vector2(mb, (const Object *) this, name, position);
}

Vector2 AnimationNodeBlendTree::get_node_position(const String name) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "get_node_position");
	}
	return ___godot_icall_Vector2_String(mb, (const Object *) this, name);
}

void AnimationNodeBlendTree::set_graph_offset(const Vector2 offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "set_graph_offset");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, offset);
}

Vector2 AnimationNodeBlendTree::get_graph_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "get_graph_offset");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void AnimationNodeBlendTree::_tree_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "_tree_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void AnimationNodeBlendTree::_node_changed(const String node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationNodeBlendTree", "_node_changed");
	}
	___godot_icall_void_String(mb, (const Object *) this, node);
}

}