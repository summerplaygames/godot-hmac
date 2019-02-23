#include "ViewportTexture.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ViewportTexture *ViewportTexture::_new()
{
	return (ViewportTexture *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ViewportTexture")());
}
void ViewportTexture::set_viewport_path_in_scene(const NodePath path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ViewportTexture", "set_viewport_path_in_scene");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, path);
}

NodePath ViewportTexture::get_viewport_path_in_scene() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ViewportTexture", "get_viewport_path_in_scene");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

}