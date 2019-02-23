#ifndef GODOT_CPP_OPENSIMPLEXNOISE_HPP
#define GODOT_CPP_OPENSIMPLEXNOISE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {

class Image;

class OpenSimplexNoise : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "OpenSimplexNoise"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static OpenSimplexNoise *_new();

	// methods
	int64_t get_seed();
	void set_seed(const int64_t seed);
	void set_octaves(const int64_t octave_count);
	int64_t get_octaves() const;
	void set_period(const double period);
	double get_period() const;
	void set_persistence(const double persistence);
	double get_persistence() const;
	void set_lacunarity(const double lacunarity);
	double get_lacunarity() const;
	Ref<Image> get_image(const int64_t width, const int64_t height);
	Ref<Image> get_seamless_image(const int64_t size);
	double get_noise_2d(const double x, const double y);
	double get_noise_3d(const double x, const double y, const double z);
	double get_noise_4d(const double x, const double y, const double z, const double w);
	double get_noise_2dv(const Vector2 pos);
	double get_noise_3dv(const Vector3 pos);

};

}

#endif