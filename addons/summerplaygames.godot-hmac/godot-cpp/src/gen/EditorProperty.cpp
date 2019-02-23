#include "EditorProperty.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Object.hpp"
#include "InputEvent.hpp"


namespace godot {


EditorProperty *EditorProperty::_new()
{
	return (EditorProperty *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorProperty")());
}
void EditorProperty::update_property() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "update_property");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void EditorProperty::set_label(const String text) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "set_label");
	}
	___godot_icall_void_String(mb, (const Object *) this, text);
}

String EditorProperty::get_label() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "get_label");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

void EditorProperty::set_read_only(const bool read_only) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "set_read_only");
	}
	___godot_icall_void_bool(mb, (const Object *) this, read_only);
}

bool EditorProperty::is_read_only() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "is_read_only");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void EditorProperty::set_checkable(const bool checkable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "set_checkable");
	}
	___godot_icall_void_bool(mb, (const Object *) this, checkable);
}

bool EditorProperty::is_checkable() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "is_checkable");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void EditorProperty::set_checked(const bool checked) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "set_checked");
	}
	___godot_icall_void_bool(mb, (const Object *) this, checked);
}

bool EditorProperty::is_checked() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "is_checked");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void EditorProperty::set_draw_red(const bool draw_red) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "set_draw_red");
	}
	___godot_icall_void_bool(mb, (const Object *) this, draw_red);
}

bool EditorProperty::is_draw_red() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "is_draw_red");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void EditorProperty::set_keying(const bool keying) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "set_keying");
	}
	___godot_icall_void_bool(mb, (const Object *) this, keying);
}

bool EditorProperty::is_keying() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "is_keying");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

String EditorProperty::get_edited_property() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "get_edited_property");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

Object *EditorProperty::get_edited_object() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "get_edited_object");
	}
	return (Object *) ___godot_icall_Object(mb, (const Object *) this);
}

void EditorProperty::_gui_input(const Ref<InputEvent> arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "_gui_input");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0.ptr());
}

void EditorProperty::_focusable_focused(const int64_t arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "_focusable_focused");
	}
	___godot_icall_void_int(mb, (const Object *) this, arg0);
}

String EditorProperty::get_tooltip_text() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorProperty", "get_tooltip_text");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}