#include "JavaScript.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


JavaScript *JavaScript::_singleton = NULL;


JavaScript::JavaScript() {
	_owner = godot::api->godot_global_get_singleton((char *) "JavaScript");
}


Variant JavaScript::eval(const String code, const bool use_global_execution_context) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("JavaScript", "eval");
	}
	return ___godot_icall_Variant_String_bool(mb, (const Object *) this, code, use_global_execution_context);
}

}