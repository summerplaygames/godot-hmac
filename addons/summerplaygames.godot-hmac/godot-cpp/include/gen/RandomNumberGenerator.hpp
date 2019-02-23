#ifndef GODOT_CPP_RANDOMNUMBERGENERATOR_HPP
#define GODOT_CPP_RANDOMNUMBERGENERATOR_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Reference.hpp"
namespace godot {


class RandomNumberGenerator : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "RandomNumberGenerator"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static RandomNumberGenerator *_new();

	// methods
	void set_seed(const int64_t seed);
	int64_t get_seed();
	int64_t randi();
	double randf();
	double rand_range(const double from, const double to);
	void randomize();

};

}

#endif