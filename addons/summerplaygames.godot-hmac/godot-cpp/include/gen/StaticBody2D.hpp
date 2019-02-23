#ifndef GODOT_CPP_STATICBODY2D_HPP
#define GODOT_CPP_STATICBODY2D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "PhysicsBody2D.hpp"
namespace godot {

class PhysicsMaterial;

class StaticBody2D : public PhysicsBody2D {
public:

	static inline const char *___get_class_name() { return (const char *) "StaticBody2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static StaticBody2D *_new();

	// methods
	void set_constant_linear_velocity(const Vector2 vel);
	void set_constant_angular_velocity(const double vel);
	Vector2 get_constant_linear_velocity() const;
	double get_constant_angular_velocity() const;
	void set_friction(const double friction);
	double get_friction() const;
	void set_bounce(const double bounce);
	double get_bounce() const;
	void set_physics_material_override(const Ref<PhysicsMaterial> physics_material_override);
	Ref<PhysicsMaterial> get_physics_material_override() const;
	void _reload_physics_characteristics();

};

}

#endif