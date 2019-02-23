#include "ScrollBar.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "InputEvent.hpp"


namespace godot {


void ScrollBar::_gui_input(const Ref<InputEvent> arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollBar", "_gui_input");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0.ptr());
}

void ScrollBar::set_custom_step(const double step) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollBar", "set_custom_step");
	}
	___godot_icall_void_float(mb, (const Object *) this, step);
}

double ScrollBar::get_custom_step() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollBar", "get_custom_step");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void ScrollBar::_drag_node_input(const Ref<InputEvent> arg0) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollBar", "_drag_node_input");
	}
	___godot_icall_void_Object(mb, (const Object *) this, arg0.ptr());
}

void ScrollBar::_drag_node_exit() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("ScrollBar", "_drag_node_exit");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}