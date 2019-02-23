#ifndef GODOT_CPP_SHADERMATERIAL_HPP
#define GODOT_CPP_SHADERMATERIAL_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Material.hpp"
namespace godot {

class Shader;

class ShaderMaterial : public Material {
public:

	static inline const char *___get_class_name() { return (const char *) "ShaderMaterial"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static ShaderMaterial *_new();

	// methods
	void set_shader(const Ref<Shader> shader);
	Ref<Shader> get_shader() const;
	void set_shader_param(const String param, const Variant value);
	Variant get_shader_param(const String param) const;
	void _shader_changed();
	bool property_can_revert(const String name);
	Variant property_get_revert(const String name);

};

}

#endif