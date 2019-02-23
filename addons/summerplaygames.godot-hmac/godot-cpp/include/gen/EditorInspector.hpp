#ifndef GODOT_CPP_EDITORINSPECTOR_HPP
#define GODOT_CPP_EDITORINSPECTOR_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "ScrollContainer.hpp"
namespace godot {

class Object;
class Resource;

class EditorInspector : public ScrollContainer {
public:

	static inline const char *___get_class_name() { return (const char *) "EditorInspector"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static EditorInspector *_new();

	// methods
	void _property_changed(const String arg0, const Variant arg1, const bool arg2 = false);
	void _multiple_properties_changed(const PoolStringArray arg0, const Array arg1);
	void _property_changed_update_all(const String arg0, const Variant arg1);
	void _edit_request_change(const Object *arg0, const String arg1);
	void _node_removed(const Object *arg0);
	void _filter_changed(const String arg0);
	void _property_keyed(const String arg0, const bool arg1);
	void _property_keyed_with_value(const String arg0, const Variant arg1, const bool arg2);
	void _property_checked(const String arg0, const bool arg1);
	void _property_selected(const String arg0, const int64_t arg1);
	void _resource_selected(const String arg0, const Ref<Resource> arg1);
	void _object_id_selected(const String arg0, const int64_t arg1);
	void _vscroll_changed(const double arg0);
	void refresh();

};

}

#endif