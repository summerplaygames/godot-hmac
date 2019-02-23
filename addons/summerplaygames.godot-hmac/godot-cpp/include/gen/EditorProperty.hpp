#ifndef GODOT_CPP_EDITORPROPERTY_HPP
#define GODOT_CPP_EDITORPROPERTY_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Container.hpp"
namespace godot {

class Object;
class InputEvent;

class EditorProperty : public Container {
public:

	static inline const char *___get_class_name() { return (const char *) "EditorProperty"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static EditorProperty *_new();

	// methods
	void update_property();
	void set_label(const String text);
	String get_label() const;
	void set_read_only(const bool read_only);
	bool is_read_only() const;
	void set_checkable(const bool checkable);
	bool is_checkable() const;
	void set_checked(const bool checked);
	bool is_checked() const;
	void set_draw_red(const bool draw_red);
	bool is_draw_red() const;
	void set_keying(const bool keying);
	bool is_keying() const;
	String get_edited_property();
	Object *get_edited_object();
	void _gui_input(const Ref<InputEvent> arg0);
	void _focusable_focused(const int64_t arg0);
	String get_tooltip_text() const;

};

}

#endif