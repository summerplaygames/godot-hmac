#ifndef GODOT_CPP_ORIENTEDPATHFOLLOW_HPP
#define GODOT_CPP_ORIENTEDPATHFOLLOW_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Spatial.hpp"
namespace godot {


class OrientedPathFollow : public Spatial {
public:

	static inline const char *___get_class_name() { return (const char *) "OrientedPathFollow"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static OrientedPathFollow *_new();

	// methods
	void set_offset(const double offset);
	double get_offset() const;
	void set_h_offset(const double h_offset);
	double get_h_offset() const;
	void set_v_offset(const double v_offset);
	double get_v_offset() const;
	void set_unit_offset(const double unit_offset);
	double get_unit_offset() const;
	void set_cubic_interpolation(const bool enable);
	bool get_cubic_interpolation() const;
	void set_loop(const bool loop);
	bool has_loop() const;

};

}

#endif