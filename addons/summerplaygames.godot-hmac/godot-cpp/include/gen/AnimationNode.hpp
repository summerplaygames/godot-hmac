#ifndef GODOT_CPP_ANIMATIONNODE_HPP
#define GODOT_CPP_ANIMATIONNODE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class AnimationNode;

class AnimationNode : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNode"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FilterAction {
		FILTER_IGNORE = 0,
		FILTER_PASS = 1,
		FILTER_STOP = 2,
		FILTER_BLEND = 3,
	};

	// constants


	static AnimationNode *_new();

	// methods
	void process(const double time, const bool seek);
	String get_caption();
	String has_filter();
	int64_t get_input_count() const;
	String get_input_name(const int64_t input);
	void add_input(const String name);
	void remove_input(const int64_t index);
	void set_filter_path(const NodePath path, const bool enable);
	bool is_path_filtered(const NodePath path) const;
	void set_filter_enabled(const bool enable);
	bool is_filter_enabled() const;
	void _set_filters(const Array filters);
	Array _get_filters() const;
	void blend_animation(const String animation, const double time, const double delta, const bool seeked, const double blend);
	double blend_node(const String name, const Ref<AnimationNode> node, const double time, const bool seek, const double blend, const int64_t filter = 0, const bool optimize = true);
	double blend_input(const int64_t input_index, const double time, const bool seek, const double blend, const int64_t filter = 0, const bool optimize = true);
	void set_parameter(const String name, const Variant value);
	Variant get_parameter(const String name) const;

};

}

#endif