#include "ConcavePolygonShape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ConcavePolygonShape *ConcavePolygonShape::_new()
{
	return (ConcavePolygonShape *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ConcavePolygonShape")());
}
void ConcavePolygonShape::set_faces(const PoolVector3Array faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ConcavePolygonShape", "set_faces");
	}
	___godot_icall_void_PoolVector3Array(mb, (const Object *) this, faces);
}

PoolVector3Array ConcavePolygonShape::get_faces() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ConcavePolygonShape", "get_faces");
	}
	return ___godot_icall_PoolVector3Array(mb, (const Object *) this);
}

}