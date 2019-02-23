#ifndef GODOT_CPP_NOISETEXTURE_HPP
#define GODOT_CPP_NOISETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Texture.hpp"
namespace godot {

class OpenSimplexNoise;
class Image;

class NoiseTexture : public Texture {
public:

	static inline const char *___get_class_name() { return (const char *) "NoiseTexture"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static NoiseTexture *_new();

	// methods
	void set_width(const int64_t width);
	void set_height(const int64_t height);
	void set_noise(const Ref<OpenSimplexNoise> noise);
	Ref<OpenSimplexNoise> get_noise();
	void set_seamless(const bool seamless);
	bool get_seamless();
	void set_as_normalmap(const bool as_normalmap);
	bool is_normalmap();
	void _update_texture();
	Ref<Image> _generate_texture();
	void _thread_done(const Ref<Image> image);

};

}

#endif