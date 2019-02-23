#include "EditorResourceConversionPlugin.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Resource.hpp"


namespace godot {


EditorResourceConversionPlugin *EditorResourceConversionPlugin::_new()
{
	return (EditorResourceConversionPlugin *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorResourceConversionPlugin")());
}
Ref<Resource> EditorResourceConversionPlugin::_convert(const Ref<Resource> resource) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourceConversionPlugin", "_convert");
	}
	return Ref<Resource>::__internal_constructor(___godot_icall_Object_Object(mb, (const Object *) this, resource.ptr()));
}

String EditorResourceConversionPlugin::_converts_to() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourceConversionPlugin", "_converts_to");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}