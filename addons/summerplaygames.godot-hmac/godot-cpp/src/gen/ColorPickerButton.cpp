#include "ColorPickerButton.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "ColorPicker.hpp"
#include "PopupPanel.hpp"


namespace godot {


ColorPickerButton *ColorPickerButton::_new()
{
	return (ColorPickerButton *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ColorPickerButton")());
}
void ColorPickerButton::set_pick_color(const Color color) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "set_pick_color");
	}
	___godot_icall_void_Color(mb, (const Object *) this, color);
}

Color ColorPickerButton::get_pick_color() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "get_pick_color");
	}
	return ___godot_icall_Color(mb, (const Object *) this);
}

ColorPicker *ColorPickerButton::get_picker() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "get_picker");
	}
	return (ColorPicker *) ___godot_icall_Object(mb, (const Object *) this);
}

PopupPanel *ColorPickerButton::get_popup() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "get_popup");
	}
	return (PopupPanel *) ___godot_icall_Object(mb, (const Object *) this);
}

void ColorPickerButton::set_edit_alpha(const bool show) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "set_edit_alpha");
	}
	___godot_icall_void_bool(mb, (const Object *) this, show);
}

bool ColorPickerButton::is_editing_alpha() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "is_editing_alpha");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void ColorPickerButton::_color_changed(const Color arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "_color_changed");
	}
	___godot_icall_void_Color(mb, (const Object *) this, arg0);
}

void ColorPickerButton::_modal_closed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ColorPickerButton", "_modal_closed");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}