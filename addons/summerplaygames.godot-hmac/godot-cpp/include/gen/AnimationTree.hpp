#ifndef GODOT_CPP_ANIMATIONTREE_HPP
#define GODOT_CPP_ANIMATIONTREE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "AnimationTree.hpp"

#include "Node.hpp"
namespace godot {

class AnimationNode;
class Object;

class AnimationTree : public Node {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationTree"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum AnimationProcessMode {
		ANIMATION_PROCESS_PHYSICS = 0,
		ANIMATION_PROCESS_IDLE = 1,
		ANIMATION_PROCESS_MANUAL = 2,
	};

	// constants


	static AnimationTree *_new();

	// methods
	void set_active(const bool active);
	bool is_active() const;
	void set_tree_root(const Ref<AnimationNode> root);
	Ref<AnimationNode> get_tree_root() const;
	void set_process_mode(const int64_t mode);
	AnimationTree::AnimationProcessMode get_process_mode() const;
	void set_animation_player(const NodePath root);
	NodePath get_animation_player() const;
	void set_root_motion_track(const NodePath path);
	NodePath get_root_motion_track() const;
	Transform get_root_motion_transform() const;
	void _tree_changed();
	void _update_properties();
	void rename_parameter(const String old_name, const String new_name);
	void advance(const double delta);
	void _node_removed(const Object *arg0);
	void _clear_caches();

};

}

#endif