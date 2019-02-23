#ifndef GODOT_CPP_ANIMATEDTEXTURE_HPP
#define GODOT_CPP_ANIMATEDTEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Texture.hpp"
namespace godot {

class Texture;

class AnimatedTexture : public Texture {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimatedTexture"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimatedTexture *_new();

	// methods
	void set_frames(const int64_t frames);
	int64_t get_frames() const;
	void set_fps(const double fps);
	double get_fps() const;
	void set_frame_texture(const int64_t frame, const Ref<Texture> texture);
	Ref<Texture> get_frame_texture(const int64_t frame) const;
	void set_frame_delay(const int64_t frame, const double delay);
	double get_frame_delay(const int64_t frame) const;
	void _update_proxy();

};

}

#endif