#include "Shape.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void Shape::set_margin(const double margin) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Shape", "set_margin");
	}
	___godot_icall_void_float(mb, (const Object *) this, margin);
}

double Shape::get_margin() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Shape", "get_margin");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

}