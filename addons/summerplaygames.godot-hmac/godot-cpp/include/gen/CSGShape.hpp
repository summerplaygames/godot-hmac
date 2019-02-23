#ifndef GODOT_CPP_CSGSHAPE_HPP
#define GODOT_CPP_CSGSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "CSGShape.hpp"

#include "VisualInstance.hpp"
namespace godot {


class CSGShape : public VisualInstance {
public:

	static inline const char *___get_class_name() { return (const char *) "CSGShape"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Operation {
		OPERATION_UNION = 0,
		OPERATION_INTERSECTION = 1,
		OPERATION_SUBTRACTION = 2,
	};

	// constants

	// methods
	void _update_shape();
	bool is_root_shape() const;
	void set_operation(const int64_t operation);
	CSGShape::Operation get_operation() const;
	void set_use_collision(const bool operation);
	bool is_using_collision() const;
	void set_snap(const double snap);
	double get_snap() const;
	void set_calculate_tangents(const bool enabled);
	bool is_calculating_tangents() const;

};

}

#endif