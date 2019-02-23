#include "ScrollContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "InputEvent.hpp"
#include "HScrollBar.hpp"
#include "VScrollBar.hpp"


namespace godot {


ScrollContainer *ScrollContainer::_new()
{
	return (ScrollContainer *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"ScrollContainer")());
}
void ScrollContainer::_scroll_moved(const double arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "_scroll_moved");
	}
	___godot_icall_void_float(mb, (const Object *) this, arg0);
}

void ScrollContainer::_gui_input(const Ref<InputEvent> arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "_gui_input");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0.ptr());
}

void ScrollContainer::set_enable_h_scroll(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "set_enable_h_scroll");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool ScrollContainer::is_h_scroll_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "is_h_scroll_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void ScrollContainer::set_enable_v_scroll(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "set_enable_v_scroll");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

bool ScrollContainer::is_v_scroll_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "is_v_scroll_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void ScrollContainer::_update_scrollbar_position() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "_update_scrollbar_position");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void ScrollContainer::set_h_scroll(const int64_t value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "set_h_scroll");
	}
	___godot_icall_void_int(mb, (const Object *) this, value);
}

int64_t ScrollContainer::get_h_scroll() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "get_h_scroll");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void ScrollContainer::set_v_scroll(const int64_t value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "set_v_scroll");
	}
	___godot_icall_void_int(mb, (const Object *) this, value);
}

int64_t ScrollContainer::get_v_scroll() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "get_v_scroll");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void ScrollContainer::set_deadzone(const int64_t deadzone) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "set_deadzone");
	}
	___godot_icall_void_int(mb, (const Object *) this, deadzone);
}

int64_t ScrollContainer::get_deadzone() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "get_deadzone");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

HScrollBar *ScrollContainer::get_h_scrollbar() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "get_h_scrollbar");
	}
	return (HScrollBar *) ___godot_icall_Object(mb, (const Object *) this);
}

VScrollBar *ScrollContainer::get_v_scrollbar() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollContainer", "get_v_scrollbar");
	}
	return (VScrollBar *) ___godot_icall_Object(mb, (const Object *) this);
}

}