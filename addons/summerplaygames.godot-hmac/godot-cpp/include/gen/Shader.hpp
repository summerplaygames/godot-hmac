#ifndef GODOT_CPP_SHADER_HPP
#define GODOT_CPP_SHADER_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Shader.hpp"

#include "Resource.hpp"
namespace godot {

class Texture;

class Shader : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "Shader"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Mode {
		MODE_SPATIAL = 0,
		MODE_CANVAS_ITEM = 1,
		MODE_PARTICLES = 2,
	};

	// constants


	static Shader *_new();

	// methods
	Shader::Mode get_mode() const;
	void set_code(const String code);
	String get_code() const;
	void set_default_texture_param(const String param, const Ref<Texture> texture);
	Ref<Texture> get_default_texture_param(const String param) const;
	bool has_param(const String name) const;

};

}

#endif