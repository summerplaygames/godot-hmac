#ifndef GODOT_CPP_SOFTBODY_HPP
#define GODOT_CPP_SOFTBODY_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "MeshInstance.hpp"
namespace godot {

class Object;

class SoftBody : public MeshInstance {
public:

	static inline const char *___get_class_name() { return (const char *) "SoftBody"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static SoftBody *_new();

	// methods
	void _draw_soft_mesh();
	void set_collision_mask(const int64_t collision_mask);
	int64_t get_collision_mask() const;
	void set_collision_layer(const int64_t collision_layer);
	int64_t get_collision_layer() const;
	void set_collision_mask_bit(const int64_t bit, const bool value);
	bool get_collision_mask_bit(const int64_t bit) const;
	void set_collision_layer_bit(const int64_t bit, const bool value);
	bool get_collision_layer_bit(const int64_t bit) const;
	void set_parent_collision_ignore(const NodePath parent_collision_ignore);
	NodePath get_parent_collision_ignore() const;
	Array get_collision_exceptions();
	void add_collision_exception_with(const Object *body);
	void remove_collision_exception_with(const Object *body);
	void set_simulation_precision(const int64_t simulation_precision);
	int64_t get_simulation_precision();
	void set_total_mass(const double mass);
	double get_total_mass();
	void set_linear_stiffness(const double linear_stiffness);
	double get_linear_stiffness();
	void set_areaAngular_stiffness(const double areaAngular_stiffness);
	double get_areaAngular_stiffness();
	void set_volume_stiffness(const double volume_stiffness);
	double get_volume_stiffness();
	void set_pressure_coefficient(const double pressure_coefficient);
	double get_pressure_coefficient();
	void set_pose_matching_coefficient(const double pose_matching_coefficient);
	double get_pose_matching_coefficient();
	void set_damping_coefficient(const double damping_coefficient);
	double get_damping_coefficient();
	void set_drag_coefficient(const double drag_coefficient);
	double get_drag_coefficient();
	void set_ray_pickable(const bool ray_pickable);
	bool is_ray_pickable() const;

};

}

#endif