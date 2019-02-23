#ifndef GODOT_CPP_AUDIOEFFECTRECORD_HPP
#define GODOT_CPP_AUDIOEFFECTRECORD_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "AudioStreamSample.hpp"

#include "AudioEffect.hpp"
namespace godot {

class AudioStreamSample;

class AudioEffectRecord : public AudioEffect {
public:

	static inline const char *___get_class_name() { return (const char *) "AudioEffectRecord"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AudioEffectRecord *_new();

	// methods
	void set_recording_active(const bool record);
	bool is_recording_active() const;
	void set_format(const int64_t format);
	AudioStreamSample::Format get_format() const;
	Ref<AudioStreamSample> get_recording() const;

};

}

#endif