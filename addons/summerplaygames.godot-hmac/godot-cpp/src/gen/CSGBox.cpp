#include "CSGBox.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Material.hpp"


namespace godot {


CSGBox *CSGBox::_new()
{
	return (CSGBox *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CSGBox")());
}
void CSGBox::set_width(const double width) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "set_width");
	}
	___godot_icall_void_float(mb, (const Object *) this, width);
}

double CSGBox::get_width() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "get_width");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGBox::set_height(const double height) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "set_height");
	}
	___godot_icall_void_float(mb, (const Object *) this, height);
}

double CSGBox::get_height() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "get_height");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGBox::set_depth(const double depth) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "set_depth");
	}
	___godot_icall_void_float(mb, (const Object *) this, depth);
}

double CSGBox::get_depth() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "get_depth");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CSGBox::set_material(const Ref<Material> material) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "set_material");
	}
	___godot_icall_void_Object(mb, (const Object *) this, material.ptr());
}

Ref<Material> CSGBox::get_material() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CSGBox", "get_material");
	}
	return Ref<Material>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

}