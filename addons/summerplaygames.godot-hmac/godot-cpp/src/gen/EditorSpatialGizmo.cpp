#include "EditorSpatialGizmo.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Camera.hpp"
#include "Material.hpp"
#include "ArrayMesh.hpp"
#include "TriangleMesh.hpp"
#include "Object.hpp"


namespace godot {


EditorSpatialGizmo *EditorSpatialGizmo::_new()
{
	return (EditorSpatialGizmo *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorSpatialGizmo")());
}
void EditorSpatialGizmo::redraw() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "redraw");
	}
	___godot_icall_void(mb, (const Object *) this);
}

String EditorSpatialGizmo::get_handle_name(const int64_t index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "get_handle_name");
	}
	return ___godot_icall_String_int(mb, (const Object *) this, index);
}

Variant EditorSpatialGizmo::get_handle_value(const int64_t index) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "get_handle_value");
	}
	return ___godot_icall_Variant_int(mb, (const Object *) this, index);
}

void EditorSpatialGizmo::set_handle(const int64_t index, const Camera *camera, const Vector2 point) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "set_handle");
	}
	___godot_icall_void_int_Object_Vector2(mb, (const Object *) this, index, camera, point);
}

void EditorSpatialGizmo::commit_handle(const int64_t index, const Variant restore, const bool cancel) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "commit_handle");
	}
	___godot_icall_void_int_Variant_bool(mb, (const Object *) this, index, restore, cancel);
}

void EditorSpatialGizmo::add_lines(const PoolVector3Array lines, const Ref<Material> material, const bool billboard) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_lines");
	}
	___godot_icall_void_PoolVector3Array_Object_bool(mb, (const Object *) this, lines, material.ptr(), billboard);
}

void EditorSpatialGizmo::add_mesh(const Ref<ArrayMesh> mesh, const bool billboard, const RID skeleton) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_mesh");
	}
	___godot_icall_void_Object_bool_RID(mb, (const Object *) this, mesh.ptr(), billboard, skeleton);
}

void EditorSpatialGizmo::add_collision_segments(const PoolVector3Array segments) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_collision_segments");
	}
	___godot_icall_void_PoolVector3Array(mb, (const Object *) this, segments);
}

void EditorSpatialGizmo::add_collision_triangles(const Ref<TriangleMesh> triangles) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_collision_triangles");
	}
	___godot_icall_void_Object(mb, (const Object *) this, triangles.ptr());
}

void EditorSpatialGizmo::add_unscaled_billboard(const Ref<Material> material, const double default_scale) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_unscaled_billboard");
	}
	___godot_icall_void_Object_float(mb, (const Object *) this, material.ptr(), default_scale);
}

void EditorSpatialGizmo::add_handles(const PoolVector3Array handles, const Ref<Material> material, const bool billboard, const bool secondary) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "add_handles");
	}
	___godot_icall_void_PoolVector3Array_Object_bool_bool(mb, (const Object *) this, handles, material.ptr(), billboard, secondary);
}

void EditorSpatialGizmo::set_spatial_node(const Object *node) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "set_spatial_node");
	}
	___godot_icall_void_Object(mb, (const Object *) this, node);
}

void EditorSpatialGizmo::clear() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "clear");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void EditorSpatialGizmo::set_hidden(const bool hidden) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorSpatialGizmo", "set_hidden");
	}
	___godot_icall_void_bool(mb, (const Object *) this, hidden);
}

}