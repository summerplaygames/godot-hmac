#include "VisualShaderNodeCubeMap.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "CubeMap.hpp"


namespace godot {


VisualShaderNodeCubeMap *VisualShaderNodeCubeMap::_new()
{
	return (VisualShaderNodeCubeMap *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualShaderNodeCubeMap")());
}
void VisualShaderNodeCubeMap::set_cube_map(const Ref<CubeMap> value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "set_cube_map");
	}
	___godot_icall_void_Object(mb, (const Object *) this, value.ptr());
}

Ref<CubeMap> VisualShaderNodeCubeMap::get_cube_map() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "get_cube_map");
	}
	return Ref<CubeMap>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void VisualShaderNodeCubeMap::set_texture_type(const int64_t value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "set_texture_type");
	}
	___godot_icall_void_int(mb, (const Object *) this, value);
}

VisualShaderNodeCubeMap::TextureType VisualShaderNodeCubeMap::get_texture_type() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeCubeMap", "get_texture_type");
	}
	return (VisualShaderNodeCubeMap::TextureType) ___godot_icall_int(mb, (const Object *) this);
}

}