#include "EditorInspectorPlugin.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"


namespace godot {


EditorInspectorPlugin *EditorInspectorPlugin::_new()
{
	return (EditorInspectorPlugin *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorInspectorPlugin")());
}
bool EditorInspectorPlugin::can_handle(const Object *object) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "can_handle");
	}
	return ___godot_icall_bool_Object(mb, (const Object *) this, object);
}

void EditorInspectorPlugin::parse_begin(const Object *object) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_begin");
	}
	___godot_icall_void_Object(mb, (const Object *) this, object);
}

void EditorInspectorPlugin::parse_category(const Object *object, const String category) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_category");
	}
	___godot_icall_void_Object_String(mb, (const Object *) this, object, category);
}

bool EditorInspectorPlugin::parse_property(const Object *object, const int64_t type, const String path, const int64_t hint, const String hint_text, const int64_t usage) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_property");
	}
	return ___godot_icall_bool_Object_int_String_int_String_int(mb, (const Object *) this, object, type, path, hint, hint_text, usage);
}

void EditorInspectorPlugin::parse_end() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "parse_end");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void EditorInspectorPlugin::add_custom_control(const Object *control) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "add_custom_control");
	}
	___godot_icall_void_Object(mb, (const Object *) this, control);
}

void EditorInspectorPlugin::add_property_editor(const String property, const Object *editor) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "add_property_editor");
	}
	___godot_icall_void_String_Object(mb, (const Object *) this, property, editor);
}

void EditorInspectorPlugin::add_property_editor_for_multiple_properties(const String label, const PoolStringArray properties, const Object *editor) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorInspectorPlugin", "add_property_editor_for_multiple_properties");
	}
	___godot_icall_void_String_PoolStringArray_Object(mb, (const Object *) this, label, properties, editor);
}

}