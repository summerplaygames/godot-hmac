#ifndef GODOT_CPP_ANIMATIONNODEBLENDSPACE2D_HPP
#define GODOT_CPP_ANIMATIONNODEBLENDSPACE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationRootNode.hpp"
namespace godot {

class AnimationRootNode;

class AnimationNodeBlendSpace2D : public AnimationRootNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeBlendSpace2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeBlendSpace2D *_new();

	// methods
	void add_blend_point(const Ref<AnimationRootNode> node, const Vector2 pos, const int64_t at_index = -1);
	void set_blend_point_position(const int64_t point, const Vector2 pos);
	Vector2 get_blend_point_position(const int64_t point) const;
	void set_blend_point_node(const int64_t point, const Ref<AnimationRootNode> node);
	Ref<AnimationRootNode> get_blend_point_node(const int64_t point) const;
	void remove_blend_point(const int64_t point);
	int64_t get_blend_point_count() const;
	void add_triangle(const int64_t x, const int64_t y, const int64_t z, const int64_t at_index = -1);
	int64_t get_triangle_point(const int64_t triangle, const int64_t point);
	void remove_triangle(const int64_t triangle);
	int64_t get_triangle_count() const;
	void set_min_space(const Vector2 min_space);
	Vector2 get_min_space() const;
	void set_max_space(const Vector2 max_space);
	Vector2 get_max_space() const;
	void set_snap(const Vector2 snap);
	Vector2 get_snap() const;
	void set_x_label(const String text);
	String get_x_label() const;
	void set_y_label(const String text);
	String get_y_label() const;
	void _add_blend_point(const int64_t index, const Ref<AnimationRootNode> node);
	void _set_triangles(const PoolIntArray triangles);
	PoolIntArray _get_triangles() const;
	void set_auto_triangles(const bool enable);
	bool get_auto_triangles() const;
	void _tree_changed();

};

}

#endif