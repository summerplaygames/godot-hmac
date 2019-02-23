#include "CSGMesh.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Mesh.hpp"


namespace godot {


CSGMesh *CSGMesh::_new()
{
	return (CSGMesh *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CSGMesh")());
}
void CSGMesh::set_mesh(const Ref<Mesh> mesh) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGMesh", "set_mesh");
	}
	___godot_icall_void_Object(mb, (const Object *) this, mesh.ptr());
}

Ref<Mesh> CSGMesh::get_mesh() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGMesh", "get_mesh");
	}
	return Ref<Mesh>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CSGMesh::_mesh_changed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGMesh", "_mesh_changed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}