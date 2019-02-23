#ifndef GODOT_CPP_RIGIDBODY_HPP
#define GODOT_CPP_RIGIDBODY_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "RigidBody.hpp"

#include "PhysicsBody.hpp"
namespace godot {

class PhysicsDirectBodyState;
class PhysicsMaterial;
class Object;

class RigidBody : public PhysicsBody {
public:

	static inline const char *___get_class_name() { return (const char *) "RigidBody"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_RIGID = 0,
		MODE_STATIC = 1,
		MODE_CHARACTER = 2,
		MODE_KINEMATIC = 3,
	};

	// constants


	static RigidBody *_new();

	// methods
	void _integrate_forces(const PhysicsDirectBodyState *state);
	void set_mode(const int64_t mode);
	RigidBody::Mode get_mode() const;
	void set_mass(const double mass);
	double get_mass() const;
	void set_weight(const double weight);
	double get_weight() const;
	void set_friction(const double friction);
	double get_friction() const;
	void set_bounce(const double bounce);
	double get_bounce() const;
	void set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override);
	Ref<PhysicsMaterial> get_physics_material_override() const;
	void _reload_physics_characteristics();
	void set_linear_velocity(const Vector3 linear_velocity);
	Vector3 get_linear_velocity() const;
	void set_angular_velocity(const Vector3 angular_velocity);
	Vector3 get_angular_velocity() const;
	void set_gravity_scale(const double gravity_scale);
	double get_gravity_scale() const;
	void set_linear_damp(const double linear_damp);
	double get_linear_damp() const;
	void set_angular_damp(const double angular_damp);
	double get_angular_damp() const;
	void set_max_contacts_reported(const int64_t amount);
	int64_t get_max_contacts_reported() const;
	void set_use_custom_integrator(const bool enable);
	bool is_using_custom_integrator();
	void set_contact_monitor(const bool enabled);
	bool is_contact_monitor_enabled() const;
	void set_use_continuous_collision_detection(const bool enable);
	bool is_using_continuous_collision_detection() const;
	void set_axis_velocity(const Vector3 axis_velocity);
	void add_central_force(const Vector3 force);
	void add_force(const Vector3 force, const Vector3 position);
	void add_torque(const Vector3 torque);
	void apply_central_impulse(const Vector3 impulse);
	void apply_impulse(const Vector3 position, const Vector3 impulse);
	void apply_torque_impulse(const Vector3 impulse);
	void set_sleeping(const bool sleeping);
	bool is_sleeping() const;
	void set_can_sleep(const bool able_to_sleep);
	bool is_able_to_sleep() const;
	void _direct_state_changed(const Object *arg0);
	void _body_enter_tree(const int64_t arg0);
	void _body_exit_tree(const int64_t arg0);
	void set_axis_lock(const int64_t axis, const bool lock);
	bool get_axis_lock(const int64_t axis) const;
	Array get_colliding_bodies() const;

};

}

#endif