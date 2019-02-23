#ifndef GODOT_CPP_NATIVESCRIPT_HPP
#define GODOT_CPP_NATIVESCRIPT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Script.hpp"
namespace godot {

class GDNativeLibrary;
class Object;

class NativeScript : public Script {
public:

	static inline const char *___get_class_name() { return (const char *) "NativeScript"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static NativeScript *_new();

	// methods
	void set_class_name(const String class_name);
	String get_class_name() const;
	void set_library(const Ref<GDNativeLibrary> library);
	Ref<GDNativeLibrary> get_library() const;
	void set_script_class_name(const String class_name);
	String get_script_class_name() const;
	void set_script_class_icon_path(const String icon_path);
	String get_script_class_icon_path() const;
	String get_class_documentation() const;
	String get_method_documentation(const String method) const;
	String get_signal_documentation(const String signal_name) const;
	String get_property_documentation(const String path) const;
	Object *new_(const Array& __var_args = Array());
	template <class... Args> Object *new_(Args... args){
		return new_(Array::make(args...));
	}

};

}

#endif