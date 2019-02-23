#ifndef GODOT_CPP_ANIMATIONNODEBLENDSPACE1D_HPP
#define GODOT_CPP_ANIMATIONNODEBLENDSPACE1D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationRootNode.hpp"
namespace godot {

class AnimationRootNode;

class AnimationNodeBlendSpace1D : public AnimationRootNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeBlendSpace1D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeBlendSpace1D *_new();

	// methods
	void add_blend_point(const Ref<AnimationRootNode> node, const double pos, const int64_t at_index = -1);
	void set_blend_point_position(const int64_t point, const double pos);
	double get_blend_point_position(const int64_t point) const;
	void set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node);
	Ref<AnimationRootNode> get_blend_point_node(const int64_t point) const;
	void remove_blend_point(const int64_t point);
	int64_t get_blend_point_count() const;
	void set_min_space(const double min_space);
	double get_min_space() const;
	void set_max_space(const double max_space);
	double get_max_space() const;
	void set_snap(const double snap);
	double get_snap() const;
	void set_value_label(const String text);
	String get_value_label() const;
	void _add_blend_point(const int64_t index, const Ref<AnimationRootNode> node);
	void _tree_changed();

};

}

#endif