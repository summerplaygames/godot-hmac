#ifndef GODOT_CPP_CSGBOX_HPP
#define GODOT_CPP_CSGBOX_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "CSGPrimitive.hpp"
namespace godot {

class Material;

class CSGBox : public CSGPrimitive {
public:

	static inline const char *___get_class_name() { return (const char *) "CSGBox"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CSGBox *_new();

	// methods
	void set_width(const double width);
	double get_width() const;
	void set_height(const double height);
	double get_height() const;
	void set_depth(const double depth);
	double get_depth() const;
	void set_material(const Ref<Material> material);
	Ref<Material> get_material() const;

};

}

#endif