#include "CSGPrimitive.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void CSGPrimitive::set_invert_faces(const bool invert_faces) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPrimitive", "set_invert_faces");
	}
	___godot_icall_void_bool(mb, (const Object *) this, invert_faces);
}

bool CSGPrimitive::is_inverting_faces() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGPrimitive", "is_inverting_faces");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

}