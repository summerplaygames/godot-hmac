#ifndef GODOT_CPP_PHYSICSMATERIAL_HPP
#define GODOT_CPP_PHYSICSMATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class PhysicsMaterial : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "PhysicsMaterial"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static PhysicsMaterial *_new();

	// methods
	void set_friction(const double friction);
	double get_friction() const;
	void set_rough(const bool rough);
	bool is_rough() const;
	void set_bounce(const double bounce);
	double get_bounce() const;
	void set_absorbent(const bool absorbent);
	bool is_absorbent() const;

};

}

#endif