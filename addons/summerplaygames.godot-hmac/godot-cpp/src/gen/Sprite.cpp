#include "Sprite.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"


namespace godot {


Sprite *Sprite::_new()
{
	return (Sprite *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"Sprite")());
}
void Sprite::set_texture(const Ref<Texture> texture) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_texture");
	}
	___godot_icall_void_Object(mb, (const Object *) this, texture.ptr());
}

Ref<Texture> Sprite::get_texture() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_texture");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void Sprite::set_normal_map(const Ref<Texture> normal_map) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_normal_map");
	}
	___godot_icall_void_Object(mb, (const Object *) this, normal_map.ptr());
}

Ref<Texture> Sprite::get_normal_map() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_normal_map");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void Sprite::set_centered(const bool centered) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_centered");
	}
	___godot_icall_void_bool(mb, (const Object *) this, centered);
}

bool Sprite::is_centered() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "is_centered");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void Sprite::set_offset(const Vector2 offset) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_offset");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, offset);
}

Vector2 Sprite::get_offset() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_offset");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void Sprite::set_flip_h(const bool flip_h) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_flip_h");
	}
	___godot_icall_void_bool(mb, (const Object *) this, flip_h);
}

bool Sprite::is_flipped_h() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "is_flipped_h");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void Sprite::set_flip_v(const bool flip_v) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_flip_v");
	}
	___godot_icall_void_bool(mb, (const Object *) this, flip_v);
}

bool Sprite::is_flipped_v() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "is_flipped_v");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void Sprite::set_region(const bool enabled) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_region");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enabled);
}

bool Sprite::is_region() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "is_region");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

bool Sprite::is_pixel_opaque(const Vector2 pos) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "is_pixel_opaque");
	}
	return ___godot_icall_bool_Vector2(mb, (const Object *) this, pos);
}

void Sprite::set_region_rect(const Rect2 rect) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_region_rect");
	}
	___godot_icall_void_Rect2(mb, (const Object *) this, rect);
}

Rect2 Sprite::get_region_rect() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_region_rect");
	}
	return ___godot_icall_Rect2(mb, (const Object *) this);
}

void Sprite::set_region_filter_clip(const bool enabled) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_region_filter_clip");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enabled);
}

bool Sprite::is_region_filter_clip_enabled() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "is_region_filter_clip_enabled");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

void Sprite::set_frame(const int64_t frame) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_frame");
	}
	___godot_icall_void_int(mb, (const Object *) this, frame);
}

int64_t Sprite::get_frame() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_frame");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void Sprite::set_vframes(const int64_t vframes) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_vframes");
	}
	___godot_icall_void_int(mb, (const Object *) this, vframes);
}

int64_t Sprite::get_vframes() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_vframes");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void Sprite::set_hframes(const int64_t hframes) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "set_hframes");
	}
	___godot_icall_void_int(mb, (const Object *) this, hframes);
}

int64_t Sprite::get_hframes() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_hframes");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

Rect2 Sprite::get_rect() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sprite", "get_rect");
	}
	return ___godot_icall_Rect2(mb, (const Object *) this);
}

}