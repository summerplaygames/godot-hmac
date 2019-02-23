#ifndef GODOT_CPP_PRIMITIVEMESH_HPP
#define GODOT_CPP_PRIMITIVEMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Mesh.hpp"
namespace godot {

class Material;

class PrimitiveMesh : public Mesh {
public:

	static inline const char *___get_class_name() { return (const char *) "PrimitiveMesh"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _update() const;
	void set_material(const Ref<Material> material);
	Ref<Material> get_material() const;
	Array get_mesh_arrays() const;
	void set_custom_aabb(const AABB aabb);
	AABB get_custom_aabb() const;
	void set_flip_faces(const bool flip_faces);
	bool get_flip_faces() const;

};

}

#endif