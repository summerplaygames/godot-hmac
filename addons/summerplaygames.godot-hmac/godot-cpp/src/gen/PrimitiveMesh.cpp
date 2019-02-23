#include "PrimitiveMesh.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"


namespace godot {


void PrimitiveMesh::_update() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "_update");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void PrimitiveMesh::set_material(const Ref<Material> material) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "set_material");
	}
	___godot_icall_void_Object(mb, (const Object *) this, material.ptr());
}

Ref<Material> PrimitiveMesh::get_material() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "get_material");
	}
	return Ref<Material>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

Array PrimitiveMesh::get_mesh_arrays() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "get_mesh_arrays");
	}
	return ___godot_icall_Array(mb, (const Object *) this);
}

void PrimitiveMesh::set_custom_aabb(const AABB aabb) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "set_custom_aabb");
	}
	___godot_icall_void_AABB(mb, (const Object *) this, aabb);
}

AABB PrimitiveMesh::get_custom_aabb() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "get_custom_aabb");
	}
	return ___godot_icall_AABB(mb, (const Object *) this);
}

void PrimitiveMesh::set_flip_faces(const bool flip_faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "set_flip_faces");
	}
	___godot_icall_void_bool(mb, (const Object *) this, flip_faces);
}

bool PrimitiveMesh::get_flip_faces() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("PrimitiveMesh", "get_flip_faces");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}