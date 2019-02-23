#ifndef GODOT_CPP_ANIMATIONTRACKEDITPLUGIN_HPP
#define GODOT_CPP_ANIMATIONTRACKEDITPLUGIN_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {


class AnimationTrackEditPlugin : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationTrackEditPlugin"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationTrackEditPlugin *_new();

	// methods

};

}

#endif