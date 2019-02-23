#ifndef GODOT_CPP_VISUALSHADERNODETEXTURE_HPP
#define GODOT_CPP_VISUALSHADERNODETEXTURE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeTexture.hpp"

#include "VisualShaderNode.hpp"
namespace godot {

class Texture;

class VisualShaderNodeTexture : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeTexture"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TextureType {
		TYPE_DATA = 0,
		TYPE_COLOR = 1,
		TYPE_NORMALMAP = 2,
	};
	enum Source {
		SOURCE_TEXTURE = 0,
		SOURCE_SCREEN = 1,
		SOURCE_2D_TEXTURE = 2,
		SOURCE_2D_NORMAL = 3,
	};

	// constants


	static VisualShaderNodeTexture *_new();

	// methods
	void set_source(const int64_t value);
	VisualShaderNodeTexture::Source get_source() const;
	void set_texture(const Ref<Texture> value);
	Ref<Texture> get_texture() const;
	void set_texture_type(const int64_t value);
	VisualShaderNodeTexture::TextureType get_texture_type() const;

};

}

#endif