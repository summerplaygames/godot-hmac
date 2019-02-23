#ifndef GODOT_CPP_CYLINDERSHAPE_HPP
#define GODOT_CPP_CYLINDERSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Shape.hpp"
namespace godot {


class CylinderShape : public Shape {
public:

	static inline const char *___get_class_name() { return (const char *) "CylinderShape"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CylinderShape *_new();

	// methods
	void set_radius(const double radius);
	double get_radius() const;
	void set_height(const double height);
	double get_height() const;

};

}

#endif