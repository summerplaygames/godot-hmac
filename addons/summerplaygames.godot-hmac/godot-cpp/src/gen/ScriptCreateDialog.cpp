#include "ScriptCreateDialog.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


ScriptCreateDialog *ScriptCreateDialog::_new()
{
	return (ScriptCreateDialog *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ScriptCreateDialog")());
}
void ScriptCreateDialog::_class_name_changed(const String arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_class_name_changed");
	}
	___godot_icall_void_String(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::_parent_name_changed(const String arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_parent_name_changed");
	}
	___godot_icall_void_String(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::_lang_changed(const int64_t arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_lang_changed");
	}
	___godot_icall_void_int(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::_built_in_pressed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_built_in_pressed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void ScriptCreateDialog::_browse_path(const bool arg0, const bool arg1) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_browse_path");
	}
	___godot_icall_void_bool_bool(mb, (const Object *) this, arg0, arg1);
}

void ScriptCreateDialog::_file_selected(const String arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_file_selected");
	}
	___godot_icall_void_String(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::_path_changed(const String arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_path_changed");
	}
	___godot_icall_void_String(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::_path_entered(const String arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_path_entered");
	}
	___godot_icall_void_String(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::_template_changed(const int64_t arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "_template_changed");
	}
	___godot_icall_void_int(mb, (const Object *) this, arg0);
}

void ScriptCreateDialog::config(const String inherits, const String path, const bool built_in_enabled) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScriptCreateDialog", "config");
	}
	___godot_icall_void_String_String_bool(mb, (const Object *) this, inherits, path, built_in_enabled);
}

}