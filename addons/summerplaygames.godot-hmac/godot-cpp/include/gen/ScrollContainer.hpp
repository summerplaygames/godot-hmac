#ifndef GODOT_CPP_SCROLLCONTAINER_HPP
#define GODOT_CPP_SCROLLCONTAINER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Container.hpp"
namespace godot {

class InputEvent;
class HScrollBar;
class VScrollBar;

class ScrollContainer : public Container {
public:

	static inline const char *___get_class_name() { return (const char *) "ScrollContainer"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ScrollContainer *_new();

	// methods
	void _scroll_moved(const double arg0);
	void _gui_input(const Ref<InputEvent> arg0);
	void set_enable_h_scroll(const bool enable);
	bool is_h_scroll_enabled() const;
	void set_enable_v_scroll(const bool enable);
	bool is_v_scroll_enabled() const;
	void _update_scrollbar_position();
	void set_h_scroll(const int64_t value);
	int64_t get_h_scroll() const;
	void set_v_scroll(const int64_t value);
	int64_t get_v_scroll() const;
	void set_deadzone(const int64_t deadzone);
	int64_t get_deadzone() const;
	HScrollBar *get_h_scrollbar();
	VScrollBar *get_v_scrollbar();

};

}

#endif