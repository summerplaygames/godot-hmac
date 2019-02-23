#ifndef GODOT_CPP_RESOURCEINTERACTIVELOADER_HPP
#define GODOT_CPP_RESOURCEINTERACTIVELOADER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {

class Resource;

class ResourceInteractiveLoader : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "ResourceInteractiveLoader"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	Ref<Resource> get_resource();
	Error poll();
	Error wait();
	int64_t get_stage() const;
	int64_t get_stage_count() const;

};

}

#endif