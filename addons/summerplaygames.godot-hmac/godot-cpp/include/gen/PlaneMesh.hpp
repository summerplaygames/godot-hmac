#ifndef GODOT_CPP_PLANEMESH_HPP
#define GODOT_CPP_PLANEMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "PrimitiveMesh.hpp"
namespace godot {


class PlaneMesh : public PrimitiveMesh {
public:

	static inline const char *___get_class_name() { return (const char *) "PlaneMesh"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static PlaneMesh *_new();

	// methods
	void set_size(const Vector2 size);
	Vector2 get_size() const;
	void set_subdivide_width(const int64_t subdivide);
	int64_t get_subdivide_width() const;
	void set_subdivide_depth(const int64_t subdivide);
	int64_t get_subdivide_depth() const;

};

}

#endif