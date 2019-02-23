#ifndef GODOT_CPP_SKELETONIK_HPP
#define GODOT_CPP_SKELETONIK_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node.hpp"
namespace godot {

class Skeleton;

class SkeletonIK : public Node {
public:

	static inline const char *___get_class_name() { return (const char *) "SkeletonIK"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static SkeletonIK *_new();

	// methods
	void set_root_bone(const String root_bone);
	String get_root_bone() const;
	void set_tip_bone(const String tip_bone);
	String get_tip_bone() const;
	void set_interpolation(const double interpolation);
	double get_interpolation() const;
	void set_target_transform(const Transform target);
	Transform get_target_transform() const;
	void set_target_node(const NodePath node);
	NodePath get_target_node();
	void set_use_magnet(const bool use);
	bool is_using_magnet() const;
	void set_magnet_position(const Vector3 local_position);
	Vector3 get_magnet_position() const;
	Skeleton *get_parent_skeleton() const;
	bool is_running();
	void set_min_distance(const double min_distance);
	double get_min_distance() const;
	void set_max_iterations(const int64_t iterations);
	int64_t get_max_iterations() const;
	void start(const bool one_time = false);
	void stop();

};

}

#endif