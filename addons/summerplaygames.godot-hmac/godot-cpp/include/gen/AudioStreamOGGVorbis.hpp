#ifndef GODOT_CPP_AUDIOSTREAMOGGVORBIS_HPP
#define GODOT_CPP_AUDIOSTREAMOGGVORBIS_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AudioStream.hpp"
namespace godot {


class AudioStreamOGGVorbis : public AudioStream {
public:

	static inline const char *___get_class_name() { return (const char *) "AudioStreamOGGVorbis"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AudioStreamOGGVorbis *_new();

	// methods
	void set_data(const PoolByteArray data);
	PoolByteArray get_data() const;
	void set_loop(const bool enable);
	bool has_loop() const;
	void set_loop_offset(const double seconds);
	double get_loop_offset() const;

};

}

#endif