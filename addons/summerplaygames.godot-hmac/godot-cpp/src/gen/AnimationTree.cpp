#include "AnimationTree.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "AnimationNode.hpp"
#include "Object.hpp"


namespace godot {


AnimationTree *AnimationTree::_new()
{
	return (AnimationTree *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"AnimationTree")());
}
void AnimationTree::set_active(const bool active) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "set_active");
	}
	___godot_icall_void_bool(mb, (const Object *) this, active);
}

bool AnimationTree::is_active() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "is_active");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void AnimationTree::set_tree_root(const Ref<AnimationNode> root) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "set_tree_root");
	}
	___godot_icall_void_Object(mb, (const Object *) this, root.ptr());
}

Ref<AnimationNode> AnimationTree::get_tree_root() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "get_tree_root");
	}
	return Ref<AnimationNode>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void AnimationTree::set_process_mode(const int64_t mode) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "set_process_mode");
	}
	___godot_icall_void_int(mb, (const Object *) this, mode);
}

AnimationTree::AnimationProcessMode AnimationTree::get_process_mode() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "get_process_mode");
	}
	return (AnimationTree::AnimationProcessMode) ___godot_icall_int(mb, (const Object *) this);
}

void AnimationTree::set_animation_player(const NodePath root) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "set_animation_player");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, root);
}

NodePath AnimationTree::get_animation_player() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "get_animation_player");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

void AnimationTree::set_root_motion_track(const NodePath path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "set_root_motion_track");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, path);
}

NodePath AnimationTree::get_root_motion_track() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "get_root_motion_track");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

Transform AnimationTree::get_root_motion_transform() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "get_root_motion_transform");
	}
	return ___godot_icall_Transform(mb, (const Object *) this);
}

void AnimationTree::_tree_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "_tree_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void AnimationTree::_update_properties() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "_update_properties");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void AnimationTree::rename_parameter(const String old_name, const String new_name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "rename_parameter");
	}
	___godot_icall_void_String_String(mb, (const Object *) this, old_name, new_name);
}

void AnimationTree::advance(const double delta) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "advance");
	}
	___godot_icall_void_float(mb, (const Object *) this, delta);
}

void AnimationTree::_node_removed(const Object *arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "_node_removed");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0);
}

void AnimationTree::_clear_caches() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("AnimationTree", "_clear_caches");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}