#ifndef GODOT_CPP_CSGMESH_HPP
#define GODOT_CPP_CSGMESH_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "CSGPrimitive.hpp"
namespace godot {

class Mesh;

class CSGMesh : public CSGPrimitive {
public:

	static inline const char *___get_class_name() { return (const char *) "CSGMesh"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CSGMesh *_new();

	// methods
	void set_mesh(const Ref<Mesh> mesh);
	Ref<Mesh> get_mesh();
	void _mesh_changed();

};

}

#endif