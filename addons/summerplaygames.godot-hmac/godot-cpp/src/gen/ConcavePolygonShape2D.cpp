#include "ConcavePolygonShape2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ConcavePolygonShape2D *ConcavePolygonShape2D::_new()
{
	return (ConcavePolygonShape2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ConcavePolygonShape2D")());
}
void ConcavePolygonShape2D::set_segments(const PoolVector2Array segments) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ConcavePolygonShape2D", "set_segments");
	}
	___godot_icall_void_PoolVector2Array(mb, (const Object *) this, segments);
}

PoolVector2Array ConcavePolygonShape2D::get_segments() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ConcavePolygonShape2D", "get_segments");
	}
	return ___godot_icall_PoolVector2Array(mb, (const Object *) this);
}

}