#ifndef GODOT_CPP_TEXTURELAYERED_HPP
#define GODOT_CPP_TEXTURELAYERED_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Image.hpp"

#include "Resource.hpp"
namespace godot {

class Image;

class TextureLayered : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "TextureLayered"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_MIPMAPS = 1,
		FLAG_REPEAT = 2,
		FLAG_FILTER = 4,
		FLAGS_DEFAULT = 4,
	};

	// constants

	// methods
	void set_flags(const int64_t flags);
	int64_t get_flags() const;
	Image::Format get_format() const;
	int64_t get_width() const;
	int64_t get_height() const;
	int64_t get_depth() const;
	void create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags = 4);
	void set_layer_data(const Ref<Image> image, const int64_t layer);
	Ref<Image> get_layer_data(const int64_t layer) const;
	void set_data_partial(const Ref<Image> image, const int64_t x_offset, const int64_t y_offset, const int64_t layer, const int64_t mipmap = 0);
	void _set_data(const Dictionary data);
	Dictionary _get_data() const;

};

}

#endif