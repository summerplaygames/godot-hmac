#ifndef GODOT_CPP_CSGSPHERE_HPP
#define GODOT_CPP_CSGSPHERE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "CSGPrimitive.hpp"
namespace godot {

class Material;

class CSGSphere : public CSGPrimitive {
public:

	static inline const char *___get_class_name() { return (const char *) "CSGSphere"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CSGSphere *_new();

	// methods
	void set_radius(const double radius);
	double get_radius() const;
	void set_radial_segments(const int64_t radial_segments);
	int64_t get_radial_segments() const;
	void set_rings(const int64_t rings);
	int64_t get_rings() const;
	void set_smooth_faces(const bool smooth_faces);
	bool get_smooth_faces() const;
	void set_material(const Ref<Material> material);
	Ref<Material> get_material() const;

};

}

#endif