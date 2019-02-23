#ifndef GODOT_CPP_EDITORINSPECTORPLUGIN_HPP
#define GODOT_CPP_EDITORINSPECTORPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class Object;

class EditorInspectorPlugin : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "EditorInspectorPlugin"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static EditorInspectorPlugin *_new();

	// methods
	bool can_handle(const Object *object);
	void parse_begin(const Object *object);
	void parse_category(const Object *object, const String category);
	bool parse_property(const Object *object, const int64_t type, const String path, const int64_t hint, const String hint_text, const int64_t usage);
	void parse_end();
	void add_custom_control(const Object *control);
	void add_property_editor(const String property, const Object *editor);
	void add_property_editor_for_multiple_properties(const String label, const PoolStringArray properties, const Object *editor);

};

}

#endif