#ifndef GODOT_CPP_SCROLLBAR_HPP
#define GODOT_CPP_SCROLLBAR_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Range.hpp"
namespace godot {

class InputEvent;

class ScrollBar : public Range {
public:

	static inline const char *___get_class_name() { return (const char *) "ScrollBar"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	void _gui_input(const Ref<InputEvent> arg0);
	void set_custom_step(const double step);
	double get_custom_step() const;
	void _drag_node_input(const Ref<InputEvent> arg0);
	void _drag_node_exit();

};

}

#endif