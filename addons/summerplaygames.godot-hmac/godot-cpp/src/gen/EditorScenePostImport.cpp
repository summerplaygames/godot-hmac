#include "EditorScenePostImport.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


EditorScenePostImport *EditorScenePostImport::_new()
{
	return (EditorScenePostImport *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorScenePostImport")());
}
Object *EditorScenePostImport::post_import(const Object *scene) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorScenePostImport", "post_import");
	}
	return (Object *) ___godot_icall_Object_Object(mb, (const Object *) this, scene);
}

String EditorScenePostImport::get_source_folder() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorScenePostImport", "get_source_folder");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

String EditorScenePostImport::get_source_file() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorScenePostImport", "get_source_file");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}