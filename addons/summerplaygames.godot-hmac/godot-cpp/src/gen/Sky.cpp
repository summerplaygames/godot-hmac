#include "Sky.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void Sky::set_radiance_size(const int64_t size) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sky", "set_radiance_size");
	}
	___godot_icall_void_int(mb, (const Object *) this, size);
}

Sky::RadianceSize Sky::get_radiance_size() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Sky", "get_radiance_size");
	}
	return (Sky::RadianceSize) ___godot_icall_int(mb, (const Object *) this);
}

}