#ifndef GODOT_CPP_SCRIPTCREATEDIALOG_HPP
#define GODOT_CPP_SCRIPTCREATEDIALOG_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "ConfirmationDialog.hpp"
namespace godot {


class ScriptCreateDialog : public ConfirmationDialog {
public:

	static inline const char *___get_class_name() { return (const char *) "ScriptCreateDialog"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ScriptCreateDialog *_new();

	// methods
	void _class_name_changed(const String arg0);
	void _parent_name_changed(const String arg0);
	void _lang_changed(const int64_t arg0);
	void _built_in_pressed();
	void _browse_path(const bool arg0, const bool arg1);
	void _file_selected(const String arg0);
	void _path_changed(const String arg0);
	void _path_entered(const String arg0);
	void _template_changed(const int64_t arg0);
	void config(const String inherits, const String path, const bool built_in_enabled = true);

};

}

#endif