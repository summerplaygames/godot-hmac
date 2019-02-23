#include "OpenSimplexNoise.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Image.hpp"


namespace godot {


OpenSimplexNoise *OpenSimplexNoise::_new()
{
	return (OpenSimplexNoise *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"OpenSimplexNoise")());
}
int64_t OpenSimplexNoise::get_seed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_seed");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void OpenSimplexNoise::set_seed(const int64_t seed) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "set_seed");
	}
	___godot_icall_void_int(mb, (const Object *) this, seed);
}

void OpenSimplexNoise::set_octaves(const int64_t octave_count) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "set_octaves");
	}
	___godot_icall_void_int(mb, (const Object *) this, octave_count);
}

int64_t OpenSimplexNoise::get_octaves() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_octaves");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

void OpenSimplexNoise::set_period(const double period) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "set_period");
	}
	___godot_icall_void_float(mb, (const Object *) this, period);
}

double OpenSimplexNoise::get_period() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_period");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void OpenSimplexNoise::set_persistence(const double persistence) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "set_persistence");
	}
	___godot_icall_void_float(mb, (const Object *) this, persistence);
}

double OpenSimplexNoise::get_persistence() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_persistence");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void OpenSimplexNoise::set_lacunarity(const double lacunarity) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "set_lacunarity");
	}
	___godot_icall_void_float(mb, (const Object *) this, lacunarity);
}

double OpenSimplexNoise::get_lacunarity() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_lacunarity");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

Ref<Image> OpenSimplexNoise::get_image(const int64_t width, const int64_t height) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_image");
	}
	return Ref<Image>::__internal_constructor(___godot_icall_Object_int_int(mb, (const Object *) this, width, height));
}

Ref<Image> OpenSimplexNoise::get_seamless_image(const int64_t size) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_seamless_image");
	}
	return Ref<Image>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, size));
}

double OpenSimplexNoise::get_noise_2d(const double x, const double y) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_2d");
	}
	return ___godot_icall_float_float_float(mb, (const Object *) this, x, y);
}

double OpenSimplexNoise::get_noise_3d(const double x, const double y, const double z) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_3d");
	}
	return ___godot_icall_float_float_float_float(mb, (const Object *) this, x, y, z);
}

double OpenSimplexNoise::get_noise_4d(const double x, const double y, const double z, const double w) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_4d");
	}
	return ___godot_icall_float_float_float_float_float(mb, (const Object *) this, x, y, z, w);
}

double OpenSimplexNoise::get_noise_2dv(const Vector2 pos) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_2dv");
	}
	return ___godot_icall_float_Vector2(mb, (const Object *) this, pos);
}

double OpenSimplexNoise::get_noise_3dv(const Vector3 pos) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("OpenSimplexNoise", "get_noise_3dv");
	}
	return ___godot_icall_float_Vector3(mb, (const Object *) this, pos);
}

}