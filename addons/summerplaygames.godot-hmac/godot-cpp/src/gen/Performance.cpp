#include "Performance.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


Performance *Performance::_singleton = NULL;


Performance::Performance() {
	_owner = godot::api->godot_global_get_singleton((char *) "Performance");
}


double Performance::get_monitor(const int64_t monitor) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Performance", "get_monitor");
	}
	return ___godot_icall_float_int(mb, (const Object *) this, monitor);
}

}