#ifndef GODOT_CPP_VISUALSCRIPTENGINESINGLETON_HPP
#define GODOT_CPP_VISUALSCRIPTENGINESINGLETON_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "VisualScriptNode.hpp"
namespace godot {


class VisualScriptEngineSingleton : public VisualScriptNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualScriptEngineSingleton"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static VisualScriptEngineSingleton *_new();

	// methods
	void set_singleton(const String name);
	String get_singleton();

};

}

#endif