#include "VisualShaderNodeUniform.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void VisualShaderNodeUniform::set_uniform_name(const String name) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeUniform", "set_uniform_name");
	}
	___godot_icall_void_String(mb, (const Object *) this, name);
}

String VisualShaderNodeUniform::get_uniform_name() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualShaderNodeUniform", "get_uniform_name");
	}
	return ___godot_icall_String(mb, (const Object *) this);
}

}