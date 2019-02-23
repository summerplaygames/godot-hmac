#include "VisualScriptPreload.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Resource.hpp"


namespace godot {


VisualScriptPreload *VisualScriptPreload::_new()
{
	return (VisualScriptPreload *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptPreload")());
}
void VisualScriptPreload::set_preload(const Ref<Resource> resource) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptPreload", "set_preload");
	}
	___godot_icall_void_Object(mb, (const Object *) this, resource.ptr());
}

Ref<Resource> VisualScriptPreload::get_preload() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptPreload", "get_preload");
	}
	return Ref<Resource>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

}