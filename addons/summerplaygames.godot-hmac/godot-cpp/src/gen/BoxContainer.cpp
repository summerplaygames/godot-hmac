#include "BoxContainer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


void BoxContainer::add_spacer(const bool begin) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("BoxContainer", "add_spacer");
	}
	___godot_icall_void_bool(mb, (const Object *) this, begin);
}

BoxContainer::AlignMode BoxContainer::get_alignment() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("BoxContainer", "get_alignment");
	}
	return (BoxContainer::AlignMode) ___godot_icall_int(mb, (const Object *) this);
}

void BoxContainer::set_alignment(const int64_t alignment) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("BoxContainer", "set_alignment");
	}
	___godot_icall_void_int(mb, (const Object *) this, alignment);
}

}