#ifndef GODOT_CPP_AUDIOSTREAMSAMPLE_HPP
#define GODOT_CPP_AUDIOSTREAMSAMPLE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "AudioStreamSample.hpp"

#include "AudioStream.hpp"
namespace godot {


class AudioStreamSample : public AudioStream {
public:

	static inline const char *___get_class_name() { return (const char *) "AudioStreamSample"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum LoopMode {
		LOOP_DISABLED = 0,
		LOOP_FORWARD = 1,
		LOOP_PING_PONG = 2,
	};
	enum Format {
		FORMAT_8_BITS = 0,
		FORMAT_16_BITS = 1,
		FORMAT_IMA_ADPCM = 2,
	};

	// constants


	static AudioStreamSample *_new();

	// methods
	void set_data(const PoolByteArray data);
	PoolByteArray get_data() const;
	void set_format(const int64_t format);
	AudioStreamSample::Format get_format() const;
	void set_loop_mode(const int64_t loop_mode);
	AudioStreamSample::LoopMode get_loop_mode() const;
	void set_loop_begin(const int64_t loop_begin);
	int64_t get_loop_begin() const;
	void set_loop_end(const int64_t loop_end);
	int64_t get_loop_end() const;
	void set_mix_rate(const int64_t mix_rate);
	int64_t get_mix_rate() const;
	void set_stereo(const bool stereo);
	bool is_stereo() const;
	void save_to_wav(const String path);

};

}

#endif