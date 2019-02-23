#ifndef GODOT_CPP_AUDIOEFFECTFILTER_HPP
#define GODOT_CPP_AUDIOEFFECTFILTER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "AudioEffectFilter.hpp"

#include "AudioEffect.hpp"
namespace godot {


class AudioEffectFilter : public AudioEffect {
public:

	static inline const char *___get_class_name() { return (const char *) "AudioEffectFilter"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum FilterDB {
		FILTER_6DB = 0,
		FILTER_12DB = 1,
		FILTER_18DB = 2,
		FILTER_24DB = 3,
	};

	// constants


	static AudioEffectFilter *_new();

	// methods
	void set_cutoff(const double freq);
	double get_cutoff() const;
	void set_resonance(const double amount);
	double get_resonance() const;
	void set_gain(const double amount);
	double get_gain() const;
	void set_db(const int64_t amount);
	AudioEffectFilter::FilterDB get_db() const;

};

}

#endif