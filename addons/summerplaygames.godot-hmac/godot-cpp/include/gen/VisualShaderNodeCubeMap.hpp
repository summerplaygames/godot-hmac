#ifndef GODOT_CPP_VISUALSHADERNODECUBEMAP_HPP
#define GODOT_CPP_VISUALSHADERNODECUBEMAP_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "VisualShaderNodeCubeMap.hpp"

#include "VisualShaderNode.hpp"
namespace godot {

class CubeMap;

class VisualShaderNodeCubeMap : public VisualShaderNode {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualShaderNodeCubeMap"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TextureType {
		TYPE_DATA = 0,
		TYPE_COLOR = 1,
		TYPE_NORMALMAP = 2,
	};

	// constants


	static VisualShaderNodeCubeMap *_new();

	// methods
	void set_cube_map(const Ref<CubeMap> value);
	Ref<CubeMap> get_cube_map() const;
	void set_texture_type(const int64_t value);
	VisualShaderNodeCubeMap::TextureType get_texture_type() const;

};

}

#endif