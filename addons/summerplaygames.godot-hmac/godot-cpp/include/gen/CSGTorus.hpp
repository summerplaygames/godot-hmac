#ifndef GODOT_CPP_CSGTORUS_HPP
#define GODOT_CPP_CSGTORUS_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "CSGPrimitive.hpp"
namespace godot {

class Material;

class CSGTorus : public CSGPrimitive {
public:

	static inline const char *___get_class_name() { return (const char *) "CSGTorus"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CSGTorus *_new();

	// methods
	void set_inner_radius(const double radius);
	double get_inner_radius() const;
	void set_outer_radius(const double radius);
	double get_outer_radius() const;
	void set_sides(const int64_t sides);
	int64_t get_sides() const;
	void set_ring_sides(const int64_t sides);
	int64_t get_ring_sides() const;
	void set_material(const Ref<Material> material);
	Ref<Material> get_material() const;
	void set_smooth_faces(const bool smooth_faces);
	bool get_smooth_faces() const;

};

}

#endif