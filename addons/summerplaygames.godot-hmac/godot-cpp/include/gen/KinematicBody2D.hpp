#ifndef GODOT_CPP_KINEMATICBODY2D_HPP
#define GODOT_CPP_KINEMATICBODY2D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "PhysicsBody2D.hpp"
namespace godot {

class KinematicCollision2D;
class Object;

class KinematicBody2D : public PhysicsBody2D {
public:

	static inline const char *___get_class_name() { return (const char *) "KinematicBody2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static KinematicBody2D *_new();

	// methods
	Ref<KinematicCollision2D> move_and_collide(const Vector2 rel_vec, const bool infinite_inertia = true, const bool exclude_raycast_shapes = true, const bool test_only = false);
	Vector2 move_and_slide(const Vector2 linear_velocity, const Vector2 floor_normal = Vector2(0, 0), const bool stop_on_slope = false, const int64_t max_slides = 4, const double floor_max_angle = 0.785398, const bool infinite_inertia = true);
	Vector2 move_and_slide_with_snap(const Vector2 linear_velocity, const Vector2 snap, const Vector2 floor_normal = Vector2(0, 0), const bool stop_on_slope = false, const int64_t max_slides = 4, const double floor_max_angle = 0.785398, const bool infinite_inertia = true);
	bool test_move(const Transform2D from, const Vector2 rel_vec, const bool infinite_inertia = true);
	bool is_on_floor() const;
	bool is_on_ceiling() const;
	bool is_on_wall() const;
	Vector2 get_floor_velocity() const;
	void set_safe_margin(const double pixels);
	double get_safe_margin() const;
	int64_t get_slide_count() const;
	Ref<KinematicCollision2D> get_slide_collision(const int64_t slide_idx);
	void set_sync_to_physics(const bool enable);
	bool is_sync_to_physics_enabled() const;
	void _direct_state_changed(const Object *arg0);

};

}

#endif