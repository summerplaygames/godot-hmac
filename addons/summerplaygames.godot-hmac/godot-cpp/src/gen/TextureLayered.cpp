#include "TextureLayered.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Image.hpp"


namespace godot {


void TextureLayered::set_flags(const int64_t flags) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "set_flags");
	}
	___godot_icall_void_int(mb, (const Object *) this, flags);
}

int64_t TextureLayered::get_flags() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "get_flags");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

Image::Format TextureLayered::get_format() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "get_format");
	}
	return (Image::Format) ___godot_icall_int(mb, (const Object *) this);
}

int64_t TextureLayered::get_width() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "get_width");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

int64_t TextureLayered::get_height() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "get_height");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

int64_t TextureLayered::get_depth() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "get_depth");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void TextureLayered::create(const int64_t width, const int64_t height, const int64_t depth, const int64_t format, const int64_t flags) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "create");
	}
	___godot_icall_void_int_int_int_int_int(mb, (const Object *) this, width, height, depth, format, flags);
}

void TextureLayered::set_layer_data(const Ref<Image> image, const int64_t layer) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "set_layer_data");
	}
	___godot_icall_void_Object_int(mb, (const Object *) this, image.ptr(), layer);
}

Ref<Image> TextureLayered::get_layer_data(const int64_t layer) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "get_layer_data");
	}
	return Ref<Image>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, layer));
}

void TextureLayered::set_data_partial(const Ref<Image> image, const int64_t x_offset, const int64_t y_offset, const int64_t layer, const int64_t mipmap) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "set_data_partial");
	}
	___godot_icall_void_Object_int_int_int_int(mb, (const Object *) this, image.ptr(), x_offset, y_offset, layer, mipmap);
}

void TextureLayered::_set_data(const Dictionary data) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "_set_data");
	}
	___godot_icall_void_Dictionary(mb, (const Object *) this, data);
}

Dictionary TextureLayered::_get_data() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("TextureLayered", "_get_data");
	}
	return ___godot_icall_Dictionary(mb, (const Object *) this);
}

}