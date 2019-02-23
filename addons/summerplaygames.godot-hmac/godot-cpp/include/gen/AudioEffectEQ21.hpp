#ifndef GODOT_CPP_AUDIOEFFECTEQ21_HPP
#define GODOT_CPP_AUDIOEFFECTEQ21_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AudioEffectEQ.hpp"
namespace godot {


class AudioEffectEQ21 : public AudioEffectEQ {
public:

	static inline const char *___get_class_name() { return (const char *) "AudioEffectEQ21"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AudioEffectEQ21 *_new();

	// methods

};

}

#endif