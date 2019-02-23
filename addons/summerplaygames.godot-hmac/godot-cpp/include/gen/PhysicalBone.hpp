#ifndef GODOT_CPP_PHYSICALBONE_HPP
#define GODOT_CPP_PHYSICALBONE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "PhysicalBone.hpp"

#include "PhysicsBody.hpp"
namespace godot {

class Object;

class PhysicalBone : public PhysicsBody {
public:

	static inline const char *___get_class_name() { return (const char *) "PhysicalBone"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum JointType {
		JOINT_TYPE_NONE = 0,
		JOINT_TYPE_PIN = 1,
		JOINT_TYPE_CONE = 2,
		JOINT_TYPE_HINGE = 3,
		JOINT_TYPE_SLIDER = 4,
		JOINT_TYPE_6DOF = 5,
	};

	// constants


	static PhysicalBone *_new();

	// methods
	void _direct_state_changed(const Object *arg0);
	void set_joint_type(const int64_t joint_type);
	PhysicalBone::JointType get_joint_type() const;
	void set_joint_offset(const Transform offset);
	Transform get_joint_offset() const;
	void set_body_offset(const Transform offset);
	Transform get_body_offset() const;
	bool is_static_body();
	bool get_simulate_physics();
	bool is_simulating_physics();
	int64_t get_bone_id() const;
	void set_mass(const double mass);
	double get_mass() const;
	void set_weight(const double weight);
	double get_weight() const;
	void set_friction(const double friction);
	double get_friction() const;
	void set_bounce(const double bounce);
	double get_bounce() const;
	void set_gravity_scale(const double gravity_scale);
	double get_gravity_scale() const;

};

}

#endif